void main()
{
    unknown[6] uVar2;
    int iVar9;
    boolean bVar10;
    int I;
    int iVar12;

    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U496 = 0;
    l_U498 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_97();
        sub_2207();
    }
    # -sub_C1FFC0-0xc214c8( 0, ref l_U499 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U500 );
    SET_MISSION_FLAG( 1 );
    LOAD_ADDITIONAL_TEXT( "GM3", 0 );
    LOAD_ADDITIONAL_TEXT( "GM3AUD", 6 );
    sub_4309( "GM3AUD" );
    sub_4436( 0, sub_3899(), "Niko", 0 );
    sub_4586( 13 );
    sub_4615( 2 );
    sub_4640( 13 );
    l_U497 = 2;
    l_U496 = 0;
    if (g_U9893._fU24)
    {
        array(ref uVar2, 6);
        REQUEST_MODEL( -1870989171 );
        REQUEST_MODEL( -1676937780 );
        REQUEST_MODEL( 1872110126 );
        while ((NOT (HAS_MODEL_LOADED( 1872110126 ))) || ((NOT (HAS_MODEL_LOADED( -1676937780 ))) || (NOT (HAS_MODEL_LOADED( -1870989171 )))))
        {
            WAIT( 0 );
        }
        ADD_SCENARIO_BLOCKING_AREA( -1093.30100000, -351.76070000, 3.96770100, -1068.07200000, -376.47520000, 14.32911000 );
        CLEAR_AREA_OF_CHARS( -1081.61900000, -361.29650000, 6.39890000, 40.00000000 );
        CREATE_CHAR( 8, -1870989171, -1087.88100000, -356.32400000, 6.36380000, ref uVar2[0], 1 );
        CREATE_CHAR( 8, 1872110126, -1077.81300000, -358.98050000, 6.39890000, ref uVar2[1], 1 );
        CREATE_CHAR( 8, -1870989171, -1082.66700000, -354.00990000, 6.36380000, ref uVar2[2], 1 );
        CREATE_CHAR( 8, 1872110126, -1085.27400000, -359.06150000, 6.39890000, ref uVar2[3], 1 );
        CREATE_CHAR( 8, -1676937780, -1079.55100000, -361.51540000, 6.39890000, ref uVar2[4], 1 );
        CREATE_CHAR( 8, -1676937780, -1084.05100000, -361.51540000, 6.39890000, ref uVar2[5], 1 );
        if (NOT (IS_CHAR_INJURED( uVar2[0] )))
        {
            SET_CHAR_HEADING( uVar2[0], 322.00000000 );
            SET_CHAR_DECISION_MAKER( uVar2[0], l_U499 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar2[0], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar2[0], "Room_visit" );
            SET_CHAR_IN_CUTSCENE( uVar2[0], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[0] );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[1] )))
        {
            SET_CHAR_COLLISION( uVar2[1], 0 );
            FREEZE_CHAR_POSITION( uVar2[1], 1 );
            SET_CHAR_HEADING( uVar2[1], 180.00000000 );
            SET_CHAR_DECISION_MAKER( uVar2[1], l_U499 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar2[1], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar2[1], "Room_visit" );
            SET_CHAR_IN_CUTSCENE( uVar2[1], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[1] );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( uVar2[1], 1 );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[2] )))
        {
            SET_CHAR_HEADING( uVar2[2], 182.00000000 );
            SET_CHAR_DECISION_MAKER( uVar2[2], l_U499 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar2[2], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar2[2], "Room_visit" );
            SET_CHAR_IN_CUTSCENE( uVar2[2], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[2] );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[3] )))
        {
            SET_CHAR_COLLISION( uVar2[3], 0 );
            FREEZE_CHAR_POSITION( uVar2[3], 1 );
            SET_CHAR_HEADING( uVar2[3], 150.00000000 );
            SET_CHAR_DECISION_MAKER( uVar2[3], l_U499 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar2[3], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar2[3], "Room_visit" );
            SET_CHAR_IN_CUTSCENE( uVar2[3], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[3] );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( uVar2[3], 1 );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[4] )))
        {
            SET_CHAR_HEADING( uVar2[4], 0.00000000 );
            SET_CHAR_DECISION_MAKER( uVar2[4], l_U499 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar2[4], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar2[4], "Room_visit" );
            SET_CHAR_IN_CUTSCENE( uVar2[4], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[4] );
            TASK_SIT_DOWN_INSTANTLY( uVar2[4], 0, 0, -2 );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[5] )))
        {
            SET_CHAR_HEADING( uVar2[5], 0.00000000 );
            SET_CHAR_DECISION_MAKER( uVar2[5], l_U499 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar2[5], 1 );
            SET_ROOM_FOR_CHAR_BY_NAME( uVar2[5], "Room_visit" );
            SET_CHAR_IN_CUTSCENE( uVar2[5], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar2[5] );
            TASK_SIT_DOWN_INSTANTLY( uVar2[5], 0, 0, -2 );
        }
        bVar10 = false;
        GET_INTERIOR_AT_COORDS( -1080.93600000, -357.47880000, 6.39890000, ref iVar9 );
        SETTIMERA( 0 );
        while (NOT bVar10)
        {
            GET_INTERIOR_AT_COORDS( -1080.93600000, -357.47880000, 6.39890000, ref iVar9 );
            if (NOT (iVar9 == nil))
            {
                ACTIVATE_INTERIOR( iVar9, 1 );
                bVar10 = true;
            }
            if (TIMERA() > 5000)
            {
                bVar10 = true;
            }
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[1] )))
        {
            TASK_SIT_DOWN_INSTANTLY( uVar2[1], 0, 0, -2 );
        }
        if (NOT (IS_CHAR_INJURED( uVar2[3] )))
        {
            TASK_SIT_DOWN_INSTANTLY( uVar2[3], 0, 0, -2 );
        }
        if (g_U15654[13])
        {
            START_CUTSCENE_NOW( "GM_3F" );
        }
        else
        {
            START_CUTSCENE_NOW( "GM_3D" );
        }
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        if (g_U15654[13])
        {
            CLEAR_NAMED_CUTSCENE( "GM_3F" );
        }
        else
        {
            CLEAR_NAMED_CUTSCENE( "GM_3D" );
        }
        for ( I = 0; I <= 5; I++ )
        {
            if (NOT (IS_CHAR_INJURED( uVar2[I] )))
            {
                DELETE_CHAR( ref uVar2[I] );
            }
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1870989171 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1676937780 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 1872110126 );
    }
    if (NOT (IS_CHAR_DEAD( sub_3899() )))
    {
        LOAD_SCENE( -1144.08900000, -374.65530000, 2.07320000 );
        SET_CHAR_COORDINATES( sub_3899(), -1144.08900000, -374.65530000, 2.07320000 );
        SET_CHAR_HEADING( sub_3899(), 98.00000000 );
        SET_CAM_BEHIND_PED( sub_3899() );
        SET_PLAYER_CONTROL( sub_6449(), 1 );
    }
    sub_6544( -1138.92400000, -360.28430000, 10.69730000, -1160.41700000, -388.87770000, 0.27817900, -1160.43900000, -355.78680000, 1.60680000, 0.00000000 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    sub_6839();
    DO_SCREEN_FADE_IN( 1000 );
    SETTIMERA( 0 );
    while (true)
    {
        if (NOT l_U501)
        {
            switch (l_U497)
            {
                case 2:
                switch (l_U496)
                {
                    case 0:
                    if (TIMERA() > 4000)
                    {
                        if (sub_7019( 13, "GM3_CINTRO", "GM3AUD" ))
                        {
                            l_U496 = 1;
                        }
                    }
                    break;
                    case 1:
                    if (sub_10892( 0 ))
                    {
                        l_U496 = 2;
                    }
                    break;
                    case 2:
                    CLEAR_PRINTS();
                    PRINT( "GOAL_04", 7500, 3 );
                    sub_2223();
                    sub_2332( 12, 1 );
                    sub_11210( 24 );
                    l_U497 = 1;
                    break;
                }
                break;
                case 1:
                if (NOT (IS_CHAR_INJURED( sub_3899() )))
                {
                    switch (l_U498)
                    {
                        case 0:
                        case 1:
                        iVar12 = 5;
                        GET_KEY_FOR_CHAR_IN_ROOM( sub_3899(), ref iVar12 );
                        if (iVar12 == -869201005)
                        {
                            l_U498 = 2;
                        }
                        break;
                        case 2:
                        if (sub_11387() == 1)
                        {
                            if (NOT l_U503)
                            {
                                l_U503 = 1;
                            }
                            if (l_U504)
                            {
                                l_U504 = 0;
                            }
                            l_U498 = 3;
                        }
                        break;
                        case 3:
                        if (sub_11481( "www.eyefind.info" ))
                        {
                            PRINT_HELP_FOREVER( "GM_SPLASH" );
                            l_U498 = 4;
                        }
                        break;
                        case 4:
                        if (sub_11481( "www.autoeroticar.com" ))
                        {
                            PRINT_HELP_FOREVER( "GM_CAR_LINK" );
                            l_U498 = 5;
                        }
                        break;
                        case 5:
                        if (sub_11481( "www.autoeroticar.com/carProfiles.html" ))
                        {
                            PRINT_HELP_FOREVER( "GM_CAR_LOOK" );
                            l_U498 = 6;
                        }
                        break;
                        case 6:
                        if ((sub_11744() > 23) AND (sub_11481( "www.autoeroticar.com/carProfiles.html" )))
                        {
                            PRINT_HELP_FOREVER( "GHELP_01" );
                            SETTIMERA( 0 );
                            l_U506 = 1;
                            if (NOT l_U505)
                            {
                                FORCE_WEATHER_NOW( 1 );
                                l_U505 = 1;
                            }
                            l_U498 = 7;
                        }
                        break;
                        case 7:
                        if (sub_11387() == 0)
                        {
                            CLEAR_HELP();
                            sub_2332( 12, 0 );
                            l_U497 = 3;
                            l_U501 = 1;
                        }
                        break;
                    }
                }
                if ((NOT l_U501) AND ((NOT l_U504) AND ((l_U503) AND (sub_11387() == 0))))
                {
                    CLEAR_HELP();
                    PRINT_NOW( "GM_COMP_RET", 7500, 1 );
                    l_U498 = 2;
                    l_U504 = 1;
                }
                break;
            }
        }
        if (l_U506)
        {
            if (TIMERA() > 10000)
            {
                CLEAR_HELP();
            }
        }
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            l_U501 = 1;
        }
        if (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            while (IS_KEYBOARD_KEY_PRESSED( 36 ))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_INJURED( sub_3899() )))
            {
                switch (l_U497)
                {
                    case 1:
                    if (NOT (IS_CHAR_INJURED( sub_3899() )))
                    {
                        SET_CHAR_COORDINATES( sub_3899(), -1585.26900000, 470.40360000, 25.30040000 );
                    }
                    break;
                    default:
                }
            }
        }
        if (l_U502)
        {
            sub_12162();
        }
        if (l_U501)
        {
            sub_12274();
        }
        WAIT( 0 );
    }
    return;
}

void sub_97()
{
    sub_106();
    return;
}

void sub_106()
{
    int iVar2;

    iVar2 = 15;
    sub_120( iVar2 );
    sub_1296( iVar2 );
    return;
}

void sub_120(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_164();
        sub_325();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_433();
            sub_472();
        }
    }
    sub_548();
    sub_649();
    uVar5 = sub_762( uParam0 );
    sub_1203( uVar5, 0 );
    return;
}

void sub_164()
{
    sub_178( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_278();
    }
    return;
}

void sub_178(int iParam0)
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

void sub_278()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_325()
{
    sub_334();
    return;
}

void sub_334()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_433()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_472()
{
    sub_481();
    return;
}

void sub_481()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_548()
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

void sub_649()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_671();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_671()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_762(unknown uParam0)
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
    sub_1161( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1161(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1203(int iParam0, boolean bParam1)
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

void sub_1296(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1305();
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
        sub_2080();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1305()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1343( 5, g_U569[I] )) == 1))
        {
            if ((sub_1343( 1, g_U569[I] )) != 0)
            {
                sub_1629( I );
            }
        }
    }
    if (NOT sub_1795())
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

int sub_1343(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1629(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1714( g_U569 - 1 );
    return;
}

void sub_1714(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1795()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1343( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2080()
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

void sub_2207()
{
    RELEASE_WEATHER();
    sub_2223();
    sub_2250();
    sub_2274( 13 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_2332( 12, 0 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2223()
{
    g_U91._fU76 = -1;
    return;
}

void sub_2250()
{
    g_U946 = -1;
    return;
}

void sub_2274(int iParam0)
{
    if (g_U91._fU72 == iParam0)
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_2332(unknown uParam0, unknown uParam1)
{
    g_U10133._fU84[uParam0] = uParam1;
    sub_2356();
    return;
}

void sub_2356()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_2384( 13 );
        if ((g_U9932[g_U9999[I]._fU0]._fU0) AND (sub_2429( 13, iVar3 )))
        {
            sub_2530( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_2714( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_2384( 11 );
        if ((g_U9932[g_U10090[I]._fU0]._fU0) AND (sub_2429( 11, iVar3 )))
        {
            sub_2530( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_2714( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_2908( I );
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_2429( g_U10324[I]._fU12, iVar3 )))
        {
            sub_2530( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_3216( I );
        }
        else
        {
            sub_2714( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_3445();
    return;
}

int sub_2384(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_2429(unknown uParam0, boolean bParam1)
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

void sub_2530(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U0 );
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

void sub_2714(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_2908(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_2950( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_2384( g_U10324[uParam0]._fU12 ))
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

int sub_2950(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_3216(unknown uParam0)
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

void sub_3445()
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
    bVar3 = sub_2384( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_3490( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_2384( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_3490( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_2908( I )))
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
        bVar3 = sub_2908( I );
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
        sub_3490( g_U10324[I]._fU32, bVar3 );
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
        sub_3490( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_3899() )))
        {
            GET_CHAR_COORDINATES( sub_3899(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_4017( uVar7, g_U9943[I]._fU8 );
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
                sub_3490( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_3490(unknown uParam0, boolean bParam1)
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

void sub_3899()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4017(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_4309(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_4328();
    return;
}

void sub_4328()
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

void sub_4436(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4520( "\n PED NUMBER ", uParam0 );
    sub_4560( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4520(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4560(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4586(unknown uParam0)
{
    g_U91._fU76 = uParam0;
    return;
}

void sub_4615(unknown uParam0)
{
    g_U946 = uParam0;
    return;
}

void sub_4640(unknown uParam0)
{
    if (g_U15946[uParam0]._fU132._fU0)
    {
        g_U91._fU72 = uParam0;
    }
    else
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_6449()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_6544(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_INJURED( sub_3899() )))
    {
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar12 );
    }
    if (DOES_VEHICLE_EXIST( uVar12 ))
    {
        if (IS_VEH_DRIVEABLE( uVar12 ))
        {
            if (IS_CAR_IN_AREA_3D( uVar12, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, 0 ))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( uVar12 )))
                {
                    SET_CAR_AS_MISSION_CAR( uVar12 );
                }
                CLEAR_AREA( uParam6._fU0, uParam6._fU4, uParam6._fU8, 7.00000000, 1 );
                SET_CAR_COORDINATES( uVar12, uParam6._fU0, uParam6._fU4, uParam6._fU8 );
                SET_CAR_HEADING( uVar12, uParam9 );
                GET_CAR_MODEL( uVar12, ref uVar13 );
                if ((NOT (IS_THIS_MODEL_A_TRAIN( uVar13 ))) AND ((NOT (IS_THIS_MODEL_A_HELI( uVar13 ))) AND (NOT (IS_THIS_MODEL_A_BOAT( uVar13 )))))
                {
                    SET_CAR_ON_GROUND_PROPERLY( uVar12 );
                }
                if (IS_CAR_A_MISSION_CAR( uVar12 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar12 );
                }
            }
        }
    }
    return;
}

void sub_6839()
{
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    return;
}

void sub_7019(unknown uParam0, unknown uParam1, unknown uParam2)
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
    return sub_7077( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_7077(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_7147( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_7147( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_6449() )))
    {
        sub_7147( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3899() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3899() )))
    {
        sub_7147( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_7147( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_7604()))
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
                sub_7147( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_7604()))
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
    sub_8976( uParam0, ref g_U91._fU176 );
    sub_10357( ref g_U91._fU160 );
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
        sub_4560( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_7147(unknown uParam0)
{
    return;
}

int sub_7604()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_7661())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_7661()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_6449() )))
    {
        sub_7147( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_7147( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_7147( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_7147( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_6449() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3899() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3899(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_7147( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3899() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_7147( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_7147( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_6449() )))
    {
        sub_7147( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_8976(int iParam0, unknown uParam1)
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

void sub_10357(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_10892(boolean bParam0)
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
        GET_SCRIPT_TASK_STATUS( sub_3899(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_7147( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_11210(unknown uParam0)
{
    g_U2222 = uParam0;
    return;
}

void sub_11387()
{
    return g_U857._fU0;
}

void sub_11481(unknown uParam0)
{
    return COMPARE_STRING( uParam0, ref g_U857._fU232._fU0 );
}

void sub_11744()
{
    return g_U857._fU24;
}

void sub_12162()
{
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6449(), 150 );
        if (NOT (IS_CHAR_INJURED( sub_3899() )))
        {
            SAY_AMBIENT_SPEECH( sub_3899(), "MISSION_FAIL_RAGE", 0, 0, 0 );
        }
    }
    sub_2207();
    return;
}

void sub_12274()
{
    CLEAR_WANTED_LEVEL( sub_6449() );
    sub_12296( 27 );
    sub_4640( 27 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 34 );
    sub_12446();
    sub_2207();
    return;
}

void sub_12296(unknown uParam0)
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

void sub_12446()
{
    sub_12455();
    return;
}

void sub_12455()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_12473();
    sub_12532( iVar2, iVar3, iVar4 );
    return;
}

void sub_12473()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_12532(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 15;
    sub_12565( iVar5, uParam0, uParam1, uParam2, "Contact_18" );
    return;
}

void sub_12565(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_12661( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_12661( ref cVar9 );
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
            sub_12661( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_12661( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_12661( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_12661( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_13238( iParam0, iVar7 );;;
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
                sub_13635( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_13635( 0, 4 );
            }
        }
    }
    if (NOT (sub_13724( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_6449(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_6449() );
    }
    sub_1305();
    bVar27 = true;
    uVar28 = sub_13238( iParam0, iVar7 );
    uVar29 = sub_762( iParam0 );
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
                sub_23100( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_23530();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_23615( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_23672( iParam0 );
                sub_23711( 0 );
                sub_1203( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_23819();
        }
    }
    if (bParam2)
    {
        sub_23530();
        sub_23907();
        sub_23711( 0 );
    }
    if (bParam3)
    {
        sub_23530();
        sub_23947();
        sub_23711( 0 );
        sub_1203( uVar29, 0 );
    }
    sub_649();
    return;
}

void sub_12661(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_13238(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1161( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_13635(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_13724(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_13932( uParam1 );
        break;
        case 1:
        bVar8 = sub_16010( uParam1 );
        break;
        case 2:
        bVar8 = sub_16236( uParam1 );
        break;
        case 3:
        bVar8 = sub_16386( uParam1 );
        break;
        case 4:
        bVar8 = sub_16664( uParam1 );
        break;
        case 5:
        bVar8 = sub_16967( uParam1 );
        break;
        case 6:
        bVar8 = sub_17166( uParam1 );
        break;
        case 7:
        bVar8 = sub_17392( uParam1 );
        break;
        case 8:
        bVar8 = sub_17627( uParam1 );
        break;
        case 9:
        bVar8 = sub_18002( uParam1 );
        break;
        case 10:
        bVar8 = sub_18249( uParam1 );
        break;
        case 11:
        bVar8 = sub_18388( uParam1 );
        break;
        case 12:
        bVar8 = sub_18687( uParam1 );
        break;
        case 13:
        bVar8 = sub_18915( uParam1 );
        break;
        case 14:
        bVar8 = sub_19202( uParam1 );
        break;
        case 15:
        bVar8 = sub_19484( uParam1 );
        break;
        case 16:
        bVar8 = sub_19766( uParam1 );
        break;
        case 17:
        bVar8 = sub_19967( uParam1 );
        break;
        case 18:
        bVar8 = sub_20040( uParam1 );
        break;
        case 19:
        bVar8 = sub_20254( uParam1 );
        break;
        case 20:
        bVar8 = sub_20507( uParam1 );
        break;
        case 21:
        bVar8 = sub_20754( uParam1 );
        break;
        case 22:
        bVar8 = sub_20955( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_15615( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_13238( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_21278( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_13932(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_14211( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_14211( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_14211( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_14211( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_14211( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_14211( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_14211( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_14211( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_14211( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_14211( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_14211( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_14211( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_14211( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_14211( iVar3, 0, 3, 1, 0, 0 );
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
        sub_14211( iVar3, 0, sub_15493(), sub_15759(), 0, 0 );
        break;
        default:
        sub_15918( "Friend 1", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Friend 1", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_14211(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_14222( uParam1 );
    sub_14396( uParam0, 0, uParam2 );
    sub_14396( uParam0, 1, uParam3 );
    sub_14396( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_12473();
    return;
}

void sub_14222(unknown uParam0)
{
    ADD_SCORE( sub_6449(), uParam0 );
    sub_14247( uParam0 );
    return;
}

void sub_14247(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1161( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_14396(unknown uParam0, int iParam1, int iParam2)
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
        sub_14553( uParam0 );
    }
    return;
}

void sub_14553(unknown uParam0)
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

int sub_15493()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_15615( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_15615(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_15759()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_15615( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_15918(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_16010(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_14211( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_15918( "Contact 2", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 2", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16236(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_14211( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_15918( "Girl 3", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Girl 3", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16386(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_14211( iVar3, 0, sub_15493(), sub_15759(), 0, 0 );
        break;
        default:
        sub_15918( "Friend 4", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Friend 4", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16664(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_14211( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_14211( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_14211( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_14211( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_15918( "Contact 5", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 5", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_16967(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_15918( "Contact 7", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 7", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17166(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_14211( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_15918( "Contact 7b", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 7b", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17392(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_14211( iVar3, 0, sub_15493(), sub_15759(), 0, 0 );
        break;
        default:
        sub_15918( "Friend 8", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Friend 8", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_17627(unknown uParam0)
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
        sub_14211( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_14211( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_14211( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_14211( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_14211( iVar3, 0, sub_15493(), sub_15759(), 0, 0 );
        break;
        default:
        sub_15918( "Friend 9", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Friend 9", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18002(unknown uParam0)
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
        sub_14211( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_14211( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_14211( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_15918( "Contact 10", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_15918( "Contact 10", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18249(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_15918( "Girl 11", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Girl 11", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18388(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_14211( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_14211( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_14211( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_14211( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_14211( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_15918( "Contact 12", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 12", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18687(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_14211( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_15918( "Contact 13", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 13", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18915(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_14211( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_14211( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_14211( iVar3, 0, sub_15493(), sub_15759(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_15918( "Friend 15", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Friend 15", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19202(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_14211( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_14211( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_14211( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_15918( "Contact 16", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 16", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19484(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_14211( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_14211( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_14211( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_15918( "Contact 18", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 18", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19766(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_15918( "Contact 19", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 19", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19967(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_15918( "Girl 20", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20040(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_15918( "Contact 21", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 21", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20254(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_14211( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_14211( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_15918( "Contact 22", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 22", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20507(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_14211( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_14211( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_14211( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_15918( "Contact 24", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 24", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20754(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_14211( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_14211( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_14211( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_15918( "Contact 25", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_15918( "Contact 25", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20955(unknown uParam0)
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
        sub_14211( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_15918( "Girl 26", 1 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_15918( "Girl 26", 0 );
        sub_14211( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_21278(int iParam0, int iParam1)
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
    if (sub_21326( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_22057( iParam1 );
    }
    return;
}

int sub_21326(int iParam0, int iParam1)
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
            sub_21466( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_21466(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_21648( 0 );
    return;
}

void sub_21648(boolean bParam0)
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
        sub_21903();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_21903()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_22057(int iParam0)
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
        sub_22390( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_22390( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_22390( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_22390( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_22390( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_22390( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_22390( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_22390( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_22390( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_22390( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_22390( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_22390( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_22390( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_22390( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_22390( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_22390( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_22390( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_22390( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_22390( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_22390(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_23100(unknown uParam0, unknown uParam1)
{
    sub_23119( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_23119(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_23530()
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

int sub_23615(int iParam0, int iParam1)
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

void sub_23672(unknown uParam0)
{
    sub_548();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_23711(unknown uParam0)
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

void sub_23819()
{
    sub_23828();
    return;
}

void sub_23828()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_23907()
{
    sub_23828();
    return;
}

void sub_23947()
{
    sub_23828();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

