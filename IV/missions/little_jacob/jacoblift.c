void main()
{
    int iVar2;

    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U102 = 0;
    l_U106 = 0.00000000;
    l_U108 = 0;
    l_U109 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 1;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 1;
    l_U124 = 0;
    l_U125 = 0;
    l_U126 = 0;
    l_U159 = 0;
    l_U160 = -1;
    l_U161 = 1;
    l_U165 = 0;
    l_U166 = "NONE";
    l_U193 = 0;
    l_U194 = 0;
    l_U204 = 0;
    l_U205 = 1;
    l_U206 = 2;
    l_U213 = 0;
    l_U214 = 999999.80000000;
    l_U215 = 0.00000000;
    l_U216 = 0.26000000;
    l_U217 = 0.65000000;
    l_U219 = 5000.00000000;
    l_U220 = 5000.00000000;
    l_U222 = 0.00000000;
    l_U224 = 0;
    l_U235 = "amb@smoking_spliff";
    l_U236 = "create_spliff";
    l_U237 = "partial_smoke";
    l_U238 = "partial_smoke_car";
    l_U239 = {0.13700000, 0.03100000, 0.03500000};
    l_U242 = {2.21400000, -0.12100000, 0.00000000};
    l_U245 = {0.00000000, 0.00000000, 0.13600000};
    l_U248 = {0.00000000, 0.00000000, 0.00000000};
    l_U251 = {-0.48300000, -0.28500000, 0.62000000};
    l_U254 = {-0.48300000, -1.30000000, 0.62000000};
    l_U257 = {0.00000000, 0.00000000, 90.00000000};
    l_U260 = {0.00000000, -0.28500000, 0.50000000};
    l_U263 = {0.00000000, 0.00000000, 0.00000000};
    l_U285 = 0;
    l_U286 = 1;
    l_U287 = 2;
    l_U288 = "missrandom_idle";
    l_U289 = "female_ilde";
    l_U290 = "female_ilde2";
    l_U291 = 1;
    l_U292 = 0;
    l_U293 = 0;
    l_U323 = 54;
    l_U324 = 0;
    l_U325 = 0;
    l_U326 = 0;
    l_U327 = 0;
    l_U328 = 0;
    l_U329 = 12;
    l_U330 = 0;
    l_U335 = 0;
    l_U337 = -1;
    l_U338 = 4;
    l_U370 = 0;
    l_U371 = 0;
    l_U376 = 0;
    l_U377 = "";
    l_U378 = 0;
    l_U391 = 0;
    l_U395 = 0;
    l_U396 = 1;
    l_U397 = 0;
    l_U398 = 0;
    l_U399 = 0;
    l_U400 = 0;
    l_U405 = 0;
    l_U422 = -1;
    l_U426 = 0;
    l_U427 = 1;
    l_U428 = 1;
    l_U436 = 150.00000000;
    l_U526 = 0;
    l_U527 = 150.00000000;
    l_U577 = 0;
    l_U780 = 0;
    iVar2 = 0;
    sub_892();
    sub_1214( g_U64782._fU0._fU0, g_U64782._fU0._fU4, g_U64782._fU0._fU8, g_U64782._fU12, iVar2 );
    sub_2242();
    l_U339 = 0;
    while (NOT l_U330)
    {
        if (NOT sub_2767())
        {
            sub_3833( "JacobLift: Perform_Mission_Loop() returned FALSE unexpectedly" );
        }
        sub_82594();
        WAIT( 0 );
    }
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "******************** JACOB LIFT DEATHARREST\n" );
        PRINTNL();
        sub_16508();
    }
    WAIT( 0 );
    while (sub_2767())
    {
        sub_82594();
        WAIT( 0 );
    }
    PRINTSTRING( "quitting JACOB LIFT without PASS or FAIL\n" );
    sub_16508();
    sub_27347( "JACOB LIFT: should never reach ENDSCRIPT" );
    return;
}

void sub_892()
{
    sub_901();
    sub_1109();
    sub_1133();
    l_U324 = 1;
    l_U325 = 0;
    return;
}

void sub_901()
{
    l_U324 = 0;
    l_U325 = 0;
    l_U327 = 0;
    l_U328 = 0;
    l_U329 = 12;
    l_U330 = 0;
    sub_946();
    return;
}

void sub_946()
{
    l_U344._fU0 = 1;
    l_U344._fU4 = 0;
    l_U344._fU8 = 0;
    l_U344._fU12 = 0;
    l_U344._fU16 = 1;
    l_U344._fU20 = 0;
    l_U344._fU24 = 0;
    l_U344._fU28 = 0;
    l_U344._fU32 = 0;
    l_U344._fU36 = 0;
    l_U344._fU40 = 0;
    l_U344._fU44 = 0;
    l_U344._fU48 = 0;
    l_U344._fU52 = 64537;
    l_U344._fU56 = 64537;
    return;
}

void sub_1109()
{
    l_U336 = nil;
    return;
}

void sub_1133()
{
    return;
}

void sub_1214(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, boolean bParam4)
{
    int iVar7;
    unknown uVar8;

    # -sub_C1FFC0-0xc214c8( 0, ref l_U127 );
    iVar7 = 3;
    uVar8 = sub_1240( 3, 3 );
    g_U22274[iVar7]._fU184 = uVar8;
    l_U269 = {g_U9731[uVar8]._fU4};
    l_U272 = {g_U9731[uVar8]._fU16};
    sub_1637( uParam0, uParam1, uParam2, uParam3 );
    l_U267 = nil;
    l_U268 = nil;
    l_U275 = nil;
    sub_1703( g_U26415[iVar7] );
    sub_1734( 1 );
    sub_1917();
    if (bParam4)
    {
        sub_1993( "MISSPICKUP_JACOB", "idle_01", "smoking", "wave" );
    }
    else
    {
        sub_1993( l_U166, l_U166, l_U166, l_U166 );
    }
    return;
}

void sub_1240(int Result, int iParam1)
{
    int iVar4;
    int iVar5;
    int I;
    int iVar7;
    int[8] iVar8;
    int iVar17;

    if (Result == iParam1)
    {
        return Result;
    }
    iVar4 = Result;
    iVar5 = iParam1;
    I = 0;
    iVar7 = 0;
    array(ref iVar8, 8);
    for ( I = iVar4; I <= iVar5; I++ )
    {
        iVar8[I] = 0;
        if (g_U9731[I]._fU0)
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
    iVar17 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar7, ref iVar17 );
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if (iVar8[I])
        {
            if (iVar17 == 0)
            {
                return I;
            }
            iVar17--;
        }
    }
    SCRIPT_ASSERT( "Choose_Friend_Dropoff_Point: code should never reach this point" );
    return Result;
}

void sub_1637(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U103 = {uParam0, uParam1, uParam2};
    l_U106 = uParam3;
    return;
}

void sub_1703(unknown uParam0)
{
    l_U109 = 1;
    l_U110 = uParam0;
    return;
}

void sub_1734(boolean bParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( l_U107 )))
    {
        ADD_BLIP_FOR_CONTACT( l_U103._fU0, l_U103._fU4, l_U103._fU8, ref l_U107 );
        CHANGE_BLIP_DISPLAY( l_U107, 2 );
        CHANGE_BLIP_PRIORITY( l_U107, 1 );
        if (l_U109)
        {
            CHANGE_BLIP_SPRITE( l_U107, l_U110 );
            if (bParam0)
            {
                iVar3 = 0;
                GET_GAME_TIMER( ref iVar3 );
                CHANGE_BLIP_PRIORITY( l_U107, l_U2 );
                FLASH_BLIP( l_U107, 1 );
                l_U124 = iVar3 + 10000;
                l_U125 = 1;
            }
        }
    }
    return;
}

void sub_1917()
{
    l_U161 = 0;
    return;
}

void sub_1993(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    StrCopy( ref l_U167._fU0, uParam0, 32 );
    StrCopy( ref l_U167._fU32, uParam1, 16 );
    StrCopy( ref l_U167._fU48, uParam2, 16 );
    StrCopy( ref l_U167._fU64, uParam3, 16 );
    l_U167._fU80 = 0;
    l_U167._fU84 = 0;
    l_U167._fU88 = 0;
    l_U167._fU92 = 0;
    l_U167._fU100 = 1;
    l_U167._fU96 = 1;
    if (COMPARE_STRING( uParam0, l_U166 ))
    {
        l_U167._fU96 = 0;
    }
    sub_2137();
    return;
}

void sub_2137()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref iVar3 );
    l_U167._fU84 = iVar2 + iVar3;
    return;
}

void sub_2242()
{
    sub_2251();
    return;
}

void sub_2251()
{
    sub_2260();
    sub_2327( 0, "FAljA_1" );
    sub_2327( 1, "FAljB_1" );
    sub_2327( 2, "FAljH" );
    sub_2408( "FCJAAUD" );
    sub_2563( 0, sub_2514(), "NIKO", 0 );
    StrCopy( ref l_U153, "JACOB", 16 );
    l_U157 = 1;
    l_U158 = 3;
    return;
}

void sub_2260()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        StrCopy( ref l_U128[I], "", 16 );
    }
    return;
}

void sub_2327(int iParam0, unknown uParam1)
{
    if (iParam0 >= 3)
    {
        return;
    }
    StrCopy( ref l_U128[iParam0], uParam1, 16 );
    return;
}

void sub_2408(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_2425();
    return;
}

void sub_2425()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U4._fU16[I]._fU0 = nil;
        StrCopy( ref l_U4._fU16[I]._fU4, "", 32 );
        l_U4._fU344[I] = 0;
    }
    return;
}

void sub_2514()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2563(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2643( "\n PED NUMBER ", uParam0 );
    sub_2683( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2643(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2683(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_2767()
{
    boolean bVar2;

    if ((IS_KEYBOARD_KEY_PRESSED( 31 )) AND (l_U330))
    {
        l_U338 = 1;
        sub_2801();
        return 0;
    }
    if ((IS_KEYBOARD_KEY_PRESSED( 33 )) AND (l_U330))
    {
        l_U329 = 11;
        sub_18664();
        return 0;
    }
    l_U327 = 0;
    l_U328 = 0;
    l_U329 = 12;
    switch (l_U324)
    {
        case 0:
        sub_27347( "Mission Loop: Stage should never be 'Initialise'" );
        break;
        case 1:
        sub_28062();
        break;
        case 5:
        sub_53575();
        break;
        case 6:
        l_U327 = 1;
        break;
        default:
        sub_27347( "Mission_Loop: Unknown Stage ID" );
        return 0;
    }
    if (l_U327)
    {
        sub_2801();
        return 0;
    }
    if (l_U328)
    {
        sub_18664();
        return 0;
    }
    bVar2 = sub_69993( l_U267 );
    if (bVar2)
    {
        l_U328 = 1;
        l_U329 = 7;
        sub_18664();
        return 0;
    }
    sub_70314( l_U267 );
    return 1;
}

void sub_2801()
{
    PRINTSTRING( "******************** JACOB LIFT PASSED\n" );
    PRINTNL();
    CLEAR_WANTED_LEVEL( sub_2866() );
    sub_2909( l_U338 );
    g_U21 = l_U323;
    sub_16508();
    return;
}

void sub_2866()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2909(unknown uParam0)
{
    sub_2920( uParam0 );
    return;
}

void sub_2920(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;

    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 1;
    sub_2938();
    sub_2993( uParam0 );
    sub_3022( uParam0 );
    sub_3055( iVar3, iVar4, iVar5 );
    iVar6 = 3;
    uVar7 = g_U22274[iVar6]._fU144;
    sub_15894( iVar6, uVar7 );
    return;
}

void sub_2938()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U774[I] = 4;
    }
    return;
}

void sub_2993(unknown uParam0)
{
    l_U774[1] = uParam0;
    return;
}

void sub_3022(unknown uParam0)
{
    l_U774[0] = uParam0;
    return;
}

void sub_3055(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 3;
    sub_3086( iVar5, uParam0, uParam1, uParam2, "Friend_4" );
    return;
}

void sub_3086(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_3182( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_3182( ref cVar9 );
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
            sub_3182( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_3182( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_3182( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_3182( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_3759( iParam0, iVar7 );;;
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
                sub_4177( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_4177( 0, 4 );
            }
        }
    }
    if (NOT (sub_4266( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2866(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2866() );
    }
    sub_13498();
    bVar27 = true;
    uVar28 = sub_3759( iParam0, iVar7 );
    uVar29 = sub_14140( iParam0 );
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
                sub_14671( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_15101();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_15186( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_15243( iParam0 );
                sub_15378( 0 );
                sub_15459( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_15564();
        }
    }
    if (bParam2)
    {
        sub_15101();
        sub_15652();
        sub_15378( 0 );
    }
    if (bParam3)
    {
        sub_15101();
        sub_15692();
        sub_15378( 0 );
        sub_15459( uVar29, 0 );
    }
    sub_15743();
    return;
}

void sub_3182(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_3759(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_3833( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_3833(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_4177(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_4266(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_4474( uParam1 );
        break;
        case 1:
        bVar8 = sub_6552( uParam1 );
        break;
        case 2:
        bVar8 = sub_6778( uParam1 );
        break;
        case 3:
        bVar8 = sub_6928( uParam1 );
        break;
        case 4:
        bVar8 = sub_7206( uParam1 );
        break;
        case 5:
        bVar8 = sub_7509( uParam1 );
        break;
        case 6:
        bVar8 = sub_7708( uParam1 );
        break;
        case 7:
        bVar8 = sub_7934( uParam1 );
        break;
        case 8:
        bVar8 = sub_8169( uParam1 );
        break;
        case 9:
        bVar8 = sub_8544( uParam1 );
        break;
        case 10:
        bVar8 = sub_8791( uParam1 );
        break;
        case 11:
        bVar8 = sub_8930( uParam1 );
        break;
        case 12:
        bVar8 = sub_9229( uParam1 );
        break;
        case 13:
        bVar8 = sub_9457( uParam1 );
        break;
        case 14:
        bVar8 = sub_9744( uParam1 );
        break;
        case 15:
        bVar8 = sub_10026( uParam1 );
        break;
        case 16:
        bVar8 = sub_10308( uParam1 );
        break;
        case 17:
        bVar8 = sub_10509( uParam1 );
        break;
        case 18:
        bVar8 = sub_10582( uParam1 );
        break;
        case 19:
        bVar8 = sub_10796( uParam1 );
        break;
        case 20:
        bVar8 = sub_11049( uParam1 );
        break;
        case 21:
        bVar8 = sub_11296( uParam1 );
        break;
        case 22:
        bVar8 = sub_11497( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_6157( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_3759( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_11820( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_4474(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_4753( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_4753( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_4753( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_4753( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_4753( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_4753( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_4753( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_4753( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_4753( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_4753( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_4753( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_4753( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_4753( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_4753( iVar3, 0, 3, 1, 0, 0 );
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
        sub_4753( iVar3, 0, sub_6035(), sub_6301(), 0, 0 );
        break;
        default:
        sub_6460( "Friend 1", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Friend 1", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_4753(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_4764( uParam1 );
    sub_4938( uParam0, 0, uParam2 );
    sub_4938( uParam0, 1, uParam3 );
    sub_4938( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_2938();
    return;
}

void sub_4764(unknown uParam0)
{
    ADD_SCORE( sub_2866(), uParam0 );
    sub_4789( uParam0 );
    return;
}

void sub_4789(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_3833( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_4938(unknown uParam0, int iParam1, int iParam2)
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
        sub_5095( uParam0 );
    }
    return;
}

void sub_5095(unknown uParam0)
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

int sub_6035()
{
    switch (l_U774[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6157( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_6157(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_6301()
{
    switch (l_U774[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6157( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_6460(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_6552(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4753( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_6460( "Contact 2", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 2", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6778(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_4753( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_6460( "Girl 3", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Girl 3", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6928(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_4753( iVar3, 0, sub_6035(), sub_6301(), 0, 0 );
        break;
        default:
        sub_6460( "Friend 4", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Friend 4", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7206(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4753( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_4753( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_4753( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_4753( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_6460( "Contact 5", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 5", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7509(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_6460( "Contact 7", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 7", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7708(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4753( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_6460( "Contact 7b", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 7b", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7934(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_4753( iVar3, 0, sub_6035(), sub_6301(), 0, 0 );
        break;
        default:
        sub_6460( "Friend 8", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Friend 8", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8169(unknown uParam0)
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
        sub_4753( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_4753( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_4753( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_4753( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_4753( iVar3, 0, sub_6035(), sub_6301(), 0, 0 );
        break;
        default:
        sub_6460( "Friend 9", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Friend 9", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8544(unknown uParam0)
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
        sub_4753( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_4753( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_4753( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_6460( "Contact 10", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_6460( "Contact 10", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8791(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_6460( "Girl 11", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Girl 11", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8930(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4753( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_4753( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_4753( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_4753( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_4753( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_6460( "Contact 12", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 12", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9229(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4753( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_6460( "Contact 13", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 13", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9457(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_4753( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_4753( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_4753( iVar3, 0, sub_6035(), sub_6301(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_6460( "Friend 15", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Friend 15", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9744(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4753( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_4753( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_4753( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_6460( "Contact 16", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 16", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10026(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_4753( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_4753( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_4753( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_6460( "Contact 18", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 18", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10308(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_6460( "Contact 19", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 19", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10509(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_6460( "Girl 20", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10582(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_6460( "Contact 21", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 21", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10796(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4753( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_4753( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_6460( "Contact 22", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 22", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11049(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_4753( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_4753( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_4753( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_6460( "Contact 24", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 24", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11296(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_4753( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_4753( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_4753( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_6460( "Contact 25", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_6460( "Contact 25", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11497(unknown uParam0)
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
        sub_4753( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_6460( "Girl 26", 1 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_6460( "Girl 26", 0 );
        sub_4753( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_11820(int iParam0, int iParam1)
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
    if (sub_11868( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_12599( iParam1 );
    }
    return;
}

int sub_11868(int iParam0, int iParam1)
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
            sub_12008( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_12008(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_12190( 0 );
    return;
}

void sub_12190(boolean bParam0)
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
        sub_12445();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_12445()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_12599(int iParam0)
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
        sub_12932( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_12932( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_12932( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_12932( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_12932( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_12932( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_12932( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_12932( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_12932( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_12932( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_12932( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_12932( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_12932( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_12932( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_12932( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_12932( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_12932( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_12932( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_12932( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_12932(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_13498()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_13536( 5, g_U569[I] )) == 1))
        {
            if ((sub_13536( 1, g_U569[I] )) != 0)
            {
                sub_13822( I );
            }
        }
    }
    if (NOT sub_13988())
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

int sub_13536(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_13822(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_13907( g_U569 - 1 );
    return;
}

void sub_13907(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_13988()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_13536( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_14140(unknown uParam0)
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
    sub_3833( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_14671(unknown uParam0, unknown uParam1)
{
    sub_14690( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_14690(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_15101()
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

int sub_15186(int iParam0, int iParam1)
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

void sub_15243(unknown uParam0)
{
    sub_15252();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_15252()
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

void sub_15378(unknown uParam0)
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

void sub_15459(int iParam0, boolean bParam1)
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

void sub_15564()
{
    sub_15573();
    return;
}

void sub_15573()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_15652()
{
    sub_15573();
    return;
}

void sub_15692()
{
    sub_15573();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_15743()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_15765();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_15765()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_15894(unknown uParam0, unknown uParam1)
{
    int iVar4;
    unknown uVar5;
    int I;
    int iVar7;

    if (g_U0)
    {
        return;
    }
    iVar4 = 3;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        iVar4 = 0;
        break;
        case 7: return;
        case 8:
        iVar4 = 1;
        break;
        case 13:
        iVar4 = 2;
        break;
        default: return;
    }
    switch (uParam1)
    {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 11:
        case 12:
        case 13: break;
        case 10: return;
    }
    return;
    uVar5 = uParam1;
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64831[iVar4]._fU0), uVar5 )))
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64831[iVar4]._fU4), uVar5 ))
    {
        return;
    }
    SET_BIT( 1, uVar5 );
    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        if (IS_BIT_SET( ProtectedGet(g_U64831[iVar4]._fU0), I ))
        {
            if (NOT (IS_BIT_SET( ProtectedGet(g_U64831[iVar4]._fU4), I )))
            {
                return;
            }
        }
    }
    iVar7 = 0;
    if (NOT g_U64821[iVar4]._fU0)
    {
        iVar7 = ProtectedGet(g_U64838[iVar4]._fU8);
        if (iVar7 > 0)
        {
            sub_12008( 3, iVar7 );
            g_U64821[iVar4]._fU0 = 1;
            sub_16357( uParam0 );
            return;
        }
    }
    return;
    break;
    2;
    1;
    ref g_U64831[iVar4]._fU4;
    1;
    ref g_U64831[iVar4]._fU4;
    break;
}

void sub_16357(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        PRINT_HELP( "FRDOK_J" );
        break;
        case 8:
        PRINT_HELP( "FRDOK_B" );
        break;
        case 13:
        PRINT_HELP( "FRDOK_P" );
        break;
    }
    return;
}

void sub_16508()
{
    sub_16517();
    sub_17631();
    sub_18145();
    sub_18446( 3, 10, l_U330 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_16517()
{
    sub_16526();
    sub_16598();
    sub_16639();
    sub_16669( 3 );
    REMOVE_DECISION_MAKER( l_U127 );
    if (NOT (COMPARE_STRING( ref l_U167._fU0, l_U166 )))
    {
        REMOVE_ANIMS( ref l_U167._fU0 );
    }
    l_U108 = 0;
    if ((NOT (IS_CHAR_DEAD( l_U267 ))) AND (NOT (l_U267 == nil)))
    {
        if (IS_GROUP_MEMBER( l_U267, sub_17460() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U267 );
        }
        if (IS_CHAR_INJURED( l_U267 ))
        {
            SET_PED_DIES_WHEN_INJURED( l_U267, 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U267 );
        }
        else
        {
            DELETE_CHAR( ref l_U267 );
        }
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    return;
}

void sub_16526()
{
    sub_16539( ref l_U268 );
    return;
}

void sub_16539(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

void sub_16598()
{
    REMOVE_BLIP( l_U107 );
    l_U124 = 0;
    l_U125 = 0;
    return;
}

void sub_16639()
{
    REMOVE_BLIP( l_U275 );
    return;
}

void sub_16669(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_16680( uParam0 ) );
    return;
}

int sub_16680(unknown uParam0)
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
    sub_3833( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_17460()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_17631()
{
    sub_17640();
    return;
}

void sub_17640()
{
    int iVar2;

    if (l_U339)
    {
        DELETE_WIDGET_GROUP( l_U340 );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U336 );
    if (l_U335)
    {
        SET_CAM_ACTIVE( l_U331[1], 0 );
        SET_CAM_PROPAGATE( l_U331[1], 0 );
        sub_17724();
    }
    if (IS_PLAYER_PLAYING( sub_2866() ))
    {
        SET_PLAYER_CONTROL( sub_2866(), 1 );
    }
    CLEAR_HELP();
    sub_17819();
    iVar2 = 0;
    sub_17989( iVar2 );
    return;
}

void sub_17724()
{
    int iVar2;

    DESTROY_ALL_CAMS();
    SET_USE_HIGHDOF( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    iVar2 = 0;
    END_CAM_COMMANDS( ref iVar2 );
    l_U335 = 0;
    return;
}

void sub_17819()
{
    int I;

    g_U32898._fU0 = 54;
    g_U32898._fU4 = 9;
    g_U32898._fU8 = 9;
    g_U32898._fU12 = 9;
    g_U32898._fU16 = 8;
    g_U32898._fU20 = 8;
    g_U32898._fU24 = 0;
    g_U32898._fU28 = 0;
    g_U32898._fU32 = 0;
    g_U32898._fU72 = 0;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        g_U32898._fU36[I] = 0;
    }
    return;
}

void sub_17989(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 <= 8) AND (g_U8392 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_18145()
{
    sub_18154();
    return;
}

void sub_18154()
{
    sub_18163();
    return;
}

void sub_18163()
{
    g_U10978 = 0;
    if (g_U813)
    {
        sub_18188();
        return;
    }
    sub_18303();
    return;
}

void sub_18188()
{
    if (COMPARE_STRING( ref g_U9926, "FPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_18233();
    return;
}

void sub_18233()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_18303()
{
    if (COMPARE_STRING( ref g_U9926, "FPASS" ))
    {
        StrCopy( ref g_U9926, "", 16 );
        return;
    }
    sub_18348();
    return;
}

void sub_18348()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_18446(unknown uParam0, unknown uParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;

    if (g_U813)
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
    g_U22274[uParam0]._fU152 = iVar7 + iVar5;
    g_U22274[uParam0]._fU156 = iVar7 + iVar6;
    if (bParam2)
    {
        g_U22274[uParam0]._fU148 = uParam1;
        return;
    }
    g_U22274[uParam0]._fU148 = 14;
    return;
}

void sub_18664()
{
    int iVar2;

    PRINTSTRING( ".................... JACOB LIFT FAILED" );
    iVar2 = 0;
    switch (l_U329)
    {
        case 0:
        iVar2 = sub_18773( l_U267 );
        sub_18854( iVar2, l_U267 );
        break;
        case 7:
        sub_24470( l_U267, 3 );
        break;
        case 11:
        PRINTSTRING( ".......................(forced failure)\n" );
        break;
        case 12:
        sub_27347( "Unknown reason for failure" );
        break;
        default: sub_27347( "Unrecognised Fail ID" );
    }
    PRINTNL();
    sub_27547( iVar2 );
    sub_16508();
    return;
}

void sub_18773(unknown uParam0)
{
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_2514() )))
        {
            Result = HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_2514(), 0 );
        }
    }
    return Result;
}

void sub_18854(unknown uParam0, unknown uParam1)
{
    sub_18867( uParam0, uParam1 );
    return;
}

void sub_18867(boolean bParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 3;
    iVar5 = 3;
    sub_18886( iVar4, uParam1 );
    if (bParam0)
    {
        sub_24137( iVar5 );
    }
    return;
}

void sub_18886(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    if (NOT g_U22274[uParam0]._fU500._fU0)
    {
        return;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return;
    }
    uVar4 = sub_18948( uParam0 );
    if (g_U13391[uVar4]._fU80._fU0 == 1)
    {
        sub_19345( uVar4 );
    }
    if (g_U13391[uVar4]._fU0._fU0 == 1)
    {
        sub_23597( uVar4 );
    }
    if (g_U13391[uVar4]._fU160._fU0)
    {
        if (g_U13391[uVar4]._fU160._fU8)
        {
            g_U15946[uParam0]._fU8[0]._fU0[3] = 0;
        }
        g_U13391[uVar4]._fU160._fU108._fU0 = 0;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U22274[uParam0]._fU500._fU4 = 1;
    g_U22274[uParam0]._fU500._fU168 = iVar5 + g_U22274[uParam0]._fU500._fU164;
    g_U22274[uParam0]._fU500._fU184 = uParam1;
    sub_24103( "CONTACT HOSPITALISED\n" );
    return;
}

int sub_18948(unknown uParam0)
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
        case 22: return 20;
        case 20: return 21;
        case 21: return 22;
    }
    sub_3833( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

void sub_19345(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU80._fU0 = 0;
        sub_19466( uParam0 );
        sub_21746( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_22034( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU80._fU0 = 6;
        sub_22034( uParam0, iVar4 );
        break;
        case 6:
        sub_22034( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_22483( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_3833( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_19466(unknown uParam0)
{
    if ((NOT (g_U13391[uParam0]._fU80._fU0 == 1)) AND (NOT (g_U13391[uParam0]._fU80._fU0 == 0)))
    {
        sub_19523( uParam0 );
        sub_19669( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_19523( uParam0 );
        sub_19859( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 0)
    {
        sub_19669( uParam0 );
    }
    if ((NOT (g_U13391[uParam0]._fU0._fU0 == 1)) AND (NOT (g_U13391[uParam0]._fU0._fU0 == 0)))
    {
        sub_19523( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_20982( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_19523( uParam0 );
    }
    return;
}

void sub_19523(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
    g_U13391[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU0._fU68;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_19669(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
    g_U13391[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU80._fU68;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_19859(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_19669( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU80._fU4;
        iVar8 = sub_3759( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU80._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_3833( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U1 );
        if ((NOT g_U13391[uParam0]._fU80._fU72) || (NOT g_U32896._fU4))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U13391[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U2 );
        sub_20537( g_U13391[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

void sub_20537(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 1:
        sub_20629( ref uParam0, 827.41800000, -288.99640000, 14.75330000, 179.76500000 );
        break;
        case 17:
        sub_20629( ref uParam0, -150.38910000, -795.66570000, 4.20110000, 271.69380000 );
        break;
        case 18:
        sub_20629( ref uParam0, -160.31520000, -796.40800000, 5.20610000, 270.00000000 );
        break;
        case 24:
        sub_20629( ref uParam0, -126.75380000, -263.66190000, 11.56380000, 0.00000000 );
        break;
        case 29:
        sub_20629( ref uParam0, -905.43880000, 908.73140000, 12.59760000, 0.74970000 );
        break;
        case 32:
        sub_20629( ref uParam0, 341.41760000, -454.50700000, 3.60780000, 0.74970000 );
        break;
    }
    return;
}

void sub_20629(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_20982(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_19523( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU0._fU4;
        iVar8 = sub_3759( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU0._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_3833( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U1 );
        if ((NOT g_U13391[uParam0]._fU0._fU72) || (NOT g_U32896._fU4))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U2 );
        if (l_U428)
        {
            FLASH_BLIP( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U428 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U428 = 1;
        }
        sub_20537( g_U13391[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_21746(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
        }
    }
    g_U13391[uParam0]._fU80._fU0 = 0;
    g_U13391[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU80._fU24, "", 32 );
    g_U13391[uParam0]._fU80._fU56 = 10;
    g_U13391[uParam0]._fU80._fU60 = nil;
    g_U13391[uParam0]._fU80._fU64 = nil;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U13391[uParam0]._fU80._fU72 = 1;
    g_U13391[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_22034(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU80._fU24 );
        sub_21746( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU0._fU24 );
    sub_22172( uParam0, 0 );;
    sub_19466( uParam0 );
    return;
}

void sub_22172(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
        }
    }
    g_U13391[uParam0]._fU0._fU0 = 0;
    g_U13391[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU0._fU24, "", 32 );
    g_U13391[uParam0]._fU0._fU56 = 10;
    g_U13391[uParam0]._fU0._fU60 = nil;
    g_U13391[uParam0]._fU0._fU64 = nil;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U13391[uParam0]._fU0._fU72 = 1;
    g_U13391[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_22483(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U13391[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U13391[iParam0]._fU80._fU60 );
        }
        sub_21746( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U13391[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U13391[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U13391[iParam0]._fU0._fU56;
    if ((iVar5 == 6) || (iVar5 == 5))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U10981[iParam0]._fU28 = 1;
    }
    sub_22172( iParam0, 0 );
    if (bVar4)
    {
        sub_22692();
    }
    g_U10981[iParam0]._fU12 = 0;;
    if (iParam0 == 23)
    {
        sub_22748();
        return;
    }
    sub_19466( iParam0 );
    if (bVar4)
    {
        g_U10978 = 0;
    }
    if (bVar4)
    {
        sub_23395( iParam0 );
    }
    if (g_U2)
    {
        if (g_U3)
        {
            WAIT( 1500 );
            g_U4 = 1;
        }
    }
    return;
}

void sub_22692()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_22748()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( sub_2866() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2514() ))
        {
            if (NOT (g_U15936._fU24 == -1))
            {
                uVar3 = g_U32697[g_U15936._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( sub_2514(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15936._fU24;
    sub_22860();
    if (bVar2)
    {
        g_U15936._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref g_U15936._fU32 );
        g_U15936._fU24 = uVar4;
    }
    l_U427 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_2866(), 0 );
    sub_23015();
    if (IS_PLAYER_PLAYING( sub_2866() ))
    {
        SET_PLAYER_CONTROL( sub_2866(), 1 );
    }
    return;
}

void sub_22860()
{
    g_U15936._fU0 = 0;
    g_U15936._fU4 = 0;
    g_U15936._fU8 = 0;
    g_U15936._fU12 = 0;
    g_U15936._fU16 = 0;
    g_U15936._fU20 = 0;
    g_U15936._fU24 = -1;
    g_U15936._fU32 = nil;
    g_U15936._fU28 = 0;
    return;
}

void sub_23015()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2866() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_2514() ))
    {
        l_U427 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_2866(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_2514() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( sub_2514(), -488123221 ))) AND (NOT (IS_CHAR_IN_MODEL( sub_2514(), 837858166 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15936._fU20)
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
        if (l_U427)
        {
            return;
        }
        l_U427 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_2866(), 1 );
    }
    else if (NOT l_U427)
    {
        return;
    }
    l_U427 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( sub_2866(), 0 );;
    return;
}

void sub_23395(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_23597(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU0._fU0 = 0;
        sub_19466( uParam0 );
        sub_22172( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_22034( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_22034( uParam0, iVar4 );
        break;
        case 6:
        sub_22034( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_22483( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_3833( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_24103(unknown uParam0)
{
    return;
}

void sub_24137(unknown uParam0)
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
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        sub_4753( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_3182( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_24470(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = g_U22274[uParam1]._fU104;
    uVar5 = g_U22274[uParam1]._fU136;
    sub_24515( uVar4 );
    sub_24621( uVar4, uParam1, uVar5, 0 );
    uVar6 = sub_18948( uParam1 );
    sub_26882( uVar6 );
    return;
}

void sub_24515(unknown uParam0)
{
    g_U63988._fU12[uParam0]._fU0 = 0;
    g_U63988._fU12[uParam0]._fU4 = 0;
    g_U63988._fU12[uParam0]._fU12 = 57;
    g_U63988._fU12[uParam0]._fU16 = 0;
    g_U63988._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_24621(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    sub_24643( uParam0, uParam1, uParam2, uParam3, iVar6 );
    return;
}

void sub_24643(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_24755( uParam1, uParam2 );
        return;
    }
    if (g_U63988._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar8 = 0;
    GET_GAME_TIMER( ref iVar8 );
    g_U63988._fU12[iParam0]._fU0 = 1;
    g_U63988._fU12[iParam0]._fU4 = 0;
    g_U63988._fU12[iParam0]._fU8 = 0;
    g_U63988._fU12[iParam0]._fU12 = uParam1;
    g_U63988._fU12[iParam0]._fU16 = uParam2;
    g_U63988._fU12[iParam0]._fU20 = iVar8 + iParam3;
    g_U63988._fU12[iParam0]._fU28 = uParam4;
    sub_26689( iParam0, iParam3 );
    return;
}

void sub_24755(unknown uParam0, unknown uParam1)
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
    uVar11 = sub_24778( uParam0 );
    sub_25269( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_25613( ref uVar4, 1 );
    sub_25641( ref uVar4, 0 );
    sub_25669( ref uVar4, 2 );
    sub_25699( ref uVar4 );
    return;
}

int sub_24778(unknown uParam0)
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
        case 22: return 22;
        case 20: return 20;
        case 28: return 28;
        case 29: return 29;
        case 30: return 30;
        case 31: return 31;
        case 32: return 32;
        case 34: return 81;
        case 25: return 25;
    }
    sub_3833( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_25269(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_25291( uParam0, 0, iParam4 + 0 );
    sub_25291( uParam1, 1, iParam4 + 0 );
    sub_25291( uParam2, 2, iParam4 + 0 );
    sub_25291( uParam3, 3, iParam4 + 0 );
    sub_25291( 0, 4, iParam4 + 0 );
    sub_25291( 1, 5, iParam4 + 0 );
    sub_25291( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_25291(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_25613(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_25641(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_25669(int iParam0, unknown uParam1)
{
    sub_25291( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_25699(int iParam0)
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
        if (NOT sub_25769())
        {
            sub_13822( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_25896( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_13822( iVar9 );
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
                ConcatString(ref cVar5, sub_13536( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_13536( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_25769()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_13536( 1, g_U569[I] )) != 0))
        {
            sub_13822( I );
            return 1;
        }
    }
    return 0;
}

int sub_25896(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_25961( uParam0, g_U569[Result] ))
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

int sub_25961(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_13536( 0, uParam0 );
        if (iVar14 == (sub_13536( 0, uParam6 )))
        {
            iVar15 = sub_13536( 3, uParam0 );
            if (iVar15 == (sub_13536( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_26689(unknown uParam0, int iParam1)
{
    g_U63988._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_26728( iParam1 ))
    {
        g_U63988._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_26728(int iParam0)
{
    int iVar3;

    iVar3 = sub_15765();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_26758();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_26758()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_26882(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0:
        case 7:
        iVar3 = -10;
        break;
        case 3:
        iVar3 = -10;
        break;
        case 8:
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_3833( "Flow_Friend_Left_Behind_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_27056( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_27056( uParam0, 0, iVar4 );
    return;
}

void sub_27056(unknown uParam0, int iParam1, int iParam2)
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
        sub_5095( uParam0 );
    }
    return;
}

void sub_27347(unknown uParam0)
{
    sub_27380( "ERROR: JACOB LIFT: ", uParam0 );
    return;
}

void sub_27380(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "ERROR: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_27547(boolean bParam0)
{
    switch (l_U329)
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
        PRINT_NOW( "FAFLEFT", 7000, 1 );
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

void sub_28062()
{
    l_U343 = 0;
    sub_28077();
    if (NOT (sub_41471( 3, l_U267 )))
    {
        return;
    }
    if (NOT l_U328)
    {
        sub_52864();
        l_U371 = 1;
        l_U324 = 5;
    }
    return;
}

void sub_28077()
{
    if (IS_CHAR_DEAD( l_U267 ))
    {
        return;
    }
    sub_28111( l_U267 );
    return;
}

void sub_28111(unknown uParam0)
{
    float fVar3;
    unknown uVar4;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if ((g_U9180) || (NOT IS_MINIGAME_IN_PROGRESS()))
            {
                GET_FRAME_TIME( ref fVar3 );
                l_U214 += fVar3 * 1000.00000000;
                l_U215 += fVar3 * 1000.00000000;
                l_U218 += fVar3 * 1000.00000000;
                sub_28235( uParam0 );
                if (l_U210)
                {
                    if (HAVE_ANIMS_LOADED( l_U235 ))
                    {
                        if ((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U235, l_U238 ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U235, l_U237 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U235, l_U236 )))))
                        {
                            sub_38207( uParam0, 0 );
                            l_U210 = 0;
                        }
                    }
                    else
                    {
                        sub_38207( uParam0, 0 );
                        l_U210 = 0;
                    }
                }
                switch (l_U223)
                {
                    case 0:
                    if (NOT (sub_38316( uParam0 )))
                    {
                        l_U215 = 0.00000000;
                    }
                    if (l_U207)
                    {
                        sub_39503( uParam0 );
                    }
                    if (l_U215 > 10000.00000000)
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U235 )))
                        {
                            REQUEST_ANIMS( l_U235 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -785338897 )))
                        {
                            REQUEST_MODEL( -785338897 );
                        }
                        if (HAVE_ANIMS_LOADED( l_U235 ))
                        {
                            if ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))) AND (NOT (IS_CHAR_IN_ANY_CAR( uParam0 ))))
                            {
                                sub_38207( uParam0, 1 );
                                TASK_CLEAR_LOOK_AT( uParam0 );
                                TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U236, l_U235, 8.00000000, -1, 3328 );
                                l_U210 = 1;
                                l_U214 = 0.00000000;
                                l_U223 = 1;
                            }
                            else
                            {
                                sub_39503( uParam0 );
                                l_U214 = 0.00000000;
                                l_U223 = 1;
                            }
                        }
                    }
                    else if (HAVE_ANIMS_LOADED( l_U235 ))
                    {
                        REMOVE_ANIMS( l_U235 );
                    }
                    if (HAS_MODEL_LOADED( -785338897 ))
                    {
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -785338897 );
                    }
                    break;
                    case 1:
                    if (sub_38327( uParam0 ))
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U235 )))
                        {
                            REQUEST_ANIMS( l_U235 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -785338897 )))
                        {
                            REQUEST_MODEL( -785338897 );
                        }
                        if (DOES_OBJECT_EXIST( l_U232 ))
                        {
                            if (HAVE_ANIMS_LOADED( l_U235 ))
                            {
                                if ((NOT (IS_SCRIPTED_SPEECH_PLAYING( uParam0 ))) AND ((NOT (IS_AMBIENT_SPEECH_PLAYING( uParam0 ))) AND ((NOT (sub_40284( uParam0 ))) AND ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))) AND ((NOT (IS_CHAR_GESTURING( uParam0 ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U235, l_U236 ))) AND ((NOT (IS_CHAR_DUCKING( uParam0 ))) AND (NOT (IS_PED_RAGDOLL( uParam0 ))))))))))
                                {
                                    if (l_U214 > 20000.00000000)
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_38207( uParam0, 1 );
                                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U237, l_U235, 8.00000000, -1, 3328 );
                                        }
                                        else
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U238, l_U235, 8.00000000, -1, 3328 );
                                        }
                                        l_U210 = 1;
                                        l_U214 = 0.00000000;
                                    }
                                }
                            }
                            if (NOT l_U208)
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                                {
                                    if (HAVE_ANIMS_LOADED( l_U235 ))
                                    {
                                        if (IS_CHAR_PLAYING_ANIM( uParam0, l_U235, l_U236 ))
                                        {
                                            GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U235, l_U236, ref fVar3 );
                                            if (fVar3 > l_U217)
                                            {
                                                l_U224 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U232, l_U245, l_U248, 1065353216 );
                                                l_U208 = 1;
                                            }
                                        }
                                        else
                                        {
                                            l_U224 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U232, l_U245, l_U248, 1065353216 );
                                            l_U208 = 1;
                                        }
                                    }
                                }
                                else
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
                                    if (DOES_VEHICLE_EXIST( uVar4 ))
                                    {
                                        if (NOT (IS_CAR_DEAD( uVar4 )))
                                        {
                                            if (NOT (DOES_CAR_HAVE_ROOF( uVar4 )))
                                            {
                                                if (NOT (sub_40790( uParam0 )))
                                                {
                                                    l_U224 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U232, l_U245, l_U248, 1065353216 );
                                                    l_U208 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if ((sub_40790( uParam0 )) || (sub_28474( uParam0 )))
                            {
                                sub_28347( ref l_U224 );
                                l_U208 = 0;
                            }
                        }
                        else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            if (HAVE_ANIMS_LOADED( l_U235 ))
                            {
                                if (IS_CHAR_PLAYING_ANIM( uParam0, l_U235, l_U236 ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U235, l_U236, ref fVar3 );
                                    if (NOT (DOES_OBJECT_EXIST( l_U232 )))
                                    {
                                        if (fVar3 > l_U216)
                                        {
                                            sub_39503( uParam0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_39503( uParam0 );
                                }
                            }
                        }
                        else
                        {
                            sub_39503( uParam0 );
                        }
                        if (sub_40284( uParam0 ))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( uParam0 );
                        }
                    }
                    else
                    {
                        l_U223 = 0;
                        l_U215 = 0.00000000;
                    }
                    break;
                }
            }
            else
            {
                sub_38363( uParam0, 0 );
                if (l_U212)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 4 \n" );
                }
            }
        }
        else
        {
            sub_38363( uParam0, 1 );
            if (l_U212)
            {
                PRINTSTRING( "REMOVE_SPLIFF - 5 \n" );
            }
        }
    }
    else
    {
        sub_38363( uParam0, 0 );
        if (l_U212)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 6 \n" );
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_OBJECT_EXIST( l_U232 ))
        {
            if (HAVE_ANIMS_LOADED( l_U235 ))
            {
                if ((IS_CHAR_PLAYING_ANIM( uParam0, l_U235, l_U238 )) || ((IS_CHAR_PLAYING_ANIM( uParam0, l_U235, l_U237 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U235, l_U236 ))))
                {
                    BLOCK_CHAR_HEAD_IK( uParam0, 1 );
                }
            }
        }
    }
    return;
}

void sub_28235(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    int I;
    int iVar9;

    if ((IS_PLAYER_PLAYING( sub_2866() )) AND (NOT (IS_CHAR_INJURED( uParam0 ))))
    {
        switch (l_U225)
        {
            case 0:
            for ( I = 0; I < 4; I++ )
            {
                sub_28347( ref l_U227[I] );
            }
            if (DOES_OBJECT_EXIST( l_U233 ))
            {
                DELETE_OBJECT( ref l_U233 );
            }
            if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
            {
                if (sub_28474( uParam0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref l_U266 );
                    if (DOES_VEHICLE_EXIST( l_U266 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U266 )))
                        {
                            if (NOT (sub_28656( l_U266 )))
                            {
                                l_U225 = 1;
                                l_U218 = 0.00000000;
                            }
                            else
                            {
                                l_U218 = 0.00000000;
                            }
                        }
                        else
                        {
                            l_U218 = 0.00000000;
                        }
                    }
                    else
                    {
                        l_U218 = 0.00000000;
                    }
                }
                else
                {
                    l_U218 = 0.00000000;
                }
            }
            else
            {
                l_U218 = 0.00000000;
            }
            break;
            case 1:
            if (DOES_OBJECT_EXIST( l_U232 ))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref l_U266 );
                    if (DOES_VEHICLE_EXIST( l_U266 ))
                    {
                        if (sub_28842( l_U266 ))
                        {
                            l_U225 = 2;
                            l_U218 = 0.00000000;
                            l_U222 = 0.00000000;
                        }
                        else
                        {
                            l_U225 = 4;
                            l_U218 = 0.00000000;
                        }
                    }
                    else
                    {
                        l_U225 = 0;
                        l_U218 = 0.00000000;
                    }
                }
                else
                {
                    l_U225 = 0;
                    l_U218 = 0.00000000;
                }
            }
            break;
            case 2:
            if (DOES_OBJECT_EXIST( l_U232 ))
            {
                if (DOES_VEHICLE_EXIST( l_U266 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U266 )))
                    {
                        if (NOT (sub_28842( l_U266 )))
                        {
                            l_U225 = 3;
                            l_U218 = 0.00000000;
                            if (l_U222 < 0.10000000)
                            {
                                l_U222 = 0.10000000;
                            }
                        }
                        else if (NOT (IS_CHAR_IN_CAR( uParam0, l_U266 )))
                        {
                            l_U225 = 0;
                            l_U218 = 0.00000000;
                            if (DOES_OBJECT_EXIST( l_U233 ))
                            {
                                DELETE_OBJECT( ref l_U233 );
                            }
                        }
                        if ((l_U213) AND (NOT (DOES_OBJECT_EXIST( l_U233 ))))
                        {
                            GET_CAR_COORDINATES( l_U266, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            CREATE_OBJECT( -735018886, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U233, 1 );
                            SET_OBJECT_COLLISION( l_U233, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U233, l_U266, 0, l_U260, 0.00000000, 0.00000000, 0.00000000 );
                        }
                        else
                        {
                            l_U222 = l_U218 / l_U219;
                            if (l_U222 > 1.00000000)
                            {
                                l_U222 = 1.00000000;
                            }
                            l_U226 = ROUND( 255.00000000 * l_U222 );
                            if (l_U213)
                            {
                                SET_OBJECT_ALPHA( l_U233, l_U226 );
                            }
                        }
                    }
                    else
                    {
                        l_U225 = 0;
                        l_U218 = 0.00000000;
                    }
                }
                else
                {
                    l_U225 = 0;
                    l_U218 = 0.00000000;
                }
            }
            else
            {
                l_U225 = 0;
                l_U218 = 0.00000000;
            }
            break;
            case 3:
            if (DOES_VEHICLE_EXIST( l_U266 ))
            {
                if (NOT (IS_CAR_DEAD( l_U266 )))
                {
                    if (NOT (sub_28359( l_U227[0] )))
                    {
                        if (sub_28897( l_U266, 0 ))
                        {
                            if (sub_29901( l_U266, 0, ref uVar4 ))
                            {
                                l_U227[0] = START_PTFX_ON_VEH( "smoke_filled_car", l_U266, uVar4, l_U257._fU0, l_U257._fU4, l_U257._fU8, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_28897( l_U266, 0 )))
                    {
                        sub_28347( ref l_U227[0] );
                    }
                    if (NOT (sub_28359( l_U227[1] )))
                    {
                        if (sub_28897( l_U266, 1 ))
                        {
                            if (sub_29901( l_U266, 1, ref uVar4 ))
                            {
                                l_U227[1] = START_PTFX_ON_VEH( "smoke_filled_car", l_U266, uVar4, l_U257._fU0, l_U257._fU4, l_U257._fU8 * -1.00000000, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_28897( l_U266, 1 )))
                    {
                        sub_28347( ref l_U227[1] );
                    }
                    if (NOT (sub_28359( l_U227[2] )))
                    {
                        if (sub_28897( l_U266, 2 ))
                        {
                            if (sub_29901( l_U266, 2, ref uVar4 ))
                            {
                                l_U227[2] = START_PTFX_ON_VEH( "smoke_filled_car", l_U266, uVar4, l_U257._fU0, l_U257._fU4, l_U257._fU8, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_28897( l_U266, 2 )))
                    {
                        sub_28347( ref l_U227[2] );
                    }
                    if (NOT (sub_28359( l_U227[3] )))
                    {
                        if (sub_28897( l_U266, 3 ))
                        {
                            if (sub_29901( l_U266, 3, ref uVar4 ))
                            {
                                l_U227[3] = START_PTFX_ON_VEH( "smoke_filled_car", l_U266, uVar4, l_U257._fU0, l_U257._fU4, l_U257._fU8 * -1.00000000, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_28897( l_U266, 3 )))
                    {
                        sub_28347( ref l_U227[3] );
                    }
                    l_U221 = l_U218 / (l_U220 * l_U222);
                    if (l_U221 > 1.00000000)
                    {
                        l_U221 = 1.00000000;
                    }
                    for ( I = 0; I < 4; I++ )
                    {
                        if (sub_28359( l_U227[I] ))
                        {
                            EVOLVE_PTFX( l_U227[I], "fade", l_U221 );
                        }
                    }
                    if (l_U213)
                    {
                        if (DOES_OBJECT_EXIST( l_U233 ))
                        {
                            fVar7 = 1.00000000 - l_U221;
                            l_U226 = ROUND( 255.00000000 * fVar7 );
                            SET_OBJECT_ALPHA( l_U233, l_U226 );
                        }
                    }
                    if (l_U218 > (l_U220 * l_U222))
                    {
                        for ( I = 0; I < 4; I++ )
                        {
                            sub_28347( ref l_U227[I] );
                        }
                        l_U225 = 0;
                        l_U218 = 0.00000000;
                    }
                    if ((NOT (sub_28359( l_U227[3] ))) AND ((NOT (sub_28359( l_U227[2] ))) AND ((NOT (sub_28359( l_U227[1] ))) AND (NOT (sub_28359( l_U227[0] ))))))
                    {
                        l_U225 = 0;
                        l_U218 = 0.00000000;
                    }
                }
                else
                {
                    l_U225 = 0;
                    l_U218 = 0.00000000;
                }
            }
            else
            {
                l_U225 = 0;
                l_U218 = 0.00000000;
            }
            break;
            case 4:
            if (DOES_VEHICLE_EXIST( l_U266 ))
            {
                if (NOT (IS_CAR_DEAD( l_U266 )))
                {
                    if (l_U218 > 1000.00000000)
                    {
                        if (NOT (sub_28359( l_U227[0] )))
                        {
                            if (sub_28897( l_U266, 0 ))
                            {
                                if (sub_29901( l_U266, 0, ref uVar4 ))
                                {
                                    l_U227[0] = START_PTFX_ON_VEH( "smoke_filled_car", l_U266, uVar4, l_U257._fU0, l_U257._fU4, l_U257._fU8, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_28897( l_U266, 0 )))
                        {
                            sub_28347( ref l_U227[0] );
                        }
                        if (NOT (sub_28359( l_U227[1] )))
                        {
                            if (sub_28897( l_U266, 1 ))
                            {
                                if (sub_29901( l_U266, 1, ref uVar4 ))
                                {
                                    l_U227[1] = START_PTFX_ON_VEH( "smoke_filled_car", l_U266, uVar4, l_U257._fU0, l_U257._fU4, l_U257._fU8 * -1.00000000, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_28897( l_U266, 1 )))
                        {
                            sub_28347( ref l_U227[1] );
                        }
                        if (NOT (sub_28359( l_U227[2] )))
                        {
                            if (sub_28897( l_U266, 2 ))
                            {
                                if (sub_29901( l_U266, 2, ref uVar4 ))
                                {
                                    l_U227[2] = START_PTFX_ON_VEH( "smoke_filled_car", l_U266, uVar4, l_U257._fU0, l_U257._fU4, l_U257._fU8, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_28897( l_U266, 2 )))
                        {
                            sub_28347( ref l_U227[2] );
                        }
                        if (NOT (sub_28359( l_U227[3] )))
                        {
                            if (sub_28897( l_U266, 3 ))
                            {
                                if (sub_29901( l_U266, 3, ref uVar4 ))
                                {
                                    l_U227[3] = START_PTFX_ON_VEH( "smoke_filled_car", l_U266, uVar4, l_U257._fU0, l_U257._fU4, l_U257._fU8 * -1.00000000, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_28897( l_U266, 3 )))
                        {
                            sub_28347( ref l_U227[3] );
                        }
                        iVar9 = 0;
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_28359( l_U227[I] ))
                            {
                                iVar9++;
                            }
                        }
                        l_U221 = 1.00000000 / (TO_FLOAT( iVar9 ));
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_28359( l_U227[I] ))
                            {
                                EVOLVE_PTFX( l_U227[I], "fade", l_U221 );
                            }
                        }
                        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            for ( I = 0; I < 4; I++ )
                            {
                                sub_28347( ref l_U227[I] );
                            }
                            l_U225 = 0;
                            l_U218 = 0.00000000;
                        }
                        else if ((NOT (sub_28359( l_U227[3] ))) AND ((NOT (sub_28359( l_U227[2] ))) AND ((NOT (sub_28359( l_U227[1] ))) AND (NOT (sub_28359( l_U227[0] ))))))
                        {
                            l_U225 = 1;
                        }
                    }
                }
                else
                {
                    l_U225 = 0;
                    l_U218 = 0.00000000;
                }
            }
            else
            {
                l_U225 = 0;
                l_U218 = 0.00000000;
            }
            break;
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                if (l_U211)
                {
                    for ( I = 0; I < 4; I++ )
                    {
                        if (sub_29901( uVar3, I, ref uVar4 ))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            LINE( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar4._fU0, uVar4._fU4, uVar4._fU8 + 1.50000000 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_28347(unknown uParam0)
{
    if (sub_28359( (uParam0^) ))
    {
        STOP_PTFX( (uParam0^) );
    }
    (uParam0^) = 0;
    return;
}

int sub_28359(int iParam0)
{
    if (iParam0 > 0)
    {
        return 1;
    }
    return 0;
}

int sub_28474(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if ((IS_THIS_MODEL_A_HELI( uVar4 )) || (IS_THIS_MODEL_A_CAR( uVar4 )))
                {
                    if (DOES_CAR_HAVE_ROOF( uVar3 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_28656(unknown uParam0)
{
    unknown uVar3;

    return 0;
}

int sub_28842(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (DOES_CAR_HAVE_ROOF( uParam0 ))
            {
                if ((NOT (sub_28897( uParam0, 3 ))) AND ((NOT (sub_28897( uParam0, 2 ))) AND ((NOT (sub_28897( uParam0, 1 ))) AND (NOT (sub_28897( uParam0, 0 ))))))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_28897(unknown uParam0, unknown uParam1)
{
    float fVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref uVar5 );
        if ((NOT (IS_THIS_MODEL_A_BOAT( uVar5 ))) AND (NOT (IS_THIS_MODEL_A_BIKE( uVar5 ))))
        {
            if ((IS_CAR_DOOR_FULLY_OPEN( uParam0, uParam1 )) || (IS_CAR_DOOR_DAMAGED( uParam0, uParam1 )))
            {
                return 1;
            }
            else
            {
                GET_DOOR_ANGLE_RATIO( uParam0, uParam1, ref fVar4 );
                if (fVar4 > 0.10000000)
                {
                    return 1;
                }
                else
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar7 );
                    switch (uParam1)
                    {
                        case 0:
                        if (NOT (IS_VEH_WINDOW_INTACT( uParam0, 0 )))
                        {
                            return 1;
                        }
                        break;
                        case 1:
                        if ((iVar7 >= 1) AND (NOT (IS_VEH_WINDOW_INTACT( uParam0, 1 ))))
                        {
                            return 1;
                        }
                        break;
                        case 2:
                        if ((iVar7 >= 2) AND (NOT (IS_VEH_WINDOW_INTACT( uParam0, 2 ))))
                        {
                            return 1;
                        }
                        break;
                        case 3:
                        iVar6 = 3;
                        if ((iVar7 >= 3) AND (NOT (IS_VEH_WINDOW_INTACT( uParam0, 3 ))))
                        {
                            return 1;
                        }
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_29901(unknown uParam0, unknown uParam1, int iParam2)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            sub_29949( uParam0, ref l_U251, ref l_U254 );
            switch (uParam1)
            {
                case 0:
                (iParam2^) = {l_U251._fU0, l_U251._fU4, l_U251._fU8};
                iParam2->_fU0 += l_U263._fU0;
                iParam2->_fU4 += l_U263._fU4;
                iParam2->_fU8 += l_U263._fU8;
                break;
                case 1:
                (iParam2^) = {l_U251._fU0 * -1.00000000, l_U251._fU4, l_U251._fU8};
                iParam2->_fU0 += l_U263._fU0 * -1.00000000;
                iParam2->_fU4 += l_U263._fU4;
                iParam2->_fU8 += l_U263._fU8;
                break;
                case 2:
                (iParam2^) = {l_U254._fU0, l_U254._fU4, l_U254._fU8};
                iParam2->_fU0 += l_U263._fU0;
                iParam2->_fU4 += l_U263._fU4;
                iParam2->_fU8 += l_U263._fU8;
                break;
                case 3:
                (iParam2^) = {l_U254._fU0 * -1.00000000, l_U254._fU4, l_U254._fU8};
                iParam2->_fU0 += l_U263._fU0 * -1.00000000;
                iParam2->_fU4 += l_U263._fU4;
                iParam2->_fU8 += l_U263._fU8;
                break;
            }
            return 1;
        }
    }
    return 0;
}

void sub_29949(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref uVar5 );
        switch (uVar5)
        {
            case 1264341792:
            (uParam1^) = {-0.60750000, -0.19750000, 0.61000000};
            (uParam2^) = {-0.61500000, -0.76750000, 0.61750000};
            break;
            case 1171614426:
            (uParam1^) = {-0.79500000, 0.83250000, 1.27500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1041692462:
            (uParam1^) = {-0.60750000, -0.68250000, 0.61000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 2053223216:
            (uParam1^) = {-0.93500000, 1.85250000, 1.35500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 850991848:
            (uParam1^) = {-0.86000000, 2.01500000, 1.38000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -344943009:
            (uParam1^) = {-0.55500000, -0.26500000, 0.86500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1075851868:
            (uParam1^) = {-0.70250000, 0.24500000, 1.00750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1987130134:
            (uParam1^) = {-1.00500000, 0.82750000, 1.16250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -682211828:
            (uParam1^) = {-0.59249990, -0.05000000, 0.55750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1346687836:
            (uParam1^) = {-0.84750010, 0.73250000, 1.14750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -907477130:
            (uParam1^) = {-0.84750010, 0.73250000, 1.14750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -713569950:
            (uParam1^) = {1.18500000, 4.88500000, 1.47250000};
            (uParam2^) = {1.18250000, -1.84000000, 1.47300000};
            break;
            case 1884962369:
            (uParam1^) = {-0.65000000, 0.21250000, 0.86500000};
            (uParam2^) = {-0.62000000, -0.49250000, 0.91500000};
            break;
            case 2006918058:
            (uParam1^) = {-0.61250000, 0.11000000, 1.02500000};
            (uParam2^) = {-0.60500000, -0.66500000, 1.04250000};
            break;
            case -67282078:
            (uParam1^) = {-0.56750000, -0.14250000, 0.87750000};
            (uParam2^) = {-0.56000000, -0.86250000, 0.86500000};
            break;
            case -2030171296:
            (uParam1^) = {-0.58750000, 0.13750000, 0.88750000};
            (uParam2^) = {-0.56750000, -0.86000000, 0.92000000};
            break;
            case 1063483177:
            (uParam1^) = {-0.49000000, -0.25500000, 0.66750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 108773431:
            (uParam1^) = {-0.52000000, -0.47000000, 0.66750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 162883121:
            (uParam1^) = {-0.62500000, -0.15750000, 0.81500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 723973206:
            (uParam1^) = {-0.62500000, -0.17750000, 0.67250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1130810103:
            (uParam1^) = {-0.51750000, 0.03000000, 0.91500000};
            (uParam2^) = {-0.50300000, -0.61750000, 0.91500000};
            break;
            case -1971955454:
            (uParam1^) = {-0.62000000, -0.08500000, 1.10500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -685276541:
            (uParam1^) = {-0.64250000, -0.09000000, 0.75000000};
            (uParam2^) = {-0.63500000, -0.77500000, 0.75250000};
            break;
            case -1883002148:
            (uParam1^) = {-0.64250000, -0.09000000, 0.75000000};
            (uParam2^) = {-0.63500000, -0.77500000, 0.75250000};
            break;
            case -276900515:
            (uParam1^) = {-0.61250000, -0.09000000, 0.75000000};
            (uParam2^) = {-0.59249990, -0.72750000, 0.75250000};
            break;
            case -2119578145:
            (uParam1^) = {-0.59750000, -0.22500000, 0.83000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1127131465:
            (uParam1^) = {-0.57250000, 0.03250000, 0.72250000};
            (uParam2^) = {-0.57500000, -0.73250000, 0.68000000};
            break;
            case -1097828879:
            (uParam1^) = {-0.53000000, -0.41500000, 0.64250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 974744810:
            (uParam1^) = {-0.51000000, -0.10750000, 0.93000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1026055242:
            (uParam1^) = {-0.51000000, -0.10750000, 0.93000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1938952078:
            (uParam1^) = {-1.06250000, 3.41500000, 1.23750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1353720154:
            (uParam1^) = {-1.11250000, 1.71500000, 2.27000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 627033353:
            (uParam1^) = {-0.52500000, -0.14500000, 0.64000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 2016857647:
            (uParam1^) = {-0.50500000, -0.17000000, 0.77750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 675415136:
            (uParam1^) = {-0.62000000, 0.06500000, 1.03000000};
            (uParam2^) = {-0.62250000, -0.63000000, 1.03500000};
            break;
            case 884422927:
            (uParam1^) = {-0.57500000, 0.04500000, 0.85000000};
            (uParam2^) = {-0.56500000, -0.63250000, 0.84750010};
            break;
            case -341892653:
            (uParam1^) = {-0.57500000, -0.04500000, 0.85000000};
            (uParam2^) = {-0.56500000, -0.63250000, 0.84750010};
            break;
            case 486987393:
            (uParam1^) = {-0.63750000, -0.06500000, 1.01750000};
            (uParam2^) = {-0.62250000, -0.87500000, 1.02750000};
            break;
            case -1289722222:
            (uParam1^) = {-0.46000000, -0.06500000, 0.71500000};
            (uParam2^) = {-0.46750000, -0.66250000, 0.71750000};
            break;
            case 886934177:
            (uParam1^) = {-0.53500000, 0.00750000, 0.75000000};
            (uParam2^) = {-0.53250000, -0.67750000, 0.74000000};
            break;
            case 418536135:
            (uParam1^) = {-0.51750000, 0.05500000, 0.56750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1269098716:
            (uParam1^) = {-0.55750000, 0.17250000, 1.28750000};
            (uParam2^) = {-0.55000000, -0.48750000, 1.31000000};
            break;
            case -37030056:
            (uParam1^) = {-0.58500000, -0.13750000, 0.95750000};
            (uParam2^) = {-0.58750000, -0.77250000, 0.97250000};
            break;
            case -2124201592:
            (uParam1^) = {-0.67500000, -0.42750000, 0.67750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1304597482:
            (uParam1^) = {-0.62500000, -0.16500000, 0.81000000};
            (uParam2^) = {-0.62750000, -0.71750000, 0.80250000};
            break;
            case -1260881538:
            (uParam1^) = {-0.61000000, -0.02000000, 0.68250000};
            (uParam2^) = {-0.60000000, -0.58000000, 0.69000000};
            break;
            case -310465116:
            (uParam1^) = {-0.68750000, 0.18000000, 0.86500000};
            (uParam2^) = {-0.66300000, -0.51750000, 0.91000000};
            break;
            case 583100975:
            (uParam1^) = {-0.86750000, 0.89750000, 1.32000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 525509695:
            (uParam1^) = {-0.74500000, 0.38250000, 1.17750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 904750859:
            (uParam1^) = {-0.91250000, 2.66500000, 1.35250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 148777611:
            (uParam1^) = {-0.61250000, -0.18750000, 0.72000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1911513875:
            (uParam1^) = {-1.19250000, 1.06750000, 1.88500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1348744438:
            (uParam1^) = {-0.67250000, -0.08750000, 0.57000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 569305213:
            (uParam1^) = {-1.28750000, 3.05250000, 1.58000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -808457413:
            (uParam1^) = {-0.83999990, 0.36250000, 1.15250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -2077743597:
            (uParam1^) = {-0.63250000, 0.12250000, 1.01250000};
            (uParam2^) = {-0.63250000, -0.84700000, 1.04550000};
            break;
            case -1590284256:
            (uParam1^) = {-0.63250000, 0.12250000, 1.01250000};
            (uParam2^) = {-0.63250000, -0.84700000, 1.04550000};
            break;
            case 1830407356:
            (uParam1^) = {-0.70999990, -0.40500000, 0.88250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 131140572:
            (uParam1^) = {-0.69000000, -0.07000000, 0.80000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1376298265:
            (uParam1^) = {-0.56250000, -0.07000000, 0.76500000};
            (uParam2^) = {-0.56300000, -0.83500000, 0.75500000};
            break;
            case 2046537925:
            (uParam1^) = {-0.62500000, -0.15000000, 0.73500000};
            (uParam2^) = {-0.59300000, -0.71250000, 0.73750000};
            break;
            case -1627000575:
            (uParam1^) = {-0.63250000, 0.01750000, 0.70999990};
            (uParam2^) = {-0.60050000, -0.60750000, 0.71500000};
            break;
            case -350085182:
            (uParam1^) = {-0.82250000, 0.40250000, 1.19500000};
            (uParam2^) = {-0.82050000, -0.68250000, 1.19500000};
            break;
            case -119658072:
            (uParam1^) = {-0.86750000, 0.82750000, 1.10500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1883869285:
            (uParam1^) = {-0.55750000, 0.03750000, 0.79250000};
            (uParam2^) = {-0.53750000, -0.68000000, 0.81750000};
            break;
            case -1962071130:
            (uParam1^) = {-0.53250000, -0.05000000, 0.74250000};
            (uParam2^) = {-0.52000000, -0.58500000, 0.75000000};
            break;
            case -1150599089:
            (uParam1^) = {-0.63500000, -0.05000000, 0.78500000};
            (uParam2^) = {-0.63250000, -0.58500000, 0.79000000};
            break;
            case -1900572838:
            (uParam1^) = {-1.18000000, 1.07750000, 1.87500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1390084576:
            (uParam1^) = {-0.65500000, 0.09250000, 1.11250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 83136452:
            (uParam1^) = {-0.59750000, -0.21250000, 0.94250000};
            (uParam2^) = {-0.59800000, -0.84550000, 0.95050000};
            break;
            case -845979911:
            (uParam1^) = {-1.35000000, 3.69000000, 1.16500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 627094268:
            (uParam1^) = {-0.74250000, 0.28500000, 0.74750000};
            (uParam2^) = {-0.74300000, -0.45700000, 0.77500000};
            break;
            case -1932515764:
            (uParam1^) = {-0.65500000, -0.08000000, 0.71250000};
            (uParam2^) = {-0.65050000, -0.73700000, 0.70999990};
            break;
            case -227741703:
            (uParam1^) = {-0.57000000, -0.37500000, 0.48750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -449022887:
            (uParam1^) = {-0.60750000, -0.27750000, 0.82500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1264386590:
            (uParam1^) = {-0.60750000, -0.27750000, 0.83250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1685021548:
            (uParam1^) = {-0.68000000, -0.25500000, 0.73000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -322343873:
            (uParam1^) = {-0.53500000, -0.12000000, 0.87000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1349725314:
            (uParam1^) = {-0.51750000, -0.19250000, 0.62750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1344573448:
            (uParam1^) = {-0.60250000, -0.00250000, 0.89750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -810318068:
            (uParam1^) = {-0.67250000, 0.64000000, 1.13250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1923400478:
            (uParam1^) = {-0.65250000, -0.17500000, 0.77500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1677715180:
            (uParam1^) = {-0.79750000, 1.25250000, 1.48000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1747439474:
            (uParam1^) = {-1.18000000, 1.00500000, 1.87250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1723137093:
            (uParam1^) = {-0.54000000, -0.12000000, 0.83500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1961627517:
            (uParam1^) = {-0.57750000, 1.12250000, 0.73750000};
            (uParam2^) = {-0.58250000, -2.04500000, 0.74250000};
            break;
            case 1821991593:
            (uParam1^) = {-0.61000000, -0.36250000, 0.62000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 970598228:
            (uParam1^) = {-0.49750000, -0.17000000, 0.91250000};
            (uParam2^) = {-0.50000000, -0.72250000, 0.91300000};
            break;
            case -295689028:
            (uParam1^) = {-0.49750000, -0.31000000, 0.91250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -956048545:
            (uParam1^) = {-0.62500000, -0.17000000, 0.72750000};
            (uParam2^) = {-0.62500000, -0.76750000, 0.72800000};
            break;
            case 1208856469:
            (uParam1^) = {-0.62500000, 0.02000000, 0.69750000};
            (uParam2^) = {-0.62500000, -0.64000000, 0.70300000};
            break;
            case 1917016601:
            (uParam1^) = {-1.20250000, 3.50500000, 1.55750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1896659641:
            (uParam1^) = {-0.56250000, -0.04000000, 0.61000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1534326199:
            (uParam1^) = {-0.50000000, -0.20500000, 0.77999990};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -825837129:
            (uParam1^) = {-0.59000000, -0.23000000, 0.52000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1758379524:
            (uParam1^) = {-0.62000000, -0.23750000, 0.51750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -583281407:
            (uParam1^) = {-0.45250000, -0.10750000, 0.76500000};
            (uParam2^) = {-0.45300000, -0.70050000, 0.77500000};
            break;
            case -498054846:
            (uParam1^) = {-0.68000000, -0.20500000, 0.93250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 2006667053:
            (uParam1^) = {-0.71500000, -0.08250001, 0.65000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1937616578:
            (uParam1^) = {-0.60750000, -0.02500000, 0.91750000};
            (uParam2^) = {-0.60800000, -0.67250000, 0.91800000};
            break;
            case 1777363799:
            (uParam1^) = {-0.60750000, -0.17750000, 0.81250000};
            (uParam2^) = {-0.62800000, -0.86750000, 0.78050000};
            break;
            case -1099960214:
            (uParam1^) = {-0.93000000, 1.25000000, 1.58000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            default:
            (uParam1^) = {-0.48300000, -0.28500000, 0.62000000};
            (uParam2^) = {-0.48300000, -1.30000000, 0.62000000};
            break;
        }
    }
    return;
}

void sub_38207(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( uParam0, uParam1 );
        BLOCK_CHAR_AMBIENT_ANIMS( uParam0, uParam1 );
    }
    return;
}

int sub_38316(unknown uParam0)
{
    float fVar3;

    if (NOT (sub_38327( uParam0 )))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 > 2.00000000)
        {
            return 0;
        }
        if (IS_CHAR_GESTURING( uParam0 ))
        {
            return 0;
        }
    }
    else
    {
        l_U215 = 999999.80000000;
    }
    if (IS_PLAYER_PLAYING( sub_2866() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2514(), uParam0, 50.00000000, 50.00000000, 0 )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_38327(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (l_U207)
    {
        return 1;
    }
    if (l_U209)
    {
        sub_38363( uParam0, 1 );
        l_U209 = 0;
        if (l_U212)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 1 \n" );
        }
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            if ((IS_CHAR_ARMED( uParam0, 7 )) || ((IS_CHAR_SHOOTING( uParam0 )) || ((IS_CHAR_IN_MELEE_COMBAT( uParam0 )) || (IS_PED_IN_COMBAT( uParam0 )))))
            {
                sub_38363( uParam0, 1 );
                if (l_U212)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 1B \n" );
                }
                return 0;
            }
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (DOES_VEHICLE_EXIST( uVar3 ))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    sub_38363( uParam0, 0 );
                    if (l_U212)
                    {
                        PRINTSTRING( "REMOVE_SPLIFF - 2 \n" );
                    }
                    return 0;
                }
            }
            if (sub_38943( uParam0 ))
            {
                sub_38363( uParam0, 0 );
                if (l_U212)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 3 \n" );
                }
                return 0;
            }
        }
    }
    else
    {
        sub_38363( uParam0, 1 );
        if (l_U212)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 3B \n" );
        }
        return 0;
    }
    return 1;
}

void sub_38363(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_OBJECT_EXIST( l_U232 ))
        {
            DELETE_OBJECT( ref l_U232 );
            l_U232 = nil;
        }
    }
    else if (DOES_OBJECT_EXIST( l_U232 ))
    {
        if (IS_OBJECT_ATTACHED( l_U232 ))
        {
            DETACH_OBJECT( l_U232, 1 );
        }
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U232 );
        l_U232 = nil;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (HAVE_ANIMS_LOADED( l_U235 ))
        {
            if ((IS_CHAR_PLAYING_ANIM( uParam0, l_U235, l_U238 )) || ((IS_CHAR_PLAYING_ANIM( uParam0, l_U235, l_U237 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U235, l_U236 ))))
            {
                CLEAR_CHAR_SECONDARY_TASK( uParam0 );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U233 ))
    {
        DELETE_OBJECT( ref l_U233 );
    }
    l_U215 = 0.00000000;
    if (l_U208)
    {
        sub_28347( ref l_U224 );
        l_U208 = 0;
    }
    return;
}

int sub_38943(int iParam0)
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
                if (sub_39007( uVar3 ))
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

int sub_39007(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_39503(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U232 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            CREATE_OBJECT( -785338897, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U232, 1 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar6 );
            if (NOT (iVar6 == 0))
            {
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U232, iVar6 );
            }
        }
        if (l_U207)
        {
            if (IS_OBJECT_ATTACHED( l_U232 ))
            {
                DETACH_OBJECT( l_U232, 1 );
            }
        }
        if (sub_39668( uParam0 ))
        {
            if (IS_OBJECT_ATTACHED( l_U232 ))
            {
                DETACH_OBJECT( l_U232, 1 );
            }
        }
        if (NOT (IS_OBJECT_ATTACHED( l_U232 )))
        {
            ATTACH_OBJECT_TO_PED( l_U232, uParam0, 1232, l_U239, l_U242, 0 );
            l_U234 = uParam0;
        }
        if (NOT (l_U223 == 1))
        {
            l_U223 = 1;
            l_U214 = 18000.00000000;
        }
    }
    return;
}

int sub_39668(int iParam0)
{
    if (iParam0 == l_U234)
    {
        return 1;
    }
    return 0;
}

int sub_40284(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_40790(unknown uParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            GET_CAR_SPEED( uVar3, ref fVar4 );
            if (fVar4 > 1.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_41471(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    if (l_U325 == 0)
    {
        l_U395 = iVar4 + 3000;
        l_U396 = 0;
        l_U325++;
    }
    if (NOT (iParam1 == nil))
    {
        if (IS_CHAR_INJURED( iParam1 ))
        {
            l_U328 = 1;
            l_U329 = 0;
            g_U15946[uParam0]._fU8[0]._fU0[2] = 0;
            return 1;
        }
    }
    if (NOT l_U396)
    {
        if (l_U395 < iVar4)
        {
            l_U396 = sub_41621( uParam0 );
            if (NOT l_U396)
            {
                l_U395 = iVar4 + 3000;
            }
        }
    }
    if (l_U325 == 1)
    {
        if (sub_42166( uParam0 ))
        {
            l_U325 = 99;
        }
    }
    if (l_U325 == 99)
    {
        l_U324 = 2;
        l_U325 = 0;
        sub_52440( uParam0 );
        g_U15946[uParam0]._fU8[0]._fU0[2] = 0;
        if (NOT (IS_CHAR_DEAD( sub_2514() )))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2514(), 0 );
        }
        return 1;
    }
    return 0;
}

int sub_41621(unknown uParam0)
{
    if ((g_U9198) AND (g_U9196))
    {
        return 1;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return 1;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return 0;
    }
    if (NOT g_U9196)
    {
        if (g_U22274[uParam0]._fU144 == 10)
        {
            return 1;
        }
        sub_41731( uParam0 );
        g_U9196 = 1;
        return 1;
    }
    if (NOT g_U9198)
    {
        sub_41930( uParam0 );
        g_U9198 = 1;
        return 1;
    }
    return 1;
}

void sub_41731(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRPICKR" );
        break;
        case 3:
        PRINT_HELP( "FRPICKJ" );
        break;
        case 7:
        PRINT_HELP( "FRPICKD" );
        break;
        case 8:
        PRINT_HELP( "FRPICKB" );
        break;
        case 13:
        PRINT_HELP( "FRPICKP" );
        break;
    }
    return;
}

void sub_41930(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRQUITR" );
        break;
        case 3:
        PRINT_HELP( "FRQUITJ" );
        break;
        case 7:
        PRINT_HELP( "FRQUITD" );
        break;
        case 8:
        PRINT_HELP( "FRQUITB" );
        break;
        case 13:
        PRINT_HELP( "FRQUITP" );
        break;
    }
    return;
}

int sub_42166(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return sub_42224();
        case 3: return sub_52105();
        case 7: return sub_52139();
        case 8: return sub_52173();
        case 13: return sub_52207();
    }
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Not a friend" );
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Pickup: Should never reach here" );
    return 0;
}

void sub_42224()
{
    return sub_42242( 0, ref l_U195, ref l_U196 );
}

int sub_42242(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_2866() )))
    {
        return 0;
    }
    sub_42275( uParam0 );
    sub_42310();
    sub_42632( (uParam1^) );
    sub_43412();
    if (l_U102 == 0)
    {
        sub_43527( uParam0, uParam1 );
        return 0;
    }
    if (l_U102 == 1)
    {
        sub_45543( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U102 == 2)
    {
        sub_45938( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U102 == 3)
    {
        sub_47126();
        return 0;
    }
    if (l_U102 == 4)
    {
        if (sub_47483( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_2866(), 1 );
    g_U22274[uParam0]._fU20 = 1;
    return 1;
}

void sub_42275(unknown uParam0)
{
    l_U115 = g_U22274[uParam0]._fU28;
    return;
}

void sub_42310()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2866() )))
    {
        return;
    }
    if (g_U10978)
    {
        return;
    }
    if (g_U9893._fU12)
    {
        return;
    }
    if (sub_42387() < 14.00000000)
    {
        return;
    }
    if (NOT (GET_CLOSEST_CAR_NODE( l_U103._fU0, l_U103._fU4, l_U103._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 )))
    {
        return;
    }
    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    SET_CHAR_COORDINATES( sub_2514(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    return;
}

void sub_42387()
{
    vector vVar2;
    float Result;

    if (IS_CHAR_DEAD( sub_2514() ))
    {
        return 9999.90000000;
    }
    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    GET_CHAR_COORDINATES( sub_2514(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
    GET_DISTANCE_BETWEEN_COORDS_3D( vVar2.x, vVar2.y, vVar2.z, l_U103._fU0, l_U103._fU4, l_U103._fU8, ref Result );
    return Result;
}

void sub_42632(unknown uParam0)
{
    if (COMPARE_STRING( ref l_U167._fU0, l_U166 ))
    {
        return;
    }
    if (NOT l_U167._fU96)
    {
        return;
    }
    sub_42687( uParam0 );
    l_U167._fU80 = l_U102;
    return;
}

void sub_42687(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;
    boolean bVar9;

    if (l_U102 == 0)
    {
        return;
    }
    if (NOT (HAVE_ANIMS_LOADED( ref l_U167._fU0 )))
    {
        REQUEST_ANIMS( ref l_U167._fU0 );
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
        TASK_PLAY_ANIM( uParam0, ref l_U167._fU32, ref l_U167._fU0, 8.00000000, 1, 0, 0, 0, -2 );
        l_U167._fU88 = 0;
        l_U167._fU92 = 0;
        return;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = 0;
    if ((NOT l_U167._fU88) AND ((NOT (COMPARE_STRING( ref l_U167._fU48, l_U166 ))) AND ((l_U102 == 2) AND (l_U167._fU80 == 1))))
    {
        iVar7 = 1;
    }
    bVar8 = false;
    if (l_U167._fU100)
    {
        bVar9 = sub_42986();
        if (NOT bVar9)
        {
            bVar9 = IS_CHAR_ON_FOOT( sub_2514() );
        }
        if ((NOT l_U167._fU92) AND ((NOT (COMPARE_STRING( ref l_U167._fU64, l_U166 ))) AND ((bVar9) AND ((l_U102 == 2) AND (l_U167._fU80 == 1)))))
        {
            iVar7 = 1;
            bVar8 = true;
        }
    }
    else if (l_U102 == 1)
    {
        l_U167._fU100 = 1;
    }
    if ((iVar7) || (iVar6 > l_U167._fU84))
    {
        CLEAR_CHAR_TASKS( uParam0 );
        if (bVar8)
        {
            TASK_PLAY_ANIM( uParam0, ref l_U167._fU64, ref l_U167._fU0, 8.00000000, 0, 0, 0, 0, -2 );
            l_U167._fU100 = 0;
            l_U167._fU92 = 1;
        }
        else if (NOT (COMPARE_STRING( ref l_U167._fU48, l_U166 )))
        {
            TASK_PLAY_ANIM( uParam0, ref l_U167._fU48, ref l_U167._fU0, 8.00000000, 0, 0, 0, 0, -2 );
        }
        l_U167._fU88 = 1;
        sub_2137();
        return;
    }
    return;
}

boolean sub_42986()
{
    unknown uVar2;
    float fVar3;

    if (IS_CHAR_DEAD( sub_2514() ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2514() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    return fVar3 > 0.02000000;
}

void sub_43412()
{
    int iVar2;

    if (NOT l_U125)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT (iVar2 > l_U124))
    {
        return;
    }
    CHANGE_BLIP_PRIORITY( l_U107, l_U1 );
    FLASH_BLIP( l_U107, 0 );
    l_U124 = 0;
    l_U125 = 0;
    return;
}

void sub_43527(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_42387();
    if (fVar4 > 98.00000000)
    {
        return;
    }
    if ((g_U9893._fU12) || (g_U10978))
    {
        return;
    }
    if (NOT (sub_43582( uParam0 )))
    {
        sub_43621( uParam0 );
        return;
    }
    sub_43685( uParam0, uParam1, l_U103._fU0, l_U103._fU4, l_U103._fU8, l_U106 );
    SET_CHAR_DECISION_MAKER( (uParam1^), l_U127 );
    g_U22274[uParam0]._fU24 = 1;
    sub_2563( l_U157, (uParam1^), ref l_U153, 0 );
    sub_45387( uParam0, (uParam1^) );
    l_U102 = 1;
    l_U114 = 0;
    return;
}

void sub_43582(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_16680( uParam0 ) );
}

void sub_43621(unknown uParam0)
{
    REQUEST_MODEL( sub_16680( uParam0 ) );
    return;
}

void sub_43685(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_16680( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_43735( uParam0, (uParam1^) );
    return;
}

void sub_43735(unknown uParam0, unknown uParam1)
{
    sub_43747( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_43747(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_43841( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_44385( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_43841(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_44385(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_43841( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_43841( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_43841( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_43841( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_43841( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_43841( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_43841( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_43841( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_43841( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_43841( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_43841( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_43841( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_43841( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_45387(unknown uParam0, unknown uParam1)
{
    int iVar4;

    sub_44385( uParam1, uParam0, l_U159 );
    CLEAR_CHAR_PROP( uParam1, 0 );
    iVar4 = -1;
    if (NOT (iVar4 == l_U160))
    {
        if (l_U160 == -1)
        {
            CLEAR_CHAR_PROP( uParam1, 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( uParam1, 1, l_U160 );
        }
    }
    ENABLE_PED_HELMET( uParam1, l_U161 );
    return;
}

void sub_45543(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_42387();
    if ((g_U9893._fU12) || ((g_U10978) || (fVar5 > 100.00000000)))
    {
        sub_45588( uParam1 );
        sub_16669( uParam0 );
        l_U102 = 0;
        g_U22274[uParam0]._fU24 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_2514() )))
    {
        if (sub_38943( sub_2514() ))
        {
            return;
        }
    }
    if (fVar5 < 12.00000000)
    {
        l_U102 = 2;
        if (NOT IS_HINT_RUNNING())
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2514() ))
            {
                GET_CHAR_COORDINATES( (uParam1^), ref l_U162._fU0, ref l_U162._fU4, ref l_U162._fU8 );
                l_U162._fU8 += 1.50000000;
                HINT_CAM( l_U162._fU0, l_U162._fU4, l_U162._fU8, 0, 0, 0, 30000 );
            }
        }
        l_U112 = 0;
        sub_16598();
        sub_45832( (uParam1^), uParam2 );
        TASK_LOOK_AT_CHAR( (uParam1^), sub_2514(), -2, 0 );
        return;
    }
    return;
}

void sub_45588(unknown uParam0)
{
    DELETE_CHAR( uParam0 );
    (uParam0^) = nil;
    return;
}

void sub_45832(unknown uParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        return;
    }
    ADD_BLIP_FOR_CHAR( uParam0, uParam1 );
    SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
    return;
}

void sub_45938(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_42387();
    if (sub_45960( uVar4, uParam0, uParam1 ))
    {
        return;
    }
    if (sub_46132( uVar4 ))
    {
        return;
    }
    sub_46347();
    if ((sub_46879()) || (sub_46441()))
    {
        return;
    }
    return;
}

int sub_45960(float fParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    bVar5 = false;
    if (NOT (IS_CHAR_DEAD( sub_2514() )))
    {
        if (sub_38943( sub_2514() ))
        {
            bVar5 = true;
        }
    }
    if ((NOT bVar5) AND ((NOT g_U9893._fU12) AND (NOT g_U10978)))
    {
        if (fParam0 <= 14.00000000)
        {
            return 0;
        }
    }
    l_U102 = 1;
    CLEAR_HELP();
    sub_16539( uParam1 );
    sub_1734( 0 );
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    TASK_CLEAR_LOOK_AT( uParam2 );
    return 1;
}

int sub_46132(float fParam0)
{
    if (fParam0 > 7.00000000)
    {
        return 0;
    }
    l_U102 = 3;
    if (NOT l_U114)
    {
        sub_46175();
    }
    if (l_U112)
    {
        if (l_U113)
        {
            PRINT_HELP_FOREVER( ref l_U128[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U128[1] );
        }
    }
    return 1;
}

int sub_46175()
{
    int iVar2;

    l_U114 = 1;
    iVar2 = IS_CHAR_IN_ANY_CAR( sub_2514() );
    if (l_U112 == iVar2)
    {
        return 0;
    }
    l_U112 = iVar2;
    l_U113 = 0;
    if (l_U112)
    {
        if (IS_CHAR_IN_ANY_HELI( sub_2514() ))
        {
            l_U113 = 1;
        }
    }
    return 1;
}

void sub_46347()
{
    if (NOT sub_46175())
    {
        return;
    }
    if (l_U112)
    {
        if (l_U113)
        {
            PRINT_HELP_FOREVER( ref l_U128[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U128[0] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_46441()
{
    unknown uVar2;
    float fVar3;
    int iVar4;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2514() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    if ((sub_46516( 1, 1 )) AND (fVar3 < 0.01000000))
    {
        if (NOT l_U113)
        {
            SET_PLAYER_CONTROL( sub_2866(), 0 );
        }
        l_U102 = 4;
        CLEAR_HELP();
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        l_U165 = iVar4 + 20000;
        return 1;
    }
    return 0;
}

int sub_46516(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2514() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2514() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2514()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2514() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2514() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2866() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2866() )))
    {
        return 0;
    }
    return 1;
}

int sub_46879()
{
    int iVar2;
    boolean bVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    bVar3 = false;
    if ((IS_PLAYER_PRESSING_HORN( sub_2866() )) AND ((sub_46516( 1, 1 )) AND (IS_CHAR_IN_ANY_CAR( sub_2514() ))))
    {
        if (l_U113)
        {
            return 0;
        }
        if (l_U121 == 0)
        {
            l_U121 = iVar2 + 400;
            return 0;
        }
        if (l_U121 > iVar2)
        {
            return 0;
        }
        l_U121 = 0;
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        if (l_U121 > 0)
        {
            l_U121 = 0;
            bVar3 = true;
        }
    }
    if (bVar3)
    {
        SET_PLAYER_CONTROL( sub_2866(), 0 );
        l_U102 = 4;
        CLEAR_HELP();
        l_U165 = iVar2 + 20000;
        return 1;
    }
    return 0;
}

void sub_47126()
{
    unknown uVar2;

    uVar2 = sub_42387();
    if (sub_47144( uVar2 ))
    {
        if (l_U112)
        {
            if (l_U113)
            {
                PRINT_HELP_FOREVER( ref l_U128[2] );
            }
            else
            {
                PRINT_HELP_FOREVER( ref l_U128[0] );
            }
        }
        return;
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2514() )))
    {
        l_U102 = 4;
        return;
    }
    if ((sub_46879()) || (sub_46441()))
    {
        return;
    }
    sub_47361();
    return;
}

int sub_47144(float fParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_DEAD( sub_2514() )))
    {
        if (sub_38943( sub_2514() ))
        {
            bVar3 = true;
        }
    }
    if ((NOT bVar3) AND ((NOT g_U9893._fU12) AND (NOT g_U10978)))
    {
        if (fParam0 <= 9.00000000)
        {
            return 0;
        }
    }
    l_U102 = 2;
    l_U112 = 0;
    return 1;
}

void sub_47361()
{
    if (NOT sub_46175())
    {
        return;
    }
    if (l_U112)
    {
        if (l_U113)
        {
            PRINT_HELP_FOREVER( ref l_U128[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U128[1] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_47483(unknown uParam0, unknown uParam1)
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

    bVar4 = g_U10978;
    if (NOT bVar4)
    {
        if (g_U9893._fU12)
        {
            bVar4 = true;
        }
    }
    if ((bVar4) AND (NOT l_U108))
    {
        l_U102 = 3;
        return 1;
    }
    iVar5 = 0;
    iVar6 = 0;
    if (NOT l_U108)
    {
        GET_GROUP_SIZE( sub_17460(), ref iVar5, ref iVar6 );
        if (iVar6 > 0)
        {
            if (NOT sub_47586())
            {
                sub_3833( "Check_If_Still_Joining_Group: Player has group members, but not Dwayne Backup" );
            }
            sub_47729();
            return 1;
        }
    }
    uVar7 = nil;
    iVar8 = 0;
    iVar9 = 1;
    if (NOT l_U108)
    {
        if (NOT l_U117)
        {
            iVar9 = 3;
        }
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2514() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref uVar7 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar7, ref iVar8 );
            if ((l_U118) || (iVar8 < iVar9))
            {
                TASK_LEAVE_CAR( sub_2514(), uVar7 );
                l_U119 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( (uParam0^), 80, ref iVar10 );
        if ((NOT (iVar10 == 7)) AND (NOT (iVar10 == 1)))
        {
            return 1;
        }
        if (NOT (COMPARE_STRING( ref l_U167._fU0, l_U166 )))
        {
            CLEAR_CHAR_TASKS( (uParam0^) );
            REMOVE_ANIMS( ref l_U167._fU0 );
            l_U167._fU96 = 0;
        }
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        SET_GROUP_MEMBER( sub_17460(), (uParam0^) );
        l_U108 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        sub_48018();
        g_U10978 = 1;
    }
    iVar11 = 0;
    if ((NOT l_U119) AND (IS_CHAR_IN_ANY_CAR( sub_2514() )))
    {
        MODIFY_CHAR_MOVE_STATE( (uParam0^), 2 );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref uVar7 );
        if (NOT (IS_CHAR_IN_CAR( (uParam0^), uVar7 )))
        {
            if (NOT (l_U165 == 0))
            {
                iVar12 = 0;
                GET_GAME_TIMER( ref iVar12 );
                if ((NOT (IS_VEH_DRIVEABLE( uVar7 ))) || (l_U165 < iVar12))
                {
                    SET_PLAYER_CONTROL( sub_2866(), 1 );
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U165 = 0;
                }
                else if (NOT (IS_GROUP_MEMBER( (uParam0^), sub_17460() )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    SET_GROUP_MEMBER( sub_17460(), (uParam0^) );
                }
            }
            else if (sub_42387() > 20.00000000)
            {
                return 0;
            }
            return 1;
        }
        if (l_U115)
        {
            sub_48602( l_U158, ref l_U141 );
            iVar11 = sub_18948( l_U158 );
            sub_50093( iVar11 );
        }
        else
        {
            sub_50306( l_U158, ref l_U141 );
        }
        sub_16539( uParam1 );
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
        return 0;
    }
    if (l_U115)
    {
        sub_51140( l_U158, ref l_U141 );
        iVar11 = sub_18948( l_U158 );
        sub_50093( iVar11 );
    }
    else
    {
        sub_51686( l_U158, ref l_U141 );
    }
    if ((NOT l_U119) AND (IS_HINT_RUNNING()))
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    return 0;
}

int sub_47586()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_47729()
{
    if (sub_47586())
    {
        g_U64921 = 1;
    }
    return;
}

void sub_48018()
{
    sub_48027();
    sub_48130( ref g_U9893._fU68 );
    sub_48179();
    return;
}

void sub_48027()
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

void sub_48130(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_48179()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_13536( 1, g_U569[I] )) == 0)
        {
            sub_13822( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_13988())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

void sub_48602(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_48637( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_48724( "FCR_ARRL", uParam1, 8, 1 );
        return;
        case 3:
        sub_48724( "FCJ_ARRL", uParam1, 8, 1 );
        return;
        case 7:
        sub_48724( "FCD2_ARRL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 9) || (g_U22274[uParam0]._fU144 == 4))
        {
            ;
        }
        else
        {
            sub_48724( "FCB2_ARRL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_48724( "FCP_ARRL", uParam1, 8, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_48637(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        if (NOT g_U15654[6])
        {
            sub_48724( "FCR_ARRH", uParam1, 8, 1 );
        }
        return;
        case 3:
        sub_48724( "FCJ_ARHOSP", uParam1, 8, 1 );
        return;
        case 7:
        sub_48724( "FCD2_ARRCNL", uParam1, 8, 1 );
        return;
        case 8:
        sub_48724( "FCB2_ARRCNL", uParam1, 8, 1 );
        return;
        case 13:
        sub_48724( "FCP_ARRCNL", uParam1, 8, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_48724(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_48745( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_48745(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_48799( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_48799(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_48821( iParam1 )))
    {
        return 0;
    }
    l_U4._fU384 = 0;
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
    sub_49509( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_48821(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_48898( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_48898( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_48898( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_48898(unknown uParam0)
{
    return;
}

void sub_49509(int iParam0, int iParam1)
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

void sub_50093(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        case 7:
        iVar3 = -5;
        break;
        case 8:
        iVar3 = -10;
        break;
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_3833( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_27056( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_27056( uParam0, 0, iVar4 );
    return;
}

void sub_50306(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_48637( uParam0, uParam1 );
        return;
    }
    if (IS_CHAR_DEAD( sub_2514() ))
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        if (IS_CHAR_ON_ANY_BIKE( sub_2514() ))
        {
            sub_48724( "FCR_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_2514() ))
        {
            sub_48724( "FCR_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_48724( "FCR_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 3:
        if (IS_CHAR_ON_ANY_BIKE( sub_2514() ))
        {
            sub_48724( "FCJ_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_2514() ))
        {
            sub_48724( "FCJ_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_48724( "FCJ_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 7:
        if (IS_CHAR_ON_ANY_BIKE( sub_2514() ))
        {
            sub_48724( "FCD2_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_2514() ))
        {
            sub_48724( "FCD2_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_48724( "FCD2_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 9) || (g_U22274[uParam0]._fU144 == 4))
        {
            ;
        }
        else if (IS_CHAR_ON_ANY_BIKE( sub_2514() ))
        {
            sub_48724( "FCB2_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_2514() ))
        {
            sub_48724( "FCB2_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_48724( "FCB2_ARRCNL", uParam1, 8, 1 );
        };;;
        return;
        case 13:
        if (IS_CHAR_ON_ANY_BIKE( sub_2514() ))
        {
            sub_48724( "FCP_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_2514() ))
        {
            sub_48724( "FCP_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_48724( "FCP_ARRCNL", uParam1, 8, 1 );
        }
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_51140(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_51175( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_48724( "FCR_ARRFL", uParam1, 8, 1 );
        return;
        case 3:
        sub_48724( "FCJ_ARRFL", uParam1, 8, 1 );
        return;
        case 7:
        sub_48724( "FCD2_ARRFL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 9) || (g_U22274[uParam0]._fU144 == 4))
        {
            ;
        }
        else
        {
            sub_48724( "FCB2_ARRFL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_48724( "FCP_ARRFL", uParam1, 8, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_51175(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_48724( "FCR_ARRFH", uParam1, 8, 1 );
        return;
        case 3:
        sub_48724( "FCJ_ARHOSPF", uParam1, 8, 1 );
        return;
        case 7:
        sub_48724( "FCD2_ARRNL", uParam1, 8, 1 );
        return;
        case 8:
        sub_48724( "FCB2_ARRNL", uParam1, 8, 1 );
        return;
        case 13:
        sub_48724( "FCP_ARRFNL", uParam1, 8, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_51686(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_51175( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_48724( "FCR_ARRFNL", uParam1, 8, 1 );
        return;
        case 3:
        sub_48724( "FCJ_ARRFNL", uParam1, 8, 1 );
        return;
        case 7:
        sub_48724( "FCD2_ARRNL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 9) || (g_U22274[uParam0]._fU144 == 4))
        {
            ;
        }
        else
        {
            sub_48724( "FCB2_ARRNL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_48724( "FCP_ARRFNL", uParam1, 8, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_52105()
{
    return sub_42242( 3, ref l_U267, ref l_U268 );
}

void sub_52139()
{
    return sub_42242( 7, ref l_U305, ref l_U306 );
}

void sub_52173()
{
    return sub_42242( 8, ref l_U276, ref l_U277 );
}

void sub_52207()
{
    return sub_42242( 13, ref l_U314, ref l_U315 );
}

void sub_52440(unknown uParam0)
{
    if (g_U9197)
    {
        return;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return;
    }
    if (NOT g_U9197)
    {
        if (sub_52500( uParam0 ))
        {
            g_U9197 = 1;
        }
        return;
    }
    return;
}

int sub_52500(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRLOCR" );
        break;
        case 3:
        switch (g_U22274[uParam0]._fU144)
        {
            case 10: return 0;
        }
        PRINT_HELP( "FRLOCJ" );
        break;
        case 7:
        PRINT_HELP( "FRLOCD" );
        break;
        case 8:
        switch (g_U22274[uParam0]._fU144)
        {
            case 10:
            case 4:
            case 9: return 0;
        }
        PRINT_HELP( "FRLOCB" );
        break;
        case 13:
        PRINT_HELP( "FRLOCP" );
        break;
    }
    return 1;
}

void sub_52864()
{
    SET_MISSION_FLAG( 1 );
    sub_52881();
    l_U330 = 1;
    sub_53525( "Jacob Friend Activity: Lift" );
    return;
}

void sub_52881()
{
    sub_52890();
    return;
}

void sub_52890()
{
    int iVar2;

    iVar2 = 3;
    sub_52904( iVar2 );
    return;
}

void sub_52904(unknown uParam0)
{
    unknown uVar3;

    g_U10978 = 1;
    uVar3 = sub_14140( uParam0 );
    sub_52930( uVar3 );
    return;
}

void sub_52930(unknown uParam0)
{
    unknown uVar3;
    char[16] cVar4;

    uVar3 = g_U22274[uParam0]._fU144;
    StrCopy( ref cVar4, "", 16 );
    switch (uVar3)
    {
        case 4:
        StrCopy( ref cVar4, "BOATING", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "BOWLING", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "DARTS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "DRINKING", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "EATING", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "HELIRIDES", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "LIFTS", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "POOL", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "SHOW", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "STRIPCLUB", 16 );
        break;
        case 14: return;
    }
    SCRIPT_ASSERT( "Flow_Player_Stats_Friend_Activity_Started: Unknown Activity ID" );
    return;
    sub_53314( cVar4 );
    return;
}

void sub_53314(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

void sub_53525(unknown uParam0)
{
    return;
}

void sub_53575()
{
    int iVar2;

    l_U343 = 0;
    iVar2 = 3;
    l_U111 = 1;
    l_U376 = 1;
    sub_28077();
    if (NOT l_U780)
    {
        l_U377 = sub_53623( iVar2 );
        l_U780 = 1;
    }
    if (NOT (sub_55821( iVar2, l_U267, g_U64782._fU20, "FCJAAUD" )))
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            sub_68245( l_U267, l_U269 );
        }
        return;
    }
    sub_68265();
    sub_68326( 3, 10 );
    return;
}

string sub_53623(unknown uParam0)
{
    switch (uParam0)
    {
        case 3: return sub_53657();
        case 8: return sub_54614();
    }
    sub_3833( "Choose_Lift_Dropoff_Speech: Illegal Contact ID for Lift" );
    SCRIPT_ASSERT( "Choose_Lift_Dropoff_Speech - unknown error" );
    return "ERROR";
}

string sub_53657()
{
    unknown uVar2;

    uVar2 = g_U64782._fU32;
    switch (uVar2)
    {
        case 0:
        PRINTSTRING( "JACOB: CID_HOME\n" );
        return "FCJ_TKHM2";
        case 1:
        PRINTSTRING( "JACOB: CID_STEINWAY\n" );
        return "FCJ_STEIN";
        case 2:
        PRINTSTRING( "JACOB: CID_MEADOWS_PARK\n" );
        return "FCJ_MEADP";
        case 3:
        PRINTSTRING( "JACOB: CID_EAST_ISLAND_CITY\n" );
        return "FCJ_EASTISLE";
        case 4:
        PRINTSTRING( "JACOB: CID_MEADOW_HILLS\n" );
        return "FCJ_MEADH";
        case 5:
        PRINTSTRING( "JACOB: CID_WILLIS\n" );
        return "FCJ_WILLIS";
        case 6:
        PRINTSTRING( "JACOB: CID_CERVESA_HEIGHTS\n" );
        return "FCJ_CERVH";
        case 7:
        PRINTSTRING( "JACOB: CID_AIRPORT\n" );
        return "FCJ_AIRPT";
        case 8:
        PRINTSTRING( "JACOB: CID_DOWNTOWN\n" );
        return "FCJ_DOWNTN";
        case 10:
        PRINTSTRING( "JACOB: CID_BEECHWOOD_CITY\n" );
        return "FCJ_BCHWD";
        case 11:
        PRINTSTRING( "JACOB: CID_OUTLOOK_PARK\n" );
        return "FCJ_OUTLKP";
        case 12:
        PRINTSTRING( "JACOB: CID_SOUTH_SLOPES\n" );
        return "FCJ_SSLOPE";
        case 13:
        PRINTSTRING( "JACOB: CID_HOVE_BEACH\n" );
        return "FCJ_HOVEB";
        case 14:
        PRINTSTRING( "JACOB: CID_FIREFLY_PROJECTS\n" );
        return "FCJ_FFPRO";
        case 15:
        PRINTSTRING( "JACOB: CID_FIREFLY_ISLAND\n" );
        return "FCJ_FFISLE";
    }
    SCRIPT_ASSERT( "Choose_Jacob_Lift_Dropoff_Speech - unknown error" );
    return "ERROR";
}

string sub_54614()
{
    unknown uVar2;

    uVar2 = g_U64773._fU32;
    switch (uVar2)
    {
        case 0:
        PRINTSTRING( "BRUCIE: CID_HOME\n" );
        return "FCB2_ATKHM";
        case 1:
        PRINTSTRING( "BRUCIE: CID_STEINWAY\n" );
        return "FCB2_TKSTE";
        case 2:
        PRINTSTRING( "BRUCIE: CID_MEADOWS_PARK\n" );
        return "FCB2_THOME";
        case 3:
        PRINTSTRING( "BRUCIE: CID_EAST_ISLAND_CITY\n" );
        return "FCB2_TEIC";
        case 4:
        PRINTSTRING( "BRUCIE: CID_MEADOW_HILLS\n" );
        return "FCB2_TSTEIN";
        case 5:
        PRINTSTRING( "BRUCIE: CID_WILLIS\n" );
        return "FCB2_TMEDPK";
        case 6:
        PRINTSTRING( "BRUCIE: CID_CERVESA_HEIGHTS\n" );
        return "FCB2_TWLLS";
        case 7:
        PRINTSTRING( "BRUCIE: CID_AIRPORT\n" );
        return "FCB2_TCERV";
        case 8:
        PRINTSTRING( "BRUCIE: CID_DOWNTOWN\n" );
        return "FCB2_TAIRPT";
        case 9:
        PRINTSTRING( "BRUCIE: CID_SCHOTTLER\n" );
        return "FCB2_TDNTN";
        case 10:
        PRINTSTRING( "BRUCIE: CID_BEECHWOOD_CITY\n" );
        return "FCB2_TSHOT";
        case 11:
        PRINTSTRING( "BRUCIE: CID_OUTLOOK_PARK\n" );
        return "FCB2_TBCHW";
        case 12:
        PRINTSTRING( "BRUCIE: CID_SOUTH_SLOPES\n" );
        return "FCB2_TOTLK";
        case 13:
        PRINTSTRING( "BRUCIE: CID_HOVE_BEACH\n" );
        return "FCB2_TSSLOP";
        case 14:
        PRINTSTRING( "BRUCIE: CID_FIREFLY_PROJECTS\n" );
        return "FCB2_TFFP";
        case 15:
        PRINTSTRING( "BRUCIE: CID_FIREFLY_ISLAND\n" );
        return "FCB2_TLFFI";
    }
    SCRIPT_ASSERT( "Choose_Brucie_Lift_Dropoff_Speech - unknown error" );
    return "ERROR";
}

void sub_55821(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 0;
    return sub_55846( uParam0, uParam1, uParam2, iVar8, uParam5 );
}

int sub_55846(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6)
{
    float fVar9;
    boolean bVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    vector vVar15;
    vector vVar18;
    vector vVar21;
    vector vVar24;
    float fVar27;
    int iVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    int iVar38;

    if (NOT l_U398)
    {
        if (IS_CHAR_INJURED( iParam1 ))
        {
            l_U328 = 1;
            l_U329 = 0;
            return 1;
        }
    }
    if (l_U378)
    {
        if (sub_55912( uParam0, iParam1, uParam6 ))
        {
            l_U325 = 99;
        }
        else
        {
            return 0;
        }
    }
    if (l_U325 == 0)
    {
        if (NOT l_U378)
        {
            if (bParam5)
            {
                sub_57681( uParam0 );
            }
            else
            {
                sub_58393( uParam0, uParam2 );
            }
        }
        if (NOT l_U370)
        {
            sub_59089( ref l_U362, 5, 0, 0 );
            sub_59089( ref l_U366, 8, 0, 0 );
        }
        l_U388 = {0.00000000, 0.00000000, 0.00000000};
        l_U391 = 0;
        l_U398 = 0;
        l_U325++;
    }
    if (l_U325 == 1)
    {
        if (NOT (sub_57210( l_U141 )))
        {
            if (NOT l_U370)
            {
                sub_2408( uParam6 );
                sub_2563( 0, sub_2514(), "NIKO", 0 );
                sub_2563( l_U157, iParam1, ref l_U153, 0 );
                if (l_U376)
                {
                    sub_59854( l_U158, ref l_U141, l_U377 );
                }
                else if (NOT (g_U22274[uParam0]._fU144 == 7))
                {
                    sub_60021( l_U158, ref l_U141 );
                }
                else
                {
                    sub_60897( l_U158 );
                }
                sub_61097( uParam0, bParam5 );
            }
            l_U325++;
        }
        sub_61854( uParam0, bParam5, uParam2 );
    }
    if (l_U325 == 2)
    {
        fVar9 = uParam2._fU8 + 0.00000000;
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2514(), uParam2._fU0, uParam2._fU4, fVar9, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            if (sub_62391( iParam1 ))
            {
                l_U325++;
            }
        }
        l_U343 = 1;
        if (l_U116)
        {
            sub_62638( iParam1, ref l_U372 );
        }
        else
        {
            sub_62692( uParam0 );
        }
        sub_61854( uParam0, bParam5, uParam2 );
    }
    if (NOT l_U370)
    {
        if (l_U325 < 3)
        {
            if (NOT (IS_CHAR_DEAD( sub_2514() )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2514(), uParam2._fU0, uParam2._fU4, uParam2._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
                {
                    sub_63208( uParam0, iParam1 );
                }
            }
        }
    }
    if (IS_CHAR_DEAD( sub_2514() ))
    {
        return 0;
    }
    bVar10 = IS_CHAR_SITTING_IN_ANY_CAR( sub_2514() );
    if (bVar10)
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref uVar11 );
        if (IS_CAR_DEAD( uVar11 ))
        {
            if ((NOT (IS_CHAR_DEAD( iParam1 ))) AND (NOT (IS_CHAR_DEAD( sub_2514() ))))
            {
                TASK_LEAVE_ANY_CAR( sub_2514() );
                TASK_LEAVE_ANY_CAR( iParam1 );
            }
            return 0;
        }
    }
    if (l_U325 == 3)
    {
        if (bVar10)
        {
            GET_CHAR_COORDINATES( sub_2514(), ref vVar15.x, ref vVar15.y, ref vVar15.z );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2514(), 2.00000000, 8.00000000, 3.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
        }
        else
        {
            GET_CHAR_COORDINATES( sub_2514(), ref vVar18.x, ref vVar18.y, ref vVar18.z );
            GET_CHAR_COORDINATES( iParam1, ref vVar21.x, ref vVar21.y, ref vVar21.z );
            vVar24 = {vVar18 - vVar21};
            vVar24.x *= 1.00000000;
            vVar24.y *= 1.00000000;
            vVar24.z *= 1.00000000;
            vVar24.z += 2.00000000;
            uVar12 = {vVar18 + vVar24};
            vVar15 = {vVar21};
            vVar15 = {vVar15 + 0.50000000};
        }
        sub_56145();
        CREATE_CAM( 14, ref l_U331[1] );
        SET_CAM_POS( l_U331[1], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
        POINT_CAM_AT_COORD( l_U331[1], vVar15.x, vVar15.y, vVar15.z );
        SET_CAM_FOV( l_U331[1], 50.00000000 );
        SET_CAM_ACTIVE( l_U331[1], 1 );
        SET_CAM_PROPAGATE( l_U331[1], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SETTIMERA( 0 );
        l_U325++;
    }
    if (l_U325 == 4)
    {
        if (sub_64803())
        {
            sub_65052( uParam0 );
            sub_61933( uParam0 );
            SET_PLAYER_CONTROL( sub_2866(), 0 );
            l_U325++;
        }
    }
    if (l_U325 == 5)
    {
        if ((NOT (IS_CHAR_DEAD( iParam1 ))) AND (NOT (IS_CHAR_DEAD( sub_2514() ))))
        {
            if (bVar10)
            {
                TASK_LOOK_AT_CHAR( sub_2514(), iParam1, -2, 0 );
                TASK_LOOK_AT_CHAR( iParam1, sub_2514(), -2, 0 );
            }
            else
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( sub_2514(), iParam1 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam1, sub_2514() );
            }
        }
        l_U325++;
    }
    if (l_U325 == 6)
    {
        if (TIMERA() > 2000)
        {
            SETTIMERA( 0 );
            l_U325++;
        }
    }
    fVar27 = 0.00000000;
    if (l_U325 == 7)
    {
        if (bVar10)
        {
            l_U325++;
        }
        else if ((IS_CHAR_DEAD( iParam1 )) || (IS_CHAR_DEAD( sub_2514() )))
        {
            l_U325++;
        }
        else
        {
            GET_CHAR_COORDINATES( sub_2514(), ref vVar18.x, ref vVar18.y, ref vVar18.z );
            GET_CHAR_COORDINATES( iParam1, ref vVar21.x, ref vVar21.y, ref vVar21.z );
            fVar27 = sub_65763( vVar18, vVar21 );
            if ((TIMERA() > 7000) || (fVar27 < 5.00000000))
            {
                l_U325++;
            }
        }
    }
    if (l_U325 == 8)
    {
        iVar28 = 0;
        sub_17989( iVar28 );
        if (NOT l_U370)
        {
            sub_2408( uParam6 );
            sub_2563( 0, sub_2514(), "NIKO", 0 );
            sub_2563( l_U157, iParam1, ref l_U153, 0 );
            if (l_U376)
            {
                sub_65962( l_U158, ref l_U141 );
            }
            else
            {
                sub_56665( l_U158, ref l_U141 );
            }
        }
        l_U325++;
    }
    fVar35 = 0.00000000;
    fVar36 = 0.00000000;
    fVar37 = 0.00000000;
    if (l_U325 == 9)
    {
        GET_PED_BONE_POSITION( sub_2514(), 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar29 );
        if (bVar10)
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, 0.00000000, 0.00000000, 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
            fVar27 = sub_65763( uVar29, uVar32 );
            fVar35 = fVar27 + 1.30000000;
            if (fVar27 > 4.00000000)
            {
                fVar35 += 0.70000000;
            }
            fVar36 = (uVar29._fU8 - uVar32._fU8) + 0.60000000;
            uVar12 = {0.00000000, fVar35, fVar36};
            fVar37 = uVar29._fU8 - uVar32._fU8;
            vVar15 = {0.00000000, 0.00000000, fVar37};
            l_U325++;
        }
        else
        {
            l_U325++;
        }
    }
    if (l_U325 == 10)
    {
        if (bVar10)
        {
            if (IS_CAR_DEAD( uVar11 ))
            {
                bVar10 = false;
            }
        }
        if (bVar10)
        {
            ATTACH_CAM_TO_VEHICLE( l_U331[1], uVar11 );
            SET_CAM_ATTACH_OFFSET( l_U331[1], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U331[1], 1 );
            POINT_CAM_AT_VEHICLE( l_U331[1], uVar11 );
            SET_CAM_POINT_OFFSET( l_U331[1], vVar15.x, vVar15.y, vVar15.z );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U331[1], 1 );
            SET_CAM_FOV( l_U331[1], 40.00000000 );
        }
        else
        {
            ATTACH_CAM_TO_PED( l_U331[1], sub_2514() );
            SET_CAM_ATTACH_OFFSET( l_U331[1], 0.70000000, -1.40000000, 0.70000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U331[1], 1 );
            GET_CHAR_COORDINATES( iParam1, ref vVar15.x, ref vVar15.y, ref vVar15.z );
            vVar15.z += 0.50000000;
            POINT_CAM_AT_COORD( l_U331[1], vVar15.x, vVar15.y, vVar15.z );
            SET_CAM_FOV( l_U331[1], 50.00000000 );
        }
        l_U325++;
    }
    if (l_U325 == 11)
    {
        if (sub_66819())
        {
            l_U325 = 50;
            return 0;
        }
        if (NOT (sub_57210( l_U141 )))
        {
            if (bVar10)
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar11, 0 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, 2.50000000, 0.00000000, 0.00000000, ref l_U359._fU0, ref l_U359._fU4, ref l_U359._fU8 );
                }
                else if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar11, 1 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, -2.50000000, 0.00000000, 0.00000000, ref l_U359._fU0, ref l_U359._fU4, ref l_U359._fU8 );
                }
                else
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, 2.50000000, 0.00000000, 0.00000000, ref l_U359._fU0, ref l_U359._fU4, ref l_U359._fU8 );
                }
                fVar9 = l_U359._fU8 + 1.50000000;
                GET_GROUND_Z_FOR_3D_COORD( l_U359._fU0, l_U359._fU4, fVar9, ref l_U359._fU8 );
            }
            else
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2514(), -1.50000000, -5.00000000, 10.00000000, ref l_U359._fU0, ref l_U359._fU4, ref l_U359._fU8 );
                fVar9 = l_U359._fU8;
                GET_GROUND_Z_FOR_3D_COORD( l_U359._fU0, l_U359._fU4, fVar9, ref l_U359._fU8 );
            }
            l_U108 = 0;
            if ((NOT (IS_CHAR_DEAD( iParam1 ))) AND (NOT (iParam1 == nil)))
            {
                if (IS_GROUP_MEMBER( iParam1, sub_17460() ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam1 );
                }
            }
            SETTIMERA( 0 );
            l_U325++;
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( iParam1, 1 );
        }
    }
    if (l_U325 == 12)
    {
        if (NOT (IS_CHAR_DEAD( sub_2514() )))
        {
            TASK_CLEAR_LOOK_AT( sub_2514() );
        }
        if ((TIMERA() > 7000) || (sub_67411( iParam1, l_U359 )))
        {
            l_U325++;
        }
    }
    if (l_U325 == 13)
    {
        sub_16669( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_17724();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U325 = 99;
    }
    if (l_U325 == 99)
    {
        l_U324 = 6;
        l_U325 = 0;
        return 1;
    }
    if (l_U325 == 50)
    {
        DO_SCREEN_FADE_OUT( 500 );
        SETTIMERA( 0 );
        l_U398 = 1;
        l_U325++;
    }
    if (l_U325 == 51)
    {
        if ((TIMERA() > 3000) || (IS_SCREEN_FADED_OUT()))
        {
            l_U325++;
        }
    }
    iVar38 = 0;
    if (l_U325 == 52)
    {
        sub_67882( ref l_U141, iVar38 );
        l_U108 = 0;
        if ((NOT (IS_CHAR_DEAD( iParam1 ))) AND (NOT (iParam1 == nil)))
        {
            if (IS_GROUP_MEMBER( iParam1, sub_17460() ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam1 );
            }
        }
        sub_16669( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_17724();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U325++;
    }
    if (l_U325 == 53)
    {
        DO_SCREEN_FADE_IN( 500 );
        SETTIMERA( 0 );
        l_U325++;
    }
    if (l_U325 == 54)
    {
        if ((TIMERA() > 3000) || (IS_SCREEN_FADED_IN()))
        {
            l_U325 = 99;
        }
    }
    return 0;
}

int sub_55912(unknown uParam0, int iParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;

    if (IS_CHAR_DEAD( sub_2514() ))
    {
        return 1;
    }
    if (l_U326 == 0)
    {
        SET_CHAR_COORDINATES( iParam1, l_U379._fU0, l_U379._fU4, l_U379._fU8 );
        SET_CHAR_COORDINATES( sub_2514(), l_U382._fU0, l_U382._fU4, l_U382._fU8 );
        uVar5 = sub_56029( l_U382, l_U379 );
        SET_CHAR_HEADING( iParam1, uVar5 );
        uVar5 = sub_56029( l_U379, l_U382 );
        SET_CHAR_HEADING( sub_2514(), uVar5 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_56145();
        SET_PLAYER_CONTROL( sub_2866(), 0 );
        l_U326++;
    }
    if (l_U326 == 1)
    {
        CREATE_CAM( 14, ref l_U331[1] );
        ATTACH_CAM_TO_PED( l_U331[1], sub_2514() );
        SET_CAM_ATTACH_OFFSET( l_U331[1], 0.70000000, -1.40000000, 0.70000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U331[1], 1 );
        GET_CHAR_COORDINATES( iParam1, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        uVar6._fU8 += 0.50000000;
        POINT_CAM_AT_COORD( l_U331[1], uVar6._fU0, uVar6._fU4, uVar6._fU8 );
        SET_CAM_FOV( l_U331[1], 50.00000000 );
        SET_CAM_ACTIVE( l_U331[1], 1 );
        SET_CAM_PROPAGATE( l_U331[1], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SETTIMERA( 0 );
        l_U326++;
    }
    if (l_U326 == 2)
    {
        if (TIMERA() > 2000)
        {
            l_U326++;
        }
    }
    if (l_U326 == 3)
    {
        DO_SCREEN_FADE_IN( 1000 );
        l_U326++;
    }
    if (l_U326 == 4)
    {
        if (IS_SCREEN_FADED_IN())
        {
            l_U326++;
        }
    }
    if (l_U326 == 5)
    {
        iVar9 = 0;
        sub_17989( iVar9 );
        sub_2408( uParam2 );
        sub_2563( 0, sub_2514(), "NIKO", 0 );
        sub_2563( l_U157, iParam1, ref l_U153, 0 );
        sub_56665( l_U158, ref l_U141 );
        l_U326++;
    }
    if (l_U326 == 6)
    {
        if (NOT (sub_57210( l_U141 )))
        {
            l_U108 = 0;
            if ((NOT (IS_CHAR_DEAD( iParam1 ))) AND (NOT (iParam1 == nil)))
            {
                if (IS_GROUP_MEMBER( iParam1, sub_17460() ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam1 );
                }
            }
            l_U326++;
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( iParam1, 1 );
        }
    }
    if (l_U326 == 7)
    {
        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam1, l_U385._fU0, l_U385._fU4, l_U385._fU8, 2, -2, 0.10000000 );
        SETTIMERA( 0 );
        l_U326++;
    }
    if (l_U326 == 8)
    {
        if (TIMERA() > 5000)
        {
            l_U326++;
        }
    }
    if (l_U326 == 9)
    {
        sub_16669( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_17724();
        SET_GAME_CAM_HEADING( 0.00000000 );
        return 1;
    }
    return 0;
}

void sub_56029(vector vParam0, vector vParam3)
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

void sub_56145()
{
    int iVar2;

    l_U335 = 1;
    iVar2 = 0;
    BEGIN_CAM_COMMANDS( ref iVar2 );
    if (iVar2 == 1)
    {
        return;
    }
    while (iVar2 > 0)
    {
        END_CAM_COMMANDS( ref iVar2 );
    }
    BEGIN_CAM_COMMANDS( ref iVar2 );
    return;
}

void sub_56665(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_56700( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_48724( "FCR_DRPOFF", uParam1, 7, 1 );
        return;
        case 3:
        sub_48724( "FCJ_DRPOFF", uParam1, 7, 1 );
        return;
        case 7:
        sub_48724( "FCD2_DRPOFF", uParam1, 7, 1 );
        return;
        case 8:
        sub_48724( "FCB2_DRPOFF", uParam1, 7, 1 );
        return;
        case 13:
        sub_48724( "FCP_DRPOFF", uParam1, 7, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_56700(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        if (g_U15654[6])
        {
            sub_48724( "MF3_APPT", uParam1, 8, 1 );
        }
        else
        {
            sub_48724( "FCR_HDRPOF", uParam1, 8, 1 );
        }
        return;
        case 3:
        sub_48724( "FCJ_HOSPDRP", uParam1, 8, 1 );
        return;
        case 7:
        sub_48724( "FCD2_DRPOFF", uParam1, 8, 1 );
        break;
        case 8:
        sub_48724( "FCB2_DRPOFF", uParam1, 8, 1 );
        return;
        case 13:
        sub_48724( "FCP_DRPOFF", uParam1, 8, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

int sub_57210(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_48898( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_48898( "\n speech is not playing" );
    }
    return 0;
}

void sub_57681(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_57739();
        return;
        case 3:
        sub_57832();
        return;
        case 7:
        sub_57925();
        return;
        case 8:
        sub_58018();
        return;
        case 13:
        sub_58111();
        return;
    }
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Not a friend" );
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Should never reach here" );
    return;
}

void sub_57739()
{
    if (NOT (DOES_BLIP_EXIST( l_U203 )))
    {
        ADD_BLIP_FOR_COORD( l_U197._fU0, l_U197._fU4, l_U197._fU8, ref l_U203 );
        if (l_U111)
        {
            SET_ROUTE( l_U203, 1 );
        }
    }
    return;
}

void sub_57832()
{
    if (NOT (DOES_BLIP_EXIST( l_U275 )))
    {
        ADD_BLIP_FOR_COORD( l_U269._fU0, l_U269._fU4, l_U269._fU8, ref l_U275 );
        if (l_U111)
        {
            SET_ROUTE( l_U275, 1 );
        }
    }
    return;
}

void sub_57925()
{
    if (NOT (DOES_BLIP_EXIST( l_U313 )))
    {
        ADD_BLIP_FOR_COORD( l_U307._fU0, l_U307._fU4, l_U307._fU8, ref l_U313 );
        if (l_U111)
        {
            SET_ROUTE( l_U313, 1 );
        }
    }
    return;
}

void sub_58018()
{
    if (NOT (DOES_BLIP_EXIST( l_U284 )))
    {
        ADD_BLIP_FOR_COORD( l_U278._fU0, l_U278._fU4, l_U278._fU8, ref l_U284 );
        if (l_U111)
        {
            SET_ROUTE( l_U284, 1 );
        }
    }
    return;
}

void sub_58111()
{
    if (NOT (DOES_BLIP_EXIST( l_U322 )))
    {
        ADD_BLIP_FOR_COORD( l_U316._fU0, l_U316._fU4, l_U316._fU8, ref l_U322 );
        if (l_U111)
        {
            SET_ROUTE( l_U322, 1 );
        }
    }
    return;
}

void sub_58393(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 0:
        sub_58454( uParam1 );
        return;
        case 3:
        sub_58541( uParam1 );
        return;
        case 7:
        sub_58628( uParam1 );
        return;
        case 8:
        sub_58715( uParam1 );
        return;
        case 13:
        sub_58802( uParam1 );
        return;
    }
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Not a friend" );
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Should never reach here" );
    return;
}

void sub_58454(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U203 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U203 );
        if (l_U111)
        {
            SET_ROUTE( l_U203, 1 );
        }
    }
    return;
}

void sub_58541(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U275 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U275 );
        if (l_U111)
        {
            SET_ROUTE( l_U275, 1 );
        }
    }
    return;
}

void sub_58628(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U313 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U313 );
        if (l_U111)
        {
            SET_ROUTE( l_U313, 1 );
        }
    }
    return;
}

void sub_58715(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U284 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U284 );
        if (l_U111)
        {
            SET_ROUTE( l_U284, 1 );
        }
    }
    return;
}

void sub_58802(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U322 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U322 );
        if (l_U111)
        {
            SET_ROUTE( l_U322, 1 );
        }
    }
    return;
}

void sub_59089(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_59142( iParam0, uParam1, uParam2 );
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
        sub_59274( iParam0 + 0 );
    }
    return;
}

void sub_59142(int iParam0, int iParam1, int iParam2)
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
        sub_59274( iParam0 + 0 );
    }
    return;
}

void sub_59274(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_59305( iParam0->_fU4 )))
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

int sub_59305(unknown uParam0)
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

void sub_59854(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_56700( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_48724( uParam2, uParam1, 7, 1 );
        return;
        case 8:
        sub_48724( uParam2, uParam1, 7, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_60021(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_60056( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_48724( "FCR_TKHM", uParam1, 7, 1 );
        return;
        case 3:
        sub_48724( "FCJ_TKHM2", uParam1, 7, 1 );
        return;
        case 7:
        sub_48724( "FCD2_TKHM", uParam1, 7, 1 );
        return;
        case 8:
        sub_48724( "FCB2_TKHM", uParam1, 7, 1 );
        return;
        case 13:
        sub_48724( "FCP_TKHM", uParam1, 7, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_60056(unknown uParam0, unknown uParam1)
{
    unknown[2] uVar4;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    array(ref uVar4, 2);
    switch (uParam0)
    {
        case 0:
        if (g_U15654[6])
        {
            sub_60154( ref uVar4, "MF3_HOSP", "MF3_TKHM" );
            sub_60496( ref uVar4, uParam1, 8, 1 );
        }
        return;
        case 3: return;
        case 7:
        sub_48724( "FCD2_TKHM", uParam1, 8, 1 );
        break;
        case 8:
        sub_48724( "FCB2_TKHM", uParam1, 8, 1 );
        return;
        case 13:
        sub_48724( "FCP_TKHM", uParam1, 8, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_60154(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_60205( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_60205(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_60496(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_60517( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_60517(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_48799( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_60897(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_NOW( "RMDRKHM", 7500, 1 );
        break;
        case 3:
        PRINT_NOW( "JBDRKHM", 7500, 1 );
        break;
        case 7:
        PRINT_NOW( "DWDRKHM", 7500, 1 );
        break;
        case 8:
        PRINT_NOW( "BRDRKHM", 7500, 1 );
        break;
        case 13:
        PRINT_NOW( "PKDRKHM", 7500, 1 );
        break;
    }
    return;
}

void sub_61097(unknown uParam0, boolean bParam1)
{
    boolean bVar4;
    boolean bVar5;

    if ((g_U9194) AND (g_U9193))
    {
        return;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return;
    }
    bVar4 = false;
    if (NOT g_U9193)
    {
        if (bParam1)
        {
            bVar4 = true;
        }
    }
    bVar5 = false;
    if (NOT g_U9194)
    {
        if (g_U22274[uParam0]._fU144 == 7)
        {
            bVar5 = true;
        }
    }
    if (bVar5)
    {
        if (bVar4)
        {
            sub_61229( uParam0 );
            g_U9194 = 1;
            return;
        }
        PRINT_HELP( "FRDRUNK" );
        g_U9194 = 1;
        return;
    }
    if (bVar4)
    {
        if (g_U32898._fU32 == 0)
        {
            sub_61467( uParam0 );
        }
        else
        {
            sub_61650( uParam0 );
        }
        g_U9193 = 1;
    }
    return;
}

void sub_61229(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRDRHMR" );
        break;
        case 3:
        PRINT_HELP( "FRDRHMJ" );
        break;
        case 7:
        PRINT_HELP( "FRDRHMD" );
        break;
        case 8:
        PRINT_HELP( "FRDRHMB" );
        break;
        case 13:
        PRINT_HELP( "FRDRHMP" );
        break;
    }
    return;
}

void sub_61467(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRALTRH" );
        break;
        case 3:
        PRINT_HELP( "FRALTJH" );
        break;
        case 7:
        PRINT_HELP( "FRALTDH" );
        break;
        case 8:
        PRINT_HELP( "FRALTBH" );
        break;
        case 13:
        PRINT_HELP( "FRALTPH" );
        break;
    }
    return;
}

void sub_61650(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRALTR" );
        break;
        case 3:
        PRINT_HELP( "FRALTJ" );
        break;
        case 7:
        PRINT_HELP( "FRALTD" );
        break;
        case 8:
        PRINT_HELP( "FRALTB" );
        break;
        case 13:
        PRINT_HELP( "FRALTP" );
        break;
    }
    return;
}

void sub_61854(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    boolean bVar7;

    if (l_U378)
    {
        return;
    }
    bVar7 = true;
    if (l_U122)
    {
        bVar7 = false;
    }
    if (bVar7)
    {
        if (bParam1)
        {
            sub_57681( uParam0 );
        }
        else
        {
            sub_58393( uParam0, uParam2 );
        }
        return;
    }
    sub_61933( uParam0 );
    return;
}

void sub_61933(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_61991();
        return;
        case 3:
        sub_16639();
        return;
        case 7:
        sub_62031();
        return;
        case 8:
        sub_62063();
        return;
        case 13:
        sub_62095();
        return;
    }
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Not a friend" );
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Should never reach here" );
    return;
}

void sub_61991()
{
    REMOVE_BLIP( l_U203 );
    return;
}

void sub_62031()
{
    REMOVE_BLIP( l_U313 );
    return;
}

void sub_62063()
{
    REMOVE_BLIP( l_U284 );
    return;
}

void sub_62095()
{
    REMOVE_BLIP( l_U322 );
    return;
}

int sub_62391(unknown uParam0)
{
    unknown uVar3;
    vector vVar4;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2514() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref uVar3 );
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2514(), uVar3 )))
        {
            return 0;
        }
        return IS_CHAR_SITTING_IN_CAR( uParam0, uVar3 );
    }
    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        return 0;
    }
    vVar4 = {0.00000000, 0.00000000, 0.00000000};
    GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2514(), vVar4.x, vVar4.y, vVar4.z, 4.00000000, 4.00000000, 4.00000000, 0 )))
    {
        return 0;
    }
    return 1;
}

void sub_62638(unknown uParam0, unknown uParam1)
{
    if (NOT l_U122)
    {
        sub_16539( uParam1 );
        return;
    }
    sub_45832( uParam0, uParam1 );
    return;
}

void sub_62692(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_62750();
        return;
        case 3:
        sub_62784();
        return;
        case 7:
        sub_62818();
        return;
        case 8:
        sub_62852();
        return;
        case 13:
        sub_62886();
        return;
    }
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Not a friend" );
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Should never reach here" );
    return;
}

void sub_62750()
{
    sub_62638( l_U195, ref l_U196 );
    return;
}

void sub_62784()
{
    sub_62638( l_U267, ref l_U268 );
    return;
}

void sub_62818()
{
    sub_62638( l_U305, ref l_U306 );
    return;
}

void sub_62852()
{
    sub_62638( l_U276, ref l_U277 );
    return;
}

void sub_62886()
{
    sub_62638( l_U314, ref l_U315 );
    return;
}

int sub_63208(unknown uParam0, unknown uParam1)
{
    if (sub_63221( ref l_U362 ))
    {
        if (sub_63298( l_U362 ))
        {
            sub_48130( ref l_U362 );
            sub_63576( uParam0, ref l_U141, l_U157, uParam1, l_U153 );
            return 1;
        }
    }
    if (sub_63221( ref l_U366 ))
    {
        if (sub_63298( l_U366 ))
        {
            sub_48130( ref l_U366 );
            sub_63800( uParam0, ref l_U141, l_U157, uParam1, l_U153 );
            l_U370 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_63221(int iParam0)
{
    if (((ref iParam0->_fU8->_fU4) == -1) AND (((ref iParam0->_fU8->_fU0) == -1) AND (((ref iParam0->_fU0->_fU0) == -1) AND ((ref iParam0->_fU0->_fU4) == -1))))
    {
        return 0;
    }
    return 1;
}

int sub_63298(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar6 == uParam0._fU0._fU0) AND (iVar7 == uParam0._fU0._fU4))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_63467( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_63467(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_63576(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    switch (uParam0)
    {
        case 0:
        case 3:
        case 7:
        case 8: return;
        case 13:
        sub_2408( "FCPAAUD" );
        sub_2563( 0, sub_2514(), "NIKO", 0 );
        sub_2563( uParam2, uParam3, ref uParam4, 0 );
        sub_48724( "FCP_BGET", uParam1, 7, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_63800(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    switch (uParam0)
    {
        case 0:
        sub_2408( "FCR21AU" );
        sub_2563( 0, sub_2514(), "NIKO", 0 );
        sub_2563( uParam2, uParam3, ref uParam4, 0 );
        sub_48724( "FCR_TKHM", uParam1, 7, 1 );
        return;
        case 3:
        sub_2408( "FCPAAUD" );
        sub_2563( 0, sub_2514(), "NIKO", 0 );
        sub_2563( uParam2, uParam3, ref uParam4, 0 );
        sub_48724( "FCJ_BTKHM", uParam1, 7, 1 );
        return;
        case 7:
        sub_2408( "FCD2AU" );
        sub_2563( 0, sub_2514(), "NIKO", 0 );
        sub_2563( uParam2, uParam3, ref uParam4, 0 );
        sub_48724( "FCD2_TKHM", uParam1, 7, 1 );
        return;
        case 8:
        sub_2408( "FCB2AU" );
        sub_2563( 0, sub_2514(), "NIKO", 0 );
        sub_2563( uParam2, uParam3, ref uParam4, 0 );
        sub_48724( "FCB2_TKHM", uParam1, 7, 1 );
        return;
        case 13:
        sub_2408( "FCPAAUD" );
        sub_2563( 0, sub_2514(), "NIKO", 0 );
        sub_2563( uParam2, uParam3, ref uParam4, 0 );
        sub_48724( "FCP_BTKHM", uParam1, 7, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_64803()
{
    int iVar2;
    unknown uVar3;
    float fVar4;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U193 == 0)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2514() )))
        {
            return 1;
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2514() )))
        {
            return 0;
        }
        SET_PLAYER_CONTROL( sub_2866(), 0 );
        l_U120 = iVar2 + 4000;
        l_U193 = 1;
    }
    if (l_U193 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2514() )))
        {
            l_U193 = 0;
            return 1;
        }
        if (sub_38943( sub_2514() ))
        {
            return 0;
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref uVar3 );
        GET_CAR_SPEED( uVar3, ref fVar4 );
        if ((l_U120 < iVar2) || (fVar4 < 0.04000000))
        {
            SET_PLAYER_CONTROL( sub_2866(), 1 );
            l_U193 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_65052(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_65110();
        return;
        case 3:
        sub_16526();
        return;
        case 7:
        sub_65147();
        return;
        case 8:
        sub_65176();
        return;
        case 13:
        sub_65205();
        return;
    }
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Not a friend" );
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Should never reach here" );
    return;
}

void sub_65110()
{
    sub_16539( ref l_U196 );
    return;
}

void sub_65147()
{
    sub_16539( ref l_U306 );
    return;
}

void sub_65176()
{
    sub_16539( ref l_U277 );
    return;
}

void sub_65205()
{
    sub_16539( ref l_U315 );
    return;
}

void sub_65763(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_65962(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_56700( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_48724( "FCJ_DRPOFFL", uParam1, 7, 1 );
        return;
        case 8:
        sub_48724( "FCB2_DOFFL", uParam1, 7, 1 );
        return;
    }
    sub_48724( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_66819()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_67411(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (l_U194 == 0)
    {
        if (IS_GROUP_MEMBER( uParam0, sub_17460() ))
        {
            REMOVE_CHAR_FROM_GROUP( uParam0 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            l_U194 = 1;
            return 0;
        }
        SET_PLAYER_CONTROL( sub_2866(), 0 );
        TASK_LEAVE_ANY_CAR( uParam0 );
        l_U194 = 1;
    }
    if (l_U194 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 2, -2, 0.10000000 );
            SETTIMERA( 0 );
            l_U194 = 2;
        }
    }
    if (l_U194 == 2)
    {
        if (TIMERA() > 3000)
        {
            SET_PLAYER_CONTROL( sub_2866(), 1 );
            l_U194 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_67882(int iParam0, unknown uParam1)
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

void sub_68245(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return;
}

void sub_68265()
{
    l_U338 = 1;
    sub_68299( "PASS LEVEL: GOOD" );
    return;
}

void sub_68299(unknown uParam0)
{
    return;
}

void sub_68326(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_68337( uParam0 );
    g_U34181._fU0[uVar4]._fU0[uParam1]++;
    g_U34181._fU0[uVar4]._fU60++;
    sub_68569( uParam1 );
    switch (uParam0)
    {
        case 0:
        sub_12932( 354 );
        INCREMENT_INT_STAT_NO_MESSAGE( 354, 1 );
        break;
        case 3:
        sub_12932( 355 );
        INCREMENT_INT_STAT_NO_MESSAGE( 355, 1 );
        break;
        case 7:
        sub_12932( 357 );
        INCREMENT_INT_STAT_NO_MESSAGE( 357, 1 );
        break;
        case 8:
        sub_12932( 356 );
        INCREMENT_INT_STAT_NO_MESSAGE( 356, 1 );
        break;
        case 13:
        sub_12932( 358 );
        INCREMENT_INT_STAT_NO_MESSAGE( 358, 1 );
        break;
        default: sub_3833( "Friend_Achievement_Activity_Performed: Unknown Friend ID" );
    }
    sub_69389( uParam0, uParam1 );
    return;
}

int sub_68337(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 3: return 1;
        case 7: return 2;
        case 8: return 3;
        case 13: return 4;
    }
    sub_3833( "Convert_Friend_To_Friend_Stats_ID: Unrecognised Friend ID" );
    return 5;
}

void sub_68569(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    char[64] cVar6;

    g_U34181._fU344[iParam0]++;
    g_U34181._fU404++;
    iVar3 = g_U34181._fU408;
    if (iVar3 == iParam0)
    {
        return;
    }
    iVar4 = g_U34181._fU344[iVar3];
    iVar5 = g_U34181._fU344[iParam0];
    if (iVar5 < iVar4)
    {
        return;
    }
    g_U34181._fU408 = iParam0;
    StrCopy( ref cVar6, "", 64 );
    sub_68729( iParam0, ref cVar6 );
    if (CAN_THE_STAT_HAVE_STRING( 662 ))
    {
        sub_12932( 662 );
        REGISTER_STRING_FOR_FRONTEND_STAT( 662, ref cVar6 );
    }
    return;
}

void sub_68729(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 4:
        StrCopy( (uParam1^), "statAct_0", 64 );
        break;
        case 5:
        StrCopy( (uParam1^), "statAct_1", 64 );
        break;
        case 6:
        StrCopy( (uParam1^), "statAct_2", 64 );
        break;
        case 7:
        StrCopy( (uParam1^), "statAct_3", 64 );
        break;
        case 8:
        StrCopy( (uParam1^), "statAct_4", 64 );
        break;
        case 9:
        StrCopy( (uParam1^), "statAct_5", 64 );
        break;
        case 10:
        StrCopy( (uParam1^), "statAct_6", 64 );
        break;
        case 11:
        StrCopy( (uParam1^), "statAct_7", 64 );
        break;
        case 12:
        StrCopy( (uParam1^), "statAct_8", 64 );
        break;
        case 13:
        StrCopy( (uParam1^), "statAct_9", 64 );
        break;
        default: sub_3833( "Friend_Achievement_Fill_Activity_String: Unknown activity" );
    }
    return;
}

void sub_69389(unknown uParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    char[64] cVar8;

    uVar4 = sub_68337( uParam0 );
    iVar5 = g_U34181._fU0[uVar4]._fU64;
    if (iVar5 == iParam1)
    {
        return;
    }
    iVar6 = g_U34181._fU0[uVar4]._fU0[iVar5];
    iVar7 = g_U34181._fU0[uVar4]._fU0[iParam1];
    if (iVar7 < iVar6)
    {
        return;
    }
    g_U34181._fU0[uVar4]._fU64 = iParam1;
    StrCopy( ref cVar8, "", 64 );
    sub_68729( iParam1, ref cVar8 );
    switch (uParam0)
    {
        case 0:
        if (CAN_THE_STAT_HAVE_STRING( 663 ))
        {
            sub_12932( 663 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 663, ref cVar8 );
        }
        break;
        case 3:
        if (CAN_THE_STAT_HAVE_STRING( 664 ))
        {
            sub_12932( 664 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 664, ref cVar8 );
        }
        break;
        case 7:
        if (CAN_THE_STAT_HAVE_STRING( 666 ))
        {
            sub_12932( 666 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 666, ref cVar8 );
        }
        break;
        case 8:
        if (CAN_THE_STAT_HAVE_STRING( 665 ))
        {
            sub_12932( 665 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 665, ref cVar8 );
        }
        break;
        case 13:
        if (CAN_THE_STAT_HAVE_STRING( 667 ))
        {
            sub_12932( 667 );
            REGISTER_STRING_FOR_FRONTEND_STAT( 667, ref cVar8 );
        }
        break;
        default: sub_3833( "Friend_Achievement_Check_For_New_Favourite_Activity_With_Friend: Unknown friend ID" );
    }
    return;
}

int sub_69993(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 0;
    }
    if (NOT l_U108)
    {
        return 0;
    }
    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (NOT l_U123)
    {
        return 0;
    }
    if (IS_GROUP_MEMBER( uParam0, sub_17460() ))
    {
        return 0;
    }
    if (NOT l_U122)
    {
        TASK_LOOK_AT_CHAR( uParam0, sub_2514(), -2, 0 );
        l_U122 = 1;
    }
    GET_CHAR_COORDINATES( sub_2514(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_65763( uVar3, uVar6 );
    if (fVar9 < 12.00000000)
    {
        SET_GROUP_MEMBER( sub_17460(), uParam0 );
        TASK_CLEAR_LOOK_AT( uParam0 );
        l_U122 = 0;
        return 0;
    }
    PRINT_NOW( "FA_2FAR", 500, 1 );
    if (fVar9 < 200.00000000)
    {
        return 0;
    }
    TASK_CLEAR_LOOK_AT( uParam0 );
    return 1;
}

void sub_70314(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown uVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    sub_70336( uParam0 );
    sub_70975();
    if (l_U344._fU0)
    {
        if (sub_57210( l_U141 ))
        {
            return;
        }
        if (IS_PLAYER_PLAYING( sub_2866() ))
        {
            if (IS_AMBIENT_SPEECH_PLAYING( sub_2514() ))
            {
                return;
            }
            STOP_PED_SPEAKING( sub_2514(), 1 );
        }
        l_U344._fU0 = 0;
        l_U344._fU4 = 1;
        l_U344._fU12 = 0;
        l_U344._fU20 = 0;
        l_U344._fU24 = 0;
        l_U344._fU28 = 0;
        return;
    }
    sub_71497( uParam0 );
    if (l_U344._fU4)
    {
        if (sub_72212( uParam0 ))
        {
            l_U344._fU4 = 0;
            if (l_U344._fU8)
            {
                l_U344._fU20 = iVar3 + 10000;
            }
            else if (g_U15654[6])
            {
                l_U344._fU20 = iVar3 + 15000;
            }
            else
            {
                l_U344._fU20 = iVar3 + 5000;
            }
            return;
        }
    }
    if (NOT (l_U344._fU20 == 0))
    {
        if (NOT (sub_72212( uParam0 )))
        {
            l_U344._fU4 = 1;
            l_U344._fU20 = 0;
            return;
        }
        if (iVar3 > l_U344._fU20)
        {
            bVar4 = false;
            if (NOT l_U344._fU8)
            {
                sub_72592( l_U158 );
                sub_2563( 0, sub_2514(), "NIKO", 0 );
                sub_2563( l_U157, uParam0, ref l_U153, 0 );
                if (NOT (sub_73033( l_U158, ref l_U147, l_U344._fU16 )))
                {
                    bVar4 = true;
                }
            }
            else
            {
                sub_77749( l_U158 );
                sub_2563( 0, sub_2514(), "NIKO", 0 );
                sub_2563( l_U157, uParam0, ref l_U153, 0 );
                sub_78151( l_U158, ref l_U147 );
            }
            if (bVar4)
            {
                ;
            }
            l_U344._fU20 = 0;
            l_U344._fU12 = 1;
            g_U22274[l_U158]._fU688._fU28 = -1;
        }
        return;
    }
    if (sub_81575( uParam0 ))
    {
        return;
    }
    if (l_U344._fU12)
    {
        if (g_U22274[l_U158]._fU688._fU24 >= 0)
        {
            bVar5 = false;
            if (NOT l_U344._fU24)
            {
                if (((sub_71100( l_U147 )) > 5) || (sub_70370( ref l_U147 )))
                {
                    bVar5 = true;
                }
            }
            if (bVar5)
            {
                if (g_U15654[6])
                {
                    return;
                }
                l_U344._fU12 = 0;
                uVar6 = g_U22274[l_U158]._fU688._fU24;
                SET_BIT( ref g_U22274[l_U158]._fU688._fU4, uVar6 );
                if (IS_PLAYER_PLAYING( sub_2866() ))
                {
                    STOP_PED_SPEAKING( sub_2514(), 0 );
                }
            }
            return;
        }
    }
    return;
}

void sub_70336(unknown uParam0)
{
    unknown uVar3;

    if (l_U344._fU24)
    {
        l_U397 = 0;
        return;
    }
    if (NOT (sub_70370( ref l_U147 )))
    {
        l_U397 = 0;
        return;
    }
    if (IS_CHAR_DEAD( sub_2514() ))
    {
        l_U397 = 0;
        return;
    }
    if (IS_CHAR_DEAD( uParam0 ))
    {
        l_U397 = 0;
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2514() )))
    {
        l_U397 = 0;
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref uVar3 );
    if (NOT (IS_CHAR_SITTING_IN_CAR( uParam0, uVar3 )))
    {
        l_U397 = 0;
        return;
    }
    if (l_U397)
    {
        if (NOT sub_70560())
        {
            SAY_AMBIENT_SPEECH( sub_2514(), "MESSING_WITH_PHONE", 0, 0, 0 );
            l_U397 = 0;
        }
        return;
    }
    if (sub_70651( l_U158, 1 ))
    {
        l_U397 = 1;
        return;
    }
    return;
}

int sub_70370(int iParam0)
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

int sub_70560()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_70651(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_48898( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_48898( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
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

void sub_70975()
{
    if (l_U400)
    {
        if (sub_70370( ref l_U141 ))
        {
            l_U344._fU48 = 0;
            l_U400 = 0;
            l_U399 = 0;
        }
        return;
    }
    if (NOT l_U399)
    {
        return;
    }
    if (NOT l_U344._fU24)
    {
        l_U344._fU48 = 1;
        sub_71070();
        return;
    }
    if (NOT (sub_70370( ref l_U147 )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_2514() ))
    {
        return;
    }
    if ((NOT (sub_38943( sub_2514() ))) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_2514() )))
    {
        sub_2408( "MF10AUD" );
        sub_2563( 0, sub_2514(), "NIKO", 0 );
        sub_48724( "MF5_DRUNK", ref l_U141, 7, 1 );
        l_U399 = 0;
        l_U400 = 1;
        return;
    }
    l_U400 = 0;
    l_U399 = 0;
    return;
}

void sub_71070()
{
    unknown uVar2;

    if (l_U344._fU24)
    {
        return;
    }
    uVar2 = sub_71100( l_U147 );
    g_U22274[l_U158]._fU688._fU28 = uVar2;
    return;
}

void sub_71100(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_57210( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_71497(unknown uParam0)
{
    sub_71508( uParam0 );
    sub_71683( uParam0 );
    sub_72005( uParam0 );
    return;
}

void sub_71508(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if ((IS_CHAR_DEAD( uParam0 )) || (IS_CHAR_DEAD( sub_2514() )))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_2514(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_65763( uVar3, uVar6 );
    if (l_U344._fU36)
    {
        if (fVar9 < 6.00000000)
        {
            l_U344._fU36 = 0;
        }
        return;
    }
    if (fVar9 < 12.00000000)
    {
        return;
    }
    l_U344._fU36 = 1;
    sub_71070();
    return;
}

void sub_71683(unknown uParam0)
{
    boolean bVar3;
    int iVar4;
    int iVar5;

    if ((IS_CHAR_DEAD( uParam0 )) || (IS_CHAR_DEAD( sub_2514() )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_INJURED( sub_2514() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_INJURED( uParam0 ))
    {
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        iVar4 = 0;
        iVar5 = 0;
        GET_CHAR_HEALTH( sub_2514(), ref iVar4 );
        GET_CHAR_HEALTH( uParam0, ref iVar5 );
        if (l_U344._fU52 == 64537)
        {
            l_U344._fU52 = iVar4;
        }
        if (l_U344._fU56 == 64537)
        {
            l_U344._fU56 = iVar5;
        }
        if (iVar4 < l_U344._fU52)
        {
            bVar3 = true;
        }
        if (iVar5 < l_U344._fU56)
        {
            bVar3 = true;
        }
        l_U344._fU52 = iVar4;
        l_U344._fU56 = iVar5;
    }
    if (l_U344._fU40)
    {
        if (NOT bVar3)
        {
            l_U344._fU40 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    if (l_U344._fU8)
    {
        return;
    }
    l_U344._fU40 = 1;
    sub_71070();
    return;
}

void sub_72005(unknown uParam0)
{
    boolean bVar3;

    if ((IS_CHAR_DEAD( uParam0 )) || (IS_CHAR_DEAD( sub_2514() )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_SHOOTING( sub_2514() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_2514() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_SHOOTING( uParam0 ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_IN_MELEE_COMBAT( uParam0 ))
    {
        bVar3 = true;
    }
    if (l_U344._fU44)
    {
        if (NOT bVar3)
        {
            l_U344._fU44 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    l_U344._fU44 = 1;
    sub_71070();
    return;
}

int sub_72212(unknown uParam0)
{
    unknown uVar3;

    if ((l_U344._fU24) || (sub_72221()))
    {
        return 0;
    }
    if (NOT l_U344._fU8)
    {
        if ((NOT (IS_CHAR_DEAD( uParam0 ))) AND (NOT (IS_CHAR_DEAD( sub_2514() ))))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2514() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2514(), ref uVar3 );
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

int sub_72221()
{
    if ((l_U344._fU48) || ((l_U344._fU44) || ((l_U344._fU40) || ((l_U344._fU36) || (l_U344._fU32)))))
    {
        return 1;
    }
    return 0;
}

void sub_72592(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U15654[6])
        {
            sub_2408( "MF5AUD" );
        }
        else
        {
            sub_2408( "FCRC1AU" );
        }
        return;
        case 3:
        sub_2408( "FCJC1AU" );
        return;
        case 7:
        sub_2408( "FCD3AU" );
        return;
        case 8:
        sub_2408( "FCB3AU" );
        return;
        case 13:
        sub_2408( "FCPC1AU" );
        return;
    }
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Not a friend" );
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Should never reach here" );
    return;
}

int sub_73033(int iParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int I;
    int iVar11;
    boolean bVar12;
    int iVar13;

    if ((g_U15654[6]) AND (iParam0 == 0))
    {
        iVar5 = 0;
        sub_48724( "MF3_DRIVE", uParam1, 5, iVar5 );
        return 1;
    }
    switch (iParam0)
    {
        case 0:
        case 3:
        case 7:
        case 8:
        case 13: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: Unrecognised friend ID" );
        return 0;
    }
    g_U22274[iParam0]._fU688._fU24 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_73355( iParam0 );
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    I = 0;
    if ((uParam2) AND (NOT g_U22274[iParam0]._fU688._fU12))
    {
        iVar7 = g_U22274[iParam0]._fU688._fU0;
        iVar8 = g_U22274[iParam0]._fU688._fU4;
        iVar9 = g_U22274[iParam0]._fU688._fU8;
        I = 0;
        for ( I = 0; I < iVar9; I++ )
        {
            if ((NOT (IS_BIT_SET( iVar8, I ))) AND (IS_BIT_SET( iVar7, I )))
            {
                CLEAR_BIT( ref g_U22274[iParam0]._fU688._fU0, I );
            }
        }
    }
    sub_73847( iParam0 );
    iVar6 = 0;
    iVar7 = g_U22274[iParam0]._fU688._fU0;
    iVar9 = g_U22274[iParam0]._fU688._fU8;
    I = 0;
    for ( I = 0; I < iVar9; I++ )
    {
        if (NOT (IS_BIT_SET( iVar7, I )))
        {
            iVar6++;
        }
    }
    if ((uParam2) AND (iVar6 == 0))
    {
        iVar8 = g_U22274[iParam0]._fU688._fU4;
        for ( I = 0; I < iVar9; I++ )
        {
            if (NOT (IS_BIT_SET( iVar8, I )))
            {
                CLEAR_BIT( ref g_U22274[iParam0]._fU688._fU0, I );
                iVar6++;
            }
        }
    }
    if (iVar6 == 0)
    {
        return 0;
    }
    iVar11 = 0;
    if (g_U22274[iParam0]._fU688._fU12)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar6, ref iVar11 );
    }
    iVar7 = g_U22274[iParam0]._fU688._fU0;
    bVar12 = false;
    for ( I = 0; I < iVar9; I++ )
    {
        if (NOT bVar12)
        {
            if (NOT (IS_BIT_SET( iVar7, I )))
            {
                if (iVar11 == 0)
                {
                    g_U22274[iParam0]._fU688._fU24 = I;
                    SET_BIT( ref g_U22274[iParam0]._fU688._fU0, I );
                    bVar12 = true;
                }
                else
                {
                    iVar11--;
                }
            }
        }
    }
    if (NOT bVar12)
    {
        sub_3833( "FA_Friend_Speech_Generic_Conversations: Tell Keith: something fundamentally wrong with algorithm" );
        return 0;
    }
    PRINTSTRING( "AFTER\n" );
    sub_73355( iParam0 );
    iVar13 = 0;
    switch (iParam0)
    {
        case 0:
        sub_74658( uParam1, iVar13 );
        return 1;
        case 3:
        sub_75394( uParam1, iVar13 );
        return 1;
        case 7:
        sub_75960( uParam1, iVar13 );
        return 1;
        case 8:
        sub_76472( uParam1, iVar13 );
        return 1;
        case 13:
        sub_77031( uParam1, iVar13 );
        return 1;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: must have forgotten to update friend ID when added speech" );
    return 0;
}

void sub_73355(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int I;

    uVar3 = g_U22274[uParam0]._fU688._fU0;
    uVar4 = g_U22274[uParam0]._fU688._fU4;
    iVar5 = g_U22274[uParam0]._fU688._fU8;
    iVar6 = iVar5 + g_U22274[uParam0]._fU688._fU16;
    I = 0;
    for ( I = 0; I < iVar6; I++ )
    {
        if (I == iVar5)
        {
            PRINTSTRING( " " );
        }
        if (IS_BIT_SET( uVar3, I ))
        {
            PRINTSTRING( "1" );
        }
        else
        {
            PRINTSTRING( "0" );
        }
    }
    PRINTNL();
    for ( I = 0; I < iVar6; I++ )
    {
        if (I == iVar5)
        {
            PRINTSTRING( " " );
        }
        if (IS_BIT_SET( uVar4, I ))
        {
            PRINTSTRING( "1" );
        }
        else
        {
            PRINTSTRING( "0" );
        }
    }
    PRINTNL();
    PRINTNL();
    return;
}

void sub_73847(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        if (g_U15654[11])
        {
            iVar3 = 1;
            SET_BIT( ref g_U22274[uParam0]._fU688._fU0, iVar3 );
            SET_BIT( ref g_U22274[uParam0]._fU688._fU4, iVar3 );
        }
        break;
        case 13:
        if ((NOT g_U15654[12]) AND (g_U15654[52]))
        {
            iVar3 = 9;
            SET_BIT( ref g_U22274[uParam0]._fU688._fU0, iVar3 );
            SET_BIT( ref g_U22274[uParam0]._fU688._fU4, iVar3 );
        }
        break;
    }
    return;
}

void sub_74658(unknown uParam0, boolean bParam1)
{
    char[60] cVar4;
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
    int iVar61;
    int iVar62;
    int iVar63;
    int iVar64;

    if (NOT (14 == g_U22274[0]._fU688._fU8))
    {
        sub_3833( "FA_Roman_Speech_Generic_Conversations: inconsistent number of Roman conversations - see Roman Flow" );
        return;
    }
    array(ref cVar4, 14);
    StrCopy( ref cVar4[0], "FCR3_REV", 16 );
    StrCopy( ref cVar4[1], "FCR3_CONV2", 16 );
    StrCopy( ref cVar4[2], "FCR3_OPTIM", 16 );
    StrCopy( ref cVar4[3], "FCR3_CONV4", 16 );
    StrCopy( ref cVar4[4], "FCR3_USA", 16 );
    StrCopy( ref cVar4[5], "FCR3_CONV6", 16 );
    StrCopy( ref cVar4[6], "FCR3_RELA", 16 );
    StrCopy( ref cVar4[7], "FCR3_CONV8", 16 );
    StrCopy( ref cVar4[8], "FCR3_GAMBLE", 16 );
    StrCopy( ref cVar4[9], "FCR3_CONV10", 16 );
    StrCopy( ref cVar4[10], "FCR3_MUM", 16 );
    StrCopy( ref cVar4[11], "FCR3_CONV12", 16 );
    StrCopy( ref cVar4[12], "FCR3_MAKE", 16 );
    StrCopy( ref cVar4[13], "FCR3_CONV14", 16 );
    iVar61 = 0;
    iVar62 = g_U22274[0]._fU688._fU24;
    iVar63 = g_U22274[0]._fU688._fU28;
    if (iVar62 >= 8)
    {
        sub_75136( "FCRC2AU" );
    }
    if (iVar62 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar63 == -1))
        {
            iVar64 = 0;
            sub_75247( ref cVar4[iVar62], iVar63, iVar64, uParam0, 5, iVar61 );
        }
        return;
    }
    sub_48724( ref cVar4[iVar62], uParam0, 5, iVar61 );
    return;
}

int sub_75136(unknown uParam0)
{
    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        StrCopy( ref l_U4._fU0, uParam0, 16 );
        return 1;
    }
    return 0;
}

void sub_75247(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_75272( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_75272(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_48799( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_75394(unknown uParam0, boolean bParam1)
{
    char[60] cVar4;
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
    int iVar61;
    int iVar62;
    int iVar63;
    int iVar64;

    if (NOT (14 == g_U22274[3]._fU688._fU8))
    {
        sub_3833( "FA_Jacob_Speech_Generic_Conversations: inconsistent number of Jacob conversations - see Jacob Flow" );
        return;
    }
    array(ref cVar4, 14);
    StrCopy( ref cVar4[0], "FCJ_JC1", 16 );
    StrCopy( ref cVar4[1], "FCJ_JC2", 16 );
    StrCopy( ref cVar4[2], "FCJ_JC3", 16 );
    StrCopy( ref cVar4[3], "FCJ_JC4", 16 );
    StrCopy( ref cVar4[4], "FCJ_JC5", 16 );
    StrCopy( ref cVar4[5], "FCJ_JC6", 16 );
    StrCopy( ref cVar4[6], "FCJ_JC7", 16 );
    StrCopy( ref cVar4[7], "FCJ_JC8", 16 );
    StrCopy( ref cVar4[8], "FCJ_JC9", 16 );
    StrCopy( ref cVar4[9], "FCJ_JC10", 16 );
    StrCopy( ref cVar4[10], "FCJ_JC11", 16 );
    StrCopy( ref cVar4[11], "FCJ_JC12", 16 );
    StrCopy( ref cVar4[12], "FCJ_JC13", 16 );
    StrCopy( ref cVar4[13], "FCJ_JC14", 16 );
    iVar61 = 0;
    iVar62 = g_U22274[3]._fU688._fU24;
    iVar63 = g_U22274[3]._fU688._fU28;
    if (iVar62 >= 8)
    {
        sub_75136( "FCJC2AU" );
    }
    if (iVar62 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar63 == -1))
        {
            iVar64 = 0;
            sub_75247( ref cVar4[iVar62], iVar63, iVar64, uParam0, 5, iVar61 );
        }
        return;
    }
    sub_48724( ref cVar4[iVar62], uParam0, 5, iVar61 );
    return;
}

void sub_75960(unknown uParam0, boolean bParam1)
{
    char[48] cVar4;
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
    int iVar49;
    int iVar50;
    int iVar51;
    int iVar52;

    if (NOT (11 == g_U22274[7]._fU688._fU8))
    {
        sub_3833( "FA_Dwayne_Speech_Generic_Conversations: inconsistent number of Dwayne conversations - see Dwayne Flow" );
        return;
    }
    array(ref cVar4, 11);
    StrCopy( ref cVar4[0], "FCD3_GEN1", 16 );
    StrCopy( ref cVar4[1], "FCD3_GEN2", 16 );
    StrCopy( ref cVar4[2], "FCD3_GEN3", 16 );
    StrCopy( ref cVar4[3], "FCD3_GEN4", 16 );
    StrCopy( ref cVar4[4], "FCD3_GEN5", 16 );
    StrCopy( ref cVar4[5], "FCD3_GEN6", 16 );
    StrCopy( ref cVar4[6], "FCD3_GEN7", 16 );
    StrCopy( ref cVar4[7], "FCD3_GEN8", 16 );
    StrCopy( ref cVar4[8], "FCD3_GEN9", 16 );
    StrCopy( ref cVar4[9], "FCD3_GEN10", 16 );
    StrCopy( ref cVar4[10], "FCD3_GEN11", 16 );
    iVar49 = 0;
    iVar50 = g_U22274[7]._fU688._fU24;
    iVar51 = g_U22274[7]._fU688._fU28;
    if (iVar50 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar51 == -1))
        {
            iVar52 = 0;
            sub_75247( ref cVar4[iVar50], iVar51, iVar52, uParam0, 5, iVar49 );
        }
        return;
    }
    sub_48724( ref cVar4[iVar50], uParam0, 5, iVar49 );
    return;
}

void sub_76472(unknown uParam0, boolean bParam1)
{
    char[52] cVar4;
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
    int iVar53;
    int iVar54;
    int iVar55;
    int iVar56;

    if (NOT (12 == g_U22274[8]._fU688._fU8))
    {
        sub_3833( "FA_Brucie_Speech_Generic_Conversations: inconsistent number of Brucie conversations - see Brucie Flow" );
        return;
    }
    array(ref cVar4, 12);
    StrCopy( ref cVar4[0], "FCB3_GEN1", 16 );
    StrCopy( ref cVar4[1], "FCB3_GEN2", 16 );
    StrCopy( ref cVar4[2], "FCB3_GEN3", 16 );
    StrCopy( ref cVar4[3], "FCB3_GEN4", 16 );
    StrCopy( ref cVar4[4], "FCB3_GEN5", 16 );
    StrCopy( ref cVar4[5], "FCB3_GEN6", 16 );
    StrCopy( ref cVar4[6], "FCB3_GEN7", 16 );
    StrCopy( ref cVar4[7], "FCB3_GEN8", 16 );
    StrCopy( ref cVar4[8], "FCB3_GEN9", 16 );
    StrCopy( ref cVar4[9], "FCB3_GEN10", 16 );
    StrCopy( ref cVar4[10], "FCB3_GEN11", 16 );
    StrCopy( ref cVar4[11], "FCB3_GEN12", 16 );
    iVar53 = 0;
    iVar54 = g_U22274[8]._fU688._fU24;
    iVar55 = g_U22274[8]._fU688._fU28;
    if (iVar54 >= 10)
    {
        sub_75136( "FCB4AUD" );
    }
    if (iVar54 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar55 == -1))
        {
            iVar56 = 0;
            sub_75247( ref cVar4[iVar54], iVar55, iVar56, uParam0, 5, iVar53 );
        }
        return;
    }
    sub_48724( ref cVar4[iVar54], uParam0, 5, iVar53 );
    return;
}

void sub_77031(unknown uParam0, boolean bParam1)
{
    char[56] cVar4;
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
    int iVar57;
    int iVar58;
    int iVar59;
    int iVar60;

    if (NOT (13 == g_U22274[13]._fU688._fU8))
    {
        sub_3833( "FA_Packie_Speech_Generic_Conversations: inconsistent number of Packie conversations - see Packie Flow" );
        return;
    }
    array(ref cVar4, 13);
    StrCopy( ref cVar4[0], "FCPC1_SEX", 16 );
    StrCopy( ref cVar4[1], "FCPC1_FAM", 16 );
    StrCopy( ref cVar4[2], "FCPC1_MOM", 16 );
    StrCopy( ref cVar4[3], "FCPC1_PRST", 16 );
    StrCopy( ref cVar4[4], "FCPC1_DERRK", 16 );
    StrCopy( ref cVar4[5], "FCPC1_GRASS", 16 );
    StrCopy( ref cVar4[6], "FCPC1_GERRY", 16 );
    StrCopy( ref cVar4[7], "FCPC1_BLOOD", 16 );
    StrCopy( ref cVar4[8], "FCPC2_NIKO", 16 );
    StrCopy( ref cVar4[9], "FCPC2_KATE", 16 );
    StrCopy( ref cVar4[10], "FCPC2_SHAME", 16 );
    StrCopy( ref cVar4[11], "FCPC2_SCHOL", 16 );
    StrCopy( ref cVar4[12], "FCPC2_PA", 16 );
    iVar57 = 0;
    iVar58 = g_U22274[13]._fU688._fU24;
    iVar59 = g_U22274[13]._fU688._fU28;
    if (iVar58 >= 8)
    {
        sub_75136( "FCPC2AU" );
    }
    if (iVar58 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar59 == -1))
        {
            iVar60 = 0;
            sub_75247( ref cVar4[iVar58], iVar59, iVar60, uParam0, 5, iVar57 );
        }
        return;
    }
    sub_48724( ref cVar4[iVar58], uParam0, 5, iVar57 );
    return;
}

void sub_77749(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_2408( "FCRDCAU" );
        return;
        case 3:
        sub_2408( "FCJDCAU" );
        return;
        case 7:
        sub_2408( "FCDDAU" );
        return;
        case 8:
        sub_2408( "FCBDAU" );
        return;
        case 13:
        sub_2408( "FCPDCAU" );
        return;
    }
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Not a friend" );
    sub_3833( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Should never reach here" );
    return;
}

void sub_78151(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int I;
    int iVar10;
    boolean bVar11;
    int iVar12;

    PRINTSTRING( "DRUNK TALK..........................FA_Friend_Speech_Drunken_Conversations\n" );
    switch (uParam0)
    {
        case 0:
        case 3:
        case 7:
        case 8:
        case 13: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Drunken_Conversations: Unrecognised friend ID" );
        return;
    }
    g_U22274[uParam0]._fU688._fU24 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_73355( uParam0 );
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    I = 0;
    if (NOT g_U22274[uParam0]._fU688._fU20)
    {
        iVar5 = g_U22274[uParam0]._fU688._fU0;
        iVar6 = g_U22274[uParam0]._fU688._fU4;
        iVar7 = g_U22274[uParam0]._fU688._fU8;
        iVar8 = (g_U22274[uParam0]._fU688._fU16 + iVar7) - 1;
        I = 0;
        for ( I = iVar7; I <= iVar8; I++ )
        {
            if ((NOT (IS_BIT_SET( iVar6, I ))) AND (IS_BIT_SET( iVar5, I )))
            {
                CLEAR_BIT( ref g_U22274[uParam0]._fU688._fU0, I );
            }
        }
    }
    iVar4 = 0;
    iVar5 = g_U22274[uParam0]._fU688._fU0;
    iVar7 = g_U22274[uParam0]._fU688._fU8;
    iVar8 = (g_U22274[uParam0]._fU688._fU16 + iVar7) - 1;
    I = 0;
    for ( I = iVar7; I <= iVar8; I++ )
    {
        if (NOT (IS_BIT_SET( iVar5, I )))
        {
            iVar4++;
        }
    }
    if (iVar4 == 0)
    {
        iVar6 = g_U22274[uParam0]._fU688._fU4;
        for ( I = iVar7; I <= iVar8; I++ )
        {
            if (NOT (IS_BIT_SET( iVar6, I )))
            {
                CLEAR_BIT( ref g_U22274[uParam0]._fU688._fU0, I );
                iVar4++;
            }
        }
    }
    if (iVar4 == 0)
    {
        return;
    }
    iVar10 = 0;
    if (g_U22274[uParam0]._fU688._fU20)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar4, ref iVar10 );
    }
    iVar5 = g_U22274[uParam0]._fU688._fU0;
    bVar11 = false;
    for ( I = iVar7; I <= iVar8; I++ )
    {
        if (NOT bVar11)
        {
            if (NOT (IS_BIT_SET( iVar5, I )))
            {
                if (iVar10 == 0)
                {
                    g_U22274[uParam0]._fU688._fU24 = I;
                    SET_BIT( ref g_U22274[uParam0]._fU688._fU0, I );
                    bVar11 = true;
                }
                else
                {
                    iVar10--;
                }
            }
        }
    }
    if (NOT bVar11)
    {
        sub_3833( "FA_Friend_Speech_Drunken_Conversations: Tell Keith: something fundamentally wrong with algorithm" );
        return;
    }
    PRINTSTRING( "AFTER\n" );
    sub_73355( uParam0 );
    iVar12 = 0;
    switch (uParam0)
    {
        case 0:
        sub_79362( uParam1, iVar12 );
        return;
        case 3:
        sub_79772( uParam1, iVar12 );
        return;
        case 7:
        sub_80151( uParam1, iVar12 );
        return;
        case 8:
        sub_80581( uParam1, iVar12 );
        return;
        case 13:
        sub_80974( uParam1, iVar12 );
        return;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Drunken_Conversations: must have forgotten to update friend ID when added speech" );
    return;
}

void sub_79362(unknown uParam0, boolean bParam1)
{
    char[24] cVar4;
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
    int iVar25;
    int iVar26;
    int iVar27;
    int iVar28;

    if (NOT (5 == g_U22274[0]._fU688._fU16))
    {
        sub_3833( "FA_Roman_Speech_Drunken_Conversations: inconsistent number of Roman drunken conversations - see Roman Flow" );
        return;
    }
    array(ref cVar4, 5);
    StrCopy( ref cVar4[0], "FCR3_DRNK1", 16 );
    StrCopy( ref cVar4[1], "FCR3_DRNK2", 16 );
    StrCopy( ref cVar4[2], "FCR3_DRNK3", 16 );
    StrCopy( ref cVar4[3], "FCR3_DRNK4", 16 );
    StrCopy( ref cVar4[4], "FCR3_DRNK5", 16 );
    iVar25 = g_U22274[0]._fU688._fU24;
    iVar25 -= g_U22274[0]._fU688._fU8;
    if (iVar25 == -1)
    {
        return;
    }
    iVar26 = 0;
    iVar27 = g_U22274[0]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar27 == -1))
        {
            iVar28 = 0;
            sub_75247( ref cVar4[iVar25], iVar27, iVar28, uParam0, 5, iVar26 );
        }
        return;
    }
    sub_48724( ref cVar4[iVar25], uParam0, 5, iVar26 );
    return;
}

void sub_79772(unknown uParam0, boolean bParam1)
{
    char[20] cVar4;
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
    int iVar21;
    int iVar22;
    int iVar23;
    int iVar24;

    if (NOT (4 == g_U22274[3]._fU688._fU16))
    {
        sub_3833( "FA_Jacob_Speech_Drunken_Conversations: inconsistent number of Jacob drunken conversations - see Jacob Flow" );
        return;
    }
    array(ref cVar4, 4);
    StrCopy( ref cVar4[0], "FCJ_DC1", 16 );
    StrCopy( ref cVar4[1], "FCJ_DC2", 16 );
    StrCopy( ref cVar4[2], "FCJ_DC3", 16 );
    StrCopy( ref cVar4[3], "FCJ_DC4", 16 );
    iVar21 = g_U22274[3]._fU688._fU24;
    iVar21 -= g_U22274[3]._fU688._fU8;
    if (iVar21 == -1)
    {
        return;
    }
    iVar22 = 0;
    iVar23 = g_U22274[3]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar23 == -1))
        {
            iVar24 = 0;
            sub_75247( ref cVar4[iVar21], iVar23, iVar24, uParam0, 5, iVar22 );
        }
        return;
    }
    sub_48724( ref cVar4[iVar21], uParam0, 5, iVar22 );
    return;
}

void sub_80151(unknown uParam0, boolean bParam1)
{
    char[28] cVar4;
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
    int iVar29;
    int iVar30;
    int iVar31;
    int iVar32;

    if (NOT (6 == g_U22274[7]._fU688._fU16))
    {
        sub_3833( "FA_Dwayne_Speech_Drunken_Conversations: inconsistent number of Dwayne drunken conversations - see Dwayne Flow" );
        return;
    }
    array(ref cVar4, 6);
    StrCopy( ref cVar4[0], "FCDD_LDG1", 16 );
    StrCopy( ref cVar4[1], "FCDD_LDG2", 16 );
    StrCopy( ref cVar4[2], "FCDD_LDG3", 16 );
    StrCopy( ref cVar4[3], "FCDD_LDG4", 16 );
    StrCopy( ref cVar4[4], "FCDD_LDG5", 16 );
    StrCopy( ref cVar4[5], "FCDD_LGD6", 16 );
    iVar29 = g_U22274[7]._fU688._fU24;
    iVar29 -= g_U22274[7]._fU688._fU8;
    if (iVar29 == -1)
    {
        return;
    }
    iVar30 = 0;
    iVar31 = g_U22274[7]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar31 == -1))
        {
            iVar32 = 0;
            sub_75247( ref cVar4[iVar29], iVar31, iVar32, uParam0, 5, iVar30 );
        }
        return;
    }
    sub_48724( ref cVar4[iVar29], uParam0, 5, iVar30 );
    return;
}

void sub_80581(unknown uParam0, boolean bParam1)
{
    char[20] cVar4;
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
    int iVar21;
    int iVar22;
    int iVar23;
    int iVar24;

    if (NOT (4 == g_U22274[8]._fU688._fU16))
    {
        sub_3833( "FA_Brucie_Speech_Drunken_Conversations: inconsistent number of Brucie drunken conversations - see Brucie Flow" );
        return;
    }
    array(ref cVar4, 4);
    StrCopy( ref cVar4[0], "FCBD_FUN", 16 );
    StrCopy( ref cVar4[1], "FCBD_CHAMP", 16 );
    StrCopy( ref cVar4[2], "FCBD_CARDIO", 16 );
    StrCopy( ref cVar4[3], "FCBD_WOMEN", 16 );
    iVar21 = g_U22274[8]._fU688._fU24;
    iVar21 -= g_U22274[8]._fU688._fU8;
    if (iVar21 == -1)
    {
        return;
    }
    iVar22 = 0;
    iVar23 = g_U22274[8]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar23 == -1))
        {
            iVar24 = 0;
            sub_75247( ref cVar4[iVar21], iVar23, iVar24, uParam0, 5, iVar22 );
        }
        return;
    }
    sub_48724( ref cVar4[iVar21], uParam0, 5, iVar22 );
    return;
}

void sub_80974(unknown uParam0, boolean bParam1)
{
    char[28] cVar4;
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
    int iVar29;
    int iVar30;
    int iVar31;
    int iVar32;

    if (NOT (6 == g_U22274[13]._fU688._fU16))
    {
        sub_3833( "FA_Packie_Speech_Drunken_Conversations: inconsistent number of Packie drunken conversations - see Packie Flow" );
        return;
    }
    array(ref cVar4, 6);
    StrCopy( ref cVar4[0], "FCP2_DRUNK1", 16 );
    StrCopy( ref cVar4[1], "FCP2_DRUNK2", 16 );
    StrCopy( ref cVar4[2], "FCP2_DRUNK3", 16 );
    StrCopy( ref cVar4[3], "FCP2_DRUNK4", 16 );
    StrCopy( ref cVar4[4], "FCP2_DRUNK5", 16 );
    StrCopy( ref cVar4[5], "FCP2_DRUNK6", 16 );
    iVar29 = g_U22274[13]._fU688._fU24;
    iVar29 -= g_U22274[13]._fU688._fU8;
    if (iVar29 == -1)
    {
        return;
    }
    iVar30 = 0;
    iVar31 = g_U22274[13]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar31 == -1))
        {
            iVar32 = 0;
            sub_75247( ref cVar4[iVar29], iVar31, iVar32, uParam0, 5, iVar30 );
        }
        return;
    }
    sub_48724( ref cVar4[iVar29], uParam0, 5, iVar30 );
    return;
}

int sub_81575(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if ((IS_CHAR_DEAD( sub_2514() )) || (IS_CHAR_DEAD( uParam0 )))
    {
        return l_U344._fU24;
    }
    if (l_U344._fU24)
    {
        if (NOT sub_72221())
        {
            if (g_U22274[l_U158]._fU688._fU28 == -1)
            {
                l_U344._fU24 = 0;
                return 0;
            }
            iVar3 = 0;
            GET_GAME_TIMER( ref iVar3 );
            if (l_U344._fU28 == 0)
            {
                l_U344._fU28 = iVar3 + 3000;
            }
            if (sub_81721())
            {
                l_U344._fU28 = 0;
            }
            if ((iVar3 > l_U344._fU28) AND (NOT (l_U344._fU28 == 0)))
            {
                l_U344._fU28 = 0;
                if (l_U344._fU8)
                {
                    sub_77749( l_U158 );
                    sub_2563( 0, sub_2514(), "NIKO", 0 );
                    sub_2563( l_U157, uParam0, ref l_U153, 0 );
                    sub_81859( l_U158, ref l_U147 );
                }
                else
                {
                    sub_72592( l_U158 );
                    sub_2563( 0, sub_2514(), "NIKO", 0 );
                    sub_2563( l_U157, uParam0, ref l_U153, 0 );
                    sub_82058( l_U158, ref l_U147 );
                }
                l_U344._fU24 = 0;
                return 0;
            }
            return 1;
        }
        l_U344._fU28 = 0;
        return 1;
    }
    if (sub_72221())
    {
        if (sub_57210( l_U147 ))
        {
            iVar4 = 0;
            sub_67882( ref l_U147, iVar4 );
        }
        l_U344._fU24 = 1;
        l_U344._fU28 = 0;
        return 1;
    }
    return 0;
}

void sub_81721()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_81859(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 0:
        sub_79362( uParam1, iVar4 );
        break;
        case 3:
        sub_79772( uParam1, iVar4 );
        break;
        case 7:
        sub_80151( uParam1, iVar4 );
        break;
        case 8:
        sub_80581( uParam1, iVar4 );
        break;
        case 13:
        sub_80974( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_82058(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 0:
        sub_74658( uParam1, iVar4 );
        break;
        case 3:
        sub_75394( uParam1, iVar4 );
        break;
        case 7:
        sub_75960( uParam1, iVar4 );
        break;
        case 8:
        sub_76472( uParam1, iVar4 );
        break;
        case 13:
        sub_77031( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_82594()
{
    return;
}

