void main()
{
    l_U102 = 0;
    l_U103 = 1;
    l_U104 = 3;
    l_U106 = 0;
    l_U123 = -1;
    l_U127 = 0;
    l_U128 = 1;
    l_U129 = 1;
    l_U137 = 150.00000000;
    l_U227 = 0;
    l_U228 = 150.00000000;
    l_U278 = 0;
    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;
    l_U484 = 0;
    l_U485 = {0.00000000, 0.00000000, 0.00000000};
    l_U488 = 2.50000000;
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 1;
    l_U499 = 0;
    l_U500 = 0;
    l_U501 = 0;
    l_U502 = 1;
    l_U503 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 0;
    l_U507 = 0;
    l_U508 = 0;
    l_U509 = 0;
    l_U510 = 0;
    l_U511 = 0;
    l_U512 = 1;
    l_U513 = 0;
    l_U514 = 0;
    l_U515 = 0;
    l_U516 = 0;
    l_U517 = 0;
    l_U518 = 0;
    l_U519 = 0;
    l_U520 = 1;
    l_U521 = 1;
    l_U522 = 0;
    l_U523 = 0;
    l_U524 = 0;
    l_U525 = 0;
    l_U526 = 0;
    l_U527 = 0;
    l_U528 = 0;
    l_U1285 = 90.00000000;
    l_U1286 = 5.00000000;
    l_U1287 = 25.00000000;
    l_U1288 = 15.00000000;
    l_U1289 = 2.00000000;
    l_U1290 = 4.00000000;
    l_U1291 = 0.50000000;
    l_U1292 = 120.00000000;
    l_U1293 = 0.00000000;
    l_U1294 = 0.00000000;
    l_U1296 = 1.00000000;
    l_U1297 = 0.00000000;
    l_U1298 = 1.00000000;
    l_U1299 = 10.00000000;
    l_U1300 = 30.00000000;
    l_U1302 = 1.00000000;
    l_U1304 = 1.00000000;
    l_U1305 = 5.00000000;
    l_U1306 = 1.00000000;
    l_U1307 = 1.00000000;
    l_U1312 = 0.30000000;
    l_U1313 = 0.50000000;
    l_U1314 = 50.00000000;
    l_U1585 = 0;
    l_U1586 = 0;
    l_U1587 = 0;
    l_U1588 = 0;
    l_U1589 = 1;
    l_U1590 = 0;
    l_U1591 = 0;
    l_U1592 = 0;
    l_U1593 = 0;
    l_U1594 = -1;
    l_U1595 = 0;
    l_U1596 = 0;
    l_U1597 = 0;
    l_U1598 = 0;
    l_U1599 = 0;
    l_U1600 = 0;
    l_U1601 = 0;
    l_U2375 = 0;
    l_U2376 = 0;
    l_U2411 = 0;
    l_U2412 = 0;
    l_U2413 = 0;
    l_U2433 = 0;
    l_U2435 = 1.00000000;
    l_U2436 = 20.00000000;
    l_U2437 = 5.00000000;
    l_U2438 = 1.00000000;
    l_U2439 = 100.00000000;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_822();
        sub_2932();
    }
    sub_3682();
    while (true)
    {
        WAIT( 0 );
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_3939();
        }
        else if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            sub_18254();
        }
        if ((NOT l_U2432) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 865.70000000, -517.80000000, 16.50000000, 1.00000000, -1452339441 )))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 865.70000000, -517.80000000, 16.50000000, 1, 0.00000000 );
            l_U2432 = 1;
        }
        switch (l_U2434)
        {
            case 0:
            if (LOCATE_CHAR_ON_FOOT_3D( sub_3201(), 849.82700000, -518.51400000, 16.29400000, 1.60000000, 1.60000000, 1.60000000, 1 ))
            {
                sub_22023();
                l_U2434 = 1;
            }
            else if ((NOT l_U2406) AND (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 850.80000000, -517.80000000, 16.50000000, 1.00000000, 257820338 )))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, 850.80000000, -517.80000000, 16.50000000, 1, 0.00000000 );
                l_U2406 = 1;
            }
            break;
            case 1:
            if ((sub_30051() == 6) AND (l_U2404))
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1600121915 );
                l_U2434 = 2;
            }
            l_U2430 = sub_30939();
            if (l_U2430 == 0)
            {
                if (l_U2403)
                {
                    if (l_U2405)
                    {
                        if (NOT l_U2407)
                        {
                            CLEAR_HELP();
                            CLEAR_SMALL_PRINTS();
                            REMOVE_BLIP( l_U2387 );
                            SETTIMERA( 0 );
                            l_U2407 = 1;
                        }
                        if (TIMERA() > 2000)
                        {
                            while (NOT (sub_31087( 12, "C1_CALL2", "C1AUD" )))
                            {
                                WAIT( 0 );
                            }
                            l_U2403 = 0;
                            l_U2404 = 1;
                        }
                    }
                }
            }
            else if (l_U2430 == 1)
            {
                if (NOT l_U2403)
                {
                    if (sub_31217() == 0)
                    {
                        CLEAR_SMALL_PRINTS();
                        SET_CHAR_COORDINATES( sub_3201(), 856.68540000, -515.23910000, 15.42150000 );
                        SET_CHAR_HEADING( sub_3201(), 58.76710000 );
                        CLEAR_SMALL_PRINTS();
                        l_U2403 = 1;
                    }
                }
            }
            else if (g_U857._fU40 == 0)
            {
                if ((sub_31346( 4, g_U1369[2] )) == 3)
                {
                    if (NOT l_U2405)
                    {
                        l_U2405 = 1;
                    }
                }
            };;;
            break;
            case 2:
            if (IS_WANTED_LEVEL_GREATER( sub_3083(), 0 ))
            {
                if (DOES_BLIP_EXIST( l_U2387 ))
                {
                    REMOVE_BLIP( l_U2387 );
                    PRINT_NOW( "WANTED_LVLa", 7500, 0 );
                }
                else if (NOT l_U2408)
                {
                    PRINT_NOW( "WANTED_LVLa", 7500, 0 );
                    l_U2408 = 1;
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U2387 )))
            {
                ADD_BLIP_FOR_COORD( 920.00000000, -276.76660000, 18.22510000, ref l_U2387 );
                CHANGE_BLIP_COLOUR( l_U2387, 5 );
                SET_ROUTE( l_U2387, 1 );
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_3201() )))
                {
                    sub_18016( "KB_MISSION3", 7500 );
                }
                else
                {
                    sub_18016( "KB_MISSION3b", 7500 );
                }
            }
            if (LOCATE_CHAR_IN_CAR_3D( sub_3201(), 921.00000000, -276.30000000, 20.21100000, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if ((NOT (sub_32422( sub_3201() ))) AND (sub_32132( 1, 1 )))
                {
                    sub_32688();
                    l_U2434 = 3;
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3201(), 921.00000000, -276.30000000, 20.21100000, 2.50000000, 2.50000000, 2.50000000, 0 ))
            {
                PRINT_NOW( "GET_A_CAR", 500, 1 );
            };;;
            break;
            case 3:
            sub_37278();
            sub_38238( ref l_U2381 );
            if ((NOT (IS_CAR_DEAD( l_U2383 ))) AND ((NOT (IS_CHAR_DEAD( l_U2381 ))) AND (NOT l_U2398)))
            {
                if (IS_CHAR_IN_CAR( l_U2381, l_U2383 ))
                {
                    sub_38977();
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U2381, 0 );
                    SETTIMERA( 0 );
                    l_U2398 = 1;
                }
            }
            sub_57159();
            if (NOT (IS_CHAR_INJURED( l_U2381 )))
            {
                if (IS_VEH_DRIVEABLE( l_U2383 ))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2383 ))
                    {
                        l_U2426 = FIND_TIME_POSITION_IN_RECORDING( l_U2383 );
                    }
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2383 )))
                    {
                        sub_19052( 0 );
                        STOP_PLAYBACK_RECORDED_CAR( l_U2383 );
                        TASK_CAR_DRIVE_WANDER( l_U2381, l_U2383, 20.00000000, 2 );
                        SETTIMERB( 0 );
                        SET_CAN_BURST_CAR_TYRES( l_U2383, 1 );
                        SET_CAR_STRONG( l_U2383, 0 );
                        GET_CAR_HEALTH( l_U2383, ref l_U2386 );
                        l_U2423 = 1750 - l_U2386;
                        l_U2386 = 1000 - l_U2423;
                        if (l_U2386 < 500)
                        {
                            l_U2386 = 500;
                        }
                        SET_CAR_HEALTH( l_U2383, l_U2386 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( 1349725314 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -1883869285 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -1260881538 );
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -1984134881 );
                        REMOVE_CAR_RECORDING( 200 );
                        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U2381, 1 );
                        l_U2434 = 4;
                    }
                    else if (l_U2411)
                    {
                        l_U2426 = FIND_TIME_POSITION_IN_RECORDING( l_U2383 );
                        PRINTNL();
                        PRINTNL();
                        PRINTSTRING( "Car Time- " );
                        PRINTFLOAT( l_U2426 );
                        PRINTNL();
                    }
                    sub_58156( l_U2383, sub_3201(), ref l_U2435, l_U2438, l_U2437, l_U2436, l_U2439, 1073741824, 1065353216, 1060320051, 1 );
                    sub_61253( l_U2383, l_U2435 );
                    sub_74781();
                    sub_75338();;
                }
                else
                {
                    SET_CAN_BURST_CAR_TYRES( l_U2383, 1 );
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U2381, 1 );
                    sub_19052( 0 );
                    sub_3453();
                    l_U2434 = 4;
                    GET_GAME_TIMER( ref l_U2396 );
                    l_U2434 = 6;
                }
            }
            else if (NOT (IS_CHAR_DEAD( l_U2381 )))
            {
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U2381, 1 );
            }
            sub_19052( 0 );
            sub_3453();
            GET_GAME_TIMER( ref l_U2396 );
            l_U2434 = 6;;
            break;
            case 4:
            if (IS_CHAR_INJURED( l_U2381 ))
            {
                REMOVE_BLIP( l_U2388 );
                GET_GAME_TIMER( ref l_U2396 );
                l_U2434 = 6;
            }
            else if (IS_CHAR_IN_ANY_CAR( l_U2381 ))
            {
                sub_38238( ref l_U2381 );
            }
            sub_57159();
            if (NOT l_U2402)
            {
                if (NOT l_U2401)
                {
                    if (NOT (IS_CHAR_INJURED( l_U2381 )))
                    {
                        if (NOT (IS_CAR_DEAD( l_U2383 )))
                        {
                            if ((sub_76479( l_U2383 )) || (NOT (IS_VEH_DRIVEABLE( l_U2383 ))))
                            {
                                TASK_LEAVE_ANY_CAR( l_U2381 );
                                l_U2402 = 1;
                            }
                        }
                        else
                        {
                            TASK_LEAVE_ANY_CAR( l_U2381 );
                            l_U2402 = 1;
                        }
                    }
                }
            }
            if ((NOT l_U2401) AND ((NOT (IS_CHAR_IN_ANY_CAR( l_U2381 ))) AND (NOT (IS_CHAR_DEAD( l_U2381 )))))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2381, 1 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2381 );
                TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U2381, sub_3201(), 999, -1 );
                sub_3453();
                sub_18016( "KB_MISSION7", 7500 );
                l_U2401 = 1;
            }
            if ((TIMERB() > 20000) AND ((NOT l_U2399) AND ((NOT (IS_CAR_DEAD( l_U2383 ))) AND ((NOT (IS_CHAR_DEAD( l_U2381 ))) AND (NOT l_U2401)))))
            {
                TASK_CAR_DRIVE_WANDER( l_U2381, l_U2383, 20.00000000, 2 );
                l_U2399 = 1;
            }
            if ((NOT (IS_CHAR_DEAD( l_U2381 ))) AND ((NOT (IS_CAR_DEAD( l_U2383 ))) AND (NOT l_U2401)))
            {
                PRINTNL();
                PRINTSTRING( "***** LOCKING CAR DOORS ******" );
                PRINTNL();
                GET_CAR_HEALTH( l_U2383, ref l_U2423 );
                if (l_U2423 < (l_U2386 - 200))
                {
                    LOCK_CAR_DOORS( l_U2383, 3 );
                    TASK_CAR_TEMP_ACTION( l_U2381, l_U2383, 24, 999999 );
                    sub_3453();
                    l_U2434 = 5;
                }
            }
            break;
            case 5:
            sub_57159();
            if (NOT (IS_CHAR_FATALLY_INJURED( l_U2381 )))
            {
                if (NOT l_U2400)
                {
                    if (NOT (IS_CAR_DEAD( l_U2383 )))
                    {
                        GET_CAR_SPEED( l_U2383, ref l_U2426 );
                        if (l_U2426 < 2.00000000)
                        {
                            if (NOT (HAS_CHAR_GOT_WEAPON( sub_3201(), 57 )))
                            {
                                TASK_LEAVE_ANY_CAR( l_U2381 );
                                sub_18016( "KB_MISSION7", 7500 );
                                l_U2402 = 1;
                            }
                            else
                            {
                                TASK_PLAY_ANIM( l_U2381, "cower_in_car", "missnet1", 4.00000000, 1, 0, 0, 0, -1 );
                                sub_18016( "KB_MISSION7", 7500 );
                            }
                            l_U2400 = 1;
                        }
                    }
                }
                else
                {
                    sub_77230();
                    if (NOT (IS_CHAR_INJURED( l_U2381 )))
                    {
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U2381 )))
                        {
                            if (NOT l_U2401)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2381, 1 );
                                TASK_SMART_FLEE_CHAR_PREFERRING_PAVEMENTS( l_U2381, sub_3201(), 999, -1 );
                                l_U2401 = 1;
                            }
                        }
                        else if (NOT (IS_CAR_DEAD( l_U2383 )))
                        {
                            if ((NOT l_U2402) AND ((sub_76479( l_U2383 )) || (NOT (IS_VEH_DRIVEABLE( l_U2383 )))))
                            {
                                TASK_LEAVE_ANY_CAR( l_U2381 );
                                l_U2402 = 1;
                            }
                        }
                        else
                        {
                            TASK_LEAVE_ANY_CAR( l_U2381 );
                            l_U2402 = 1;
                        }
                        if ((NOT l_U2402) AND (NOT (HAS_CHAR_GOT_WEAPON( sub_3201(), 57 ))))
                        {
                            TASK_LEAVE_ANY_CAR( l_U2381 );
                            l_U2402 = 1;
                        }
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U2387 ))
            {
                REMOVE_BLIP( l_U2387 );
            }
            if (DOES_BLIP_EXIST( l_U2388 ))
            {
                REMOVE_BLIP( l_U2388 );
            }
            GET_GAME_TIMER( ref l_U2396 );
            l_U2434 = 6;;
            break;
            case 6:
            GET_GAME_TIMER( ref l_U2423 );
            if ((l_U2423 - l_U2396) > 2000)
            {
                sub_3939();
            }
            break;
            default: break;
        }
    }
    sub_2932();
    return;
}

void sub_822()
{
    sub_831();
    return;
}

void sub_831()
{
    int iVar2;

    iVar2 = 12;
    sub_845( iVar2 );
    sub_2021( iVar2 );
    return;
}

void sub_845(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_889();
        sub_1050();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_1158();
            sub_1197();
        }
    }
    sub_1273();
    sub_1374();
    uVar5 = sub_1487( uParam0 );
    sub_1928( uVar5, 0 );
    return;
}

void sub_889()
{
    sub_903( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_1003();
    }
    return;
}

void sub_903(int iParam0)
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

void sub_1003()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1050()
{
    sub_1059();
    return;
}

void sub_1059()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1158()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1197()
{
    sub_1206();
    return;
}

void sub_1206()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1273()
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

void sub_1374()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1396();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1396()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1487(unknown uParam0)
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
    sub_1886( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1886(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1928(int iParam0, boolean bParam1)
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

void sub_2021(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2030();
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
        sub_2805();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2030()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2068( 5, g_U569[I] )) == 1))
        {
            if ((sub_2068( 1, g_U569[I] )) != 0)
            {
                sub_2354( I );
            }
        }
    }
    if (NOT sub_2520())
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

int sub_2068(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2354(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2439( g_U569 - 1 );
    return;
}

void sub_2439(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2520()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2068( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2805()
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

void sub_2932()
{
    if (l_U2433)
    {
        ENABLE_CHASE_AUDIO( 0 );
        UNREGISTER_SCRIPT_WITH_AUDIO();
    }
    REMOVE_BLIP( l_U2387 );
    REMOVE_BLIP( l_U2388 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2381 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2380 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2383 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2382 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2384[0] );
    REMOVE_CAR_RECORDING( 208 );
    REMOVE_ANIMS( "missnet1" );
    CLEAR_HELP();
    if (IS_PLAYER_PLAYING( sub_3083() ))
    {
        if (NOT (IS_PLAYER_DEAD( sub_3083() )))
        {
            DISABLE_PLAYER_SPRINT( sub_3083(), 0 );
            SET_PLAYER_CONTROL( sub_3083(), 1 );
        }
    }
    RELEASE_WEATHER();
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    SWITCH_MAD_DRIVERS( 1 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3201(), 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 845.71310000, -521.35050000, 0.00000000, 864.94940000, -512.76390000, 100.00000000 );
    if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 865.70000000, -517.80000000, 16.50000000, 1.00000000, -1452339441 ))
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -1452339441, 865.70000000, -517.80000000, 16.50000000, 0, 0.00000000 );
    }
    if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 850.80000000, -517.80000000, 16.50000000, 1.00000000, 257820338 ))
    {
        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, 850.80000000, -517.80000000, 16.50000000, 0, 0.00000000 );
    }
    sub_3453();
    sub_3604();
    g_U9053 = 1;
    g_U64930 = 0;
    SET_WANTED_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_3083()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3201()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3453()
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

void sub_3604()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3682()
{
    SET_WANTED_MULTIPLIER( 0.20000000 );
    STOP_PED_SPEAKING( sub_3201(), 0 );
    REQUEST_ANIMS( "missnet1" );
    while (NOT (HAVE_ANIMS_LOADED( "missnet1" )))
    {
        WAIT( 0 );
    }
    if (l_U2412)
    {
        REQUEST_MODEL( 1349725314 );
        while (NOT (HAS_MODEL_LOADED( 1349725314 )))
        {
            WAIT( 0 );
        }
        CREATE_CAR( 1349725314, 919.52460000, -262.01670000, 17.95360000, ref l_U2383, 1 );
        SET_CAR_HEADING( l_U2383, 5.09270000 );
        SET_CAR_ON_GROUND_PROPERLY( l_U2383 );
        WARP_CHAR_INTO_CAR( sub_3201(), l_U2383 );
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL( sub_3083(), 1 );
        SET_CAM_BEHIND_PED( sub_3201() );
        sub_3939();
    }
    LOAD_ADDITIONAL_TEXT( "KILLBOX", 0 );
    LOAD_ADDITIONAL_TEXT( "C1AUD", 6 );
    sub_16221( "C1AUD" );
    sub_16340( 0, sub_3201(), "NIKO", 0 );
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3201(), 0 );
    LOAD_SCENE( 65470, 48, 15 );
    sub_16553( -39.26000000, 57.35000000, 14.58000000, 0, -59.30000000, 54.50000000, 14.40000000, 30, -1, 0 );
    if (g_U9893._fU24)
    {
        if (NOT l_U2413)
        {
            START_CUTSCENE_NOW( "N1_a1" );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "N1_a1" );
            if (NOT WAS_CUTSCENE_SKIPPED())
            {
                SET_CUTSCENE_EXTRA_ROOM_POS( -91.20000000, 59.60000000, 75.60000000 );
                START_CUTSCENE_NOW( "N1_a2" );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
                CLEAR_NAMED_CUTSCENE( "N1_a2" );
            }
        }
    }
    sub_17080( 12 );
    FORCE_WEATHER_NOW( 1 );
    SWITCH_PED_PATHS_OFF( 846.83070000, -519.92530000, 0.00000000, 865.75280000, -511.43260000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 846.83070000, -519.92530000, 0.00000000, 865.75280000, -511.43260000, 100.00000000 );
    CLEAR_AREA( 857, 65022, 16, 20, 1 );
    l_U2453[0]._fU12 = {919.60000000, -262.01900000, 18.56420000};
    l_U2453[0]._fU24 = {945.34300000, -214.10510000, 19.65840000};
    l_U2453[0]._fU36 = {914.65800000, -137.52340000, 25.27420000};
    l_U2453[0]._fU48 = 103.00000000;
    l_U2453[0]._fU52 = 200.00000000;
    l_U2453[0]._fU56 = 12.00000000;
    l_U2453[0]._fU60 = 0;
    l_U2453[0]._fU4 = -1260881538;
    l_U2453[1]._fU12 = {919.60000000, -262.01900000, 18.56420000};
    l_U2453[1]._fU24 = {909.43590000, -122.37010000, 26.05650000};
    l_U2453[1]._fU36 = {907.49510000, -286.75840000, 17.52880000};
    l_U2453[1]._fU48 = 180.23610000;
    l_U2453[1]._fU52 = 200.00000000;
    l_U2453[1]._fU56 = 10.00000000;
    l_U2453[1]._fU60 = 0;
    l_U2453[1]._fU4 = -682211828;
    l_U2453[2]._fU12 = {919.60000000, -262.01900000, 18.56420000};
    l_U2453[2]._fU24 = {888.92350000, -247.68790000, 17.55460000};
    l_U2453[2]._fU36 = {907.49510000, -286.75840000, 17.52880000};
    l_U2453[2]._fU48 = 272.55930000;
    l_U2453[2]._fU52 = 200.00000000;
    l_U2453[2]._fU56 = 12.00000000;
    l_U2453[2]._fU60 = 0;
    l_U2453[2]._fU4 = -682211828;
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, 850.80000000, -517.80000000, 16.50000000, 1, 0.00000000 );
    SWITCH_PED_PATHS_OFF( 845.71310000, -521.35050000, 0.00000000, 864.94940000, -512.76390000, 100.00000000 );
    g_U9053 = 0;
    g_U64930 = 1;
    SET_CHAR_COORDINATES( sub_3201(), -66.21970000, 52.32570000, 13.76250000 );
    SET_CHAR_HEADING( sub_3201(), 240.00000000 );
    SET_CAM_BEHIND_PED( sub_3201() );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_IN( 500 );
    SET_PLAYER_CONTROL( sub_3083(), 1 );
    sub_18016( "KB_MISSION1", 7500 );
    ADD_BLIP_FOR_COORD( 850.65510000, -518.60140000, 16.28830000, ref l_U2387 );
    CHANGE_BLIP_COLOUR( l_U2387, 5 );
    SET_ROUTE( l_U2387, 1 );
    sub_18130( ref l_U2387, 827.91120000, -512.01230000, 12.98320000, 180.00000000 );
    ALLOW_THIS_SCRIPT_TO_BE_PAUSED( 0 );
    return;
}

void sub_3939()
{
    sub_3948();
    CLEAR_WANTED_LEVEL( sub_3083() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 60 );
    sub_15580( 12, "C1_CALLP", "C1AUD", 0 );
    sub_2932();
    return;
}

void sub_3948()
{
    sub_3957();
    return;
}

void sub_3957()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_3975();
    sub_4034( iVar2, iVar3, iVar4 );
    return;
}

void sub_3975()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_4034(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 12;
    sub_4067( iVar5, uParam0, uParam1, uParam2, "Contact_13" );
    return;
}

void sub_4067(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_4163( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_4163( ref cVar9 );
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
            sub_4163( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_4163( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_4163( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_4163( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_4740( iParam0, iVar7 );;;
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
                sub_5137( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_5137( 0, 4 );
            }
        }
    }
    if (NOT (sub_5226( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3083(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3083() );
    }
    sub_2030();
    bVar27 = true;
    uVar28 = sub_4740( iParam0, iVar7 );
    uVar29 = sub_1487( iParam0 );
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
                sub_14602( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_15032();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_15117( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_15174( iParam0 );
                sub_15213( 0 );
                sub_1928( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_15321();
        }
    }
    if (bParam2)
    {
        sub_15032();
        sub_15409();
        sub_15213( 0 );
    }
    if (bParam3)
    {
        sub_15032();
        sub_15449();
        sub_15213( 0 );
        sub_1928( uVar29, 0 );
    }
    sub_1374();
    return;
}

void sub_4163(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_4740(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1886( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_5137(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_5226(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_5434( uParam1 );
        break;
        case 1:
        bVar8 = sub_7512( uParam1 );
        break;
        case 2:
        bVar8 = sub_7738( uParam1 );
        break;
        case 3:
        bVar8 = sub_7888( uParam1 );
        break;
        case 4:
        bVar8 = sub_8166( uParam1 );
        break;
        case 5:
        bVar8 = sub_8469( uParam1 );
        break;
        case 6:
        bVar8 = sub_8668( uParam1 );
        break;
        case 7:
        bVar8 = sub_8894( uParam1 );
        break;
        case 8:
        bVar8 = sub_9129( uParam1 );
        break;
        case 9:
        bVar8 = sub_9504( uParam1 );
        break;
        case 10:
        bVar8 = sub_9751( uParam1 );
        break;
        case 11:
        bVar8 = sub_9890( uParam1 );
        break;
        case 12:
        bVar8 = sub_10189( uParam1 );
        break;
        case 13:
        bVar8 = sub_10417( uParam1 );
        break;
        case 14:
        bVar8 = sub_10704( uParam1 );
        break;
        case 15:
        bVar8 = sub_10986( uParam1 );
        break;
        case 16:
        bVar8 = sub_11268( uParam1 );
        break;
        case 17:
        bVar8 = sub_11469( uParam1 );
        break;
        case 18:
        bVar8 = sub_11542( uParam1 );
        break;
        case 19:
        bVar8 = sub_11756( uParam1 );
        break;
        case 20:
        bVar8 = sub_12009( uParam1 );
        break;
        case 21:
        bVar8 = sub_12256( uParam1 );
        break;
        case 22:
        bVar8 = sub_12457( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_7117( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_4740( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_12780( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_5434(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_5713( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_5713( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_5713( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_5713( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_5713( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_5713( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_5713( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_5713( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_5713( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_5713( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_5713( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_5713( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_5713( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_5713( iVar3, 0, 3, 1, 0, 0 );
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
        sub_5713( iVar3, 0, sub_6995(), sub_7261(), 0, 0 );
        break;
        default:
        sub_7420( "Friend 1", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Friend 1", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_5713(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_5724( uParam1 );
    sub_5898( uParam0, 0, uParam2 );
    sub_5898( uParam0, 1, uParam3 );
    sub_5898( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_3975();
    return;
}

void sub_5724(unknown uParam0)
{
    ADD_SCORE( sub_3083(), uParam0 );
    sub_5749( uParam0 );
    return;
}

void sub_5749(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1886( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_5898(unknown uParam0, int iParam1, int iParam2)
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
        sub_6055( uParam0 );
    }
    return;
}

void sub_6055(unknown uParam0)
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

int sub_6995()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_7117( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_7117(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_7261()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_7117( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_7420(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_7512(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5713( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_7420( "Contact 2", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 2", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7738(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5713( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_7420( "Girl 3", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Girl 3", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7888(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_5713( iVar3, 0, sub_6995(), sub_7261(), 0, 0 );
        break;
        default:
        sub_7420( "Friend 4", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Friend 4", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8166(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5713( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5713( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5713( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5713( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_7420( "Contact 5", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 5", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8469(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_7420( "Contact 7", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 7", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8668(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5713( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_7420( "Contact 7b", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 7b", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8894(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_5713( iVar3, 0, sub_6995(), sub_7261(), 0, 0 );
        break;
        default:
        sub_7420( "Friend 8", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Friend 8", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9129(unknown uParam0)
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
        sub_5713( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_5713( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_5713( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_5713( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_5713( iVar3, 0, sub_6995(), sub_7261(), 0, 0 );
        break;
        default:
        sub_7420( "Friend 9", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Friend 9", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9504(unknown uParam0)
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
        sub_5713( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_5713( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_5713( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_7420( "Contact 10", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_7420( "Contact 10", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9751(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_7420( "Girl 11", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Girl 11", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9890(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5713( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5713( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5713( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5713( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_5713( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_7420( "Contact 12", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 12", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10189(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5713( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_7420( "Contact 13", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 13", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10417(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_5713( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_5713( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_5713( iVar3, 0, sub_6995(), sub_7261(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_7420( "Friend 15", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Friend 15", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10704(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5713( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5713( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5713( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_7420( "Contact 16", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 16", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10986(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5713( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5713( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_5713( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_7420( "Contact 18", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 18", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11268(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_7420( "Contact 19", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 19", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11469(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_7420( "Girl 20", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11542(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_7420( "Contact 21", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 21", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11756(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5713( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5713( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_7420( "Contact 22", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 22", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12009(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5713( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5713( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5713( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_7420( "Contact 24", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 24", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12256(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5713( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5713( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5713( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_7420( "Contact 25", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7420( "Contact 25", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12457(unknown uParam0)
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
        sub_5713( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_7420( "Girl 26", 1 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_7420( "Girl 26", 0 );
        sub_5713( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_12780(int iParam0, int iParam1)
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
    if (sub_12828( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_13559( iParam1 );
    }
    return;
}

int sub_12828(int iParam0, int iParam1)
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
            sub_12968( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_12968(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_13150( 0 );
    return;
}

void sub_13150(boolean bParam0)
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
        sub_13405();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_13405()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_13559(int iParam0)
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
        sub_13892( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_13892( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_13892( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_13892( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_13892( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_13892( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_13892( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_13892( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_13892( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_13892( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_13892( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_13892( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_13892( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_13892( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_13892( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_13892( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_13892( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_13892( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_13892( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_13892(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_14602(unknown uParam0, unknown uParam1)
{
    sub_14621( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_14621(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_15032()
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

int sub_15117(int iParam0, int iParam1)
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

void sub_15174(unknown uParam0)
{
    sub_1273();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_15213(unknown uParam0)
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

void sub_15321()
{
    sub_15330();
    return;
}

void sub_15330()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_15409()
{
    sub_15330();
    return;
}

void sub_15449()
{
    sub_15330();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_15580(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_15624( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_15624(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_16221(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_16238();
    return;
}

void sub_16238()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_16340(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_16420( "\n PED NUMBER ", uParam0 );
    sub_16460( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_16420(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16460(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16553(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, boolean bParam9)
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

void sub_17080(unknown uParam0)
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

void sub_18016(unknown uParam0, unknown uParam1)
{
    CLEAR_SMALL_PRINTS();
    PRINT( uParam0, uParam1, 1 );
    return;
}

void sub_18130(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_18254()
{
    unknown uVar2;

    switch (l_U2434)
    {
        case 0:
        if (NOT l_U2397)
        {
            LOAD_SCENE( 844.32690000, -515.77360000, 13.02400000 );
            sub_18016( "KB_MISSION1", 7500 );
            SET_CHAR_COORDINATES( sub_3201(), 844.32690000, -515.77360000, 13.02400000 );
            SET_CHAR_HEADING( sub_3201(), 222.00000000 );
            l_U2397 = 1;
        }
        else
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3201() );
            BEGIN_CAM_COMMANDS( ref l_U2394 );
            GET_GAME_VIEWPORT_ID( ref l_U2427 );
            SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U2427, "brwn1stflr" );
            END_CAM_COMMANDS( ref l_U2394 );
            SET_CHAR_COORDINATES( sub_3201(), 854.78010000, -516.67960000, 15.27760000 );
            SET_CHAR_HEADING( sub_3201(), 340.22980000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_3201(), "brwn1stflr" );
            SET_GAME_CAM_HEADING( 335.00000000 );
            REMOVE_BLIP( l_U2387 );
            ADD_BLIP_FOR_COORD( 855.99380000, -514.36990000, 15.75800000, ref l_U2387 );
            CHANGE_BLIP_COLOUR( l_U2387, 5 );
            SET_ROUTE( l_U2387, 1 );
            sub_18016( "KB_MISSION2", 7500 );
            l_U2434 = 1;
        }
        break;
        case 1:
        SET_CHAR_COORDINATES( sub_3201(), 846.30370000, -518.74150000, 13.02790000 );
        SET_CHAR_HEADING( sub_3201(), 90.00000000 );
        REMOVE_BLIP( l_U2387 );
        ADD_BLIP_FOR_COORD( 920.00000000, -276.76660000, 18.22510000, ref l_U2387 );
        CHANGE_BLIP_COLOUR( l_U2387, 5 );
        SET_ROUTE( l_U2387, 1 );
        sub_18016( "KB_MISSION3", 7500 );
        l_U2434 = 2;
        break;
        case 2:
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3201() )))
        {
            REQUEST_MODEL( 1349725314 );
            while (NOT (HAS_MODEL_LOADED( 1349725314 )))
            {
                WAIT( 0 );
            }
            CREATE_CAR( 1349725314, 919.64790000, -289.21010000, 17.32090000, ref uVar2, 1 );
            SET_CAR_HEADING( uVar2, 0.00000000 );
            SET_CAR_COORDINATES( uVar2, 919.64790000, -289.21010000, 17.32090000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1349725314 );
            WARP_CHAR_INTO_CAR( sub_3201(), uVar2 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar2 );
            SET_CAM_BEHIND_PED( sub_3201() );
        }
        else
        {
            SET_CHAR_COORDINATES( sub_3201(), 919.64790000, -289.21010000, 17.32090000 );
            SET_CHAR_HEADING( sub_3201(), 0.00000000 );
        }
        break;
        case 3:
        sub_19052( 0 );
        if ((NOT (IS_CHAR_DEAD( l_U2381 ))) AND (NOT (IS_CAR_DEAD( l_U2383 ))))
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U2383 );
            TASK_CAR_DRIVE_WANDER( l_U2381, l_U2383, 20.00000000, 2 );
            SETTIMERB( 0 );
            SET_CAR_STRONG( l_U2383, 0 );
            GET_CAR_HEALTH( l_U2383, ref l_U2386 );
            if (l_U2386 > 500)
            {
                SET_CAR_HEALTH( l_U2383, 500 );
                l_U2386 = 500;
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1349725314 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1883869285 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1260881538 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1984134881 );
            REMOVE_CAR_RECORDING( 200 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U2381, 1 );
        }
        sub_3453();
        l_U2434 = 4;
        break;
        case 4:
        if (NOT (IS_CAR_DEAD( l_U2383 )))
        {
            SET_CAR_HEALTH( l_U2383, 100 );
        }
        break;
        default: break;
    }
    return;
}

void sub_19052(boolean bParam0)
{
    l_U525 = 0;
    sub_19067();
    l_U524 = 1;
    sub_19239();
    if (IS_PLAYER_PLAYING( sub_3083() ))
    {
        FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_3083(), 1.00000000 );
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_3083(), 0 );
        SET_CREATE_RANDOM_COPS( 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_19409() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_19438() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_19467() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_19496() );
    if ((NOT bParam0) AND (NOT IS_SCREEN_FADED_OUT()))
    {
        sub_19542();
        sub_19957();
        sub_20139();
    }
    else
    {
        sub_20357();
        sub_20934();
    }
    return;
}

void sub_19067()
{
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    sub_19090();
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    return;
}

void sub_19090()
{
    int I;

    for ( I = 0; I < 20; I++ )
    {
        if (g_U8708[I]._fU60)
        {
            SWITCH_CAR_GENERATOR( g_U9029[I], 0 );
        }
        else
        {
            SWITCH_CAR_GENERATOR( g_U9029[I], 101 );
        }
    }
    return;
}

void sub_19239()
{
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U2200._fU0, l_U2200._fU4, l_U2200._fU8, l_U2203._fU0, l_U2203._fU4, l_U2203._fU8 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U2194._fU0, l_U2194._fU4, l_U2194._fU8, l_U2197._fU0, l_U2197._fU4, l_U2197._fU8 );
    return;
}

int sub_19409()
{
    return -2139064254;
}

int sub_19438()
{
    return 1264341792;
}

int sub_19467()
{
    return 2046537925;
}

int sub_19496()
{
    return -183203150;
}

void sub_19542()
{
    int I;

    for ( I = 0; I < 115; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2206[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U2206[I] )))
            {
                SET_CAR_COLLISION( l_U2206[I], 1 );
            }
            if (IS_VEH_DRIVEABLE( l_U2206[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2206[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U2206[I] );
                }
            }
            sub_19692( l_U2206[I] );
            sub_19833( l_U2206[I] );
        }
        l_U1431[I] = 0;
    }
    for ( I = 0; I < 115; I++ )
    {
        if (NOT (l_U1602[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1602[I] );
        }
    }
    l_U1595 = 0;
    l_U1585 = 0;
    return;
}

void sub_19692(unknown uParam0)
{
    float fVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_DRIVER_OF_CAR( uParam0, ref iVar4 );
        if (DOES_CHAR_EXIST( iVar4 ))
        {
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (NOT (iVar4 == sub_3201()))
                {
                    GET_CAR_SPEED( uParam0, ref fVar3 );
                    if (fVar3 < 8.00000000)
                    {
                        fVar3 = 8.00000000;
                    }
                    TASK_CAR_MISSION( iVar4, uParam0, 0, 1, fVar3, 0, 5, 5 );
                }
            }
        }
    }
    return;
}

void sub_19833(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_19957()
{
    int I;

    for ( I = 0; I < 25; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2337[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U2337[I] )))
            {
                SET_CAR_COLLISION( l_U2337[I], 1 );
            }
            sub_19833( l_U2337[I] );
        }
    }
    for ( I = 0; I < 25; I++ )
    {
        if (NOT (l_U1718[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1718[I] );
        }
    }
    l_U1597 = 0;
    l_U1588 = 0;
    return;
}

void sub_20139()
{
    int I;

    for ( I = 0; I < 5; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2363[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U2363[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2363[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U2363[I] );
                }
            }
            sub_19692( l_U2363[I] );
            sub_19833( l_U2363[I] );
        }
        l_U1553[I] = 0;
    }
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (l_U1744[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1744[I] );
        }
    }
    return;
}

void sub_20357()
{
    sub_20366();
    sub_20582();
    sub_20726();
    return;
}

void sub_20366()
{
    int I;

    for ( I = 0; I < 115; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2206[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U2206[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2206[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U2206[I] );
                }
            }
            DELETE_CAR( ref l_U2206[I] );
        }
        l_U1431[I] = 0;
    }
    for ( I = 0; I < 115; I++ )
    {
        if (NOT (l_U1602[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1602[I] );
        }
    }
    l_U1595 = 0;
    l_U1585 = 0;
    return;
}

void sub_20582()
{
    int I;

    for ( I = 0; I < 25; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2337[I] ))
        {
            DELETE_CAR( ref l_U2337[I] );
        }
    }
    for ( I = 0; I < 25; I++ )
    {
        if (NOT (l_U1718[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1718[I] );
        }
    }
    l_U1597 = 0;
    l_U1588 = 0;
    return;
}

void sub_20726()
{
    int I;

    for ( I = 0; I < 5; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U2363[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U2363[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2363[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U2363[I] );
                }
            }
            DELETE_CAR( ref l_U2363[I] );
        }
        l_U1553[I] = 0;
    }
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (l_U1744[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1744[I] );
        }
    }
    return;
}

void sub_20934()
{
    int I;

    for ( I = 0; I < 115; I++ )
    {
        l_U2206[I] = nil;
        l_U1750[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U561[I] = 0.00000000;
        l_U677[I] = 0.00000000;
        l_U793[I] = 0.00000000;
        l_U909[I] = 0.00000000;
        l_U1315[I] = 0;
        l_U1025[I] = 0.00000000;
        l_U1431[I] = 0;
        l_U1602[I] = 0;
    }
    for ( I = 0; I < 14; I++ )
    {
        l_U2322[I] = nil;
    }
    l_U1593 = 0;
    l_U1585 = 0;
    l_U1586 = 0;
    for ( I = 0; I < 25; I++ )
    {
        l_U2337[I] = nil;
        l_U2096[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U1181[I] = 0.00000000;
        l_U1207[I] = 0.00000000;
        l_U1233[I] = 0.00000000;
        l_U1259[I] = 0.00000000;
        l_U1559[I] = 0;
        l_U1718[I] = 0;
    }
    for ( I = 0; I < 1; I++ )
    {
        l_U2369[I] = nil;
    }
    l_U1592 = 0;
    l_U1588 = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U2363[I] = nil;
        l_U2172[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U1145[I] = 0.00000000;
        l_U1151[I] = 0.00000000;
        l_U1157[I] = 0.00000000;
        l_U1163[I] = 0.00000000;
        l_U1547[I] = 0;
        l_U1169[I] = 0.00000000;
        l_U1553[I] = 0;
        l_U1744[I] = 0;
    }
    l_U1587 = 0;
    l_U1595 = 0;
    l_U1599 = 0;
    l_U1600 = 0;
    l_U1601 = 0;
    return;
}

void sub_22023()
{
    int iVar2;
    boolean bVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    float fVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;

    iVar2 = 0;
    fVar8 = 0.00000000;
    SETTIMERB( 0 );
    while ((NOT bVar4) AND (NOT bVar3))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar6 );
        if (iVar2 != 0)
        {
            iVar7 = iVar6 - iVar5;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_22101()) AND (iVar7 >= 1000)))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            fVar8 = 350.00000000;
            l_U2426 = fVar8 * 0.01745329;
            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 850.80000000, -517.80000000, 16.50000000, 1.00000000, 257820338 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, 850.80000000, -517.80000000, 16.50000000, 1, 0.97000000 );
            }
            CLEAR_CHAR_TASKS( sub_3201() );
            if ((iVar2 == 8) || (iVar2 == 7))
            {
                SET_CHAR_COORDINATES( sub_3201(), 854.59860000, -516.76170000, 15.42150000 );
                SET_CHAR_HEADING( sub_3201(), 8.00000000 );
                SET_ROOM_FOR_CHAR_BY_NAME( sub_3201(), "brwn1stflr" );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_3201(), 852.37950000, -518.89890000, 15.27760000 );
                SET_CHAR_HEADING( sub_3201(), 285.00000000 );
            }
            sub_22447( 12 );
            sub_22630();
            DO_SCREEN_FADE_IN( 500 );
            bVar4 = true;
        }
        else
        {
            switch (iVar2)
            {
                case 0:
                DO_SCREEN_FADE_OUT( 500 );
                WAIT( 200 );
                SET_PLAYER_CONTROL( sub_3083(), 0 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                while (NOT sub_22907())
                {
                    WAIT( 0 );
                }
                CLEAR_PRINTS();
                DISPLAY_RADAR( 0 );
                DISPLAY_HUD( 0 );
                GET_INTERIOR_AT_COORDS( 854.40000000, -515.40000000, 16.60000000, ref uVar11 );
                LOAD_SCENE_FOR_ROOM_BY_KEY( uVar11, GET_HASH_KEY( "brwn1stflr" ) );
                sub_16553( 838.97000000, -527.39000000, 12.87000000, 0.50000000, 856, 65020, 17, 9, -1, 0 );
                SET_CURRENT_CHAR_WEAPON( sub_3201(), 0, 0 );
                REMOVE_PLAYER_HELMET( sub_3083(), 1 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3201() );
                SET_CHAR_COORDINATES( sub_3201(), 850.14000000, -518.69090000, 15.28830000 );
                SET_CHAR_HEADING( sub_3201(), 270.00000000 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_3201(), "open_doorv2", "missnet1", 8.00000000, 0, 1, 1, 0, 0 );
                BEGIN_CAM_COMMANDS( ref l_U2394 );
                CREATE_CAM( 14, ref l_U2391[0] );
                SET_CAM_POS( l_U2391[0], 849.38740000, -519.71480000, 17.07670000 );
                SET_CAM_ROT( l_U2391[0], -11.97720000, 0.00000000, -51.76020000 );
                CREATE_CAM( 14, ref l_U2391[1] );
                SET_CAM_POS( l_U2391[1], 855.05220000, -520.09080000, 16.88840000 );
                SET_CAM_ROT( l_U2391[1], -3.84280000, 0.00000000, 18.09650000 );
                CREATE_CAM( 3, ref l_U2390 );
                SET_CAM_ACTIVE( l_U2391[0], 1 );
                SET_CAM_PROPAGATE( l_U2391[0], 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_WIDESCREEN_BORDERS( 1 );
                DO_SCREEN_FADE_IN( 500 );
                SETTIMERA( 0 );
                GET_GAME_TIMER( ref iVar5 );
                iVar2 = 1;
                break;
                case 1:
                if (IS_CHAR_PLAYING_ANIM( sub_3201(), "missnet1", "open_doorv2" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( sub_3201(), "missnet1", "open_doorv2", ref l_U2428 );
                    if (l_U2428 > 0.46000000)
                    {
                        SET_CAM_POS( l_U2391[0], 852.15750000, -518.12850000, 17.33790000 );
                        SET_CAM_ROT( l_U2391[0], -9.02110000, 0.00000000, 102.27740000 );
                        iVar2 = 2;
                    }
                }
                break;
                case 2:
                if ((IS_CHAR_PLAYING_ANIM( sub_3201(), "missnet1", "open_doorv2" )) AND (NOT bVar10))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( sub_3201(), "missnet1", "open_doorv2", ref l_U2428 );
                    if (l_U2428 > 0.85800000)
                    {
                        SET_CAM_POS( l_U2391[0], 854.55470000, -519.98490000, 16.59482000 );
                        SET_CAM_ROT( l_U2391[0], 2.86079000, -0.00000000, 65.91421000 );
                        SET_CAM_FOV( l_U2391[0], 45 );
                        bVar10 = true;
                    }
                }
                if (bVar10)
                {
                    if (iVar9 == 0)
                    {
                        if (fVar8 < 1.00000000)
                        {
                            fVar8 += 0.20000000;
                            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 850.80000000, -517.80000000, 16.50000000, 1.00000000, 257820338 ))
                            {
                                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, 850.80000000, -517.80000000, 16.50000000, 1, fVar8 );
                            }
                        }
                        else
                        {
                            fVar8 = 1.00000000;
                            iVar9++;
                        }
                    }
                    else if (iVar9 == 1)
                    {
                        if (fVar8 > 0.97000000)
                        {
                            fVar8 -= 0.00500000;
                            if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 850.80000000, -517.80000000, 16.50000000, 1.00000000, 257820338 ))
                            {
                                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, 850.80000000, -517.80000000, 16.50000000, 1, fVar8 );
                            }
                        }
                        else
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, 850.80000000, -517.80000000, 16.50000000, 0, fVar8 );
                            iVar2 = 3;
                        }
                    }
                }
                break;
                case 3:
                if (NOT (IS_CHAR_PLAYING_ANIM( sub_3201(), "missnet1", "open_doorv2" )))
                {
                    TASK_PLAY_ANIM_WITH_FLAGS( sub_3201(), "enter_room", "missnet1", 4.00000000, -1, 11 );
                    SETTIMERA( 0 );
                    iVar2 = 4;
                }
                break;
                case 4:
                if (IS_CHAR_PLAYING_ANIM( sub_3201(), "missnet1", "enter_room" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( sub_3201(), "missnet1", "enter_room", ref l_U2428 );
                    if (l_U2428 > 0.06000000)
                    {
                        if (sub_24378( "C1_ENT", ref l_U2414, 6, 1 ))
                        {
                            ;
                        }
                        iVar2 = 5;
                    }
                }
                break;
                case 5:
                if (IS_CHAR_PLAYING_ANIM( sub_3201(), "missnet1", "enter_room" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( sub_3201(), "missnet1", "enter_room", ref l_U2428 );
                    if (l_U2428 > 0.27000000)
                    {
                        SET_CAM_POS( l_U2391[0], 854.55470000, -519.98490000, 16.59482000 );
                        SET_CAM_ROT( l_U2391[0], 2.86079000, -0.00000000, 65.91421000 );
                        SET_CAM_FOV( l_U2391[0], 45 );
                        SET_CAM_POS( l_U2391[1], 856.97230000, -519.50780000, 16.14372000 );
                        SET_CAM_ROT( l_U2391[1], 0.79814500, 0.00000000, 69.89426000 );
                        SET_CAM_FOV( l_U2391[1], 40 );
                        SET_CAM_ACTIVE( l_U2391[1], 1 );
                        SET_CAM_PROPAGATE( l_U2391[1], 1 );
                        SET_CAM_ACTIVE( l_U2390, 1 );
                        SET_CAM_PROPAGATE( l_U2390, 1 );
                        SET_CAM_INTERP_STYLE_CORE( l_U2390, l_U2391[0], l_U2391[1], 3000, 0 );
                        SETTIMERA( 0 );
                        iVar2 = 6;
                    }
                }
                break;
                case 6:
                if (TIMERA() > 3500)
                {
                    SET_CAM_POS( l_U2391[0], 856.79000000, -512.92000000, 16 );
                    SET_CAM_ROT( l_U2391[0], 2.90000000, 0, 154.43000000 );
                    SET_CAM_FOV( l_U2391[0], 45 );
                    SET_CAM_POS( l_U2391[1], 856.21990000, -512.65000000, 16.00000000 );
                    SET_CAM_ROT( l_U2391[1], 2.40000000, 0, 162.90000000 );
                    SET_CAM_FOV( l_U2391[1], 45 );
                    SET_CAM_INTERP_STYLE_CORE( l_U2390, l_U2391[0], l_U2391[1], 20000, 0 );
                    iVar2 = 7;
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                }
                break;
                case 7:
                if (IS_CHAR_PLAYING_ANIM( sub_3201(), "missnet1", "enter_room" ))
                {
                    ;
                }
                else
                {
                    sub_26004( 12, "C1_CALL1", "C1AUD", g_U480 );
                    SETTIMERA( 0 );
                    iVar2 = 8;
                }
                break;
                case 8:
                if (TIMERA() > 10000)
                {
                    if ((sub_30051() == 6) AND (NOT (sub_29888( l_U2414 ))))
                    {
                        bVar3 = true;
                    }
                }
                break;
                default: break;
            }
        }
    }
    if (sub_29888( l_U2414 ))
    {
        sub_30159( ref l_U2414, 0 );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_ACTIVE( l_U2390, 0 );
    SET_CAM_PROPAGATE( l_U2390, 0 );
    SET_CAM_ACTIVE( l_U2391[0], 0 );
    SET_CAM_PROPAGATE( l_U2391[0], 0 );
    SET_CAM_ACTIVE( l_U2391[1], 0 );
    SET_CAM_PROPAGATE( l_U2391[1], 0 );
    DESTROY_CAM( l_U2390 );
    DESTROY_CAM( l_U2391[0] );
    DESTROY_CAM( l_U2391[1] );
    SET_WIDESCREEN_BORDERS( 0 );
    END_CAM_COMMANDS( ref l_U2394 );
    if (bVar4)
    {
        WAIT( 0 );
        if ((iVar2 == 8) || (iVar2 == 7))
        {
            SET_CHAR_COORDINATES( sub_3201(), 854.59860000, -516.76170000, 15.42150000 );
            SET_CHAR_HEADING( sub_3201(), 8.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( sub_3201(), "brwn1stflr" );
        }
        else
        {
            SET_ROOM_FOR_CHAR_BY_NAME( sub_3201(), "brwn1stflr" );
        }
        SET_CAM_BEHIND_PED( sub_3201() );
        TASK_USE_MOBILE_PHONE( sub_3201(), 0 );
    }
    else
    {
        sub_22630();
        CLEAR_CHAR_TASKS( sub_3201() );
        SET_CAM_BEHIND_PED( sub_3201() );
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 257820338, 850.80000000, -517.80000000, 16.50000000, 1, 0.97000000 );
    SET_PLAYER_CONTROL( sub_3083(), 1 );
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    sub_3604();
    REMOVE_BLIP( l_U2387 );
    ADD_BLIP_FOR_COORD( 855.99380000, -514.36990000, 15.75800000, ref l_U2387 );
    CHANGE_BLIP_COLOUR( l_U2387, 5 );
    SET_ROUTE( l_U2387, 1 );
    sub_18016( "KB_MISSION2", 7500 );
    SETTIMERB( 0 );
    return;
}

int sub_22101()
{
    if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_22447(int iParam0)
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

void sub_22630()
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

void sub_22907()
{
    return sub_22918( 1, 1 );
}

int sub_22918(boolean bParam0, unknown uParam1)
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

void sub_24378(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_24399( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_24399(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_24453( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_24453(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_24475( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
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
    sub_25163( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_24475(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_24552( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_24552( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_24552( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_24552(unknown uParam0)
{
    return;
}

void sub_25163(int iParam0, int iParam1)
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

void sub_26004(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    return sub_26063( uParam0, ref cVar6, uParam2, 0, ref uVar15, ref uVar15, "", 0, 1, 2, uParam3, 1, 0, 0 );
}

int sub_26063(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_24552( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_24552( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3083() )))
    {
        sub_24552( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3201() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3201() )))
    {
        sub_24552( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_24552( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_26578()))
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
                sub_24552( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_26578()))
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
    sub_27950( uParam0, ref g_U91._fU176 );
    sub_29331( ref g_U91._fU160 );
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
        sub_16460( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_26578()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_26635())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_26635()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3083() )))
    {
        sub_24552( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_24552( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_24552( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_24552( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3083() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3201() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3201(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_24552( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3201() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_24552( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_24552( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3083() )))
    {
        sub_24552( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_27950(int iParam0, unknown uParam1)
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

void sub_29331(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_29888(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_24552( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_24552( "\n speech is not playing" );
    }
    return 0;
}

int sub_30051()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

void sub_30159(int iParam0, unknown uParam1)
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

void sub_30939()
{
    return g_U857._fU0;
}

void sub_31087(unknown uParam0, unknown uParam1, unknown uParam2)
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
    return sub_26063( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

void sub_31217()
{
    return g_U857._fU40;
}

int sub_31346(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

int sub_32132(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3201() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3201(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3201() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3201(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3201()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3201() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3201() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3083() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3083() )))
    {
        return 0;
    }
    return 1;
}

int sub_32422(int iParam0)
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
                if (sub_32486( uVar3 ))
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

int sub_32486(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_32688()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    boolean bVar6;
    boolean bVar7;
    vector vVar8;
    boolean bVar11;
    unknown uVar12;
    unknown uVar13;
    boolean bVar14;
    unknown uVar15;

    iVar2 = 0;
    while ((NOT bVar7) AND (NOT bVar6))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar4 );
        if (iVar2 != 0)
        {
            iVar5 = iVar4 - iVar3;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_22101()) AND (iVar5 >= 1000)))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( l_U2380 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2380 );
                SET_CHAR_COORDINATES( l_U2380, 922.50000000, -263.87980000, 18.13510000 );
                SET_CHAR_HEADING( l_U2380, 180.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2380, 931.46610000, -295.04600000, 18.36670000, 3, 20000, 0.20000000 );
            }
            DO_SCREEN_FADE_IN( 500 );
            bVar7 = true;
        }
        else
        {
            switch (iVar2)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_3083(), 0 );
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                while (NOT sub_22907())
                {
                    WAIT( 0 );
                }
                CLEAR_PRINTS();
                DISPLAY_RADAR( 0 );
                DISPLAY_HUD( 0 );
                REQUEST_MODEL( -1984134881 );
                REQUEST_MODEL( 697247370 );
                REQUEST_MODEL( -1180674815 );
                REQUEST_MODEL( 1349725314 );
                REQUEST_CAR_RECORDING( 2949 );
                REQUEST_CAR_RECORDING( 209 );
                while ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 209 ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 2949 ))) || ((NOT (HAS_MODEL_LOADED( 1349725314 ))) || ((NOT (HAS_MODEL_LOADED( -1180674815 ))) || ((NOT (HAS_MODEL_LOADED( 697247370 ))) || (NOT (HAS_MODEL_LOADED( -1984134881 ))))))))
                {
                    WAIT( 0 );
                }
                SUPPRESS_CAR_MODEL( 1349725314 );
                SWITCH_PED_PATHS_OFF( 921.97320000, -279.70720000, 0.00000000, 928.19400000, -254.33440000, 100.00000000 );
                SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
                SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                CLEAR_AREA( 920.92090000, -263.86000000, 18.58650000, 500.00000000, 1 );
                ADD_SCENARIO_BLOCKING_AREA( 907.72980000, -292.83290000, -100.00000000, 927.97830000, -248.76840000, 100.00000000 );
                GET_CAR_CHAR_IS_USING( sub_3201(), ref uVar12 );
                GET_CAR_MODEL( uVar12, ref uVar13 );
                if ((NOT (IS_THIS_MODEL_A_BIKE( uVar13 ))) AND ((NOT (IS_THIS_MODEL_A_TRAIN( uVar13 ))) AND ((NOT (IS_THIS_MODEL_A_HELI( uVar13 ))) AND ((NOT (IS_THIS_MODEL_A_PLANE( uVar13 ))) AND ((NOT (IS_THIS_MODEL_A_BOAT( uVar13 ))) AND (NOT (sub_33442( uVar13 ))))))))
                {
                    bVar14 = true;
                }
                SET_CAR_HEADING( uVar12, 1.50000000 );
                SET_CAR_COORDINATES( uVar12, 920.67600000, -276.77270000, 17.84130000 );
                SET_CAR_ON_GROUND_PROPERLY( uVar12 );
                WAIT( 500 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3201(), 1 );
                if (bVar14)
                {
                    TASK_PLAY_ANIM( sub_3201(), "look_rear_view_idle", "missnet1", 24.00000000, 1, 0, 0, 0, -1 );
                }
                CREATE_CAR( 1349725314, 920.62160000, -260.73850000, 19.02267000, ref l_U2383, 1 );
                CHANGE_CAR_COLOUR( l_U2383, 0, 0 );
                SET_CAN_BURST_CAR_TYRES( l_U2383, 0 );
                SET_CAR_HEALTH( l_U2383, 1750 );
                # -sub_C1FFC0-0xc214c8( 0, ref uVar15 );
                N_1061756705( uVar15, 12 );
                N_1061756705( uVar15, 43 );
                N_1061756705( uVar15, 30 );
                N_1061756705( uVar15, 56 );
                N_1061756705( uVar15, 75 );
                N_1061756705( uVar15, 73 );
                CREATE_CHAR( 4, 697247370, 896.64890000, -276.56690000, 17.67920000, ref l_U2381, 1 );
                SET_CHAR_USES_DEAFULT_ANIM_GROUP_WHEN_FLEEING( l_U2381, 1 );
                WARP_CHAR_INTO_CAR( l_U2381, l_U2383 );
                sub_16340( 2, l_U2381, "MINKOV_M", 0 );
                SET_CHAR_IS_TARGET_PRIORITY( l_U2381, 1 );
                SET_PED_DIES_WHEN_INJURED( l_U2381, 1 );
                ALWAYS_USE_HEAD_ON_HORN_ANIM_WHEN_DEAD_IN_CAR( l_U2381, 1 );
                SET_CHAR_HEALTH( l_U2381, 200 );
                SET_CHAR_AS_ENEMY( l_U2381, 1 );
                START_PLAYBACK_RECORDED_CAR( l_U2383, 209 );
                if (bVar14)
                {
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2383, 2000 );
                    iVar2 = 1;
                }
                else
                {
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U2383, 6000 );
                    iVar2 = 2;
                }
                BEGIN_CAM_COMMANDS( ref l_U2394 );
                CREATE_CAM( 14, ref l_U2389 );
                if (bVar14)
                {
                    vVar8 = {0.37400000, 0.60000000, 0.58500000};
                    ATTACH_CAM_TO_PED( l_U2389, sub_3201() );
                    SET_CAM_ATTACH_OFFSET( l_U2389, vVar8.x, vVar8.y, vVar8.z );
                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U2389, 1 );
                    SET_CAM_FOV( l_U2389, 37 );
                    POINT_CAM_AT_VEHICLE( l_U2389, l_U2383 );
                }
                else
                {
                    SET_CAM_POS( l_U2389, 921.29740000, -258.26600000, 18.84864000 );
                    SET_CAM_ROT( l_U2389, -3.73735200, -0.00000000, 157.94360000 );
                    SET_CAM_FOV( l_U2389, 45 );
                    TASK_LOOK_AT_VEHICLE( sub_3201(), l_U2383, 6000, 0 );
                }
                SET_CAM_ACTIVE( l_U2389, 1 );
                SET_CAM_PROPAGATE( l_U2389, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_WIDESCREEN_BORDERS( 1 );
                DO_SCREEN_FADE_IN( 500 );
                WAIT( 1000 );
                SETTIMERA( 0 );
                GET_GAME_TIMER( ref iVar3 );
                break;
                case 1:
                if (NOT (IS_CAR_DEAD( l_U2383 )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2383 ))
                    {
                        l_U2426 = FIND_TIME_POSITION_IN_RECORDING( l_U2383 );
                        if (l_U2426 > 5000)
                        {
                            if (bVar14)
                            {
                                TASK_PLAY_ANIM( sub_3201(), "look_left_in_car", "missnet1", 4.00000000, 0, 0, 0, 1, 2000 );
                            }
                            iVar2 = 2;
                        }
                    }
                }
                break;
                case 2:
                if ((NOT (IS_CHAR_DEAD( l_U2381 ))) AND (NOT (IS_CAR_DEAD( l_U2383 ))))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2383 ))
                    {
                        l_U2426 = FIND_TIME_POSITION_IN_RECORDING( l_U2383 );
                        if (l_U2426 > 8000)
                        {
                            UNPOINT_CAM( l_U2389 );
                            SET_CAM_POS( l_U2389, 921.29740000, -258.26600000, 18.84864000 );
                            SET_CAM_ROT( l_U2389, -3.73735200, -0.00000000, 157.94360000 );
                            SET_CAM_FOV( l_U2389, 45.00000000 );
                            CREATE_CHAR( 4, -1180674815, 920.92000000, -261.96800000, 18.21130000, ref l_U2380, 1 );
                            SET_CHAR_HEADING( l_U2380, 90.00000000 );
                            sub_16340( 3, l_U2380, "VASILY", 0 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2380, 1 );
                            UNLOCK_RAGDOLL( l_U2380, 0 );
                            SET_CHAR_VISIBLE( l_U2380, 0 );
                            SET_CHAR_DECISION_MAKER( l_U2380, uVar15 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2380 );
                            BLEND_OUT_CHAR_MOVE_ANIMS( l_U2380 );
                            if (NOT (IS_CAR_DEAD( l_U2383 )))
                            {
                                REMOVE_CAR_WINDOW( l_U2383, 1 );
                            }
                            OPEN_SEQUENCE_TASK( ref l_U2425 );
                            TASK_PLAY_ANIM( 0, "walk_up_to_car", "missnet1", 4.00000000, 0, 0, 0, 1, -1 );
                            CLOSE_SEQUENCE_TASK( l_U2425 );
                            TASK_PERFORM_SEQUENCE( l_U2380, l_U2425 );
                            CLEAR_SEQUENCE_TASK( l_U2425 );
                            SETTIMERA( 0 );
                            iVar2 = 3;
                        }
                    }
                }
                break;
                case 3:
                if ((NOT (IS_CAR_DEAD( l_U2383 ))) AND ((NOT (IS_CHAR_DEAD( l_U2380 ))) AND (NOT (IS_CHAR_DEAD( l_U2381 )))))
                {
                    if ((NOT bVar11) AND (TIMERA() > 500))
                    {
                        SET_CHAR_VISIBLE( l_U2380, 1 );
                        bVar11 = true;
                    }
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2383 )))
                    {
                        FREEZE_CAR_POSITION( l_U2383, 1 );
                        sub_35699( "C1_CONV", 0, 1, ref l_U2414, 6, 1 );
                        TASK_PLAY_ANIM( l_U2381, "look_right_loop", "missnet1", 4.00000000, 1, 0, 0, 0, -1 );
                        SETTIMERA( 0 );
                        iVar2 = 4;
                    }
                }
                break;
                case 4:
                if (NOT (IS_CHAR_DEAD( l_U2380 )))
                {
                    if (IS_CHAR_PLAYING_ANIM( l_U2380, "missnet1", "walk_up_to_car" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U2380, "missnet1", "walk_up_to_car", ref l_U2426 );
                        if ((l_U2426 > 0.20000000) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                        {
                            sub_30159( ref l_U2414, 0 );
                            sub_35699( "C1_CONV", 1, 1, ref l_U2414, 6, 1 );
                            GET_CHAR_COORDINATES( l_U2380, ref l_U2420._fU0, ref l_U2420._fU4, ref l_U2420._fU8 );
                            SETTIMERA( 0 );
                            iVar2 = 5;
                        }
                    }
                }
                break;
                case 5:
                if ((TIMERA() > 4000) AND (NOT (IS_CHAR_DEAD( l_U2381 ))))
                {
                    UNPOINT_CAM( l_U2389 );
                    SET_CAM_FOV( l_U2389, 16.00000000 );
                    SET_CAM_POS( l_U2389, 919.53000000, -261.53000000, 19.04000000 );
                    SET_CAM_ROT( l_U2389, -1.49000000, 0.00000000, 176.27000000 );
                    SET_CAM_FOV( l_U2389, 40.00000000 );
                    TASK_PLAY_ANIM( l_U2381, "reverse", "VEH@STD", 4.00000000, 1, 0, 0, 0, -1 );
                    CLEAR_SMALL_PRINTS();
                    sub_30159( ref l_U2414, 0 );
                    SETTIMERA( 0 );
                    iVar2 = 6;
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    if (NOT (IS_CAR_DEAD( l_U2383 )))
                    {
                        GET_CAR_COORDINATES( l_U2383, ref l_U2420._fU0, ref l_U2420._fU4, ref l_U2420._fU8 );
                        PRINTNL();
                        PRINTSTRING( "targetCar Pos- " );
                        PRINTVECTOR( l_U2420 );
                        GET_CAR_HEADING( l_U2383, ref l_U2420._fU0 );
                        PRINTNL();
                        PRINTSTRING( "targetCar Head- " );
                        PRINTFLOAT( l_U2420._fU0 );
                        PRINTNL();
                    }
                }
                break;
                case 6:
                if (TIMERA() > 500)
                {
                    sub_35699( "C1_CONV", 2, 1, ref l_U2414, 6, 1 );
                    iVar2 = 7;
                }
                break;
                case 7:
                if ((TIMERA() > 4500) AND (NOT (IS_CHAR_DEAD( l_U2381 ))))
                {
                    bVar6 = true;
                }
                break;
                default: break;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U2380 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U2380 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U2380, 931.46610000, -295.04600000, 18.36670000, 3, 20000, 0.20000000 );
        SET_CHAR_KEEP_TASK( l_U2380, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U2380, 0 );
        UNLOCK_RAGDOLL( l_U2380, 1 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2380 );
    }
    if (NOT (IS_CHAR_DEAD( l_U2381 )))
    {
        CLEAR_CHAR_TASKS( l_U2381 );
    }
    if (NOT (IS_CAR_DEAD( l_U2382 )))
    {
        FREEZE_CAR_POSITION( l_U2382, 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U2383 )))
    {
        FREEZE_CAR_POSITION( l_U2383, 0 );
    }
    if (NOT (IS_CAR_DEAD( l_U2383 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2383 ))
        {
            SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U2383 );
        }
    }
    if (sub_29888( l_U2414 ))
    {
        sub_30159( ref l_U2414, 0 );
    }
    TASK_CLEAR_LOOK_AT( sub_3201() );
    FREEZE_CHAR_POSITION( sub_3201(), 0 );
    CLEAR_CHAR_TASKS( sub_3201() );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3201(), 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_ACTIVE( l_U2389, 0 );
    SET_CAM_PROPAGATE( l_U2389, 0 );
    DESTROY_CAM( l_U2389 );
    SET_WIDESCREEN_BORDERS( 0 );
    END_CAM_COMMANDS( ref l_U2394 );
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1180674815 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 697247370 );
    REMOVE_CAR_RECORDING( 209 );
    SET_PLAYER_CONTROL( sub_3083(), 1 );
    REMOVE_BLIP( l_U2387 );
    ADD_BLIP_FOR_CHAR( l_U2381, ref l_U2388 );
    SET_BLIP_AS_FRIENDLY( l_U2388, 0 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SETTIMERB( 0 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 921.97320000, -279.70720000, 0.00000000, 928.19400000, -254.33440000, 100.00000000 );
    sub_3604();
    SET_CAM_BEHIND_PED( sub_3201() );
    SWITCH_MAD_DRIVERS( 0 );
    sub_18016( "KB_MISSION4", 7500 );
    return;
}

int sub_33442(int iParam0)
{
    int I;
    int[51] iVar4;

    array(ref iVar4, 51);
    iVar4[0] = 1171614426;
    iVar4[1] = 2053223216;
    iVar4[2] = 850991848;
    iVar4[3] = -1830458836;
    iVar4[4] = -1987130134;
    iVar4[5] = -713569950;
    iVar4[6] = -960289747;
    iVar4[7] = -960289747;
    iVar4[8] = 1938952078;
    iVar4[9] = 1938952078;
    iVar4[10] = 1353720154;
    iVar4[11] = 1491375716;
    iVar4[12] = 904750859;
    iVar4[13] = 1203311498;
    iVar4[14] = 569305213;
    iVar4[15] = -2137348917;
    iVar4[16] = -1627000575;
    iVar4[17] = 1759673526;
    iVar4[18] = 1677715180;
    iVar4[19] = 1747439474;
    iVar4[20] = 800869680;
    iVar4[21] = 400514754;
    iVar4[22] = -907477130;
    iVar4[23] = -907477130;
    iVar4[24] = -1099960214;
    iVar4[25] = -1660661558;
    iVar4[26] = 353883353;
    iVar4[27] = -1961627517;
    iVar4[28] = 1560980623;
    iVar4[29] = 1127131465;
    iVar4[30] = 837858166;
    iVar4[31] = 1033245328;
    iVar4[32] = 1127131465;
    iVar4[33] = 2046537925;
    iVar4[34] = 861409633;
    iVar4[35] = 583100975;
    iVar4[36] = 148777611;
    iVar4[37] = 1911513875;
    iVar4[38] = -350085182;
    iVar4[39] = -488123221;
    iVar4[40] = -1900572838;
    iVar4[41] = -845979911;
    iVar4[42] = 1677715180;
    iVar4[43] = 1917016601;
    iVar4[44] = 1064455782;
    iVar4[45] = -1346687836;
    iVar4[46] = -119658072;
    iVar4[47] = -810318068;
    iVar4[48] = -1043459709;
    iVar4[49] = 788045382;
    iVar4[50] = -1842748181;
    for ( I = 0; I < 51; I++ )
    {
        if (iParam0 == iVar4[I])
        {
            return 1;
        }
    }
    return 0;
}

void sub_35699(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_35724( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_35724(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_24453( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_37278()
{
    for ( l_U2423 = 0; l_U2423 < 3; l_U2423++ )
    {
        if (NOT (IS_CAR_DEAD( l_U2383 )))
        {
            if (NOT l_U2453[l_U2423]._fU72)
            {
                if (NOT l_U2453[l_U2423]._fU68)
                {
                    if (LOCATE_CAR_2D( l_U2383, l_U2453[l_U2423]._fU12._fU0, l_U2453[l_U2423]._fU12._fU4, l_U2453[l_U2423]._fU52, l_U2453[l_U2423]._fU52, 0 ))
                    {
                        sub_37454( l_U2423 );
                    }
                }
                else if (NOT (IS_CHAR_DEAD( l_U2453[l_U2423]._fU8 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U2453[l_U2423]._fU8, 29, ref l_U2429 );
                    if (l_U2429 == 7)
                    {
                        sub_38040( l_U2423 );
                    }
                }
            }
        }
    }
    return;
}

void sub_37454(unknown uParam0)
{
    if (NOT l_U2453[uParam0]._fU68)
    {
        GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U2453[uParam0]._fU4, ref l_U2424 );
        if (l_U2424 < 0)
        {
            l_U2453[uParam0]._fU4 = 1349725314;
        }
        CREATE_CAR( l_U2453[uParam0]._fU4, l_U2453[uParam0]._fU24._fU0, l_U2453[uParam0]._fU24._fU4, l_U2453[uParam0]._fU24._fU8, ref l_U2453[uParam0]._fU0, 1 );
        SET_CAR_HEADING( l_U2453[uParam0]._fU0, l_U2453[uParam0]._fU48 );
        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
        {
            CREATE_RANDOM_CHAR_AS_DRIVER( l_U2453[uParam0]._fU0, ref l_U2453[uParam0]._fU8 );
        }
        else
        {
            CREATE_CHAR_INSIDE_CAR( l_U2453[uParam0]._fU0, 4, -1984134881, ref l_U2453[uParam0]._fU8 );
        }
        OPEN_SEQUENCE_TASK( ref l_U2425 );
        TASK_PAUSE( 0, l_U2453[uParam0]._fU60 );
        TASK_CAR_DRIVE_TO_COORD( 0, l_U2453[uParam0]._fU0, l_U2453[uParam0]._fU36._fU0, l_U2453[uParam0]._fU36._fU4, l_U2453[uParam0]._fU36._fU8, l_U2453[uParam0]._fU56, 0, 0, 4, 4.00000000, -1 );
        CLOSE_SEQUENCE_TASK( l_U2425 );
        TASK_PERFORM_SEQUENCE( l_U2453[uParam0]._fU8, l_U2425 );
        CLEAR_SEQUENCE_TASK( l_U2425 );
        if (l_U2411)
        {
            PRINTNL();
            PRINTSTRING( "** SETUP SCRIPTED CAR- " );
            PRINTINT( uParam0 );
            PRINTNL();
        }
        l_U2453[uParam0]._fU68 = 1;
    }
    return;
}

void sub_38040(unknown uParam0)
{
    if (l_U2453[uParam0]._fU68)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2453[uParam0]._fU0 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U2453[uParam0]._fU8 );
        l_U2453[uParam0]._fU68 = 0;
    }
    if (l_U2411)
    {
        PRINTNL();
        PRINTSTRING( "*** CLEANED UP SCRIPTED CAR- " );
        PRINTINT( uParam0 );
        PRINTNL();
    }
    l_U2453[uParam0]._fU72 = 1;
    return;
}

void sub_38238(unknown uParam0)
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
    if ((iVar3 != 4) AND ((NOT sub_38406()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_3201() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
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

int sub_38406()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_38977()
{
    unknown uVar2;

    SET_WANTED_MULTIPLIER( 0.10000000 );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );
    ENABLE_CHASE_AUDIO( 1 );
    sub_39016( 1, 1 );
    sub_39548();
    l_U1750[0] = {915.30150000, -231.80700000, 18.36400000};
    l_U561[0] = -0.00160000;
    l_U677[0] = 0.00690000;
    l_U793[0] = -0.00290000;
    l_U909[0] = 1.00000000;
    l_U1315[0] = 2801;
    l_U1025[0] = 0.00000000;
    l_U1602[0] = 1534326199;
    l_U1750[1] = {936.63570000, -221.81330000, 19.31940000};
    l_U561[1] = 0.04170000;
    l_U677[1] = -0.00910000;
    l_U793[1] = -0.63780000;
    l_U909[1] = 0.76900000;
    l_U1315[1] = 2886;
    l_U1025[1] = 2000.00000000;
    l_U1602[1] = 1534326199;
    l_U1750[2] = {986.16200000, -175.00540000, 23.80230000};
    l_U561[2] = -0.01230000;
    l_U677[2] = -0.00120000;
    l_U793[2] = 0.98730000;
    l_U909[2] = -0.15860000;
    l_U1315[2] = 2888;
    l_U1025[2] = 2000.00000000;
    l_U1602[2] = -1883869285;
    l_U1750[3] = {1014.98400000, -267.48410000, 21.50730000};
    l_U561[3] = -0.03320000;
    l_U677[3] = 0.00630000;
    l_U793[3] = 0.71100000;
    l_U909[3] = 0.70240010;
    l_U1315[3] = 2887;
    l_U1025[3] = 4000.00000000;
    l_U1602[3] = -956048545;
    l_U1750[4] = {1018.07500000, -354.88900000, 18.73320000};
    l_U561[4] = -0.04630000;
    l_U677[4] = 0.01440000;
    l_U793[4] = 0.21050000;
    l_U909[4] = 0.97640000;
    l_U1315[4] = 2889;
    l_U1025[4] = 9000.00000000;
    l_U1602[4] = 1534326199;
    l_U1750[5] = {1034.95700000, -358.97390000, 19.90190000};
    l_U561[5] = -0.05050000;
    l_U677[5] = -0.00880000;
    l_U793[5] = 0.81760000;
    l_U909[5] = 0.57340000;
    l_U1315[5] = 2890;
    l_U1025[5] = 11000.00000000;
    l_U1602[5] = -956048545;
    l_U1750[6] = {1027.64900000, -386.61570000, 8.92920000};
    l_U561[6] = -0.01560000;
    l_U677[6] = -0.02930000;
    l_U793[6] = 0.78580000;
    l_U909[6] = 0.61760000;
    l_U1315[6] = 2802;
    l_U1025[6] = 17557.00000000;
    l_U1602[6] = -498054846;
    l_U1750[7] = {1022.61800000, -366.43420000, 19.53310000};
    l_U561[7] = -0.01130000;
    l_U677[7] = 0.00370000;
    l_U793[7] = 0.17220000;
    l_U909[7] = 0.98500000;
    l_U1315[7] = 2803;
    l_U1025[7] = 17707.00000000;
    l_U1602[7] = -1883869285;
    l_U1750[8] = {1036.72600000, -383.83170000, 9.89030000};
    l_U561[8] = -0.03580000;
    l_U677[8] = -0.05330000;
    l_U793[8] = 0.80780000;
    l_U909[8] = 0.58590000;
    l_U1315[8] = 2804;
    l_U1025[8] = 18625.00000000;
    l_U1602[8] = -1883869285;
    l_U1750[9] = {922.51720000, -398.17620000, 37.14620000};
    l_U561[9] = -0.02300000;
    l_U677[9] = 0.01750000;
    l_U793[9] = 0.72600000;
    l_U909[9] = 0.68710000;
    l_U1315[9] = 2891;
    l_U1025[9] = 25000.00000000;
    l_U1602[9] = -956048545;
    l_U1750[10] = {871.56920000, -398.70480000, 37.51060000};
    l_U561[10] = 0.00650000;
    l_U677[10] = 0.00610000;
    l_U793[10] = 0.71200000;
    l_U909[10] = 0.70210000;
    l_U1315[10] = 2892;
    l_U1025[10] = 25000.00000000;
    l_U1602[10] = -956048545;
    l_U1750[11] = {826.02030000, -402.45030000, 38.44520000};
    l_U561[11] = 0.00860000;
    l_U677[11] = 0.01000000;
    l_U793[11] = 0.71190000;
    l_U909[11] = 0.70210000;
    l_U1315[11] = 2893;
    l_U1025[11] = 25000.00000000;
    l_U1602[11] = 974744810;
    l_U1750[12] = {753.69320000, -398.86250000, 39.85580000};
    l_U561[12] = 0.00570000;
    l_U677[12] = 0.00560000;
    l_U793[12] = 0.70540000;
    l_U909[12] = 0.70870000;
    l_U1315[12] = 2894;
    l_U1025[12] = 28000.00000000;
    l_U1602[12] = 974744810;
    l_U1750[13] = {743.71630000, -402.52980000, 40.16200000};
    l_U561[13] = 0.00450000;
    l_U677[13] = 0.00430000;
    l_U793[13] = 0.70700000;
    l_U909[13] = 0.70720000;
    l_U1315[13] = 2895;
    l_U1025[13] = 28000.00000000;
    l_U1602[13] = 525509695;
    l_U1750[14] = {619.84940000, -402.51100000, 41.06600000};
    l_U561[14] = -0.00110000;
    l_U677[14] = -0.00430000;
    l_U793[14] = 0.70700000;
    l_U909[14] = 0.70720000;
    l_U1315[14] = 2896;
    l_U1025[14] = 30000.00000000;
    l_U1602[14] = -713569950;
    l_U1750[15] = {724.93600000, -398.65280000, 40.55820000};
    l_U561[15] = 0.01010000;
    l_U677[15] = 0.00990000;
    l_U793[15] = 0.70790000;
    l_U909[15] = 0.70610000;
    l_U1315[15] = 2916;
    l_U1025[15] = 30000.00000000;
    l_U1602[15] = 1884962369;
    l_U1750[16] = {612.12500000, -413.25000000, 40.26310000};
    l_U561[16] = 0.00210000;
    l_U677[16] = -0.00200000;
    l_U793[16] = -0.70710000;
    l_U909[16] = 0.70710000;
    l_U1315[16] = 2805;
    l_U1025[16] = 40317.00000000;
    l_U1602[16] = -498054846;
    l_U1750[17] = {416.89200000, -398.38770000, 36.32530000};
    l_U561[17] = -0.00650000;
    l_U677[17] = -0.00480000;
    l_U793[17] = 0.70529990;
    l_U909[17] = 0.70890000;
    l_U1315[17] = 2806;
    l_U1025[17] = 46835.00000000;
    l_U1602[17] = -1883869285;
    l_U1750[18] = {338.41580000, -402.35370000, 31.46390000};
    l_U561[18] = -0.03730000;
    l_U677[18] = -0.03730000;
    l_U793[18] = 0.70620000;
    l_U909[18] = 0.70610000;
    l_U1315[18] = 2807;
    l_U1025[18] = 49736.00000000;
    l_U1602[18] = -498054846;
    l_U1750[19] = {123.63680000, -411.27290000, 14.45980000};
    l_U561[19] = -0.01620000;
    l_U677[19] = -0.01530000;
    l_U793[19] = 0.70730000;
    l_U909[19] = -0.70660000;
    l_U1315[19] = 2897;
    l_U1025[19] = 50000.00000000;
    l_U1602[19] = 1884962369;
    l_U1750[20] = {311.48390000, -402.46090000, 28.35400000};
    l_U561[20] = -0.05210000;
    l_U677[20] = -0.05200000;
    l_U793[20] = 0.70560000;
    l_U909[20] = 0.70480000;
    l_U1315[20] = 2917;
    l_U1025[20] = 50000.00000000;
    l_U1602[20] = -956048545;
    l_U1750[21] = {164.57410000, -402.46920000, 14.00980000};
    l_U561[21] = -0.00410000;
    l_U677[21] = -0.00090000;
    l_U793[21] = 0.75310000;
    l_U909[21] = 0.65790000;
    l_U1315[21] = 2808;
    l_U1025[21] = 55940.00000000;
    l_U1602[21] = -498054846;
    l_U1750[22] = {163.17070000, -397.85170000, 14.01640000};
    l_U561[22] = 0.00350000;
    l_U677[22] = -0.00690000;
    l_U793[22] = 0.75300000;
    l_U909[22] = 0.65800000;
    l_U1315[22] = 2809;
    l_U1025[22] = 55940.00000000;
    l_U1602[22] = -498054846;
    l_U1750[23] = {156.98760000, -404.84980000, 14.34980000};
    l_U561[23] = 0.00700000;
    l_U677[23] = -0.01180000;
    l_U793[23] = 0.75300000;
    l_U909[23] = 0.65790000;
    l_U1315[23] = 2810;
    l_U1025[23] = 56263.00000000;
    l_U1602[23] = -956048545;
    l_U1750[24] = {155.57410000, -399.53360000, 14.04440000};
    l_U561[24] = -0.01220000;
    l_U677[24] = 0.01300000;
    l_U793[24] = 0.75300000;
    l_U909[24] = 0.65780000;
    l_U1315[24] = 2811;
    l_U1025[24] = 56329.00000000;
    l_U1602[24] = -498054846;
    l_U1750[25] = {138.73610000, -391.04750000, 14.11720000};
    l_U561[25] = -0.00110000;
    l_U677[25] = 0.00370000;
    l_U793[25] = 1.00000000;
    l_U909[25] = 0.00150000;
    l_U1315[25] = 2812;
    l_U1025[25] = 56725.00000000;
    l_U1602[25] = 1534326199;
    l_U1750[26] = {137.56470000, -398.39840000, 14.36160000};
    l_U561[26] = -0.00130000;
    l_U677[26] = 0.00610000;
    l_U793[26] = 0.99980000;
    l_U909[26] = 0.01960000;
    l_U1315[26] = 2813;
    l_U1025[26] = 56791.00000000;
    l_U1602[26] = 1349725314;
    l_U1750[27] = {138.01630000, -406.12170000, 14.24940000};
    l_U561[27] = 0.00420000;
    l_U677[27] = 0.00100000;
    l_U793[27] = 0.99600000;
    l_U909[27] = 0.08960000;
    l_U1315[27] = 2814;
    l_U1025[27] = 56791.00000000;
    l_U1602[27] = 1534326199;
    l_U1750[28] = {208.68140000, -433.90920000, 4.76910000};
    l_U561[28] = 0.01570000;
    l_U677[28] = 0.02960000;
    l_U793[28] = -0.65710000;
    l_U909[28] = 0.75310000;
    l_U1315[28] = 2918;
    l_U1025[28] = 60000.00000000;
    l_U1602[28] = 2006918058;
    l_U1750[29] = {294.91040000, -374.81760000, 4.54930000};
    l_U561[29] = -0.01970000;
    l_U677[29] = 0.00000000;
    l_U793[29] = 0.99980000;
    l_U909[29] = -0.00190000;
    l_U1315[29] = 2900;
    l_U1025[29] = 66000.00000000;
    l_U1602[29] = -956048545;
    l_U1750[30] = {314.51480000, -405.28530000, 4.76090000};
    l_U561[30] = -0.01170000;
    l_U677[30] = 0.01740000;
    l_U793[30] = 0.72060000;
    l_U909[30] = 0.69310000;
    l_U1315[30] = 2901;
    l_U1025[30] = 70000.00000000;
    l_U1602[30] = 2006918058;
    l_U1750[31] = {300.38160000, -333.48370000, 4.29630000};
    l_U561[31] = -0.00010000;
    l_U677[31] = 0.00010000;
    l_U793[31] = 0.00000000;
    l_U909[31] = 1.00000000;
    l_U1315[31] = 2815;
    l_U1025[31] = 75856.00000000;
    l_U1602[31] = 974744810;
    l_U1750[32] = {300.14180000, -327.02520000, 4.47600000};
    l_U561[32] = 0.00600000;
    l_U677[32] = 0.00000000;
    l_U793[32] = -0.00010000;
    l_U909[32] = 1.00000000;
    l_U1315[32] = 2816;
    l_U1025[32] = 77745.00000000;
    l_U1602[32] = 525509695;
    l_U1750[33] = {221.51930000, -264.46100000, 8.61690000};
    l_U561[33] = -0.01190000;
    l_U677[33] = 0.00370000;
    l_U793[33] = 0.99820000;
    l_U909[33] = 0.05830000;
    l_U1315[33] = 2817;
    l_U1025[33] = 83096.00000000;
    l_U1602[33] = -956048545;
    l_U1750[34] = {140.43150000, -313.61980000, 14.39680000};
    l_U561[34] = 0.00830000;
    l_U677[34] = -0.00450000;
    l_U793[34] = -0.69930000;
    l_U909[34] = 0.71480000;
    l_U1315[34] = 0;
    l_U1025[34] = 85000.00000000;
    l_U1602[34] = -956048545;
    l_U1750[35] = {118.41930000, -148.26680000, 14.15240000};
    l_U561[35] = -0.02040000;
    l_U677[35] = 0.01900000;
    l_U793[35] = 0.71569990;
    l_U909[35] = 0.69790000;
    l_U1315[35] = 2919;
    l_U1025[35] = 87000.00000000;
    l_U1602[35] = 1349725314;
    l_U1750[36] = {122.97210000, -313.03760000, 14.28780000};
    l_U561[36] = 0.00130000;
    l_U677[36] = -0.00130000;
    l_U793[36] = 0.70720000;
    l_U909[36] = -0.70700000;
    l_U1315[36] = 2818;
    l_U1025[36] = 88118.00000000;
    l_U1602[36] = 525509695;
    l_U1750[37] = {122.84800000, -308.42460000, 14.10720000};
    l_U561[37] = -0.00040000;
    l_U677[37] = 0.00080000;
    l_U793[37] = -0.70710000;
    l_U909[37] = 0.70710000;
    l_U1315[37] = 2819;
    l_U1025[37] = 88118.00000000;
    l_U1602[37] = 974744810;
    l_U1750[38] = {138.16150000, -297.32070000, 14.52050000};
    l_U561[38] = 0.00000000;
    l_U677[38] = 0.01120000;
    l_U793[38] = 0.99990000;
    l_U909[38] = -0.00000000;
    l_U1315[38] = 2820;
    l_U1025[38] = 88844.00000000;
    l_U1602[38] = 1884962369;
    l_U1750[39] = {157.40520000, -236.70460000, 14.32300000};
    l_U561[39] = 0.00390000;
    l_U677[39] = 0.00400000;
    l_U793[39] = 0.70720000;
    l_U909[39] = 0.70700000;
    l_U1315[39] = 2821;
    l_U1025[39] = 90478.00000000;
    l_U1602[39] = -956048545;
    l_U1750[40] = {157.54940000, -231.38400000, 14.46640000};
    l_U561[40] = 0.00330000;
    l_U677[40] = 0.00540000;
    l_U793[40] = 0.70710000;
    l_U909[40] = 0.70710000;
    l_U1315[40] = 2822;
    l_U1025[40] = 90541.00000000;
    l_U1602[40] = 1884962369;
    l_U1750[41] = {131.27490000, -150.44400000, 14.18150000};
    l_U561[41] = 0.01460000;
    l_U677[41] = -0.00320000;
    l_U793[41] = 0.81680000;
    l_U909[41] = 0.57670000;
    l_U1315[41] = 2823;
    l_U1025[41] = 99929.00000000;
    l_U1602[41] = -956048545;
    l_U1750[42] = {39.21150000, -162.80380000, 13.81740000};
    l_U561[42] = -0.00330000;
    l_U677[42] = 0.00240000;
    l_U793[42] = -0.65740000;
    l_U909[42] = 0.75350000;
    l_U1315[42] = 2824;
    l_U1025[42] = 104657.00000000;
    l_U1602[42] = -498054846;
    l_U1750[43] = {20.15930000, -135.04640000, 14.20160000};
    l_U561[43] = 0.00010000;
    l_U677[43] = 0.00810000;
    l_U793[43] = 0.99990000;
    l_U909[43] = -0.00920000;
    l_U1315[43] = 2825;
    l_U1025[43] = 106005.00000000;
    l_U1602[43] = 525509695;
    l_U1750[44] = {26.33660000, -162.69050000, 13.98040000};
    l_U561[44] = -0.01120000;
    l_U677[44] = -0.00380000;
    l_U793[44] = 0.82100000;
    l_U909[44] = -0.57080000;
    l_U1315[44] = 2826;
    l_U1025[44] = 106070.00000000;
    l_U1602[44] = 974744810;
    l_U1750[45] = {-86.52280000, -167.83890000, 14.33750000};
    l_U561[45] = 0.02300000;
    l_U677[45] = 0.02050000;
    l_U793[45] = -0.69960000;
    l_U909[45] = 0.71390000;
    l_U1315[45] = 2905;
    l_U1025[45] = 108000.00000000;
    l_U1602[45] = -956048545;
    l_U1750[46] = {-40.64160000, -180.09950000, 14.37140000};
    l_U561[46] = 0.00140000;
    l_U677[46] = 0.01770000;
    l_U793[46] = -0.00190000;
    l_U909[46] = 0.99980000;
    l_U1315[46] = 2906;
    l_U1025[46] = 108000.00000000;
    l_U1602[46] = -956048545;
    l_U1750[47] = {-58.11500000, -183.06910000, 14.05310000};
    l_U561[47] = -0.02040000;
    l_U677[47] = -0.00330000;
    l_U793[47] = 0.99970000;
    l_U909[47] = 0.01260000;
    l_U1315[47] = 2907;
    l_U1025[47] = 108000.00000000;
    l_U1602[47] = -498054846;
    l_U1750[48] = {-46.21420000, -128.32300000, 14.53870000};
    l_U561[48] = 0.00750000;
    l_U677[48] = 0.00010000;
    l_U793[48] = -0.00040000;
    l_U909[48] = 1.00000000;
    l_U1315[48] = 2827;
    l_U1025[48] = 109609.00000000;
    l_U1602[48] = 1884962369;
    l_U1750[49] = {-52.37510000, -134.31890000, 14.03960000};
    l_U561[49] = 0.00000000;
    l_U677[49] = -0.00300000;
    l_U793[49] = 1.00000000;
    l_U909[49] = -0.00150000;
    l_U1315[49] = 2828;
    l_U1025[49] = 109854.00000000;
    l_U1602[49] = -498054846;
    l_U1750[50] = {-56.68130000, -134.34860000, 14.53780000};
    l_U561[50] = 0.00010000;
    l_U677[50] = 0.00180000;
    l_U793[50] = 1.00000000;
    l_U909[50] = 0.00320000;
    l_U1315[50] = 2829;
    l_U1025[50] = 110302.00000000;
    l_U1602[50] = 1884962369;
    l_U1750[51] = {-148.87750000, -305.58830000, 14.21180000};
    l_U561[51] = -0.00880000;
    l_U677[51] = -0.00840000;
    l_U793[51] = 0.70710000;
    l_U909[51] = -0.70700000;
    l_U1315[51] = 2830;
    l_U1025[51] = 125919.00000000;
    l_U1602[51] = 974744810;
    l_U1750[52] = {-269.76350000, -321.41420000, 13.54550000};
    l_U561[52] = 0.01170000;
    l_U677[52] = -0.00670000;
    l_U793[52] = -0.50040000;
    l_U909[52] = 0.86570000;
    l_U1315[52] = 2831;
    l_U1025[52] = 131061.00000000;
    l_U1602[52] = -956048545;
    l_U1750[53] = {-272.36230000, -316.75520000, 13.73050000};
    l_U561[53] = 0.02050000;
    l_U677[53] = -0.01180000;
    l_U793[53] = -0.49970000;
    l_U909[53] = 0.86590000;
    l_U1315[53] = 2832;
    l_U1025[53] = 131172.00000000;
    l_U1602[53] = 1348744438;
    l_U1750[54] = {-361.39830000, -262.07200000, 11.12910000};
    l_U561[54] = 0.06740000;
    l_U677[54] = 0.00200000;
    l_U793[54] = -0.02640000;
    l_U909[54] = 0.99740000;
    l_U1315[54] = 2920;
    l_U1025[54] = 138000.00000000;
    l_U1602[54] = 1348744438;
    l_U1750[55] = {-333.94120000, -230.96340000, 12.66160000};
    l_U561[55] = 0.00000000;
    l_U677[55] = 0.00010000;
    l_U793[55] = 0.70720000;
    l_U909[55] = 0.70700000;
    l_U1315[55] = 2833;
    l_U1025[55] = 139325.00000000;
    l_U1602[55] = 1348744438;
    l_U1750[56] = {-372.44640000, -116.38060000, 14.43400000};
    l_U561[56] = -0.02320000;
    l_U677[56] = 0.00190000;
    l_U793[56] = 0.99960000;
    l_U909[56] = -0.01390000;
    l_U1315[56] = 2908;
    l_U1025[56] = 140000.00000000;
    l_U1602[56] = 1348744438;
    l_U1750[57] = {-366.74690000, -65.28060000, 14.54210000};
    l_U561[57] = -0.00140000;
    l_U677[57] = 0.00300000;
    l_U793[57] = 0.99990000;
    l_U909[57] = -0.01460000;
    l_U1315[57] = 2909;
    l_U1025[57] = 140000.00000000;
    l_U1602[57] = 1884962369;
    l_U1750[58] = {-340.14330000, -236.74090000, 12.50230000};
    l_U561[58] = 0.00050000;
    l_U677[58] = 0.00140000;
    l_U793[58] = 0.70720000;
    l_U909[58] = 0.70700000;
    l_U1315[58] = 2835;
    l_U1025[58] = 141096.00000000;
    l_U1602[58] = 1349725314;
    l_U1750[59] = {-410.46460000, -47.77360000, 12.39570000};
    l_U561[59] = 0.02860000;
    l_U677[59] = -0.05700000;
    l_U793[59] = -0.70260000;
    l_U909[59] = 0.70870000;
    l_U1315[59] = 2910;
    l_U1025[59] = 145000.00000000;
    l_U1602[59] = 1884962369;
    l_U1750[60] = {-480.70830000, -47.95010000, 8.42670000};
    l_U561[60] = 0.05090000;
    l_U677[60] = -0.07180000;
    l_U793[60] = -0.70230000;
    l_U909[60] = 0.70650000;
    l_U1315[60] = 2911;
    l_U1025[60] = 145000.00000000;
    l_U1602[60] = -956048545;
    l_U1750[61] = {-458.61870000, 31.50710000, 9.39860000};
    l_U561[61] = -0.00060000;
    l_U677[61] = 0.00990000;
    l_U793[61] = 0.99990000;
    l_U909[61] = 0.00570000;
    l_U1315[61] = 2836;
    l_U1025[61] = 159982.00000000;
    l_U1602[61] = -956048545;
    l_U1750[62] = {-437.70210000, 30.73000000, 9.58950100};
    l_U561[62] = -0.03330000;
    l_U677[62] = 0.00700000;
    l_U793[62] = 0.71100000;
    l_U909[62] = 0.70240010;
    l_U1315[62] = 2912;
    l_U1025[62] = 160000.00000000;
    l_U1602[62] = -956048545;
    l_U1750[63] = {-439.72040000, 30.34710000, 9.72430000};
    l_U561[63] = -0.02160000;
    l_U677[63] = 0.00610000;
    l_U793[63] = 0.70910000;
    l_U909[63] = 0.70470000;
    l_U1315[63] = 2921;
    l_U1025[63] = 160000.00000000;
    l_U1602[63] = 1348744438;
    l_U1750[64] = {-457.76030000, 39.55160000, 9.42319900};
    l_U561[64] = 0.00130000;
    l_U677[64] = 0.00490000;
    l_U793[64] = 1.00000000;
    l_U909[64] = -0.00800000;
    l_U1315[64] = 2837;
    l_U1025[64] = 161049.00000000;
    l_U1602[64] = 1349725314;
    l_U1750[65] = {-458.11490000, 57.18450000, 9.59860000};
    l_U561[65] = 0.00210000;
    l_U677[65] = 0.00270000;
    l_U793[65] = 1.00000000;
    l_U909[65] = -0.00640000;
    l_U1315[65] = 2839;
    l_U1025[65] = 162792.00000000;
    l_U1602[65] = 2006918058;
    l_U1750[66] = {-458.15400000, 65.98800000, 9.31420000};
    l_U561[66] = 0.00010000;
    l_U677[66] = 0.00390000;
    l_U793[66] = 1.00000000;
    l_U909[66] = -0.00610000;
    l_U1315[66] = 2840;
    l_U1025[66] = 163507.00000000;
    l_U1602[66] = -2077743597;
    l_U1750[67] = {-452.42020000, 103.24750000, 9.31540000};
    l_U561[67] = 0.00050000;
    l_U677[67] = 0.00000000;
    l_U793[67] = 0.00000000;
    l_U909[67] = 1.00000000;
    l_U1315[67] = 2841;
    l_U1025[67] = 165570.00000000;
    l_U1602[67] = -2077743597;
    l_U1750[68] = {-470.99680000, 120.65330000, 9.39540000};
    l_U561[68] = 0.00020000;
    l_U677[68] = -0.00000000;
    l_U793[68] = -0.70700000;
    l_U909[68] = 0.70720000;
    l_U1315[68] = 2843;
    l_U1025[68] = 166519.00000000;
    l_U1602[68] = 1777363799;
    l_U1750[69] = {-453.13070000, 127.91700000, 9.40839900};
    l_U561[69] = 0.00760000;
    l_U677[69] = 0.01720000;
    l_U793[69] = -0.13090000;
    l_U909[69] = 0.99120000;
    l_U1315[69] = 2844;
    l_U1025[69] = 166843.00000000;
    l_U1602[69] = 1777363799;
    l_U1750[70] = {-485.62450000, 125.26090000, 7.59770000};
    l_U561[70] = -0.03470000;
    l_U677[70] = -0.02110000;
    l_U793[70] = 0.70630000;
    l_U909[70] = 0.70680000;
    l_U1315[70] = 2845;
    l_U1025[70] = 166909.00000000;
    l_U1602[70] = 1777363799;
    l_U1750[71] = {-474.84250000, 126.14460000, 8.98950000};
    l_U561[71] = -0.04410000;
    l_U677[71] = -0.04430000;
    l_U793[71] = 0.70000000;
    l_U909[71] = 0.71140000;
    l_U1315[71] = 2846;
    l_U1025[71] = 166975.00000000;
    l_U1602[71] = -956048545;
    l_U1750[72] = {-458.55300000, 149.22720000, 9.71100100};
    l_U561[72] = 0.00100000;
    l_U677[72] = 0.00500000;
    l_U793[72] = 1.00000000;
    l_U909[72] = -0.00000000;
    l_U1315[72] = 2847;
    l_U1025[72] = 167895.00000000;
    l_U1602[72] = 2006918058;
    l_U1750[73] = {-451.87190000, 177.70710000, 9.42010000};
    l_U561[73] = -0.02030000;
    l_U677[73] = -0.05110000;
    l_U793[73] = -0.29110000;
    l_U909[73] = 0.95510000;
    l_U1315[73] = 2848;
    l_U1025[73] = 169412.00000000;
    l_U1602[73] = -2077743597;
    l_U1750[74] = {-452.23150000, 196.46220000, 9.65050000};
    l_U561[74] = 0.00060000;
    l_U677[74] = 0.00010000;
    l_U793[74] = -0.00050000;
    l_U909[74] = 1.00000000;
    l_U1315[74] = 2849;
    l_U1025[74] = 170412.00000000;
    l_U1602[74] = 1884962369;
    l_U1750[75] = {-457.93050000, 195.95830000, 9.52890000};
    l_U561[75] = 0.00030000;
    l_U677[75] = 0.00560000;
    l_U793[75] = 1.00000000;
    l_U909[75] = -0.00180000;
    l_U1315[75] = 2850;
    l_U1025[75] = 170659.00000000;
    l_U1602[75] = 1349725314;
    l_U1750[76] = {-452.21700000, 231.56180000, 9.37780000};
    l_U561[76] = 0.00190000;
    l_U677[76] = -0.00000000;
    l_U793[76] = -0.00010000;
    l_U909[76] = 1.00000000;
    l_U1315[76] = 2851;
    l_U1025[76] = 172233.00000000;
    l_U1602[76] = -1685021548;
    l_U1750[77] = {-466.33900000, 258.48270000, 9.46230000};
    l_U561[77] = 0.00100000;
    l_U677[77] = -0.00090000;
    l_U793[77] = -0.69970000;
    l_U909[77] = 0.71440000;
    l_U1315[77] = 2852;
    l_U1025[77] = 173687.00000000;
    l_U1602[77] = -956048545;
    l_U1750[78] = {-457.41100000, 259.07080000, 9.40390000};
    l_U561[78] = 0.00170000;
    l_U677[78] = 0.00040000;
    l_U793[78] = -0.62180000;
    l_U909[78] = 0.78320000;
    l_U1315[78] = 2853;
    l_U1025[78] = 173753.00000000;
    l_U1602[78] = -2077743597;
    l_U1750[79] = {-445.55530000, 263.37840000, 9.51290000};
    l_U561[79] = 0.00000000;
    l_U677[79] = 0.00000000;
    l_U793[79] = 0.70710000;
    l_U909[79] = 0.70710000;
    l_U1315[79] = 2854;
    l_U1025[79] = 174017.00000000;
    l_U1602[79] = -956048545;
    l_U1750[80] = {-452.77380000, 263.11660000, 9.50430000};
    l_U561[80] = 0.00080000;
    l_U677[80] = -0.00060000;
    l_U793[80] = 0.03140000;
    l_U909[80] = 0.99950000;
    l_U1315[80] = 2855;
    l_U1025[80] = 174083.00000000;
    l_U1602[80] = 1349725314;
    l_U1750[81] = {-438.26740000, 264.30930000, 9.57209900};
    l_U561[81] = -0.00240000;
    l_U677[81] = -0.00230000;
    l_U793[81] = 0.70710000;
    l_U909[81] = 0.70710000;
    l_U1315[81] = 2856;
    l_U1025[81] = 174383.00000000;
    l_U1602[81] = 1777363799;
    l_U1750[82] = {-455.22680000, 265.55990000, 9.37330000};
    l_U561[82] = -0.01420000;
    l_U677[82] = 0.00650000;
    l_U793[82] = 0.84840000;
    l_U909[82] = 0.52910000;
    l_U1315[82] = 2857;
    l_U1025[82] = 174515.00000000;
    l_U1602[82] = -1685021548;
    l_U1750[83] = {-372.37270000, 461.62770000, 14.35350000};
    l_U561[83] = -0.02000000;
    l_U677[83] = -0.00130000;
    l_U793[83] = 0.99970000;
    l_U909[83] = -0.01190000;
    l_U1315[83] = 2913;
    l_U1025[83] = 180000.00000000;
    l_U1602[83] = -956048545;
    l_U1750[84] = {-366.47030000, 518.05620000, 14.63400000};
    l_U561[84] = 0.00180000;
    l_U677[84] = 0.00130000;
    l_U793[84] = 1.00000000;
    l_U909[84] = 0.00900000;
    l_U1315[84] = 2914;
    l_U1025[84] = 180000.00000000;
    l_U1602[84] = 2006918058;
    l_U1750[85] = {-367.10360000, 395.83140000, 14.61930000};
    l_U561[85] = 0.00070000;
    l_U677[85] = 0.00130000;
    l_U793[85] = 0.99970000;
    l_U909[85] = -0.02340000;
    l_U1315[85] = 2915;
    l_U1025[85] = 180000.00000000;
    l_U1602[85] = 2006918058;
    l_U1750[86] = {-366.71880000, 453.29140000, 14.43130000};
    l_U561[86] = -0.00500000;
    l_U677[86] = -0.00120000;
    l_U793[86] = 1.00000000;
    l_U909[86] = 0.00240000;
    l_U1315[86] = 0;
    l_U1025[86] = 180000.00000000;
    l_U1602[86] = -956048545;
    l_U1750[87] = {-355.52480000, 400.17470000, 14.34160000};
    l_U561[87] = -0.00000000;
    l_U677[87] = 0.00000000;
    l_U793[87] = 0.00000000;
    l_U909[87] = 1.00000000;
    l_U1315[87] = 2858;
    l_U1025[87] = 187972.00000000;
    l_U1602[87] = 1777363799;
    l_U1750[88] = {-360.82240000, 451.31730000, 14.39330000};
    l_U561[88] = 0.00000000;
    l_U677[88] = 0.00000000;
    l_U793[88] = -0.00000000;
    l_U909[88] = 1.00000000;
    l_U1315[88] = 2859;
    l_U1025[88] = 188913.00000000;
    l_U1602[88] = -956048545;
    l_U1750[89] = {-355.86610000, 451.40940000, 14.39670000};
    l_U561[89] = -0.00130000;
    l_U677[89] = -0.00010000;
    l_U793[89] = -0.00010000;
    l_U909[89] = 1.00000000;
    l_U1315[89] = 2860;
    l_U1025[89] = 188979.00000000;
    l_U1602[89] = -956048545;
    l_U1750[90] = {-366.17060000, 485.94230000, 14.63340000};
    l_U561[90] = -0.00000000;
    l_U677[90] = -0.00030000;
    l_U793[90] = 1.00000000;
    l_U909[90] = 0.00000000;
    l_U1315[90] = 2861;
    l_U1025[90] = 190759.00000000;
    l_U1602[90] = 2006918058;
    l_U1750[91] = {-372.42460000, 485.92430000, 14.31650000};
    l_U561[91] = 0.00010000;
    l_U677[91] = -0.00080000;
    l_U793[91] = 1.00000000;
    l_U909[91] = 0.00000000;
    l_U1315[91] = 2862;
    l_U1025[91] = 190825.00000000;
    l_U1602[91] = -2077743597;
    l_U1750[92] = {-372.37330000, 497.07560000, 14.31350000};
    l_U561[92] = -0.00030000;
    l_U677[92] = -0.00980000;
    l_U793[92] = 1.00000000;
    l_U909[92] = 0.00170000;
    l_U1315[92] = 2863;
    l_U1025[92] = 191683.00000000;
    l_U1602[92] = -2077743597;
    l_U1750[93] = {-372.35900000, 505.64970000, 14.42200000};
    l_U561[93] = -0.00030000;
    l_U677[93] = -0.00640000;
    l_U793[93] = 1.00000000;
    l_U909[93] = 0.00370000;
    l_U1315[93] = 2864;
    l_U1025[93] = 192145.00000000;
    l_U1602[93] = 1349725314;
    l_U1750[94] = {-356.21450000, 523.99240000, 14.32210000};
    l_U561[94] = -0.00160000;
    l_U677[94] = -0.00010000;
    l_U793[94] = -0.00000000;
    l_U909[94] = 1.00000000;
    l_U1315[94] = 2865;
    l_U1025[94] = 192871.00000000;
    l_U1602[94] = -2077743597;
    l_U1750[95] = {-360.69020000, 525.47170000, 14.61230000};
    l_U561[95] = 0.00280000;
    l_U677[95] = -0.00160000;
    l_U793[95] = 0.00000000;
    l_U909[95] = 1.00000000;
    l_U1315[95] = 2866;
    l_U1025[95] = 193326.00000000;
    l_U1602[95] = 2006918058;
    l_U1750[96] = {-359.16190000, 531.81710000, 14.35380000};
    l_U561[96] = 0.00090000;
    l_U677[96] = 0.00140000;
    l_U793[96] = 0.94670000;
    l_U909[96] = 0.32200000;
    l_U1315[96] = 2867;
    l_U1025[96] = 193812.00000000;
    l_U1602[96] = 1777363799;
    l_U1750[97] = {-365.96440000, 560.90020000, 14.57200000};
    l_U561[97] = 0.00000000;
    l_U677[97] = -0.00070000;
    l_U793[97] = 1.00000000;
    l_U909[97] = -0.00000000;
    l_U1315[97] = 2868;
    l_U1025[97] = 194670.00000000;
    l_U1602[97] = 1884962369;
    l_U1750[98] = {-371.42760000, 560.74360000, 14.60020000};
    l_U561[98] = 0.00010000;
    l_U677[98] = 0.00040000;
    l_U793[98] = 1.00000000;
    l_U909[98] = 0.00010000;
    l_U1315[98] = 2869;
    l_U1025[98] = 195255.00000000;
    l_U1602[98] = 1884962369;
    l_U1750[99] = {-360.46870000, 604.08470000, 14.35890000};
    l_U561[99] = -0.00640000;
    l_U677[99] = 0.00000000;
    l_U793[99] = 0.01060000;
    l_U909[99] = 0.99990000;
    l_U1315[99] = 2870;
    l_U1025[99] = 196839.00000000;
    l_U1602[99] = -2077743597;
    l_U1750[100] = {-356.22340000, 604.35390000, 14.35700000};
    l_U561[100] = -0.01470000;
    l_U677[100] = -0.00020000;
    l_U793[100] = 0.00890000;
    l_U909[100] = 0.99990000;
    l_U1315[100] = 2871;
    l_U1025[100] = 196839.00000000;
    l_U1602[100] = -2077743597;
    l_U1750[101] = {-362.47910000, 618.20510000, 14.37000000};
    l_U561[101] = 0.00770000;
    l_U677[101] = 0.00760000;
    l_U793[101] = 0.70710000;
    l_U909[101] = 0.70700000;
    l_U1315[101] = 2872;
    l_U1025[101] = 197631.00000000;
    l_U1602[101] = 1349725314;
    l_U1750[102] = {-348.75560000, 618.08530000, 14.50030000};
    l_U561[102] = 0.01320000;
    l_U677[102] = 0.00980000;
    l_U793[102] = 0.70710000;
    l_U909[102] = 0.70690000;
    l_U1315[102] = 2873;
    l_U1025[102] = 197697.00000000;
    l_U1602[102] = 2006918058;
    l_U1750[103] = {-340.28720000, 619.12830000, 14.30500000};
    l_U561[103] = 0.00050000;
    l_U677[103] = 0.00070000;
    l_U793[103] = 0.70170000;
    l_U909[103] = 0.71250000;
    l_U1315[103] = 2874;
    l_U1025[103] = 197763.00000000;
    l_U1602[103] = 1349725314;
    l_U1750[104] = {-363.42570000, 624.72420000, 14.54690000};
    l_U561[104] = 0.00390000;
    l_U677[104] = 0.00130000;
    l_U793[104] = 0.70730000;
    l_U909[104] = 0.70690000;
    l_U1315[104] = 2875;
    l_U1025[104] = 198143.00000000;
    l_U1602[104] = 2006918058;
    l_U1750[105] = {-350.97480000, 623.91190000, 14.22620000};
    l_U561[105] = 0.00430000;
    l_U677[105] = 0.00430000;
    l_U793[105] = 0.70710000;
    l_U909[105] = 0.70710000;
    l_U1315[105] = 2876;
    l_U1025[105] = 198790.00000000;
    l_U1602[105] = -2077743597;
    l_U1750[106] = {-365.69610000, 699.47450000, 14.26740000};
    l_U561[106] = 0.00060000;
    l_U677[106] = 0.00110000;
    l_U793[106] = 1.00000000;
    l_U909[106] = -0.00320000;
    l_U1315[106] = 2877;
    l_U1025[106] = 201666.00000000;
    l_U1602[106] = 1777363799;
    l_U1750[107] = {-385.06230000, 696.38590000, 14.24670000};
    l_U561[107] = -0.01710000;
    l_U677[107] = -0.01990000;
    l_U793[107] = 0.70690000;
    l_U909[107] = -0.70680000;
    l_U1315[107] = 2878;
    l_U1025[107] = 201732.00000000;
    l_U1602[107] = 1777363799;
    l_U1750[108] = {-386.17800000, 702.62700000, 14.25810000};
    l_U561[108] = -0.01920000;
    l_U677[108] = -0.01770000;
    l_U793[108] = -0.70680000;
    l_U909[108] = 0.70690000;
    l_U1315[108] = 2879;
    l_U1025[108] = 202317.00000000;
    l_U1602[108] = 1777363799;
    l_U1750[109] = {-355.84420000, 794.89490000, 14.49450000};
    l_U561[109] = -0.00510000;
    l_U677[109] = -0.00010000;
    l_U793[109] = 0.00080000;
    l_U909[109] = 1.00000000;
    l_U1315[109] = 2880;
    l_U1025[109] = 206226.00000000;
    l_U1602[109] = 1884962369;
    l_U1750[110] = {-361.06620000, 807.22820000, 14.26750000};
    l_U561[110] = -0.01580000;
    l_U677[110] = -0.00120000;
    l_U793[110] = 0.00320000;
    l_U909[110] = 0.99990000;
    l_U1315[110] = 2881;
    l_U1025[110] = 206840.00000000;
    l_U1602[110] = -2077743597;
    l_U1750[111] = {-354.88460000, 807.76040000, 14.55330000};
    l_U561[111] = 0.00490000;
    l_U677[111] = -0.00220000;
    l_U793[111] = -0.00050000;
    l_U909[111] = 1.00000000;
    l_U1315[111] = 2882;
    l_U1025[111] = 207016.00000000;
    l_U1602[111] = 2006918058;
    l_U1750[112] = {-365.62580000, 820.96630000, 14.27020000};
    l_U561[112] = 0.00000000;
    l_U677[112] = 0.00090000;
    l_U793[112] = 1.00000000;
    l_U909[112] = -0.00000000;
    l_U1315[112] = 2883;
    l_U1025[112] = 207527.00000000;
    l_U1602[112] = -2077743597;
    l_U1750[113] = {-367.01440000, 835.27510000, 14.37620000};
    l_U561[113] = 0.00000000;
    l_U677[113] = 0.00150000;
    l_U793[113] = 1.00000000;
    l_U909[113] = -0.00000000;
    l_U1315[113] = 2884;
    l_U1025[113] = 208147.00000000;
    l_U1602[113] = 1349725314;
    l_U1750[114] = {-372.37220000, 836.00060000, 14.55050000};
    l_U561[114] = 0.00210000;
    l_U677[114] = -0.00140000;
    l_U793[114] = 1.00000000;
    l_U909[114] = 0.00010000;
    l_U1315[114] = 2885;
    l_U1025[114] = 208212.00000000;
    l_U1602[114] = 2006918058;
    l_U2096[0] = {1010.50500000, -340.20210000, 18.84770000};
    l_U1181[0] = 0.03850000;
    l_U1207[0] = 0.01020000;
    l_U1233[0] = 0.23890000;
    l_U1259[0] = 0.97020000;
    l_U1718[0] = -956048545;
    l_U2096[1] = {142.37120000, -421.78810000, 14.27020000};
    l_U1181[1] = -0.00620000;
    l_U1207[1] = 0.00030000;
    l_U1233[1] = 0.00090000;
    l_U1259[1] = 1.00000000;
    l_U1718[1] = 525509695;
    l_U2096[2] = {137.37980000, -450.47890000, 14.32270000};
    l_U1181[2] = -0.00000000;
    l_U1207[2] = 0.00890000;
    l_U1233[2] = 1.00000000;
    l_U1259[2] = 0.00070000;
    l_U1718[2] = 83136452;
    l_U2096[3] = {90.76730000, -404.73200000, 14.30110000};
    l_U1181[3] = 0.00040000;
    l_U1207[3] = 0.00060000;
    l_U1233[3] = 0.70680000;
    l_U1259[3] = 0.70750000;
    l_U1718[3] = -956048545;
    l_U2096[4] = {352.85750000, -399.81710000, 4.33890000};
    l_U1181[4] = 0.00110000;
    l_U1207[4] = 0.00050000;
    l_U1233[4] = 1.00000000;
    l_U1259[4] = 0.00610000;
    l_U1718[4] = 1917016601;
    l_U2096[5] = {363.04020000, -410.38040000, 4.29310000};
    l_U1181[5] = 0.00000000;
    l_U1207[5] = 0.00460000;
    l_U1233[5] = 1.00000000;
    l_U1259[5] = 0.00240000;
    l_U1718[5] = 1917016601;
    l_U2096[6] = {353.68750000, -371.75130000, 4.42050000};
    l_U1181[6] = -0.00010000;
    l_U1207[6] = 0.00460000;
    l_U1233[6] = 0.99980000;
    l_U1259[6] = -0.01750000;
    l_U1718[6] = 1917016601;
    l_U2096[7] = {316.97850000, -342.39710000, 4.44120000};
    l_U1181[7] = 0.00500000;
    l_U1207[7] = 0.00520000;
    l_U1233[7] = 0.70380000;
    l_U1259[7] = 0.71030000;
    l_U1718[7] = 1917016601;
    l_U2096[8] = {291.72740000, -351.85420000, 4.84100000};
    l_U1181[8] = 0.00000000;
    l_U1207[8] = 0.00000000;
    l_U1233[8] = 0.99990000;
    l_U1259[8] = -0.01270000;
    l_U1718[8] = 1938952078;
    l_U2096[9] = {161.24820000, -209.34410000, 14.30470000};
    l_U1181[9] = -0.00830000;
    l_U1207[9] = 0.00530000;
    l_U1233[9] = -0.52990000;
    l_U1259[9] = 0.84800000;
    l_U1718[9] = 525509695;
    l_U2096[12] = {-128.62050000, -283.47680000, 13.83100000};
    l_U1181[12] = -0.06629999;
    l_U1207[12] = 0.00020000;
    l_U1233[12] = -0.00040000;
    l_U1259[12] = 0.99780000;
    l_U1718[12] = 1884962369;
    l_U2096[13] = {-124.18180000, -306.75710000, 14.33290000};
    l_U1181[13] = -0.00660000;
    l_U1207[13] = -0.02550000;
    l_U1233[13] = -0.55510000;
    l_U1259[13] = 0.83140000;
    l_U1718[13] = 1349725314;
    l_U2096[15] = {-282.60050000, -237.26870000, 13.95340000};
    l_U1181[15] = -0.00520000;
    l_U1207[15] = -0.00550000;
    l_U1233[15] = 0.70710000;
    l_U1259[15] = 0.70710000;
    l_U1718[15] = 525509695;
    l_U2096[16] = {-281.70910000, -230.85640000, 14.01830000};
    l_U1181[16] = -0.02440000;
    l_U1207[16] = 0.01260000;
    l_U1233[16] = 0.70670000;
    l_U1259[16] = 0.70700000;
    l_U1718[16] = 525509695;
    l_U2096[17] = {-270.61940000, -236.69990000, 14.24620000};
    l_U1181[17] = 0.00050000;
    l_U1207[17] = 0.00070000;
    l_U1233[17] = 0.64209990;
    l_U1259[17] = 0.76670000;
    l_U1718[17] = 1884962369;
    l_U2096[18] = {-278.24860000, -234.18310000, 14.04300000};
    l_U1181[18] = -0.00640000;
    l_U1207[18] = -0.00460000;
    l_U1233[18] = 0.82480000;
    l_U1259[18] = 0.56540000;
    l_U1718[18] = 525509695;
    l_U2096[19] = {-374.53990000, 650.67500000, 14.09130000};
    l_U1181[19] = -0.02620000;
    l_U1207[19] = 0.00000000;
    l_U1233[19] = 0.99970000;
    l_U1259[19] = -0.00000000;
    l_U1718[19] = -2077743597;
    l_U2096[20] = {-374.51030000, 679.51700000, 14.09320000};
    l_U1181[20] = -0.02590000;
    l_U1207[20] = 0.00020000;
    l_U1233[20] = 0.99970000;
    l_U1259[20] = -0.00210000;
    l_U1718[20] = -2077743597;
    l_U2096[21] = {-374.51680000, 668.49740000, 14.17910000};
    l_U1181[21] = -0.01550000;
    l_U1207[21] = 0.00580000;
    l_U1233[21] = 0.99960000;
    l_U1259[21] = 0.02120000;
    l_U1718[21] = 1349725314;
    l_U2096[22] = {-365.84170000, 711.29540000, 14.34820000};
    l_U1181[22] = 0.00000000;
    l_U1207[22] = 0.00610000;
    l_U1233[22] = 1.00000000;
    l_U1259[22] = 0.00000000;
    l_U1718[22] = -956048545;
    l_U2096[23] = {-365.85350000, 719.89220000, 14.49100000};
    l_U1181[23] = 0.00040000;
    l_U1207[23] = 0.00090000;
    l_U1233[23] = 1.00000000;
    l_U1259[23] = -0.00600000;
    l_U1718[23] = 1884962369;
    l_U2096[24] = {-360.63630000, 732.32610000, 14.34930000};
    l_U1181[24] = 0.00660000;
    l_U1207[24] = 0.00040000;
    l_U1233[24] = -0.00040000;
    l_U1259[24] = 1.00000000;
    l_U1718[24] = -956048545;
    l_U2172[0] = {142.83030000, -508.77120000, 14.54830000};
    l_U1145[0] = -0.00040000;
    l_U1151[0] = 0.01720000;
    l_U1157[0] = -0.00080000;
    l_U1163[0] = 0.99990000;
    l_U1547[0] = 2898;
    l_U1169[0] = 58000.00000000;
    l_U1175[0] = 1.00000000;
    l_U1744[0] = 1348744438;
    l_U2172[1] = {140.43150000, -313.61980000, 14.39680000};
    l_U1145[1] = 0.00830000;
    l_U1151[1] = -0.00450000;
    l_U1157[1] = -0.69930000;
    l_U1163[1] = 0.71480000;
    l_U1547[1] = 2902;
    l_U1169[1] = 85000.00000000;
    l_U1175[1] = 1.00000000;
    l_U1744[1] = -956048545;
    l_U2172[2] = {130.25720000, -104.01570000, 14.17250000};
    l_U1145[2] = -0.01830000;
    l_U1151[2] = -0.00210000;
    l_U1157[2] = 0.99240000;
    l_U1163[2] = -0.12200000;
    l_U1547[2] = 2903;
    l_U1169[2] = 95000.00000000;
    l_U1175[2] = 1.00000000;
    l_U1744[2] = 974744810;
    l_U2172[3] = {-96.26300000, -162.77760000, 14.36680000};
    l_U1145[3] = -0.00890000;
    l_U1151[3] = -0.01150000;
    l_U1157[3] = -0.70529990;
    l_U1163[3] = 0.70880000;
    l_U1547[3] = 2904;
    l_U1169[3] = 108000.00000000;
    l_U1175[3] = 1.00000000;
    l_U1744[3] = -956048545;
    l_U2172[4] = {-366.71880000, 453.29140000, 14.43130000};
    l_U1145[4] = -0.00500000;
    l_U1151[4] = -0.00120000;
    l_U1157[4] = 1.00000000;
    l_U1163[4] = 0.00240000;
    l_U1547[4] = 2922;
    l_U1169[4] = 180000.00000000;
    l_U1175[4] = 1.00000000;
    l_U1744[4] = -956048545;
    if (NOT (IS_CAR_DEAD( l_U2383 )))
    {
        START_PLAYBACK_RECORDED_CAR( l_U2383, 2949 );
        SET_CAR_STRONG( l_U2383, 1 );
    }
    GET_CAR_CHAR_IS_USING( sub_3201(), ref uVar2 );
    SET_CAR_STRONG( uVar2, 1 );
    l_U2433 = 1;
    return;
}

void sub_39016(boolean bParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    l_U512 = 1;
    l_U522 = 0;
    l_U1585 = 0;
    l_U1586 = 0;
    l_U1587 = 0;
    l_U1588 = 0;
    l_U1589 = 1;
    l_U1590 = 0;
    l_U1591 = 0;
    l_U1592 = 0;
    l_U1593 = 0;
    l_U1594 = -1;
    l_U1595 = 0;
    l_U1596 = 0;
    l_U1597 = 0;
    l_U1598 = 0;
    l_U1295 = 0.00000000;
    l_U525 = 0;
    if (IS_PLAYER_PLAYING( sub_3083() ))
    {
        GET_CHAR_COORDINATES( sub_3201(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        l_U2194._fU0 = uVar4._fU0 - 100.00000000;
        l_U2194._fU4 = uVar4._fU4 - 100.00000000;
        l_U2194._fU8 = uVar4._fU8 - 100.00000000;
        l_U2197._fU0 = uVar4._fU0 + 100.00000000;
        l_U2197._fU4 = uVar4._fU4 + 100.00000000;
        l_U2197._fU8 = uVar4._fU8 + 100.00000000;
        SWITCH_ROADS_OFF( l_U2194._fU0, l_U2194._fU4, l_U2194._fU8, l_U2197._fU0, l_U2197._fU4, l_U2197._fU8 );
        if (bParam0)
        {
            CLEAR_AREA_OF_CARS( uVar4._fU0, uVar4._fU4, uVar4._fU8, 500.00000000 );
        }
    }
    sub_39357();
    l_U524 = 0;
    if (IS_PLAYER_PLAYING( sub_3083() ))
    {
        DONT_DISPATCH_COPS_FOR_PLAYER( sub_3083(), 1 );
        SET_CREATE_RANDOM_COPS( 0 );
    }
    sub_20934();
    return;
}

void sub_39357()
{
    ADD_SCENARIO_BLOCKING_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000, 0 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    return;
}

void sub_39548()
{
    unknown uVar2;

    uVar2 = CREATE_WIDGET_GROUP( "Uber Recording Speed Control" );
    ADD_WIDGET_FLOAT_SLIDER( "PlybkSpd", ref l_U2435, 0, 10, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "IdealChsDst", ref l_U2436, 0, 300, 10.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "MnChseDst", ref l_U2437, 0, 200, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "DfltPlybkSpd", ref l_U2438, 0, 10, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "SlwDwnSped", ref l_U2439, 0, 300, 1.00000000 );
    END_WIDGET_GROUP();
    return;
}

void sub_57159()
{
    if ((NOT l_U2431) AND (NOT (IS_CHAR_DEAD( l_U2381 ))))
    {
        GET_CHAR_COORDINATES( l_U2381, ref l_U2420._fU0, ref l_U2420._fU4, ref l_U2420._fU8 );
        if ((NOT (IS_CHAR_ON_SCREEN( l_U2381 ))) AND (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3201(), l_U2420._fU0, l_U2420._fU4, l_U2420._fU8, 165.00000000, 165.00000000, 165.00000000, 0 ))))
        {
            CLEAR_SMALL_PRINTS();
            sub_57300( 0 );
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3201(), l_U2420._fU0, l_U2420._fU4, l_U2420._fU8, 140.00000000, 140.00000000, 140.00000000, 0 )))
        {
            if (l_U2434 == 5)
            {
                sub_18016( "KB_DISTANCE2", 1000 );
            }
            else
            {
                sub_18016( "KB_DISTANCE1", 1000 );
            }
        }
    }
    return;
}

void sub_57300(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_NOW( "F_OLEGLOST", 7000, 1 );
        sub_15580( 12, "C1_AWAY", "C1AUD", 0 );
        break;
        default:
    }
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3083(), 150 );
        SAY_AMBIENT_SPEECH( sub_3201(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_57442();
    sub_2932();
    return;
}

void sub_57442()
{
    sub_57451();
    return;
}

void sub_57451()
{
    int iVar2;

    iVar2 = 12;
    sub_57465( iVar2 );
    sub_2021( iVar2 );
    return;
}

void sub_57465(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3083(), 150 );
    CLEAR_HELP();
    sub_845( uParam0 );
    return;
}

void sub_58156(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3, float fParam4, float fParam5, float fParam6, unknown uParam7, float fParam8, unknown uParam9, boolean bParam10)
{
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;

    if (l_U525 == 0)
    {
        if ((uParam2^) < fParam3)
        {
            (uParam2^) = fParam3;
            l_U525 = 1;
        }
    }
    if (fParam4 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist cannot be less than zero." );
    }
    if (fParam4 >= fParam5)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( ", fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist must be less than fIdealDist" );
    }
    if (fParam4 >= fParam6)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( ", fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist must be less than fSlowDownDist" );
    }
    if (fParam5 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist cannot be less than zero." );
    }
    if (fParam5 >= fParam6)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( ", fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist must be less than fSlowDownDist" );
    }
    if (fParam6 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fSlowDownDist cannot be less than zero." );
    }
    if (fParam8 < 0.00000000)
    {
        fParam8 = l_U1307;
    }
    fVar13 = fParam3 * uParam7;
    if (NOT (fVar13 > fParam3))
    {
        fVar13 = fParam3 + 0.10000000;
    }
    fVar18 = fParam3 * uParam9;
    fVar19 = ((fParam6 - fParam5) * 0.40000000) + fParam5;
    fVar15 = sub_59494( uParam0, uParam1 );
    if (fVar15 < 0.00000000)
    {
        fVar15 *= -1.00000000;
    }
    fVar16 = fVar15;
    if (fVar16 < fParam4)
    {
        fVar16 = fParam4;
    }
    if (fVar16 > fVar19)
    {
        fVar16 = fVar19;
    }
    fVar17 = fParam3;
    if (DOES_CHAR_EXIST( uParam1 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (sub_59821( uParam1, uParam0 ))
            {
                if (IS_CHAR_IN_ANY_CAR( uParam1 ))
                {
                    fVar17 = fVar13;
                }
                else if (fVar15 < 50.00000000)
                {
                    fVar17 = fParam3;
                }
                else
                {
                    fVar17 = fVar13;
                }
            }
            else if (fVar15 < fParam5)
            {
                if ((sub_60204( uParam0, uParam1 )) < fParam5)
                {
                    fVar14 = sub_60337( uParam0, uParam1 );
                    fVar14 += -15.00000000;
                    if (fVar14 < 0.00000000)
                    {
                        fVar14 = 0.00000000;
                    }
                    if (fVar14 > 75.00000000)
                    {
                        fVar14 = 75.00000000;
                    }
                    fVar20 = (75.00000000 - fVar14) / 75.00000000;
                }
                else
                {
                    fVar20 = 1.00000000;
                }
                fVar17 = (((((fParam5 - fParam4) - (fVar16 - fParam4)) / (fParam5 - fParam4)) * (fVar13 - fParam3)) * fVar20) + fParam3;
            }
            else if (fVar15 > fParam6)
            {
                fVar17 = fVar18;
                l_U526 = 1;
            }
            else if (l_U526)
            {
                if (fVar15 < fVar19)
                {
                    fVar17 = fParam3;
                    l_U526 = 0;
                }
                else
                {
                    fVar17 = fVar18;
                }
            }
            else
            {
                fVar17 = fParam3;
            };;;;
        }
    }
    fVar14 = fVar17 - (uParam2^);
    if (fVar14 > 0.00000000)
    {
        GET_FRAME_TIME( ref fVar14 );
        fVar21 = (l_U1312 * fParam3) * fVar14;
        fVar14 = fVar17 - (uParam2^);
        if (fVar14 > fVar21)
        {
            fVar14 = fVar21;
        }
        (uParam2^) += fVar14;
    }
    else
    {
        GET_FRAME_TIME( ref fVar14 );
        fVar21 = (l_U1313 * fParam3) * fVar14;
        fVar14 = fVar17 - (uParam2^);
        if (fVar14 < (fVar21 * -1.00000000))
        {
            fVar14 = fVar21 * -1.00000000;
        }
        (uParam2^) += fVar14;
    }
    if (bParam10)
    {
        if (NOT (IS_CHAR_INJURED( uParam1 )))
        {
            if (IS_CHAR_IN_ANY_CAR( uParam1 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar22 );
                if (DOES_VEHICLE_EXIST( uVar22 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar22 )))
                    {
                        GET_CAR_MODEL( uVar22, ref uVar23 );
                        if ((IS_THIS_MODEL_A_BIKE( uVar23 )) || (IS_THIS_MODEL_A_CAR( uVar23 )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar22 ))
                            {
                                fVar14 = fVar17;
                                if (fVar14 < fParam3)
                                {
                                    fVar14 = fParam3;
                                }
                                fVar14 -= fParam3;
                                fVar14 /= fVar13 - fParam3;
                                fVar14 *= fParam8;
                                fVar14 *= l_U1305 - l_U1306;
                                fVar14 += l_U1306;
                                l_U1304 = fVar14;
                                if (l_U1304 < l_U1306)
                                {
                                    l_U1304 = l_U1306;
                                }
                                if (l_U1304 > l_U1305)
                                {
                                    l_U1304 = l_U1305;
                                }
                                FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( sub_3083(), l_U1304 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

float sub_59494(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

int sub_59821(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CAR_DEAD( uParam1 )))
        {
            if (IS_CHAR_IN_CAR( uParam0, uParam1 ))
            {
                return 0;
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_60042( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

float sub_60042(int iParam0, int iParam1)
{
    return ((iParam0->_fU0 * iParam1->_fU0) + (iParam0->_fU4 * iParam1->_fU4)) + (iParam0->_fU8 * iParam1->_fU8);
}

void sub_60204(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown Result;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    uVar10._fU8 = 0.00000000;
    Result = VMAG( uVar10 );
    return Result;
}

void sub_60337(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown Result;
    unknown uVar17;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
        if (IS_CHAR_IN_ANY_CAR( uParam1 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar17 );
            GET_CAR_FORWARD_X( uVar17, ref uVar13._fU0 );
            GET_CAR_FORWARD_Y( uVar17, ref uVar13._fU4 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
            uVar13 = {vVar10 - vVar7};
        }
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar4._fU0, uVar4._fU4, uVar13._fU0, uVar13._fU4, ref Result );
    return Result;
}

void sub_61253(unknown uParam0, float fParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    int iVar10;

    GET_FRAME_TIME( ref fVar5 );
    fVar5 *= 1000.00000000;
    l_U2377 += fVar5;
    l_U2378 += fVar5;
    l_U2379 += fVar5;
    l_U1303 = fParam1;
    if (NOT l_U515)
    {
        if (l_U514)
        {
            sub_39357();
            l_U524 = 0;
            if (IS_PLAYER_PLAYING( sub_3083() ))
            {
                GET_CHAR_COORDINATES( sub_3201(), ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                CLEAR_AREA( uVar6._fU0, uVar6._fU4, uVar6._fU8, 1000.00000000, 1 );
                PRINTSTRING( "UPDATE_UBER_PLAYBACK - called massive clear area! \n" );
            }
            l_U515 = 1;
        }
    }
    else if (NOT l_U514)
    {
        sub_19067();
        l_U524 = 1;
        l_U515 = 0;
    }
    if (l_U514)
    {
        fParam1 = 1.00000000;
    }
    if (NOT l_U505)
    {
        if (l_U496)
        {
            l_U1298 = 0.00000000;
        }
        else
        {
            l_U1298 = 1.00000000;
        }
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                if (IS_PLAYER_PLAYING( sub_3083() ))
                {
                    if (sub_59821( sub_3201(), uParam0 ))
                    {
                        l_U513 = 1;
                    }
                    else
                    {
                        l_U513 = 0;
                    }
                }
                l_U1295 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                l_U1594 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                SET_PLAYBACK_SPEED( uParam0, (fParam1 * l_U1296) * l_U1298 );
                if (l_U500)
                {
                    # -NULL-0xbfc99f( uParam0, 1 );
                }
                else
                {
                    # -NULL-0xbfc99f( uParam0, 0 );
                }
                if (l_U512)
                {
                    if (l_U1301 > 1000.00000000)
                    {
                        sub_61782( uParam0, l_U1295 );
                        sub_62277( uParam0, 100.00000000 );
                        for ( I = 0; I < 3; I++ )
                        {
                            fVar5 = TO_FLOAT( I );
                            fVar5 *= 2000.00000000;
                            fVar5 += l_U1295;
                            fVar5 += 4000.00000000;
                            sub_62503( uParam0, fVar5, l_U1300 );
                        }
                        l_U1301 = 0.00000000;
                    }
                    else
                    {
                        GET_FRAME_TIME( ref fVar5 );
                        fVar5 *= 1000.00000000;
                        l_U1301 += fVar5;
                    }
                }
            }
        }
        iVar10 = 0;
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                iVar10 = 1;
            }
        }
        if ((IS_SCREEN_FADED_OUT()) || (l_U1295 == 0))
        {
            iVar10 = 1;
        }
        if ((NOT l_U527) AND (iVar10))
        {
            if (NOT l_U493)
            {
                sub_63135( uParam0, (fParam1 * l_U1296) * l_U1298 );
                sub_68594( ref uParam0 );
                sub_69158( ref uParam0 );
            }
            if (l_U498)
            {
                sub_69671( uParam0 );
            }
            if (NOT l_U493)
            {
                sub_70617( uParam0, (fParam1 * l_U1296) * l_U1298 );
            }
        }
        if (l_U507)
        {
            if (IS_PLAYER_PLAYING( sub_3083() ))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3201() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3201(), ref l_U2371 );
                    GET_CAR_COORDINATES( l_U2371, ref l_U2188._fU0, ref l_U2188._fU4, ref l_U2188._fU8 );
                    GET_VEHICLE_QUATERNION( l_U2371, ref l_U1141, ref l_U1142, ref l_U1143, ref l_U1144 );
                }
            }
            l_U507 = 0;
        }
        if (l_U506)
        {
            if (DOES_VEHICLE_EXIST( l_U2371 ))
            {
                sub_19833( l_U2372 );
                l_U2372 = l_U2371;
            }
            if (IS_VEH_DRIVEABLE( l_U2372 ))
            {
                SET_CAR_COORDINATES( l_U2372, l_U2188._fU0, l_U2188._fU4, l_U2188._fU8 );
                SET_VEHICLE_QUATERNION( l_U2372, l_U1141, l_U1142, l_U1143, l_U1144 );
            }
            l_U1294 = l_U1297;
            l_U493 = 1;
            l_U506 = 0;
        }
        if (l_U493)
        {
            while (NOT (sub_74341( ref uParam0, l_U1294 )))
            {
                WAIT( 0 );
            }
            l_U496 = 1;
        }
    }
    return;
}

void sub_61782(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    vVar6 = {99999.90000000, 99999.90000000, 99999.90000000};
    vVar9 = {-99999.90000000, -99999.90000000, -99999.90000000};
    sub_19239();
    for ( I = 0; I < 15; I++ )
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1 + ((TO_FLOAT( I - 1 )) * 2000), ref uVar12 );
                if (uVar12._fU0 < vVar6.x)
                {
                    vVar6.x = uVar12._fU0;
                }
                if (uVar12._fU4 < vVar6.y)
                {
                    vVar6.y = uVar12._fU4;
                }
                if (uVar12._fU8 < vVar6.z)
                {
                    vVar6.z = uVar12._fU8;
                }
                if (uVar12._fU0 > vVar9.x)
                {
                    vVar9.x = uVar12._fU0;
                }
                if (uVar12._fU4 > vVar9.y)
                {
                    vVar9.y = uVar12._fU4;
                }
                if (uVar12._fU8 > vVar9.z)
                {
                    vVar9.z = uVar12._fU8;
                }
            }
        }
    }
    vVar6 = {vVar6 + (vector( l_U1314 * -1.00000000, l_U1314 * -1.00000000, l_U1314 * -1.00000000))};
    vVar9 = {vVar9 + (vector( l_U1314, l_U1314, l_U1314))};
    l_U2200 = {vVar6};
    l_U2203 = {vVar9};
    SWITCH_ROADS_OFF( l_U2194._fU0, l_U2194._fU4, l_U2194._fU8, l_U2197._fU0, l_U2197._fU4, l_U2197._fU8 );
    SWITCH_ROADS_OFF( l_U2200._fU0, l_U2200._fU4, l_U2200._fU8, l_U2203._fU0, l_U2203._fU4, l_U2203._fU8 );
    return;
}

void sub_62277(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT l_U515)
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_PLAYER_PLAYING( sub_3083() ))
            {
                GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                GET_CHAR_COORDINATES( sub_3201(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
                uVar10 = {vVar4 - vVar7};
                if ((VMAG2( uVar10 )) > (uParam1 * uParam1))
                {
                    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                }
                else
                {
                    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_62503(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
        {
            uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
            GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1, ref vVar6 );
            GET_CAR_COORDINATES( uParam0, ref vVar9.x, ref vVar9.y, ref vVar9.z );
            uVar12 = {vVar9 - vVar6};
            fVar15 = VMAG( uVar12 );
            if (fVar15 > fParam2)
            {
                fVar15 = fParam2;
            }
            sub_62632( vVar6, fVar15 );
        }
    }
    return;
}

void sub_62632(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    boolean bVar6;
    unknown uVar7;

    if (NOT l_U515)
    {
        if (NOT (sub_62662( uParam0, uParam3, 150.00000000 )))
        {
            bVar6 = true;
            if (IS_PLAYER_PLAYING( sub_3083() ))
            {
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar7 )))
                    {
                        if (LOCATE_CAR_3D( uVar7, uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3, uParam3, uParam3, 0 ))
                        {
                            bVar6 = false;
                        }
                    }
                }
            }
            if (bVar6)
            {
                CLEAR_AREA_OF_CARS( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3 );
            }
        }
    }
    return;
}

int sub_62662(vector vParam0, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT l_U515)
        {
            if (NOT l_U493)
            {
                GET_GAME_VIEWPORT_ID( ref uVar7 );
                if (CAM_IS_SPHERE_VISIBLE( uVar7, vParam0.x, vParam0.y, vParam0.z, uParam3 ))
                {
                    if (IS_PLAYER_PLAYING( sub_3083() ))
                    {
                        GET_CHAR_COORDINATES( sub_3201(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
                        uVar11 = {vVar8 - vParam0};
                        if (((VMAG( uVar11 )) - uParam3) < fParam4)
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

void sub_63135(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    unknown uVar15;
    boolean bVar16;
    boolean bVar17;
    int iVar18;

    l_U1596 = 0;
    iVar5 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 115; I++ )
        {
            if (I < l_U1595)
            {
                I = l_U1595;
            }
            if (l_U1431[I] == 0)
            {
                if ((NOT (l_U1602[I] == 0)) AND ((l_U1315[I] < 3000) AND (l_U1315[I] > 0)))
                {
                    if (NOT l_U493)
                    {
                        if (l_U1295 > (l_U1025[I] - (7000.00000000 * uParam1)))
                        {
                            l_U1601++;
                            l_U1431[I]++;
                        }
                        else if (iVar5 > 3)
                        {
                            return;
                        }
                        else
                        {
                            iVar5++;
                        }
                    }
                    else
                    {
                        fVar14 = l_U1295 - l_U1025[I];
                        if (fVar14 >= 0.00000000)
                        {
                            if (fVar14 < (sub_63409( l_U1315[I] )))
                            {
                                l_U1601++;
                                l_U1431[I]++;
                            }
                            else
                            {
                                sub_63535( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    sub_63535( I, 1090519040 );
                }
            }
            if (l_U1431[I] == 1)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1315[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U1315[I] );
                }
                else if (l_U1602[I] == sub_19467())
                {
                    if (HAS_MODEL_LOADED( sub_19496() ))
                    {
                        l_U1431[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_19496() );
                    }
                }
                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    l_U1431[I]++;
                }
                else if (HAS_MODEL_LOADED( sub_19409() ))
                {
                    l_U1431[I]++;
                }
                else
                {
                    REQUEST_MODEL( sub_19409() );
                };;;;
            }
            if (l_U1431[I] == 2)
            {
                if (HAS_MODEL_LOADED( l_U1602[I] ))
                {
                    if (NOT (DOES_VEHICLE_EXIST( l_U2206[I] )))
                    {
                        bVar16 = false;
                        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                        {
                            bVar16 = true;
                        }
                        else if (HAS_MODEL_LOADED( sub_19409() ))
                        {
                            bVar16 = true;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_19409() );
                        }
                        if (bVar16)
                        {
                            bVar17 = false;
                            if ((NOT (sub_64451( l_U1750[I] ))) AND (NOT (sub_62662( l_U1750[I], 5.00000000, 1120403456 ))))
                            {
                                bVar17 = true;
                            }
                            if (l_U519)
                            {
                                bVar17 = true;
                            }
                            if (bVar17)
                            {
                                if (l_U512)
                                {
                                    sub_62632( l_U1750[I], l_U1300 );
                                }
                                CREATE_CAR( l_U1602[I], l_U1750[I]._fU0, l_U1750[I]._fU4, l_U1750[I]._fU8, ref l_U2206[I], 1 );
                                if (l_U1602[I] == sub_19467())
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U2206[I], 6, sub_19496(), ref uVar6 );
                                    SET_CHAR_RELATIONSHIP_GROUP( uVar6, 23 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_19496() );
                                }
                                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                {
                                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U2206[I], ref uVar6 );
                                }
                                else
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U2206[I], 4, sub_19409(), ref uVar6 );
                                    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_19409() );
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar6, 1 );
                                SET_VEHICLE_QUATERNION( l_U2206[I], l_U561[I], l_U677[I], l_U793[I], l_U909[I] );
                                FREEZE_CAR_POSITION( l_U2206[I], 1 );
                                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U2206[I], 1 );
                                SET_CAR_COLLISION( l_U2206[I], 0 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1602[I] );
                                sub_64975( l_U2206[I] );
                                GET_INTERIOR_FROM_CAR( l_U2206[I], ref iVar18 );
                                if (NOT (iVar18 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U2206[I] );
                                }
                                l_U1601--;
                                l_U1431[I]++;
                            }
                            else if (l_U1295 > l_U1025[I])
                            {
                                l_U1601--;
                                sub_63535( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    REQUEST_MODEL( l_U1602[I] );
                }
            }
            if (l_U1431[I] == 3)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1315[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U1315[I] );
                }
                if (IS_VEH_DRIVEABLE( l_U2206[I] ))
                {
                    if (l_U1295 > l_U1025[I])
                    {
                        if (14 > l_U1585)
                        {
                            if (IS_VEH_DRIVEABLE( uParam0 ))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                {
                                    l_U1295 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                }
                            }
                            fVar14 = l_U1295 - l_U1025[I];
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1315[I] ))
                            {
                                if (fVar14 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1315[I] )))
                                {
                                    GET_CAR_COORDINATES( l_U2206[I], ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                                    GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U1315[I], fVar14, ref uVar11 );
                                    if ((sub_62662( uVar11, 5.00000000, 1120403456 )) AND (NOT (sub_62662( uVar8, 5.00000000, 1120403456 ))))
                                    {
                                        sub_63535( I, 1090519040 );
                                    }
                                    else if (sub_65564( ref l_U2206[I], l_U1315[I], fVar14, 1, 0, 0 ))
                                    {
                                        SET_CAR_COLLISION( l_U2206[I], 1 );
                                        SET_PLAYBACK_SPEED( l_U2206[I], uParam1 );
                                        sub_65930( ref l_U2206[I] );
                                        l_U1585++;
                                        l_U1431[I]++;
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "Traffic car removed from processing (check A) car = " );
                                    PRINTINT( I );
                                    PRINTSTRING( "/n" );
                                    sub_63535( I, 1090519040 );
                                }
                            }
                        }
                        else
                        {
                            PRINTSTRING( "Traffic car removed from processing (check B) car = " );
                            PRINTINT( I );
                            PRINTSTRING( "/n" );
                            sub_63535( I, 1090519040 );
                        }
                    }
                    else if ((NOT l_U528) AND (l_U513))
                    {
                        PRINTSTRING( "Traffic car removed from processing (check C) car = " );
                        PRINTINT( I );
                        PRINTSTRING( "/n" );
                        sub_63535( I, 1090519040 );
                    }
                }
                else
                {
                    PRINTSTRING( "Traffic car removed from processing (check D) car = " );
                    PRINTINT( I );
                    PRINTSTRING( "/n" );
                    sub_63535( I, 1090519040 );
                }
            }
            if (l_U1431[I] == 4)
            {
                if (IS_VEH_DRIVEABLE( l_U2206[I] ))
                {
                    SET_CAR_COLLISION( l_U2206[I], 1 );
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2206[I] ))
                    {
                        GET_DRIVER_OF_CAR( l_U2206[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                if (IS_PLAYER_PLAYING( sub_3083() ))
                                {
                                    if ((NOT l_U508) AND ((NOT l_U496) AND ((NOT l_U499) AND (IS_CHAR_TOUCHING_VEHICLE( sub_3201(), l_U2206[I] )))))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( sub_3201() ))
                                        {
                                            bVar16 = false;
                                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3201(), ref uVar7 );
                                            if (NOT (sub_66788( l_U2206[I], uVar7 )))
                                            {
                                                bVar16 = true;
                                            }
                                            if (NOT bVar16)
                                            {
                                                if (sub_66950( uVar7, l_U2206[I] ))
                                                {
                                                    bVar16 = true;
                                                }
                                            }
                                            if (bVar16)
                                            {
                                                sub_67181( l_U2206[I] );
                                                l_U1431[I]++;
                                            }
                                        }
                                    }
                                    else if (sub_66950( l_U2206[I], uParam0 ))
                                    {
                                        SET_PLAYBACK_SPEED( l_U2206[I], uParam1 );
                                    }
                                    else if ((NOT l_U508) AND (sub_67308( uParam0, l_U2206[I] )))
                                    {
                                        sub_67181( l_U2206[I] );
                                        l_U1431[I]++;
                                    }
                                    else
                                    {
                                        SET_PLAYBACK_SPEED( l_U2206[I], uParam1 );
                                    }
                                    if (l_U501)
                                    {
                                        # -NULL-0xbfc99f( l_U2206[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U2206[I], 0 );
                                    }
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U2206[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U2206[I] );
                        }
                    }
                    else
                    {
                        l_U1431[I]++;
                    }
                }
                else
                {
                    l_U1431[I]++;
                }
            }
            if (l_U1431[I] == 5)
            {
                if (IS_VEH_DRIVEABLE( l_U2206[I] ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2206[I] )))
                    {
                        l_U1431[I]++;
                    }
                    else
                    {
                        GET_DRIVER_OF_CAR( l_U2206[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                SET_PLAYBACK_SPEED( l_U2206[I], uParam1 );
                                if (l_U501)
                                {
                                    # -NULL-0xbfc99f( l_U2206[I], 1 );
                                }
                                else
                                {
                                    # -NULL-0xbfc99f( l_U2206[I], 0 );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U2206[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U2206[I] );
                        }
                        if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1315[I] ))
                        {
                            if (l_U1295 > (l_U1025[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1315[I] ))))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U2206[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U2206[I] );
                        }
                    }
                }
                else
                {
                    l_U1431[I]++;
                }
            }
            if (l_U1431[I] == 6)
            {
                if (NOT (IS_CAR_DEAD( l_U2206[I] )))
                {
                    GET_CAR_SPEED( l_U2206[I], ref uVar15 );
                }
                sub_68421( ref l_U2206[I] );
                l_U1585--;
                sub_63535( I, uVar15 );
            }
            l_U1596++;
        }
    }
    else
    {
        sub_19542();
    }
    return;
}

void sub_63409(unknown uParam0)
{
    unknown Result;

    REQUEST_CAR_RECORDING( uParam0 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( uParam0 )))
    {
        WAIT( 0 );
    }
    Result = GET_TOTAL_DURATION_OF_CAR_RECORDING( uParam0 );
    REMOVE_CAR_RECORDING( uParam0 );
    return Result;
}

void sub_63535(int iParam0, float fParam1)
{
    int I;
    unknown uVar5;

    if (NOT (l_U1602[iParam0] == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1602[iParam0] );
    }
    if (DOES_VEHICLE_EXIST( l_U2206[iParam0] ))
    {
        if (IS_VEH_DRIVEABLE( l_U2206[iParam0] ))
        {
            GET_DRIVER_OF_CAR( l_U2206[iParam0], ref uVar5 );
            if (DOES_CHAR_EXIST( uVar5 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 0 );
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U2206[iParam0] ))
    {
        sub_19692( l_U2206[iParam0] );
        SET_CAR_COLLISION( l_U2206[iParam0], 1 );
        FREEZE_CAR_POSITION( l_U2206[iParam0], 0 );
    }
    if (NOT l_U497)
    {
        if (DOES_CHAR_EXIST( uVar5 ))
        {
            if (NOT (IS_CHAR_INJURED( uVar5 )))
            {
                if (fParam1 < 8.00000000)
                {
                    fParam1 = 8.00000000;
                }
                SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fParam1 );
            }
            sub_63817( uVar5 );
        }
        sub_19833( l_U2206[iParam0] );
    }
    else if (DOES_CHAR_EXIST( uVar5 ))
    {
        DELETE_CHAR( ref uVar5 );
    }
    if (DOES_VEHICLE_EXIST( l_U2206[iParam0] ))
    {
        DELETE_CAR( ref l_U2206[iParam0] );
    }
    if (iParam0 >= l_U1595)
    {
        for ( I = 0; I < 115; I++ )
        {
            if (NOT (l_U1431[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 114)
                    {
                        l_U1595 = iParam0 + 1;
                    }
                }
                I = 115;
            }
        }
    }
    l_U1431[iParam0] = 99;
    return;
}

void sub_63817(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_64451(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 14; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U529[I] ))
        {
            if (LOCATE_CAR_3D( l_U529[I], uParam0._fU0, uParam0._fU4, uParam0._fU8, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_64975(unknown uParam0)
{
    unknown uVar3;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_CAR_MODEL( uParam0, ref uVar3 );
            if ((IS_THIS_MODEL_A_BIKE( uVar3 )) || (IS_THIS_MODEL_A_CAR( uVar3 )))
            {
                return SET_CAR_ON_GROUND_PROPERLY( uParam0 );
            }
        }
    }
    return 0;
}

int sub_65564(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5)
{
    unknown uVar8;

    if ((iParam1 < 3000) AND (iParam1 > 0))
    {
        if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( iParam1 )))
        {
            REQUEST_CAR_RECORDING( iParam1 );
        }
        else if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) )))
            {
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                    return 1;
                }
            }
            else if ((GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( (uParam0^) )) == iParam1)
            {
                uVar8 = FIND_TIME_POSITION_IN_RECORDING( (uParam0^) );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 - uVar8 );
                if (NOT bParam3)
                {
                    STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                    REQUEST_CAR_RECORDING( iParam1 );
                }
                return 1;
            }
            else
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                }
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_65930(unknown uParam0)
{
    int iVar3;

    if (l_U509)
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            iVar3 = sub_65964();
            if (NOT (iVar3 == -1))
            {
                l_U529[iVar3] = (uParam0^);
                if (IS_VEH_DRIVEABLE( l_U529[iVar3] ))
                {
                    ADD_BLIP_FOR_CAR( l_U529[iVar3], ref l_U544[iVar3] );
                }
            }
        }
    }
    return;
}

int sub_65964()
{
    int Result;

    for ( Result = 0; Result < 14; Result++ )
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U529[Result] )))
        {
            return Result;
        }
    }
    return -1;
}

int sub_66788(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar4, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar7, 0 );
    }
    else
    {
        return 0;
    }
    uVar4._fU8 = 0.00000000;
    uVar7._fU8 = 0.00000000;
    fVar10 = sub_60042( ref uVar4, ref uVar7 );
    if (fVar10 < 0.00000000)
    {
        return 0;
    }
    return 1;
}

int sub_66950(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_60042( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_67181(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        sub_19692( uParam0 );
        CHANGE_PLAYBACK_TO_USE_AI( uParam0 );
    }
    return;
}

int sub_67308(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;

    fVar4 = sub_67321( uParam0, uParam1 );
    fVar5 = sub_67545( uParam0, uParam1 );
    if (fVar4 > fVar5)
    {
        return 1;
    }
    return 0;
}

float sub_67321(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

float sub_67545(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (COS( fVar16 ));
}

void sub_68421(unknown uParam0)
{
    int I;

    for ( I = 0; I < 14; I++ )
    {
        if (l_U529[I] == (uParam0^))
        {
            l_U529[I] = nil;
            if (DOES_BLIP_EXIST( l_U544[I] ))
            {
                REMOVE_BLIP( l_U544[I] );
            }
            return;
        }
    }
    return;
}

void sub_68594(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U1595 - 5;
    iVar5 = iVar4 + 15;
    if (l_U2377 > 4000.00000000)
    {
        if (IS_PLAYER_PLAYING( sub_3083() ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_3201() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3201(), ref uVar6 );
            }
            for ( I = 0; I < 115; I++ )
            {
                if (I < iVar4)
                {
                    I = iVar4;
                }
                if (DOES_VEHICLE_EXIST( l_U2206[I] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U2206[I] ))
                    {
                        if ((sub_68763( l_U2206[I], uVar6 )) || (sub_68763( l_U2206[I], (uParam0^) )))
                        {
                            SOUND_CAR_HORN( l_U2206[I], 3000 );
                            l_U2377 = 0.00000000;
                        }
                    }
                }
                if (I >= iVar5)
                {
                    I = 115;
                }
            }
        }
    }
    return;
}

int sub_68763(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if ((DOES_VEHICLE_EXIST( uParam1 )) AND (DOES_VEHICLE_EXIST( uParam0 )))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (NOT (sub_66788( uParam0, uParam1 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 25.00000000, 0.00000000, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 20.00000000, 0.00000000, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                    if ((LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )) || ((LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )) || (LOCATE_CAR_3D( uParam1, uVar4._fU0, uVar4._fU4, uVar4._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_69158(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U1595 - 5;
    iVar5 = iVar4 + 15;
    if (IS_PLAYER_PLAYING( sub_3083() ))
    {
        switch (l_U2375)
        {
            case 0:
            if (l_U2378 > 3000.00000000)
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3201() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3201(), ref uVar6 );
                }
                for ( I = 0; I < 115; I++ )
                {
                    if (I < iVar4)
                    {
                        I = iVar4;
                    }
                    if (DOES_VEHICLE_EXIST( l_U2206[I] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U2206[I] ))
                        {
                            if ((sub_68763( l_U2206[I], uVar6 )) || (sub_68763( l_U2206[I], (uParam0^) )))
                            {
                                l_U2374 = l_U2206[I];
                                l_U2378 = 0.00000000;
                                I = 115;
                                l_U2375++;
                            }
                        }
                    }
                    if (I >= iVar5)
                    {
                        I = 115;
                    }
                }
            }
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( l_U2374 ))
            {
                if (l_U2378 < 1000.00000000)
                {
                    if (l_U2379 > 100.00000000)
                    {
                        if (NOT l_U2376)
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U2374, 2.00000000 );
                            l_U2376 = 1;
                        }
                        else
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U2374, 1.00000000 );
                            l_U2376 = 0;
                        }
                        l_U2379 = 0.00000000;
                    }
                }
                else
                {
                    SET_CAR_LIGHT_MULTIPLIER( l_U2374, 1.00000000 );
                    l_U2375 = 0;
                    l_U2378 = 0.00000000;
                    l_U2376 = 0;
                }
            }
            else
            {
                l_U2375 = 0;
                l_U2378 = 0.00000000;
                l_U2376 = 0;
            }
            break;
        }
    }
    return;
}

void sub_69671(unknown uParam0)
{
    int I;
    int iVar4;

    l_U1598 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 25; I++ )
        {
            if (I < l_U1597)
            {
                I = l_U1597;
            }
            if (l_U1559[I] == 0)
            {
                if (NOT (l_U1718[I] == 0))
                {
                    if (LOCATE_CAR_2D( uParam0, l_U2096[I]._fU0, l_U2096[I]._fU4, l_U1292, l_U1292, 0 ))
                    {
                        l_U1599++;
                        l_U1559[I]++;
                    }
                }
                else
                {
                    sub_69851( I );
                }
            }
            if (l_U1559[I] == 1)
            {
                if (1 > l_U1588)
                {
                    if (HAS_MODEL_LOADED( l_U1718[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U2337[I] )))
                        {
                            if ((l_U519) || ((l_U493) || (NOT (sub_62662( l_U2096[I], 5.00000000, 1120403456 )))))
                            {
                                if (l_U512)
                                {
                                    sub_62632( l_U2096[I], l_U1300 );
                                }
                                CREATE_CAR( l_U1718[I], l_U2096[I]._fU0, l_U2096[I]._fU4, l_U2096[I]._fU8, ref l_U2337[I], 1 );
                                SET_VEHICLE_QUATERNION( l_U2337[I], l_U1181[I], l_U1207[I], l_U1233[I], l_U1259[I] );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1718[I] );
                                if (IS_CAR_MODEL( l_U2337[I], sub_19467() ))
                                {
                                    SWITCH_CAR_SIREN( l_U2337[I], 1 );
                                }
                                if (IS_CAR_MODEL( l_U2337[I], sub_19438() ))
                                {
                                    CHANGE_CAR_COLOUR( l_U2337[I], 0, 0 );
                                }
                                GET_INTERIOR_FROM_CAR( l_U2337[I], ref iVar4 );
                                if (NOT (iVar4 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U2337[I] );
                                }
                                l_U1599--;
                                l_U1588++;
                                l_U1559[I]++;
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U1718[I] );
                    }
                }
            }
            if (l_U1559[I] == 2)
            {
                if (NOT (sub_66950( l_U2337[I], uParam0 )))
                {
                    if (NOT l_U497)
                    {
                        sub_19833( l_U2337[I] );
                    }
                    else
                    {
                        DELETE_CAR( ref l_U2337[I] );
                    }
                    l_U1588--;
                    sub_69851( I );
                }
            }
            l_U1598++;
            if (l_U1598 >= 15)
            {
                return;
            }
        }
    }
    else
    {
        sub_19957();
    }
    return;
}

void sub_69851(int iParam0)
{
    int I;

    if (iParam0 >= l_U1597)
    {
        for ( I = 0; I < 25; I++ )
        {
            if (NOT (l_U1559[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 24)
                    {
                        l_U1597 = iParam0 + 1;
                    }
                }
                I = 25;
            }
        }
    }
    l_U1559[iParam0] = 99;
    return;
}

void sub_70617(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;
    float fVar14;
    boolean bVar15;
    int iVar16;
    int iVar17;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 5; I++ )
        {
            if ((NOT (l_U1744[I] == 0)) AND ((l_U1547[I] < 3000) AND (l_U1547[I] > 0)))
            {
                if (l_U1553[I] == 0)
                {
                    if (NOT l_U493)
                    {
                        if (l_U1295 > (l_U1169[I] - (7000.00000000 * uParam1)))
                        {
                            l_U1553[I]++;
                            l_U1600++;
                        }
                    }
                    else
                    {
                        fVar13 = l_U1295 - l_U1169[I];
                        fVar13 *= l_U1175[I];
                        if (fVar13 >= 0.00000000)
                        {
                            if (fVar13 < (sub_63409( l_U1547[I] )))
                            {
                                l_U1553[I]++;
                                l_U1600++;
                            }
                            else
                            {
                                l_U1553[I] = 99;
                            }
                        }
                    }
                }
                if (l_U1553[I] == 1)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1547[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U1547[I] );
                    }
                    else if (l_U1744[I] == sub_19467())
                    {
                        if (HAS_MODEL_LOADED( sub_19496() ))
                        {
                            l_U1553[I]++;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_19496() );
                        }
                    }
                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                    {
                        l_U1553[I]++;
                    }
                    else if (HAS_MODEL_LOADED( sub_19409() ))
                    {
                        l_U1553[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_19409() );
                    };;;;
                }
                if (l_U1553[I] == 2)
                {
                    if (HAS_MODEL_LOADED( l_U1744[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U2363[I] )))
                        {
                            bVar15 = false;
                            if (l_U1744[I] == sub_19467())
                            {
                                if (HAS_MODEL_LOADED( sub_19496() ))
                                {
                                    bVar15 = true;
                                }
                                else
                                {
                                    REQUEST_MODEL( sub_19496() );
                                }
                            }
                            else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                            {
                                bVar15 = true;
                            }
                            else if (HAS_MODEL_LOADED( sub_19409() ))
                            {
                                bVar15 = true;
                            }
                            else
                            {
                                REQUEST_MODEL( sub_19409() );
                            };;;
                            if (bVar15)
                            {
                                if ((l_U519) || (NOT (sub_62662( l_U2172[I], 5.00000000, 1120403456 ))))
                                {
                                    CREATE_CAR( l_U1744[I], l_U2172[I]._fU0, l_U2172[I]._fU4, l_U2172[I]._fU8, ref l_U2363[I], 1 );
                                    if (l_U1744[I] == sub_19467())
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U2363[I], 6, sub_19496(), ref uVar5 );
                                        SET_CHAR_RELATIONSHIP_GROUP( uVar5, 23 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_19496() );
                                    }
                                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                    {
                                        CREATE_RANDOM_CHAR_AS_DRIVER( l_U2363[I], ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                    }
                                    else
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U2363[I], 26, sub_19409(), ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_19409() );
                                    }
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 1 );
                                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( uVar5, 1 );
                                    SET_CHAR_SUFFERS_CRITICAL_HITS( uVar5, 0 );
                                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( uVar5, 0 );
                                    sub_63817( uVar5 );
                                    SET_VEHICLE_QUATERNION( l_U2363[I], l_U1145[I], l_U1151[I], l_U1157[I], l_U1163[I] );
                                    FREEZE_CAR_POSITION( l_U2363[I], 1 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1744[I] );
                                    sub_64975( l_U2363[I] );
                                    GET_INTERIOR_FROM_CAR( l_U2363[I], ref iVar16 );
                                    if (NOT (iVar16 == nil))
                                    {
                                        # -NULL-0xbfc5b5( l_U2363[I] );
                                    }
                                    l_U1553[I]++;
                                    l_U1600--;
                                }
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U1744[I] );
                    }
                }
                if (l_U1553[I] == 3)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1547[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U1547[I] );
                    }
                    if (IS_VEH_DRIVEABLE( l_U2363[I] ))
                    {
                        if (l_U1295 > l_U1169[I])
                        {
                            if (6 > l_U1587)
                            {
                                if (IS_VEH_DRIVEABLE( uParam0 ))
                                {
                                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                    {
                                        l_U1295 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                    }
                                }
                                fVar13 = l_U1295 - l_U1169[I];
                                fVar13 *= l_U1175[I];
                                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1547[I] ))
                                {
                                    if (fVar13 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1547[I] )))
                                    {
                                        GET_CAR_COORDINATES( l_U2363[I], ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                        GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U1547[I], fVar13, ref uVar10 );
                                        if ((NOT l_U519) AND ((sub_62662( uVar10, 5.00000000, 1120403456 )) AND (NOT (sub_62662( uVar7, 5.00000000, 1120403456 )))))
                                        {
                                            l_U1587++;
                                            l_U1553[I]++;
                                        }
                                        else if (sub_65564( ref l_U2363[I], l_U1547[I], fVar13, 1, 0, 0 ))
                                        {
                                            SET_PLAYBACK_SPEED( l_U2363[I], uParam1 * l_U1175[I] );
                                            if (IS_VEH_DRIVEABLE( l_U2363[I] ))
                                            {
                                                if (l_U1744[I] == sub_19467())
                                                {
                                                    SWITCH_CAR_SIREN( l_U2363[I], 1 );
                                                }
                                            }
                                            if (l_U510)
                                            {
                                                # -NULL-0xbfc99f( l_U2363[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U2363[I], 0 );
                                            }
                                            l_U1587++;
                                            l_U1553[I]++;
                                        }
                                    }
                                    else
                                    {
                                        l_U1587++;
                                        l_U1553[I]++;
                                    }
                                }
                            }
                            else
                            {
                                SCRIPT_ASSERT( "Too many set peice cars playing back at once" );
                                l_U1587++;
                                l_U1553[I]++;
                            }
                        }
                    }
                    else
                    {
                        l_U1587++;
                        l_U1553[I]++;
                    }
                }
                if (l_U1553[I] == 4)
                {
                    if (IS_VEH_DRIVEABLE( l_U2363[I] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2363[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U2363[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    if (IS_PLAYER_PLAYING( sub_3083() ))
                                    {
                                        if ((NOT l_U496) AND ((NOT l_U499) AND (IS_CHAR_TOUCHING_VEHICLE( sub_3201(), l_U2363[I] ))))
                                        {
                                            if (IS_CHAR_IN_ANY_CAR( sub_3201() ))
                                            {
                                                bVar15 = false;
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3201(), ref uVar6 );
                                                if (NOT (sub_72773( l_U2363[I], uVar6, 45.00000000 )))
                                                {
                                                    bVar15 = true;
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_66950( uVar6, l_U2363[I] ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    GET_CAR_SPEED( uVar6, ref fVar14 );
                                                    if (fVar14 < 1.00000000)
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_73058( uVar6, l_U2363[I], 15.00000000 ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (bVar15)
                                                {
                                                    sub_67181( l_U2363[I] );
                                                    l_U1553[I]++;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            SET_PLAYBACK_SPEED( l_U2363[I], uParam1 * l_U1175[I] );
                                            if (l_U510)
                                            {
                                                # -NULL-0xbfc99f( l_U2363[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U2363[I], 0 );
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U2363[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U2363[I] );
                            }
                        }
                        else
                        {
                            l_U1553[I]++;
                        }
                    }
                    else
                    {
                        l_U1553[I]++;
                    }
                }
                if (l_U1553[I] == 5)
                {
                    if (IS_VEH_DRIVEABLE( l_U2363[I] ))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U2363[I] )))
                        {
                            l_U1553[I]++;
                        }
                        else
                        {
                            GET_DRIVER_OF_CAR( l_U2363[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    SET_PLAYBACK_SPEED( l_U2363[I], uParam1 * l_U1175[I] );
                                    if (l_U510)
                                    {
                                        # -NULL-0xbfc99f( l_U2363[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U2363[I], 0 );
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U2363[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U2363[I] );
                            }
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1547[I] ))
                            {
                                if (l_U1295 > (l_U1169[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1547[I] ))))
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U2363[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U2363[I] );
                            }
                        }
                    }
                    else
                    {
                        l_U1553[I]++;
                    }
                }
                if (l_U1553[I] == 6)
                {
                    if (NOT (l_U2363[I] == l_U2373))
                    {
                        if (IS_VEH_DRIVEABLE( l_U2363[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U2363[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( uVar5, 29, ref iVar17 );
                                    if (iVar17 == 7)
                                    {
                                        GET_CAR_SPEED( l_U2363[I], ref fVar14 );
                                        if (fVar14 < 8.00000000)
                                        {
                                            fVar14 = 8.00000000;
                                        }
                                        SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fVar14 );
                                    }
                                }
                            }
                        }
                        if (NOT l_U497)
                        {
                            sub_19833( l_U2363[I] );
                        }
                        else if (DOES_VEHICLE_EXIST( l_U2363[I] ))
                        {
                            DELETE_CAR( ref l_U2363[I] );
                        }
                    }
                    l_U1587--;
                    l_U1553[I] = 99;
                }
            }
        }
    }
    else
    {
        sub_20139();
    }
    return;
}

int sub_72773(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar5, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar8, 0 );
    }
    else
    {
        return 0;
    }
    uVar5._fU8 = 0.00000000;
    uVar8._fU8 = 0.00000000;
    fVar11 = sub_60042( ref uVar5, ref uVar8 );
    if (fVar11 < 0.00000000)
    {
        return 0;
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar11 );
    if (NOT (fVar11 < fParam2))
    {
        return 0;
    }
    return 1;
}

int sub_73058(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_SPEED( uParam0, ref uVar5 );
    }
    if (NOT (IS_CAR_DEAD( uParam1 )))
    {
        GET_CAR_SPEED( uParam1, ref uVar6 );
    }
    if (((uVar5 - uVar6) < (fParam2 * -1.00000000)) || ((uVar5 - uVar6) > fParam2))
    {
        return 1;
    }
    return 0;
}

int sub_74341(unknown uParam0, unknown uParam1)
{
    if (NOT l_U522)
    {
        l_U493 = 1;
        sub_20357();
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FIX_CAR( (uParam0^) );
            }
            if (NOT (l_U1594 == -1))
            {
                while (NOT (sub_65564( uParam0, l_U1594, uParam1, 1, 0, 0 )))
                {
                    WAIT( 0 );
                }
                if (NOT l_U504)
                {
                    l_U496 = 1;
                    l_U1298 = 0.00000000;
                    l_U1595 = 0;
                    l_U1597 = 0;
                    l_U1585 = 0;
                    l_U1587 = 0;
                    l_U1588 = 0;
                    l_U1599 = 0;
                    l_U1600 = 0;
                    l_U1601 = 0;
                }
            }
        }
        l_U522 = 1;
    }
    else if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
        {
            SET_PLAYBACK_SPEED( (uParam0^), (1.00000000 * l_U1296) * l_U1298 );
            sub_65564( uParam0, l_U1594, uParam1, 1, 0, 0 );
        }
    }
    l_U1295 = uParam1;
    sub_70617( (uParam0^), (1.00000000 * l_U1296) * l_U1298 );
    sub_63135( (uParam0^), (1.00000000 * l_U1296) * l_U1298 );
    if ((l_U1601 == 0) AND ((l_U1600 == 0) AND (l_U1599 == 0)))
    {
        l_U496 = 0;
        l_U493 = 0;
        l_U522 = 0;
        return 1;
    }
    return 0;
}

void sub_74781()
{
    if (NOT (IS_CAR_DEAD( l_U2363[3] )))
    {
        if ((NOT l_U2446[0]) AND ((l_U2426 < 114000) AND (l_U2426 > 112800)))
        {
            SOUND_CAR_HORN( l_U2363[3], 3000 );
            l_U2446[0] = 1;
        }
    }
    if (NOT (IS_CAR_DEAD( l_U2206[76] )))
    {
        if ((NOT l_U2446[1]) AND ((l_U2426 < 179000) AND (l_U2426 > 177500)))
        {
            SOUND_CAR_HORN( l_U2206[76], 6000 );
            l_U2446[1] = 1;
        }
    }
    if (NOT (IS_CAR_DEAD( l_U2206[13] )))
    {
        if ((NOT l_U2446[2]) AND ((l_U2426 < 44000) AND (l_U2426 > 42500)))
        {
            SOUND_CAR_HORN( l_U2206[13], 3000 );
            l_U2446[2] = 1;
        }
    }
    if (NOT (IS_CAR_DEAD( l_U2363[0] )))
    {
        if ((NOT l_U2446[3]) AND ((l_U2426 < 64200) AND (l_U2426 > 63000)))
        {
            SOUND_CAR_HORN( l_U2363[0], 2000 );
            l_U2446[3] = 1;
        }
    }
    if (NOT (IS_CAR_DEAD( l_U2206[34] )))
    {
        if ((NOT l_U2446[4]) AND ((l_U2426 < 90200) AND (l_U2426 > 89000)))
        {
            SOUND_CAR_HORN( l_U2206[34], 3000 );
            l_U2446[4] = 1;
        }
    }
    if (NOT (IS_CAR_DEAD( l_U2206[73] )))
    {
        if ((NOT l_U2446[5]) AND ((l_U2426 < 179000) AND (l_U2426 > 177000)))
        {
            SOUND_CAR_HORN( l_U2206[73], 6000 );
            l_U2446[5] = 1;
        }
    }
    return;
}

void sub_75338()
{
    switch (l_U2444)
    {
        case 0:
        if (NOT (IS_CHAR_DEAD( l_U2381 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U2381, -92.55290000, -272.27470000, 15.73710000, 200.00000000, 200.00000000, 200.00000000, 0 ))
            {
                REQUEST_MODEL( 1745156571 );
                l_U2444++;
            }
        }
        break;
        case 1:
        if (NOT (HAS_MODEL_LOADED( 1745156571 )))
        {
            REQUEST_MODEL( 1745156571 );
        }
        else
        {
            CREATE_OBJECT( 1745156571, -94.67981000, -280.98150000, 13.40000000, ref l_U2440[0], 1 );
            SET_OBJECT_ROTATION( l_U2440[0], 2.00000000, 0.00000000, 180.00000000 );
            FREEZE_OBJECT_POSITION( l_U2440[0], 1 );
            CREATE_OBJECT( 1745156571, -88.62980000, -273.63150000, 13.16000000, ref l_U2440[1], 1 );
            SET_OBJECT_ROTATION( l_U2440[1], 2.00000000, 13.00000000, 180.00000000 );
            FREEZE_OBJECT_POSITION( l_U2440[1], 1 );
            l_U2444++;
        }
        break;
        case 2:
        if (DOES_OBJECT_EXIST( l_U2440[0] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2381 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U2381, -92.55290000, -272.27470000, 15.73710000, 6.00000000, 6.00000000, 6.00000000, 0 ))
                {
                    FREEZE_OBJECT_POSITION( l_U2440[0], 0 );
                    APPLY_FORCE_TO_OBJECT( l_U2440[0], 1, 1.00000000, 0, -0.20000000, 0, 0, 0, 0, 0, 1, 1 );
                    FREEZE_OBJECT_POSITION( l_U2440[1], 0 );
                    APPLY_FORCE_TO_OBJECT( l_U2440[1], 1, -1.00000000, 0, -0.20000000, 0, 0, 0, 0, 0, 1, 1 );
                    PLAY_SOUND_FROM_POSITION( l_U2445, "C1_WRONG_IS_RIGHT_PIPES", -91.62000000, -273.00000000, 16.00000000 );
                    SETTIMERA( 0 );
                    l_U2444++;
                }
            }
        }
        break;
        case 3:
        if (DOES_OBJECT_EXIST( l_U2440[0] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U2381 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U2381, -92.55290000, -272.27470000, 15.73710000, 200.00000000, 200.00000000, 200.00000000, 0 )))
                {
                    l_U2444++;
                }
            }
        }
        break;
    }
    if ((NOT l_U2443) AND ((IS_CHAR_IN_AREA_2D( sub_3201(), -96.00000000, -267.00000000, -87.90000000, -244.40000000, 0 )) AND (l_U2444 > 2)))
    {
        PRINT_NOW( "KB_PIPEBLOC", 7500, 0 );
        l_U2443 = 1;
    }
    return;
}

int sub_76479(unknown uParam0)
{
    if ((CHECK_STUCK_TIMER( uParam0, 0, 5000 )) || ((CHECK_STUCK_TIMER( uParam0, 1, 40000 )) || ((CHECK_STUCK_TIMER( uParam0, 2, 30000 )) || (CHECK_STUCK_TIMER( uParam0, 3, 60000 )))))
    {
        return 1;
    }
    return 0;
}

void sub_77230()
{
    if ((NOT (IS_CAR_DEAD( l_U2383 ))) AND (NOT (IS_CHAR_DEAD( l_U2381 ))))
    {
        if (IS_CHAR_IN_CAR( l_U2381, l_U2383 ))
        {
            if (NOT l_U2409)
            {
                if (l_U2410 < 3)
                {
                    if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3201(), l_U2381, 10.00000000, 10.00000000, 10.00000000, 0 )) AND ((NOT (sub_29888( l_U2414 ))) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (((l_U2410 == 0) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3201(), l_U2381, 3.00000000, 3.00000000, 3.00000000, 0 ))) || (((IS_CHAR_PLAYING_ANIM( sub_3201(), "veh@low", "d_locked_ds" )) || (IS_CHAR_PLAYING_ANIM( sub_3201(), "veh@low", "d_locked_ps" ))) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U2383, sub_3201() )))))))
                    {
                        TASK_PLAY_ANIM( l_U2381, "cower_in_car_1off", "missnet1", 4.00000000, 1, 0, 0, 0, -1 );
                        TASK_LOOK_AT_CHAR( l_U2381, sub_3201(), 3000, 0 );
                        sub_35699( "C1_STOP", l_U2410, 1, ref l_U2414, 6, 1 );
                        l_U2410++;
                        l_U2409 = 1;
                    }
                }
            }
            else if (NOT (sub_29888( l_U2414 )))
            {
                TASK_PLAY_ANIM( l_U2381, "cower_in_car", "missnet1", 4.00000000, 1, 0, 0, 0, -1 );
                CLEAR_CAR_LAST_DAMAGE_ENTITY( l_U2383 );
                l_U2409 = 0;
            }
        }
    }
    return;
}

