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
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U586 = 36;
    l_U638 = 0;
    l_U673 = 0;
    l_U674 = 1;
    l_U677 = -1;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        if ((g_U6) || (g_U5))
        {
            sub_161();
        }
        else
        {
            sub_2276();
        }
        sub_2332( l_U586 );
        sub_2381( l_U586 );
        sub_2475();
    }
    WAIT( 0 );
    sub_3267();
    while (true)
    {
        WAIT( 0 );
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_5418();
        }
        else if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            sub_21153();
        }
        switch (l_U609)
        {
            case 0:
            sub_21510();
            if (IS_WANTED_LEVEL_GREATER( sub_3131(), 0 ))
            {
                if (DOES_BLIP_EXIST( l_U494 ))
                {
                    REMOVE_BLIP( l_U494 );
                    PRINT_NOW( "WANTED_LVL", 7500, 0 );
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U494 )))
            {
                ADD_BLIP_FOR_COORD( 172.08000000, 1089.40100000, 15.30600000, ref l_U494 );
                CHANGE_BLIP_COLOUR( l_U494, 5 );
                SET_ROUTE( l_U494, 1 );
                PRINT_NOW( "FR1_INST_A1", 7500, 0 );
            }
            if (LOCATE_CHAR_ON_FOOT_3D( sub_3174(), 172.08000000, 1089.40100000, 15.30600000, 1.60000000, 1.60000000, 1.60000000, 1 ))
            {
                if ((HAS_MODEL_LOADED( 809067472 )) AND ((HAS_MODEL_LOADED( 1352017873 )) AND ((HAS_MODEL_LOADED( 243672348 )) AND (HAS_MODEL_LOADED( -1292254815 )))))
                {
                    if (sub_21911( 1, 1 ))
                    {
                        sub_22201();
                        l_U609 = 1;
                    }
                }
                else
                {
                    REQUEST_MODEL( 243672348 );
                    REQUEST_MODEL( 1352017873 );
                    REQUEST_MODEL( 809067472 );
                    REQUEST_MODEL( -1292254815 );
                    REQUEST_MODEL( -1028473 );
                }
            }
            if (NOT l_U584)
            {
                if (LOCATE_CHAR_ON_FOOT_3D( sub_3174(), 177.94280000, 1089.63000000, 15.70280000, 250.00000000, 250.00000000, 250.00000000, 0 ))
                {
                    REQUEST_MODEL( 243672348 );
                    REQUEST_MODEL( 1352017873 );
                    REQUEST_MODEL( 809067472 );
                    REQUEST_MODEL( -1292254815 );
                    REQUEST_MODEL( -1028473 );
                    l_U584 = 1;
                }
            }
            break;
            case 1:
            sub_21510();
            if (NOT (IS_CHAR_INJURED( l_U498 )))
            {
                sub_29844();
                sub_30013();
                if ((NOT l_U582) AND (TIMERB() > 4500))
                {
                    sub_30370( 11, 2, 16383, 16383, ref l_U622 );
                    sub_30717( ref l_U622, 0 );
                    sub_30748( ref l_U622, 0 );
                    sub_30778( ref l_U622 );
                    l_U582 = 1;
                }
                if (l_U582)
                {
                    if ((NOT l_U583) AND ((sub_31457( ref l_U622 )) == 3))
                    {
                        sub_3605( l_U586 );
                        sub_31601( l_U586 );
                        sub_2489( ref l_U622, 1 );
                        PRINT_NOW( "FR1_INST_B2", 7500, 1 );
                        l_U583 = 1;
                    }
                }
                if ((l_U590) AND (NOT ((sub_32028( "8435550124" )) || (sub_31713( l_U586, 1 )))))
                {
                    if (sub_28222() == 6)
                    {
                        SETTIMERA( 99999 );
                        STOP_SOUND( l_U589 );
                        l_U590 = 0;
                    }
                }
                if ((l_U590) || ((sub_32028( "8435550124" )) || (sub_31713( l_U586, 1 ))))
                {
                    if (NOT l_U590)
                    {
                        if (NOT l_U587)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U594 );
                            TASK_PAUSE( 0, 500 );
                            if (NOT l_U612)
                            {
                                TASK_PLAY_ANIM( 0, "SEARCH_PHONE", "missfrancis1", 4.00000000, 0, 0, 0, 0, -1 );
                            }
                            TASK_PAUSE( 0, 500 );
                            CLOSE_SEQUENCE_TASK( l_U594 );
                            TASK_PERFORM_SEQUENCE( l_U498, l_U594 );
                            CLEAR_SEQUENCE_TASK( l_U594 );
                            sub_32401( "FM1_CALL2", "FM1AUD", 1 );
                            sub_32612( "THIEF" );
                            sub_32646( l_U498 );
                            l_U612 = 1;
                        }
                        else
                        {
                            OPEN_SEQUENCE_TASK( ref l_U594 );
                            TASK_PAUSE( 0, 1500 );
                            CLOSE_SEQUENCE_TASK( l_U594 );
                            TASK_PERFORM_SEQUENCE( l_U498, l_U594 );
                            CLEAR_SEQUENCE_TASK( l_U594 );
                            sub_32401( "FM1_CALL3", "FM1AUD", 1 );
                            sub_32612( "THIEF" );
                            sub_32646( l_U498 );
                        }
                        PLAY_SOUND_FROM_PED( l_U589, "GET_THIEF_RINGTONE", l_U498 );
                        SETTIMERB( 0 );
                        sub_32846( 1 );
                        l_U590 = 1;
                    }
                    else if (sub_28222() == 2)
                    {
                        sub_32846( 0 );
                        sub_22567();
                        STOP_SOUND( l_U589 );
                        SETTIMERA( 999999 );
                        l_U590 = 0;
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U498, 29, ref l_U600 );
                        if (l_U600 == 7)
                        {
                            TASK_USE_MOBILE_PHONE( l_U498, 1 );
                            if (NOT l_U587)
                            {
                                SETTIMERB( 0 );
                                l_U619 = 1;
                                l_U609 = 2;
                            }
                            else
                            {
                                SETTIMERB( 0 );
                                l_U619 = 1;
                                l_U609 = 2;
                            }
                            STOP_SOUND( l_U589 );
                            l_U590 = 0;
                        }
                    }
                }
                else
                {
                    sub_33064();
                    if ((sub_36627()) || ((IS_PED_FLEEING( l_U498 )) || ((IS_CHAR_RESPONDING_TO_EVENT( l_U498, 49 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U498, sub_3174(), 0 )))))
                    {
                        l_U534 = 1;
                        l_U535 = 1;
                        sub_33115();
                        sub_2709( ref l_U601, 0 );
                        CLEAR_SMALL_PRINTS();
                        sub_34739( "FM1_CHASE2", ref l_U601, 6, 1 );
                        l_U610 = 0;
                        l_U609 = 3;
                    }
                }
            }
            else
            {
                sub_36856();
            }
            break;
            case 2:
            sub_21510();
            if (NOT (IS_CHAR_INJURED( l_U498 )))
            {
                sub_29844();
                sub_30013();
                if (l_U619)
                {
                    if ((sub_28222() == 2) || (sub_28222() == 6))
                    {
                        SETTIMERA( 99999 );
                        STOP_SOUND( l_U589 );
                        l_U590 = 0;
                        l_U609 = 1;
                    }
                    else if (TIMERB() > 1200)
                    {
                        STOP_SOUND( l_U589 );
                        sub_32846( 0 );
                        l_U619 = 0;
                    }
                }
                else if ((sub_28222() == 2) || (sub_28222() == 6))
                {
                    if (NOT l_U587)
                    {
                        STOP_SOUND( l_U589 );
                        SETTIMERA( 99999 );
                        l_U587 = 1;
                        l_U609 = 1;
                    }
                    else
                    {
                        STOP_SOUND( l_U589 );
                        TASK_USE_MOBILE_PHONE( l_U498, 0 );
                        CLEAR_SMALL_PRINTS();
                        l_U534 = 0;
                        l_U535 = 0;
                        l_U536 = 1;
                        sub_33115();
                        l_U610 = 0;
                        l_U609 = 3;
                    }
                }
                else if ((sub_38091()) AND (NOT l_U617))
                {
                    PRINT_HELP( "HELP_PHONE" );
                    l_U617 = 1;
                }
                if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3174(), l_U498, 2.50000000, 2.50000000, 3.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U498, sub_3174(), 0 )))
                {
                    sub_22567();
                    TASK_USE_MOBILE_PHONE( l_U498, 0 );
                    l_U534 = 1;
                    l_U535 = 1;
                    sub_33115();
                    sub_2709( ref l_U601, 0 );
                    sub_34739( "FM1_PHONE", ref l_U601, 6, 1 );
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3174(), l_U498, 2.50000000, 2.50000000, 3.00000000, 0 ))
                    {
                        ADD_BLIP_FOR_CHAR( l_U498, ref l_U495 );
                        SET_BLIP_AS_FRIENDLY( l_U495, 0 );
                        SET_CHAR_AS_ENEMY( l_U498, 1 );
                        PRINT( "FR1_INST_C1", 7500, 1 );
                    }
                    l_U610 = 0;
                    l_U609 = 3;
                };;;
            }
            else
            {
                sub_36856();
            }
            break;
            case 3:
            sub_21510();
            if (NOT (IS_CHAR_INJURED( l_U498 )))
            {
                sub_38454();
                if (l_U610 == 0)
                {
                    sub_38633();
                    if (NOT (IS_CAR_DEAD( l_U499[l_U533] )))
                    {
                        if (IS_CHAR_IN_CAR( l_U498, l_U499[l_U533] ))
                        {
                            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3174(), 0 );
                            if (NOT l_U534)
                            {
                                PRINT_NOW( "FLEE_CAR", 7500, 0 );
                                l_U534 = 1;
                            }
                            l_U610 = 1;
                        }
                    }
                    if (l_U610 != 1)
                    {
                        if (NOT l_U534)
                        {
                            if ((sub_36627()) || (((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U498, sub_3174() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_3131(), l_U498 ))) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U498, sub_3174(), 0 ))))
                            {
                                sub_2709( ref l_U601, 0 );
                                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3174(), l_U498, 6, 6, 6, 0 ))
                                {
                                    sub_34739( "FM1_SPOOK", ref l_U601, 6, 1 );
                                }
                                else
                                {
                                    sub_34739( "FM1_SPOOK", ref l_U601, 4, 1 );
                                }
                                MODIFY_CHAR_MOVE_STATE( l_U498, 3 );
                                SET_CHAR_DECISION_MAKER( l_U498, l_U607 );
                                SET_COMBAT_DECISION_MAKER( l_U498, l_U608 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U498, 1 );
                                l_U534 = 1;
                            }
                        }
                    }
                    sub_39967();
                    if (l_U610 != 2)
                    {
                        if ((IS_VEH_DRIVEABLE( l_U499[l_U533] )) || (IS_CAR_DEAD( l_U499[l_U533] )))
                        {
                            TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U498, sub_3174(), 200.00000000, -2 );
                            l_U610 = 2;
                        }
                    }
                }
                else if (l_U610 == 1)
                {
                    sub_38633();
                    sub_40196( ref l_U498 );
                    if (NOT (IS_CAR_DEAD( l_U499[l_U533] )))
                    {
                        if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U499[l_U533], sub_3174() ))
                        {
                            if (NOT (DOES_BLIP_EXIST( l_U495 )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U498, ref l_U495 );
                                SET_BLIP_AS_FRIENDLY( l_U495, 0 );
                                SET_CHAR_AS_ENEMY( l_U498, 1 );
                                PRINT_NOW( "FR1_INST_C1", 7500, 1 );
                            }
                        }
                    }
                    if ((NOT (IS_CHAR_IN_CAR( l_U498, l_U499[l_U533] ))) || ((IS_CHAR_IN_ANY_CAR( l_U498 )) AND ((IS_VEH_STUCK( l_U499[l_U533], 5000, 0, 1, 0 )) || ((IS_VEH_STUCK( l_U499[l_U533], 60000, 1, 0, 0 )) || (NOT (IS_VEH_DRIVEABLE( l_U499[l_U533] )))))))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U594 );
                        if (IS_CHAR_IN_ANY_CAR( l_U498 ))
                        {
                            TASK_LEAVE_ANY_CAR( 0 );
                        }
                        TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( 0, sub_3174(), 200.00000000, -2 );
                        CLOSE_SEQUENCE_TASK( l_U594 );
                        TASK_PERFORM_SEQUENCE( l_U498, l_U594 );
                        CLEAR_SEQUENCE_TASK( l_U594 );
                        SET_CHAR_DECISION_MAKER( l_U498, l_U607 );
                        SET_COMBAT_DECISION_MAKER( l_U498, l_U608 );
                        sub_2847();
                        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3174(), 1 );
                        l_U610 = 2;
                    }
                    sub_39967();
                }
                else if (l_U610 == 2)
                {
                    if (NOT (IS_CHAR_INJURED( l_U498 )))
                    {
                        if (NOT (IS_PED_FLEEING( l_U498 )))
                        {
                            TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U498, sub_3174(), 200.00000000, -2 );
                        }
                    }
                    sub_38633();
                };;;
            }
            else
            {
                sub_36856();
            }
            break;
            case 4:
            sub_21510();
            sub_41391();
            if (HAS_PICKUP_BEEN_COLLECTED( l_U585 ))
            {
                if (DOES_BLIP_EXIST( l_U495 ))
                {
                    REMOVE_BLIP( l_U495 );
                }
                if (DOES_BLIP_EXIST( l_U496 ))
                {
                    REMOVE_BLIP( l_U496 );
                }
                PLAY_SOUND_FRONTEND( -1, "GET_THIEF_COLLECT_MEMORY_STICK" );
                if (IS_THIS_PRINT_BEING_DISPLAYED( "FR1_INST_D1", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    CLEAR_SMALL_PRINTS();
                }
                l_U609 = 5;
            }
            else if (NOT l_U618)
            {
                PRINT_NOW( "FR1_INST_D1", 7500, 0 );
                l_U618 = 1;
            }
            break;
            case 5:
            sub_21510();
            sub_41391();
            if (IS_WANTED_LEVEL_GREATER( sub_3131(), 0 ))
            {
                if (DOES_BLIP_EXIST( l_U494 ))
                {
                    REMOVE_BLIP( l_U494 );
                    PRINT_NOW( "WANTED_LVL", 7500, 0 );
                }
                else if (NOT l_U621)
                {
                    PRINT_NOW( "WANTED_LVL", 7500, 0 );
                    l_U621 = 1;
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U494 )))
            {
                ADD_BLIP_FOR_COORD( -22.27950000, 1403.49000000, 20.41660000, ref l_U494 );
                CHANGE_BLIP_COLOUR( l_U494, 5 );
                SET_ROUTE( l_U494, 1 );
                PRINT_NOW( "FR1_INST_F1", 7500, 0 );
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3174(), -22.48900000, 1403.89100000, 21.00000000, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if (sub_21911( 1, 1 ))
                {
                    sub_41988();
                    l_U609 = 6;
                }
            }
            break;
            case 6:
            if (NOT (sub_46961( l_U601 )))
            {
                sub_5418();
            }
            break;
            default: break;
        }
    }
    sub_2475();
    return;
}

void sub_161()
{
    sub_170();
    return;
}

void sub_170()
{
    int iVar2;

    iVar2 = 1;
    sub_184( iVar2 );
    sub_1360( iVar2 );
    return;
}

void sub_184(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_228();
        sub_389();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_497();
            sub_536();
        }
    }
    sub_612();
    sub_713();
    uVar5 = sub_826( uParam0 );
    sub_1267( uVar5, 0 );
    return;
}

void sub_228()
{
    sub_242( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_342();
    }
    return;
}

void sub_242(int iParam0)
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

void sub_342()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_389()
{
    sub_398();
    return;
}

void sub_398()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_497()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_536()
{
    sub_545();
    return;
}

void sub_545()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_612()
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

void sub_713()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_735();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_735()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_826(unknown uParam0)
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
    sub_1225( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1225(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1267(int iParam0, boolean bParam1)
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

void sub_1360(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1369();
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
        sub_2144();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1369()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1407( 5, g_U569[I] )) == 1))
        {
            if ((sub_1407( 1, g_U569[I] )) != 0)
            {
                sub_1693( I );
            }
        }
    }
    if (NOT sub_1859())
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

int sub_1407(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1693(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1778( g_U569 - 1 );
    return;
}

void sub_1778(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1859()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1407( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2144()
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

void sub_2276()
{
    sub_2285();
    return;
}

void sub_2285()
{
    int iVar2;

    iVar2 = 11;
    sub_184( iVar2 );
    sub_1360( iVar2 );
    return;
}

void sub_2332(int iParam0)
{
    if (g_U91._fU72 == iParam0)
    {
        g_U91._fU72 = -1;
    }
    return;
}

void sub_2381(unknown uParam0)
{
    if (g_U15946[uParam0]._fU132._fU0)
    {
        switch (g_U91._fU0)
        {
            case 1013:
            g_U91._fU92 = 1;
            break;
            default:
        }
        g_U15946[uParam0]._fU132._fU0 = 0;
    }
    return;
}

void sub_2475()
{
    sub_2489( ref l_U622, 1 );
    sub_2709( ref l_U601, 0 );
    MISSION_AUDIO_BANK_NO_LONGER_NEEDED();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    sub_2847();
    sub_2332( l_U586 );
    sub_2381( l_U586 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    sub_3042();
    RELEASE_WEATHER();
    CLEAR_HELP();
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 70.32000000, 1179.33000000, 10.00000000, 79.81000000, 1184.67000000, 20.00000000, 1 );
    if (IS_PLAYER_PLAYING( sub_3131() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3174(), 1 );
        SET_PLAYER_CONTROL( sub_3131(), 1 );
    }
    SET_MAX_WANTED_LEVEL( 6 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2489(int iParam0, unknown uParam1)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_2542( iParam0->_fU0, g_U569[I] ))
            {
                g_U569[I]._fU20 = uParam1;
                iParam0->_fU24 = I;
            }
        }
    }
    return;
}

int sub_2542(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_1407( 0, uParam0 );
        if (iVar14 == (sub_1407( 0, uParam6 )))
        {
            iVar15 = sub_1407( 3, uParam0 );
            if (iVar15 == (sub_1407( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_2709(int iParam0, unknown uParam1)
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

void sub_2847()
{
    if (l_U493)
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
    l_U491 = 0;
    l_U490 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3042()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3131()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3174()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3267()
{
    LOAD_ADDITIONAL_TEXT( "FRANCI1", 0 );
    LOAD_ADDITIONAL_TEXT( "FM1AUD", 6 );
    sub_3320( "FM1AUD" );
    sub_3447( 0, sub_3174(), "NIKO", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    sub_3605( 11 );
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION/GET_THIEF" )))
    {
        WAIT( 0 );
    }
    sub_3825( -129.02000000, -1010.83000000, 5.50000000, 2, 65424, 64499, 4, 30, -1, 0 );
    FORCE_WEATHER_NOW( 1 );
    if (g_U9893._fU24)
    {
        START_CUTSCENE_NOW( "FM_1" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "FM_1" );
    }
    REQUEST_ANIMS( "missfrancis1" );
    while (NOT (HAVE_ANIMS_LOADED( "missfrancis1" )))
    {
        WAIT( 0 );
    }
    l_U589 = GET_SOUND_ID();
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 70.32000000, 1179.33000000, 10.00000000, 79.81000000, 1184.67000000, 20.00000000, 0 );
    l_U537[0] = {210.70880000, 1081.97100000, 5.43460200};
    l_U537[1] = {205.22090000, 1091.75000000, 5.47175900};
    l_U537[2] = {204.29690000, 1085.56900000, 5.46869300};
    l_U537[3] = {207.36510000, 1104.44900000, 5.46570700};
    l_U556[0] = {211.13660000, 1083.65700000, 4.94890000};
    l_U575[0] = 234.63870000;
    l_U556[1] = {206.28270000, 1092.65200000, 4.94890000};
    l_U575[1] = 127.07890000;
    l_U556[2] = {205.77130000, 1086.26900000, 4.94890000};
    l_U575[2] = 125.41120000;
    l_U556[3] = {208.62680000, 1103.82200000, 4.94890000};
    l_U575[3] = 100.56200000;
    l_U639[0] = {206.38870000, 1080.81900000, 5.56517300};
    l_U639[1] = {207.44860000, 1090.04400000, 5.60601600};
    l_U639[2] = {209.53210000, 1097.74500000, 5.57087300};
    l_U639[3] = {202.88320000, 1098.26800000, 6.73553100};
    l_U639[4] = {194.85340000, 1098.61800000, 8.13970700};
    l_U639[5] = {192.35830000, 1089.12900000, 8.35693200};
    l_U639[6] = {191.76560000, 1080.76700000, 8.08632500};
    l_U639[7] = {199.07570000, 1080.40300000, 7.05927500};
    l_U639[8] = {183.29560000, 1086.10100000, 11.10956000};
    l_U639[9] = {185.06610000, 1093.70700000, 10.67184000};
    l_U599 = 0;
    for ( l_U599 = 0; l_U599 < 3; l_U599++ )
    {
        ADD_SCENARIO_BLOCKING_AREA( l_U537[l_U599]._fU0 - 0.20000000, l_U537[l_U599]._fU4 - 0.20000000, l_U537[l_U599]._fU8 - 0.20000000, l_U537[l_U599]._fU0 + 0.20000000, l_U537[l_U599]._fU4 + 0.20000000, l_U537[l_U599]._fU8 + 0.20000000 );
    }
    SET_WANTED_MULTIPLIER( 0.50000000 );
    l_U503[0] = {177.98430000, 1040.73100000, 13.56820000};
    l_U525[0] = 19.05340000;
    l_U503[1] = {165.63510000, 1122.74900000, 13.70310000};
    l_U525[1] = 0.78310000;
    l_U503[2] = {165.79250000, 1143.98100000, 13.70310000};
    l_U525[2] = 13.81790000;
    # -sub_C1FFC0-0xc214c8( 3, ref l_U607 );
    N_1061756705( l_U607, 31 );
    LOAD_COMBAT_DECISION_MAKER( 1, ref l_U608 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U608, 10 );
    l_U610 = 0;
    l_U614 = 70000;
    l_U616 = 1;
    LOAD_SCENE( -128.47840000, -1035.31900000, 4.11690000 );
    SET_CHAR_COORDINATES( sub_3174(), -128.47840000, -1035.31900000, 4.11690000 );
    SET_CHAR_HEADING( sub_3174(), 10.31300000 );
    SET_CAM_BEHIND_PED( sub_3174() );
    SET_PLAYER_CONTROL( sub_3131(), 1 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_IN( 500 );
    ADD_BLIP_FOR_COORD( 177.94280000, 1089.63000000, 14.70280000, ref l_U494 );
    SET_ROUTE( l_U494, 1 );
    PRINT_NOW( "FR1_INST_A1", 7500, 0 );
    return;
}

void sub_3320(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3339();
    return;
}

void sub_3339()
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

void sub_3447(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3531( "\n PED NUMBER ", uParam0 );
    sub_3571( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3531(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3571(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3605(unknown uParam0)
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

void sub_3825(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, boolean bParam9)
{
    unknown uVar12;
    boolean bVar13;
    unknown uVar14;

    uVar14 = TO_FLOAT( iParam8 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar12 );
    if (IS_VEH_DRIVEABLE( uVar12 ))
    {
        if (iParam8 > 0)
        {
            if (LOCATE_CAR_3D( uVar12, uParam4._fU0, uParam4._fU4, uParam4._fU8, uVar14, uVar14, uVar14, 0 ))
            {
                SET_CAR_COORDINATES( uVar12, -10, -10, -10 );
                bVar13 = true;
            }
        }
        else if (LOCATE_CAR_3D( uVar12, uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7, uParam7, uParam7, 0 ))
        {
            SET_CAR_COORDINATES( uVar12, -10, -10, -10 );
            bVar13 = true;
        }
    }
    if (bParam9)
    {
        CLEAR_AREA_OF_CARS( uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7 );
    }
    else
    {
        CLEAR_AREA( uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7, 0 );
    }
    if (bVar13)
    {
        CLEAR_AREA( uParam0._fU0, uParam0._fU4, uParam0._fU8, 3.00000000, 0 );
        SET_CAR_HEADING( uVar12, uParam3 );
        SET_CAR_COORDINATES( uVar12, uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    return;
}

void sub_5418()
{
    if ((g_U6) || (g_U5))
    {
        sub_5439();
    }
    else
    {
        sub_17032();
    }
    sub_17133( 23 );
    CLEAR_WANTED_LEVEL( sub_3131() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    UNLOCK_MISSION_NEWS_STORY( 18 );
    sub_18514( 18 );
    sub_2475();
    return;
}

void sub_5439()
{
    sub_5448();
    return;
}

void sub_5448()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_5466();
    sub_5525( iVar2, iVar3, iVar4 );
    return;
}

void sub_5466()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_5525(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 1;
    sub_5557( iVar5, uParam0, uParam1, uParam2, "Contact_2" );
    return;
}

void sub_5557(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_5653( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_5653( ref cVar9 );
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
            sub_5653( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_5653( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_5653( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_5653( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_6230( iParam0, iVar7 );;;
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
                sub_6627( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_6627( 0, 4 );
            }
        }
    }
    if (NOT (sub_6716( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3131(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3131() );
    }
    sub_1369();
    bVar27 = true;
    uVar28 = sub_6230( iParam0, iVar7 );
    uVar29 = sub_826( iParam0 );
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
                sub_16092( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_16522();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_16607( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_16664( iParam0 );
                sub_16703( 0 );
                sub_1267( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_16811();
        }
    }
    if (bParam2)
    {
        sub_16522();
        sub_16899();
        sub_16703( 0 );
    }
    if (bParam3)
    {
        sub_16522();
        sub_16939();
        sub_16703( 0 );
        sub_1267( uVar29, 0 );
    }
    sub_713();
    return;
}

void sub_5653(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_6230(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1225( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_6627(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_6716(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_6924( uParam1 );
        break;
        case 1:
        bVar8 = sub_9002( uParam1 );
        break;
        case 2:
        bVar8 = sub_9228( uParam1 );
        break;
        case 3:
        bVar8 = sub_9378( uParam1 );
        break;
        case 4:
        bVar8 = sub_9656( uParam1 );
        break;
        case 5:
        bVar8 = sub_9959( uParam1 );
        break;
        case 6:
        bVar8 = sub_10158( uParam1 );
        break;
        case 7:
        bVar8 = sub_10384( uParam1 );
        break;
        case 8:
        bVar8 = sub_10619( uParam1 );
        break;
        case 9:
        bVar8 = sub_10994( uParam1 );
        break;
        case 10:
        bVar8 = sub_11241( uParam1 );
        break;
        case 11:
        bVar8 = sub_11380( uParam1 );
        break;
        case 12:
        bVar8 = sub_11679( uParam1 );
        break;
        case 13:
        bVar8 = sub_11907( uParam1 );
        break;
        case 14:
        bVar8 = sub_12194( uParam1 );
        break;
        case 15:
        bVar8 = sub_12476( uParam1 );
        break;
        case 16:
        bVar8 = sub_12758( uParam1 );
        break;
        case 17:
        bVar8 = sub_12959( uParam1 );
        break;
        case 18:
        bVar8 = sub_13032( uParam1 );
        break;
        case 19:
        bVar8 = sub_13246( uParam1 );
        break;
        case 20:
        bVar8 = sub_13499( uParam1 );
        break;
        case 21:
        bVar8 = sub_13746( uParam1 );
        break;
        case 22:
        bVar8 = sub_13947( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_8607( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_6230( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_14270( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_6924(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_7203( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_7203( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_7203( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_7203( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_7203( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_7203( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_7203( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_7203( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_7203( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_7203( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_7203( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_7203( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_7203( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_7203( iVar3, 0, 3, 1, 0, 0 );
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
        sub_7203( iVar3, 0, sub_8485(), sub_8751(), 0, 0 );
        break;
        default:
        sub_8910( "Friend 1", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Friend 1", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_7203(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_7214( uParam1 );
    sub_7388( uParam0, 0, uParam2 );
    sub_7388( uParam0, 1, uParam3 );
    sub_7388( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_5466();
    return;
}

void sub_7214(unknown uParam0)
{
    ADD_SCORE( sub_3131(), uParam0 );
    sub_7239( uParam0 );
    return;
}

void sub_7239(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1225( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_7388(unknown uParam0, int iParam1, int iParam2)
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
        sub_7545( uParam0 );
    }
    return;
}

void sub_7545(unknown uParam0)
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

int sub_8485()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_8607( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_8607(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_8751()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_8607( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_8910(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_9002(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_7203( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_8910( "Contact 2", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 2", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9228(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_7203( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_8910( "Girl 3", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Girl 3", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9378(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_7203( iVar3, 0, sub_8485(), sub_8751(), 0, 0 );
        break;
        default:
        sub_8910( "Friend 4", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Friend 4", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9656(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_7203( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_7203( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_7203( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_7203( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_8910( "Contact 5", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 5", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9959(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_8910( "Contact 7", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 7", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10158(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_7203( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_8910( "Contact 7b", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 7b", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10384(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_7203( iVar3, 0, sub_8485(), sub_8751(), 0, 0 );
        break;
        default:
        sub_8910( "Friend 8", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Friend 8", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10619(unknown uParam0)
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
        sub_7203( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_7203( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_7203( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_7203( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_7203( iVar3, 0, sub_8485(), sub_8751(), 0, 0 );
        break;
        default:
        sub_8910( "Friend 9", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Friend 9", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10994(unknown uParam0)
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
        sub_7203( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_7203( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_7203( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_8910( "Contact 10", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_8910( "Contact 10", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11241(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_8910( "Girl 11", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Girl 11", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11380(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_7203( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_7203( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_7203( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_7203( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_7203( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_8910( "Contact 12", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 12", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11679(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_7203( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_8910( "Contact 13", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 13", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11907(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_7203( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_7203( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_7203( iVar3, 0, sub_8485(), sub_8751(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_8910( "Friend 15", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Friend 15", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12194(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_7203( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_7203( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_7203( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_8910( "Contact 16", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 16", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12476(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_7203( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_7203( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_7203( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_8910( "Contact 18", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 18", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12758(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_8910( "Contact 19", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 19", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12959(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_8910( "Girl 20", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13032(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_8910( "Contact 21", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 21", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13246(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_7203( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_7203( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_8910( "Contact 22", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 22", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13499(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_7203( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_7203( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_7203( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_8910( "Contact 24", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 24", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13746(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_7203( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_7203( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_7203( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_8910( "Contact 25", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_8910( "Contact 25", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13947(unknown uParam0)
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
        sub_7203( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_8910( "Girl 26", 1 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_8910( "Girl 26", 0 );
        sub_7203( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_14270(int iParam0, int iParam1)
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
    if (sub_14318( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_15049( iParam1 );
    }
    return;
}

int sub_14318(int iParam0, int iParam1)
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
            sub_14458( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_14458(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_14640( 0 );
    return;
}

void sub_14640(boolean bParam0)
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
        sub_14895();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_14895()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_15049(int iParam0)
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
        sub_15382( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_15382( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_15382( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_15382( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_15382( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_15382( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_15382( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_15382( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_15382( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_15382( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_15382( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_15382( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_15382( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_15382( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_15382( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_15382( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_15382( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_15382( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_15382( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_15382(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_16092(unknown uParam0, unknown uParam1)
{
    sub_16111( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_16111(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_16522()
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

int sub_16607(int iParam0, int iParam1)
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

void sub_16664(unknown uParam0)
{
    sub_612();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_16703(unknown uParam0)
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

void sub_16811()
{
    sub_16820();
    return;
}

void sub_16820()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_16899()
{
    sub_16820();
    return;
}

void sub_16939()
{
    sub_16820();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_17032()
{
    sub_17041();
    return;
}

void sub_17041()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_5466();
    sub_17070( iVar2, iVar3, iVar4 );
    return;
}

void sub_17070(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 11;
    sub_5557( iVar5, uParam0, uParam1, uParam2, "Contact_12" );
    return;
}

void sub_17133(unknown uParam0)
{
    switch (uParam0)
    {
        case 21:
        if (g_U1965[0] == 0)
        {
            sub_17288( ref g_U1967[0], 4, 0, 0 );
            g_U1965[0] = 1;
        }
        break;
        case 22:
        if (g_U1984[0] == 0)
        {
            sub_17288( ref g_U1986[0], 4, 0, 0 );
            g_U1984[0] = 1;
        }
        break;
        case 23:
        if (g_U2003[0] == 0)
        {
            sub_17288( ref g_U2005[0], 4, 0, 0 );
            g_U2003[0] = 1;
        }
        break;
        case 24:
        if (g_U2022[0] == 0)
        {
            sub_17288( ref g_U2024[0], 4, 0, 0 );
            g_U2022[0] = 1;
        }
        break;
        case 25:
        if (g_U2041[0] == 0)
        {
            sub_17288( ref g_U2043[0], 4, 0, 0 );
            g_U2041[0] = 1;
        }
        break;
        case 26:
        if (g_U2060[0] == 0)
        {
            sub_17288( ref g_U2062[0], 4, 0, 0 );
            g_U2060[0] = 1;
        }
        break;
        case 27:
        if (g_U2079[0] == 0)
        {
            sub_17288( ref g_U2081[0], 4, 0, 0 );
            g_U2079[0] = 1;
        }
        break;
        case 28:
        if (g_U2098[0] == 0)
        {
            sub_17288( ref g_U2100[0], 4, 0, 0 );
            g_U2098[0] = 1;
        }
        break;
        case 29:
        if (g_U2117[0] == 0)
        {
            sub_17288( ref g_U2119[0], 4, 0, 0 );
            g_U2117[0] = 1;
        }
        break;
        case 30:
        if (g_U2136[0] == 0)
        {
            sub_17288( ref g_U2138[0], 4, 0, 0 );
            g_U2136[0] = 1;
        }
        break;
        case 31:
        if (g_U2155[0] == 0)
        {
            sub_17288( ref g_U2157[0], 4, 0, 0 );
            g_U2155[0] = 1;
        }
        break;
        case 32:
        if (g_U2174[0] == 0)
        {
            sub_17288( ref g_U2176[0], 4, 0, 0 );
            g_U2174[0] = 1;
        }
        break;
        case 33:
        if (g_U2193[0] == 0)
        {
            sub_17288( ref g_U2195[0], 4, 0, 0 );
            g_U2193[0] = 1;
        }
        break;
        case 34:
        if (g_U2212[0] == 0)
        {
            sub_17288( ref g_U2214[0], 4, 0, 0 );
            g_U2212[0] = 1;
        }
        break;
    }
    return;
}

void sub_17288(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_17341( iParam0, uParam1, uParam2 );
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
        sub_17473( iParam0 + 0 );
    }
    return;
}

void sub_17341(int iParam0, int iParam1, int iParam2)
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
        sub_17473( iParam0 + 0 );
    }
    return;
}

void sub_17473(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_17504( iParam0->_fU4 )))
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

int sub_17504(unknown uParam0)
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

void sub_18514(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_18601( iParam0 ))
    {
        sub_19067( iParam0 );
    }
    return;
}

int sub_18601(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_17288( ref uVar3, 1, 0, 0 );
    sub_18674( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_18887( "\n ----------------------------------------------------------------" );
    sub_3531( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_18887( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_18674(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_18887(unknown uParam0)
{
    return;
}

void sub_19067(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_19278( 20, 6, 16383, 16383, ref uVar4 );
        sub_19954( ref uVar4, 7 );
        sub_19985( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_19278( 20, 7, 9, 16383, ref uVar4 );
        sub_19954( ref uVar4, 7 );
        sub_19985( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_19278(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_19302( uParam0, 0, iParam4 + 0 );
    sub_19302( uParam1, 1, iParam4 + 0 );
    sub_19302( uParam2, 2, iParam4 + 0 );
    sub_19302( uParam3, 3, iParam4 + 0 );
    sub_19302( 0, 4, iParam4 + 0 );
    sub_19302( 1, 5, iParam4 + 0 );
    sub_19302( 65535, 6, iParam4 + 0 );
    sub_19302( 0, 12, iParam4 + 0 );
    sub_19302( 0, 11, iParam4 + 0 );
    sub_19302( 0, 14, iParam4 + 0 );
    sub_19302( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_19302( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_19302( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_19302(unknown uParam0, unknown uParam1, int iParam2)
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
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_19954(int iParam0, unknown uParam1)
{
    sub_19302( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_19985(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_20025())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_20712( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_20511( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_20025()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_20059( 5, g_U968[I] )) == 7)
        {
            sub_20511( I );
            return 1;
        }
    }
    return 0;
}

int sub_20059(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_20511(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_20584( 39 );
    return;
}

void sub_20584(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_20712(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_20773( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_20773(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_21153()
{
    if (l_U609 == 0)
    {
        SET_CHAR_COORDINATES( sub_3174(), 164.05800000, 1080.37200000, 13.60820000 );
        SET_CHAR_HEADING( sub_3174(), 9.00000000 );
        SET_CAM_BEHIND_PED( sub_3174() );
    }
    else if (l_U609 == 1)
    {
        if (NOT (IS_CHAR_INJURED( l_U498 )))
        {
            DELETE_CHAR( ref l_U498 );
        }
        ADD_BLIP_FOR_COORD( -22.27950000, 1403.49000000, 20.41660000, ref l_U494 );
        CHANGE_BLIP_COLOUR( l_U494, 5 );
        SET_ROUTE( l_U494, 1 );
        PRINT_NOW( "FR1_INST_F1", 7500, 0 );
        l_U609 = 5;
    }
    else if (l_U609 == 5)
    {
        SET_CHAR_COORDINATES( sub_3174(), -36.49700000, 1405.49700000, 19.41740000 );
        SET_CHAR_HEADING( sub_3174(), 236.49370000 );
        SET_CAM_BEHIND_PED( sub_3174() );
    };;;
    return;
}

void sub_21510()
{
    if (LOCATE_CHAR_ON_FOOT_3D( sub_3174(), 172.08000000, 1089.40100000, 15.30600000, 100, 100, 100, 0 ))
    {
        if (NOT l_U638)
        {
            SET_CAR_DENSITY_MULTIPLIER( 0.20000000 );
            l_U638 = 1;
        }
    }
    else if (l_U638)
    {
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        l_U638 = 0;
    }
    return;
}

int sub_21911(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3174() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3174(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3174() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3174(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3174()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3174() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3174() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3131() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3131() )))
    {
        return 0;
    }
    return 1;
}

void sub_22201()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown[2] uVar9;
    unknown uVar12;

    iVar4 = 0;
    array(ref uVar9, 2);
    while ((NOT bVar3) AND (NOT bVar2))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar6 );
        if (iVar4 != 0)
        {
            iVar7 = iVar6 - iVar5;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_22268()) AND (iVar7 >= 1000)))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            WAIT( 500 );
            sub_22384( 11 );
            sub_22567();
            bVar3 = true;
        }
        else
        {
            switch (iVar4)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_3131(), 0 );
                REMOVE_BLIP( l_U494 );
                CLEAR_SMALL_PRINTS();
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                while (NOT sub_22799())
                {
                    WAIT( 0 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3174() );
                SET_CHAR_COORDINATES( sub_3174(), 172.94910000, 1088.41600000, 13.70370000 );
                SET_CHAR_HEADING( sub_3174(), 296.22920000 );
                SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER( sub_3174(), 0.70000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( sub_3174(), 179.54570000, 1089.52700000, 13.70310000, 2, 20000, 0.40000000 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3174(), 1 );
                sub_3825( 166.10000000, 1072.20000000, 13.55000000, 10, 172, 1088, 14, 200, 30, 1 );
                sub_3825( 166.10000000, 1072.20000000, 13.55000000, 10, 172, 1088, 14, 30, -1, 0 );
                SET_PED_DENSITY_MULTIPLIER( 1.50000000 );
                SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                SET_SCRIPTED_CONVERSION_CENTRE( 205, 1089, 8 );
                sub_23134();
                BEGIN_CAM_COMMANDS( ref uVar12 );
                CREATE_CAM( 14, ref uVar9[0] );
                SET_CAM_POS( uVar9[0], 178.50000000, 1078.58700000, 15.20491000 );
                SET_CAM_ROT( uVar9[0], -0.52304600, -0.00000000, 2.49681400 );
                SET_CAM_FOV( uVar9[0], 29.00000000 );
                CREATE_CAM( 14, ref uVar9[1] );
                SET_CAM_POS( uVar9[1], 178.50000000, 1078.58700000, 15.20491000 );
                SET_CAM_ROT( uVar9[1], -0.52304600, -0.00000000, 2.49681400 );
                SET_CAM_FOV( uVar9[1], 26.00000000 );
                CREATE_CAM( 3, ref uVar8 );
                SET_CAM_ACTIVE( uVar9[0], 1 );
                SET_CAM_PROPAGATE( uVar9[0], 1 );
                SET_CAM_ACTIVE( uVar9[1], 1 );
                SET_CAM_PROPAGATE( uVar9[1], 1 );
                SET_CAM_ACTIVE( uVar8, 1 );
                SET_CAM_PROPAGATE( uVar8, 1 );
                SET_CAM_INTERP_STYLE_CORE( uVar8, uVar9[0], uVar9[1], 5000, 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                sub_2709( ref l_U601, 0 );
                SETTIMERA( 0 );
                SETTIMERB( 0 );
                GET_GAME_TIMER( ref iVar5 );
                iVar4 = 1;
                break;
                case 1:
                if ((TIMERA() > 8000) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3174(), 179.40000000, 1089.80000000, 14.70000000, 1.00000000, 1.00000000, 1.00000000, 0 )))
                {
                    sub_23730( 11, "FM1_CALL1", "FM1AUD", g_U480 );
                    SETTIMERA( 0 );
                    iVar4 = 2;
                }
                break;
                case 2:
                if (TIMERA() > 750)
                {
                    SET_CAM_ACTIVE( uVar9[1], 0 );
                    SET_CAM_PROPAGATE( uVar9[1], 0 );
                    SET_CAM_ACTIVE( uVar8, 0 );
                    SET_CAM_PROPAGATE( uVar8, 0 );
                    SET_CAM_POS( uVar9[0], 179.05920000, 1089.20000000, 15.58696000 );
                    SET_CAM_ROT( uVar9[0], -21.32293000, -0.00000000, -91.63115000 );
                    SET_CAM_FOV( uVar9[0], 55.00000000 );
                    SET_CHAR_COORDINATES( sub_3174(), 179.54570000, 1089.52700000, 13.70310000 );
                    SET_CHAR_HEADING( sub_3174(), 291.50000000 );
                    SETTIMERA( 0 );
                    iVar4 = 3;
                }
                break;
                case 3:
                l_U599 = sub_27795();
                if (l_U599 > 0)
                {
                    SET_CAM_POS( uVar9[0], 213.73580000, 1075.66400000, 6.87522700 );
                    SET_CAM_ROT( uVar9[0], -0.80135100, 0.00000000, 62.37865000 );
                    SET_CAM_POS( uVar9[1], 215.65600000, 1088.39300000, 6.97759400 );
                    SET_CAM_ROT( uVar9[1], -0.83925100, 0.00000000, 87.92900000 );
                    SET_CAM_FOV( uVar9[1], 55.00000000 );
                    SET_CAM_ACTIVE( uVar9[1], 1 );
                    SET_CAM_PROPAGATE( uVar9[1], 1 );
                    SET_CAM_ACTIVE( uVar8, 1 );
                    SET_CAM_PROPAGATE( uVar8, 1 );
                    SET_CAM_INTERP_STYLE_CORE( uVar8, uVar9[0], uVar9[1], 15000, 0 );
                    SET_CAM_INTERP_STYLE_DETAILED( uVar8, 0, 0, 1, 1 );
                    SETTIMERA( 0 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    iVar4 = 5;
                }
                break;
                case 4:
                if (l_U599 > 1)
                {
                    SET_CAM_POS( uVar9[0], 179.05920000, 1089.20000000, 15.58696000 );
                    SET_CAM_ROT( uVar9[0], -21.32293000, -0.00000000, -91.63115000 );
                    SET_CAM_ACTIVE( uVar9[1], 0 );
                    SET_CAM_PROPAGATE( uVar9[1], 0 );
                    SET_CAM_ACTIVE( uVar8, 0 );
                    SET_CAM_PROPAGATE( uVar8, 0 );
                    SETTIMERA( 0 );
                    iVar4 = 5;
                }
                break;
                case 5:
                if (sub_28222() == 6)
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    WAIT( 500 );
                    SET_CHAR_COORDINATES( sub_3174(), 179.40320000, 1089.79400000, 13.70290000 );
                    SET_CHAR_HEADING( sub_3174(), 286.24290000 );
                    bVar2 = true;
                }
                break;
            }
        }
    }
    SET_WANTED_MULTIPLIER( 1.00000000 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    if (DOES_CAM_EXIST( uVar8 ))
    {
        if (IS_CAM_ACTIVE( uVar8 ))
        {
            SET_CAM_ACTIVE( uVar8, 0 );
            SET_CAM_PROPAGATE( uVar8, 0 );
            DESTROY_CAM( uVar8 );
        }
        if (IS_CAM_ACTIVE( uVar9[0] ))
        {
            SET_CAM_ACTIVE( uVar9[0], 0 );
            SET_CAM_PROPAGATE( uVar9[0], 0 );
            DESTROY_CAM( uVar9[0] );
        }
        if (IS_CAM_ACTIVE( uVar9[1] ))
        {
            SET_CAM_ACTIVE( uVar9[1], 0 );
            SET_CAM_PROPAGATE( uVar9[1], 0 );
            DESTROY_CAM( uVar9[1] );
        }
    }
    END_CAM_COMMANDS( ref uVar12 );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_3131(), 1 );
    sub_3042();
    sub_28637();
    sub_29021();
    TASK_USE_MOBILE_PHONE( sub_3174(), 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.20000000 );
    CLEAR_SCRIPTED_CONVERSION_CENTRE();
    SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER( sub_3174(), 1.00000000 );
    SET_CHAR_COORDINATES( sub_3174(), 179.40320000, 1089.79400000, 13.70290000 );
    SET_CHAR_HEADING( sub_3174(), 286.24290000 );
    SET_CAM_BEHIND_PED( sub_3174() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3174(), 0 );
    DO_SCREEN_FADE_IN( 500 );
    SETTIMERB( 0 );
    CLEAR_SMALL_PRINTS();
    sub_2709( ref l_U601, 0 );
    return;
}

int sub_22268()
{
    if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_22384(int iParam0)
{
    if (g_U91._fU60 == iParam0)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 6:
            case 7:
            case 8: break;
            default:
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
            if (IS_MOBILE_PHONE_CALL_ONGOING())
            {
                ABORT_SCRIPTED_CONVERSATION( 0 );
            }
            if ((g_U91._fU0 != 1001) AND (g_U91._fU0 != 1000))
            {
                g_U91._fU0 = 1010;
            }
            break;
        }
    }
    return;
}

void sub_22567()
{
    if ((g_U8394 == 4) || (g_U555 == 1))
    {
        if (g_U91._fU60 != -1)
        {
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U91._fU376 = 0;
        g_U91._fU100 = 1;
    }
    return;
}

void sub_22799()
{
    return sub_22810( 1, 1 );
}

int sub_22810(boolean bParam0, unknown uParam1)
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

void sub_23134()
{
    FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 211.53570000, 1086.18600000, 5.91481100, 2.00000000, 3 );
    FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 205.19870000, 1089.60900000, 5.53129800, 6.00000000, 7 );
    FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 203.48100000, 1073.82600000, 5.80555900, 4.00000000, 5 );
    FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 210.67200000, 1079.95700000, 5.76960600, 4.00000000, 3 );
    FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( 194.98070000, 1089.55400000, 8.12139800, 6.00000000, 5 );
    return;
}

void sub_23730(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown[2] uVar15;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    array(ref uVar15, 2);
    return sub_23789( uParam0, ref cVar6, uParam2, 0, ref uVar15, ref uVar15, "", 0, 1, 2, uParam3, 1, 0, 0 );
}

int sub_23789(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_18887( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_18887( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3131() )))
    {
        sub_18887( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3174() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3174() )))
    {
        sub_18887( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_18887( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_24304()))
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
                sub_18887( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_24304()))
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
    sub_25676( uParam0, ref g_U91._fU176 );
    sub_27057( ref g_U91._fU160 );
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
        sub_3571( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_24304()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_24361())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_24361()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3131() )))
    {
        sub_18887( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_18887( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_18887( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_18887( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3131() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3174() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3174(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_18887( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3174() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_18887( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_18887( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3131() )))
    {
        sub_18887( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_25676(int iParam0, unknown uParam1)
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

void sub_27057(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_27795()
{
    return GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
}

int sub_28222()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_28637()
{
    if ((g_U6) || (g_U5))
    {
        l_U588 = 1;
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U588 );
        while ((l_U599 < 100) AND (NOT (DOES_SCENARIO_EXIST_IN_AREA( l_U537[l_U588], 0.50000000, 1 ))))
        {
            WAIT( 0 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U588 );
            l_U599++;
        }
        if (l_U599 == 100)
        {
            l_U629 = 1;
        }
    }
    CREATE_CHAR( 26, -1292254815, l_U556[l_U588]._fU0, l_U556[l_U588]._fU4, l_U556[l_U588]._fU8, ref l_U498, 1 );
    SET_CHAR_HEADING( sub_3174(), l_U575[l_U588] );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U498 );
    sub_3447( 1, l_U498, "THIEF", 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1292254815 );
    SET_PED_DIES_WHEN_INJURED( l_U498, 1 );
    if (NOT l_U629)
    {
        TASK_USE_NEAREST_SCENARIO_TO_POS( l_U498, l_U537[l_U588], 0.50000000 );
    }
    else
    {
        SET_CHAR_COORDINATES( l_U498, 190.80210000, 1093.02600000, 7.44880000 );
        SET_CHAR_HEADING( l_U498, 276.94090000 );
    }
    return;
}

void sub_29021()
{
    REQUEST_MODEL( 1534326199 );
    REQUEST_MODEL( -449022887 );
    REQUEST_MODEL( -193114041 );
    while ((NOT (HAS_MODEL_LOADED( -193114041 ))) || ((NOT (HAS_MODEL_LOADED( -449022887 ))) || (NOT (HAS_MODEL_LOADED( 1534326199 )))))
    {
        WAIT( 0 );
    }
    l_U599 = 0;
    for ( l_U599 = 0; l_U599 < 3; l_U599++ )
    {
        if (l_U599 == 1)
        {
            CREATE_CAR( -449022887, l_U503[l_U599]._fU0, l_U503[l_U599]._fU4, l_U503[l_U599]._fU8, ref l_U499[l_U599], 1 );
        }
        else
        {
            CREATE_CAR( 1534326199, l_U503[l_U599]._fU0, l_U503[l_U599]._fU4, l_U503[l_U599]._fU8, ref l_U499[l_U599], 1 );
        }
        SET_CAR_HEADING( l_U499[l_U599], l_U525[l_U599] );
        SET_CAR_COORDINATES( l_U499[l_U599], l_U503[l_U599]._fU0, l_U503[l_U599]._fU4, l_U503[l_U599]._fU8 );
        SET_CAR_ON_GROUND_PROPERLY( l_U499[l_U599] );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1534326199 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -449022887 );
    return;
}

void sub_29844()
{
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3174(), 195.82000000, 1089.58200000, 19.00000000, 40.00000000, 40.00000000, 40.00000000, 0 )))
    {
        if (NOT (DOES_BLIP_EXIST( l_U497 )))
        {
            PRINT_NOW( "PLAYER_LOST", 7000, 1 );
            ADD_BLIP_FOR_COORD( 194.05000000, 1089.86000000, 7.69000000, ref l_U497 );
        }
    }
    else if (DOES_BLIP_EXIST( l_U497 ))
    {
        REMOVE_BLIP( l_U497 );
    }
    return;
}

void sub_30013()
{
    GET_GAME_TIMER( ref l_U675 );
    l_U599 = l_U675 - l_U676;
    if (l_U599 > l_U677)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref l_U599 );
        GET_CLOSEST_CHAR( l_U639[l_U599]._fU0, l_U639[l_U599]._fU4, l_U639[l_U599]._fU8, 10.00000000, 1, 0, ref l_U670[l_U673] );
        if ((NOT (IS_CHAR_INJURED( l_U670[l_U673] ))) AND (l_U670[l_U673] != nil))
        {
            SET_CHAR_AS_MISSION_CHAR( l_U670[l_U673] );
            TASK_MOBILE_CONVERSATION( l_U670[l_U673], 0 );
            if (DOES_CHAR_EXIST( l_U670[l_U674] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U670[l_U674] );
            }
            l_U599 = l_U674;
            l_U674 = l_U673;
            l_U673 = l_U599;
            l_U676 = l_U675;
            GENERATE_RANDOM_INT_IN_RANGE( 20000, 40000, ref l_U677 );
        }
    }
    return;
}

void sub_30370(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_30392( uParam0, 0, iParam4 + 0 );
    sub_30392( uParam1, 1, iParam4 + 0 );
    sub_30392( uParam2, 2, iParam4 + 0 );
    sub_30392( uParam3, 3, iParam4 + 0 );
    sub_30392( 0, 4, iParam4 + 0 );
    sub_30392( 1, 5, iParam4 + 0 );
    sub_30392( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_30392(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_30717(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_30748(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

int sub_30778(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_30848())
        {
            sub_1693( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_30975( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_1693( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_1407( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_1407( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_30848()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1407( 1, g_U569[I] )) != 0))
        {
            sub_1693( I );
            return 1;
        }
    }
    return 0;
}

int sub_30975(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_2542( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_31457(int iParam0)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_2542( iParam0->_fU0, g_U569[I] ))
            {
                iParam0->_fU24 = I;
                return sub_1407( 4, g_U569[I] );
            }
        }
        iParam0->_fU24 = -2;
    }
    return 6;
}

void sub_31601(unknown uParam0)
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

int sub_31713(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_18887( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_18887( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U91._fU60 == iParam0) AND (g_U91._fU0 == 1005))
    {
        if (bParam1)
        {
            if ((NOT g_U91._fU372) AND (g_U91._fU508 >= 4))
            {
                return 1;
            }
        }
        else if (NOT g_U91._fU368)
        {
            return 1;
        }
    }
    return 0;
}

int sub_32028(unknown uParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        return 0;
    }
    if ((g_U91._fU508 >= 4) AND (g_U91._fU0 == 1005))
    {
        if (g_U91._fU60 == 56)
        {
            return COMPARE_STRING( ref g_U91._fU128, uParam0 );
        }
    }
    return 0;
}

int sub_32401(unknown uParam0, unknown uParam1, boolean bParam2)
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
    uVar23 = g_U91._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_23789( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U91._fU368) == 1)
        {
            StrCopy( ref g_U91._fU224[0], uParam1, 16 );
            StrCopy( ref g_U91._fU224[1], uParam0, 16 );
            sub_25676( uVar23, ref g_U91._fU176 );
            g_U91._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

void sub_32612(unknown uParam0)
{
    StrCopy( ref g_U91._fU176, uParam0, 32 );
    return;
}

void sub_32646(unknown uParam0)
{
    g_U91._fU512 = uParam0;
    return;
}

void sub_32846(unknown uParam0)
{
    g_U91._fU384 = uParam0;
    return;
}

void sub_33064()
{
    if (TIMERA() > l_U614)
    {
        if (l_U615 > 5)
        {
            l_U534 = 0;
            l_U535 = 0;
            sub_33115();
            PRINT_NOW( "THF_TIME", 7500, 1 );
            SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
            l_U610 = 0;
            l_U609 = 3;
        }
        else if (l_U629)
        {
            CLEAR_CHAR_TASKS( l_U498 );
            SETTIMERA( 0 );
            l_U588 = 0;
            l_U615++;
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U599 );
            if ((DOES_SCENARIO_EXIST_IN_AREA( l_U537[l_U599], 0.50000000, 1 )) AND (NOT (l_U599 == l_U588)))
            {
                CLEAR_CHAR_TASKS( l_U498 );
                TASK_USE_NEAREST_SCENARIO_TO_POS( l_U498, l_U537[l_U599], 0.50000000 );
                SETTIMERA( 0 );
                l_U588 = l_U599;
                l_U615++;
            }
            else
            {
                l_U630[l_U615]++;
            }
            if (l_U630[l_U615] > 20)
            {
                l_U615 = 99;
            }
        }
    }
    return;
}

void sub_33115()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( 243672348 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1352017873 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 809067472 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1028473 );
    if (DOES_BLIP_EXIST( l_U497 ))
    {
        REMOVE_BLIP( l_U497 );
    }
    if (NOT (IS_CHAR_INJURED( l_U498 )))
    {
        SET_CHAR_IS_TARGET_PRIORITY( l_U498, 1 );
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref l_U599 );
    if (l_U599 < 1000)
    {
        l_U533 = 0;
    }
    else if (l_U599 < 2000)
    {
        l_U533 = 1;
    }
    else
    {
        l_U533 = 2;
    }
    CLEAR_CHAR_TASKS( l_U498 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U498, 1 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    if (l_U534)
    {
        SET_CHAR_DECISION_MAKER( l_U498, l_U607 );
        SET_COMBAT_DECISION_MAKER( l_U498, l_U608 );
        OPEN_SEQUENCE_TASK( ref l_U594 );
        if (l_U535)
        {
            if (IS_CHAR_ARMED( sub_3174(), 4 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U498 )))
                {
                    GIVE_WEAPON_TO_CHAR( l_U498, 7, 30000, 0 );
                }
                TASK_PAUSE( 0, 500 );
                TASK_SHOOT_AT_CHAR( 0, sub_3174(), 600, 5 );
            }
            else
            {
                TASK_LOOK_AT_CHAR( 0, sub_3174(), 1000, 0 );
                TASK_PAUSE( 0, 1000 );
            }
        }
        else if (DOES_VEHICLE_EXIST( l_U499[l_U533] ))
        {
            if (NOT (IS_CAR_DEAD( l_U499[l_U533] )))
            {
                TASK_LOOK_AT_VEHICLE( 0, l_U499[l_U533], 1500, 0 );
                TASK_PAUSE( 0, 500 );
            }
        }
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U503[l_U533]._fU0, l_U503[l_U533]._fU4, l_U503[l_U533]._fU8, 3, -2, 1.50000000 );
        if (NOT (IS_CAR_DEAD( l_U499[l_U533] )))
        {
            if ((IS_CAR_IN_AREA_3D( l_U499[l_U533], l_U503[l_U533]._fU0 - 2.00000000, l_U503[l_U533]._fU4 - 2.00000000, l_U503[l_U533]._fU8 - 2.00000000, l_U503[l_U533]._fU0 + 2.00000000, l_U503[l_U533]._fU4 + 2.00000000, l_U503[l_U533]._fU8 + 2.00000000, 0 )) AND ((NOT (IS_CAR_ON_FIRE( l_U499[l_U533] ))) AND ((IS_CAR_UPRIGHT( l_U499[l_U533] )) AND (NOT (IS_CHAR_IN_CAR( sub_3174(), l_U499[l_U533] ))))))
            {
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U499[l_U533], 30000 );
                TASK_CAR_DRIVE_WANDER( 0, l_U499[l_U533], 28.00000000, 2 );
            }
            else
            {
                TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( 0, sub_3174(), 200.00000000, -2 );
                l_U610 = 2;
            }
        }
        else
        {
            TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( 0, sub_3174(), 200.00000000, -2 );
            l_U610 = 2;
        }
        CLOSE_SEQUENCE_TASK( l_U594 );
        if (NOT (IS_CHAR_INJURED( l_U498 )))
        {
            TASK_PERFORM_SEQUENCE( l_U498, l_U594 );
        }
        CLEAR_SEQUENCE_TASK( l_U594 );
    }
    else if (l_U536)
    {
        SET_CHAR_DECISION_MAKER( l_U498, l_U607 );
        SET_COMBAT_DECISION_MAKER( l_U498, l_U608 );
        OPEN_SEQUENCE_TASK( ref l_U594 );
        if (l_U535)
        {
            ;
        }
        else
        {
            TASK_PAUSE( 0, 500 );
            TASK_PLAY_ANIM( 0, "SCARED_LOOKAROUND", "missfrancis1", 4.00000000, 0, 0, 0, 0, -1 );
        }
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U503[l_U533]._fU0, l_U503[l_U533]._fU4, l_U503[l_U533]._fU8, 3, -2, 1.50000000 );
        if (NOT (IS_CAR_DEAD( l_U499[l_U533] )))
        {
            if ((IS_CAR_IN_AREA_3D( l_U499[l_U533], l_U503[l_U533]._fU0 - 2.00000000, l_U503[l_U533]._fU4 - 2.00000000, l_U503[l_U533]._fU8 - 2.00000000, l_U503[l_U533]._fU0 + 2.00000000, l_U503[l_U533]._fU4 + 2.00000000, l_U503[l_U533]._fU8 + 2.00000000, 0 )) AND ((NOT (IS_CAR_ON_FIRE( l_U499[l_U533] ))) AND ((IS_CAR_UPRIGHT( l_U499[l_U533] )) AND (NOT (IS_CHAR_IN_CAR( sub_3174(), l_U499[l_U533] ))))))
            {
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U499[l_U533], 30000 );
                TASK_CAR_DRIVE_WANDER( 0, l_U499[l_U533], 28.00000000, 2 );
            }
            else
            {
                TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( 0, sub_3174(), 200.00000000, -2 );
                l_U610 = 2;
            }
        }
        else
        {
            TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( 0, sub_3174(), 200.00000000, -2 );
            l_U610 = 2;
        }
        CLOSE_SEQUENCE_TASK( l_U594 );
        if (NOT (IS_CHAR_INJURED( l_U498 )))
        {
            TASK_PERFORM_SEQUENCE( l_U498, l_U594 );
        }
        CLEAR_SEQUENCE_TASK( l_U594 );
        if (NOT l_U535)
        {
            sub_2709( ref l_U601, 0 );
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3174(), l_U498, 6, 6, 6, 0 ))
            {
                sub_34739( "FM1_SPOOK", ref l_U601, 6, 1 );
            }
            else
            {
                sub_34739( "FM1_SPOOK", ref l_U601, 4, 1 );
            }
            l_U534 = 1;
            l_U609 = 3;
        }
    }
    else
    {
        OPEN_SEQUENCE_TASK( ref l_U594 );
        if (NOT (IS_CAR_DEAD( l_U499[l_U533] )))
        {
            TASK_LOOK_AT_VEHICLE( 0, l_U499[l_U533], 1500, 0 );
            TASK_PAUSE( 0, 500 );
        }
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U503[l_U533]._fU0, l_U503[l_U533]._fU4, l_U503[l_U533]._fU8, 2, -2, 1.50000000 );
        if (NOT (IS_CAR_DEAD( l_U499[l_U533] )))
        {
            if ((IS_CAR_IN_AREA_3D( l_U499[l_U533], l_U503[l_U533]._fU0 - 2.00000000, l_U503[l_U533]._fU4 - 2.00000000, l_U503[l_U533]._fU8 - 2.00000000, l_U503[l_U533]._fU0 + 2.00000000, l_U503[l_U533]._fU4 + 2.00000000, l_U503[l_U533]._fU8 + 2.00000000, 0 )) AND ((NOT (IS_CAR_ON_FIRE( l_U499[l_U533] ))) AND ((IS_CAR_UPRIGHT( l_U499[l_U533] )) AND (NOT (IS_CHAR_IN_CAR( sub_3174(), l_U499[l_U533] ))))))
            {
                TASK_ENTER_CAR_AS_DRIVER( 0, l_U499[l_U533], 30000 );
                TASK_CAR_DRIVE_WANDER( 0, l_U499[l_U533], 28.00000000, 2 );
            }
            else
            {
                TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( 0, sub_3174(), 200.00000000, -2 );
                l_U610 = 2;
            }
        }
        else
        {
            TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( 0, sub_3174(), 200.00000000, -2 );
            l_U610 = 2;
        }
        CLOSE_SEQUENCE_TASK( l_U594 );
        if (NOT (IS_CHAR_INJURED( l_U498 )))
        {
            TASK_PERFORM_SEQUENCE( l_U498, l_U594 );
        }
        CLEAR_SEQUENCE_TASK( l_U594 );
    }
    return;
}

void sub_34739(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_34762( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_34762(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_34816( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_34816(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_34838( iParam1 )))
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
    sub_35518( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_34838(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_18887( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_18887( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_18887( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_35518(int iParam0, int iParam1)
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

int sub_36627()
{
    unknown uVar2;

    if (NOT (IS_CHAR_DEAD( l_U498 )))
    {
        GET_CHAR_COORDINATES( l_U498, ref l_U596._fU0, ref l_U596._fU4, ref l_U596._fU8 );
        if (GET_CLOSEST_CHAR( l_U596._fU0, l_U596._fU4, l_U596._fU8, 15, 1, 0, ref uVar2 ))
        {
            if (NOT (IS_CHAR_INJURED( uVar2 )))
            {
                if ((IS_PED_IN_COMBAT( uVar2 )) || (IS_PED_FLEEING( uVar2 )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_36856()
{
    sub_2709( ref l_U601, 0 );
    GET_DEAD_CHAR_PICKUP_COORDS( l_U498, ref l_U596._fU0, ref l_U596._fU4, ref l_U596._fU8 );
    if (sub_36911( l_U596 ))
    {
        sub_36990( 11, "FM1_WATER", "FM1AUD", 0 );
        sub_5418();
    }
    else if (DOES_BLIP_EXIST( l_U495 ))
    {
        REMOVE_BLIP( l_U495 );
    }
    sub_2332( l_U586 );
    sub_2381( l_U586 );
    sub_2489( ref l_U622, 1 );
    sub_1369();
    GET_DEAD_CHAR_PICKUP_COORDS( l_U498, ref l_U596._fU0, ref l_U596._fU4, ref l_U596._fU8 );
    CREATE_PICKUP( -193114041, 22, l_U596._fU0, l_U596._fU4, l_U596._fU8, ref l_U585, 0 );
    ADD_BLIP_FOR_PICKUP( l_U585, ref l_U496 );
    CHANGE_BLIP_COLOUR( l_U496, 2 );
    l_U609 = 4;;
    SETTIMERB( 0 );
    if (NOT l_U591)
    {
        l_U592 = 1;
    }
    return;
}

int sub_36911(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    GET_WATER_HEIGHT_NO_WAVES( uParam0, ref fVar5 );
    if (uParam0._fU8 < fVar5)
    {
        return 1;
        break;
    }
    return 0;
}

void sub_36990(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_37034( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_37034(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

int sub_38091()
{
    if ((g_U91._fU0 == 1008) || (g_U91._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

void sub_38454()
{
    if ((NOT (IS_CHAR_INJURED( l_U498 ))) AND (NOT (DOES_BLIP_EXIST( l_U495 ))))
    {
        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3174(), l_U498, 2.50000000, 2.50000000, 2.50000000, 0 )) AND (IS_CHAR_ON_SCREEN( l_U498 )))
        {
            ADD_BLIP_FOR_CHAR( l_U498, ref l_U495 );
            SET_BLIP_AS_FRIENDLY( l_U495, 0 );
            SET_CHAR_AS_ENEMY( l_U498, 1 );
            PRINT( "FR1_INST_C1", 7500, 1 );
        }
    }
    return;
}

void sub_38633()
{
    float fVar2;
    float fVar3;
    float fVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( l_U498 )))
    {
        if (l_U534)
        {
            if (NOT (DOES_BLIP_EXIST( l_U495 )))
            {
                fVar2 = 60.00000000;
                fVar3 = 45.00000000;
                fVar4 = 40.00000000;
            }
            else if (IS_CHAR_IN_ANY_CAR( l_U498 ))
            {
                fVar2 = 250.00000000;
                fVar3 = 200.00000000;
                fVar4 = 170.00000000;
            }
            else
            {
                fVar2 = 100.00000000;
                fVar3 = 75.00000000;
                fVar4 = 60.00000000;
            }
            if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3174(), l_U498, fVar2, fVar2, 0 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U495 )))
                {
                    if (NOT (IS_CHAR_ON_SCREEN( l_U498 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U498 ))
                        {
                            GET_CAR_CHAR_IS_USING( l_U498, ref uVar5 );
                            DELETE_CAR( ref uVar5 );
                        }
                        DELETE_CHAR( ref l_U498 );
                        sub_38892( 0 );
                    }
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3174(), l_U498, 250, 250, 0 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U498 ))
                        {
                            GET_CAR_CHAR_IS_USING( l_U498, ref uVar5 );
                            DELETE_CAR( ref uVar5 );
                        }
                        DELETE_CHAR( ref l_U498 );
                        sub_38892( 0 );
                    }
                }
                else
                {
                    sub_38892( 0 );
                }
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3174(), l_U498, fVar3, fVar3, 0 )))
            {
                if ((DOES_BLIP_EXIST( l_U495 )) AND (NOT l_U616))
                {
                    PRINT_NOW( "THIEF_DIST", 7500, 0 );
                    l_U616 = 1;
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3174(), l_U498, fVar4, fVar4, 0 ))
            {
                l_U616 = 0;
            };;;
        }
        else if ((NOT (IS_CHAR_ON_SCREEN( l_U498 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3174(), l_U498, 80.00000000, 80.00000000, 0 ))))
        {
            sub_38892( 0 );
        }
    }
    return;
}

void sub_38892(unknown uParam0)
{
    if (l_U582)
    {
        sub_2489( ref l_U622, 1 );
    }
    sub_2332( l_U586 );
    sub_2381( l_U586 );
    switch (uParam0)
    {
        case 0:
        PRINT_NOW( "FAIL_LOST", 7000, 1 );
        sub_36990( 11, "FM1_FAIL", "FM1AUD", 0 );
        break;
        default:
    }
    if ((g_U6) || (g_U5))
    {
        sub_39025();
    }
    else
    {
        sub_39143();
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3131(), 150 );
    SAY_AMBIENT_SPEECH( sub_3174(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3131(), 150 );
        SAY_AMBIENT_SPEECH( sub_3174(), "MISSION_FAIL_RAGE", 0, 0, 0 );
    }
    sub_2475();
    return;
}

void sub_39025()
{
    sub_39034();
    return;
}

void sub_39034()
{
    int iVar2;

    iVar2 = 1;
    sub_39048( iVar2 );
    sub_1360( iVar2 );
    return;
}

void sub_39048(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3131(), 150 );
    CLEAR_HELP();
    sub_184( uParam0 );
    return;
}

void sub_39143()
{
    sub_39152();
    return;
}

void sub_39152()
{
    int iVar2;

    iVar2 = 11;
    sub_39048( iVar2 );
    sub_1360( iVar2 );
    return;
}

void sub_39967()
{
    if (NOT (IS_CAR_DEAD( l_U499[l_U533] )))
    {
        if (IS_CHAR_IN_CAR( sub_3174(), l_U499[l_U533] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U498 )))
            {
                TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U498, sub_3174(), 200.00000000, -2 );
                l_U610 = 2;
            }
        }
    }
    return;
}

void sub_40196(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U493)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U491))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U492 + 500))
        {
            l_U491 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_40364()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3174() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U493)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U492 );
            l_U491 = 1;
            l_U490 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U491) AND (NOT l_U490))
        {
            if (l_U493)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U490 = 1;
        }
    }
    else if (l_U490)
    {
        if (l_U493)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U490 = 0;
    };;;
    return;
}

int sub_40364()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_41391()
{
    if ((TIMERB() > 2000) AND (NOT l_U611))
    {
        if ((g_U6) || (g_U5))
        {
            SET_MAX_WANTED_LEVEL( 2 );
        }
        ALTER_WANTED_LEVEL( sub_3131(), 2 );
        APPLY_WANTED_LEVEL_CHANGE_NOW( sub_3131() );
        l_U611 = 1;
    }
    return;
}

void sub_41988()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    iVar4 = 0;
    while ((NOT bVar3) AND (NOT bVar2))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar6 );
        if (iVar4 != 0)
        {
            iVar7 = iVar6 - iVar5;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_22268()) AND (iVar7 >= 1000)))
        {
            bVar3 = true;
        }
        else
        {
            switch (iVar4)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_3131(), 0 );
                SET_MAX_WANTED_LEVEL( 0 );
                ALTER_WANTED_LEVEL( sub_3131(), 0 );
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                WAIT( 500 );
                while (NOT sub_22799())
                {
                    WAIT( 0 );
                }
                SWITCH_PED_PATHS_OFF( -46.00000000, 1392.00000000, 0.00000000, -2.00000000, 1414.00000000, 100.00000000 );
                sub_3825( -32.94000000, 1406.70000000, 19.42000000, 251, 65516, 1406, 19, 40, -1, 0 );
                ADD_SCENARIO_BLOCKING_AREA( -46.00000000, 1392.00000000, 0.00000000, -2.00000000, 1414.00000000, 100.00000000 );
                REQUEST_ANIMS( "missfrancis1" );
                sub_42388( 11 );
                REQUEST_MODEL( 837858166 );
                REQUEST_MODEL( -1004762946 );
                REQUEST_CAR_RECORDING( 239 );
                while ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 239 ))) || ((NOT (HAS_MODEL_LOADED( -1004762946 ))) || ((NOT (HAS_MODEL_LOADED( 837858166 ))) || ((NOT (sub_43149( 11 ))) || (NOT (HAVE_ANIMS_LOADED( "missfrancis1" )))))))
                {
                    WAIT( 0 );
                }
                CLEAR_SMALL_PRINTS();
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                if (IS_CHAR_IN_ANY_CAR( sub_3174() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_3174(), -6.95700000, 1407.99800000, 19.41760000 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3174() );
                SET_CHAR_COORDINATES( sub_3174(), -6.95700000, 1407.99800000, 19.41760000 );
                SET_CHAR_HEADING( sub_3174(), 0.00000000 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3174(), 1 );
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3174(), 0.43000000, 2.80500000, 0.00000000, ref l_U596._fU0, ref l_U596._fU4, ref l_U596._fU8 );
                sub_43450( 11, ref uVar8, l_U596._fU0, l_U596._fU4, 19.41760000, 180.00000000 );
                sub_3447( 2, uVar8, "FRANCIS_MCREARY", 0 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_3174(), "handover_niko", "missfrancis1", 24.00000000, 0, 0, 0, 0, -1 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( uVar8, "handover_francis", "missfrancis1", 24.00000000, 0, 0, 0, 1, 99999 );
                CREATE_CAR( 837858166, 1.00000000, 1.00000000, 1.00000000, ref uVar13, 1 );
                SET_HELI_BLADES_FULL_SPEED( uVar13 );
                SET_CAR_ENGINE_ON( uVar13, 1, 1 );
                START_PLAYBACK_RECORDED_CAR( uVar13, 239 );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( uVar13, 7000 );
                CREATE_CHAR_INSIDE_CAR( uVar13, 6, -1004762946, ref uVar14 );
                BEGIN_CAM_COMMANDS( ref uVar12 );
                CREATE_CAM( 14, ref uVar9 );
                SET_CAM_POS( uVar9, -9.54065200, 1411.43000000, 20.13360000 );
                SET_CAM_ROT( uVar9, 5.94084100, -0.00000000, -134.69450000 );
                SET_CAM_FOV( uVar9, 50 );
                SET_CAM_ACTIVE( uVar9, 1 );
                SET_CAM_PROPAGATE( uVar9, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                CREATE_CAM( 14, ref uVar10 );
                SET_CAM_POS( uVar10, -9.54065200, 1411.43000000, 20.13360000 );
                SET_CAM_ROT( uVar10, 5.94084100, -0.00000000, -134.69450000 );
                SET_CAM_FOV( uVar10, 42 );
                SET_CAM_ACTIVE( uVar10, 1 );
                SET_CAM_PROPAGATE( uVar10, 1 );
                CREATE_CAM( 3, ref uVar11 );
                SET_CAM_ACTIVE( uVar11, 1 );
                SET_CAM_PROPAGATE( uVar11, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_CAM_INTERP_STYLE_CORE( uVar11, uVar9, uVar10, 5000, 0 );
                DO_SCREEN_FADE_IN( 500 );
                GET_GAME_TIMER( ref iVar5 );
                SETTIMERA( 0 );
                SETTIMERB( 0 );
                iVar4 = 1;
                break;
                case 1:
                if (TIMERA() > 1500)
                {
                    sub_45690( "FM1_PASS", 0, 1, ref l_U601, 6, 1 );
                    iVar4 = 3;
                }
                break;
                case 2:
                if (NOT (IS_CHAR_DEAD( uVar8 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( uVar8, "missfrancis1", "handover_francis" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( uVar8, "missfrancis1", "handover_francis", ref l_U595 );
                        if (l_U595 > 0.14000000)
                        {
                            iVar4 = 3;
                        }
                    }
                }
                break;
                case 3:
                if (NOT (IS_CHAR_DEAD( uVar8 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( uVar8, "missfrancis1", "handover_francis" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( uVar8, "missfrancis1", "handover_francis", ref l_U595 );
                        if (l_U595 > 0.23000000)
                        {
                            SET_CAM_POS( uVar9, -8.06000000, 1407.20000000, 20.63000000 );
                            SET_CAM_ROT( uVar9, 2.75000000, 0, -49.32000000 );
                            SET_CAM_FOV( uVar9, 45.00000000 );
                            SET_CAM_ACTIVE( uVar10, 0 );
                            SET_CAM_PROPAGATE( uVar10, 0 );
                            SET_CAM_ACTIVE( uVar11, 0 );
                            SET_CAM_PROPAGATE( uVar11, 0 );
                            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                            sub_2709( ref l_U601, 0 );
                            sub_45690( "FM1_PASS", 1, 0, ref l_U601, 6, 1 );
                            iVar4 = 4;
                        }
                    }
                }
                break;
                case 4:
                if (NOT (IS_CHAR_DEAD( uVar8 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( uVar8, "missfrancis1", "handover_francis" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( uVar8, "missfrancis1", "handover_francis", ref l_U595 );
                        if (l_U595 > 0.50000000)
                        {
                            SET_CAM_POS( uVar9, -7.45255800, 1410.00700000, 20.90436000 );
                            SET_CAM_ROT( uVar9, -2.06664600, -0.00000000, -144.88700000 );
                            SET_CAM_FOV( uVar9, 33.00003000 );
                            iVar4 = 5;
                        }
                    }
                }
                break;
                case 5:
                if (TIMERA() > 11200)
                {
                    SET_CAM_POS( uVar9, -9.17391800, 1407.24100000, 20.64187000 );
                    SET_CAM_ROT( uVar9, -0.11858700, -0.00000000, -57.11000000 );
                    SET_CAM_FOV( uVar9, 30.00004000 );
                    SETTIMERA( 0 );
                    iVar4 = 6;
                }
                break;
                case 6:
                if (TIMERA() > 4200)
                {
                    bVar2 = true;
                }
                break;
            }
        }
    }
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    CLEAR_SMALL_PRINTS();
    sub_2709( ref l_U601, 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    if (DOES_CAM_EXIST( uVar9 ))
    {
        if (IS_CAM_ACTIVE( uVar9 ))
        {
            SET_CAM_ACTIVE( uVar9, 0 );
            SET_CAM_PROPAGATE( uVar9, 0 );
            DESTROY_CAM( uVar9 );
        }
    }
    END_CAM_COMMANDS( ref uVar12 );
    if (DOES_BLIP_EXIST( l_U494 ))
    {
        REMOVE_BLIP( l_U494 );
    }
    if (DOES_CHAR_EXIST( uVar14 ))
    {
        DELETE_CHAR( ref uVar14 );
    }
    if (DOES_VEHICLE_EXIST( uVar13 ))
    {
        DELETE_CAR( ref uVar13 );
    }
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_3131(), 1 );
    sub_3042();
    REMOVE_ANIMS( "missfrancis1" );
    DELETE_CHAR( ref uVar8 );
    SET_CHAR_COORDINATES( sub_3174(), -6.95700000, 1407.99800000, 19.41840000 );
    SET_CHAR_HEADING( sub_3174(), 270 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3174(), 0 );
    TASK_USE_MOBILE_PHONE( sub_3174(), 0 );
    SET_CAM_BEHIND_PED( sub_3174() );
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_42388(unknown uParam0)
{
    REQUEST_MODEL( sub_42399( uParam0 ) );
    return;
}

int sub_42399(unknown uParam0)
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
    sub_1225( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_43149(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_42399( uParam0 ) );
}

void sub_43450(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_42399( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_43500( uParam0, (uParam1^) );
    return;
}

void sub_43500(unknown uParam0, unknown uParam1)
{
    sub_43512( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_43512(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_43606( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_44150( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_43606(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_44150(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_43606( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_43606( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_43606( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_43606( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_43606( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_43606( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_43606( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_43606( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_43606( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_43606( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_43606( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_43606( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_43606( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_45690(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_45717( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_45717(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_34816( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_46961(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_18887( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_18887( "\n speech is not playing" );
    }
    return 0;
}

