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
    l_U484 = 0;
    l_U486 = 0;
    l_U487 = 0;
    l_U489 = 0;
    l_U672 = 0;
    l_U681 = 0;
    l_U682 = 0;
    l_U683 = 0;
    l_U684 = 0;
    l_U685 = 0;
    l_U699 = 0;
    l_U757 = 0;
    l_U799 = 0;
    l_U800 = 0;
    l_U803 = {1329.14300000, -846.51870000, 7.11050000};
    l_U807 = 0;
    l_U812 = 0;
    l_U813 = 0;
    l_U814 = 0;
    l_U815 = 0;
    l_U816 = 0;
    l_U817 = 1;
    l_U818 = 0;
    l_U819 = 0;
    l_U821 = 0;
    l_U822 = 600000;
    l_U823 = {917.44970000, 570.14620000, 24.27200000};
    l_U827 = 0;
    l_U828 = 0;
    l_U829 = 0;
    l_U830 = 0;
    l_U831 = 0;
    l_U833 = 0;
    l_U840 = 0;
    l_U841 = 21;
    l_U854 = 0;
    l_U855 = 0;
    l_U856 = 0;
    l_U857 = 0;
    l_U858 = 0;
    l_U880 = 0;
    l_U891 = 0;
    l_U892 = 0;
    l_U901 = 0.02700000;
    l_U902 = 0.00000000;
    l_U903 = 0.00000000;
    l_U904 = 0.02000000;
    l_U905 = 0.00000000;
    l_U906 = 0.05000000;
    l_U907 = 0;
    l_U909 = 0;
    l_U910 = 1;
    l_U911 = 50;
    l_U913 = 0;
    l_U916 = 0;
    l_U921 = 0;
    l_U922 = 0;
    l_U923 = 0;
    l_U924 = 0;
    l_U925 = 0;
    l_U926 = 0;
    l_U927 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_544();
        sub_2654();
    }
    SWITCH_MAD_DRIVERS( 0 );
    while (true)
    {
        WAIT( 0 );
        sub_3226();
        switch (l_U800)
        {
            case 0:
            sub_3533();
            sub_4356();
            sub_4439();
            CHANGE_GARAGE_TYPE( "QW2MG1", 3 );
            l_U800 = 2;
            sub_4566();
            SET_RELATIONSHIP( 2, 24, 0 );
            ADD_SCENARIO_BLOCKING_AREA( 781.58580000, -372.44540000, 7.39240000, 756.76400000, -408.47540000, 5.06850000 );
            break;
            case 2:
            sub_4677();
            break;
            case 1:
            if (l_U813)
            {
                sub_6261();
            }
            if (NOT l_U686[0])
            {
                sub_7529();
                SETTIMERB( 0 );
                l_U686[0] = 1;
            }
            else if (NOT l_U686[1])
            {
                if (NOT (IS_CHAR_INJURED( l_U496 )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U496 )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U503 ))
                        {
                            SWITCH_CAR_SIREN( l_U503, 0 );
                        }
                        l_U686[1] = 1;
                    }
                }
            }
            if (NOT l_U690)
            {
                if (IS_VEH_DRIVEABLE( l_U503 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U496 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CAR_2D( l_U496, l_U503, 17.00000000, 17.00000000, 0 ))
                        {
                            if (IS_CHAR_IN_CAR( sub_3235(), l_U503 ))
                            {
                                TASK_COMBAT( l_U496, sub_3235() );
                                ALTER_WANTED_LEVEL( sub_2919(), 1 );
                                APPLY_WANTED_LEVEL_CHANGE_NOW( sub_2919() );
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U496 );
                                l_U690 = 1;
                            }
                        }
                        else if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( l_U496, l_U503, 45.00000000, 45.00000000, 0 )))
                        {
                            if (NOT l_U686[2])
                            {
                                CLEAR_CHAR_TASKS( l_U496 );
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U496 );
                                l_U686[2] = 1;
                            }
                        }
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U496 ))
            {
                if (IS_CHAR_INJURED( l_U496 ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U496 );
                }
            }
            sub_8324( l_U497[l_U486] );
            sub_18720();
            sub_23232();
            sub_24292();
            sub_24668();
            sub_24964( l_U490[l_U486] );
            sub_25177();
            sub_25886();
            sub_27296();
            if (l_U683)
            {
                sub_30106();
                sub_45166( l_U497[l_U486] );
            }
            sub_45331();
            if (l_U916)
            {
                sub_6439( 1 );
            }
            break;
        }
    }
    return;
}

void sub_544()
{
    sub_553();
    return;
}

void sub_553()
{
    int iVar2;

    iVar2 = 4;
    sub_567( iVar2 );
    sub_1743( iVar2 );
    return;
}

void sub_567(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_611();
        sub_772();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_880();
            sub_919();
        }
    }
    sub_995();
    sub_1096();
    uVar5 = sub_1209( uParam0 );
    sub_1650( uVar5, 0 );
    return;
}

void sub_611()
{
    sub_625( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_725();
    }
    return;
}

void sub_625(int iParam0)
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

void sub_725()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_772()
{
    sub_781();
    return;
}

void sub_781()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_880()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_919()
{
    sub_928();
    return;
}

void sub_928()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_995()
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

void sub_1096()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1118();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1118()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1209(unknown uParam0)
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
    sub_1608( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1608(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1650(int iParam0, boolean bParam1)
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

void sub_1743(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1752();
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
        sub_2527();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1752()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1790( 5, g_U569[I] )) == 1))
        {
            if ((sub_1790( 1, g_U569[I] )) != 0)
            {
                sub_2076( I );
            }
        }
    }
    if (NOT sub_2242())
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

int sub_1790(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2076(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2161( g_U569 - 1 );
    return;
}

void sub_2161(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2242()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1790( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2527()
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

void sub_2654()
{
    int I;

    sub_2663();
    if (l_U685)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U640._fU0, l_U640._fU4, l_U640._fU8, l_U637._fU0, l_U637._fU4, l_U637._fU8 );
        l_U685 = 0;
    }
    SWITCH_ROADS_BACK_TO_ORIGINAL( 1356.12400000, -869.40160000, -7.33800000, 1332.86300000, -767.89320000, 18.34270000 );
    CLEAR_WANTED_LEVEL( sub_2919() );
    DONT_SUPPRESS_CAR_MODEL( -810318068 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    for ( l_U487 = 0; l_U487 < 3; l_U487++ )
    {
        if (DOES_BLIP_EXIST( l_U504[l_U487] ))
        {
            REMOVE_BLIP( l_U504[l_U487] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U497[I] );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U490[I] );
    }
    if (DOES_CHAR_EXIST( l_U494 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U494 );
    }
    if (l_U684)
    {
        DESTROY_ALL_CAMS();
        END_CAM_COMMANDS( ref l_U488 );
        l_U684 = 0;
    }
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SWITCH_MAD_DRIVERS( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2663()
{
    if (l_U484)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U482 = 0;
    l_U481 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_2919()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3226()
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3235() ))
    {
        if (((NOT l_U924) AND (IS_CHAR_IN_MODEL( sub_3235(), 1127131465 ))) || ((IS_CHAR_IN_MODEL( sub_3235(), -1900572838 )) || ((IS_CHAR_IN_MODEL( sub_3235(), -350085182 )) || ((IS_CHAR_IN_MODEL( sub_3235(), 148777611 )) || ((IS_CHAR_IN_MODEL( sub_3235(), -1627000575 )) || (IS_CHAR_IN_MODEL( sub_3235(), 2046537925 )))))))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3235(), ref l_U502 );
            if (NOT (l_U502 == l_U501))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U501 );
                l_U501 = l_U502;
            }
            l_U672 = 1;
        }
        else
        {
            l_U672 = 0;
        }
    }
    else
    {
        l_U672 = 0;
    }
    return;
}

void sub_3235()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3533()
{
    LOAD_ADDITIONAL_TEXT( "F1AUD", 6 );
    LOAD_ADDITIONAL_TEXT( "PULOVER", 0 );
    sub_3584( "F1AUD" );
    sub_3711( 0, sub_3235(), "NIKO", 0 );
    sub_3909( ref l_U706, "F1_GETOUT", "F1_T1OUT", "F1_OPEN", "F1_T1BACK" );
    sub_3909( ref l_U723, "F1_GETOUT", "F1_T2OUT", "F1_OPEN", "F1_T2BACK" );
    sub_3909( ref l_U740, "F1_GETOUT", "F1_TVTOUT", "F1_OPEN", "F1_TVTBACK" );
    return;
}

void sub_3584(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3603();
    return;
}

void sub_3603()
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

void sub_3711(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3795( "\n PED NUMBER ", uParam0 );
    sub_3835( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3795(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3835(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3909(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_3952( uParam0, uParam1, uParam2, uParam3, uParam4, "END", "END", "END", "END" );
    return;
}

void sub_3952(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_4356()
{
    int I;

    I = 0;
    for ( I = 0; I <= 2; I++ )
    {
        l_U673[I] = 0;
        l_U677[I] = 0;
        l_U886[I] = 0;
        l_U686[I] = 0;
    }
    return;
}

void sub_4439()
{
    LOAD_SCENE( 957.43560000, -288.84190000, 18.87730000 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U509 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U511 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U766 );
    COPY_COMBAT_DECISION_MAKER( 65546, ref l_U510 );
    SET_CAM_BEHIND_PED( sub_3235() );
    return;
}

void sub_4566()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar2 );
    if (iVar2 <= 50)
    {
        l_U765 = 1;
    }
    else
    {
        l_U765 = 2;
    }
    return;
}

void sub_4677()
{
    switch (l_U799)
    {
        case 0:
        if (g_U9893._fU24)
        {
            ENABLE_SCENE_STREAMING( 0 );
            LOAD_SCENE( 989.44000000, -288.96000000, 20.39000000 );
            CLEAR_AREA( 989.44000000, -288.96000000, 20.39000000, 100.00000000, 0 );
            l_U799 = 1;
        }
        else
        {
            l_U799 = 5;
        }
        break;
        case 1:
        START_CUTSCENE_NOW( "FAU1_A" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "FAU1_A" );
        if (NOT WAS_CUTSCENE_SKIPPED())
        {
            LOAD_SCENE( l_U803._fU0, l_U803._fU4, l_U803._fU8 );
            START_CUTSCENE_NOW( "FAU1_B" );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "FAU1_B" );
            CLEAR_AREA( l_U803._fU0, l_U803._fU4, l_U803._fU8, 100.00000000, 0 );
        }
        g_U15946[25]._fU132._fU0 = 1;
        l_U799 = 5;
        ENABLE_SCENE_STREAMING( 1 );
        break;
        case 3:
        if (HAS_CUTSCENE_LOADED())
        {
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            l_U799 = 5;
        }
        break;
        case 5:
        sub_5168();
        l_U799 = 4;
        break;
        case 4:
        REQUEST_MODEL( 162883121 );
        while (NOT (HAS_MODEL_LOADED( 162883121 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( 162883121, 1328.32900000, -819.01180000, 7.24070000, ref l_U806, 1 );
        SET_CAR_HEADING( l_U806, 270.00000000 );
        CHANGE_CAR_COLOUR( l_U806, 12, 0 );
        SET_CHAR_COORDINATES( sub_3235(), l_U803._fU0, l_U803._fU4, l_U803._fU8 );
        SET_CHAR_HEADING( sub_3235(), 88.48780000 + 180.00000000 );
        SET_CAM_BEHIND_PED( sub_3235() );
        LOAD_ALL_OBJECTS_NOW();
        LOAD_SCENE( l_U803._fU0, l_U803._fU4, l_U803._fU8 );
        DO_SCREEN_FADE_IN( 500 );
        PRINT( "TRKP_F4", 7500, 1 );
        GET_GAME_TIMER( ref l_U801 );
        if (IS_VEH_DRIVEABLE( l_U501 ))
        {
            SWITCH_CAR_SIREN( l_U501, 0 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( 162883121 );
        SET_WANTED_MULTIPLIER( 1.00000000 );
        sub_6179();
        l_U800 = 1;
        l_U799 = 6;
        break;
        case 6: break;
    }
    return;
}

void sub_5168()
{
    REQUEST_MODEL( -46564867 );
    REQUEST_MODEL( -810318068 );
    while ((NOT (HAS_MODEL_LOADED( -810318068 ))) || (NOT (HAS_MODEL_LOADED( -46564867 ))))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "MISSFAUSTIN1" );
    while (NOT (HAVE_ANIMS_LOADED( "MISSFAUSTIN1" )))
    {
        WAIT( 0 );
    }
    REQUEST_CAR_RECORDING( 1726 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 1726 )))
    {
        WAIT( 0 );
    }
    l_U627[0] = {919.14220000, -552.42020000, 13.71790000};
    l_U627[1] = {759.18710000, -467.35070000, 5.92749900};
    l_U627[2] = {880.79290000, -53.88520000, 26.38190000};
    l_U649[0] = 5.68640000;
    l_U649[1] = 0.00000000;
    l_U649[2] = 49.28020000;
    N_1061756705( l_U509, 31 );
    ADD_CHAR_DECISION_MAKER_EVENT_RESPONSE( l_U509, 31, 413, 100, 100, 100, 100, 0, 1 );
    sub_5515( 0, -46564867 );
    sub_5515( 1, -46564867 );
    sub_5515( 2, -46564867 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -46564867 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -810318068 );
    SET_PLAYER_CONTROL( sub_2919(), 1 );
    return;
}

void sub_5515(unknown uParam0, unknown uParam1)
{
    CREATE_CAR( -810318068, l_U627[uParam0]._fU0, l_U627[uParam0]._fU4, l_U627[uParam0]._fU8, ref l_U497[uParam0], 1 );
    SET_CAR_ON_GROUND_PROPERLY( l_U497[uParam0] );
    LOCK_CAR_DOORS( l_U497[uParam0], 3 );
    SET_CAR_HEADING( l_U497[uParam0], l_U649[uParam0] );
    CREATE_CHAR_INSIDE_CAR( l_U497[uParam0], 26, uParam1, ref l_U490[uParam0] );
    SET_CHAR_AS_ENEMY( l_U490[uParam0], 1 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U490[uParam0], 24 );
    SET_CHAR_DECISION_MAKER( l_U490[uParam0], l_U509 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U490[uParam0], 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U490[uParam0] );
    CHANGE_CAR_COLOUR( l_U497[uParam0], 0, 0 );
    SET_VEH_HAS_STRONG_AXLES( l_U497[uParam0], 1 );
    return;
}

void sub_6179()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_6261()
{
    int I;
    boolean bVar3;

    bVar3 = true;
    if (NOT l_U683)
    {
        if (NOT l_U699)
        {
            if (sub_6305( l_U822, l_U802 ))
            {
                for ( I = 0; I <= 2; I++ )
                {
                    if (IS_VEH_DRIVEABLE( l_U497[I] ))
                    {
                        if (IS_CAR_ON_SCREEN( l_U497[I] ))
                        {
                            bVar3 = false;
                            I = 3;
                        }
                    }
                }
                if (bVar3)
                {
                    sub_6439( 3 );
                }
            }
        }
    }
    return;
}

void sub_6305(int iParam0, int iParam1)
{
    int Result;
    int iVar5;
    int iVar6;

    Result = 0;
    GET_GAME_TIMER( ref iVar5 );
    iVar6 = iVar5 - iParam1;
    if (iVar6 > iParam0)
    {
        Result = 1;
    }
    return Result;
}

void sub_6439(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        CLEAR_PRINTS();
        PRINT_NOW( "TRKP_27", 7000, 1 );
        sub_6546( 25, "F1_CFAIL", "F1AUD", 0 );
        break;
        case 1:
        CLEAR_PRINTS();
        PRINT_NOW( "TRKP_26", 7000, 1 );
        sub_6546( 25, "F1_CFAIL", "F1AUD", 0 );
        break;
        case 2:
        CLEAR_PRINTS();
        PRINT_NOW( "TRKP_29", 7000, 1 );
        sub_6546( 25, "F1_CFAIL", "F1AUD", 0 );
        break;
        case 3:
        CLEAR_PRINTS();
        PRINT_NOW( "TRKP_31", 7000, 1 );
        sub_6546( 25, "F1_CFAIL", "F1AUD", 0 );
        break;
        case 4: break;
    }
    sub_7319();
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2919(), 150 );
        SAY_AMBIENT_SPEECH( sub_3235(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_2654();
    return;
}

void sub_6546(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_6590( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_6590(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_7319()
{
    sub_7328();
    return;
}

void sub_7328()
{
    int iVar2;

    iVar2 = 4;
    sub_7342( iVar2 );
    sub_1743( iVar2 );
    return;
}

void sub_7342(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_2919(), 150 );
    CLEAR_HELP();
    sub_567( uParam0 );
    return;
}

void sub_7529()
{
    unknown uVar2;

    REQUEST_MODEL( 2046537925 );
    REQUEST_MODEL( -183203150 );
    while ((NOT (HAS_MODEL_LOADED( -183203150 ))) || (NOT (HAS_MODEL_LOADED( 2046537925 ))))
    {
        WAIT( 0 );
    }
    CREATE_CAR( 2046537925, 1281.12600000, -670.70670000, 11.52760000, ref l_U503, 1 );
    SET_CAR_HEADING( l_U503, 265.41380000 );
    SWITCH_CAR_SIREN( l_U503, 1 );
    CREATE_CHAR_INSIDE_CAR( l_U503, 6, -183203150, ref l_U496 );
    OPEN_SEQUENCE_TASK( ref uVar2 );
    TASK_STAND_STILL( 0, 5000 );
    TASK_CAR_DRIVE_TO_COORD( 0, l_U503, 1331.57100000, -745.09120000, 7.24040000, 10, 0, 2046537925, 2, 5.00000000, -1 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1288.48300000, -761.20620000, 8.21170100, 3, -2, 0.50000000 );
    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1288.58200000, -759.99560000, 7.24900000, 2, -2, 0.50000000 );
    TASK_ENTER_CAR_AS_DRIVER( 0, l_U503, -2 );
    TASK_CAR_DRIVE_WANDER( 0, l_U503, 10, 2 );
    CLOSE_SEQUENCE_TASK( uVar2 );
    TASK_PERFORM_SEQUENCE( l_U496, uVar2 );
    CLEAR_SEQUENCE_TASK( uVar2 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 2046537925 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -183203150 );
    return;
}

void sub_8324(unknown uParam0)
{
    unknown uVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    boolean bVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;

    bVar15 = false;
    sub_8339( uParam0 );
    switch (l_U841)
    {
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U490[l_U486] )))
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U490[l_U486], 29, ref l_U513 );
                if ((IS_CAR_STOPPED( uParam0 )) || (l_U513 == 7))
                {
                    SETTIMERA( 0 );
                    if (NOT (IS_CHAR_INJURED( l_U490[l_U486] )))
                    {
                        CLEAR_CHAR_TASKS( l_U490[l_U486] );
                    }
                    l_U880 = 1;
                    FREEZE_CAR_POSITION( uParam0, 1 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U490[l_U486], -1.30290000, -0.03740000, -1.44890000, ref l_U657, ref l_U658, ref l_U659 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U490[l_U486], -3.50000000, 0.30000000, 0.55000000, ref l_U660, ref l_U661, ref l_U662 );
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U490[l_U486], 0.35000000, 0.45000000, 1.07500000, ref l_U663, ref l_U664, ref l_U665 );
                    l_U841 = 9;
                    if (NOT l_U685)
                    {
                        if (IS_VEH_DRIVEABLE( uParam0 ))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 100.00000000, 100.00000000, 25.00000000, ref l_U637._fU0, ref l_U637._fU4, ref l_U637._fU8 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, -100.00000000, -100.00000000, -25.00000000, ref l_U640._fU0, ref l_U640._fU4, ref l_U640._fU8 );
                            SWITCH_ROADS_OFF( l_U640._fU0, l_U640._fU4, l_U640._fU8, l_U637._fU0, l_U637._fU4, l_U637._fU8 );
                            l_U685 = 1;
                        }
                    }
                    else
                    {
                        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U640._fU0, l_U640._fU4, l_U640._fU8, l_U637._fU0, l_U637._fU4, l_U637._fU8 );
                        l_U685 = 0;
                    }
                }
            }
        }
        break;
        case 9:
        if (IS_VEH_DRIVEABLE( l_U501 ))
        {
            if (IS_CHAR_IN_CAR( sub_3235(), l_U501 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3235(), uParam0, 20.00000000, 20.00000000, 10.00000000, 0 ))
                {
                    if (NOT (IS_CAR_A_MISSION_CAR( l_U501 )))
                    {
                        SET_CAR_AS_MISSION_CAR( l_U501 );
                    }
                    PRINT_NOW( "TRKP_6A", 7500, 1 );
                    if (DOES_BLIP_EXIST( l_U504[0] ))
                    {
                        REMOVE_BLIP( l_U504[0] );
                    }
                    if (DOES_BLIP_EXIST( l_U504[1] ))
                    {
                        REMOVE_BLIP( l_U504[1] );
                    }
                    if (DOES_BLIP_EXIST( l_U504[2] ))
                    {
                        REMOVE_BLIP( l_U504[2] );
                    }
                    l_U841 = 2;
                }
                else
                {
                    PRINT_NOW( "TRKP_6B", 7500, 1 );
                }
            }
            else
            {
                l_U841 = 2;
            }
        }
        else
        {
            l_U841 = 2;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_DEAD( l_U490[l_U486] )))
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_3235() )))
                {
                    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3235() )))
                    {
                        if (sub_9704( 1, 1 ))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U490[l_U486], -1.30290000, -0.03740000, -1.44890000, ref l_U657, ref l_U658, ref l_U659 );
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U490[l_U486], -3.50000000, 0.30000000, 0.55000000, ref l_U660, ref l_U661, ref l_U662 );
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U490[l_U486], 0.35000000, 0.45000000, 1.07500000, ref l_U663, ref l_U664, ref l_U665 );
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U490[l_U486], -3.40000000, 2.50000000, -2.50000000, ref l_U834._fU0, ref l_U834._fU4, ref l_U834._fU8 );
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U490[l_U486], -3.40000000, -2.50000000, 2.50000000, ref l_U837._fU0, ref l_U837._fU4, ref l_U837._fU8 );
                            if (IS_CHAR_IN_ANGLED_AREA_3D( sub_3235(), l_U834._fU0, l_U834._fU4, l_U834._fU8, l_U837._fU0, l_U837._fU4, l_U837._fU8, 3.00000000, 0 ))
                            {
                                CLEAR_CHAR_TASKS( sub_3235() );
                                l_U858 = 0;
                                l_U841 = 12;
                                SET_PLAYER_CONTROL( sub_2919(), 0 );
                                DO_SCREEN_FADE_OUT( 500 );
                            }
                        }
                    }
                }
            }
        }
        break;
        case 12:
        if (IS_SCREEN_FADED_OUT())
        {
            CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
            CLEAR_AREA( l_U657, l_U658, l_U659, 25.00000000, 0 );
            if (NOT l_U684)
            {
                if (l_U488 == 0)
                {
                    BEGIN_CAM_COMMANDS( ref l_U488 );
                    l_U684 = 1;
                }
            }
            if (IS_VEH_DRIVEABLE( l_U501 ))
            {
                SWITCH_CAR_SIREN( l_U501, 0 );
            }
            l_U880 = 0;
            sub_10504( ref uParam0 );
            CREATE_CAM( 14, ref l_U516 );
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                FREEZE_CAR_POSITION( uParam0, 0 );
                SET_USE_HIGHDOF( 1 );
                ATTACH_CAM_TO_VEHICLE( l_U516, uParam0 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U516, 1 );
                SET_CAM_ATTACH_OFFSET( l_U516, 0.77999990, 3.60000000, 0.63000000 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, -2.45000000, 0.00000000, 0.68000000, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                POINT_CAM_AT_COORD( l_U516, uVar10._fU0, uVar10._fU4, uVar10._fU8 );
                SET_CAM_NEAR_DOF( l_U516, 1.00000000 );
                SET_CAM_FAR_DOF( l_U516, 7.00000000 );
                SET_CAM_FOV( l_U516, 43.40000000 );
            }
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                GET_CAR_HEADING( uParam0, ref uVar9 );
            }
            if (NOT (IS_CAR_DEAD( uParam0 )))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, -2.50000000, 0.80000000, 0.40000000, ref l_U874._fU0, ref l_U874._fU4, ref l_U874._fU8 );
                GET_GROUND_Z_FOR_3D_COORD( l_U874._fU0, l_U874._fU4, l_U874._fU8, ref uVar13 );
                SET_CHAR_COORDINATES( sub_3235(), l_U874._fU0, l_U874._fU4, uVar13 );
                SET_CHAR_HEADING( sub_3235(), uVar9 - 90 );
            }
            CLEAR_PRINTS();
            WAIT( 0 );
            if (NOT (IS_CHAR_INJURED( l_U490[l_U486] )))
            {
                if (IS_VEH_DRIVEABLE( uParam0 ))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, -5.20000000, 2.60000000, 0.00000000, ref l_U897._fU0, ref l_U897._fU4, ref l_U897._fU8 );
                    TASK_LOOK_AT_COORD( l_U490[l_U486], l_U897._fU0, l_U897._fU4, l_U897._fU8, 3500, 4 );
                }
                TASK_LOOK_AT_CHAR( sub_3235(), l_U490[l_U486], 3000, 0 );
            }
            REQUEST_ANIMS( "gestures@niko" );
            while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
            {
                WAIT( 0 );
            }
            DO_SCREEN_FADE_IN( 500 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_WIDESCREEN_BORDERS( 1 );
            SET_CAM_ACTIVE( l_U516, 1 );
            SET_CAM_PROPAGATE( l_U516, 1 );
            l_U841 = 3;
        }
        break;
        case 3:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        if (IS_SCREEN_FADED_IN())
        {
            sub_11731( l_U490[l_U486] );
        }
        break;
        case 4:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        if (NOT (IS_CHAR_DEAD( l_U490[l_U486] )))
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                GET_CHAR_HEADING( l_U490[l_U486], ref uVar3 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, -3.40000000, 0.00000000, ref l_U643._fU0, ref l_U643._fU4, ref l_U643._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, -1.50000000, -1.75000000, 0.00000000, ref l_U646._fU0, ref l_U646._fU4, ref l_U646._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, -1.40000000, -3.30000000, 0.00000000, ref l_U860._fU0, ref l_U860._fU4, ref l_U860._fU8 );
                GET_CAR_HEADING( uParam0, ref l_U656 );
                SETTIMERA( 0 );
                l_U841 = 5;
            }
        }
        break;
        case 5:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        if (NOT (IS_CHAR_DEAD( l_U490[l_U486] )))
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                if (TIMERA() > 2000)
                {
                    l_U841 = 6;
                }
            }
        }
        break;
        case 6:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        if (NOT (IS_CHAR_DEAD( l_U490[l_U486] )))
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                SET_ANIM_GROUP_FOR_CHAR( l_U490[l_U486], "MOVE_PLAYER" );
                GET_GROUND_Z_FOR_3D_COORD( l_U643._fU0, l_U643._fU4, l_U643._fU8, ref l_U863 );
                OPEN_SEQUENCE_TASK( ref l_U512 );
                TASK_LEAVE_CAR( 0, uParam0 );
                TASK_GO_STRAIGHT_TO_COORD( 0, l_U643._fU0, l_U643._fU4, l_U863, 2, -2 );
                TASK_CHAR_SLIDE_TO_COORD( 0, l_U643._fU0, l_U643._fU4, l_U863, l_U656, 0.10000000 );
                CLOSE_SEQUENCE_TASK( l_U512 );
                TASK_PERFORM_SEQUENCE( l_U490[l_U486], l_U512 );
                CLEAR_SEQUENCE_TASK( l_U512 );
                l_U841 = 14;
            }
        }
        break;
        case 14:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        if (sub_13660( ref l_U490[l_U486] ))
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, -1.50000000, -3.00000000, 0.00000000, ref l_U877._fU0, ref l_U877._fU4, ref l_U877._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, -1.50000000, -4.50000000, 0.00000000, ref l_U893._fU0, ref l_U893._fU4, ref l_U893._fU8 );
                TASK_GO_STRAIGHT_TO_COORD( sub_3235(), l_U877._fU0, l_U877._fU4, l_U877._fU8, 2, -1 );
                l_U841 = 15;
            }
        }
        if (NOT l_U896)
        {
            if (l_U812)
            {
                if ((IS_VEH_DRIVEABLE( uParam0 )) AND (NOT (IS_CHAR_INJURED( l_U494 ))))
                {
                    GIVE_WEAPON_TO_CHAR( l_U494, 7, 50, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U494, 7, 0 );
                    if (IS_VEH_DRIVEABLE( uParam0 ))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 2.00000000, -2.50000000, 0.00000000, ref l_U845._fU0, ref l_U845._fU4, ref l_U845._fU8 );
                    }
                    OPEN_SEQUENCE_TASK( ref uVar17 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_SWAP_WEAPON( 0, 1 );
                    CLOSE_SEQUENCE_TASK( uVar17 );
                    TASK_PERFORM_SEQUENCE( l_U494, uVar17 );
                    CLEAR_SEQUENCE_TASK( l_U512 );
                    SET_CHAR_IS_TARGET_PRIORITY( l_U494, 1 );
                    if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
                    {
                        LOCK_CAR_DOORS( l_U497[l_U486], 1 );
                    }
                    l_U896 = 1;
                }
            }
        }
        break;
        case 15:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        GET_CHAR_COORDINATES( sub_3235(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_2D( uVar6._fU0, uVar6._fU4, l_U877._fU0, l_U877._fU4, ref fVar5 );
        if ((IS_VEH_DRIVEABLE( uParam0 )) AND (fVar5 < 2.70000000))
        {
            l_U841 = 16;
            SETTIMERA( 0 );
            if (NOT (IS_CHAR_INJURED( l_U490[l_U486] )))
            {
                SET_CHAR_COORDINATES( l_U490[l_U486], l_U643._fU0, l_U643._fU4, l_U863 );
                SET_CHAR_HEADING( l_U490[l_U486], l_U656 );
            }
        }
        break;
        case 16:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        if (NOT bVar15)
        {
            if (NOT (IS_CHAR_INJURED( l_U490[l_U486] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U859 );
                TASK_GO_STRAIGHT_TO_COORD( 0, l_U877._fU0, l_U877._fU4, l_U877._fU8, 2, -1 );
                CLOSE_SEQUENCE_TASK( l_U859 );
                TASK_PERFORM_SEQUENCE( sub_3235(), l_U859 );
                CLEAR_SEQUENCE_TASK( l_U859 );
                bVar15 = true;
            }
        }
        if (NOT l_U856)
        {
            if (TIMERA() > 100)
            {
                if (IS_VEH_DRIVEABLE( uParam0 ))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.60000000, 0.00000000, 0.08000000, ref l_U669, ref l_U670, ref l_U671 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, -1.82000000, -5.20000000, 0.63000000, ref l_U666, ref l_U667, ref l_U668 );
                }
                CREATE_CAM( 14, ref l_U515 );
                SET_CAM_POS( l_U515, l_U666, l_U667, l_U668 );
                POINT_CAM_AT_COORD( l_U515, l_U669, l_U670, l_U671 );
                SET_CAM_FOV( l_U515, 65.80001000 );
                SET_CAM_NEAR_DOF( l_U515, 1.00000000 );
                SET_CAM_FAR_DOF( l_U515, 10.00000000 );
                SET_CAM_ACTIVE( l_U516, 0 );
                SET_CAM_PROPAGATE( l_U516, 0 );
                SET_CAM_ACTIVE( l_U515, 1 );
                SET_CAM_PROPAGATE( l_U515, 1 );
                l_U856 = 1;
                l_U841 = 19;
            }
        }
        break;
        case 19:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        if (TIMERA() > 500)
        {
            if (NOT l_U892)
            {
                if (NOT (IS_CHAR_INJURED( l_U490[l_U486] )))
                {
                    TASK_PLAY_ANIM( l_U490[l_U486], "VAN_OPEN_DOORS", "MISSFAUSTIN1", 8.00000000, 0, 1, 1, 0, -1 );
                    l_U892 = 1;
                }
            }
            if (l_U896)
            {
                if (NOT (IS_CHAR_INJURED( l_U494 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar17 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U845._fU0, l_U845._fU4, l_U845._fU8, 2, -1, 1 );
                    TASK_AIM_GUN_AT_CHAR( 0, sub_3235(), 4000 );
                    CLOSE_SEQUENCE_TASK( uVar17 );
                    TASK_PERFORM_SEQUENCE( l_U494, uVar17 );
                    CLEAR_SEQUENCE_TASK( l_U512 );
                    l_U896 = 0;
                }
            }
        }
        GET_SCRIPT_TASK_STATUS( sub_3235(), 29, ref l_U514 );
        if (l_U514 == 7)
        {
            CLEAR_CHAR_TASKS( sub_3235() );
            GET_GROUND_Z_FOR_3D_COORD( l_U893._fU0, l_U893._fU4, l_U893._fU8, ref uVar14 );
            SET_CHAR_COORDINATES( sub_3235(), l_U893._fU0, l_U893._fU4, uVar14 );
            SET_CHAR_HEADING( sub_3235(), l_U656 - 36 );
            SET_CAM_ACTIVE( l_U515, 0 );
            SET_CAM_PROPAGATE( l_U515, 0 );
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 0.00000000, -1.20000000, ref l_U669, ref l_U670, ref l_U671 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.30000000, -7.10000000, 1.43000000, ref l_U666, ref l_U667, ref l_U668 );
                TASK_LOOK_AT_VEHICLE( sub_3235(), uParam0, 100, 0 );
            }
            CREATE_CAM( 14, ref l_U518 );
            SET_CAM_POS( l_U518, l_U666, l_U667, l_U668 );
            POINT_CAM_AT_COORD( l_U518, l_U669, l_U670, l_U671 );
            SET_CAM_FOV( l_U518, 48 );
            SET_CAM_NEAR_DOF( l_U518, 0.50000000 );
            SET_CAM_FAR_DOF( l_U518, 15.00000000 );
            SET_CAM_ACTIVE( l_U518, 1 );
            SET_CAM_PROPAGATE( l_U518, 1 );
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 0.00000000, -1.20000000, ref l_U669, ref l_U670, ref l_U671 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.30000000, -7.10000000, 1.43000000, ref l_U666, ref l_U667, ref l_U668 );
            }
            l_U841 = 20;
        }
        break;
        case 20:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        if (NOT l_U812)
        {
            if (NOT (sub_15690( l_U700 )))
            {
                if (NOT (IS_CHAR_INJURED( l_U490[l_U486] )))
                {
                    if (NOT l_U892)
                    {
                        TASK_PLAY_ANIM( l_U490[l_U486], "VAN_OPEN_DOORS", "MISSFAUSTIN1", 8.00000000, 0, 1, 1, 0, -1 );
                        l_U892 = 1;
                    }
                    GET_GAME_TIMER( ref l_U890 );
                    l_U489++;
                    if (l_U489 == l_U765)
                    {
                        l_U812 = 1;
                    }
                    sub_16006();
                    SETTIMERA( 0 );
                    l_U841 = 7;
                    bVar15 = false;
                }
            }
        }
        else
        {
            l_U841 = 13;
        }
        break;
        case 13:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        l_U841 = 0;
        break;
        case 0:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        l_U841 = 17;
        break;
        case 17:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        GET_GAME_TIMER( ref l_U900 );
        l_U841 = 18;
        SETTIMERA( 0 );
        break;
        case 18:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        if ((sub_6305( 5000, l_U900 )) || (NOT (IS_CHAR_INJURED( l_U490[l_U486] ))))
        {
            if ((sub_6305( 5000, l_U900 )) || (NOT (IS_CHAR_PLAYING_ANIM( l_U490[l_U486], "MISSFAUSTIN1", "VAN_OPEN_DOORS" ))))
            {
                if ((sub_6305( 5000, l_U900 )) || (NOT sub_16383()))
                {
                    sub_16446( "F1_ATTACKS", ref l_U700, 6, 1 );
                    l_U682 = 1;
                    l_U683 = 1;
                    l_U854 = 1;
                    l_U691[l_U486] = 1;
                    SET_USE_HIGHDOF( 0 );
                    SET_CAM_ACTIVE( l_U518, 0 );
                    SET_CAM_PROPAGATE( l_U518, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    DESTROY_ALL_CAMS();
                    SET_WIDESCREEN_BORDERS( 0 );
                    if (IS_VEH_DRIVEABLE( l_U501 ))
                    {
                        SET_CAR_VISIBLE( l_U501, 1 );
                    }
                    CLEAR_CHAR_TASKS( sub_3235() );
                    SET_CAM_BEHIND_PED( sub_3235() );
                    SET_PLAYER_CONTROL( sub_2919(), 1 );
                    REMOVE_ANIMS( "gestures@niko" );
                    sub_6179();
                    SETTIMERA( 0 );
                    if (IS_VEH_DRIVEABLE( uParam0 ))
                    {
                        FREEZE_CAR_POSITION( uParam0, 0 );
                    }
                    if (l_U684)
                    {
                        END_CAM_COMMANDS( ref l_U488 );
                        l_U684 = 0;
                    }
                    l_U841 = 10;
                }
            }
        }
        break;
        case 10:
        if (TIMERA() > 100)
        {
            if (NOT (IS_CHAR_INJURED( l_U490[l_U486] )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U490[l_U486], 0 );
                SET_COMBAT_DECISION_MAKER( l_U490[l_U486], l_U766 );
                TASK_COMBAT( l_U490[l_U486], sub_3235() );
            }
            if (NOT (IS_CHAR_INJURED( l_U494 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U494, 0 );
                TASK_TOGGLE_DUCK( l_U494, 0 );
                TASK_COMBAT( l_U494, sub_3235() );
            }
            l_U841 = 11;
            SET_WANTED_MULTIPLIER( 1.00000000 );
        }
        break;
        case 11:
        if ((IS_CHAR_INJURED( l_U490[l_U486] )) AND (IS_CHAR_INJURED( l_U494 )))
        {
            l_U841 = 21;
            l_U683 = 1;
        }
        if (l_U812)
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                if (IS_CHAR_IN_CAR( sub_3235(), uParam0 ))
                {
                    l_U683 = 1;
                    l_U841 = 21;
                }
            }
        }
        break;
        case 7:
        CLEAR_AREA_OF_CARS( l_U657, l_U658, l_U659, 200 );
        l_U691[l_U486] = 1;
        l_U856 = 0;
        if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
        {
            LOCK_CAR_DOORS( l_U497[l_U486], 1 );
        }
        if (NOT (IS_CHAR_DEAD( l_U490[l_U486] )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U490[l_U486], "MISSFAUSTIN1", "VAN_OPEN_DOORS" ))
            {
                if (NOT l_U855)
                {
                    SET_CHAR_ANIM_SPEED( l_U490[l_U486], "MISSFAUSTIN1", "VAN_OPEN_DOORS", 0.75000000 );
                    GET_CHAR_ANIM_CURRENT_TIME( l_U490[l_U486], "MISSFAUSTIN1", "VAN_OPEN_DOORS", ref fVar4 );
                    if (fVar4 > 0.50000000)
                    {
                        sub_16446( "F1_EMPTY", ref l_U700, 6, 1 );
                        l_U855 = 1;
                    }
                }
            }
            else if (l_U892)
            {
                l_U891 = 1;
            }
        }
        if (TIMERA() > 10000)
        {
            l_U891 = 1;
        }
        if (l_U891)
        {
            if (NOT (IS_CHAR_DEAD( l_U490[l_U486] )))
            {
                if (IS_VEH_DRIVEABLE( uParam0 ))
                {
                    if (HAS_MODEL_LOADED( l_U885 ))
                    {
                        sub_17541();
                        SET_USE_HIGHDOF( 0 );
                        SET_CAM_ACTIVE( l_U515, 0 );
                        SET_CAM_PROPAGATE( l_U515, 0 );
                        SET_WIDESCREEN_BORDERS( 0 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        DESTROY_ALL_CAMS();
                        if (IS_VEH_DRIVEABLE( l_U501 ))
                        {
                            SET_CAR_VISIBLE( l_U501, 1 );
                        }
                        SET_CAM_BEHIND_PED( sub_3235() );
                        CLEAR_CHAR_TASKS( sub_3235() );
                        SET_PLAYER_CONTROL( sub_2919(), 1 );
                        l_U818 = 1;
                        l_U817 = 0;
                        GET_GAME_TIMER( ref uVar16 );
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        sub_6179();
                        l_U682 = 1;
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, -1.45000000, -5.00000000, 0.00000000, ref uVar18._fU0, ref uVar18._fU4, ref uVar18._fU8 );
                        OPEN_SEQUENCE_TASK( ref l_U512 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar18._fU0, uVar18._fU4, uVar18._fU8, 2, 5000, 0.10000000 );
                        TASK_ENTER_CAR_AS_DRIVER( 0, uParam0, 30000 );
                        TASK_CAR_DRIVE_WANDER( 0, uParam0, 20.00000000, 6 );
                        CLOSE_SEQUENCE_TASK( l_U512 );
                        TASK_PERFORM_SEQUENCE( l_U490[l_U486], l_U512 );
                        CLEAR_SEQUENCE_TASK( l_U512 );
                        SET_CHAR_KEEP_TASK( l_U490[l_U486], 1 );
                        l_U699 = 0;
                        l_U841 = 8;
                        l_U855 = 0;
                        l_U886[l_U486] = 1;
                        l_U891 = 0;
                        l_U892 = 0;
                        if (l_U684)
                        {
                            END_CAM_COMMANDS( ref l_U488 );
                            l_U684 = 0;
                        }
                    }
                }
            }
        }
        break;
        case 8:
        if (sub_6305( 15000, uVar16 ))
        {
            if (l_U685)
            {
                SWITCH_ROADS_BACK_TO_ORIGINAL( l_U640._fU0, l_U640._fU4, l_U640._fU8, l_U637._fU0, l_U637._fU4, l_U637._fU8 );
                l_U685 = 0;
            }
        }
        if (l_U672)
        {
            l_U841 = 21;
            PRINT( "TRKP_16", 7500, 1 );
            l_U840 = 0;
            if (l_U685)
            {
                SWITCH_ROADS_BACK_TO_ORIGINAL( l_U640._fU0, l_U640._fU4, l_U640._fU8, l_U637._fU0, l_U637._fU4, l_U637._fU8 );
                l_U685 = 0;
            }
        }
        else if (NOT (sub_15690( l_U700 )))
        {
            if (NOT l_U857)
            {
                l_U857 = 1;
            }
        }
        break;
        case 21: break;
    }
    if (NOT (IS_CHAR_INJURED( l_U494 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U494, sub_3235(), 0 ))
        {
            if (NOT l_U854)
            {
                sub_6439( 0 );
            }
        }
    }
    return;
}

void sub_8339(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int I;

    if (l_U858)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_CAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3235(), uVar3._fU0, uVar3._fU4, uVar3._fU8, 100.00000000, 100.00000000, 50.00000000, 0 )))
            {
                if (NOT (IS_CAR_ON_SCREEN( uParam0 )))
                {
                    for ( I = 0; I <= 2; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U490[I] ))
                        {
                            DELETE_CHAR( ref l_U490[I] );
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U494 ))
                    {
                        DELETE_CHAR( ref l_U494 );
                    }
                    for ( I = 0; I <= 2; I++ )
                    {
                        if (DOES_VEHICLE_EXIST( l_U497[I] ))
                        {
                            DELETE_CAR( ref l_U497[I] );
                        }
                    }
                    sub_6439( 2 );
                    l_U858 = 0;
                }
            }
        }
    }
    return;
}

int sub_9704(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3235() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3235(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3235() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3235(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3235()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3235() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3235() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2919() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2919() )))
    {
        return 0;
    }
    return 1;
}

void sub_10504(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( (uParam0^), 0.00000000, -4.00000000, 0.00000000, ref l_U870._fU0, ref l_U870._fU4, ref l_U870._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( (uParam0^), -4.00000000, 0.00000000, 0.00000000, ref l_U867._fU0, ref l_U867._fU4, ref l_U867._fU8 );
        if (IS_VEH_DRIVEABLE( l_U501 ))
        {
            if (LOCATE_CAR_3D( l_U501, l_U867._fU0, l_U867._fU4, l_U867._fU8, 5.00000000, 5.00000000, 4.00000000, 0 ))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( (uParam0^), 0.00000000, -10.00000000, 0.00000000, ref l_U864._fU0, ref l_U864._fU4, ref l_U864._fU8 );
                GET_GROUND_Z_FOR_3D_COORD( l_U864._fU0, l_U864._fU4, l_U864._fU8, ref l_U873 );
                SET_CAR_COORDINATES( l_U501, l_U864._fU0, l_U864._fU4, l_U873 );
                SET_CAR_VISIBLE( l_U501, 0 );
            }
            if (LOCATE_CAR_3D( l_U501, l_U870._fU0, l_U870._fU4, l_U870._fU8, 5.00000000, 5.00000000, 4.00000000, 0 ))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( (uParam0^), 0.00000000, -10.00000000, 0.00000000, ref l_U864._fU0, ref l_U864._fU4, ref l_U864._fU8 );
                GET_GROUND_Z_FOR_3D_COORD( l_U864._fU0, l_U864._fU4, l_U864._fU8, ref l_U873 );
                SET_CAR_COORDINATES( l_U501, l_U864._fU0, l_U864._fU4, l_U873 );
                SET_CAR_VISIBLE( l_U501, 0 );
            }
        }
        else
        {
            DELETE_CAR( ref l_U501 );
        }
    }
    return;
}

void sub_11731(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (sub_11755())
        {
            if (NOT l_U812)
            {
                if (l_U486 == 0)
                {
                    sub_3711( 1, uParam0, "TRUCKER_1", 0 );
                    sub_11893( ref l_U706, ref l_U700, 6, 1 );
                }
                if (l_U486 == 1)
                {
                    sub_3711( 2, uParam0, "TRUCKER_2", 0 );
                    sub_11893( ref l_U723, ref l_U700, 6, 1 );
                }
                if (l_U486 == 2)
                {
                    sub_3711( 2, uParam0, "TRUCKER_2", 0 );
                    sub_11893( ref l_U723, ref l_U700, 6, 1 );
                }
            }
            else
            {
                sub_3711( 3, uParam0, "TV_TRUCKER", 0 );
                sub_11893( ref l_U740, ref l_U700, 6, 1 );
            }
            l_U695[l_U486] = 1;
            l_U841 = 4;
        }
    }
    return;
}

void sub_11755()
{
    return sub_11766( 1, 1 );
}

int sub_11766(boolean bParam0, unknown uParam1)
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

void sub_11893(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_11916( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_11916(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_11943( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_11943(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_11965( iParam1 )))
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
    sub_12657( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_11965(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_12042( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_12042( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_12042( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_12042(unknown uParam0)
{
    return;
}

void sub_12657(int iParam0, int iParam1)
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

void sub_13660(unknown uParam0)
{
    int Result;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( (uParam0^), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    GET_DISTANCE_BETWEEN_COORDS_2D( l_U646._fU0, l_U646._fU4, uVar4._fU0, uVar4._fU4, ref fVar7 );
    if (fVar7 < 0.90000000)
    {
        Result = 1;
        SET_CHAR_COORDINATES( (uParam0^), l_U643._fU0, l_U643._fU4, l_U863 );
        SET_CHAR_HEADING( (uParam0^), l_U656 );
    }
    return Result;
}

int sub_15690(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_12042( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_12042( "\n speech is not playing" );
    }
    return 0;
}

void sub_16006()
{
    if (NOT l_U812)
    {
        REQUEST_MODEL( 501136335 );
        l_U885 = 501136335;
    }
    else
    {
        REQUEST_MODEL( 186619473 );
        l_U885 = 186619473;
    }
    return;
}

void sub_16383()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_16446(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_16469( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_16469(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_11943( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_17541()
{
    int I;

    if (HAS_MODEL_LOADED( l_U885 ))
    {
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT l_U808[I])
            {
                if (DOES_CHAR_EXIST( l_U490[I] ))
                {
                    DELETE_CHAR( ref l_U490[I] );
                }
                sub_17637( I, l_U885 );
                if (NOT (IS_CHAR_DEAD( l_U490[I] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U497[I] ))
                    {
                        SET_CAR_COORDINATES( l_U497[I], l_U627[I]._fU0, l_U627[I]._fU4, l_U627[I]._fU8 );
                        SET_CAR_HEADING( l_U497[I], l_U649[I] );
                        TASK_PERFORM_SEQUENCE( l_U490[I], l_U881[I] );
                    }
                }
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U885 );
    }
    return;
}

void sub_17637(unknown uParam0, unknown uParam1)
{
    if (IS_VEH_DRIVEABLE( l_U497[uParam0] ))
    {
        CREATE_CHAR_INSIDE_CAR( l_U497[uParam0], 26, uParam1, ref l_U490[uParam0] );
    }
    SET_CHAR_AS_ENEMY( l_U490[uParam0], 1 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U490[uParam0], 24 );
    SET_CHAR_DECISION_MAKER( l_U490[uParam0], l_U509 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U490[uParam0], 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U490[uParam0] );
    while (NOT (DOES_CHAR_EXIST( l_U490[uParam0] )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_18720()
{
    if (l_U672)
    {
        if (NOT l_U922)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_2919(), 0 )))
                {
                    if (sub_18802( 25, "F1_CDIM3", "F1AUD" ))
                    {
                        CLEAR_PRINTS();
                        l_U922 = 1;
                    }
                }
            }
        }
    }
    if (NOT l_U814)
    {
        switch (sub_22675())
        {
            case 0: break;
            case 6:
            if (l_U921)
            {
                if ((NOT CAN_PHONE_BE_SEEN_ON_SCREEN()) || (sub_22799( 0 )))
                {
                    if (sub_23074())
                    {
                        if (l_U923)
                        {
                            l_U814 = 1;
                        }
                        else
                        {
                            l_U814 = 0;
                            l_U922 = 0;
                        }
                    }
                    else
                    {
                        l_U814 = 1;
                    }
                }
            }
            else
            {
                l_U922 = 0;
            }
            break;
            case 2:
            case 1:
            l_U922 = 0;
            break;
            case 3:
            if (sub_23176() == 2)
            {
                l_U923 = 1;
            }
            l_U921 = 1;
            break;
        }
    }
    return;
}

void sub_18802(unknown uParam0, unknown uParam1, unknown uParam2)
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

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_18860( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_18860(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_12042( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_12042( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_2919() )))
    {
        sub_12042( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3235() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3235() )))
    {
        sub_12042( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_12042( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_19375()))
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
                sub_12042( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_19375()))
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
    sub_20747( uParam0, ref g_U91._fU176 );
    sub_22128( ref g_U91._fU160 );
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
        sub_3835( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_19375()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_19432())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_19432()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_2919() )))
    {
        sub_12042( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_12042( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_12042( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_12042( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_2919() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3235() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3235(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_12042( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3235() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_12042( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_12042( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2919() )))
    {
        sub_12042( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_20747(int iParam0, unknown uParam1)
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

void sub_22128(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_22675()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_22799(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_3235(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_12042( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_23074()
{
    return g_U91._fU504;
}

void sub_23176()
{
    return GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
}

void sub_23232()
{
    int I;

    I = 0;
    switch (l_U816)
    {
        case 0:
        if (l_U814)
        {
            if (NOT l_U683)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_2919(), 0 )))
                {
                    if (NOT l_U699)
                    {
                        if (l_U672)
                        {
                            if (l_U814)
                            {
                                if (NOT l_U813)
                                {
                                    GET_GAME_TIMER( ref l_U802 );
                                    l_U813 = 1;
                                }
                                CLEAR_PRINTS();
                                if (NOT l_U812)
                                {
                                    PRINT_NOW( "TRKP_MC", 7500, 1 );
                                }
                                else if (l_U765 == 2)
                                {
                                    PRINT_NOW( "TRKP_MCS", 7500, 1 );
                                }
                                else
                                {
                                    PRINT_NOW( "TRKP_MC", 7500, 1 );
                                }
                                l_U816 = 7;
                            }
                            l_U818 = 0;
                        }
                        else
                        {
                            l_U816 = 1;
                            if (l_U818)
                            {
                                if (NOT l_U817)
                                {
                                    GET_GAME_TIMER( ref l_U815 );
                                    l_U817 = 1;
                                }
                            }
                        }
                    }
                }
                else
                {
                    l_U816 = 1;
                }
            }
        }
        break;
        case 7:
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT l_U808[I])
            {
                if (NOT (DOES_BLIP_EXIST( l_U504[I] )))
                {
                    ADD_BLIP_FOR_CAR( l_U497[I], ref l_U504[I] );
                    SET_BLIP_AS_FRIENDLY( l_U504[I], 1 );
                }
            }
        }
        l_U816 = 4;
        break;
        case 1:
        for ( I = 0; I <= 2; I++ )
        {
            if (DOES_BLIP_EXIST( l_U504[I] ))
            {
                REMOVE_BLIP( l_U504[I] );
            }
        }
        if (IS_WANTED_LEVEL_GREATER( sub_2919(), 0 ))
        {
            l_U816 = 2;
        }
        else if (NOT l_U672)
        {
            l_U816 = 5;
        }
        break;
        case 5:
        if (l_U818)
        {
            if (sub_6305( 20000, l_U815 ))
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_NOW( "TRKP_F4", 7500, 1 );
                }
                l_U818 = 0;
            }
        }
        l_U816 = 6;
        break;
        case 2:
        if (IS_WANTED_LEVEL_GREATER( sub_2919(), 0 ))
        {
            if (NOT sub_16383())
            {
                if (NOT sub_23931())
                {
                    PRINT_NOW( "TRKP_33", 7500, 1 );
                    l_U816 = 3;
                }
            }
        }
        else
        {
            l_U816 = 0;
        }
        break;
        case 3:
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_2919(), 0 )))
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT l_U672)
                {
                    PRINT_NOW( "TRKP_F4", 7500, 1 );
                }
            }
            l_U816 = 0;
        }
        break;
        case 4:
        if (NOT l_U699)
        {
            if (IS_WANTED_LEVEL_GREATER( sub_2919(), 0 ))
            {
                l_U816 = 1;
            }
            else if (NOT l_U672)
            {
                l_U816 = 0;
            }
        }
        else
        {
            l_U816 = 0;
        }
        break;
        case 6:
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_2919(), 0 )))
        {
            if (l_U818)
            {
                if (sub_6305( 20000, l_U815 ))
                {
                    PRINT_NOW( "TRKP_F4", 7500, 1 );
                    l_U818 = 0;
                }
            }
            if (l_U672)
            {
                l_U816 = 0;
            }
        }
        else
        {
            l_U816 = 2;
        }
        break;
    }
    return;
}

int sub_23931()
{
    if ((g_U91._fU0 == 1008) || (g_U91._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

void sub_24292()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U497[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U497[I] ))
            {
                GET_CAR_HEALTH( l_U497[I], ref l_U917[I] );
                if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U497[I], sub_3235() ))
                {
                    if ((IS_CHAR_SHOOTING( sub_3235() )) || (l_U917[I] < 900))
                    {
                        if (NOT l_U691[I])
                        {
                            if (NOT (IS_CHAR_INJURED( l_U490[I] )))
                            {
                                if (IS_VEH_DRIVEABLE( l_U497[I] ))
                                {
                                    TASK_CAR_DRIVE_WANDER( l_U490[I], l_U497[I], 25.00000000, 3 );
                                    SET_CHAR_KEEP_TASK( l_U490[I], 1 );
                                }
                            }
                            if (NOT l_U683)
                            {
                                sub_6439( 0 );
                            }
                        }
                    }
                    CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U497[I] );
                }
            }
            else if (NOT l_U691[I])
            {
                if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U497[I], sub_3235() ))
                {
                    if (NOT l_U683)
                    {
                        sub_6439( 0 );
                    }
                    else
                    {
                        sub_6439( 1 );
                    }
                }
            }
        }
    }
    return;
}

void sub_24668()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U490[I] ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U490[I], sub_3235(), 0 ))
            {
                if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_WEAPON( l_U490[I], 54 )))
                {
                    if (NOT l_U691[I])
                    {
                        if (NOT (IS_CHAR_INJURED( l_U490[I] )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U490[I], 0 );
                        }
                        sub_6439( 0 );
                    }
                }
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U490[I] );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U490[I] )))
        {
            if (IS_VEH_DRIVEABLE( l_U497[I] ))
            {
                if (NOT l_U695[I])
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U490[I], l_U497[I] )))
                    {
                        sub_6439( 0 );
                    }
                }
            }
        }
    }
    return;
}

void sub_24964(unknown uParam0)
{
    float fVar3;

    GET_GAME_TIMER( ref l_U890 );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_PLAYING_ANIM( uParam0, "MISSFAUSTIN1", "VAN_OPEN_DOORS" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( uParam0, "MISSFAUSTIN1", "VAN_OPEN_DOORS", ref fVar3 );
            if ((fVar3 < 0.99000000) AND (fVar3 > 0.16000000))
            {
                l_U673[l_U486] = 1;
                l_U681 = 1;
            }
            if ((fVar3 < 0.99000000) AND (fVar3 > 0.65000000))
            {
                l_U677[l_U486] = 1;
                l_U681 = 1;
            }
        }
    }
    return;
}

void sub_25177()
{
    if (l_U681)
    {
        if (l_U673[l_U486])
        {
            if (l_U903 < 1.00000000)
            {
                l_U904 += l_U901;
                l_U903 += l_U904;
                if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
                {
                    CONTROL_CAR_DOOR( l_U497[l_U486], 2, 1, l_U903 );
                }
            }
            if (l_U903 >= 1.00000000)
            {
                l_U903 = 1.00000000;
                CONTROL_CAR_DOOR( l_U497[l_U486], 2, 1, l_U903 );
                l_U673[l_U486] = 0;
            }
        }
        if (l_U677[l_U486])
        {
            if (l_U905 < 1.00000000)
            {
                l_U906 += l_U901;
                l_U905 += l_U906;
                if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
                {
                    CONTROL_CAR_DOOR( l_U497[l_U486], 3, 1, l_U905 );
                }
            }
            if (l_U905 >= 1.00000000)
            {
                l_U905 = 1.00000000;
                CONTROL_CAR_DOOR( l_U497[l_U486], 3, 1, l_U905 );
                l_U677[l_U486] = 0;
            }
        }
        if ((l_U903 == 1.00000000) AND (l_U905 == 1.00000000))
        {
            l_U681 = 0;
            l_U904 = 0.05500000;
            l_U906 = 0.08000000;
            l_U902 = 1.00000000;
        }
    }
    if (l_U682)
    {
        if (l_U902 > 0.00000000)
        {
            l_U902 -= 0.02500000;
            if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
            {
                CONTROL_CAR_DOOR( l_U497[l_U486], 3, 1, l_U902 );
                CONTROL_CAR_DOOR( l_U497[l_U486], 2, 1, l_U902 );
            }
        }
        if (l_U902 <= 0.00000000)
        {
            if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
            {
                SET_CAR_DOOR_LATCHED( l_U497[l_U486], 3, 1, 0 );
                SET_CAR_DOOR_LATCHED( l_U497[l_U486], 2, 1, 0 );
            }
            l_U902 = 0.00000000;
            l_U904 = 0.02000000;
            l_U906 = 0.05000000;
            l_U682 = 0;
            l_U905 = 0.00000000;
            l_U903 = 0.00000000;
        }
    }
    return;
}

void sub_25886()
{
    int I;

    I = 0;
    if (NOT l_U907)
    {
        l_U519[0] = {916.16740000, -518.50080000, 14.42340000};
        l_U519[1] = {946.06450000, -396.30970000, 15.96910000};
        l_U519[2] = {1032.02400000, -459.15280000, 14.69500000};
        l_U519[3] = {1089.13900000, -513.23080000, 12.78230000};
        l_U519[4] = {988.98960000, -565.89860000, 14.05940000};
        l_U550[0] = {769.85060000, -414.95790000, 5.66090000};
        l_U550[1] = {794.95030000, -262.54910000, 14.29240000};
        l_U550[2] = {831.56270000, -271.81210000, 15.22250000};
        l_U550[3] = {832.63490000, -419.28220000, 13.54590000};
        l_U581[0] = {877.06120000, 27.68950000, 26.45750000};
        l_U581[1] = {963.53190000, -40.93730000, 23.09930000};
        l_U581[2] = {963.75100000, -204.31430000, 21.68350000};
        l_U581[3] = {915.13570000, -122.65150000, 26.01380000};
        l_U581[4] = {848.16410000, -14.80700000, 24.86170000};
        OPEN_SEQUENCE_TASK( ref l_U881[0] );
        SET_SEQUENCE_TO_REPEAT( l_U881[0], 1 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[0], l_U519[0]._fU0, l_U519[0]._fU4, l_U519[0]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[0], l_U519[1]._fU0, l_U519[1]._fU4, l_U519[1]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[0], l_U519[2]._fU0, l_U519[2]._fU4, l_U519[2]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[0], l_U519[3]._fU0, l_U519[3]._fU4, l_U519[3]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[0], l_U519[4]._fU0, l_U519[4]._fU4, l_U519[4]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        CLOSE_SEQUENCE_TASK( l_U881[0] );
        OPEN_SEQUENCE_TASK( ref l_U881[1] );
        SET_SEQUENCE_TO_REPEAT( l_U881[1], 1 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[1], l_U550[0]._fU0, l_U550[0]._fU4, l_U550[0]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[1], l_U550[1]._fU0, l_U550[1]._fU4, l_U550[1]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[1], l_U550[2]._fU0, l_U550[2]._fU4, l_U550[2]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[1], l_U550[3]._fU0, l_U550[3]._fU4, l_U550[3]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        CLOSE_SEQUENCE_TASK( l_U881[1] );
        OPEN_SEQUENCE_TASK( ref l_U881[2] );
        SET_SEQUENCE_TO_REPEAT( l_U881[2], 1 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[2], l_U581[0]._fU0, l_U581[0]._fU4, l_U581[0]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[2], l_U581[1]._fU0, l_U581[1]._fU4, l_U581[1]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[2], l_U581[2]._fU0, l_U581[2]._fU4, l_U581[2]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[2], l_U581[3]._fU0, l_U581[3]._fU4, l_U581[3]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U497[2], l_U581[4]._fU0, l_U581[4]._fU4, l_U581[4]._fU8, 10.00000000, 0, 0, 0, 15, 10 );
        CLOSE_SEQUENCE_TASK( l_U881[2] );
        for ( I = 0; I <= 2; I++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U490[I] )))
            {
                if (IS_VEH_DRIVEABLE( l_U497[I] ))
                {
                    TASK_PERFORM_SEQUENCE( l_U490[I], l_U881[I] );
                }
            }
        }
        l_U907 = 1;
    }
    return;
}

void sub_27296()
{
    int I;
    int iVar3;

    iVar3 = 0;
    if (NOT (IS_WANTED_LEVEL_GREATER( sub_2919(), 0 )))
    {
        switch (l_U840)
        {
            case 0:
            if (l_U814)
            {
                for ( I = 0; I <= 2; I++ )
                {
                    if (NOT (IS_CHAR_DEAD( l_U490[I] )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U497[I] ))
                        {
                            if (l_U672)
                            {
                                if (NOT l_U808[I])
                                {
                                    if (l_U812)
                                    {
                                        if (LOCATE_CHAR_IN_CAR_CAR_3D( sub_3235(), l_U497[I], 50.00000000, 50.00000000, 20.00000000, 0 ))
                                        {
                                            sub_27522( l_U497[I] );
                                            sub_27734( l_U497[I] );
                                        }
                                    }
                                    if (LOCATE_CHAR_IN_CAR_CAR_3D( sub_3235(), l_U497[I], 25.00000000, 25.00000000, 5.00000000, 0 ))
                                    {
                                        if (NOT l_U909)
                                        {
                                            sub_27896( ref l_U490[I] );
                                            l_U909 = 1;
                                        }
                                        l_U913 = 0;
                                        GET_GAME_TIMER( ref l_U912 );
                                        l_U486 = I;
                                        PRINT_NOW( "TRKP_20", 7500, 1 );
                                        SETTIMERA( 0 );
                                        l_U840 = 1;
                                        iVar3 = 1;
                                    }
                                    if (NOT l_U808[I])
                                    {
                                        sub_28667( l_U497[I], ref I );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (l_U909)
            {
                if (iVar3 == 0)
                {
                    sub_2663();
                    l_U909 = 0;
                }
            }
            break;
            case 1:
            sub_27896( ref l_U490[l_U486] );
            if (l_U913)
            {
                if (sub_6305( 15000, l_U912 ))
                {
                    l_U913 = 0;
                }
            }
            if (TIMERA() > 1000)
            {
                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRKP_PS" )))
                {
                    if (IS_VEH_DRIVEABLE( l_U501 ))
                    {
                        if (NOT (IS_CAR_SIREN_ON( l_U501 )))
                        {
                            if (NOT l_U913)
                            {
                                PRINT_HELP( "TRKP_PS" );
                                l_U913 = 1;
                                GET_GAME_TIMER( ref l_U912 );
                            }
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U501 ))
            {
                if (IS_CAR_SIREN_ON( l_U501 ))
                {
                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TRKP_PS" ))
                    {
                        CLEAR_HELP();
                    }
                    if (NOT l_U807)
                    {
                        PRINT_NOW( "TRKP_23", 7500, 1 );
                        l_U807 = 1;
                    }
                    GENERATE_RANDOM_INT_IN_RANGE( 4000, 6000, ref l_U908 );
                    l_U840 = 2;
                    SETTIMERA( 0 );
                }
                else if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
                {
                    if (NOT (LOCATE_CHAR_IN_CAR_CAR_3D( sub_3235(), l_U497[l_U486], 25.00000000, 25.00000000, 5.00000000, 0 )))
                    {
                        l_U840 = 0;
                    }
                }
            }
            break;
            case 2:
            sub_27896( ref l_U490[I] );
            if (IS_VEH_DRIVEABLE( l_U501 ))
            {
                if (IS_CAR_SIREN_ON( l_U501 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
                    {
                        if (LOCATE_CHAR_IN_CAR_CAR_3D( sub_3235(), l_U497[l_U486], 30.00000000, 30.00000000, 5.00000000, 0 ))
                        {
                            if (IS_CAR_STOPPED( l_U497[l_U486] ))
                            {
                                l_U908 = 1000;
                            }
                            if (NOT (LOCATE_CAR_3D( l_U497[l_U486], 774.77190000, -392.97450000, 6.24190000, 7.00000000, 10.00000000, 5.00000000, 0 )))
                            {
                                if (TIMERA() > l_U908)
                                {
                                    if (NOT (IS_CHAR_DEAD( l_U490[l_U486] )))
                                    {
                                        SET_WANTED_MULTIPLIER( 0.00000000 );
                                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U497[l_U486], 2.00000000, 15.00000000, 0.00000000, ref l_U653, ref l_U654, ref l_U655 );
                                        OPEN_SEQUENCE_TASK( ref l_U914 );
                                        TASK_CAR_MISSION( 0, l_U497[l_U486], 0, 21, 10.00000000, 0, -1, -1 );
                                        CLOSE_SEQUENCE_TASK( l_U914 );
                                        TASK_PERFORM_SEQUENCE( l_U490[l_U486], l_U914 );
                                        CLEAR_SEQUENCE_TASK( l_U914 );
                                        l_U808[l_U486] = 1;
                                        l_U699 = 1;
                                        sub_2663();
                                        l_U841 = 1;
                                        l_U840 = 3;
                                        WAIT( 0 );
                                        l_U858 = 1;
                                    }
                                }
                            }
                        }
                        else
                        {
                            l_U840 = 0;
                        }
                    }
                }
                else
                {
                    l_U840 = 0;
                }
            }
            else
            {
                l_U840 = 0;
            }
            break;
            case 3: break;
        }
    }
    else
    {
        l_U840 = 0;
    }
    return;
}

void sub_27522(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (NOT (DOES_CHAR_EXIST( l_U494 )))
        {
            REQUEST_MODEL( -746428590 );
            REQUEST_MODEL( -111611196 );
            while ((NOT (HAS_MODEL_LOADED( -111611196 ))) || (NOT (HAS_MODEL_LOADED( -746428590 ))))
            {
                WAIT( 0 );
            }
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                CREATE_CHAR_AS_PASSENGER( uParam0, 26, -111611196, 0, ref l_U494 );
                SET_CHAR_AS_ENEMY( l_U494, 1 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U494, 24 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U494, 1 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -111611196 );
            }
        }
    }
    return;
}

void sub_27734(unknown uParam0)
{
    if (DOES_CHAR_EXIST( l_U494 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U494 )))
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U494, uParam0 )))
                {
                    WARP_CHAR_FROM_CAR_TO_CAR( l_U494, uParam0, 0 );
                }
            }
        }
    }
    return;
}

void sub_27896(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U484)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U482))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U483 + 500))
        {
            l_U482 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_28064()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3235() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U483 );
            l_U482 = 1;
            l_U481 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U482) AND (NOT l_U481))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U481 = 1;
        }
    }
    else if (l_U481)
    {
        if (l_U484)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U481 = 0;
    };;;
    return;
}

int sub_28064()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_28667(unknown uParam0, unknown uParam1)
{
    if (l_U812)
    {
        if (LOCATE_CHAR_IN_CAR_CAR_3D( sub_3235(), uParam0, 50.00000000, 50.00000000, 50.00000000, 0 ))
        {
            if (l_U910)
            {
                sub_28732( ref uParam0 );
                l_U911 = (uParam1^);
                l_U910 = 0;
            }
        }
        else if (l_U911 == (uParam1^))
        {
            sub_29066();
            l_U910 = 1;
        }
    }
    return;
}

void sub_28732(unknown uParam0)
{
    int I;

    l_U767[0] = {0.18000000, -0.20000000, 0.30000000};
    l_U780[0] = {0.00000000, 0.00000000, 0.00000000};
    l_U767[1] = {0.05000000, -0.50000000, 0.30000000};
    l_U780[1] = {0.00000000, 0.00000000, 0.00000000};
    l_U767[2] = {-0.10000000, -1.40000000, 0.30000000};
    l_U780[2] = {-1.00000000, 0.00000000, 1.60000000};
    for ( I = 0; I < 3; I++ )
    {
        CREATE_OBJECT_NO_OFFSET( -746428590, l_U767[I]._fU0, l_U767[I]._fU4, l_U767[I]._fU8 - 0.50000000, ref l_U793[I], 1 );
        ATTACH_OBJECT_TO_CAR( l_U793[I], (uParam0^), 0, l_U767[I], l_U780[I] );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( -746428590 );
    return;
}

void sub_29066()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U793[I] ))
        {
            DELETE_OBJECT( ref l_U793[I] );
        }
    }
    return;
}

void sub_30106()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (sub_30115())
    {
        DO_SCREEN_FADE_OUT( 500 );
        l_U819 = 10;
    }
    if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
    {
        if (IS_CHAR_IN_CAR( sub_3235(), l_U497[l_U486] ))
        {
            GET_CHAR_COORDINATES( sub_3235(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            if (NOT (IS_CHAR_INJURED( l_U494 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_2D( l_U494, uVar2._fU0, uVar2._fU4, 100.00000000, 100.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U494 )))
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U494 );
                    }
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U490[l_U486] )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_2D( l_U490[l_U486], uVar2._fU0, uVar2._fU4, 100.00000000, 100.00000000, 0 )))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U490[l_U486] )))
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U490[l_U486] );
                    }
                }
            }
        }
    }
    switch (l_U819)
    {
        case 0:
        if (l_U685)
        {
            SWITCH_ROADS_BACK_TO_ORIGINAL( l_U640._fU0, l_U640._fU4, l_U640._fU8, l_U637._fU0, l_U637._fU4, l_U637._fU8 );
            l_U685 = 0;
        }
        sub_30728();
        l_U819 = 2;
        break;
        case 11:
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 19 ))
        {
            if (IS_VEH_DRIVEABLE( l_U497[0] ))
            {
                if (DOES_CHAR_EXIST( l_U490[0] ))
                {
                    DELETE_CHAR( ref l_U490[0] );
                    WARP_CHAR_INTO_CAR( sub_3235(), l_U497[0] );
                    WAIT( 500 );
                    SET_CHAR_COORDINATES( sub_3235(), 956.69950000, 551.84570000, 22.28250000 );
                    SET_CHAR_HEADING( sub_3235(), 90.00000000 );
                    l_U486 = 0;
                    l_U819 = 2;
                }
            }
        }
        break;
        case 2:
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_2919(), 0 )))
        {
            l_U827 = 0;
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3235(), 917.17250000, 570.09330000, 23.27200000, 50.00000000, 50.00000000, 10.00000000, 0 ))
            {
                if (NOT (IS_GARAGE_OPEN( "QW2MG1" )))
                {
                    OPEN_GARAGE( "QW2MG1" );
                    SET_GARAGE_LEAVE_CAMERA_ALONE( "QW2MG1", 1 );
                }
            }
            if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
            {
                if (IS_CHAR_SITTING_IN_CAR( sub_3235(), l_U497[l_U486] ))
                {
                    if (NOT l_U828)
                    {
                        GET_CAR_CHAR_IS_USING( sub_3235(), ref l_U497[l_U486] );
                        PRINT_NOW( "TRKP_21", 7500, 1 );
                        l_U828 = 1;
                    }
                    if (DOES_BLIP_EXIST( l_U504[l_U486] ))
                    {
                        REMOVE_BLIP( l_U504[l_U486] );
                    }
                    if (NOT (DOES_BLIP_EXIST( l_U508 )))
                    {
                        ADD_BLIP_FOR_COORD( l_U823._fU0, l_U823._fU4, l_U823._fU8, ref l_U508 );
                        SET_ROUTE( l_U508, 1 );
                        PRINT_NOW( "TRKP_21", 7500, 1 );
                    }
                    LOCATE_CHAR_ANY_MEANS_3D( sub_3235(), 917.17250000, 570.09330000, 23.67300000, 2.50000000, 2.50000000, 2.50000000, 1 );
                    if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
                    {
                        if (IS_CHAR_IN_CAR( sub_3235(), l_U497[l_U486] ))
                        {
                            if (IS_CAR_IN_GARAGE_AREA( "QW2MG1", l_U497[l_U486] ))
                            {
                                EXTINGUISH_FIRE_AT_POINT( 917.59090000, 572.87460000, 22.27200000, 25.00000000 );
                                SET_CAR_PROOFS( l_U497[l_U486], 1, 1, 1, 1, 1 );
                                RETUNE_RADIO_TO_STATION_NAME( "off" );
                                SET_PLAYER_CONTROL( sub_2919(), 0 );
                                SET_ROUTE( l_U508, 0 );
                                REMOVE_BLIP( l_U508 );
                                if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
                                {
                                    RETUNE_RADIO_TO_STATION_NAME( "OFF" );
                                    SET_CAR_ENGINE_ON( l_U497[l_U486], 0, 1 );
                                }
                                l_U819 = 3;
                            }
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U508 ))
                {
                    REMOVE_BLIP( l_U508 );
                    SET_ROUTE( l_U508, 0 );
                }
                if (NOT sub_16383())
                {
                    if (NOT (DOES_BLIP_EXIST( l_U504[l_U486] )))
                    {
                        ADD_BLIP_FOR_CAR( l_U497[l_U486], ref l_U504[l_U486] );
                        SET_BLIP_AS_FRIENDLY( l_U504[l_U486], 1 );
                        CLEAR_PRINTS();
                        if (NOT l_U829)
                        {
                            PRINT_NOW( "TRKP_22", 7500, 1 );
                            l_U829 = 1;
                        }
                        else
                        {
                            PRINT_NOW( "TRKP_30", 7500, 1 );
                        }
                    }
                }
            }
        }
        else if (NOT l_U827)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_NOW( "TRKP_33", 7500, 1 );
                if (DOES_BLIP_EXIST( l_U508 ))
                {
                    REMOVE_BLIP( l_U508 );
                    SET_ROUTE( l_U508, 0 );
                }
                if (DOES_BLIP_EXIST( l_U504[l_U486] ))
                {
                    REMOVE_BLIP( l_U504[l_U486] );
                }
                l_U827 = 1;
            }
        }
        break;
        case 3:
        if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
        {
            CLEAR_PRINTS();
            if (NOT l_U684)
            {
                if (l_U488 == 0)
                {
                    BEGIN_CAM_COMMANDS( ref l_U488 );
                    l_U684 = 1;
                }
            }
            CREATE_CAM( 14, ref l_U826 );
            SET_CAM_POS( l_U826, 916.83400000, 559.84420000, 23.16315000 );
            SET_CAM_ROT( l_U826, 2.21562000, 0.00000000, -1.13282700 );
            SET_CAM_ACTIVE( l_U826, 1 );
            SET_CAM_PROPAGATE( l_U826, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            TASK_LEAVE_CAR( sub_3235(), l_U497[l_U486] );
            l_U819 = 7;
        }
        break;
        case 7:
        if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3235(), l_U497[l_U486] )))
            {
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3235(), 1 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( sub_3235(), 915.08070000, 557.85090000, 22.14630000, 2, -1, 0.25000000 );
                CLEAR_AREA( 915.80830000, 566.86300000, 21.27200000, 25.00000000, 0 );
                GET_GAME_TIMER( ref l_U820 );
                l_U821 = 1;
                SETTIMERA( 0 );
                l_U819 = 12;
            }
        }
        break;
        case 12:
        if (TIMERA() > 500)
        {
            if (NOT l_U830)
            {
                SET_CAM_POS( l_U826, 909.68360000, 561.70330000, 22.70485000 );
                SET_CAM_ROT( l_U826, 4.69096700, -0.00000000, -90.00446000 );
                SET_CHAR_COORDINATES( sub_3235(), 915.03000000, 564.74000000, 21.27000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( sub_3235(), 915.05050000, 559.51270000, 22.27200000, 2, -1, 0.25000000 );
                if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
                {
                    SET_CAR_COORDINATES( l_U497[l_U486], 917.70000000, 569.71000000, 21.27000000 );
                }
                l_U830 = 1;
            }
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_3235(), 917.57850000, 569.35920000, 22.27770000, 4.00000000, 8.00000000, 2.00000000, 0 )))
            {
                l_U819 = 8;
                CLOSE_GARAGE( "QW2MG1" );
                SETTIMERA( 0 );
            }
        }
        break;
        case 10:
        if (IS_SCREEN_FADED_OUT())
        {
            if (NOT (IS_GARAGE_CLOSED( "QW2MG1" )))
            {
                CLOSE_GARAGE( "QW2MG1" );
            }
            WAIT( 0 );
            l_U819 = 8;
        }
        break;
        case 8:
        if (IS_SCREEN_FADED_IN())
        {
            GET_SCRIPT_TASK_STATUS( sub_3235(), 27, ref l_U832 );
            if ((l_U832 == 7) || (TIMERA() > 7000))
            {
                if (NOT l_U831)
                {
                    SETTIMERB( 0 );
                    l_U831 = 1;
                }
                if ((TIMERA() > 8000) || (TIMERB() > 100))
                {
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3235(), 0 );
                    SET_CHAR_HEADING( sub_3235(), 270 );
                    SET_CAM_BEHIND_PED( sub_3235() );
                    SET_CAM_ACTIVE( l_U826, 0 );
                    SET_CAM_PROPAGATE( l_U826, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    REMOVE_ANIMS( "gestures@niko" );
                    DESTROY_ALL_CAMS();
                    if (l_U684)
                    {
                        END_CAM_COMMANDS( ref l_U488 );
                        l_U684 = 0;
                    }
                    WAIT( 250 );
                    SET_PLAYER_CONTROL( sub_2919(), 1 );
                    l_U819 = 5;
                }
            }
        }
        else
        {
            SET_CHAR_COORDINATES( sub_3235(), 914.47430000, 558.81770000, 21.27190000 );
            SET_CHAR_HEADING( sub_3235(), 174.65460000 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_ALL_CAMS();
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3235(), 0 );
            SET_CAM_BEHIND_PED( sub_3235() );
            WAIT( 1000 );
            DO_SCREEN_FADE_IN( 750 );
            SET_PLAYER_CONTROL( sub_2919(), 1 );
            if (l_U684)
            {
                END_CAM_COMMANDS( ref l_U488 );
                l_U684 = 0;
            }
            l_U819 = 5;
        }
        break;
        case 5:
        if (IS_VEH_DRIVEABLE( l_U497[l_U486] ))
        {
            if (NOT (IS_CHAR_IN_CAR( sub_3235(), l_U497[l_U486] )))
            {
                if (TIMERA() > 2000)
                {
                    sub_33326();
                }
            }
        }
        break;
        case 9: break;
    }
    return;
}

void sub_30115()
{
    int Result;

    Result = 0;
    if ((IS_SCREEN_FADED_IN()) AND ((sub_30140()) AND (sub_6305( 1500, l_U820 ))))
    {
        if (l_U821)
        {
            Result = 1;
            l_U821 = 0;
        }
    }
    return Result;
}

int sub_30140()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_30728()
{
    int I;

    for ( I = 0; I <= 2; I++ )
    {
        if (I != l_U486)
        {
            if (DOES_VEHICLE_EXIST( l_U497[I] ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U497[I] );
                if (DOES_CHAR_EXIST( l_U490[I] ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U490[I] );
                }
            }
        }
    }
    if (DOES_VEHICLE_EXIST( l_U798 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U798 );
    }
    if (DOES_VEHICLE_EXIST( l_U501 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U501 );
    }
    return;
}

void sub_33326()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    SET_PLAYER_CONTROL( sub_2919(), 1 );
    sub_33358();
    CLEAR_WANTED_LEVEL( sub_2919() );
    sub_44959( 4 );
    sub_6546( 25, "F1_DELIVERED", "F1AUD", 0 );
    sub_2654();
    return;
}

void sub_33358()
{
    sub_33367();
    return;
}

void sub_33367()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_33385();
    sub_33444( iVar2, iVar3, iVar4 );
    return;
}

void sub_33385()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_33444(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 4;
    sub_33476( iVar5, uParam0, uParam1, uParam2, "Contact_5" );
    return;
}

void sub_33476(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_33572( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_33572( ref cVar9 );
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
            sub_33572( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_33572( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_33572( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_33572( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_34149( iParam0, iVar7 );;;
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
                sub_34546( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_34546( 0, 4 );
            }
        }
    }
    if (NOT (sub_34635( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_2919(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_2919() );
    }
    sub_1752();
    bVar27 = true;
    uVar28 = sub_34149( iParam0, iVar7 );
    uVar29 = sub_1209( iParam0 );
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
                sub_44011( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_44441();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_44526( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_44583( iParam0 );
                sub_44622( 0 );
                sub_1650( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_44730();
        }
    }
    if (bParam2)
    {
        sub_44441();
        sub_44818();
        sub_44622( 0 );
    }
    if (bParam3)
    {
        sub_44441();
        sub_44858();
        sub_44622( 0 );
        sub_1650( uVar29, 0 );
    }
    sub_1096();
    return;
}

void sub_33572(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_34149(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1608( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_34546(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_34635(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_34843( uParam1 );
        break;
        case 1:
        bVar8 = sub_36921( uParam1 );
        break;
        case 2:
        bVar8 = sub_37147( uParam1 );
        break;
        case 3:
        bVar8 = sub_37297( uParam1 );
        break;
        case 4:
        bVar8 = sub_37575( uParam1 );
        break;
        case 5:
        bVar8 = sub_37878( uParam1 );
        break;
        case 6:
        bVar8 = sub_38077( uParam1 );
        break;
        case 7:
        bVar8 = sub_38303( uParam1 );
        break;
        case 8:
        bVar8 = sub_38538( uParam1 );
        break;
        case 9:
        bVar8 = sub_38913( uParam1 );
        break;
        case 10:
        bVar8 = sub_39160( uParam1 );
        break;
        case 11:
        bVar8 = sub_39299( uParam1 );
        break;
        case 12:
        bVar8 = sub_39598( uParam1 );
        break;
        case 13:
        bVar8 = sub_39826( uParam1 );
        break;
        case 14:
        bVar8 = sub_40113( uParam1 );
        break;
        case 15:
        bVar8 = sub_40395( uParam1 );
        break;
        case 16:
        bVar8 = sub_40677( uParam1 );
        break;
        case 17:
        bVar8 = sub_40878( uParam1 );
        break;
        case 18:
        bVar8 = sub_40951( uParam1 );
        break;
        case 19:
        bVar8 = sub_41165( uParam1 );
        break;
        case 20:
        bVar8 = sub_41418( uParam1 );
        break;
        case 21:
        bVar8 = sub_41665( uParam1 );
        break;
        case 22:
        bVar8 = sub_41866( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_36526( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_34149( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_42189( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_34843(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_35122( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_35122( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_35122( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_35122( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_35122( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_35122( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_35122( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_35122( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_35122( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_35122( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_35122( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_35122( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_35122( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_35122( iVar3, 0, 3, 1, 0, 0 );
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
        sub_35122( iVar3, 0, sub_36404(), sub_36670(), 0, 0 );
        break;
        default:
        sub_36829( "Friend 1", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Friend 1", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_35122(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_35133( uParam1 );
    sub_35307( uParam0, 0, uParam2 );
    sub_35307( uParam0, 1, uParam3 );
    sub_35307( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_33385();
    return;
}

void sub_35133(unknown uParam0)
{
    ADD_SCORE( sub_2919(), uParam0 );
    sub_35158( uParam0 );
    return;
}

void sub_35158(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1608( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_35307(unknown uParam0, int iParam1, int iParam2)
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
        sub_35464( uParam0 );
    }
    return;
}

void sub_35464(unknown uParam0)
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

int sub_36404()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_36526( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_36526(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_36670()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_36526( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_36829(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_36921(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35122( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_36829( "Contact 2", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 2", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37147(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_35122( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_36829( "Girl 3", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Girl 3", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37297(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_35122( iVar3, 0, sub_36404(), sub_36670(), 0, 0 );
        break;
        default:
        sub_36829( "Friend 4", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Friend 4", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37575(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35122( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_35122( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_35122( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_35122( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_36829( "Contact 5", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 5", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_37878(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_36829( "Contact 7", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 7", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38077(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35122( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_36829( "Contact 7b", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 7b", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38303(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_35122( iVar3, 0, sub_36404(), sub_36670(), 0, 0 );
        break;
        default:
        sub_36829( "Friend 8", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Friend 8", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38538(unknown uParam0)
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
        sub_35122( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_35122( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_35122( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_35122( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_35122( iVar3, 0, sub_36404(), sub_36670(), 0, 0 );
        break;
        default:
        sub_36829( "Friend 9", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Friend 9", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_38913(unknown uParam0)
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
        sub_35122( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_35122( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_35122( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_36829( "Contact 10", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_36829( "Contact 10", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39160(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_36829( "Girl 11", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Girl 11", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39299(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35122( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_35122( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_35122( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_35122( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_35122( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_36829( "Contact 12", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 12", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39598(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35122( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_36829( "Contact 13", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 13", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_39826(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_35122( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_35122( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_35122( iVar3, 0, sub_36404(), sub_36670(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_36829( "Friend 15", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Friend 15", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40113(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35122( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_35122( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_35122( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_36829( "Contact 16", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 16", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40395(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_35122( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_35122( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_35122( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_36829( "Contact 18", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 18", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40677(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_36829( "Contact 19", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 19", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40878(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_36829( "Girl 20", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_40951(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_36829( "Contact 21", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 21", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41165(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35122( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_35122( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_36829( "Contact 22", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 22", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41418(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_35122( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_35122( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_35122( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_36829( "Contact 24", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 24", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41665(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_35122( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_35122( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_35122( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_36829( "Contact 25", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_36829( "Contact 25", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_41866(unknown uParam0)
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
        sub_35122( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_36829( "Girl 26", 1 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_36829( "Girl 26", 0 );
        sub_35122( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_42189(int iParam0, int iParam1)
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
    if (sub_42237( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_42968( iParam1 );
    }
    return;
}

int sub_42237(int iParam0, int iParam1)
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
            sub_42377( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_42377(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_42559( 0 );
    return;
}

void sub_42559(boolean bParam0)
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
        sub_42814();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_42814()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_42968(int iParam0)
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
        sub_43301( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_43301( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_43301( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_43301( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_43301( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_43301( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_43301( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_43301( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_43301( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_43301( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_43301( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_43301( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_43301( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_43301( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_43301( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_43301( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_43301( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_43301( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_43301( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_43301(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_44011(unknown uParam0, unknown uParam1)
{
    sub_44030( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_44030(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_44441()
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

int sub_44526(int iParam0, int iParam1)
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

void sub_44583(unknown uParam0)
{
    sub_995();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_44622(unknown uParam0)
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

void sub_44730()
{
    sub_44739();
    return;
}

void sub_44739()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_44818()
{
    sub_44739();
    return;
}

void sub_44858()
{
    sub_44739();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_44959(unknown uParam0)
{
    char[16] cVar3;

    if (NOT g_U15946[uParam0]._fU132._fU0)
    {
        if (g_U91._fU0 == 1012)
        {
            g_U91._fU92 = 1;
        }
        g_U15946[uParam0]._fU132._fU0 = 1;
        StrCopy( ref cVar3, "CONT_", 16 );
        ConcatString(ref cVar3, ref g_U15946[uParam0]._fU132._fU8, 16);
        SET_PHONE_HUD_ITEM( 2, ref cVar3, -1 );
        g_U91._fU520 = 0;
    }
    return;
}

void sub_45166(unknown uParam0)
{
    if (l_U683)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (sub_45201( uParam0 ))
            {
                l_U916 = 1;
            }
        }
        else
        {
            SET_CAR_ENGINE_ON( uParam0, 0, 1 );
            l_U916 = 1;
        }
    }
    return;
}

void sub_45201(unknown uParam0)
{
    int Result;

    Result = 0;
    if ((CHECK_STUCK_TIMER( uParam0, 2, 30000 )) || ((CHECK_STUCK_TIMER( uParam0, 1, 40000 )) || ((CHECK_STUCK_TIMER( uParam0, 0, 5000 )) || (CHECK_STUCK_TIMER( uParam0, 3, 60000 )))))
    {
        Result = 1;
    }
    return Result;
}

void sub_45331()
{
    int I;

    I = 0;
    for ( I = 0; I <= 2; I++ )
    {
        if (l_U886[I])
        {
            if (NOT (IS_CHAR_INJURED( l_U490[I] )))
            {
                if (IS_VEH_DRIVEABLE( l_U497[I] ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( l_U490[I], l_U497[I] ))
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U490[I] );
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U497[I] );
                    }
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U490[I] );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U497[I] );
                }
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U490[I] );
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U497[I] );
            }
        }
    }
    return;
}

