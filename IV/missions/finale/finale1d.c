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
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U507 = 1;
    l_U508 = 0;
    l_U520 = "AMB@SAVEGAME";
    l_U524 = "upset_get_out_bed_l";
    l_U525 = "upset_in_bed_idle";
    l_U526 = "FIN1D_RDEAD";
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_206();
    }
    SET_MISSION_FLAG( 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    if (IS_PLAYER_PLAYING( sub_2031() ))
    {
        SET_PLAYER_CONTROL( sub_2031(), 0 );
    }
    CLEAR_PRINTS();
    CLEAR_HELP();
    while (l_U507)
    {
        WAIT( 0 );
        switch (l_U481)
        {
            case 0:
            sub_13314();
            break;
            case 1:
            sub_13933();
            break;
            case 2:
            sub_15113();
            break;
            case 3:
            sub_17136();
            break;
        }
        if (IS_PLAYER_PLAYING( sub_2031() ))
        {
            SET_USE_LEG_IK( sub_2031(), 0 );
        }
    }
    sub_206();
    return;
}

void sub_206()
{
    REMOVE_ANIMS( l_U520 );
    sub_227();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_227()
{
    sub_236();
    return;
}

void sub_236()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_254();
    sub_313( iVar2, iVar3, iVar4 );
    return;
}

void sub_254()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_313(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_344( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_344(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_440( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_440( ref cVar9 );
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
            sub_440( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_440( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_440( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_440( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_1017( iParam0, iVar7 );;;
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
                sub_1435( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_1435( 0, 4 );
            }
        }
    }
    if (NOT (sub_1524( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2031(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2031() );
    }
    sub_10782();
    bVar27 = true;
    uVar28 = sub_1017( iParam0, iVar7 );
    uVar29 = sub_11424( iParam0 );
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
                sub_11955( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_12385();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_12470( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_12527( iParam0 );
                sub_12662( 0 );
                sub_12743( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_12848();
        }
    }
    if (bParam2)
    {
        sub_12385();
        sub_12936();
        sub_12662( 0 );
    }
    if (bParam3)
    {
        sub_12385();
        sub_12976();
        sub_12662( 0 );
        sub_12743( uVar29, 0 );
    }
    sub_13027();
    return;
}

void sub_440(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_1017(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1091( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_1091(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1435(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_1524(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_1732( uParam1 );
        break;
        case 1:
        bVar8 = sub_3836( uParam1 );
        break;
        case 2:
        bVar8 = sub_4062( uParam1 );
        break;
        case 3:
        bVar8 = sub_4212( uParam1 );
        break;
        case 4:
        bVar8 = sub_4490( uParam1 );
        break;
        case 5:
        bVar8 = sub_4793( uParam1 );
        break;
        case 6:
        bVar8 = sub_4992( uParam1 );
        break;
        case 7:
        bVar8 = sub_5218( uParam1 );
        break;
        case 8:
        bVar8 = sub_5453( uParam1 );
        break;
        case 9:
        bVar8 = sub_5828( uParam1 );
        break;
        case 10:
        bVar8 = sub_6075( uParam1 );
        break;
        case 11:
        bVar8 = sub_6214( uParam1 );
        break;
        case 12:
        bVar8 = sub_6513( uParam1 );
        break;
        case 13:
        bVar8 = sub_6741( uParam1 );
        break;
        case 14:
        bVar8 = sub_7028( uParam1 );
        break;
        case 15:
        bVar8 = sub_7310( uParam1 );
        break;
        case 16:
        bVar8 = sub_7592( uParam1 );
        break;
        case 17:
        bVar8 = sub_7793( uParam1 );
        break;
        case 18:
        bVar8 = sub_7866( uParam1 );
        break;
        case 19:
        bVar8 = sub_8080( uParam1 );
        break;
        case 20:
        bVar8 = sub_8333( uParam1 );
        break;
        case 21:
        bVar8 = sub_8580( uParam1 );
        break;
        case 22:
        bVar8 = sub_8781( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_3441( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_1017( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_9104( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_1732(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_2011( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_2011( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_2011( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_2011( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_2011( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_2011( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_2011( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_2011( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_2011( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_2011( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_2011( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_2011( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_2011( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_2011( iVar3, 0, 3, 1, 0, 0 );
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
        sub_2011( iVar3, 0, sub_3319(), sub_3585(), 0, 0 );
        break;
        default:
        sub_3744( "Friend 1", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Friend 1", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_2011(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_2022( uParam1 );
    sub_2222( uParam0, 0, uParam2 );
    sub_2222( uParam0, 1, uParam3 );
    sub_2222( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_254();
    return;
}

void sub_2022(unknown uParam0)
{
    ADD_SCORE( sub_2031(), uParam0 );
    sub_2073( uParam0 );
    return;
}

void sub_2031()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2073(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1091( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_2222(unknown uParam0, int iParam1, int iParam2)
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
        sub_2379( uParam0 );
    }
    return;
}

void sub_2379(unknown uParam0)
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

int sub_3319()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_3441( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_3441(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_3585()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_3441( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_3744(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3836(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2011( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_3744( "Contact 2", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 2", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_4062(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_2011( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_3744( "Girl 3", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Girl 3", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_4212(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_2011( iVar3, 0, sub_3319(), sub_3585(), 0, 0 );
        break;
        default:
        sub_3744( "Friend 4", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Friend 4", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_4490(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2011( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2011( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_2011( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_2011( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_3744( "Contact 5", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 5", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_4793(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_3744( "Contact 7", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 7", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_4992(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2011( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_3744( "Contact 7b", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 7b", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5218(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_2011( iVar3, 0, sub_3319(), sub_3585(), 0, 0 );
        break;
        default:
        sub_3744( "Friend 8", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Friend 8", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5453(unknown uParam0)
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
        sub_2011( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_2011( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_2011( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_2011( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_2011( iVar3, 0, sub_3319(), sub_3585(), 0, 0 );
        break;
        default:
        sub_3744( "Friend 9", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Friend 9", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_5828(unknown uParam0)
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
        sub_2011( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_2011( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_2011( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_3744( "Contact 10", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_3744( "Contact 10", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6075(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_3744( "Girl 11", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Girl 11", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6214(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2011( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2011( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_2011( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_2011( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_2011( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_3744( "Contact 12", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 12", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6513(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2011( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_3744( "Contact 13", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 13", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_6741(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_2011( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_2011( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_2011( iVar3, 0, sub_3319(), sub_3585(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_3744( "Friend 15", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Friend 15", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7028(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2011( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2011( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_2011( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_3744( "Contact 16", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 16", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7310(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2011( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_2011( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_2011( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_3744( "Contact 18", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 18", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7592(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_3744( "Contact 19", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 19", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7793(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_3744( "Girl 20", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7866(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_3744( "Contact 21", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 21", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8080(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2011( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_2011( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_3744( "Contact 22", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 22", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8333(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_2011( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_2011( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_2011( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_3744( "Contact 24", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 24", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8580(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_2011( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_2011( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_2011( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_3744( "Contact 25", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_3744( "Contact 25", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8781(unknown uParam0)
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
        sub_2011( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_3744( "Girl 26", 1 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_3744( "Girl 26", 0 );
        sub_2011( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_9104(int iParam0, int iParam1)
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
    if (sub_9152( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_9883( iParam1 );
    }
    return;
}

int sub_9152(int iParam0, int iParam1)
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
            sub_9292( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_9292(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_9474( 0 );
    return;
}

void sub_9474(boolean bParam0)
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
        sub_9729();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_9729()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_9883(int iParam0)
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
        sub_10216( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_10216( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_10216( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_10216( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_10216( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_10216( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_10216( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_10216( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_10216( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_10216( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_10216( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_10216( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_10216( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_10216( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_10216( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_10216( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_10216( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_10216( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_10216( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_10216(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_10782()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_10820( 5, g_U569[I] )) == 1))
        {
            if ((sub_10820( 1, g_U569[I] )) != 0)
            {
                sub_11106( I );
            }
        }
    }
    if (NOT sub_11272())
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

int sub_10820(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_11106(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_11191( g_U569 - 1 );
    return;
}

void sub_11191(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_11272()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_10820( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_11424(unknown uParam0)
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
    sub_1091( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_11955(unknown uParam0, unknown uParam1)
{
    sub_11974( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_11974(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_12385()
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

int sub_12470(int iParam0, int iParam1)
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

void sub_12527(unknown uParam0)
{
    sub_12536();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_12536()
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

void sub_12662(unknown uParam0)
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

void sub_12743(int iParam0, boolean bParam1)
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

void sub_12848()
{
    sub_12857();
    return;
}

void sub_12857()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_12936()
{
    sub_12857();
    return;
}

void sub_12976()
{
    sub_12857();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_13027()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_13049();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_13049()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_13314()
{
    l_U484._fU0 = 1;
    l_U484._fU16 = {599.54200000, 1411.40600000, 16.47130000};
    l_U484._fU28 = {602.42400000, 1411.39600000, 16.47130000};
    l_U484._fU40 = {605.21350000, 1409.99700000, 18.30088000};
    l_U484._fU52 = {-14.95635000, 0.00000000, 59.50907000};
    l_U484._fU64 = {605.21350000, 1409.99700000, 18.30088000};
    l_U484._fU76 = {-14.95635000, 0.00000000, 59.50907000};
    l_U484._fU4 = {600.68190000, 1417.05700000, 16.49780000};
    l_U484._fU88 = 180.00000000;
    sub_13526( "FIN1CAU" );
    LOAD_ADDITIONAL_TEXT( "FIN1CAU", 6 );
    sub_13707( 0, sub_13658(), "NIKO", 0 );
    REQUEST_ANIMS( l_U520 );
    LOAD_ALL_OBJECTS_NOW();
    while (NOT (HAVE_ANIMS_LOADED( l_U520 )))
    {
        WAIT( 0 );
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    l_U481 = 1;
    return;
}

void sub_13526(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_13545();
    return;
}

void sub_13545()
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

void sub_13658()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_13707(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_13791( "\n PED NUMBER ", uParam0 );
    sub_13831( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_13791(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_13831(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_13933()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0;
    l_U483 = 2;
    l_U509 = l_U484._fU88;
    if (l_U483 == 2)
    {
        l_U509 -= 90.00000000;
        if (l_U509 < 0.00000000)
        {
            l_U509 += 360.00000000;
        }
    }
    else
    {
        l_U509 += 90.00000000;
        if (l_U509 > 360.00000000)
        {
            l_U509 -= 360.00000000;
        }
    }
    if (g_U15654[12])
    {
        l_U524 = "Angry_Get_Out_Bed_L";
        l_U525 = "upset_in_bed_idle";
        l_U526 = "FIN1D_RDEAD";
        iVar2 = 4;
        iVar3 = 30;
    }
    else
    {
        l_U524 = "upset_get_out_bed_l";
        l_U525 = "upset_in_bed_idle";
        if ((g_U34005[1] >= 4) AND (ProtectedGet(g_U34042[1]) >= 65.00000000))
        {
            l_U526 = "FIN1C_POOR";
        }
        else
        {
            l_U526 = "FIN1C_DAMN";
        }
        iVar2 = 14;
        iVar3 = 30;
    }
    FORWARD_TO_TIME_OF_DAY( iVar2, iVar3 + 2 );
    SET_CURRENT_CHAR_WEAPON( sub_13658(), 0, 0 );
    REMOVE_PED_HELMET( sub_13658(), 1 );
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( sub_13658(), 1 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_13658(), 1 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_13658(), 1, 0, 0 );
    }
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( sub_13658(), 2 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_13658(), 2 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_13658(), 2, 0, 0 );
    }
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( sub_13658(), 5 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_13658(), 5 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_13658(), 5, 0, 0 );
    }
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( sub_13658(), 4 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_13658(), 4 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_13658(), 4, 0, 0 );
    }
    if ((NOT ((GET_CHAR_TEXTURE_VARIATION( sub_13658(), 3 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( sub_13658(), 3 )) == 0)))
    {
        SET_CHAR_COMPONENT_VARIATION( sub_13658(), 3, 0, 0 );
    }
    CLEAR_ALL_CHAR_PROPS( sub_13658() );
    FREEZE_CHAR_POSITION( sub_13658(), 1 );
    SET_CHAR_COORDINATES( sub_13658(), l_U484._fU4._fU0, l_U484._fU4._fU4, l_U484._fU4._fU8 );
    SET_CAM_BEHIND_PED( sub_13658() );
    WAIT( 0 );
    FORWARD_TO_TIME_OF_DAY( iVar2, iVar3 );
    if (IS_PLAYER_PLAYING( sub_2031() ))
    {
        if (l_U483 == 2)
        {
            SET_CHAR_COORDINATES( sub_13658(), l_U484._fU28._fU0, l_U484._fU28._fU4, l_U484._fU28._fU8 );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_13658(), l_U484._fU16._fU0, l_U484._fU16._fU4, l_U484._fU16._fU8 );
        }
        SET_CHAR_HEADING( sub_13658(), l_U509 );
        SET_ROOM_FOR_CHAR_BY_NAME( sub_13658(), "bronxsaveroom01" );
        SET_CAM_BEHIND_PED( sub_13658() );
        LOAD_SCENE( l_U484._fU16._fU0, l_U484._fU16._fU4, l_U484._fU16._fU8 );
        GET_GAME_VIEWPORT_ID( ref l_U519 );
        REQUEST_INTERIOR_MODELS( -110939775, "bronxsaveroom01" );
        REQUEST_INTERIOR_MODELS( -110939775, "bronxsaveroom02" );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U519, "bronxsaveroom01" );
        OPEN_SEQUENCE_TASK( ref l_U510 );
        TASK_PLAY_ANIM_WITH_FLAGS( 0, l_U524, l_U520, 1000.00000000, 0, 4288 );
        CLOSE_SEQUENCE_TASK( l_U510 );
        TASK_PERFORM_SEQUENCE( sub_13658(), l_U510 );
        CLEAR_SEQUENCE_TASK( l_U510 );
    }
    l_U481 = 2;
    return;
}

void sub_15113()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    switch (l_U482)
    {
        case 0:
        if (IS_PLAYER_PLAYING( sub_2031() ))
        {
            SET_USE_LEG_IK( sub_2031(), 0 );
        }
        GET_SCRIPT_TASK_STATUS( sub_13658(), 29, ref l_U511 );
        if ((l_U511 == 7) || (l_U511 == 1))
        {
            if (IS_CHAR_PLAYING_ANIM( sub_13658(), l_U520, l_U524 ))
            {
                SET_CHAR_ANIM_CURRENT_TIME( sub_13658(), l_U520, l_U524, 0.00000000 );
                l_U482 = 6;
            }
            else
            {
                l_U482 = 6;
            }
        }
        if (l_U482 == 6)
        {
            BEGIN_CAM_COMMANDS( ref l_U523 );
            CREATE_CAM( 14, ref l_U518 );
            if (l_U483 == 2)
            {
                SET_CAM_POS( l_U518, l_U484._fU40._fU0, l_U484._fU40._fU4, l_U484._fU40._fU8 );
                SET_CAM_ROT( l_U518, l_U484._fU52._fU0, l_U484._fU52._fU4, l_U484._fU52._fU8 );
            }
            else
            {
                SET_CAM_POS( l_U518, l_U484._fU64._fU0, l_U484._fU64._fU4, l_U484._fU64._fU8 );
                SET_CAM_ROT( l_U518, l_U484._fU76._fU0, l_U484._fU76._fU4, l_U484._fU76._fU8 );
            }
            SET_CAM_FOV( l_U518, 45.00000000 );
            SET_CAM_ACTIVE( l_U518, 1 );
            SET_CAM_PROPAGATE( l_U518, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U521 = "ALARM_CLOCK_ELECTRIC_LOOP";
            GET_CHAR_COORDINATES( sub_13658(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_INTERIOR_AT_COORDS( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar5 );
            LOAD_SCENE_FOR_ROOM_BY_KEY( uVar5, GET_HASH_KEY( "bronxsaveroom01" ) );
            CLEAR_HELP();
            CLEAR_PRINTS();
            DO_SCREEN_FADE_IN( 1000 );
            while (NOT IS_SCREEN_FADED_IN())
            {
                if (IS_PLAYER_PLAYING( sub_2031() ))
                {
                    SET_USE_LEG_IK( sub_2031(), 0 );
                    GET_SCRIPT_TASK_STATUS( sub_13658(), 29, ref l_U511 );
                    if (l_U511 == 1)
                    {
                        if (IS_CHAR_PLAYING_ANIM( sub_13658(), l_U520, l_U524 ))
                        {
                            SET_CHAR_ANIM_CURRENT_TIME( sub_13658(), l_U520, l_U524, 0.00000000 );
                        }
                    }
                }
                WAIT( 0 );
            }
            if (IS_PLAYER_PLAYING( sub_2031() ))
            {
                GET_CHAR_COORDINATES( sub_13658(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
            }
            l_U522 = GET_SOUND_ID();
            PLAY_SOUND_FROM_POSITION( l_U522, l_U521, uVar6 );
            l_U508 = 1;
            l_U482 = 7;
        }
        break;
        case 7:
        GET_SCRIPT_TASK_STATUS( sub_13658(), 29, ref l_U511 );
        if ((l_U511 == 2) || (l_U511 == 7))
        {
            sub_15978( l_U526, ref l_U512, 6, 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CAM_BEHIND_PED( sub_13658() );
            SET_PLAYER_MOOD_PISSED_OFF( sub_2031(), 300000 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_13658(), 603.61070000, 1410.68700000, 16.47970000, 2, 10000, 1.00000000 );
            if (l_U508)
            {
                STOP_SOUND( l_U522 );
                RELEASE_SOUND_ID( l_U522 );
                l_U508 = 0;
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_CAM( l_U518 );
            END_CAM_COMMANDS( ref l_U523 );
            l_U481 = 3;
        }
        else
        {
            SET_USE_LEG_IK( sub_2031(), 0 );
        }
        break;
    }
    return;
}

void sub_15978(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_16001( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_16001(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_16055( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_16055(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_16077( iParam1 )))
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
    sub_16769( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_16077(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_16154( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_16154( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_16154( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_16154(unknown uParam0)
{
    return;
}

void sub_16769(int iParam0, int iParam1)
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

void sub_17136()
{
    boolean bVar2;

    if (IS_PLAYER_PLAYING( sub_2031() ))
    {
        if (sub_17168( l_U512 ))
        {
            FREEZE_CHAR_POSITION( sub_13658(), 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CAM_BEHIND_PED( sub_13658() );
            bVar2 = false;
            while (NOT bVar2)
            {
                if ((NOT (IS_CHAR_GESTURING( sub_13658() ))) AND (NOT (sub_17168( l_U512 ))))
                {
                    bVar2 = true;
                }
                WAIT( 0 );
            }
            SET_PLAYER_CONTROL( sub_2031(), 1 );
            SET_WIDESCREEN_BORDERS( 0 );
            TRIGGER_MISSION_COMPLETE_AUDIO( 56 );
            l_U507 = 0;
        }
    }
    return;
}

int sub_17168(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_16154( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_16154( "\n speech is not playing" );
    }
    return 0;
}

