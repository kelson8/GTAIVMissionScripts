void main()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

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
    l_U490 = -1;
    PRINTSTRING( "+++++++ STARTED PLACEHOLDER MISSION (strand " );
    PRINTINT( l_U491 + 1 );
    PRINTSTRING( ")\n" );
    SET_MISSION_FLAG( 1 );
    l_U490 = l_U491;
    GET_GAME_TIMER( ref iVar2 );
    iVar5 = 1000;
    WAIT( 1000 );
    DO_SCREEN_FADE_IN( 500 );
    if (IS_PLAYER_PLAYING( sub_210() ))
    {
        SET_PLAYER_CONTROL( sub_210(), 1 );
    }
    while (true)
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar3 );
        iVar4 = iVar3 - iVar2;
        if (iVar4 >= iVar5)
        {
            PRINTSTRING( "PLACEHOLDER (strand " );
            PRINTINT( l_U490 + 1 );
            PRINTSTRING( ") MISSION RUNNING (" );
            PRINTINT( iVar4 );
            PRINTSTRING( ") - 'S' to Skip/Pass - 'F' to Fail\n" );
            iVar5 += 1000;
            PRINT_NOW( "PH_HELP", 1500, 1 );
        }
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            sub_474();
        }
        if (IS_KEYBOARD_KEY_PRESSED( 33 ))
        {
            sub_15652();
        }
    }
    return;
}

void sub_210()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_474()
{
    PRINTSTRING( "+++++++ PLACEHOLDER COMPLETE (strand " );
    PRINTINT( l_U490 + 1 );
    PRINTSTRING( ")\n" );
    switch (l_U490)
    {
        case 0:
        sub_752();
        break;
        case 1:
        sub_13657();
        break;
        case 2:
        sub_13744();
        break;
        case 3:
        sub_13828();
        break;
        case 4:
        sub_13914();
        break;
        case 5:
        sub_14001();
        break;
        case 6:
        sub_14088();
        break;
        case 7:
        sub_14176();
        break;
        case 8:
        sub_14262();
        break;
        case 9:
        sub_14348();
        break;
        case 10:
        sub_14436();
        break;
        case 11:
        sub_14521();
        break;
        case 12:
        sub_14609();
        break;
        case 13:
        sub_14697();
        break;
        case 14:
        sub_14784();
        break;
        case 15:
        sub_14872();
        break;
        case 16:
        sub_14960();
        break;
        case 17:
        sub_15048();
        break;
        case 18:
        sub_15133();
        break;
        case 19:
        sub_15221();
        break;
        case 20:
        sub_15309();
        break;
        case 21:
        sub_15397();
        break;
        case 22:
        sub_15485();
        break;
        default: sub_1607( "Placeholder: Unknown strand" );
    }
    sub_15605();
    return;
}

void sub_752()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_829( iVar2, iVar3, iVar4 );
    return;
}

void sub_770()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_829(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_860(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_956( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_956( ref cVar9 );
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
            sub_956( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_956( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_956( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_956( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_1533( iParam0, iVar7 );;;
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
                sub_1951( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_1951( 0, 4 );
            }
        }
    }
    if (NOT (sub_2040( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_210(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_210() );
    }
    sub_11272();
    bVar27 = true;
    uVar28 = sub_1533( iParam0, iVar7 );
    uVar29 = sub_11914( iParam0 );
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
                sub_12445( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_12875();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_12960( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_13017( iParam0 );
                sub_13152( 0 );
                sub_13233( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_13338();
        }
    }
    if (bParam2)
    {
        sub_12875();
        sub_13426();
        sub_13152( 0 );
    }
    if (bParam3)
    {
        sub_12875();
        sub_13466();
        sub_13152( 0 );
        sub_13233( uVar29, 0 );
    }
    sub_13517();
    return;
}

void sub_956(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_1533(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1607( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_1607(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1951(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_2040(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_2248( uParam1 );
        break;
        case 1:
        bVar8 = sub_4326( uParam1 );
        break;
        case 2:
        bVar8 = sub_4552( uParam1 );
        break;
        case 3:
        bVar8 = sub_4702( uParam1 );
        break;
        case 4:
        bVar8 = sub_4980( uParam1 );
        break;
        case 5:
        bVar8 = sub_5283( uParam1 );
        break;
        case 6:
        bVar8 = sub_5482( uParam1 );
        break;
        case 7:
        bVar8 = sub_5708( uParam1 );
        break;
        case 8:
        bVar8 = sub_5943( uParam1 );
        break;
        case 9:
        bVar8 = sub_6318( uParam1 );
        break;
        case 10:
        bVar8 = sub_6565( uParam1 );
        break;
        case 11:
        bVar8 = sub_6704( uParam1 );
        break;
        case 12:
        bVar8 = sub_7003( uParam1 );
        break;
        case 13:
        bVar8 = sub_7231( uParam1 );
        break;
        case 14:
        bVar8 = sub_7518( uParam1 );
        break;
        case 15:
        bVar8 = sub_7800( uParam1 );
        break;
        case 16:
        bVar8 = sub_8082( uParam1 );
        break;
        case 17:
        bVar8 = sub_8283( uParam1 );
        break;
        case 18:
        bVar8 = sub_8356( uParam1 );
        break;
        case 19:
        bVar8 = sub_8570( uParam1 );
        break;
        case 20:
        bVar8 = sub_8823( uParam1 );
        break;
        case 21:
        bVar8 = sub_9070( uParam1 );
        break;
        case 22:
        bVar8 = sub_9271( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_3931( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_1533( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_9594( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_2248(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_2527( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_2527( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_2527( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_2527( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_2527( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_2527( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_2527( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_2527( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_2527( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_2527( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_2527( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_2527( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_2527( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_2527( iVar3, 0, 3, 1, 0, 0 );
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
        sub_2527( iVar3, 0, sub_3809(), sub_4075(), 0, 0 );
        break;
        default:
        sub_4234( "Friend 1", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Friend 1", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_2527(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_2538( uParam1 );
    sub_2712( uParam0, 0, uParam2 );
    sub_2712( uParam0, 1, uParam3 );
    sub_2712( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_770();
    return;
}

void sub_2538(unknown uParam0)
{
    ADD_SCORE( sub_210(), uParam0 );
    sub_2563( uParam0 );
    return;
}

void sub_2563(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1607( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_2712(unknown uParam0, int iParam1, int iParam2)
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
        sub_2869( uParam0 );
    }
    return;
}

void sub_2869(unknown uParam0)
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

int sub_3809()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_3931( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_3931(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_4075()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_3931( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_4234(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_4326(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2527( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_4234( "Contact 2", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 2", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_4552(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_2527( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_4234( "Girl 3", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Girl 3", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_4702(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_2527( iVar3, 0, sub_3809(), sub_4075(), 0, 0 );
        break;
        default:
        sub_4234( "Friend 4", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Friend 4", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_4980(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2527( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2527( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_2527( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_2527( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_4234( "Contact 5", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 5", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5283(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_4234( "Contact 7", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 7", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5482(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2527( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_4234( "Contact 7b", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 7b", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5708(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_2527( iVar3, 0, sub_3809(), sub_4075(), 0, 0 );
        break;
        default:
        sub_4234( "Friend 8", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Friend 8", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5943(unknown uParam0)
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
        sub_2527( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_2527( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_2527( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_2527( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_2527( iVar3, 0, sub_3809(), sub_4075(), 0, 0 );
        break;
        default:
        sub_4234( "Friend 9", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Friend 9", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6318(unknown uParam0)
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
        sub_2527( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_2527( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_2527( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_4234( "Contact 10", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_4234( "Contact 10", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6565(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_4234( "Girl 11", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Girl 11", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6704(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2527( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2527( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_2527( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_2527( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_2527( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_4234( "Contact 12", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 12", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7003(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2527( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_4234( "Contact 13", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 13", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7231(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_2527( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_2527( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_2527( iVar3, 0, sub_3809(), sub_4075(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_4234( "Friend 15", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Friend 15", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7518(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2527( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2527( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_2527( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_4234( "Contact 16", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 16", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7800(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2527( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_2527( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_2527( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_4234( "Contact 18", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 18", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8082(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_4234( "Contact 19", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 19", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8283(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_4234( "Girl 20", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8356(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_4234( "Contact 21", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 21", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8570(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2527( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2527( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_4234( "Contact 22", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 22", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8823(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_2527( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2527( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_2527( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_4234( "Contact 24", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 24", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9070(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2527( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2527( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2527( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_4234( "Contact 25", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_4234( "Contact 25", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9271(unknown uParam0)
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
        sub_2527( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_4234( "Girl 26", 1 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_4234( "Girl 26", 0 );
        sub_2527( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_9594(int iParam0, int iParam1)
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
    if (sub_9642( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_10373( iParam1 );
    }
    return;
}

int sub_9642(int iParam0, int iParam1)
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
            sub_9782( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_9782(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_9964( 0 );
    return;
}

void sub_9964(boolean bParam0)
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
        sub_10219();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_10219()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_10373(int iParam0)
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
        sub_10706( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_10706( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_10706( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_10706( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_10706( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_10706( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_10706( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_10706( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_10706( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_10706( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_10706( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_10706( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_10706( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_10706( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_10706( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_10706( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_10706( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_10706( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_10706( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_10706(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_11272()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_11310( 5, g_U569[I] )) == 1))
        {
            if ((sub_11310( 1, g_U569[I] )) != 0)
            {
                sub_11596( I );
            }
        }
    }
    if (NOT sub_11762())
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

int sub_11310(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_11596(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_11681( g_U569 - 1 );
    return;
}

void sub_11681(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_11762()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_11310( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_11914(unknown uParam0)
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
    sub_1607( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_12445(unknown uParam0, unknown uParam1)
{
    sub_12464( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_12464(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_12875()
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

int sub_12960(int iParam0, int iParam1)
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

void sub_13017(unknown uParam0)
{
    sub_13026();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_13026()
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

void sub_13152(unknown uParam0)
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

void sub_13233(int iParam0, boolean bParam1)
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

void sub_13338()
{
    sub_13347();
    return;
}

void sub_13347()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_13426()
{
    sub_13347();
    return;
}

void sub_13466()
{
    sub_13347();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_13517()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_13539();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_13539()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_13657()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_13686( iVar2, iVar3, iVar4 );
    return;
}

void sub_13686(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 1;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_2" );
    return;
}

void sub_13744()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_13773( iVar2, iVar3, iVar4 );
    return;
}

void sub_13773(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 2;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Girl_3" );
    return;
}

void sub_13828()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_13857( iVar2, iVar3, iVar4 );
    return;
}

void sub_13857(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 3;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Friend_4" );
    return;
}

void sub_13914()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_13943( iVar2, iVar3, iVar4 );
    return;
}

void sub_13943(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 4;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_5" );
    return;
}

void sub_14001()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_14030( iVar2, iVar3, iVar4 );
    return;
}

void sub_14030(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 5;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_7" );
    return;
}

void sub_14088()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_14117( iVar2, iVar3, iVar4 );
    return;
}

void sub_14117(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 6;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_7b" );
    return;
}

void sub_14176()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_14205( iVar2, iVar3, iVar4 );
    return;
}

void sub_14205(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 7;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Friend_8" );
    return;
}

void sub_14262()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_14291( iVar2, iVar3, iVar4 );
    return;
}

void sub_14291(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 8;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Friend_9" );
    return;
}

void sub_14348()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_14377( iVar2, iVar3, iVar4 );
    return;
}

void sub_14377(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 9;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_10" );
    return;
}

void sub_14436()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_14465( iVar2, iVar3, iVar4 );
    return;
}

void sub_14465(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 10;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Girl_11" );
    return;
}

void sub_14521()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_14550( iVar2, iVar3, iVar4 );
    return;
}

void sub_14550(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 11;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_12" );
    return;
}

void sub_14609()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_14638( iVar2, iVar3, iVar4 );
    return;
}

void sub_14638(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 12;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_13" );
    return;
}

void sub_14697()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_14726( iVar2, iVar3, iVar4 );
    return;
}

void sub_14726(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 13;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Friend_15" );
    return;
}

void sub_14784()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_14813( iVar2, iVar3, iVar4 );
    return;
}

void sub_14813(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 14;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_16" );
    return;
}

void sub_14872()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_14901( iVar2, iVar3, iVar4 );
    return;
}

void sub_14901(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 15;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_18" );
    return;
}

void sub_14960()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_14989( iVar2, iVar3, iVar4 );
    return;
}

void sub_14989(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 16;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_19" );
    return;
}

void sub_15048()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_15077( iVar2, iVar3, iVar4 );
    return;
}

void sub_15077(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 17;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Girl_20" );
    return;
}

void sub_15133()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_15162( iVar2, iVar3, iVar4 );
    return;
}

void sub_15162(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 18;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_21" );
    return;
}

void sub_15221()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_15250( iVar2, iVar3, iVar4 );
    return;
}

void sub_15250(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 19;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_22" );
    return;
}

void sub_15309()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_15338( iVar2, iVar3, iVar4 );
    return;
}

void sub_15338(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 20;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_24" );
    return;
}

void sub_15397()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_15426( iVar2, iVar3, iVar4 );
    return;
}

void sub_15426(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 21;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Contact_25" );
    return;
}

void sub_15485()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_770();
    sub_15514( iVar2, iVar3, iVar4 );
    return;
}

void sub_15514(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 22;
    sub_860( iVar5, uParam0, uParam1, uParam2, "Girl_26" );
    return;
}

void sub_15605()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_15652()
{
    PRINTSTRING( "+++++++ PLACEHOLDER FAILED (strand " );
    PRINTINT( l_U490 + 1 );
    PRINTSTRING( ")\n" );
    sub_15605();
    return;
}

