void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U110 = 0;
    l_U115 = "E1MF3AU";
    l_U116 = 18;
    l_U124 = 0;
    while (true)
    {
        WAIT( 0 );
        switch (l_U124)
        {
            case 0:
            sub_160( ref l_U111 );
            sub_216( ref l_U111, 6, 0, 0 );
            sub_817();
            l_U124 = 1;
            break;
            case 1:
            if ((l_U110 == 1) || (sub_851( l_U111 )))
            {
                l_U124 = 2;
            }
            break;
            case 2:
            sub_1120();
            l_U124 = 3;
            break;
            case 3:
            sub_2769();
            break;
            case 4:
            if (sub_851( l_U111 ))
            {
                if (GET_MISSION_FLAG() == 0)
                {
                    if ((sub_3316( l_U116, 1 )) || (sub_3212( "1235550160" )))
                    {
                        l_U124 = 5;
                    }
                }
            }
            break;
            case 5:
            if (sub_3647() > -1)
            {
                sub_3722( l_U115, 2 );
                l_U124 = 6;
            }
            else
            {
                l_U124 = 8;
            }
            break;
            case 6:
            if (sub_3647() == 0)
            {
                if (sub_3919( "E1MF3_CALL1", l_U115, 1 ))
                {
                    sub_6999( "BERNIE" );
                    l_U124 = 7;
                }
            }
            else if (sub_3647() == 1)
            {
                if (sub_3919( "E1MF3_CALL2", l_U115, 1 ))
                {
                    sub_6999( "BERNIE" );
                    l_U124 = 7;
                }
            }
            else if (sub_3647() == 2)
            {
                if (sub_3919( "E1MF3_CALL3", l_U115, 1 ))
                {
                    sub_6999( "BERNIE" );
                    l_U124 = 7;
                }
            }
            else if (sub_3647() == 3)
            {
                if (sub_3919( "E1MF3_CALL4", l_U115, 1 ))
                {
                    sub_6999( "BERNIE" );
                    l_U124 = 7;
                }
            }
            else if (sub_3647() == 4)
            {
                if (sub_3919( "E1MF3_CALL5", l_U115, 1 ))
                {
                    sub_6999( "BERNIE" );
                    l_U124 = 7;
                }
            }
            else if (sub_3647() == 5)
            {
                if (sub_3919( "E1MF3_CALL6", l_U115, 1 ))
                {
                    sub_6999( "NIKO" );
                    l_U124 = 7;
                }
            }
            else if (sub_3647() == 6)
            {
                if (sub_3919( "E1MF3_CALL9", l_U115, 1 ))
                {
                    sub_6999( "NIKO" );
                    l_U124 = 7;
                }
            }
            else if (sub_3647() == 7)
            {
                if (sub_3919( "E1MF3_CALL10", l_U115, 1 ))
                {
                    sub_6999( "NIKO" );
                    l_U124 = 7;
                }
            };;;;;;;;
            break;
            case 7:
            if (sub_7504( 0 ))
            {
                sub_216( ref l_U111, 2, 0, 0 );
                if (sub_3647() == 6)
                {
                    l_U124 = 8;
                }
                else
                {
                    l_U101[sub_3647()] = 1;
                    l_U124 = 4;
                }
            }
            break;
            case 8:
            sub_7834( l_U116 );
            sub_7883( l_U116 );
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

void sub_160(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_216(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_269( iParam0, uParam1, uParam2 );
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
        sub_401( iParam0 + 0 );
    }
    return;
}

void sub_269(int iParam0, int iParam1, int iParam2)
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
        sub_401( iParam0 + 0 );
    }
    return;
}

void sub_401(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_432( iParam0->_fU4 )))
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

int sub_432(unknown uParam0)
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

void sub_817()
{
    return;
}

int sub_851(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1020( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1020(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_1120()
{
    int iVar2;
    int iVar3;

    iVar2 = 2;
    iVar3 = 2;
    sub_1149( iVar2, iVar3, 16383, 16383, ref l_U117 );
    sub_1496( ref l_U117, 1 );
    sub_1527( ref l_U117, 0 );
    sub_1558( ref l_U117, 2 );
    sub_1591( ref l_U117 );
    return;
}

void sub_1149(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_1171( uParam0, 0, iParam4 + 0 );
    sub_1171( uParam1, 1, iParam4 + 0 );
    sub_1171( uParam2, 2, iParam4 + 0 );
    sub_1171( uParam3, 3, iParam4 + 0 );
    sub_1171( 0, 4, iParam4 + 0 );
    sub_1171( 1, 5, iParam4 + 0 );
    sub_1171( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_1171(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1496(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_1527(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_1558(int iParam0, unknown uParam1)
{
    sub_1171( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_1591(int iParam0)
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
        if (NOT sub_1661())
        {
            sub_1962( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_2175( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_1962( iVar9 );
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
                ConcatString(ref cVar5, sub_1699( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_1699( 4, g_U572[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_1661()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_1699( 1, g_U572[I] )) != 0))
        {
            sub_1962( I );
            return 1;
        }
    }
    return 0;
}

int sub_1699(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1962(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2047( g_U572 - 1 );
    return;
}

void sub_2047(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2175(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U572 - 1); Result++ )
    {
        if (g_U572[Result]._fU0[0] != -1)
        {
            if (sub_2240( uParam0, g_U572[Result] ))
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

int sub_2240(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_1699( 0, uParam0 );
        if (iVar14 == (sub_1699( 0, uParam6 )))
        {
            iVar15 = sub_1699( 3, uParam0 );
            if (iVar15 == (sub_1699( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_2769()
{
    if ((sub_2782( ref l_U117 )) == 3)
    {
        sub_2909( l_U116 );
        sub_3048( ref l_U117, 1 );
        l_U124 = 4;
    }
    return;
}

int sub_2782(int iParam0)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_2240( iParam0->_fU0, g_U572[I] ))
            {
                iParam0->_fU24 = I;
                return sub_1699( 4, g_U572[I] );
            }
        }
        iParam0->_fU24 = -2;
    }
    return 6;
}

void sub_2909(unknown uParam0)
{
    char[16] cVar3;

    if (NOT g_U15862[uParam0]._fU196._fU0)
    {
        if (g_U94._fU0 == 1012)
        {
            g_U94._fU92 = 1;
        }
        g_U15862[uParam0]._fU196._fU0 = 1;
        StrCopy( ref cVar3, "CONT_", 16 );
        ConcatString(ref cVar3, ref g_U15862[uParam0]._fU196._fU8, 16);
        SET_PHONE_HUD_ITEM( 2, ref cVar3, -1 );
        g_U94._fU520 = 0;
    }
    return;
}

void sub_3048(int iParam0, unknown uParam1)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_2240( iParam0->_fU0, g_U572[I] ))
            {
                g_U572[I]._fU20 = uParam1;
                iParam0->_fU24 = I;
            }
        }
    }
    return;
}

int sub_3212(unknown uParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        return 0;
    }
    if ((g_U94._fU508 >= 4) AND (g_U94._fU0 == 1005))
    {
        if (g_U94._fU60 == 21)
        {
            return COMPARE_STRING( ref g_U94._fU128, uParam0 );
        }
    }
    return 0;
}

int sub_3316(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_3399( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_3399( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U94._fU60 == iParam0) AND (g_U94._fU0 == 1005))
    {
        if (bParam1)
        {
            if ((NOT g_U94._fU372) AND (g_U94._fU508 >= 4))
            {
                return 1;
            }
        }
        else if (NOT g_U94._fU368)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3399(unknown uParam0)
{
    return;
}

int sub_3647()
{
    int Result;

    for ( Result = 0; Result <= 7; Result++ )
    {
        if (l_U101[Result] == 0)
        {
            return Result;
        }
    }
    return -1;
}

void sub_3722(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3758())
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

int sub_3758()
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

int sub_3919(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar23 = g_U94._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_4027( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U94._fU368) == 1)
        {
            StrCopy( ref g_U94._fU224[0], uParam1, 16 );
            StrCopy( ref g_U94._fU224[1], uParam0, 16 );
            sub_5976( uVar23, ref g_U94._fU176 );
            g_U94._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_4027(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_3399( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_3399( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_4193() )))
    {
        sub_3399( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4272() ))) AND (IS_CHAR_IN_ANY_CAR( sub_4272() )))
    {
        sub_3399( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_3399( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_4604()))
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
                sub_3399( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_4604()))
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
    sub_5976( uParam0, ref g_U94._fU176 );
    sub_6372( ref g_U94._fU160 );
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
        sub_6614( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_4193()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4272()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_4604()
{
    if ((g_U94._fU52) || (g_U94._fU48))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_4661())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_4661()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_4193() )))
    {
        sub_3399( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_3399( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_3399( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU104) || (g_U94._fU100))
    {
        sub_3399( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_4193() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4272() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_4272(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_3399( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_4272() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_3399( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_3399( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_4193() )))
    {
        sub_3399( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_5976(unknown uParam0, unknown uParam1)
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

void sub_6372(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

void sub_6614(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6999(unknown uParam0)
{
    StrCopy( ref g_U94._fU176, uParam0, 32 );
    return;
}

int sub_7504(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_4272(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_3399( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_7834(int iParam0)
{
    if (g_U94._fU72 == iParam0)
    {
        g_U94._fU72 = -1;
    }
    return;
}

void sub_7883(unknown uParam0)
{
    if (g_U15862[uParam0]._fU196._fU0)
    {
        switch (g_U94._fU0)
        {
            case 1013:
            g_U94._fU92 = 1;
            break;
            default:
        }
        g_U15862[uParam0]._fU196._fU0 = 0;
    }
    return;
}

