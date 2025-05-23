void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    g_U813 = 0;
    SETTIMERA( 0 );
    if (l_U7._fU4)
    {
        l_U6 = 0;
    }
    else
    {
        l_U6 = l_U7._fU0;
    }
    sub_116( "\n CELLPHONE_END_CALL - pause is ", l_U6 );
    while (((l_U7._fU4) || (TIMERA() < (500000 + l_U6))) AND (g_U814))
    {
        WAIT( 0 );
        if (g_U813)
        {
            l_U6 += 20000;
            g_U813 = 0;
        }
        if (TIMERA() >= l_U6)
        {
            if (l_U7._fU8)
            {
                if (sub_245( l_U7._fU12, ref l_U7._fU32, ref l_U7._fU16, 10000 ))
                {
                    sub_348( "\n CELLPHONE_END_CALL - calling player " );
                    while (NOT (sub_3219( 0 )))
                    {
                        WAIT( 0 );
                    }
                    sub_3505( l_U7._fU12, 0 );
                    sub_348( "\n CELLPHONE_END_CALL - calling player finished " );
                    sub_3641();
                    sub_3752();
                }
            }
            else
            {
                sub_348( "\n CELLPHONE_END_CALL - calling contact " );
                if (sub_3849( l_U7._fU12, ref l_U7._fU32, ref l_U7._fU16 ))
                {
                    while (NOT (sub_3219( 0 )))
                    {
                        WAIT( 0 );
                    }
                    sub_3505( l_U7._fU12, 0 );
                    sub_348( "\n CELLPHONE_END_CALL - calling contact finished " );
                    sub_3641();
                    sub_3752();
                }
            }
        }
    }
    sub_348( "\n CELLPHONE_END_CALL - timed out " );
    sub_3752();
    return;
}

void sub_116(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_245(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown[2] uVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar6, 2);
    return sub_278( uParam0, uParam1, uParam2, 0, ref uVar6, ref uVar6, "", uParam3, 1, 0, 1, 0, 0, 0 );
}

int sub_278(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_348( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_348( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_456() )))
    {
        sub_348( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_535() ))) AND (IS_CHAR_IN_ANY_CAR( sub_535() )))
    {
        sub_348( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_348( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_867()))
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
                sub_348( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_867()))
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
    sub_2239( uParam0, ref g_U94._fU176 );
    sub_2635( ref g_U94._fU160 );
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
        sub_2877( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_348(unknown uParam0)
{
    return;
}

void sub_456()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_535()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_867()
{
    if ((g_U94._fU52) || (g_U94._fU48))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_924())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_924()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_456() )))
    {
        sub_348( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_348( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_348( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU104) || (g_U94._fU100))
    {
        sub_348( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_456() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_535() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_535(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_348( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_535() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_348( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_348( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_456() )))
    {
        sub_348( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_2239(unknown uParam0, unknown uParam1)
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

void sub_2635(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

void sub_2877(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_3219(boolean bParam0)
{
    unknown uVar3;

    if (g_U94._fU60 != -1)
    {
        switch (g_U15862[g_U94._fU60]._fU196._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U94._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_535(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_348( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_3505(int iParam0, boolean bParam1)
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

void sub_3641()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_3663();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_3663()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_3752()
{
    g_U814 = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3849(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    array(ref uVar5, 2);
    return sub_278( uParam0, uParam1, uParam2, 0, ref uVar5, ref uVar5, "", 0, 1, 2, 1, 0, 0, 0 );
}

