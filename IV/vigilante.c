void main()
{
    unknown uVar2;
    int I;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    l_U0 = -1;
    l_U8 = 225;
    l_U9 = 0;
    l_U10 = 1;
    l_U11 = 3;
    l_U51 = 100.00000000;
    l_U96 = 1;
    l_U103 = 0;
    l_U105 = 0.92500000;
    l_U106 = 0.30000000;
    l_U107 = 0.25000000;
    l_U108 = 0.48000000;
    l_U109 = 0.44000000;
    l_U110 = 0.93000000;
    l_U111 = 0.20000000;
    l_U112 = 0.20000000;
    l_U113 = 0.43000000;
    l_U114 = 0.49000000;
    l_U124 = 0;
    SET_MISSION_FLAG( 1 );
    sub_168();
    sub_219();
    sub_362();
    SET_MAX_WANTED_LEVEL( 6 );
    SET_WANTED_MULTIPLIER( 0.10000000 );
    sub_1069();
    l_U103 = 0;
    g_U8196 = {l_U131._fU16};
    l_U53[0] = {-0.62380000, -2.71480000, 0.00000000};
    l_U53[1] = {2.53400000, -1.89770000, 0.00000000};
    l_U53[2] = {1.34760000, -1.66360000, 0.00000000};
    l_U88[0] = 1.30000000;
    l_U88[1] = 1.50000000;
    l_U88[2] = 1.70000000;
    l_U88[3] = 1.98000000;
    l_U88[4] = 2.02000000;
    l_U119 = l_U131._fU0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1841();
        sub_1901();
        sub_1918();
        g_U8217 = 0;
        TERMINATE_THIS_SCRIPT();
    }
    if (NOT (IS_CHAR_DEAD( sub_228() )))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_228(), 0 );
    }
    while (true)
    {
        GET_GAME_TIMER( ref l_U125 );
        if ((IS_SCREEN_FADED_OUT()) AND (sub_2007( sub_228() )))
        {
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
            PRINT_NOW( "VIG_FAIL", 3000, 1 );
            sub_1841();
            sub_1901();
            sub_1918();
            DO_SCREEN_FADE_IN( 0 );
            g_U8217 = 0;
            TERMINATE_THIS_SCRIPT();
        }
        switch (l_U131._fU0)
        {
            case 0:
            sub_2398( l_U131._fU16, l_U131._fU12 );
            break;
            case 1:
            if (l_U131._fU4 < 30)
            {
                sub_10574( l_U131._fU16, l_U131._fU12 );
            }
            else if (l_U131._fU4 >= 110)
            {
                sub_10574( l_U131._fU16, l_U131._fU12 );
            }
            else
            {
                sub_13968( l_U131._fU16, l_U131._fU12 );
            }
            break;
            case 2:
            if (l_U131._fU4 < 50)
            {
                sub_16543( l_U131._fU16, l_U131._fU12 );
            }
            else if ((l_U131._fU4 < 100) AND (l_U131._fU4 > 50))
            {
                sub_16543( l_U131._fU16, l_U131._fU12 );
            }
            else
            {
                sub_16543( l_U131._fU16, l_U131._fU12 );
            }
            break;
        }
        if (IS_KEYBOARD_KEY_PRESSED( 31 ))
        {
            if (DOES_CHAR_EXIST( l_U13 ))
            {
                DELETE_CHAR( ref l_U13 );
            }
            for ( I = 0; I <= 7; I++ )
            {
                if (DOES_CHAR_EXIST( l_U14[I] ))
                {
                    DELETE_CHAR( ref l_U14[I] );
                }
            }
        }
        if (NOT (IS_BUTTON_PRESSED( 0, 19 )))
        {
            l_U36 = 0;
        }
        if (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            if (NOT (IS_CHAR_FATALLY_INJURED( l_U13 )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U13, 0.00000000, -15.00000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                SET_CHAR_COORDINATES( sub_228(), uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
        }
        WAIT( 0 );
    }
    return;
}

void sub_168()
{
    g_U811 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_219()
{
    if (NOT (IS_CHAR_INJURED( sub_228() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_228() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_228(), ref l_U44 );
            SWITCH_CAR_SIREN( l_U44, 1 );
            SET_VEH_HAS_STRONG_AXLES( l_U44, 1 );
            FORCE_CAR_LIGHTS( l_U44, 2 );
        }
    }
    return;
}

void sub_228()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_362()
{
    OPEN_SEQUENCE_TASK( ref l_U66[0] );
    TASK_START_SCENARIO_IN_PLACE( 0, "HangOut_OutsideLiquorStore", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U66[0] );
    OPEN_SEQUENCE_TASK( ref l_U66[1] );
    TASK_START_SCENARIO_IN_PLACE( 0, "HangOut_OutsideLiquorStore", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U66[1] );
    OPEN_SEQUENCE_TASK( ref l_U66[2] );
    TASK_START_SCENARIO_IN_PLACE( 0, "HangOut_OutsideLiquorStore", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U66[2] );
    OPEN_SEQUENCE_TASK( ref l_U66[3] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_SellingDrugs", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U66[3] );
    OPEN_SEQUENCE_TASK( ref l_U66[4] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Homeless", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U66[4] );
    OPEN_SEQUENCE_TASK( ref l_U66[5] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Prostitute", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U66[5] );
    OPEN_SEQUENCE_TASK( ref l_U66[6] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Standing", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U66[6] );
    OPEN_SEQUENCE_TASK( ref l_U66[7] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_Homeless", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U66[7] );
    OPEN_SEQUENCE_TASK( ref l_U66[8] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_SmokingOutsideOffice", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U66[8] );
    OPEN_SEQUENCE_TASK( ref l_U66[9] );
    TASK_START_SCENARIO_IN_PLACE( 0, "Scenario_LayingDruggie", -1082130432 );
    CLOSE_SEQUENCE_TASK( l_U66[9] );
    return;
}

void sub_1069()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1107( 1, g_U569[I] )) == 0)
        {
            sub_1358( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_1536())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_1107(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1358(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1443( g_U569 - 1 );
    return;
}

void sub_1443(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1536()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1107( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1841()
{
    if (IS_VEH_DRIVEABLE( l_U44 ))
    {
        SWITCH_CAR_SIREN( l_U44, 0 );
        FORCE_CAR_LIGHTS( l_U44, 1 );
    }
    return;
}

void sub_1901()
{
    return;
}

void sub_1918()
{
    g_U10978 = 0;
    return;
}

int sub_2007(int iParam0)
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
                if (sub_2071( uVar3 ))
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

int sub_2071(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_2398(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    if (NOT (IS_CHAR_FATALLY_INJURED( sub_228() )))
    {
        switch (l_U120)
        {
            case 0:
            if (sub_2474( uParam0, uParam3 ))
            {
                l_U120 = 1;
                l_U118 = 4;
            }
            break;
            case 1:
            sub_5236();
            sub_5882();
            if (sub_5268())
            {
                if (NOT l_U97)
                {
                    PRINT_NOW( "VIG_CCL", 7500, 1 );
                    l_U97 = 1;
                }
            }
            if (IS_CHAR_FATALLY_INJURED( l_U13 ))
            {
                l_U120 = 2;
            }
            if (sub_6996( l_U13 ))
            {
                l_U120 = 3;
            }
            switch (l_U118)
            {
                case 4:
                switch (l_U95)
                {
                    case 0:
                    if (NOT (IS_CHAR_INJURED( l_U13 )))
                    {
                        TASK_WANDER_STANDARD( l_U13 );
                        l_U118 = 1;
                    }
                    break;
                    case 1:
                    if (NOT (IS_CHAR_INJURED( l_U13 )))
                    {
                        TASK_WANDER_STANDARD( l_U13 );
                        l_U118 = 0;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( l_U13 )))
                    {
                        if (NOT l_U115)
                        {
                            uVar8 = sub_8110();
                            if (LOAD_ALL_PATH_NODES( 1 ))
                            {
                                GET_CLOSEST_CAR_NODE( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                                REQUEST_MODEL( uVar8 );
                                if (HAS_MODEL_LOADED( uVar8 ))
                                {
                                    CREATE_CAR( uVar8, uVar9._fU0, uVar9._fU4, uVar9._fU8, ref l_U23, 1 );
                                    SET_CAR_CAN_BE_DAMAGED( l_U23, 1 );
                                    LOCK_CAR_DOORS( l_U23, 7 );
                                    l_U115 = 1;
                                    TASK_PERFORM_SEQUENCE( l_U13, l_U66[8] );
                                    l_U118 = 1;
                                }
                            }
                        }
                        if (l_U115)
                        {
                            if ((IS_PLAYER_TARGETTING_CHAR( sub_4285(), l_U13 )) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4285(), l_U13 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U13, sub_228(), 0 )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_228(), l_U13, 30.00000000, 30.00000000, 12.50000000, 0 )))))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U13 );
                                if (NOT (IS_CAR_DEAD( l_U23 )))
                                {
                                    if (NOT l_U98)
                                    {
                                        TASK_ENTER_CAR_AS_DRIVER( l_U13, l_U23, -1 );
                                        l_U98 = 1;
                                    }
                                    if (l_U98)
                                    {
                                        if (IS_CHAR_IN_CAR( l_U13, l_U23 ))
                                        {
                                            TASK_CAR_DRIVE_WANDER( l_U13, l_U23, 25.00000000, 2 );
                                            l_U118 = 3;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U13 )))
                    {
                        if (NOT l_U115)
                        {
                            TASK_PERFORM_SEQUENCE( l_U13, l_U66[8] );
                            l_U115 = 1;
                        }
                        if (l_U115)
                        {
                            if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U13, sub_228(), 0 )) || (HAS_CHAR_SPOTTED_CHAR( l_U13, sub_228() )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U13 );
                                l_U118 = 2;
                            }
                        }
                    }
                    break;
                }
                break;
                case 2:
                if (NOT (IS_CHAR_INJURED( l_U13 )))
                {
                    if (NOT (IS_PED_IN_COMBAT( l_U13 )))
                    {
                        TASK_COMBAT( l_U13, sub_228() );
                        l_U118 = 3;
                    }
                }
                break;
                case 1:
                switch (l_U95)
                {
                    case 0:
                    if (NOT (IS_CHAR_FATALLY_INJURED( l_U13 )))
                    {
                        if ((IS_PLAYER_TARGETTING_CHAR( sub_4285(), l_U13 )) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4285(), l_U13 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U13, sub_228(), 0 )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_228(), l_U13, 30.00000000, 30.00000000, 12.50000000, 0 )))))
                        {
                            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U13 );
                            l_U118 = 2;
                        }
                    }
                    break;
                    default:
                }
                break;
                case 0:
                if (NOT (IS_CHAR_INJURED( l_U13 )))
                {
                    if ((IS_PLAYER_TARGETTING_CHAR( sub_4285(), l_U13 )) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_4285(), l_U13 )) || ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U13, sub_228(), 0 )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_228(), l_U13, 30.00000000, 30.00000000, 12.50000000, 0 )))))
                    {
                        TASK_SMART_FLEE_CHAR( l_U13, sub_228(), 800.00000000, 600000 );
                        l_U118 = 3;
                    }
                }
                break;
                case 3: break;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( sub_228() )))
            {
                CLEAR_HELP();
                CLEAR_PRINTS();
                sub_1841();
                sub_1901();
                sub_1918();
                l_U104 = 1;
                sub_9393( 0 );
                TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
                g_U8217 = 0;
                g_U8217 = 0;
                TERMINATE_THIS_SCRIPT();
            }
            break;
            case 3:
            while (NOT (IS_PLAYER_CONTROL_ON( sub_4285() )))
            {
                WAIT( 0 );
            }
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
            CLEAR_PRINTS();
            PRINT_NOW( "VIG_FAIL", 3000, 1 );
            sub_1841();
            sub_1901();
            sub_1918();
            g_U8217 = 0;
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

int sub_2474(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    # -sub_C1FFC0-0xc214c8( sub_2483(), ref l_U45 );
    LOAD_COMBAT_DECISION_MAKER( sub_2578(), ref l_U46 );
    l_U77[0] = sub_2673();
    REQUEST_MODEL( l_U77[0] );
    while (NOT (HAS_MODEL_LOADED( l_U77[0] )))
    {
        WAIT( 0 );
    }
    CREATE_CHAR( 26, l_U77[0], uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U13, 1 );
    if (NOT (IS_CHAR_FATALLY_INJURED( l_U13 )))
    {
        SET_CHAR_AS_MISSION_CHAR( l_U13 );
        SET_CHAR_HEALTH( l_U13, sub_3425() );
        GIVE_DELAYED_WEAPON_TO_CHAR( l_U13, sub_3525(), 100, 1 );
        SET_CHAR_DECISION_MAKER( l_U13, l_U45 );
        SET_COMBAT_DECISION_MAKER( l_U13, l_U46 );
        g_U8217 = 1;
        SET_CHAR_DROWNS_IN_WATER( l_U13, 0 );
        SET_CHAR_CAN_SMASH_GLASS( l_U13, 1 );
        SET_CHAR_IS_TARGET_PRIORITY( l_U13, 1 );
        SET_CHAR_ACCURACY( l_U13, sub_3832() );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U13, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U13, 4 );
        SET_CHAR_RELATIONSHIP( l_U13, 5, 0 );
        SET_CHAR_SHOOT_RATE( l_U13, sub_3966() );
        SET_CHAR_WILL_USE_COVER( l_U13, 1 );
        SET_PED_PATH_MAY_USE_CLIMBOVERS( l_U13, 1 );
        SET_SENSE_RANGE( l_U13, 15.00000000 );
        SET_CHAR_ALLOWED_TO_DUCK( l_U13, 1 );
        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U13, 1 );
        SET_PED_DIES_WHEN_INJURED( l_U13, 1 );
        SET_CHAR_WEAPON_SKILL( l_U13, sub_4136() );
        l_U103 = sub_4225();
        l_U43 = sub_4936();
        SET_CHAR_MONEY( l_U13, l_U43 );
        PRINT_STRING_WITH_SUBSTRING_GIVEN_HASH_KEY_NOW( "PVBST_S", uParam3, 5000, 1 );
        TRIGGER_VIGILANTE_CRIME( 0, uParam0 );
    }
    return 1;
}

int sub_2483()
{
    if (ProtectedGet(g_U8195) < 10)
    {
        return 2;
    }
    else if ((ProtectedGet(g_U8195) < 20) AND (ProtectedGet(g_U8195) >= 10))
    {
        return 2;
    }
    else if (ProtectedGet(g_U8195) >= 20)
    {
        return 2;
    };;;
    return 1;
}

int sub_2578()
{
    if (ProtectedGet(g_U8195) < 10)
    {
        return 7;
    }
    else if ((ProtectedGet(g_U8195) < 20) AND (ProtectedGet(g_U8195) >= 10))
    {
        return 8;
    }
    else if (ProtectedGet(g_U8195) >= 20)
    {
        return 10;
    };;;
    return 2;
}

int sub_2673()
{
    unknown uVar2;
    unknown uVar3;

    uVar2 = sub_2682();
    switch (uVar2)
    {
        case 0:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar3 );
        switch (uVar3)
        {
            case 0: return 869501081;
            case 1: return -301223260;
            case 2: return -503930010;
            case 3: return 207714363;
            case 4: return 1724587620;
            case 5: return -330497431;
            case 6: return -881358690;
            case 7: return 1574850459;
        }
        break;
        case 1:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref uVar3 );
        switch (uVar3)
        {
            case 0: return 492147228;
            case 1: return 1168388225;
            case 2: return -2088164056;
            case 3: return -1836006237;
            case 4: return 1724587620;
            case 5: return -330497431;
            case 6: return -881358690;
        }
        break;
        case 2:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 6, ref uVar3 );
        switch (uVar3)
        {
            case 0: return -19263344;
            case 1: return 1844702918;
            case 2: return 280474699;
            case 3: return 280474699;
            case 4: return 510389335;
            case 5: return -164935626;
        }
        break;
        case 3:
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar3 );
        switch (uVar3)
        {
            case 0: return -302362397;
            case 1: return 510389335;
            case 2: return -1836006237;
            case 3: return 1543404628;
        }
    }
    return 1543404628;
}

int sub_2682()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_DEAD( sub_228() )))
    {
        GET_CHAR_COORDINATES( sub_228(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        return GET_MAP_AREA_FROM_COORDS( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    }
    return 5;
}

int sub_3425()
{
    if (ProtectedGet(g_U8195) < 5)
    {
        return 200;
    }
    if ((ProtectedGet(g_U8195) < 10) AND (ProtectedGet(g_U8195) >= 5))
    {
        return 300;
    }
    if ((ProtectedGet(g_U8195) < 20) AND (ProtectedGet(g_U8195) >= 10))
    {
        return 350;
    }
    return 450;
}

int sub_3525()
{
    unknown uVar2;

    if (ProtectedGet(g_U8195) < 15)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref uVar2 );
        switch (uVar2)
        {
            case 0: return 7;
            case 1: return 7;
            case 2: return 7;
        }
    }
    if (ProtectedGet(g_U8195) >= 15)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref uVar2 );
        switch (uVar2)
        {
            case 0: return 4;
            case 1: return 13;
            case 2: return 9;
            case 3: return 10;
            case 4: return 15;
            case 5: return 14;
            case 6: return 11;
            case 7: return 17;
            case 8: return 19;
        }
    }
    return 7;
}

int sub_3832()
{
    if (ProtectedGet(g_U8195) < 5)
    {
        return 55;
    }
    if ((ProtectedGet(g_U8195) < 10) AND (ProtectedGet(g_U8195) >= 5))
    {
        return 65;
    }
    if ((ProtectedGet(g_U8195) < 20) AND (ProtectedGet(g_U8195) >= 10))
    {
        return 75;
    }
    return 75;
}

int sub_3966()
{
    if (ProtectedGet(g_U8195) < 5)
    {
        return 35;
    }
    if ((ProtectedGet(g_U8195) < 10) AND (ProtectedGet(g_U8195) >= 5))
    {
        return 45;
    }
    if ((ProtectedGet(g_U8195) < 20) AND (ProtectedGet(g_U8195) >= 10))
    {
        return 65;
    }
    return 35;
}

int sub_4136()
{
    if (ProtectedGet(g_U8195) < 5)
    {
        return 1;
    }
    if ((ProtectedGet(g_U8195) < 10) AND (ProtectedGet(g_U8195) >= 5))
    {
        return 2;
    }
    if ((ProtectedGet(g_U8195) < 20) AND (ProtectedGet(g_U8195) >= 10))
    {
        return 2;
    }
    return 2;
}

void sub_4225()
{
    unknown uVar2;
    unknown uVar3;
    float fVar4;

    GET_GAME_TIMER( ref uVar2 );
    ADD_WIDGET_FLOAT_READ_ONLY( "Distance", ref fVar4 );
    if (l_U119 != 2)
    {
        if ((IS_PLAYER_PLAYING( sub_4285() )) AND (NOT (IS_CHAR_INJURED( l_U13 ))))
        {
            GET_CHAR_COORDINATES( l_U13, ref l_U37._fU0, ref l_U37._fU4, ref l_U37._fU8 );
            GET_CHAR_COORDINATES( sub_228(), ref l_U40._fU0, ref l_U40._fU4, ref l_U40._fU8 );
            l_U37._fU8 = 0.00000000;
            l_U40._fU8 = 0.00000000;
            fVar4 = VDIST( l_U37, l_U40 );
            uVar3 = ABSF( fVar4 );
            fVar4 = uVar3;
        }
    }
    else if ((IS_PLAYER_PLAYING( sub_4285() )) AND (NOT (IS_CHAR_INJURED( l_U14[0] ))))
    {
        GET_CHAR_COORDINATES( l_U14[0], ref l_U37._fU0, ref l_U37._fU4, ref l_U37._fU8 );
        GET_CHAR_COORDINATES( sub_228(), ref l_U40._fU0, ref l_U40._fU4, ref l_U40._fU8 );
        l_U37._fU8 = 0.00000000;
        l_U40._fU8 = 0.00000000;
        fVar4 = VDIST( l_U37, l_U40 );
        uVar3 = ABSF( fVar4 );
        fVar4 = uVar3;
    }
    switch (l_U119)
    {
        case 0:
        fVar4 *= 145.00000000 * sub_4648();
        break;
        case 1:
        fVar4 *= 130.00000000 * sub_4648();
        break;
        case 2:
        fVar4 *= 145.00000000 * sub_4648();
        break;
    }
    return ROUND( fVar4 );
}

void sub_4285()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

float sub_4648()
{
    switch (sub_4657())
    {
        case 0: return 1.20000000;
        case 1: return 1.00000000;
        case 2: return 0.90000000;
        case 3: return 0.75000000;
        case 4: return 0.60000000;
    }
    return 1.00000000;
}

int sub_4657()
{
    if (ProtectedGet(g_U8195) < 5)
    {
        return 0;
    }
    if ((ProtectedGet(g_U8195) < 10) AND (ProtectedGet(g_U8195) >= 5))
    {
        return 1;
    }
    if ((ProtectedGet(g_U8195) < 15) AND (ProtectedGet(g_U8195) >= 10))
    {
        return 2;
    }
    if ((ProtectedGet(g_U8195) < 20) AND (ProtectedGet(g_U8195) >= 15))
    {
        return 3;
    }
    return 4;
}

void sub_4936()
{
    float fVar2;

    if ((IS_PLAYER_PLAYING( sub_4285() )) AND (NOT (IS_CHAR_INJURED( l_U13 ))))
    {
        GET_CHAR_COORDINATES( l_U13, ref l_U37._fU0, ref l_U37._fU4, ref l_U37._fU8 );
        GET_CHAR_COORDINATES( sub_228(), ref l_U40._fU0, ref l_U40._fU4, ref l_U40._fU8 );
        fVar2 = VDIST( l_U37, l_U40 );
    }
    switch (l_U119)
    {
        case 0:
        fVar2 /= 3.50000000;
        break;
        case 1:
        fVar2 /= 0.40000000;
        break;
        case 2:
        fVar2 /= 8.50000000;
        break;
    }
    return CEIL( fVar2 );
}

void sub_5236()
{
    if (l_U120 != 0)
    {
        if ((NOT sub_5268()) AND (l_U48 > l_U47))
        {
            if (l_U96)
            {
                sub_5407( l_U103 );
            }
        }
    }
    return;
}

int sub_5268()
{
    if ((NOT (IS_CHAR_FATALLY_INJURED( l_U13 ))) AND (NOT (IS_CHAR_DEAD( sub_228() ))))
    {
        if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_228() ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_228(), l_U13, 50.00000000, 50.00000000, 8.00000000, 0 ))
            {
                l_U96 = 0;
                l_U102 = 1;
                return 1;
            }
        }
    }
    return 0;
}

void sub_5407(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    char[16] cVar12;
    int iVar16;

    if (NOT l_U121)
    {
        l_U122 = l_U125 + iParam0;
        l_U121 = 1;
    }
    else
    {
        iVar16 = l_U122 - l_U125;
        if (l_U122 > 0)
        {
            if (l_U122 <= l_U123)
            {
                PLAY_AUDIO_EVENT( "FRONTEND_OTHER_COUNTDOWN" );
                l_U123 -= 1000;
                l_U124 = 1;
            }
        }
        if (l_U124)
        {
            if (l_U122 < (l_U123 + 200))
            {
                SET_MULTIPLAYER_HUD_TIME( " " );
                return;
            }
            else if ((l_U122 > (l_U123 + 500)) AND (l_U122 < (l_U123 + 700)))
            {
                SET_MULTIPLAYER_HUD_TIME( " " );
                return;
            }
        }
        if (l_U122 < 0)
        {
            SET_MULTIPLAYER_HUD_TIME( "00:00:00" );
        }
        else
        {
            iVar3 = iVar16 / 10;
            iVar4 = iVar16 / 1000;
            iVar5 = iVar4 / 60;
            iVar3 -= iVar4 * 100;
            iVar4 -= iVar5 * 60;
            iVar6 = iVar3 / 10;
            iVar7 = iVar3 mod 10;
            iVar8 = iVar4 / 10;
            iVar9 = iVar4 mod 10;
            iVar10 = iVar5 / 10;
            iVar11 = iVar5 mod 10;
            sub_5769( ref iVar10 );
            sub_5769( ref iVar11 );
            sub_5769( ref iVar8 );
            sub_5769( ref iVar9 );
            string(ref cVar12, iVar10, 16);
            ConcatString(ref cVar12, iVar11, 16);
            ConcatString(ref cVar12, ":", 16);
            ConcatString(ref cVar12, iVar8, 16);
            ConcatString(ref cVar12, iVar9, 16);
            SET_MULTIPLAYER_HUD_TIME( ref cVar12 );
        }
    }
    return;
}

void sub_5769(unknown uParam0)
{
    if ((uParam0^) < 0)
    {
        (uParam0^) = 0;
    }
    return;
}

void sub_5882()
{
    int I;

    switch (l_U119)
    {
        case 0:
        if (NOT l_U102)
        {
            if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_228() )))
            {
                if (DOES_BLIP_EXIST( l_U27[0] ))
                {
                    REMOVE_BLIP( l_U27[0] );
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U27[0] )))
            {
                if (NOT (IS_CHAR_FATALLY_INJURED( l_U13 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U13, ref l_U27[0] );
                    SET_ROUTE( l_U27[0], 1 );
                }
            }
        }
        else if (NOT (DOES_BLIP_EXIST( l_U27[0] )))
        {
            if (NOT (IS_CHAR_FATALLY_INJURED( l_U13 )))
            {
                ADD_BLIP_FOR_CHAR( l_U13, ref l_U27[0] );
            }
        }
        else
        {
            SET_ROUTE( l_U27[0], 0 );
        }
        break;
        case 1:
        if (NOT l_U102)
        {
            if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_228() )))
            {
                for ( I = 0; I <= 7; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U27[I] ))
                    {
                        REMOVE_BLIP( l_U27[I] );
                    }
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U27[0] )))
            {
                if (NOT (IS_CHAR_FATALLY_INJURED( l_U13 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U13, ref l_U27[0] );
                    SET_ROUTE( l_U27[0], 1 );
                }
            }
            for ( I = 1; I <= 7; I++ )
            {
                if (NOT (DOES_BLIP_EXIST( l_U27[I] )))
                {
                    if (DOES_CHAR_EXIST( l_U14[I - 1] ))
                    {
                        if (NOT (IS_CHAR_FATALLY_INJURED( l_U14[I - 1] )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U14[I - 1], ref l_U27[I] );
                        }
                    }
                }
            }
        }
        else if (DOES_BLIP_EXIST( l_U27[0] ))
        {
            SET_ROUTE( l_U27[0], 0 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U27[0] )))
        {
            if (NOT (DOES_BLIP_EXIST( l_U27[0] )))
            {
                if (NOT (IS_CHAR_FATALLY_INJURED( l_U13 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U13, ref l_U27[0] );
                }
            }
        }
        for ( I = 1; I <= 7; I++ )
        {
            if (NOT (DOES_BLIP_EXIST( l_U27[I] )))
            {
                if (NOT (IS_CHAR_FATALLY_INJURED( l_U14[I - 1] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U14[I - 1], ref l_U27[I] );
                }
            }
        }
        break;
        case 2:
        if (NOT l_U102)
        {
            if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_228() )))
            {
                for ( I = 0; I <= 7; I++ )
                {
                    if (DOES_BLIP_EXIST( l_U27[I] ))
                    {
                        REMOVE_BLIP( l_U27[I] );
                    }
                }
            }
            else
            {
                for ( I = 0; I <= 7; I++ )
                {
                    if (NOT (DOES_BLIP_EXIST( l_U27[I] )))
                    {
                        if (NOT (IS_CHAR_FATALLY_INJURED( l_U14[I] )))
                        {
                            ADD_BLIP_FOR_CHAR( l_U14[I], ref l_U27[I] );
                            if (I == 0)
                            {
                                SET_ROUTE( l_U27[0], 1 );
                            }
                        }
                    }
                }
            }
        }
        else if (DOES_BLIP_EXIST( l_U27[0] ))
        {
            SET_ROUTE( l_U27[0], 0 );
        }
        for ( I = 0; I <= 7; I++ )
        {
            if (NOT (DOES_BLIP_EXIST( l_U27[I] )))
            {
                if (NOT (IS_CHAR_FATALLY_INJURED( l_U14[I] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U14[I], ref l_U27[I] );
                }
            }
        }
        break;
    }
    return;
}

int sub_6996(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;

    if (NOT (IS_CHAR_FATALLY_INJURED( sub_228() )))
    {
        if (NOT (IS_CHAR_FATALLY_INJURED( uParam0 )))
        {
            GET_CHAR_COORDINATES( sub_228(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        }
    }
    GET_GAME_TIMER( ref l_U47 );
    if (NOT l_U127)
    {
        l_U48 = l_U47 + l_U103;
        l_U127 = 1;
    }
    else if (l_U48 < l_U47)
    {
        l_U96 = 0;
    }
    if (NOT l_U96)
    {
        if (l_U102)
        {
            if (l_U119 != 1)
            {
                if ((VDIST( uVar6, uVar3 )) > 150.00000000)
                {
                    return 1;
                }
            }
            else if ((VDIST( uVar6, uVar3 )) > 350.00000000)
            {
                return 1;
            }
        }
        else if ((VDIST( uVar6, uVar3 )) > 50.00000000)
        {
            return 1;
        }
    }
    if (NOT (IS_CHAR_FATALLY_INJURED( sub_228() )))
    {
        if (NOT (IS_CHAR_FATALLY_INJURED( uParam0 )))
        {
            GET_CHAR_COORDINATES( sub_228(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
            if ((VDIST( uVar6, uVar3 )) > 100.00000000)
            {
                if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_228() )))
                {
                    if (NOT l_U63)
                    {
                        SETTIMERA( 0 );
                        l_U128 = l_U122 - l_U125;
                        l_U129 = 1;
                        l_U63 = 1;
                    }
                    else if ((l_U122 - l_U125) > 25000)
                    {
                        l_U129 = 0;
                        iVar9 = 26000 - TIMERA();
                        iVar9 = iVar9 / 1000;
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        if (iVar9 == 1)
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER1", iVar9, 1, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER", iVar9, 1, 1 );
                        }
                        if (TIMERA() > 26000)
                        {
                            return 1;
                        }
                    }
                    else if (l_U129)
                    {
                        iVar9 = l_U122 - l_U125;
                        iVar9 = iVar9 / 1000;
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        if (iVar9 == 1)
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER1", iVar9, 1, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER", iVar9, 1, 1 );
                        }
                        if (TIMERA() > l_U128)
                        {
                            return 1;
                        }
                    }
                    else
                    {
                        iVar9 = 26000 - TIMERA();
                        iVar9 = iVar9 / 1000;
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        if (iVar9 == 1)
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER1", iVar9, 1, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER", iVar9, 1, 1 );
                        }
                        if (TIMERA() > 26000)
                        {
                            return 1;
                        }
                    };;;
                }
                else
                {
                    l_U63 = 0;
                    l_U129 = 1;
                }
            }
            else
            {
                l_U63 = 0;
                l_U129 = 0;
            }
            if ((VDIST( uVar6, uVar3 )) > 1500.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_8110()
{
    unknown uVar2;
    int Result;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 20, ref uVar2 );
    switch (uVar2)
    {
        case 0:
        Result = -2030171296;
        break;
        case 1:
        Result = 886934177;
        break;
        case 2:
        Result = 1264341792;
        break;
        case 3:
        Result = 970598228;
        break;
        case 4:
        Result = 1348744438;
        break;
        case 5:
        Result = -1883869285;
        break;
        case 6:
        Result = -1260881538;
        break;
        case 7:
        Result = 525509695;
        break;
        case 8:
        Result = 1723137093;
        break;
        case 9:
        Result = -1896659641;
        break;
        case 10:
        Result = 2016857647;
        break;
        case 11:
        Result = 1075851868;
        break;
        case 12:
        Result = -341892653;
        break;
        case 13:
        Result = 1376298265;
        break;
        case 14:
        Result = 2006918058;
        break;
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        Result = 1203311498;
        break;
    }
    return Result;
}

void sub_9393(unknown uParam0)
{
    unknown uVar3;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 10, ref uVar3 );
    ProtectedSet(g_U8195, ProtectedGet(g_U8195) + 1);
    if (ProtectedGet(g_U8195) == 20)
    {
        AWARD_ACHIEVEMENT( 19 );
        sub_9446( 0 );
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
        if (NOT (# -NULL-0xc27c84()))
        {
            PRINT_NOW( "VIG_ME11", 7500, 1 );
        }
    }
    else
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
        PRINT_NOW( "VIG_ME10", 7500, 1 );
    }
    TRIGGER_POLICE_REPORT( "SCRIPTED_REPORTS_VIGILANTE_TARGET_KILLED" );
    INCREMENT_INT_STAT_NO_MESSAGE( 273, l_U104 );
    INCREMENT_INT_STAT_NO_MESSAGE( 359, 1 );
    if (IS_PLAYER_PLAYING( sub_4285() ))
    {
        CLEAR_WANTED_LEVEL( sub_4285() );
    }
    sub_10239( 1 );
    sub_10316();
    return;
}

void sub_9446(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U64879[uParam0]._fU0)
    {
        iVar3 = ProtectedGet(g_U64879[uParam0]._fU8);
        if (iVar3 > 0)
        {
            sub_9515( 6, iVar3 );
            g_U64879[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_9515(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_9697( 0 );
    return;
}

void sub_9697(boolean bParam0)
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
        sub_9952();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_9952()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_10239(unknown uParam0)
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

void sub_10316()
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

void sub_10574(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_FATALLY_INJURED( sub_228() )))
    {
        switch (l_U120)
        {
            case 0:
            GET_CHAR_COORDINATES( sub_228(), ref l_U40._fU0, ref l_U40._fU4, ref l_U40._fU8 );
            # -sub_C1FFC0-0xc214c8( sub_2483(), ref l_U45 );
            LOAD_COMBAT_DECISION_MAKER( sub_2578(), ref l_U46 );
            GENERATE_RANDOM_INT_IN_RANGE( 5, 20, ref iVar11 );
            GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uParam0._fU0, uParam0._fU4, uParam0._fU8, iVar11, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8, ref uVar12 );
            CLEAR_AREA_OF_CARS( uVar6._fU0, uVar6._fU4, uVar6._fU8, 50.00000000 );
            uVar9 = sub_10776();
            uVar10 = sub_2673();
            REQUEST_MODEL( uVar10 );
            REQUEST_MODEL( uVar9 );
            while ((NOT (HAS_MODEL_LOADED( uVar10 ))) || (NOT (HAS_MODEL_LOADED( uVar9 ))))
            {
                WAIT( 0 );
            }
            CREATE_CAR( uVar9, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U23, 1 );
            SET_CAR_HEALTH( l_U23, sub_11081() );
            SET_CAR_HEADING( l_U23, uVar12 );
            GENERATE_RANDOM_FLOAT_IN_RANGE( 3.00000000, 15.89900000, ref uVar13 );
            SET_VEHICLE_DIRT_LEVEL( l_U23, uVar13 );
            SET_PETROL_TANK_HEALTH( l_U23, TO_FLOAT( sub_11081() ) );
            SET_ENGINE_HEALTH( l_U23, TO_FLOAT( sub_11081() ) );
            if (IS_VEH_DRIVEABLE( l_U23 ))
            {
                CREATE_CHAR_INSIDE_CAR( l_U23, 26, uVar10, ref l_U13 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( uVar9 );
            uVar9 = sub_2673();
            if (IS_VEH_DRIVEABLE( l_U23 ))
            {
                CREATE_CHAR( 26, uVar10, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U14[0], 1 );
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U14[0], l_U23, 1 );
            }
            SET_CHAR_DECISION_MAKER( l_U14[0], l_U45 );
            SET_COMBAT_DECISION_MAKER( l_U14[0], l_U46 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U14[0], 23 );
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U14[0], 12, 1000, 1 );
            if (IS_VEH_DRIVEABLE( l_U23 ))
            {
                CREATE_CHAR( 26, uVar10, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U14[1], 1 );
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U14[1], l_U23, 2 );
            }
            SET_CHAR_DECISION_MAKER( l_U14[1], l_U45 );
            SET_COMBAT_DECISION_MAKER( l_U14[1], l_U46 );
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U14[1], 12, 1000, 1 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U14[1], 23 );
            if ((IS_VEH_DRIVEABLE( l_U23 )) AND (NOT (IS_CHAR_FATALLY_INJURED( l_U13 ))))
            {
                SET_CHAR_AS_MISSION_CHAR( l_U13 );
                SET_CHAR_HEALTH( l_U13, sub_3425() );
                GIVE_DELAYED_WEAPON_TO_CHAR( l_U13, sub_3525(), 100, 1 );
                SET_CHAR_DECISION_MAKER( l_U13, l_U45 );
                SET_COMBAT_DECISION_MAKER( l_U13, l_U46 );
                g_U8217 = 1;
                SET_CHAR_ACCURACY( l_U13, sub_3832() );
                SET_CHAR_SHOOT_RATE( l_U13, sub_3966() );
                SET_CHAR_WEAPON_SKILL( l_U13, sub_4136() );
                l_U43 = sub_4936();
                TRIGGER_VIGILANTE_CRIME( 4, uParam0 );
                PRINT_STRING_WITH_SUBSTRING_GIVEN_HASH_KEY_NOW( "PVBST", uParam3, 5000, 1 );
                l_U120 = 1;
                l_U117 = 1;
            }
            l_U104 = 3;
            l_U103 = sub_4225();
            break;
            case 1:
            sub_5236();
            sub_5882();
            if (sub_5268())
            {
                if (NOT l_U97)
                {
                    PRINT_NOW( "VIG_CCL", 7500, 1 );
                    l_U97 = 1;
                }
            }
            if ((IS_CHAR_FATALLY_INJURED( l_U14[1] )) AND ((IS_CHAR_FATALLY_INJURED( l_U14[0] )) AND (IS_CHAR_FATALLY_INJURED( l_U13 ))))
            {
                if (NOT (sub_6996( l_U13 )))
                {
                    sub_11916();
                    l_U120 = 2;
                }
                else
                {
                    l_U120 = 3;
                }
            }
            else if (NOT (IS_CHAR_FATALLY_INJURED( l_U13 )))
            {
                switch (l_U117)
                {
                    case 1:
                    GET_CHAR_COORDINATES( l_U13, ref l_U40._fU0, ref l_U40._fU4, ref l_U40._fU8 );
                    GET_CHAR_COORDINATES( sub_228(), ref l_U37._fU0, ref l_U37._fU4, ref l_U37._fU8 );
                    if ((VDIST( l_U40, l_U37 )) < 200.00000000)
                    {
                        l_U117 = 2;
                    }
                    break;
                    case 2:
                    if (IS_VEH_DRIVEABLE( l_U23 ))
                    {
                        GET_CAR_HEALTH( l_U23, ref l_U49 );
                        if ((NOT (CHECK_STUCK_TIMER( l_U23, 0, 10000 ))) AND ((NOT (CHECK_STUCK_TIMER( l_U23, 3, 10000 ))) AND (l_U49 > 350)))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U13, 16, ref l_U50 );
                            if (l_U50 == 7)
                            {
                                TASK_CAR_DRIVE_WANDER( l_U13, l_U23, 17.00000000, 3 );
                                if (NOT (IS_CHAR_FATALLY_INJURED( l_U14[0] )))
                                {
                                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U14[0] ))
                                    {
                                        GIVE_DELAYED_WEAPON_TO_CHAR( l_U14[0], 13, 1000, 1 );
                                        TASK_DRIVE_BY( l_U14[0], sub_228(), 0, 0.00000000, 0.00000000, 0.00000000, 1000.00000000, 8, 1, sub_12357() );
                                    }
                                }
                                if (NOT (IS_CHAR_FATALLY_INJURED( l_U14[1] )))
                                {
                                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U14[1] ))
                                    {
                                        GIVE_DELAYED_WEAPON_TO_CHAR( l_U14[1], 13, 1000, 1 );
                                        TASK_DRIVE_BY( l_U14[1], sub_228(), 0, 0.00000000, 0.00000000, 0.00000000, 1000.00000000, 8, 1, sub_12357() );
                                    }
                                }
                            }
                            else
                            {
                                GET_CHAR_COORDINATES( l_U13, ref l_U40._fU0, ref l_U40._fU4, ref l_U40._fU8 );
                                GET_CHAR_COORDINATES( sub_228(), ref l_U37._fU0, ref l_U37._fU4, ref l_U37._fU8 );
                                if ((VDIST( l_U40, l_U37 )) < 20.00000000)
                                {
                                    if (l_U51 > 20.00000000)
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U13, 24.00000000 * l_U88[sub_4657()] );
                                            l_U51 = 20.00000000;
                                        }
                                    }
                                }
                                if (((VDIST( l_U40, l_U37 )) < 40.00000000) AND ((VDIST( l_U40, l_U37 )) > 20.00000000))
                                {
                                    if ((l_U51 > 40.00000000) || (l_U51 < 20.00000000))
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U13, 22.00000000 * l_U88[sub_4657()] );
                                            l_U51 = 30.00000000;
                                        }
                                    }
                                }
                                if ((VDIST( l_U40, l_U37 )) > 40.00000000)
                                {
                                    if (l_U51 < 40.00000000)
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U13, 18.00000000 * l_U88[sub_4657()] );
                                            l_U51 = 41.00000000;
                                        }
                                    }
                                }
                            }
                        }
                        else if (l_U102)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar11 );
                            if (iVar11 < 50)
                            {
                                REMOVE_BLIP( l_U27[0] );
                                ADD_BLIP_FOR_CHAR( l_U13, ref l_U27[0] );
                                l_U117 = 4;
                            }
                            else
                            {
                                REMOVE_BLIP( l_U27[0] );
                                ADD_BLIP_FOR_CHAR( l_U13, ref l_U27[0] );
                                l_U117 = 3;
                            }
                        }
                    }
                    else if (l_U102)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar11 );
                        if (iVar11 < 50)
                        {
                            REMOVE_BLIP( l_U27[0] );
                            ADD_BLIP_FOR_CHAR( l_U13, ref l_U27[0] );
                            l_U117 = 4;
                        }
                        else
                        {
                            REMOVE_BLIP( l_U27[0] );
                            ADD_BLIP_FOR_CHAR( l_U13, ref l_U27[0] );
                            l_U117 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U13 )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U13 );
                            TASK_FLEE_CHAR_ANY_MEANS( l_U13, sub_228(), 1000.00000000, -1, 1, 1500, 3000, 50.00000000 );
                            SET_CHAR_USES_DEAFULT_ANIM_GROUP_WHEN_FLEEING( l_U13, 1 );
                            l_U117 = 0;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U14[0] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U14[0] );
                            TASK_COMBAT( l_U14[0], sub_228() );
                            l_U117 = 0;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U14[1] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U14[1] );
                            TASK_COMBAT( l_U14[1], sub_228() );
                            l_U117 = 0;
                        }
                    }
                    break;
                    case 4:
                    if ((NOT (IS_CHAR_FATALLY_INJURED( sub_228() ))) AND (NOT (IS_CHAR_INJURED( l_U13 ))))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U13 );
                            TASK_COMBAT( l_U13, sub_228() );
                            l_U117 = 0;
                        }
                    }
                    if ((NOT (IS_CHAR_FATALLY_INJURED( sub_228() ))) AND (NOT (IS_CHAR_INJURED( l_U14[0] ))))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U14[0] );
                            TASK_COMBAT( l_U14[0], sub_228() );
                            l_U117 = 0;
                        }
                    }
                    break;
                    case 0: break;
                }
                if (IS_CHAR_FATALLY_INJURED( l_U13 ))
                {
                    REMOVE_BLIP( l_U27[0] );
                }
                if (IS_CHAR_FATALLY_INJURED( l_U14[0] ))
                {
                    REMOVE_BLIP( l_U27[1] );
                }
                if (IS_CHAR_FATALLY_INJURED( l_U14[1] ))
                {
                    REMOVE_BLIP( l_U27[2] );
                }
                if (sub_6996( l_U13 ))
                {
                    l_U120 = 3;
                }
            }
            break;
            case 2:
            REMOVE_BLIP( l_U27[0] );
            REMOVE_BLIP( l_U27[1] );
            if (NOT (IS_CHAR_INJURED( sub_228() )))
            {
                CLEAR_HELP();
                sub_1841();
                sub_1901();
                sub_1918();
                sub_9393( 0 );
                TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
                g_U8217 = 0;
                TERMINATE_THIS_SCRIPT();
            }
            break;
            case 3:
            while (NOT (IS_PLAYER_CONTROL_ON( sub_4285() )))
            {
                WAIT( 0 );
            }
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
            PRINT_NOW( "VIG_FAIL", 3000, 1 );
            sub_1841();
            sub_1901();
            sub_1918();
            g_U8217 = 0;
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

void sub_10776()
{
    unknown uVar2;
    int Result;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar2 );
    switch (uVar2)
    {
        case 0:
        Result = -2030171296;
        break;
        case 1:
        Result = 886934177;
        break;
        case 2:
        Result = 1264341792;
        break;
        case 3:
        Result = 970598228;
        break;
        case 4:
        Result = 1348744438;
        break;
        case 5:
        Result = -1883869285;
        break;
        case 6:
        Result = -1260881538;
        break;
        case 7:
        Result = 525509695;
        break;
        default: Result = 1723137093;
    }
    return Result;
}

int sub_11081()
{
    if (ProtectedGet(g_U8195) < 5)
    {
        return 600;
    }
    if ((ProtectedGet(g_U8195) < 10) AND (ProtectedGet(g_U8195) >= 5))
    {
        return 800;
    }
    if ((ProtectedGet(g_U8195) < 20) AND (ProtectedGet(g_U8195) >= 10))
    {
        return 1000;
    }
    return 1200;
}

void sub_11916()
{
    GET_GAME_TIMER( ref l_U47 );
    l_U48 = l_U47 + 3000;
    return;
}

int sub_12357()
{
    if (ProtectedGet(g_U8195) < 5)
    {
        return 25;
    }
    if ((ProtectedGet(g_U8195) < 10) AND (ProtectedGet(g_U8195) >= 5))
    {
        return 50;
    }
    if ((ProtectedGet(g_U8195) < 20) AND (ProtectedGet(g_U8195) >= 10))
    {
        return 75;
    }
    return 75;
}

void sub_13968(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_FATALLY_INJURED( sub_228() )))
    {
        switch (l_U120)
        {
            case 0:
            GET_CHAR_COORDINATES( sub_228(), ref l_U40._fU0, ref l_U40._fU4, ref l_U40._fU8 );
            # -sub_C1FFC0-0xc214c8( sub_2483(), ref l_U45 );
            LOAD_COMBAT_DECISION_MAKER( sub_2578(), ref l_U46 );
            GENERATE_RANDOM_INT_IN_RANGE( 5, 20, ref iVar11 );
            GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING( uParam0._fU0, uParam0._fU4, uParam0._fU8, iVar11, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8, ref uVar12 );
            CLEAR_AREA_OF_CARS( uVar6._fU0, uVar6._fU4, uVar6._fU8, 50.00000000 );
            uVar9 = sub_10776();
            uVar10 = sub_2673();
            REQUEST_MODEL( uVar9 );
            REQUEST_MODEL( uVar10 );
            while ((NOT (HAS_MODEL_LOADED( uVar10 ))) || (NOT (HAS_MODEL_LOADED( uVar9 ))))
            {
                WAIT( 0 );
            }
            CREATE_CAR( uVar9, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U23, 1 );
            SET_CAR_HEALTH( l_U23, sub_11081() );
            SET_CAR_HEADING( l_U23, uVar12 );
            GENERATE_RANDOM_FLOAT_IN_RANGE( 3.00000000, 15.89900000, ref uVar13 );
            SET_VEHICLE_DIRT_LEVEL( l_U23, uVar13 );
            SET_PETROL_TANK_HEALTH( l_U23, TO_FLOAT( sub_11081() ) );
            SET_ENGINE_HEALTH( l_U23, TO_FLOAT( sub_11081() ) );
            if (IS_VEH_DRIVEABLE( l_U23 ))
            {
                CREATE_CHAR_INSIDE_CAR( l_U23, 26, uVar10, ref l_U13 );
            }
            if (IS_VEH_DRIVEABLE( l_U23 ))
            {
                CREATE_CHAR( 26, uVar10, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref l_U14[0], 1 );
                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U14[0], l_U23, 1 );
            }
            SET_CHAR_DECISION_MAKER( l_U14[0], l_U45 );
            SET_COMBAT_DECISION_MAKER( l_U14[0], l_U46 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U14[0], 23 );
            GIVE_DELAYED_WEAPON_TO_CHAR( l_U14[0], 12, 1000, 1 );
            if ((IS_VEH_DRIVEABLE( l_U23 )) AND (NOT (IS_CHAR_FATALLY_INJURED( l_U13 ))))
            {
                SET_CHAR_AS_MISSION_CHAR( l_U13 );
                SET_CHAR_HEALTH( l_U13, sub_3425() );
                GIVE_DELAYED_WEAPON_TO_CHAR( l_U13, sub_3525(), 100, 1 );
                SET_CHAR_DECISION_MAKER( l_U13, l_U45 );
                SET_COMBAT_DECISION_MAKER( l_U13, l_U46 );
                SET_CHAR_RELATIONSHIP_GROUP( l_U13, 23 );
                g_U8217 = 1;
                SET_CHAR_ACCURACY( l_U13, sub_3832() );
                SET_CHAR_SHOOT_RATE( l_U13, sub_3966() );
                SET_CHAR_WEAPON_SKILL( l_U13, sub_4136() );
                l_U43 = sub_4936();
                TRIGGER_VIGILANTE_CRIME( 4, uParam0 );
                PRINT_STRING_WITH_SUBSTRING_GIVEN_HASH_KEY_NOW( "PVBST", uParam3, 5000, 1 );
                l_U117 = 1;
            }
            l_U103 = sub_4225();
            l_U120 = 1;
            break;
            case 1:
            sub_5236();
            sub_5882();
            if (sub_5268())
            {
                if (NOT l_U97)
                {
                    PRINT_NOW( "VIG_CCL", 7500, 1 );
                    l_U97 = 1;
                }
            }
            if ((IS_CHAR_FATALLY_INJURED( l_U14[0] )) AND (IS_CHAR_FATALLY_INJURED( l_U13 )))
            {
                if (NOT (sub_6996( l_U13 )))
                {
                    sub_11916();
                    l_U120 = 2;
                }
                else
                {
                    l_U120 = 3;
                }
            }
            else if (NOT (IS_CHAR_FATALLY_INJURED( l_U13 )))
            {
                switch (l_U117)
                {
                    case 1:
                    GET_CHAR_COORDINATES( l_U13, ref l_U40._fU0, ref l_U40._fU4, ref l_U40._fU8 );
                    GET_CHAR_COORDINATES( sub_228(), ref l_U37._fU0, ref l_U37._fU4, ref l_U37._fU8 );
                    if ((VDIST( l_U40, l_U37 )) < 200.00000000)
                    {
                        l_U117 = 2;
                    }
                    break;
                    case 2:
                    if (IS_VEH_DRIVEABLE( l_U23 ))
                    {
                        GET_CAR_HEALTH( l_U23, ref l_U49 );
                        if ((NOT (CHECK_STUCK_TIMER( l_U23, 0, 10000 ))) AND ((NOT (CHECK_STUCK_TIMER( l_U23, 3, 10000 ))) AND (l_U49 > 350)))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U13, 16, ref l_U50 );
                            if (l_U50 == 7)
                            {
                                TASK_CAR_DRIVE_WANDER( l_U13, l_U23, 17.00000000, 3 );
                                if (NOT (IS_CHAR_FATALLY_INJURED( l_U14[0] )))
                                {
                                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                                    {
                                        GIVE_DELAYED_WEAPON_TO_CHAR( l_U14[0], 13, 1000, 1 );
                                        TASK_DRIVE_BY( l_U14[0], sub_228(), 0, 0.00000000, 0.00000000, 0.00000000, 1000.00000000, 8, 1, sub_12357() );
                                    }
                                }
                            }
                            else
                            {
                                GET_CHAR_COORDINATES( l_U13, ref l_U40._fU0, ref l_U40._fU4, ref l_U40._fU8 );
                                GET_CHAR_COORDINATES( sub_228(), ref l_U37._fU0, ref l_U37._fU4, ref l_U37._fU8 );
                                if ((VDIST( l_U40, l_U37 )) < 20.00000000)
                                {
                                    if (l_U51 > 20.00000000)
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U13, 24.00000000 * l_U88[sub_4657()] );
                                            l_U51 = 20.00000000;
                                        }
                                    }
                                }
                                if (((VDIST( l_U40, l_U37 )) < 40.00000000) AND ((VDIST( l_U40, l_U37 )) > 20.00000000))
                                {
                                    if ((l_U51 > 40.00000000) || (l_U51 < 20.00000000))
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U13, 22.00000000 * l_U88[sub_4657()] );
                                            l_U51 = 30.00000000;
                                        }
                                    }
                                }
                                if ((VDIST( l_U40, l_U37 )) > 40.00000000)
                                {
                                    if (l_U51 < 40.00000000)
                                    {
                                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U13, 18.00000000 * l_U88[sub_4657()] );
                                            l_U51 = 41.00000000;
                                        }
                                    }
                                }
                            }
                        }
                        else if (l_U102)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar11 );
                            if (iVar11 < 50)
                            {
                                REMOVE_BLIP( l_U27[0] );
                                ADD_BLIP_FOR_CHAR( l_U13, ref l_U27[0] );
                                l_U117 = 4;
                            }
                            else
                            {
                                REMOVE_BLIP( l_U27[0] );
                                ADD_BLIP_FOR_CHAR( l_U13, ref l_U27[0] );
                                l_U117 = 3;
                            }
                        }
                    }
                    else if (l_U102)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar11 );
                        if (iVar11 < 50)
                        {
                            REMOVE_BLIP( l_U27[0] );
                            ADD_BLIP_FOR_CHAR( l_U13, ref l_U27[0] );
                            l_U117 = 4;
                        }
                        else
                        {
                            REMOVE_BLIP( l_U27[0] );
                            ADD_BLIP_FOR_CHAR( l_U13, ref l_U27[0] );
                            l_U117 = 3;
                        }
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U13 )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U13 ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U13 );
                            TASK_FLEE_CHAR_ANY_MEANS( l_U13, sub_228(), 1000.00000000, -1, 1, 1500, 3000, 50.00000000 );
                            SET_CHAR_USES_DEAFULT_ANIM_GROUP_WHEN_FLEEING( l_U13, 1 );
                            l_U117 = 0;
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U14[0] )))
                    {
                        if (IS_CHAR_SITTING_IN_ANY_CAR( l_U14[0] ))
                        {
                            TASK_LEAVE_ANY_CAR( l_U14[0] );
                            TASK_COMBAT( l_U14[0], sub_228() );
                            l_U117 = 0;
                        }
                    }
                    break;
                    case 4:
                    if ((NOT (IS_CHAR_FATALLY_INJURED( sub_228() ))) AND (NOT (IS_CHAR_INJURED( l_U13 ))))
                    {
                        TASK_LEAVE_ANY_CAR( l_U13 );
                        TASK_COMBAT( l_U13, sub_228() );
                        l_U117 = 0;
                    }
                    if ((NOT (IS_CHAR_FATALLY_INJURED( sub_228() ))) AND (NOT (IS_CHAR_INJURED( l_U14[0] ))))
                    {
                        TASK_LEAVE_ANY_CAR( l_U14[0] );
                        TASK_COMBAT( l_U14[0], sub_228() );
                        l_U117 = 0;
                    }
                    break;
                    case 0: break;
                }
                if (IS_CHAR_FATALLY_INJURED( l_U13 ))
                {
                    REMOVE_BLIP( l_U27[0] );
                }
                if (IS_CHAR_FATALLY_INJURED( l_U14[0] ))
                {
                    REMOVE_BLIP( l_U27[1] );
                }
                if (sub_6996( l_U13 ))
                {
                    l_U120 = 3;
                }
            }
            break;
            case 2:
            REMOVE_BLIP( l_U27[0] );
            REMOVE_BLIP( l_U27[1] );
            if (NOT (IS_CHAR_INJURED( sub_228() )))
            {
                CLEAR_HELP();
                sub_1841();
                sub_1901();
                sub_1918();
                TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
                sub_9393( 0 );
                g_U8217 = 0;
                TERMINATE_THIS_SCRIPT();
            }
            break;
            case 3:
            while (NOT (IS_PLAYER_CONTROL_ON( sub_4285() )))
            {
                WAIT( 0 );
            }
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
            PRINT_NOW( "VIG_FAIL", 3000, 1 );
            sub_1841();
            sub_1901();
            sub_1918();
            g_U8217 = 0;
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

void sub_16543(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_FATALLY_INJURED( sub_228() )))
    {
        switch (l_U120)
        {
            case 0:
            if (sub_16619( uParam0, uParam3 ))
            {
                l_U120 = 1;
                l_U48 = l_U47 + l_U103;
            }
            break;
            case 1:
            sub_17558();
            sub_5882();
            if (sub_17595( 1112014848 ))
            {
                if (NOT l_U97)
                {
                    PRINT_NOW( "VIG_CCL", 7500, 1 );
                    l_U97 = 1;
                }
            }
            sub_17937();
            sub_18173();
            if (sub_18265())
            {
                l_U120 = 2;
            }
            if (NOT sub_18265())
            {
                if (sub_18352())
                {
                    l_U120 = 3;
                }
            }
            if (l_U48 < l_U47)
            {
                l_U96 = 0;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( sub_228() )))
            {
                CLEAR_HELP();
                sub_1841();
                sub_1901();
                sub_1918();
                TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
                sub_9393( 1 );
                g_U8217 = 0;
                TERMINATE_THIS_SCRIPT();
            }
            break;
            case 3:
            while (NOT (IS_PLAYER_CONTROL_ON( sub_4285() )))
            {
                WAIT( 0 );
            }
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 1 );
            PRINT_NOW( "VIG_FAIL", 3000, 1 );
            sub_1841();
            sub_1901();
            sub_1918();
            g_U8217 = 0;
            TERMINATE_THIS_SCRIPT();
            break;
        }
    }
    return;
}

int sub_16619(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int I;

    GENERATE_RANDOM_INT_IN_RANGE( 4, sub_16629() + 1, ref iVar6 );
    l_U104 = iVar6;
    uVar11 = sub_2673();
    REQUEST_MODEL( uVar11 );
    while (NOT (HAS_MODEL_LOADED( uVar11 )))
    {
        PRINTSTRING( "LOAD GAME" );
        WAIT( 0 );
    }
    GET_CHAR_COORDINATES( sub_228(), ref l_U40._fU0, ref l_U40._fU4, ref l_U40._fU8 );
    # -sub_C1FFC0-0xc214c8( sub_2483(), ref l_U45 );
    LOAD_COMBAT_DECISION_MAKER( sub_2578(), ref l_U46 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U46, 2 );
    SET_RELATIONSHIP( 5, 23, 0 );
    SET_RELATIONSHIP( 1, 23, 23 );
    g_U8217 = 1;
    CREATE_GROUP( 0, ref uVar10, 1 );
    SET_GROUP_FORMATION( uVar10, sub_16885() );
    SET_GROUP_FORMATION_SPACING( uVar10, 10.00000000 );
    SET_GROUP_SEPARATION_RANGE( uVar10, 200.00000000 );
    for ( I = 0; I <= (iVar6 - 1); I++ )
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -3.00000000, 5.00000000, ref uVar7._fU0 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( -3.00000000, 5.00000000, ref uVar7._fU4 );
        CREATE_CHAR( 26, uVar11, uParam0._fU0 + uVar7._fU0, uParam0._fU4 + uVar7._fU4, uParam0._fU8, ref l_U14[I], 1 );
        if (I != 0)
        {
            if (DOES_GROUP_EXIST( uVar10 ))
            {
                SET_GROUP_MEMBER( uVar10, l_U14[I] );
            }
        }
        else if (DOES_GROUP_EXIST( uVar10 ))
        {
            SET_GROUP_LEADER( uVar10, l_U14[I] );
        }
        SET_CHAR_AS_MISSION_CHAR( l_U14[I] );
        SET_CHAR_IS_TARGET_PRIORITY( l_U14[I], 1 );
        SET_CHAR_HEALTH( l_U14[I], sub_3425() );
        GIVE_DELAYED_WEAPON_TO_CHAR( l_U14[I], sub_3525(), 100, 0 );
        SET_CHAR_DECISION_MAKER( l_U14[I], l_U45 );
        SET_COMBAT_DECISION_MAKER( l_U14[I], l_U46 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U14[I], 23 );
        SET_CHAR_WILL_USE_CARS_IN_COMBAT( l_U14[I], 0 );
        SET_CHAR_WILL_USE_COVER( l_U14[I], 1 );
        SET_PED_DIES_WHEN_INJURED( l_U14[I], 1 );
        SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U14[I], 1 );
        SET_PED_DONT_DO_EVASIVE_DIVES( l_U14[I], 1 );
        SET_CHAR_ACCURACY( l_U14[I], sub_3832() );
        SET_CHAR_SHOOT_RATE( l_U14[I], sub_3966() );
        SET_CHAR_MONEY( l_U14[I], l_U43 / iVar6 );
        SET_CHAR_NEVER_LEAVES_GROUP( l_U14[I], 1 );
        SET_SENSE_RANGE( l_U14[I], 60.00000000 );
    }
    l_U103 = sub_4225();
    l_U43 = sub_4936();
    sub_5407( l_U103 );
    TRIGGER_VIGILANTE_CRIME( 5, uParam0 );
    PRINT_STRING_WITH_SUBSTRING_GIVEN_HASH_KEY_NOW( "PVBST", uParam3, 5000, 1 );
    return 1;
}

int sub_16629()
{
    if (ProtectedGet(g_U8195) < 5)
    {
        return 5;
    }
    if ((ProtectedGet(g_U8195) < 10) AND (ProtectedGet(g_U8195) >= 5))
    {
        return 7;
    }
    return 8;
}

void sub_16885()
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref Result );
    return Result;
}

void sub_17558()
{
    if (l_U120 != 0)
    {
        if ((NOT (sub_17595( 1112014848 ))) AND (l_U48 > l_U47))
        {
            if (l_U96)
            {
                sub_5407( l_U103 );
            }
        }
    }
    return;
}

int sub_17595(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    uVar3 = {sub_17604()};
    if (NOT (IS_CHAR_DEAD( sub_228() )))
    {
        if (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_228() ))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_228(), uVar3._fU0, uVar3._fU4, uVar3._fU8, uParam0, uParam0, 8.00000000, 0 ))
            {
                l_U96 = 0;
                l_U102 = 1;
                return 1;
            }
        }
    }
    return 0;
}

void sub_17604()
{
    int I;
    int iVar3;
    vector Result;
    vector vVar7;

    for ( I = 0; I <= 7; I++ )
    {
        if (NOT (IS_CHAR_FATALLY_INJURED( l_U14[I] )))
        {
            GET_CHAR_COORDINATES( l_U14[I], ref vVar7.x, ref vVar7.y, ref vVar7.z );
            Result = {Result + vVar7};
            iVar3++;
        }
    }
    Result.x /= iVar3;
    Result.y /= iVar3;
    Result.z /= iVar3;
    return Result;
}

void sub_17937()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        if (DOES_CHAR_EXIST( l_U14[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U14[I] )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U14[I], sub_228(), 0 ))
                {
                    CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U14[I] );
                    sub_18036();
                }
            }
        }
    }
    return;
}

void sub_18036()
{
    int I;

    for ( I = 0; I <= 6; I++ )
    {
        if (DOES_CHAR_EXIST( l_U14[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U14[I] )))
            {
                if (NOT (IS_PED_IN_COMBAT( l_U14[I] )))
                {
                    TASK_COMBAT( l_U14[I], sub_228() );
                }
            }
        }
    }
    return;
}

void sub_18173()
{
    int I;

    for ( I = 0; I <= 7; I++ )
    {
        if (IS_CHAR_FATALLY_INJURED( l_U14[I] ))
        {
            if (DOES_BLIP_EXIST( l_U27[I] ))
            {
                REMOVE_BLIP( l_U27[I] );
            }
        }
    }
    return;
}

int sub_18265()
{
    int I;

    for ( I = 0; I <= 7; I++ )
    {
        if (NOT (IS_CHAR_FATALLY_INJURED( l_U14[I] )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_18352()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    int iVar8;

    GET_GAME_TIMER( ref l_U47 );
    if (NOT (IS_CHAR_FATALLY_INJURED( sub_228() )))
    {
        GET_CHAR_COORDINATES( sub_228(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    }
    if (NOT l_U127)
    {
        l_U48 = l_U47 + l_U103;
        l_U127 = 1;
    }
    else if (l_U48 < l_U47)
    {
        l_U96 = 0;
    }
    if (NOT l_U96)
    {
        if (l_U119 != 1)
        {
            if (l_U102)
            {
                if ((VDIST( sub_17604(), uVar2 )) > 100.00000000)
                {
                    return 1;
                }
            }
            else if ((VDIST( sub_17604(), uVar2 )) > 50.00000000)
            {
                return 1;
            }
        }
    }
    if (NOT (IS_CHAR_FATALLY_INJURED( sub_228() )))
    {
        if (NOT sub_18265())
        {
            GET_CHAR_COORDINATES( sub_228(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            uVar5 = {sub_17604()};
            if ((VDIST( uVar5, uVar2 )) > 100.00000000)
            {
                if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_228() )))
                {
                    if (NOT l_U63)
                    {
                        SETTIMERA( 0 );
                        l_U128 = l_U122 - l_U125;
                        l_U129 = 1;
                        l_U63 = 1;
                    }
                    else if ((l_U122 - l_U125) > 25000)
                    {
                        l_U129 = 0;
                        iVar8 = 26000 - TIMERA();
                        iVar8 = iVar8 / 1000;
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        if (iVar8 == 1)
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER1", iVar8, 1, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER", iVar8, 1, 1 );
                        }
                        if (TIMERA() > 26000)
                        {
                            return 1;
                        }
                    }
                    else if (l_U129)
                    {
                        iVar8 = l_U122 - l_U125;
                        iVar8 = iVar8 / 1000;
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        if (iVar8 == 1)
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER1", iVar8, 1, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER", iVar8, 1, 1 );
                        }
                        if (TIMERA() > l_U128)
                        {
                            return 1;
                        }
                    }
                    else
                    {
                        iVar8 = 26000 - TIMERA();
                        iVar8 = iVar8 / 1000;
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        if (iVar8 == 1)
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER1", iVar8, 1, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER( "PC_TIMER", iVar8, 1, 1 );
                        }
                        if (TIMERA() > 26000)
                        {
                            return 1;
                        }
                    };;;
                }
                else
                {
                    l_U63 = 0;
                    l_U129 = 1;
                }
            }
            else
            {
                l_U63 = 0;
                l_U129 = 0;
            }
            if ((VDIST( uVar5, uVar2 )) > 1500.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

