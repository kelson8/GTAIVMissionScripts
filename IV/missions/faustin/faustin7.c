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
    l_U481 = {0.00000000, 0.00000000, 0.00000000};
    l_U484 = 2.50000000;
    l_U485 = 0;
    l_U486 = 0;
    l_U487 = 0;
    l_U488 = 0;
    l_U489 = 0;
    l_U2315 = 1976502708;
    l_U2316 = 1976502708;
    l_U2411 = 0;
    l_U2412 = 0;
    l_U2413 = 0;
    l_U2414 = 0;
    l_U2415 = 0;
    l_U2416 = 0;
    l_U2699 = 0;
    l_U2702 = 0;
    l_U2703 = 1;
    l_U2704 = 1;
    l_U2705 = 0;
    l_U2706 = 0;
    l_U2707 = 1;
    l_U2708 = 1;
    l_U2709 = 0;
    l_U2710 = 1;
    l_U2711 = 0;
    l_U2712 = 0;
    l_U2714 = 0;
    l_U2715 = 1;
    l_U2848 = 0;
    l_U2849 = 1;
    l_U2882 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_312();
        sub_2422();
    }
    while (true)
    {
        WAIT( 0 );
        switch (l_U2314)
        {
            case 0:
            sub_2910();
            l_U2314 = 2;
            break;
            case 1: break;
            case 2:
            sub_9000();
            break;
            case 3: break;
            case 4: break;
            case 6:
            if (sub_28113())
            {
                sub_25993();
            }
            break;
        }
        if (IS_WANTED_LEVEL_GREATER( sub_4388(), 0 ))
        {
            ;
        }
        if (NOT l_U2716)
        {
            if (IS_CONTROL_PRESSED( 2, 3 ))
            {
                REMOVE_COVER_POINT( l_U2605[0] );
                FLUSH_COVER_BLOCKING_AREAS();
                l_U2716 = 1;
            }
        }
        if ((l_U2314 != 6) AND (l_U2314 > 2))
        {
            sub_28709();
            sub_37528();
            if (NOT l_U2416)
            {
                sub_62410();
            }
            sub_63369();
            if (l_U2696)
            {
                sub_63603();
            }
        }
        if (l_U2818)
        {
            if (IS_CHAR_INJURED( l_U2421 ))
            {
                sub_66424( 3, l_U2421, 4 );
                sub_66475( 1 );
            }
        }
    }
    return;
}

void sub_312()
{
    sub_321();
    return;
}

void sub_321()
{
    int iVar2;

    iVar2 = 4;
    sub_335( iVar2 );
    sub_1511( iVar2 );
    return;
}

void sub_335(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_379();
        sub_540();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_648();
            sub_687();
        }
    }
    sub_763();
    sub_864();
    uVar5 = sub_977( uParam0 );
    sub_1418( uVar5, 0 );
    return;
}

void sub_379()
{
    sub_393( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_493();
    }
    return;
}

void sub_393(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_493()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_540()
{
    sub_549();
    return;
}

void sub_549()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_648()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_687()
{
    sub_696();
    return;
}

void sub_696()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_763()
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

void sub_864()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_886();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_886()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_977(unknown uParam0)
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
    sub_1376( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1376(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1418(int iParam0, boolean bParam1)
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

void sub_1511(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1520();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2295();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1520()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1558( 5, g_U569[I] )) == 1))
        {
            if ((sub_1558( 1, g_U569[I] )) != 0)
            {
                sub_1844( I );
            }
        }
    }
    if (NOT sub_2010())
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

int sub_1558(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1844(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1929( g_U569 - 1 );
    return;
}

void sub_1929(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2010()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1558( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2295()
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

void sub_2422()
{
    SWITCH_ROADS_BACK_TO_ORIGINAL( 767.50890000, -163.53480000, 0.00000000, 891.41320000, 91.06410000, 100.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    CLEAR_RELATIONSHIP( 1, 3, 25 );
    CLEAR_RELATIONSHIP( 1, 25, 3 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    CLEAR_PED_NON_CREATION_AREA();
    SET_CREATE_RANDOM_COPS( 1 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    sub_2555();
    sub_2601();
    sub_2619( 0 );
    STOP_PED_SPEAKING( sub_2759(), 1 );
    SET_PED_IS_BLIND_RAGING( sub_2759(), 0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2555()
{
    if (DOES_BLIP_EXIST( l_U2602 ))
    {
        REMOVE_BLIP( l_U2602 );
    }
    return;
}

void sub_2601()
{
    return;
}

void sub_2619(unknown uParam0)
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

void sub_2759()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2910()
{
    unknown uVar2;

    GET_WEAPONTYPE_MODEL( 12, ref uVar2 );
    sub_2929( 3 );
    REQUEST_MODEL( 467469635 );
    REQUEST_MODEL( -196312163 );
    REQUEST_MODEL( uVar2 );
    REQUEST_ANIMS( "missfaustin8" );
    l_U2702 = 0;
    while ((NOT (HAVE_ANIMS_LOADED( "missfaustin8" ))) || ((NOT (HAS_MODEL_LOADED( uVar2 ))) || ((NOT (HAS_MODEL_LOADED( -196312163 ))) || ((NOT (HAS_MODEL_LOADED( 467469635 ))) || (NOT (sub_3694( 3 )))))))
    {
        WAIT( 0 );
        if (NOT (sub_3694( 25 )))
        {
            sub_3839( "Waiting for SC_DIMITRI" );
        }
    }
    l_U2702 = 0;
    sub_3875( "F7AUD" );
    sub_3997( "F7AUD", 6 );
    sub_3997( "FAUST8", 0 );
    sub_4169( 0, sub_2759(), "NIKO", 0 );
    GET_MAX_WANTED_LEVEL( ref l_U2604 );
    CLEAR_AREA( 747.86340000, -47.56240000, 9.16420000, 50.00000000, 1 );
    l_U2422 = {734.10520000, -71.62999000, 4.81900000};
    SET_WIDESCREEN_FORMAT( 1 );
    SET_PLAYER_CONTROL( sub_4388(), 1 );
    SET_RELATIONSHIP( 1, 3, 25 );
    SET_RELATIONSHIP( 1, 25, 3 );
    l_U490 = 0;
    if (l_U2708)
    {
        l_U489 = 1;
    }
    WAIT( 6000 );
    sub_4490( "F7_CALLJ" );
    ADD_SCENARIO_BLOCKING_AREA( 699.00000000, -90.00000000, 0.00000000, 806.32490000, 0.85870000, 100.00000000 );
    SET_PED_NON_CREATION_AREA( 699.00000000, -90.00000000, 0.00000000, 806.32490000, 0.85870000, 100.00000000 );
    ADD_COVER_BLOCKING_AREA( 770.95150000, -65.73490000, 0.00000000, 773.45210000, -62.15960000, 50.00000000, 1, 1, 1 );
    PRINT_NOW( "FA8_00", 7500, 1 );
    return;
}

void sub_2929(unknown uParam0)
{
    REQUEST_MODEL( sub_2940( uParam0 ) );
    return;
}

int sub_2940(unknown uParam0)
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
    sub_1376( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_3694(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_2940( uParam0 ) );
}

void sub_3839(unknown uParam0)
{
    return;
}

void sub_3875(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3894();
    return;
}

void sub_3894()
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

void sub_3997(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4033())
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

int sub_4033()
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

void sub_4169(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4253( "\n PED NUMBER ", uParam0 );
    sub_4293( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4253(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4293(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4388()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4490(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar4 = 0;
    while (iVar4 == 0)
    {
        SETTIMERA( 0 );
        while (TIMERA() < 2000)
        {
            WAIT( 0 );
        }
        if (sub_4563( 3, uParam0, "F7AUD", 10000, 0 ))
        {
            iVar3 = -1;
            while (NOT (sub_8430( 0 )))
            {
                WAIT( 0 );
                if (sub_8705() != -1)
                {
                    iVar3 = sub_8705();
                }
                sub_4253( "\n Current line is ", iVar3 );
            }
            if (iVar3 != -1)
            {
                if ((iVar3 >= 4) || (NOT sub_8785()))
                {
                    iVar4 = 1;
                }
            }
        }
    }
    return;
}

void sub_4563(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_4623( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_4623(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_4693( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_4693( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_4388() )))
    {
        sub_4693( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2759() ))) AND (IS_CHAR_IN_ANY_CAR( sub_2759() )))
    {
        sub_4693( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_4693( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_5150()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((NOT bParam8) || (g_U91._fU372))
            {
                sub_4693( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 4) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 5))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_5150()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_6522( uParam0, ref g_U91._fU176 );
    sub_7903( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_4293( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

void sub_4693(unknown uParam0)
{
    return;
}

int sub_5150()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_5207())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_5207()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_4388() )))
    {
        sub_4693( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_4693( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_4693( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_4693( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_4388() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2759() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_2759(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_4693( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_2759() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_4693( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_4693( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_4388() )))
    {
        sub_4693( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_6522(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_7903(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_8430(boolean bParam0)
{
    unknown uVar3;

    if (g_U91._fU60 != -1)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U91._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_2759(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_4693( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_8705()
{
    return GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
}

void sub_8785()
{
    return g_U91._fU504;
}

void sub_9000()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;

    sub_9038( l_U2875, "get_to_docks_prog...." );
    if (IS_CHAR_DEAD( l_U2421 ))
    {
        sub_3839( "Jacob dead...." );
    }
    switch (l_U2875)
    {
        case 0:
        GET_CHAR_COORDINATES( sub_2759(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (NOT (DOES_CHAR_EXIST( l_U2421 )))
        {
            if ((sub_9228( sub_2759(), l_U2422 )) < 10000.00000000)
            {
                sub_9335( 0 );
                TASK_LOOK_AT_CHAR( l_U2421, sub_2759(), -2, 0 );
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_4388(), 0 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U2421, ref l_U2427 );
                    CHANGE_BLIP_COLOUR( l_U2427, 3 );
                    SET_ROUTE( l_U2427, 1 );
                }
            }
        }
        if ((sub_9228( sub_2759(), l_U2422 )) < 100.00000000)
        {
            if (NOT (IS_CHAR_DEAD( l_U2421 )))
            {
                SET_CHAR_COORDINATES( l_U2421, l_U2422._fU0, l_U2422._fU4, l_U2422._fU8 );
                l_U2418 = 1;
                OPEN_SEQUENCE_TASK( ref l_U2425 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2759() );
                CLOSE_SEQUENCE_TASK( l_U2425 );
                TASK_PERFORM_SEQUENCE( l_U2421, l_U2425 );
                CLEAR_SEQUENCE_TASK( l_U2425 );
                if (DOES_BLIP_EXIST( l_U2420 ))
                {
                    ;
                }
                if (NOT (DOES_BLIP_EXIST( l_U2427 )))
                {
                    ;
                }
                l_U2429 = 0;
                l_U2875 = 1;
            }
        }
        if (IS_WANTED_LEVEL_GREATER( sub_4388(), 0 ))
        {
            if (DOES_BLIP_EXIST( l_U2427 ))
            {
                REMOVE_BLIP( l_U2427 );
            }
            if (NOT l_U2617[47])
            {
                PRINT_NOW( "FA8_47", 7500, 1 );
                l_U2617[47] = 1;
            }
        }
        else if (NOT (DOES_BLIP_EXIST( l_U2427 )))
        {
            ADD_BLIP_FOR_CHAR( l_U2421, ref l_U2427 );
            CHANGE_BLIP_COLOUR( l_U2427, 3 );
            SET_ROUTE( l_U2427, 1 );
            PRINT_NOW( "FA8_00", 7500, 1 );
        }
        if (l_U2617[47])
        {
            l_U2617[47] = 0;
        }
        break;
        case 1:
        if (l_U2617[47])
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_4388(), 0 )))
            {
                l_U2617[47] = 0;
                if (NOT (DOES_BLIP_EXIST( l_U2427 )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U2421 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U2421, ref l_U2427 );
                        CHANGE_BLIP_COLOUR( l_U2427, 3 );
                        SET_ROUTE( l_U2427, 1 );
                        PRINT_NOW( "FA8_00", 7500, 1 );
                    }
                }
            }
        }
        else if (IS_WANTED_LEVEL_GREATER( sub_4388(), 0 ))
        {
            PRINT_NOW( "FA8_47", 7500, 1 );
            if (DOES_BLIP_EXIST( l_U2427 ))
            {
                REMOVE_BLIP( l_U2427 );
            }
            l_U2617[47] = 1;
        }
        if (DOES_CHAR_EXIST( l_U2421 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2421 )))
            {
                if (NOT l_U2429)
                {
                    if ((sub_18255( sub_2759() )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2759(), l_U2421, 10.00000000, 10.00000000, 7.00000000, 0 )))
                    {
                        if (IS_CHAR_ON_SCREEN( l_U2421 ))
                        {
                            if (NOT (IS_WANTED_LEVEL_GREATER( sub_4388(), 0 )))
                            {
                                if (l_U2617[47])
                                {
                                    l_U2617[47] = 0;
                                }
                                if (NOT (IS_CHAR_ON_FIRE( l_U2421 )))
                                {
                                    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_2759(), 731.91470000, -75.22950000, 5.82490000, 4.00000000, 3.00000000, 3.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_2759(), 731.91470000, -67.22950000, 5.82370000, 7.00000000, 8.00000000, 3.00000000, 0 )))
                                    {
                                        if (l_U2711)
                                        {
                                            l_U2617[47] = 0;
                                            sub_18530( "F7_MEETJ", ref l_U2876, 6, 1 );
                                        }
                                        OPEN_SEQUENCE_TASK( ref l_U2425 );
                                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2759() );
                                        if (NOT l_U2886)
                                        {
                                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "partial_wave_d", "missfaustin8", 1000, 0, 0, 0, 0, 0 );
                                        }
                                        CLOSE_SEQUENCE_TASK( l_U2425 );
                                        TASK_PERFORM_SEQUENCE( l_U2421, l_U2425 );
                                        CLEAR_SEQUENCE_TASK( l_U2425 );
                                        l_U2429 = 1;
                                    }
                                    else if (NOT (DOES_BLIP_EXIST( l_U2427 )))
                                    {
                                        ADD_BLIP_FOR_CHAR( l_U2421, ref l_U2427 );
                                        CHANGE_BLIP_COLOUR( l_U2427, 3 );
                                        SET_ROUTE( l_U2427, 1 );
                                        PRINT_NOW( "FA8_00", 7500, 1 );
                                    }
                                }
                            }
                            else if (NOT l_U2617[47])
                            {
                                PRINT_NOW( "FA8_47", 7500, 1 );
                                l_U2617[47] = 1;
                            }
                        }
                    }
                    else if (NOT l_U2886)
                    {
                        if ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 712.54360000, -54.57320000, 5.92100000, 12.00000000, 10.00000000, 3.00000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 721.17860000, -73.18290000, 5.82350000, 12.00000000, 10.00000000, 3.00000000, 0 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U2421 )))
                            {
                                if (IS_CHAR_ON_SCREEN( l_U2421 ))
                                {
                                    OPEN_SEQUENCE_TASK( ref l_U2425 );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2759() );
                                    TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "partial_wave_d", "missfaustin8", 1000, 0, 0, 0, 0, 0 );
                                    CLOSE_SEQUENCE_TASK( l_U2425 );
                                    TASK_PERFORM_SEQUENCE( l_U2421, l_U2425 );
                                    CLEAR_SEQUENCE_TASK( l_U2425 );
                                    SAY_AMBIENT_SPEECH( l_U2421, "GENERIC_HI", 1, 1, 0 );
                                    l_U2886 = 1;
                                }
                            }
                        }
                        else if (NOT (sub_18255( sub_2759() )))
                        {
                            sub_3839( "Not outside" );
                        }
                        if (sub_20093( l_U2421, 1, 0 ))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U2425 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2759() );
                            CLOSE_SEQUENCE_TASK( l_U2425 );
                            if (NOT (IS_CHAR_INJURED( l_U2421 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U2421, l_U2425 );
                            }
                            CLEAR_SEQUENCE_TASK( l_U2425 );
                        }
                    }
                    else if (NOT (sub_18255( sub_2759() )))
                    {
                        sub_3839( "Not outside" );
                    }
                    if (sub_20093( l_U2421, 1, 0 ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U2425 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2759() );
                        CLOSE_SEQUENCE_TASK( l_U2425 );
                        if (NOT (IS_CHAR_INJURED( l_U2421 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U2421, l_U2425 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U2425 );
                    };;;
                }
            }
            GET_CHAR_COORDINATES( sub_2759(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (l_U2429)
            {
                if ((NOT l_U2711) || ((IS_PED_RAGDOLL( l_U2421 )) || (sub_20093( l_U2421, 1, 0 ))))
                {
                    if ((NOT l_U2711) || (NOT (sub_20506( l_U2876 ))))
                    {
                        if ((NOT l_U2711) || (NOT (sub_20687( l_U2876 ))))
                        {
                            if (NOT l_U2692)
                            {
                                if (NOT (IS_CHAR_DEAD( l_U2421 )))
                                {
                                    if ((sub_18255( sub_2759() )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2759(), l_U2421, 10.00000000, 10.00000000, 3.00000000, 0 )))
                                    {
                                        if (sub_20801( 1, 1 ))
                                        {
                                            CLEAR_THIS_PRINT( "FA8_00" );
                                            ADD_COVER_BLOCKING_AREA( 738.82600000, -59.15140000, 0.00000000, 741.00600000, -55.39830000, 50.81870000, 1, 1, 1 );
                                            ADD_COVER_BLOCKING_AREA( 739.81610000, -46.81190000, 0.00000000, 736.66490000, -51.43380000, 50.81870000, 1, 1, 1 );
                                            ADD_COVER_POINT( 738.70810000, -55.42650000, 4.81860000, 2, 284.00000000, 0, 0, ref l_U2605[0] );
                                            ADD_COVER_POINT( 739.32000000, -58.05000000, 4.82000000, 2, 284.00000000, 0, 0, ref l_U2605[1] );
                                            ADD_COVER_POINT( 736.92000000, -49.01000000, 4.82000000, 1, 284.00000000, 0, 0, ref l_U2605[2] );
                                            l_U2692 = 1;
                                        }
                                    }
                                    else if (NOT l_U2617[0])
                                    {
                                        PRINT_NOW( "FA8_60", 7500, 1 );
                                        l_U2617[0] = 1;
                                    }
                                }
                            }
                            else if ((sub_18255( sub_2759() )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2759(), l_U2421, 10.00000000, 10.00000000, 3.00000000, 0 )))
                            {
                                if (sub_21413())
                                {
                                    if (DOES_BLIP_EXIST( l_U2420 ))
                                    {
                                        REMOVE_BLIP( l_U2420 );
                                    }
                                    if (DOES_BLIP_EXIST( l_U2427 ))
                                    {
                                        REMOVE_BLIP( l_U2427 );
                                    }
                                    l_U2818 = 0;
                                    SET_CHAR_PROOFS( l_U2421, 1, 1, 1, 1, 1 );
                                    DO_SCREEN_FADE_OUT( 500 );
                                    while (NOT IS_SCREEN_FADED_OUT())
                                    {
                                        WAIT( 0 );
                                    }
                                    SET_PLAYER_CONTROL( sub_4388(), 0 );
                                    sub_3997( "F7AUD", 6 );
                                    sub_3997( "FAUST8", 0 );
                                    if (NOT (IS_CHAR_DEAD( l_U2421 )))
                                    {
                                        TASK_CLEAR_LOOK_AT( l_U2421 );
                                    }
                                    sub_21686();
                                    GET_CURRENT_CHAR_WEAPON( sub_2759(), ref l_U2325 );
                                    l_U2882 = 1;
                                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2759(), 0 );
                                    if (DOES_VEHICLE_EXIST( l_U2883 ))
                                    {
                                        if (NOT (IS_CAR_DEAD( l_U2883 )))
                                        {
                                            SET_CAR_ENGINE_ON( l_U2883, 0, 0 );
                                            RETUNE_RADIO_TO_STATION_NAME( "OFF" );
                                            if (LOCATE_CAR_3D( l_U2883, 735.95730000, -55.67550000, 4.81860000, 30.00000000, 30.00000000, 30.00000000, 0 ))
                                            {
                                                SET_CAR_COORDINATES( l_U2883, 730.27470000, -80.20270000, 5.54630000 );
                                                SET_CAR_HEADING( l_U2883, 244.83830000 );
                                                SET_CAR_ON_GROUND_PROPERLY( l_U2883 );
                                            }
                                            else
                                            {
                                                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2883 );
                                            }
                                        }
                                    }
                                    CLEAR_AREA( 735.95730000, -55.67550000, 4.81860000, 500.00000000, 1 );
                                    CLEAR_AREA_OF_COPS( 735.95730000, -55.67550000, 4.81860000, 500.00000000 );
                                    SWITCH_GARBAGE_TRUCKS( 0 );
                                    SET_CREATE_RANDOM_COPS( 0 );
                                    if (IS_CHAR_IN_ANY_CAR( sub_2759() ))
                                    {
                                        WARP_CHAR_FROM_CAR_TO_COORD( sub_2759(), 722.18590000, -68.26660000, 5.82370000 );
                                    }
                                    if (l_U2704)
                                    {
                                        START_CUTSCENE_NOW( "fau7_a" );
                                    }
                                    l_U2875 = 4;
                                }
                            }
                            else if (NOT l_U2617[0])
                            {
                                PRINT_NOW( "FA8_60", 7500, 1 );
                                l_U2617[0] = 1;
                            };;;
                        }
                        else if (NOT (IS_PED_RAGDOLL( l_U2421 )))
                        {
                            sub_22709( "F7_MEETJ", ref l_U2876, 6, 1 );
                        }
                    }
                    else if (IS_PED_RAGDOLL( l_U2421 ))
                    {
                        sub_22848( ref l_U2876 );
                    }
                    OPEN_SEQUENCE_TASK( ref l_U2425 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2759() );
                    CLOSE_SEQUENCE_TASK( l_U2425 );
                    if (NOT (IS_CHAR_INJURED( l_U2421 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U2421, l_U2425 );
                    }
                    CLEAR_SEQUENCE_TASK( l_U2425 );;
                }
            }
        }
        break;
        case 2: break;
        case 4:
        if (l_U2704)
        {
            sub_3839( "Trying to load cutscene...." );
            if (HAS_CUTSCENE_LOADED())
            {
                sub_3839( "Cutscene loaded...." );
                CLEAR_AREA( 738.70810000, -55.42650000, 4.81860000, 200.00000000, 1 );
                SWITCH_ROADS_OFF( 767.50890000, -163.53480000, 0.00000000, 891.41320000, 91.06410000, 100.00000000 );
                l_U2429 = 0;
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                    sub_3839( "Waiting to finish cutscene" );
                }
                l_U2875 = 3;
                CLEAR_NAMED_CUTSCENE( "fau7_a" );
            }
        }
        else
        {
            DO_SCREEN_FADE_OUT( 2000 );
            WAIT( 2000 );
            if (IS_CHAR_IN_ANY_CAR( sub_2759() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_2759(), 738.58710000, -54.96620000, 4.81860000 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_2759(), 738.58710000, -54.96620000, 4.81860000 );
            }
            SET_ROOM_FOR_CHAR_BY_NAME( sub_2759(), "nikwarehouse_room" );
            SET_CHAR_HEADING( sub_2759(), 280.50000000 );
            if (NOT (IS_CHAR_DEAD( l_U2421 )))
            {
                SET_CHAR_COORDINATES( l_U2421, 733.45950000, -60.36220000, 5.81860000 );
                SET_CHAR_HEADING( l_U2421, 260.00520000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U2421, "nikwarehouse_room" );
            }
            WAIT( 2000 );
            SET_GAME_CAM_HEADING( 90.00000000 );
            sub_23879();
            DO_SCREEN_FADE_IN( 500 );
            l_U2875 = 3;
        }
        break;
        case 3:
        GET_WEAPONTYPE_MODEL( 5, ref uVar8 );
        sub_2929( 25 );
        sub_2929( 24 );
        REQUEST_MODEL( uVar8 );
        REQUEST_MODEL( -1758615024 );
        REQUEST_ANIMS( "missfaustin8" );
        REQUEST_MODEL( l_U2315 );
        REQUEST_MODEL( l_U2316 );
        REQUEST_MODEL( -366960778 );
        REQUEST_MODEL( -268530289 );
        while ((NOT (HAVE_ANIMS_LOADED( "missfaustin8" ))) || ((NOT (HAS_MODEL_LOADED( -366960778 ))) || ((NOT (HAS_MODEL_LOADED( -268530289 ))) || ((NOT (sub_3694( 24 ))) || ((NOT (sub_3694( 25 ))) || ((NOT (HAS_MODEL_LOADED( -1758615024 ))) || ((NOT (HAS_MODEL_LOADED( uVar8 ))) || ((NOT (HAS_MODEL_LOADED( l_U2316 ))) || (NOT (HAS_MODEL_LOADED( l_U2315 )))))))))))
        {
            if (NOT (HAS_MODEL_LOADED( l_U2315 )))
            {
                sub_3839( "gang_model1 not loaded" );
            }
            if (NOT (HAS_MODEL_LOADED( l_U2316 )))
            {
                sub_3839( "gang_model2 not loaded" );
            }
            if (NOT (HAS_MODEL_LOADED( -1758615024 )))
            {
                sub_3839( "EC_BPJACKET not loaded" );
            }
            if (NOT (sub_3694( 25 )))
            {
                sub_3839( "SC_DIMITRI not loaded" );
            }
            if (NOT (sub_3694( 24 )))
            {
                sub_3839( "SC_BULGARIN not loaded" );
            }
            if (NOT (HAS_MODEL_LOADED( -196312163 )))
            {
                sub_3839( "W_GLOCK not loaded" );
            }
            if (NOT (HAS_MODEL_LOADED( -268530289 )))
            {
                sub_3839( "BM_CHAR_FAG not loaded" );
            }
            if (NOT (HAS_MODEL_LOADED( 2046537925 )))
            {
                sub_3839( "POLICE not loaded" );
            }
            if (NOT (HAS_MODEL_LOADED( -366960778 )))
            {
                sub_3839( "CJ_WARE_DOOR not loaded" );
            }
            if (NOT (HAVE_ANIMS_LOADED( "missfaustin8" )))
            {
                sub_3839( "missfaustin8 not loaded" );
            }
            WAIT( 0 );
        }
        # -sub_C1FFC0-0xc214c8( 0, ref l_U2506 );
        # -sub_C1FFC0-0xc214c8( 2, ref l_U2507 );
        LOAD_COMBAT_DECISION_MAKER( 8, ref l_U2510 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2508 );
        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2508, 30 );
        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2508, 2 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2511 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2509 );
        LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2513 );
        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2511, 30 );
        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2511, 2 );
        SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U2509, 0 );
        SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2509, 2 );
        SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U2513, 1 );
        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2513, 25 );
        if (l_U2708)
        {
            LOAD_COMBAT_DECISION_MAKER( 8, ref l_U2512 );
            SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U2512, 0 );
            SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U2512, 15 );
        }
        sub_9335( 2 );
        if (l_U2712)
        {
            if (NOT (DOES_CHAR_EXIST( l_U2421 )))
            {
                sub_9335( 0 );
            }
        }
        l_U2419 = 1;
        l_U2875 = 5;
        break;
        case 5:
        if (NOT bVar6)
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2759() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_2759(), 736.40670000, -58.02960000, 4.81890000 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_2759(), 736.40670000, -58.02960000, 4.81890000 );
            }
            CLEAR_AREA( 735.95730000, -55.67550000, 4.81860000, 50.00000000, 1 );
            SET_CHAR_HEADING( sub_2759(), 280.50000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_2759(), "nikwarehouse_room" );
            if (NOT (IS_CHAR_DEAD( l_U2421 )))
            {
                SET_CHAR_DECISION_MAKER( l_U2421, l_U2506 );
                SET_CHAR_COORDINATES( l_U2421, 741.50700000, -66.33820000, 5.81860000 );
                SET_CHAR_HEADING( l_U2421, 292.78050000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U2421, "nikwarehouse_room" );
                SET_CHAR_HEALTH( l_U2421, 1000 );
            }
            bVar6 = true;
        }
        if (l_U2882)
        {
            SET_CURRENT_CHAR_WEAPON( sub_2759(), l_U2325, 1 );
        }
        if (l_U2703)
        {
            ;
        }
        OPEN_SEQUENCE_TASK( ref l_U2514 );
        TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, 737.29050000, -57.88250000, 5.81860000, -2 );
        CLOSE_SEQUENCE_TASK( l_U2514 );
        if (NOT l_U2705)
        {
            TASK_PERFORM_SEQUENCE( sub_2759(), l_U2514 );
        }
        CLEAR_SEQUENCE_TASK( l_U2514 );
        GET_GAME_TIMER( ref l_U2817 );
        GET_GAME_TIMER( ref l_U2887 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        uVar7 = GET_HASH_KEY( "nikwarehouse_room" );
        GET_INTERIOR_AT_COORDS( 737.29050000, -57.88250000, 7.81860000, ref uVar5 );
        LOAD_SCENE_FOR_ROOM_BY_KEY( uVar5, uVar7 );
        GET_WEAPONTYPE_MODEL( 5, ref uVar8 );
        CREATE_PICKUP_WITH_AMMO( uVar8, 22, 1, 758.39420000, -68.06000000, 4.82230000, ref l_U2317 );
        ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2317, "nikwarehouse_room" );
        MARK_MODEL_AS_NO_LONGER_NEEDED( uVar8 );
        CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 744.29440000, -57.41070000, 5.02230000, 269.86000000, 0, 46.80000000, ref l_U2318 );
        ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2318, "nikwarehouse_room" );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1758615024 );
        CREATE_PICKUP_ROTATE( sub_25648( 12 ), 22, 50, 752.10300000, -51.89700000, 4.83900000, 87, 0, 60.00000000, ref l_U2319[0] );
        ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2319[0], "nikwarehouse_room" );
        CREATE_PICKUP_ROTATE( sub_25648( 12 ), 22, 50, 770.86300000, -50.45500000, 4.87600000, 87, 0, 60.00000000, ref l_U2319[1] );
        ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2319[1], "nikwarehouse_room" );
        CREATE_PICKUP_ROTATE( sub_25648( 12 ), 22, 50, 752.78670000, -55.32740000, 4.87600000, 87, 0, 60.00000000, ref l_U2319[2] );
        ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U2319[2], "nikwarehouse_room" );
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        if (l_U2705)
        {
            l_U2875 = 7;
        }
        else
        {
            l_U2875 = 6;
        }
        break;
        case 7:
        sub_25993();
        break;
        case 6:
        if (NOT l_U2705)
        {
            GET_GAME_TIMER( ref l_U2888 );
            if (((l_U2888 - l_U2887) > 30000) || (IS_PED_IN_COVER( sub_2759() )))
            {
                GET_GAME_VIEWPORT_ID( ref l_U2332 );
                SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U2332, "nikwarehouse_room" );
                SET_GAME_CAM_HEADING( 45.00000000 );
                SET_PLAYER_CONTROL( sub_4388(), 1 );
                sub_23879();
                SET_WANTED_MULTIPLIER( 0.00000000 );
                STOP_PED_SPEAKING( sub_2759(), 1 );
                SET_PED_IS_BLIND_RAGING( sub_2759(), 1 );
                GET_GAME_TIMER( ref l_U2889 );
                DO_SCREEN_FADE_IN( 500 );
                GET_GAME_TIMER( ref l_U2890 );
                while (((l_U2890 - l_U2889) < 4000) AND (IS_SCREEN_FADING_IN()))
                {
                    WAIT( 0 );
                    GET_GAME_TIMER( ref l_U2890 );
                    SET_GAME_CAM_HEADING( 45.00000000 );
                }
                if (NOT (IS_CHAR_DEAD( l_U2421 )))
                {
                    SET_CHAR_PROOFS( l_U2421, 0, 0, 0, 0, 0 );
                }
                l_U2818 = 1;
                l_U2875 = 8;
            }
            else
            {
                GET_CHAR_COORDINATES( sub_2759(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                if (uVar2._fU8 < 3.00000000)
                {
                    SCRIPT_ASSERT( "Fallen through the map!" );
                }
            }
            SET_GAME_CAM_HEADING( 45.00000000 );
        }
        else
        {
            SET_GAME_CAM_HEADING( 45.00000000 );
            GET_GAME_VIEWPORT_ID( ref l_U2332 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U2332, "nikwarehouse_room" );
            SET_PLAYER_CONTROL( sub_4388(), 1 );
            sub_23879();
            SET_WANTED_MULTIPLIER( 0.00000000 );
            l_U2875 = 8;
        }
        break;
        case 8:
        l_U2314 = 3;
        break;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2759() ))
    {
        if (NOT l_U2884)
        {
            if (DOES_VEHICLE_EXIST( l_U2883 ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2883 );
            }
            GET_CAR_CHAR_IS_USING( sub_2759(), ref l_U2883 );
            SET_CAR_AS_MISSION_CAR( l_U2883 );
            SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U2883, 1 );
            l_U2884 = 1;
        }
    }
    else if (l_U2884)
    {
        l_U2884 = 0;
    }
    if (NOT l_U2885)
    {
        if (NOT (IS_CHAR_DEAD( l_U2421 )))
        {
            if (IS_CHAR_ON_FIRE( l_U2421 ))
            {
                SET_CHAR_HEALTH( l_U2421, 150 );
                l_U2885 = 1;
            }
        }
    }
    return;
}

void sub_9038(unknown uParam0, unknown uParam1)
{
    return;
}

float sub_9228(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar6._fU0, uVar6._fU4, uVar6._fU8, uParam1._fU0, uParam1._fU4, uParam1._fU8, ref Result );
        return Result;
    }
    return -1.00000000;
}

void sub_9335(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_9512( 3, ref l_U2421, l_U2422._fU0, l_U2422._fU4, l_U2422._fU8, 311.63570000 );
        sub_4169( 1, l_U2421, "JACOB", 0 );
        GIVE_WEAPON_TO_CHAR( l_U2421, 12, 3000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U2421, 0, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U2421, 24 );
        SET_PED_DIES_WHEN_INJURED( l_U2421, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2421, 1 );
        SET_CHAR_PROP_INDEX( l_U2421, 1, 0 );
        SET_CHAR_NEVER_TARGETTED( l_U2421, 1 );
        if (NOT l_U2707)
        {
            SET_CHAR_PROOFS( l_U2421, 1, 1, 1, 1, 1 );
        }
        else
        {
            SET_CHAR_HEALTH( l_U2421, 200 );
        }
        CLEAR_ROOM_FOR_CHAR( l_U2421 );
        l_U2818 = 1;
        l_U1192._fU0 = l_U2421;
        break;
        case 1:
        while (NOT (sub_11366( ref l_U2599 )))
        {
            WAIT( 0 );
        }
        SET_CAR_COORDINATES( l_U2599, 815.50080000, -49.04960000, 5.47800000 );
        SET_CAR_HEADING( l_U2599, 213.24850000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2599 );
        break;
        case 2:
        sub_9512( 25, ref l_U2326, 782.49490000, -40.70050000, 4.91920000, 304.27350000 );
        SET_CHAR_DECISION_MAKER( l_U2326, l_U2506 );
        GIVE_WEAPON_TO_CHAR( l_U2326, 7, 1500, 0 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U2326, "nikwarehouse_room" );
        UNLOCK_RAGDOLL( l_U2326, 0 );
        SET_CHAR_VISIBLE( l_U2326, 1 );
        SET_CHAR_PROOFS( l_U2326, 1, 1, 1, 1, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U2326, 1 );
        sub_9512( 24, ref l_U2329, 786.12900000, -54.51890000, 4.85800000, 304.27350000 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U2329, "nikwarehouse_room" );
        SET_CHAR_DECISION_MAKER( l_U2329, l_U2506 );
        SET_CHAR_PROOFS( l_U2329, 1, 1, 1, 1, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U2329, 1 );
        GIVE_WEAPON_TO_CHAR( l_U2329, 7, 1500, 0 );
        UNLOCK_RAGDOLL( l_U2329, 0 );
        SET_CHAR_VISIBLE( l_U2329, 1 );
        SET_CHAR_PROOFS( l_U2329, 1, 1, 1, 1, 1 );
        SET_CHAR_NEVER_TARGETTED( l_U2329, 1 );
        break;
        case 3: break;
        case 10:
        CLEAR_AREA( 812.77130000, -52.78370000, 5.61000000, 50.00000000, 1 );
        CREATE_CAR( 2046537925, 832.60910000, -64.20070000, 5.64670000, ref l_U2515[0], 1 );
        SET_CAR_HEADING( l_U2515[0], 28.39300000 );
        SWITCH_CAR_SIREN( l_U2515[0], 1 );
        LOCK_CAR_DOORS( l_U2515[0], 1 );
        CREATE_CHAR_INSIDE_CAR( l_U2515[0], 6, -183203150, ref l_U2533[4] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U2533[4], 25 );
        SET_CHAR_DECISION_MAKER( l_U2533[4], l_U2506 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U2515[0], 1 );
        CREATE_CAR( 2046537925, 802.35070000, 1.71660000, 5.64600000, ref l_U2515[1], 1 );
        SET_CAR_HEADING( l_U2515[1], 194.69730000 );
        SWITCH_CAR_SIREN( l_U2515[1], 1 );
        LOCK_CAR_DOORS( l_U2515[1], 1 );
        CREATE_CHAR_INSIDE_CAR( l_U2515[1], 6, -183203150, ref l_U2533[5] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U2533[5], 25 );
        SET_CHAR_DECISION_MAKER( l_U2533[5], l_U2506 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U2515[1], 1 );
        sub_11366( ref l_U2599 );
        SET_CAR_COORDINATES( l_U2599, 815.98260000, -58.77440000, 5.38600000 );
        SET_CAR_HEADING( l_U2599, 342.39010000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2599 );
        break;
        case 11:
        SCRIPT_ASSERT( "DW_POLICE_PEDS called" );
        l_U2533[0] = sub_12458( 805.98560000, -35.85040000, 6.00030000, 135.93330000 );
        l_U1212[0]._fU0 = l_U2533[0];
        l_U1212[0]._fU48 = 11;
        l_U1212[0]._fU36 = {795.32880000, -39.42260000, 5.96460000};
        l_U2533[1] = sub_12458( 807.33010000, -35.28590000, 6.00040000, 173.00000000 );
        l_U1212[1]._fU0 = l_U2533[1];
        l_U1212[1]._fU48 = 10;
        l_U1212[1]._fU36 = {790.76810000, -43.01620000, 5.92680000};
        l_U2533[2] = sub_12458( 810.22030000, -45.12200000, 6.00040000, 127.63800000 );
        l_U1212[2]._fU0 = l_U2533[2];
        l_U1212[2]._fU48 = 29;
        l_U1212[2]._fU36 = {799.43890000, -50.87830000, 5.89700000};
        break;
        case 12:
        l_U2533[3] = sub_12458( 812.79180000, -33.87850000, 6.03960000, 129.22150000 );
        l_U1212[3]._fU0 = l_U2533[3];
        l_U1212[3]._fU48 = 44;
        l_U1212[3]._fU36 = {813.55910000, -35.95920000, 6.03560000};
        l_U1212[4]._fU0 = l_U2533[4];
        l_U1212[4]._fU48 = 44;
        l_U1212[4]._fU12 = 1;
        l_U1212[4]._fU8 = 1;
        l_U2533[6] = sub_12458( 819.85640000, -37.72600000, 5.93520000, 160.27190000 );
        l_U1212[6]._fU0 = l_U2533[6];
        l_U1212[6]._fU48 = 45;
        l_U1212[6]._fU12 = 1;
        l_U1212[6]._fU8 = 1;
        l_U1212[5]._fU0 = l_U2533[5];
        l_U1212[5]._fU48 = 45;
        l_U1212[5]._fU12 = 1;
        l_U1212[5]._fU8 = 1;
        l_U2533[9] = sub_12458( 827.67640000, -43.68080000, 6.00030000, 129.22150000 );
        l_U1212[9]._fU0 = l_U2533[9];
        l_U1212[9]._fU48 = 46;
        l_U1212[9]._fU12 = 1;
        l_U1212[9]._fU8 = 1;
        break;
        case 13:
        CLEAR_AREA( 812.77130000, -52.78370000, 5.61000000, 10.00000000, 1 );
        CREATE_CAR( 2046537925, 832.60910000, -64.20070000, 5.64670000, ref l_U2515[0], 1 );
        SET_CAR_HEADING( l_U2515[0], 28.39300000 );
        SWITCH_CAR_SIREN( l_U2515[0], 1 );
        LOCK_CAR_DOORS( l_U2515[0], 1 );
        SET_CAR_ENGINE_ON( l_U2515[0], 1, 1 );
        CREATE_CAR( 2046537925, 802.35070000, 1.71660000, 5.64600000, ref l_U2515[1], 1 );
        SET_CAR_HEADING( l_U2515[1], 194.69730000 );
        SWITCH_CAR_SIREN( l_U2515[1], 1 );
        LOCK_CAR_DOORS( l_U2515[1], 1 );
        SET_CAR_ENGINE_ON( l_U2515[1], 1, 1 );
        CREATE_CAR( 2046537925, 841.81700000, -69.93820000, 5.54740000, ref l_U2600, 1 );
        SET_CAR_HEADING( l_U2600, 35.32660000 );
        LOCK_CAR_DOORS( l_U2600, 1 );
        SWITCH_CAR_SIREN( l_U2600, 1 );
        SET_CAR_ENGINE_ON( l_U2600, 1, 1 );
        l_U2533[4] = sub_13645( l_U2515[0], -1 );
        l_U1212[4]._fU0 = l_U2533[4];
        l_U1212[4]._fU48 = 45;
        l_U1212[4]._fU36 = {818.30190000, -34.55950000, 5.93650000};
        l_U2533[3] = sub_13645( l_U2515[0], 0 );
        l_U1212[3]._fU0 = l_U2533[3];
        l_U1212[3]._fU48 = 45;
        l_U1212[3]._fU12 = 1;
        l_U1212[3]._fU8 = 1;
        l_U2533[5] = sub_13645( l_U2515[1], -1 );
        l_U1212[5]._fU0 = l_U2533[5];
        l_U1212[5]._fU48 = 44;
        l_U1212[5]._fU12 = 1;
        l_U1212[5]._fU8 = 1;
        l_U2533[9] = sub_13645( l_U2600, -1 );
        l_U1212[9]._fU0 = l_U2533[9];
        l_U1212[9]._fU48 = 47;
        l_U1212[9]._fU36 = {824.19210000, -41.32550000, 6.00010000};
        break;
        case 4: break;
        case 5:
        l_U2431[5] = sub_14213( l_U2316, 23, 765.59940000, -61.69250000, 5.85370000, 70.55741000, 12 );
        l_U491[5]._fU0 = l_U2431[5];
        l_U491[5]._fU36 = {757.07970000, -56.27170000, 5.82650000};
        l_U491[5]._fU48 = 2;
        l_U491[5]._fU76 = l_U2511;
        l_U2431[6] = sub_14213( l_U2316, 23, 769.53170000, -52.44740000, 5.85570000, 99.67980000, 7 );
        l_U491[6]._fU0 = l_U2431[6];
        l_U491[6]._fU36 = {763.22590000, -66.60791000, 5.84150000};
        l_U491[6]._fU20 = 1;
        l_U491[6]._fU76 = l_U2508;
        break;
        case 8:
        l_U2431[8] = sub_14213( l_U2316, 23, 782.11070000, -63.80250000, 5.85570000, 151.17690000, 12 );
        l_U491[8]._fU0 = l_U2431[8];
        l_U491[8]._fU36 = {771.48280000, -37.21210000, 5.89230000};
        l_U491[8]._fU20 = 1;
        l_U491[8]._fU76 = l_U2511;
        l_U2431[9] = sub_14213( l_U2315, 23, 771.95760000, -36.67920000, 5.89440000, 179.44050000, 7 );
        l_U491[9]._fU0 = l_U2431[9];
        l_U491[9]._fU36 = {767.04740000, -64.34640000, 5.85570000};
        l_U491[9]._fU20 = 1;
        l_U491[9]._fU76 = l_U2508;
        l_U2431[10] = sub_14213( l_U2316, 23, 786.62070000, -50.49120000, 5.87740000, 82.47650000, 12 );
        l_U491[10]._fU0 = l_U2431[10];
        l_U491[10]._fU36 = {768.67680000, -66.14110000, 5.85570000};
        l_U491[10]._fU20 = 1;
        l_U491[10]._fU76 = l_U2511;
        break;
        case 6:
        if (NOT (DOES_CHAR_EXIST( l_U2431[8] )))
        {
            l_U2431[8] = sub_14213( l_U2316, 23, 777.51640000, -45.65740000, 5.88350000, 153.18170000, 12 );
        }
        else
        {
            sub_15021( ref l_U491[8] );
        }
        l_U491[8]._fU0 = l_U2431[8];
        l_U491[8]._fU36 = {772.55910000, -49.10460000, 5.85910000};
        l_U491[8]._fU48 = 8;
        l_U491[8]._fU76 = l_U2511;
        if (NOT (DOES_CHAR_EXIST( l_U2431[9] )))
        {
            l_U2431[9] = sub_14213( l_U2315, 23, 772.52340000, -36.97630000, 4.89620000, 6.70590000, 12 );
            if (NOT (IS_CHAR_DEAD( l_U2431[9] )))
            {
                TASK_DUCK( l_U2431[9], -2 );
            }
        }
        else
        {
            sub_15021( ref l_U491[9] );
        }
        l_U491[9]._fU0 = l_U2431[9];
        l_U491[9]._fU36 = {767.04740000, -64.34640000, 5.85570000};
        l_U491[9]._fU48 = 42;
        l_U491[9]._fU76 = l_U2511;
        if (NOT (DOES_CHAR_EXIST( l_U2431[10] )))
        {
            l_U2431[10] = sub_14213( l_U2316, 23, 761.65390000, -61.12991000, 4.83970000, 90.00000000, 7 );
        }
        else
        {
            sub_15021( ref l_U491[10] );
        }
        l_U491[10]._fU0 = l_U2431[10];
        l_U491[10]._fU36 = {757.68650000, -47.42650000, 5.83470000};
        l_U491[10]._fU48 = 31;
        l_U491[10]._fU76 = l_U2508;
        if (IS_CHAR_DEAD( l_U2431[5] ))
        {
            if (NOT (DOES_CHAR_EXIST( l_U2431[11] )))
            {
                l_U2431[11] = sub_14213( l_U2315, 23, 763.13540000, -66.29540000, 5.84130000, 13.49990000, 12 );
                l_U491[11]._fU0 = l_U2431[11];
                l_U491[11]._fU36 = {755.54270000, -51.34150000, 5.82440000};
                l_U491[11]._fU48 = 2;
                l_U491[11]._fU76 = l_U2511;
                l_U491[11]._fU24 = 1;
            }
        }
        if (NOT (DOES_CHAR_EXIST( l_U2431[12] )))
        {
            l_U2431[12] = sub_14213( l_U2316, 23, 793.21510000, -32.51590000, 5.97700000, 111.03530000, 7 );
            l_U491[12]._fU0 = l_U2431[12];
            l_U491[12]._fU36 = {769.53040000, -40.56310000, 10.16420000};
            l_U491[12]._fU48 = 21;
            l_U491[12]._fU76 = l_U2508;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2431[20] )))
        {
            l_U2431[20] = sub_14213( l_U2316, 23, 766.72240000, -38.86870000, 8.96879900, 99.00000000, 7 );
            l_U491[20]._fU0 = l_U2431[20];
            l_U491[20]._fU36 = {754.76790000, -45.77350000, 8.96879900};
            l_U491[20]._fU48 = 16;
            l_U491[20]._fU28 = 1;
            l_U491[20]._fU76 = l_U2513;
        }
        if (NOT (DOES_CHAR_EXIST( l_U2431[22] )))
        {
            if (NOT l_U491[22]._fU4)
            {
                l_U2431[22] = sub_14213( l_U2316, 23, 757.90790000, -47.24340000, 5.80570000, 99.00000000, 7 );
                l_U491[22]._fU0 = l_U2431[22];
                l_U491[22]._fU36 = {755.36530000, -51.66320000, 4.78850000};
                l_U491[22]._fU48 = 2;
                l_U491[22]._fU76 = l_U2508;
            }
        }
        break;
        case 9:
        l_U2431[13] = sub_14213( l_U2315, 23, 800.75260000, -50.41200000, 5.90640100, 115.89770000, 12 );
        l_U491[13]._fU0 = l_U2431[13];
        l_U491[13]._fU36 = {775.00950000, -42.81020000, 5.89010000};
        l_U491[13]._fU48 = 33;
        l_U491[13]._fU76 = l_U2511;
        l_U491[13]._fU24 = 1;
        l_U2431[14] = sub_14213( l_U2315, 23, 772.52340000, -36.97630000, 4.89620000, 6.70590000, 12 );
        l_U491[14]._fU0 = l_U2431[14];
        l_U491[14]._fU36 = {774.12420000, -62.62250000, 5.85570000};
        l_U491[14]._fU48 = 43;
        l_U491[14]._fU76 = l_U2511;
        l_U491[14]._fU24 = 1;
        l_U2431[16] = sub_14213( l_U2316, 23, 784.03160000, -32.65670000, 4.90820000, 274.73460000, 12 );
        l_U491[16]._fU0 = l_U2431[16];
        l_U491[16]._fU36 = {784.66860000, -50.08350000, 5.87320000};
        l_U491[16]._fU20 = 1;
        l_U491[16]._fU76 = l_U2511;
        l_U2431[21] = sub_14213( l_U2315, 23, 750.53250000, -69.57870000, 8.96879900, 276.75850000, 12 );
        l_U491[21]._fU0 = l_U2431[21];
        l_U491[21]._fU36 = {766.94740000, -62.01560000, 8.96879900};
        l_U491[21]._fU48 = 49;
        l_U491[21]._fU28 = 1;
        l_U491[21]._fU76 = l_U2513;
        break;
        case 7:
        sub_15021( ref l_U491[16] );
        l_U491[16]._fU48 = 37;
        l_U491[16]._fU12 = 1;
        l_U2431[15] = sub_14213( l_U2315, 23, 784.71700000, -50.42030000, 5.87163000, 153.58400000, 7 );
        l_U491[15]._fU0 = l_U2431[15];
        l_U491[15]._fU36 = {774.08890000, -60.35720000, 10.16420000};
        l_U491[15]._fU48 = 19;
        l_U491[15]._fU76 = l_U2508;
        SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U2431[15], 0 );
        l_U2431[17] = sub_14213( l_U2316, 23, 776.86510000, -62.11500000, 4.85600000, 122.69450000, 12 );
        l_U491[17]._fU0 = l_U2431[17];
        l_U491[17]._fU36 = {772.55910000, -49.10460000, 5.85910000};
        l_U491[17]._fU48 = 8;
        l_U491[17]._fU76 = l_U2511;
        l_U491[17]._fU24 = 1;
        l_U2431[18] = sub_14213( l_U2316, 23, 804.21280000, -46.64330000, 16.23080000, 297.75850000, 12 );
        l_U491[18]._fU0 = l_U2431[18];
        l_U491[18]._fU36 = {798.61990000, -47.30540000, 17.23080000};
        l_U491[18]._fU48 = 17;
        l_U491[18]._fU28 = 1;
        l_U491[18]._fU76 = l_U2513;
        TASK_DUCK( l_U2431[18], -2 );
        SET_CHAR_NEVER_TARGETTED( l_U2431[18], 1 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U2431[18], 1 );
        break;
        case 14:
        l_U2431[29] = sub_14213( l_U2316, 23, 767.39020000, -63.07300000, 4.85610000, 47.00000000, 12 );
        l_U2431[30] = sub_14213( l_U2316, 23, 772.73830000, -58.25480000, 4.85610000, 66.00000000, 12 );
        l_U2431[31] = sub_14213( l_U2316, 23, 766.60260000, -44.83200000, 4.85610000, 263.00000000, 12 );
        l_U2431[32] = sub_14213( l_U2316, 23, 786.02880000, -50.17720000, 4.87750000, 85.00000000, 12 );
        l_U2431[33] = sub_14213( l_U2316, 23, 787.06320000, -44.14200000, 4.91450000, 109.00000000, 12 );
        break;
        case 15:
        l_U2431[24] = sub_14213( l_U2316, 23, 767.90250000, -59.49820000, 4.85610000, 0.00000000, 12 );
        l_U2431[25] = sub_14213( l_U2316, 23, 755.54310000, -47.60360000, 4.82730000, 202.00000000, 12 );
        break;
    }
    return;
}

void sub_9512(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_2940( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_9562( uParam0, (uParam1^) );
    return;
}

void sub_9562(unknown uParam0, unknown uParam1)
{
    sub_9574( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_9574(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_9668( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_10212( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_9668(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_10212(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_9668( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9668( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_9668( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_9668( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_9668( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_9668( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9668( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_9668( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_9668( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9668( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_9668( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_9668( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_9668( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

int sub_11366(unknown uParam0)
{
    int iVar3;
    vector vVar4;
    float fVar7;

    iVar3 = -498054846;
    if (NOT (HAS_MODEL_LOADED( iVar3 )))
    {
        REQUEST_MODEL( iVar3 );
        return 0;
    }
    vVar4 = {1311.40700000, 94.34690000, 33.77160000};
    fVar7 = 0.00000000;
    CLEAR_AREA( vVar4.x, vVar4.y, vVar4.z, 5.00000000, 0 );
    CREATE_CAR( iVar3, vVar4.x, vVar4.y, vVar4.z, uParam0, 1 );
    CHANGE_CAR_COLOUR( (uParam0^), 40, 0 );
    SET_CAR_HEADING( (uParam0^), fVar7 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    SET_VEH_HAS_STRONG_AXLES( (uParam0^), 1 );
    return 1;
}

void sub_12458(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown Result;

    if (NOT (HAS_MODEL_LOADED( -183203150 )))
    {
        REQUEST_MODEL( -183203150 );
        while (NOT (HAS_MODEL_LOADED( -183203150 )))
        {
            WAIT( 0 );
        }
    }
    CREATE_CHAR( 6, -183203150, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CHAR_HEADING( Result, uParam3 );
    SET_CHAR_DECISION_MAKER( Result, l_U2506 );
    GIVE_WEAPON_TO_CHAR( Result, 7, 2000, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( Result, 25 );
    SET_CHAR_RELATIONSHIP( Result, 5, 23 );
    SET_CHAR_RELATIONSHIP( Result, 5, 0 );
    SET_CHAR_RELATIONSHIP( Result, 1, 25 );
    SET_CHAR_RELATIONSHIP( Result, 5, 24 );
    return Result;
}

void sub_13645(unknown uParam0, int iParam1)
{
    unknown Result;

    if (NOT (HAS_MODEL_LOADED( -183203150 )))
    {
        REQUEST_MODEL( -183203150 );
        while (NOT (HAS_MODEL_LOADED( -183203150 )))
        {
            WAIT( 0 );
        }
    }
    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (iParam1 == -1)
        {
            CREATE_CHAR_INSIDE_CAR( uParam0, 6, -183203150, ref Result );
        }
        else
        {
            CREATE_CHAR_AS_PASSENGER( uParam0, 6, -183203150, iParam1, ref Result );
        }
    }
    SET_CHAR_DECISION_MAKER( Result, l_U2506 );
    GIVE_WEAPON_TO_CHAR( Result, 7, 2000, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( Result, 25 );
    SET_CHAR_RELATIONSHIP( Result, 5, 23 );
    SET_CHAR_RELATIONSHIP( Result, 5, 0 );
    SET_CHAR_RELATIONSHIP( Result, 1, 25 );
    SET_CHAR_RELATIONSHIP( Result, 5, 24 );
    return Result;
}

void sub_14213(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    unknown Result;

    CREATE_CHAR( 26, uParam0, uParam2._fU0, uParam2._fU4, uParam2._fU8, ref Result, 1 );
    SET_ROOM_FOR_CHAR_BY_NAME( Result, "nikwarehouse_room" );
    SET_CHAR_HEADING( Result, uParam5 );
    SET_CHAR_DECISION_MAKER( Result, l_U2506 );
    GIVE_WEAPON_TO_CHAR( Result, uParam6, 3000, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( Result, uParam1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( Result );
    SET_CHAR_RELATIONSHIP( Result, 1, 23 );
    SET_CHAR_RELATIONSHIP( Result, 1, 26 );
    SET_CHAR_AS_ENEMY( Result, 1 );
    return Result;
}

void sub_15021(int iParam0)
{
    iParam0->_fU4 = 0;
    iParam0->_fU8 = 0;
    iParam0->_fU12 = 0;
    iParam0->_fU16 = 0;
    iParam0->_fU52 = 0;
    iParam0->_fU20 = 0;
    if (NOT (IS_CHAR_DEAD( iParam0->_fU0 )))
    {
        REMOVE_CHAR_DEFENSIVE_AREA( iParam0->_fU0 );
    }
    return;
}

int sub_18255(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_INTERIOR_FROM_CHAR( uParam0, ref iVar3 );
        if (iVar3 == nil)
        {
            return 1;
        }
    }
    return 0;
}

void sub_18530(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_18553( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_18553(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_18607( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_18607(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_18629( iParam1 )))
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
    sub_19309( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_18629(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_4693( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_4693( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_4693( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_19309(int iParam0, int iParam1)
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

int sub_20093(unknown uParam0, boolean bParam1, int iParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar5 );
        if (bParam1)
        {
            if (iVar5 == 7)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if (iVar5 == 1)
        {
            GET_SEQUENCE_PROGRESS( uParam0, ref iVar6 );
            if (iVar6 > iParam2)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_20506(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_4693( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_4693( "\n speech is not playing" );
    }
    return 0;
}

void sub_20687(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

int sub_20801(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2759() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2759(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2759() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2759(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2759()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2759() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2759() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4388() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4388() )))
    {
        return 0;
    }
    return 1;
}

void sub_21413()
{
    return sub_21424( 1, 1 );
}

int sub_21424(boolean bParam0, unknown uParam1)
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

int sub_21686()
{
    int iVar2;
    int iVar3;

    if (IS_CHAR_ARMED( sub_2759(), 4 ))
    {
        GET_CURRENT_CHAR_WEAPON( sub_2759(), ref iVar3 );
        if (iVar3 != 0)
        {
            if ((iVar3 == 15) || ((iVar3 == 14) || ((iVar3 == 13) || ((iVar3 == 12) || ((iVar3 == 11) || ((iVar3 == 10) || ((iVar3 == 9) || (iVar3 == 7))))))))
            {
                GET_AMMO_IN_CHAR_WEAPON( sub_2759(), iVar3, ref iVar2 );
                if (iVar2 < 50)
                {
                    GIVE_DELAYED_WEAPON_TO_CHAR( sub_2759(), iVar3, 50, 1 );
                }
                return 1;
            }
            else if (sub_21833())
            {
                return 1;
            }
        }
    }
    else if (sub_21833())
    {
        return 1;
    }
    return 0;
}

int sub_21833()
{
    if (HAS_CHAR_GOT_WEAPON( sub_2759(), 15 ))
    {
        sub_21861( 15 );
        return 1;
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2759(), 14 ))
    {
        sub_21861( 14 );
        return 1;
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2759(), 13 ))
    {
        sub_21861( 13 );
        return 1;
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2759(), 12 ))
    {
        sub_21861( 12 );
        return 1;
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2759(), 9 ))
    {
        sub_21861( 9 );
        return 1;
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2759(), 7 ))
    {
        sub_21861( 7 );
        return 1;
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2759(), 11 ))
    {
        sub_21861( 11 );
        return 1;
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_2759(), 10 ))
    {
        sub_21861( 10 );
        return 1;
    }
    else
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( sub_2759(), 12, 150, 1 );
        return 1;
    };;;;;;;;
    return 0;
}

void sub_21861(unknown uParam0)
{
    int iVar3;

    GET_AMMO_IN_CHAR_WEAPON( sub_2759(), uParam0, ref iVar3 );
    if (iVar3 < 50)
    {
        GIVE_DELAYED_WEAPON_TO_CHAR( sub_2759(), uParam0, 50, 1 );
    }
    else
    {
        SET_CURRENT_CHAR_WEAPON( sub_2759(), uParam0, 1 );
    }
    return;
}

void sub_22709(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_22732( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_22732(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_18607( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_22848(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_4693( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_4693( "\n CONVERSATION PAUSED AT LINE " );
            sub_23004( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_4693( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_4693( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_4693( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_23004(unknown uParam0)
{
    return;
}

void sub_23879()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_25648(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

int sub_25993()
{
    unknown uVar2;
    unknown uVar3;

    switch (l_U2846)
    {
        case 0:
        l_U2416 = 1;
        SET_PLAYER_CONTROL( sub_4388(), 0 );
        BEGIN_CAM_COMMANDS( ref l_U2603 );
        DISPLAY_RADAR( 0 );
        SET_INSTANT_WIDESCREEN_BORDERS( 1 );
        sub_2619( 0 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        REQUEST_MODEL( 2046537925 );
        REQUEST_MODEL( -183203150 );
        REQUEST_CAR_RECORDING( 470 );
        REQUEST_CAR_RECORDING( 471 );
        REQUEST_CAR_RECORDING( 474 );
        if (NOT (IS_CHAR_DEAD( l_U2326 )))
        {
            SET_CHAR_VISIBLE( l_U2326, 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U2329 )))
        {
            SET_CHAR_VISIBLE( l_U2329, 1 );
        }
        if (NOT l_U2849)
        {
            CREATE_CAM( 14, ref l_U2827[4] );
            SET_CAM_POS( l_U2827[4], 793.80930000, -51.06033000, 5.02400200 );
            SET_CAM_ROT( l_U2827[4], 18.37990000, -0.00000000, 60.34171000 );
            SET_CAM_ACTIVE( l_U2827[4], 1 );
            SET_CAM_PROPAGATE( l_U2827[4], 1 );
        }
        else
        {
            CREATE_CAM( 14, ref l_U2827[4] );
            SET_CAM_POS( l_U2827[4], 784.14570000, -54.70218000, 7.76809500 );
            SET_CAM_ROT( l_U2827[4], -3.67090700, -0.00000000, -42.85111000 );
            SET_CAM_FOV( l_U2827[4], 30.90004000 );
            SET_CAM_ACTIVE( l_U2827[4], 1 );
            SET_CAM_PROPAGATE( l_U2827[4], 1 );
        }
        CREATE_CAM( 14, ref l_U2827[5] );
        SET_CAM_POS( l_U2827[5], 793.80930000, -51.06033000, 5.02400200 );
        SET_CAM_ROT( l_U2827[5], 18.37990000, -0.00000000, -43.55437000 );
        SET_CAM_ACTIVE( l_U2827[5], 1 );
        SET_CAM_PROPAGATE( l_U2827[5], 0 );
        CREATE_CAM( 3, ref l_U2827[6] );
        SET_CAM_ACTIVE( l_U2827[6], 0 );
        SET_CAM_PROPAGATE( l_U2827[6], 0 );
        WAIT( 0 );
        GET_GAME_VIEWPORT_ID( ref l_U2847 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U2847, "nikwarehouse_room" );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        GET_GAME_TIMER( ref l_U2815 );
        l_U2846 = 5;
        break;
        case 5:
        if (NOT l_U2849)
        {
            SET_CAM_ACTIVE( l_U2827[4], 0 );
            SET_CAM_PROPAGATE( l_U2827[4], 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U2827[6], l_U2827[4], l_U2827[5], 4000, 0 );
            SET_CAM_ACTIVE( l_U2827[6], 1 );
            SET_CAM_PROPAGATE( l_U2827[6], 1 );
        }
        GET_GAME_TIMER( ref l_U2815 );
        l_U2846 = 6;
        break;
        case 6:
        GET_GAME_TIMER( ref l_U2816 );
        if (NOT (IS_CHAR_DEAD( l_U2326 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U2329 )))
            {
                if (((l_U2816 - l_U2815) > 4500) || ((LOCATE_CHAR_ANY_MEANS_3D( l_U2326, 802.00820000, -41.50910000, 5.82420000, 2.00000000, 5.00000000, 2.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( l_U2329, 802.00820000, -41.50910000, 5.82420000, 2.00000000, 5.00000000, 2.00000000, 0 ))))
                {
                    SET_CAM_ACTIVE( l_U2827[4], 0 );
                    SET_CAM_PROPAGATE( l_U2827[4], 0 );
                    SET_CAM_ACTIVE( l_U2827[5], 0 );
                    SET_CAM_PROPAGATE( l_U2827[5], 0 );
                    SET_CAM_ACTIVE( l_U2827[6], 0 );
                    SET_CAM_PROPAGATE( l_U2827[6], 0 );
                    DESTROY_CAM( l_U2827[6] );
                    DESTROY_CAM( l_U2827[4] );
                    DESTROY_CAM( l_U2827[5] );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    GET_GAME_VIEWPORT_ID( ref uVar2 );
                    GET_KEY_FOR_VIEWPORT_IN_ROOM( uVar2, ref uVar3 );
                    SET_ROOM_FOR_VIEWPORT_BY_KEY( uVar2, uVar3 );
                    if (DOES_CHAR_EXIST( l_U2326 ))
                    {
                        DELETE_CHAR( ref l_U2326 );
                    }
                    if (DOES_CHAR_EXIST( l_U2329 ))
                    {
                        DELETE_CHAR( ref l_U2329 );
                    }
                    sub_27248( 25 );
                    sub_27248( 24 );
                    SET_CREATE_RANDOM_COPS( 1 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    END_CAM_COMMANDS( ref l_U2603 );
                    DISPLAY_RADAR( 1 );
                    SET_PLAYER_CONTROL( sub_4388(), 1 );
                    SET_INSTANT_WIDESCREEN_BORDERS( 0 );
                    l_U2848 = 1;
                    l_U2416 = 0;
                    l_U2846 = 7;
                }
            }
        }
        break;
        case 7:
        return 1;
        break;
    }
    return 0;
}

void sub_27248(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_2940( uParam0 ) );
    return;
}

int sub_28113()
{
    switch (l_U2845)
    {
        case 0:
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 804, 65495, 6, 1, 1.00000000 );
        OPEN_SEQUENCE_TASK( ref l_U2327 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "run_away_a", "missfaustin8", 1.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U2327 );
        if (NOT (IS_CHAR_INJURED( l_U2326 )))
        {
            SET_CHAR_COORDINATES( l_U2326, 785.39900000, -50.42200000, 4.88870000 );
            SET_CHAR_HEADING( l_U2326, 292.27400000 );
            TASK_PERFORM_SEQUENCE( l_U2326, l_U2327 );
        }
        CLEAR_SEQUENCE_TASK( l_U2327 );
        OPEN_SEQUENCE_TASK( ref l_U2330 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "run_away_b", "missfaustin8", 1.00000000, 0, 1, 1, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U2330 );
        if (NOT (IS_CHAR_INJURED( l_U2329 )))
        {
            SET_CHAR_COORDINATES( l_U2329, 784.22300000, -49.35200000, 4.88260000 );
            SET_CHAR_HEADING( l_U2329, 290.27400000 );
            TASK_PERFORM_SEQUENCE( l_U2329, l_U2330 );
        }
        CLEAR_SEQUENCE_TASK( l_U2330 );
        GET_GAME_TIMER( ref l_U2815 );
        l_U2845++;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U2816 );
        if ((l_U2816 - l_U2815) > 400)
        {
            l_U2845++;
        }
        break;
        case 2:
        return 1;
        break;
    }
    return 0;
}

void sub_28709()
{
    int I;

    switch (l_U2872)
    {
        case 0:
        SWITCH_ROADS_OFF( 767.50890000, -163.53480000, 0.00000000, 891.41320000, 91.06410000, 100.00000000 );
        for ( I = 0; I <= 34; I++ )
        {
            l_U491[I]._fU72 = -1;
        }
        l_U2872 = 1;
        break;
        case 1:
        sub_9335( 6 );
        if (NOT l_U491[22]._fU4)
        {
            l_U491[22]._fU4 = 1;
        }
        l_U1613[0] = {l_U491[22]};
        if ((sub_28968( ref l_U1613, 1, 1, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 742.12020000, -58.02580000, 5.81860000, 1.00000000, 18.00000000, 2.00000000, 0 )))
        {
            if (NOT l_U491[1]._fU4)
            {
                sub_29221( l_U491[1]._fU0, "MOVE_IN" );
                sub_15021( ref l_U491[1] );
                l_U491[1]._fU48 = 30;
                l_U491[1]._fU36 = {749.23360000, -49.46270000, 5.81860000};
                l_U491[1]._fU4 = 1;
                GET_GAME_TIMER( ref l_U491[1]._fU72 );
                sub_15021( ref l_U491[6] );
                l_U491[6]._fU36 = {761.46040000, -61.38430000, 5.83880000};
                l_U491[6]._fU48 = 25;
                l_U491[6]._fU4 = 1;
                GET_GAME_TIMER( ref l_U491[6]._fU72 );
            }
            l_U491[20]._fU4 = 1;
            GET_GAME_TIMER( ref l_U491[20]._fU72 );
            l_U2872 = 2;
        }
        break;
        case 2:
        if (NOT l_U2617[6])
        {
            sub_29487();
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (l_U2700)
                {
                    if (l_U2701)
                    {
                        sub_18530( "F7_MORE", ref l_U2363, 6, 1 );
                        l_U2617[6] = 1;
                    }
                }
            }
        }
        if (NOT l_U491[8]._fU4)
        {
            l_U491[8]._fU4 = 1;
            GET_GAME_TIMER( ref l_U491[8]._fU72 );
        }
        if (NOT l_U491[9]._fU4)
        {
            sub_29221( l_U491[9]._fU0, "MOVE_IN" );
            l_U491[9]._fU4 = 1;
            GET_GAME_TIMER( ref l_U491[9]._fU72 );
        }
        if (NOT l_U491[10]._fU4)
        {
            l_U491[10]._fU4 = 1;
            GET_GAME_TIMER( ref l_U491[10]._fU72 );
        }
        if (NOT l_U491[11]._fU4)
        {
            l_U491[11]._fU4 = 1;
            GET_GAME_TIMER( ref l_U491[11]._fU72 );
        }
        if (NOT l_U491[12]._fU4)
        {
            l_U491[12]._fU4 = 1;
            GET_GAME_TIMER( ref l_U491[12]._fU72 );
        }
        l_U1613[0] = {l_U491[4]};
        l_U1613[1] = {l_U491[5]};
        l_U1613[2] = {l_U491[6]};
        l_U1613[3] = {l_U491[7]};
        if ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 751.34040000, -67.77179000, 5.82400000, 1.00000000, 7.00000000, 1.00000000, l_U2706 )) || ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 749.82620000, -56.62440000, 5.81860000, 1.00000000, 7.00000000, 1.00000000, l_U2706 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 748.22530000, -46.02680000, 5.81860000, 1.00000000, 4.00000000, 1.00000000, l_U2706 ))))
        {
            if (sub_28968( ref l_U1613, 4, 2, 0 ))
            {
                ;
            }
            sub_9335( 9 );
            l_U491[13]._fU4 = 1;
            GET_GAME_TIMER( ref l_U491[13]._fU72 );
            l_U491[14]._fU4 = 1;
            GET_GAME_TIMER( ref l_U491[14]._fU72 );
            l_U491[16]._fU4 = 1;
            sub_29221( l_U491[16]._fU0, "MOVE_IN" );
            GET_GAME_TIMER( ref l_U491[16]._fU72 );
            l_U491[21]._fU4 = 1;
            GET_GAME_TIMER( ref l_U491[21]._fU72 );
            l_U2872 = 3;
        }
        break;
        case 3:
        if (NOT l_U2617[7])
        {
            sub_29487();
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (l_U2700)
                {
                    if (l_U2701)
                    {
                        sub_18530( "F7_MORE", ref l_U2363, 6, 1 );
                        l_U2617[7] = 1;
                    }
                }
            }
        }
        if ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 758.65220000, -57.28010000, 5.83150000, 1.00000000, 9.50000000, 1.00000000, l_U2706 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 756.95720000, -43.76970000, 5.83500000, 1.00000000, 3.50000000, 1.00000000, l_U2706 )))
        {
            sub_9335( 7 );
            l_U2872 = 4;
        }
        break;
        case 4:
        if (NOT l_U2617[8])
        {
            sub_29487();
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (l_U2701)
                {
                    sub_18530( "F7_MORE", ref l_U2363, 6, 1 );
                    l_U2617[8] = 1;
                }
            }
        }
        if (NOT l_U491[17]._fU4)
        {
            if ((IS_CHAR_INJURED( l_U2431[8] )) || (IS_CHAR_INJURED( l_U2431[14] )))
            {
                l_U491[17]._fU4 = 1;
                GET_GAME_TIMER( ref l_U491[17]._fU72 );
            }
        }
        l_U491[16]._fU4 = 1;
        if (NOT l_U491[15]._fU4)
        {
            l_U491[15]._fU4 = 1;
            GET_GAME_TIMER( ref l_U491[15]._fU72 );
        }
        if ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 773.30920000, -60.17839000, 5.85570000, 1.00000000, 6.00000000, 1.00000000, l_U2706 )) || ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 773.09880000, -50.68310000, 5.86090000, 1.00000000, 3.00000000, 1.00000000, l_U2706 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 771.82310000, -43.69250000, 5.87620000, 1.00000000, 5.00000000, 1.00000000, l_U2706 ))))
        {
            sub_15021( ref l_U491[21] );
            l_U491[21]._fU36 = {781.36690000, -60.80030000, 8.96879900};
            l_U491[21]._fU48 = 50;
            l_U491[21]._fU4 = 1;
            l_U2872 = 5;
        }
        break;
        case 5:
        if (NOT l_U491[17]._fU4)
        {
            l_U491[17]._fU4 = 1;
            sub_29221( l_U491[17]._fU0, "MOVE_IN" );
            GET_GAME_TIMER( ref l_U491[17]._fU72 );
        }
        if (l_U2848)
        {
            if (NOT l_U491[18]._fU4)
            {
                if (NOT (IS_CHAR_DEAD( l_U2431[18] )))
                {
                    SET_CHAR_NEVER_TARGETTED( l_U2431[18], 0 );
                    l_U491[18]._fU4 = 1;
                }
            }
            if ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 773.30920000, -60.17839000, 5.85570000, 1.00000000, 6.00000000, 1.00000000, l_U2706 )) || ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 771.30320000, -51.28040000, 5.85570000, 1.00000000, 3.00000000, 1.00000000, l_U2706 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 771.82310000, -43.69250000, 5.87620000, 1.00000000, 5.00000000, 1.00000000, l_U2706 ))))
            {
                l_U2872 = 5;
            }
        }
        break;
    }
    if (l_U2872 >= 1)
    {
        sub_31304();
        sub_32021();
        sub_36091();
    }
    for ( I = 0; I <= 34; I++ )
    {
        if (IS_CHAR_INJURED( l_U2431[I] ))
        {
            if (NOT (IS_CHAR_FATALLY_INJURED( l_U2431[I] )))
            {
                SET_CHAR_HEALTH( l_U2431[I], 10 );
            }
        }
    }
    if (l_U2872 > 0)
    {
        sub_36821();
    }
    return;
}

int sub_28968(unknown uParam0, int iParam1, int iParam2, boolean bParam3)
{
    int I;
    int iVar7;

    for ( I = 0; I <= (iParam1 - 1); I++ )
    {
        if ((uParam0^)[I]._fU4)
        {
            if ((IS_CHAR_FATALLY_INJURED( (uParam0^)[I]._fU0 )) || (IS_CHAR_DEAD( (uParam0^)[I]._fU0 )))
            {
                iVar7++;
            }
            else if (bParam3)
            {
                if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
                {
                    iVar7++;
                }
            }
        }
    }
    sub_9038( iVar7, "dead_count..." );
    sub_9038( iParam2, "this_num_peds_killed..." );
    if (iVar7 >= iParam2)
    {
        return 1;
    }
    return 0;
}

void sub_29221(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SAY_AMBIENT_SPEECH( uParam0, uParam1, 1, 1, 0 );
    }
    return;
}

void sub_29487()
{
    sub_29501( ref l_U2333, 0 );
    return;
}

void sub_29501(int iParam0, unknown uParam1)
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

void sub_31304()
{
    int iVar2;

    GET_GAME_TIMER( ref iVar2 );
    if ((NOT (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 751.34040000, -67.77179000, 5.82400000, 1.00000000, 7.00000000, 1.00000000, l_U2706 ))) AND ((NOT (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 749.82620000, -56.62440000, 5.81860000, 1.00000000, 7.00000000, 1.00000000, l_U2706 ))) AND (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 748.22530000, -46.02680000, 5.81860000, 1.00000000, 4.00000000, 1.00000000, l_U2706 )))))
    {
        if (l_U491[10]._fU4)
        {
            if (NOT l_U491[10]._fU68)
            {
                if ((iVar2 - l_U491[10]._fU72) > 20000)
                {
                    sub_15021( ref l_U491[10] );
                    l_U491[10]._fU36 = {761.90370000, -61.23000000, 4.84050000};
                    l_U491[10]._fU48 = 25;
                    l_U491[10]._fU68 = 1;
                    l_U491[10]._fU24 = 1;
                    l_U491[10]._fU4 = 1;
                }
            }
        }
    }
    if ((NOT (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 758.65220000, -57.28010000, 5.83150000, 1.00000000, 9.50000000, 1.00000000, l_U2706 ))) AND (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 756.95720000, -43.76970000, 5.83500000, 1.00000000, 3.50000000, 1.00000000, l_U2706 ))))
    {
        if (l_U491[13]._fU4)
        {
            if (NOT l_U491[13]._fU68)
            {
                if ((iVar2 - l_U491[13]._fU72) > 20000)
                {
                    sub_15021( ref l_U491[13] );
                    l_U491[13]._fU36 = {770.09960000, -58.72720000, 4.85570000};
                    l_U491[13]._fU48 = 26;
                    l_U491[13]._fU68 = 1;
                    l_U491[13]._fU4 = 1;
                    l_U491[13]._fU24 = 1;
                    l_U2431[23] = sub_14213( l_U2315, 23, 800.26540000, -50.81490000, 4.90000000, 16.58830000, 12 );
                    l_U491[23]._fU0 = l_U2431[23];
                    l_U491[23]._fU36 = {775.00950000, -42.81020000, 5.89010000};
                    l_U491[23]._fU48 = 33;
                    l_U491[23]._fU4 = 1;
                    l_U491[23]._fU76 = l_U2508;
                    l_U491[23]._fU24 = 1;
                }
            }
        }
    }
    return;
}

void sub_32021()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 34; I++ )
    {
        if (l_U491[I]._fU4)
        {
            if (NOT (IS_CHAR_DEAD( l_U491[I]._fU0 )))
            {
                if (NOT l_U491[I]._fU8)
                {
                    SET_CHAR_DECISION_MAKER( l_U491[I]._fU0, l_U2506 );
                    if (NOT l_U491[I]._fU24)
                    {
                        OPEN_SEQUENCE_TASK( ref uVar3 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U491[I]._fU36._fU0, l_U491[I]._fU36._fU4, l_U491[I]._fU36._fU8, 3, -1, 0.50000000 );
                        if (l_U491[I]._fU20)
                        {
                            TASK_DUCK( 0, -2 );
                        }
                        CLOSE_SEQUENCE_TASK( uVar3 );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref uVar3 );
                        TASK_GO_TO_COORD_WHILE_SHOOTING( 0, l_U491[I]._fU36._fU0, l_U491[I]._fU36._fU4, l_U491[I]._fU36._fU8, 3, 0.50000000, 0.50000000, sub_2759(), 1 );
                        CLOSE_SEQUENCE_TASK( uVar3 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U491[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U491[I]._fU0, uVar3 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar3 );
                    l_U491[I]._fU8 = 1;
                }
                else if ((l_U491[I]._fU12) || (NOT l_U491[I]._fU16))
                {
                    if (NOT l_U491[I]._fU20)
                    {
                        if (sub_20093( l_U491[I]._fU0, 1, 0 ))
                        {
                            SET_CHAR_DECISION_MAKER( l_U491[I]._fU0, l_U2507 );
                            SET_COMBAT_DECISION_MAKER( l_U491[I]._fU0, l_U491[I]._fU76 );
                            if (l_U2843)
                            {
                                sub_32538();
                            }
                            sub_32648( ref l_U491[I]._fU0, l_U491[I]._fU48 );
                            SET_CHAR_RELATIONSHIP( l_U491[I]._fU0, 5, 0 );
                            if (NOT l_U491[I]._fU60)
                            {
                                if (l_U491[I]._fU52)
                                {
                                    OPEN_SEQUENCE_TASK( ref uVar3 );
                                    if (NOT (IS_CHAR_DEAD( l_U491[I]._fU56 )))
                                    {
                                        TASK_COMBAT( 0, l_U491[I]._fU56 );
                                    }
                                    CLOSE_SEQUENCE_TASK( uVar3 );
                                }
                                else
                                {
                                    OPEN_SEQUENCE_TASK( ref uVar3 );
                                    TASK_COMBAT( 0, sub_2759() );
                                    CLOSE_SEQUENCE_TASK( uVar3 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U491[I]._fU0 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U491[I]._fU0, uVar3 );
                                }
                                CLEAR_SEQUENCE_TASK( uVar3 );
                            }
                            else
                            {
                                SET_CHAR_RELATIONSHIP( l_U491[I]._fU0, 5, 25 );
                                SET_CHAR_RELATIONSHIP( l_U491[I]._fU0, 5, 0 );
                            }
                            l_U491[I]._fU16 = 1;
                            l_U491[I]._fU12 = 0;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_32538()
{
    int I;

    for ( I = 0; I <= 34; I++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U2431[I] )))
        {
            SET_CHAR_ACCURACY( l_U2431[I], 5 );
        }
    }
    l_U2843 = 1;
    return;
}

void sub_32648(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 733.61520000, -63.60920000, 6.81870000, 743.61360000, -63.78370000, 3.81870000, 7.50000000 );
        break;
        case 1:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 744.95640000, -52.74880000, 6.81860000, 742.53610000, -53.37470000, 4.31860000, 10.00000000 );
        break;
        case 2:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 753.81670000, -51.61920000, 6.82340000, 756.70050000, -50.79230000, 4.32340000, 7.00000000 );
        break;
        case 3:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 754.05360000, -51.32800000, 7.31860000, 751.62790000, -51.93280000, 4.31860000, 8.00000000 );
        break;
        case 4:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 754.15800000, -55.80060000, 7.31860000, 748.85800000, -57.27040000, 3.81860000, 17.00000000 );
        break;
        case 5:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 761.35400000, -49.15030000, 6.85280000, 763.77440000, -48.52440000, 4.35280000, 10.00000000 );
        break;
        case 6:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 762.47430000, -49.16590000, 6.84190000, 759.12730000, -50.18920000, 4.34190000, 8.00000000 );
        break;
        case 7:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 767.72340000, -57.39790000, 7.34600000, 759.05080000, -59.80300000, 3.84600000, 15.00000000 );
        break;
        case 8:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 772.36140000, -51.31160000, 6.85570000, 773.81020000, -50.92330000, 3.85570000, 5.50000000 );
        break;
        case 9:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 771.94310000, -51.43050000, 6.85570000, 770.48160000, -51.76800000, 3.85570000, 5.50000000 );
        break;
        case 10:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 790.53700000, -44.89730000, 6.91720000, 791.98600000, -44.50900000, 3.91720000, 3.50000000 );
        break;
        case 11:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 794.06560000, -38.39450000, 6.97270000, 796.48600000, -37.76850000, 3.97270000, 5.50000000 );
        break;
        case 12:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 751.48360000, -41.27520000, 6.81870000, 752.41060000, -44.12840000, 3.81870000, 2.00000000 );
        break;
        case 13:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 770.61930000, -37.83180000, 6.89320000, 772.59190000, -37.50170000, 3.89320000, 3.00000000 );
        break;
        case 14:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 761.86270000, -66.08990000, 6.85570000, 771.08050000, -63.79170000, 3.85570000, 3.50000000 );
        break;
        case 15:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 753.10820000, -67.31240000, 11.16430000, 770.05080000, -62.93080000, 8.16430000, 4.00000000 );
        break;
        case 16:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 763.46360000, -41.70170000, 11.16430000, 747.52580000, -45.97220000, 8.16430000, 4.00000000 );
        break;
        case 17:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 797.25350000, -43.75860000, 18.23080000, 799.84890000, -43.01430000, 16.23080000, 11.50000000 );
        break;
        case 18:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 747.60470000, -66.00020000, 11.16420000, 748.07640000, -67.94370000, 8.66420000, 8.00000000 );
        break;
        case 19:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 773.97470000, -58.93470000, 11.16430000, 774.44170000, -60.87940000, 8.66430000, 8.00000000 );
        break;
        case 20:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 743.07840000, -50.02850000, 11.16420000, 742.52710000, -48.10590000, 8.66420000, 7.50000000 );
        break;
        case 21:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 769.78890000, -42.75970000, 11.16420000, 769.21550000, -40.84360000, 8.66420000, 8.00000000 );
        break;
        case 22:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 744.71150000, -66.04510000, 6.81860000, 741.71420000, -66.17590000, 3.81860000, 2.50000000 );
        break;
        case 23:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 751.03640000, -63.98010000, 6.81860000, 753.92030000, -63.15360000, 3.81860000, 2.50000000 );
        break;
        case 24:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 751.89930000, -63.67440000, 6.81860000, 749.92970000, -64.02170000, 4.31860000, 1.50000000 );
        break;
        case 25:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 759.22480000, -61.78350000, 6.83780000, 762.12920000, -61.03230000, 3.83780000, 2.50000000 );
        break;
        case 26:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 767.84230000, -59.23960000, 6.85570000, 770.79670000, -58.71870000, 3.85570000, 2.50000000 );
        break;
        case 27:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 775.48160000, -58.17080000, 6.85570000, 779.43800000, -57.58040000, 3.85573000, 4.00000000 );
        break;
        case 28:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 783.90810000, -55.06480000, 6.85700000, 786.84790000, -54.46670000, 3.85700000, 3.00000000 );
        break;
        case 29:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 797.47920000, -51.27700000, 6.89700000, 800.41880000, -50.67890000, 3.39700000, 1.50000000 );
        break;
        case 30:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 746.88380000, -50.39350000, 6.81870000, 749.73680000, -49.46640000, 3.81870000, 1.50000000 );
        break;
        case 31:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 755.46890000, -47.72830000, 6.83420000, 758.42970000, -47.24430000, 3.83420000, 2.50000000 );
        break;
        case 32:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 764.13850000, -45.41950000, 6.85580000, 767.09280000, -44.89850000, 3.85580000, 2.50000000 );
        break;
        case 33:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 771.62620000, -42.48690000, 6.89190000, 775.55210000, -41.72060000, 3.89190000, 4.00000000 );
        break;
        case 34:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 780.35570000, -41.08530000, 6.91830000, 783.29540000, -40.48720000, 3.91830000, 3.00000000 );
        break;
        case 35:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 772.89250000, -36.35880000, 11.16420000, 775.32340000, -35.77520000, 9.16420000, 4.50000000 );
        break;
        case 36:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 780.25540000, -63.02150000, 11.16420000, 782.68630000, -62.43790000, 9.16420000, 3.50000000 );
        break;
        case 37:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 780.36600000, -47.98500000, 6.88079900, 784.17020000, -46.74900000, 3.88080000, 10.00000000 );
        break;
        case 38:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 773.11080000, -50.12320000, 6.86590000, 776.91500000, -48.88710000, 3.86590000, 10.00000000 );
        break;
        case 39:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 798.73070000, -53.95590000, 6.86430000, 799.37770000, -56.37070000, 3.86430000, 11.00000000 );
        break;
        case 40:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 764.36950000, -65.43940000, 6.85570000, 776.44360000, -62.20420000, 3.35570000, 4.50000000 );
        break;
        case 42:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 766.98980000, -61.90330000, 6.86070000, 767.69980000, -64.30030000, 4.36070000, 3.00000000 );
        break;
        case 43:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 773.34420000, -60.33490000, 7.36070000, 773.99120000, -62.74970000, 4.36070000, 4.50000000 );
        break;
        case 41:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 767.71040000, -63.92110000, 7.35570000, 775.93950000, -61.79290000, 3.85570000, 3.50000000 );
        break;
        case 44:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 807.62850000, -37.76950000, 7.47720000, 812.12850000, -37.76950000, 4.47720000, 6.00000000 );
        break;
        case 45:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 817.36570000, -36.54340000, 6.94580000, 819.17830000, -35.69820000, 3.94580000, 6.50000000 );
        break;
        case 46:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 825.64250000, -43.74810000, 8.00040000, 827.86000000, -42.59370000, 4.00040000, 5.50000000 );
        break;
        case 47:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 823.58470000, -42.83400000, 7.00030000, 825.79210000, -41.66030000, 4.50030000, 3.50000000 );
        break;
        case 48:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 804.79170000, -42.30620000, 7.51280000, 825.62640000, -36.99980000, 4.51280000, 39.50000000 );
        break;
        case 49:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 766.21560000, -61.39210000, 11.46880000, 767.06240000, -64.78810000, 8.46879900, 7.00000000 );
        break;
        case 50:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 780.66450000, -59.72440000, 11.46890000, 782.00060000, -64.54260000, 8.46890000, 3.00000000 );
        break;
        case 51:
        SET_CHAR_ANGLED_DEFENSIVE_AREA( (uParam0^), 804.42770000, -42.61730000, 6.98120000, 802.02460000, -43.30630000, 3.98120000, 8.00000000 );
        break;
    }
    return;
}

void sub_36091()
{
    int I;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;

    for ( I = 0; I <= 34; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U491[I]._fU0 )))
        {
            if (NOT l_U491[I]._fU32)
            {
                if (l_U491[I]._fU28)
                {
                    GET_CHAR_HEALTH( l_U491[I]._fU0, ref iVar3 );
                    if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U491[I]._fU0, sub_2759(), 1 )) AND (iVar3 < 200))
                    {
                        vVar7 = {sub_36245( sub_2759(), l_U491[I]._fU0, 1 )};
                        vVar7 = {vVar7 * -1.00000000};
                        uVar4 = {vVar7};
                        sub_36545( l_U491[I]._fU0, uVar4 );
                        if (NOT (IS_CHAR_DEAD( l_U491[I]._fU0 )))
                        {
                            ;
                        }
                        l_U491[I]._fU28 = 0;
                        l_U491[I]._fU32 = 1;
                    }
                }
            }
        }
    }
    return;
}

void sub_36245(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;
    vector vVar8;
    vector vVar11;
    vector vVar14;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
    }
    else
    {
        SCRIPT_ASSERT( "First ped is dead in GET_VECTOR_BETWEEN_PEDS" );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar11.x, ref vVar11.y, ref vVar11.z );
    }
    else
    {
        SCRIPT_ASSERT( "Second ped is dead in GET_VECTOR_BETWEEN_PEDS" );
    }
    vVar14 = {vVar11 - vVar8};
    if (bParam2)
    {
        Result = {vVar14 / (VMAG( vVar14 ))};
    }
    else
    {
        Result = {vVar14};
    }
    return Result;
}

void sub_36545(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEALTH( uParam0, ref uVar6 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        SWITCH_PED_TO_RAGDOLL_WITH_FALL( uParam0, 0, 5000, 4, uParam1, 5.50000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
    }
    return;
}

void sub_36821()
{
    int I;

    if (NOT l_U2710)
    {
        if (NOT l_U2709)
        {
            if ((NOT l_U2749) AND (NOT l_U2755))
            {
                for ( I = 0; I <= 34; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U2467[I] ))
                    {
                        if ((l_U2699) || ((l_U490 > 12) || (IS_CHAR_FATALLY_INJURED( l_U2431[I] ))))
                        {
                            REMOVE_BLIP( l_U2467[I] );
                        }
                    }
                    else if ((NOT l_U2699) AND ((l_U490 <= 12) AND (NOT (IS_CHAR_FATALLY_INJURED( l_U2431[I] )))))
                    {
                        ADD_BLIP_FOR_CHAR( l_U2431[I], ref l_U2467[I] );
                        CHANGE_BLIP_DISPLAY( l_U2467[I], 2 );
                    }
                }
            }
        }
        else if ((NOT l_U2749) AND (NOT l_U2755))
        {
            for ( I = 0; I <= 34; I++ )
            {
                if (DOES_BLIP_EXIST( l_U2467[I] ))
                {
                    if ((l_U2699) || (IS_CHAR_FATALLY_INJURED( l_U2431[I] )))
                    {
                        REMOVE_BLIP( l_U2467[I] );
                    }
                }
                else if ((NOT l_U2699) AND ((NOT (DOES_BLIP_EXIST( l_U2426 ))) AND (NOT (IS_CHAR_FATALLY_INJURED( l_U2431[I] )))))
                {
                    ADD_BLIP_FOR_CHAR( l_U2431[I], ref l_U2467[I] );
                    if (NOT l_U2844)
                    {
                        CHANGE_BLIP_DISPLAY( l_U2467[I], 2 );
                    }
                    else
                    {
                        CHANGE_BLIP_DISPLAY( l_U2467[I], 1 );
                    }
                }
            }
        }
    }
    else if ((NOT l_U2749) AND (NOT l_U2755))
    {
        for ( I = 0; I <= 34; I++ )
        {
            if (DOES_BLIP_EXIST( l_U2467[I] ))
            {
                if ((l_U2699) || ((DOES_BLIP_EXIST( l_U2426 )) || (IS_CHAR_FATALLY_INJURED( l_U2431[I] ))))
                {
                    REMOVE_BLIP( l_U2467[I] );
                }
            }
            else if ((NOT l_U2699) AND ((NOT (DOES_BLIP_EXIST( l_U2427 ))) AND ((NOT (DOES_BLIP_EXIST( l_U2426 ))) AND (NOT (IS_CHAR_FATALLY_INJURED( l_U2431[I] ))))))
            {
                ADD_BLIP_FOR_CHAR( l_U2431[I], ref l_U2467[I] );
                CHANGE_BLIP_DISPLAY( l_U2467[I], 2 );
            }
        }
    }
    return;
}

void sub_37528()
{
    unknown uVar2;
    int iVar3;
    unknown uVar4;
    int iVar5;

    if (NOT l_U2504)
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 742.12020000, -58.02580000, 5.81860000, 1.00000000, 18.00000000, 2.00000000, l_U2706 ))
        {
            l_U2504 = 1;
        }
    }
    if (NOT l_U2505)
    {
        if ((l_U2416) || ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 773.48620000, -49.98610000, 5.86420000, 1.00000000, 16.00000000, 1.00000000, l_U2706 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 779.53590000, -48.52240000, 5.87480000, 1.00000000, 16.00000000, 1.00000000, l_U2706 ))))
        {
            if (sub_28113())
            {
                if (sub_25993())
                {
                    l_U2696 = 1;
                    l_U2505 = 1;
                    l_U490 = 6;
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U2431[20] )))
    {
        GET_CHAR_HEALTH( l_U2431[20], ref uVar2 );
        if (IS_GROUP_MEMBER( l_U2421, sub_37806() ))
        {
            ;
        }
    }
    switch (l_U490)
    {
        case 0:
        if (NOT l_U2705)
        {
            OPEN_SEQUENCE_TASK( ref l_U2425 );
            TASK_PUT_CHAR_DIRECTLY_INTO_COVER( 0, 741.81360000, -66.29650000, 5.81860000, -2 );
            CLOSE_SEQUENCE_TASK( l_U2425 );
            if (NOT (IS_CHAR_INJURED( l_U2421 )))
            {
                SET_CURRENT_CHAR_WEAPON( l_U2421, 12, 0 );
                TASK_PERFORM_SEQUENCE( l_U2421, l_U2425 );
            }
            CLEAR_SEQUENCE_TASK( l_U2425 );
        }
        if (NOT (IS_CHAR_INJURED( l_U2421 )))
        {
            UNLOCK_RAGDOLL( l_U2421, 0 );
        }
        GET_GAME_TIMER( ref l_U2815 );
        l_U490 = 1;
        break;
        case 1:
        GET_GAME_TIMER( ref l_U2816 );
        if (NOT l_U2504)
        {
            if (l_U2617[15])
            {
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    if ((l_U2816 - l_U2815) > 5000)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U2425 );
                        TASK_TOGGLE_DUCK( 0, 1 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 749.71650000, -64.17370000, 4.78360000, 3, -1, 0.50000000 );
                        TASK_ACHIEVE_HEADING( 0, 23.80050000 );
                        TASK_PLAY_ANIM( 0, "crchsignal_gofwd", "missfaustin8", 8.00000000, 0, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U2425 );
                        if (NOT (IS_CHAR_INJURED( l_U2421 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U2421, l_U2425 );
                            sub_18530( "F7_JCOVER2", ref l_U2405, 5, 1 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U2425 );
                        l_U490 = 2;
                    }
                }
            }
        }
        else
        {
            l_U490 = 2;
        }
        break;
        case 2:
        if (NOT l_U2819)
        {
            if (NOT (IS_CHAR_DEAD( l_U2421 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U2421, "missfaustin8", "crchsignal_gofwd" ))
                {
                    sub_18530( "F7_FWD", ref l_U2820, 5, 1 );
                    l_U2819 = 1;
                }
            }
        }
        if (sub_20093( l_U2421, 1, 0 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2421 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2421, 0 );
            }
            if (NOT l_U1192._fU4)
            {
                l_U2858 = 1;
                sub_15021( ref l_U1192 );
                l_U1192._fU36 = {749.71650000, -64.17370000, 4.78360000};
                l_U1192._fU48 = 24;
                l_U1192._fU4 = 1;
                l_U490 = 4;
            }
        }
        if ((l_U2504) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 742.12020000, -58.02580000, 5.81860000, 1.00000000, 18.00000000, 2.00000000, l_U2706 )))
        {
            l_U2858 = 1;
            sub_15021( ref l_U1192 );
            l_U1192._fU36 = {750.98850000, -64.00030000, 5.81860000};
            l_U1192._fU48 = 24;
            l_U1192._fU4 = 1;
            l_U490 = 4;
        }
        break;
        case 3: break;
        case 4:
        l_U1613[0] = {l_U491[11]};
        l_U1613[1] = {l_U491[22]};
        l_U1613[2] = {l_U491[10]};
        l_U1613[3] = {l_U491[20]};
        if ((sub_28968( ref l_U1613, 4, 4, 1 )) || ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 751.34040000, -67.77179000, 5.82400000, 1.00000000, 7.00000000, 1.00000000, l_U2706 )) || ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 749.82620000, -56.62440000, 5.81860000, 1.00000000, 7.00000000, 1.00000000, l_U2706 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 748.22530000, -46.02680000, 5.81860000, 1.00000000, 4.00000000, 1.00000000, l_U2706 )))))
        {
            if (sub_28968( ref l_U1613, 4, 4, 1 ))
            {
                sub_29487();
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_18530( "F7_JCOVER", ref l_U2339, 6, 1 );
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U2421 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2421, 0 );
            }
            l_U1192._fU4 = 0;
            sub_15021( ref l_U1192 );
            l_U1192._fU36 = {752.73180000, -53.07650000, 5.81860000};
            l_U1192._fU48 = 3;
            l_U1192._fU4 = 1;
            l_U490 = 5;
        }
        break;
        case 5:
        l_U1613[0] = {l_U491[10]};
        l_U1613[1] = {l_U491[11]};
        l_U1613[2] = {l_U491[9]};
        l_U1613[3] = {l_U491[21]};
        if ((sub_28968( ref l_U1613, 4, 4, 1 )) || ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 758.65220000, -57.28010000, 5.83150000, 1.00000000, 9.50000000, 1.00000000, l_U2706 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 756.95720000, -43.76970000, 5.83500000, 1.00000000, 3.50000000, 1.00000000, l_U2706 ))))
        {
            if (sub_28968( ref l_U1613, 4, 4, 1 ))
            {
                sub_29487();
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_18530( "F7_JCOVER", ref l_U2339, 6, 1 );
                }
            }
            l_U1192._fU4 = 0;
            sub_15021( ref l_U1192 );
            l_U1192._fU36 = {760.76030000, -50.72510000, 5.84380000};
            l_U1192._fU48 = 6;
            l_U1192._fU4 = 1;
            l_U490 = 8;
        }
        break;
        case 8:
        l_U1613[0] = {l_U491[17]};
        l_U1613[1] = {l_U491[13]};
        l_U1613[2] = {l_U491[8]};
        l_U1613[3] = {l_U491[12]};
        l_U1613[4] = {l_U491[14]};
        l_U1613[5] = {l_U491[15]};
        if ((sub_28968( ref l_U1613, 6, 6, 1 )) || ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 773.30920000, -60.17839000, 5.85570000, 1.00000000, 6.00000000, 1.00000000, 0 )) || ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 773.09880000, -50.68310000, 5.86090000, 1.00000000, 3.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 771.82310000, -43.69250000, 5.87620000, 1.00000000, 5.00000000, 1.00000000, 0 )))))
        {
            if (sub_28113())
            {
                if (sub_25993())
                {
                    if (sub_28968( ref l_U1613, 6, 6, 1 ))
                    {
                        sub_29487();
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            ;
                        }
                    }
                    l_U1192._fU4 = 0;
                    sub_15021( ref l_U1192 );
                    l_U1192._fU36 = {770.87370000, -51.32140000, 5.85570000};
                    l_U1192._fU48 = 9;
                    l_U1192._fU4 = 1;
                    l_U2696 = 1;
                    l_U490 = 6;
                }
            }
        }
        break;
        case 7: break;
        case 6:
        if ((NOT (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 779.53590000, -48.52240000, 5.87480000, 1.00000000, 16.00000000, 1.00000000, l_U2706 ))) AND (l_U2701))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT (sub_20506( l_U2357 )))
                {
                    if (NOT l_U2598)
                    {
                        GET_GAME_TIMER( ref l_U2698 );
                        if ((((l_U2698 - l_U2697) > 20000) AND (l_U2695)) || (l_U2694))
                        {
                            GET_GAME_TIMER( ref l_U2596 );
                            sub_29501( ref l_U2333, 0 );
                            sub_29501( ref l_U2339, 0 );
                            sub_29501( ref l_U2351, 0 );
                            sub_29501( ref l_U2363, 0 );
                            sub_18530( "F7_POLICEA", ref l_U2357, 7, 1 );
                            l_U2617[20] = 1;
                            GET_GAME_TIMER( ref l_U2597 );
                            l_U2505 = 1;
                            l_U2598 = 1;
                        }
                    }
                    else
                    {
                        PRINT_NOW( "FA8_12", 7500, 1 );
                        if (NOT (DOES_BLIP_EXIST( l_U2426 )))
                        {
                            ADD_BLIP_FOR_COORD( 1483.02700000, 54.26430000, 24.82260000, ref l_U2426 );
                            SET_ROUTE( l_U2426, 1 );
                        }
                        if (l_U2709)
                        {
                            sub_40287();
                        }
                        else if (l_U2710)
                        {
                            sub_32538();
                        }
                        l_U2505 = 1;
                        l_U490 = 9;
                    }
                }
            }
        }
        else if (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 779.53590000, -48.52240000, 5.87480000, 1.00000000, 16.00000000, 1.00000000, l_U2706 ))
        {
            if (NOT (DOES_BLIP_EXIST( l_U2426 )))
            {
                CLEAR_PRINTS();
                PRINT_NOW( "FA8_12", 7500, 1 );
                ADD_BLIP_FOR_COORD( 1483.02700000, 54.26430000, 24.82260000, ref l_U2426 );
                SET_ROUTE( l_U2426, 1 );
                l_U1192._fU4 = 0;
                sub_15021( ref l_U1192 );
                l_U1192._fU36 = {780.00520000, -50.54750000, 5.86830000};
                l_U1192._fU48 = 37;
                l_U1192._fU4 = 1;
                l_U2617[20] = 1;
                l_U490 = 10;
            }
        }
        break;
        case 9:
        l_U1613[0] = {l_U491[16]};
        if ((sub_28968( ref l_U1613, 1, 1, 1 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 779.53590000, -48.52240000, 5.87480000, 1.00000000, 16.00000000, 1.00000000, l_U2706 )))
        {
            if (sub_28968( ref l_U1613, 1, 1, 1 ))
            {
                sub_29487();
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_18530( "F7_JCOVER", ref l_U2339, 6, 1 );
                }
            }
            l_U1192._fU4 = 0;
            sub_15021( ref l_U1192 );
            l_U1192._fU36 = {780.00520000, -50.54750000, 5.86830000};
            l_U1192._fU48 = 37;
            l_U1192._fU4 = 1;
            l_U490 = 10;
        }
        break;
        case 10:
        if (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 784.57300000, -45.93970000, 5.89630000, 1.00000000, 22.00000000, 100.00000000, 0 ))
        {
            sub_15021( ref l_U1192 );
            if (NOT (IS_CHAR_DEAD( l_U2421 )))
            {
                sub_15021( ref l_U1192 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2421 );
                SET_GROUP_MEMBER( sub_37806(), l_U2421 );
                UNLOCK_RAGDOLL( l_U2421, 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2421, 0 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U2421, 0 );
                l_U490 = 12;
            }
        }
        else if (l_U1192._fU48 != 51)
        {
            l_U1613[0] = {l_U1212[0]};
            l_U1613[1] = {l_U1212[1]};
            l_U1613[2] = {l_U1212[2]};
            if (sub_28968( ref l_U1613, 3, 3, 1 ))
            {
                if (sub_28968( ref l_U1613, 3, 3, 1 ))
                {
                    sub_29487();
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            sub_18530( "F7_JCOVER", ref l_U2339, 6, 1 );
                        }
                    }
                }
                l_U1192._fU4 = 0;
                sub_15021( ref l_U1192 );
                l_U1192._fU36 = {797.11220000, -44.66940000, 5.93340000};
                l_U1192._fU48 = 51;
                l_U1192._fU4 = 1;
            }
        }
        break;
        case 12:
        if (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 806.55650000, -41.74220000, 6.00040000, 2.00000000, 4.00000000, 1.00000000, 0 ))
        {
            if (NOT l_U2859)
            {
                GET_GAME_TIMER( ref l_U2867 );
                SET_FAKE_WANTED_LEVEL( 0 );
                ALTER_WANTED_LEVEL( sub_4388(), 2 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( sub_4388() );
                ALLOW_EMERGENCY_SERVICES( 1 );
                SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
                SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                l_U2714++;
                sub_41388();
                l_U2699 = 1;
                l_U2859 = 1;
            }
            l_U490 = 11;
        }
        else if (NOT l_U2859)
        {
            if (IS_WANTED_LEVEL_GREATER( sub_4388(), 0 ))
            {
                CLEAR_AREA_OF_COPS( 804.13360000, -41.49640000, 5.13940000, 2000.00000000 );
                SET_WANTED_MULTIPLIER( 0.00000000 );
            }
        }
        break;
        case 11:
        if (l_U2858)
        {
            l_U2858 = 0;
            l_U2859 = 1;
        }
        if (NOT (IS_CHAR_DEAD( l_U2421 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2759(), l_U2421, 25.00000000, 25.00000000, 25.00000000, 0 ))
            {
                if (NOT (IS_GROUP_MEMBER( l_U2421, sub_37806() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2759(), l_U2421, 12.00000000, 12.00000000, 0 ))
                    {
                        if (DOES_BLIP_EXIST( l_U2427 ))
                        {
                            REMOVE_BLIP( l_U2427 );
                        }
                        SET_GROUP_MEMBER( sub_37806(), l_U2421 );
                        CLEAR_PRINTS();
                    }
                }
                else if (NOT (DOES_BLIP_EXIST( l_U2426 )))
                {
                    ADD_BLIP_FOR_COORD( 1483.02700000, 54.26430000, 24.82260000, ref l_U2426 );
                    SET_ROUTE( l_U2426, 1 );
                }
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                    {
                        if (NOT (sub_20506( l_U2375 )))
                        {
                            if (NOT l_U2411)
                            {
                                sub_18530( "F7_JINCAR", ref l_U2375, 6, 0 );
                                l_U2411 = 1;
                            }
                            else if (sub_20687( l_U2375 ))
                            {
                                sub_22709( "F7_JINCAR", ref l_U2375, 6, 1 );
                            }
                            else if (NOT (sub_20506( l_U2381 )))
                            {
                                if ((NOT (IS_CHAR_IN_ANY_CAR( sub_2759() ))) AND (NOT l_U2412))
                                {
                                    sub_18530( "F7_JGETCAR", ref l_U2381, 6, 0 );
                                    l_U2412 = 1;
                                }
                                else if (sub_20687( l_U2381 ))
                                {
                                    sub_22709( "F7_JGETCAR", ref l_U2381, 6, 1 );
                                }
                                else if (NOT l_U2617[47])
                                {
                                    PRINT_NOW( "FA8_47", 7500, 1 );
                                    l_U2617[47] = 1;
                                    if (DOES_BLIP_EXIST( l_U2426 ))
                                    {
                                        REMOVE_BLIP( l_U2426 );
                                    }
                                    l_U490 = 13;
                                };;;
                            };;;
                        }
                    }
                }
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( l_U2421 );
                if (DOES_BLIP_EXIST( l_U2426 ))
                {
                    REMOVE_BLIP( l_U2426 );
                }
                if (sub_20506( l_U2375 ))
                {
                    sub_22848( ref l_U2375 );
                }
                if (sub_20506( l_U2381 ))
                {
                    sub_22848( ref l_U2381 );
                }
                if (DOES_BLIP_EXIST( l_U2427 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U2421 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2759(), l_U2421, 10.00000000, 10.00000000, 0 ))
                        {
                            REMOVE_BLIP( l_U2427 );
                            SET_GROUP_MEMBER( sub_37806(), l_U2421 );
                            CLEAR_PRINTS();
                        }
                    }
                }
                else
                {
                    ADD_BLIP_FOR_CHAR( l_U2421, ref l_U2427 );
                    CHANGE_BLIP_COLOUR( l_U2427, 3 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "FA8_49", 7500, 1 );
                }
            }
        }
        if (NOT l_U2862)
        {
            if ((IS_CHAR_IN_ANY_CAR( sub_2759() )) || (IS_CHAR_GETTING_IN_TO_A_CAR( sub_2759() )))
            {
                if (NOT (IS_CHAR_DEAD( l_U2421 )))
                {
                    UNLOCK_RAGDOLL( l_U2421, 0 );
                    l_U2862 = 1;
                }
            }
        }
        break;
        case 13:
        if (NOT (IS_CHAR_DEAD( l_U2421 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2759(), l_U2421, 25.00000000, 25.00000000, 25.00000000, 0 ))
            {
                if (NOT (IS_GROUP_MEMBER( l_U2421, sub_37806() )))
                {
                    if (DOES_BLIP_EXIST( l_U2427 ))
                    {
                        REMOVE_BLIP( l_U2427 );
                    }
                    SET_GROUP_MEMBER( sub_37806(), l_U2421 );
                    CLEAR_PRINTS();
                }
                else if (NOT (IS_WANTED_LEVEL_GREATER( sub_4388(), 0 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_2759(), 1483.04200000, 54.28000000, 24.75500000 + (2.50000000 / 2.00000000), 2.50000000, 2.50000000, 2.50000000, 1 ))
                    {
                        if (sub_20801( 1, 1 ))
                        {
                            if (sub_20506( l_U2387 ))
                            {
                                sub_29501( ref l_U2387, 0 );
                            }
                            if (DOES_BLIP_EXIST( l_U2426 ))
                            {
                                REMOVE_BLIP( l_U2426 );
                            }
                            CLEAR_PRINTS();
                            if (IS_CHAR_IN_ANY_CAR( sub_2759() ))
                            {
                                l_U490 = 14;
                            }
                            else
                            {
                                l_U490 = 14;
                            }
                        }
                    }
                    else if (NOT (DOES_BLIP_EXIST( l_U2426 )))
                    {
                        ADD_BLIP_FOR_COORD( 1483.02700000, 54.26430000, 24.82260000, ref l_U2426 );
                        SET_ROUTE( l_U2426, 1 );
                        CLEAR_PRINTS();
                        SET_WANTED_MULTIPLIER( 1.00000000 );
                    }
                    if (DOES_BLIP_EXIST( l_U2427 ))
                    {
                        REMOVE_BLIP( l_U2427 );
                    }
                    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2759(), 1483.02700000, 54.26430000, 26.82260000, 4.00000000, 4.00000000, 4.00000000, l_U2706 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_2759() ))
                        {
                            GET_CAR_CHAR_IS_USING( sub_2759(), ref l_U2430 );
                            if (IS_CHAR_IN_CAR( l_U2421, l_U2430 ))
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    SET_PED_IS_BLIND_RAGING( sub_2759(), 0 );
                                    if (NOT (sub_20506( l_U2852 )))
                                    {
                                        if (NOT l_U2861)
                                        {
                                            sub_18530( "F7_2GO", ref l_U2852, 6, 1 );
                                            l_U2861 = 1;
                                        }
                                        else if (sub_20687( l_U2852 ))
                                        {
                                            sub_22709( "F7_2GO", ref l_U2852, 6, 1 );
                                        }
                                        else if (NOT l_U2617[50])
                                        {
                                            PRINT_NOW( "FA8_50", 7500, 1 );
                                            l_U2617[50] = 1;
                                        }
                                        else if (NOT (sub_20506( l_U2387 )))
                                        {
                                            if (NOT l_U2413)
                                            {
                                                if (g_U64732 == 0)
                                                {
                                                    sub_18530( "F7_BANT1bv1", ref l_U2387, 6, 0 );
                                                    g_U64732++;
                                                    l_U2413 = 1;
                                                    BLOCK_CHAR_AMBIENT_ANIMS( l_U2421, 1 );
                                                    l_U2860 = 1;
                                                }
                                                else if (g_U64732 == 1)
                                                {
                                                    sub_18530( "F7_BANT1bv2", ref l_U2387, 6, 0 );
                                                    g_U64732++;
                                                    l_U2413 = 1;
                                                }
                                                else
                                                {
                                                    SAY_AMBIENT_SPEECH( l_U2421, "LISTEN_TO_RADIO", 1, 1, 0 );
                                                    l_U2413 = 1;
                                                }
                                            }
                                            else if (sub_20687( l_U2387 ))
                                            {
                                                if (g_U64732 == 1)
                                                {
                                                    sub_22709( "F7_BANT1bv1", ref l_U2387, 6, 1 );
                                                }
                                                else if (g_U64732 == 2)
                                                {
                                                    sub_22709( "F7_BANT1bv2", ref l_U2387, 6, 1 );
                                                }
                                            }
                                        };;;;
                                    }
                                }
                                if (l_U2860)
                                {
                                    l_U2866 = sub_43621( l_U2387 );
                                    if (l_U2866 > 0)
                                    {
                                        if (NOT l_U2850)
                                        {
                                            CREATE_OBJECT( -268530289, 937.70000000, 335.40000000, 32.40000000, ref l_U2851, 1 );
                                            ATTACH_OBJECT_TO_PED( l_U2851, l_U2421, 1232, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
                                            TASK_PLAY_ANIM_SECONDARY_IN_CAR( l_U2421, "carsmoke_passenger", "missfaustin8", 1.00000000, 1, 0, 0, 0, 0 );
                                            l_U2850 = 1;
                                        }
                                    }
                                }
                            }
                            else if (sub_20506( l_U2387 ))
                            {
                                sub_22848( ref l_U2387 );
                            }
                            if (sub_20506( l_U2852 ))
                            {
                                sub_22848( ref l_U2852 );
                            }
                        }
                        else if (NOT l_U2617[50])
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                PRINT_NOW( "FA8_50", 7500, 1 );
                                l_U2617[50] = 1;
                            }
                        }
                        if (sub_20506( l_U2387 ))
                        {
                            sub_22848( ref l_U2387 );
                        }
                        if (sub_20506( l_U2852 ))
                        {
                            sub_22848( ref l_U2852 );
                        }
                        if (l_U2850)
                        {
                            sub_44048();
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U2427 ))
                {
                    REMOVE_BLIP( l_U2427 );
                    PRINT_NOW( "FA8_47", 7500, 1 );
                }
                if (DOES_BLIP_EXIST( l_U2426 ))
                {
                    REMOVE_BLIP( l_U2426 );
                    PRINT_NOW( "FA8_47", 7500, 1 );
                    l_U2617[50] = 0;
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2759() ))
                {
                    if (NOT l_U2693)
                    {
                        sub_44271();
                        l_U2693 = 1;
                    }
                    if (NOT l_U2862)
                    {
                        if (NOT (IS_CHAR_DEAD( l_U2421 )))
                        {
                            UNLOCK_RAGDOLL( l_U2421, 0 );
                            l_U2862 = 1;
                        }
                    }
                    GET_CAR_CHAR_IS_USING( sub_2759(), ref l_U2430 );
                    if (IS_CHAR_IN_CAR( l_U2421, l_U2430 ))
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT (sub_20506( l_U2393 )))
                            {
                                SET_PED_IS_BLIND_RAGING( sub_2759(), 0 );
                                if (NOT l_U2414)
                                {
                                    UNLOCK_RAGDOLL( l_U2421, 1 );
                                    if (g_U64731 == 0)
                                    {
                                        sub_18530( "F7_1av1", ref l_U2393, 6, 0 );
                                        l_U2414 = 1;
                                        g_U64731++;
                                    }
                                    else if (g_U64731 == 1)
                                    {
                                        sub_18530( "F7_1av2", ref l_U2393, 6, 0 );
                                        l_U2414 = 1;
                                        g_U64731++;
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH( l_U2421, "CAR_POLICE_PURSUIT", 1, 1, 0 );
                                        l_U2414 = 1;
                                    }
                                }
                                else if (sub_20687( l_U2393 ))
                                {
                                    if (g_U64731 == 1)
                                    {
                                        sub_22709( "F7_1av1", ref l_U2393, 6, 1 );
                                    }
                                    else if (g_U64731 == 2)
                                    {
                                        sub_22709( "F7_1av2", ref l_U2393, 6, 1 );
                                    }
                                }
                            }
                        }
                    }
                }
                else if (sub_20506( l_U2393 ))
                {
                    sub_22848( ref l_U2393 );
                }
                if (NOT l_U2862)
                {
                    if (IS_CHAR_GETTING_IN_TO_A_CAR( sub_2759() ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U2421 )))
                        {
                            UNLOCK_RAGDOLL( l_U2421, 0 );
                            l_U2862 = 1;
                        }
                    }
                };;;;
            }
            else
            {
                REMOVE_CHAR_FROM_GROUP( l_U2421 );
                if (DOES_BLIP_EXIST( l_U2426 ))
                {
                    REMOVE_BLIP( l_U2426 );
                }
                if (sub_20506( l_U2387 ))
                {
                    sub_22848( ref l_U2387 );
                }
                if (sub_20506( l_U2393 ))
                {
                    sub_22848( ref l_U2393 );
                }
                if (DOES_BLIP_EXIST( l_U2427 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U2421 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_2759(), l_U2421, 10.00000000, 10.00000000, 0 ))
                        {
                            REMOVE_BLIP( l_U2427 );
                            SET_GROUP_MEMBER( sub_37806(), l_U2421 );
                            CLEAR_PRINTS();
                        }
                    }
                }
                else
                {
                    ADD_BLIP_FOR_CHAR( l_U2421, ref l_U2427 );
                    CHANGE_BLIP_COLOUR( l_U2427, 3 );
                    CHANGE_BLIP_PRIORITY( l_U2427, 3 );
                    CLEAR_PRINTS();
                    PRINT_NOW( "FA8_49", 7500, 1 );
                }
            }
            if (IS_CHAR_IN_ANY_CAR( sub_2759() ))
            {
                GET_CAR_CHAR_IS_USING( sub_2759(), ref l_U2430 );
                if (DOES_VEHICLE_EXIST( l_U2599 ))
                {
                    if (l_U2430 != l_U2599)
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2599 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( 1304597482 );
                    }
                }
                if (DOES_VEHICLE_EXIST( l_U2600 ))
                {
                    if (l_U2430 != l_U2600)
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2600 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( 2046537925 );
                    }
                }
                if (NOT l_U2503)
                {
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2315 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U2316 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -366960778 );
                    l_U2503 = 1;
                }
                GET_CAR_HEALTH( l_U2430, ref iVar3 );
                if (iVar3 < 1000)
                {
                    ;
                }
            }
        }
        break;
        case 14:
        sub_45373();
        break;
        case 15: break;
    }
    if (l_U490 >= 5)
    {
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (sub_20506( l_U2345 )))
            {
                if (NOT l_U2700)
                {
                    sub_29501( ref l_U2333, 0 );
                    sub_29501( ref l_U2339, 0 );
                    sub_29501( ref l_U2351, 0 );
                    sub_29501( ref l_U2363, 0 );
                    sub_18530( "F7_SEENDIM", ref l_U2345, 7, 1 );
                    l_U2700 = 1;
                }
                else
                {
                    l_U2701 = 1;
                }
            }
        }
    }
    if (l_U490 < 11)
    {
        if ((l_U490 < 5) AND (l_U490 >= 2))
        {
            ;
        }
        else if (l_U490 >= 5)
        {
            if (l_U2701)
            {
                if (NOT l_U2689)
                {
                    if (l_U2617[19])
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U2427 )))
                            {
                                if (NOT l_U2428)
                                {
                                    if (NOT (IS_CHAR_DEAD( l_U2421 )))
                                    {
                                        if (IS_CHAR_SHOOTING( l_U2421 ))
                                        {
                                            sub_18530( "F7_JATTACK", ref l_U2333, 5, 1 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (NOT (IS_GROUP_MEMBER( l_U2421, sub_37806() )))
    {
        if (NOT (sub_20506( l_U2351 )))
        {
            GET_GAME_TIMER( ref l_U2864 );
            if ((l_U2864 - l_U2865) > 10000)
            {
                if (NOT (IS_CHAR_INJURED( l_U2431[20] )))
                {
                    if (NOT l_U491[20]._fU64)
                    {
                        if (l_U491[20]._fU4)
                        {
                            if (l_U490 > 3)
                            {
                                GET_GAME_TIMER( ref l_U2816 );
                                if ((l_U2816 - l_U491[20]._fU72) > 10000)
                                {
                                    if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                                    {
                                        if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "FA8_12", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                                        {
                                            l_U1192._fU4 = 0;
                                            l_U1192._fU12 = 1;
                                            l_U1192._fU8 = 1;
                                            l_U1192._fU52 = 1;
                                            l_U1192._fU56 = l_U2431[20];
                                            l_U1192._fU4 = 1;
                                            sub_18530( "F7_ABOVE", ref l_U2351, 5, 1 );
                                            GET_GAME_TIMER( ref l_U2865 );
                                            l_U491[20]._fU64 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U2431[21] )))
                {
                    if (NOT l_U491[21]._fU64)
                    {
                        if (l_U491[21]._fU4)
                        {
                            if (l_U490 >= 5)
                            {
                                GET_GAME_TIMER( ref l_U2816 );
                                if ((l_U2816 - l_U491[21]._fU72) > 10000)
                                {
                                    if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                                    {
                                        if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "FA8_12", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                                        {
                                            l_U1192._fU4 = 0;
                                            l_U1192._fU12 = 1;
                                            l_U1192._fU8 = 1;
                                            l_U1192._fU52 = 1;
                                            l_U1192._fU56 = l_U2431[21];
                                            l_U1192._fU4 = 1;
                                            sub_18530( "F7_ABOVE", ref l_U2351, 5, 1 );
                                            GET_GAME_TIMER( ref l_U2865 );
                                            l_U491[21]._fU64 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U2431[12] )))
                {
                    if (NOT l_U491[12]._fU64)
                    {
                        if (l_U491[12]._fU4)
                        {
                            if (l_U490 > 8)
                            {
                                GET_GAME_TIMER( ref l_U2816 );
                                if ((l_U2816 - l_U491[12]._fU72) > 40000)
                                {
                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                    {
                                        if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "FA8_12", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                                        {
                                            l_U1192._fU4 = 0;
                                            l_U1192._fU12 = 1;
                                            l_U1192._fU8 = 1;
                                            l_U1192._fU52 = 1;
                                            l_U1192._fU56 = l_U2431[12];
                                            l_U1192._fU4 = 1;
                                            sub_18530( "F7_ABOVE", ref l_U2351, 5, 1 );
                                            GET_GAME_TIMER( ref l_U2865 );
                                            l_U491[12]._fU64 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U2431[15] )))
                {
                    if (NOT l_U491[15]._fU64)
                    {
                        if (l_U491[15]._fU4)
                        {
                            if (l_U490 > 5)
                            {
                                GET_GAME_TIMER( ref l_U2816 );
                                if ((l_U2816 - l_U491[15]._fU72) > 40000)
                                {
                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                    {
                                        if (l_U1192._fU48 != 40)
                                        {
                                            if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "FA8_12", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                                            {
                                                l_U1192._fU4 = 0;
                                                l_U1192._fU12 = 1;
                                                l_U1192._fU8 = 1;
                                                l_U1192._fU52 = 1;
                                                l_U1192._fU56 = l_U2431[15];
                                                l_U1192._fU4 = 1;
                                                sub_18530( "F7_ABOVE", ref l_U2351, 5, 1 );
                                                GET_GAME_TIMER( ref l_U2865 );
                                                l_U491[15]._fU64 = 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (l_U2707)
    {
        if (((l_U2701) AND (l_U2700)) || (NOT l_U2700))
        {
            if (NOT (IS_CHAR_INJURED( l_U2421 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U2427 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2759(), l_U2421, 25.00000000, 25.00000000, 25.00000000, 0 ))
                    {
                        if (NOT l_U2689)
                        {
                            if (sub_60431())
                            {
                                l_U2689 = 1;
                                l_U2617[58] = 0;
                            }
                        }
                        else if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U2617[58])
                            {
                                PRINT_NOW( "FA8_58", 7500, 1 );
                                l_U2617[58] = 1;
                            }
                            else
                            {
                                l_U2689 = 0;
                            }
                        }
                    }
                }
            }
        }
        if (IS_CHAR_FATALLY_INJURED( l_U2421 ))
        {
            ;
        }
        if (NOT (IS_CHAR_DEAD( l_U2421 )))
        {
            GET_CHAR_HEALTH( l_U2421, ref uVar4 );
        }
        if (NOT (IS_CHAR_DEAD( l_U2421 )))
        {
            if (IS_CHAR_INJURED( l_U2421 ))
            {
                SET_CHAR_HEALTH( l_U2421, 1 );
            }
        }
    }
    if (NOT l_U2859)
    {
        if (l_U2858)
        {
            GET_INTERIOR_FROM_CHAR( sub_2759(), ref iVar5 );
            if (iVar5 == nil)
            {
                GET_GAME_TIMER( ref l_U2867 );
                SET_FAKE_WANTED_LEVEL( 0 );
                ALTER_WANTED_LEVEL( sub_4388(), 2 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( sub_4388() );
                SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
                SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                sub_41388();
                l_U2714++;
                l_U2859 = 1;
                l_U2858 = 0;
            }
            else if (NOT l_U2859)
            {
                if (IS_WANTED_LEVEL_GREATER( sub_4388(), 0 ))
                {
                    CLEAR_AREA_OF_COPS( 804.13360000, -41.49640000, 5.13940000, 2000.00000000 );
                    SET_WANTED_MULTIPLIER( 0.00000000 );
                }
            }
        }
    }
    else if (NOT l_U2863)
    {
        GET_GAME_TIMER( ref l_U2868 );
        if (((l_U2868 - l_U2867) > 50000) || (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2759(), 809.10910000, -39.34070000, 6.02610000, 27.00000000, 34.00000000, 1.00000000, 0 ))))
        {
            SET_WANTED_MULTIPLIER( 1.00000000 );
            l_U2863 = 1;
        }
    }
    if ((l_U490 >= 2) AND (l_U490 <= 10))
    {
        sub_61349();
    }
    return;
}

void sub_37806()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_40287()
{
    int I;

    for ( I = 0; I <= 34; I++ )
    {
        if (DOES_BLIP_EXIST( l_U2467[I] ))
        {
            CHANGE_BLIP_DISPLAY( l_U2467[I], 1 );
        }
    }
    l_U2844 = 1;
    return;
}

void sub_41388()
{
    int I;

    l_U2715 = 0;
    for ( I = 0; I <= 19; I++ )
    {
        if (DOES_CHAR_EXIST( l_U2533[I] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2533[I] )))
            {
                SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( l_U2533[I], 1 );
                REMOVE_CHAR_DEFENSIVE_AREA( l_U2533[I] );
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2533[I] );
        }
    }
    return;
}

void sub_43621(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_20506( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_44048()
{
    if (NOT (IS_CHAR_DEAD( l_U2421 )))
    {
        if (DOES_OBJECT_EXIST( l_U2851 ))
        {
            DELETE_OBJECT( ref l_U2851 );
        }
        CLEAR_CHAR_TASKS( l_U2421 );
        l_U2850 = 0;
    }
    return;
}

void sub_44271()
{
    int I;

    for ( I = 0; I <= 34; I++ )
    {
        if (DOES_CHAR_EXIST( l_U2431[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2431[I] );
        }
    }
    return;
}

void sub_45373()
{
    unknown uVar2;

    if (NOT l_U2840)
    {
        if (NOT sub_45393())
        {
            l_U2840 = 1;
        }
    }
    else if ((IS_SCREEN_FADED_IN()) AND ((NOT l_U2841) AND ((l_U2429) || (l_U2839 > 0))))
    {
        if (sub_45393())
        {
            CLEAR_PRINTS();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            l_U2841 = 1;
            l_U2839 = 1;
        }
    }
    switch (l_U2839)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U2421 )))
        {
            if (NOT l_U2429)
            {
                SET_PLAYER_CONTROL( sub_4388(), 0 );
                REMOVE_CHAR_FROM_GROUP( l_U2421 );
                sub_2619( 0 );
                DISPLAY_RADAR( 0 );
                SET_INSTANT_WIDESCREEN_BORDERS( 1 );
                BEGIN_CAM_COMMANDS( ref l_U2603 );
                CLEAR_AREA( 1478.27400000, 54.26330000, 24.95790000, 1.00000000, 1 );
                if (IS_CHAR_IN_ANY_CAR( sub_2759() ))
                {
                    if (sub_45785())
                    {
                        GET_CAR_CHAR_IS_USING( sub_2759(), ref uVar2 );
                    }
                }
                else
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    LOAD_SCENE( 1480.25600000, 52.51360000, 24.41440000 );
                    l_U2842 = 1;
                    if (NOT (IS_CHAR_DEAD( l_U2421 )))
                    {
                        SET_CHAR_COORDINATES( l_U2421, 1480.12300000, 54.03360000, 24.42310000 );
                        SET_CHAR_HEADING( l_U2421, 268.24010000 );
                    }
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2759() );
                    SET_CHAR_COORDINATES( sub_2759(), 1480.25600000, 52.51360000, 24.41440000 );
                    SET_CHAR_HEADING( sub_2759(), 32.27760000 );
                }
                CREATE_CAM( 14, ref l_U2827[0] );
                SET_CAM_POS( l_U2827[0], 1498.36500000, 41.35383000, 28.86989000 );
                SET_CAM_ROT( l_U2827[0], -7.33784300, -0.00000000, 50.53767000 );
                SET_CAM_FOV( l_U2827[0], 22.90000000 );
                SET_CAM_ACTIVE( l_U2827[0], 1 );
                SET_CAM_PROPAGATE( l_U2827[0], 1 );
                CREATE_CAM( 14, ref l_U2827[1] );
                SET_CAM_POS( l_U2827[1], 1489.75600000, 46.30952000, 27.84154000 );
                SET_CAM_ROT( l_U2827[1], -13.41561000, -0.00000000, 46.49081000 );
                SET_CAM_FOV( l_U2827[1], 47.00000000 );
                SET_CAM_ACTIVE( l_U2827[1], 0 );
                SET_CAM_PROPAGATE( l_U2827[1], 0 );
                CREATE_CAM( 3, ref l_U2827[2] );
                SET_CAM_ACTIVE( l_U2827[2], 0 );
                SET_CAM_PROPAGATE( l_U2827[2], 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                if (l_U2842)
                {
                    DO_SCREEN_FADE_IN( 500 );
                }
                if (NOT (IS_CHAR_DEAD( l_U2421 )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U2421 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U2425 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2759() );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "bye", "missfaustin8", 1.00000000, 0, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U2425 );
                        TASK_PERFORM_SEQUENCE( l_U2421, l_U2425 );
                        CLEAR_SEQUENCE_TASK( l_U2425 );
                    }
                    else
                    {
                        TASK_LOOK_AT_CHAR( l_U2421, sub_2759(), -1, 0 );
                        TASK_LOOK_AT_CHAR( sub_2759(), l_U2421, -1, 0 );
                    }
                    sub_18530( "F7_DROPJ", ref l_U2399, 6, 1 );
                    l_U2415 = 1;
                    l_U2429 = 1;
                }
            }
            else if (NOT (sub_20506( l_U2399 )))
            {
                if (NOT l_U2415)
                {
                    ;
                }
                else if (sub_20093( l_U2421, 1, 0 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U2425 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1471.56000000, 55.17420000, 25.18550000, 3, -1, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U2425 );
                    TASK_PERFORM_SEQUENCE( l_U2421, l_U2425 );
                    CLEAR_SEQUENCE_TASK( l_U2425 );
                    GET_GAME_TIMER( ref l_U2815 );
                    l_U2839 = 1;
                }
            }
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U2816 );
        if ((l_U2841) || (((l_U2816 - l_U2815) > 6000) || (sub_20093( l_U2421, 1, 0 ))))
        {
            if ((l_U2816 - l_U2815) > 6000)
            {
                if (NOT l_U2841)
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
            }
            DELETE_CHAR( ref l_U2421 );
            if (NOT l_U2841)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    ;
                }
            }
            SET_CAM_ACTIVE( l_U2827[0], 0 );
            SET_CAM_PROPAGATE( l_U2827[0], 0 );
            SET_CAM_ACTIVE( l_U2827[1], 0 );
            SET_CAM_PROPAGATE( l_U2827[1], 0 );
            SET_CAM_ACTIVE( l_U2827[2], 0 );
            SET_CAM_PROPAGATE( l_U2827[2], 0 );
            DESTROY_CAM( l_U2827[0] );
            DESTROY_CAM( l_U2827[1] );
            DESTROY_CAM( l_U2827[2] );
            DISPLAY_RADAR( 1 );
            TASK_CLEAR_LOOK_AT( sub_2759() );
            SET_INSTANT_WIDESCREEN_BORDERS( 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U2603 );
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 500 );
            }
            sub_23879();
            SET_PLAYER_CONTROL( sub_4388(), 1 );
            sub_47202();
        }
        break;
        case 2: break;
    }
    return;
}

int sub_45393()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_45785()
{
    unknown uVar2;

    if (NOT (IS_CHAR_DEAD( l_U2421 )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2759() ))
        {
            GET_CAR_CHAR_IS_USING( sub_2759(), ref uVar2 );
            if (IS_CHAR_IN_CAR( l_U2421, uVar2 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_47202()
{
    sub_47211();
    CLEAR_WANTED_LEVEL( sub_4388() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 65 );
    sub_2422();
    return;
}

void sub_47211()
{
    sub_47220();
    return;
}

void sub_47220()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_47238();
    sub_47297( iVar2, iVar3, iVar4 );
    return;
}

void sub_47238()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_47297(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 4;
    sub_47329( iVar5, uParam0, uParam1, uParam2, "Contact_5" );
    return;
}

void sub_47329(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_47425( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_47425( ref cVar9 );
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
            sub_47425( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_47425( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_47425( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_47425( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_48002( iParam0, iVar7 );;;
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
                sub_48399( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_48399( 0, 4 );
            }
        }
    }
    if (NOT (sub_48488( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4388(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_4388() );
    }
    sub_1520();
    bVar27 = true;
    uVar28 = sub_48002( iParam0, iVar7 );
    uVar29 = sub_977( iParam0 );
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
                sub_57864( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_58294();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_58379( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_58436( iParam0 );
                sub_58475( 0 );
                sub_1418( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_58583();
        }
    }
    if (bParam2)
    {
        sub_58294();
        sub_58671();
        sub_58475( 0 );
    }
    if (bParam3)
    {
        sub_58294();
        sub_58711();
        sub_58475( 0 );
        sub_1418( uVar29, 0 );
    }
    sub_864();
    return;
}

void sub_47425(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_48002(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1376( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_48399(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_48488(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_48696( uParam1 );
        break;
        case 1:
        bVar8 = sub_50774( uParam1 );
        break;
        case 2:
        bVar8 = sub_51000( uParam1 );
        break;
        case 3:
        bVar8 = sub_51150( uParam1 );
        break;
        case 4:
        bVar8 = sub_51428( uParam1 );
        break;
        case 5:
        bVar8 = sub_51731( uParam1 );
        break;
        case 6:
        bVar8 = sub_51930( uParam1 );
        break;
        case 7:
        bVar8 = sub_52156( uParam1 );
        break;
        case 8:
        bVar8 = sub_52391( uParam1 );
        break;
        case 9:
        bVar8 = sub_52766( uParam1 );
        break;
        case 10:
        bVar8 = sub_53013( uParam1 );
        break;
        case 11:
        bVar8 = sub_53152( uParam1 );
        break;
        case 12:
        bVar8 = sub_53451( uParam1 );
        break;
        case 13:
        bVar8 = sub_53679( uParam1 );
        break;
        case 14:
        bVar8 = sub_53966( uParam1 );
        break;
        case 15:
        bVar8 = sub_54248( uParam1 );
        break;
        case 16:
        bVar8 = sub_54530( uParam1 );
        break;
        case 17:
        bVar8 = sub_54731( uParam1 );
        break;
        case 18:
        bVar8 = sub_54804( uParam1 );
        break;
        case 19:
        bVar8 = sub_55018( uParam1 );
        break;
        case 20:
        bVar8 = sub_55271( uParam1 );
        break;
        case 21:
        bVar8 = sub_55518( uParam1 );
        break;
        case 22:
        bVar8 = sub_55719( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_50379( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_48002( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_56042( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_48696(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_48975( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_48975( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_48975( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_48975( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_48975( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_48975( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_48975( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_48975( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_48975( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_48975( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_48975( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_48975( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_48975( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_48975( iVar3, 0, 3, 1, 0, 0 );
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
        sub_48975( iVar3, 0, sub_50257(), sub_50523(), 0, 0 );
        break;
        default:
        sub_50682( "Friend 1", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Friend 1", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_48975(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_48986( uParam1 );
    sub_49160( uParam0, 0, uParam2 );
    sub_49160( uParam0, 1, uParam3 );
    sub_49160( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_47238();
    return;
}

void sub_48986(unknown uParam0)
{
    ADD_SCORE( sub_4388(), uParam0 );
    sub_49011( uParam0 );
    return;
}

void sub_49011(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1376( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_49160(unknown uParam0, int iParam1, int iParam2)
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
        sub_49317( uParam0 );
    }
    return;
}

void sub_49317(unknown uParam0)
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

int sub_50257()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_50379( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_50379(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_50523()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_50379( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_50682(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_50774(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_48975( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_50682( "Contact 2", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 2", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51000(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_48975( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_50682( "Girl 3", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Girl 3", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51150(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_48975( iVar3, 0, sub_50257(), sub_50523(), 0, 0 );
        break;
        default:
        sub_50682( "Friend 4", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Friend 4", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51428(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_48975( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_48975( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_48975( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_48975( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_50682( "Contact 5", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 5", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51731(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_50682( "Contact 7", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 7", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_51930(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_48975( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_50682( "Contact 7b", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 7b", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52156(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_48975( iVar3, 0, sub_50257(), sub_50523(), 0, 0 );
        break;
        default:
        sub_50682( "Friend 8", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Friend 8", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52391(unknown uParam0)
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
        sub_48975( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_48975( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_48975( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_48975( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_48975( iVar3, 0, sub_50257(), sub_50523(), 0, 0 );
        break;
        default:
        sub_50682( "Friend 9", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Friend 9", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_52766(unknown uParam0)
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
        sub_48975( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_48975( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_48975( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_50682( "Contact 10", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_50682( "Contact 10", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53013(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_50682( "Girl 11", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Girl 11", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53152(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_48975( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_48975( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_48975( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_48975( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_48975( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_50682( "Contact 12", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 12", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53451(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_48975( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_50682( "Contact 13", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 13", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53679(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_48975( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_48975( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_48975( iVar3, 0, sub_50257(), sub_50523(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_50682( "Friend 15", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Friend 15", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_53966(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_48975( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_48975( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_48975( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_50682( "Contact 16", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 16", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_54248(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_48975( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_48975( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_48975( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_50682( "Contact 18", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 18", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_54530(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_50682( "Contact 19", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 19", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_54731(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_50682( "Girl 20", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_54804(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_50682( "Contact 21", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 21", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55018(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_48975( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_48975( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_50682( "Contact 22", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 22", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55271(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_48975( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_48975( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_48975( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_50682( "Contact 24", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 24", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55518(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_48975( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_48975( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_48975( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_50682( "Contact 25", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_50682( "Contact 25", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55719(unknown uParam0)
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
        sub_48975( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_50682( "Girl 26", 1 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_50682( "Girl 26", 0 );
        sub_48975( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_56042(int iParam0, int iParam1)
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
    if (sub_56090( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_56821( iParam1 );
    }
    return;
}

int sub_56090(int iParam0, int iParam1)
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
            sub_56230( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_56230(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_56412( 0 );
    return;
}

void sub_56412(boolean bParam0)
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
        sub_56667();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_56667()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_56821(int iParam0)
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
        sub_57154( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_57154( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_57154( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_57154( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_57154( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_57154( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_57154( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_57154( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_57154( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_57154( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_57154( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_57154( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_57154( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_57154( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_57154( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_57154( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_57154( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_57154( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_57154( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_57154(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_57864(unknown uParam0, unknown uParam1)
{
    sub_57883( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_57883(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_58294()
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

int sub_58379(int iParam0, int iParam1)
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

void sub_58436(unknown uParam0)
{
    sub_763();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_58475(unknown uParam0)
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

void sub_58583()
{
    sub_58592();
    return;
}

void sub_58592()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_58671()
{
    sub_58592();
    return;
}

void sub_58711()
{
    sub_58592();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

int sub_60431()
{
    int iVar2;
    int iVar3;

    if (NOT (IS_CHAR_DEAD( l_U2421 )))
    {
        GET_CHAR_HEALTH( l_U2421, ref iVar2 );
        if (iVar2 > 100)
        {
            iVar2 -= 100;
            iVar3 = 100 * (iVar2 / 900);
            if (iVar3 <= 20)
            {
                if (NOT l_U2617[56])
                {
                    sub_18530( "F7_JNDEAD", ref l_U2369, 6, 1 );
                    l_U2617[56] = 1;
                    return 1;
                }
            }
            else if ((iVar3 <= 40) AND (iVar3 > 20))
            {
                if (NOT l_U2617[55])
                {
                    sub_18530( "F7_JNDEAD", ref l_U2369, 6, 1 );
                    l_U2617[55] = 1;
                    return 1;
                }
            }
            else if ((iVar3 <= 60) AND (iVar3 > 40))
            {
                if (NOT l_U2617[54])
                {
                    sub_18530( "F7_JNDEAD", ref l_U2369, 6, 1 );
                    l_U2617[54] = 1;
                    return 1;
                }
            }
            else if ((iVar3 <= 80) AND (iVar3 > 60))
            {
                if (NOT l_U2617[53])
                {
                    sub_18530( "F7_JNDEAD", ref l_U2369, 6, 1 );
                    l_U2617[53] = 1;
                    return 1;
                }
            };;;;
        }
    }
    return 0;
}

void sub_61349()
{
    int iVar2;
    unknown uVar3;

    if (IS_GROUP_MEMBER( l_U2421, sub_37806() ))
    {
        if (NOT l_U2713)
        {
            SCRIPT_ASSERT( "BUDDY_MOVE_ATTACK() called while group member!" );
        }
    }
    if (l_U2314 == 6)
    {
        SCRIPT_ASSERT( "BUDDY_MOVE_ATTACK() called while mission_prog = TEST" );
    }
    iVar2 = 0;
    if (NOT (IS_GROUP_MEMBER( l_U2421, sub_37806() )))
    {
        if (NOT (IS_CHAR_DEAD( l_U2421 )))
        {
            if (l_U1192._fU4)
            {
                if ((NOT l_U1192._fU12) AND (NOT l_U1192._fU8))
                {
                    SET_CHAR_DECISION_MAKER( l_U1192._fU0, l_U2506 );
                    OPEN_SEQUENCE_TASK( ref uVar3 );
                    TASK_TOGGLE_DUCK( 0, 1 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U1192._fU36._fU0, l_U1192._fU36._fU4, l_U1192._fU36._fU8, 3, -1, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( uVar3 );
                    if (NOT (IS_CHAR_INJURED( l_U1192._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1192._fU0, uVar3 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar3 );
                    l_U1192._fU8 = 1;
                }
                else if (NOT l_U1192._fU20)
                {
                    if ((l_U1192._fU12) || (NOT l_U1192._fU16))
                    {
                        if ((l_U1192._fU12) || (sub_20093( l_U1192._fU0, 1, 0 )))
                        {
                            SET_CHAR_DECISION_MAKER( l_U1192._fU0, l_U2507 );
                            SET_COMBAT_DECISION_MAKER( l_U1192._fU0, l_U2509 );
                            sub_32648( ref l_U1192._fU0, l_U1192._fU48 );
                            SET_CHAR_RELATIONSHIP( l_U1192._fU0, 1, 0 );
                            SET_CHAR_RELATIONSHIP( l_U1192._fU0, 5, 23 );
                            SET_CHAR_RELATIONSHIP( l_U1192._fU0, 5, 25 );
                            if (l_U1192._fU52)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar3 );
                                if (NOT (IS_CHAR_DEAD( l_U1192._fU56 )))
                                {
                                    TASK_COMBAT( 0, l_U1192._fU56 );
                                }
                                CLOSE_SEQUENCE_TASK( uVar3 );
                                if (NOT (IS_CHAR_INJURED( l_U1192._fU0 )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U1192._fU0, uVar3 );
                                }
                                CLEAR_SEQUENCE_TASK( uVar3 );
                            }
                            else
                            {
                                iVar2 = sub_62037();
                                if (iVar2 != -1)
                                {
                                    OPEN_SEQUENCE_TASK( ref uVar3 );
                                    if (NOT (IS_CHAR_DEAD( l_U2431[iVar2] )))
                                    {
                                        TASK_COMBAT( 0, l_U2431[iVar2] );
                                    }
                                    CLOSE_SEQUENCE_TASK( uVar3 );
                                    if (NOT (IS_CHAR_INJURED( l_U1192._fU0 )))
                                    {
                                        TASK_PERFORM_SEQUENCE( l_U1192._fU0, uVar3 );
                                    }
                                    CLEAR_SEQUENCE_TASK( uVar3 );
                                }
                            }
                            l_U1192._fU16 = 1;
                            l_U1192._fU12 = 0;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_62037()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int I;
    int Result;
    float fVar10;
    float fVar11;

    I = 0;
    Result = -1;
    fVar10 = 0.00000000;
    fVar11 = 1000.00000000;
    if (NOT (IS_CHAR_DEAD( l_U2421 )))
    {
        GET_CHAR_COORDINATES( l_U2421, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        for ( I = 0; I <= 34; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U2431[I] )))
            {
                GET_CHAR_COORDINATES( l_U2431[I], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref fVar10 );
                if (fVar10 < fVar11)
                {
                    Result = I;
                    fVar11 = fVar10;
                }
            }
        }
    }
    return Result;
}

void sub_62410()
{
    switch (l_U2826)
    {
        case 0:
        l_U2826 = 1;
        break;
        case 1:
        if (NOT IS_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT l_U2617[5])
            {
                PRINT_NOW( "FA8_05", 4000, 1 );
                l_U2617[5] = 1;
            }
            else if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (sub_62617())
                    {
                        PRINT_HELP( "FA8_03" );
                    }
                    else
                    {
                        PRINT_HELP( "FA8_03" );
                    }
                }
            }
            else if (sub_62617())
            {
                l_U2826 = 3;
            }
            else
            {
                l_U2826 = 2;
            };;;
        }
        break;
        case 3:
        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            PRINT_HELP( "FA8_15" );
            l_U2826 = 4;
        }
        break;
        case 4:
        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            PRINT_HELP( "FA8_09" );
            l_U2617[15] = 1;
            l_U2826 = 2;
        }
        break;
        case 2:
        if (NOT l_U2617[15])
        {
            l_U2617[15] = 1;
        }
        if (l_U490 > 1)
        {
            if ((l_U2504) || ((NOT (sub_20506( l_U2820 ))) AND (l_U2819)))
            {
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_HELP( "FA8_04" );
                    l_U2826 = 6;
                }
            }
        }
        break;
        case 6:
        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            if ((NOT IS_USING_CONTROLLER()) || (IS_AUTO_AIMING_ON()))
            {
                PRINT_HELP( "FA8_07" );
                l_U2617[7] = 1;
            }
            l_U2826 = 7;
        }
        break;
        case 7:
        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            PRINT_HELP( "FA8_08" );
            l_U2617[8] = 1;
            l_U2826 = 8;
        }
        break;
        case 8:
        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT l_U2617[5])
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_NOW( "FA8_05", 4000, 1 );
                    l_U2617[5] = 1;
                }
            }
            else if (NOT l_U2688)
            {
                l_U2688 = 1;
            }
            if (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 796.70200000, -44.53570000, 5.93300000, 1.00000000, 18.00000000, 1.00000000, 0 ))
            {
                l_U2826 = 9;
            }
        }
        break;
        case 9:
        if (l_U489 > 2)
        {
            if (NOT (IS_CAR_DEAD( l_U2515[1] )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2515[1] )))
                {
                    if (sub_62617())
                    {
                        PRINT_HELP( "FA8_06" );
                    }
                    else
                    {
                        PRINT_HELP( "FA8_06" );
                    }
                    l_U2826 = 11;
                }
            }
        }
        break;
        case 10:
        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            PRINT_HELP( "FA8_52" );
            l_U2617[52] = 1;
            l_U2826 = 11;
        }
        break;
        case 11: break;
    }
    return;
}

int sub_62617()
{
    if (USING_STANDARD_CONTROLS())
    {
        return 1;
    }
    return 0;
}

void sub_63369()
{
    switch (l_U2874)
    {
        case 0:
        if (l_U2418)
        {
            CREATE_OBJECT( -366960778, 733.15000000, -63.75000000, 10.20000000, ref l_U2417, 1 );
            SET_OBJECT_HEADING( l_U2417, 283.50000000 );
            FREEZE_OBJECT_POSITION( l_U2417, 1 );
            l_U2874 = 1;
            l_U2418 = 0;
        }
        break;
        case 1:
        if (l_U2419)
        {
            if (SLIDE_OBJECT( l_U2417, 733.15000000, -63.75000000, 7.30000000, 0.00000000, 0.00000000, 1.00000000, 0 ))
            {
                l_U2874 = 2;
                FREEZE_OBJECT_POSITION( l_U2417, 1 );
                l_U2419 = 0;
            }
        }
        break;
    }
    return;
}

void sub_63603()
{
    sub_9038( l_U489, "Cop stage...." );
    switch (l_U489)
    {
        case 0: break;
        case 1:
        if (NOT l_U2871)
        {
            REQUEST_MODEL( 2046537925 );
            REQUEST_MODEL( -183203150 );
            REQUEST_CAR_RECORDING( 470 );
            REQUEST_CAR_RECORDING( 471 );
            REQUEST_CAR_RECORDING( 474 );
            GET_GAME_TIMER( ref l_U2697 );
            l_U2695 = 1;
            l_U2871 = 1;
            CLEAR_AREA_OF_COPS( 804.13360000, -41.49640000, 5.13940000, 1000.00000000 );
        }
        else if ((HAS_CAR_RECORDING_BEEN_LOADED( 474 )) AND ((HAS_CAR_RECORDING_BEEN_LOADED( 471 )) AND ((HAS_CAR_RECORDING_BEEN_LOADED( 470 )) AND ((HAS_MODEL_LOADED( -183203150 )) AND (HAS_MODEL_LOADED( 2046537925 ))))))
        {
            if (sub_11366( ref l_U2599 ))
            {
                sub_9335( 13 );
                SET_CAR_COORDINATES( l_U2599, 815.50080000, -49.04960000, 5.47800000 );
                SET_CAR_HEADING( l_U2599, 213.24850000 );
                SET_CAR_ON_GROUND_PROPERLY( l_U2599 );
                l_U2694 = 1;
                l_U489 = 2;
            }
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U2597 );
        SET_FAKE_WANTED_LEVEL( 2 );
        if (NOT (IS_CAR_DEAD( l_U2515[0] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U2515[0], 470 );
        }
        if (NOT (IS_CAR_DEAD( l_U2515[1] )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U2515[1], 471 );
        }
        if (NOT (IS_CAR_DEAD( l_U2600 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U2600, 474 );
        }
        l_U489 = 4;
        break;
        case 3:
        if (NOT l_U2691)
        {
            if (NOT (DOES_CHAR_EXIST( l_U2533[3] )))
            {
                if (NOT (IS_CAR_DEAD( l_U2515[0] )))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2515[0] )))
                    {
                        if (NOT (IS_CAR_DEAD( l_U2515[1] )))
                        {
                            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2515[1] )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U2554[4] );
                                TASK_LEAVE_ANY_CAR( 0 );
                                CLOSE_SEQUENCE_TASK( l_U2554[4] );
                                if (NOT (IS_CHAR_DEAD( l_U2533[4] )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U2533[4], l_U2554[4] );
                                }
                                if (NOT (IS_CHAR_DEAD( l_U2533[5] )))
                                {
                                    TASK_PERFORM_SEQUENCE( l_U2533[5], l_U2554[4] );
                                }
                                CLEAR_SEQUENCE_TASK( l_U2554[4] );
                                if (NOT l_U2708)
                                {
                                    CREATE_CAR( 2046537925, 825.70830000, -44.01700000, 5.55000000, ref l_U2600, 1 );
                                    SET_CAR_HEADING( l_U2600, 207.64120000 );
                                    LOCK_CAR_DOORS( l_U2600, 1 );
                                    sub_9335( 12 );
                                }
                            }
                        }
                    }
                }
            }
            else if ((sub_20093( l_U2533[5], 1, 0 )) AND (sub_20093( l_U2533[4], 1, 0 )))
            {
                l_U1212[3]._fU4 = 1;
                l_U1212[4]._fU4 = 1;
                l_U1212[6]._fU4 = 1;
                l_U1212[5]._fU4 = 1;
                l_U1212[9]._fU4 = 1;
                l_U2691 = 1;
            }
        }
        if (NOT l_U2690)
        {
            GET_GAME_TIMER( ref l_U2816 );
            if ((l_U491[18]._fU4) || ((LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 756.10520000, -63.59430000, 5.81860000, 1.00000000, 6.00000000, 1.00000000, l_U2706 )) || (LOCATE_CHAR_ON_FOOT_3D( sub_2759(), 754.48740000, -46.91460000, 5.82380000, 1.00000000, 6.00000000, 1.00000000, l_U2706 ))))
            {
                if (NOT (DOES_CHAR_EXIST( l_U2533[0] )))
                {
                    sub_9335( 11 );
                }
                l_U1212[0]._fU4 = 1;
                l_U1212[1]._fU4 = 1;
                l_U1212[2]._fU4 = 1;
                l_U2690 = 1;
            }
        }
        if ((l_U2690) AND (l_U2691))
        {
            l_U489 = 8;
        }
        break;
        case 4:
        if (NOT l_U2527[0])
        {
            if (NOT (IS_CAR_DEAD( l_U2515[0] )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2515[0] )))
                {
                    sub_64845( l_U2515[0] );
                    l_U2527[0] = 1;
                }
            }
        }
        else if (sub_20093( l_U2533[4], 1, 0 ))
        {
            l_U1212[4]._fU4 = 1;
        }
        if (sub_20093( l_U2533[3], 1, 0 ))
        {
            l_U1212[3]._fU4 = 1;
        }
        if (sub_20093( l_U2533[0], 1, 0 ))
        {
            l_U1212[0]._fU4 = 1;
        }
        if (sub_20093( l_U2533[1], 1, 0 ))
        {
            l_U1212[1]._fU4 = 1;
        }
        if (NOT l_U2527[1])
        {
            if (NOT (IS_CAR_DEAD( l_U2515[1] )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2515[1] )))
                {
                    sub_64845( l_U2515[1] );
                    l_U2527[1] = 1;
                }
            }
        }
        else if (sub_20093( l_U2533[5], 1, 0 ))
        {
            l_U1212[5]._fU4 = 1;
        }
        if (sub_20093( l_U2533[6], 1, 0 ))
        {
            l_U1212[6]._fU4 = 1;
        }
        if (sub_20093( l_U2533[2], 1, 0 ))
        {
            l_U1212[2]._fU4 = 1;
        }
        if (NOT l_U2601)
        {
            if (NOT (IS_CAR_DEAD( l_U2600 )))
            {
                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2600 )))
                {
                    sub_64845( l_U2600 );
                    l_U2601 = 1;
                }
            }
        }
        else if (sub_20093( l_U2533[9], 1, 0 ))
        {
            l_U1212[9]._fU4 = 1;
        }
        if ((l_U2601) AND ((l_U2527[1]) AND (l_U2527[0])))
        {
            if (sub_65438())
            {
                l_U489 = 8;
            }
        }
        break;
    }
    if (l_U2715)
    {
        sub_65547();
    }
    if (NOT l_U2870)
    {
        l_U1613[0] = {l_U1212[3]};
        l_U1613[1] = {l_U1212[4]};
        l_U1613[2] = {l_U1212[5]};
        l_U1613[3] = {l_U1212[6]};
        l_U1613[4] = {l_U1212[9]};
        if (sub_28968( ref l_U1613, 5, 1, 1 ))
        {
            if (NOT l_U2859)
            {
                l_U2870 = 1;
            }
        }
    }
    else if (NOT l_U2859)
    {
        if (IS_WANTED_LEVEL_GREATER( sub_4388(), 1 ))
        {
            ;
        }
    }
    return;
}

void sub_64845(unknown uParam0)
{
    unknown uVar3;
    int I;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        OPEN_SEQUENCE_TASK( ref uVar3 );
        TASK_LEAVE_ANY_CAR( 0 );
        CLOSE_SEQUENCE_TASK( uVar3 );
        for ( I = 0; I <= 19; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U2533[I] )))
            {
                if (IS_CHAR_IN_CAR( l_U2533[I], uParam0 ))
                {
                    TASK_PERFORM_SEQUENCE( l_U2533[I], uVar3 );
                }
            }
        }
        CLEAR_SEQUENCE_TASK( uVar3 );
    }
    return;
}

int sub_65438()
{
    int I;

    for ( I = 0; I <= 19; I++ )
    {
        if (DOES_CHAR_EXIST( l_U2533[I] ))
        {
            if (NOT l_U1212[I]._fU4)
            {
                return 0;
            }
        }
    }
    return 1;
}

void sub_65547()
{
    int I;
    unknown uVar3;

    for ( I = 0; I <= 19; I++ )
    {
        if (l_U1212[I]._fU4)
        {
            if (NOT (IS_CHAR_DEAD( l_U1212[I]._fU0 )))
            {
                if (NOT l_U1212[I]._fU8)
                {
                    SET_CHAR_DECISION_MAKER( l_U1212[I]._fU0, l_U2506 );
                    OPEN_SEQUENCE_TASK( ref uVar3 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U1212[I]._fU36._fU0, l_U1212[I]._fU36._fU4, l_U1212[I]._fU36._fU8, 3, -1, 0.50000000 );
                    if (l_U2708)
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_2759() );
                    }
                    CLOSE_SEQUENCE_TASK( uVar3 );
                    if (NOT (IS_CHAR_INJURED( l_U1212[I]._fU0 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U1212[I]._fU0, uVar3 );
                    }
                    CLEAR_SEQUENCE_TASK( uVar3 );
                    l_U1212[I]._fU8 = 1;
                }
                else if ((l_U1212[I]._fU12) || (NOT l_U1212[I]._fU16))
                {
                    if ((l_U1212[I]._fU12) || (sub_20093( l_U1212[I]._fU0, 1, 0 )))
                    {
                        SET_CHAR_DECISION_MAKER( l_U1212[I]._fU0, l_U2507 );
                        if (NOT l_U2708)
                        {
                            SET_COMBAT_DECISION_MAKER( l_U1212[I]._fU0, l_U2510 );
                        }
                        else
                        {
                            SET_COMBAT_DECISION_MAKER( l_U1212[I]._fU0, l_U2512 );
                        }
                        sub_32648( ref l_U1212[I]._fU0, l_U1212[I]._fU48 );
                        SET_CHAR_RELATIONSHIP( l_U1212[I]._fU0, 5, 0 );
                        SET_CHAR_RELATIONSHIP( l_U1212[I]._fU0, 5, 23 );
                        if (l_U1212[I]._fU52)
                        {
                            OPEN_SEQUENCE_TASK( ref uVar3 );
                            if (NOT (IS_CHAR_DEAD( l_U1212[I]._fU56 )))
                            {
                                TASK_COMBAT( 0, l_U1212[I]._fU56 );
                            }
                            CLOSE_SEQUENCE_TASK( uVar3 );
                            if (NOT (IS_CHAR_INJURED( l_U1212[I]._fU0 )))
                            {
                                TASK_PERFORM_SEQUENCE( l_U1212[I]._fU0, uVar3 );
                            }
                            CLEAR_SEQUENCE_TASK( uVar3 );
                        }
                        l_U1212[I]._fU16 = 1;
                        l_U1212[I]._fU12 = 0;
                    }
                }
            }
        }
    }
    return;
}

void sub_66424(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_66475(unknown uParam0)
{
    sub_2619( 0 );
    sub_66490();
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4388(), 150 );
        SAY_AMBIENT_SPEECH( sub_2759(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    switch (uParam0)
    {
        case 0: break;
        case 1:
        PRINT_NOW( "FA8_57", 7000, 1 );
        break;
    }
    sub_2422();
    return;
}

void sub_66490()
{
    sub_66499();
    return;
}

void sub_66499()
{
    int iVar2;

    iVar2 = 4;
    sub_66513( iVar2 );
    sub_1511( iVar2 );
    return;
}

void sub_66513(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_4388(), 150 );
    CLEAR_HELP();
    sub_335( uParam0 );
    return;
}

