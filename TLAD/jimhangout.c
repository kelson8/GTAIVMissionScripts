void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U110 = -1;
    l_U124 = 15.00000000;
    l_U125 = 35.00000000;
    l_U126 = 16.00000000;
    l_U127 = 0.00000000;
    l_U133 = 1000.00000000;
    l_U134 = 7500.00000000;
    l_U143 = 1;
    l_U144 = 30.00000000;
    l_U145 = 30.00000000;
    l_U146 = 2.00000000;
    l_U156 = 0.00000000;
    l_U157 = 0.00000000;
    l_U169 = 1;
    l_U170 = 0;
    l_U171 = -1;
    l_U172 = 1;
    l_U173 = -1;
    l_U174 = -1;
    l_U175 = 15.00000000;
    l_U202 = 0;
    l_U203 = -1949702649;
    l_U204 = 2075870698;
    l_U209 = 0.12000000;
    l_U369 = 0;
    l_U373 = 0.00000000;
    l_U375 = 0;
    l_U376 = 0;
    l_U377 = 0;
    l_U378 = 0;
    l_U379 = 0;
    l_U380 = 1;
    l_U381 = 0;
    l_U382 = 0;
    l_U383 = 0;
    l_U385 = 0;
    l_U386 = 0;
    l_U387 = 0;
    l_U388 = 0;
    l_U389 = 1;
    l_U390 = 0;
    l_U417 = 0;
    l_U421 = 0;
    l_U422 = -1;
    l_U423 = 1;
    l_U424 = "NONE";
    l_U451 = 0;
    l_U452 = 0;
    l_U453 = {0.00000000, 0.00000000, 0.00000000};
    l_U456 = 0.00000000;
    l_U457 = nil;
    l_U458 = 0;
    l_U459 = nil;
    l_U460 = nil;
    l_U461 = 0;
    l_U462 = 0;
    l_U463 = 0;
    l_U464 = 0;
    l_U471 = 0;
    l_U472 = 0;
    l_U500 = g_U23;
    l_U501 = 0;
    l_U502 = 0;
    l_U503 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 12;
    l_U507 = 0;
    l_U512 = 0;
    l_U514 = -1;
    l_U515 = 4;
    l_U536 = 0;
    l_U548 = 0;
    l_U549 = 0;
    l_U554 = 0;
    l_U555 = "";
    l_U556 = 0;
    l_U569 = 0;
    l_U573 = 0;
    l_U574 = 1;
    l_U575 = 0;
    l_U576 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U579 = "JOHNNY";
    l_U605 = 0.00000000;
    l_U609 = 0;
    l_U610 = 0;
    l_U611 = 0;
    l_U612 = 0;
    l_U1079 = 0;
    l_U1080 = 0;
    l_U1081 = -1;
    l_U1082 = 0;
    l_U1083 = 0;
    l_U1145 = 0.00000000;
    l_U1146 = 0;
    l_U1147 = nil;
    l_U1148 = 0;
    l_U1149 = 0;
    l_U1150 = 22;
    l_U1151 = 0;
    l_U1152 = 0;
    l_U1153 = 22;
    l_U1154 = 8;
    l_U1155 = 22;
    l_U1156 = 22;
    l_U1157 = 0;
    l_U1158 = 0;
    l_U1159 = 0;
    l_U1160 = -1;
    l_U1168 = 0;
    l_U1169 = 0;
    l_U1170 = 0;
    l_U1171 = 22;
    l_U1172 = 0;
    l_U1173 = 0;
    l_U1174 = 0;
    l_U1175 = 0;
    l_U1176 = 0;
    l_U1177 = 0;
    l_U1178 = 0;
    l_U1179 = 0;
    l_U1182 = 0;
    l_U1183 = 0;
    l_U1207 = -1;
    l_U1208 = 0;
    l_U1213 = 0;
    l_U1214 = -1;
    l_U1215 = 0;
    l_U1216 = 0;
    l_U1221 = 1;
    l_U1222 = 1;
    l_U1347 = 8;
    sub_984();
    sub_1368( -1726.58100000, 347.14640000, 24.44400000, 70.05639000, 1 );
    sub_2310();
    g_U15728[20] = 1;
    l_U383 = 1;
    l_U516 = 0;
    while (NOT l_U507)
    {
        if (NOT sub_2858())
        {
            sub_3925( "JimHangout: Perform_Mission_Loop() returned FALSE unexpectedly" );
        }
        sub_112252();
        WAIT( 0 );
    }
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "******************** JIM HANGOUT DEATHARREST\n" );
        PRINTNL();
        sub_11517();
    }
    WAIT( 0 );
    while (sub_2858())
    {
        sub_112252();
        WAIT( 0 );
    }
    PRINTSTRING( "quitting JIM HANGOUT without PASS or FAIL\n" );
    sub_11517();
    sub_25589( "JIM HANGOUT: should never reach ENDSCRIPT" );
    return;
}

void sub_984()
{
    sub_993();
    sub_1285();
    sub_1309();
    l_U501 = 1;
    l_U502 = 0;
    return;
}

void sub_993()
{
    l_U501 = 0;
    l_U502 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 12;
    l_U507 = 0;
    l_U609 = 0;
    sub_1044();
    return;
}

void sub_1044()
{
    l_U521._fU0 = 1;
    l_U521._fU4 = 0;
    l_U521._fU8 = 0;
    l_U521._fU12 = 0;
    l_U521._fU16 = 1;
    l_U521._fU20 = 0;
    l_U521._fU24 = 0;
    l_U521._fU28 = 0;
    l_U521._fU32 = 0;
    l_U521._fU36 = 0;
    l_U521._fU40 = 0;
    l_U521._fU44 = 0;
    l_U521._fU48 = 0;
    l_U521._fU52 = 64537;
    l_U521._fU56 = 64537;
    sub_1191();
    l_U536 = 0;
    return;
}

void sub_1191()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        g_U39174[I] = nil;
    }
    g_U39172 = 0;
    g_U39173 = 0;
    return;
}

void sub_1285()
{
    l_U513 = nil;
    return;
}

void sub_1309()
{
    return;
}

void sub_1368(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;
    unknown uVar8;

    # -sub_C1FFC0-0xc214c8( 0, ref l_U391 );
    iVar7 = 1;
    uVar8 = sub_1394( 0, 0 );
    g_U18635[iVar7]._fU184 = uVar8;
    l_U475 = {g_U10767[uVar8]._fU4};
    l_U478 = {g_U10767[uVar8]._fU16};
    sub_1791( uParam0, uParam1, uParam2, uParam3 );
    l_U473 = nil;
    l_U474 = nil;
    l_U481 = nil;
    sub_1857( g_U20751[iVar7] );
    sub_1888( 1 );
    sub_2091( l_U424, l_U424, l_U424, l_U424 );
    return;
}

void sub_1394(int Result, int iParam1)
{
    int iVar4;
    int iVar5;
    int I;
    int iVar7;
    int[3] iVar8;
    int iVar12;

    if (Result == iParam1)
    {
        return Result;
    }
    iVar4 = Result;
    iVar5 = iParam1;
    I = 0;
    iVar7 = 0;
    array(ref iVar8, 3);
    for ( I = iVar4; I <= iVar5; I++ )
    {
        iVar8[I] = 0;
        if (g_U10767[I]._fU0)
        {
            iVar8[I] = 1;
            iVar7++;
        }
    }
    if (iVar7 == 0)
    {
        return Result;
    }
    if (iVar7 == 1)
    {
        for ( I = iVar4; I <= iVar5; I++ )
        {
            if (iVar8[I])
            {
                return I;
            }
        }
    }
    iVar12 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar7, ref iVar12 );
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (iVar8[I])
        {
            if (iVar12 == 0)
            {
                return I;
            }
            iVar12--;
        }
    }
    SCRIPT_ASSERT( "Choose_Friend_Dropoff_Point: code should never reach this point" );
    return Result;
}

void sub_1791(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U370 = {uParam0, uParam1, uParam2};
    l_U373 = uParam3;
    return;
}

void sub_1857(unknown uParam0)
{
    l_U385 = 1;
    l_U384 = uParam0;
    return;
}

void sub_1888(boolean bParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( l_U374 )))
    {
        ADD_BLIP_FOR_CONTACT( l_U370._fU0, l_U370._fU4, l_U370._fU8, ref l_U374 );
        CHANGE_BLIP_DISPLAY( l_U374, 2 );
        CHANGE_BLIP_PRIORITY( l_U374, 1 );
        if (l_U385)
        {
            CHANGE_BLIP_SPRITE( l_U374, l_U384 );
            if (bParam0)
            {
                iVar3 = 0;
                GET_GAME_TIMER( ref iVar3 );
                CHANGE_BLIP_PRIORITY( l_U374, l_U4 );
                FLASH_BLIP( l_U374, 1 );
                l_U386 = iVar3 + 10000;
                l_U387 = 1;
            }
        }
    }
    return;
}

void sub_2091(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    StrCopy( ref l_U425._fU0, uParam0, 32 );
    StrCopy( ref l_U425._fU32, uParam1, 16 );
    StrCopy( ref l_U425._fU48, uParam2, 16 );
    StrCopy( ref l_U425._fU64, uParam3, 16 );
    l_U425._fU80 = 0;
    l_U425._fU84 = 0;
    l_U425._fU88 = 0;
    l_U425._fU92 = 0;
    l_U425._fU100 = 1;
    l_U425._fU96 = 1;
    if (COMPARE_STRING( uParam0, l_U424 ))
    {
        l_U425._fU96 = 0;
    }
    sub_2235();
    return;
}

void sub_2235()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref iVar3 );
    l_U425._fU84 = iVar2 + iVar3;
    return;
}

void sub_2310()
{
    sub_2319();
    return;
}

void sub_2319()
{
    sub_2328();
    sub_2395( 0, "FAjmA_1" );
    sub_2395( 1, "FAjmB_1" );
    sub_2395( 2, "FAlmH" );
    sub_2476( "E1FCJ3A" );
    sub_2633( 0, sub_2582(), "JOHNNY", 0 );
    StrCopy( ref l_U411, "JIM", 16 );
    l_U415 = 1;
    l_U416 = 1;
    g_U39119 = 0;
    return;
}

void sub_2328()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        StrCopy( ref l_U392[I], "", 16 );
    }
    return;
}

void sub_2395(int iParam0, unknown uParam1)
{
    if (iParam0 >= 3)
    {
        return;
    }
    StrCopy( ref l_U392[iParam0], uParam1, 16 );
    return;
}

void sub_2476(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_2493();
    return;
}

void sub_2493()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U6._fU16[I]._fU0 = nil;
        StrCopy( ref l_U6._fU16[I]._fU4, "", 32 );
        l_U6._fU344[I] = 0;
    }
    return;
}

void sub_2582()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2633(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2713( "\n PED NUMBER ", uParam0 );
    sub_2753( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2713(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2753(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_2858()
{
    if ((IS_KEYBOARD_KEY_PRESSED( 31 )) AND (l_U507))
    {
        l_U515 = 1;
        sub_2892();
        return 0;
    }
    if ((IS_KEYBOARD_KEY_PRESSED( 33 )) AND (l_U507))
    {
        l_U506 = 11;
        sub_17762();
        return 0;
    }
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 12;
    l_U1169 = 0;
    switch (l_U501)
    {
        case 0:
        sub_25589( "Mission Loop: Stage should never be 'Initialise'" );
        break;
        case 1:
        sub_26336();
        break;
        case 2:
        sub_56275();
        break;
        case 3:
        sub_56632();
        break;
        case 4:
        sub_56908();
        break;
        case 5:
        sub_58532();
        break;
        case 6:
        l_U504 = 1;
        break;
        default:
        sub_25589( "Mission_Loop: Unknown Stage ID" );
        return 0;
    }
    if (l_U504)
    {
        sub_2892();
        return 0;
    }
    if (l_U505)
    {
        sub_17762();
        return 0;
    }
    sub_58668();
    sub_98326( l_U473 );
    return 1;
}

void sub_2892()
{
    PRINTSTRING( "******************** JIM HANGOUT PASSED\n" );
    PRINTNL();
    CLEAR_WANTED_LEVEL( sub_2958() );
    sub_3001( l_U515 );
    g_U24 = l_U500;
    sub_11517();
    return;
}

void sub_2958()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3001(unknown uParam0)
{
    sub_3012( uParam0 );
    return;
}

void sub_3012(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 1;
    sub_3030();
    sub_3085( uParam0 );
    sub_3114( uParam0 );
    sub_3147( iVar3, iVar4, iVar5 );
    iVar6 = 1;
    uVar7 = g_U18635[iVar6]._fU144;
    sub_11027( iVar6, uVar7 );
    return;
}

void sub_3030()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U1341[I] = 4;
    }
    return;
}

void sub_3085(unknown uParam0)
{
    l_U1341[1] = uParam0;
    return;
}

void sub_3114(unknown uParam0)
{
    l_U1341[0] = uParam0;
    return;
}

void sub_3147(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 1;
    sub_3178( iVar5, uParam0, uParam1, uParam2, "Friend_2" );
    return;
}

void sub_3178(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_3274( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_3274( ref cVar9 );
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
            sub_3274( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_3274( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_3274( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_3274( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_3851( uParam0, iVar7 );;;
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
    if (NOT (sub_4320( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_2958() );
    sub_8628();
    bVar28 = true;
    uVar29 = sub_3851( uParam0, iVar7 );
    uVar30 = sub_9270( uParam0 );
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
                sub_9638( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((g_U12303) AND (NOT bVar28))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_10072();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_10157( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_10236( uParam0 );
                sub_10409( 0 );
                sub_10551( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_10674();
        }
    }
    if (bParam2)
    {
        sub_10072();
        sub_10773();
        sub_10409( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_10072();
        sub_10825();
        sub_10409( 0 );
        sub_10551( uVar30, 0 );
    }
    sub_10876();
    return;
}

void sub_3274(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_3851(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_3925( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_3925(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_4320(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_4416( uParam1 );
        break;
        case 1:
        bVar8 = sub_5111( uParam1 );
        break;
        case 2:
        bVar8 = sub_5844( uParam1 );
        break;
        case 3:
        bVar8 = sub_6081( uParam1 );
        break;
        case 4:
        bVar8 = sub_6247( uParam1 );
        break;
        case 5:
        bVar8 = sub_6446( uParam1 );
        break;
        case 6:
        bVar8 = sub_6641( uParam1 );
        break;
        case 7:
        bVar8 = sub_6846( uParam1 );
        break;
        case 8:
        bVar8 = sub_7051( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_5459( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_3851( uParam0, uParam1 );
    if (bParam3)
    {
        sub_7337( uVar9, uParam0 );
    }
    return 1;
}

int sub_4416(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_4513( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4513( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_4513( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_4513( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_4513( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_4513( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_5018( "Contact 1", 1 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5018( "Contact 1", 0 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_4513(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_4524( uParam1 );
    sub_4698( uParam0, 0, uParam2 );
    sub_4698( uParam0, 1, uParam3 );
    sub_4698( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_3030();
    return;
}

void sub_4524(unknown uParam0)
{
    ADD_SCORE( sub_2958(), uParam0 );
    sub_4549( uParam0 );
    return;
}

void sub_4549(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_3925( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_4698(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_5018(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_5111(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4513( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4513( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_4513( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4513( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_4513( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_4513( iVar3, 0, sub_5337(), sub_5603(), 0, 0 );
        break;
        default:
        sub_5018( "Contact 2", 1 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5018( "Contact 2", 0 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5337()
{
    switch (l_U1341[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_5459( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_5459(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_5603()
{
    switch (l_U1341[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_5459( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_5844(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4513( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4513( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_4513( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4513( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_5018( "Contact 3", 1 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5018( "Contact 3", 0 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6081(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4513( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4513( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_5018( "Friend 4", 1 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5018( "Friend 4", 0 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6247(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4513( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4513( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4513( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_5018( "Contact 5", 1 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5018( "Contact 5", 0 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6446(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4513( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4513( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4513( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_5018( "Contact 6", 1 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5018( "Contact 6", 0 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6641(unknown uParam0)
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
        sub_4513( iVar3, 0, sub_5337(), sub_5603(), 0, 0 );
        break;
        default:
        sub_5018( "Friend 7", 1 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5018( "Friend 7", 0 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6846(unknown uParam0)
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
        sub_4513( iVar3, 0, sub_5337(), sub_5603(), 0, 0 );
        break;
        default:
        sub_5018( "Friend 8", 1 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5018( "Friend 8", 0 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7051(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4513( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_5018( "Contact 9", 1 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_5018( "Contact 9", 0 );
        sub_4513( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_7337(int iParam0, int iParam1)
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
    if (sub_7398( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_8116( iParam1 );
    }
    return;
}

int sub_7398(int iParam0, int iParam1)
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
            sub_7538( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_7538(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_7708( 0 );
    return;
}

void sub_7708(boolean bParam0)
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
        sub_7953();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_7953()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_8116(int iParam0)
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
        sub_8347( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_8347( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_8347( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_8347( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_8347( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_8347( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_8347(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_8628()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_8666( 5, g_U572[I] )) == 1))
        {
            if ((sub_8666( 1, g_U572[I] )) != 0)
            {
                sub_8952( I );
            }
        }
    }
    if (NOT sub_9118())
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

int sub_8666(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_8952(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_9037( g_U572 - 1 );
    return;
}

void sub_9037(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_9118()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_8666( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_9270(unknown uParam0)
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
    sub_3925( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_9638(unknown uParam0, unknown uParam1)
{
    sub_9657( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_9657(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_10072()
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

int sub_10157(int iParam0, int iParam1)
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

void sub_10236(unknown uParam0)
{
    sub_10245();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_10245()
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

void sub_10409(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_10460( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_10460(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_10551(int iParam0, boolean bParam1)
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

void sub_10674()
{
    sub_10683();
    return;
}

void sub_10683()
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

void sub_10773()
{
    sub_10683();
    return;
}

void sub_10825()
{
    sub_10683();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_10876()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_10898();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_10898()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_11027(unknown uParam0, unknown uParam1)
{
    int iVar4;
    unknown uVar5;
    int I;
    int iVar7;

    if (g_U0)
    {
        return;
    }
    iVar4 = 1;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar4 = 0;
        break;
        default: return;
    }
    switch (uParam1)
    {
        case 6:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 18:
        case 19:
        case 20:
        case 21: break;
        case 17: return;
    }
    return;
    uVar5 = uParam1;
    if (NOT (IS_BIT_SET( ProtectedGet(g_U38805[iVar4]._fU0), uVar5 )))
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U38805[iVar4]._fU4), uVar5 ))
    {
        return;
    }
    SET_BIT( 1, uVar5 );
    I = 0;
    for ( I = 0; I < 22; I++ )
    {
        if (IS_BIT_SET( ProtectedGet(g_U38805[iVar4]._fU0), I ))
        {
            if (NOT (IS_BIT_SET( ProtectedGet(g_U38805[iVar4]._fU4), I )))
            {
                return;
            }
        }
    }
    iVar7 = 0;
    if (NOT g_U38801[iVar4]._fU0)
    {
        iVar7 = ProtectedGet(g_U38808[iVar4]._fU8);
        if (iVar7 > 0)
        {
            sub_7538( 3, iVar7 );
            g_U38801[iVar4]._fU0 = 1;
            return;
        }
    }
    return;
    break;
    2;
    1;
    ref g_U38805[iVar4]._fU4;
    1;
    ref g_U38805[iVar4]._fU4;
    break;
}

void sub_11517()
{
    sub_11536( l_U549, l_U1347 );
    sub_13865( l_U473 );
    sub_15807( 1 );
    sub_16716();
    sub_17206();
    sub_17529( 1, 14, l_U507 );
    g_U2771 = 0;
    g_U15728[20] = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_11536(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int I;
    int[22] iVar6;
    boolean bVar29;
    int iVar30;
    boolean bVar31;
    boolean bVar32;
    unknown uVar33;
    int iVar34;

    if (g_U816)
    {
        return;
    }
    switch (uParam1)
    {
        case 4:
        case 5: return;
    }
    iVar4 = 0;
    if (l_U1168 == 0)
    {
        if (bParam0)
        {
            iVar4 = 2;
            sub_11613( iVar4 );
        }
        return;
    }
    I = 0;
    array(ref iVar6, 22);
    for ( I = 0; I < 22; I++ )
    {
        iVar6[I] = 0;
    }
    bVar29 = true;
    if ((l_U1150 >= 22) || (l_U1150 < 0))
    {
        bVar29 = false;
    }
    if (bVar29)
    {
        iVar6[l_U1150] = 1;
    }
    iVar30 = g_U12306[l_U1207]._fU40[1];
    bVar31 = false;
    for ( I = 0; I < l_U1168; I++ )
    {
        if ((l_U1161[I]._fU0 >= 0) AND (l_U1161[I]._fU0 < 22))
        {
            bVar31 = iVar6[l_U1161[I]._fU0];
            sub_12096( I, bVar31 );
            iVar6[l_U1161[I]._fU0] = 1;
        }
    }
    if (IS_PLAYER_PLAYING( sub_2958() ))
    {
        if (bParam0)
        {
            sub_11661( l_U1207, 1, 1 );
        }
    }
    if (l_U1168 == 3)
    {
        sub_11661( l_U1207, 1, 1 );
    }
    if ((bParam0) AND (l_U1168 == 3))
    {
        bVar32 = true;
        for ( I = 0; I < 22; I++ )
        {
            iVar6[I] = 0;
        }
        if (bVar29)
        {
            iVar6[l_U1150] = 1;
        }
        for ( I = 0; I < l_U1168; I++ )
        {
            bVar31 = iVar6[l_U1161[I]._fU0];
            if (bVar31)
            {
                bVar32 = false;
            }
            iVar6[l_U1161[I]._fU0] = 1;
        }
        if (bVar32)
        {
            sub_11661( l_U1207, 1, 1 );
        }
    }
    uVar33 = sub_9270( l_U1207 );
    for ( I = 0; I < l_U1168; I++ )
    {
        sub_11027( uVar33, l_U1161[I]._fU0 );
    }
    if (l_U1183)
    {
        g_U18635[uVar33]._fU172 = 1;
    }
    iVar34 = g_U12306[l_U1207]._fU40[1];
    iVar4 = iVar34 - iVar30;
    if (iVar4 > 0)
    {
        iVar4 *= 75;
        iVar4 = iVar4 / 100;
        if (bParam0)
        {
            iVar4 += 2;
        }
        sub_11613( iVar4 );
    }
    return;
}

void sub_11613(unknown uParam0)
{
    int iVar3;

    iVar3 = 1;
    if (NOT (iVar3 == l_U1207))
    {
        if (g_U38847[0]._fU0)
        {
            sub_11661( iVar3, 1, uParam0 );
        }
    }
    iVar3 = 6;
    if (NOT (iVar3 == l_U1207))
    {
        if (g_U38847[1]._fU0)
        {
            sub_11661( iVar3, 1, uParam0 );
        }
    }
    iVar3 = 7;
    if (NOT (iVar3 == l_U1207))
    {
        if (g_U38847[2]._fU0)
        {
            sub_11661( iVar3, 1, uParam0 );
        }
    }
    return;
}

void sub_11661(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_12096(int iParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;

    if (iParam0 >= l_U1168)
    {
        SCRIPT_ASSERT( "Store_Like_For_Alternative_Activity: array pos greater than max activities performed" );
        return;
    }
    uVar4 = l_U1161[iParam0]._fU0;
    uVar5 = l_U1161[iParam0]._fU4;
    iVar6 = 4;
    switch (uVar4)
    {
        case 6:
        iVar6 = sub_12335( uVar5 );
        break;
        case 7:
        iVar6 = sub_12415( uVar5 );
        break;
        case 10:
        iVar6 = sub_12495( uVar5 );
        break;
        case 11:
        iVar6 = sub_12575( uVar5 );
        break;
        case 12:
        iVar6 = sub_12647( uVar5 );
        break;
        case 16:
        iVar6 = sub_12719( uVar5 );
        break;
        case 18:
        iVar6 = sub_12799( uVar5 );
        break;
        case 20:
        iVar6 = sub_12879( uVar5 );
        break;
        case 21:
        iVar6 = sub_12955( uVar5 );
        break;
        case 9:
        iVar6 = sub_13039( uVar5 );
        break;
        default: SCRIPT_ASSERT( "Store_Like_For_Alternative_Activity: Unknown phone activity ID" );
    }
    uVar7 = sub_13193( iVar6, uParam1 );
    PRINTSTRING( "KGMSTAT ************* --> ADD ACT: " );
    PRINTINT( iParam0 );
    PRINTNL();
    sub_11661( l_U1207, 1, uVar7 );
    return;
}

int sub_12335(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_12415(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_12495(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_12575(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 1: return 2;
    }
    return 4;
}

int sub_12647(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 2: return 1;
        case 1: return 2;
    }
    return 4;
}

int sub_12719(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_12799(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_12879(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_12955(unknown uParam0)
{
    switch (uParam0)
    {
        case 7:
        case 1:
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_13039(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 0:
        case 2: return 1;
        case 3: return 3;
    }
    return 4;
}

int sub_13193(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        switch (uParam0)
        {
            case 0: return 5;
            case 1: return 3;
            case 2: return 1;
            case 3: return 0;
        }
        return 0;
    }
    switch (uParam0)
    {
        case 0: return 3;
        case 1: return 1;
        case 2: return 1;
        case 3: return 0;
    }
    return 0;
    return 0;
}

void sub_13865(unknown uParam0)
{
    int iVar3;

    if (l_U1179)
    {
        SET_CAM_ACTIVE( l_U1180, 0 );
        SET_CAM_PROPAGATE( l_U1180, 0 );
        DESTROY_ALL_CAMS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        iVar3 = 0;
        END_CAM_COMMANDS( ref iVar3 );
        if (NOT (iVar3 == 0))
        {
            SCRIPT_ASSERT( "Camera Scopes should now be 0 when ending camera use" );
        }
        l_U1179 = 0;
    }
    if (l_U1182)
    {
        sub_14026( 1 );
    }
    g_U10509 = 1;
    g_U10648 = 1;
    sub_15475( l_U1150 );
    sub_15761( l_U1207 );
    if (l_U1175)
    {
        g_U10507 = l_U1174;
    }
    return;
}

void sub_14026(unknown uParam0)
{
    int I;

    if ((g_U10499) AND (uParam0))
    {
        sub_14049( 6 );
    }
    else
    {
        sub_14049( 0 );
    }
    sub_14369( -1, 0 );
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_DEAD( g_U38857[I]._fU0 )))
            {
                sub_14369( I, 0 );
            }
        }
    }
    g_U10499 = 0;
    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return;
    }
    sub_15301();
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_DEAD( g_U38857[I]._fU0 )))
            {
                SET_PED_IS_DRUNK( g_U38857[I]._fU0, 0 );
            }
        }
    }
    return;
}

void sub_14049(unknown uParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    GET_ROOT_CAM( ref uVar3 );
    iVar4 = 0;
    switch (uParam0)
    {
        case 0:
        iVar4 = 0;
        SET_DRUNK_CAM( uVar3, 0.00000000, iVar4 );
        break;
        case 1:
        iVar4 = 300000;
        SET_DRUNK_CAM( uVar3, 0.20000000, iVar4 );
        break;
        case 2:
        iVar4 = 240000;
        SET_DRUNK_CAM( uVar3, 0.30000000, iVar4 );
        break;
        case 3:
        iVar4 = 210000;
        SET_DRUNK_CAM( uVar3, 0.45000000, iVar4 );
        break;
        case 4:
        iVar4 = 180000;
        SET_DRUNK_CAM( uVar3, 0.60000000, iVar4 );
        break;
        case 5:
        iVar4 = 180000;
        SET_DRUNK_CAM( uVar3, 0.70000000, iVar4 );
        break;
        case 6:
        iVar4 = 60000;
        SET_DRUNK_CAM( uVar3, 0.00000000, -iVar4 );
        break;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    l_U1082 = iVar5 + iVar4;
    return;
}

void sub_14369(unknown uParam0, unknown uParam1)
{
    int Result;

    Result = sub_14380( uParam1 );
    if (Result == 0)
    {
        sub_14512( uParam0 );
        return Result;
    }
    sub_14727( uParam0, Result );
    return Result;
}

int sub_14380(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 60000;
        case 2: return 90000;
        case 3: return 120000;
        case 4: return 140000;
        case 5: return 180000;
    }
    return 0;
}

void sub_14512(unknown uParam0)
{
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

    uVar3 = sub_14523( uParam0 );
    if (IS_CHAR_INJURED( uVar3 ))
    {
        return;
    }
    if (NOT (IS_PED_RAGDOLL( uVar3 )))
    {
        return;
    }
    uVar4 = {sub_14609( uParam0 )};
    if (uVar4._fU20)
    {
        return;
    }
    CREATE_NM_MESSAGE( 0, 79 );
    SEND_NM_MESSAGE( uVar3 );
    SWITCH_PED_TO_ANIMATED( uVar3, 0 );
    return;
}

void sub_14523(int iParam0)
{
    if (iParam0 == -1)
    {
        return sub_2582();
    }
    return g_U38857[iParam0]._fU0;
}

void sub_14609(int iParam0)
{
    unknown Result;
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

    if (iParam0 == -1)
    {
        Result = {l_U1084};
    }
    else
    {
        Result = {l_U1099[iParam0]};
    }
    return Result;
}

void sub_14727(int iParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    uVar4 = sub_14523( iParam0 );
    if (IS_CHAR_INJURED( uVar4 ))
    {
        return;
    }
    if (IS_CHAR_IN_ANY_CAR( uVar4 ))
    {
        return;
    }
    iVar5 = uParam1;
    if (iVar5 > 65534)
    {
        iVar5 = 65534;
    }
    SWITCH_PED_TO_RAGDOLL( uVar4, 0, iVar5, 1, 1, 1, 0 );
    if (NOT (IS_PED_RAGDOLL( uVar4 )))
    {
        return;
    }
    CREATE_NM_MESSAGE( 1, 79 );
    SET_NM_MESSAGE_FLOAT( 89, 8.70000000 );
    SET_NM_MESSAGE_FLOAT( 98, 0.60000000 );
    SET_NM_MESSAGE_FLOAT( 81, 8.39999900 );
    SET_NM_MESSAGE_FLOAT( 82, 0.70000000 );
    SET_NM_MESSAGE_INT( 85, 65535 );
    SET_NM_MESSAGE_BOOL( 95, 1 );
    SET_NM_MESSAGE_FLOAT( 101, 0.80000000 );
    SET_NM_MESSAGE_FLOAT( 102, 999.00000000 );
    SET_NM_MESSAGE_FLOAT( 84, 1.40000000 );
    SET_NM_MESSAGE_FLOAT( 83, 1.95000000 );
    SET_NM_MESSAGE_FLOAT( 94, 1.00000000 );
    SET_NM_MESSAGE_FLOAT( 110, 0.00000000 );
    SET_NM_MESSAGE_FLOAT( 111, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 112, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 108, 0.00000000 );
    SET_NM_MESSAGE_FLOAT( 113, 0.60000000 );
    SET_NM_MESSAGE_FLOAT( 109, 0.20000000 );
    SET_NM_MESSAGE_FLOAT( 91, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 93, 0.10000000 );
    SET_NM_MESSAGE_FLOAT( 106, -0.30000000 );
    SEND_NM_MESSAGE( uVar4 );
    if (iParam0 == -1)
    {
        GIVE_PLAYER_RAGDOLL_CONTROL( sub_2958(), 1 );
    }
    return;
}

void sub_15301()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar2 );
        SET_VEHICLE_STEER_BIAS( uVar2, 0.00000000 );
    }
    return;
}

void sub_15475(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 65; I++ )
    {
        if (sub_15503( I ))
        {
            if (DOES_BLIP_EXIST( g_U12169[I]._fU4 ))
            {
                sub_15686( ref g_U12169[I]._fU4 );
            }
        }
    }
    return;
}

int sub_15503(int iParam0)
{
    boolean bVar3;
    int iVar4;
    unknown uVar5;

    bVar3 = false;
    iVar4 = 0;
    switch (g_U11583[iParam0]._fU12)
    {
        case 11:
        bVar3 = true;
        break;
        case 8: return 1;
    }
    return 0;
    if (bVar3)
    {
        uVar5 = g_U11583[iParam0]._fU16;
        switch (uVar5)
        {
            case 20:
            case 15: return 0;
        }
        if ((iParam0 == 30) || (iParam0 == 2))
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

void sub_15686(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_15761(unknown uParam0)
{
    return;
}

void sub_15807(boolean bParam0)
{
    sub_15816();
    sub_16011();
    sub_16052();
    sub_16082( 1 );
    REMOVE_DECISION_MAKER( l_U391 );
    if (NOT (COMPARE_STRING( ref l_U425._fU0, l_U424 )))
    {
        REMOVE_ANIMS( ref l_U425._fU0 );
    }
    l_U375 = 0;
    if ((NOT (IS_CHAR_DEAD( l_U473 ))) AND (NOT (l_U473 == nil)))
    {
        if (IS_GROUP_MEMBER( l_U473, sub_16526() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U473 );
        }
        if (bParam0)
        {
            if (IS_CHAR_INJURED( l_U473 ))
            {
                SET_PED_DIES_WHEN_INJURED( l_U473, 1 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U473 );
            }
            else
            {
                DELETE_CHAR( ref l_U473 );
            }
        }
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    return;
}

void sub_15816()
{
    if (g_U38847[0]._fU0)
    {
        sub_15842();
        return;
    }
    sub_15921( ref l_U474 );
    return;
}

void sub_15842()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (DOES_BLIP_EXIST( g_U38847[I]._fU8 ))
            {
                sub_15921( ref g_U38847[I]._fU8 );
            }
        }
    }
    return;
}

void sub_15921(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_16011()
{
    REMOVE_BLIP( l_U374 );
    l_U386 = 0;
    l_U387 = 0;
    return;
}

void sub_16052()
{
    REMOVE_BLIP( l_U481 );
    return;
}

void sub_16082(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_16105( uParam0 ) );
    return;
}

int sub_16105(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_3925( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_16526()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_16716()
{
    sub_16725();
    return;
}

void sub_16725()
{
    int iVar2;

    if (l_U516)
    {
        DELETE_WIDGET_GROUP( l_U517 );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U513 );
    if (l_U512)
    {
        SET_CAM_ACTIVE( l_U508[1], 0 );
        SET_CAM_PROPAGATE( l_U508[1], 0 );
        sub_16809();
    }
    if (IS_PLAYER_PLAYING( sub_2958() ))
    {
        SET_PLAYER_CONTROL( sub_2958(), 1 );
    }
    CLEAR_HELP();
    sub_16904();
    iVar2 = 0;
    sub_17050( iVar2 );
    return;
}

void sub_16809()
{
    int iVar2;

    DESTROY_ALL_CAMS();
    SET_USE_HIGHDOF( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    iVar2 = 0;
    END_CAM_COMMANDS( ref iVar2 );
    l_U512 = 0;
    return;
}

void sub_16904()
{
    int I;

    g_U26739._fU0 = 19;
    g_U26739._fU4 = 12;
    g_U26739._fU8 = 12;
    g_U26739._fU12 = 12;
    g_U26739._fU16 = 8;
    g_U26739._fU20 = 8;
    g_U26739._fU24 = 0;
    g_U26739._fU28 = 0;
    g_U26739._fU32 = 0;
    g_U26739._fU84 = 0;
    I = 0;
    for ( I = 0; I < 11; I++ )
    {
        g_U26739._fU36[I] = 0;
    }
    return;
}

void sub_17050(unknown uParam0)
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

void sub_17206()
{
    sub_17215();
    return;
}

void sub_17215()
{
    sub_17224();
    return;
}

void sub_17224()
{
    g_U12303 = 0;
    if (g_U816)
    {
        sub_17249();
        return;
    }
    sub_17375();
    return;
}

void sub_17249()
{
    if (COMPARE_STRING( ref g_U10987, "FPASS" ))
    {
        StrCopy( ref g_U10987, "", 16 );
        return;
    }
    sub_17294();
    return;
}

void sub_17294()
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

void sub_17375()
{
    if (COMPARE_STRING( ref g_U10987, "FPASS" ))
    {
        StrCopy( ref g_U10987, "", 16 );
        return;
    }
    sub_17420();
    return;
}

void sub_17420()
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

void sub_17529(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;

    if (g_U816)
    {
        return;
    }
    iVar5 = 300000;
    if (g_U0)
    {
        iVar5 = 30000;
    }
    iVar6 = 60000;
    if (g_U0)
    {
        iVar6 = 20000;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    g_U18635[uParam0]._fU152 = iVar7 + iVar5;
    g_U18635[uParam0]._fU156 = iVar7 + iVar6;
    if (bParam2)
    {
        g_U18635[uParam0]._fU148 = uParam1;
        return;
    }
    g_U18635[uParam0]._fU148 = 22;
    return;
}

void sub_17762()
{
    int iVar2;

    PRINTSTRING( ".................... JIM HANGOUT FAILED" );
    iVar2 = 0;
    switch (l_U506)
    {
        case 0:
        iVar2 = sub_17872( l_U473 );
        sub_17953( iVar2, l_U473 );
        break;
        case 7:
        sub_23133( l_U473, 1 );
        break;
        case 11:
        PRINTSTRING( ".......................(forced failure)\n" );
        break;
        case 12:
        sub_25589( "Unknown reason for failure" );
        break;
        default: sub_25589( "Unrecognised Fail ID" );
    }
    PRINTNL();
    sub_25790( iVar2 );
    sub_11517();
    return;
}

void sub_17872(unknown uParam0)
{
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_2582() )))
        {
            Result = HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_2582(), 0 );
        }
    }
    return Result;
}

void sub_17953(unknown uParam0, unknown uParam1)
{
    sub_17966( uParam0, uParam1 );
    return;
}

void sub_17966(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 1;
    iVar5 = 1;
    sub_17985( iVar4, uParam1 );
    sub_22792( iVar4, uParam1, iVar5 );
    if (bParam0)
    {
        sub_22912( iVar5 );
    }
    return;
}

void sub_17985(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    if (NOT g_U18635[uParam0]._fU704._fU0)
    {
        return;
    }
    if (g_U18635[uParam0]._fU704._fU4)
    {
        return;
    }
    uVar4 = sub_18047( uParam0 );
    if (g_U14838[uVar4]._fU80._fU0 == 1)
    {
        sub_18276( uVar4 );
    }
    if (g_U14838[uVar4]._fU0._fU0 == 1)
    {
        sub_22255( uVar4 );
    }
    if (g_U14838[uVar4]._fU160._fU0)
    {
        if (g_U14838[uVar4]._fU160._fU8)
        {
            g_U15862[uParam0]._fU8[0]._fU0[5] = 0;
        }
        g_U14838[uVar4]._fU160._fU108._fU0 = 0;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U18635[uParam0]._fU704._fU4 = 1;
    g_U18635[uParam0]._fU704._fU168 = iVar5 + g_U18635[uParam0]._fU704._fU164;
    g_U18635[uParam0]._fU704._fU184 = uParam1;
    sub_22761( "CONTACT HOSPITALISED\n" );
    return;
}

int sub_18047(unknown uParam0)
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
    sub_3925( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 11;
}

void sub_18276(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14838[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14838[uParam0]._fU80._fU0 = 0;
        sub_18397( uParam0 );
        sub_20390( uParam0, 0 );
        break;
        case 2:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_20676( uParam0, iVar4 );
        break;
        case 3:
        g_U14838[uParam0]._fU80._fU0 = 6;
        sub_20676( uParam0, iVar4 );
        break;
        case 6:
        sub_20676( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_21123( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_3925( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_18397(unknown uParam0)
{
    if ((NOT (g_U14838[uParam0]._fU80._fU0 == 1)) AND (NOT (g_U14838[uParam0]._fU80._fU0 == 0)))
    {
        sub_18454( uParam0 );
        sub_18604( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU80._fU0 == 1)
    {
        sub_18454( uParam0 );
        sub_18798( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU80._fU0 == 0)
    {
        sub_18604( uParam0 );
    }
    if ((NOT (g_U14838[uParam0]._fU0._fU0 == 1)) AND (NOT (g_U14838[uParam0]._fU0._fU0 == 0)))
    {
        sub_18454( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU0 == 1)
    {
        sub_19622( uParam0 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        sub_18454( uParam0 );
    }
    return;
}

void sub_18454(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14838[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U14838[uParam0]._fU0._fU64 );
    g_U14838[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U14838[uParam0]._fU0._fU68;
    g_U14838[uParam0]._fU0._fU68 = 17;
    CLEAR_BIT( ref g_U10686[uVar3]._fU0, 3 );
    return;
}

void sub_18604(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U14838[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U14838[uParam0]._fU80._fU64 );
    g_U14838[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U14838[uParam0]._fU80._fU68;
    g_U14838[uParam0]._fU80._fU68 = 17;
    CLEAR_BIT( ref g_U10686[uVar3]._fU0, 3 );
    return;
}

void sub_18798(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_18604( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10685;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14838[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14838[uParam0]._fU80._fU4;
        iVar8 = sub_3851( uParam0, iVar7 );
        iVar9 = g_U20913[iVar8]._fU16;
        vVar3 = {g_U10686[iVar9]._fU4};
        uVar6 = g_U10686[iVar9]._fU16;
        bVar10 = true;
        g_U14838[uParam0]._fU80._fU68 = iVar9;
        SET_BIT( ref g_U10686[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_3925( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14838[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14838[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU80._fU64, l_U3 );
        if ((NOT g_U14838[uParam0]._fU80._fU72) || (NOT g_U26737._fU4))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14838[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U14838[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU80._fU64, l_U4 );
        sub_19480( g_U14838[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

void sub_19480(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    return;
}

void sub_19622(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_18454( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U10685;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U14838[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U14838[uParam0]._fU0._fU4;
        iVar8 = sub_3851( uParam0, iVar7 );
        iVar9 = g_U20913[iVar8]._fU16;
        vVar3 = {g_U10686[iVar9]._fU4};
        uVar6 = g_U10686[iVar9]._fU16;
        bVar10 = true;
        g_U14838[uParam0]._fU0._fU68 = iVar9;
        SET_BIT( ref g_U10686[iVar9]._fU0, 3 );
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_3925( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U14838[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U14838[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU0._fU64, l_U3 );
        if ((NOT g_U14838[uParam0]._fU0._fU72) || (NOT g_U26737._fU4))
        {
            CHANGE_BLIP_DISPLAY( g_U14838[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U14838[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U14838[uParam0]._fU0._fU64, l_U4 );
        if (l_U1222)
        {
            FLASH_BLIP( g_U14838[uParam0]._fU0._fU64, 1 );
            l_U1222 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U14838[uParam0]._fU0._fU64, 1 );
            l_U1222 = 1;
        }
        sub_19480( g_U14838[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_20390(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14838[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U14838[uParam0]._fU80._fU64 );
        }
    }
    g_U14838[uParam0]._fU80._fU0 = 0;
    g_U14838[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U14838[uParam0]._fU80._fU24, "", 32 );
    g_U14838[uParam0]._fU80._fU56 = 10;
    g_U14838[uParam0]._fU80._fU60 = nil;
    g_U14838[uParam0]._fU80._fU64 = nil;
    g_U14838[uParam0]._fU80._fU68 = 17;
    g_U14838[uParam0]._fU80._fU72 = 1;
    g_U14838[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_20676(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[uParam0]._fU80._fU24 );
        sub_20390( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U14838[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U14838[uParam0]._fU0._fU24 );
    sub_20814( uParam0, 0 );;
    sub_18397( uParam0 );
    return;
}

void sub_20814(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U14838[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U14838[uParam0]._fU0._fU64 );
        }
    }
    g_U14838[uParam0]._fU0._fU0 = 0;
    g_U14838[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U14838[uParam0]._fU0._fU24, "", 32 );
    g_U14838[uParam0]._fU0._fU56 = 10;
    g_U14838[uParam0]._fU0._fU60 = nil;
    g_U14838[uParam0]._fU0._fU64 = nil;
    g_U14838[uParam0]._fU0._fU68 = 17;
    g_U14838[uParam0]._fU0._fU72 = 1;
    g_U14838[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_21123(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U14838[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U14838[iParam0]._fU80._fU60 );
        }
        sub_20390( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U14838[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U14838[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U14838[iParam0]._fU0._fU56;
    if ((iVar5 == 6) || (iVar5 == 5))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U12306[iParam0]._fU28 = 1;
    }
    sub_20814( iParam0, 0 );
    if (bVar4)
    {
        sub_21332();
    }
    g_U12306[iParam0]._fU12 = 0;;
    if (iParam0 == 9)
    {
        sub_21388();
        return;
    }
    sub_18397( iParam0 );
    if (bVar4)
    {
        g_U12303 = 0;
    }
    if (bVar4)
    {
        sub_22053( iParam0 );
    }
    if (g_U3)
    {
        if (g_U4)
        {
            WAIT( 1500 );
            g_U5 = 1;
        }
    }
    return;
}

void sub_21332()
{
    unknown uVar2;

    uVar2 = g_U10986;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_21388()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_2958() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
        {
            if (NOT (g_U15852._fU24 == -1))
            {
                uVar3 = g_U26538[g_U15852._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_2582(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15852._fU24;
    sub_21500();
    if (bVar2)
    {
        g_U15852._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref g_U15852._fU32 );
        g_U15852._fU24 = uVar4;
    }
    l_U1221 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_2958(), 0 );
    sub_21655();
    if (IS_PLAYER_PLAYING( sub_2958() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
        {
            SET_PLAYER_CONTROL( sub_2958(), 1 );
        }
    }
    return;
}

void sub_21500()
{
    g_U15852._fU0 = 0;
    g_U15852._fU4 = 0;
    g_U15852._fU8 = 0;
    g_U15852._fU12 = 0;
    g_U15852._fU16 = 0;
    g_U15852._fU20 = 0;
    g_U15852._fU24 = -1;
    g_U15852._fU32 = nil;
    g_U15852._fU28 = 0;
    return;
}

void sub_21655()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2958() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_2582() ))
    {
        l_U1221 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_2958(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_2582() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_2582(), -488123221 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_2582(), 837858166 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15852._fU20)
                {
                    bVar4 = true;
                }
                else
                {
                    bVar4 = false;
                }
            }
            else
            {
                bVar4 = true;
            }
        }
        else
        {
            bVar4 = true;
        }
    }
    else
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        if (l_U1221)
        {
            return;
        }
        l_U1221 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_2958(), 1 );
    }
    else if (NOT l_U1221)
    {
        return;
    }
    l_U1221 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_2958(), 0 );;
    return;
}

void sub_22053(int iParam0)
{
    if (NOT (g_U20901 == iParam0))
    {
        return;
    }
    g_U20900 = 1;
    return;
}

void sub_22255(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U14838[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U14838[uParam0]._fU0._fU0 = 0;
        sub_18397( uParam0 );
        sub_20814( uParam0, 0 );
        break;
        case 2:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_20676( uParam0, iVar4 );
        break;
        case 3:
        g_U14838[uParam0]._fU0._fU0 = 6;
        sub_20676( uParam0, iVar4 );
        break;
        case 6:
        sub_20676( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_21123( uParam0, iVar4 );
        g_U5 = 0;
        break;
        default:
        sub_3925( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_22761(unknown uParam0)
{
    return;
}

void sub_22792(unknown uParam0, int iParam1, unknown uParam2)
{
    if (iParam1 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam1 )))
    {
        return;
    }
    g_U38680._fU0 = uParam0;
    g_U38680._fU4 = iParam1;
    g_U38680._fU8 = uParam2;
    g_U38680._fU12 = 0;
    if (g_U12303)
    {
        g_U38680._fU12 = 1;
    }
    return;
}

void sub_22912(unknown uParam0)
{
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
        case 8:
        sub_4513( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_3274( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_23133(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = g_U18635[uParam1]._fU104;
    uVar5 = g_U18635[uParam1]._fU136;
    sub_23178( uVar4 );
    sub_23282( uVar4, uParam1, uVar5, 0 );
    uVar6 = sub_18047( uParam1 );
    sub_25321( uVar6 );
    return;
}

void sub_23178(unknown uParam0)
{
    g_U38472._fU12[uParam0]._fU0 = 0;
    g_U38472._fU12[uParam0]._fU4 = 0;
    g_U38472._fU12[uParam0]._fU12 = 22;
    g_U38472._fU12[uParam0]._fU16 = 0;
    g_U38472._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_23282(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 6;
    sub_23307( uParam0, uParam1, uParam2, uParam3, iVar6, 64537 );
    return;
}

void sub_23307(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = 19;
    if (iParam0 >= iVar8)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_23419( uParam1, uParam2 );
        return;
    }
    if (g_U38472._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar9 = 0;
    GET_GAME_TIMER( ref iVar9 );
    g_U38472._fU12[iParam0]._fU0 = 1;
    g_U38472._fU12[iParam0]._fU4 = 0;
    g_U38472._fU12[iParam0]._fU8 = 0;
    g_U38472._fU12[iParam0]._fU12 = uParam1;
    g_U38472._fU12[iParam0]._fU16 = uParam2;
    g_U38472._fU12[iParam0]._fU20 = iVar9 + iParam3;
    g_U38472._fU12[iParam0]._fU28 = uParam4;
    g_U38472._fU12[iParam0]._fU32 = uParam5;
    sub_25128( iParam0, iParam3 );
    return;
}

void sub_23419(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    uVar11 = sub_23442( uParam0 );
    sub_23689( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_24033( ref uVar4, 1 );
    sub_24061( ref uVar4, 0 );
    sub_24089( ref uVar4, 2 );
    sub_24119( ref uVar4 );
    return;
}

int sub_23442(unknown uParam0)
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
    sub_3925( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_23689(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_23711( uParam0, 0, iParam4 + 0 );
    sub_23711( uParam1, 1, iParam4 + 0 );
    sub_23711( uParam2, 2, iParam4 + 0 );
    sub_23711( uParam3, 3, iParam4 + 0 );
    sub_23711( 0, 4, iParam4 + 0 );
    sub_23711( 1, 5, iParam4 + 0 );
    sub_23711( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_23711(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_24033(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_24061(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_24089(int iParam0, unknown uParam1)
{
    sub_23711( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_24119(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "T1_NAME_", 16 );
    if (g_U94._fU540)
    {
        return 0;
    }
    if ((g_U572[g_U572 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_24189())
        {
            sub_8952( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_24316( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_8952( iVar9 );
    }
    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if (g_U572[I]._fU0[0] == -1)
        {
            g_U572[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U572;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_8666( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U94._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U558 == 9)
            {
                g_U94._fU404 = 1016;
            }
            else if (g_U94._fU0 == 1015)
            {
                g_U94._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15728[2] = 1;
        }
        else if ((sub_8666( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_24189()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_8666( 1, g_U572[I] )) != 0))
        {
            sub_8952( I );
            return 1;
        }
    }
    return 0;
}

int sub_24316(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_24381( uParam0, g_U572[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U572;
        }
    }
    return -1;
}

int sub_24381(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_8666( 0, uParam0 );
        if (iVar14 == (sub_8666( 0, uParam6 )))
        {
            iVar15 = sub_8666( 3, uParam0 );
            if (iVar15 == (sub_8666( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_25128(unknown uParam0, int iParam1)
{
    g_U38472._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_25167( iParam1 ))
    {
        g_U38472._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_25167(int iParam0)
{
    int iVar3;

    iVar3 = sub_10898();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_25197();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_25197()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_25321(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = -5;
        break;
        default:
        sub_3925( "Flow_Friend_Left_Behind_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_11661( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_11661( uParam0, 0, iVar4 );
    return;
}

void sub_25589(unknown uParam0)
{
    sub_25623( "ERROR: JIM HANGOUT: ", uParam0 );
    return;
}

void sub_25623(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "ERROR: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_25790(boolean bParam0)
{
    switch (l_U506)
    {
        case 0:
        case 1:
        case 2:
        if (bParam0)
        {
            PRINT_NOW( "FAFUKIL", 7000, 1 );
        }
        else
        {
            PRINT_NOW( "FAFDEAD", 7000, 1 );
        }
        break;
        case 3: break;
        case 4:
        case 5:
        if (bParam0)
        {
            PRINT_NOW( "FAFVKIL", 7000, 1 );
        }
        else
        {
            PRINT_NOW( "FAFVDED", 7000, 1 );
        }
        break;
        case 6:
        PRINT_NOW( "FAFABAN", 7000, 1 );
        break;
        case 9: break;
        case 10: break;
        case 7:
        PRINT_NOW( "BIKELEFT", 7000, 1 );
        break;
        case 8: break;
        case 11:
        PRINT_NOW( "FAFFORC", 7000, 1 );
        break;
        case 12:
        PRINT_NOW( "FAFNONE", 7000, 1 );
        break;
    }
    return;
}

void sub_26336()
{
    int iVar2;

    l_U520 = 0;
    iVar2 = 1;
    if (NOT (sub_26362( 1, l_U473, iVar2 )))
    {
        return;
    }
    if (NOT l_U505)
    {
        sub_49013();
        g_U2771 = 1;
    }
    sub_16904();
    sub_49886( 1 );
    sub_50018( 1 );
    return;
}

int sub_26362(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    if (l_U502 == 0)
    {
        l_U573 = iVar5 + 3000;
        l_U574 = 0;
        l_U502++;
    }
    if (NOT (iParam1 == nil))
    {
        if ((IS_CHAR_INJURED( iParam1 )) || (sub_26434()))
        {
            l_U505 = 1;
            l_U506 = 0;
            g_U15862[uParam0]._fU8[0]._fU0[2] = 0;
            return 1;
        }
    }
    if (NOT l_U574)
    {
        if (l_U573 < iVar5)
        {
            l_U574 = sub_26629( uParam0 );
            if (NOT l_U574)
            {
                l_U573 = iVar5 + 3000;
            }
        }
    }
    if (l_U502 == 1)
    {
        if (sub_27062( uParam0, bParam2 ))
        {
            l_U502 = 99;
        }
    }
    if (l_U502 == 99)
    {
        l_U501 = 2;
        l_U502 = 0;
        if (NOT bParam2)
        {
            sub_48728( uParam0 );
        }
        g_U15862[uParam0]._fU8[0]._fU0[2] = 0;
        if (NOT (IS_CHAR_DEAD( sub_2582() )))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2582(), 0 );
        }
        return 1;
    }
    return 0;
}

int sub_26434()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (DOES_CHAR_EXIST( g_U38857[I]._fU0 ))
            {
                if (IS_CHAR_INJURED( g_U38857[I]._fU0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_26629(unknown uParam0)
{
    if ((g_U10495) AND (g_U10493))
    {
        return 1;
    }
    if (g_U18635[uParam0]._fU704._fU4)
    {
        return 1;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return 0;
    }
    if (NOT g_U10493)
    {
        if (g_U18635[uParam0]._fU144 == 17)
        {
            return 1;
        }
        sub_26739( uParam0 );
        g_U10493 = 1;
        return 1;
    }
    if (NOT g_U10495)
    {
        sub_26881( uParam0 );
        g_U10495 = 1;
        return 1;
    }
    return 1;
}

void sub_26739(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        PRINT_HELP( "FRPICKJm" );
        break;
        case 6:
        PRINT_HELP( "FRPICKTr" );
        break;
        case 7:
        PRINT_HELP( "FRPICKCl" );
        break;
    }
    return;
}

void sub_26881(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        PRINT_HELP( "FRQUITJm" );
        break;
        case 6:
        PRINT_HELP( "FRQUITTr" );
        break;
        case 7:
        PRINT_HELP( "FRQUITCl" );
        break;
    }
    return;
}

int sub_27062(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1: return sub_27106( uParam1 );
        case 6: return sub_48403( uParam1 );
        case 7: return sub_48463( uParam1 );
    }
    sub_3925( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Not a friend" );
    sub_3925( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Should never reach here" );
    return 0;
}

void sub_27106(boolean bParam0)
{
    if (bParam0)
    {
        return sub_27131( 1, ref l_U473, ref l_U474 );
    }
    return sub_37243( 1, ref l_U473, ref l_U474 );
}

int sub_27131(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_2958() )))
    {
        return 0;
    }
    sub_27164( uParam0 );
    sub_27199();
    sub_27529( (uParam1^) );
    sub_28309();
    if (l_U369 == 0)
    {
        sub_28424( uParam0, uParam1 );
        return 0;
    }
    if (l_U369 == 1)
    {
        sub_30277( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U369 == 2)
    {
        sub_31169( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U369 == 3)
    {
        sub_31444();
        return 0;
    }
    if (l_U369 == 4)
    {
        if (sub_31915( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_2958(), 1 );
    g_U18635[uParam0]._fU20 = 1;
    return 1;
}

void sub_27164(unknown uParam0)
{
    l_U376 = g_U18635[uParam0]._fU28;
    return;
}

void sub_27199()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2958() )))
    {
        return;
    }
    if (g_U12303)
    {
        return;
    }
    if (IS_BIT_SET( g_U10959._fU0, 4 ))
    {
        return;
    }
    if (sub_27284() < 20.00000000)
    {
        return;
    }
    if (NOT (GET_CLOSEST_CAR_NODE( l_U370._fU0, l_U370._fU4, l_U370._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 )))
    {
        return;
    }
    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    SET_CHAR_COORDINATES( sub_2582(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    return;
}

void sub_27284()
{
    vector vVar2;
    float Result;

    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return 9999.90000000;
    }
    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    GET_CHAR_COORDINATES( sub_2582(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
    GET_DISTANCE_BETWEEN_COORDS_3D( vVar2.x, vVar2.y, vVar2.z, l_U370._fU0, l_U370._fU4, l_U370._fU8, ref Result );
    return Result;
}

void sub_27529(unknown uParam0)
{
    if (COMPARE_STRING( ref l_U425._fU0, l_U424 ))
    {
        return;
    }
    if (NOT l_U425._fU96)
    {
        return;
    }
    sub_27584( uParam0 );
    l_U425._fU80 = l_U369;
    return;
}

void sub_27584(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;
    boolean bVar9;

    if (l_U369 == 0)
    {
        return;
    }
    if (NOT (HAVE_ANIMS_LOADED( ref l_U425._fU0 )))
    {
        REQUEST_ANIMS( ref l_U425._fU0 );
        return;
    }
    if (IS_CHAR_DEAD( uParam0 ))
    {
        return;
    }
    GET_SCRIPT_TASK_STATUS( uParam0, 80, ref iVar3 );
    if (iVar3 == 0)
    {
        return;
    }
    bVar4 = iVar3 == 1;
    iVar5 = 0;
    GET_CHAR_HEALTH( uParam0, ref iVar5 );
    if (iVar5 < 200)
    {
        return;
    }
    if (NOT bVar4)
    {
        CLEAR_CHAR_TASKS( uParam0 );
        TASK_PLAY_ANIM( uParam0, ref l_U425._fU32, ref l_U425._fU0, 8.00000000, 1, 0, 0, 0, -2 );
        l_U425._fU88 = 0;
        l_U425._fU92 = 0;
        return;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = 0;
    if ((NOT l_U425._fU88) AND ((NOT (COMPARE_STRING( ref l_U425._fU48, l_U424 ))) AND ((l_U369 == 2) AND (l_U425._fU80 == 1))))
    {
        iVar7 = 1;
    }
    bVar8 = false;
    if (l_U425._fU100)
    {
        bVar9 = sub_27883();
        if (NOT bVar9)
        {
            bVar9 = IS_CHAR_ON_FOOT( sub_2582() );
        }
        if ((NOT l_U425._fU92) AND ((NOT (COMPARE_STRING( ref l_U425._fU64, l_U424 ))) AND ((bVar9) AND ((l_U369 == 2) AND (l_U425._fU80 == 1)))))
        {
            iVar7 = 1;
            bVar8 = true;
        }
    }
    else if (l_U369 == 1)
    {
        l_U425._fU100 = 1;
    }
    if ((iVar7) || (iVar6 > l_U425._fU84))
    {
        CLEAR_CHAR_TASKS( uParam0 );
        if (bVar8)
        {
            TASK_PLAY_ANIM( uParam0, ref l_U425._fU64, ref l_U425._fU0, 8.00000000, 0, 0, 0, 0, -2 );
            l_U425._fU100 = 0;
            l_U425._fU92 = 1;
        }
        else if (NOT (COMPARE_STRING( ref l_U425._fU48, l_U424 )))
        {
            TASK_PLAY_ANIM( uParam0, ref l_U425._fU48, ref l_U425._fU0, 8.00000000, 0, 0, 0, 0, -2 );
        }
        l_U425._fU88 = 1;
        sub_2235();
        return;
    }
    return;
}

boolean sub_27883()
{
    unknown uVar2;
    float fVar3;

    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    return fVar3 > 0.02000000;
}

void sub_28309()
{
    int iVar2;

    if (NOT l_U387)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT (iVar2 > l_U386))
    {
        return;
    }
    CHANGE_BLIP_PRIORITY( l_U374, l_U3 );
    FLASH_BLIP( l_U374, 0 );
    l_U386 = 0;
    l_U387 = 0;
    return;
}

void sub_28424(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_27284();
    if (fVar4 > 98.00000000)
    {
        return;
    }
    if ((IS_BIT_SET( g_U10959._fU0, 4 )) || (g_U12303))
    {
        return;
    }
    if (NOT (sub_28487( uParam0 )))
    {
        sub_28526( uParam0 );
        return;
    }
    if (NOT sub_28560())
    {
        return;
    }
    sub_28666( uParam0, uParam1, l_U370._fU0, l_U370._fU4, l_U370._fU8, l_U373 );
    SET_CHAR_DECISION_MAKER( (uParam1^), l_U391 );
    g_U18635[uParam0]._fU24 = 1;
    sub_2633( l_U415, (uParam1^), ref l_U411, 0 );
    sub_29948( uParam0, (uParam1^) );
    sub_30062();
    l_U369 = 1;
    l_U378 = 0;
    return;
}

void sub_28487(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_16105( uParam0 ) );
}

void sub_28526(unknown uParam0)
{
    REQUEST_MODEL( sub_16105( uParam0 ) );
    return;
}

int sub_28560()
{
    if (NOT l_U451)
    {
        return 1;
    }
    REQUEST_MODEL( l_U452 );
    if (NOT (HAS_MODEL_LOADED( l_U452 )))
    {
        return 0;
    }
    return 1;
}

void sub_28666(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_28677( uParam0 ), sub_16105( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_28784( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_28890( uParam0, (uParam1^) );
    return;
}

int sub_28677(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13: return 9;
    }
    return 25;
}

void sub_28784(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 6:
        case 7:
        case 16:
        case 13:
        SET_CHAR_RELATIONSHIP_GROUP( uParam1, 6 );
        break;
    }
    return;
}

void sub_28890(unknown uParam0, unknown uParam1)
{
    sub_28902( ref uParam1, uParam0 );
    g_U20762[uParam0]._fU0 = 1;
    g_U20762[uParam0]._fU4 = uParam1;
    return;
}

void sub_28902(unknown uParam0, int iParam1)
{
    sub_28913( uParam0 );
    if (iParam1 == 22)
    {
        sub_29013( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_29672( (uParam0^), iParam1, g_U38647[iParam1] );
    }
    return;
}

void sub_28913(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_29013(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((g_U15728[19]) AND ((uParam0^) == sub_2582()))
        {
            if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 1)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == 0)))
            {
                SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, 0, 1 );
            }
        }
        else if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)))
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

void sub_29672(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 13:
        sub_29013( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_29013( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_29948(unknown uParam0, unknown uParam1)
{
    int iVar4;

    sub_29672( uParam1, uParam0, l_U421 );
    CLEAR_CHAR_PROP( uParam1, 0 );
    iVar4 = -1;
    if (NOT (iVar4 == l_U422))
    {
        if (l_U422 == -1)
        {
            CLEAR_CHAR_PROP( uParam1, 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( uParam1, 1, l_U422 );
        }
    }
    ENABLE_PED_HELMET( uParam1, l_U423 );
    return;
}

void sub_30062()
{
    if (NOT l_U451)
    {
        return;
    }
    if (DOES_VEHICLE_EXIST( l_U457 ))
    {
        return;
    }
    CLEAR_AREA( l_U453._fU0, l_U453._fU4, l_U453._fU8, 5.00000000, 0 );
    CREATE_CAR( l_U452, l_U453._fU0, l_U453._fU4, l_U453._fU8, ref l_U457, 1 );
    SET_CAR_HEADING( l_U457, l_U456 );
    SET_CAR_ON_GROUND_PROPERLY( l_U457 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U452 );
    }
    return;
}

void sub_30277(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_27284();
    if ((IS_BIT_SET( g_U10959._fU0, 4 )) || ((g_U12303) || (fVar5 > 100.00000000)))
    {
        sub_30330( uParam1 );
        sub_16082( uParam0 );
        sub_30368();
        l_U369 = 0;
        g_U18635[uParam0]._fU24 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_2582() )))
    {
        if (sub_30632( sub_2582() ))
        {
            return;
        }
    }
    if (fVar5 < 18.00000000)
    {
        l_U369 = 2;
        if (NOT IS_HINT_RUNNING())
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
            {
                GET_CHAR_COORDINATES( (uParam1^), ref l_U418._fU0, ref l_U418._fU4, ref l_U418._fU8 );
                l_U418._fU8 += 1.50000000;
                HINT_CAM( l_U418._fU0, l_U418._fU4, l_U418._fU8, 0, 0, 0, 30000 );
            }
        }
        l_U377 = 0;
        sub_16011();
        sub_31046( (uParam1^), uParam2 );
        TASK_LOOK_AT_CHAR( (uParam1^), sub_2582(), -2, 0 );
        return;
    }
    return;
}

void sub_30330(unknown uParam0)
{
    DELETE_CHAR( uParam0 );
    (uParam0^) = nil;
    return;
}

void sub_30368()
{
    float fVar2;

    if (NOT (DOES_VEHICLE_EXIST( l_U457 )))
    {
        return;
    }
    if (IS_CHAR_INJURED( sub_2582() ))
    {
        return;
    }
    if (IS_CAR_DEAD( l_U457 ))
    {
        return;
    }
    fVar2 = 98.00000000 - 5.00000000;
    if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2582(), l_U457, fVar2, fVar2, 30.00000000, 0 )) || (IS_CHAR_IN_CAR( sub_2582(), l_U457 )))
    {
        sub_30501();
        return;
    }
    DELETE_CAR( ref l_U457 );
    l_U457 = nil;
    return;
}

void sub_30501()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U457 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U457 );
    l_U457 = nil;
    return;
}

int sub_30632(int iParam0)
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
                if (sub_30696( uVar3 ))
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

int sub_30696(int iParam0)
{
    if ((iParam0 == g_U2784) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_31046(unknown uParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        return;
    }
    if (IS_CHAR_INJURED( uParam0 ))
    {
        return;
    }
    ADD_BLIP_FOR_CHAR( uParam0, uParam1 );
    SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
    return;
}

void sub_31169(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_27284();
    if (sub_31191( uVar4, uParam0, uParam1 ))
    {
        return;
    }
    if (sub_31371( uVar4 ))
    {
        return;
    }
    return;
}

int sub_31191(float fParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    bVar5 = false;
    if (NOT (IS_CHAR_DEAD( sub_2582() )))
    {
        if (sub_30632( sub_2582() ))
        {
            bVar5 = true;
        }
    }
    if ((NOT bVar5) AND ((NOT (IS_BIT_SET( g_U10959._fU0, 4 ))) AND (NOT g_U12303)))
    {
        if (fParam0 <= 20.00000000)
        {
            return 0;
        }
    }
    l_U369 = 1;
    CLEAR_HELP();
    sub_15921( uParam1 );
    sub_1888( 0 );
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    TASK_CLEAR_LOOK_AT( uParam2 );
    return 1;
}

int sub_31371(float fParam0)
{
    if (fParam0 > 7.00000000)
    {
        return 0;
    }
    l_U369 = 3;
    return 1;
}

void sub_31444()
{
    float fVar2;

    fVar2 = sub_27284();
    if (sub_31462( fVar2 ))
    {
        return;
    }
    if (fVar2 < 5.00000000)
    {
        if (NOT sub_31601())
        {
            return;
        }
        if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
        {
            TASK_LEAVE_ANY_CAR( sub_2582() );
        }
        l_U369 = 4;
    }
    return;
}

int sub_31462(float fParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_DEAD( sub_2582() )))
    {
        if (sub_30632( sub_2582() ))
        {
            bVar3 = true;
        }
    }
    if ((NOT bVar3) AND ((NOT (IS_BIT_SET( g_U10959._fU0, 4 ))) AND (NOT g_U12303)))
    {
        if (fParam0 <= 9.00000000)
        {
            return 0;
        }
    }
    l_U369 = 2;
    l_U377 = 0;
    return 1;
}

int sub_31601()
{
    int iVar2;
    unknown uVar3;
    float fVar4;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U471 == 0)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2582() )))
        {
            return 1;
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
        {
            return 0;
        }
        SET_PLAYER_CONTROL( sub_2958(), 0 );
        l_U463 = iVar2 + 4000;
        l_U471 = 1;
    }
    if (l_U471 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2582() )))
        {
            l_U471 = 0;
            return 1;
        }
        if (sub_30632( sub_2582() ))
        {
            return 0;
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar3 );
        GET_CAR_SPEED( uVar3, ref fVar4 );
        if ((l_U463 < iVar2) || (fVar4 < 0.04000000))
        {
            SET_PLAYER_CONTROL( sub_2958(), 1 );
            l_U471 = 0;
            return 1;
        }
    }
    return 0;
}

int sub_31915(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    bVar4 = g_U12303;
    if (NOT bVar4)
    {
        if (IS_BIT_SET( g_U10959._fU0, 4 ))
        {
            bVar4 = true;
        }
    }
    if ((bVar4) AND (NOT l_U375))
    {
        l_U369 = 3;
        return 1;
    }
    iVar5 = 0;
    iVar6 = 0;
    if (NOT l_U375)
    {
        GET_GROUP_SIZE( sub_16526(), ref iVar5, ref iVar6 );
        if (iVar6 > 0)
        {
            if (NOT sub_32026())
            {
                sub_3925( "Check_If_Still_Joining_Group: Player has group members, but not Dwayne Backup" );
            }
            sub_32135();
            return 1;
        }
    }
    uVar7 = nil;
    iVar8 = 0;
    iVar9 = 1;
    if (NOT l_U375)
    {
        if (NOT l_U380)
        {
            iVar9 = 3;
        }
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar7 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar7, ref iVar8 );
            if ((l_U381) || (iVar8 < iVar9))
            {
                TASK_LEAVE_CAR( sub_2582(), uVar7 );
                l_U382 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( (uParam0^), 80, ref iVar10 );
        if ((NOT (iVar10 == 7)) AND (NOT (iVar10 == 1)))
        {
            return 1;
        }
        if (NOT (COMPARE_STRING( ref l_U425._fU0, l_U424 )))
        {
            CLEAR_CHAR_TASKS( (uParam0^) );
            REMOVE_ANIMS( ref l_U425._fU0 );
            l_U425._fU96 = 0;
        }
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        SET_GROUP_MEMBER( sub_16526(), (uParam0^) );
        l_U375 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        sub_32406();
        g_U12303 = 1;
    }
    iVar11 = 0;
    if ((NOT l_U382) AND (IS_CHAR_IN_ANY_CAR( sub_2582() )))
    {
        MODIFY_CHAR_MOVE_STATE( (uParam0^), 2 );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar7 );
        if (NOT (IS_CHAR_IN_CAR( (uParam0^), uVar7 )))
        {
            if (NOT (l_U417 == 0))
            {
                iVar12 = 0;
                GET_GAME_TIMER( ref iVar12 );
                if ((NOT (IS_VEH_DRIVEABLE( uVar7 ))) || (l_U417 < iVar12))
                {
                    SET_PLAYER_CONTROL( sub_2958(), 1 );
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U417 = 0;
                }
                else if (NOT (IS_GROUP_MEMBER( (uParam0^), sub_16526() )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    SET_GROUP_MEMBER( sub_16526(), (uParam0^) );
                }
            }
            else if (sub_27284() > 20.00000000)
            {
                return 0;
            }
            return 1;
        }
        if (l_U376)
        {
            sub_33057( l_U416, ref l_U405 );
            iVar11 = sub_18047( l_U416 );
            sub_35047( iVar11 );
        }
        else
        {
            sub_35225( l_U416, ref l_U405 );
        }
        sub_15921( uParam1 );
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
        return 0;
    }
    if (l_U376)
    {
        if (l_U383)
        {
            sub_36028( l_U416, ref l_U405 );
        }
        else
        {
            sub_36333( l_U416, ref l_U405 );
        }
        iVar11 = sub_18047( l_U416 );
        sub_35047( iVar11 );
    }
    else if (l_U383)
    {
        sub_36726( l_U416, ref l_U405 );
    }
    else
    {
        sub_37042( l_U416, ref l_U405 );
    }
    if ((NOT l_U382) AND (IS_HINT_RUNNING()))
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    sub_30501();
    return 0;
}

int sub_32026()
{
    return 0;
}

void sub_32135()
{
    return;
}

void sub_32406()
{
    sub_32415();
    sub_32560( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_32634();
    return;
}

void sub_32415()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_32560(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_32634()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_8666( 1, g_U572[I] )) == 0)
        {
            sub_8952( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_9118())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

void sub_33057(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_33092( uParam0, uParam1 );
        return;
    }
    if (g_U39119)
    {
        switch (uParam0)
        {
            case 1:
            sub_33151( "E1FCJ3_BLRA", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) LATE\n" );
            return;
            case 6:
            sub_33151( "E1FCT3_LRC", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) LATE\n" );
            return;
            case 7:
            sub_33151( "E1FCC3_LR", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) LATE\n" );
            return;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 1:
            sub_33151( "E1FCJ3_BL", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE (BIKE ONLY) LATE\n" );
            return;
            case 6:
            sub_33151( "E1FCT3_BL", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE (BIKE ONLY) LATE\n" );
            return;
            case 7:
            sub_33151( "E1FCC3_BL", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE (BIKE ONLY) LATE\n" );
            return;
        }
    }
    sub_33151( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_33092(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_BNL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_BNL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_BNL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_33151(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_33172( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_33172(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_33226( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_33226(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_33248( iParam1 )))
    {
        return 0;
    }
    l_U6._fU384 = 0;
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
    sub_33936( ref g_U8947, ref l_U6 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_33248(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_33325( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_33325( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_33325( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_33325(unknown uParam0)
{
    return;
}

void sub_33936(int iParam0, int iParam1)
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

void sub_35047(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        iVar3 = 0;
        break;
        default:
        sub_3925( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_11661( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_11661( uParam0, 0, iVar4 );
    return;
}

void sub_35225(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_33092( uParam0, uParam1 );
        return;
    }
    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return;
    }
    if (g_U39119)
    {
        switch (uParam0)
        {
            case 1:
            sub_33151( "E1FCJ3_NLR", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) NOT LATE\n" );
            return;
            case 6:
            sub_33151( "E1FCT3_BNLC", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) NOT LATE\n" );
            return;
            case 7:
            sub_33151( "E1FCC3_NLR", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE FOR RACE (BIKE ONLY) NOT LATE\n" );
            return;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 1:
            sub_33151( "E1FCJ3_BNL", uParam1, 8, 1 );
            PRINTSTRING( "***** JIM: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
            return;
            case 6:
            sub_33151( "E1FCT3_BNL", uParam1, 8, 1 );
            PRINTSTRING( "***** TERRY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
            return;
            case 7:
            sub_33151( "E1FCC3_BNL", uParam1, 8, 1 );
            PRINTSTRING( "***** CLAY: ARRIVED IN VEHICLE (BIKE ONLY) NOT LATE\n" );
            return;
        }
    }
    sub_33151( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_36028(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_MTAL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: MEET AT ACTIVITY - LATE\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_ACTL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: MEET AT ACTIVITY - LATE\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: MEET AT ACTIVITY - LATE\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_36333(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_36368( uParam0, uParam1 );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_36368(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_ANB", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: ARRIVED NOT ON BIKE\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_NB", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: ARRIVED NOT ON BIKE\n" );
        return;
        case 7:
        sub_33151( "PLACEHOLDER", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: ARRIVED NOT ON BIKE\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_36726(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_MTNL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: MEET AT ACTIVITY - NOT LATE\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_NL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: MEET AT ACTIVITY - NOT LATE\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_ANL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: MEET AT ACTIVITY - NOT LATE\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_37042(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_36368( uParam0, uParam1 );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

int sub_37243(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_2958() )))
    {
        return 0;
    }
    sub_27164( uParam0 );
    sub_27199();
    sub_28309();
    if (l_U369 == 0)
    {
        sub_37307( uParam0, uParam1 );
        return 0;
    }
    if (l_U369 == 1)
    {
        sub_41770( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U369 == 2)
    {
        sub_42829( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U369 == 3)
    {
        l_U369 = 2;
    }
    if (l_U369 == 4)
    {
        if (sub_43583( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_2958(), 1 );
    g_U18635[uParam0]._fU20 = 1;
    return 1;
}

void sub_37307(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_27284();
    if (fVar4 > 198.00000000)
    {
        return;
    }
    if ((IS_BIT_SET( g_U10959._fU0, 4 )) || (g_U12303))
    {
        return;
    }
    if ((NOT sub_28560()) || (NOT sub_37368()))
    {
        return;
    }
    sub_30062();
    switch (uParam0)
    {
        case 1:
        (uParam1^) = g_U38857[0]._fU0;
        break;
        case 6:
        (uParam1^) = g_U38857[1]._fU0;
        break;
        case 7:
        (uParam1^) = g_U38857[2]._fU0;
        break;
    }
    g_U18635[uParam0]._fU24 = 1;
    sub_2633( l_U415, (uParam1^), ref l_U411, 0 );
    sub_29948( uParam0, (uParam1^) );
    l_U369 = 1;
    l_U378 = 0;
    return;
}

int sub_37368()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 0;
    if (NOT (sub_37383( 0, ref iVar2, ref uVar3 )))
    {
        return 0;
    }
    if (NOT (sub_37383( 1, ref iVar2, ref uVar3 )))
    {
        return 0;
    }
    if (NOT (sub_37383( 2, ref iVar2, ref uVar3 )))
    {
        return 0;
    }
    return 1;
}

int sub_37383(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (sub_37394( uParam0 )))
    {
        return 1;
    }
    if ((DOES_VEHICLE_EXIST( g_U38857[uParam0]._fU4 )) AND (DOES_CHAR_EXIST( g_U38857[uParam0]._fU0 )))
    {
        if ((uParam1^) == 0)
        {
            (uParam2^) = g_U38857[uParam0]._fU4;
        }
        (uParam1^)++;
        return 1;
    }
    uVar5 = {sub_37619( (uParam1^), (uParam2^) )};
    uVar8 = sub_37866( uParam0 );
    if (NOT (sub_38051( uVar8, uVar5, l_U373, ref g_U38857[uParam0] )))
    {
        return 0;
    }
    if ((uParam1^) == 0)
    {
        (uParam2^) = g_U38857[uParam0]._fU4;
    }
    (uParam1^)++;
    if (IS_CHAR_IN_CAR( g_U38857[uParam0]._fU0, g_U38857[uParam0]._fU4 ))
    {
        LOCK_CAR_DOORS( g_U38857[uParam0]._fU4, 3 );
    }
    return 1;
}

void sub_37394(int iParam0)
{
    if ((iParam0 >= 3) || (iParam0 < 0))
    {
        SCRIPT_ASSERT( "Minigames_Is_Biker_Friend_Active: Minigame Biker Index out of range" );
        return 0;
    }
    return g_U38847[iParam0]._fU0;
}

void sub_37619(unknown uParam0, unknown uParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    Result = {l_U370};
    switch (uParam0)
    {
        case 0: break;
        case 1:
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 2.00000000, -3.50000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            Result._fU0 += 2.00000000;
            Result._fU4 -= 3.50000000;
        }
        break;
        case 2:
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, -2.00000000, -3.50000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            Result._fU0 += 2.00000000;
            Result._fU4 -= 3.50000000;
        }
        break;
    }
    return Result;
}

int sub_37866(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 1;
        case 1: return 6;
        case 2: return 7;
    }
    SCRIPT_ASSERT( "Minigames_Return_Biker_Friend_ContactID: Phone Contact ID is not a possible biker friend" );
    return 22;
}

int sub_38051(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    if ((NOT (HAS_MODEL_LOADED( sub_38070( uParam0 ) ))) || (NOT (sub_28487( uParam0 ))))
    {
        sub_28526( uParam0 );
        REQUEST_MODEL( sub_38070( uParam0 ) );
        return 0;
    }
    sub_38349( uParam1, uParam4, sub_16105( uParam0 ), sub_38070( uParam0 ), iParam5, 1 );
    sub_39856( iParam5->_fU4, sub_38070( uParam0 ), uParam0 );
    SUPPRESS_CAR_MODEL( sub_38070( uParam0 ) );
    sub_28890( uParam0, iParam5->_fU0 );
    sub_16082( uParam0 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_38070( uParam0 ) );
    }
    return 1;
}

int sub_38070(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -359167535;
        case 1: return -570033273;
        case 6: return -408052231;
        case 7: return -408052231;
        case 13: return -408052231;
        case 16: return -408052231;
        case 17: return -255678177;
        case 15: return -1759858085;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -570033273;
}

void sub_38349(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7)
{
    unknown uVar10;

    sub_38383( vParam0 + (vector( 0.00000000, 0.00000000, 2.00000000)), uParam3, uParam4, iParam6 );
    uVar10 = sub_39808( vParam0, uParam3, uParam5 );
    WARP_CHAR_INTO_CAR( iParam6->_fU0, uVar10 );
    GIVE_PED_HELMET_WITH_OPTS( iParam6->_fU0, 1 );
    iParam6->_fU4 = uVar10;
    if (NOT bParam7)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
    }
    return;
}

void sub_38383(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_38981( sub_38393( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_39109( iParam5 );
    return;
}

void sub_38393(unknown uParam0)
{
    int Result;

    Result = 0;
    switch ((uParam0^))
    {
        case -159126838:
        case 301427732:
        case -570033273:
        case -408052231:
        case 584879743:
        case 802082487:
        case -359167535:
        case 1439613707:
        case 1737188996:
        case -411638179:
        case -2130437771:
        case -1832534792:
        case -1670328242:
        case 188410296:
        case 1414790133:
        case 630267504:
        case 1719115836:
        case 1914397972:
        case -2138439183:
        case 1215631816:
        case 1706970202:
        case 717510247:
        case 965080042:
        case 693982133:
        case 454735664:
        case 1409362172:
        case 767450539:
        case 1686719296:
        case 1917871822:
        case 422524045:
        Result = 1;
        break;
        case -571009320:
        case 2006142190:
        case -1606187161:
        case -77769032:
        case -618617997:
        case 977480632:
        case -1159156463:
        case 479817841:
        case 226415164:
        case 15972646:
        case -2107556865:
        case -150646512:
        case 690697563:
        case -504027408:
        Result = 2;
        break;
        case -114291515:
        case -891462355:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case 236691815:
        case 1590280898:
        Result = 3;
        break;
    }
    if (Result == 0)
    {
        if (((uParam0^) == (sub_16105( 16 ))) || (((uParam0^) == (sub_16105( 13 ))) || (((uParam0^) == (sub_16105( 7 ))) || (((uParam0^) == (sub_16105( 6 ))) || (((uParam0^) == (sub_16105( 1 ))) || ((uParam0^) == (sub_16105( 0 ))))))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_16105( 17 ))) || ((uParam0^) == (sub_16105( 15 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_38981(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 9;
        break;
        case 2:
        return 8;
        break;
    }
    return 25;
}

void sub_39109(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_39148( iParam0 + 0 );
    if (iVar3 == 1)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 0, 0 );
        SET_CHAR_NEVER_TARGETTED( iParam0->_fU0, 1 );
    }
    else if (iVar3 == 3)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 1, 0 );
    }
    else if (iVar3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_39318( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_39318( iVar3 ) );
    };;;
    SET_CHAR_PROOFS( iParam0->_fU0, 0, 0, 0, 1, 0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam0->_fU0, 1 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
    SET_PED_FALL_OFF_BIKES_WHEN_SHOT( iParam0->_fU0, 0 );
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU92 = 0;
    iParam0->_fU16 = {0, 0, 0};
    iParam0->_fU28 = 18.00000000;
    iParam0->_fU32 = 0;
    iParam0->_fU36 = 4;
    iParam0->_fU40 = 2;
    iParam0->_fU88 = 12;
    iParam0->_fU96 = 5;
    if (iVar3 == 1)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) == 0)
        {
            sub_39605( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_16105( 7 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_16105( 6 ) ))))
        {
            sub_39605( iParam0 );
        }
    }
    return;
}

void sub_39148(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_38393( ref uVar3 );
    }
    return Result;
}

int sub_39318(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 6;
        break;
        case 2:
        return 5;
        break;
    }
    return 22;
}

void sub_39605(int iParam0)
{
    if (l_U143)
    {
        ADD_BLIP_FOR_CHAR( iParam0->_fU0, iParam0 + 100 );
        SET_BLIP_AS_FRIENDLY( iParam0->_fU100, 1 );
        CHANGE_BLIP_PRIORITY( iParam0->_fU100, 0 );
        SET_BLIP_AS_SHORT_RANGE( iParam0->_fU100, 1 );
        CHANGE_BLIP_SCALE( iParam0->_fU100, 0.50000000 );
        CHANGE_BLIP_DISPLAY( iParam0->_fU100, 5 );
    }
    return;
}

void sub_39808(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_39856( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

void sub_39856(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

void sub_41770(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_27284();
    if ((IS_BIT_SET( g_U10959._fU0, 4 )) || ((g_U12303) || (fVar5 > 200.00000000)))
    {
        if (g_U12303)
        {
            sub_41833( uParam1 );
        }
        else
        {
            sub_42211( uParam1 );
        }
        sub_30368();
        l_U369 = 0;
        g_U18635[uParam0]._fU24 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_2582() )))
    {
        if (sub_30632( sub_2582() ))
        {
            return;
        }
    }
    if (fVar5 < 18.00000000)
    {
        l_U369 = 2;
        l_U377 = 0;
        sub_16011();
        sub_42637();
        TASK_LOOK_AT_CHAR( (uParam1^), sub_2582(), -2, 0 );
        return;
    }
    return;
}

void sub_41833(unknown uParam0)
{
    int I;

    if (NOT (IS_PLAYER_PLAYING( sub_2958() )))
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37394( I ))
        {
            if (IS_VEH_DRIVEABLE( g_U38857[I]._fU4 ))
            {
                TASK_CAR_MISSION_PED_TARGET( g_U38857[I]._fU0, g_U38857[I]._fU4, sub_2582(), 8, 40.00000000, 2, 300, 5 );
            }
            sub_41975( ref g_U38857[I], 1 );
        }
    }
    (uParam0^) = nil;
    return;
}

void sub_41975(int iParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( iParam0->_fU100 ))
    {
        REMOVE_BLIP( iParam0->_fU100 );
    }
    if ((uParam1) AND (DOES_VEHICLE_EXIST( iParam0->_fU4 )))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
    }
    if (DOES_CHAR_EXIST( iParam0->_fU0 ))
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            SET_CHAR_KEEP_TASK( iParam0->_fU0, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( iParam0 + 0 );
    }
    iParam0->_fU0 = nil;
    iParam0->_fU4 = nil;
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU36 = 4;
    return;
}

void sub_42211(unknown uParam0)
{
    int I;

    if (NOT (IS_PLAYER_PLAYING( sub_2958() )))
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37394( I ))
        {
            sub_42279( ref g_U38857[I], 1 );
        }
    }
    (uParam0^) = nil;
    return;
}

void sub_42279(int iParam0, boolean bParam1)
{
    int iVar4;

    if (DOES_BLIP_EXIST( iParam0->_fU100 ))
    {
        REMOVE_BLIP( iParam0->_fU100 );
    }
    if ((iParam0->_fU0 != sub_2582()) AND (DOES_CHAR_EXIST( iParam0->_fU0 )))
    {
        DELETE_CHAR( iParam0 + 0 );
    }
    if (DOES_VEHICLE_EXIST( iParam0->_fU4 ))
    {
        if (bParam1)
        {
            iVar4 = nil;
            if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref iVar4 );
            }
            if (iVar4 == iParam0->_fU4)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
            }
            else
            {
                DELETE_CAR( iParam0 + 4 );
            }
        }
        else
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( iParam0 + 4 );
        }
    }
    iParam0->_fU0 = nil;
    iParam0->_fU4 = nil;
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU36 = 4;
    return;
}

void sub_42637()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (DOES_BLIP_EXIST( g_U38847[I]._fU8 )))
            {
                if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
                {
                    sub_31046( g_U38857[I]._fU0, ref g_U38847[I]._fU8 );
                }
            }
        }
    }
    return;
}

void sub_42829(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_27284();
    if (sub_31191( uVar4, uParam0, uParam1 ))
    {
        sub_15842();
        l_U458 = 0;
        return;
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_2582() ))
    {
        PRINT_HELP_FOREVER( ref l_U392[1] );
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_2582() ))
    {
        if (sub_42923())
        {
            return;
        }
    }
    else if (NOT l_U458)
    {
        if (sub_43051())
        {
            sub_43221( l_U416, ref l_U405 );
            l_U458 = 1;
        }
    }
    return;
}

int sub_42923()
{
    unknown uVar2;
    float fVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2582() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    if (fVar3 < 18.00000000)
    {
        l_U369 = 4;
        CLEAR_HELP();
        return 1;
    }
    return 0;
}

int sub_43051()
{
    unknown uVar2;
    float fVar3;
    float fVar4;

    if (IS_CHAR_ON_ANY_BIKE( sub_2582() ))
    {
        return 0;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
    {
        if (IS_PLAYER_PRESSING_HORN( sub_2958() ))
        {
            return 1;
        }
        uVar2 = nil;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar2 );
        fVar3 = 0.00000000;
        GET_CAR_SPEED( uVar2, ref fVar3 );
        if (fVar3 < 0.01000000)
        {
            return 1;
        }
        return 0;
    }
    fVar4 = sub_27284();
    if (fVar4 < 5.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_43221(unknown uParam0, unknown uParam1)
{
    if (g_U18635[uParam0]._fU704._fU4)
    {
        sub_36368( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_ANB", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM: ARRIVED NOT ON BIKE\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_NB", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY: ARRIVED NOT ON BIKE\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_NB", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY: ARRIVED NOT ON BIKE\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

int sub_43583(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    unknown uVar5;

    bVar4 = g_U12303;
    if (NOT bVar4)
    {
        if (IS_BIT_SET( g_U10959._fU0, 4 ))
        {
            bVar4 = true;
        }
    }
    if ((bVar4) AND (NOT l_U375))
    {
        l_U369 = 2;
        return 1;
    }
    if (NOT l_U375)
    {
        l_U375 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        sub_32406();
        g_U12303 = 1;
    }
    sub_43692();
    if (l_U376)
    {
        sub_33057( l_U416, ref l_U405 );
        uVar5 = sub_18047( l_U416 );
        sub_35047( uVar5 );
    }
    else
    {
        sub_35225( l_U416, ref l_U405 );
    }
    sub_15842();
    sub_45525( sub_2582(), sub_45185( 1 ), (uParam0^), 39 );
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    sub_48217();
    sub_30501();
    return 0;
}

void sub_43692()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int I;

    iVar2 = 0;
    iVar3 = 3;
    iVar4 = 3;
    iVar5 = 3;
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37394( I ))
        {
            switch (iVar2)
            {
                case 0:
                iVar3 = I;
                break;
                case 1:
                iVar4 = I;
                break;
                case 2:
                iVar5 = I;
                break;
            }
            iVar2++;
        }
    }
    if (iVar2 == 0)
    {
        return;
    }
    switch (iVar2)
    {
        case 1:
        sub_43877( ref g_U38857[iVar3], sub_2582() );
        sub_44573( ref g_U38857[iVar3], 3 );
        break;
        case 2:
        sub_43877( ref g_U38857[iVar3], sub_2582() );
        sub_44573( ref g_U38857[iVar3], 0 );
        sub_43877( ref g_U38857[iVar4], sub_2582() );
        sub_44573( ref g_U38857[iVar4], 1 );
        break;
        case 3:
        sub_43877( ref g_U38857[iVar3], sub_2582() );
        sub_44573( ref g_U38857[iVar3], 0 );
        sub_43877( ref g_U38857[iVar4], sub_2582() );
        sub_44573( ref g_U38857[iVar4], 1 );
        sub_43877( ref g_U38857[iVar5], g_U38857[iVar3]._fU0 );
        sub_44573( ref g_U38857[iVar5], 1 );
        break;
    }
    return;
}

void sub_43877(int iParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (IS_CHAR_INJURED( iParam1 ))
    {
        return;
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                if (sub_43973( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam1 != sub_2582()) AND (iParam0->_fU8 == sub_2582()))
    {
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
    }
    if ((iParam0->_fU0 != g_U11081[1]) AND (iParam0->_fU0 != g_U11081[0]))
    {
        if (DOES_CHAR_EXIST( g_U11197 ))
        {
            if ((g_U11197 == g_U11081[1]) || (g_U11197 == g_U11081[0]))
            {
                g_U11197 = nil;
            }
        }
        if (DOES_CHAR_EXIST( g_U11198 ))
        {
            if ((g_U11198 == g_U11081[1]) || (g_U11198 == g_U11081[0]))
            {
                g_U11198 = nil;
            }
        }
        g_U11114 = 1;
    }
    if (((iParam0->_fU36 != 1) || (iParam0->_fU8 != iParam1)) AND (NOT (IS_CHAR_INJURED( iParam0->_fU0 ))))
    {
        TASK_PAUSE( iParam0->_fU0, 30 );
    }
    iParam0->_fU8 = iParam1;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_PED_IN_GROUP( iParam0->_fU0 ))
        {
            GET_PED_GROUP_INDEX( iParam0->_fU0, ref uVar5 );
            GET_GROUP_LEADER( uVar5, ref iVar6 );
            if (DOES_GROUP_EXIST( uVar5 ))
            {
                GET_GROUP_LEADER( uVar5, ref iVar6 );
                if (iVar6 != iParam0->_fU8)
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
            }
        }
        sub_44458( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_2582())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_44573( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_44573( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_44573( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_44573( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_44573( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_43973(unknown uParam0, unknown uParam1)
{
    return (NOT (sub_43997( uParam0, uParam1 ))) AND (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ));
}

boolean sub_43997(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_44458(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

void sub_44573(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_2582())
    {
        if (iParam1 == 1)
        {
            g_U11197 = iParam0->_fU0;
            if (g_U11198 == iParam0->_fU0)
            {
                g_U11198 = nil;
            }
        }
        if (iParam1 == 0)
        {
            g_U11198 = iParam0->_fU0;
            if (g_U11197 == iParam0->_fU0)
            {
                g_U11197 = nil;
            }
        }
    }
    if ((iParam0->_fU0 != g_U11081[1]) AND (iParam0->_fU0 != g_U11081[0]))
    {
        g_U11114 = 1;
    }
    iParam0->_fU40 = iParam1;
    return;
}

void sub_45185(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref uVar3 );
        switch (uVar3)
        {
            case 1:
            Result = "gest_thumbsup";
            break;
            default:
            Result = "gest_thumbsup";
            break;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "p_gest_celeb_a";
            break;
            case 1:
            Result = "p_gest_celeb_b";
            break;
            case 2:
            Result = "p_gest_celeb_c";
            break;
            case 3:
            Result = "p_gest_celeb_d";
            break;
            case 5:
            Result = "p_gest_rockin";
            break;
            case 6:
            Result = "p_gest_yes";
            break;
            default:
            Result = "p_gest_yes";
            break;
        }
    }
    return Result;
}

void sub_45525(int iParam0, unknown uParam1, int iParam2, int iParam3)
{
    boolean Result;
    unknown uVar7;
    int iVar8;

    Result = false;
    if (IS_CHAR_INJURED( iParam0 ))
    {
        PRINTSTRING( "PERFORM_BIKER_GESTURE: ped is injured\n" );
        return 0;
    }
    if (IS_STRING_NULL( uParam1 ))
    {
        Result = true;
    }
    else if (COMPARE_STRING( uParam1, "" ))
    {
        Result = true;
    }
    else if (NOT ((IS_CHAR_SITTING_IN_ANY_CAR( iParam0 )) AND (IS_CHAR_ON_ANY_BIKE( iParam0 ))))
    {
        Result = true;
    }
    else
    {
        uVar7 = sub_46015( sub_45685( iParam0 ) );
        if (NOT (IS_STRING_NULL( uVar7 )))
        {
            if (HAVE_ANIMS_LOADED( uVar7 ))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0, uVar7, uParam1 )))
                {
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( iParam0, uParam1, uVar7, 8.00000000, 0, 0, 0, 0, 0 );
                    Result = true;
                }
            }
        }
    };;;
    if (Result)
    {
        l_U167 = iParam0;
        l_U168 = iParam2;
        if (DOES_CHAR_EXIST( iParam2 ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( iParam0, iParam2 )))
            {
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_46359( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_2582())
            {
                iVar8 = sub_39148( ref iParam0 );
                if ((iParam2 != sub_2582()) AND (iVar8 == 1))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_2582(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_2582(), iParam2, sub_46359( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_2582(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_2582(), iParam0, sub_46359( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((IS_CHAR_MODEL( iParam0, sub_16105( 0 ) )) AND (iParam3 == 38))
            {
                if (l_U172)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_46623( iParam3 ), 1, 1, 2 );
            }
            l_U166 = iParam3;
        }
        GET_GAME_TIMER( ref l_U165 );
        switch (iParam3)
        {
            case 35: SET_BIT( ref l_U170, 2 );
            case 36: SET_BIT( ref l_U170, 1 );
            case 24:
            SET_BIT( ref l_U170, 0 );
            break;
            case 38:
            SET_BIT( ref l_U170, 6 );
            break;
        }
    }
    return Result;
}

void sub_45685(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_45738( uVar3 );
        }
    }
    return Result;
}

void sub_45738(unknown uParam0)
{
    int Result;
    unknown uVar4;

    Result = 5;
    GET_CAR_MODEL( uParam0, ref uVar4 );
    switch (uVar4)
    {
        case -1830458836:
        case 584879743:
        case -1606187161:
        case -618617997:
        case 301427732:
        case 802082487:
        case -359167535:
        case -159126838:
        case -408052231:
        Result = 0;
        break;
        case -570033273:
        case -571009320:
        case 2006142190:
        case -77769032:
        Result = 1;
        break;
        case 1203311498:
        case -909201658:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case -114291515:
        case -891462355:
        Result = 2;
        break;
        case 788045382:
        Result = 4;
        break;
        case -1842748181:
        Result = 3;
        break;
    }
    return Result;
}

void sub_46015(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "MISSBIKE_GESTFREE";
        break;
        case 1:
        Result = "MISSBIKE_GESTCHOP";
        break;
        case 2:
        Result = "MISSBIKE_GESTSPT";
        break;
        case 3:
        Result = "MISSBIKE_GESTSCOT";
        break;
        case 4:
        Result = "MISSBIKE_GESTDIRT";
        break;
    }
    return Result;
}

void sub_46359(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_46623(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "ABUSE_COPS";
        break;
        case 1:
        Result = "ABUSE_GENERIC_BIKER_PED";
        break;
        case 2:
        Result = "ABUSE_HOOKER";
        break;
        case 3:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST";
        break;
        case 4:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST_TRUCE";
        break;
        case 5:
        Result = "BIKE_CRASH_DRIVEN";
        break;
        case 6:
        Result = "BIKE_DRIVE_MORE_CAREFUL";
        break;
        case 7:
        Result = "BIKE_HIT_PED";
        break;
        case 8:
        Result = "BIKE_JUMP";
        break;
        case 9:
        Result = "BIKE_ON_FIRE";
        break;
        case 10:
        Result = "BIKE_OVERTAKE";
        break;
        case 11:
        Result = "BIKER_ACHIEVE_MISSION_OBJECTIVE";
        break;
        case 12:
        Result = "BIKER_CLIPS_ANOTHER_BIKE";
        break;
        case 13:
        Result = "BIKER_CLIPS_ANYTHING";
        break;
        case 14:
        Result = "BIKER_FALLING_BEHIND";
        break;
        case 15:
        Result = "BIKER_FALLS_BEHIND";
        break;
        case 16:
        Result = "BIKER_PASSENGER_SHOOT_GENERIC";
        break;
        case 17:
        Result = "BIKER_PLAYER_FALLS_BEHIND";
        break;
        case 18:
        Result = "COME_UNDER_ATTACK";
        break;
        case 19:
        Result = "FOLLOW_ME_GUYS";
        break;
        case 20:
        Result = "GENERIC_CELEBRATION";
        break;
        case 21:
        Result = "GET_A_MOVE_ON";
        break;
        case 22:
        Result = "GET_IN_COVER";
        break;
        case 23:
        Result = "GET_THE_HELL_OUT_OF_HERE";
        break;
        case 24:
        Result = "GET_WANTED_LEVEL";
        break;
        case 25:
        Result = "GREET_JOHNNY";
        break;
        case 26:
        Result = "JACKED_BY_PLAYER_LIKE";
        break;
        case 27:
        Result = "KEEP_SHOOTING";
        break;
        case 28:
        Result = "LOST_TAUNT_ANGELS_OF_DEATH";
        break;
        case 29:
        Result = "LOST_TAUNT_LOST";
        break;
        case 30:
        Result = "LOST_WHOOP";
        break;
        case 31:
        Result = "NEED_BIKE_NOT_CAR";
        break;
        case 32:
        Result = "NEED_SOME_HELP";
        break;
        case 33:
        Result = "NICE_BIKE";
        break;
        case 34:
        Result = "NICE_SHOOTING_JOHNNY";
        break;
        case 35:
        Result = "POLICE_PURSUIT";
        break;
        case 36:
        Result = "SPOT_POLICE";
        break;
        case 37:
        Result = "JACKING_LOST_BIKE";
        break;
        case 38:
        Result = "WAIT_FOR_ME";
        break;
    }
    return Result;
}

void sub_48217()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (IS_VEH_DRIVEABLE( g_U38857[I]._fU4 ))
            {
                LOCK_CAR_DOORS( g_U38857[I]._fU4, 1 );
            }
        }
    }
    return;
}

void sub_48403(boolean bParam0)
{
    if (bParam0)
    {
        return sub_27131( 6, ref l_U482, ref l_U483 );
    }
    return sub_37243( 6, ref l_U482, ref l_U483 );
}

void sub_48463(boolean bParam0)
{
    if (bParam0)
    {
        return sub_27131( 7, ref l_U491, ref l_U492 );
    }
    return sub_37243( 7, ref l_U491, ref l_U492 );
}

void sub_48728(unknown uParam0)
{
    if (g_U10494)
    {
        return;
    }
    if (g_U18635[uParam0]._fU704._fU4)
    {
        return;
    }
    if (NOT g_U10494)
    {
        if (sub_48788( uParam0 ))
        {
            g_U10494 = 1;
        }
        return;
    }
    return;
}

int sub_48788(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        PRINT_HELP( "FRLOCJm" );
        break;
        case 6:
        PRINT_HELP( "FRLOCTr" );
        break;
        case 7:
        PRINT_HELP( "FRLOCCl" );
        break;
    }
    return 1;
}

void sub_49013()
{
    SET_MISSION_FLAG( 1 );
    sub_49030();
    l_U507 = 1;
    sub_49849( "Jim Friend Activity: Hangout" );
    return;
}

void sub_49030()
{
    sub_49039();
    return;
}

void sub_49039()
{
    int iVar2;

    iVar2 = 1;
    sub_49053( iVar2 );
    return;
}

void sub_49053(unknown uParam0)
{
    unknown uVar3;

    g_U12303 = 1;
    uVar3 = sub_9270( uParam0 );
    sub_49079( uVar3 );
    return;
}

void sub_49079(unknown uParam0)
{
    unknown uVar3;
    char[16] cVar4;

    uVar3 = g_U18635[uParam0]._fU144;
    StrCopy( ref cVar4, "", 16 );
    switch (uVar3)
    {
        case 6:
        StrCopy( ref cVar4, "AIRHOCKEY", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "ARMWRESTLING", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "BOATING", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "BOWLING", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "DARTS", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "DRINKING", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "EATING", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "GANGWAR", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "HANGOUT", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "HELIRIDES", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "HILOCARDS", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "LIFTS", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "POOL", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "RACES", 16 );
        break;
        case 20:
        StrCopy( ref cVar4, "SHOW", 16 );
        break;
        case 21:
        StrCopy( ref cVar4, "STRIPCLUB", 16 );
        break;
        case 22: return;
    }
    SCRIPT_ASSERT( "Flow_Player_Stats_Friend_Activity_Started: Unknown Activity ID" );
    return;
    sub_49626( cVar4 );
    return;
}

void sub_49626(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10987, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U10987 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10987 );
    return;
}

void sub_49849(unknown uParam0)
{
    return;
}

void sub_49886(unknown uParam0)
{
    if (NOT (g_U26739._fU0 == 19))
    {
        return;
    }
    if (NOT (sub_49915( uParam0 )))
    {
        return;
    }
    g_U26739._fU0 = uParam0;
    g_U26739._fU8 = 12;
    g_U26739._fU12 = 12;
    return;
}

int sub_49915(int iParam0)
{
    if (iParam0 < 9)
    {
        return 1;
    }
    if (sub_49939( iParam0 ))
    {
        return 1;
    }
    return 0;
}

int sub_49939(unknown uParam0)
{
    return 0;
}

void sub_50018(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 22; I++ )
    {
        l_U1184[I] = 0;
    }
    l_U1150 = g_U18635[uParam0]._fU144;
    sub_50087( uParam0, 6, 1 );
    sub_50087( uParam0, 7, 1 );
    sub_50087( uParam0, 10, 1 );
    sub_50087( uParam0, 11, 1 );
    sub_50087( uParam0, 12, 1 );
    sub_50087( uParam0, 16, 1 );
    sub_50087( uParam0, 18, 1 );
    sub_50087( uParam0, 20, 1 );
    sub_50087( uParam0, 21, 1 );
    sub_50087( uParam0, 9, 0 );
    sub_50494();
    sub_53744();
    sub_54891();
    sub_55724( 3 );
    l_U1152 = 0;
    l_U1207 = sub_18047( uParam0 );
    sub_55775( l_U1150 );
    l_U1157 = 0;
    if (NOT l_U1175)
    {
        l_U1174 = g_U10507;
        g_U10507 = 1;
        l_U1175 = 1;
    }
    return;
}

void sub_50087(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    if (NOT g_U15862[uParam0]._fU8[0]._fU0[iParam1])
    {
        if (NOT (sub_50128( uParam0, iParam1 )))
        {
            return;
        }
    }
    iVar5 = sub_50183( iParam1 );
    if (iVar5 == 12)
    {
        if (NOT (iParam1 == l_U1150))
        {
            l_U1184[iParam1] = uParam2;
        }
        return;
    }
    sub_50373( iVar5, uParam2 );
    return;
}

int sub_50128(unknown uParam0, int iParam1)
{
    if (iParam1 == 16)
    {
        return 1;
    }
    if (iParam1 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_50183(unknown uParam0)
{
    switch (uParam0)
    {
        case 6: return 0;
        case 7: return 1;
        case 8: return 2;
        case 9: return 10;
        case 10: return 3;
        case 15: return 4;
        case 16: return 5;
        case 18: return 6;
        case 20: return 8;
        case 21: return 9;
    }
    return 12;
}

void sub_50373(unknown uParam0, unknown uParam1)
{
    g_U26739._fU36[uParam0] = uParam1;
    return;
}

void sub_50494()
{
    int I;
    int[65] iVar3;

    l_U950 = 0;
    I = 0;
    array(ref iVar3, 65);
    for ( I = 0; I < 65; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 65; I++ )
    {
        if (g_U11583[I]._fU12 == 11)
        {
            if (l_U950 >= 16)
            {
                sub_3925( "InfoEat: Initialise_Eat_Destinations: Increase MAX_EAT_DESTINATIONS" );
            }
            l_U613[l_U950]._fU0 = I;
            iVar3[I] = l_U950;
            l_U950++;
        }
    }
    for ( I = 0; I < l_U950; I++ )
    {
        l_U951[I] = 0;
        l_U968[I] = 0;
    }
    sub_50828( iVar3[0], 1186.03200000, 381.45840000, 25.89440000, 273.88000000, 1175.87300000, 392.51750000, 29.59400000, -13.69880000, 0.00000000, -147.50740000, 1112014848 );
    sub_50828( iVar3[1], 1643.65800000, 245.58400000, 25.50000000, 243.86450000, 1670.37300000, 252.74060000, 27.71511000, 0.69950600, 0.00000000, 130.74310000, 1112014848 );
    sub_50828( iVar3[2], 882.92200000, -473.00300000, 16.30900000, 270.12920000, 876.81410000, -460.09550000, 15.35026000, 11.67727000, -0.00000000, -161.68270000, 1112014848 );
    sub_50828( iVar3[18], 443.42000000, 1526.31400000, 17.50700000, 268.88550000, 423.45340000, 1529.01700000, 34.79707000, -36.57798000, -11.22095000, -114.45570000, 1112014848 );
    sub_50828( iVar3[19], 1096.24500000, 1599.80300000, 18.02700000, 316.12340000, 1108.09200000, 1625.32100000, 21.56322000, -1.15058200, -0.00000000, 174.86560000, 1112014848 );
    sub_50828( iVar3[23], -146.61000000, 72.23300000, 16.02500000, 191.93320000, -172.63120000, 61.32870000, 55.90245000, -51.17967000, -0.00000000, -102.22700000, 1112014848 );
    sub_50828( iVar3[24], -619.91990000, 161.67230000, 6.02700000, 91.38610000, -645.24320000, 125.56240000, 22.66623000, -32.12400000, -0.00000000, -56.49996000, 1112014848 );
    sub_50828( iVar3[25], -174.31000000, 272.46700000, 15.98500000, 90.06450000, -206.20180000, 261.43610000, 35.89857000, -34.11337000, -0.00000000, -46.99197000, 1112014848 );
    sub_50828( iVar3[26], -433.07940000, 1178.45900000, 14.39740000, 91.17450000, -423.18860000, 1174.36700000, 24.29361000, -39.14743000, 6.24956800, 45.26580000, 1112014848 );
    sub_50828( iVar3[27], -136.81900000, -276.97200000, 14.53500000, 179.94550000, -123.23390000, -275.37620000, 12.44489000, 3.61987600, -0.00000000, 92.21399000, 1112014848 );
    sub_50828( iVar3[28], -394.37900000, 250.15800000, 15.55600000, 91.12110000, -410.06970000, 251.82990000, 20.99272000, -11.35220000, 0.00000000, -107.25360000, 1112014848 );
    sub_50828( iVar3[29], 118.72730000, 636.46600000, 16.10430000, 181.62540000, 126.37460000, 628.77320000, 20.18756000, -20.45377000, 0.00000000, 51.15732000, 1112014848 );
    sub_50828( iVar3[30], 33.67200000, 974.29800000, 15.96700000, 0.00000000, 37.68074000, 1005.61400000, 22.87771000, -23.27425000, 0.00000100, 145.58120000, 1112014848 );
    sub_50828( iVar3[51], -1002.54900000, 1604.37000000, 25.21300000, 214.78020000, -992.73790000, 1583.80300000, 36.61912000, -19.68591000, 0.00000100, 26.11061000, 1112014848 );
    sub_50828( iVar3[52], -1250.08700000, 1070.77300000, 21.16600000, 2.24760000, -1258.48500000, 1055.73500000, 25.37512000, -4.82664000, 0.00000000, -37.46955000, 1112014848 );
    sub_50828( iVar3[53], -1155.57900000, 1389.54100000, 25.63000000, 89.35540000, -1173.21800000, 1372.00600000, 22.45787000, 10.71952000, -0.00000000, -29.54759000, 45.00000000 );
    for ( I = 0; I < l_U950; I++ )
    {
        if (NOT l_U951[I])
        {
            sub_3925( "InfoEat: Initialise_Eat_Destinations: There is missing additional data - are there new FOOD Map Blips?" );
        }
    }
    sub_52397( iVar3[0], 1190.88800000, 377.97630000, 22.99430000, 1192.66900000, 380.07240000, 22.80760000, 1199.55100000, 378.34750000, 22.14610000 );
    sub_52397( iVar3[1], 1647.85500000, 237.53700000, 23.59960000, 1650.38400000, 239.51570000, 23.67850000, 1656.71000000, 235.95590000, 24.03360000 );
    sub_52397( iVar3[2], 881.32170000, -478.59920000, 14.02390000, 880.96580000, -476.32940000, 14.03240000, 872.43070000, -476.56120000, 13.75210000 );
    sub_52397( iVar3[18], 440.97420000, 1520.30900000, 15.37440000, 442.17310000, 1522.82200000, 15.23160000, 430.21190000, 1522.47900000, 15.65150000 );
    sub_52397( iVar3[19], 1099.11500000, 1596.27700000, 15.71580000, 1096.33900000, 1596.88800000, 15.71540000, 1089.31000000, 1588.39100000, 15.71540000 );
    sub_52397( iVar3[23], -139.76190000, 72.06730000, 13.75790000, -142.36840000, 73.33570000, 13.75790000, -143.59300000, 83.87050000, 13.75790000 );
    sub_52397( iVar3[24], -618.24940000, 149.04600000, 3.81270000, -619.85540000, 150.61060000, 3.81270000, -628.95990000, 149.64940000, 3.81270000 );
    sub_52397( iVar3[25], -174.20310000, 276.77800000, 13.81320000, -176.70890000, 274.19620000, 13.81320000, -186.13620000, 276.34440000, 13.81860000 );
    sub_52397( iVar3[26], -429.96930000, 1183.50600000, 12.05390000, -427.68120000, 1181.30100000, 12.16880000, -414.22730000, 1183.68000000, 12.81370000 );
    sub_52397( iVar3[27], -140.75110000, -278.08280000, 12.41860000, -139.00030000, -281.15140000, 12.82390000, -140.91290000, -291.95790000, 13.76250000 );
    sub_52397( iVar3[28], -393.03260000, 245.99450000, 13.39040000, -391.13880000, 248.59180000, 13.49290000, -381.94700000, 246.83300000, 13.75370000 );
    sub_52397( iVar3[29], 114.91250000, 640.95900000, 13.71340000, 116.64570000, 639.25250000, 13.71330000, 113.40200000, 629.90410000, 13.66730000 );
    sub_52397( iVar3[30], 29.85950000, 980.51480000, 13.66350000, 32.71410000, 982.65520000, 13.66330000, 30.02770000, 994.23700000, 13.68900000 );
    sub_52397( iVar3[51], -1006.38000000, 1609.67400000, 23.01270000, -1003.73300000, 1607.31800000, 23.01270000, -993.22520000, 1610.06000000, 22.96360000 );
    sub_52397( iVar3[52], -1244.90300000, 1070.48900000, 18.74650000, -1246.81000000, 1067.58300000, 18.70840000, -1245.11300000, 1055.32400000, 18.77390000 );
    sub_52397( iVar3[53], -1157.79600000, 1397.05500000, 23.41630000, -1160.04400000, 1392.25500000, 23.19830000, -1173.15100000, 1393.90200000, 21.29680000 );
    for ( I = 0; I < l_U950; I++ )
    {
        if (NOT l_U968[I])
        {
            sub_3925( "InfoEat: Initialise_Eat_Destinations: There is missing leave immediately data - are there new FOOD Map Blips?" );
        }
    }
    return;
}

void sub_50828(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    if (iParam0 < 0)
    {
        sub_3925( "InfoEat: Store_Additional_Eat_Info: ID less than 0" );
    }
    if (iParam0 >= l_U950)
    {
        sub_3925( "InfoEat: Store_Additional_Eat_Info: ID out of range" );
    }
    if (l_U951[iParam0])
    {
        sub_3925( "InfoEat: Store_Additional_Eat_Info: Duplicate additional data" );
    }
    l_U613[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U613[iParam0]._fU16 = uParam4;
    l_U613[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U613[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U613[iParam0]._fU44 = uParam11;
    l_U951[iParam0] = 1;
    return;
}

void sub_52397(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if (iParam0 < 0)
    {
        sub_3925( "InfoEat: Store_Leave_Immediately_Info: ID less than 0" );
    }
    if (iParam0 >= l_U950)
    {
        sub_3925( "InfoEat: Store_Leave_Immediately_Info: ID out of range" );
    }
    if (l_U968[iParam0])
    {
        sub_3925( "InfoEat: Store_Leave_Immediately_Info: Duplicate Leave Immediately data" );
    }
    l_U613[iParam0]._fU48 = {uParam1};
    l_U613[iParam0]._fU60 = {uParam4};
    l_U613[iParam0]._fU72 = {uParam7};
    l_U968[iParam0] = 1;
    return;
}

void sub_53744()
{
    int I;
    int[65] iVar3;

    l_U1053 = 0;
    I = 0;
    array(ref iVar3, 65);
    for ( I = 0; I < 65; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 65; I++ )
    {
        if (g_U11583[I]._fU12 == 8)
        {
            if (l_U1053 >= 6)
            {
                sub_3925( "InfoDrink: Initialise_Drink_Destinations: Increase MAX_DRINK_DESTINATIONS" );
            }
            l_U986[l_U1053]._fU0 = I;
            iVar3[I] = l_U1053;
            l_U1053++;
        }
    }
    for ( I = 0; I < l_U1053; I++ )
    {
        l_U1054[I] = 0;
    }
    sub_54072( iVar3[3], 920.89200000, -489.48600000, 16.62500000, 359.20360000, 912.35260000, -480.41450000, 19.36200000, -7.81876100, -0.00000000, -137.45620000 );
    sub_54072( iVar3[4], 1157.61500000, 736.30880000, 36.89920000, 264.94570000, 1190.61600000, 721.34830000, 46.09572000, -12.26530000, 0.00000000, 54.47784000 );
    sub_54072( iVar3[31], 118.11700000, 565.07100000, 15.97500000, 181.45510000, 128.69340000, 539.74560000, 20.18760000, -3.03840000, 0.00000000, 43.11860000 );
    sub_54072( iVar3[32], -477.32300000, 1414.07100000, 16.73800000, 270.89310000, -466.49520000, 1426.17700000, 14.79384000, 16.12449000, -0.00000000, 130.86440000 );
    sub_54072( iVar3[54], -1378.11200000, 510.59840000, 13.97960000, 95.79300000, -1382.08400000, 528.18780000, 16.99844000, -11.86755000, -0.00000000, -132.35800000 );
    sub_54072( iVar3[55], -994.40110000, 917.45700000, 15.12010000, 60.82650000, -1013.51600000, 891.85650000, 26.70177000, -7.98437500, -0.00000000, -53.09180000 );
    for ( I = 0; I < l_U1053; I++ )
    {
        if (NOT l_U1054[I])
        {
            sub_3925( "InfoDrink: Initialise_Drink_Destinations: There is missing additional data - are there new DRINK Map Blips?" );
        }
    }
    return;
}

void sub_54072(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (iParam0 < 0)
    {
        sub_3925( "InfoDrink: Store_Additional_Drink_Info: ID less than 0" );
    }
    if (iParam0 >= l_U1053)
    {
        sub_3925( "InfoDrink: Store_Additional_Drink_Info: ID out of range" );
    }
    if (l_U1054[iParam0])
    {
        sub_3925( "InfoDrink: Store_Additional_Drink_Info: Duplicate additional data" );
    }
    l_U986[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U986[iParam0]._fU16 = uParam4;
    l_U986[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U986[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U1054[iParam0] = 1;
    return;
}

void sub_54891()
{
    int I;
    int[65] iVar3;

    l_U1075 = 0;
    I = 0;
    array(ref iVar3, 65);
    for ( I = 0; I < 65; I++ )
    {
        iVar3[I] = -1;
    }
    for ( I = 0; I < 65; I++ )
    {
        if (g_U11583[I]._fU16 == 25)
        {
            if (l_U1075 >= 1)
            {
                sub_3925( "InfoShow: Initialise_Show_Destinations: Increase MAX_SHOW_DESTINATIONS" );
            }
            l_U1062[l_U1075]._fU0 = I;
            iVar3[I] = l_U1075;
            l_U1075++;
        }
    }
    for ( I = 0; I < l_U1075; I++ )
    {
        l_U1076[I] = 0;
    }
    sub_55218( iVar3[44], -352.57100000, 182.69200000, 16.05700000, 0.43160000, -365.76050000, 178.55880000, 17.75000000, 1.22540000, -0.00000000, -86.48420000, 0 );
    for ( I = 0; I < l_U1075; I++ )
    {
        if (NOT l_U1076[I])
        {
            sub_3925( "InfoShow: Initialise_Show_Destinations: There is missing additional data - are there new SHOW Map Blips?" );
        }
    }
    return;
}

void sub_55218(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    if (iParam0 < 0)
    {
        sub_3925( "InfoShow: Store_Additional_Show_Info: ID less than 0" );
    }
    if (iParam0 >= l_U1075)
    {
        sub_3925( "InfoShow: Store_Additional_Show_Info: ID out of range" );
    }
    if (l_U1076[iParam0])
    {
        sub_3925( "InfoShow: Store_Additional_Show_Info: Duplicate additional data" );
    }
    l_U1062[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    l_U1062[iParam0]._fU16 = uParam4;
    l_U1062[iParam0]._fU20 = {uParam5, uParam6, uParam7};
    l_U1062[iParam0]._fU32 = {uParam8, uParam9, uParam10};
    l_U1062[iParam0]._fU44 = uParam11;
    l_U1076[iParam0] = 1;
    return;
}

void sub_55724(unknown uParam0)
{
    g_U26739._fU32 = uParam0;
    return;
}

void sub_55775(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 65; I++ )
    {
        if (sub_15503( I ))
        {
            if (NOT (sub_55817( I, uParam0 )))
            {
                if (g_U12169[I]._fU0)
                {
                    if (NOT (DOES_BLIP_EXIST( g_U12169[I]._fU4 )))
                    {
                        if (NOT (DOES_BLIP_EXIST( g_U11583[I]._fU32 )))
                        {
                            sub_56008( ref g_U12169[I]._fU4, g_U11583[I]._fU0, g_U11583[I]._fU24, g_U11583[I]._fU20 );
                            SET_BLIP_AS_SHORT_RANGE( g_U12169[I]._fU4, 1 );
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_55817(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 12: return g_U11583[uParam0]._fU12 == 11;
        case 11: return g_U11583[uParam0]._fU12 == 8;
    }
    return 0;
}

void sub_56008(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U2 );
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

void sub_56275()
{
    l_U520 = 0;
    if (IS_CHAR_INJURED( l_U473 ))
    {
        l_U505 = 1;
        l_U506 = 0;
        return;
    }
    if (IS_GROUP_MEMBER( l_U473, sub_16526() ))
    {
        REMOVE_CHAR_FROM_GROUP( l_U473 );
    }
    if (sub_56362( l_U405 ))
    {
        return;
    }
    TASK_FOLLOW_NAV_MESH_AND_SLIDE_TO_COORD( l_U473, -1721.47500000, 337.99800000, 25.34170000, 2, -2, 1.00000000, 89.09279000 );
    if (NOT g_U39169)
    {
        PRINT_NOW( "HOGoInJm", 5000, 1 );
    }
    l_U501 = 3;
    l_U502 = 0;
    return;
}

int sub_56362(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_33325( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_33325( "\n speech is not playing" );
    }
    return 0;
}

void sub_56632()
{
    int iVar2;

    l_U520 = 0;
    iVar2 = 1;
    if (l_U502 == 0)
    {
        l_U502++;
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        if (IS_CHAR_INJURED( l_U473 ))
        {
            l_U505 = 1;
            l_U506 = 0;
            return;
        }
    }
    if (l_U502 == 1)
    {
        if (g_U39169)
        {
            CLEAR_THIS_PRINT( "HOGoInJm" );
            STOP_PED_SPEAKING( sub_2582(), 0 );
            l_U502 = 99;
        }
        else if (sub_56787())
        {
            l_U505 = 1;
            l_U506 = 7;
            return;
        }
    }
    if (l_U502 == 99)
    {
        l_U501 = 4;
        l_U502 = 0;
    }
    return;
}

int sub_56787()
{
    if (IS_CHAR_IN_AREA_2D( sub_2582(), -1795.00000000, 250.00000000, -1630.00000000, 415.00000000, 0 ))
    {
        return 0;
    }
    return 1;
}

void sub_56908()
{
    l_U520 = 0;
    if (l_U502 == 0)
    {
        PRINT_HELP( "HOActsJm" );
        l_U502++;
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        if (IS_CHAR_INJURED( l_U473 ))
        {
            l_U505 = 1;
            l_U506 = 0;
            return;
        }
    }
    if (NOT IS_MINIGAME_IN_PROGRESS())
    {
        sub_57023();
    }
    else
    {
        sub_15816();
    }
    sub_57094( l_U473 );
    if (l_U502 == 1)
    {
        l_U1169 = 1;
        if (IS_MINIGAME_IN_PROGRESS())
        {
            l_U612 = 1;
        }
        if ((sub_57794( l_U473 )) AND (sub_57711()))
        {
            l_U502++;
        }
    }
    if (l_U502 == 2)
    {
        sub_57888();
        l_U502 = 99;
    }
    if (l_U502 == 99)
    {
        l_U1151 = 1;
        sub_58073( 14, l_U1151, g_U26739._fU32 );
        g_U10502 = 1;
        l_U501 = 5;
        l_U502 = 0;
    }
    return;
}

void sub_57023()
{
    if (g_U38847[0]._fU0)
    {
        sub_42637();
        return;
    }
    sub_31046( l_U473, ref l_U474 );
    return;
}

void sub_57094(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    int iVar5;
    boolean bVar6;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return;
    }
    bVar3 = false;
    bVar4 = false;
    iVar5 = 0;
    bVar6 = false;
    vVar7 = {-1715.85400000, 346.69690000, 25.34170000};
    if (NOT g_U39169)
    {
        bVar4 = true;
        bVar3 = true;
    }
    if (NOT bVar4)
    {
        if (IS_CHAR_IN_AREA_3D( sub_2582(), -1721.36600000, 351.33080000, 22.00000000, -1713.69500000, 357.26020000, 27.15850000, 0 ))
        {
            bVar4 = true;
            iVar5 = 1;
        }
    }
    if (NOT bVar4)
    {
        if (IS_CHAR_IN_AREA_3D( sub_2582(), -1727.83700000, 339.26750000, 22.00000000, -1724.26500000, 342.61340000, 27.34170000, 0 ))
        {
            bVar4 = true;
            iVar5 = 1;
        }
    }
    if (NOT bVar4)
    {
        if ((IS_CHAR_GETTING_IN_TO_A_CAR( sub_2582() )) || (IS_CHAR_IN_ANY_CAR( sub_2582() )))
        {
            bVar6 = true;
        }
    }
    if (NOT bVar4)
    {
        GET_CHAR_COORDINATES( sub_2582(), ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
        if (uVar10._fU8 > 33.00000000)
        {
            bVar4 = true;
        }
    }
    if ((NOT bVar6) AND (NOT bVar4))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_16526() )))
        {
            CLEAR_CHAR_TASKS( uParam0 );
            SET_GROUP_MEMBER( sub_16526(), uParam0 );
        }
        return;
    }
    if (NOT (IS_GROUP_MEMBER( uParam0, sub_16526() )))
    {
        if (bVar3)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( uParam0, vVar7.x, vVar7.y, vVar7.z, 1.20000000, 1.20000000, 2.00000000, 0 )))
            {
                GET_SCRIPT_TASK_STATUS( uParam0, 27, ref iVar13 );
                if (iVar13 == 7)
                {
                    CLEAR_CHAR_TASKS( uParam0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, vVar7.x, vVar7.y, vVar7.z, 2, -2, 1.00000000 );
                }
            }
        }
        return;
    }
    REMOVE_CHAR_FROM_GROUP( uParam0 );
    CLEAR_CHAR_TASKS( uParam0 );
    TASK_STAND_STILL( uParam0, -2 );
    if (NOT l_U611)
    {
        if ((l_U612) AND (iVar5))
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_HELP( "HANGQUIT" );
                l_U611 = 1;
            }
        }
    }
    return;
}

int sub_57711()
{
    if (g_U39169)
    {
        return 0;
    }
    if (IS_CHAR_IN_AREA_2D( sub_2582(), -1750.00000000, 295.00000000, -1675.00000000, 370.00000000, 0 ))
    {
        return 0;
    }
    return 1;
}

int sub_57794(unknown uParam0)
{
    int iVar3;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 0;
    }
    iVar3 = nil;
    GET_INTERIOR_FROM_CHAR( uParam0, ref iVar3 );
    if (iVar3 == nil)
    {
        return 0;
    }
    return 1;
}

void sub_57888()
{
    if (NOT l_U612)
    {
        l_U505 = 1;
        l_U506 = 7;
        return;
    }
    l_U515 = 1;
    sub_57948( "PASS LEVEL: GOOD" );
    sub_57969( 1, 32 );
    return;
}

void sub_57948(unknown uParam0)
{
    return;
}

void sub_57969(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = g_U18635[uParam0]._fU104;
    sub_23178( uVar4 );
    sub_23282( uVar4, uParam0, uParam1, 0 );
    return;
}

void sub_58073(int iParam0, boolean bParam1, unknown uParam2)
{
    int iVar5;

    sub_43692();
    if (l_U556)
    {
        return;
    }
    if (iParam0 == 12)
    {
        sub_58109();
        return;
    }
    if (iParam0 == 11)
    {
        sub_58334();
        return;
    }
    if (sub_56362( l_U465 ))
    {
        return;
    }
    iVar5 = uParam2;
    if (NOT bParam1)
    {
        iVar5++;
    }
    if (NOT (iVar5 == 1))
    {
        return;
    }
    sub_58436();
    return;
}

void sub_58109()
{
    if (l_U556)
    {
        sub_58128();
        return;
    }
    l_U521._fU32 = 0;
    return;
}

void sub_58128()
{
    int iVar2;

    iVar2 = 0;
    sub_58146( ref l_U465, iVar2 );
    g_U18635[l_U416]._fU892._fU44 = -1;
    return;
}

void sub_58146(int iParam0, unknown uParam1)
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

void sub_58334()
{
    l_U521._fU0 = 1;
    l_U521._fU4 = 0;
    l_U521._fU8 = 1;
    l_U521._fU12 = 0;
    return;
}

void sub_58436()
{
    l_U521._fU0 = 1;
    l_U521._fU4 = 0;
    l_U521._fU8 = 0;
    l_U521._fU12 = 0;
    l_U521._fU16 = 0;
    return;
}

void sub_58532()
{
    l_U520 = 0;
    sub_15816();
    l_U501 = 6;
    l_U502 = 0;
    return;
}

void sub_58668()
{
    int iVar2;
    int iVar3;

    if (NOT l_U1169)
    {
        return;
    }
    iVar2 = sub_58701( 1, l_U473, ref l_U405 );
    if (NOT (iVar2 == 22))
    {
        sub_77294( iVar2 );
        l_U1158 = sub_77509( iVar2 );
        sub_77663( 1, iVar2, "E1FCJ3A", l_U415, l_U473, ref l_U411, ref l_U405 );
    }
    iVar2 = sub_82199();
    if (NOT (iVar2 == 22))
    {
        l_U464 = sub_82245( iVar2 );
        sub_82476( 1, iVar2, "E1FCJ3A", l_U415, l_U473, ref l_U411, ref l_U405 );
        sub_96105( iVar2, ref l_U557, ref l_U560, ref l_U563 );
        l_U556 = l_U1158;
        sub_58073( iVar2, l_U1151, g_U26739._fU32 );
    }
    iVar3 = sub_96228();
    if (iVar3 == 12)
    {
        iVar2 = 22;
    }
    else
    {
        iVar2 = sub_96285( iVar3 );
    }
    if (sub_96546( iVar2, l_U473 ))
    {
        sub_97502( 1, "E1FCJ3A", l_U415, l_U473, ref l_U411, ref l_U405 );
    }
    if (l_U1172)
    {
        l_U389 = 0;
        l_U1172 = 0;
    }
    if (l_U1173)
    {
        l_U389 = 1;
        l_U1173 = 0;
    }
    return;
}

int sub_58701(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    int Result;

    if (l_U1182)
    {
        uVar5 = sub_58722( uParam0 );
        sub_58829( uParam0, uParam1, uVar5 );
    }
    if (l_U1170)
    {
        sub_64449( uParam0, uParam1, uParam2 );
        return 22;
    }
    Result = 22;
    Result = 6;
    if (sub_75405( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 7;
    if (sub_75405( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 10;
    if (sub_75405( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 11;
    if (sub_75624( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 12;
    if (sub_75624( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 16;
    if (sub_75405( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 18;
    if (sub_75405( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 20;
    if (sub_75405( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 21;
    if (sub_75405( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    Result = 9;
    if (sub_75405( Result, uParam0, uParam1, uParam2 ))
    {
        return Result;
    }
    return 22;
}

int sub_58722(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: return 2;
    }
    SCRIPT_ASSERT( "Get_Drunk_Level: Unknown Friend ID" );
    return 0;
}

void sub_58829(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    if (NOT l_U1083)
    {
        sub_58853( uParam0, uParam2 );
        g_U10502 = 0;
        l_U1149 = 0;
        return;
    }
    if (NOT g_U10499)
    {
        sub_15301();
        return;
    }
    if (g_U10502)
    {
        sub_14026( 1 );
        g_U10502 = 0;
        return;
    }
    I = -1;
    sub_59998( I );
    sub_60143( I );
    sub_60318( I );
    sub_60990();
    sub_61971( I );
    sub_62109( uParam2 );
    sub_62272( I );
    sub_62599();
    if ((l_U1084._fU8) AND (NOT (IS_CHAR_DEAD( sub_2582() ))))
    {
        SET_CURRENT_CHAR_WEAPON( sub_2582(), 0, 0 );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
            {
                sub_59998( I );
                sub_60143( I );
                sub_63057( I );
                sub_63699( I );
                sub_62272( I );
                sub_60318( I );
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
                {
                    sub_61971( I );
                }
                if ((l_U1099[I]._fU8) AND (NOT (IS_CHAR_DEAD( g_U38857[I]._fU0 ))))
                {
                    SET_CURRENT_CHAR_WEAPON( g_U38857[I]._fU0, 0, 0 );
                }
            }
        }
    }
    if (l_U1149)
    {
        return;
    }
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
            {
                if (l_U1099[I]._fU8)
                {
                    return;
                }
            }
        }
    }
    sub_43692();
    l_U1149 = 1;
    return;
}

void sub_58853(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    int iVar6;
    int iVar7;

    sub_58866( ref l_U1084 );
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        sub_58866( ref l_U1099[I] );
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    l_U1084._fU8 = 0;
    iVar6 = sub_14369( -1, uParam1 );
    l_U1084._fU48 = iVar5 + iVar6;
    iVar7 = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            l_U1099[I]._fU8 = 0;
            iVar7 = sub_14369( I, uParam1 );
            l_U1099[I]._fU48 = iVar5 + iVar6;
        }
    }
    if (iVar6 > 0)
    {
        l_U1084._fU8 = 1;
        for ( I = 0; I < 3; I++ )
        {
            if (g_U38847[I]._fU0)
            {
                l_U1099[I]._fU8 = 1;
            }
        }
    }
    sub_14049( uParam1 );
    sub_59232( uParam1 );
    sub_59671( ref l_U1084 );
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            sub_59671( ref l_U1099[I] );
        }
    }
    l_U1083 = 1;
    g_U10499 = 1;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U38847[I]._fU0)
        {
            if (NOT (IS_CHAR_DEAD( g_U38857[I]._fU0 )))
            {
                SET_PED_IS_DRUNK( g_U38857[I]._fU0, 1 );
            }
        }
    }
    if (g_U10501)
    {
        DO_SCREEN_FADE_IN( 500 );
        g_U10501 = 0;
    }
    g_U10502 = 0;
    return;
}

void sub_58866(int iParam0)
{
    iParam0->_fU0 = 0;
    iParam0->_fU4 = 0;
    iParam0->_fU8 = 0;
    iParam0->_fU12 = 0;
    iParam0->_fU16 = 0;
    iParam0->_fU20 = 0;
    iParam0->_fU24 = 0;
    iParam0->_fU28 = {0.00000000, 0.00000000, 0.00000000};
    iParam0->_fU40 = 0;
    iParam0->_fU44 = 0;
    iParam0->_fU48 = 0;
    iParam0->_fU52 = 0;
    iParam0->_fU56 = 0;
    return;
}

void sub_59232(unknown uParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_DEAD( sub_2582() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar3 );
            fVar4 = 0.00000000;
            GET_CAR_SPEED( uVar3, ref fVar4 );
            if (fVar4 < 0.04000000)
            {
                l_U1145 = 0.00000000;
                return;
            }
        }
    }
    switch (uParam0)
    {
        case 0:
        l_U1145 = 0.00000000;
        break;
        case 1:
        l_U1145 = sub_59414( 0.05000000, 0.02000000 );
        break;
        case 2:
        l_U1145 = sub_59414( 0.07000000, 0.03000000 );
        break;
        case 3:
        l_U1145 = sub_59414( 0.09000000, 0.04000000 );
        break;
        case 4:
        l_U1145 = sub_59414( 0.10000000, 0.05000000 );
        break;
        case 5:
        l_U1145 = sub_59414( 0.13000000, 0.06000000 );
        break;
    }
    return;
}

void sub_59414(unknown uParam0, unknown uParam1)
{
    float Result;
    float fVar5;

    Result = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( -uParam0, uParam0, ref Result );
    fVar5 = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, uParam1, ref fVar5 );
    if (Result < 0.00000000)
    {
        Result -= fVar5;
    }
    else
    {
        Result += fVar5;
    }
    if (Result < -1.00000000)
    {
        Result = -1.00000000;
    }
    if (Result > 1.00000000)
    {
        Result = 1.00000000;
    }
    return Result;
}

void sub_59671(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar3 = 3;
    iVar4 = 7;
    iVar5 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( iVar3, iVar4, ref iVar5 );
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar5 *= 100;
    iParam0->_fU40 = iVar6 + iVar5;
    return;
}

void sub_59998(unknown uParam0)
{
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
    int iVar18;

    uVar3 = {sub_14609( uParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (uVar3._fU4)
    {
        return;
    }
    iVar18 = 0;
    GET_GAME_TIMER( ref iVar18 );
    if (uVar3._fU48 < iVar18)
    {
        uVar3._fU8 = 0;
    }
    sub_60078( uParam0, ref uVar3 );
    return;
}

void sub_60078(int iParam0, unknown uParam1)
{
    if (iParam0 == -1)
    {
        l_U1084 = {(uParam1^)};
    }
    else
    {
        l_U1099[iParam0] = {(uParam1^)};
    }
    return;
}

void sub_60143(int iParam0)
{
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
    int iVar18;
    unknown uVar19;
    int iVar20;

    uVar3 = {sub_14609( iParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if ((uVar3._fU4) || (uVar3._fU0))
    {
        return;
    }
    if (uVar3._fU20)
    {
        return;
    }
    iVar18 = 0;
    GET_GAME_TIMER( ref iVar18 );
    if (iVar18 > uVar3._fU48)
    {
        if (iParam0 == -1)
        {
            g_U10499 = 0;
        }
        sub_14512( iParam0 );
        return;
    }
    uVar19 = sub_14523( iParam0 );
    if (IS_PED_RAGDOLL( uVar19 ))
    {
        return;
    }
    iVar20 = uVar3._fU48 - iVar18;
    sub_14727( iParam0, iVar20 );
    return;
}

void sub_60318(unknown uParam0)
{
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
    int iVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    int iVar26;
    int iVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    boolean bVar31;

    uVar3 = {sub_14609( uParam0 )};
    iVar18 = 0;
    GET_GAME_TIMER( ref iVar18 );
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (uVar3._fU4)
    {
        return;
    }
    if (uVar3._fU20)
    {
        return;
    }
    uVar19 = sub_14523( uParam0 );
    GET_PED_BONE_POSITION( uVar19, 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar20 );
    fVar23 = uVar20._fU8 + 2.00000000;
    fVar24 = 0.00000000;
    GET_GROUND_Z_FOR_3D_COORD( uVar20._fU0, uVar20._fU4, fVar23, ref fVar24 );
    fVar25 = uVar20._fU8 - fVar24;
    if (fVar25 < 0)
    {
        fVar25 *= -1.00000000;
    }
    iVar26 = 0;
    if (NOT (fVar25 > 1.20000000))
    {
        iVar26 = 1;
    }
    if (uVar3._fU0)
    {
        if (fVar25 > 1.20000000)
        {
            if (uVar3._fU48 > iVar18)
            {
                iVar27 = uVar3._fU48 - iVar18;
                sub_14727( uParam0, iVar27 );
            }
            uVar3._fU52 = 0;
            uVar3._fU0 = 0;
        }
        sub_60078( uParam0, ref uVar3 );
        return;
    }
    if (uVar3._fU16)
    {
        if (iVar18 > uVar3._fU52)
        {
            uVar3._fU16 = 0;
            uVar3._fU0 = 1;
            sub_14512( uParam0 );
            uVar3._fU52 = 0;
        }
        sub_60078( uParam0, ref uVar3 );
        return;
    }
    if (uVar3._fU12)
    {
        if (uVar3._fU56 < iVar18)
        {
            uVar3._fU56 = 0;
            uVar3._fU52 = iVar18 + 100;
            uVar3._fU12 = 0;
            uVar3._fU16 = 1;
        }
        else
        {
            GET_CHAR_VELOCITY( uVar19, ref uVar28._fU0, ref uVar28._fU4, ref uVar28._fU8 );
            if ((VMAG( uVar28 )) < 0.10000000)
            {
                if (uVar3._fU52 == 0)
                {
                    uVar3._fU52 = iVar18 + 1000;
                }
                else if (uVar3._fU52 < iVar18)
                {
                    uVar3._fU56 = 0;
                    uVar3._fU52 = iVar18 + 100;
                    uVar3._fU12 = 0;
                    uVar3._fU16 = 1;
                }
            }
            else
            {
                uVar3._fU52 = 0;
            }
        }
        sub_60078( uParam0, ref uVar3 );
        return;
    }
    bVar31 = true;
    if (IS_PED_RAGDOLL( uVar19 ))
    {
        if (CHECK_NM_FEEDBACK( uVar19, 80, 1 ))
        {
            bVar31 = false;
        }
    }
    if ((iVar26) || (NOT bVar31))
    {
        uVar3._fU12 = 1;
        uVar3._fU52 = 0;
        uVar3._fU56 = iVar18 + 3000;
        sub_60078( uParam0, ref uVar3 );
        return;
    }
    uVar3._fU52 = 0;
    sub_60078( uParam0, ref uVar3 );
    return;
}

void sub_60990()
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
    boolean bVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    int iVar21;
    int iVar22;
    boolean bVar23;
    float fVar24;
    float fVar25;
    boolean bVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    int iVar31;
    boolean bVar32;
    unknown uVar33;
    int iVar34;
    int iVar35;
    unknown uVar36;
    unknown uVar37;

    uVar2 = {sub_14609( -1 )};
    if (NOT uVar2._fU8)
    {
        return;
    }
    if (uVar2._fU0)
    {
        return;
    }
    if (uVar2._fU20)
    {
        return;
    }
    if ((uVar2._fU12) || (uVar2._fU16))
    {
        return;
    }
    bVar17 = true;
    if (NOT (l_U1147 == nil))
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U1147 )))
        {
            l_U1147 = nil;
        }
    }
    if (l_U1147 == nil)
    {
        GET_CHAR_COORDINATES( sub_2582(), ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
        iVar21 = 70;
        l_U1147 = GET_CLOSEST_CAR( uVar18, 7.00000000, 0, iVar21 );
        l_U1148 = 0;
    }
    if (l_U1147 == nil)
    {
        bVar17 = false;
    }
    iVar22 = 1;
    bVar23 = false;
    if (bVar17)
    {
        fVar24 = -1.00000000;
        fVar25 = 2.00000000;
        bVar26 = false;
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1147, fVar24, 0.00000000, 0.00000000, ref uVar27._fU0, ref uVar27._fU4, ref uVar27._fU8 );
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2582(), uVar27._fU0, uVar27._fU4, uVar27._fU8, fVar25, fVar25, fVar25, 0 ))
        {
            bVar26 = true;
            iVar22 = 1;
        }
        if ((NOT bVar23) AND (NOT bVar26))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U1147, 1.00000000, 0.00000000, 0.00000000, ref uVar27._fU0, ref uVar27._fU4, ref uVar27._fU8 );
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2582(), uVar27._fU0, uVar27._fU4, uVar27._fU8, 2.00000000, 2.00000000, 2.00000000, 0 ))
            {
                bVar26 = true;
                iVar22 = 0;
            }
        }
        if (NOT bVar26)
        {
            bVar17 = false;
            l_U1147 = nil;
        }
    }
    iVar30 = 0;
    GET_GAME_TIMER( ref iVar30 );
    iVar31 = nil;
    if (uVar2._fU4)
    {
        bVar32 = false;
        if (sub_30632( sub_2582() ))
        {
            bVar32 = true;
        }
        if (NOT bVar32)
        {
            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar33 );
                GET_DRIVER_OF_CAR( uVar33, ref iVar31 );
                if (iVar31 == sub_2582())
                {
                    bVar32 = true;
                }
                else if (NOT l_U1148)
                {
                    TASK_SHUFFLE_TO_NEXT_CAR_SEAT( sub_2582(), uVar33 );
                    l_U1148 = 1;
                    uVar2._fU56 = iVar30 + 1000;
                }
                else if (iVar30 > uVar2._fU56)
                {
                    GET_SCRIPT_TASK_STATUS( sub_2582(), 39, ref iVar34 );
                    if (NOT (iVar34 == 7))
                    {
                        uVar2._fU56 = iVar30 + 1000;
                    }
                    else
                    {
                        l_U1148 = 0;
                    }
                };;;
            }
        }
        if (bVar32)
        {
            uVar2._fU4 = 0;
            uVar2._fU20 = 1;
            l_U1148 = 0;
        }
        else if (NOT bVar17)
        {
            CLEAR_CHAR_TASKS( sub_2582() );
            uVar2._fU4 = 0;
            if (uVar2._fU48 > iVar30)
            {
                iVar35 = uVar2._fU48 - iVar30;
                sub_14727( -1, iVar35 );
            }
        }
        sub_60078( -1, ref uVar2 );
        return;
    }
    if (NOT bVar17)
    {
        return;
    }
    if (NOT (IS_CONTROL_PRESSED( 2, 3 )))
    {
        return;
    }
    sub_14512( -1 );
    SET_NEXT_DESIRED_MOVE_STATE( 2 );
    GET_CAR_MODEL( l_U1147, ref uVar36 );
    uVar37 = IS_THIS_MODEL_A_BIKE( uVar36 );
    if ((uVar37) || (iVar22))
    {
        TASK_ENTER_CAR_AS_DRIVER( sub_2582(), l_U1147, -1 );
    }
    else
    {
        TASK_ENTER_CAR_AS_PASSENGER( sub_2582(), l_U1147, -1, 0 );
    }
    uVar2._fU4 = 1;
    sub_60078( -1, ref uVar2 );
    return;
}

void sub_61971(unknown uParam0)
{
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
    int iVar19;
    int iVar20;

    uVar3 = {sub_14609( uParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (NOT uVar3._fU20)
    {
        return;
    }
    uVar18 = sub_14523( uParam0 );
    if (IS_CHAR_IN_ANY_CAR( uVar18 ))
    {
        return;
    }
    iVar19 = 0;
    GET_GAME_TIMER( ref iVar19 );
    iVar20 = uVar3._fU48 - iVar19;
    sub_14727( uParam0, iVar20 );
    uVar3._fU20 = 0;
    l_U1148 = 0;
    sub_60078( uParam0, ref uVar3 );
    return;
}

void sub_62109(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    boolean bVar5;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2582() )))
    {
        return;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (l_U1082 < iVar3)
    {
        sub_15301();
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar4 );
    bVar5 = false;
    if (l_U1146 == 0)
    {
        bVar5 = true;
    }
    else if (iVar3 > l_U1146)
    {
        bVar5 = true;
    }
    if (bVar5)
    {
        sub_59232( uParam0 );
        l_U1146 = iVar3 + 1000;
    }
    SET_VEHICLE_STEER_BIAS( uVar4, l_U1145 );
    return;
}

void sub_62272(unknown uParam0)
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
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    int iVar19;
    unknown uVar20;
    int iVar21;
    float fVar22;
    int iVar23;
    float fVar24;
    vector vVar25;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (l_U1082 < iVar3)
    {
        return;
    }
    uVar4 = {sub_14609( uParam0 )};
    if (iVar3 < uVar4._fU40)
    {
        return;
    }
    sub_59671( ref uVar4 );
    sub_60078( uParam0, ref uVar4 );
    iVar19 = sub_14523( uParam0 );
    if (IS_CHAR_INJURED( iVar19 ))
    {
        return;
    }
    if (NOT (IS_CHAR_ON_ANY_BIKE( iVar19 )))
    {
        return;
    }
    uVar20 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iVar19, ref uVar20 );
    iVar21 = nil;
    GET_DRIVER_OF_CAR( uVar20, ref iVar21 );
    if (NOT (iVar21 == iVar19))
    {
        return;
    }
    fVar22 = 0.00000000;
    GET_CAR_SPEED( uVar20, ref fVar22 );
    if (fVar22 < 0.04000000)
    {
        return;
    }
    iVar23 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref iVar23 );
    fVar24 = TO_FLOAT( iVar23 );
    fVar24 /= 2;
    fVar24 -= 2.00000000;
    vVar25 = {0.00000000, 0.21000000, 0.00000000};
    uVar28 = {fVar24, 0.00000000, 0.00000000};
    APPLY_FORCE_TO_CAR( uVar20, 1, uVar28, vVar25, 0, 1, 1, 1 );
    return;
}

void sub_62599()
{
    int iVar2;
    unknown uVar3;
    float fVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_PLAYER_PLAYING( sub_2958() )))
    {
        return;
    }
    if (sub_30632( sub_2582() ))
    {
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
    {
        return;
    }
    if (IS_WANTED_LEVEL_GREATER( sub_2958(), 0 ))
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U1082 < iVar2)
    {
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar3 );
    GET_CAR_SPEED( uVar3, ref fVar4 );
    if (fVar4 < 0.50000000)
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_2582(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    uVar8._fU0 = uVar5._fU0 - 30.00000000;
    uVar8._fU4 = uVar5._fU4 - 30.00000000;
    uVar8._fU8 = uVar5._fU8 - 3.00000000;
    uVar11._fU0 = uVar5._fU0 + 30.00000000;
    uVar11._fU4 = uVar5._fU4 + 30.00000000;
    uVar11._fU8 = uVar5._fU8 + 3.00000000;
    if (NOT (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar11._fU0, uVar11._fU4, uVar11._fU8 )))
    {
        return;
    }
    ALTER_WANTED_LEVEL_NO_DROP( sub_2958(), 1 );
    APPLY_WANTED_LEVEL_CHANGE_NOW( sub_2958() );
    return;
}

void sub_63057(unknown uParam0)
{
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
    int iVar19;
    boolean bVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    float fVar30;
    int iVar31;

    uVar3 = sub_14523( uParam0 );
    if (IS_CHAR_DEAD( uVar3 ))
    {
        return;
    }
    uVar4 = {sub_14609( uParam0 )};
    if (NOT uVar4._fU8)
    {
        return;
    }
    if (uVar4._fU20)
    {
        return;
    }
    if ((uVar4._fU4) || (uVar4._fU0))
    {
        return;
    }
    if ((uVar4._fU16) || (uVar4._fU12))
    {
        return;
    }
    if (NOT (IS_PED_RAGDOLL( uVar3 )))
    {
        return;
    }
    iVar19 = 0;
    GET_GAME_TIMER( ref iVar19 );
    bVar20 = false;
    if (uVar4._fU44 == 0)
    {
        bVar20 = true;
    }
    else if (uVar4._fU44 < iVar19)
    {
        bVar20 = true;
    }
    if (NOT bVar20)
    {
        return;
    }
    if (IS_CHAR_INJURED( sub_2582() ))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_2582(), ref uVar21._fU0, ref uVar21._fU4, ref uVar21._fU8 );
    uVar4._fU24 = 0;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() ))
    {
        if (IS_VEH_DRIVEABLE( g_U38857[uParam0]._fU4 ))
        {
            GET_CAR_COORDINATES( g_U38857[uParam0]._fU4, ref uVar24._fU0, ref uVar24._fU4, ref uVar24._fU8 );
            GET_CHAR_COORDINATES( g_U38857[uParam0]._fU0, ref uVar27._fU0, ref uVar27._fU4, ref uVar27._fU8 );
            fVar30 = 0.00000000;
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar24._fU0, uVar24._fU4, uVar24._fU8, uVar27._fU0, uVar27._fU4, uVar27._fU8, ref fVar30 );
            if (fVar30 < 75.00000000)
            {
                uVar21 = {uVar24};
                uVar4._fU24 = 1;
                uVar4._fU28 = {uVar21};
            }
        }
    }
    iVar31 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar31 );
    if (iVar31 < 50)
    {
        uVar21._fU0 += 1.00000000;
    }
    else
    {
        uVar21._fU0 -= 1.00000000;
    }
    iVar31 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar31 );
    if (iVar31 < 50)
    {
        uVar21._fU4 += 1.00000000;
    }
    else
    {
        uVar21._fU4 -= 1.00000000;
    }
    CREATE_NM_MESSAGE( 1, 119 );
    SET_NM_MESSAGE_VEC3( 121, uVar21 );
    SET_NM_MESSAGE_FLOAT( 122, 0.20000000 );
    SEND_NM_MESSAGE( uVar3 );
    uVar4._fU44 = iVar19 + 5000;
    sub_60078( uParam0, ref uVar4 );
    return;
}

void sub_63699(int iParam0)
{
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
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    float fVar25;
    boolean bVar26;
    unknown uVar27;
    int iVar28;

    uVar3 = {sub_14609( iParam0 )};
    if (NOT uVar3._fU8)
    {
        return;
    }
    if (uVar3._fU0)
    {
        return;
    }
    if (uVar3._fU20)
    {
        return;
    }
    if ((uVar3._fU12) || (uVar3._fU16))
    {
        return;
    }
    uVar18 = sub_14523( iParam0 );
    if (uVar3._fU4)
    {
        if (IS_CHAR_IN_ANY_CAR( uVar18 ))
        {
            uVar3._fU4 = 0;
            uVar3._fU20 = 1;
        }
        sub_60078( iParam0, ref uVar3 );
        return;
    }
    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
    {
        return;
    }
    if (uVar3._fU24)
    {
        uVar19 = {uVar3._fU28};
    }
    else
    {
        GET_CHAR_COORDINATES( sub_2582(), ref uVar19._fU0, ref uVar19._fU4, ref uVar19._fU8 );
    }
    GET_CHAR_COORDINATES( uVar18, ref uVar22._fU0, ref uVar22._fU4, ref uVar22._fU8 );
    fVar25 = 0.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar19._fU0, uVar19._fU4, uVar19._fU8, uVar22._fU0, uVar22._fU4, uVar22._fU8, ref fVar25 );
    if (NOT (fVar25 < 3.00000000))
    {
        return;
    }
    bVar26 = false;
    if (uVar3._fU24)
    {
        uVar27 = g_U38857[iParam0]._fU4;
        if (IS_VEH_DRIVEABLE( uVar27 ))
        {
            bVar26 = true;
        }
    }
    else
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar27 );
        iVar28 = 0;
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar27, ref iVar28 );
        if (iParam0 <= iVar28)
        {
            if (IS_CAR_PASSENGER_SEAT_FREE( uVar27, iParam0 ))
            {
                bVar26 = true;
            }
        }
    }
    if (bVar26)
    {
        sub_14512( iParam0 );
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        if (uVar3._fU24)
        {
            TASK_ENTER_CAR_AS_DRIVER( uVar18, uVar27, -2 );
        }
        else
        {
            TASK_ENTER_CAR_AS_PASSENGER( uVar18, uVar27, -2, iParam0 );
        }
        uVar3._fU4 = 1;
    }
    sub_60078( iParam0, ref uVar3 );
    return;
}

void sub_64449(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (l_U1177)
    {
        case 0:
        sub_64510();
        break;
        case 1:
        sub_68123();
        break;
        case 2:
        sub_69955( uParam0, uParam1, uParam2 );
        break;
        case 3:
        sub_71455( uParam0, uParam1, uParam2 );
        break;
        case 4:
        sub_73846( uParam0 );
        break;
    }
    return;
}

void sub_64510()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U1178 == 0)
    {
        sub_64542();
        l_U1176 = iVar2 + 3000;
        if (l_U1171 == 18)
        {
            sub_64594();
        }
        l_U1178++;
    }
    if (l_U1178 == 1)
    {
        if (l_U1171 == 20)
        {
            if ((iVar2 > l_U1176) || (IS_SCREEN_FADED_OUT()))
            {
                sub_64594();
                uVar3 = {l_U1062[0]._fU4};
                uVar6 = l_U1062[0]._fU16;
                sub_65132( uVar3, uVar6 );
                l_U1178++;
            }
        }
        else
        {
            l_U1178++;
        }
    }
    if (l_U1178 == 2)
    {
        if (sub_67970())
        {
            if (l_U1171 == 20)
            {
                sub_68011();
            }
            l_U1178++;
        }
    }
    if (l_U1178 == 3)
    {
        if (IS_SCREEN_FADED_IN())
        {
            l_U1178 = 99;
        }
    }
    if (l_U1178 == 99)
    {
        l_U1177 = 1;
        l_U1178 = 0;
    }
    return;
}

void sub_64542()
{
    g_U10509 = 1;
    g_U10648 = 0;
    return;
}

void sub_64594()
{
    if (sub_37394( 0 ))
    {
        sub_64645( ref g_U38857[0], ref g_U38857[0]._fU0, ref g_U38857[0]._fU4 );
    }
    if (sub_37394( 1 ))
    {
        sub_64645( ref g_U38857[1], ref g_U38857[1]._fU0, ref g_U38857[1]._fU4 );
    }
    if (sub_37394( 2 ))
    {
        sub_64645( ref g_U38857[2], ref g_U38857[2]._fU0, ref g_U38857[2]._fU4 );
    }
    return;
}

void sub_64645(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_64710( iParam0 ) ))
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if ((iParam0->_fU0 != g_U11081[1]) AND (iParam0->_fU0 != g_U11081[0]))
        {
            g_U11114 = 1;
        }
        TASK_STAND_STILL( iParam0->_fU0, -2 );
    }
    return;
}

void sub_64710(int iParam0)
{
    unknown Result;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref Result );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            GET_DRIVER_OF_CAR( Result, ref iVar4 );
            if (iVar4 == iParam0->_fU0)
            {
                return Result;
            }
        }
    }
    return nil;
}

void sub_65132(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;

    iVar6 = 0;
    iVar7 = 0;
    iVar8 = nil;
    PRINTSTRING( "\nKGMBIKES..........Warp_Friend_Bikes_To_Activity\n" );
    if (sub_37394( 0 ))
    {
        PRINTSTRING( "KGMBIKES..........JIM ACTIVE\n" );
        iVar8 = g_U38857[0]._fU4;
        if ((IS_VEH_DRIVEABLE( iVar8 )) AND (NOT (iVar8 == nil)))
        {
            PRINTSTRING( "KGMBIKES.............start search at bike location: " );
            PRINTINT( iVar6 );
            PRINTNL();
            iVar7 = sub_65387( iVar6, iVar8, uParam0, uParam3 );
            if (NOT (iVar7 == iVar6))
            {
                if (iVar7 < 0)
                {
                    PRINTSTRING( "KGMBIKES.............ran out of potential bike locations\n" );
                    return;
                }
                PRINTSTRING( "KGMBIKES.............found a valid bike location\n" );
            }
            else
            {
                PRINTSTRING( "KGMBIKES.............search conditions failed\n" );
            }
        }
        else
        {
            PRINTSTRING( "KGMBIKES.............but no bike\n" );
        }
    }
    iVar6 = iVar7;
    if (sub_37394( 1 ))
    {
        PRINTSTRING( "\nKGMBIKES..........TERRY ACTIVE\n" );
        iVar8 = g_U38857[1]._fU4;
        if ((IS_VEH_DRIVEABLE( iVar8 )) AND (NOT (iVar8 == nil)))
        {
            PRINTSTRING( "KGMBIKES.............start search at bike location: " );
            PRINTINT( iVar6 );
            PRINTNL();
            iVar7 = sub_65387( iVar6, iVar8, uParam0, uParam3 );
            if (NOT (iVar7 == iVar6))
            {
                if (iVar7 < 0)
                {
                    PRINTSTRING( "KGMBIKES.............ran out of potential bike locations\n" );
                    return;
                }
                PRINTSTRING( "KGMBIKES.............found a valid bike location\n" );
            }
            else
            {
                PRINTSTRING( "KGMBIKES.............search conditions failed\n" );
            }
        }
        else
        {
            PRINTSTRING( "KGMBIKES.............but no bike\n" );
        }
    }
    iVar6 = iVar7;
    if (sub_37394( 2 ))
    {
        PRINTSTRING( "\nKGMBIKES..........CLAY ACTIVE\n" );
        iVar8 = g_U38857[2]._fU4;
        if ((IS_VEH_DRIVEABLE( iVar8 )) AND (NOT (iVar8 == nil)))
        {
            PRINTSTRING( "KGMBIKES.............start search at bike location: " );
            PRINTINT( iVar6 );
            PRINTNL();
            iVar7 = sub_65387( iVar6, iVar8, uParam0, uParam3 );
            if (NOT (iVar7 == iVar6))
            {
                if (iVar7 < 0)
                {
                    PRINTSTRING( "KGMBIKES.............ran out of potential bike locations\n" );
                    return;
                }
                PRINTSTRING( "KGMBIKES.............found a valid bike location\n" );
            }
            else
            {
                PRINTSTRING( "KGMBIKES.............search conditions failed\n" );
            }
        }
        else
        {
            PRINTSTRING( "KGMBIKES.............but no bike\n" );
        }
    }
    return;
}

int sub_65387(int Result, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    vector vVar8;
    float fVar11;
    boolean bVar12;

    vVar8 = {0.00000000, 0.00000000, 0.00000000};
    fVar11 = 0.00000000;
    bVar12 = true;
    while (bVar12)
    {
        PRINTSTRING( "KGMBIKES................testing potential bike location: " );
        PRINTINT( Result );
        PRINTNL();
        if (sub_65525( Result, uParam2, ref vVar8 ))
        {
            PRINTSTRING( "KGMBIKES................possible potential location\n" );
            Result++;
            GET_GROUND_Z_FOR_3D_COORD( uParam2._fU0, uParam2._fU4, uParam2._fU8 + 2.00000000, ref fVar11 );
            if (sub_66028( fVar11, vVar8 ))
            {
                CLEAR_AREA( vVar8.x, vVar8.y, vVar8.z, 1.00000000, 0 );
                SET_CAR_HEADING( uParam1, sub_66317( uParam5 ) );
                SET_CAR_COORDINATES( uParam1, vVar8.x, vVar8.y, vVar8.z + 1.00000000 );
                SET_CAR_ON_GROUND_PROPERLY( uParam1 );
                PRINTSTRING( "KGMBIKES................potential location - VALID\n" );
                return Result;
            }
            else
            {
                PRINTSTRING( "KGMBIKES................ground Zs are too far apart - NOT VALID\n" );
            }
        }
        else
        {
            PRINTSTRING( "KGMBIKES................RUN OUT OF POTENTIAL LOCATIONS\n" );
            return -1;
        }
    }
    PRINTSTRING( "KGMBIKES................RUN OUT OF POTENTIAL LOCATIONS\n" );
    return -1;
}

int sub_65525(unknown uParam0, vector vParam1, unknown uParam4)
{
    vector vVar7;

    vVar7 = {0.00000000, 0.00000000, 0.00000000};
    switch (uParam0)
    {
        case 0:
        vVar7 = {-3.00000000, 0.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 1:
        vVar7 = {-2.00000000, 3.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 2:
        vVar7 = {1.50000000, 1.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 3:
        vVar7 = {2.50000000, -0.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 4:
        vVar7 = {2.00000000, -4.00000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 5:
        vVar7 = {-1.00000000, -2.00000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 6:
        vVar7 = {-4.00000000, -4.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        case 7:
        vVar7 = {-6.00000000, -1.50000000, 0.00000000};
        (uParam4^) = {vVar7 + vParam1};
        break;
        default: return 0;
    }
    return 1;
}

int sub_66028(float fParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    float fVar6;
    float fVar7;
    float fVar8;

    fVar6 = uParam1._fU8 + 2.00000000;
    fVar7 = 0.00000000;
    GET_GROUND_Z_FOR_3D_COORD( uParam1._fU0, uParam1._fU4, fVar6, ref fVar7 );
    fVar8 = fVar7 - fParam0;
    if (fParam0 > fVar7)
    {
        fVar8 = fParam0 - fVar7;
    }
    PRINTSTRING( "Comparing Ground Zs: 1) " );
    PRINTFLOAT( fParam0 );
    PRINTSTRING( "   2) " );
    PRINTFLOAT( fVar7 );
    PRINTSTRING( "    DIFF: " );
    PRINTFLOAT( fVar8 );
    if (fVar8 <= 0.25000000)
    {
        PRINTSTRING( "    ACCEPTABLE\n" );
        return 1;
    }
    PRINTSTRING( "    not acceptable\n" );
    return 0;
}

void sub_66317(unknown uParam0)
{
    float fVar3;
    float fVar4;
    float Result;

    fVar3 = uParam0 - 30.00000000;
    fVar4 = uParam0 + 30.00000000;
    Result = 0.00000000;
    GENERATE_RANDOM_FLOAT_IN_RANGE( fVar3, fVar4, ref Result );
    if (Result < 0.00000000)
    {
        Result += 360.00000000;
    }
    if (Result > 360.00000000)
    {
        Result -= 360.00000000;
    }
    return Result;
}

void sub_67970()
{
    return g_U26739._fU28;
}

void sub_68011()
{
    g_U10509 = 0;
    g_U10648 = 0;
    return;
}

void sub_68123()
{
    unknown uVar2;

    l_U1154 = sub_68132();
    sub_68207( l_U1171, l_U1154 );
    uVar2 = sub_9270( l_U1207 );
    sub_68394( uVar2, l_U1171 );
    l_U1170 = 0;
    l_U1153 = l_U1171;
    l_U1171 = 22;
    if (l_U1151)
    {
        l_U1157 = 1;
    }
    g_U10502 = 1;
    l_U1177 = 5;
    return;
}

void sub_68132()
{
    unknown Result;

    Result = g_U26739._fU20;
    g_U26739._fU8 = 12;
    g_U26739._fU20 = 8;
    g_U26739._fU24 = 0;
    g_U26739._fU28 = 0;
    return Result;
}

void sub_68207(unknown uParam0, unknown uParam1)
{
    if (l_U1168 == 3)
    {
        SCRIPT_ASSERT( "Store_Alternative_Result: All allowed alternative activities have already been played" );
    }
    l_U1161[l_U1168]._fU0 = uParam0;
    l_U1161[l_U1168]._fU4 = uParam1;
    l_U1168++;
    return;
}

void sub_68394(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_68405( uParam0 );
    g_U27961._fU0[uVar4]._fU0[uParam1]++;
    g_U27961._fU0[uVar4]._fU92++;
    sub_68605( uParam1 );
    sub_69495( uParam0, uParam1 );
    return;
}

int sub_68405(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 6: return 1;
        case 7: return 2;
    }
    sub_3925( "Convert_Friend_To_Friend_Stats_ID: Unrecognised Friend ID" );
    return 3;
}

void sub_68605(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    char[64] cVar6;

    g_U27961._fU304[iParam0]++;
    g_U27961._fU396++;
    iVar3 = g_U27961._fU400;
    if (iVar3 == iParam0)
    {
        return;
    }
    iVar4 = g_U27961._fU304[iVar3];
    iVar5 = g_U27961._fU304[iParam0];
    if (iVar5 < iVar4)
    {
        return;
    }
    g_U27961._fU400 = iParam0;
    StrCopy( ref cVar6, "", 64 );
    sub_68749( iParam0, ref cVar6 );
    if (CAN_THE_STAT_HAVE_STRING( 486 ))
    {
        sub_8347( 486 );
        REGISTER_STRING_FOR_FRONTEND_STAT( 486, ref cVar6 );
    }
    return;
}

void sub_68749(unknown uParam0, unknown uParam1)
{
    char[64] cVar4;

    switch (uParam0)
    {
        case 6:
        StrCopy( (uParam1^), "statAct_air", 64 );
        break;
        case 7:
        StrCopy( (uParam1^), "statAct_armw", 64 );
        break;
        case 8:
        StrCopy( (uParam1^), "statAct_0", 64 );
        break;
        case 9:
        StrCopy( (uParam1^), "statAct_1", 64 );
        break;
        case 10:
        StrCopy( (uParam1^), "statAct_2", 64 );
        break;
        case 11:
        StrCopy( (uParam1^), "statAct_3", 64 );
        break;
        case 12:
        StrCopy( (uParam1^), "statAct_4", 64 );
        break;
        case 13:
        StrCopy( (uParam1^), "statAct_war", 64 );
        break;
        case 14:
        StrCopy( (uParam1^), "statAct_hang", 64 );
        break;
        case 15:
        StrCopy( (uParam1^), "statAct_5", 64 );
        break;
        case 16:
        StrCopy( (uParam1^), "statAct_hilo", 64 );
        break;
        case 17:
        StrCopy( (uParam1^), "statAct_6", 64 );
        break;
        case 18:
        StrCopy( (uParam1^), "statAct_7", 64 );
        break;
        case 19:
        StrCopy( (uParam1^), "statAct_race", 64 );
        break;
        case 20:
        StrCopy( (uParam1^), "statAct_8", 64 );
        break;
        case 21:
        StrCopy( (uParam1^), "statAct_9", 64 );
        break;
        default: sub_3925( "Friend_Achievement_Fill_Activity_String: Unknown activity" );
    }
    StrCopy( ref cVar4, GET_STRING_FROM_TEXT_FILE( uParam1 ), 64 );
    PRINTSTRING( "**********************\n" );
    PRINTSTRING( uParam1 );
    PRINTNL();
    PRINTSTRING( "For Info: " );
    PRINTSTRING( ref cVar4 );
    PRINTNL();
    PRINTSTRING( "**********************\n" );
    return;
}

void sub_69495(unknown uParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    char[64] cVar8;

    uVar4 = sub_68405( uParam0 );
    iVar5 = g_U27961._fU0[uVar4]._fU96;
    if (iVar5 == iParam1)
    {
        return;
    }
    iVar6 = g_U27961._fU0[uVar4]._fU0[iVar5];
    iVar7 = g_U27961._fU0[uVar4]._fU0[iParam1];
    if (iVar7 < iVar6)
    {
        return;
    }
    g_U27961._fU0[uVar4]._fU96 = iParam1;
    StrCopy( ref cVar8, "", 64 );
    sub_68749( iParam1, ref cVar8 );
    switch (uParam0)
    {
        case 1:
        if (CAN_THE_STAT_HAVE_STRING( 495 ))
        {
            sub_8347( 495 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 495, ref cVar8 );
        }
        break;
        case 6:
        if (CAN_THE_STAT_HAVE_STRING( 496 ))
        {
            sub_8347( 496 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 496, ref cVar8 );
        }
        break;
        case 7:
        if (CAN_THE_STAT_HAVE_STRING( 497 ))
        {
            sub_8347( 497 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 497, ref cVar8 );
        }
        break;
        default: sub_3925( "Friend_Achievement_Check_For_New_Favourite_Activity_With_Friend: Unknown friend ID" );
    }
    return;
}

void sub_69955(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    if (l_U1178 == 0)
    {
        if (NOT (IS_CHAR_ON_FOOT( sub_2582() )))
        {
            SET_PLAYER_CONTROL( sub_2958(), 0 );
            l_U1208 = iVar5 + 4000;
        }
        l_U1178++;
    }
    if (l_U1178 == 1)
    {
        if (NOT (IS_CHAR_ON_FOOT( sub_2582() )))
        {
            if ((iVar5 > l_U1208) || (sub_70078( uParam1, 20.00000000 )))
            {
                l_U1178++;
            }
            else
            {
                return;
            }
        }
        else
        {
            l_U1178++;
        }
    }
    if (l_U1178 == 2)
    {
        SET_PLAYER_CONTROL( sub_2958(), 0 );
        sub_64542();
        sub_70254();
        l_U1178++;
    }
    if (l_U1178 == 3)
    {
        if (sub_31601())
        {
            sub_70601( uParam1 );
            l_U1208 = iVar5 + 4000;
            SETTIMERA( 0 );
            l_U1178++;
        }
    }
    iVar6 = 1;
    if (l_U1178 == 4)
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_ANY_CAR( uParam1 ))
            {
                iVar6 = 0;
            }
        }
        if (NOT (IS_CHAR_DEAD( sub_2582() )))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
            {
                iVar6 = 0;
            }
        }
        if ((iVar5 > l_U1208) || (iVar6))
        {
            l_U1178 = 99;
        }
    }
    if (l_U1178 == 99)
    {
        l_U1177 = 3;
        l_U1178 = 0;
    }
    return;
}

int sub_70078(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2582(), uVar4._fU0, uVar4._fU4, uVar4._fU8, uParam1, uParam1, uParam1, 0 )))
    {
        return 0;
    }
    return 1;
}

void sub_70254()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    l_U1179 = 1;
    iVar2 = 0;
    BEGIN_CAM_COMMANDS( ref iVar2 );
    switch (l_U1171)
    {
        case 11:
        uVar3 = {l_U986[l_U1160]._fU20};
        uVar6 = {l_U986[l_U1160]._fU32};
        break;
        case 12:
        uVar3 = {l_U613[l_U1160]._fU20};
        uVar6 = {l_U613[l_U1160]._fU32};
        break;
        default: SCRIPT_ASSERT( "Start_NonMission_Camera_Move_Before_Fade: Unknown activity" );
    }
    CREATE_CAM( 14, ref l_U1180 );
    SET_CAM_POS( l_U1180, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
    SET_CAM_ROT( l_U1180, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
    SET_CAM_ACTIVE( l_U1180, 1 );
    SET_CAM_PROPAGATE( l_U1180, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return;
}

void sub_70601(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    int iVar10;
    unknown uVar11;

    iVar3 = -1;
    switch (l_U1171)
    {
        case 11:
        iVar3 = l_U986[l_U1160]._fU0;
        break;
        case 12:
        iVar3 = l_U613[l_U1160]._fU0;
        break;
        default: SCRIPT_ASSERT( "Start_NonMission_Walk_Towards_Destination: Unknown activity" );
    }
    sub_64594();
    bVar4 = false;
    if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref l_U1181 );
        bVar4 = true;
    }
    OPEN_SEQUENCE_TASK( ref uVar5 );
    if (bVar4)
    {
        if (IS_CHAR_IN_CAR( sub_2582(), l_U1181 ))
        {
            TASK_LEAVE_CAR( 0, l_U1181 );
        }
    }
    uVar6 = {g_U11583[iVar3]._fU0};
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar6._fU0, uVar6._fU4, uVar6._fU8, 2, -2, 2.00000000 );
    CLOSE_SEQUENCE_TASK( uVar5 );
    TASK_PERFORM_SEQUENCE( sub_2582(), uVar5 );
    CLEAR_SEQUENCE_TASK( uVar5 );
    I = 0;
    iVar10 = 0;
    uVar11 = nil;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37394( I ))
        {
            if (IS_GROUP_MEMBER( g_U38857[I]._fU0, sub_16526() ))
            {
                l_U1172 = 1;
                REMOVE_CHAR_FROM_GROUP( g_U38857[I]._fU0 );
            }
            if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
            {
                bVar4 = false;
                if (IS_CHAR_IN_ANY_CAR( g_U38857[I]._fU0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( g_U38857[I]._fU0, ref uVar11 );
                    bVar4 = true;
                }
                GENERATE_RANDOM_INT_IN_RANGE( 500, 1500, ref iVar10 );
                OPEN_SEQUENCE_TASK( ref uVar5 );
                if (bVar4)
                {
                    if (IS_CHAR_IN_CAR( g_U38857[I]._fU0, uVar11 ))
                    {
                        TASK_PAUSE( 0, iVar10 );
                        TASK_LEAVE_CAR( 0, uVar11 );
                    }
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar6._fU0, uVar6._fU4, uVar6._fU8, 2, -2, 2.00000000 );
                CLOSE_SEQUENCE_TASK( uVar5 );
                TASK_PERFORM_SEQUENCE( g_U38857[I]._fU0, uVar5 );
                CLEAR_SEQUENCE_TASK( uVar5 );
            }
        }
    }
    return;
}

void sub_71455(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    int iVar18;

    iVar13 = 0;
    switch (l_U1171)
    {
        case 11:
        uVar5 = l_U986[l_U1160]._fU0;
        uVar6 = {g_U11583[uVar5]._fU0};
        uVar9 = {l_U986[l_U1160]._fU4};
        uVar12 = l_U986[l_U1160]._fU16;
        iVar13 = 1;
        break;
        case 12:
        uVar5 = l_U613[l_U1160]._fU0;
        uVar6 = {g_U11583[uVar5]._fU0};
        uVar9 = {l_U613[l_U1160]._fU4};
        uVar12 = l_U613[l_U1160]._fU16;
        break;
        default: SCRIPT_ASSERT( "Has_NonMission_Cutscene_Ended: Unknown activity" );
    }
    if (l_U1178 == 0)
    {
        g_U10501 = 0;
        SETTIMERA( 0 );
        l_U1178++;
    }
    if (l_U1178 == 1)
    {
        if (NOT (sub_56362( (uParam2^) )))
        {
            l_U1178++;
        }
    }
    if (l_U1178 == 2)
    {
        if (TIMERA() >= 1500)
        {
            DO_SCREEN_FADE_OUT( 1000 );
            SETTIMERA( 0 );
            l_U1178++;
        }
    }
    if (l_U1178 == 3)
    {
        if ((IS_SCREEN_FADED_OUT()) AND (TIMERA() > 1200))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2582() );
            CLEAR_CHAR_TASKS_IMMEDIATELY( uParam1 );
            l_U1178++;
        }
    }
    if (l_U1178 == 4)
    {
        if (IS_VEH_DRIVEABLE( l_U1181 ))
        {
            SET_CAR_HEADING( l_U1181, uVar12 );
            SET_CAR_COORDINATES( l_U1181, uVar9._fU0, uVar9._fU4, uVar9._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( l_U1181 );
        }
        if (NOT l_U1158)
        {
            SET_CHAR_COORDINATES( uParam1, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            uVar14 = {sub_72028( uVar6, uVar9 )};
            SET_CHAR_COORDINATES( sub_2582(), uVar14._fU0, uVar14._fU4, uVar14._fU8 );
            sub_72247( uVar6, uVar9, uParam0 );
            uVar17 = sub_73227( uVar9, uVar6 );
            SET_CHAR_HEADING( uParam1, uVar17 );
            uVar17 = sub_73227( uVar9, uVar14 );
            SET_CHAR_HEADING( sub_2582(), uVar17 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            sub_65132( uVar9, uVar12 );
            SET_CURRENT_CHAR_WEAPON( sub_2582(), 0, 0 );
        }
        SETTIMERA( 0 );
        l_U1178++;
    }
    if (l_U1178 == 5)
    {
        SET_CAM_ACTIVE( l_U1180, 0 );
        SET_CAM_PROPAGATE( l_U1180, 0 );
        DESTROY_ALL_CAMS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        iVar18 = 0;
        END_CAM_COMMANDS( ref iVar18 );
        l_U1179 = 0;
        l_U1178++;
    }
    if (l_U1178 == 6)
    {
        if (l_U1158)
        {
            g_U10502 = 1;
            l_U1178 = 99;
        }
        else if (l_U1171 == 11)
        {
            g_U10501 = 1;
            l_U1178++;
        }
        else
        {
            g_U10502 = 1;
            if (TIMERA() >= 1000)
            {
                DO_SCREEN_FADE_IN( 1000 );
                SETTIMERA( 0 );
                l_U1178++;
            }
        }
    }
    if (l_U1178 == 7)
    {
        if (g_U10501)
        {
            l_U1178++;
        }
        else if ((IS_SCREEN_FADED_IN()) AND (TIMERA() > 1200))
        {
            l_U1178++;
        }
    }
    if (l_U1178 == 8)
    {
        SET_PLAYER_CONTROL( sub_2958(), 1 );
        SET_GROUP_MEMBER( sub_16526(), uParam1 );
        l_U1173 = 1;
        sub_43692();
        l_U1178++;
    }
    if (l_U1178 == 9)
    {
        if (l_U1171 == 11)
        {
            if (NOT g_U10491)
            {
                PRINT_HELP( "FRDRUNK" );
                g_U10491 = 1;
            }
        }
        l_U1178 = 99;
    }
    if (l_U1178 == 99)
    {
        l_U1177 = 4;
        l_U1178 = 0;
    }
    return;
}

void sub_72028(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown Result;
    unknown uVar9;
    unknown uVar10;

    Result = {uParam0};
    if ((uParam3._fU0 - uParam0._fU0) > 0)
    {
        Result._fU0 += 2.00000000;
    }
    else
    {
        Result._fU0 -= 2.00000000;
    }
    if ((uParam3._fU4 - uParam0._fU4) > 0)
    {
        Result._fU4 += 2.00000000;
    }
    else
    {
        Result._fU4 -= 2.00000000;
    }
    Result._fU8 += 2.00000000;
    GET_GROUND_Z_FOR_3D_COORD( Result._fU0, Result._fU4, Result._fU8, ref Result._fU8 );
    return Result;
}

void sub_72247(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6)
{
    int iVar9;
    int I;
    boolean bVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    iVar9 = 0;
    I = 0;
    bVar11 = false;
    for ( I = 0; I < 3; I++ )
    {
        bVar11 = false;
        if (sub_37394( I ))
        {
            if (NOT (IS_CHAR_INJURED( g_U38857[I]._fU0 )))
            {
                switch (I)
                {
                    case 0:
                    if (NOT (iParam6 == 1))
                    {
                        bVar11 = true;
                    }
                    break;
                    case 1:
                    if (NOT (iParam6 == 6))
                    {
                        bVar11 = true;
                    }
                    break;
                    case 2:
                    if (NOT (iParam6 == 7))
                    {
                        bVar11 = true;
                    }
                    break;
                }
                if (bVar11)
                {
                    uVar12 = {sub_72028( uParam0, uParam3 )};
                    uVar15 = {sub_72450( uVar12, uParam0, iVar9 )};
                    if (IS_CHAR_IN_ANY_CAR( g_U38857[I]._fU0 ))
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( g_U38857[I]._fU0, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                    }
                    else
                    {
                        SET_CHAR_COORDINATES( g_U38857[I]._fU0, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                    }
                    iVar9++;
                }
            }
        }
    }
    return;
}

void sub_72450(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;
    int iVar10;
    float fVar11;
    float fVar12;
    unknown Result;
    unknown uVar14;
    unknown uVar15;

    iVar9 = uParam6;
    iVar10 = 0;
    fVar11 = 0.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar11 );
    fVar12 = 0.00000000;
    PRINTSTRING( "... Get Offset for other friend: " );
    PRINTSTRING( "+x, " );
    Result = {uParam0};
    Result._fU0 += 2.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( Result._fU0, Result._fU4, Result._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar12 );
    if (fVar12 > fVar11)
    {
        if (iVar9 == 0)
        {
            PRINTSTRING( " YES\n" );
            return Result;
        }
        iVar9--;
    }
    PRINTSTRING( "+y, " );
    Result = {uParam0};
    Result._fU4 += 2.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( Result._fU0, Result._fU4, Result._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar12 );
    if (fVar12 > fVar11)
    {
        if (iVar9 == 0)
        {
            PRINTSTRING( " YES\n" );
            return Result;
        }
        iVar9--;
    }
    PRINTSTRING( "-x, " );
    Result = {uParam0};
    Result._fU0 -= 2.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( Result._fU0, Result._fU4, Result._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar12 );
    if (fVar12 > fVar11)
    {
        if (iVar9 == 0)
        {
            PRINTSTRING( " YES\n" );
            return Result;
        }
        iVar9--;
    }
    PRINTSTRING( "-y " );
    Result = {uParam0};
    Result._fU4 -= 2.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( Result._fU0, Result._fU4, Result._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref fVar12 );
    if (fVar12 > fVar11)
    {
        if (iVar9 == 0)
        {
            PRINTSTRING( " YES\n" );
            return Result;
        }
        iVar9--;
    }
    PRINTSTRING( " NO\n" );
    return uParam0;
}

void sub_73227(vector vParam0, vector vParam3)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float Result;

    uVar8 = {vParam0 - vParam3};
    Result = 0.00000000;
    GET_HEADING_FROM_VECTOR_2D( uVar8._fU0, uVar8._fU4, ref Result );
    return Result;
}

void sub_73846(unknown uParam0)
{
    unknown uVar3;

    l_U1154 = sub_73862( l_U1171, uParam0 );
    sub_68207( l_U1171, l_U1154 );
    uVar3 = sub_9270( l_U1207 );
    sub_68394( uVar3, l_U1171 );
    switch (l_U1171)
    {
        case 11:
        sub_74725( uVar3 );
        sub_75019();
        break;
        case 12:
        sub_75054( uVar3 );
        sub_75133();
        if (NOT (IS_CHAR_DEAD( sub_2582() )))
        {
            SET_CHAR_HEALTH( sub_2582(), 200 );
            RESET_VISIBLE_PED_DAMAGE( sub_2582() );
        }
        break;
        default: SCRIPT_ASSERT( "Perform_Alternative_NonMinigame_Complete: Unknown non-minigame ID" );
    }
    l_U1170 = 0;
    l_U1153 = l_U1171;
    l_U1171 = 22;
    if (l_U1151)
    {
        l_U1157 = 1;
    }
    if (l_U1153 == 11)
    {
        l_U1182 = 1;
    }
    if (l_U1153 == 12)
    {
        l_U1183 = 1;
    }
    l_U1177 = 5;
    return;
}

int sub_73862(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 11: return sub_73903( uParam1, l_U1160 );
        case 12: return sub_74239( uParam1, l_U1160 );
    }
    SCRIPT_ASSERT( "Return_Alternative_NonMinigame_Result_For_Activity: unknown activity" );
    return 8;
}

int sub_73903(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: return sub_73947( uParam1 );
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Friend: unknown friend" );
    return 8;
}

int sub_73947(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U986[uParam0]._fU0;
    uVar4 = g_U11583[uVar3]._fU16;
    switch (uVar4)
    {
        case 10: return 0;
        case 8:
        case 12: return 2;
        case 11:
        case 9:
        case 13: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Drinking_Result_For_Roman: Unknown Map Blip Subgroup" );
    return 8;
}

int sub_74239(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: return sub_74283( uParam1 );
    }
    SCRIPT_ASSERT( "Return_Alternative_Eating_Result_For_Friend: unknown friend" );
    return 8;
}

int sub_74283(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = l_U613[uParam0]._fU0;
    uVar4 = g_U11583[uVar3]._fU16;
    switch (uVar4)
    {
        case 18:
        case 19: return 0;
        case 20:
        case 15: return 2;
        case 17:
        case 16: return 1;
    }
    SCRIPT_ASSERT( "Return_Alternative_Eating_Result_For_Roman: Unknown Food Map Blip Subgroup" );
    return 8;
}

void sub_74725(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    uVar3 = sub_74736( uParam0 );
    fVar4 = 50;
    fVar5 = fVar4 * uVar3;
    uVar6 = sub_74832( fVar5 );
    sub_74982( uVar6 );
    return;
}

float sub_74736(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 1.00000000;
        case 6: return 1.00000000;
        case 7: return 1.00000000;
    }
    return 1.00000000;
}

void sub_74832(unknown uParam0)
{
    int iVar3;
    int Result;
    int iVar5;

    iVar3 = sub_74841();
    if (iVar3 < 0)
    {
        iVar3 = 0;
    }
    Result = FLOOR( uParam0 );
    if (Result > iVar3)
    {
        Result = iVar3;
    }
    iVar5 = Result * -1;
    sub_74937( iVar5 );
    return Result;
}

void sub_74841()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( sub_2958() ))
    {
        STORE_SCORE( sub_2958(), ref Result );
    }
    return Result;
}

void sub_74937(unknown uParam0)
{
    ADD_SCORE( sub_2958(), uParam0 );
    return;
}

void sub_74982(unknown uParam0)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 94, uParam0 );
    return;
}

void sub_75019()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 283, 1 );
    return;
}

void sub_75054(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    uVar3 = sub_74736( uParam0 );
    fVar4 = 100;
    fVar5 = fVar4 * uVar3;
    uVar6 = sub_74832( fVar5 );
    sub_75096( uVar6 );
    return;
}

void sub_75096(unknown uParam0)
{
    INCREMENT_INT_STAT_NO_MESSAGE( 97, uParam0 );
    return;
}

void sub_75133()
{
    INCREMENT_INT_STAT_NO_MESSAGE( 306, 1 );
    return;
}

int sub_75405(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = sub_50183( uParam0 );
    if (iVar6 == 12)
    {
        return 0;
    }
    if (NOT (sub_75438( iVar6 )))
    {
        return 0;
    }
    l_U1177 = 0;
    l_U1178 = 0;
    l_U1170 = 1;
    l_U1171 = uParam0;
    sub_64449( uParam1, uParam2, uParam3 );
    return 1;
}

int sub_75438(int iParam0)
{
    boolean bVar3;

    bVar3 = g_U26739._fU24;
    if (NOT bVar3)
    {
        return 0;
    }
    if (g_U26739._fU8 == iParam0)
    {
        return 1;
    }
    return 0;
}

int sub_75624(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    if (sub_75633() <= 0)
    {
        return 0;
    }
    iVar6 = -1;
    switch (uParam0)
    {
        case 11:
        iVar6 = sub_75700( uParam2 );
        break;
        case 12:
        iVar6 = sub_76549( uParam2 );
        break;
        default: SCRIPT_ASSERT( "Check_If_New_Alternative_NonMinigame_Activity_Started: Unknown Activity ID" );
    }
    if (iVar6 == -1)
    {
        return 0;
    }
    sub_76976();
    l_U1184[uParam0]--;
    l_U1177 = 2;
    l_U1178 = 0;
    l_U1170 = 1;
    l_U1171 = uParam0;
    l_U1160 = iVar6;
    sub_64449( uParam1, uParam2, uParam3 );
    return 1;
}

void sub_75633()
{
    return g_U26739._fU32;
}

int sub_75700(unknown uParam0)
{
    int Result;
    int iVar4;
    int iVar5;
    float fVar6;

    if (NOT (l_U1184[11] > 0))
    {
        return -1;
    }
    Result = 0;
    iVar4 = 0;
    iVar5 = 0;
    fVar6 = 0.00000000;
    for ( Result = 0; Result < 6; Result++ )
    {
        iVar4 = l_U986[Result]._fU0;
        if ((NOT (sub_75835( iVar4 ))) AND (sub_75772( Result )))
        {
            iVar5 = g_U11583[iVar4]._fU28 == g_U10999;
            fVar6 = l_U986[Result]._fU4._fU8;
            if ((sub_76038( 1, 1 )) AND ((NOT (sub_30632( sub_2582() ))) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_2582(), l_U986[Result]._fU4._fU0, l_U986[Result]._fU4._fU4, fVar6, 2.50000000, 2.50000000, 2.50000000, iVar5 ))))
            {
                if (IS_CHAR_ON_FOOT( sub_2582() ))
                {
                    if (sub_70078( uParam0, 1092616192 ))
                    {
                        return Result;
                    }
                }
                else
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_75772(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U986[uParam0]._fU0;
    if (NOT g_U10994[g_U11583[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    return 1;
}

int sub_75835(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 4:
        if (l_U1150 == 10)
        {
            if (NOT l_U1151)
            {
                return 1;
            }
            else if (NOT l_U1157)
            {
                return 1;
            }
        }
        break;
        default:
    }
    return 0;
}

int sub_76038(unknown uParam0, boolean bParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;

    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar6 );
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
    if (sub_76162( uParam0, bParam1 ))
    {
        return 1;
    }
    return 0;
}

int sub_76162(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2582()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2582() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2958() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2958() )))
    {
        return 0;
    }
    return 1;
}

int sub_76549(unknown uParam0)
{
    int Result;
    int iVar4;
    int iVar5;
    float fVar6;

    if (NOT (l_U1184[12] > 0))
    {
        return -1;
    }
    Result = 0;
    iVar4 = 0;
    iVar5 = 0;
    fVar6 = 0.00000000;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (sub_76608( Result ))
        {
            iVar4 = l_U613[Result]._fU0;
            iVar5 = g_U11583[iVar4]._fU28 == g_U10999;
            fVar6 = l_U613[Result]._fU4._fU8;
            if ((sub_76038( 1, 1 )) AND ((NOT (sub_30632( sub_2582() ))) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_2582(), l_U613[Result]._fU4._fU0, l_U613[Result]._fU4._fU4, fVar6, 2.50000000, 2.50000000, 2.50000000, iVar5 ))))
            {
                if (IS_CHAR_ON_FOOT( sub_2582() ))
                {
                    if (sub_70078( uParam0, 1092616192 ))
                    {
                        return Result;
                    }
                }
                else
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_76608(unknown uParam0)
{
    unknown uVar3;

    uVar3 = l_U613[uParam0]._fU0;
    if (NOT g_U10994[g_U11583[uVar3]._fU28]._fU0)
    {
        return 0;
    }
    return 1;
}

void sub_76976()
{
    if (NOT (g_U26739._fU32 > 0))
    {
        return;
    }
    g_U26739._fU32--;
    return;
}

void sub_77294(int iParam0)
{
    if (iParam0 == 12)
    {
        sub_77312();
        return;
    }
    sub_58128();
    return;
}

void sub_77312()
{
    if (l_U521._fU8)
    {
        sub_58128();
        return;
    }
    l_U521._fU32 = 1;
    sub_77351();
    return;
}

void sub_77351()
{
    unknown uVar2;

    if (l_U521._fU24)
    {
        return;
    }
    uVar2 = sub_77381( l_U465 );
    g_U18635[l_U416]._fU892._fU44 = uVar2;
    return;
}

void sub_77381(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_56362( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

boolean sub_77509(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    return 0;
    switch (uParam0)
    {
        case 12: break;
        default: return 0;
    }
    uVar3 = sub_9270( l_U1207 );
    if (NOT g_U18635[uVar3]._fU172)
    {
        return 0;
    }
    if (NOT l_U1151)
    {
        return 0;
    }
    iVar4 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar4 );
    return iVar4 < 20;
}

void sub_77663(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if (l_U1152)
    {
        return;
    }
    if (iParam1 == l_U1150)
    {
        return;
    }
    iVar9 = 0;
    sub_58146( uParam6, iVar9 );
    sub_2476( uParam2 );
    sub_2633( 0, sub_2582(), "JOHNNY", 0 );
    sub_2633( uParam3, uParam4, uParam5, 0 );
    sub_77761( iParam1, uParam0, uParam6 );
    return;
}

void sub_77761(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 6:
        sub_77863( uParam1, uParam2 );
        l_U1152 = 1;
        return;
        case 7: return;
        case 10:
        sub_78522( uParam1, uParam2 );
        l_U1152 = 1;
        return;
        case 11:
        sub_79147( uParam1, uParam2 );
        l_U1152 = 1;
        return;
        case 12:
        sub_79469( uParam1, uParam2 );
        l_U1152 = 1;
        return;
        case 16: return;
        case 18:
        sub_80083( uParam1, uParam2 );
        l_U1152 = 1;
        return;
        case 20:
        if (g_U10999 == 2)
        {
            sub_80713( uParam1, uParam2 );
        }
        l_U1152 = 1;
        return;
        case 21:
        sub_81337( uParam1, uParam2 );
        l_U1152 = 1;
        return;
        case 9:
        sub_81995( uParam1, uParam2 );
        l_U1152 = 1;
        return;
    }
    SCRIPT_ASSERT( "Play_Alternative_Activity_Started_Speech_For_Activity: Activity speech not set up" );
    return;
}

void sub_77863(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_77886( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AHY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: AIR HOCKEY UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_AHY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: AIR HOCKEY UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AHY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: AIR HOCKEY UNEXPECTED YES\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_77886(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AHD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_AHD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AHDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: AIR HOCKEY - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_78522(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_78545( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_DDY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: DARTS UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_DY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: DARTS UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_ADY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: DARTS UNEXPECTED YES\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_78545(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_ADDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: DARTS - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_DD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: DARTS - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_ADDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: DARTS - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_79147(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_DDRY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: DRINK UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_DRY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: DRINK UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_DDY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: DRINK UNEXPECTED YES\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_79469(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_79492( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_DFY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: EAT UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_FY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: EAT UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_DFY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: EAT UNEXPECTED YES\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_79492(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AFD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: EAT - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_FD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: EAT - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AFD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: EAT - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_80083(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_80106( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_DPY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: POOL UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_PY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: POOL UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_DPY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: POOL UNEXPECTED YES\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_80106(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_APDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: POOL - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_PD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: POOL - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_APD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: POOL - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_80713(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_80736( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_ASHY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: SHOW UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_DSHY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: SHOW UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_DSHY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: SHOW UNEXPECTED YES\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_80736(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_ASHD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: SHOW - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_SHD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: SHOW - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_ASHD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: SHOW - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_81337(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_81360( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_DSTY", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: STRIP CLUB UNEXPECTED YES\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_STY", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: STRIP CLUB UNEXPECTED YES\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_DSTY", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: STRIP CLUB UNEXPECTED YES\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_81360(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_ASTD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: STRIP CLUB - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_STD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: STRIP CLUB - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_STD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: STRIP CLUB - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_81995(unknown uParam0, unknown uParam1)
{
    PRINTSTRING( "***** ARRIVE: BOWLING UNEXPECTED YES\n" );
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_82199()
{
    unknown Result;

    Result = l_U1153;
    l_U1153 = 22;
    return Result;
}

int sub_82245(unknown uParam0)
{
    l_U1159 = 0;
    switch (uParam0)
    {
        case 21: break;
        default: return 0;
    }
    if (l_U1154 == 8)
    {
        SCRIPT_ASSERT( "m_altResultForSpeech = MGR_NOT_SET: Make sure this function called before Activity_Finished_Speech()" );
    }
    if (NOT (l_U1154 == 7))
    {
        return 0;
    }
    l_U1159 = 1;
    return 1;
}

void sub_82476(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    if ((NOT l_U1159) AND (NOT l_U1158))
    {
        iVar9 = 0;
        sub_58146( uParam6, iVar9 );
        sub_2476( uParam2 );
        sub_2633( 0, sub_2582(), "JOHNNY", 0 );
        sub_2633( uParam3, uParam4, uParam5, 0 );
        sub_82568( uParam1, l_U1154, uParam0, uParam6 );
    }
    l_U1154 = 8;
    return;
}

void sub_82568(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 6:
        sub_82672( uParam1, uParam2, uParam3 );
        return;
        case 7:
        sub_84490( uParam1, uParam2, uParam3 );
        return;
        case 10:
        sub_86500( uParam1, uParam2, uParam3 );
        return;
        case 11:
        sub_88230( uParam2, uParam3, l_U1160 );
        return;
        case 12:
        sub_89244( uParam2, uParam3, l_U1160 );
        return;
        case 16:
        sub_90404( uParam1, uParam2, uParam3 );
        return;
        case 18:
        sub_91881( uParam1, uParam2, uParam3 );
        return;
        case 20:
        if (g_U10999 == 2)
        {
            sub_93604( uParam1, uParam2, uParam3 );
        }
        else
        {
            sub_94533( uParam1, uParam2, uParam3 );
        }
        return;
        case 21:
        sub_94663( uParam1, uParam2, uParam3 );
        return;
        case 9:
        sub_95653( uParam1, uParam2, uParam3 );
        return;
    }
    SCRIPT_ASSERT( "Play_Activity_Ended_Speech_For_Activity: Activity speech not set up" );
    return;
}

void sub_82672(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_82726( uParam1, uParam2 );
        break;
        case 2:
        sub_83371( uParam1, uParam2 );
        break;
        case 1:
        sub_83701( uParam1, uParam2 );
        break;
        case 3:
        sub_84052( uParam1, uParam2 );
        break;
        default: sub_3925( "Ended_AirHockey_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_82726(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_82749( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY (Player Won)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_AHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY (Player Won)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY (Player Won)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_82749(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AHDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_ALDR", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_ALDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_83371(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_82749( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY (Draw)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_AHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY (Draw)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY (Draw)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_83701(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_82749( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AHLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY (Player Lost)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_AHLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY (Player Lost)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AHLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY (Player Lost)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84052(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_82749( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: AIR HOCKEY (Abandoned)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_AHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: AIR HOCKEY (Abandoned)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: AIR HOCKEY (Abandoned)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84490(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_84544( uParam1, uParam2 );
        break;
        case 1:
        sub_85207( uParam1, uParam2 );
        break;
        case 2:
        sub_85567( uParam1, uParam2 );
        break;
        case 3:
        sub_85984( uParam1, uParam2 );
        break;
        default: sub_3925( "Ended_ArmWrestling_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_84544(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_84567( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AWLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING (Player Won)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_AWLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING (Player Won)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AWLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING (Player Won)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_84567(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AWLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_AWLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AWLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_85207(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_84567( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AWLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING (Player Lost)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_AWLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING (Player Lost)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AWLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING (Player Lost)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_85567(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_84567( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AWLF", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING (Forfeited - Quit while playing)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_AWLF", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING (Forfeited - Quit while playing)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AWLF", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING (Forfeited - Quit while playing)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_85984(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_84567( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_AWLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: ARM WRESTLING (Abandoned - Quit before playing)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_AWLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: ARM WRESTLING (Abandoned - Quit before playing)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_AWLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: ARM WRESTLING (Abandoned - Quit before playing)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_86500(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_86554( uParam1, uParam2 );
        break;
        case 2:
        sub_87166( uParam1, uParam2 );
        break;
        case 1:
        sub_87478( uParam1, uParam2 );
        break;
        case 3:
        sub_87811( uParam1, uParam2 );
        break;
        default: sub_3925( "Ended_Darts_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_86554(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_86577( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_DLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS (Player Won)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_DLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS (Player Won)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_DLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS (Player Won)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_86577(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_DLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_DLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_DLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_87166(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_86577( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_DLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS (Draw)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_DLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS (Draw)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_DLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS (Draw)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_87478(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_86577( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_DLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS (Player Lost)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_DLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS (Player Lost)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_DLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS (Player Lost)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_87811(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_86577( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_DLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: DARTS (Abandoned)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_DLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: DARTS (Abandoned)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_DLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: DARTS (Abandoned)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88230(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        sub_88278( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Friend: Unknown friend ID" );
    SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Friend: Needs to be uncommented for E1" );
    return;
}

void sub_88278(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U986[uParam2]._fU0;
    uVar6 = g_U11583[uVar5]._fU16;
    switch (uVar6)
    {
        case 10:
        sub_88374( uParam0, uParam1 );
        break;
        case 8:
        case 12:
        sub_88573( uParam0, uParam1 );
        break;
        case 11:
        case 9:
        case 13:
        sub_88771( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Drinking_Leaving_Speech_By_Jim_Terry_Or_Clay: Unknown Drink Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_88374(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_LPF", uParam1, 7, 1 );
        return;
        case 6:
        sub_33151( "E1FCT3_LPF", uParam1, 7, 1 );
        return;
        case 7:
        sub_33151( "E1FCC3_LPFA", uParam1, 7, 1 );
        return;
    }
    PRINTSTRING( "***** LEAVE: PUB FAVOURITE\n" );
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88573(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_LPG", uParam1, 7, 1 );
        return;
        case 6:
        sub_33151( "E1FCT3_LPG", uParam1, 7, 1 );
        return;
        case 7:
        sub_33151( "E1FCC3_LPG", uParam1, 7, 1 );
        return;
    }
    PRINTSTRING( "***** ARRIVE: PUB STANDARD\n" );
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_88771(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_LPA", uParam1, 7, 1 );
        return;
        case 6:
        sub_33151( "E1FCT3_LPA", uParam1, 7, 1 );
        return;
        case 7:
        sub_33151( "E1FCC3_LPA", uParam1, 7, 1 );
        return;
    }
    PRINTSTRING( "***** ARRIVE: CLUB STANDARD\n" );
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_89244(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7:
        sub_89292( uParam0, uParam1, uParam2 );
        return;
    }
    SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Friend: Unknown friend ID" );
    return;
}

void sub_89292(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;

    uVar5 = l_U613[uParam2]._fU0;
    uVar6 = g_U11583[uVar5]._fU16;
    switch (uVar6)
    {
        case 18:
        case 19:
        sub_89388( uParam0, uParam1 );
        break;
        case 17:
        case 16:
        sub_89853( uParam0, uParam1 );
        break;
        case 15:
        case 20:
        sub_90036( uParam0, uParam1 );
        break;
        default:
        SCRIPT_ASSERT( "Issue_Eating_Leaving_Speech_By_Jim_Terry_Or_Clay: Unknown Food Map Blip Subgroup" );
        break;
    }
    return;
}

void sub_89388(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_89411( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_LEA", uParam1, 7, 1 );
        return;
        case 6:
        sub_33151( "E1FCT3_LEA", uParam1, 7, 1 );
        return;
        case 7:
        sub_33151( "E1FCC3_LEA", uParam1, 7, 1 );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_89411(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_ELD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: EATING - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_ELD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: EATING - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_ELD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: EATING - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_89853(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_89411( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_LEF", uParam1, 7, 1 );
        return;
        case 6:
        sub_33151( "E1FCT3_LEF", uParam1, 7, 1 );
        return;
        case 7:
        sub_33151( "E1FCC3_LEF", uParam1, 7, 1 );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90036(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_89411( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_LEG", uParam1, 7, 1 );
        return;
        case 6:
        sub_33151( "E1FCT3_LEG", uParam1, 7, 1 );
        return;
        case 7:
        sub_33151( "E1FCC3_LEG", uParam1, 7, 1 );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90404(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_90450( uParam1, uParam2 );
        break;
        case 1:
        sub_91092( uParam1, uParam2 );
        break;
        case 3:
        sub_91443( uParam1, uParam2 );
        break;
        default: sub_3925( "Ended_HiLoCards_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_90450(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_90473( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_CLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: HI-LO CARDS (Player Won)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_CLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: HI-LO CARDS (Player Won)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_CLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: HI-LO CARDS (Player Won)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_90473(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_CLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: HILO CARDS - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_CLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: HILO CARDS - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_CLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: HILO CARDS - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91092(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_90473( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_CLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: HI-LO CARDS (Player Lost)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_CLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: HI-LO CARDS (Player Lost)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_CLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: HI-LO CARDS (Player Lost)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91443(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_90473( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_CLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: HI-LO CARDS (Abandoned)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_CLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: HI-LO CARDS (Abandoned)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_CLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: HI-LO CARDS (Abandoned)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91881(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_91935( uParam1, uParam2 );
        break;
        case 2:
        sub_92541( uParam1, uParam2 );
        break;
        case 1:
        sub_92850( uParam1, uParam2 );
        break;
        case 3:
        sub_93180( uParam1, uParam2 );
        break;
        default: sub_3925( "Ended_Pool_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_91935(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_91958( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_PLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL (Player Won)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_PLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL (Player Won)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_PLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL (Player Won)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_91958(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_PLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_PLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_PLDR", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_92541(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_91958( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_PLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL (Draw)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_PLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL (Draw)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_PLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL (Draw)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_92850(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_91958( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_PLL", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL (Player Lost)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_PLL", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL (Player Lost)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_PLL", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL (Player Lost)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_93180(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_91958( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_PLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: POOL (Abandoned)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_PLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: POOL (Abandoned)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_PLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: POOL (Abandoned)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_93604(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 3)
    {
        sub_93626( uParam1, uParam2 );
    }
    else
    {
        sub_94232( uParam1, uParam2 );
    }
    return;
}

void sub_93626(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_93649( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_SHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: SHOW (Abandoned)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_SHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: SHOW (Abandoned)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_SHLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: SHOW (Abandoned)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_93649(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_SHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: SHOW - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_SHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: SHOW - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_SHLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: SHOW - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94232(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_93649( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_SHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: SHOW\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_SHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: SHOW\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_SHLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: SHOW\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94533(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 3)
    {
        sub_94555( uParam1, uParam2 );
    }
    else
    {
        sub_94605( uParam1, uParam2 );
    }
    return;
}

void sub_94555(unknown uParam0, unknown uParam1)
{
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94605(unknown uParam0, unknown uParam1)
{
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94663(int iParam0, unknown uParam1, unknown uParam2)
{
    if (iParam0 == 1)
    {
        return;
    }
    if (iParam0 == 3)
    {
        sub_94697( uParam1, uParam2 );
    }
    else
    {
        sub_95337( uParam1, uParam2 );
    }
    return;
}

void sub_94697(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_94720( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_SLA", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: STRIP CLUB (Abandoned)\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_STLA", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: STRIP CLUB (Abandoned)\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_STLA", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: STRIP CLUB (Abandoned)\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_94720(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_SLD", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: STRIP CLUB - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_STLD", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: STRIP CLUB - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_STLD", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: STRIP CLUB - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95337(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_94720( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_SLW", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - LEAVE: STRIP CLUB\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_STLW", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - LEAVE: STRIP CLUB\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_STLW", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - LEAVE: STRIP CLUB\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95653(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        sub_95707( uParam1, uParam2 );
        break;
        case 2:
        sub_95757( uParam1, uParam2 );
        break;
        case 1:
        sub_95807( uParam1, uParam2 );
        break;
        case 3:
        sub_95857( uParam1, uParam2 );
        break;
        default: sub_3925( "Ended_Bowling_Activity_Speech: Illegal Match Result when activity over" );
    }
    return;
}

void sub_95707(unknown uParam0, unknown uParam1)
{
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95757(unknown uParam0, unknown uParam1)
{
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95807(unknown uParam0, unknown uParam1)
{
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_95857(unknown uParam0, unknown uParam1)
{
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_96105(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (iParam0 == 12)
    {
        (uParam1^) = {l_U613[l_U1160]._fU48};
        (uParam2^) = {l_U613[l_U1160]._fU60};
        (uParam3^) = {l_U613[l_U1160]._fU72};
        return;
    }
    return;
}

void sub_96228()
{
    unknown Result;

    Result = g_U26739._fU12;
    g_U26739._fU12 = 12;
    return Result;
}

int sub_96285(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 6;
        case 1: return 7;
        case 2: return 8;
        case 10: return 9;
        case 3: return 10;
        case 4: return 15;
        case 5: return 16;
        case 6: return 18;
        case 8: return 20;
        case 9: return 21;
    }
    SCRIPT_ASSERT( "Convert_Minigame_Activity_To_Phone_Activity: Minigame activity doesn't have a phone activity ID" );
    return 22;
}

int sub_96546(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == 22))
    {
        l_U1156 = iParam0;
    }
    if (l_U1156 == 22)
    {
        return 0;
    }
    if (l_U1156 == l_U1150)
    {
        return 0;
    }
    if (l_U1156 == l_U1155)
    {
        return 0;
    }
    switch (l_U1156)
    {
        case 6: return sub_96706( uParam1 );
        case 10: return sub_96897( uParam1 );
        case 18: return sub_96956( uParam1 );
        case 20: return 0;
        case 21: return sub_97000( uParam1 );
        case 9: return sub_97357( uParam1 );
        case 7:
        case 16: return 0;
    }
    SCRIPT_ASSERT( "Check_If_Issue_No_To_Alternative_Activity: Unrecognised activity ID" );
    return 0;
}

int sub_96706(unknown uParam0)
{
    if (sub_96718( uParam0, 8 ))
    {
        return 1;
    }
    if (sub_96718( uParam0, 39 ))
    {
        return 1;
    }
    return 0;
}

void sub_96718(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = {g_U11583[uParam1]._fU0};
    return sub_96747( uParam0, uVar4 );
}

void sub_96747(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return 0;
    }
    if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_2582(), uParam1._fU0, uParam1._fU4, uParam1._fU8, 4.00000000, 4.00000000, 4.00000000, 0 )))
    {
        return 0;
    }
    return sub_70078( uParam0, 1092616192 );
}

int sub_96897(unknown uParam0)
{
    if (sub_96718( uParam0, 11 ))
    {
        return 1;
    }
    if (sub_96718( uParam0, 43 ))
    {
        return 1;
    }
    return 0;
}

int sub_96956(unknown uParam0)
{
    if (sub_96718( uParam0, 10 ))
    {
        return 1;
    }
    return 0;
}

int sub_97000(unknown uParam0)
{
    int iVar3;

    if (IS_CHAR_DEAD( sub_2582() ))
    {
        return 0;
    }
    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    GET_INTERIOR_FROM_CHAR( sub_2582(), ref iVar3 );
    if (iVar3 == nil)
    {
        return 0;
    }
    if ((sub_97090( uParam0, "Bada_room1" )) || ((sub_97090( uParam0, "Bada_room2" )) || ((sub_97090( uParam0, "Bada-Private" )) || (sub_97090( uParam0, "Bada_room1" )))))
    {
        return 1;
    }
    if ((sub_97090( uParam0, "clammainroom" )) || ((sub_97090( uParam0, "clamfronrm" )) || ((sub_97090( uParam0, "clampalbkrm" )) || (sub_97090( uParam0, "clammainroom" )))))
    {
        return 1;
    }
    return 0;
}

int sub_97090(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = GET_HASH_KEY( uParam1 );
    GET_KEY_FOR_CHAR_IN_ROOM( sub_2582(), ref iVar5 );
    if (NOT (iVar5 == iVar4))
    {
        return 0;
    }
    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar5 );
    if (NOT (iVar5 == iVar4))
    {
        return 0;
    }
    return 1;
}

int sub_97357(unknown uParam0)
{
    return 0;
}

void sub_97502(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 0;
    sub_58146( uParam5, iVar8 );
    sub_2476( uParam1 );
    sub_2633( 0, sub_2582(), "JOHNNY", 0 );
    sub_2633( uParam2, uParam3, uParam4, 0 );
    sub_97569( uParam0, uParam5 );
    l_U1155 = l_U1156;
    return;
}

void sub_97569(unknown uParam0, unknown uParam1)
{
    if (g_U10499)
    {
        sub_97592( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: NO TO DIFFERENT ACTIVITY\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: NO TO DIFFERENT ACTIVITY\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: NO TO DIFFERENT ACTIVITY\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_97592(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        sub_33151( "E1FCJ3_DAND", uParam1, 8, 1 );
        PRINTSTRING( "***** JIM - ARRIVE: NO TO DIFFERENT ACTIVITY - DRUNK\n" );
        return;
        case 6:
        sub_33151( "E1FCT3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** TERRY - ARRIVE: NO TO DIFFERENT ACTIVITY - DRUNK\n" );
        return;
        case 7:
        sub_33151( "E1FCC3_DAN", uParam1, 8, 1 );
        PRINTSTRING( "***** CLAY - ARRIVE: NO TO DIFFERENT ACTIVITY - DRUNK\n" );
        return;
    }
    sub_33151( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_98326(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown uVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (l_U521._fU0)
    {
        l_U536 = 0;
        if (sub_56362( l_U405 ))
        {
            return;
        }
        if (IS_PLAYER_PLAYING( sub_2958() ))
        {
            if (IS_AMBIENT_SPEECH_PLAYING( sub_2582() ))
            {
                return;
            }
            STOP_PED_SPEAKING( sub_2582(), 1 );
        }
        l_U521._fU0 = 0;
        l_U521._fU4 = 1;
        l_U521._fU12 = 0;
        l_U521._fU20 = 0;
        l_U521._fU24 = 0;
        l_U521._fU28 = 0;
        sub_1191();
        return;
    }
    sub_98491( uParam0 );
    if (l_U521._fU4)
    {
        sub_100060( uParam0 );
        if (sub_100345( uParam0 ))
        {
            l_U521._fU4 = 0;
            if (l_U521._fU8)
            {
                l_U521._fU20 = iVar3 + 10000;
            }
            else
            {
                l_U521._fU20 = iVar3 + 15000;
            }
            return;
        }
    }
    if (NOT (l_U521._fU20 == 0))
    {
        if (NOT (sub_100345( uParam0 )))
        {
            l_U521._fU4 = 1;
            l_U521._fU20 = 0;
            return;
        }
        if (iVar3 > l_U521._fU20)
        {
            REQUEST_ANIMS( "Gestures@Niko" );
            if (NOT (HAVE_ANIMS_LOADED( "Gestures@Niko" )))
            {
                return;
            }
            bVar4 = false;
            if (NOT l_U521._fU8)
            {
                sub_101036( l_U416 );
                sub_2633( 0, sub_2582(), l_U579, 0 );
                if (NOT (sub_101370( l_U416, ref l_U465, l_U521._fU16 )))
                {
                    bVar4 = true;
                }
            }
            else
            {
                sub_106956( l_U416 );
                sub_2633( 0, sub_2582(), l_U579, 0 );
                sub_107283( l_U416, ref l_U465 );
            }
            if (bVar4)
            {
                ;
            }
            l_U521._fU20 = 0;
            l_U521._fU12 = 1;
            g_U18635[l_U416]._fU892._fU44 = -1;
        }
        return;
    }
    if (sub_111254( uParam0 ))
    {
        return;
    }
    if (l_U521._fU12)
    {
        if (g_U18635[l_U416]._fU892._fU40 >= 0)
        {
            bVar5 = false;
            if (NOT l_U521._fU24)
            {
                if (((sub_77381( l_U465 )) > 5) || (sub_111916( ref l_U465 )))
                {
                    bVar5 = true;
                }
            }
            if (bVar5)
            {
                l_U521._fU12 = 0;
                uVar6 = g_U18635[l_U416]._fU892._fU40;
                sub_101896( l_U416, uVar6 );
                if (IS_PLAYER_PLAYING( sub_2958() ))
                {
                    STOP_PED_SPEAKING( sub_2582(), 0 );
                }
                l_U536 = 1;
            }
            return;
        }
    }
    if (l_U536)
    {
        if (sub_111916( ref l_U465 ))
        {
            if (HAVE_ANIMS_LOADED( "Gestures@Niko" ))
            {
                REMOVE_ANIMS( "Gestures@Niko" );
            }
            l_U536 = 0;
        }
    }
    return;
}

void sub_98491(unknown uParam0)
{
    sub_98502( uParam0 );
    sub_99244( uParam0 );
    sub_99659( uParam0 );
    return;
}

void sub_98502(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if ((sub_98525( uParam0 )) || (IS_CHAR_DEAD( sub_2582() )))
    {
        return;
    }
    if ((sub_98766( uParam0 )) || (IS_CHAR_ON_ANY_BIKE( sub_2582() )))
    {
        sub_98906( uParam0 );
        return;
    }
    GET_CHAR_COORDINATES( sub_2582(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_98960( uVar3, uVar6 );
    if (l_U521._fU36)
    {
        if (fVar9 < 6.00000000)
        {
            l_U521._fU36 = 0;
        }
        return;
    }
    if (fVar9 < 12.00000000)
    {
        return;
    }
    l_U521._fU36 = 1;
    sub_77351();
    return;
}

int sub_98525(unknown uParam0)
{
    int I;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 1;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37394( I ))
        {
            if (IS_CHAR_INJURED( sub_98581( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_98581(int iParam0)
{
    if ((iParam0 >= 3) || (iParam0 < 0))
    {
        SCRIPT_ASSERT( "Minigames_Get_Biker_Friend_Index: Minigame Biker Index out of range" );
        return nil;
    }
    return g_U38857[iParam0]._fU0;
}

int sub_98766(unknown uParam0)
{
    int I;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_ON_ANY_BIKE( uParam0 ))
        {
            return 1;
        }
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37394( I ))
        {
            if (NOT (IS_CHAR_INJURED( sub_98581( I ) )))
            {
                if (IS_CHAR_ON_ANY_BIKE( sub_98581( I ) ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_98906(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    GET_CHAR_COORDINATES( sub_2582(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_98960( uVar3, uVar6 );
    if (l_U521._fU36)
    {
        if (fVar9 < 15.00000000)
        {
            l_U521._fU36 = 0;
        }
        return;
    }
    if (fVar9 < 80.00000000)
    {
        return;
    }
    l_U521._fU36 = 1;
    sub_77351();
    return;
}

void sub_98960(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_99244(unknown uParam0)
{
    boolean bVar3;
    int iVar4;
    int iVar5;

    if ((sub_99267( uParam0 )) || (IS_CHAR_DEAD( sub_2582() )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_INJURED( sub_2582() ))
    {
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        iVar4 = 0;
        iVar5 = 0;
        GET_CHAR_HEALTH( sub_2582(), ref iVar4 );
        GET_CHAR_HEALTH( uParam0, ref iVar5 );
        if (l_U521._fU52 == 64537)
        {
            l_U521._fU52 = iVar4;
        }
        if (l_U521._fU56 == 64537)
        {
            l_U521._fU56 = iVar5;
        }
        if (iVar4 < l_U521._fU52)
        {
            bVar3 = true;
        }
        if (iVar5 < l_U521._fU56)
        {
            bVar3 = true;
        }
        l_U521._fU52 = iVar4;
        l_U521._fU56 = iVar5;
    }
    if (l_U521._fU40)
    {
        if (NOT bVar3)
        {
            l_U521._fU40 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    if (l_U521._fU8)
    {
        return;
    }
    l_U521._fU40 = 1;
    sub_77351();
    return;
}

int sub_99267(unknown uParam0)
{
    int I;

    if (g_U39172 == 0)
    {
        return IS_CHAR_INJURED( uParam0 );
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (g_U39174[I] == nil))
        {
            if (IS_CHAR_INJURED( g_U39174[I] ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_99659(unknown uParam0)
{
    boolean bVar3;

    if ((sub_98525( uParam0 )) || (IS_CHAR_DEAD( sub_2582() )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_SHOOTING( sub_2582() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_2582() ))
    {
        bVar3 = true;
    }
    if (sub_99741( uParam0 ))
    {
        bVar3 = true;
    }
    if (sub_99856( uParam0 ))
    {
        bVar3 = true;
    }
    if (l_U521._fU44)
    {
        if (NOT bVar3)
        {
            l_U521._fU44 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    l_U521._fU44 = 1;
    sub_77351();
    return;
}

int sub_99741(unknown uParam0)
{
    int I;

    if (g_U39172 == 0)
    {
        return IS_CHAR_SHOOTING( uParam0 );
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37394( I ))
        {
            if (IS_CHAR_SHOOTING( sub_98581( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_99856(unknown uParam0)
{
    int I;

    if (g_U39172 == 0)
    {
        return IS_CHAR_IN_MELEE_COMBAT( uParam0 );
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37394( I ))
        {
            if (IS_CHAR_IN_MELEE_COMBAT( sub_98581( I ) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_100060(unknown uParam0)
{
    int I;
    unknown uVar4;

    if (NOT (g_U39172 == 0))
    {
        return;
    }
    if ((l_U501 == 1) || (l_U501 == 0))
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37394( I ))
        {
            g_U39174[I] = sub_98581( I );
        }
        else
        {
            g_U39174[I] = nil;
        }
        if (NOT (g_U39174[I] == nil))
        {
            SET_BIT( ref g_U39172, I );
        }
    }
    if (NOT (g_U39172 == 0))
    {
        return;
    }
    uVar4 = sub_100242( l_U416 );
    SET_BIT( ref g_U39172, uVar4 );
    g_U39174[uVar4] = uParam0;
    return;
}

int sub_100242(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 0;
        case 6: return 1;
        case 7: return 2;
    }
    return 3;
}

int sub_100345(unknown uParam0)
{
    unknown uVar3;

    if ((l_U521._fU24) || (sub_100354()))
    {
        return 0;
    }
    if ((l_U501 == 1) || (l_U501 == 0))
    {
        return 0;
    }
    if (NOT l_U521._fU8)
    {
        if (sub_100486( uParam0 ))
        {
            return 1;
        }
        if ((NOT (IS_CHAR_DEAD( uParam0 ))) AND (NOT (IS_CHAR_DEAD( sub_2582() ))))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2582() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2582(), ref uVar3 );
                if (IS_CHAR_IN_CAR( uParam0, uVar3 ))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    return 1;
}

int sub_100354()
{
    if ((l_U521._fU48) || ((l_U521._fU44) || ((l_U521._fU40) || ((l_U521._fU36) || (l_U521._fU32)))))
    {
        return 1;
    }
    return 0;
}

int sub_100486(unknown uParam0)
{
    if ((l_U521._fU24) || (sub_100354()))
    {
        return 0;
    }
    if (NOT l_U521._fU8)
    {
        if ((NOT (sub_98525( uParam0 ))) AND (NOT (IS_CHAR_DEAD( sub_2582() ))))
        {
            if (IS_CHAR_ON_ANY_BIKE( sub_2582() ))
            {
                if (sub_100576( uParam0 ))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    return 1;
}

int sub_100576(unknown uParam0)
{
    int I;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_ON_ANY_BIKE( uParam0 )))
    {
        return 0;
    }
    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (sub_37394( I ))
        {
            if (IS_CHAR_INJURED( sub_98581( I ) ))
            {
                return 0;
            }
            if (NOT (IS_CHAR_ON_ANY_BIKE( sub_98581( I ) )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_101036(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_2476( "E12WA" );
        return;
        case 6:
        sub_2476( "E12WA" );
        return;
        case 7:
        sub_2476( "E12WA" );
        return;
    }
    sub_3925( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Not a friend" );
    sub_3925( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Should never reach here" );
    return;
}

int sub_101370(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    int I;
    int iVar8;
    boolean bVar9;
    int iVar10;

    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: Unrecognised friend ID" );
        return 0;
    }
    sub_101493();
    g_U18635[uParam0]._fU892._fU40 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_102461( uParam0 );
    iVar5 = 0;
    iVar6 = 0;
    I = 0;
    if ((uParam2) AND (NOT g_U18635[uParam0]._fU892._fU28))
    {
        iVar6 = g_U18635[uParam0]._fU892._fU24;
        I = 0;
        for ( I = 0; I < iVar6; I++ )
        {
            if ((NOT (sub_101804( uParam0, I ))) AND (sub_101539( uParam0, I )))
            {
                sub_101720( uParam0, I );
            }
        }
    }
    sub_103016( uParam0 );
    iVar5 = 0;
    iVar6 = g_U18635[uParam0]._fU892._fU24;
    I = 0;
    for ( I = 0; I < iVar6; I++ )
    {
        if (NOT (sub_101539( uParam0, I )))
        {
            iVar5++;
        }
    }
    if ((uParam2) AND (iVar5 == 0))
    {
        for ( I = 0; I < iVar6; I++ )
        {
            if (NOT (sub_101804( uParam0, I )))
            {
                sub_101720( uParam0, I );
                iVar5++;
            }
        }
    }
    if (iVar5 == 0)
    {
        return 0;
    }
    iVar8 = 0;
    if (g_U18635[uParam0]._fU892._fU28)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar5, ref iVar8 );
    }
    bVar9 = false;
    for ( I = 0; I < iVar6; I++ )
    {
        if (NOT bVar9)
        {
            if (NOT (sub_101539( uParam0, I )))
            {
                if (iVar8 == 0)
                {
                    if (sub_103273( I ))
                    {
                        g_U18635[uParam0]._fU892._fU40 = I;
                        sub_101631( uParam0, I );
                        bVar9 = true;
                    }
                }
                else
                {
                    iVar8--;
                }
            }
        }
    }
    if (NOT bVar9)
    {
        return 0;
    }
    PRINTSTRING( "AFTER\n" );
    sub_102461( uParam0 );
    iVar10 = 0;
    switch (uParam0)
    {
        case 1:
        sub_104728( uParam1, iVar10 );
        return 1;
        case 6:
        sub_105998( uParam1, iVar10 );
        return 1;
        case 7:
        sub_106414( uParam1, iVar10 );
        return 1;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: must have forgotten to update friend ID when added speech" );
    return 0;
}

void sub_101493()
{
    int iVar2;
    int I;
    int iVar4;
    int iVar5;

    iVar2 = g_U18635[1]._fU892._fU24;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if ((sub_101539( 7, I )) || ((sub_101539( 6, I )) || (sub_101539( 1, I ))))
        {
            sub_101631( 1, I );
            sub_101631( 6, I );
            sub_101631( 7, I );
        }
        else
        {
            sub_101720( 1, I );
            sub_101720( 6, I );
            sub_101720( 7, I );
        }
        if ((sub_101804( 7, I )) || ((sub_101804( 6, I )) || (sub_101804( 1, I ))))
        {
            sub_101896( 1, I );
            sub_101896( 6, I );
            sub_101896( 7, I );
        }
        else
        {
            sub_101985( 1, I );
            sub_101985( 6, I );
            sub_101985( 7, I );
        }
    }
    iVar4 = g_U18635[1]._fU892._fU24;
    iVar5 = (g_U18635[1]._fU892._fU32 + iVar4) - 1;
    I = 0;
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if ((sub_101539( 7, I )) || ((sub_101539( 6, I )) || (sub_101539( 1, I ))))
        {
            sub_101631( 1, I );
            sub_101631( 6, I );
            sub_101631( 7, I );
        }
        else
        {
            sub_101720( 1, I );
            sub_101720( 6, I );
            sub_101720( 7, I );
        }
        if ((sub_101804( 7, I )) || ((sub_101804( 6, I )) || (sub_101804( 1, I ))))
        {
            sub_101896( 1, I );
            sub_101896( 6, I );
            sub_101896( 7, I );
        }
        else
        {
            sub_101985( 1, I );
            sub_101985( 6, I );
            sub_101985( 7, I );
        }
    }
    return;
}

void sub_101539(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    return IS_BIT_SET( g_U18635[uParam0]._fU892._fU0[iVar4], iVar5 );
}

void sub_101631(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    SET_BIT( ref g_U18635[uParam0]._fU892._fU0[iVar4], iVar5 );
    return;
}

void sub_101720(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    CLEAR_BIT( ref g_U18635[uParam0]._fU892._fU0[iVar4], iVar5 );
    return;
}

void sub_101804(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    return IS_BIT_SET( g_U18635[uParam0]._fU892._fU12[iVar4], iVar5 );
}

void sub_101896(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    SET_BIT( ref g_U18635[uParam0]._fU892._fU12[iVar4], iVar5 );
    return;
}

void sub_101985(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    CLEAR_BIT( ref g_U18635[uParam0]._fU892._fU12[iVar4], iVar5 );
    return;
}

void sub_102461(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    char[64] cVar7;

    iVar3 = g_U18635[uParam0]._fU892._fU24;
    iVar4 = iVar3 + g_U18635[uParam0]._fU892._fU32;
    I = 0;
    iVar6 = 0;
    StrCopy( ref cVar7, "", 64 );
    for ( I = 0; I < iVar4; I++ )
    {
        if (I == iVar3)
        {
            ConcatString(ref cVar7, " ", 64);
            iVar6++;
            if (iVar6 == 64)
            {
                PRINTSTRING( ref cVar7 );
                StrCopy( ref cVar7, "", 64 );
                iVar6 = 0;
            }
        }
        if (sub_101539( uParam0, I ))
        {
            ConcatString(ref cVar7, "1", 64);
        }
        else
        {
            ConcatString(ref cVar7, "0", 64);
        }
        iVar6++;
        if (iVar6 == 64)
        {
            PRINTSTRING( ref cVar7 );
            StrCopy( ref cVar7, "", 64 );
            iVar6 = 0;
        }
    }
    if (iVar6 < 64)
    {
        ConcatString(ref cVar7, " ", 64);
    }
    PRINTSTRING( ref cVar7 );
    PRINTNL();
    iVar6 = 0;
    StrCopy( ref cVar7, "", 64 );
    for ( I = 0; I < iVar4; I++ )
    {
        if (I == iVar3)
        {
            ConcatString(ref cVar7, " ", 64);
            iVar6++;
            if (iVar6 == 64)
            {
                PRINTSTRING( ref cVar7 );
                StrCopy( ref cVar7, "", 64 );
                iVar6 = 0;
            }
        }
        if (sub_101804( uParam0, I ))
        {
            ConcatString(ref cVar7, "1", 64);
        }
        else
        {
            ConcatString(ref cVar7, "0", 64);
        }
        iVar6++;
        if (iVar6 == 64)
        {
            PRINTSTRING( ref cVar7 );
            StrCopy( ref cVar7, "", 64 );
            iVar6 = 0;
        }
    }
    if (iVar6 < 64)
    {
        ConcatString(ref cVar7, " ", 64);
    }
    PRINTSTRING( ref cVar7 );
    PRINTNL();
    PRINTNL();
    return;
}

void sub_103016(unknown uParam0)
{
    return;
}

int sub_103273(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    g_U39173 = 0;
    switch (uParam0)
    {
        case 0:
        case 2:
        case 6:
        case 10:
        if ((IS_BIT_SET( g_U39172, 1 )) AND (IS_BIT_SET( g_U39172, 0 )))
        {
            sub_103656( "E13WA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar4 = true;
        }
        break;
        case 1:
        case 3:
        case 7:
        case 11:
        if ((IS_BIT_SET( g_U39172, 2 )) AND (IS_BIT_SET( g_U39172, 0 )))
        {
            sub_103656( "E13WA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar5 = true;
        }
        break;
        case 14:
        case 15:
        case 16:
        case 17:
        case 20:
        case 23:
        case 26:
        if (IS_BIT_SET( g_U39172, 0 ))
        {
            sub_103656( "E12WA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            g_U39173 = 1;
            bVar3 = true;
        }
        break;
        case 18:
        case 21:
        case 24:
        case 27:
        case 30:
        case 33:
        case 36:
        if (IS_BIT_SET( g_U39172, 2 ))
        {
            sub_103656( "E12WA" );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar5 = true;
        }
        break;
        case 19:
        case 22:
        case 25:
        case 28:
        case 31:
        case 34:
        case 37:
        if (IS_BIT_SET( g_U39172, 1 ))
        {
            sub_103656( "E12WA" );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar4 = true;
        }
        break;
        case 4:
        case 8:
        case 12:
        if ((IS_BIT_SET( g_U39172, 2 )) AND (IS_BIT_SET( g_U39172, 0 )))
        {
            sub_103656( "E12WA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 0;
            bVar3 = true;
            bVar5 = true;
        }
        break;
        case 5:
        case 9:
        case 13:
        if ((IS_BIT_SET( g_U39172, 1 )) AND (IS_BIT_SET( g_U39172, 0 )))
        {
            sub_103656( "E12WA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 0;
            bVar3 = true;
            bVar4 = true;
        }
        break;
        case 29:
        case 32:
        case 35:
        if ((IS_BIT_SET( g_U39172, 1 )) AND (IS_BIT_SET( g_U39172, 2 )))
        {
            sub_103656( "E12WA" );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 0;
            bVar5 = true;
            bVar4 = true;
        }
        break;
    }
    if ((NOT bVar5) AND ((NOT bVar4) AND (NOT bVar3)))
    {
        return 0;
    }
    if (NOT bVar3)
    {
        CLEAR_BIT( ref g_U39172, 0 );
        g_U39174[0] = nil;
    }
    if (NOT bVar4)
    {
        CLEAR_BIT( ref g_U39172, 1 );
        g_U39174[1] = nil;
    }
    if (NOT bVar5)
    {
        CLEAR_BIT( ref g_U39172, 2 );
        g_U39174[2] = nil;
    }
    return 1;
}

int sub_103656(unknown uParam0)
{
    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        StrCopy( ref l_U6._fU0, uParam0, 16 );
        return 1;
    }
    return 0;
}

void sub_104728(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 1;
    if (NOT (38 == g_U18635[iVar4]._fU892._fU24))
    {
        sub_3925( "FA_Jim Speech_Generic_Conversations: inconsistent number of Jim conversations - see Jim Flow" );
        return;
    }
    sub_104870();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_103273( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Jim_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_105854( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_33151( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_104870()
{
    StrCopy( ref l_U216[0], "E13W_JT1", 16 );
    StrCopy( ref l_U216[2], "E13W_JT2", 16 );
    StrCopy( ref l_U216[6], "E13W_JT3", 16 );
    StrCopy( ref l_U216[10], "E13W_JT4", 16 );
    StrCopy( ref l_U216[1], "E13W_JC1", 16 );
    StrCopy( ref l_U216[3], "E13W_JC2", 16 );
    StrCopy( ref l_U216[7], "E13W_JC3", 16 );
    StrCopy( ref l_U216[11], "E13W_JC4", 16 );
    StrCopy( ref l_U216[14], "E12W_J1", 16 );
    StrCopy( ref l_U216[15], "E12W_J2", 16 );
    StrCopy( ref l_U216[16], "E12W_J3", 16 );
    StrCopy( ref l_U216[17], "E12W_J4", 16 );
    StrCopy( ref l_U216[20], "E12W_J5", 16 );
    StrCopy( ref l_U216[23], "E12W_J6", 16 );
    StrCopy( ref l_U216[26], "E12W_J7", 16 );
    StrCopy( ref l_U216[18], "E12W_C1", 16 );
    StrCopy( ref l_U216[21], "E12W_C2", 16 );
    StrCopy( ref l_U216[24], "E12W_C3", 16 );
    StrCopy( ref l_U216[27], "E12W_C4", 16 );
    StrCopy( ref l_U216[30], "E12W_C5", 16 );
    StrCopy( ref l_U216[33], "E12W_C6", 16 );
    StrCopy( ref l_U216[36], "E12W_C7", 16 );
    StrCopy( ref l_U216[19], "E12W_T1", 16 );
    StrCopy( ref l_U216[22], "E12W_T2", 16 );
    StrCopy( ref l_U216[25], "E12W_T3", 16 );
    StrCopy( ref l_U216[28], "E12W_T4", 16 );
    StrCopy( ref l_U216[31], "E12W_T5", 16 );
    StrCopy( ref l_U216[34], "E12W_T6", 16 );
    StrCopy( ref l_U216[37], "E12W_T7", 16 );
    StrCopy( ref l_U216[4], "E12W_CJ1", 16 );
    StrCopy( ref l_U216[8], "E12W_CJ2", 16 );
    StrCopy( ref l_U216[12], "E12W_CJ3", 16 );
    StrCopy( ref l_U216[5], "E12W_TJ1", 16 );
    StrCopy( ref l_U216[9], "E12W_TJ2", 16 );
    StrCopy( ref l_U216[13], "E12W_TJ3", 16 );
    StrCopy( ref l_U216[29], "E12W_CT1", 16 );
    StrCopy( ref l_U216[32], "E12W_CT2", 16 );
    StrCopy( ref l_U216[35], "E12W_CT3", 16 );
    return;
}

void sub_105854(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_105879( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_105879(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_33226( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_105998(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 6;
    if (NOT (38 == g_U18635[iVar4]._fU892._fU24))
    {
        sub_3925( "FA_Terry_Speech_Generic_Conversations: inconsistent number of Terry conversations - see Terry Flow" );
        return;
    }
    sub_104870();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_103273( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Terry_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_105854( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_33151( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_106414(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 7;
    if (NOT (38 == g_U18635[iVar4]._fU892._fU24))
    {
        sub_3925( "FA_Clay_Speech_Generic_Conversations: inconsistent number of Clay conversations - see Clay Flow" );
        return;
    }
    sub_104870();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_103273( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Clay_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_105854( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_33151( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_106956(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        sub_2476( "E1DRA" );
        return;
        case 6:
        sub_2476( "E1DRA" );
        return;
        case 7:
        sub_2476( "E1DRA" );
        return;
    }
    sub_3925( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Not a friend" );
    sub_3925( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Should never reach here" );
    return;
}

void sub_107283(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int I;
    int iVar8;
    boolean bVar9;
    int iVar10;
    int iVar11;

    PRINTSTRING( "DRUNK TALK..........................FA_Friend_Speech_Drunken_Conversations\n" );
    switch (uParam0)
    {
        case 1:
        case 6:
        case 7: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Drunk_Conversations: Unrecognised friend ID" );
        return;
    }
    g_U18635[uParam0]._fU892._fU40 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_102461( uParam0 );
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    I = 0;
    if (NOT g_U18635[uParam0]._fU892._fU36)
    {
        iVar5 = g_U18635[uParam0]._fU892._fU24;
        iVar6 = (g_U18635[uParam0]._fU892._fU32 + iVar5) - 1;
        I = 0;
        for ( I = iVar5; I <= iVar6; I++ )
        {
            if ((NOT (sub_101804( uParam0, I ))) AND (sub_101539( uParam0, I )))
            {
                sub_101720( uParam0, I );
            }
        }
    }
    iVar4 = 0;
    iVar5 = g_U18635[uParam0]._fU892._fU24;
    iVar6 = (g_U18635[uParam0]._fU892._fU32 + iVar5) - 1;
    PRINTSTRING( ".......FIRST DRUNKEN: " );
    PRINTINT( iVar5 );
    PRINTSTRING( "       LAST DRUNKEN: " );
    PRINTINT( iVar6 );
    PRINTNL();
    I = 0;
    for ( I = iVar5; I <= iVar6; I++ )
    {
        if (NOT (sub_101539( uParam0, I )))
        {
            iVar4++;
        }
    }
    PRINTSTRING( "......TO BE TRIGGERED: " );
    PRINTINT( iVar4 );
    PRINTNL();
    if (iVar4 == 0)
    {
        for ( I = iVar5; I <= iVar6; I++ )
        {
            if (NOT (sub_101804( uParam0, I )))
            {
                sub_101720( uParam0, I );
                iVar4++;
            }
        }
    }
    if (iVar4 == 0)
    {
        return;
    }
    iVar8 = 0;
    if (g_U18635[uParam0]._fU892._fU36)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar4, ref iVar8 );
    }
    bVar9 = false;
    iVar10 = 0;
    for ( I = iVar5; I <= iVar6; I++ )
    {
        if (NOT bVar9)
        {
            if (NOT (sub_101539( uParam0, I )))
            {
                if (iVar8 == 0)
                {
                    PRINTSTRING( "......CHECKING FRIENDS AVAILABLE\n" );
                    iVar10 = I - iVar5;
                    if (sub_108234( iVar10 ))
                    {
                        g_U18635[uParam0]._fU892._fU40 = I;
                        sub_101631( uParam0, I );
                        bVar9 = true;
                    }
                }
                else
                {
                    iVar8--;
                }
            }
        }
    }
    if (NOT bVar9)
    {
        return;
    }
    PRINTSTRING( "AFTER\n" );
    sub_102461( uParam0 );
    iVar11 = 0;
    switch (uParam0)
    {
        case 1:
        sub_109417( uParam1, iVar11 );
        return;
        case 6:
        sub_110221( uParam1, iVar11 );
        return;
        case 7:
        sub_110660( uParam1, iVar11 );
        return;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Drunk_Conversations: must have forgotten to update friend ID when added speech" );
    return;
}

int sub_108234(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    g_U39173 = 0;
    switch (uParam0)
    {
        case 0:
        case 1:
        if ((IS_BIT_SET( g_U39172, 2 )) AND ((IS_BIT_SET( g_U39172, 1 )) AND (IS_BIT_SET( g_U39172, 0 ))))
        {
            sub_103656( "E1DRA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar4 = true;
            bVar5 = true;
        }
        break;
        case 2:
        if ((IS_BIT_SET( g_U39172, 1 )) AND (IS_BIT_SET( g_U39172, 0 )))
        {
            sub_103656( "E1DRA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar4 = true;
        }
        break;
        case 3:
        if ((IS_BIT_SET( g_U39172, 2 )) AND (IS_BIT_SET( g_U39172, 0 )))
        {
            sub_103656( "E1DRA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar3 = true;
            bVar5 = true;
        }
        break;
        case 4:
        case 8:
        case 13:
        if ((IS_BIT_SET( g_U39172, 2 )) AND (IS_BIT_SET( g_U39172, 1 )))
        {
            sub_103656( "E1DRA" );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar4 = true;
            bVar5 = true;
        }
        break;
        case 6:
        case 9:
        case 11:
        case 14:
        case 16:
        if (IS_BIT_SET( g_U39172, 2 ))
        {
            sub_103656( "E1DRA" );
            sub_2633( 3, g_U39174[2], "CLAY", 0 );
            g_U39173 = 1;
            bVar5 = true;
        }
        break;
        case 7:
        case 10:
        case 12:
        case 15:
        case 17:
        if (IS_BIT_SET( g_U39172, 1 ))
        {
            sub_103656( "E1DRA" );
            sub_2633( 2, g_U39174[1], "TERRY", 0 );
            g_U39173 = 1;
            bVar4 = true;
        }
        break;
        case 5:
        if (IS_BIT_SET( g_U39172, 0 ))
        {
            sub_103656( "E1DRA" );
            sub_2633( 1, g_U39174[0], "JIM", 0 );
            g_U39173 = 1;
            bVar3 = true;
        }
        break;
    }
    if ((NOT bVar5) AND ((NOT bVar4) AND (NOT bVar3)))
    {
        return 0;
    }
    if (NOT bVar3)
    {
        CLEAR_BIT( ref g_U39172, 0 );
        g_U39174[0] = nil;
    }
    if (NOT bVar4)
    {
        CLEAR_BIT( ref g_U39172, 1 );
        g_U39174[1] = nil;
    }
    if (NOT bVar5)
    {
        CLEAR_BIT( ref g_U39172, 2 );
        g_U39174[2] = nil;
    }
    return 1;
}

void sub_109417(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 1;
    if (NOT (18 == g_U18635[iVar4]._fU892._fU32))
    {
        sub_3925( "FA_Jim_Speech_Drunk_Conversations: inconsistent number of Jim drunk conversations - see Jim Flow" );
        return;
    }
    sub_109563();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar6 -= g_U18635[iVar4]._fU892._fU24;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_108234( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Jim_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_105854( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_33151( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_109563()
{
    StrCopy( ref l_U216[0], "E1DR_4W1", 16 );
    StrCopy( ref l_U216[1], "E1DR_4W2", 16 );
    StrCopy( ref l_U216[2], "E1DR_4W3", 16 );
    StrCopy( ref l_U216[3], "E1DR_4W4", 16 );
    StrCopy( ref l_U216[4], "E1DR_4W5", 16 );
    StrCopy( ref l_U216[8], "E1DR_JTC1", 16 );
    StrCopy( ref l_U216[13], "E1DR_JTC2", 16 );
    StrCopy( ref l_U216[6], "E1DR_JC1", 16 );
    StrCopy( ref l_U216[9], "E1DR_JC2", 16 );
    StrCopy( ref l_U216[11], "E1DR_JC3", 16 );
    StrCopy( ref l_U216[14], "E1DR_JC4", 16 );
    StrCopy( ref l_U216[16], "E1DR_JC5", 16 );
    StrCopy( ref l_U216[7], "E1DR_JT1", 16 );
    StrCopy( ref l_U216[10], "E1DR_JT2", 16 );
    StrCopy( ref l_U216[12], "E1DR_JT3", 16 );
    StrCopy( ref l_U216[15], "E1DR_JT4", 16 );
    StrCopy( ref l_U216[17], "E1DR_JT5", 16 );
    StrCopy( ref l_U216[5], "E12W_JJ", 16 );
    return;
}

void sub_110221(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 6;
    if (NOT (18 == g_U18635[iVar4]._fU892._fU32))
    {
        sub_3925( "FA_Terry_Speech_Drunk_Conversations: inconsistent number of Terry drunk conversations - see Terry Flow" );
        return;
    }
    sub_109563();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar6 -= g_U18635[iVar4]._fU892._fU24;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_108234( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Terry_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_105854( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_33151( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_110660(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 7;
    if (NOT (18 == g_U18635[iVar4]._fU892._fU32))
    {
        sub_3925( "FA_Clay_Speech_Drunk_Conversations: inconsistent number of Clay drunk conversations - see Clay Flow" );
        return;
    }
    sub_109563();
    iVar5 = 0;
    iVar6 = g_U18635[iVar4]._fU892._fU40;
    iVar6 -= g_U18635[iVar4]._fU892._fU24;
    iVar7 = g_U18635[iVar4]._fU892._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_108234( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Clay_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_105854( ref l_U216[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_33151( ref l_U216[iVar6], uParam0, 5, iVar5 );
    return;
}

int sub_111254(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if ((IS_CHAR_DEAD( sub_2582() )) || (sub_99267( uParam0 )))
    {
        return l_U521._fU24;
    }
    if (l_U521._fU24)
    {
        if (NOT sub_100354())
        {
            if (g_U18635[l_U416]._fU892._fU44 == -1)
            {
                l_U521._fU24 = 0;
                return 0;
            }
            iVar3 = 0;
            GET_GAME_TIMER( ref iVar3 );
            if (l_U521._fU28 == 0)
            {
                l_U521._fU28 = iVar3 + 3000;
            }
            if (sub_111400())
            {
                l_U521._fU28 = 0;
            }
            if ((iVar3 > l_U521._fU28) AND (NOT (l_U521._fU28 == 0)))
            {
                l_U521._fU28 = 0;
                if (l_U521._fU8)
                {
                    sub_106956( l_U416 );
                    sub_2633( 0, sub_2582(), l_U579, 0 );
                    sub_111519( l_U416, ref l_U465 );
                }
                else
                {
                    sub_101036( l_U416 );
                    sub_2633( 0, sub_2582(), l_U579, 0 );
                    sub_111655( l_U416, ref l_U465 );
                }
                l_U521._fU24 = 0;
                return 0;
            }
            return 1;
        }
        l_U521._fU28 = 0;
        return 1;
    }
    if (sub_100354())
    {
        if (sub_56362( l_U465 ))
        {
            iVar4 = 0;
            sub_58146( ref l_U465, iVar4 );
        }
        l_U521._fU24 = 1;
        l_U521._fU28 = 0;
        return 1;
    }
    return 0;
}

void sub_111400()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_111519(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 1:
        sub_109417( uParam1, iVar4 );
        break;
        case 6:
        sub_110221( uParam1, iVar4 );
        break;
        case 7:
        sub_110660( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_111655(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 1:
        sub_104728( uParam1, iVar4 );
        break;
        case 6:
        sub_105998( uParam1, iVar4 );
        break;
        case 7:
        sub_106414( uParam1, iVar4 );
        break;
    }
    return;
}

int sub_111916(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            return 0;
        }
    }
    return 1;
}

void sub_112252()
{
    return;
}

