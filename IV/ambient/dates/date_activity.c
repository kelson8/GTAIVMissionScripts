void main()
{
    l_U177 = 0;
    l_U197 = 0;
    l_U198 = 0;
    l_U199 = 1;
    l_U200 = 3;
    l_U202 = 0;
    l_U204 = 0;
    l_U205 = 1;
    l_U206 = 0;
    l_U236 = -1;
    if (HAS_DEATHARREST_EXECUTED())
    {
        if (l_U216 < 5)
        {
            g_U32928[l_U216] = 5;
        }
        sub_108();
    }
    sub_342( l_U237 );
    sub_1186( l_U237 );
    while (l_U205)
    {
        WAIT( 0 );
        if (NOT (sub_2343( l_U215, l_U216, ref l_U236, 0 )))
        {
            switch (l_U204)
            {
                case 0:
                if (NOT sub_3278())
                {
                    if (sub_3454( l_U237 ))
                    {
                        if ((IS_CHAR_IN_ANY_CAR( l_U215 )) || (IS_CHAR_IN_ANY_CAR( sub_1614() )))
                        {
                            if (IS_PLAYER_CONTROL_ON( sub_2352() ))
                            {
                                SET_PLAYER_CONTROL( sub_2352(), 0 );
                            }
                            else
                            {
                                TASK_LEAVE_ANY_CAR( sub_1614() );
                                TASK_LEAVE_ANY_CAR( l_U215 );
                            }
                        }
                        else
                        {
                            SET_PLAYER_CONTROL( sub_2352(), 1 );
                            l_U204 = 1;
                        }
                    }
                }
                break;
                case 1:
                if (NOT sub_3278())
                {
                    if (sub_21554())
                    {
                        l_U204 = 2;
                    }
                }
                break;
                case 2:
                if (DOES_BLIP_EXIST( l_U207 ))
                {
                    if (g_U9348)
                    {
                        REMOVE_BLIP( l_U207 );
                    }
                }
                if (NOT sub_21563())
                {
                    if (DOES_BLIP_EXIST( l_U207 ))
                    {
                        REMOVE_BLIP( l_U207 );
                    }
                    l_U204 = 3;
                }
                break;
                case 3:
                switch (l_U231)
                {
                    case 7:
                    g_U32952[l_U216] = g_U32898._fU16;
                    g_U32898._fU16 = 8;
                    l_U205 = 0;
                    break;
                    case 6:
                    g_U32946[l_U216] = g_U32898._fU16;
                    g_U32898._fU16 = 8;
                    l_U205 = 0;
                    break;
                    case 5:
                    g_U32940[l_U216] = g_U32898._fU16;
                    g_U32898._fU16 = 8;
                    l_U205 = 0;
                    break;
                    case 8:
                    g_U32958[l_U216] = g_U32898._fU16;
                    g_U32898._fU16 = 8;
                    g_U32970[l_U216] = g_U9213;
                    l_U205 = 0;
                    g_U9212 = 0;
                    g_U9347 = 0;
                    break;
                    case 9:
                    g_U32964[l_U216] = g_U32898._fU16;
                    g_U32898._fU16 = 8;
                    l_U205 = 0;
                    break;
                }
                break;
            }
        }
        else
        {
            l_U205 = 0;
        }
    }
    sub_108();
    return;
}

void sub_108()
{
    sub_117();
    sub_154();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_117()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_154()
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

void sub_342(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33)
{
    float fVar36;

    l_U215 = uParam0._fU0;
    l_U216 = uParam0._fU4;
    l_U230 = sub_375( l_U216, 1 );
    StrCopy( ref l_U226, 4, uParam0._fU8._fU0, 8);
    l_U231 = uParam0._fU8._fU36;
    l_U217 = {uParam0._fU8._fU92};
    l_U220 = {uParam0._fU8._fU104};
    fVar36 = 0.00000000;
    g_U65003 = 0;
    if ((l_U217._fU8 != 0.00000000) AND ((l_U217._fU4 != 0.00000000) AND (l_U217._fU0 != 0.00000000)))
    {
        l_U223 = {l_U223 + l_U217};
        fVar36++;
    }
    if ((l_U220._fU8 != 0.00000000) AND ((l_U220._fU4 != 0.00000000) AND (l_U220._fU0 != 0.00000000)))
    {
        l_U223 = {l_U223 + l_U220};
        fVar36++;
    }
    if (fVar36 > 0.00000000)
    {
        l_U223._fU0 /= fVar36;
        l_U223._fU4 /= fVar36;
        l_U223._fU8 /= fVar36;
    }
    else
    {
        SCRIPT_ASSERT( "activity_pos" );
    }
    switch (l_U231)
    {
        case 5:
        l_U232 = "DATE_POOL";
        break;
        case 6:
        l_U232 = "DATE_DARTS";
        break;
        case 7:
        l_U232 = "DATE_BOWL";
        break;
        case 8:
        l_U232 = "DATE_SHOW";
        g_U9210 = 1;
        break;
        case 9:
        l_U232 = "DATE_STRIP";
        break;
        default: SCRIPT_ASSERT( "date_activity - activity_type missing" );
    }
    return;
}

string sub_375(unknown uParam0, boolean bParam1)
{
    switch (uParam0)
    {
        case 0:
        return "MICHELLE";
        break;
        case 1:
        return "KATE";
        break;
        case 2:
        if (bParam1)
        {
            return "ALEX";
        }
        else
        {
            return "2HOT2HANDLE";
        }
        break;
        case 3:
        if (bParam1)
        {
            return "KIKI";
        }
        else
        {
            return "ECOWARRIOR";
        }
        break;
        case 4:
        if (bParam1)
        {
            return "CARMEN";
        }
        else
        {
            return "LCFINEST";
        }
        break;
    }
    return "[null]";
}

void sub_1186(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33)
{
    char[16] cVar36;

    WAIT( 0 );
    sub_1204( 1 );
    switch (uParam0._fU4)
    {
        case 0:
        StrCopy( ref cVar36, "GCMAUD", 16 );
        break;
        case 1:
        StrCopy( ref cVar36, "GCKAUD", 16 );
        break;
        case 2:
        StrCopy( ref cVar36, "GCAAUD", 16 );
        break;
        case 3:
        StrCopy( ref cVar36, "GCKKAUD", 16 );
        break;
        case 4:
        StrCopy( ref cVar36, "GCCAUD", 16 );
        break;
    }
    sub_1500( ref cVar36 );
    sub_1663( 0, sub_1614(), "NIKO", 0 );
    sub_1663( 1, l_U215, sub_1822( uParam0._fU4 ), 0 );
    sub_2006( "test1\n" );
    sub_2207( sub_2031( uParam0._fU8._fU36 ) );
    sub_2006( "test2\n" );
    return;
}

void sub_1204(unknown uParam0)
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

void sub_1500(unknown uParam0)
{
    StrCopy( ref l_U79._fU0, uParam0, 16 );
    sub_1519();
    return;
}

void sub_1519()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U79._fU16[I]._fU0 = nil;
        StrCopy( ref l_U79._fU16[I]._fU4, "", 32 );
        l_U79._fU344[I] = 0;
    }
    return;
}

void sub_1614()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1663(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U79._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U79._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_1747( "\n PED NUMBER ", uParam0 );
    sub_1787( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_1747(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1787(unknown uParam0, unknown uParam1)
{
    return;
}

string sub_1822(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return "MICHELLE";
        break;
        case 1:
        return "KATE_MCREARY";
        break;
        case 2:
        return "ALEX";
        break;
        case 3:
        return "KIKI";
        break;
        case 4:
        return "CARMEN";
        break;
    }
    return "DESCRIPTION";
}

void sub_2006(unknown uParam0)
{
    return;
}

int sub_2031(unknown uParam0)
{
    switch (uParam0)
    {
        case 6:
        return 1;
        break;
        case 5:
        return 3;
        break;
        case 9:
        return 6;
        break;
        case 7:
        return 7;
        break;
        case 8:
        return 5;
        break;
    }
    SCRIPT_ASSERT( "invalid type passed into GET_DATE_ACTIVITY_FROM_TYPE()" );
    return 9;
}

void sub_2207(int iParam0)
{
    if (NOT (g_U32898._fU4 == 9))
    {
        return;
    }
    if (iParam0 == 9)
    {
        return;
    }
    if (g_U32898._fU0 == 54)
    {
        return;
    }
    g_U32898._fU4 = iParam0;
    return;
}

int sub_2343(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    int iVar6;

    if (IS_PLAYER_PLAYING( sub_2352() ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if (IS_GROUP_MEMBER( uParam0, sub_2412() ))
            {
                if (IS_CHAR_SHOOTING( sub_1614() ))
                {
                    g_U32928[uParam1] = 8;
                    return 1;
                }
            }
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_1614(), 0 ))
            {
                if (NOT bParam3)
                {
                    g_U32928[uParam1] = 8;
                    return 1;
                }
            }
            if ((IS_GROUP_MEMBER( uParam0, sub_2412() )) AND (IS_CHAR_IN_MELEE_COMBAT( sub_1614() )))
            {
                if ((uParam2^) < 0)
                {
                    GET_GAME_TIMER( uParam2 );
                }
                else
                {
                    GET_GAME_TIMER( ref iVar6 );
                    if (iVar6 > ((uParam2^) + 5000))
                    {
                        g_U32928[uParam1] = 8;
                        return 1;
                    }
                    sub_2006( "  * IS_PLAYER_IN_MELEE_COMBAT_WITH_GIRL:" );
                    sub_2695( ((uParam2^) + 5000) - iVar6 );
                    sub_2916();
                }
            }
            else
            {
                (uParam2^) = -1;
            }
            if (g_U9082)
            {
                if (IS_GROUP_MEMBER( uParam0, sub_2412() ))
                {
                    REMOVE_CHAR_FROM_GROUP( uParam0 );
                }
                if (sub_3002( uParam0, 58 ))
                {
                    TASK_FLEE_CHAR_ANY_MEANS( uParam0, sub_1614(), 500.00000000, -1, 1, 1500, 3000, 50.00000000 );
                }
                return 1;
            }
            return 0;
        }
        else if (DOES_CHAR_EXIST( uParam0 ))
        {
            N_1363505769( uParam0, ref g_U33981[uParam1]._fU0, ref g_U33981[uParam1]._fU4, ref g_U33981[uParam1]._fU8 );
        }
        else
        {
            g_U33981[uParam1] = {0.00000000, 0.00000000, 0.00000000};
        }
        g_U32928[uParam1] = 6;
        return 1;;
        break;
    }
    g_U32928[uParam1] = 5;
    return 1;
}

void sub_2352()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_2412()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2695(unknown uParam0)
{
    if (g_U9231)
    {
        sub_2716( uParam0 );
    }
    return;
}

void sub_2716(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = (iParam0 / 1000) / 60;
    iVar4 = (iParam0 - ((iVar3 * 60) * 1000)) / 1000;
    iVar5 = iParam0 - ((iVar4 + (iVar3 * 60)) * 1000);
    if (iVar3 > 0)
    {
        PRINTINT( iVar3 );
        PRINTSTRING( ":" );
        if (iVar4 < 10)
        {
            PRINTSTRING( "0" );
        }
    }
    PRINTINT( iVar4 );
    PRINTSTRING( "." );
    PRINTINT( iVar5 );
    if (iVar5 < 10)
    {
        PRINTSTRING( "00" );
    }
    else if (iVar5 < 100)
    {
        PRINTSTRING( "0" );
    }
    return;
}

void sub_2916()
{
    if (g_U9231)
    {
        PRINTNL();
    }
    return;
}

int sub_3002(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_3278()
{
    if (l_U231 == 7)
    {
        if ((sub_3346( sub_1614(), "Bowl_GtaMloRoom" )) AND ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BOWLING_LANE" )) <= 0))
        {
            g_U32928[l_U216] = 8;
            l_U205 = 0;
            return 1;
        }
    }
    return 0;
}

int sub_3346(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    if (iVar4 == (GET_HASH_KEY( uParam1 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_3454(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33)
{
    switch (uParam0._fU8._fU36)
    {
        case 5:
        sub_2006( "  * ARRIVE_POOL_date_speech\n" );
        if (sub_3576( 10, ref l_U209, uParam0._fU124, uParam0._fU4, uParam0._fU128, 0 ))
        {
            return 1;
        }
        break;
        case 6:
        if (sub_3576( 7, ref l_U209, uParam0._fU124, uParam0._fU4, uParam0._fU128, 0 ))
        {
            return 1;
        }
        break;
        case 7:
        if (sub_3576( 12, ref l_U209, uParam0._fU124, uParam0._fU4, uParam0._fU128, 0 ))
        {
            return 1;
        }
        break;
        case 9:
        if (sub_3576( 13, ref l_U209, uParam0._fU124, uParam0._fU4, uParam0._fU128, 0 ))
        {
            return 1;
        }
        break;
        case 8:
        if (uParam0._fU128 == 53)
        {
            l_U206 = 1;
        }
        if (sub_3576( 11, ref l_U209, uParam0._fU124, uParam0._fU4, uParam0._fU128, 0 ))
        {
            return 1;
        }
        break;
        default: SCRIPT_ASSERT( "GOTTEN_TO_A_DATE_PLACE.this_date_place_struct.type invalid" );
    }
    return 0;
}

void sub_3576(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, boolean bParam5)
{
    char[16] cVar8;
    unknown[4] uVar12;
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
    char[16] cVar29;
    unknown uVar33;
    string sVar34;

    array(ref uVar12, 4);
    switch (iParam3)
    {
        case 0:
        StrCopy( ref cVar8, "GCM_", 16 );
        break;
        case 1:
        StrCopy( ref cVar8, "GCK_", 16 );
        break;
        case 2:
        StrCopy( ref cVar8, "GCA_", 16 );
        break;
        case 3:
        StrCopy( ref cVar8, "GCKK_", 16 );
        break;
        case 4:
        StrCopy( ref cVar8, "GCC_", 16 );
        break;
    }
    StrCopy( ref cVar29, sub_3724( iParam3, uParam0 ), 16 );
    switch (uParam0)
    {
        case 0:
        switch (uParam4)
        {
            case 1:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "PINTRO", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "INTRO", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (TIME_FIRST_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_6679( iParam3, 2, "TIME_FIRST_opinion" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 2:
            if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1614() )))
            {
                if (IS_CHAR_ON_ANY_BIKE( sub_1614() ))
                {
                    ConcatString(ref cVar8, "AMNL", 16);
                    sub_6679( iParam3, 2, "ACT_ARRIVEM_NOTLATE" );
                }
                else if (IS_CHAR_IN_ANY_CAR( sub_1614() ))
                {
                    ConcatString(ref cVar8, "ACNL", 16);
                    sub_6679( iParam3, 3, "ACT_ARRIVEC_NOTLATE" );
                }
                else if (IS_CHAR_ON_FOOT( sub_1614() ))
                {
                    ConcatString(ref cVar8, "AFNL", 16);
                    sub_6679( iParam3, 1, "ACT_ARRIVEF_NOTLATE" );
                }
                else
                {
                    PRINTSTRING( "PLAY_NEW_DATE_SPEECH.INTRO_date_speech - player on neither bike, car nor foot?" );
                    return 0;
                };;;
            }
            else
            {
                PRINTSTRING( "PLAY_NEW_DATE_SPEECH.INTRO_date_speech - player getting in to a car...\n" );
                return 0;
            }
            break;
            case 3:
            if (IS_CHAR_IN_ANY_CAR( sub_1614() ))
            {
                ConcatString(ref cVar8, "AL", 16);
                sub_6679( iParam3, -1, "ACT_ARRIVE_LATE" );
            }
            else if (IS_CHAR_ON_FOOT( sub_1614() ))
            {
                ConcatString(ref cVar8, "AFL", 16);
                sub_6679( iParam3, -1, "ACT_ARRIVEF_LATE" );
            }
            else
            {
                SCRIPT_ASSERT( "PLAY_NEW_DATE_SPEECH.INTRO_date_speech - player on neither car nor foot?" );
                return 0;
            }
            break;
            default: return 0;
        }
        break;
        case 5:
        switch (iParam3)
        {
            case 0:
            StrCopy( ref cVar8, "GCMC_", 16 );
            break;
            case 1:
            StrCopy( ref cVar8, "GCKC_", 16 );
            break;
            case 2:
            StrCopy( ref cVar8, "GCAC_", 16 );
            break;
            case 3:
            StrCopy( ref cVar8, "GCKKC_", 16 );
            break;
            case 4:
            StrCopy( ref cVar8, "GCCC_", 16 );
            break;
        }
        ConcatString(ref cVar8, "CON", 16);
        ConcatString(ref cVar8, g_U34005[iParam3], 16);
        g_U34005[iParam3]++;
        break;
        case 6:
        switch (iParam3)
        {
            case 0:
            StrCopy( ref cVar8, "GCMD_", 16 );
            break;
            case 1:
            StrCopy( ref cVar8, "GCKD_", 16 );
            break;
            case 2:
            StrCopy( ref cVar8, "GCAD_", 16 );
            break;
            case 3:
            StrCopy( ref cVar8, "GCKKD_", 16 );
            break;
            case 4:
            StrCopy( ref cVar8, "GCCD_", 16 );
            break;
        }
        ConcatString(ref cVar8, "DRU", 16);
        ConcatString(ref cVar8, g_U33999[iParam3], 16);
        g_U33999[iParam3]++;
        break;
        case 1:
        switch (uParam4)
        {
            case 8:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CG", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCG", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (CAR_GOOD_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_6679( iParam3, 2, "CAR_GOOD_date_opinion" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 9:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CB", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCB", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (CAR_BAD_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_6679( iParam3, -2, "CAR_BAD_date_opinion" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 10:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "COK", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCOK", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (CAR_OK_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_6679( iParam3, 1, "CAR_OK_date_opinion" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 11:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CBK", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCBK", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (CAR_BIKE1_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_6679( iParam3, 1, "CAR_BIKE1_date_opinion" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 12:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CN1", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCN1", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (CAR_NONE1_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_6679( iParam3, 1, "CAR_NONE1_date_opinion" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 16:
            ConcatString(ref cVar8, "CSG", 16);
            sub_6679( iParam3, 1, "CAR_OLD_GOOD_date_opinion" );
            break;
            case 17:
            ConcatString(ref cVar8, "CSB", 16);
            sub_6679( iParam3, -1, "CAR_OLD_BAD_date_opinion" );
            break;
            case 13:
            ConcatString(ref cVar8, "CNG", 16);
            sub_6679( iParam3, 1, "CAR_NEW_GOOD_date_opinion" );
            break;
            case 14:
            ConcatString(ref cVar8, "CNB", 16);
            sub_6679( iParam3, -1, "CAR_NEW_BAD_date_opinion" );
            break;
            case 15:
            sub_2006( "  * text_label_to_play: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref cVar8 );
            sub_2006( "_NULL'' (CAR_NEW_SAME_date_opinion)\n" );
            return 1;
            break;
            case 4:
            ConcatString(ref cVar8, "CN", 16);
            sub_6679( iParam3, 0, "CAR_NONE_date_opinion" );
            break;
            case 5:
            sub_2006( "  * text_label_to_play: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref cVar8 );
            sub_2006( "_NULL'' (CAR_BIKE_date_opinion)\n" );
            return 1;
            break;
            case 6:
            sub_2006( "  * text_label_to_play: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref cVar8 );
            sub_2006( "_NULL'' (CAR_TAXI_date_opinion)\n" );
            return 1;
            break;
            case 7:
            sub_2006( "  * text_label_to_play: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref cVar8 );
            sub_2006( "_NULL'' (CAR_OTHER_date_opinion)\n" );
            return 1;
            break;
            default: return 0;
        }
        break;
        case 2:
        switch (uParam4)
        {
            case 18:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CLG", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCLG", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (CLO_GOOD_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_6679( iParam3, 2, "CLO_GOOD_date_opinion" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 19:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CLOK", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCLOK", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (CLO_OK_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_6679( iParam3, 1, "CLO_OK_date_opinion" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 20:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CLUN", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCLUN", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (CLO_UNUSUAL_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_6679( iParam3, 1, "CLO_UNUSUAL_date_opinion" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 21:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "CLB", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "PCLB", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (CLO_BAD_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_6679( iParam3, -2, "CLO_BAD_date_opinion" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 22:
            ConcatString(ref cVar8, "TORG", 16);
            sub_6679( iParam3, 2, "CLO_TORSO_GOOD_date_opinion" );
            break;
            case 23:
            ConcatString(ref cVar8, "TORB", 16);
            sub_6679( iParam3, -1, "CLO_TORSO_BAD_date_opinion" );
            break;
            case 24:
            ConcatString(ref cVar8, "LG", 16);
            sub_6679( iParam3, 1, "CLO_LEGS_GOOD_date_opinion" );
            break;
            case 25:
            ConcatString(ref cVar8, "LB", 16);
            sub_6679( iParam3, -1, "CLO_LEGS_BAD_date_opinion" );
            break;
            case 26:
            ConcatString(ref cVar8, "FTG", 16);
            sub_6679( iParam3, 1, "CLO_FEET_GOOD_date_opinion" );
            break;
            case 27:
            ConcatString(ref cVar8, "FTB", 16);
            sub_6679( iParam3, -1, "CLO_FEET_BAD_date_opinion" );
            break;
            case 28:
            ConcatString(ref cVar8, "GLSG", 16);
            sub_6679( iParam3, 1, "CLO_GLASSES_GOOD_date_opinion" );
            break;
            case 29:
            ConcatString(ref cVar8, "GLSB", 16);
            sub_6679( iParam3, -1, "CLO_GLASSES_BAD_date_opinion" );
            break;
            case 30:
            ConcatString(ref cVar8, "NOGLSG", 16);
            sub_6679( iParam3, 1, "CLO_NOGLASSES_GOOD_date_opinion" );
            break;
            case 31:
            ConcatString(ref cVar8, "NOGLSB", 16);
            sub_6679( iParam3, -1, "CLO_NOGLASSES_BAD_date_opinion" );
            break;
            case 32:
            ConcatString(ref cVar8, "HATG", 16);
            sub_6679( iParam3, 1, "CLO_HAT_GOOD_date_opinion" );
            break;
            case 33:
            ConcatString(ref cVar8, "HATB", 16);
            sub_6679( iParam3, -1, "CLO_HAT_BAD_date_opinion" );
            break;
            case 34:
            ConcatString(ref cVar8, "NOHATG", 16);
            sub_6679( iParam3, 1, "CLO_NOHAT_GOOD_date_opinion" );
            break;
            case 35:
            ConcatString(ref cVar8, "NOHATB", 16);
            sub_6679( iParam3, -1, "CLO_NOHAT_BAD_date_opinion" );
            break;
            case 36:
            ConcatString(ref cVar8, "SMG", 16);
            sub_6679( iParam3, 3, "CLO_SAME_GOOD_date_opinion" );
            break;
            case 37:
            ConcatString(ref cVar8, "SMB", 16);
            sub_6679( iParam3, -3, "CLO_SAME_BAD_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 3:
        SCRIPT_ASSERT( "RADIO_date_speech" );
        return 1;
        break;
        case 4:
        uVar12[0] = {cVar8};
        ConcatString(ref uVar12[0], "HINT", 16);
        uVar12[1] = {cVar8};
        ConcatString(ref uVar12[1], "HINTR", 16);
        sub_2006( "  * text_labels_to_play[0]: ''" );
        sub_2006( ref cVar29 );
        sub_2006( "'', ''" );
        sub_2006( ref uVar12[0] );
        sub_2006( "'' (HINT_date_speech)\n" );
        sub_2006( "  * text_labels_to_play[1]: ''" );
        sub_2006( ref cVar29 );
        sub_2006( "'', ''" );
        sub_2006( ref uVar12[1] );
        sub_2006( "''\n" );
        return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
        break;
        case 24:
        switch (uParam4)
        {
            case 40:
            ConcatString(ref cVar8, "BTKHM", 16);
            sub_6679( iParam3, -2, "SILENCE_BORED_opinion" );
            break;
            case 41:
            ConcatString(ref cVar8, "BLV", 16);
            sub_6679( iParam3, -5, "SILENCE_LEAVE_opinion" );
            break;
            default: return 0;
        }
        break;
        case 7:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRDN", 16);
            break;
            case 43:
            ConcatString(ref cVar8, "ARRDB", 16);
            break;
            case 44:
            ConcatString(ref cVar8, "ARRDL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 8:
        switch (uParam4)
        {
            case 45:
            ConcatString(ref cVar8, "ARRPF", 16);
            break;
            case 47:
            ConcatString(ref cVar8, "ARRPG", 16);
            break;
            case 48:
            ConcatString(ref cVar8, "ARRCG", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 9:
        switch (uParam4)
        {
            case 49:
            ConcatString(ref cVar8, "ARRFF", 16);
            break;
            case 50:
            ConcatString(ref cVar8, "ARRHI", 16);
            break;
            case 51:
            ConcatString(ref cVar8, "ARRST", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 10:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRPN", 16);
            break;
            case 43:
            ConcatString(ref cVar8, "ARRPB", 16);
            break;
            case 44:
            ConcatString(ref cVar8, "ARRPL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 12:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRBN", 16);
            break;
            case 43:
            ConcatString(ref cVar8, "ARRBB", 16);
            break;
            case 44:
            ConcatString(ref cVar8, "ARRBL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 13:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRSTRN", 16);
            g_U34041 = GET_INT_STAT( 96 );
            break;
            case 43:
            ConcatString(ref cVar8, "ARRSTRB", 16);
            g_U34041 = GET_INT_STAT( 96 );
            break;
            case 44:
            ConcatString(ref cVar8, "ARRSTRL", 16);
            g_U34041 = GET_INT_STAT( 96 );
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 11:
        switch (uParam4)
        {
            case 52:
            if ((iParam3 == 1) || (iParam3 == 0))
            {
                ConcatString(ref cVar8, "ARRSHC", 16);
            }
            else
            {
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar33 );
                g_U32926 = uVar33;
                switch (g_U32926)
                {
                    case 0:
                    ConcatString(ref cVar8, "ARRSR", 16);
                    break;
                    case 1:
                    ConcatString(ref cVar8, "ARRSKW", 16);
                    break;
                    default: return 0;
                }
            }
            break;
            case 53:
            ConcatString(ref cVar8, "ARRSC", 16);
            break;
            case 54:
            ConcatString(ref cVar8, "ARRSHL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 14:
        switch (uParam4)
        {
            case 42:
            ConcatString(ref cVar8, "ARRWN", 16);
            break;
            case 43:
            ConcatString(ref cVar8, "ARRWB", 16);
            break;
            case 44:
            ConcatString(ref cVar8, "ARRWL", 16);
            break;
            case 46:
            ConcatString(ref cVar8, "DAXTNO", 16);
            break;
            default: return 0;
        }
        break;
        case 16:
        switch (uParam4)
        {
            case 55:
            ConcatString(ref cVar8, "DLW", 16);
            sub_6679( iParam3, 2, "LEAVE_WON_darts_date_opinion" );
            break;
            case 56:
            ConcatString(ref cVar8, "DLD", 16);
            sub_6679( iParam3, 0, "LEAVE_DREW_darts_date_opinion" );
            break;
            case 57:
            ConcatString(ref cVar8, "DLL", 16);
            sub_6679( iParam3, 1, "LEAVE_LOST_darts_date_opinion" );
            break;
            case 58:
            ConcatString(ref cVar8, "DLA", 16);
            sub_6679( iParam3, -1, "LEAVE_ABANDON_darts_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 15:
        switch (uParam4)
        {
            case 55:
            ConcatString(ref cVar8, "BLW", 16);
            sub_6679( iParam3, 2, "LEAVE_WON_bowl_date_opinion" );
            break;
            case 56:
            ConcatString(ref cVar8, "BLD", 16);
            sub_6679( iParam3, 0, "LEAVE_DREW_bowl_date_opinion" );
            break;
            case 57:
            ConcatString(ref cVar8, "BLL", 16);
            sub_6679( iParam3, 1, "LEAVE_LOST_bowl_date_opinion" );
            break;
            case 58:
            ConcatString(ref cVar8, "BLA", 16);
            sub_6679( iParam3, -1, "LEAVE_ABANDON_bowl_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 17:
        switch (uParam4)
        {
            case 62:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVVLF", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LVPLAY", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (LEAVE_VLADS_FIRST_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            if (sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 ))
            {
                g_U33850 = 1;
                return 1;
            }
            break;
            case 63:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVFAF", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LVFP", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (LEAVE_FAUSTINS_FIRST_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            if (sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 ))
            {
                g_U33849 = 1;
                return 1;
            }
            break;
            case 64:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVIRF", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LVIRD", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (LEAVE_IRISH_FIRST_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            if (sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 ))
            {
                g_U33851 = 1;
                return 1;
            }
            break;
            case 65:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVVLA", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LVDENY", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (LEAVE_VLADS_AGAIN_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 66:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "LVFA", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "LFDENY", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (LEAVE_FAUSTINS_AGAIN_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 67:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "GCM_LVIRA", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "GCM_LIDENY", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (LEAVE_IRISH_AGAIN_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 68:
            ConcatString(ref cVar8, "LPG", 16);
            break;
            case 69:
            ConcatString(ref cVar8, "LPF", 16);
            break;
            case 70:
            ConcatString(ref cVar8, "LCG", 16);
            break;
            default: return 0;
        }
        if (iParam3 == 0)
        {
            sub_2006( "  * text_label_to_play: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref cVar8 );
            sub_2006( "_NULL'' ()\n" );
            return 1;
        }
        break;
        case 18:
        switch (uParam4)
        {
            case 59:
            ConcatString(ref cVar8, "LVFF", 16);
            break;
            case 60:
            if (iParam3 == 0)
            {
                ConcatString(ref cVar8, "LVST", 16);
            }
            else
            {
                ConcatString(ref cVar8, "LVHI", 16);
            }
            break;
            case 61:
            ConcatString(ref cVar8, "LVST", 16);
            break;
            default: return 0;
        }
        break;
        case 19:
        switch (uParam4)
        {
            case 55:
            ConcatString(ref cVar8, "PLW", 16);
            sub_6679( iParam3, 2, "LEAVE_WON_pool_date_opinion" );
            break;
            case 56:
            ConcatString(ref cVar8, "PLD", 16);
            sub_6679( iParam3, 0, "LEAVE_DREW_pool_date_opinion" );
            break;
            case 57:
            ConcatString(ref cVar8, "PLL", 16);
            sub_6679( iParam3, 1, "LEAVE_LOST_pool_date_opinion" );
            break;
            case 58:
            ConcatString(ref cVar8, "PLA", 16);
            sub_6679( iParam3, -1, "LEAVE_ABANDON_pool_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 20:
        switch (uParam4)
        {
            case 72:
            ConcatString(ref cVar8, "LSHC", 16);
            sub_6679( iParam3, 2, "LEAVE_COMEDY_date_opinion" );
            break;
            case 73:
            sub_6679( iParam3, 2, "LEAVE_CABARET_date_opinion" );
            if (iParam3 != 0)
            {
                ConcatString(ref cVar8, "LSHCA", 16);
            }
            else
            {
                uVar12[0] = {cVar8};
                ConcatString(ref uVar12[0], "LSHCA", 16);
                if (NOT g_U33849)
                {
                    uVar12[1] = {cVar8};
                    ConcatString(ref uVar12[1], "LVFAF", 16);
                    uVar12[2] = {cVar8};
                    ConcatString(ref uVar12[2], "LVFP", 16);
                }
                else
                {
                    uVar12[1] = {cVar8};
                    ConcatString(ref uVar12[1], "LVFA", 16);
                    uVar12[2] = {cVar8};
                    ConcatString(ref uVar12[2], "LFDENY", 16);
                }
                sub_2006( "  * text_labels_to_play[0]: ''" );
                sub_2006( ref cVar29 );
                sub_2006( "'', ''" );
                sub_2006( ref uVar12[0] );
                sub_2006( "'' (LEAVE_CABARET_date_opinion - GF_MICHELLE)\n" );
                sub_2006( "  * text_labels_to_play[1]: ''" );
                sub_2006( ref cVar29 );
                sub_2006( "'', ''" );
                sub_2006( ref uVar12[1] );
                sub_2006( "''\n" );
                if (sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 ))
                {
                    g_U33849 = 1;
                    return 1;
                }
            }
            break;
            case 75:
            ConcatString(ref cVar8, "LSHE", 16);
            sub_6679( iParam3, -5, "LEAVE_EARLY_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 21:
        switch (uParam4)
        {
            case 74:
            ConcatString(ref cVar8, "LVSTOK", 16);
            sub_6679( iParam3, 3, "LEAVE_STRIP_date_opinion" );
            break;
            case 75:
            ConcatString(ref cVar8, "LVSTE", 16);
            sub_6679( iParam3, -2, "LEAVE_EARLY_date_opinion" );
            break;
            default: return 0;
        }
        break;
        case 22:
        switch (iParam3)
        {
            case 0:
            StrCopy( ref cVar8, "GCMC_", 16 );
            break;
            case 1:
            StrCopy( ref cVar8, "GCKC_", 16 );
            break;
            case 2:
            StrCopy( ref cVar8, "GCKA_", 16 );
            break;
            case 3:
            StrCopy( ref cVar8, "GCKKC_", 16 );
            break;
            case 4:
            StrCopy( ref cVar8, "GCCC_", 16 );
            break;
        }
        ConcatString(ref cVar8, "CON", 16);
        ConcatString(ref cVar8, g_U34005[iParam3], 16);
        g_U34005[iParam3]++;
        break;
        case 23:
        switch (uParam4)
        {
            case 76:
            ConcatString(ref cVar8, "HORN", 16);
            break;
            case 77:
            ConcatString(ref cVar8, "SPOT", 16);
            break;
            case 78:
            ConcatString(ref cVar8, "FUN", 16);
            break;
            case 79:
            ConcatString(ref cVar8, "NMOOD", 16);
            break;
            case 80:
            ConcatString(ref cVar8, "INNU", 16);
            break;
            default: return 0;
        }
        break;
        case 25:
        switch (uParam4)
        {
            case 81:
            ConcatString(ref cVar8, "EG", 16);
            break;
            case 82:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "EB", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "EBR", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (RETURN_BAD_date_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 83:
            ConcatString(ref cVar8, "EGY", 16);
            break;
            case 84:
            ConcatString(ref cVar8, "EGN", 16);
            break;
            case 89:
            ConcatString(ref cVar8, "NORSP", 16);
            break;
            default: return 0;
        }
        break;
        case 26:
        switch (uParam4)
        {
            case 85:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "EY", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "EREJ", 16);
            uVar12[2] = {cVar8};
            ConcatString(ref uVar12[2], "EREJR", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (END_A_PYES_GREJ_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_2006( "  * text_labels_to_play[2]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[2] );
            sub_2006( "''\n" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 86:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "EY", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "KISS", 16);
            uVar12[2] = {cVar8};
            ConcatString(ref uVar12[2], "KISSR", 16);
            uVar12[3] = {cVar8};
            ConcatString(ref uVar12[3], "KISSA", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (END_A_PYES_GKISS_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_2006( "  * text_labels_to_play[2]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[2] );
            sub_2006( "''\n" );
            sub_2006( "  * text_labels_to_play[3]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[3] );
            sub_2006( "''\n" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 87:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "EY", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "BONK", 16);
            uVar12[2] = {cVar8};
            ConcatString(ref uVar12[2], "RSP", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (END_A_PYES_GBONK_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            sub_2006( "  * text_labels_to_play[2]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[2] );
            sub_2006( "''\n" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 88:
            uVar12[0] = {cVar8};
            ConcatString(ref uVar12[0], "ENO", 16);
            uVar12[1] = {cVar8};
            ConcatString(ref uVar12[1], "NORSP", 16);
            sub_2006( "  * text_labels_to_play[0]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[0] );
            sub_2006( "'' (END_A_PNO_opinion)\n" );
            sub_2006( "  * text_labels_to_play[1]: ''" );
            sub_2006( ref cVar29 );
            sub_2006( "'', ''" );
            sub_2006( ref uVar12[1] );
            sub_2006( "''\n" );
            return sub_6980( ref uVar12, ref cVar29, uParam1, 6, 1 );
            break;
            case 89:
            ConcatString(ref cVar8, "NORSP", 16);
            break;
            default: return 0;
        }
        break;
        case 27:
        switch (iParam3)
        {
            case 0:
            sVar34 = "POST_MICHELLE";
            break;
            case 1:
            sVar34 = "POST_KATE";
            return 0;
            break;
            case 2:
            sVar34 = "POST_ALEX";
            break;
            case 3:
            sVar34 = "POST_KIKI";
            break;
            case 4:
            sVar34 = "POST_CARMEN";
            break;
            default: return 0;
        }
        SAY_AMBIENT_SPEECH( sub_1614(), sVar34, 1, 1, 3 );
        return 1;
        break;
    }
    if (bParam5)
    {
        sub_2006( "  * unpause text_label_to_play: ''" );
        sub_2006( ref cVar29 );
        sub_2006( "'', ''" );
        sub_2006( ref cVar8 );
        sub_2006( "''\n" );
        return sub_20899( ref cVar8, ref cVar29, uParam1, 6, 1 );
        break;
    }
    sub_2006( "  * text_label_to_play: ''" );
    sub_2006( ref cVar29 );
    sub_2006( "'', ''" );
    sub_2006( ref cVar8 );
    sub_2006( "''\n" );
    return sub_21069( ref cVar8, ref cVar29, uParam1, 6, 1 );
}

string sub_3724(int iParam0, unknown uParam1)
{
    char[16] cVar4;
    char[64] cVar8;
    char[64] cVar24;

    StrCopy( ref cVar4, "GC", 16 );
    switch (iParam0)
    {
        case 0:
        ConcatString(ref cVar4, "M", 16);
        break;
        case 1:
        ConcatString(ref cVar4, "K", 16);
        break;
        case 2:
        ConcatString(ref cVar4, "A", 16);
        break;
        case 3:
        ConcatString(ref cVar4, "KK", 16);
        break;
        case 4:
        ConcatString(ref cVar4, "C", 16);
        break;
    }
    switch (uParam1)
    {
        case 28:
        ConcatString(ref cVar4, "1", 16);
        break;
        case 3:
        PRINTSTRING( "  * get_this_date_speech_audio_block(RADIO_date_speech)\n" );
        break;
        case 0:
        case 1:
        case 2:
        case 4:
        case 7:
        case 8:
        case 9:
        case 10:
        case 12:
        case 13:
        case 11:
        case 14:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 24:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 16:
        case 15:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 25:
        case 26:
        case 23:
        ConcatString(ref cVar4, "3", 16);
        break;
        case 27:
        PRINTSTRING( "  * get_this_date_speech_audio_block(END_POST_COITUS_date_speech)\n" );
        return "";
        break;
        case 5:
        case 22:
        ConcatString(ref cVar4, "C", 16);
        if ((iParam0 == 0) AND (g_U34005[iParam0] <= 0))
        {
            StrCopy( ref cVar8, "invalid conversation_speech_num:", 64 );
            ConcatString(ref cVar8, g_U34005[iParam0], 64);
            SCRIPT_ASSERT( ref cVar8 );
        }
        else if (g_U34005[iParam0] <= 7)
        {
            ConcatString(ref cVar4, "1", 16);
        }
        else
        {
            ConcatString(ref cVar4, "2", 16);
            if (iParam0 == 0)
            {
                return "";
            }
        }
        break;
        case 6:
        ConcatString(ref cVar4, "DC", 16);
        break;
        case 29:
        while (true)
        {
            SCRIPT_ASSERT( "get_this_date_speech_audio_block(''NUMBER_OF_date_speech'')\n" );
            WAIT( 0 );
        }
        break;
        default:
        StrCopy( ref cVar24, "get_this_date_speech_audio_block(''", 64 );
        ConcatString(ref cVar24, sub_4612( uParam1 ), 64);
        ConcatString(ref cVar24, "'')\n", 64);
        while (true)
        {
            SCRIPT_ASSERT( ref cVar24 );
            WAIT( 0 );
        }
    }
    ConcatString(ref cVar4, "AUD", 16);
    if ((GET_LENGTH_OF_LITERAL_STRING( ref cVar4 )) > 0)
    {
        return GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING( ref cVar4, 7 );
        break;
    }
    return "null";
}

string sub_4612(unknown uParam0)
{
    char[64] cVar3;

    switch (uParam0)
    {
        case 0:
        return "INTRO_date_speech";
        break;
        case 5:
        return "CONVERSATION_THERE_date_speech";
        break;
        case 6:
        return "CONVERSATION_DRUNK_date_speech";
        break;
        case 1:
        return "CAR_date_speech";
        break;
        case 2:
        return "CLOTHES_date_speech";
        break;
        case 3:
        return "RADIO_date_speech";
        break;
        case 4:
        return " HINT_date_speech";
        break;
        case 7:
        return "ARRIVE_DARTS_date_speech";
        break;
        case 8:
        return "ARRIVE_DRINKING_date_speech";
        break;
        case 9:
        return "ARRIVE_EAT_date_speech";
        break;
        case 10:
        return "ARRIVE_POOL_date_speech";
        break;
        case 12:
        return "ARRIVE_BOWL_date_speech";
        break;
        case 13:
        return "ARRIVE_STRIP_date_speech";
        break;
        case 11:
        return "ARRIVE_SHOW_date_speech";
        break;
        case 14:
        return "ARRIVE_WALK_date_speech";
        break;
        case 16:
        return "LEAVE_DARTS_date_speech";
        break;
        case 15:
        return "LEAVE_BOWL_date_speech";
        break;
        case 17:
        return "LEAVE_DRINKING_date_speech";
        break;
        case 18:
        return "LEAVE_EAT_date_speech";
        break;
        case 19:
        return "LEAVE_POOL_date_speech";
        break;
        case 20:
        return "LEAVE_SHOW_date_speech";
        break;
        case 21:
        return "LEAVE_STRIP_date_speech";
        break;
        case 22:
        return "CONVERSATION_BACK_date_speech";
        break;
        case 23:
        return "SHAG_CARMEN_date_speech";
        break;
        case 24:
        return "SILENCE_date_speech";
        break;
        case 28:
        return "CELLPHONE_date_speech";
        break;
        case 25:
        while (true)
        {
            SCRIPT_ASSERT( "END_FIRST_DATE_good_date_speech - missing\n" );
            WAIT( 0 );
        }
        break;
        case 26:
        return "END_ANOTHER_DATE_bad_date_speech";
        break;
        case 27:
        return "END_POST_COITUS_date_speech";
        break;
        case 29:
        return "NUMBER_OF_date_speech";
        break;
    }
    StrCopy( ref cVar3, "GET_DATE_SPEECH_NAME(", 64 );
    ConcatString(ref cVar3, uParam0, 64);
    ConcatString(ref cVar3, ") not known!!\n", 64);
    SCRIPT_ASSERT( ref cVar3 );
    OPEN_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "ar_dating_speech - " );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar3 );
    CLOSE_DEBUG_FILE();
    return "";
}

void sub_6679(unknown uParam0, unknown uParam1, unknown uParam2)
{
    ProtectedSet(g_U34042[uParam0], ProtectedGet(g_U34042[uParam0]) + uParam1);
    if (ProtectedGet(g_U34042[uParam0]) > 100)
    {
        ProtectedSet(g_U34042[uParam0], 100);
    }
    else if (ProtectedGet(g_U34042[uParam0]) < 0)
    {
        ProtectedSet(g_U34042[uParam0], 0);
    }
    switch (uParam0)
    {
        case 0:
        SET_FLOAT_STAT( 36, ProtectedGet(g_U34042[uParam0]) );
        break;
        case 1:
        SET_FLOAT_STAT( 38, ProtectedGet(g_U34042[uParam0]) );
        break;
        case 2:
        SET_FLOAT_STAT( 32, ProtectedGet(g_U34042[uParam0]) );
        break;
        case 3:
        SET_FLOAT_STAT( 34, ProtectedGet(g_U34042[uParam0]) );
        break;
        case 4:
        SET_FLOAT_STAT( 30, ProtectedGet(g_U34042[uParam0]) );
        break;
    }
    return;
}

void sub_6980(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_7007( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7007(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7029( iParam1 )))
    {
        return 0;
    }
    l_U79._fU384 = 0;
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
    sub_7709( ref g_U8395, ref l_U79 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_7029(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_2006( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_2006( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_2006( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_7709(int iParam0, int iParam1)
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

int sub_20899(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_7007( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_21069(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7007( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_21554()
{
    if (NOT sub_21563())
    {
        if (NOT (IS_GROUP_MEMBER( l_U215, sub_2412() )))
        {
            if (DOES_BLIP_EXIST( l_U207 ))
            {
                REMOVE_BLIP( l_U207 );
                CLEAR_THIS_PRINT( l_U232 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U208 )))
            {
                ADD_BLIP_FOR_CHAR( l_U215, ref l_U208 );
                SET_BLIP_AS_FRIENDLY( l_U208, 1 );
                PRINT_STRING_IN_STRING_NOW( "GETBACK_FOOT", sub_375( l_U216, 1 ), 7500, 1 );
            }
            else if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_1614(), l_U215, 12.00000000, 12.00000000, 0 ))
            {
                SET_GROUP_MEMBER( sub_2412(), l_U215 );
            }
        }
        else if (DOES_BLIP_EXIST( l_U208 ))
        {
            REMOVE_BLIP( l_U208 );
            CLEAR_THIS_PRINT( "GETBACK_FOOT" );
        }
        if (NOT (DOES_BLIP_EXIST( l_U207 )))
        {
            ADD_BLIP_FOR_COORD( l_U223._fU0, l_U223._fU4, l_U223._fU8, ref l_U207 );
            if (l_U235)
            {
                PRINT_STRING_IN_STRING( l_U232, l_U230, 7500, 1 );
            }
            if ((NOT g_U9212) AND (l_U231 == 8))
            {
                g_U9212 = 1;
            }
            if ((NOT g_U9347) AND (l_U231 == 8))
            {
                g_U9347 = 1;
            }
        }
        else if (NOT (sub_21992( l_U209 )))
        {
            if (NOT l_U235)
            {
                PRINT_STRING_IN_STRING( l_U232, l_U230, 7500, 1 );
                l_U235 = 1;
            }
        };;;
    }
    else if (DOES_BLIP_EXIST( l_U207 ))
    {
        if (NOT l_U206)
        {
            REMOVE_BLIP( l_U207 );
        }
    }
    if (DOES_BLIP_EXIST( l_U208 ))
    {
        REMOVE_BLIP( l_U208 );
        CLEAR_THIS_PRINT( "GETBACK_FOOT" );
    }
    return 1;;
    return 0;
}

void sub_21563()
{
    return g_U10979;
}

int sub_21992(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_2006( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_2006( "\n speech is not playing" );
    }
    return 0;
}

