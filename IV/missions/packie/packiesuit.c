void main()
{
    int iVar2;

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
    l_U482 = 23;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U483 = {g_U9387[l_U482]._fU0};
    ADD_BLIP_FOR_CONTACT( l_U483._fU0, l_U483._fU4, l_U483._fU8, ref l_U486 );
    CHANGE_BLIP_DISPLAY( l_U486, 2 );
    CHANGE_BLIP_SPRITE( l_U486, g_U26415[13] );
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U487 = iVar2 + 10000;
    FLASH_BLIP( l_U486, 1 );
    CHANGE_BLIP_PRIORITY( l_U486, l_U6 );
    l_U481 = 0;
    while (true)
    {
        WAIT( 0 );
        sub_248();
        if (sub_368())
        {
            sub_1736();
        }
    }
    return;
}

void sub_248()
{
    int iVar2;

    if (l_U487 == 0)
    {
        return;
    }
    if (NOT (DOES_BLIP_EXIST( l_U486 )))
    {
        l_U487 = 0;
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U487 < iVar2)
    {
        FLASH_BLIP( l_U486, 0 );
        CHANGE_BLIP_PRIORITY( l_U486, l_U5 );
        l_U487 = 0;
        return;
    }
    return;
}

int sub_368()
{
    float fVar2;
    boolean bVar3;

    if (g_U9893._fU28)
    {
        if (g_U9893._fU40 == 13)
        {
            sub_405();
        }
    }
    if (IS_CHAR_DEAD( sub_441() ))
    {
        return 0;
    }
    if (IS_PLAYER_PLAYING( sub_498() ))
    {
        if (NOT g_U10978)
        {
            fVar2 = l_U483._fU8 + 2.00000000;
            LOCATE_CHAR_ON_FOOT_3D( sub_441(), l_U483._fU0, l_U483._fU4, fVar2, 1.60000000, 1.60000000, 2.00000000, 1 );
        }
    }
    bVar3 = LOCATE_CHAR_ON_FOOT_3D( sub_441(), l_U483._fU0, l_U483._fU4, l_U483._fU8, 1.20000000, 1.20000000, 2.00000000, 0 );
    if (NOT bVar3)
    {
        if (g_U9387[l_U482]._fU20)
        {
            if (LOCATE_CHAR_IN_CAR_3D( sub_441(), g_U9387[l_U482]._fU0._fU0, g_U9387[l_U482]._fU0._fU4, g_U9387[l_U482]._fU0._fU8, 2.50000000, 2.50000000, 2.00000000, 0 ))
            {
                bVar3 = true;
            }
        }
    }
    if (l_U481)
    {
        if (NOT bVar3)
        {
            l_U481 = 0;
        }
        return 0;
    }
    if (NOT bVar3)
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_498() )))
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    if (g_U10980)
    {
        return 0;
    }
    if ((sub_914()) || (sub_864()))
    {
        return 0;
    }
    if (NOT g_U26755)
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_498() )))
    {
        return 0;
    }
    if (NOT (sub_997( 1, 1 )))
    {
        return 0;
    }
    if ((g_U33837) || (g_U33852))
    {
        return 0;
    }
    if (NOT sub_1316())
    {
        return 0;
    }
    l_U481 = 1;
    if (NOT sub_1378())
    {
        PRINT_HELP( "PACSUIT" );
        return 0;
    }
    if (NOT (sub_1577( 6, 19 )))
    {
        PRINT_HELP( "H_F15M_3" );
        return 0;
    }
    return 1;
}

void sub_405()
{
    REMOVE_BLIP( l_U486 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_441()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_498()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_864()
{
    if ((g_U91._fU0 == 1008) || (g_U91._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_914()
{
    if (g_U555 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_997(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_441() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_441(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_441() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_441(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_441()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_441() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_441() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_498() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_498() )))
    {
        return 0;
    }
    return 1;
}

int sub_1316()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

int sub_1378()
{
    if (NOT sub_1387())
    {
        return 0;
    }
    if (NOT sub_1478())
    {
        return 0;
    }
    return 1;
}

int sub_1387()
{
    int iVar2;
    int iVar3;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_441(), 1 );
    if (NOT ((iVar2 == 12) || (iVar2 == 5)))
    {
        return 0;
    }
    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_441(), 2 );
    if (NOT (iVar3 == 2))
    {
        return 0;
    }
    return 1;
}

int sub_1478()
{
    int iVar2;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_441(), 5 );
    if ((iVar2 == 5) || (iVar2 == 2))
    {
        return 1;
    }
    return 0;
}

int sub_1577(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 0;
    iVar5 = 0;
    GET_TIME_OF_DAY( ref iVar4, ref iVar5 );
    if (iParam1 == iParam0)
    {
        return 1;
    }
    if (iParam1 > iParam0)
    {
        if (iVar4 < iParam0)
        {
            return 0;
        }
        if (iVar4 >= iParam1)
        {
            return 0;
        }
        return 1;
    }
    if (iVar4 >= iParam0)
    {
        return 1;
    }
    if (iVar4 < iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_1736()
{
    unknown uVar2;

    sub_1745();
    if (IS_PLAYER_PLAYING( sub_498() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_441() ))
        {
            SET_PLAYER_CONTROL( sub_498(), 0 );
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_441() )))
    {
        SET_CHAR_PROOFS( sub_441(), 1, 1, 1, 1, 1 );
    }
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    sub_1943();
    if (IS_PLAYER_PLAYING( sub_498() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_441() ))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
            if (NOT (IS_CAR_DEAD( uVar2 )))
            {
                CLEAR_AREA( 1401.93300000, 609.87440000, 31.48700000, 3.00000000, 0 );
                SET_CAR_HEADING( uVar2, 180.66530000 );
                SET_CAR_COORDINATES( uVar2, 1401.93300000, 609.87440000, 31.48700000 );
            }
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_441() );
        SET_PLAYER_CONTROL( sub_498(), 0 );
        CLEAR_WANTED_LEVEL( sub_498() );
    }
    if (NOT (IS_CHAR_DEAD( sub_441() )))
    {
        if (IS_CHAR_ON_FIRE( sub_441() ))
        {
            EXTINGUISH_CHAR_FIRE( sub_441() );
        }
        SET_CHAR_PROOFS( sub_441(), 0, 0, 0, 0, 0 );
    }
    sub_2206( 4, 0 );
    sub_4048();
    sub_4158();
    sub_405();
    return;
}

void sub_1745()
{
    return sub_1756( 1, 1 );
}

int sub_1756(boolean bParam0, unknown uParam1)
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

void sub_1943()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_2206(unknown uParam0, unknown uParam1)
{
    g_U10133._fU168[uParam0] = uParam1;
    sub_2230();
    return;
}

void sub_2230()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_2258( 13 );
        if ((g_U9932[g_U9999[I]._fU0]._fU0) AND (sub_2303( 13, iVar3 )))
        {
            sub_2404( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_2588( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_2258( 11 );
        if ((g_U9932[g_U10090[I]._fU0]._fU0) AND (sub_2303( 11, iVar3 )))
        {
            sub_2404( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_2588( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_2782( I );
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_2303( g_U10324[I]._fU12, iVar3 )))
        {
            sub_2404( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_3090( I );
        }
        else
        {
            sub_2588( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_3319();
    return;
}

int sub_2258(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_2303(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U10133._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_2404(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U4 );
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

void sub_2588(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_2782(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_2824( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_2258( g_U10324[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U10978)
    {
        uVar3 = g_U10324[uParam0]._fU12;
        if (g_U10133._fU0[uVar3])
        {
            if (g_U10324[uParam0]._fU24 == 1)
            {
                if (g_U9937 == g_U10324[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_2824(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_3090(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_3319()
{
    int I;
    boolean bVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int iVar12;

    I = 0;
    bVar3 = sub_2258( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_3364( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_2258( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_3364( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_2782( I )))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 59; I++ )
    {
        bVar3 = sub_2782( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U9937 == g_U10324[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_3364( g_U10324[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar3 = false;
        if (g_U9943[I]._fU0)
        {
            if (g_U9937 == g_U9943[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_3364( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_441() )))
        {
            GET_CHAR_COORDINATES( sub_441(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_3855( uVar7, g_U9943[I]._fU8 );
                    if (fVar11 < fVar10)
                    {
                        fVar10 = fVar11;
                        iVar12 = I;
                    }
                }
            }
        }
        if (NOT (iVar12 == -1))
        {
            for ( I = 0; I < 5; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_3364( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_3364(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 0 );
    }
    else
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 1 );
    }
    return;
}

void sub_3855(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_4048()
{
    if (g_U64542._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U64542._fU4 )))
    {
        return;
    }
    DELETE_CHAR( ref g_U64542._fU4 );
    g_U64542._fU0 = 57;
    g_U64542._fU4 = nil;
    g_U64542._fU8 = 28;
    return;
}

void sub_4158()
{
    sub_4167();
    return;
}

void sub_4167()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_4185();
    sub_4244( iVar2, iVar3, iVar4 );
    return;
}

void sub_4185()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_4244(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 13;
    sub_4276( iVar5, uParam0, uParam1, uParam2, "Friend_15" );
    return;
}

void sub_4276(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_4372( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_4372( ref cVar9 );
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
            sub_4372( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_4372( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_4372( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_4372( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_4949( iParam0, iVar7 );;;
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
                sub_5367( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_5367( 0, 4 );
            }
        }
    }
    if (NOT (sub_5456( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_498(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_498() );
    }
    sub_14688();
    bVar27 = true;
    uVar28 = sub_4949( iParam0, iVar7 );
    uVar29 = sub_15330( iParam0 );
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
                sub_15861( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_16291();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_16376( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_16433( iParam0 );
                sub_16568( 0 );
                sub_16649( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_16754();
        }
    }
    if (bParam2)
    {
        sub_16291();
        sub_16842();
        sub_16568( 0 );
    }
    if (bParam3)
    {
        sub_16291();
        sub_16882();
        sub_16568( 0 );
        sub_16649( uVar29, 0 );
    }
    sub_16933();
    return;
}

void sub_4372(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_4949(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_5023( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_5023(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_5367(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_5456(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_5664( uParam1 );
        break;
        case 1:
        bVar8 = sub_7742( uParam1 );
        break;
        case 2:
        bVar8 = sub_7968( uParam1 );
        break;
        case 3:
        bVar8 = sub_8118( uParam1 );
        break;
        case 4:
        bVar8 = sub_8396( uParam1 );
        break;
        case 5:
        bVar8 = sub_8699( uParam1 );
        break;
        case 6:
        bVar8 = sub_8898( uParam1 );
        break;
        case 7:
        bVar8 = sub_9124( uParam1 );
        break;
        case 8:
        bVar8 = sub_9359( uParam1 );
        break;
        case 9:
        bVar8 = sub_9734( uParam1 );
        break;
        case 10:
        bVar8 = sub_9981( uParam1 );
        break;
        case 11:
        bVar8 = sub_10120( uParam1 );
        break;
        case 12:
        bVar8 = sub_10419( uParam1 );
        break;
        case 13:
        bVar8 = sub_10647( uParam1 );
        break;
        case 14:
        bVar8 = sub_10934( uParam1 );
        break;
        case 15:
        bVar8 = sub_11216( uParam1 );
        break;
        case 16:
        bVar8 = sub_11498( uParam1 );
        break;
        case 17:
        bVar8 = sub_11699( uParam1 );
        break;
        case 18:
        bVar8 = sub_11772( uParam1 );
        break;
        case 19:
        bVar8 = sub_11986( uParam1 );
        break;
        case 20:
        bVar8 = sub_12239( uParam1 );
        break;
        case 21:
        bVar8 = sub_12486( uParam1 );
        break;
        case 22:
        bVar8 = sub_12687( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_7347( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_4949( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_13010( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_5664(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_5943( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_5943( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_5943( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_5943( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_5943( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_5943( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_5943( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_5943( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_5943( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_5943( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_5943( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_5943( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_5943( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_5943( iVar3, 0, 3, 1, 0, 0 );
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
        sub_5943( iVar3, 0, sub_7225(), sub_7491(), 0, 0 );
        break;
        default:
        sub_7650( "Friend 1", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Friend 1", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_5943(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_5954( uParam1 );
    sub_6128( uParam0, 0, uParam2 );
    sub_6128( uParam0, 1, uParam3 );
    sub_6128( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_4185();
    return;
}

void sub_5954(unknown uParam0)
{
    ADD_SCORE( sub_498(), uParam0 );
    sub_5979( uParam0 );
    return;
}

void sub_5979(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_5023( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_6128(unknown uParam0, int iParam1, int iParam2)
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
        sub_6285( uParam0 );
    }
    return;
}

void sub_6285(unknown uParam0)
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

int sub_7225()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_7347( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_7347(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_7491()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_7347( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_7650(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_7742(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5943( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_7650( "Contact 2", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 2", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7968(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5943( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_7650( "Girl 3", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Girl 3", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8118(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_5943( iVar3, 0, sub_7225(), sub_7491(), 0, 0 );
        break;
        default:
        sub_7650( "Friend 4", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Friend 4", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8396(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5943( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5943( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5943( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5943( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_7650( "Contact 5", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 5", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8699(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_7650( "Contact 7", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 7", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8898(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5943( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_7650( "Contact 7b", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 7b", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9124(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_5943( iVar3, 0, sub_7225(), sub_7491(), 0, 0 );
        break;
        default:
        sub_7650( "Friend 8", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Friend 8", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9359(unknown uParam0)
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
        sub_5943( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_5943( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_5943( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_5943( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_5943( iVar3, 0, sub_7225(), sub_7491(), 0, 0 );
        break;
        default:
        sub_7650( "Friend 9", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Friend 9", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9734(unknown uParam0)
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
        sub_5943( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_5943( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_5943( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_7650( "Contact 10", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_7650( "Contact 10", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9981(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_7650( "Girl 11", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Girl 11", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10120(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5943( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5943( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5943( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5943( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_5943( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_7650( "Contact 12", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 12", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10419(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5943( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_7650( "Contact 13", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 13", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10647(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_5943( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_5943( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_5943( iVar3, 0, sub_7225(), sub_7491(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_7650( "Friend 15", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Friend 15", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10934(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5943( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5943( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5943( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_7650( "Contact 16", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 16", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11216(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5943( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5943( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_5943( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_7650( "Contact 18", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 18", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11498(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_7650( "Contact 19", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 19", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11699(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_7650( "Girl 20", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11772(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_7650( "Contact 21", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 21", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11986(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5943( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5943( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_7650( "Contact 22", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 22", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12239(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5943( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5943( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5943( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_7650( "Contact 24", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 24", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12486(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5943( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5943( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5943( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_7650( "Contact 25", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7650( "Contact 25", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12687(unknown uParam0)
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
        sub_5943( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_7650( "Girl 26", 1 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_7650( "Girl 26", 0 );
        sub_5943( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_13010(int iParam0, int iParam1)
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
    if (sub_13058( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_13789( iParam1 );
    }
    return;
}

int sub_13058(int iParam0, int iParam1)
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
            sub_13198( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_13198(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_13380( 0 );
    return;
}

void sub_13380(boolean bParam0)
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
        sub_13635();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_13635()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_13789(int iParam0)
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
        sub_14122( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_14122( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_14122( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_14122( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_14122( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_14122( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_14122( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_14122( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_14122( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_14122( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_14122( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_14122( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_14122( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_14122( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_14122( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_14122( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_14122( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_14122( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_14122( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_14122(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_14688()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_14726( 5, g_U569[I] )) == 1))
        {
            if ((sub_14726( 1, g_U569[I] )) != 0)
            {
                sub_15012( I );
            }
        }
    }
    if (NOT sub_15178())
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

int sub_14726(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_15012(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_15097( g_U569 - 1 );
    return;
}

void sub_15097(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_15178()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_14726( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_15330(unknown uParam0)
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
    sub_5023( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_15861(unknown uParam0, unknown uParam1)
{
    sub_15880( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_15880(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_16291()
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

int sub_16376(int iParam0, int iParam1)
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

void sub_16433(unknown uParam0)
{
    sub_16442();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_16442()
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

void sub_16568(unknown uParam0)
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

void sub_16649(int iParam0, boolean bParam1)
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

void sub_16754()
{
    sub_16763();
    return;
}

void sub_16763()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_16842()
{
    sub_16763();
    return;
}

void sub_16882()
{
    sub_16763();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_16933()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_16955();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_16955()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

