void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    l_U203 = 0;
    l_U204 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U236 = 10.00000000;
    l_U237 = 15.00000000;
    l_U252 = 350;
    l_U253 = 1.00000000;
    l_U254 = 20.00000000;
    l_U255 = 0.00000000;
    l_U256 = 0.50000000;
    l_U257 = 0;
    l_U262 = 1;
    l_U264 = 0.20000000;
    l_U269 = 0;
    l_U270 = 28;
    l_U271 = {-709.10570000, 357.32960000, 3.07190000};
    l_U274 = 277.68510000;
    l_U297 = {-460.67510000, 152.90150000, 8.74310000};
    l_U300 = 183.67400000;
    l_U301 = 0;
    l_U302 = 0;
    l_U303 = 0;
    l_U304 = 0;
    l_U305 = 0;
    l_U306 = 0;
    l_U327 = 0;
    l_U328 = 0;
    l_U329 = 0;
    l_U330 = 0;
    l_U331 = 0;
    l_U332 = 0;
    l_U343 = {-464.37590000, 1607.07300000, 18.47510000};
    l_U347 = {-457.64210000, 155.78990000, 8.87160000};
    l_U351 = 0;
    l_U352 = 0;
    l_U353 = 0;
    l_U359 = 8000;
    l_U361 = {-477.53300000, 156.73000000, 6.55090000};
    l_U364 = {-481.89720000, 147.04190000, 6.55070000};
    l_U367 = {-480.67240000, 165.78080000, 10.61200000};
    l_U370 = {-477.60400000, 142.40070000, 6.55290000};
    l_U373 = {-468.55550000, 140.33990000, 8.85910100};
    l_U376 = 129.90300000;
    l_U377 = 104.42500000;
    l_U378 = 184.52100000;
    l_U379 = 90.00000000;
    l_U380 = 45.32310000;
    l_U387 = 1;
    l_U390 = 0;
    l_U391 = 0;
    l_U392 = 0;
    l_U409 = {0.00000000, 0.30000000, 0.00000000};
    l_U412 = 40.00000000;
    l_U413 = 2000;
    l_U414 = 4.00000000;
    l_U417 = -45.00000000;
    l_U418 = 45.00000000;
    l_U419 = -89.00000000;
    l_U420 = 89.00000000;
    l_U422 = 50.00000000;
    l_U423 = {0.00000000, 0.00000000, 0.70000000};
    sub_707();
    while (true)
    {
        WAIT( 0 );
        switch (l_U269)
        {
            case 0:
            switch (l_U389)
            {
                case 0:
                g_U30180 = 1;
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_3377( g_U30199, 1 );
                        WAIT( 0 );
                        sub_3520( "CLBPRC8", 0 );
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LA8" )))
                        {
                            PRINT_HELP_FOREVER( "LA8" );
                        }
                        sub_3695();
                        SETTIMERA( 0 );
                        SWITCH_GARBAGE_TRUCKS( 0 );
                        g_U10935 = 1;
                        g_U15811[70] = 1;
                        REQUEST_MODEL( -339587598 );
                        REQUEST_MODEL( 1730047377 );
                        REQUEST_MODEL( -1961627517 );
                        REQUEST_MODEL( 1269098716 );
                        REQUEST_MODEL( 1969438324 );
                        REQUEST_MODEL( 1473654742 );
                        REQUEST_MODEL( sub_4901( 0 ) );
                        REQUEST_ANIMS( "misstonym8" );
                        sub_3520( "E2Tm8AU", 6 );
                        sub_5108( "E2Tm8AU" );
                        sub_5227( 0, sub_4109(), "LUIS", 0 );
                        sub_5374( 28, 0 );
                        g_U8781 = 0;
                        l_U389++;
                    }
                }
                break;
                case 1:
                sub_3695();
                if ((HAVE_ANIMS_LOADED( "misstonym8" )) AND ((HAS_MODEL_LOADED( sub_4901( 0 ) )) AND ((HAS_MODEL_LOADED( 1473654742 )) AND ((HAS_MODEL_LOADED( 1969438324 )) AND ((HAS_MODEL_LOADED( 1269098716 )) AND ((HAS_MODEL_LOADED( -1961627517 )) AND ((HAS_MODEL_LOADED( 1730047377 )) AND (HAS_MODEL_LOADED( -339587598 )))))))))
                {
                    l_U389++;
                }
                break;
                case 2:
                sub_3695();
                if (TIMERA() > 4000)
                {
                    sub_5698();
                    CLEAR_HELP();
                    l_U389++;
                }
                break;
                case 3:
                sub_5917( sub_4109() );
                SET_WIDESCREEN_BORDERS( 1 );
                sub_7007( 1 );
                OPEN_SEQUENCE_TASK( ref l_U399 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "luis_check_earpiece_intro", "misstonym8", 8.00000000, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "luis_check_earpiece_loop", "misstonym8", 8.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U399 );
                TASK_PERFORM_SEQUENCE( sub_4109(), l_U399 );
                CLEAR_SEQUENCE_TASK( l_U399 );
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_5227( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                        sub_7324( "E2Tm8_SPADE", ref l_U400, 7, 0 );
                    }
                }
                l_U389++;
                break;
                case 4:
                if ((sub_8471()) || (NOT (sub_8308( l_U400 ))))
                {
                    if (g_U30199 != -1)
                    {
                        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                        {
                            sub_3377( g_U30199, 0 );
                        }
                    }
                    CLEAR_CHAR_TASKS( sub_4109() );
                    if (sub_8308( l_U400 ))
                    {
                        sub_8656( ref l_U400, 0 );
                    }
                    sub_8780();
                    sub_7007( 0 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    SET_PLAYER_CONTROL( sub_851(), 1 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4109(), 0 );
                    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 65346, 615, -10, 65391, 620, 100, 0 );
                    sub_8999();
                    if (NOT (IS_CAR_DEAD( l_U275 )))
                    {
                        ADD_BLIP_FOR_CAR( l_U275, ref l_U276 );
                        sub_9110( l_U276 );
                        SET_BLIP_AS_FRIENDLY( l_U276, 1 );
                    }
                    PRINT( "CP8_01", 7500, 0 );
                    SET_ROUTE( l_U276, 1 );
                    sub_9196();
                    l_U389 = 0;
                    l_U269 = 1;
                }
                break;
            }
            break;
            case 1:
            sub_10525();
            sub_10769();
            sub_10827();
            if (NOT IS_INTERIOR_SCENE())
            {
                if (NOT (sub_12270( 0 )))
                {
                    if (NOT l_U305)
                    {
                        if (g_U30199 != -1)
                        {
                            if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                            {
                                sub_5227( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                                sub_12613( ref l_U307, "E2Tm8_BYE", "E2Tm8_SORTD" );
                                sub_12960( ref l_U307, ref l_U400, 7, 1 );
                                l_U305 = 1;
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( l_U275 )))
            {
                if (IS_CHAR_IN_CAR( sub_4109(), l_U275 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U276 );
                    sub_13087();
                    sub_13207();
                    sub_2663();
                    l_U269 = 2;
                }
            }
            break;
            case 2:
            ADD_BLIP_FOR_COORD( l_U343._fU0, l_U343._fU4, l_U343._fU8, ref l_U346 );
            PRINT( "CP8_03", 7500, 0 );
            SET_ROUTE( l_U346, 1 );
            l_U269 = 3;
            break;
            case 3:
            sub_13807();
            sub_10769();
            sub_13909();
            sub_15840();
            sub_15954();
            sub_10827();
            if (DOES_VEHICLE_EXIST( l_U275 ))
            {
                if (IS_VEH_DRIVEABLE( l_U275 ))
                {
                    if (IS_CHAR_IN_CAR( sub_4109(), l_U275 ))
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_851(), 0 )))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4109(), l_U343._fU0, l_U343._fU4, l_U343._fU8 + 1.50000000, 4, 4, 1.50000000, 1 ))
                            {
                                if (DOES_BLIP_EXIST( l_U346 ))
                                {
                                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U346 );
                                }
                                if (NOT l_U304)
                                {
                                    sub_7324( "E2Tm8_ARR", ref l_U400, 7, 1 );
                                    l_U304 = 1;
                                }
                                else if (NOT (sub_12270( 0 )))
                                {
                                    PRINT( "CP8_11", 7500, 0 );
                                    l_U269 = 4;
                                }
                            }
                        }
                    }
                }
            }
            break;
            case 4:
            sub_13807();
            sub_10769();
            sub_13909();
            sub_15840();
            sub_15954();
            sub_10827();
            if (DOES_VEHICLE_EXIST( l_U275 ))
            {
                if (IS_VEH_DRIVEABLE( l_U275 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U290 )))
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_851(), 0 )))
                        {
                            if (IS_CHAR_IN_CAR( sub_4109(), l_U275 ))
                            {
                                if (NOT (DOES_BLIP_EXIST( l_U291 )))
                                {
                                    ADD_BLIP_FOR_CHAR( l_U290, ref l_U291 );
                                    SET_BLIP_AS_FRIENDLY( l_U291, 1 );
                                    sub_9110( l_U291 );
                                    SET_ROUTE( l_U291, 1 );
                                }
                            }
                            else if (IS_THIS_PRINT_BEING_DISPLAYED( "CP8_11", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                            {
                                CLEAR_THIS_PRINT( "CP8_11" );
                            }
                        }
                        if (IS_CAR_STOPPED( l_U275 ))
                        {
                            if (NOT l_U392)
                            {
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U275, 4, 10, 0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                                OPEN_SEQUENCE_TASK( ref l_U399 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 4, 12000, 2 );
                                SET_NEXT_DESIRED_MOVE_STATE( 4 );
                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U275, 120000, 0 );
                                CLOSE_SEQUENCE_TASK( l_U399 );
                                TASK_PERFORM_SEQUENCE( l_U290, l_U399 );
                                CLEAR_SEQUENCE_TASK( l_U399 );
                                l_U392 = 1;
                            }
                        }
                    }
                    if (NOT (IS_CHAR_DEAD( l_U290 )))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( l_U290, l_U275 ))
                        {
                            if (IS_CHAR_IN_CAR( sub_4109(), l_U275 ))
                            {
                                if (DOES_BLIP_EXIST( l_U291 ))
                                {
                                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U291 );
                                }
                                if (IS_PED_IN_GROUP( l_U290 ))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U290 );
                                }
                                CLEAR_CHAR_TASKS( l_U290 );
                                sub_12613( ref l_U316, "E2Tm8_HELI", "E2Tm8_GLOW" );
                                sub_12960( ref l_U316, ref l_U400, 8, 1 );
                                l_U269 = 5;
                            }
                        }
                    }
                }
            }
            break;
            case 5:
            SWITCH_ROADS_OFF( 65074, 97, 65436, 65087, 197, 100 );
            sub_17500();
            SETTIMERA( 0 );
            l_U269 = 6;
            break;
            case 6:
            sub_13807();
            sub_10769();
            sub_13909();
            sub_17697();
            sub_17887();
            sub_10827();
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4109(), -709.10570000, 357.32960000, 3.07190000, 150, 150, 150, 0 )))
            {
                sub_2708();
            }
            if (IS_THIS_PRINT_BEING_DISPLAYED( "CP8_02", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
            {
                l_U327 = 1;
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4109(), l_U347._fU0, l_U347._fU4, l_U347._fU8, 40, 40, 40, 0 ))
            {
                if (NOT l_U301)
                {
                    sub_8656( ref l_U400, 1 );
                    sub_7324( "E2Tm8_STRE", ref l_U400, 7, 1 );
                    l_U301 = 1;
                }
            }
            if (DOES_VEHICLE_EXIST( l_U275 ))
            {
                if (IS_VEH_DRIVEABLE( l_U275 ))
                {
                    if (sub_18936( l_U347._fU0, l_U347._fU4, l_U347._fU8 + 1, 5, 5, 1, 1, l_U290, l_U275, "CP8_02", "CP8_04", "CP8_08", 0, 1, "CP8_09", 0 ))
                    {
                        l_U269 = 7;
                    }
                }
            }
            break;
            case 7:
            sub_32526();
            sub_35838();
            break;
            case 8:
            if (DOES_CHAR_EXIST( l_U290 ))
            {
                if (IS_CHAR_INJURED( l_U290 ))
                {
                    sub_37133();
                    sub_10933( 0 );
                    sub_8656( ref l_U400, 0 );
                    sub_14127();
                    PRINT( "CP8_06", 7500, 0 );
                    sub_14589();
                    sub_14796( 28, l_U326, "E2Tm8AU", 1 );
                    sub_11110();
                }
            }
            if (DOES_CHAR_EXIST( l_U290 ))
            {
                if (IS_CHAR_DEAD( l_U290 ))
                {
                    sub_37133();
                    sub_10933( 0 );
                    sub_8656( ref l_U400, 0 );
                    sub_14127();
                    PRINT( "CP8_07", 7500, 0 );
                    sub_14589();
                    sub_14796( 28, l_U326, "E2Tm8AU", 1 );
                    sub_11110();
                }
            }
            break;
            case 9:
            sub_10933( 0 );
            sub_8656( ref l_U400, 0 );
            CLEAR_PRINTS();
            sub_37133();
            sub_14127();
            if (NOT (IS_CAR_DEAD( l_U275 )))
            {
                SET_CAR_ENGINE_ON( l_U275, 0, 1 );
                SET_ENGINE_HEALTH( l_U275, -1 );
            }
            PRINT( "CP8_10", 7500, 0 );
            sub_14589();
            sub_14796( 28, l_U326, "E2Tm8AU", 1 );
            sub_11110();
            break;
        }
    }
    return;
}

void sub_707()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_728();
        sub_2648();
    }
    return;
}

void sub_728()
{
    int iVar2;

    iVar2 = 0;
    sub_742( iVar2 );
    sub_1686();
    return;
}

void sub_742(unknown uParam0)
{
    if (g_U819)
    {
        sub_761();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_851(), 150 );
    switch (uParam0)
    {
        case 0:
        case 1:
        sub_924( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1456( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1591();
    return;
}

void sub_761()
{
    sub_770();
    return;
}

void sub_770()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_851()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_924(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_935( uParam1 );
    sub_1130( uParam0, 0, uParam2 );
    sub_1130( uParam0, 1, uParam3 );
    sub_1130( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_1323();
    return;
}

void sub_935(unknown uParam0)
{
    ADD_SCORE( sub_851(), uParam0 );
    sub_960( uParam0 );
    return;
}

void sub_960(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1071( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_1071(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1130(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_1323()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U196[I] = 4;
    }
    return;
}

void sub_1456(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1591()
{
    sub_1600();
    return;
}

void sub_1600()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1686()
{
    int iVar2;

    iVar2 = 0;
    sub_1698();
    return;
}

void sub_1698()
{
    int iVar2;

    iVar2 = 0;
    g_U12379 = 0;
    g_U30153 = 0;
    sub_1722();
    sub_2346();
    sub_2382( iVar2, 0 );
    sub_2465();
    sub_2504();
    g_U30097[1] = 0;
    return;
}

void sub_1722()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((g_U575[I]._fU20) AND ((sub_1760( 5, g_U575[I] )) == 1))
        {
            if ((sub_1760( 1, g_U575[I] )) != 0)
            {
                sub_2046( I );
            }
        }
    }
    if (NOT sub_2212())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    if (g_U95._fU0 == 1016)
    {
        g_U95._fU92 = 1;
    }
    return;
}

int sub_1760(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2046(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2131( g_U575 - 1 );
    return;
}

void sub_2131(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2212()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_1760( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2346()
{
    unknown uVar2;

    uVar2 = g_U10965;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_2382(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 37))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U22883[iParam0] = iVar4;
    if (bParam1)
    {
        g_U22883[iParam0] += 30000;
    }
    return;
}

void sub_2465()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_2504()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_2526();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_2526()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_2648()
{
    g_U30180 = 0;
    sub_2663();
    sub_2708();
    g_U8781 = 1;
    if (DOES_BLIP_EXIST( l_U350 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U350 );
    }
    if (DOES_BLIP_EXIST( l_U276 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U276 );
    }
    for ( l_U357 = 0; l_U357 <= 1; l_U357++ )
    {
        if (DOES_VEHICLE_EXIST( l_U354[l_U357] ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U354[l_U357] );
        }
    }
    if (DOES_VEHICLE_EXIST( l_U275 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U275 );
    }
    if (DOES_CHAR_EXIST( l_U290 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U290 );
    }
    g_U43691++;
    g_U10935 = 0;
    SWITCH_GARBAGE_TRUCKS( 1 );
    g_U43673++;
    if (g_U43673 > 7)
    {
        g_U43673 = 0;
    }
    g_U15811[70] = 0;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2663()
{
    if (DOES_VEHICLE_EXIST( l_U296 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U296 );
    }
    return;
}

void sub_2708()
{
    if (DOES_VEHICLE_EXIST( l_U394 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U394 );
    }
    if (DOES_CHAR_EXIST( l_U395[0] ))
    {
        sub_2773( l_U395[0] );
    }
    if (DOES_CHAR_EXIST( l_U395[1] ))
    {
        sub_2773( l_U395[1] );
    }
    if (DOES_CHAR_EXIST( l_U395[2] ))
    {
        sub_2773( l_U395[2] );
    }
    return;
}

void sub_2773(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_3377(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == -1))
    {
        g_U30132[iParam0] = uParam1;
    }
    else
    {
        SCRIPT_ASSERT( "SET_GLOBAL_CLUBPED_SLOT_AS_SCRIPT_CONTROLLED - invalid slot number (-1)" );
    }
    return;
}

void sub_3520(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3556())
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

int sub_3556()
{
    int I;

    for ( I = 0; I <= (14 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3695()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;

    sub_3705( 1 );
    if (DOES_CAM_EXIST( l_U406 ))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref iVar5, ref iVar6 );
        if (NOT IS_USING_CONTROLLER())
        {
            GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
        }
        if (NOT IS_LOOK_INVERTED())
        {
            iVar6 *= -1;
        }
        if ((iVar6 < 65508) || (iVar6 > 28))
        {
            fVar2 = TO_FLOAT( iVar6 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U414;
            if (iVar6 < 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U416 += fVar2;
            if (l_U416 < l_U417)
            {
                l_U416 = l_U417;
            }
            if (l_U416 > l_U418)
            {
                l_U416 = l_U418;
            }
        }
        if ((iVar5 < 65508) || (iVar5 > 28))
        {
            fVar2 = TO_FLOAT( iVar5 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U414;
            if (iVar5 > 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U415 += fVar2;
            if (l_U415 < l_U419)
            {
                l_U415 = l_U419;
            }
            if (l_U415 > l_U420)
            {
                l_U415 = l_U420;
            }
        }
        sub_4169( sub_4109(), ref l_U406, l_U416, 0.00000000, l_U415 );
        SET_CAM_FOV( l_U406, l_U422 );
        SET_CAM_ATTACH_OFFSET( l_U406, l_U423._fU0, l_U423._fU4, l_U423._fU8 );
    }
    else if (DOES_CAM_EXIST( l_U431 ))
    {
        sub_4362();
    }
    BEGIN_CAM_COMMANDS( ref l_U432 );
    if (DOES_CAM_EXIST( l_U406 ))
    {
        DESTROY_CAM( l_U406 );
    }
    CREATE_CAM( 14, ref l_U406 );
    ATTACH_CAM_TO_PED( l_U406, sub_4109() );
    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U406, 1 );
    SET_CAM_NEAR_CLIP( l_U406, 0.01000000 );
    l_U415 = 0.00000000;
    l_U416 = -9.00000000;
    sub_4169( sub_4109(), ref l_U406, l_U416, 0.00000000, l_U415 );
    SET_CAM_FOV( l_U406, l_U422 );
    SET_CAM_ATTACH_OFFSET( l_U406, l_U423._fU0, l_U423._fU4, l_U423._fU8 );
    SET_CAM_ACTIVE( l_U406, 1 );
    SET_CAM_PROPAGATE( l_U406, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (IS_PLAYER_PLAYING( sub_851() ))
    {
        FREEZE_CHAR_POSITION( sub_4109(), 1 );
        SET_CHAR_VISIBLE( sub_4109(), 0 );
    }
    return;
}

void sub_3705(unknown uParam0)
{
    g_U10597 = uParam0;
    return;
}

void sub_4109()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4169(unknown uParam0, unknown uParam1, vector vParam2)
{
    unknown uVar7;
    vector vVar8;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_CAM_EXIST( (uParam1^) ))
        {
            GET_CHAR_HEADING( uParam0, ref uVar7 );
            vVar8.x = 0.00000000;
            vVar8.y = 0.00000000;
            vVar8.z = uVar7;
            vVar8 = {vVar8 + vParam2};
            SET_CAM_ROT( (uParam1^), vVar8.x, vVar8.y, vVar8.z );
        }
    }
    return;
}

void sub_4362()
{
    for ( l_U357 = 0; l_U357 < l_U426; l_U357++ )
    {
        if (DOES_CAM_EXIST( l_U426[l_U357] ))
        {
            DESTROY_CAM( l_U426[l_U357] );
        }
    }
    if (DOES_CAM_EXIST( l_U431 ))
    {
        DESTROY_CAM( l_U431 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U432 );
    }
    return;
}

int sub_4901(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -1255452397;
        case 3: return -789894171;
        case 2: return 1638119866;
        case 1: return -304802106;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -1660661558;
}

void sub_5108(unknown uParam0)
{
    StrCopy( ref l_U19._fU0, uParam0, 16 );
    sub_5125();
    return;
}

void sub_5125()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U19._fU16[I]._fU0 = nil;
        StrCopy( ref l_U19._fU16[I]._fU4, "", 32 );
        l_U19._fU344[I] = 0;
    }
    return;
}

void sub_5227(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U19._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U19._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5307( "\n PED NUMBER ", uParam0 );
    sub_5347( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5307(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5347(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5374(unknown uParam0, boolean bParam1)
{
    char[16] cVar4;

    if (NOT g_U16014[uParam0]._fU212._fU0)
    {
        if (g_U95._fU0 == 1012)
        {
            g_U95._fU92 = 1;
        }
        g_U16014[uParam0]._fU212._fU0 = 1;
        if (bParam1)
        {
            StrCopy( ref cVar4, "CONT_", 16 );
            ConcatString(ref cVar4, ref g_U16014[uParam0]._fU212._fU8, 16);
            SET_PHONE_HUD_ITEM( 2, ref cVar4, -1 );
        }
        g_U95._fU520 = 0;
    }
    return;
}

void sub_5698()
{
    sub_3705( 0 );
    sub_4362();
    if (DOES_CAM_EXIST( l_U407 ))
    {
        DESTROY_CAM( l_U407 );
    }
    if (DOES_CAM_EXIST( l_U408 ))
    {
        DESTROY_CAM( l_U408 );
    }
    if (DOES_CAM_EXIST( l_U406 ))
    {
        DESTROY_CAM( l_U406 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (IS_PLAYER_PLAYING( sub_851() ))
        {
            FREEZE_CHAR_POSITION( sub_4109(), 0 );
            SET_CHAR_VISIBLE( sub_4109(), 1 );
            SET_CAM_BEHIND_PED( sub_4109() );
        }
        END_CAM_COMMANDS( ref l_U432 );
    }
    return;
}

void sub_5917(unknown uParam0)
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U426[0] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U426[0], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U426[0], 1.61040000, 0.91440000, 0.59110000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U426[0], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U426[0], uParam0 );
        POINT_CAM_AT_PED( l_U426[0], uParam0 );
        SET_CAM_POINT_OFFSET( l_U426[0], 0.73220000, 0.43610000, 0.58830000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U426[0], 1 );
    }
    SET_CAM_FOV( l_U426[0], 13.20010000 );
    SET_CAM_ACTIVE( l_U426[0], 1 );
    CREATE_CAM( 14, ref l_U426[1] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U426[1], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U426[1], 1.18410000, 1.13140000, 0.62390000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U426[1], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U426[1], uParam0 );
        POINT_CAM_AT_PED( l_U426[1], uParam0 );
        SET_CAM_POINT_OFFSET( l_U426[1], 0.52730000, 0.48740000, 0.60610000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U426[1], 1 );
    }
    SET_CAM_FOV( l_U426[1], 13.20010000 );
    SET_CAM_ACTIVE( l_U426[1], 1 );
    CREATE_CAM( 14, ref l_U426[2] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U426[2], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U426[2], 0.75790000, 1.34850000, 0.65670000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U426[2], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U426[2], uParam0 );
        POINT_CAM_AT_PED( l_U426[2], uParam0 );
        SET_CAM_POINT_OFFSET( l_U426[2], 0.32250000, 0.53870000, 0.62380000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U426[2], 1 );
    }
    SET_CAM_FOV( l_U426[2], 13.20010000 );
    SET_CAM_ACTIVE( l_U426[2], 1 );
    CREATE_CAM( 14, ref l_U426[3] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U426[3], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U426[3], 0.33170000, 1.56560000, 0.68950000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U426[3], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U426[3], uParam0 );
        POINT_CAM_AT_PED( l_U426[3], uParam0 );
        SET_CAM_POINT_OFFSET( l_U426[3], 0.11770000, 0.58990000, 0.64160000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U426[3], 1 );
    }
    SET_CAM_FOV( l_U426[3], 13.20010000 );
    SET_CAM_ACTIVE( l_U426[3], 1 );
    CREATE_CAM( 25, ref l_U431 );
    SET_CAM_SPLINE_DURATION( l_U431, 20000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U431, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U431, 0 );
    ADD_CAM_SPLINE_NODE( l_U431, l_U426[0] );
    ADD_CAM_SPLINE_NODE( l_U431, l_U426[1] );
    ADD_CAM_SPLINE_NODE( l_U431, l_U426[2] );
    ADD_CAM_SPLINE_NODE( l_U431, l_U426[3] );
    SET_CAM_ACTIVE( l_U431, 1 );
    SET_CAM_PROPAGATE( l_U431, 1 );
    return;
}

void sub_7007(boolean bParam0)
{
    if (bParam0)
    {
        g_U30166 = 1;
        g_U30234 = GET_ID_OF_THIS_THREAD();
    }
    else
    {
        g_U30166 = 0;
        g_U30234 = nil;
    }
    return;
}

void sub_7324(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_7345( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_7345(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7399( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7399(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7421( iParam1 )))
    {
        return 0;
    }
    l_U19._fU384 = 0;
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_8109( ref g_U8868, ref l_U19 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_7421(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_7498( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_7498( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_7498( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_7498(unknown uParam0)
{
    return;
}

void sub_8109(int iParam0, int iParam1)
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

int sub_8308(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_7498( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_7498( "\n speech is not playing" );
    }
    return 0;
}

int sub_8471()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_8656(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_8780()
{
    for ( l_U357 = 0; l_U357 < l_U426; l_U357++ )
    {
        if (DOES_CAM_EXIST( l_U426[l_U357] ))
        {
            DESTROY_CAM( l_U426[l_U357] );
        }
    }
    if (DOES_CAM_EXIST( l_U431 ))
    {
        DESTROY_CAM( l_U431 );
    }
    SET_CAM_BEHIND_PED( sub_4109() );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    return;
}

void sub_8999()
{
    CREATE_CAR( -339587598, l_U271._fU0, l_U271._fU4, l_U271._fU8, ref l_U275, 1 );
    SET_CAR_HEADING( l_U275, l_U274 );
    return;
}

void sub_9110(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

void sub_9196()
{
    sub_9221( 0, l_U297, l_U300, ref l_U296 );
    SET_CAR_AS_MISSION_CAR( l_U296 );
    return;
}

void sub_9221(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_4901( uParam0 );
    return sub_9252( uParam5, uVar8, uParam1, uParam4, uParam0 );
}

int sub_9252(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_9384( (uParam0^), uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_9384(unknown uParam0, int iParam1)
{
    if (iParam1 == 8)
    {
        return;
    }
    switch (iParam1)
    {
        case 0:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_4109() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4109() )))
            {
                PRINTSTRING( "KGM.............Retune TONY car to K109_THE_STUDIO\n" );
                RETUNE_RADIO_TO_STATION_NAME( "K109_THE_STUDIO" );
            }
        }
        break;
        case 3:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 0 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 0, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 3.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_4109() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4109() )))
            {
                PRINTSTRING( "KGM.............Retune DOMINICANS car to SAN_JUAN_SOUNDS\n" );
                RETUNE_RADIO_TO_STATION_NAME( "SAN_JUAN_SOUNDS" );
            }
        }
        break;
        case 2:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 134, 136 );
        SET_EXTRA_CAR_COLOURS( uParam0, 134, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_4109() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4109() )))
            {
                PRINTSTRING( "KGM.............Retune YUSUF car to BEAT\n" );
                RETUNE_RADIO_TO_STATION_NAME( "BEAT_95" );
            }
        }
        break;
        case 1:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 45, 45 );
        SET_EXTRA_CAR_COLOURS( uParam0, 35, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_4109() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4109() )))
            {
                PRINTSTRING( "KGM.............Retune MORI car to DANCE_ROCK\n" );
                RETUNE_RADIO_TO_STATION_NAME( "DANCE_ROCK" );
            }
        }
        break;
    }
    return;
}

void sub_10525()
{
    if (IS_WANTED_LEVEL_GREATER( sub_851(), 0 ))
    {
        if (DOES_BLIP_EXIST( l_U276 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U276 );
        }
        if (NOT l_U390)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_NOW( "CP8_09", 7500, 0 );
                l_U390 = 1;
            }
        }
    }
    else
    {
        CLEAR_THIS_PRINT( "CP8_09" );
        l_U390 = 0;
        if (DOES_VEHICLE_EXIST( l_U275 ))
        {
            if (IS_VEH_DRIVEABLE( l_U275 ))
            {
                if (NOT (DOES_BLIP_EXIST( l_U276 )))
                {
                    ADD_BLIP_FOR_CAR( l_U275, ref l_U276 );
                    SET_BLIP_AS_FRIENDLY( l_U276, 1 );
                    sub_9110( l_U276 );
                    SET_ROUTE( l_U276, 1 );
                }
            }
        }
    }
    return;
}

void sub_10769()
{
    if (DOES_VEHICLE_EXIST( l_U275 ))
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U275 )))
        {
            l_U269 = 9;
        }
    }
    return;
}

void sub_10827()
{
    if (g_U30199 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30199]._fU12, sub_4109(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 ))
                {
                    sub_10933( 0 );
                    sub_8656( ref l_U400, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP8_16", 7000, 0 );
                    sub_11110();
                }
            }
        }
    }
    if (g_U30200 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30200]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30200]._fU12, sub_4109(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 ))
                {
                    sub_10933( 0 );
                    sub_8656( ref l_U400, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP8_16", 7000, 0 );
                    sub_11110();
                }
            }
        }
    }
    if ((sub_11288( sub_4109(), 2, 1 )) || (sub_11288( sub_4109(), 1, 1 )))
    {
        if (IS_CHAR_SHOOTING( sub_4109() ))
        {
            sub_10933( 0 );
            sub_8656( ref l_U400, 0 );
            CLEAR_PRINTS();
            PRINT( "CP8_16", 7000, 0 );
            sub_11110();
        }
    }
    if (g_U30198 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30198]._fU12, sub_4109(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 ))
                {
                    sub_10933( 0 );
                    sub_8656( ref l_U400, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP8_16", 7000, 0 );
                    sub_11110();
                }
            }
        }
    }
    return;
}

void sub_10933(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 <= 3) AND (g_U8865 >= 1))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_11110()
{
    sub_728();
    sub_2648();
    return;
}

int sub_11288(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_11316( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_11316(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_4109(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_12270(boolean bParam0)
{
    if ((sub_12428()) || ((IS_SCRIPTED_CONVERSATION_ONGOING()) || ((sub_12369()) || ((((bParam0) AND (sub_12340())) || ((NOT bParam0) AND (sub_12286()))) || (IS_MESSAGE_BEING_DISPLAYED())))))
    {
        return 1;
    }
    return 0;
}

int sub_12286()
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        return 1;
    }
    return 0;
}

void sub_12340()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_12369()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_12428()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U239;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

void sub_12613(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_12664( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_12664(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_12960(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_12981( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_12981(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_7399( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_13087()
{
    CREATE_CHAR( 26, 1730047377, -472.79780000, 1627.53300000, 17.92620000, ref l_U290, 1 );
    SET_CHAR_HEADING( l_U290, 237.28410000 );
    SET_CHAR_NEVER_TARGETTED( l_U290, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U290, 1 );
    sub_5227( 2, l_U290, "BRUCE_SPADE", 0 );
    return;
}

void sub_13207()
{
    CREATE_CAR( 1269098716, -470.81890000, 1636.41300000, 18.02680000, ref l_U394, 1 );
    SET_CAR_HEADING( l_U394, 143.44770000 );
    CREATE_CHAR( 4, 1969438324, -469.69310000, 1635.45300000, 18.04480000, ref l_U395[0], 1 );
    SET_CHAR_HEADING( l_U395[0], 143.44770000 );
    SET_CHAR_COMPONENT_VARIATION( l_U395[0], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U395[0], 2, 1, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U395[0], 1, 0, 1 );
    CREATE_CHAR( 4, 1969438324, -471.08120000, 1633.62700000, 17.93130000, ref l_U395[1], 1 );
    SET_CHAR_HEADING( l_U395[1], 283.97470000 );
    SET_CHAR_COMPONENT_VARIATION( l_U395[1], 0, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U395[1], 2, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U395[1], 1, 1, 1 );
    TASK_CHAT_WITH_CHAR( l_U395[0], l_U395[1], 1, 1 );
    TASK_CHAT_WITH_CHAR( l_U395[1], l_U395[0], 0, 1 );
    CREATE_CHAR( 4, 1473654742, -471.13870000, 1633.24100000, 17.94370000, ref l_U395[2], 1 );
    SET_CHAR_HEADING( l_U395[2], 107.09150000 );
    SET_CHAR_COMPONENT_VARIATION( l_U395[2], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U395[2], 7, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U395[2], 2, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U395[2], 1, 0, 0 );
    TASK_START_SCENARIO_IN_PLACE( l_U395[2], "Scenario_Standing", -1082130432 );
    return;
}

void sub_13807()
{
    if (DOES_CHAR_EXIST( l_U290 ))
    {
        if (IS_CHAR_INJURED( l_U290 ))
        {
            l_U269 = 8;
        }
    }
    if (DOES_CHAR_EXIST( l_U290 ))
    {
        if (IS_CHAR_DEAD( l_U290 ))
        {
            l_U269 = 8;
        }
    }
    return;
}

void sub_13909()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;

    if (NOT (IS_CAR_DEAD( l_U275 )))
    {
        if (DOES_VEHICLE_EXIST( l_U275 ))
        {
            if (IS_VEH_DRIVEABLE( l_U275 ))
            {
                GET_CAR_COORDINATES( l_U275, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                GET_CHAR_COORDINATES( sub_4109(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                if (DOES_CHAR_EXIST( l_U290 ))
                {
                    if (NOT (IS_CHAR_DEAD( l_U290 )))
                    {
                        GET_DISTANCE_BETWEEN_COORDS_3D( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref fVar8 );
                        if (fVar8 > 150)
                        {
                            if (l_U269 != 3)
                            {
                                if (IS_CHAR_IN_CAR( l_U290, l_U275 ))
                                {
                                    sub_14127();
                                    PRINT( "CP8_05", 7000, 0 );
                                    sub_14589();
                                    sub_14796( 28, l_U326, "E2Tm8AU", 1 );
                                    sub_11110();
                                }
                                else
                                {
                                    sub_14127();
                                    PRINT( "CP8_12", 7000, 0 );
                                    sub_14589();
                                    sub_14796( 28, l_U326, "E2Tm8AU", 1 );
                                    sub_11110();
                                }
                            }
                            else
                            {
                                sub_14127();
                                PRINT( "CP8_12", 7000, 0 );
                                sub_14589();
                                sub_14796( 28, l_U326, "E2Tm8AU", 1 );
                                sub_11110();
                            }
                        }
                        if (l_U269 != 3)
                        {
                            if ((sub_15636( l_U290, sub_4109(), 1 )) > 150)
                            {
                                sub_14127();
                                PRINT( "CP8_05", 7000, 0 );
                                sub_14589();
                                sub_14796( 28, l_U326, "E2Tm8AU", 1 );
                                sub_11110();
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_14127()
{
    int I;

    sub_14136();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U230[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U229 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U229 );
    }
    l_U235 = nil;
    l_U209 = 0;
    for ( I = 0; I < l_U210; I++ )
    {
        l_U210[I] = 0;
        l_U225[I] = 0;
    }
    l_U205 = 0;
    l_U203 = 0;
    l_U204 = 0;
    l_U206 = 0;
    l_U208 = 0;
    l_U207 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U241 = 0;
    for ( I = 0; I < l_U243; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U243[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U243[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_851() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_4109(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_851() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4109(), 1 );
    }
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    return;
}

void sub_14136()
{
    if (DOES_BLIP_EXIST( l_U234 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
    }
    return;
}

void sub_14589()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U325 );
    if (l_U325 == 0)
    {
        l_U326 = "E2Tm8_CMGEN6";
    }
    if (l_U325 == 1)
    {
        l_U326 = "E2Tm8_CMGEN7";
    }
    if (l_U325 == 2)
    {
        l_U326 = "E2Tm8_CMGEN8";
    }
    if (l_U325 == 3)
    {
        l_U326 = "E2Tm8_CMGEN9";
    }
    if (l_U325 == 4)
    {
        l_U326 = "E2Tm8_CMGEN0";
    }
    return;
}

void sub_14796(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_14840( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_14840(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

    if (g_U43133)
    {
        PRINTSTRING( "KGM........End of mission call blocked because the mission is being repeated\n" );
        return;
    }
    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U818 )))
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
        g_U817 = 1;
        g_U818 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_15636(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_15649( uParam0, uParam2 ), sub_15649( uParam1, uParam2 ) );
}

void sub_15649(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_15840()
{
    int iVar2;

    if (DOES_VEHICLE_EXIST( l_U275 ))
    {
        if (IS_VEH_DRIVEABLE( l_U275 ))
        {
            GET_CAR_HEALTH( l_U275, ref iVar2 );
            if (l_U393 < 11)
            {
                if (iVar2 < 900)
                {
                    SET_CAR_HEALTH( l_U275, 1000 );
                    l_U393++;
                }
            }
        }
    }
    return;
}

void sub_15954()
{
    if (DOES_VEHICLE_EXIST( l_U275 ))
    {
        if (IS_VEH_DRIVEABLE( l_U275 ))
        {
            if (IS_CHAR_IN_CAR( sub_4109(), l_U275 ))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_851(), 0 )))
                {
                    l_U390 = 0;
                    if (IS_THIS_PRINT_BEING_DISPLAYED( "CP8_09", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                    {
                        CLEAR_THIS_PRINT( "CP8_09" );
                    }
                    if (l_U269 == 3)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U346 )))
                        {
                            ADD_BLIP_FOR_COORD( l_U343._fU0, l_U343._fU4, l_U343._fU8, ref l_U346 );
                            SET_ROUTE( l_U346, 1 );
                        }
                    }
                    if (l_U269 == 4)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U291 )))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U290 )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U290, ref l_U291 );
                                SET_BLIP_AS_FRIENDLY( l_U291, 1 );
                                sub_9110( l_U291 );
                                SET_ROUTE( l_U291, 1 );
                            }
                        }
                    }
                    if (IS_THIS_PRINT_BEING_DISPLAYED( "CP8_08", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                    {
                        CLEAR_THIS_PRINT( "CP8_08" );
                    }
                    if (DOES_BLIP_EXIST( l_U276 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U276 );
                    }
                }
                else if (NOT l_U390)
                {
                    PRINT_NOW( "CP8_09", 7500, 0 );
                    l_U390 = 1;
                }
                if (DOES_BLIP_EXIST( l_U346 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U346 );
                }
                if (DOES_BLIP_EXIST( l_U291 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U291 );
                }
            }
            else if (NOT l_U353)
            {
                PRINT_NOW( "CP8_08", 7500, 0 );
                l_U353 = 1;
            }
            if (DOES_BLIP_EXIST( l_U346 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U346 );
            }
            if (l_U269 == 4)
            {
                if (DOES_BLIP_EXIST( l_U291 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U291 );
                }
            }
            if (NOT (DOES_BLIP_EXIST( l_U276 )))
            {
                ADD_BLIP_FOR_CAR( l_U275, ref l_U276 );
                SET_BLIP_AS_FRIENDLY( l_U276, 1 );
                sub_9110( l_U276 );
            }
        }
    }
    return;
}

void sub_17500()
{
    CREATE_CAR( -1961627517, -455.73580000, 174.42570000, 8.90840000, ref l_U354[0], 1 );
    SET_CAR_HEADING( l_U354[0], 269.42050000 );
    CHANGE_CAR_COLOUR( l_U354[0], 0, 0 );
    CREATE_CAR( -1961627517, -456.71750000, 132.35850000, 8.88290000, ref l_U354[1], 1 );
    SET_CAR_HEADING( l_U354[1], 91.20870000 );
    CHANGE_CAR_COLOUR( l_U354[1], 0, 0 );
    return;
}

void sub_17697()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_VEHICLE_EXIST( l_U275 ))
    {
        if (NOT (IS_CAR_DEAD( l_U275 )))
        {
            GET_CAR_COORDINATES( l_U275, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar5 );
            if ((uVar2._fU8 - uVar5) > 15)
            {
                if (NOT (IS_CHAR_IN_CAR( sub_4109(), l_U275 )))
                {
                    SET_CAR_ENGINE_ON( l_U275, 0, 1 );
                    SET_ENGINE_HEALTH( l_U275, -1 );
                    sub_14127();
                    PRINT_NOW( "CP8_10", 7000, 0 );
                    sub_11110();
                }
            }
        }
    }
    return;
}

void sub_17887()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (DOES_VEHICLE_EXIST( l_U275 ))
    {
        if (NOT (IS_CAR_DEAD( l_U275 )))
        {
            if (IS_CHAR_IN_CAR( sub_4109(), l_U275 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U290 )))
                {
                    if (IS_CHAR_IN_CAR( l_U290, l_U275 ))
                    {
                        GET_CAR_COORDINATES( l_U275, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref uVar5 );
                        if (((uVar2._fU8 - uVar5) < 60) AND ((uVar2._fU8 - uVar5) > 30))
                        {
                            if (NOT l_U303)
                            {
                                sub_8656( ref l_U400, 1 );
                                sub_7324( "E2Tm8_DOWN", ref l_U400, 7, 1 );
                                SETTIMERA( 0 );
                                l_U303 = 1;
                                l_U306 = 0;
                            }
                        }
                        if ((uVar2._fU8 - uVar5) > 60)
                        {
                            if ((TIMERA() > 10000) || (NOT l_U306))
                            {
                                sub_8656( ref l_U400, 1 );
                                sub_12613( ref l_U334, "E2Tm8_FREK", "E2Tm8_CLAM" );
                                sub_12960( ref l_U334, ref l_U400, 7, 1 );
                                l_U333++;
                                l_U328 = 0;
                                SETTIMERA( 0 );
                                l_U306 = 1;
                            }
                        }
                        if ((uVar2._fU8 - uVar5) < 30)
                        {
                            if (NOT l_U328)
                            {
                                if (l_U333 > 1)
                                {
                                    sub_7324( "E2Tm8_NORM", ref l_U400, 7, 1 );
                                    l_U328 = 1;
                                    SETTIMERA( 0 );
                                    l_U303 = 0;
                                }
                            }
                        }
                        if ((uVar2._fU8 - uVar5) < 29)
                        {
                            if (l_U327)
                            {
                                if (NOT l_U329)
                                {
                                    if (TIMERA() > 12000)
                                    {
                                        if (NOT (sub_12270( 0 )))
                                        {
                                            sub_7324( "E2Tm8_CHT1", ref l_U400, 7, 1 );
                                            l_U329 = 1;
                                        }
                                    }
                                }
                                else if (NOT l_U330)
                                {
                                    if (NOT (sub_12270( 0 )))
                                    {
                                        sub_7324( "E2Tm8_CHT2", ref l_U400, 7, 1 );
                                        l_U330 = 1;
                                    }
                                }
                                else if (NOT l_U331)
                                {
                                    if (NOT (sub_12270( 0 )))
                                    {
                                        sub_7324( "E2Tm8_CHT3", ref l_U400, 7, 1 );
                                        l_U331 = 1;
                                    }
                                }
                                else if (NOT l_U332)
                                {
                                    if (NOT (sub_12270( 0 )))
                                    {
                                        sub_7324( "E2Tm8_CHT4", ref l_U400, 7, 1 );
                                        l_U332 = 1;
                                    }
                                };;;;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_18936(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15)
{
    return sub_18996( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam10, uParam10, uParam10, uParam10, uParam11, uParam12, uParam13, uParam14, uParam15 );
}

int sub_18996(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20)
{
    int iVar23;
    int I;
    unknown uVar25;

    l_U243[0] = uParam7;
    l_U243[1] = uParam8;
    l_U243[2] = uParam9;
    l_U242 = uParam7;
    sub_19044();
    sub_19331();
    sub_20211();
    if (IS_VEH_DRIVEABLE( uParam10 ))
    {
        if (sub_20409( l_U243[0], l_U243[1], l_U243[2], uParam12, uParam13, uParam14, uParam15, l_U237, uParam17, uParam10, 0, 0 ))
        {
            if (IS_SCREEN_FADED_IN())
            {
                if (IS_CHAR_IN_CAR( sub_4109(), uParam10 ))
                {
                    l_U207 = 1;
                    l_U218 = 1;
                    sub_20957( uParam16 );
                    sub_20957( uParam20 );
                    if ((IS_WANTED_LEVEL_GREATER( sub_851(), 0 )) AND (uParam18))
                    {
                        if ((DOES_BLIP_EXIST( l_U229 )) || (DOES_BLIP_EXIST( l_U234 )))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U229 );
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 1" );
                            PRINTNL();
                            sub_20957( uParam11 );
                        }
                        if ((NOT l_U203) AND ((NOT sub_26339()) AND (NOT (sub_12270( 0 )))))
                        {
                            sub_20837( uParam19, 0 );
                            l_U247 = uParam19;
                            l_U203 = 1;
                            l_U204 = 0;
                            if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U243[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                            }
                        }
                    }
                    else if (l_U203)
                    {
                        sub_20957( uParam19 );
                        l_U203 = 0;
                        l_U204 = 1;
                    }
                    if (l_U204)
                    {
                        if (NOT (sub_12270( 0 )))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U243[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                            }
                            l_U204 = 0;
                        }
                    }
                    if (LOCATE_CHAR_IN_CAR_3D( sub_4109(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
                    {
                        iVar23 = 1;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U243[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U243[I], uParam10 )))
                                {
                                    iVar23 = 0;
                                }
                            }
                        }
                        if ((sub_26738()) AND (iVar23))
                        {
                            sub_20957( uParam11 );
                            sub_20957( uParam12 );
                            sub_20957( uParam13 );
                            sub_20957( uParam14 );
                            sub_20957( uParam15 );
                            sub_20957( uParam19 );
                            sub_14127();
                            for ( I = 0; I < 3; I++ )
                            {
                                if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                                {
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U243[I], 0 );
                                }
                            }
                            return 1;
                        }
                    }
                    else
                    {
                        iVar23 = 1;
                        for ( I = 0; I < 3; I++ )
                        {
                            if (DOES_CHAR_EXIST( l_U243[I] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U243[I], uParam10 )))
                                    {
                                        iVar23 = 0;
                                    }
                                }
                            }
                        }
                        if (NOT (DOES_BLIP_EXIST( l_U234 )))
                        {
                            if (DOES_BLIP_EXIST( l_U229 ))
                            {
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U229 );
                            }
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 2" );
                            PRINTNL();
                            ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U234 );
                            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - add blip 1" );
                            PRINTNL();
                            sub_22944( l_U234 );
                            if (l_U222)
                            {
                                SHOW_BLIP_ON_ALTIMETER( l_U234, 1 );
                            }
                        }
                        if (NOT (sub_12270( 0 )))
                        {
                            if (NOT l_U205)
                            {
                                sub_20837( uParam11, 0 );
                                l_U205 = 1;
                            }
                        }
                    }
                }
                else if ((NOT l_U218) AND ((IS_WANTED_LEVEL_GREATER( sub_851(), 0 )) AND (uParam18)))
                {
                    sub_20957( uParam16 );
                    sub_20957( uParam20 );
                    if ((DOES_BLIP_EXIST( l_U229 )) || (DOES_BLIP_EXIST( l_U234 )))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U229 );
                        PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 3" );
                        PRINTNL();
                        sub_20957( uParam11 );
                    }
                    if ((NOT l_U203) AND ((NOT sub_26339()) AND (NOT (sub_12270( 0 )))))
                    {
                        sub_20837( uParam19, 0 );
                        l_U247 = uParam19;
                        l_U203 = 1;
                        l_U204 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U243[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                        }
                    }
                }
                else if (l_U203)
                {
                    sub_20957( uParam19 );
                    l_U203 = 0;
                    l_U204 = 1;
                }
                if (l_U204)
                {
                    if (NOT (sub_12270( 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U243[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                        }
                        l_U204 = 0;
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U229 )))
                {
                    if (DOES_BLIP_EXIST( l_U234 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                        sub_20957( uParam11 );
                    }
                    ADD_BLIP_FOR_CAR( uParam10, ref l_U229 );
                    CHANGE_BLIP_DISPLAY( l_U229, 2 );
                    PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - add blip 2" );
                    PRINTNL();
                    SET_BLIP_AS_FRIENDLY( l_U229, 1 );
                    if (NOT l_U208)
                    {
                        sub_22944( l_U229 );
                    }
                }
                if (NOT (sub_12270( 0 )))
                {
                    if (NOT l_U207)
                    {
                        sub_20837( uParam16, 0 );
                        l_U207 = 1;
                    }
                    else if (l_U218)
                    {
                        if (NOT (IS_STRING_NULL( uParam20 )))
                        {
                            if (NOT l_U208)
                            {
                                sub_20837( uParam20, 0 );
                                l_U208 = 1;
                            }
                        }
                        else if (NOT l_U208)
                        {
                            sub_20837( uParam16, 0 );
                            l_U208 = 1;
                        }
                    }
                };;;
            }
        }
        else if (l_U203)
        {
            l_U203 = 0;
        }
        if (DOES_BLIP_EXIST( l_U234 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
            sub_20957( uParam11 );
        }
        if (DOES_BLIP_EXIST( l_U229 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U229 );
            PRINTSTRING( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - remove blip 3" );
            PRINTNL();
            sub_20957( uParam16 );
        }
    }
    else
    {
        SCRIPT_ASSERT( "IS_PLAYER_AT_LOCATION_WITH_BUDDIES_IN_CAR - check vehicle is alive before calling this." );
        return 0;
    }
    sub_28708( uParam0, uParam1, uParam2, 0, uParam10 );
    sub_32137( uParam0, uParam1, uParam2 );
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    return 0;
}

void sub_19044()
{
    int I;

    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                if ((sub_12286()) AND ((sub_19137( l_U243[I] )) AND (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U243[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_851() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_4109() )))
        {
            if ((sub_12286()) AND ((sub_19137( sub_4109() )) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_4109() ))))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_4109(), 1 );
            }
        }
    }
    return;
}

int sub_19137(int iParam0)
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (l_U19._fU16[I]._fU0 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_19331()
{
    if (NOT l_U216)
    {
        l_U251 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U203 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U204 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U205 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U206 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U208 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U207 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U209 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U210[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U210[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U210[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U214 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U215 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U236, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U237, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U238, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U248._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U248._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U248._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U217 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U218 );
        END_WIDGET_GROUP();
        l_U216 = 1;
    }
    return;
}

void sub_20211()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_851() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4109(), 0 );
    }
    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U243[I], 0 );
            }
        }
    }
    return;
}

int sub_20409(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int[3] iVar20;
    boolean bVar24;
    boolean bVar25;
    int iVar26;
    int iVar27;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    l_U243[0] = uParam0;
    l_U243[1] = uParam1;
    l_U243[2] = uParam2;
    l_U242 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    iVar18 = 1;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
        {
            iVar16++;
        }
    }
    if ((NOT (DOES_VEHICLE_EXIST( iParam9 ))) AND ((IS_CHAR_SITTING_IN_ANY_CAR( sub_4109() )) AND (NOT sub_20580())))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4109(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U223)
            {
                sub_20837( "MORE_SEATS", 0 );
                l_U223 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U223 = 0;
        sub_20957( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_21067() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U243[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U243[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4109() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4109(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U243[I], sub_21067() ))
                        {
                            if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_4109() )) AND (NOT sub_20580()))
                            {
                                if (NOT (sub_21269( l_U243[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_21067() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U243[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_4109(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U243[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U243[I], sub_21067() ))
                {
                    if (sub_21830())
                    {
                        if (l_U225[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U243[I], -1 );
                            l_U225[I] = 0;
                        }
                    }
                    else if (NOT l_U225[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U243[I], 2 );
                        l_U225[I] = 1;
                    }
                }
                if ((NOT (sub_22108( l_U243[I], iParam9 ))) AND ((NOT (sub_22012( l_U243[I], iParam9 ))) AND (NOT (IS_GROUP_MEMBER( l_U243[I], sub_21067() )))))
                {
                    if (sub_22221( l_U243[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_21067() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U243[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_21067(), l_U243[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U230[I] )))
                        {
                            GET_GAME_TIMER( ref l_U240 );
                            ADD_BLIP_FOR_CHAR( l_U243[I], ref l_U230[I] );
                            CHANGE_BLIP_DISPLAY( l_U230[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U230[I], 1 );
                            if (bParam8)
                            {
                                sub_22944( l_U230[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U230[I] ))
                {
                    if ((uParam11) || ((sub_22012( l_U243[I], iParam9 )) || (sub_23063( l_U243[I] ))))
                    {
                        if (DOES_BLIP_EXIST( l_U230[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_20957( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_22944( l_U230[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U243[I], iParam9 )))
                    {
                        if ((NOT l_U220) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U243[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U243[I], iParam9 )))
                                {
                                    if (NOT (sub_23063( l_U243[I] )))
                                    {
                                        if (sub_23671( l_U243[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U243[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U243[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_4109(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_4109(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U243[I], sub_21067() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U243[I], 1 );
                                if (l_U219)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U243[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U243[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_4109(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U243[I], ref l_U230[I] );
                                CHANGE_BLIP_DISPLAY( l_U230[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U230[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_21067() )))
                        {
                            if (sub_22221( l_U243[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U243[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U243[I], 0 );
                                SET_GROUP_MEMBER( sub_21067(), l_U243[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_4109(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_21067() )))
                        {
                            SET_GROUP_MEMBER( sub_21067(), l_U243[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U243[I], sub_21067() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U230[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_20957( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U230[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_12270( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U243[I], sub_4109(), 40.00000000, 40.00000000, 40.00000000, 0 )) || (sub_21269( l_U243[I] )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if ((iVar16 == 1) || ((iVar17 - l_U240) > 1500))
        {
            if (iVar15 > 0)
            {
                if (l_U241 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U241 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar16 > 1) AND (iVar15 == iVar16))
                    {
                        if ((NOT (l_U241 == iVar15)) AND (NOT l_U209))
                        {
                            sub_20837( uParam6, 0 );
                            l_U209 = 1;
                            l_U241 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT (l_U241 == iVar15)) AND (NOT l_U210[I]))
                                {
                                    sub_20837( uVar28[I], 0 );
                                    l_U210[I] = 1;
                                    l_U241 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U241 = 0;
            }
        }
    }
    l_U219 = 0;
    if ((NOT bVar25) AND (iVar18))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U230[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_20957( uVar28[I] );
            }
        }
        sub_20957( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_4109() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4109(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                {
                    SET_CHAR_COORDINATES( l_U243[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_20580()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4109() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4109(), ref uVar2 );
        if (sub_20621( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_20621(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U243; I++ )
        {
            if (DOES_CHAR_EXIST( l_U243[I] ))
            {
                iVar3++;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        if (iVar4 >= iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_20837(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (IS_STRING_NULL( uParam0 )))
        {
            if (NOT (COMPARE_STRING( uParam0, "" )))
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U239 );
    return;
}

void sub_20957(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

void sub_21067()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_21269(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_851() ))
    {
        GET_CAR_CHAR_IS_USING( sub_4109(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4109(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_21830()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_4109(), ref uVar2 );
    if (sub_20621( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_22012(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_22108(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_21067() )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (IS_VEH_DRIVEABLE( iParam1 ))
            {
                if (iVar4 == iParam1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_22221(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_VEH_DRIVEABLE( uVar5 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_4109(), uVar5 ))
                    {
                        if (sub_20580())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4109(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4109(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_21830())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_4109(), ref uVar5 );
                    if (NOT (DOES_VEHICLE_EXIST( uVar5 )))
                    {
                        return 1;
                    }
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_22944(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U235 ))
        {
            SET_ROUTE( l_U235, 0 );
        }
        l_U235 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_23063(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4109() ))
        {
            if (sub_23111( sub_4109(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_21067(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_21067() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_21067(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_23111(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_23671(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 < 0.50000000) AND (fVar3 > -0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_26339()
{
    if (NOT (IS_CHAR_INJURED( l_U242 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U242 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_26738()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4109() ))
    {
        if ((IS_CHAR_IN_ANY_HELI( sub_4109() )) || (IS_CHAR_ON_ANY_BIKE( sub_4109() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U221)
    {
        if (sub_23671( sub_4109() ))
        {
            if ((l_U215) || (sub_26828( 1, iVar2 )))
            {
                return 1;
            }
        }
    }
    else if ((l_U215) || (sub_26828( 1, iVar2 )))
    {
        return 1;
    }
    return 0;
}

int sub_26828(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_4109() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4109(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_4109() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4109(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_4109()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_4109() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_4109() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_851() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_851() )))
    {
        return 0;
    }
    return 1;
}

void sub_28708(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_19331();
    if (l_U214)
    {
        uParam0 = l_U248._fU0;
        uParam1 = l_U248._fU4;
        uParam2 = l_U248._fU8;
        uVar12 = l_U238;
        l_U214 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_4109() )))
    {
        GET_CHAR_HEADING( sub_4109(), ref uVar12 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            PRINTSTRING( "J_SKIP - called" );
            PRINTNL();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_851() );
            sub_28919( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_29340( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U243; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                        if (NOT (IS_CHAR_INJURED( sub_4109() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_4109(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U243[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U243[I], uVar12 );
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( uParam4 ))
            {
                PRINTSTRING( "J_SKIP - SpecificCarID exists" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4109() );
                    WARP_CHAR_INTO_CAR( sub_4109(), uParam4 );
                    for ( I = 0; I < l_U243; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U243[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U243[I], 0 );
                            }
                        }
                    }
                }
                sub_29340( uParam0, uParam1, uParam2, uVar12 );
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    SET_CAR_COORDINATES( uParam4, uParam0, uParam1, uParam2 );
                }
            }
            else
            {
                PRINTSTRING( "J_SKIP - searching for temp_car" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( uVar8 )))
                    {
                        PRINTSTRING( "J_SKIP - temp_car existed but not driveable" );
                        PRINTNL();
                        uVar8 = nil;
                    }
                }
                if (NOT (DOES_VEHICLE_EXIST( uVar8 )))
                {
                    PRINTSTRING( "J_SKIP - creating new temp_car" );
                    PRINTNL();
                    REQUEST_MODEL( 1264341792 );
                    while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar8, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4109() );
                    WARP_CHAR_INTO_CAR( sub_4109(), uVar8 );
                    sub_30247( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_4109() );
                        WARP_CHAR_INTO_CAR( sub_4109(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U243; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U243[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U243; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U243[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uVar8, I );
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( uVar8 ))
                {
                    SET_CAR_COORDINATES( uVar8, uParam0, uParam1, uParam2 );
                    SET_CAR_HEADING( uVar8, uVar12 );
                }
            }
            LOAD_SCENE( uParam0, uParam1, uParam2 );
            WAIT( 500 );
            sub_30867( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_28919(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_851() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_4109() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_4109(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_4109(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_29039( (uParam0^) );
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    else
    {
        (uParam0^) = nil;
    }
    return;
}

void sub_29039(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
                else
                {
                    DELETE_CHAR( ref uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                        else
                        {
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_29340(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_4109(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_4109(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_4109(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_4109(), uParam3 );
    return;
}

void sub_30247(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_30867(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if (((bParam0) || (IS_SCREEN_FADED_OUT())) AND (NOT (IS_CHAR_INJURED( sub_4109() ))))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_31247( sub_4109(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_31247( sub_4109(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_31247( sub_4109(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_31796( 0 );
        sub_31796( 1 );
        sub_31796( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U202 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U202;
            if (((g_U30110[2] == 0) AND ((g_U30110[1] == 0) AND (g_U30110[0] == 0))) || (iVar6 > 15000))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_31247(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_31258( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_11288( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_31258(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( -399.10690000, 397.67000000, 14.17720000);
        break;
        case 1:
        return vector( -468.03000000, 153.41000000, 9.80000000);
        break;
        case 2:
        return vector( -440.28000000, 356.98000000, 11.54000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

void sub_31796(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_32137(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_32162( uParam0, uParam1, uParam2, l_U236, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_4109(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U236, l_U236, l_U236, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U236 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U236 );
            }
        }
    }
    return;
}

int sub_32162(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_32179( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_4109(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_32179(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_32526()
{
    boolean bVar2;
    float fVar3;
    vector vVar4;

    SET_PLAYER_CONTROL( sub_851(), 0 );
    sub_10933( 1 );
    sub_8656( ref l_U400, 1 );
    CLEAR_WANTED_LEVEL( sub_851() );
    CLEAR_AREA( -457.64210000, 155.78990000, 8.87160000, 100, 1 );
    ENABLE_SCENE_STREAMING( 0 );
    BEGIN_CAM_COMMANDS( ref l_U381 );
    if (NOT l_U382)
    {
        sub_32634();
    }
    if (NOT (IS_CHAR_DEAD( l_U290 )))
    {
        if (IS_PED_IN_GROUP( l_U290 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U290 );
        }
    }
    bVar2 = false;
    if (NOT (IS_CAR_DEAD( l_U275 )))
    {
        SET_CAR_ENGINE_ON( l_U275, 0, 0 );
        GET_CAR_HEADING( l_U275, ref fVar3 );
        if ((fVar3 < 90) || (fVar3 > 270))
        {
            SET_CAR_HEADING( l_U275, 0 );
            bVar2 = true;
        }
        if (fVar3 > 90)
        {
            if (fVar3 < 270)
            {
                SET_CAR_HEADING( l_U275, 180 );
            }
        }
        SET_CAR_COORDINATES( l_U275, -456.87830000, 155.73680000, 8.88659900 );
        SET_CAR_ON_GROUND_PROPERLY( l_U275 );
    }
    SET_USE_HIGHDOF( 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (bVar2)
    {
        SET_CAM_POS( l_U384, -461.55360000, 161.40890000, 9.76945900 );
        SET_CAM_ROT( l_U384, 11.37411000, -0.00000000, -139.05630000 );
        SET_CAM_FOV( l_U384, 45.00000000 );
        SET_CAM_POS( l_U385, -451.07200000, 162.19450000, 9.75455000 );
        SET_CAM_ROT( l_U385, 11.37411000, -0.00000000, 152.94330000 );
        SET_CAM_FOV( l_U385, 45.00000000 );
    }
    else
    {
        SET_CAM_POS( l_U384, -450.66990000, 147.16930000, 11.42206000 );
        SET_CAM_ROT( l_U384, 1.14287100, -0.00000000, 40.30760000 );
        SET_CAM_FOV( l_U384, 45.00000000 );
        SET_CAM_POS( l_U385, -466.58870000, 148.35280000, 11.41458000 );
        SET_CAM_ROT( l_U385, 1.14287100, -0.00000000, -45.87346000 );
        SET_CAM_FOV( l_U385, 45.00000000 );
    }
    SET_CAM_ACTIVE( l_U386, 1 );
    SET_CAM_PROPAGATE( l_U386, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U386, l_U384, l_U385, 12000, 0 );
    SETTIMERA( 0 );
    while (l_U387 == 1)
    {
        switch (l_U388)
        {
            case 0:
            if (TIMERA() > 500)
            {
                if (l_U333 > 5)
                {
                    sub_7324( "E2Tm8_PASF", ref l_U400, 7, 1 );
                }
                else
                {
                    sub_7324( "E2Tm8_PASC", ref l_U400, 7, 1 );
                }
                l_U388++;
            }
            break;
            case 1:
            if (TIMERA() > 2000)
            {
                for ( l_U357 = 0; l_U357 <= 1; l_U357++ )
                {
                    if (DOES_VEHICLE_EXIST( l_U354[l_U357] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U354[l_U357] ))
                        {
                            CREATE_CHAR_INSIDE_CAR( l_U354[l_U357], 26, 1969438324, ref l_U292[l_U357] );
                        }
                    }
                }
                if (bVar2)
                {
                    vVar4 = {-463.99800000, 155.41640000, 8.85870000};
                }
                else
                {
                    vVar4 = {-463.14270000, 147.85390000, 8.80350000};
                }
                if (NOT (IS_CAR_DEAD( l_U275 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U290 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U399 );
                        TASK_LEAVE_CAR( 0, l_U275 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar4.x, vVar4.y, vVar4.z, 2, 30000, 2 );
                        TASK_LOOK_AT_CHAR( 0, l_U290, -2, 0 );
                        CLOSE_SEQUENCE_TASK( l_U399 );
                        TASK_PERFORM_SEQUENCE( sub_4109(), l_U399 );
                        CLEAR_SEQUENCE_TASK( l_U399 );
                    }
                }
                l_U388++;
            }
            break;
            case 2:
            if (TIMERA() > 3000)
            {
                if (NOT (IS_CHAR_INJURED( l_U290 )))
                {
                    if (NOT (IS_CAR_DEAD( l_U275 )))
                    {
                        TASK_LEAVE_CAR( l_U290, l_U275 );
                    }
                }
                l_U388++;
            }
            break;
            case 3:
            if (TIMERA() > 5500)
            {
                if (NOT (IS_CHAR_INJURED( l_U290 )))
                {
                    if (bVar2)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U399 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, -463.99800000, 155.41640000, 8.85870000, 2, 60000, 3.50000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, -469.52990000, 149.72690000, 8.85890000, 2, 60000, 2 );
                        CLOSE_SEQUENCE_TASK( l_U399 );
                        TASK_PERFORM_SEQUENCE( l_U290, l_U399 );
                        CLEAR_SEQUENCE_TASK( l_U399 );
                    }
                    else
                    {
                        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( l_U290, -469.52990000, 149.72690000, 8.85890000, 2, 60000, 2 );
                    }
                }
                l_U388++;
            }
            break;
            case 4:
            if (TIMERA() > 10000)
            {
                SET_CAM_POS( l_U383, -449.23890000, 163.41500000, 18.80471000 );
                SET_CAM_ROT( l_U383, -33.99693000, 0.00000000, 134.49390000 );
                SET_CAM_FOV( l_U383, 45.00000000 );
                SET_CAM_ACTIVE( l_U386, 0 );
                SET_CAM_PROPAGATE( l_U386, 0 );
                SET_CAM_ACTIVE( l_U383, 1 );
                SET_CAM_PROPAGATE( l_U383, 1 );
                if (NOT (IS_CHAR_DEAD( l_U290 )))
                {
                    sub_34386( sub_4109(), l_U290 );
                    TASK_LOOK_AT_CHAR( sub_4109(), l_U290, -2, 0 );
                }
                if (NOT (IS_CHAR_INJURED( l_U292[0] )))
                {
                    if (DOES_VEHICLE_EXIST( l_U354[0] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U354[0] ))
                        {
                            TASK_CAR_DRIVE_TO_COORD( l_U292[0], l_U354[0], -421.17320000, 184.63240000, 10.43200000, 18, 0, -1961627517, 2, 1, 10 );
                        }
                    }
                }
                l_U388++;
            }
            break;
            case 5:
            if (TIMERA() > 14000)
            {
                SET_CAM_POS( l_U383, -467.82210000, 150.90650000, 10.15231000 );
                SET_CAM_ROT( l_U383, 4.65014200, -0.00000000, -36.56290000 );
                SET_CAM_FOV( l_U383, 35.70002000 );
                SET_CAM_ACTIVE( l_U383, 0 );
                SET_CAM_PROPAGATE( l_U383, 0 );
                SET_CAM_ACTIVE( l_U383, 1 );
                SET_CAM_PROPAGATE( l_U383, 1 );
                if (DOES_VEHICLE_EXIST( l_U275 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U275 ))
                    {
                        CREATE_CHAR_INSIDE_CAR( l_U275, 26, 1969438324, ref l_U292[2] );
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U292[1] )))
                {
                    if (DOES_VEHICLE_EXIST( l_U354[1] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U354[1] ))
                        {
                            TASK_CAR_DRIVE_TO_COORD( l_U292[1], l_U354[1], -492.67460000, 122.86070000, 6.89830000, 18, 0, -1961627517, 2, 1, 10 );
                        }
                    }
                }
                if (bVar2)
                {
                    SET_CHAR_HEADING( sub_4109(), 119.22570000 );
                }
                else
                {
                    SET_CHAR_HEADING( sub_4109(), 48.45510000 );
                }
                if (NOT (IS_CHAR_DEAD( l_U290 )))
                {
                    TASK_LOOK_AT_CHAR( sub_4109(), l_U290, -2, 0 );
                }
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_5227( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                        sub_7324( "E2Tm8_WLCM", ref l_U400, 7, 1 );
                    }
                }
                l_U388++;
            }
            break;
            case 6:
            if (TIMERA() > 17000)
            {
                l_U388++;
            }
            break;
            case 7:
            SET_CAM_ACTIVE( l_U383, 0 );
            SET_CAM_PROPAGATE( l_U383, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_4109() );
            l_U387 = 0;
            break;
        }
        if (sub_35306())
        {
            l_U387 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            if (NOT (IS_CAR_DEAD( l_U275 )))
            {
                if (IS_CHAR_IN_CAR( sub_4109(), l_U275 ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_4109(), -464.79150000, 156.53630000, 8.85890000 );
                }
                else
                {
                    SET_CHAR_COORDINATES( sub_4109(), -464.79150000, 156.53630000, 8.85890000 );
                }
            }
            SET_CHAR_HEADING( sub_4109(), 121.56390000 );
            DELETE_CHAR( ref l_U290 );
            DELETE_CAR( ref l_U275 );
            DELETE_CAR( ref l_U354[0] );
            DELETE_CAR( ref l_U354[1] );
            INCREMENT_INT_STAT( 372, 1 );
            sub_8656( ref l_U400, 0 );
            SET_CAM_ACTIVE( l_U386, 0 );
            SET_CAM_PROPAGATE( l_U386, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_4109() );
        }
        WAIT( 0 );
    }
    TASK_CLEAR_LOOK_AT( sub_4109() );
    DELETE_CHAR( ref l_U290 );
    END_CAM_COMMANDS( ref l_U381 );
    ENABLE_SCENE_STREAMING( 1 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    SET_PLAYER_CONTROL( sub_851(), 1 );
    return;
}

void sub_32634()
{
    if (NOT (DOES_CAM_EXIST( l_U383 )))
    {
        CREATE_CAM( 14, ref l_U383 );
    }
    if (NOT (DOES_CAM_EXIST( l_U385 )))
    {
        CREATE_CAM( 14, ref l_U385 );
    }
    if (NOT (DOES_CAM_EXIST( l_U384 )))
    {
        CREATE_CAM( 14, ref l_U384 );
    }
    if (NOT (DOES_CAM_EXIST( l_U386 )))
    {
        CREATE_CAM( 3, ref l_U386 );
    }
    l_U382 = 1;
    return;
}

void sub_34386(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    GET_HEADING_FROM_VECTOR_2D( uVar10._fU0, uVar10._fU4, ref l_U421 );
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_PED_RAGDOLL( uParam0 )))
        {
            SET_CHAR_HEADING( uParam0, l_U421 );
        }
    }
    return;
}

int sub_35306()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_35838()
{
    g_U25 = 82;
    INCREMENT_INT_STAT( 244, 1 );
    g_U43682 = 1;
    g_U43674++;
    if (g_U43674 > 7)
    {
        sub_35903( 0 );
        sub_36550();
        g_U43683 = 1;
    }
    sub_36711();
    sub_2648();
    return;
}

void sub_35903(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 1;
    switch (uParam0)
    {
        case 0:
        iVar3 = 0;
        break;
        default: return;
    }
    if (iVar3 == 1)
    {
        return;
    }
    iVar4 = 0;
    if (NOT g_U43026[iVar3]._fU0)
    {
        iVar4 = g_U43026[iVar3]._fU8;
        if (iVar4 > 0)
        {
            sub_36015( 1, iVar4 );
            g_U43026[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_36015(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_36185( 0 );
    return;
}

void sub_36185(boolean bParam0)
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
        if (g_U28780[I]._fU4 == g_U28780[I]._fU0)
        {
            fVar4 = g_U28780[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U28780[I]._fU0 );
            fVar6 = TO_FLOAT( g_U28780[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U28780[I]._fU8;
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
    SET_FLOAT_STAT( 187, fVar3 );
    if (bVar7)
    {
        sub_36430();
    }
    if ((NOT ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_36430()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_36550()
{
    g_U15811[38] = 1;
    sub_36579( 2, 10000, 60000 );
    return;
}

void sub_36579(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_36594( uParam0, uParam1, uParam2 );
    return;
}

void sub_36594(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15904[uParam0]._fU0 = 1;
    g_U15904[uParam0]._fU4 = iVar5 + iParam1;
    g_U15904[uParam0]._fU8 = uParam2;
    g_U15904[uParam0]._fU12 = 0;
    g_U15904[uParam0]._fU16 = 0;
    return;
}

void sub_36711()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_924( iVar2, 500, 3, 1, 0, 0 );
    SET_PLAYER_MOOD_NORMAL( sub_851() );
    sub_36758();
    sub_36842();
    sub_36930( 0 );
    sub_1686();
    return;
}

void sub_36758()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void sub_36842()
{
    sub_36851();
    return;
}

void sub_36851()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_36930(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_36981( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_36981(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_37133()
{
    if (DOES_BLIP_EXIST( l_U346 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U346 );
    }
    if (DOES_BLIP_EXIST( l_U276 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U276 );
    }
    return;
}

