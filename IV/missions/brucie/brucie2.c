void main()
{
    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U102 = 0;
    l_U103 = 0;
    l_U104 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U112 = 0;
    l_U113 = 0;
    ProtectedSet(l_U114, 0);
    ProtectedSet(l_U115, 0);
    l_U116 = 0;
    l_U117 = 0;
    ProtectedSet(l_U178, 0.00000000);
    ProtectedSet(l_U179, 0.00000000);
    l_U200 = 0;
    l_U217 = -1;
    l_U221 = 0;
    l_U222 = 1;
    l_U223 = 1;
    l_U231 = 150.00000000;
    l_U321 = 0;
    l_U322 = 150.00000000;
    l_U372 = 0;
    l_U575 = 0;
    l_U576 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U579 = 0;
    l_U580 = 0;
    l_U581 = 0;
    l_U582 = 1;
    l_U583 = 0;
    l_U584 = 0;
    l_U585 = 0;
    l_U586 = 0;
    l_U587 = 0;
    l_U588 = 0;
    l_U589 = 0;
    l_U590 = 0;
    l_U591 = 0;
    l_U592 = 0;
    l_U593 = 0;
    l_U594 = 0;
    l_U595 = 0;
    l_U596 = 0;
    l_U597 = 0;
    l_U598 = 0;
    l_U599 = 0;
    l_U600 = 0;
    l_U601 = 0;
    l_U602 = 0;
    l_U603 = 0;
    l_U604 = 0;
    l_U605 = 0;
    l_U606 = 0;
    l_U607 = 0;
    l_U608 = 0;
    l_U609 = 0;
    l_U610 = 0;
    l_U611 = 0;
    l_U612 = 0;
    l_U613 = 0;
    l_U614 = 0;
    l_U615 = 0;
    l_U616 = 0;
    l_U617 = 0;
    l_U618 = 1;
    l_U619 = 0;
    l_U620 = 0;
    l_U621 = 0;
    l_U622 = 0;
    l_U623 = 0;
    l_U625 = 0;
    l_U626 = 0;
    l_U627 = 0;
    l_U628 = 0;
    l_U629 = 0;
    l_U630 = 0;
    l_U631 = 0;
    l_U632 = 0;
    l_U633 = 0;
    l_U637 = 0;
    l_U638 = 0;
    l_U639 = 0;
    l_U640 = 0;
    l_U641 = 0;
    l_U642 = 0;
    l_U643 = 0;
    l_U644 = 0;
    l_U648 = 0;
    l_U649 = 0;
    l_U661 = 0;
    l_U670 = 0;
    l_U671 = 0;
    l_U672 = 0;
    l_U673 = 0;
    l_U674 = 0;
    l_U788 = 20.00000000;
    l_U789 = 5.00000000;
    l_U790 = 0.00000000;
    l_U791 = 0.00000000;
    l_U792 = 0.00000000;
    l_U793 = 0.00000000;
    l_U798 = 0;
    l_U838 = 0;
    l_U839 = 0;
    l_U840 = 0;
    l_U845 = 0;
    l_U846 = 0;
    l_U850 = 0;
    l_U851 = 0;
    l_U852 = 0;
    l_U862 = 0;
    l_U863 = 0;
    l_U865 = 0;
    l_U866 = 0;
    l_U870 = 0;
    l_U871 = 0;
    l_U873 = 0;
    l_U874 = 0;
    l_U875 = 0;
    l_U876 = 0;
    l_U882 = -1;
    l_U883 = "GARAGE_DOOR_BIG";
    l_U900 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        l_U632 = 1;
        sub_871();
        sub_2981();
    }
    SET_MISSION_FLAG( 1 );
    while (true)
    {
        WAIT( 0 );
        if ((IS_CHAR_FATALLY_INJURED( sub_3308() )) || (IS_CHAR_DEAD( sub_3308() )))
        {
            l_U575 = 6;
        }
        sub_3664();
        switch (l_U575)
        {
            case 0:
            sub_5116();
            break;
            case 1:
            sub_7259();
            break;
            case 2:
            sub_16156();
            break;
            case 3:
            sub_16621();
            break;
            case 4:
            sub_25931();
            break;
            case 5:
            sub_29415();
            break;
            case 6:
            sub_3785();
            break;
        }
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            sub_29415();
        }
    }
    return;
}

void sub_871()
{
    sub_880();
    return;
}

void sub_880()
{
    int iVar2;

    iVar2 = 8;
    sub_894( iVar2 );
    sub_2070( iVar2 );
    return;
}

void sub_894(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_938();
        sub_1099();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1207();
            sub_1246();
        }
    }
    sub_1322();
    sub_1423();
    uVar5 = sub_1536( uParam0 );
    sub_1977( uVar5, 0 );
    return;
}

void sub_938()
{
    sub_952( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1052();
    }
    return;
}

void sub_952(int iParam0)
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

void sub_1052()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1099()
{
    sub_1108();
    return;
}

void sub_1108()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1207()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1246()
{
    sub_1255();
    return;
}

void sub_1255()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1322()
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

void sub_1423()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1445();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1445()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1536(unknown uParam0)
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
    sub_1935( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1935(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1977(int iParam0, boolean bParam1)
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

void sub_2070(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2079();
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
        sub_2854();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2079()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2117( 5, g_U569[I] )) == 1))
        {
            if ((sub_2117( 1, g_U569[I] )) != 0)
            {
                sub_2403( I );
            }
        }
    }
    if (NOT sub_2569())
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

int sub_2117(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2403(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2488( g_U569 - 1 );
    return;
}

void sub_2488(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2569()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2117( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2854()
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

void sub_2981()
{
    if (IS_PLAYER_PLAYING( sub_2990() ))
    {
        SET_PLAYER_CONTROL( sub_2990(), 1 );
    }
    if (l_U838 > 0)
    {
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_ALL_CAMS();
        END_CAM_COMMANDS( ref l_U838 );
        sub_3086( 1 );
    }
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    if (l_U639)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1188.75100000, 630.41170000, 100.00000000, 1106.17000000, 756.25610000, -100.00000000 );
    }
    if (NOT (IS_CAR_DEAD( l_U688 )))
    {
        SET_CAR_PROOFS( l_U688, 0, 0, 0, 0, 0 );
    }
    sub_3110( 0 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3308(), 1 );
    g_U9083 = 0;
    sub_3554();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2990()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3086(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_3110( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_2990() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_3308() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_3308() );
        }
        SET_PLAYER_CONTROL( sub_2990(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3308(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_3110(unknown uParam0)
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

void sub_3308()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3554()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3664()
{
    if (DOES_VEHICLE_EXIST( l_U688 ))
    {
        if (IS_VEH_DRIVEABLE( l_U688 ))
        {
            if (CHECK_STUCK_TIMER( l_U688, 0, 5000 ))
            {
                PRINTSTRING( "stuck fail 0" );
                PRINTNL();
                CLEAR_PRINTS();
                PRINT( "BRU2_10", 7500, 1 );
                sub_3785();
            }
            if ((CHECK_STUCK_TIMER( l_U688, 1, 40000 )) || ((CHECK_STUCK_TIMER( l_U688, 2, 30000 )) || (CHECK_STUCK_TIMER( l_U688, 3, 60000 ))))
            {
                PRINTSTRING( "stuck fail 1" );
                PRINTNL();
                CLEAR_PRINTS();
                PRINT( "BRU2_10", 7500, 1 );
                sub_3785();
            }
            if (l_U615)
            {
                if ((sub_4750( ref l_U688 )) > 150)
                {
                    if (NOT (IS_CAR_ON_SCREEN( l_U688 )))
                    {
                        PRINTSTRING( "distance fail" );
                        PRINTNL();
                        CLEAR_PRINTS();
                        PRINT( "BRU2_04", 7500, 1 );
                        sub_3785();
                    }
                }
            }
        }
        else
        {
            CLEAR_PRINTS();
            PRINT( "BRU2_10", 7500, 1 );
            sub_3785();
        }
    }
    return;
}

void sub_3785()
{
    l_U582 = 0;
    sub_3823( 8, "BR2_CALL2", "BR2AUD", 0 );
    g_U65006++;
    if (g_U65006 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2990(), 150 );
        SAY_AMBIENT_SPEECH( sub_3308(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_4489();
    sub_2981();
    return;
}

void sub_3823(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_3867( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_3867(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
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
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_4489()
{
    sub_4498();
    return;
}

void sub_4498()
{
    int iVar2;

    iVar2 = 8;
    sub_4512( iVar2 );
    sub_2070( iVar2 );
    return;
}

void sub_4512(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2990(), 150 );
    CLEAR_HELP();
    sub_894( uParam0 );
    return;
}

float sub_4750(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    float Result;

    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    vVar6 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_3308(), ref vVar3.x, ref vVar3.y, ref vVar3.z );
        GET_CAR_COORDINATES( (uParam0^), ref vVar6.x, ref vVar6.y, ref vVar6.z );
        GET_DISTANCE_BETWEEN_COORDS_3D( vVar3.x, vVar3.y, vVar3.z, vVar6.x, vVar6.y, vVar6.z, ref Result );
        return Result;
    }
    return 22.22000000;
}

void sub_5116()
{
    if (g_U9893._fU24)
    {
        GET_GAME_TIMER( ref l_U861 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U694 );
        if (DOES_VEHICLE_EXIST( l_U694 ))
        {
            if (IS_VEH_DRIVEABLE( l_U694 ))
            {
                if (LOCATE_CAR_3D( l_U694, 775.43950000, 120.28560000, 4.95640000, 10.00000000, 10.00000000, 10.00000000, 0 ))
                {
                    SET_CAR_AS_MISSION_CAR( l_U694 );
                    CLEAR_AREA( 775.43950000, 120.28560000, 4.95640000, 4.00000000, 1 );
                    SET_CAR_HEADING( l_U694, 16.78580000 );
                    SET_CAR_COORDINATES( l_U694, 775.43950000, 120.28560000, 4.95640000 );
                }
            }
        }
        LOAD_ADDITIONAL_TEXT( "BR2AUD", 6 );
        ENABLE_SCENE_STREAMING( 0 );
        START_CUTSCENE_NOW( "BR_2" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        ENABLE_SCENE_STREAMING( 1 );
        CLEAR_NAMED_CUTSCENE( "BR_2" );
    }
    SET_CHAR_COORDINATES( sub_3308(), 776.73020000, 123.07230000, 4.84100000 );
    SET_CHAR_HEADING( sub_3308(), 121.27970000 );
    sub_5534();
    DO_SCREEN_FADE_IN( 500 );
    SET_CAM_BEHIND_PED( sub_3308() );
    SET_PLAYER_CONTROL( sub_2990(), 1 );
    PRINT( "BRU2_03", 7500, 1 );
    l_U629 = 1;
    l_U575 = 1;
    return;
}

void sub_5534()
{
    CLEAR_WANTED_LEVEL( sub_2990() );
    SET_WANTED_MULTIPLIER( 0.20000000 );
    sub_5576( "BR2AUD" );
    l_U704 = {777.99860000, 123.60090000, 4.91770000};
    l_U776 = {1188.34900000, 660.87780000, 39.72000000};
    l_U783 = 24.84230000;
    l_U707 = {1144.81300000, 670.60170000, 37.48970000};
    l_U784 = 360.00000000;
    l_U720 = {870.74940000, -121.52140000, 8.39999900};
    l_U745 = {1119.35100000, 712.10510000, 34.91060000};
    l_U801 = 1.50000000;
    l_U748[2] = {1115.87900000, 702.87300000, 35.21640000};
    l_U802[2] = 1.66500000;
    l_U758 = {872.80000000, -121.47610000, 5.00040000};
    l_U806 = 86.41020000;
    l_U770 = {871.84180000, -121.47410000, 5.00040000};
    l_U787 = 86.41020000;
    l_U779[0] = 24;
    l_U779[1] = 28;
    l_U779[2] = 30;
    l_U823 = -356904519;
    l_U818[0] = 970598228;
    l_U818[1] = -322343873;
    l_U825 = 1203311498;
    l_U767 = {1116.17300000, 708.72790000, 35.48010000};
    l_U813[0] = 1168388225;
    l_U813[1] = -1746774780;
    l_U813[2] = 492147228;
    l_U812 = 1348744438;
    l_U841[0] = 0;
    l_U841[1] = 0;
    l_U841[2] = 0;
    l_U847 = 22;
    l_U848 = 30;
    l_U773 = {861.12460000, -122.48690000, 5.93060000};
    l_U808 = 10.00000000;
    l_U809 = 20.00000000;
    l_U726[0] = {864.32000000, -121.64500000, 12.00000000};
    l_U726[1] = {864.32000000, -121.64500000, 7.40000000};
    l_U726[2] = {l_U726[0]};
    for ( l_U839 = 0; l_U839 <= 2; l_U839++ )
    {
        l_U853[l_U839] = 0;
        l_U857[l_U839] = 0;
        l_U662[l_U839] = 0;
        l_U666[l_U839] = 0;
    }
    l_U634[0] = 0;
    l_U634[1] = 0;
    l_U916[0] = 3;
    l_U916[1] = 7;
    l_U916[2] = 3;
    sub_6345();
    LOAD_COMBAT_DECISION_MAKER( 10, ref l_U884 );
    LOAD_ADDITIONAL_TEXT( "LK_BRU2", 0 );
    sub_6650( 0, sub_3308(), "NIKO", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    CREATE_CAR( l_U812, l_U707._fU0, l_U707._fU4, l_U707._fU8, ref l_U688, 1 );
    SET_CAR_HEADING( l_U688, l_U784 );
    CHANGE_CAR_COLOUR( l_U688, 3, 3 );
    SET_VEHICLE_DIRT_LEVEL( l_U688, 0.00000000 );
    ADD_BLIP_FOR_COORD( l_U776._fU0, l_U776._fU4, l_U776._fU8, ref l_U703 );
    SET_ROUTE( l_U703, 1 );
    sub_6958( ref l_U697, 1178.33400000, 650.95440000, 37.74430000, 181.15320000 );
    SET_VEH_HAS_STRONG_AXLES( l_U688, 1 );
    SET_CAN_BURST_CAR_TYRES( l_U688, 0 );
    SET_CAR_ON_GROUND_PROPERLY( l_U688 );
    SWITCH_ROADS_OFF( 1188.75100000, 630.41170000, 100.00000000, 1106.17000000, 756.25610000, -100.00000000 );
    l_U639 = 1;
    LOAD_SCENE( l_U704._fU0, l_U704._fU4, l_U704._fU8 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U884, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U884, 10 );
    SET_DECISION_MAKER_ATTRIBUTE_FIRE_RATE( l_U884, 2 );
    l_U575 = 0;
    return;
}

void sub_5576(unknown uParam0)
{
    StrCopy( ref l_U4._fU0, uParam0, 16 );
    sub_5593();
    return;
}

void sub_5593()
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

void sub_6345()
{
    GET_WEAPONTYPE_MODEL( 7, ref l_U824 );
    REQUEST_MODEL( l_U824 );
    GET_WEAPONTYPE_MODEL( 13, ref l_U826 );
    REQUEST_MODEL( l_U826 );
    REQUEST_MODEL( l_U812 );
    SUPPRESS_CAR_MODEL( l_U812 );
    REQUEST_MODEL( l_U818[0] );
    SUPPRESS_CAR_MODEL( l_U818[0] );
    REQUEST_MODEL( l_U818[1] );
    SUPPRESS_CAR_MODEL( l_U818[1] );
    REQUEST_MODEL( l_U813[0] );
    REQUEST_MODEL( l_U813[1] );
    REQUEST_MODEL( l_U825 );
    REQUEST_MODEL( 639246688 );
    REQUEST_CAR_RECORDING( 899 );
    REQUEST_CAR_RECORDING( 898 );
    REQUEST_CAR_RECORDING( 975 );
    REQUEST_ANIMS( "missbrucie2" );
    LOAD_ALL_OBJECTS_NOW();
    return;
}

void sub_6650(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U4._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U4._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6730( "\n PED NUMBER ", uParam0 );
    sub_6770( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6730(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6770(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6958(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_7259()
{
    if (NOT l_U633)
    {
        if (l_U645[0])
        {
            if (sub_7299( ref l_U866, 1000 ))
            {
                l_U633 = 1;
                l_U576 = 7;
            }
        }
    }
    switch (l_U576)
    {
        case 0:
        if (NOT l_U674)
        {
            if (IS_SCREEN_FADED_IN())
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U694 );
                l_U674 = 1;
            }
        }
        sub_7562( ref l_U693 );
        g_U9083 = 1;
        if (NOT l_U671)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3308(), l_U776._fU0, l_U776._fU4, l_U776._fU8, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                REMOVE_BLIP( l_U703 );
                ADD_BLIP_FOR_CAR( l_U688, ref l_U697 );
                SET_BLIP_AS_FRIENDLY( l_U697, 1 );
                SET_ROUTE( l_U697, 1 );
                CLEAR_PRINTS();
                PRINT_NOW( "BRU2_05", 7500, 1 );
                l_U671 = 1;
            }
        }
        if (LOCATE_CAR_3D( l_U688, 1144.43500000, 670.83100000, 38.00000000, 2.50000000, 2.50000000, 1.50000000, 0 ))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_3308(), l_U688 ))
            {
                if (sub_7944())
                {
                    SET_CAR_ENGINE_ON( l_U688, 1, 1 );
                    CLEAR_CHAR_TASKS( sub_3308() );
                    l_U641 = 1;
                    sub_8385();
                }
            }
        }
        else if (sub_7944())
        {
            sub_8385();
        }
        if ((NOT (l_U867[0] == 1)) AND (IS_KEYBOARD_KEY_PRESSED( 36 )))
        {
            l_U867[0] = 1;
            SET_CHAR_COORDINATES( sub_3308(), 1190.46700000, 649.06860000, 37.84920000 );
            SET_CHAR_HEADING( sub_3308(), l_U783 );
        }
        break;
        case 1:
        if (LOCATE_CAR_3D( l_U688, 1144.43500000, 670.83100000, 38.00000000, 2.50000000, 2.50000000, 1.50000000, 0 ))
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_3308(), l_U688 ))
            {
                if (sub_7944())
                {
                    SET_CAR_ENGINE_ON( l_U688, 1, 1 );
                    CLEAR_CHAR_TASKS( sub_3308() );
                    l_U641 = 1;
                    sub_8385();
                }
            }
        }
        else if (sub_7944())
        {
            sub_8385();
        }
        break;
        case 3:
        if (NOT l_U640)
        {
            if (NOT (IS_CHAR_DEAD( sub_3308() )))
            {
                if (NOT (IS_CAR_DEAD( l_U689[0] )))
                {
                    if (NOT (IS_CHAR_DEAD( l_U676[0] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U680[0] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U895 );
                            TASK_PLAY_ANIM( 0, "Look_Left_Car_Intro", "missbrucie2", 8.00000000, 0, 0, 0, 0, -1 );
                            TASK_PLAY_ANIM( 0, "Look_Left_Car_loop", "missbrucie2", 8.00000000, 1, 0, 0, 0, 999999 );
                            CLOSE_SEQUENCE_TASK( l_U895 );
                            TASK_PERFORM_SEQUENCE( l_U676[0], l_U895 );
                            CLEAR_SEQUENCE_TASK( l_U895 );
                            OPEN_SEQUENCE_TASK( ref l_U891[0] );
                            TASK_PLAY_ANIM( 0, "Look_Left_Car_Intro", "missbrucie2", 8.00000000, 0, 0, 0, 0, -1 );
                            TASK_PLAY_ANIM( 0, "Look_Left_Car_loop", "missbrucie2", 8.00000000, 1, 0, 0, 0, 999999 );
                            CLOSE_SEQUENCE_TASK( l_U891[0] );
                            TASK_PERFORM_SEQUENCE( l_U680[0], l_U891[0] );
                            CLEAR_SEQUENCE_TASK( l_U891[0] );
                            SET_CAR_ENGINE_ON( l_U689[0], 1, 1 );
                            START_PLAYBACK_RECORDED_CAR( l_U689[0], 975 );
                            SET_PLAYBACK_SPEED( l_U689[0], 1.70000000 );
                            l_U658[0] = 1;
                            TASK_PLAY_ANIM( sub_3308(), "Car_Look_R", "missbrucie2", 8.00000000, 0, 0, 0, 1, -1 );
                            GET_GAME_TIMER( ref l_U870 );
                            l_U640 = 1;
                        }
                    }
                }
            }
        }
        if ((NOT l_U594) AND (sub_7312( ref l_U870, 2000 )))
        {
            sub_11710( "BR2_AMB", ref l_U903[0], 8, 1 );
            l_U594 = 1;
        }
        if (l_U594)
        {
            if (NOT l_U600)
            {
                if (NOT (sub_12707( l_U903[0] )))
                {
                    l_U600 = 1;
                }
            }
        }
        if (NOT l_U586)
        {
            if (NOT (IS_CHAR_DEAD( l_U676[0] )))
            {
                if (NOT (IS_CAR_DEAD( l_U689[0] )))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U689[0] )))
                    {
                        GET_GAME_TIMER( ref l_U861 );
                        l_U634[0] = 1;
                        l_U586 = 1;
                    }
                }
            }
        }
        if ((l_U586) AND (l_U600))
        {
            if (sub_7312( ref l_U861, 500 ))
            {
                if (IS_VEH_DRIVEABLE( l_U689[0] ))
                {
                    FREEZE_CAR_POSITION( l_U689[0], 0 );
                }
                l_U576 = 4;
            }
        }
        break;
        case 4:
        if (NOT l_U601)
        {
            if (NOT (IS_CHAR_DEAD( l_U676[0] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U680[0] )))
                {
                    SET_CAM_PROPAGATE( l_U833, 0 );
                    SET_CAM_ACTIVE( l_U833, 0 );
                    SET_CAM_PROPAGATE( l_U828, 0 );
                    SET_CAM_ACTIVE( l_U828, 0 );
                    SET_CAM_PROPAGATE( l_U829, 0 );
                    SET_CAM_ACTIVE( l_U829, 0 );
                    SET_USE_HIGHDOF( 0 );
                    SETTIMERA( 0 );
                    sub_3110( 1 );
                    sub_11710( "BR2_SEESN", ref l_U903[0], 8, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U833, l_U835, l_U836, 2500, 0 );
                    SET_CAM_PROPAGATE( l_U833, 1 );
                    SET_CAM_ACTIVE( l_U833, 1 );
                    SETTIMERA( 0 );
                    l_U601 = 1;
                }
            }
        }
        if (l_U601)
        {
            if (NOT IS_CAM_INTERPOLATING())
            {
                if (NOT l_U584)
                {
                    if (NOT (IS_CHAR_DEAD( l_U676[1] )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U680[1] )))
                        {
                            if (NOT (IS_CAR_DEAD( l_U689[1] )))
                            {
                                SET_CAR_ENGINE_ON( l_U689[1], 1, 1 );
                                START_PLAYBACK_RECORDED_CAR( l_U689[1], 899 );
                                SET_PLAYBACK_SPEED( l_U689[1], 1.00000000 );
                                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U689[1], 1250 );
                                TASK_LOOK_AT_CHAR( l_U676[1], sub_3308(), -2, 0 );
                                TASK_LOOK_AT_CHAR( l_U680[1], sub_3308(), -2, 0 );
                                l_U658[1] = 1;
                                l_U584 = 1;
                                l_U576 = 5;
                            }
                        }
                    }
                }
            }
        }
        break;
        case 5:
        if (NOT l_U602)
        {
            SET_CAM_PROPAGATE( l_U833, 0 );
            SET_CAM_ACTIVE( l_U833, 0 );
            SET_CAM_PROPAGATE( l_U835, 0 );
            SET_CAM_ACTIVE( l_U835, 0 );
            SET_CAM_PROPAGATE( l_U836, 0 );
            SET_CAM_ACTIVE( l_U836, 0 );
            if (NOT l_U641)
            {
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                l_U645[0] = 1;
                GET_GAME_TIMER( ref l_U866 );
            }
            SET_CAM_ACTIVE( l_U831, 1 );
            SET_CAM_PROPAGATE( l_U831, 1 );
            GET_GAME_TIMER( ref l_U861 );
            l_U602 = 1;
        }
        if (l_U602)
        {
            if (sub_7312( ref l_U861, 3000 ))
            {
                l_U576 = 6;
            }
        }
        break;
        case 6:
        if (NOT l_U588)
        {
            if (NOT (IS_CHAR_INJURED( l_U676[1] )))
            {
                if (NOT (IS_CAR_DEAD( l_U689[1] )))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U689[1] )))
                    {
                        SET_CAM_PROPAGATE( l_U831, 0 );
                        SET_CAM_ACTIVE( l_U831, 0 );
                        SET_CAM_INTERP_STYLE_CORE( l_U833, l_U832, l_U837, 5000, 0 );
                        SET_CAM_ACTIVE( l_U833, 1 );
                        SET_CAM_PROPAGATE( l_U833, 1 );
                        CAM_SET_INTERP_GRAPH_ROT( l_U833, 0 );
                        CAM_SET_INTERP_GRAPH_POS( l_U833, 0 );
                        CLEAR_CHAR_TASKS( sub_3308() );
                        SETTIMERA( 0 );
                        sub_13970( ref l_U676[1], ref l_U887[1] );
                        GET_GAME_TIMER( ref l_U861 );
                        l_U634[1] = 1;
                        l_U588 = 1;
                    }
                }
            }
        }
        if (l_U588)
        {
            if (NOT l_U648)
            {
                if (sub_7312( ref l_U861, 250 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U680[1] )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U689[1] ))
                        {
                            sub_13970( ref l_U680[1], ref l_U891[1] );
                            l_U648 = 1;
                        }
                    }
                }
            }
        }
        if ((l_U588) AND (NOT l_U590))
        {
            if (NOT (IS_CHAR_INJURED( l_U676[1] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U676[1], 29, ref l_U898 );
                if (l_U898 == 1)
                {
                    GET_SEQUENCE_PROGRESS( l_U676[1], ref l_U900 );
                    if (l_U900 == 1)
                    {
                        if (l_U641)
                        {
                            sub_6650( 2, l_U676[1], "LYLES_FRIEND", 0 );
                            sub_11710( "BR2_STOP", ref l_U903[0], 8, 1 );
                        }
                        else
                        {
                            sub_6650( 2, l_U676[1], "LYLES_FRIEND", 0 );
                            sub_11710( "BR2_SEESN", ref l_U903[0], 8, 1 );
                        }
                        l_U590 = 1;
                    }
                }
            }
        }
        if ((l_U590) AND (NOT l_U589))
        {
            if (NOT IS_CAM_INTERPOLATING())
            {
                l_U576 = 8;
            }
        }
        break;
        case 7:
        if (NOT IS_SCREEN_FADED_OUT())
        {
            if (NOT IS_SCREEN_FADING_OUT())
            {
                CLEAR_PRINTS();
                sub_3110( 0 );
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
        else
        {
            l_U576 = 8;
        }
        break;
        case 8:
        if (l_U633)
        {
            if ((IS_VEH_DRIVEABLE( l_U689[1] )) AND (IS_VEH_DRIVEABLE( l_U689[0] )))
            {
                if (l_U658[0])
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U689[0] ))
                    {
                        SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U689[0] );
                    }
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( l_U689[0], 975 );
                    SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U689[0] );
                }
                if (l_U658[1])
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U689[1] ))
                    {
                        SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U689[1] );
                    }
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( l_U689[1], 899 );
                    SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U689[1] );
                }
            }
        }
        FREEZE_CAR_POSITION( l_U688, 0 );
        CLEAR_AREA( 1119.34000000, 711.99470000, 34.91060000, 100, 1 );
        CREATE_CAR( l_U818[0], l_U748[2]._fU0, l_U748[2]._fU4, l_U748[2]._fU8, ref l_U689[2], 1 );
        SET_CAR_HEADING( l_U689[2], l_U802[2] );
        CHANGE_CAR_COLOUR( l_U689[2], 0, 0 );
        CREATE_CHAR_INSIDE_CAR( l_U689[2], 26, l_U813[1], ref l_U676[2] );
        SET_COMBAT_DECISION_MAKER( l_U676[2], l_U884 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U676[2] );
        GIVE_WEAPON_TO_CHAR( l_U676[2], 7, 30000, 0 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U676[2], 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U676[2], 1 );
        CREATE_CAR( l_U825, l_U767._fU0, l_U767._fU4, l_U767._fU8, ref l_U696, 1 );
        CHANGE_CAR_COLOUR( l_U696, 0, 0 );
        CREATE_CHAR_INSIDE_CAR( l_U696, 26, l_U813[1], ref l_U686 );
        SET_CHAR_COMPONENT_VARIATION( l_U686, 0, 0, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U686, 1, 0, 3 );
        FREEZE_CAR_POSITION( l_U696, 1 );
        CREATE_CHAR_AS_PASSENGER( l_U689[2], 26, l_U813[0], 0, ref l_U680[2] );
        GIVE_WEAPON_TO_CHAR( l_U680[2], 7, 30000, 0 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U676[2] );
        SET_COMBAT_DECISION_MAKER( l_U680[2], l_U884 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U680[2], 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U680[2], 1 );
        SET_CAM_PROPAGATE( l_U833, 0 );
        SET_CAM_ACTIVE( l_U833, 0 );
        SET_CAM_PROPAGATE( l_U832, 0 );
        SET_CAM_ACTIVE( l_U832, 0 );
        SET_CAM_PROPAGATE( l_U837, 0 );
        SET_CAM_ACTIVE( l_U837, 0 );
        SET_CAM_BEHIND_PED( sub_3308() );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_ALL_CAMS();
        END_CAM_COMMANDS( ref l_U838 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        for ( l_U839 = 0; l_U839 <= 2; l_U839++ )
        {
            if (DOES_CHAR_EXIST( l_U676[l_U839] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U676[l_U839] )))
                {
                    SET_CHAR_NEVER_TARGETTED( l_U676[l_U839], 0 );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U676[l_U839], 1 );
                }
            }
        }
        for ( l_U839 = 0; l_U839 <= 2; l_U839++ )
        {
            if (DOES_CHAR_EXIST( l_U680[l_U839] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U680[l_U839] )))
                {
                    SET_CHAR_NEVER_TARGETTED( l_U680[l_U839], 0 );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U680[l_U839], 1 );
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U680[1] )))
        {
            if (IS_VEH_DRIVEABLE( l_U689[1] ))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U680[1], l_U689[1] )))
                {
                    CLEAR_CHAR_TASKS( l_U680[1] );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U680[1], l_U689[1], 0 );
                }
                else
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U680[1] );
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U680[1], l_U689[1], 0 );
                }
            }
        }
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3308(), 0 );
        if (NOT l_U633)
        {
            sub_15821( 1 );
        }
        else
        {
            sub_3086( 1 );
        }
        STOP_PED_SPEAKING( sub_3308(), 0 );
        if (NOT l_U641)
        {
            if (IS_CHAR_SITTING_IN_CAR( sub_3308(), l_U688 ))
            {
                CLEAR_PRINTS();
                PRINT( "BRU2_09", 7500, 1 );
            }
            else
            {
                CLEAR_PRINTS();
                PRINT( "BRU2_01", 7500, 1 );
            }
        }
        else
        {
            CLEAR_PRINTS();
            PRINT( "BRU2_09", 7500, 1 );
        }
        l_U575 = 2;
        break;
    }
    return;
}

int sub_7299(unknown uParam0, unknown uParam1)
{
    if (sub_7312( uParam0, uParam1 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_7379())
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_7312(unknown uParam0, int iParam1)
{
    GET_GAME_TIMER( ref l_U113 );
    if ((l_U113 - (uParam0^)) > iParam1)
    {
        return 1;
    }
    return 0;
}

void sub_7379()
{
    return IS_CONTROL_JUST_PRESSED( 2, 77 );
}

void sub_7562(unknown uParam0)
{
    int iVar3;

    if (sub_7572( ref iVar3 ))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( iVar3 )))
        {
            if ((uParam0^) != iVar3)
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( uParam0 );
                (uParam0^) = iVar3;
                SET_CAR_AS_MISSION_CAR( (uParam0^) );
            }
        }
    }
    return;
}

int sub_7572(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3308() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3308(), uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (IS_VEH_DRIVEABLE( (uParam0^) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_7944()
{
    if (sub_7955( 1, 1 ))
    {
        CLEAR_PRINTS();
        CLEAR_HELP();
        sub_3110( 0 );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        SET_PLAYER_CONTROL( sub_2990(), 0 );
        CLEAR_CHAR_TASKS( sub_3308() );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3308(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

int sub_7955(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3308() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3308(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3308() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3308(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3308()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3308() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3308() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2990() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2990() )))
    {
        return 0;
    }
    return 1;
}

void sub_8385()
{
    if (DOES_VEHICLE_EXIST( l_U693 ))
    {
        if (IS_VEH_DRIVEABLE( l_U693 ))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3308(), l_U693 )))
            {
                SET_CAR_HEADING( l_U693, 0.00000000 );
                SET_CAR_COORDINATES( l_U693, 1188.34900000, 660.87780000, 37.56620000 );
            }
        }
    }
    g_U9083 = 0;
    if (l_U641)
    {
        FREEZE_CAR_POSITION( l_U688, 1 );
        SET_CAR_HEADING( l_U688, l_U784 );
        SET_CAR_COORDINATES( l_U688, l_U707._fU0, l_U707._fU4, l_U707._fU8 );
    }
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    CLEAR_AREA( l_U707._fU0, l_U707._fU4, l_U707._fU8, 200, 1 );
    if (DOES_BLIP_EXIST( l_U703 ))
    {
        REMOVE_BLIP( l_U703 );
    }
    REMOVE_BLIP( l_U697 );
    l_U606 = 0;
    BEGIN_CAM_COMMANDS( ref l_U838 );
    CREATE_CAM( 14, ref l_U828 );
    CREATE_CAM( 14, ref l_U829 );
    CREATE_CAM( 14, ref l_U830 );
    CREATE_CAM( 14, ref l_U831 );
    CREATE_CAM( 14, ref l_U835 );
    CREATE_CAM( 14, ref l_U836 );
    CREATE_CAM( 14, ref l_U832 );
    CREATE_CAM( 14, ref l_U837 );
    CREATE_CAM( 3, ref l_U833 );
    SET_CAM_POS( l_U828, 1143.36600000, 670.75920000, 38.61031000 );
    SET_CAM_ROT( l_U828, -1.66338000, 0.00000000, -89.83974000 );
    SET_CAM_FOV( l_U828, 30.00000000 );
    SET_CAM_NEAR_DOF( l_U828, 0.01000000 );
    SET_CAM_FAR_DOF( l_U828, 40.00000000 );
    SET_CAM_POS( l_U829, 1143.36600000, 670.75920000, 38.61031000 );
    SET_CAM_ROT( l_U829, -1.66338000, 0.00000000, -89.83974000 );
    SET_CAM_FOV( l_U829, 28.80004000 );
    SET_CAM_NEAR_DOF( l_U829, 0.01000000 );
    SET_CAM_FAR_DOF( l_U829, 40.00000000 );
    SET_CAM_POS( l_U830, 1178.19200000, 671.53160000, 38.17120000 );
    SET_CAM_ROT( l_U830, 5.84018600, 0.00000000, 175.68640000 );
    SET_CAM_FOV( l_U830, 45.40005000 );
    SET_CAM_POS( l_U835, 1179.48300000, 670.61870000, 38.24266000 );
    SET_CAM_ROT( l_U835, 0.36778200, 0.00000000, 93.69207000 );
    SET_CAM_FOV( l_U835, 26.30005000 );
    SET_CAM_POS( l_U836, 1179.48300000, 670.61870000, 38.24266000 );
    SET_CAM_ROT( l_U836, 0.36778200, 0.00000000, 93.69207000 );
    SET_CAM_FOV( l_U836, 24.30005000 );
    if (l_U641)
    {
        SET_CAM_POS( l_U831, 1146.79200000, 674.61950000, 37.68755000 );
        SET_CAM_ROT( l_U831, 5.56264800, -0.00000000, 165.41880000 );
        SET_CAM_FOV( l_U831, 22.50006000 );
    }
    else
    {
        SET_CAM_POS( l_U831, 1142.04700000, 648.78170000, 38.81310000 );
        SET_CAM_ROT( l_U831, -0.11910500, -5.04202400, -7.85426400 );
        SET_CAM_FOV( l_U831, 35.70002000 );
    }
    SET_CAM_POS( l_U832, 1143.41900000, 657.78240000, 41.31362000 );
    SET_CAM_ROT( l_U832, -64.85481000, -0.00000000, -142.11530000 );
    SET_CAM_FOV( l_U832, 55 );
    SET_CAM_POS( l_U837, 1142.63200000, 655.21420000, 39.56861000 );
    SET_CAM_ROT( l_U837, -14.64370000, 0.00000000, -33.80167000 );
    SET_CAM_FOV( l_U837, 55 );
    CLOSE_ALL_CAR_DOORS( l_U688 );
    CREATE_CAR( l_U818[0], 1178.21600000, 659.88610000, 37.56890000, ref l_U689[0], 1 );
    SET_CAR_HEADING( l_U689[0], 360.00000000 );
    SET_VEHICLE_DIRT_LEVEL( l_U688, 0.00000000 );
    CHANGE_CAR_COLOUR( l_U689[0], 0, 0 );
    CREATE_CHAR_INSIDE_CAR( l_U689[0], 26, l_U813[0], ref l_U676[0] );
    GIVE_WEAPON_TO_CHAR( l_U676[0], 13, 30000, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U676[0], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U676[0], 1, 0, 0 );
    SET_COMBAT_DECISION_MAKER( l_U676[0], l_U884 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U676[0], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U676[0], 1 );
    sub_6650( 2, l_U676[0], "LYLES_FRIEND", 0 );
    CREATE_CHAR_AS_PASSENGER( l_U689[0], 26, l_U813[1], 0, ref l_U680[0] );
    GIVE_WEAPON_TO_CHAR( l_U680[0], 13, 30000, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U680[0], 1, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U676[0], 0, 0, 0 );
    SET_COMBAT_DECISION_MAKER( l_U680[0], l_U884 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U680[0], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U680[0], 1 );
    CREATE_CAR( l_U818[1], 1154.75300000, 650.44400000, 37.90530000, ref l_U689[1], 1 );
    SET_CAR_HEADING( l_U689[1], 90.32869000 );
    CHANGE_CAR_COLOUR( l_U689[1], 0, 0 );
    CREATE_CHAR( 26, l_U813[0], 1154.75300000, 650.44400000, 37.90530000, ref l_U676[1], 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U676[1], 0, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U676[1], 1, 1, 0 );
    GIVE_WEAPON_TO_CHAR( l_U676[1], 7, 30000, 0 );
    WARP_CHAR_INTO_CAR( l_U676[1], l_U689[1] );
    SET_COMBAT_DECISION_MAKER( l_U676[1], l_U884 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U676[1], 1 );
    CREATE_CHAR( 26, l_U813[1], 1154.75300000, 650.44400000, 37.90530000, ref l_U680[1], 1 );
    GIVE_WEAPON_TO_CHAR( l_U680[1], 7, 30000, 0 );
    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U680[1], l_U689[1], 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U680[1], 0, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U680[1], 1, 1, 0 );
    SET_COMBAT_DECISION_MAKER( l_U680[1], l_U884 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U680[1], 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U680[1], 1 );
    SETTIMERB( 0 );
    CLEAR_CHAR_TASKS( sub_3308() );
    BLOCK_CHAR_AMBIENT_ANIMS( sub_3308(), 1 );
    if (NOT l_U641)
    {
        if (IS_VEH_DRIVEABLE( l_U689[0] ))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U689[0] )))
            {
                SET_CAR_ENGINE_ON( l_U689[0], 1, 1 );
                START_PLAYBACK_RECORDED_CAR( l_U689[0], 975 );
                SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U689[0] );
                l_U658[0] = 1;
            }
            else
            {
                SET_CAR_ENGINE_ON( l_U689[0], 1, 1 );
                SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U689[0] );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U676[1] )))
        {
            if (NOT (IS_CAR_DEAD( l_U689[1] )))
            {
                SET_CAR_ENGINE_ON( l_U689[1], 1, 1 );
                START_PLAYBACK_RECORDED_CAR( l_U689[1], 899 );
                SET_PLAYBACK_SPEED( l_U689[1], 1.00000000 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U689[1], 1250 );
                l_U658[1] = 1;
            }
        }
        l_U576 = 5;
    }
    else
    {
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U833, l_U828, l_U829, 5000, 0 );
        SET_CAM_ACTIVE( l_U833, 1 );
        SET_CAM_PROPAGATE( l_U833, 1 );
        SET_USE_HIGHDOF( 1 );
        l_U645[0] = 1;
        GET_GAME_TIMER( ref l_U866 );
        l_U576 = 3;
    }
    SETTIMERA( 0 );
    l_U867[0] = 1;
    l_U615 = 1;
    if ((NOT (l_U867[0] == 1)) AND (IS_KEYBOARD_KEY_PRESSED( 36 )))
    {
        l_U867[0] = 1;
        SET_CHAR_COORDINATES( sub_3308(), 1149.00500000, 670.13390000, 38.58780000 );
        SET_CHAR_HEADING( sub_3308(), l_U783 );
    }
    return;
}

void sub_11710(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_11731( uParam0, ref l_U4._fU0, uParam1, uParam2, uParam3 );
}

void sub_11731(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_11785( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_11785(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_11807( iParam1 )))
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
    sub_12495( ref g_U8395, ref l_U4 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_11807(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_11884( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_11884( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_11884( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_11884(unknown uParam0)
{
    return;
}

void sub_12495(int iParam0, int iParam1)
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

int sub_12707(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_11884( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_11884( "\n speech is not playing" );
    }
    return 0;
}

void sub_13970(unknown uParam0, unknown uParam1)
{
    CLEAR_CHAR_TASKS( (uParam0^) );
    OPEN_SEQUENCE_TASK( uParam1 );
    TASK_LEAVE_CAR_DONT_CLOSE_DOOR( 0, l_U689[1] );
    TASK_AIM_GUN_AT_COORD( 0, l_U707._fU0, l_U707._fU4, l_U707._fU8, 4000 );
    CLOSE_SEQUENCE_TASK( (uParam1^) );
    TASK_PERFORM_SEQUENCE( (uParam0^), (uParam1^) );
    CLEAR_SEQUENCE_TASK( (uParam1^) );
    return;
}

void sub_15821(boolean bParam0)
{
    CLEAR_PRINTS();
    CLEAR_HELP();
    sub_3110( 0 );
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    if (IS_PLAYER_PLAYING( sub_2990() ))
    {
        SET_INTERP_IN_OUT_VEHICLE_ENABLED_THIS_FRAME( 0 );
        SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
        SET_CAM_BEHIND_PED( sub_3308() );
        if (bParam0)
        {
            CLEAR_CHAR_TASKS( sub_3308() );
        }
        SET_PLAYER_CONTROL( sub_2990(), 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3308(), 0 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    return;
}

void sub_16156()
{
    sub_16201( ref l_U676[1], ref l_U680[1], ref l_U689[1], ref l_U699[1], l_U779[1] );
    if (NOT (DOES_BLIP_EXIST( l_U698 )))
    {
        ADD_BLIP_FOR_COORD( l_U720._fU0, l_U720._fU4, l_U720._fU8, ref l_U698 );
        SET_ROUTE( l_U698, 1 );
    }
    if (IS_VEH_DRIVEABLE( l_U689[0] ))
    {
        GET_CAR_HEALTH( l_U689[0], ref l_U877[0] );
    }
    l_U575 = 3;
    SETTIMERA( 0 );
    return;
}

void sub_16201(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if (NOT (IS_CHAR_INJURED( (uParam1^) )))
        {
            if (NOT (IS_CAR_DEAD( (uParam2^) )))
            {
                if (NOT (DOES_BLIP_EXIST( (uParam3^) )))
                {
                    ADD_BLIP_FOR_CAR( (uParam2^), uParam3 );
                    CHANGE_BLIP_DISPLAY( (uParam3^), 0 );
                    sub_16301( uParam0, 0, 0 );
                    sub_16301( uParam1, 1, 1 );
                    TASK_CAR_MISSION_PED_TARGET( (uParam0^), (uParam2^), sub_3308(), 7, uParam4, 2, -1, -1 );
                }
            }
        }
    }
    return;
}

void sub_16301(unknown uParam0, boolean bParam1, boolean bParam2)
{
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( (uParam0^), 0 );
    if (bParam2)
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
    }
    SET_RELATIONSHIP( 5, 0, 23 );
    SET_RELATIONSHIP( 5, 23, 0 );
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        CLEAR_CHAR_TASKS( (uParam0^) );
        SET_COMBAT_DECISION_MAKER( (uParam0^), l_U884 );
        SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 23 );
        if (bParam1)
        {
            SET_CHAR_WILL_DO_DRIVEBYS( (uParam0^), 1 );
        }
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( (uParam0^), 0 );
    }
    return;
}

void sub_16621()
{
    sub_16688( l_U697, ref l_U698, ref l_U720, "BRU2_02", "BRU2_14", ref l_U644, 0, 0.00000000, 0.00000000, 0.00000000, 0.00000000 );
    if (NOT l_U628)
    {
        if (NOT l_U644)
        {
            sub_16928( ref l_U720, ref l_U698, ref l_U688, ref l_U697 );
        }
        else
        {
            sub_17476( ref l_U688, ref l_U697, "BRU2_13", "BRU2_02" );
        }
    }
    switch (l_U578)
    {
        case 0:
        if (NOT l_U670)
        {
            if (IS_VEH_DRIVEABLE( l_U689[0] ))
            {
                if (sub_17718( ref l_U689[0], l_U877[0] ))
                {
                    FREEZE_CAR_POSITION( l_U689[0], 0 );
                    sub_16201( ref l_U676[0], ref l_U680[0], ref l_U689[0], ref l_U699[0], l_U779[0] );
                    l_U670 = 1;
                }
            }
        }
        sub_17914();
        if (NOT l_U605)
        {
            if (NOT (IS_CAR_DEAD( l_U688 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3308(), 1135.90000000, 725.00000000, 35.03560000, 4.00000000, 5.10000000, 4.00000000, 0 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U686 )))
                    {
                        if (NOT (IS_CAR_DEAD( l_U696 )))
                        {
                            FREEZE_CAR_POSITION( l_U696, 0 );
                            SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U686, 2 );
                            START_PLAYBACK_RECORDED_CAR_USING_AI( l_U696, 898 );
                            SET_PLAYBACK_SPEED( l_U696, 0.70000000 );
                            GET_GAME_TIMER( ref l_U861 );
                            l_U605 = 1;
                        }
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U861 );
                }
            }
        }
        if (NOT (IS_CHAR_IN_AREA_3D( sub_3308(), 1125.00000000, 649.00000000, -50.00000000, 1170.00000000, 729.00000000, 50.00000000, 0 )))
        {
            if (NOT l_U605)
            {
                if (NOT (IS_CHAR_INJURED( l_U686 )))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U686 );
                }
                if (IS_VEH_DRIVEABLE( l_U696 ))
                {
                    FREEZE_CAR_POSITION( l_U696, 0 );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U696 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U825 );
                }
            }
            if (NOT l_U670)
            {
                if (IS_VEH_DRIVEABLE( l_U689[0] ))
                {
                    FREEZE_CAR_POSITION( l_U689[0], 0 );
                    sub_16201( ref l_U676[0], ref l_U680[0], ref l_U689[0], ref l_U699[0], l_U779[0] );
                }
            }
            if (IS_VEH_DRIVEABLE( l_U689[2] ))
            {
                FREEZE_CAR_POSITION( l_U689[2], 0 );
                sub_16201( ref l_U676[2], ref l_U680[2], ref l_U689[2], ref l_U699[2], l_U779[2] );
            }
            l_U623 = 1;
            GET_GAME_TIMER( ref l_U861 );
            l_U578 = 1;
        }
        break;
        case 1:
        if (NOT l_U642)
        {
            sub_19690();
        }
        sub_17914();
        sub_19812();
        for ( l_U839 = 0; l_U839 <= 2; l_U839++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U676[l_U839] )))
            {
                if (l_U857[l_U839] == 0)
                {
                    if (IS_VEH_DRIVEABLE( l_U689[l_U839] ))
                    {
                        if (sub_20603( ref l_U689[l_U839], 30.00000000, 10, l_U789, 8 ))
                        {
                            PRINTSTRING( "car pos: " );
                            PRINTINT( l_U839 );
                            PRINTNL();
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U676[l_U839], 1 );
                            GET_DRIVER_OF_CAR( l_U689[l_U839], ref l_U687 );
                            if (DOES_CHAR_EXIST( l_U687 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U687 )))
                                {
                                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U687 );
                                }
                            }
                            GET_MAXIMUM_NUMBER_OF_PASSENGERS( l_U689[l_U839], ref l_U881 );
                            if (l_U881 >= 1)
                            {
                                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( l_U689[l_U839], 0 )))
                                {
                                    GET_CHAR_IN_CAR_PASSENGER_SEAT( l_U689[l_U839], 0, ref l_U687 );
                                    if (DOES_CHAR_EXIST( l_U687 ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U687 )))
                                        {
                                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U687 );
                                        }
                                    }
                                }
                            }
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U676[l_U839] );
                            if (IS_CHAR_IN_ANY_CAR( l_U676[l_U839] ))
                            {
                                WARP_CHAR_FROM_CAR_TO_CAR( l_U676[l_U839], l_U689[l_U839], -1 );
                            }
                            else
                            {
                                WARP_CHAR_INTO_CAR( l_U676[l_U839], l_U689[l_U839] );
                            }
                            TASK_CAR_MISSION_PED_TARGET( l_U676[l_U839], l_U689[l_U839], sub_3308(), l_U916[l_U839], l_U779[l_U839], 2, -1, -1 );
                            if (NOT (IS_CHAR_INJURED( l_U680[l_U839] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U680[l_U839] );
                                if (IS_CHAR_IN_ANY_CAR( l_U680[l_U839] ))
                                {
                                    WARP_CHAR_FROM_CAR_TO_CAR( l_U680[l_U839], l_U689[l_U839], 0 );
                                }
                                else
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U680[l_U839], l_U689[l_U839], 0 );
                                }
                                sub_16301( ref l_U680[l_U839], 1, 1 );
                            }
                            else if (DOES_CHAR_EXIST( l_U680[l_U839] ))
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U680[l_U839] );
                            }
                            l_U662[l_U839] = 0;
                            l_U853[l_U839] = 0;
                        }
                    }
                    else if (DOES_VEHICLE_EXIST( l_U689[l_U839] ))
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U689[l_U839] );
                        REMOVE_BLIP( l_U699[l_U839] );
                        l_U857[l_U839] = 1;
                    }
                }
            }
            else if (DOES_CHAR_EXIST( l_U676[l_U839] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U676[l_U839] );
            }
            if (DOES_VEHICLE_EXIST( l_U689[l_U839] ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U689[l_U839] );
                REMOVE_BLIP( l_U699[l_U839] );
            }
            PRINTSTRING( "char " );
            PRINTINT( l_U839 );
            PRINTSTRING( " dead" );
            PRINTNL();;
        }
        GET_CHAR_COORDINATES( sub_3308(), ref l_U742._fU0, ref l_U742._fU4, ref l_U742._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U742._fU0, l_U742._fU4, l_U742._fU8, l_U720._fU0, l_U720._fU4, l_U720._fU8, ref l_U800 );
        if (l_U800 < 200)
        {
            l_U579 = 2;
            l_U578 = 2;
        }
        break;
        case 2:
        sub_17914();
        sub_19812();
        for ( l_U839 = 0; l_U839 <= 2; l_U839++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U676[l_U839] )))
            {
                if (IS_VEH_DRIVEABLE( l_U689[l_U839] ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( l_U676[l_U839], l_U689[l_U839] ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U887[l_U839] );
                        TASK_CAR_MISSION_PED_TARGET( 0, l_U689[l_U839], sub_3308(), 8, 20.00000000, 2, 200, -1 );
                        CLOSE_SEQUENCE_TASK( l_U887[l_U839] );
                        TASK_PERFORM_SEQUENCE( l_U676[l_U839], l_U887[l_U839] );
                        CLEAR_SEQUENCE_TASK( l_U887[l_U839] );
                    }
                    else
                    {
                        OPEN_SEQUENCE_TASK( ref l_U887[l_U839] );
                        TASK_SMART_FLEE_CHAR( 0, sub_3308(), 200.00000000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U887[l_U839] );
                        TASK_PERFORM_SEQUENCE( l_U676[l_U839], l_U887[l_U839] );
                        CLEAR_SEQUENCE_TASK( l_U887[l_U839] );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U680[l_U839] )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U676[l_U839], l_U689[l_U839] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U891[l_U839] );
                            TASK_SMART_FLEE_CHAR( 0, sub_3308(), 200.00000000, -1 );
                            CLOSE_SEQUENCE_TASK( l_U891[l_U839] );
                            TASK_PERFORM_SEQUENCE( l_U680[l_U839], l_U891[l_U839] );
                            CLEAR_SEQUENCE_TASK( l_U891[l_U839] );
                        }
                    }
                    else
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U680[l_U839] );
                    }
                }
                else
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U689[l_U839] );
                    OPEN_SEQUENCE_TASK( ref l_U887[l_U839] );
                    TASK_SMART_FLEE_CHAR( 0, sub_3308(), 200.00000000, -1 );
                    CLOSE_SEQUENCE_TASK( l_U887[l_U839] );
                    TASK_PERFORM_SEQUENCE( l_U676[l_U839], l_U887[l_U839] );
                    CLEAR_SEQUENCE_TASK( l_U887[l_U839] );
                    if (NOT (IS_CHAR_INJURED( l_U680[l_U839] )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U891[l_U839] );
                        TASK_SMART_FLEE_CHAR( 0, sub_3308(), 200.00000000, -1 );
                        CLOSE_SEQUENCE_TASK( l_U891[l_U839] );
                        TASK_PERFORM_SEQUENCE( l_U680[l_U839], l_U891[l_U839] );
                        CLEAR_SEQUENCE_TASK( l_U891[l_U839] );
                    }
                    else
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U680[l_U839] );
                    }
                    REMOVE_BLIP( l_U699[l_U839] );
                    l_U857[l_U839] = 1;
                }
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U676[l_U839] );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U689[l_U839] );
                if (NOT (IS_CHAR_INJURED( l_U680[l_U839] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U891[l_U839] );
                    TASK_SMART_FLEE_CHAR( 0, sub_3308(), 200.00000000, -1 );
                    CLOSE_SEQUENCE_TASK( l_U891[l_U839] );
                    TASK_PERFORM_SEQUENCE( l_U680[l_U839], l_U891[l_U839] );
                    CLEAR_SEQUENCE_TASK( l_U891[l_U839] );
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U680[l_U839] );
                }
                REMOVE_BLIP( l_U699[l_U839] );
                PRINTSTRING( "char " );
                PRINTINT( l_U839 );
                PRINTSTRING( " dead" );
                PRINTNL();
            }
            l_U662[l_U839] = 0;
        }
        l_U578 = 3;
        break;
        case 3:
        if (DOES_BLIP_EXIST( l_U698 ))
        {
            sub_24303();
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3308(), l_U720._fU0, l_U720._fU4, l_U720._fU8, 3.00000000, 4.30000000, 3.30000000, 1 ))
            {
                if (sub_7955( 1, 1 ))
                {
                    REMOVE_BLIP( l_U698 );
                    SET_PLAYER_CONTROL( sub_2990(), 0 );
                    if (sub_25163( ref l_U688 ))
                    {
                        l_U673 = 1;
                    }
                    sub_25297( 1, ref l_U179, 1, 1 );
                    sub_25407( ref l_U688 );
                    l_U628 = 1;
                    l_U575 = 4;
                    break;
                    2;
                    1;
                    ref l_U115;
                    2;
                    1;
                    ref l_U178;
                    2;
                    1;
                    ref l_U179;
                    1;
                    ref l_U178;
                    1;
                    1;
                    ref l_U115;
                    ref l_U688;
                    break;
                }
            }
        }
        break;
    }
    if ((l_U623) AND (NOT (l_U575 == 4)))
    {
        switch (l_U579)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U686 )))
            {
                if (IS_VEH_DRIVEABLE( l_U696 ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U696 )))
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U696 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U825 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U686 );
                        l_U579 = 1;
                    }
                }
                else
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U696 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U825 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U686 );
                    l_U579 = 1;
                }
            }
            else
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U696 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U825 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U686 );
                l_U579 = 1;
            }
            break;
            default:
        }
    }
    if ((NOT (l_U867[1] == 1)) AND (IS_KEYBOARD_KEY_PRESSED( 36 )))
    {
        if (NOT (IS_CAR_DEAD( l_U688 )))
        {
            if (NOT (IS_CHAR_DEAD( sub_3308() )))
            {
                SET_CAR_COORDINATES( l_U688, 862.19380000, -152.41440000, 5.60410000 );
                SET_CAR_HEADING( l_U688, 90.00000000 );
                l_U867[1] = 1;
            }
        }
    }
    return;
}

void sub_16688(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    if (IS_WANTED_LEVEL_GREATER( sub_2990(), 0 ))
    {
        if (NOT (uParam5^))
        {
            if (DOES_BLIP_EXIST( (uParam1^) ))
            {
                REMOVE_BLIP( (uParam1^) );
            }
            PRINT_NOW( uParam3, 7500, 1 );
            (uParam5^) = 1;
        }
    }
    else if ((uParam5^))
    {
        CLEAR_THIS_PRINT( uParam3 );
        (uParam5^) = 0;
        if (NOT (DOES_BLIP_EXIST( uParam0 )))
        {
            ADD_BLIP_FOR_COORD( iParam2->_fU0, iParam2->_fU4, iParam2->_fU8, uParam1 );
            SET_ROUTE( (uParam1^), 1 );
            if (bParam6)
            {
                sub_6958( uParam1, uParam7, uParam10 );
            }
            CLEAR_PRINTS();
            PRINT( uParam4, 7500, 1 );
        }
    }
    return;
}

void sub_16928(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam2^) ))
        {
            if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3308(), (uParam2^) )))
            {
                if (DOES_BLIP_EXIST( (uParam1^) ))
                {
                    REMOVE_BLIP( (uParam1^) );
                }
                if (NOT (DOES_BLIP_EXIST( (uParam3^) )))
                {
                    ADD_BLIP_FOR_CAR( (uParam2^), uParam3 );
                    SET_BLIP_AS_FRIENDLY( (uParam3^), 1 );
                    if (NOT l_U641)
                    {
                        PRINT_NOW( "BRU2_01", 7500, 1 );
                        l_U641 = 1;
                    }
                    else
                    {
                        PRINT_NOW( "BRU2_13", 7500, 1 );
                    }
                }
            }
        }
    }
    else if (IS_VEH_DRIVEABLE( (uParam2^) ))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_3308(), (uParam2^) ))
        {
            if (DOES_BLIP_EXIST( (uParam3^) ))
            {
                REMOVE_BLIP( (uParam3^) );
            }
            if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
            {
                ADD_BLIP_FOR_COORD( l_U720._fU0, l_U720._fU4, l_U720._fU8, uParam1 );
                SET_ROUTE( (uParam1^), 1 );
                CLEAR_PRINTS();
                if (NOT (sub_17253( ref l_U676, ref l_U680 )))
                {
                    PRINT( "BRU2_09", 7500, 1 );
                }
                else
                {
                    PRINT( "BRU2_14", 7500, 1 );
                }
            }
        }
    }
    return;
}

int sub_17253(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;

    iVar5 = 0;
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        if (IS_CHAR_INJURED( (uParam0^)[I] ))
        {
            iVar5++;
        }
        else
        {
            return 0;
        }
        if (IS_CHAR_INJURED( (uParam1^)[I] ))
        {
            iVar5++;
        }
        else
        {
            return 0;
        }
    }
    if (iVar5 == 6)
    {
        return 1;
    }
    return 0;
}

void sub_17476(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
    {
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3308(), (uParam0^) )))
        {
            ADD_BLIP_FOR_CAR( (uParam0^), uParam1 );
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            CLEAR_PRINTS();
            PRINT( uParam2, 7500, 1 );
        }
    }
    else if (IS_CHAR_SITTING_IN_CAR( sub_3308(), (uParam0^) ))
    {
        REMOVE_BLIP( (uParam1^) );
        CLEAR_PRINTS();
        PRINT_NOW( uParam3, 7500, 1 );
    }
    return;
}

int sub_17718(unknown uParam0, int iParam1)
{
    int iVar4;

    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CAR_HEALTH( (uParam0^), ref iVar4 );
            if ((iVar4 < iParam1) || ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( (uParam0^), sub_3308() )) || (((GET_ENGINE_HEALTH( (uParam0^) )) < iParam1) || ((GET_PETROL_TANK_HEALTH( (uParam0^) )) < iParam1))))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

void sub_17914()
{
    sub_17923();
    GET_CAR_SPEED( l_U688, ref l_U799 );
    if (l_U799 < 0.50000000)
    {
        for ( l_U839 = 0; l_U839 <= 2; l_U839++ )
        {
            if (NOT l_U662[l_U839])
            {
                if (NOT (IS_CHAR_INJURED( l_U676[l_U839] )))
                {
                    if (IS_CHAR_INJURED( l_U680[l_U839] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U689[l_U839] ))
                        {
                            if (IS_CHAR_SITTING_IN_CAR( l_U676[l_U839], l_U689[l_U839] ))
                            {
                                if ((sub_7312( ref l_U876, 15000 )) || ((sub_4750( ref l_U689[l_U839] )) < 10.00000000))
                                {
                                    CLEAR_CHAR_TASKS( l_U676[l_U839] );
                                    OPEN_SEQUENCE_TASK( ref l_U887[l_U839] );
                                    TASK_LEAVE_CAR( 0, l_U689[l_U839] );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3308() );
                                    CLOSE_SEQUENCE_TASK( l_U887[l_U839] );
                                    TASK_PERFORM_SEQUENCE( l_U676[l_U839], l_U887[l_U839] );
                                    CLEAR_SEQUENCE_TASK( l_U887[l_U839] );
                                    sub_18052( ref l_U676[l_U839], ref l_U884 );
                                    l_U662[l_U839] = 1;
                                }
                            }
                        }
                        else if (NOT l_U666[l_U839])
                        {
                            CLEAR_CHAR_TASKS( l_U676[l_U839] );
                            sub_18052( ref l_U676[l_U839], ref l_U884 );
                            l_U666[l_U839] = 1;
                        }
                    }
                }
                else if (NOT l_U666[l_U839])
                {
                    if (NOT (IS_CHAR_INJURED( l_U680[l_U839] )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U689[l_U839] ))
                        {
                            if (IS_CHAR_SITTING_IN_CAR( l_U680[l_U839], l_U689[l_U839] ))
                            {
                                CLEAR_CHAR_TASKS( l_U680[l_U839] );
                                OPEN_SEQUENCE_TASK( ref l_U891[l_U839] );
                                TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U689[l_U839] );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3308() );
                                CLOSE_SEQUENCE_TASK( l_U891[l_U839] );
                                TASK_PERFORM_SEQUENCE( l_U680[l_U839], l_U891[l_U839] );
                                CLEAR_SEQUENCE_TASK( l_U891[l_U839] );
                                sub_18052( ref l_U680[l_U839], ref l_U884 );
                                l_U666[l_U839] = 1;
                            }
                        }
                        else
                        {
                            CLEAR_CHAR_TASKS( l_U680[l_U839] );
                            sub_18052( ref l_U680[l_U839], ref l_U884 );
                            l_U666[l_U839] = 1;
                        }
                    }
                }
            }
        }
    }
    else
    {
        GET_GAME_TIMER( ref l_U876 );
    }
    return;
}

void sub_17923()
{
    for ( l_U839 = 0; l_U839 <= 2; l_U839++ )
    {
        if (NOT l_U666[l_U839])
        {
            if (NOT (IS_VEH_DRIVEABLE( l_U689[l_U839] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U676[l_U839] )))
                {
                    CLEAR_CHAR_TASKS( l_U676[l_U839] );
                    sub_18052( ref l_U676[l_U839], ref l_U884 );
                }
                if (NOT (IS_CHAR_INJURED( l_U676[l_U839] )))
                {
                    CLEAR_CHAR_TASKS( l_U676[l_U839] );
                    sub_18052( ref l_U680[l_U839], ref l_U884 );
                }
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U689[l_U839] );
                l_U666[l_U839] = 1;
            }
        }
    }
    return;
}

void sub_18052(unknown uParam0, unknown uParam1)
{
    SET_RELATIONSHIP( 5, 0, 23 );
    SET_RELATIONSHIP( 5, 23, 0 );
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( (uParam0^), 0 );
            SET_COMBAT_DECISION_MAKER( (uParam0^), (uParam1^) );
            SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 23 );
            SET_CHAR_WILL_USE_COVER( (uParam0^), 1 );
            SET_CHAR_IS_TARGET_PRIORITY( (uParam0^), 1 );
        }
    }
    return;
}

void sub_19690()
{
    if (NOT (IS_CHAR_IN_AREA_3D( sub_3308(), 1189.00700000, 636.80160000, 100.00000000, 1106.58800000, 749.82240000, -100.00000000, 0 )))
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1188.75100000, 630.41170000, 100.00000000, 1106.17000000, 756.25610000, -100.00000000 );
        l_U639 = 0;
    }
    l_U642 = 1;
    return;
}

void sub_19812()
{
    switch (l_U874)
    {
        case 0:
        if (IS_PAY_N_SPRAY_ACTIVE())
        {
            for ( l_U839 = 0; l_U839 <= 2; l_U839++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U676[l_U839] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U689[l_U839] ))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( l_U676[l_U839], l_U689[l_U839] ))
                        {
                            if ((l_U802[l_U839] < 283) || (l_U802[l_U839] > 145))
                            {
                                TASK_CAR_TEMP_ACTION( l_U676[l_U839], l_U689[l_U839], 3, 3000 );
                            }
                            else
                            {
                                TASK_CAR_TEMP_ACTION( l_U676[l_U839], l_U689[l_U839], 9, 3000 );
                            }
                        }
                    }
                }
            }
            GET_GAME_TIMER( ref l_U875 );
            l_U874++;
        }
        break;
        case 1:
        if (NOT IS_PAY_N_SPRAY_ACTIVE())
        {
            l_U874 = 2;
        }
        if (sub_7312( ref l_U875, 3000 ))
        {
            for ( l_U839 = 0; l_U839 <= 2; l_U839++ )
            {
                if (IS_VEH_DRIVEABLE( l_U689[l_U839] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U676[l_U839] )))
                    {
                        TASK_CAR_MISSION_PED_TARGET( l_U676[l_U839], l_U689[l_U839], sub_3308(), 5, 20.00000000, 2, -1, -1 );
                    }
                }
            }
            l_U874++;
        }
        break;
        case 2:
        if (NOT IS_PAY_N_SPRAY_ACTIVE())
        {
            for ( l_U839 = 0; l_U839 <= 2; l_U839++ )
            {
                if (IS_VEH_DRIVEABLE( l_U689[l_U839] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U676[l_U839] )))
                    {
                        TASK_CAR_MISSION_PED_TARGET( l_U676[l_U839], l_U689[l_U839], sub_3308(), l_U916[l_U839], l_U779[l_U839], 2, -1, -1 );
                    }
                }
            }
            l_U874 = 0;
        }
        break;
    }
    return;
}

int sub_20603(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3308(), (uParam0^), uParam1, uParam1, uParam1, 0 )))
        {
            if (NOT (IS_CAR_ON_SCREEN( (uParam0^) )))
            {
                if (iParam4 == 8)
                {
                    uVar8 = {sub_20685( uParam0, uParam2 )};
                }
                else
                {
                    uVar8 = {sub_20800( iParam4, uParam2, 0 )};
                }
                return sub_21731( uParam0, uVar8, uParam3 );
            }
        }
    }
    return 0;
}

void sub_20685(unknown uParam0, unknown uParam1)
{
    vector Result;
    vector vVar7;

    GET_CAR_COORDINATES( (uParam0^), ref Result.x, ref Result.y, ref Result.z );
    GET_CHAR_COORDINATES( sub_3308(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
    Result = {Result - vVar7};
    Result = {Result * (uParam1 / (VMAG( Result )))};
    Result = {Result + vVar7};
    return Result;
}

void sub_20800(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;

    switch (uParam0)
    {
        case 0:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), (uParam1 * 0.80000000) * -1.00000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), uParam1 * -1.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 1:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 2:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 3:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), uParam1 * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), uParam1, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 4:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), uParam1 * 0.65000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), uParam1 * 0.80000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 5:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), 0.00000000, (uParam1 * -1.00000000) * 0.65000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), 0.00000000, uParam1 * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 6:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), (uParam1 * 0.65000000) * -1.00000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), (uParam1 * 0.80000000) * -1.00000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 7:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), (uParam1 * -1.00000000) * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3308(), uParam1 * -1.00000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
    }
    return Result;
}

int sub_21731(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_3308(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_NTH_CLOSEST_CAR_NODE_FAVOUR_DIRECTION( uParam1, uVar7, 1, ref uVar10, ref uVar13 );
        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar10._fU0, uVar10._fU4, uVar10._fU8, 10.00000000, 10.00000000, 10.00000000 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar14 );
            if (NOT (CAM_IS_SPHERE_VISIBLE( uVar14, uVar10._fU0, uVar10._fU4, uVar10._fU8, 8.00000000 )))
            {
                CLEAR_AREA( uVar10._fU0, uVar10._fU4, uVar10._fU8, 6.00000000, 0 );
                SET_CAR_COORDINATES( (uParam0^), uVar10._fU0, uVar10._fU4, uVar10._fU8 );
                uVar16 = {-SIN( uVar13 ), COS( uVar13 ), 0.00000000};
                GET_ANGLE_BETWEEN_2D_VECTORS( uVar16._fU0, uVar16._fU4, uVar7._fU0 - uVar10._fU0, uVar7._fU4 - uVar10._fU4, ref fVar15 );
                if (fVar15 > 90.00000000)
                {
                    SET_CAR_HEADING( (uParam0^), uVar13 + 180.00000000 );
                }
                else
                {
                    SET_CAR_HEADING( (uParam0^), uVar13 );
                }
                SET_CAR_FORWARD_SPEED( (uParam0^), uParam4 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_24303()
{
    if (DOES_OBJECT_EXIST( g_U9167 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( sub_3308(), l_U688 ))
        {
            if ((LOCATE_CHAR_IN_CAR_3D( sub_3308(), 874.04070000, -111.15070000, 5.00040000, 9.60000000, 14.60000000, 4.00000000, 0 )) || (LOCATE_CHAR_IN_CAR_3D( sub_3308(), l_U773._fU0, l_U773._fU4, l_U773._fU8, 8.00000000, 8.00000000, 3.00000000, 0 )))
            {
                GET_OBJECT_COORDINATES( g_U9167, ref l_U726[2]._fU0, ref l_U726[2]._fU4, ref l_U726[2]._fU8 );
                if (l_U726[2]._fU8 < l_U726[0]._fU8)
                {
                    sub_24515();
                    if (SLIDE_OBJECT( g_U9167, l_U726[0]._fU0, l_U726[0]._fU4, l_U726[0]._fU8, 0.00000000, 0.00000000, 0.07500000, 0 ))
                    {
                        sub_24658();
                    }
                }
            }
            else
            {
                GET_OBJECT_COORDINATES( g_U9167, ref l_U726[2]._fU0, ref l_U726[2]._fU4, ref l_U726[2]._fU8 );
                GET_CAR_COORDINATES( l_U688, ref l_U707._fU0, ref l_U707._fU4, ref l_U707._fU8 );
                GET_DISTANCE_BETWEEN_COORDS_3D( l_U726[2]._fU0, l_U726[2]._fU4, l_U726[2]._fU8, l_U707._fU0, l_U707._fU4, l_U707._fU8, ref l_U810 );
                if (l_U810 < l_U808)
                {
                    if (l_U726[2]._fU8 < l_U726[0]._fU8)
                    {
                        SLIDE_OBJECT( g_U9167, l_U726[0]._fU0, l_U726[0]._fU4, l_U726[0]._fU8, 0.00000000, 0.00000000, 0.07500000, 0 );
                    }
                }
                else if (l_U810 > l_U809)
                {
                    if (l_U726[2]._fU8 > l_U726[1]._fU8)
                    {
                        SLIDE_OBJECT( g_U9167, l_U726[1]._fU0, l_U726[1]._fU4, l_U726[1]._fU8, 0.00000000, 0.00000000, 0.07500000, 0 );
                    }
                }
            }
        }
    }
    return;
}

void sub_24515()
{
    if (DOES_OBJECT_EXIST( g_U9167 ))
    {
        if (l_U882 == -1)
        {
            l_U882 = GET_SOUND_ID();
            PLAY_SOUND_FROM_OBJECT( l_U882, l_U883, g_U9167 );
        }
    }
    return;
}

void sub_24658()
{
    if (l_U882 != -1)
    {
        STOP_SOUND( l_U882 );
        RELEASE_SOUND_ID( l_U882 );
        l_U882 = -1;
    }
    return;
}

int sub_25163(unknown uParam0)
{
    int iVar3;

    GET_CAR_HEALTH( (uParam0^), ref iVar3 );
    GET_PETROL_TANK_HEALTH( (uParam0^) );
    GET_ENGINE_HEALTH( (uParam0^) );
    if (((GET_ENGINE_HEALTH( (uParam0^) )) > 700) || (((GET_PETROL_TANK_HEALTH( (uParam0^) )) > 700) || (iVar3 > 700)))
    {
        return 1;
    }
    return 0;
}

void sub_25297(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            GET_CAR_HEALTH( (uParam0^), uParam1 );
            (uParam2^) = GET_ENGINE_HEALTH( (uParam0^) );
            (uParam3^) = GET_PETROL_TANK_HEALTH( (uParam0^) );
        }
    }
    return;
}

void sub_25407(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (ProtectedGet(l_U115) < 500)
            {
                SET_CAR_HEALTH( (uParam0^), 500 );
            }
            if (ProtectedGet(l_U178) < 500)
            {
                SET_ENGINE_HEALTH( (uParam0^), 500.00000000 );
            }
            if (ProtectedGet(l_U179) < 500.00000000)
            {
                SET_PETROL_TANK_HEALTH( (uParam0^), 500.00000000 );
            }
            SET_CAR_PROOFS( (uParam0^), 1, 1, 1, 1, 1 );
        }
    }
    return;
}

void sub_25931()
{
    switch (l_U580)
    {
        case 0:
        if (sub_26017( 1 ))
        {
            SET_OBJECT_COORDINATES( g_U9167, l_U726[0]._fU0, l_U726[0]._fU4, l_U726[0]._fU8 );
            SET_OBJECT_HEADING( g_U9167, 90.00000000 );
            STOP_PED_SPEAKING( sub_3308(), 1 );
            for ( l_U839 = 0; l_U839 <= 2; l_U839++ )
            {
                sub_26337( ref l_U676[l_U839] );
                sub_26337( ref l_U680[l_U839] );
                sub_26421( ref l_U689[l_U839] );
                if (DOES_BLIP_EXIST( l_U699[l_U839] ))
                {
                    REMOVE_BLIP( l_U699[l_U839] );
                }
            }
            for ( l_U839 = 0; l_U839 <= 1; l_U839++ )
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U813[l_U839] );
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U818[l_U839] );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U824 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U826 );
            REQUEST_MODEL( l_U823 );
            REQUEST_ANIMS( "gestures@niko" );
            LOAD_ALL_OBJECTS_NOW();
            CLEAR_AREA( 870.37810000, -121.81840000, 5.00001000, 50.00000000, 1 );
            LOAD_SCENE( 869.58590000, -121.03340000, 5.00050000 );
            if (NOT (IS_CAR_DEAD( l_U688 )))
            {
                BEGIN_CAM_COMMANDS( ref l_U838 );
                CREATE_CAM( 14, ref l_U834 );
                CREATE_CAM( 14, ref l_U828 );
                CREATE_CAM( 14, ref l_U837 );
                CREATE_CAM( 14, ref l_U829 );
                CREATE_CAM( 14, ref l_U830 );
                CREATE_CAM( 14, ref l_U831 );
                CREATE_CAM( 14, ref l_U832 );
                CREATE_CAM( 14, ref l_U837 );
                CREATE_CAM( 3, ref l_U833 );
                SET_CAM_POS( l_U828, 872.44210000, -119.41200000, 5.13595700 );
                SET_CAM_ROT( l_U828, 8.70704400, -4.87054100, 104.96470000 );
                SET_CAM_FOV( l_U828, 30.00000000 );
                SET_CAM_POS( l_U837, 872.44210000, -119.41200000, 5.13595700 );
                SET_CAM_ROT( l_U837, 14.31505000, -4.87054100, 104.96470000 );
                SET_CAM_FOV( l_U837, 30.00000000 );
                SET_CAM_POS( l_U829, 871.26610000, -119.10220000, 5.34037100 );
                SET_CAM_ROT( l_U829, 14.68352000, 0.00000000, -160.09070000 );
                SET_CAM_FOV( l_U829, 32.40003000 );
                SET_CAM_POS( l_U834, 871.26610000, -119.10220000, 5.34037100 );
                SET_CAM_ROT( l_U834, 14.68352000, -0.00000000, -158.71560000 );
                SET_CAM_FOV( l_U834, 30.00004000 );
                SET_CAM_POS( l_U830, 870.26620000, -118.73470000, 6.72864500 );
                SET_CAM_ROT( l_U830, -11.42196000, 2.69581200, -147.07880000 );
                SET_CAM_FOV( l_U830, 30.60004000 );
                SET_CAM_POS( l_U831, 876.60250000, -118.13650000, 5.34370100 );
                SET_CAM_ROT( l_U831, 7.39290100, 0.00000000, 111.95320000 );
                SET_CAM_FOV( l_U831, 35.40002000 );
                SET_CAM_POS( l_U832, 855.89380000, -114.79600000, 9.13849700 );
                SET_CAM_ROT( l_U832, -12.88010000, -0.00000000, -135.95400000 );
                SET_CAM_FOV( l_U832, 30.00000000 );
                GET_INTERIOR_AT_COORDS( 869.58590000, -121.03340000, 5.00050000, ref l_U902 );
                l_U872 = GET_HASH_KEY( "BrucieMain" );
                LOAD_SCENE_FOR_ROOM_BY_KEY( l_U902, l_U872 );
                SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U688, 1 );
                SET_ROOM_FOR_CAR_BY_NAME( l_U688, "GtaMloRoom08" );
                SET_CAR_HEADING( l_U688, 271.83190000 );
                SET_CAR_COORDINATES( l_U688, 869.58590000, -121.03340000, 5.00050000 );
                CREATE_CHAR( 26, l_U823, l_U758._fU0, l_U758._fU4, l_U758._fU8, ref l_U685, 1 );
                SET_CHAR_HEADING( l_U685, l_U806 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U685, "GtaMloRoom08" );
                STOP_PED_SPEAKING( l_U685, 1 );
                sub_6650( 3, l_U685, "MECHANIC", 0 );
                TASK_LOOK_AT_VEHICLE( l_U685, l_U688, -2, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U685, 0, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U685, 1, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U685, 2, 0, 0 );
                CLEAR_CHAR_TASKS( sub_3308() );
                OPEN_SEQUENCE_TASK( ref l_U896 );
                TASK_LEAVE_CAR( 0, l_U688 );
                CLOSE_SEQUENCE_TASK( l_U896 );
                TASK_PERFORM_SEQUENCE( sub_3308(), l_U896 );
                CLEAR_SEQUENCE_TASK( l_U896 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U833, l_U828, l_U837, 3000, 0 );
                SET_CAM_ACTIVE( l_U833, 1 );
                SET_CAM_PROPAGATE( l_U833, 1 );
                WAIT( 0 );
                GET_GAME_VIEWPORT_ID( ref l_U901 );
                SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U901, "GtaMloRoom08" );
                DO_SCREEN_FADE_IN( 500 );
                GET_GAME_TIMER( ref l_U861 );
                GET_GAME_TIMER( ref l_U866 );
                l_U580 = 1;
            }
        }
        break;
        case 1:
        if (NOT l_U672)
        {
            if (sub_7312( ref l_U861, 1750 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U685 )))
                {
                    CLEAR_CHAR_TASKS( l_U685 );
                    OPEN_SEQUENCE_TASK( ref l_U897 );
                    TASK_PLAY_ANIM( 0, "mechanic_look_at_car", "missbrucie2", 8.00000000, 0, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U897 );
                    TASK_PERFORM_SEQUENCE( l_U685, l_U897 );
                    CLEAR_SEQUENCE_TASK( l_U897 );
                    l_U672 = 1;
                }
            }
        }
        GET_SCRIPT_TASK_STATUS( sub_3308(), 29, ref l_U899 );
        if (l_U899 == 7)
        {
            if (NOT (IS_CHAR_INJURED( l_U685 )))
            {
                SET_CAM_ACTIVE( l_U833, 0 );
                SET_CAM_PROPAGATE( l_U833, 0 );
                SET_CAM_ACTIVE( l_U828, 0 );
                SET_CAM_PROPAGATE( l_U828, 0 );
                SET_CAM_ACTIVE( l_U837, 0 );
                SET_CAM_PROPAGATE( l_U837, 0 );
                CLEAR_CHAR_TASKS( sub_3308() );
                SET_CHAR_HEADING( sub_3308(), 269.60820000 );
                SET_CHAR_COORDINATES( sub_3308(), 870.42700000, -119.63640000, 5.00050000 );
                TASK_LOOK_AT_CHAR( l_U685, sub_3308(), -2, 0 );
                if (l_U673)
                {
                    sub_11710( "BR2_DROP2", ref l_U903[0], 7, 1 );
                }
                else
                {
                    sub_11710( "BR2_DROP1", ref l_U903[0], 7, 1 );
                }
                PRINTSTRING( "fail 1" );
                PRINTNL();
                SET_CAM_INTERP_STYLE_CORE( l_U833, l_U829, l_U834, 3000, 0 );
                SET_CAM_ACTIVE( l_U833, 1 );
                SET_CAM_PROPAGATE( l_U833, 1 );
                GET_GAME_TIMER( ref l_U861 );
                l_U580 = 2;
                GET_GAME_TIMER( ref l_U861 );
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U685 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U685, 29, ref l_U899 );
            if (l_U899 == 7)
            {
                SET_CAM_ACTIVE( l_U833, 0 );
                SET_CAM_PROPAGATE( l_U833, 0 );
                SET_CAM_ACTIVE( l_U829, 0 );
                SET_CAM_PROPAGATE( l_U829, 0 );
                SET_CAM_ACTIVE( l_U834, 0 );
                SET_CAM_PROPAGATE( l_U834, 0 );
                SET_CAM_ACTIVE( l_U830, 1 );
                SET_CAM_PROPAGATE( l_U830, 1 );
                GET_GAME_TIMER( ref l_U861 );
                l_U580 = 3;
            }
        }
        break;
        case 3:
        if (NOT (sub_12707( l_U903[0] )))
        {
            SET_CAM_ACTIVE( l_U830, 0 );
            SET_CAM_PROPAGATE( l_U830, 0 );
            TASK_FLUSH_ROUTE();
            TASK_EXTEND_ROUTE( 862.05460000, -120.81720000, 4.95870000 );
            OPEN_SEQUENCE_TASK( ref l_U896 );
            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
            CLOSE_SEQUENCE_TASK( l_U896 );
            TASK_PERFORM_SEQUENCE( sub_3308(), l_U896 );
            CLEAR_SEQUENCE_TASK( l_U896 );
            SET_CAM_ACTIVE( l_U831, 1 );
            SET_CAM_PROPAGATE( l_U831, 1 );
            GET_GAME_TIMER( ref l_U861 );
            l_U580 = 5;
        }
        break;
        case 4:
        if (sub_7312( ref l_U861, 2000 ))
        {
            SET_CAM_POS( l_U831, 870.50190000, -117.38040000, 10.32784000 );
            SET_CAM_ROT( l_U831, -51.50716000, -0.00000100, 121.80800000 );
            SET_CAM_FOV( l_U831, 45.00000000 );
            GET_GAME_TIMER( ref l_U861 );
            l_U580 = 5;
        }
        break;
        case 5:
        if (NOT l_U611)
        {
            if (sub_7312( ref l_U861, 3000 ))
            {
                sub_24515();
                SLIDE_OBJECT( g_U9167, l_U726[1]._fU0, l_U726[1]._fU4, l_U726[1]._fU8, 0.00000000, 0.00000000, 0.05500000, 0 );
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3308(), 862.05460000, -120.81720000, 4.95870000, 1.20000000, 1.20000000, 1.20000000, 0 ))
                {
                    SET_CAM_ACTIVE( l_U831, 0 );
                    SET_CAM_PROPAGATE( l_U831, 0 );
                    CLEAR_ROOM_FOR_VIEWPORT( l_U901 );
                    SET_CAM_ACTIVE( l_U832, 1 );
                    SET_CAM_PROPAGATE( l_U832, 1 );
                    GET_GAME_TIMER( ref l_U861 );
                    l_U611 = 1;
                }
            }
        }
        else
        {
            sub_24515();
            if (SLIDE_OBJECT( g_U9167, l_U726[1]._fU0, l_U726[1]._fU4, l_U726[1]._fU8, 0.00000000, 0.00000000, 0.05500000, 0 ))
            {
                if (sub_7312( ref l_U861, 2000 ))
                {
                    sub_24658();
                    l_U580 = 6;
                }
            }
        }
        break;
        case 6:
        if (NOT (IS_CHAR_INJURED( l_U685 )))
        {
            STOP_PED_SPEAKING( l_U685, 0 );
        }
        SET_CAM_PROPAGATE( l_U832, 0 );
        SET_CAM_ACTIVE( l_U832, 0 );
        DESTROY_ALL_CAMS();
        SET_WIDESCREEN_BORDERS( 0 );
        SET_CAM_BEHIND_PED( sub_3308() );
        SET_PLAYER_CONTROL( sub_2990(), 1 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U838 );
        sub_15821( 1 );
        sub_29415();
        break;
        case 7:
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        SET_CAM_PROPAGATE( l_U833, 0 );
        SET_CAM_ACTIVE( l_U833, 0 );
        SET_CAM_PROPAGATE( l_U828, 0 );
        SET_CAM_ACTIVE( l_U828, 0 );
        SET_CAM_PROPAGATE( l_U829, 0 );
        SET_CAM_ACTIVE( l_U829, 0 );
        SET_CAM_PROPAGATE( l_U830, 0 );
        SET_CAM_ACTIVE( l_U830, 0 );
        SET_CAM_PROPAGATE( l_U831, 0 );
        SET_CAM_ACTIVE( l_U831, 0 );
        SET_CAM_PROPAGATE( l_U832, 0 );
        SET_CAM_ACTIVE( l_U832, 0 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3308() );
        SET_CHAR_COORDINATES( sub_3308(), 862.05460000, -120.81720000, 4.95870000 );
        SET_CHAR_HEADING( sub_3308(), 94.89200000 );
        SET_OBJECT_COORDINATES( g_U9167, l_U726[1]._fU0, l_U726[1]._fU4, l_U726[1]._fU8 );
        SET_OBJECT_HEADING( g_U9167, 90.00000000 );
        DESTROY_ALL_CAMS();
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U838 );
        sub_3086( 1 );
        sub_29415();
        break;
    }
    if (l_U580 != 0)
    {
        if (sub_7299( ref l_U866, 1000 ))
        {
            l_U580 = 7;
        }
    }
    return;
}

int sub_26017(boolean bParam0)
{
    int iVar3;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT IS_SCREEN_FADING())
        {
            if (IS_CHAR_IN_ANY_BOAT( sub_3308() ))
            {
                iVar3 = 0;
            }
            else
            {
                iVar3 = 1;
            }
            if (sub_7955( 1, iVar3 ))
            {
                if (bParam0)
                {
                    SET_PLAYER_CONTROL( sub_2990(), 0 );
                }
                DO_SCREEN_FADE_OUT( 500 );
            }
        }
    }
    else
    {
        sub_3110( 0 );
        CLEAR_PRINTS();
        CLEAR_HELP();
        SET_PLAYER_CONTROL( sub_2990(), 0 );
        CLEAR_CHAR_TASKS( sub_3308() );
        DISPLAY_HUD( 0 );
        DISPLAY_RADAR( 0 );
        SET_WIDESCREEN_BORDERS( 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3308(), 1 );
        ALLOW_EMERGENCY_SERVICES( 0 );
        return 1;
    }
    return 0;
}

void sub_26337(unknown uParam0)
{
    if (DOES_CHAR_EXIST( (uParam0^) ))
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^) )))
        {
            DELETE_CHAR( uParam0 );
        }
    }
    return;
}

void sub_26421(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            DELETE_CAR( uParam0 );
        }
    }
    return;
}

void sub_29415()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    CLEAR_WANTED_LEVEL( sub_2990() );
    l_U582 = 0;
    sub_3823( 8, "BR2_CALL1", "BR2AUD", 0 );
    sub_29480();
    sub_2981();
    return;
}

void sub_29480()
{
    sub_29489();
    return;
}

void sub_29489()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_29507();
    sub_29566( iVar2, iVar3, iVar4 );
    return;
}

void sub_29507()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U569[I] = 4;
    }
    return;
}

void sub_29566(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 8;
    sub_29597( iVar5, uParam0, uParam1, uParam2, "Friend_9" );
    return;
}

void sub_29597(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_29693( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_29693( ref cVar9 );
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
            sub_29693( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_29693( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_29693( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_29693( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_30270( iParam0, iVar7 );;;
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
                sub_30667( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_30667( 0, 4 );
            }
        }
    }
    if (NOT (sub_30756( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2990(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2990() );
    }
    sub_2079();
    bVar27 = true;
    uVar28 = sub_30270( iParam0, iVar7 );
    uVar29 = sub_1536( iParam0 );
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
                sub_40132( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_40562();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_40647( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_40704( iParam0 );
                sub_40743( 0 );
                sub_1977( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_40851();
        }
    }
    if (bParam2)
    {
        sub_40562();
        sub_40939();
        sub_40743( 0 );
    }
    if (bParam3)
    {
        sub_40562();
        sub_40979();
        sub_40743( 0 );
        sub_1977( uVar29, 0 );
    }
    sub_1423();
    return;
}

void sub_29693(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_30270(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1935( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_30667(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_30756(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_30964( uParam1 );
        break;
        case 1:
        bVar8 = sub_33042( uParam1 );
        break;
        case 2:
        bVar8 = sub_33268( uParam1 );
        break;
        case 3:
        bVar8 = sub_33418( uParam1 );
        break;
        case 4:
        bVar8 = sub_33696( uParam1 );
        break;
        case 5:
        bVar8 = sub_33999( uParam1 );
        break;
        case 6:
        bVar8 = sub_34198( uParam1 );
        break;
        case 7:
        bVar8 = sub_34424( uParam1 );
        break;
        case 8:
        bVar8 = sub_34659( uParam1 );
        break;
        case 9:
        bVar8 = sub_35034( uParam1 );
        break;
        case 10:
        bVar8 = sub_35281( uParam1 );
        break;
        case 11:
        bVar8 = sub_35420( uParam1 );
        break;
        case 12:
        bVar8 = sub_35719( uParam1 );
        break;
        case 13:
        bVar8 = sub_35947( uParam1 );
        break;
        case 14:
        bVar8 = sub_36234( uParam1 );
        break;
        case 15:
        bVar8 = sub_36516( uParam1 );
        break;
        case 16:
        bVar8 = sub_36798( uParam1 );
        break;
        case 17:
        bVar8 = sub_36999( uParam1 );
        break;
        case 18:
        bVar8 = sub_37072( uParam1 );
        break;
        case 19:
        bVar8 = sub_37286( uParam1 );
        break;
        case 20:
        bVar8 = sub_37539( uParam1 );
        break;
        case 21:
        bVar8 = sub_37786( uParam1 );
        break;
        case 22:
        bVar8 = sub_37987( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_32647( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_30270( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_38310( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_30964(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_31243( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_31243( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_31243( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_31243( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_31243( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_31243( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_31243( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_31243( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_31243( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_31243( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_31243( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_31243( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_31243( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_31243( iVar3, 0, 3, 1, 0, 0 );
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
        sub_31243( iVar3, 0, sub_32525(), sub_32791(), 0, 0 );
        break;
        default:
        sub_32950( "Friend 1", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Friend 1", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_31243(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_31254( uParam1 );
    sub_31428( uParam0, 0, uParam2 );
    sub_31428( uParam0, 1, uParam3 );
    sub_31428( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_29507();
    return;
}

void sub_31254(unknown uParam0)
{
    ADD_SCORE( sub_2990(), uParam0 );
    sub_31279( uParam0 );
    return;
}

void sub_31279(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1935( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_31428(unknown uParam0, int iParam1, int iParam2)
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
        sub_31585( uParam0 );
    }
    return;
}

void sub_31585(unknown uParam0)
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

int sub_32525()
{
    switch (l_U569[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_32647( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_32647(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_32791()
{
    switch (l_U569[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_32647( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_32950(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_33042(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31243( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_32950( "Contact 2", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 2", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33268(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_31243( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_32950( "Girl 3", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Girl 3", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33418(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_31243( iVar3, 0, sub_32525(), sub_32791(), 0, 0 );
        break;
        default:
        sub_32950( "Friend 4", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Friend 4", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33696(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31243( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_31243( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_31243( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_31243( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_32950( "Contact 5", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 5", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_33999(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_32950( "Contact 7", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 7", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34198(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31243( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_32950( "Contact 7b", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 7b", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34424(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_31243( iVar3, 0, sub_32525(), sub_32791(), 0, 0 );
        break;
        default:
        sub_32950( "Friend 8", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Friend 8", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_34659(unknown uParam0)
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
        sub_31243( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_31243( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_31243( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_31243( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_31243( iVar3, 0, sub_32525(), sub_32791(), 0, 0 );
        break;
        default:
        sub_32950( "Friend 9", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Friend 9", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35034(unknown uParam0)
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
        sub_31243( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_31243( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_31243( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_32950( "Contact 10", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_32950( "Contact 10", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35281(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_32950( "Girl 11", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Girl 11", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35420(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31243( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_31243( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_31243( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_31243( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_31243( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_32950( "Contact 12", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 12", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35719(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31243( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_32950( "Contact 13", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 13", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_35947(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_31243( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_31243( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_31243( iVar3, 0, sub_32525(), sub_32791(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_32950( "Friend 15", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Friend 15", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36234(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31243( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_31243( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_31243( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_32950( "Contact 16", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 16", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36516(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_31243( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_31243( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_31243( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_32950( "Contact 18", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 18", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36798(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_32950( "Contact 19", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 19", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_36999(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_32950( "Girl 20", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37072(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_32950( "Contact 21", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 21", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37286(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31243( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_31243( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_32950( "Contact 22", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 22", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37539(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_31243( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_31243( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_31243( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_32950( "Contact 24", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 24", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37786(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_31243( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_31243( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_31243( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_32950( "Contact 25", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_32950( "Contact 25", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37987(unknown uParam0)
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
        sub_31243( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_32950( "Girl 26", 1 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_32950( "Girl 26", 0 );
        sub_31243( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_38310(int iParam0, int iParam1)
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
    if (sub_38358( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_39089( iParam1 );
    }
    return;
}

int sub_38358(int iParam0, int iParam1)
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
            sub_38498( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_38498(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_38680( 0 );
    return;
}

void sub_38680(boolean bParam0)
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
        sub_38935();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_38935()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_39089(int iParam0)
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
        sub_39422( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_39422( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_39422( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_39422( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_39422( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_39422( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_39422( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_39422( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_39422( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_39422( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_39422( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_39422( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_39422( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_39422( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_39422( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_39422( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_39422( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_39422( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_39422( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_39422(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_40132(unknown uParam0, unknown uParam1)
{
    sub_40151( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_40151(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_40562()
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

int sub_40647(int iParam0, int iParam1)
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

void sub_40704(unknown uParam0)
{
    sub_1322();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_40743(unknown uParam0)
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

void sub_40851()
{
    sub_40860();
    return;
}

void sub_40860()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_40939()
{
    sub_40860();
    return;
}

void sub_40979()
{
    sub_40860();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

