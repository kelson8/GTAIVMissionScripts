void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U108 = 0;
    l_U109 = 1;
    l_U110 = 3;
    l_U112 = 0;
    l_U113 = -1;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 0;
    l_U122 = -1;
    l_U136 = 15.00000000;
    l_U137 = 35.00000000;
    l_U138 = 16.00000000;
    l_U139 = 0.00000000;
    l_U145 = 1000.00000000;
    l_U146 = 7500.00000000;
    l_U155 = 1;
    l_U156 = 30.00000000;
    l_U157 = 30.00000000;
    l_U158 = 2.00000000;
    l_U168 = 0.00000000;
    l_U169 = 0.00000000;
    l_U181 = 1;
    l_U182 = 0;
    l_U183 = -1;
    l_U184 = 1;
    l_U185 = -1;
    l_U186 = -1;
    l_U187 = 15.00000000;
    l_U214 = 0;
    l_U215 = -1949702649;
    l_U216 = 2075870698;
    l_U221 = 0.12000000;
    l_U232 = 1;
    l_U233 = 1;
    l_U358 = 0;
    l_U359 = 2;
    l_U360 = -2089955402;
    l_U361 = -329861389;
    l_U362 = 723973206;
    l_U562 = 45.00000000;
    l_U563 = 0;
    l_U564 = 0;
    l_U565 = 0;
    l_U566 = 0;
    l_U567 = 0;
    l_U568 = 0;
    l_U569 = 0;
    l_U570 = "missStubbs3P";
    l_U571 = 11;
    l_U595 = 0;
    l_U596 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_465();
        sub_2901( l_U359, l_U363 );
        sub_2958();
    }
    l_U363 = sub_3017( l_U359 );
    sub_3128( "STUB3M2", 0 );
    sub_3128( "E1S3p2A", 6 );
    PRINT_BIG( "ContactMission", 5000, 2 );
    while (true)
    {
        WAIT( 0 );
        sub_3329();
        sub_3403();
        switch (l_U358)
        {
            case 0:
            sub_7713();
            g_U10460 = 0;
            break;
            case 1:
            l_U358 = 2;
            break;
            case 2:
            sub_9967();
            sub_10173();
            sub_10631();
            l_U358 = 3;
            break;
            case 3:
            sub_11766();
            sub_12014();
            break;
            case 4:
            sub_13550();
            break;
            case 5:
            sub_17451();
            sub_17615();
            break;
            case 6:
            GET_GAME_TIMER( ref l_U376 );
            l_U377 = l_U376 - l_U375;
            sub_12704( l_U584 );
            if (l_U377 > 3000)
            {
                CLEAR_PRINTS();
                CLEAR_WANTED_LEVEL( sub_597() );
                sub_18778();
                INCREMENT_INT_STAT( 145, 1 );
                g_U38702 = 1;
                g_U24 = 82;
                sub_25253( l_U359, l_U363, 5 );
                sub_25420( l_U359, "E1S3p2_KIL", "E1S3p2A", 0 );
                sub_2958();
            }
            break;
            case 7:
            if (g_U10991 > 1)
            {
                SET_PLAYER_MOOD_PISSED_OFF( sub_597(), 150 );
                SAY_AMBIENT_SPEECH( sub_3441(), "MISSION_FAIL_RAGE", 1, 1, 0 );
            }
            if (l_U563 == 1)
            {
                PRINT_NOW( "3M2Time", 7500, 1 );
                sub_25420( l_U359, "E1S3p2_LOSE", "E1S3p2A", 0 );
            }
            else if (l_U564 == 1)
            {
                PRINT_NOW( "3M2Killed", 7500, 1 );
                sub_25420( l_U359, "E1S3p2_OOPS", "E1S3p2A", 0 );
            }
            else if (l_U565 == 1)
            {
                PRINT_NOW( "3M2Away", 7500, 1 );
                sub_25420( l_U359, "E1S3p2_LOSE", "E1S3p2A", 0 );
            }
            else if (l_U566 == 1)
            {
                PRINT_NOW( "3M2Trash", 7500, 1 );
                sub_25420( l_U359, "E1S3p2_LOSE", "E1S3p2A", 0 );
            }
            else if (l_U567 == 1)
            {
                PRINT_NOW( "3M2Spooked", 7500, 1 );
                sub_25420( l_U359, "E1S3p2_LOSE", "E1S3p2A", 0 );
            };;;;;
            sub_465();
            sub_2901( l_U359, l_U363 );
            sub_2958();
            break;
        }
    }
    return;
}

void sub_465()
{
    sub_474();
    return;
}

void sub_474()
{
    int iVar2;

    iVar2 = 2;
    sub_488( iVar2 );
    sub_1434( iVar2 );
    return;
}

void sub_488(unknown uParam0)
{
    if (g_U816)
    {
        sub_507();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_597(), 150 );
    switch (uParam0)
    {
        case 2:
        case 8:
        sub_670( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1202( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1337();
    return;
}

void sub_507()
{
    sub_516();
    return;
}

void sub_516()
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

void sub_597()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_670(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_681( uParam1 );
    sub_876( uParam0, 0, uParam2 );
    sub_876( uParam0, 1, uParam3 );
    sub_876( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_1069();
    return;
}

void sub_681(unknown uParam0)
{
    ADD_SCORE( sub_597(), uParam0 );
    sub_706( uParam0 );
    return;
}

void sub_706(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_817( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_817(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_876(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1069()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U352[I] = 4;
    }
    return;
}

void sub_1202(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1337()
{
    sub_1346();
    return;
}

void sub_1346()
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

void sub_1434(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1202( "Flow_Quit_Proc_Subpart: Proc Mission not loaded" );
    }
    if (NOT g_U14838[uParam0]._fU160._fU96)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1202( "Flow_Quit_Proc_Subpart: Subpart not active" );
    }
    g_U14838[uParam0]._fU160._fU96 = 0;
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (g_U14838[uParam0]._fU160._fU100 < iVar3)
    {
        g_U14838[uParam0]._fU160._fU100 = iVar3 + 10000;
    }
    g_U12303 = 0;
    g_U12306[uParam0]._fU28 = 1;
    sub_1833();
    sub_2457();
    uVar4 = sub_2492( uParam0 );
    sub_2747( uVar4, 0 );
    sub_2828();
    return;
}

void sub_1833()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_1871( 5, g_U572[I] )) == 1))
        {
            if ((sub_1871( 1, g_U572[I] )) != 0)
            {
                sub_2157( I );
            }
        }
    }
    if (NOT sub_2323())
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

int sub_1871(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2157(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2242( g_U572 - 1 );
    return;
}

void sub_2242(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2323()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_1871( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2457()
{
    unknown uVar2;

    uVar2 = g_U10986;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

int sub_2492(unknown uParam0)
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
    sub_817( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_2747(int iParam0, boolean bParam1)
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

void sub_2828()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U20912 = iVar2 + 2000;
    return;
}

void sub_2901(unknown uParam0, unknown uParam1)
{
    g_U15862[uParam0]._fU228._fU12[uParam1] = 2;
    g_U15862[uParam0]._fU228._fU0 = 2;
    return;
}

void sub_2958()
{
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    g_U10460 = 1;
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_3017(unknown uParam0)
{
    int Result;

    for ( Result = 0; Result <= 14; Result++ )
    {
        switch (g_U15862[uParam0]._fU228._fU12[Result])
        {
            case 2:
            case 0:
            return Result;
            break;
        }
    }
    return -1;
}

void sub_3128(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3164())
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

int sub_3164()
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

void sub_3329()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        GET_GAME_TIMER( ref l_U375 );
        l_U358 = 6;
    }
    if (IS_KEYBOARD_KEY_PRESSED( 33 ))
    {
        l_U563 = 1;
        l_U358 = 7;
    }
    return;
}

void sub_3403()
{
    if (l_U358 == 3)
    {
        if (IS_VEH_DRIVEABLE( l_U585 ))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3441(), l_U585, 50.00000000, 50.00000000, 50.00000000, 0 )))
            {
                if (sub_3522( l_U572 ))
                {
                    l_U563 = 1;
                    l_U358 = 7;
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U583 ))
        {
            if (IS_CHAR_INJURED( l_U583 ))
            {
                l_U564 = 1;
                l_U358 = 7;
            }
        }
        if (DOES_VEHICLE_EXIST( l_U585 ))
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U585 )))
            {
                l_U566 = 1;
                l_U358 = 7;
            }
        }
    }
    if (sub_3882( l_U359 ))
    {
        g_U10991--;
        sub_4467( ref l_U598, "E1S3p_NO", ref l_U619 );
        sub_4467( ref l_U598, "E1S3p_NO2", ref l_U619 );
        sub_4620( ref l_U598, "E1S3AUD", 1 );
        sub_7594( "STUBBS" );
        l_U358 = 7;
    }
    return;
}

void sub_3441()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_3522(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_3691( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_3691(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

int sub_3882(unknown uParam0)
{
    if (g_U15862[uParam0]._fU4 == 1)
    {
        if (g_U15862[uParam0]._fU8[1]._fU0[5] == 1)
        {
            g_U15862[uParam0]._fU4 = 0;
            g_U15862[uParam0]._fU8[1]._fU0[5] = 0;
            if (sub_3975())
            {
                return 0;
            }
            if (sub_4105())
            {
                return 0;
            }
            sub_4367();
            return 1;
        }
    }
    return 0;
}

int sub_3975()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Brian" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Dave" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Malc1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Malc2" )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_4105()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    int I;
    int iVar10;

    fVar8 = 0.00000000;
    if (IS_CHAR_DEAD( sub_3441() ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( sub_3441(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    I = 0;
    for ( I = 0; I < 9; I++ )
    {
        if ((g_U18635[I]._fU24) || (g_U18635[I]._fU20))
        {
            return 1;
        }
        if (g_U18635[I]._fU0)
        {
            iVar10 = g_U18635[I]._fU180;
            if (NOT (iVar10 == 16))
            {
                uVar2 = {g_U10789[iVar10]._fU4};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref fVar8 );
                if (fVar8 < 500.00000000)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_4367()
{
    g_U814 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_4467(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((uParam2^) < (uParam0^))
    {
        StrCopy( ref (uParam0^)[(uParam2^)], uParam1, 16 );
        (uParam2^)++;
    }
    else
    {
        SCRIPT_ASSERT( "ADD_SPEECH_LABEL - increase the size of your array" );
    }
    return;
}

int sub_4620(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U94._fU60;
    if (bParam2)
    {
        return sub_4673( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U94._fU368)
    {
        StrCopy( ref g_U94._fU224[0], uParam1, 16 );
        g_U94._fU224[1] = {(uParam0^)[0]};
        sub_6572( uVar14, ref g_U94._fU176 );
        g_U94._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_4673(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_4743( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_4743( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_597() )))
    {
        sub_4743( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3441() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3441() )))
    {
        sub_4743( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_4743( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_5200()))
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
                sub_4743( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_5200()))
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
    sub_6572( uParam0, ref g_U94._fU176 );
    sub_6968( ref g_U94._fU160 );
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
        sub_7210( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_4743(unknown uParam0)
{
    return;
}

int sub_5200()
{
    if ((g_U94._fU52) || (g_U94._fU48))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_5257())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_5257()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_597() )))
    {
        sub_4743( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_4743( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_4743( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU104) || (g_U94._fU100))
    {
        sub_4743( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_597() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3441() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3441(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_4743( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3441() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_4743( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_4743( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_597() )))
    {
        sub_4743( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_6572(unknown uParam0, unknown uParam1)
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

void sub_6968(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

void sub_7210(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7594(unknown uParam0)
{
    StrCopy( ref g_U94._fU176, uParam0, 32 );
    return;
}

void sub_7713()
{
    REQUEST_MODEL( l_U360 );
    REQUEST_MODEL( l_U361 );
    REQUEST_MODEL( l_U362 );
    REQUEST_ANIMS( l_U570 );
    REQUEST_ANIMS( "Gestures@Niko" );
    while ((NOT (HAVE_ANIMS_LOADED( l_U570 ))) || ((NOT (HAS_MODEL_LOADED( l_U362 ))) || ((NOT (HAS_MODEL_LOADED( l_U361 ))) || (NOT (HAS_MODEL_LOADED( l_U360 ))))))
    {
        WAIT( 0 );
    }
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U590 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U591 );
    sub_7918( 0, sub_3441(), "JOHNNY", 0 );
    sub_7918( 1, l_U583, "LEAK", 0 );
    l_U378[0] = {-1196.02100000, 1424.28700000, 20.12600000};
    l_U538[0] = 46.44790000;
    l_U378[1] = {-1793.93500000, -25.84430000, 5.68490000};
    l_U538[1] = 172.93240000;
    l_U378[2] = {61.15090000, -330.78620000, 13.65750000};
    l_U538[2] = 0.53210000;
    l_U378[3] = {-374.66830000, 508.68710000, 13.65670000};
    l_U538[3] = 180.89620000;
    l_U378[4] = {672.06190000, 1652.50900000, 32.66150000};
    l_U538[4] = 1.07010000;
    l_U378[5] = {1294.82800000, 489.56500000, 26.29420000};
    l_U538[5] = 178.83370000;
    l_U378[6] = {1085.63100000, -265.71020000, 19.98010000};
    l_U538[6] = 89.11070000;
    l_U494[0] = {-1200.39600000, 1406.75700000, 21.06130000};
    l_U546[0] = 330.99960000;
    l_U494[1] = {-1790.38600000, -53.16420000, 6.32200000};
    l_U546[1] = 16.27530000;
    l_U494[2] = {49.16120000, -331.76060000, 13.74890000};
    l_U546[2] = 244.79430000;
    l_U494[3] = {-350.94550000, 509.70950000, 13.79970000};
    l_U546[3] = 72.37020000;
    l_U494[4] = {661.69510000, 1667.38900000, 32.68880000};
    l_U546[4] = 230.87250000;
    l_U494[5] = {1307.11900000, 480.77280000, 26.16940000};
    l_U546[5] = 55.70130000;
    l_U494[6] = {1083.76200000, -284.16860000, 20.09710000};
    l_U546[6] = 24.59070000;
    l_U403[0] = {-1196.23200000, 1426.76200000, 20.86834000};
    l_U447[0] = {8.02140700, -0.00000000, 174.45520000};
    l_U403[1] = {-1791.69500000, -25.08766000, 7.25427500};
    l_U447[1] = {-14.55528000, 0.00000000, 121.61060000};
    l_U403[2] = {58.90669000, -328.89100000, 14.90224000};
    l_U447[2] = {-0.33978000, -0.00000000, -145.28330000};
    l_U403[3] = {-375.26270000, 507.15990000, 14.63292000};
    l_U447[3] = {0.20361700, 0.00000000, -46.05637000};
    l_U403[4] = {671.36120000, 1653.72200000, 33.71217000};
    l_U447[4] = {6.10278400, 0.00000000, 172.56290000};
    l_U403[5] = {1296.83800000, 488.98120000, 27.89321000};
    l_U447[5] = {-9.15921400, 0.00000000, 55.45814000};
    l_U403[6] = {1087.33600000, -267.26220000, 21.14318000};
    l_U447[6] = {8.31545700, -0.00000000, 69.80347000};
    l_U425[0] = {-1195.90800000, 1426.80700000, 21.18521000};
    l_U469[0] = {-0.68755100, -0.00000000, 166.31920000};
    l_U425[1] = {-1791.34900000, -24.87458000, 7.35982800};
    l_U469[1] = {-14.55528000, 0.00000000, 121.61060000};
    l_U425[2] = {59.28258000, -329.43340000, 14.89833000};
    l_U469[2] = {-0.33978000, -0.00000000, -149.52320000};
    l_U425[3] = {-374.72150000, 507.97190000, 14.96008000};
    l_U469[3] = {-3.46331400, 0.00000000, -43.07696000};
    l_U425[4] = {671.43310000, 1654.27500000, 33.65265000};
    l_U469[4] = {6.10278400, 0.00000000, 172.56290000};
    l_U425[5] = {1297.22900000, 488.71250000, 27.96962000};
    l_U469[5] = {-9.15921400, 0.00000000, 55.45814000};
    l_U425[6] = {1086.59400000, -267.81920000, 21.47543000};
    l_U469[6] = {-3.12281700, -0.00000000, 37.81953000};
    l_U516[0] = {-1202.11000000, 1414.79800000, 21.11420000};
    l_U554[0] = 35.03100000;
    l_U516[1] = {-1786.90700000, -32.18000000, 6.30250000};
    l_U554[1] = 123.57360000;
    l_U516[2] = {50.99800000, -329.73470000, 13.62920000};
    l_U554[2] = 344.50000000;
    l_U516[3] = {-373.76410000, 523.15300000, 13.70950000};
    l_U554[3] = 178.20900000;
    l_U516[4] = {668.00410000, 1664.51600000, 32.47750000};
    l_U554[4] = 89.72230000;
    l_U516[5] = {1289.70600000, 500.71660000, 26.47860000};
    l_U554[5] = 224.28890000;
    l_U516[6] = {1099.91200000, -266.26500000, 19.76110000};
    l_U554[6] = 90.15210000;
    l_U364 = sub_9568();
    GET_GAME_TIMER( ref l_U372 );
    l_U358 = 1;
    return;
}

void sub_7918(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_7998( "\n PED NUMBER ", uParam0 );
    sub_7210( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_7998(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9568()
{
    unknown Result;

    GET_CHAR_COORDINATES( sub_3441(), ref l_U400._fU0, ref l_U400._fU4, ref l_U400._fU8 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref Result );
    while ((VDIST( l_U400, l_U378[Result] )) < 800)
    {
        PRINTNL();
        PRINTSTRING( "-----" );
        PRINTNL();
        PRINTSTRING( "Finding random locations for Stubbs3m2" );
        PRINTNL();
        PRINTSTRING( "-----" );
        GET_CHAR_COORDINATES( sub_3441(), ref l_U400._fU0, ref l_U400._fU4, ref l_U400._fU8 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref Result );
        WAIT( 0 );
    }
    sub_9804( Result );
    return Result;
}

void sub_9804(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;
    float fVar7;

    uVar3 = VDIST( l_U400, l_U378[uParam0] );
    fVar4 = 0.00077000;
    fVar5 = uVar3 * fVar4;
    uVar6 = FLOOR( fVar5 );
    fVar7 = fVar5 - uVar6;
    l_U365 = uVar6;
    l_U366 = FLOOR( fVar7 * 60 );
    return;
}

void sub_9967()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U585 )))
    {
        if (HAS_MODEL_LOADED( l_U362 ))
        {
            CREATE_CAR( l_U362, l_U378[l_U364]._fU0, l_U378[l_U364]._fU4, l_U378[l_U364]._fU8, ref l_U585, 1 );
            SET_CAR_HEADING( l_U585, l_U538[l_U364] );
            TURN_OFF_VEHICLE_EXTRA( l_U585, 1, 1 );
        }
        else
        {
            SCRIPT_ASSERT( "~Line 301: Contact Car model not in memory" );
        }
    }
    return;
}

void sub_10173()
{
    if (IS_VEH_DRIVEABLE( l_U585 ))
    {
        if (HAS_MODEL_LOADED( l_U360 ))
        {
            CREATE_CHAR_INSIDE_CAR( l_U585, 4, l_U360, ref l_U583 );
            SET_CHAR_RELATIONSHIP( l_U583, 0, 0 );
            if (NOT (IS_CHAR_INJURED( l_U583 )))
            {
                ADD_BLIP_FOR_CHAR( l_U583, ref l_U584 );
            }
            if (DOES_BLIP_EXIST( l_U584 ))
            {
                SET_BLIP_AS_FRIENDLY( l_U584, 1 );
                CHANGE_BLIP_DISPLAY( l_U584, 0 );
            }
            GIVE_WEAPON_TO_CHAR( l_U583, l_U571, 300, 0 );
            TASK_SWAP_WEAPON( l_U583, 0 );
            SET_CHAR_DECISION_MAKER( l_U583, l_U590 );
            SET_COMBAT_DECISION_MAKER( l_U583, l_U591 );
            SET_CHAR_IS_TARGET_PRIORITY( l_U583, 1 );
            LOCK_CAR_DOORS( l_U585, 3 );
            sub_10423();
        }
        else
        {
            SCRIPT_ASSERT( "~Line 328: Contact ped model not in memory" );
        }
    }
    return;
}

void sub_10423()
{
    unknown uVar2;
    vector vVar3;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    if (IS_VEH_DRIVEABLE( l_U585 ))
    {
        GET_CAR_MODEL( l_U585, ref uVar2 );
        GET_MODEL_DIMENSIONS( uVar2, ref vVar6, ref vVar3 );
        vVar9 = {vVar3 - vVar6};
        vVar9 = {vVar9 / 2.00000000};
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U585, -vVar9.x + 0.58000000, vVar9.y - 2.90000000, -1.00000000, ref l_U491._fU0, ref l_U491._fU4, ref l_U491._fU8 );
    }
    return;
}

void sub_10631()
{
    sub_10655( ref l_U572, l_U365, l_U366, 1 );
    l_U367 = l_U572._fU8._fU0;
    l_U368 = l_U572._fU8._fU4;
    sub_11284();
    if (DOES_BLIP_EXIST( l_U584 ))
    {
        CHANGE_BLIP_DISPLAY( l_U584, 4 );
        SET_ROUTE( l_U584, 1 );
    }
    while (NOT (HAVE_ANIMS_LOADED( "Gestures@Niko" )))
    {
        WAIT( 0 );
    }
    SET_CHAR_GESTURE_GROUP( sub_3441(), "Gestures@Niko" );
    return;
}

void sub_10655(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_10708( iParam0, uParam1, uParam2 );
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
        sub_10840( iParam0 + 0 );
    }
    return;
}

void sub_10708(int iParam0, int iParam1, int iParam2)
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
        sub_10840( iParam0 + 0 );
    }
    return;
}

void sub_10840(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_10871( iParam0->_fU4 )))
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

int sub_10871(unknown uParam0)
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

void sub_11284()
{
    if ((l_U368 < 10) AND (l_U367 == 24))
    {
        PRINT_WITH_NUMBER_NOW( "stubTime1", l_U368, 7500, 1 );
    }
    else if ((l_U368 >= 10) AND (l_U367 == 24))
    {
        PRINT_WITH_NUMBER_NOW( "stubTime2", l_U368, 7500, 1 );
    }
    else if ((l_U368 >= 10) AND (l_U367 >= 10))
    {
        PRINT_WITH_2_NUMBERS_NOW( "stubTime3", l_U367, l_U368, 7500, 1 );
    }
    else if ((l_U368 < 10) AND (l_U367 < 10))
    {
        PRINT_WITH_2_NUMBERS_NOW( "stubTime4", l_U367, l_U368, 7500, 1 );
    }
    else if ((l_U368 >= 10) AND (l_U367 < 10))
    {
        PRINT_WITH_2_NUMBERS_NOW( "stubTime5", l_U367, l_U368, 7500, 1 );
    }
    else if ((l_U368 < 10) AND (l_U367 >= 10))
    {
        PRINT_WITH_2_NUMBERS_NOW( "stubTime6", l_U367, l_U368, 7500, 1 );
    };;;;;;
    return;
}

void sub_11766()
{
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3441() )))
        {
            SET_CHAR_COORDINATES( sub_3441(), l_U494[l_U364]._fU0, l_U494[l_U364]._fU4, l_U494[l_U364]._fU8 );
        }
        else
        {
            WARP_CHAR_FROM_CAR_TO_COORD( sub_3441(), l_U494[l_U364]._fU0, l_U494[l_U364]._fU4, l_U494[l_U364]._fU8 );
        }
        LOAD_SCENE( l_U494[l_U364]._fU0, l_U494[l_U364]._fU4, l_U494[l_U364]._fU8 );
        SET_CHAR_HEADING( sub_3441(), l_U546[l_U364] );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    return;
}

void sub_12014()
{
    int iVar2;

    if (NOT (IS_CHAR_INJURED( l_U583 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3441(), l_U583, 9.00000000, 9.00000000, 7.00000000, 0 ))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_597(), 0 ))
            {
                sub_12097();
                l_U567 = 1;
                l_U358 = 7;
            }
            else if (NOT (sub_12269( sub_3441() )))
            {
                SET_PLAYER_CONTROL( sub_597(), 0 );
                if (IS_SCREEN_FADED_IN())
                {
                    DO_SCREEN_FADE_OUT( 3000 );
                }
                l_U358 = 4;
            }
        }
        if (IS_VEH_DRIVEABLE( l_U585 ))
        {
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U585, sub_3441() ))
            {
                sub_12097();
                l_U567 = 1;
                l_U358 = 7;
            }
        }
    }
    sub_12631();
    iVar2 = sub_12896( l_U572 );
    if (l_U568 == 0)
    {
        if (iVar2 < 11)
        {
            sub_13151();
            l_U568 = 1;
        }
    }
    return;
}

void sub_12097()
{
    if (IS_VEH_DRIVEABLE( l_U585 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U583 )))
        {
            if (NOT (sub_12147( l_U583, 16 )))
            {
                TASK_CAR_DRIVE_WANDER( l_U583, l_U585, 20.00000000, 2 );
            }
        }
    }
    return;
}

int sub_12147(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    }
    if (iVar4 != 7)
    {
        return 1;
        break;
    }
    return 0;
}

int sub_12269(int iParam0)
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
                if (sub_12333( uVar3 ))
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

int sub_12333(int iParam0)
{
    if ((iParam0 == g_U2784) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_12631()
{
    switch (l_U593)
    {
        case 0:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (IS_WANTED_LEVEL_GREATER( sub_597(), 0 ))
            {
                sub_12704( l_U584 );
                SET_ROUTE( l_U584, 0 );
                PRINT_NOW( "3M2Wanted", 7500, 1 );
                l_U593++;
            }
        }
        break;
        case 1:
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_597(), 0 )))
        {
            sub_11284();
            if (DOES_BLIP_EXIST( l_U584 ))
            {
                CHANGE_BLIP_DISPLAY( l_U584, 4 );
                SET_ROUTE( l_U584, 1 );
            }
            l_U593--;
        }
        break;
    }
    return;
}

void sub_12704(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        CHANGE_BLIP_DISPLAY( uParam0, 0 );
    }
    return;
}

int sub_12896(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int Result;
    int iVar13;

    if (sub_3522( uParam0 ))
    {
        return 0;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    iVar10 = 0;
    if ((uParam0._fU0._fU0 == iVar6) AND (uParam0._fU0._fU4 == iVar7))
    {
        iVar10 = (iVar8 * 60) + iVar9;
        iVar11 = (uParam0._fU8._fU0 * 60) + uParam0._fU8._fU4;
        return iVar11 - iVar10;
    }
    if (sub_3691( uParam0._fU0._fU0, uParam0._fU0._fU4, iVar6, iVar7, 1 ))
    {
        Result = (uParam0._fU8._fU0 * 60) + uParam0._fU8._fU4;
        iVar13 = 1440;
        iVar10 = (iVar8 * 60) + iVar9;
        Result += iVar13 - iVar10;
        return Result;
    }
    return 999999;
}

void sub_13151()
{
    if ((l_U368 < 10) AND (l_U367 == 24))
    {
        PRINT_WITH_NUMBER_NOW( "stub2Reminder1", l_U368, 7500, 1 );
    }
    else if ((l_U368 >= 10) AND (l_U367 == 24))
    {
        PRINT_WITH_NUMBER_NOW( "stub2Reminder2", l_U368, 7500, 1 );
    }
    else if ((l_U368 >= 10) AND (l_U367 >= 10))
    {
        PRINT_WITH_2_NUMBERS_NOW( "stub2Reminder3", l_U367, l_U368, 7500, 1 );
    }
    else if ((l_U368 < 10) AND (l_U367 < 10))
    {
        PRINT_WITH_2_NUMBERS_NOW( "stub2Reminder4", l_U367, l_U368, 7500, 1 );
    }
    else if ((l_U368 >= 10) AND (l_U367 < 10))
    {
        PRINT_WITH_2_NUMBERS_NOW( "stub2Reminder5", l_U367, l_U368, 7500, 1 );
    }
    else if ((l_U368 < 10) AND (l_U367 >= 10))
    {
        PRINT_WITH_2_NUMBERS_NOW( "stub2Reminder6", l_U367, l_U368, 7500, 1 );
    };;;;;;
    return;
}

void sub_13550()
{
    if ((l_U595 < 5) AND (l_U595 > 1))
    {
        if (sub_13579())
        {
            while (IS_SCREEN_FADING_IN())
            {
                WAIT( 0 );
            }
            sub_13707( 0 );
            DO_SCREEN_FADE_OUT( 3000 );
            while (IS_SCREEN_FADING_OUT())
            {
                WAIT( 0 );
            }
            INCREMENT_INT_STAT( 372, 1 );
            CLEAR_CHAR_TASKS( sub_3441() );
            l_U595 = 5;
        }
    }
    switch (l_U595)
    {
        case 0:
        if (IS_SCREEN_FADED_OUT())
        {
            if (NOT (IS_CHAR_INJURED( l_U583 )))
            {
                STOP_PED_SPEAKING( l_U583, 1 );
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3441() );
            sub_14059( l_U516[l_U364], l_U554[l_U364] );
            l_U595 = 1;
        }
        break;
        case 1:
        BEGIN_CAM_COMMANDS( ref l_U586 );
        CREATE_CAM( 14, ref l_U587 );
        SET_CAM_POS( l_U587, l_U403[l_U364]._fU0, l_U403[l_U364]._fU4, l_U403[l_U364]._fU8 );
        SET_CAM_ROT( l_U587, l_U447[l_U364]._fU0, l_U447[l_U364]._fU4, l_U447[l_U364]._fU8 );
        SET_CAM_FOV( l_U587, l_U562 );
        SET_CAM_ACTIVE( l_U587, 1 );
        SET_CAM_PROPAGATE( l_U587, 1 );
        CREATE_CAM( 14, ref l_U588 );
        SET_CAM_POS( l_U588, l_U425[l_U364]._fU0, l_U425[l_U364]._fU4, l_U425[l_U364]._fU8 );
        SET_CAM_ROT( l_U588, l_U469[l_U364]._fU0, l_U469[l_U364]._fU4, l_U469[l_U364]._fU8 );
        SET_CAM_FOV( l_U588, l_U562 );
        SET_CAM_ACTIVE( l_U588, 1 );
        SET_CAM_PROPAGATE( l_U588, 0 );
        CREATE_CAM( 3, ref l_U589 );
        SET_CAM_ACTIVE( l_U589, 1 );
        SET_CAM_PROPAGATE( l_U589, 0 );
        if (IS_VEH_DRIVEABLE( l_U585 ))
        {
            CLEAR_AREA( l_U378[l_U364]._fU0, l_U378[l_U364]._fU4, l_U378[l_U364]._fU8, 20.00000000, 1 );
            SET_CAR_COORDINATES( l_U585, l_U378[l_U364]._fU0, l_U378[l_U364]._fU4, l_U378[l_U364]._fU8 );
            SET_CAR_HEADING( l_U585, l_U538[l_U364] );
            SET_CAR_ON_GROUND_PROPERLY( l_U585 );
        }
        SET_PLAYER_CONTROL( sub_597(), 0 );
        sub_14802( sub_3441(), l_U491._fU0, l_U491._fU4, l_U491._fU8, l_U538[l_U364] - 90 );
        sub_14928( 1 );
        CLEAR_AREA_OF_CARS( l_U378[l_U364]._fU0, l_U378[l_U364]._fU4, l_U378[l_U364]._fU8, 40.00000000 );
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 3000 );
        }
        if (NOT (IS_CHAR_INJURED( l_U583 )))
        {
            ;
        }
        l_U595 = 2;
        break;
        case 2:
        if (DOES_CAM_EXIST( l_U587 ))
        {
            SET_CAM_PROPAGATE( l_U587, 0 );
        }
        if (DOES_CAM_EXIST( l_U589 ))
        {
            if (DOES_CAM_EXIST( l_U588 ))
            {
                if (DOES_CAM_EXIST( l_U587 ))
                {
                    SET_CAM_INTERP_STYLE_CORE( l_U589, l_U587, l_U588, 17000, 0 );
                }
            }
            SET_CAM_PROPAGATE( l_U589, 1 );
        }
        if (NOT (IS_CHAR_INJURED( l_U583 )))
        {
            TASK_PLAY_ANIM( l_U583, "lookout_driver_window", l_U570, 8.00000000, 1, 0, 0, 0, -2 );
            OPEN_SEQUENCE_TASK( ref l_U592 );
            TASK_PLAY_ANIM( 0, "player_lean_intro", l_U570, 1000.00000000, 0, 1, 1, 0, -2 );
            TASK_PLAY_ANIM( 0, "player_lean_loop", l_U570, 1000.00000000, 0, 1, 1, 0, -2 );
            TASK_PLAY_ANIM( 0, "player_lean_loop", l_U570, 1000.00000000, 0, 1, 1, 0, -2 );
            TASK_PLAY_ANIM( 0, "player_lean_loop", l_U570, 1000.00000000, 0, 1, 1, 0, -2 );
            TASK_PLAY_ANIM( 0, "player_lean_loop", l_U570, 1000.00000000, 0, 1, 1, 0, -2 );
            TASK_PLAY_ANIM( 0, "player_lean_loop", l_U570, 1000.00000000, 0, 1, 1, 0, -2 );
            TASK_PLAY_ANIM( 0, "player_lean_outro", l_U570, 1000.00000000, 0, 1, 1, 0, -2 );
            CLOSE_SEQUENCE_TASK( l_U592 );
            TASK_PERFORM_SEQUENCE( sub_3441(), l_U592 );
            CLEAR_SEQUENCE_TASK( l_U592 );
        }
        sub_15788( "E1S3p2_MEET", ref l_U577, 6, 1 );
        l_U595 = 3;
        break;
        case 3:
        if (NOT (sub_16754( l_U577 )))
        {
            sub_15788( "E1S3p2_LK", ref l_U577, 6, 1 );
            l_U595 = 4;
        }
        break;
        case 4:
        if (NOT (sub_16754( l_U577 )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3441(), 29, ref l_U576 );
            INCREMENT_INT_STAT( 373, 1 );
            l_U595 = 5;
        }
        break;
        case 5:
        if (DOES_CAM_EXIST( l_U587 ))
        {
            SET_CAM_ACTIVE( l_U587, 0 );
            SET_CAM_PROPAGATE( l_U587, 0 );
            DESTROY_CAM( l_U587 );
        }
        if (DOES_CAM_EXIST( l_U588 ))
        {
            SET_CAM_ACTIVE( l_U588, 0 );
            SET_CAM_PROPAGATE( l_U588, 0 );
            DESTROY_CAM( l_U588 );
        }
        if (DOES_CAM_EXIST( l_U589 ))
        {
            SET_CAM_ACTIVE( l_U589, 0 );
            SET_CAM_PROPAGATE( l_U589, 0 );
            DESTROY_CAM( l_U589 );
        }
        GET_GROUND_Z_FOR_3D_COORD( l_U491._fU0, l_U491._fU4, l_U491._fU8, ref l_U594 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3441() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL( sub_597(), 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_14928( 0 );
        END_CAM_COMMANDS( ref l_U586 );
        GET_GAME_TIMER( ref l_U369 );
        l_U595 = 6;
        break;
        case 6:
        GET_GAME_TIMER( ref l_U370 );
        l_U371 = l_U370 - l_U369;
        if (IS_VEH_DRIVEABLE( l_U585 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U583 )))
            {
                TASK_CAR_MISSION_PED_TARGET( l_U583, l_U585, sub_3441(), 8, 27.50000000, 2, 2, 5 );
            }
        }
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 3000 );
        }
        SET_PLAYER_CONTROL( sub_597(), 1 );
        l_U358 = 5;
        break;
    }
    return;
}

int sub_13579()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_13707(unknown uParam0)
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

void sub_14059(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;

    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar6 );
    if (IS_VEH_DRIVEABLE( uVar6 ))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( uVar6 )))
        {
            SET_CAR_AS_MISSION_CAR( uVar6 );
        }
        SET_LOAD_COLLISION_FOR_CAR_FLAG( uVar6, 0 );
        GET_CAR_MODEL( uVar6, ref uVar7 );
        if (IS_THIS_MODEL_A_CAR( uVar7 ))
        {
            CLOSE_ALL_CAR_DOORS( uVar6 );
        }
        SET_CAR_COORDINATES( uVar6, uParam0._fU0, uParam0._fU4, uParam0._fU8 );
        SET_CAR_HEADING( uVar6, uParam3 );
    }
    return;
}

void sub_14802(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if ((IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )) || (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
            SET_CHAR_HEADING( uParam0, uParam4 );
        }
        else
        {
            SET_CHAR_COORDINATES( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8 );
            SET_CHAR_HEADING( uParam0, uParam4 );
        }
    }
    return;
}

void sub_14928(boolean bParam0)
{
    SET_WIDESCREEN_BORDERS( bParam0 );
    if (IS_PLAYER_PLAYING( sub_597() ))
    {
        SET_PLAYER_CONTROL( sub_597(), NOT bParam0 );
    }
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_597(), bParam0 );
    ALLOW_EMERGENCY_SERVICES( NOT bParam0 );
    if (NOT (IS_CHAR_DEAD( sub_3441() )))
    {
        CLEAR_CHAR_TASKS( sub_3441() );
    }
    if (bParam0)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3441(), 1 );
    }
    else
    {
        sub_15068();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3441(), 0 );
    }
    return;
}

void sub_15068()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_15788(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_15809( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_15809(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_15863( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_15863(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_15885( iParam1 )))
    {
        return 0;
    }
    l_U2._fU384 = 0;
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
    sub_16561( ref g_U8947, ref l_U2 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_15885(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_4743( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_4743( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_4743( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_16561(int iParam0, int iParam1)
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

int sub_16754(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_4743( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_4743( "\n speech is not playing" );
    }
    return 0;
}

void sub_17451()
{
    if (IS_VEH_DRIVEABLE( l_U585 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3441(), l_U585, 100.00000000, 100.00000000, 100.00000000, 0 )))
        {
            if (l_U569 == 0)
            {
                PRINT_NOW( "3M2Getting", 7500, 1 );
                l_U569 = 1;
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3441(), l_U585, 50.00000000, 50.00000000, 50.00000000, 0 ))
        {
            l_U569 = 0;
        }
    }
    return;
}

void sub_17615()
{
    switch (l_U596)
    {
        case 0:
        if (IS_SCREEN_FADED_IN())
        {
            if (NOT (IS_CHAR_INJURED( l_U583 )))
            {
                if (IS_VEH_DRIVEABLE( l_U585 ))
                {
                    SET_WANTED_MULTIPLIER( 0.10000000 );
                    SET_CHAR_RELATIONSHIP( l_U583, 5, 0 );
                    if (DOES_BLIP_EXIST( l_U584 ))
                    {
                        SET_BLIP_AS_FRIENDLY( l_U584, 0 );
                        SET_ROUTE( l_U584, 0 );
                    }
                    sub_15788( "E1S3p2_ESC", ref l_U577, 1, 1 );
                    PRINT_NOW( "3M2KillHim", 7500, 1 );
                    STOP_PED_SPEAKING( l_U583, 1 );
                    l_U596 = 1;
                }
            }
            else if (IS_VEH_DRIVEABLE( l_U585 ))
            {
                LOCK_CAR_DOORS( l_U585, 1 );
            }
            GET_GAME_TIMER( ref l_U375 );
            l_U358 = 6;;
        }
        break;
        case 1:
        sub_17897( ref l_U583 );
        if (IS_CHAR_INJURED( l_U583 ))
        {
            if (IS_VEH_DRIVEABLE( l_U585 ))
            {
                LOCK_CAR_DOORS( l_U585, 1 );
            }
            GET_GAME_TIMER( ref l_U375 );
            l_U358 = 6;
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( l_U583, sub_3441(), 200.00000000, 200.00000000, 0 )))
        {
            l_U565 = 1;
            l_U358 = 7;
        }
        break;
    }
    return;
}

void sub_17897(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U120)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U118))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U119 + 500))
        {
            l_U118 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_18065()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3441() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U120)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U119 );
            l_U118 = 1;
            l_U117 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U118) AND (NOT l_U117))
        {
            if (l_U120)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U117 = 1;
        }
    }
    else if (l_U117)
    {
        if (l_U120)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U117 = 0;
    };;;
    return;
}

int sub_18065()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_18778()
{
    sub_18787();
    return;
}

void sub_18787()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 2;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_18814( iVar3, iVar4, iVar5 );
    sub_1434( iVar2 );
    return;
}

void sub_18814(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 2;
    sub_18846( iVar5, uParam0, uParam1, uParam2, "Contact_3" );
    return;
}

void sub_18846(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_18942( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_18942( ref cVar9 );
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
            sub_18942( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_18942( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_18942( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_18942( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_19519( uParam0, iVar7 );;;
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
    if (NOT (sub_19967( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_597() );
    sub_1833();
    bVar28 = true;
    uVar29 = sub_19519( uParam0, iVar7 );
    uVar30 = sub_2492( uParam0 );
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
                sub_23905( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((g_U12303) AND (NOT bVar28))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_24339();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_24424( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_24503( uParam0 );
                sub_24676( 0 );
                sub_2747( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_24865();
        }
    }
    if (bParam2)
    {
        sub_24339();
        sub_24964();
        sub_24676( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_24339();
        sub_25016();
        sub_24676( 0 );
        sub_2747( uVar30, 0 );
    }
    sub_25067();
    return;
}

void sub_18942(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_19519(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_817( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_19967(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_20063( uParam1 );
        break;
        case 1:
        bVar8 = sub_20372( uParam1 );
        break;
        case 2:
        bVar8 = sub_20975( uParam1 );
        break;
        case 3:
        bVar8 = sub_21212( uParam1 );
        break;
        case 4:
        bVar8 = sub_21378( uParam1 );
        break;
        case 5:
        bVar8 = sub_21577( uParam1 );
        break;
        case 6:
        bVar8 = sub_21772( uParam1 );
        break;
        case 7:
        bVar8 = sub_21977( uParam1 );
        break;
        case 8:
        bVar8 = sub_22182( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1202( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_19519( uParam0, uParam1 );
    if (bParam3)
    {
        sub_22468( uVar9, uParam0 );
    }
    return 1;
}

int sub_20063(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_670( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_670( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_670( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_670( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_670( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_670( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_20279( "Contact 1", 1 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20279( "Contact 1", 0 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_20279(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_20372(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_670( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_670( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_670( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_670( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_670( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_670( iVar3, 0, sub_20598(), sub_20734(), 0, 0 );
        break;
        default:
        sub_20279( "Contact 2", 1 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20279( "Contact 2", 0 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20598()
{
    switch (l_U352[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1202( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

int sub_20734()
{
    switch (l_U352[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1202( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_20975(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_670( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_670( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_670( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_670( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_20279( "Contact 3", 1 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20279( "Contact 3", 0 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21212(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_670( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_670( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_20279( "Friend 4", 1 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20279( "Friend 4", 0 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21378(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_670( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_670( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_670( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_20279( "Contact 5", 1 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20279( "Contact 5", 0 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21577(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_670( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_670( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_670( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_20279( "Contact 6", 1 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20279( "Contact 6", 0 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21772(unknown uParam0)
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
        sub_670( iVar3, 0, sub_20598(), sub_20734(), 0, 0 );
        break;
        default:
        sub_20279( "Friend 7", 1 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20279( "Friend 7", 0 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21977(unknown uParam0)
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
        sub_670( iVar3, 0, sub_20598(), sub_20734(), 0, 0 );
        break;
        default:
        sub_20279( "Friend 8", 1 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20279( "Friend 8", 0 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22182(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_670( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_20279( "Contact 9", 1 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_20279( "Contact 9", 0 );
        sub_670( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_22468(int iParam0, int iParam1)
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
    if (sub_22529( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_23247( iParam1 );
    }
    return;
}

int sub_22529(int iParam0, int iParam1)
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
            sub_22669( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_22669(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_22839( 0 );
    return;
}

void sub_22839(boolean bParam0)
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
        sub_23084();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_23084()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_23247(int iParam0)
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
        sub_23478( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_23478( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_23478( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_23478( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_23478( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_23478( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_23478(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_23905(unknown uParam0, unknown uParam1)
{
    sub_23924( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_23924(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_24339()
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

int sub_24424(int iParam0, int iParam1)
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

void sub_24503(unknown uParam0)
{
    sub_24512();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_24512()
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

void sub_24676(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_24727( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_24727(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_24865()
{
    sub_24874();
    return;
}

void sub_24874()
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

void sub_24964()
{
    sub_24874();
    return;
}

void sub_25016()
{
    sub_24874();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_25067()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_25089();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_25089()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_25253(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U15862[uParam0]._fU228._fU12[uParam1] = 1;
    g_U15862[uParam0]._fU228._fU0 = 1;
    return sub_25306( uParam0, uParam2 );
}

int sub_25306(unknown uParam0, int iParam1)
{
    int I;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if (g_U15862[uParam0]._fU228._fU12[I] != 1)
        {
            return 0;
        }
    }
    return 1;
}

void sub_25420(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_25464( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_25464(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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
    if (NOT (IS_THREAD_ACTIVE( g_U815 )))
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
        g_U814 = 1;
        g_U815 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

