void main()
{
    unknown[5] uVar2;
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

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U100 = 0;
    l_U101 = 1;
    l_U102 = 3;
    l_U108 = 0;
    l_U109 = -1;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U118 = -1;
    l_U132 = 15.00000000;
    l_U133 = 35.00000000;
    l_U134 = 16.00000000;
    l_U135 = 0.00000000;
    l_U141 = 1000.00000000;
    l_U142 = 7500.00000000;
    l_U151 = 1;
    l_U152 = 30.00000000;
    l_U153 = 30.00000000;
    l_U154 = 2.00000000;
    l_U164 = 0.00000000;
    l_U165 = 0.00000000;
    l_U177 = 1;
    l_U178 = 0;
    l_U179 = -1;
    l_U180 = 1;
    l_U181 = -1;
    l_U182 = -1;
    l_U183 = 15.00000000;
    l_U210 = 0;
    l_U211 = -1949702649;
    l_U212 = 2075870698;
    l_U217 = 0.12000000;
    l_U228 = 1;
    l_U229 = 1;
    l_U354 = {0.00000000, 0.00000000, 0.00000000};
    l_U472 = {1.00000000, 1.00000000, 1.00000000};
    l_U475 = {0.00000000, 1.00000000, 0.00000000};
    l_U478 = {0.00000000, -1.00000000, 0.00000000};
    l_U491 = 0;
    l_U492 = 0;
    l_U503 = 100.00000000;
    l_U504 = 10.50000000;
    l_U505 = 0.50000000;
    l_U506 = 2.85000000;
    l_U511 = 2;
    l_U513 = 0;
    l_U514 = 0;
    l_U515 = 0;
    l_U516 = 0;
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 0;
    l_U521 = 0;
    l_U522 = {0, 0, 0};
    l_U525 = {25.52580000, 987.92020000, 13.64790000};
    l_U528 = {0, 0, 0};
    l_U531 = {34.10600000, 986.20400000, 13.52250000};
    l_U534 = {34.04950000, 979.98830000, 13.51720000};
    l_U537 = 139.60380000;
    l_U574 = 980990533;
    l_U575 = 1530937394;
    l_U576 = 824245375;
    l_U577 = 1348744438;
    l_U578 = 486987393;
    l_U594 = 0;
    SET_MISSION_FLAG( 1 );
    sub_671();
    l_U512 = sub_4134( l_U511 );
    array(ref uVar2, 5);
    sub_4238();
    l_U519 = 0;
    PRINT_BIG( "CafeMission", 5000, 2 );
    l_U513 = 1;
    while (l_U513)
    {
        WAIT( 0 );
        switch (l_U519)
        {
            case 0:
            sub_4702();
            break;
            case 1:
            sub_7670();
            break;
            case 2:
            sub_10491();
            break;
            case -1: break;
        }
        if (sub_12348( l_U511 ))
        {
            g_U10991--;
            sub_12928( ref uVar2, "E1S3p_NO", ref uVar23 );
            sub_12928( ref uVar2, "E1S3p_NO2", ref uVar23 );
            sub_13073( ref uVar2, "E1S3AUD", 1 );
            sub_16023( "STUBBS" );
            sub_16053( 0 );
        }
        if (l_U515 == 1)
        {
            CLEAR_HELP();
            sub_16798();
            sub_3197();
        }
        else if (l_U514 == 1)
        {
            CLEAR_HELP();
            sub_16053( 1 );
            sub_3197();
        }
    }
    sub_3197();
    return;
}

void sub_671()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_692();
        sub_3128( l_U511, l_U512 );
        l_U514 = 1;
        l_U519 = -1;
        sub_3197();
    }
    return;
}

void sub_692()
{
    sub_701();
    return;
}

void sub_701()
{
    int iVar2;

    iVar2 = 2;
    sub_715( iVar2 );
    sub_1661( iVar2 );
    return;
}

void sub_715(unknown uParam0)
{
    if (g_U816)
    {
        sub_734();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_824(), 150 );
    switch (uParam0)
    {
        case 2:
        case 8:
        sub_897( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1429( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1564();
    return;
}

void sub_734()
{
    sub_743();
    return;
}

void sub_743()
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

void sub_824()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_897(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_908( uParam1 );
    sub_1103( uParam0, 0, uParam2 );
    sub_1103( uParam0, 1, uParam3 );
    sub_1103( uParam0, 2, uParam4 );
    ProtectedSet(g_U20902[4], ProtectedGet(g_U20902[4]) + iParam5);
    sub_1296();
    return;
}

void sub_908(unknown uParam0)
{
    ADD_SCORE( sub_824(), uParam0 );
    sub_933( uParam0 );
    return;
}

void sub_933(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1044( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_1044(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1103(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1296()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U348[I] = 4;
    }
    return;
}

void sub_1429(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1564()
{
    sub_1573();
    return;
}

void sub_1573()
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

void sub_1661(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (NOT g_U14838[uParam0]._fU160._fU80)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1429( "Flow_Quit_Proc_Subpart: Proc Mission not loaded" );
    }
    if (NOT g_U14838[uParam0]._fU160._fU96)
    {
        PRINTSTRING( "Flow_Quit_Proc_Subpart error - strand = " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1429( "Flow_Quit_Proc_Subpart: Subpart not active" );
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
    sub_2060();
    sub_2684();
    uVar4 = sub_2719( uParam0 );
    sub_2974( uVar4, 0 );
    sub_3055();
    return;
}

void sub_2060()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((g_U572[I]._fU20) AND ((sub_2098( 5, g_U572[I] )) == 1))
        {
            if ((sub_2098( 1, g_U572[I] )) != 0)
            {
                sub_2384( I );
            }
        }
    }
    if (NOT sub_2550())
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

int sub_2098(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2384(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_2469( g_U572 - 1 );
    return;
}

void sub_2469(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_2550()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_2098( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2684()
{
    unknown uVar2;

    uVar2 = g_U10986;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

int sub_2719(unknown uParam0)
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
    sub_1044( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 22;
}

void sub_2974(int iParam0, boolean bParam1)
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

void sub_3055()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U20912 = iVar2 + 2000;
    return;
}

void sub_3128(unknown uParam0, unknown uParam1)
{
    g_U15862[uParam0]._fU228._fU12[uParam1] = 2;
    g_U15862[uParam0]._fU228._fU0 = 2;
    return;
}

void sub_3197()
{
    int I;

    sub_3206();
    sub_3286();
    sub_3366();
    DESTROY_ALL_CAMS();
    ENABLE_SCENE_STREAMING( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    g_U10956 = 0;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    if (DOES_BLIP_EXIST( l_U556 ))
    {
        REMOVE_BLIP( l_U556 );
    }
    if (DOES_BLIP_EXIST( l_U563 ))
    {
        REMOVE_BLIP( l_U563 );
    }
    if (sub_3570( l_U538 ))
    {
        sub_3754( ref l_U538, 0 );
    }
    if (DOES_CHAR_EXIST( l_U544 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U544 );
    }
    I = 0;
    for ( I = 0; I <= 4; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U545[I] )))
        {
            SET_CHAR_KEEP_TASK( l_U545[I], 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U545[I] );
        }
    }
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    g_U10460 = 1;
    sub_4013( l_U511 );
    sub_4062( l_U511 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3206()
{
    int I;

    if (l_U585 != 0)
    {
        for ( I = 0; I <= (l_U585 - 1); I++ )
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U579[I] );
        }
    }
    l_U585 = 0;
    return;
}

void sub_3286()
{
    int I;

    if (l_U589 != 0)
    {
        for ( I = 0; I <= (l_U589 - 1); I++ )
        {
            REMOVE_ANIMS( l_U586[I] );
        }
    }
    l_U589 = 0;
    return;
}

void sub_3366()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U590[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U590[I] );
        }
    }
    return;
}

int sub_3570(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_3682( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_3682( "\n speech is not playing" );
    }
    return 0;
}

void sub_3682(unknown uParam0)
{
    return;
}

void sub_3754(int iParam0, unknown uParam1)
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

void sub_4013(int iParam0)
{
    if (g_U94._fU68 == iParam0)
    {
        g_U94._fU68 = -1;
    }
    return;
}

void sub_4062(int iParam0)
{
    if (g_U94._fU72 == iParam0)
    {
        g_U94._fU72 = -1;
    }
    return;
}

int sub_4134(unknown uParam0)
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

void sub_4238()
{
    l_U501 = sub_4247();
    l_U502 = sub_824();
    while (NOT sub_4303())
    {
        WAIT( 0 );
    }
    SET_CAR_DENSITY_MULTIPLIER( 0.40000000 );
    sub_4430( "STUB3M7", 0 );
    sub_4430( "E1S3p3A", 6 );
    g_U10460 = 0;
    return;
}

void sub_4247()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_4303()
{
    int I;

    if (l_U585 != 0)
    {
        for ( I = 0; I <= (l_U585 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U579[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_4430(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4466())
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

int sub_4466()
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

void sub_4702()
{
    if (l_U516 == 0)
    {
        if (NOT (DOES_BLIP_EXIST( l_U563 )))
        {
            ADD_BLIP_FOR_COORD( l_U525._fU0, l_U525._fU4, l_U525._fU8, ref l_U563 );
            SET_ROUTE( l_U563, 1 );
        }
        PRINT_NOW( "JS_COMMAND_01", 7500, 1 );
        l_U516 = 1;
    }
    if (((sub_4883() == 1) AND (l_U517 == 0)) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_4247(), l_U525._fU0, l_U525._fU4, l_U525._fU8, 120.00000000, 120.00000000, 120.00000000, 0 )) AND (l_U517 == 0)))
    {
        sub_5195();
        sub_5486();
        sub_5597();
        sub_6065();
        sub_6971();
        sub_7246();
        if (NOT (IS_CHAR_DEAD( l_U544 )))
        {
            if (DOES_BLIP_EXIST( l_U563 ))
            {
                REMOVE_BLIP( l_U563 );
            }
            if (NOT (DOES_BLIP_EXIST( l_U556 )))
            {
                ADD_BLIP_FOR_CHAR( l_U544, ref l_U556 );
                SET_BLIP_AS_FRIENDLY( l_U556, 0 );
                SET_ROUTE( l_U556, 1 );
            }
        }
        PRINT_NOW( "JS_COMMAND_02", 7500, 1 );
        l_U517 = 1;
        l_U519++;
    }
    return;
}

int sub_4883()
{
    if (sub_4897( sub_4247() ))
    {
        if (IS_SCREEN_FADING_IN())
        {
            return 1;
        }
    }
    return 0;
}

int sub_4897(int iParam0)
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
                if (sub_4961( uVar3 ))
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

int sub_4961(int iParam0)
{
    if ((iParam0 == g_U2784) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_5195()
{
    # -sub_C1FFC0-0xc214c8( 2, ref l_U567 );
    # -sub_C1FFC0-0xc214c8( 3, ref l_U566 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U564 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U569 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U569, 0 );
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U570 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U570, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_CAUTION( l_U570, 2 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U572 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U568 );
    sub_5332( l_U574 );
    sub_5332( l_U575 );
    sub_5332( l_U576 );
    while (NOT sub_4303())
    {
        WAIT( 0 );
        PRINTSTRING( "\n -----> Waiting for models to load...\n\n" );
    }
    return;
}

void sub_5332(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U579[l_U585] = uParam0;
    l_U585++;
    return;
}

void sub_5486()
{
    sub_5332( l_U577 );
    sub_5332( l_U578 );
    while (NOT sub_4303())
    {
        WAIT( 0 );
        PRINTSTRING( "\n -----> Waiting for models to load...\n\n" );
    }
    return;
}

void sub_5597()
{
    CREATE_CHAR( 26, l_U574, l_U525._fU0 - 0.40000000, l_U525._fU4 + 0.20000000, l_U525._fU8, ref l_U544, 1 );
    SET_CHAR_HEADING( l_U544, l_U537 + 35 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U544, 24 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U544 );
    sub_5724( 1, l_U544, "POLITICIAN", 0 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U544, 1 );
    ALLOW_TARGET_WHEN_INJURED( l_U544, 1 );
    SET_CHAR_DECISION_MAKER( l_U544, l_U567 );
    SET_COMBAT_DECISION_MAKER( l_U544, l_U569 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U544, 1 );
    SET_CHAR_AS_ENEMY( l_U544, 1 );
    SET_CHAR_RELATIONSHIP( l_U544, 2, 0 );
    SET_CHAR_RELATIONSHIP( l_U544, 1, 24 );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U544, 9, 25000, 0 );
    SET_CHAR_ACCURACY( l_U544, 70 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U544, "IS_RockCafe1" );
    TASK_SIT_DOWN_INSTANTLY( l_U544, 0, 2, -2 );
    return;
}

void sub_5724(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5804( "\n PED NUMBER ", uParam0 );
    sub_5844( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5804(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5844(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6065()
{
    int I;

    CREATE_CHAR( 26, l_U575, 17.85080000, 981.19810000, 14.64100000, ref l_U545[0], 1 );
    SET_CHAR_HEADING( l_U545[0], 97.10520000 );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U545[0], 13, 25000, 0 );
    SET_CHAR_ACCURACY( l_U545[0], 30 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U545[0], "IS_RockCafe1" );
    CREATE_CHAR( 26, l_U575, l_U525._fU0 + 0.25000000, l_U525._fU4 - 4.88000000, l_U525._fU8 + 0.10000000, ref l_U545[1], 1 );
    SET_CHAR_HEADING( l_U545[1], l_U537 + 260 );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U545[1], 9, 25000, 0 );
    SET_CHAR_ACCURACY( l_U545[1], 40 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U545[1], "IS_RockCafe1" );
    TASK_SIT_DOWN_INSTANTLY( l_U545[1], 0, 2, -2 );
    CREATE_CHAR( 26, l_U575, 27.65490000, 981.81340000, 13.66330000, ref l_U545[2], 1 );
    SET_CHAR_HEADING( l_U545[2], 275.56500000 );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U545[2], 13, 25000, 0 );
    SET_CHAR_ACCURACY( l_U545[2], 30 );
    CREATE_CHAR( 26, l_U575, 19.50830000, 976.41700000, 14.64090000, ref l_U545[3], 1 );
    SET_CHAR_HEADING( l_U545[3], 298.96160000 );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U545[3], 13, 25000, 0 );
    SET_CHAR_ACCURACY( l_U545[3], 30 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U545[3], "IS_RockCafe1" );
    CREATE_CHAR( 26, l_U575, l_U525._fU0 - 3.97000000, l_U525._fU4 + 1.77000000, l_U525._fU8 + 0.10000000, ref l_U545[4], 1 );
    SET_CHAR_HEADING( l_U545[4], l_U537 + 80 );
    GIVE_DELAYED_WEAPON_TO_CHAR( l_U545[4], 9, 25000, 0 );
    SET_CHAR_ACCURACY( l_U545[4], 40 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U545[4], "IS_RockCafe1" );
    TASK_SIT_DOWN_INSTANTLY( l_U545[4], 0, 2, -2 );
    I = 0;
    for ( I = 0; I <= 4; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U545[I] )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U545[I], 24 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U545[I] );
            SET_CHAR_DECISION_MAKER( l_U545[I], l_U567 );
            SET_COMBAT_DECISION_MAKER( l_U545[I], l_U570 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U545[I], 1 );
            SET_CHAR_AS_ENEMY( l_U545[I], 1 );
            SET_CHAR_RELATIONSHIP( l_U545[I], 2, 0 );
            SET_CHAR_RELATIONSHIP( l_U545[I], 2, 3 );
            SET_CHAR_RELATIONSHIP( l_U545[I], 1, 24 );
        }
    }
    return;
}

void sub_6971()
{
    int I;

    CREATE_CAR( l_U577, l_U531._fU0, l_U531._fU4, l_U531._fU8, ref l_U552, 1 );
    SET_CAR_HEADING( l_U552, 179.22010000 );
    CHANGE_CAR_COLOUR( l_U552, 0, 0 );
    SET_EXTRA_CAR_COLOURS( l_U552, 0, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U552 );
    CREATE_CAR( l_U578, l_U534._fU0, l_U534._fU4, l_U534._fU8, ref l_U553[0], 1 );
    SET_CAR_HEADING( l_U553[0], 179.37190000 );
    I = 0;
    for ( I = 0; I <= 1; I++ )
    {
        if (NOT (IS_CAR_DEAD( l_U553[I] )))
        {
            CHANGE_CAR_COLOUR( l_U553[I], 0, 0 );
            SET_EXTRA_CAR_COLOURS( l_U553[I], 0, 0 );
            SET_CAR_ON_GROUND_PROPERLY( l_U553[I] );
        }
    }
    return;
}

void sub_7246()
{
    CREATE_CHAR( 26, l_U576, l_U525._fU0 - 0.50000000, l_U525._fU4 - 1.75000000, l_U525._fU8 + 0.13000000, ref l_U551, 1 );
    SET_CHAR_HEADING( l_U551, l_U537 + 200 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U551, 24 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U551 );
    sub_5724( 2, l_U551, "INTERN", 0 );
    SET_CHAR_DECISION_MAKER( l_U551, l_U566 );
    SET_COMBAT_DECISION_MAKER( l_U551, l_U572 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U551, 1 );
    SET_CHAR_RELATIONSHIP( l_U551, 2, 0 );
    SET_CHAR_RELATIONSHIP( l_U551, 1, 24 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U551, "IS_RockCafe1" );
    TASK_SIT_DOWN_INSTANTLY( l_U551, 0, 2, -2 );
    return;
}

void sub_7670()
{
    int I;

    sub_7679();
    GET_INTERIOR_FROM_CHAR( sub_4247(), ref l_U595 );
    if (NOT (IS_CHAR_DEAD( l_U544 )))
    {
        GET_INTERIOR_FROM_CHAR( l_U544, ref l_U596 );
        GET_CHAR_COORDINATES( l_U544, ref l_U528._fU0, ref l_U528._fU4, ref l_U528._fU8 );
        if ((IS_PROJECTILE_IN_AREA( l_U528._fU0 + 10, l_U528._fU4 + 10, l_U528._fU8 + 10, l_U528._fU0 - 10, l_U528._fU4 - 10, l_U528._fU8 - 10 )) || ((IS_BULLET_IN_AREA( l_U528._fU0, l_U528._fU4, l_U528._fU8, 15.00000000, 1 )) || (IS_SNIPER_BULLET_IN_AREA( l_U528._fU0 - 10, l_U528._fU4 - 10, l_U528._fU8 - 5, l_U528._fU0 + 10, l_U528._fU4 + 10, l_U528._fU8 + 5 ))))
        {
            l_U519 = 2;
        }
        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U501, l_U544, 3.00000000, 3.00000000, 2.00000000, 0 )) AND (IS_PLAYER_TARGETTING_CHAR( sub_824(), l_U544 )))
        {
            l_U519 = 2;
        }
        if ((l_U595 == l_U596) AND (IS_PLAYER_TARGETTING_CHAR( sub_824(), l_U544 )))
        {
            l_U519 = 2;
        }
    }
    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U544, l_U501, 0 ))
    {
        l_U519 = 2;
    }
    if (NOT (IS_CHAR_DEAD( l_U551 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U551, l_U501, 0 ))
        {
            l_U519 = 2;
        }
        if ((l_U595 == l_U596) AND (IS_PLAYER_TARGETTING_CHAR( sub_824(), l_U551 )))
        {
            l_U519 = 2;
        }
    }
    else
    {
        l_U519 = 2;
    }
    I = 0;
    for ( I = 0; I <= 4; I++ )
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U545[I], l_U501, 0 ))
        {
            l_U519 = 2;
        }
        if (NOT (IS_CHAR_DEAD( l_U545[I] )))
        {
            if ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_824(), l_U545[I] )) || (IS_PLAYER_TARGETTING_CHAR( sub_824(), l_U545[I] )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U501, l_U545[I], 15.00000000, 15.00000000, 2.00000000, 0 ))
                {
                    l_U519 = 2;
                }
            }
        }
    }
    if (NOT (IS_CAR_DEAD( l_U552 )))
    {
        if ((IS_CHAR_IN_CAR( l_U501, l_U552 )) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U552, l_U501 )))
        {
            l_U519 = 2;
        }
    }
    else
    {
        l_U519 = 2;
    }
    if (NOT (IS_CAR_DEAD( l_U553[0] )))
    {
        if ((IS_CHAR_IN_CAR( l_U501, l_U553[0] )) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U553[0], l_U501 )))
        {
            l_U519 = 2;
        }
    }
    else
    {
        l_U519 = 2;
    }
    GET_KEY_FOR_CHAR_IN_ROOM( l_U501, ref l_U521 );
    if ((l_U521 == 877820577) AND (IS_CHAR_IN_ANY_CAR( l_U501 )))
    {
        l_U519 = 2;
    }
    sub_10257( ref l_U544, 200 );
    return;
}

void sub_7679()
{
    if (NOT (IS_CHAR_INJURED( l_U544 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4247(), l_U544, 10.00000000, 10.00000000, 10.00000000, 0 ))
        {
            GET_INTERIOR_FROM_CHAR( sub_4247(), ref l_U595 );
            GET_INTERIOR_FROM_CHAR( l_U544, ref l_U596 );
            if (l_U595 == l_U596)
            {
                if (sub_7798( l_U538 ))
                {
                    sub_7843( "E1S3p_POLI", ref l_U538, 6, 1 );
                }
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (l_U594 == 0)
                    {
                        if (sub_8850( "E1S3p_POLI", ref l_U538, 6, 1 ))
                        {
                            l_U594 = 1;
                        }
                    }
                }
            }
            else if (sub_3570( l_U538 ))
            {
                sub_8982( ref l_U538 );
            }
        }
    }
    return;
}

void sub_7798(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_7843(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_7864( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

int sub_7864(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_7928( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_7928(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7950( iParam1 )))
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
    sub_8626( ref g_U8947, ref l_U2 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_7950(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_3682( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_3682( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_3682( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_8626(int iParam0, int iParam1)
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

void sub_8850(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_8871( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_8871(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7928( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_8982(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_3682( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_3682( "\n CONVERSATION PAUSED AT LINE " );
            sub_9122( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_3682( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_3682( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_3682( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_9122(unknown uParam0)
{
    return;
}

void sub_10257(unknown uParam0, float fParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    int iVar8;

    iVar8 = 0;
    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( (uParam0^), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    GET_CHAR_COORDINATES( l_U501, ref l_U522._fU0, ref l_U522._fU4, ref l_U522._fU8 );
    fVar7 = VDIST( uVar4, l_U522 );
    if (fVar7 > fParam1)
    {
        if (NOT (IS_CHAR_DEAD( (uParam0^) )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( (uParam0^) )))
            {
                PRINT_NOW( "JS_FAIL_01", 7500, 1 );
                if (DOES_BLIP_EXIST( l_U556 ))
                {
                    REMOVE_BLIP( l_U556 );
                }
                WAIT( 7000 );
                l_U514 = 1;
                l_U519 = -1;
            }
        }
    }
    return;
}

void sub_10491()
{
    int I;

    if (sub_3570( l_U538 ))
    {
        sub_3754( ref l_U538, 0 );
    }
    if (l_U518 == 0)
    {
        if (NOT (IS_CHAR_INJURED( l_U544 )))
        {
            CLEAR_CHAR_TASKS( l_U544 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U544, 1 );
            SET_COMBAT_DECISION_MAKER( l_U544, l_U572 );
            SET_CHAR_RELATIONSHIP( l_U544, 5, 0 );
            SET_WANTED_MULTIPLIER( 0.10000000 );
            if (sub_10624())
            {
                sub_10691();
            }
            else if (sub_10828())
            {
                sub_10901();
            }
            else
            {
                l_U598 = 1;
            }
            if (l_U598 == 1)
            {
                GET_INTERIOR_FROM_CHAR( l_U544, ref l_U597 );
                if (l_U597 != nil)
                {
                    OPEN_SEQUENCE_TASK( ref l_U573 );
                    SET_NEXT_DESIRED_MOVE_STATE( 3 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U534._fU0, l_U534._fU4, l_U534._fU8, 3, -2, 5.00000000 );
                    TASK_SMART_FLEE_CHAR( 0, sub_4247(), 200.00000000, -2 );
                    CLOSE_SEQUENCE_TASK( l_U573 );
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref l_U573 );
                    SET_NEXT_DESIRED_MOVE_STATE( 3 );
                    TASK_SMART_FLEE_CHAR( 0, sub_4247(), 200.00000000, -2 );
                    CLOSE_SEQUENCE_TASK( l_U573 );
                }
                TASK_PERFORM_SEQUENCE( l_U544, l_U573 );
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U544, sub_4247(), 150.00000000, 150.00000000, 150.00000000, 0 ))
                {
                    if (NOT (sub_11296( l_U544, 29 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U544, l_U573 );
                    }
                }
            }
            sub_11382();
        }
        I = 0;
        for ( I = 0; I <= 4; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U545[I] )))
            {
                CLEAR_CHAR_TASKS( l_U545[I] );
                SET_CHAR_RELATIONSHIP( l_U545[I], 5, 0 );
                SET_CHAR_KEEP_TASK( l_U545[I], 1 );
                TASK_COMBAT( l_U545[I], l_U501 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U551 )))
        {
            CLEAR_CHAR_TASKS( l_U551 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U551, 0 );
            SET_CHAR_RELATIONSHIP( l_U551, 5, 0 );
        }
        l_U518 = 1;
    }
    else if (NOT (IS_CHAR_INJURED( l_U544 )))
    {
        if (NOT (sub_11296( l_U544, 29 )))
        {
            if (NOT (sub_11296( l_U544, 25 )))
            {
                TASK_SMART_FLEE_CHAR( l_U544, sub_4247(), 200.00000000, -2 );
            }
        }
    }
    sub_11749();
    sub_10257( ref l_U544, 200 );;
    sub_12115();
    return;
}

int sub_10624()
{
    if (IS_VEH_DRIVEABLE( l_U552 ))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_4247(), l_U552 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_10691()
{
    if (IS_VEH_DRIVEABLE( l_U552 ))
    {
        OPEN_SEQUENCE_TASK( ref l_U573 );
        SET_NEXT_DESIRED_MOVE_STATE( 3 );
        TASK_ENTER_CAR_AS_DRIVER( 0, l_U552, -2 );
        TASK_CAR_MISSION_PED_TARGET( 0, l_U552, sub_4247(), 8, 25, 2, 5, 10 );
        CLOSE_SEQUENCE_TASK( l_U573 );
        TASK_PERFORM_SEQUENCE( l_U544, l_U573 );
        CLEAR_SEQUENCE_TASK( l_U573 );
    }
    return;
}

int sub_10828()
{
    if (IS_VEH_DRIVEABLE( l_U553[0] ))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_4247(), l_U553[0] )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_10901()
{
    if (IS_VEH_DRIVEABLE( l_U553[0] ))
    {
        OPEN_SEQUENCE_TASK( ref l_U573 );
        SET_NEXT_DESIRED_MOVE_STATE( 3 );
        TASK_ENTER_CAR_AS_DRIVER( 0, l_U553[0], -2 );
        TASK_CAR_MISSION_PED_TARGET( 0, l_U553[0], sub_4247(), 8, 25, 2, 5, 10 );
        CLOSE_SEQUENCE_TASK( l_U573 );
        TASK_PERFORM_SEQUENCE( l_U544, l_U573 );
        CLEAR_SEQUENCE_TASK( l_U573 );
    }
    return;
}

int sub_11296(unknown uParam0, unknown uParam1)
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

void sub_11382()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U520 );
    if (l_U520 == 0)
    {
        SAY_AMBIENT_SPEECH( l_U544, "PLAYER_OVER_THERE", 1, 0, 2 );
    }
    else
    {
        SAY_AMBIENT_SPEECH( l_U544, "SHIT", 1, 0, 2 );
    }
    return;
}

void sub_11749()
{
    if (NOT (IS_CHAR_INJURED( l_U544 )))
    {
        if (IS_VEH_DRIVEABLE( l_U552 ))
        {
            if (IS_CHAR_IN_CAR( l_U544, l_U552 ))
            {
                if (IS_CHAR_IN_CAR( sub_4247(), l_U552 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U573 );
                    SET_NEXT_DESIRED_MOVE_STATE( 3 );
                    TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, l_U552 );
                    TASK_SMART_FLEE_CHAR( 0, sub_4247(), 200.00000000, -2 );
                    CLOSE_SEQUENCE_TASK( l_U573 );
                    TASK_PERFORM_SEQUENCE( l_U544, l_U573 );
                    CLEAR_SEQUENCE_TASK( l_U573 );
                }
            }
        }
        if (IS_VEH_DRIVEABLE( l_U553[0] ))
        {
            if (IS_CHAR_IN_CAR( l_U544, l_U553[0] ))
            {
                if (IS_CHAR_IN_CAR( sub_4247(), l_U553[0] ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U573 );
                    SET_NEXT_DESIRED_MOVE_STATE( 3 );
                    TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, l_U553[0] );
                    TASK_SMART_FLEE_CHAR( 0, sub_4247(), 200.00000000, -2 );
                    CLOSE_SEQUENCE_TASK( l_U573 );
                    TASK_PERFORM_SEQUENCE( l_U544, l_U573 );
                    CLEAR_SEQUENCE_TASK( l_U573 );
                }
            }
        }
    }
    return;
}

void sub_12115()
{
    if ((l_U515 == 0) AND (IS_CHAR_DEAD( l_U544 )))
    {
        if (sub_12149())
        {
            l_U519 = -1;
            l_U515 = 1;
        }
    }
    return;
}

int sub_12149()
{
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4247(), l_U525._fU0, l_U525._fU4, l_U525._fU8, 100.00000000, 100.00000000, 100.00000000, 0 )))
    {
        return 1;
    }
    if (l_U593 == 0)
    {
        PRINT_NOW( "JS_COMMAND_03", 7500, 2 );
        if (DOES_BLIP_EXIST( l_U556 ))
        {
            REMOVE_BLIP( l_U556 );
        }
        l_U593 = 1;
    }
    return 0;
}

int sub_12348(unknown uParam0)
{
    if (g_U15862[uParam0]._fU4 == 1)
    {
        if (g_U15862[uParam0]._fU8[1]._fU0[5] == 1)
        {
            g_U15862[uParam0]._fU4 = 0;
            g_U15862[uParam0]._fU8[1]._fU0[5] = 0;
            if (sub_12441())
            {
                return 0;
            }
            if (sub_12571())
            {
                return 0;
            }
            sub_12833();
            return 1;
        }
    }
    return 0;
}

int sub_12441()
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

int sub_12571()
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
    if (IS_CHAR_DEAD( sub_4247() ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( sub_4247(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
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

void sub_12833()
{
    g_U814 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_12928(unknown uParam0, unknown uParam1, unknown uParam2)
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

int sub_13073(unknown uParam0, unknown uParam1, boolean bParam2)
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
        return sub_13126( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U94._fU368)
    {
        StrCopy( ref g_U94._fU224[0], uParam1, 16 );
        g_U94._fU224[1] = {(uParam0^)[0]};
        sub_15013( uVar14, ref g_U94._fU176 );
        g_U94._fU368 = 1;
        return 1;
    }
    return 0;
}

int sub_13126(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U94._fU540)
    {
        return 0;
    }
    sub_3682( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 >= 6)
        {
            sub_3682( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_824() )))
    {
        sub_3682( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4247() ))) AND (IS_CHAR_IN_ANY_CAR( sub_4247() )))
    {
        sub_3682( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        sub_3682( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_13641()))
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
                sub_3682( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_13641()))
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
    sub_15013( uParam0, ref g_U94._fU176 );
    sub_15409( ref g_U94._fU160 );
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
        sub_5844( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_13641()
{
    if ((g_U94._fU52) || (g_U94._fU48))
    {
        return 0;
    }
    if (g_U94._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_13698())
    {
        return 0;
    }
    if (g_U558 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_13698()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_824() )))
    {
        sub_3682( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_3682( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U94._fU376)
    {
        sub_3682( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U94._fU104) || (g_U94._fU100))
    {
        sub_3682( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_824() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_4247() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_4247(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_3682( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_4247() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_3682( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_3682( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_824() )))
    {
        sub_3682( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_15013(unknown uParam0, unknown uParam1)
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

void sub_15409(unknown uParam0)
{
    StrCopy( (uParam0^), "JOHNNY", 16 );
    return;
}

void sub_16023(unknown uParam0)
{
    StrCopy( ref g_U94._fU176, uParam0, 32 );
    return;
}

void sub_16053(boolean bParam0)
{
    if (g_U10991 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_824(), 150 );
        SAY_AMBIENT_SPEECH( l_U501, "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    if (bParam0)
    {
        sub_16159( l_U511, "E1S3p_ESC", "E1S3p3A", 0 );
    }
    l_U513 = 0;
    sub_692();
    sub_3128( l_U511, l_U512 );
    return;
}

void sub_16159(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_16203( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_16203(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_16798()
{
    g_U24 = 82;
    l_U513 = 0;
    g_U38704 = 1;
    CLEAR_WANTED_LEVEL( sub_824() );
    INCREMENT_INT_STAT( 145, 1 );
    sub_16159( l_U511, "E1S3p_DED", "E1S3p3A", 0 );
    sub_16883();
    sub_23333( l_U511, l_U512, 5 );
    return;
}

void sub_16883()
{
    sub_16892();
    return;
}

void sub_16892()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 2;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_16919( iVar3, iVar4, iVar5 );
    sub_1661( iVar2 );
    return;
}

void sub_16919(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 2;
    sub_16951( iVar5, uParam0, uParam1, uParam2, "Contact_3" );
    return;
}

void sub_16951(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_17047( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_17047( ref cVar9 );
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
            sub_17047( ref cVar9 );
            return;
        }
        if (g_U14838[uParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_17047( ref cVar9 );
            return;
        }
        iVar7 = g_U14838[uParam0]._fU160._fU76;
    }
    else if (g_U14838[uParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_17047( ref cVar9 );
        return;
    }
    if (g_U14838[uParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_17047( ref cVar9 );
        return;
    }
    iVar7 = g_U14838[uParam0]._fU0._fU4;
    iVar8 = sub_17624( uParam0, iVar7 );;;
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
    if (NOT (sub_18072( uParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U14838[uParam0]._fU160._fU84++;
    }
    SET_PLAYER_MOOD_NORMAL( sub_824() );
    sub_2060();
    bVar28 = true;
    uVar29 = sub_17624( uParam0, iVar7 );
    uVar30 = sub_2719( uParam0 );
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
                sub_22010( 9, ref g_U14838[uParam0]._fU0._fU24 );
                if ((g_U12303) AND (NOT bVar28))
                {
                    bVar32 = false;
                }
                if (bVar32)
                {
                    sub_22444();
                    g_U10974._fU8 = 1;
                    g_U10974._fU20 = sub_22529( uParam0, iVar7 );
                }
            }
            if (bVar28)
            {
                sub_22608( uParam0 );
                sub_22781( 0 );
                sub_2974( uVar30, 0 );
                g_U11093 = 1;
                g_U39101 = 1;
                g_U11108 = 0;
            }
            g_U12306[uParam0]._fU12 = 1;
        }
        if (bVar28)
        {
            sub_22970();
        }
    }
    if (bParam2)
    {
        sub_22444();
        sub_23069();
        sub_22781( 0 );
        g_U11094 = 1;
        g_U11108 = 0;
    }
    if (bParam3)
    {
        sub_22444();
        sub_23121();
        sub_22781( 0 );
        sub_2974( uVar30, 0 );
    }
    sub_23172();
    return;
}

void sub_17047(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_17624(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 11) || (iParam0 < 0))
    {
        sub_1044( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

int sub_18072(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_18168( uParam1 );
        break;
        case 1:
        bVar8 = sub_18477( uParam1 );
        break;
        case 2:
        bVar8 = sub_19080( uParam1 );
        break;
        case 3:
        bVar8 = sub_19317( uParam1 );
        break;
        case 4:
        bVar8 = sub_19483( uParam1 );
        break;
        case 5:
        bVar8 = sub_19682( uParam1 );
        break;
        case 6:
        bVar8 = sub_19877( uParam1 );
        break;
        case 7:
        bVar8 = sub_20082( uParam1 );
        break;
        case 8:
        bVar8 = sub_20287( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_1429( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_17624( uParam0, uParam1 );
    if (bParam3)
    {
        sub_20573( uVar9, uParam0 );
    }
    return 1;
}

int sub_18168(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_897( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 2:
        sub_897( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 3:
        sub_897( iVar3, 750, 5, 2, 0, 0 );
        break;
        case 4:
        sub_897( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 5:
        sub_897( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 6:
        sub_897( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 0:
        case 10: break;
        default:
        sub_18384( "Contact 1", 1 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_18384( "Contact 1", 0 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_18384(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_18477(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_897( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_897( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_897( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_897( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 4:
        sub_897( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        sub_897( iVar3, 0, sub_18703(), sub_18839(), 0, 0 );
        break;
        default:
        sub_18384( "Contact 2", 1 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_18384( "Contact 2", 0 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18703()
{
    switch (l_U348[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1429( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

int sub_18839()
{
    switch (l_U348[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_1429( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

int sub_19080(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_897( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_897( iVar3, 5000, 5, 2, 0, 0 );
        break;
        case 3:
        sub_897( iVar3, 7000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_897( iVar3, 1000, 3, 1, 0, 0 );
        break;
        case 4: break;
        default:
        sub_18384( "Contact 3", 1 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_18384( "Contact 3", 0 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19317(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_897( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_897( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_18384( "Friend 4", 1 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_18384( "Friend 4", 0 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19483(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_897( iVar3, 1000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_897( iVar3, 2000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_897( iVar3, 3000, 5, 2, 0, 0 );
        break;
        default:
        sub_18384( "Contact 5", 1 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_18384( "Contact 5", 0 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19682(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_897( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 1:
        sub_897( iVar3, 10000, 5, 2, 0, 0 );
        break;
        case 2:
        sub_897( iVar3, 0, 5, 2, 0, 0 );
        break;
        default:
        sub_18384( "Contact 6", 1 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_18384( "Contact 6", 0 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19877(unknown uParam0)
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
        sub_897( iVar3, 0, sub_18703(), sub_18839(), 0, 0 );
        break;
        default:
        sub_18384( "Friend 7", 1 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_18384( "Friend 7", 0 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20082(unknown uParam0)
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
        sub_897( iVar3, 0, sub_18703(), sub_18839(), 0, 0 );
        break;
        default:
        sub_18384( "Friend 8", 1 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_18384( "Friend 8", 0 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20287(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 8;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_897( iVar3, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_18384( "Contact 9", 1 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_18384( "Contact 9", 0 );
        sub_897( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_20573(int iParam0, int iParam1)
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
    if (sub_20634( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_21352( iParam1 );
    }
    return;
}

int sub_20634(int iParam0, int iParam1)
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
            sub_20774( 0, iVar6 );
            g_U14815[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U20913[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_20774(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_20944( 0 );
    return;
}

void sub_20944(boolean bParam0)
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
        sub_21189();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_21189()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_21352(int iParam0)
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
        sub_21583( 121 );
        SET_FLOAT_STAT( 121, fVar3 );
        break;
        case 1:
        sub_21583( 122 );
        SET_FLOAT_STAT( 122, fVar3 );
        break;
        case 2:
        sub_21583( 125 );
        SET_FLOAT_STAT( 125, fVar3 );
        break;
        case 3:
        sub_21583( 126 );
        SET_FLOAT_STAT( 126, fVar3 );
        break;
        case 4:
        sub_21583( 127 );
        SET_FLOAT_STAT( 127, fVar3 );
        break;
        case 5:
        sub_21583( 128 );
        SET_FLOAT_STAT( 128, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_21583(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_22010(unknown uParam0, unknown uParam1)
{
    sub_22029( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_22029(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_22444()
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

int sub_22529(int iParam0, int iParam1)
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

void sub_22608(unknown uParam0)
{
    sub_22617();
    g_U12306[uParam0]._fU116 = 0;
    return;
}

void sub_22617()
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

void sub_22781(unknown uParam0)
{
    if (g_U10684)
    {
        g_U10684 = 0;
        return;
    }
    SET_BIT( ref g_U10681._fU0, 1 );
    sub_22832( ref g_U10681._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10681._fU0, 3 );
    g_U10681._fU4 = 0;
    g_U10681._fU8 = 0;
    return;
}

void sub_22832(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_22970()
{
    sub_22979();
    return;
}

void sub_22979()
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

void sub_23069()
{
    sub_22979();
    return;
}

void sub_23121()
{
    sub_22979();
    StrCopy( ref g_U10987, "FPASS", 16 );
    return;
}

void sub_23172()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_23194();
    if (iVar3 > g_U38472._fU4)
    {
        g_U38472._fU4 = iVar3;
        g_U38472._fU8 = iVar2;
    }
    return;
}

int sub_23194()
{
    if (g_U15728[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_23333(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U15862[uParam0]._fU228._fU12[uParam1] = 1;
    g_U15862[uParam0]._fU228._fU0 = 1;
    return sub_23386( uParam0, uParam2 );
}

int sub_23386(unknown uParam0, int iParam1)
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

