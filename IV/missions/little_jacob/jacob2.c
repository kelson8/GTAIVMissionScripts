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
    l_U731 = 8.00000000;
    l_U732 = 11.50000000;
    l_U768 = 0;
    l_U780 = 0;
    l_U781 = 0;
    l_U782 = 200;
    l_U783 = -1;
    l_U785 = 0.36500000;
    l_U786 = 0.70999990;
    l_U787 = {526.27600000, 1495.80000000, 12.41500000};
    l_U802 = 0;
    l_U803 = 0;
    l_U810 = 0;
    l_U820 = 0;
    l_U823 = 0;
    l_U827 = {0.00000000, 0.00000000, -0.06000000};
    l_U831 = 0;
    l_U832 = 0;
    l_U833 = 0;
    l_U834 = 0;
    l_U835 = 0;
    l_U839 = 0;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_290();
        sub_2400();
    }
    WAIT( 0 );
    sub_17211();
    while (true)
    {
        WAIT( 0 );
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_20277();
        }
        else if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            sub_32712();
        }
        if (l_U783 != -1)
        {
            sub_20277();
        }
        else if (NOT l_U743)
        {
            if (IS_WANTED_LEVEL_GREATER( sub_16700(), 0 ))
            {
                if (DOES_BLIP_EXIST( l_U510 ))
                {
                    REMOVE_BLIP( l_U510 );
                    PRINT_NOW( "FP_WANTED", 7500, 0 );
                }
            }
            else if (NOT (DOES_BLIP_EXIST( l_U510 )))
            {
                ADD_BLIP_FOR_COORD( 489.94400000, 1557.73800000, 15.69600000, ref l_U510 );
                CHANGE_BLIP_COLOUR( l_U510, 5 );
                SET_ROUTE( l_U510, 1 );
                PRINT_NOW( "FP_52", 7500, 0 );
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2543(), 489.94400000, 1557.73800000, 15.69600000, 2.50000000, 2.50000000, 2.50000000, 1 ))
            {
                if (sub_34398( 1, 1 ))
                {
                    sub_34688();
                    l_U743 = 1;
                }
            }
        }
        else if (IS_CHAR_INJURED( l_U481 ))
        {
            if (l_U753)
            {
                if ((IS_CHAR_INJURED( l_U482[1] )) AND (IS_CHAR_INJURED( l_U482[0] )))
                {
                    sub_38746();
                    sub_20277();
                }
            }
            else if (IS_CHAR_DEAD( l_U481 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    SET_CHAR_HEALTH( l_U481, 40 );
                    CLEAR_CHAR_TASKS( l_U481 );
                    SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U481, 0 );
                }
                sub_39015( 1 );
            }
            else if (NOT l_U728)
            {
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    CLEAR_CHAR_TASKS( l_U481 );
                    SET_CHAR_HEALTH( l_U481, 80 );
                    SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U481, 0 );
                }
                GET_GAME_TIMER( ref l_U725 );
                l_U728 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U798 );
                if (l_U798 > (l_U725 + 500))
                {
                    sub_39015( 0 );
                }
            };;;
        }
        sub_39559();
        sub_39986();
        if (NOT l_U778)
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_2543() )))
            {
                l_U778 = 1;
            }
        }
        if ((NOT l_U739) AND (l_U727))
        {
            if (TIMERB() > 800)
            {
                l_U739 = 1;
            }
        }
        if (IS_CHAR_IN_AREA_2D( sub_2543(), 541.40000000, 1439.30000000, 543.90000000, 1442.50000000, 0 ))
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_HELP_FOREVER( "FP_29" );
            }
        }
        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "FP_29" ))
        {
            CLEAR_HELP();
        }
        if ((l_U583 == 1) || (l_U583 == 0))
        {
            if (IS_CHAR_IN_AREA_2D( sub_2543(), 507.21190000, 1519.98400000, 570.05650000, 1543.62600000, 0 ))
            {
                sub_39015( 2 );
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            if ((NOT l_U750) AND (LOCATE_CHAR_ANY_MEANS_2D( l_U481, 535.97900000, 1540.07700000, 4.50000000, 4.50000000, 0 )))
            {
                CLEAR_AREA_OF_CARS( 535.97900000, 1540.07700000, 20.00000000, 20.00000000 );
                l_U750 = 1;
            }
        }
        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U739) AND ((l_U765) AND ((l_U757) AND (NOT l_U745)))))
        {
            sub_38628( "FP_07", 7500 );
            l_U745 = 1;
        }
        if (NOT l_U739)
        {
            CLEAR_AREA_OF_CHARS( 522.14510000, 1580.07400000, 17.31960000, 30.00000000 );
        }
        if (l_U759)
        {
            if (NOT (IS_CHAR_DEAD( l_U481 )))
            {
                if ((NOT l_U777) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U481, sub_2543(), 0 )))
                {
                    REMOVE_CHAR_DEFENSIVE_AREA( l_U481 );
                    l_U777 = 1;
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U482[0] )))
            {
                if ((NOT l_U776) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U482[0], sub_2543(), 0 )))
                {
                    REMOVE_CHAR_DEFENSIVE_AREA( l_U482[0] );
                    l_U776 = 1;
                }
            }
            if (NOT (IS_CHAR_DEAD( l_U482[1] )))
            {
                if ((NOT l_U776) AND (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U482[1], sub_2543(), 0 )))
                {
                    REMOVE_CHAR_DEFENSIVE_AREA( l_U482[1] );
                    l_U776 = 1;
                }
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            if ((NOT l_U740) AND (IS_PED_IN_COMBAT( l_U481 )))
            {
                if (NOT (IS_CHAR_DEAD( l_U482[0] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U482[0], 0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U482[1] )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U482[1], 0 );
                }
                l_U740 = 1;
            }
        }
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            sub_41284();
        }
        if (DOES_CHAR_EXIST( l_U492 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U492 )))
            {
                GET_CHAR_COORDINATES( l_U492, ref l_U791._fU0, ref l_U791._fU4, ref l_U791._fU8 );
                if (l_U791._fU8 < 11.50000000)
                {
                    SET_CHAR_HEALTH( l_U492, 60 );
                    PRINTNL();
                    PRINTSTRING( "POPPED STAIRSGIRL'S HEALTH DOWN" );
                    PRINTNL();
                }
            }
        }
        if ((NOT l_U729) AND (l_U730))
        {
            if ((NOT sub_45252()) AND (NOT (sub_40001( l_U733 ))))
            {
                sub_38628( "FP_10", 7500 );
                l_U729 = 1;
            }
        }
        sub_45315();
        sub_13279( "FEEDBACK" );
        sub_8199( "FEEDBACK" );
        sub_51393();
        sub_52207();
        sub_55255();
        sub_38746();;;
    }
    sub_2400();
    return;
}

void sub_290()
{
    sub_299();
    return;
}

void sub_299()
{
    int iVar2;

    iVar2 = 3;
    sub_313( iVar2 );
    sub_1489( iVar2 );
    return;
}

void sub_313(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_357();
        sub_518();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_626();
            sub_665();
        }
    }
    sub_741();
    sub_842();
    uVar5 = sub_955( uParam0 );
    sub_1396( uVar5, 0 );
    return;
}

void sub_357()
{
    sub_371( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_471();
    }
    return;
}

void sub_371(int iParam0)
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

void sub_471()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_518()
{
    sub_527();
    return;
}

void sub_527()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_626()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_665()
{
    sub_674();
    return;
}

void sub_674()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_741()
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

void sub_842()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_864();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_864()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_955(unknown uParam0)
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
    sub_1354( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1354(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1396(int iParam0, boolean bParam1)
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

void sub_1489(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1498();
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
        sub_2273();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1498()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1536( 5, g_U569[I] )) == 1))
        {
            if ((sub_1536( 1, g_U569[I] )) != 0)
            {
                sub_1822( I );
            }
        }
    }
    if (NOT sub_1988())
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

int sub_1536(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1822(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1907( g_U569 - 1 );
    return;
}

void sub_1907(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1988()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1536( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2273()
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

void sub_2400()
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U481 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U485 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 261592072 );
    sub_2452( "DELETE" );
    sub_3565( "DELETE" );
    sub_6358( "DELETE" );
    sub_7068( "DELETE" );
    sub_8199( "DELETE" );
    sub_10110( "DELETE" );
    sub_11116( "DELETE" );
    sub_11976( "DELETE" );
    sub_12403( "DELETE" );
    sub_13279( "DELETE" );
    sub_15052( "DELETE" );
    REMOVE_ANIMS( "missjacob2" );
    CLEAR_HELP();
    RELEASE_WEATHER();
    if (IS_PLAYER_PLAYING( sub_16700() ))
    {
        DISABLE_PLAYER_SPRINT( sub_16700(), 0 );
        SET_PLAYER_CONTROL( sub_16700(), 1 );
    }
    sub_16769();
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 261592072, 549.40000000, 1439.20000000, 12.00000000, 0, 0 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 261592072, 552.20000000, 1424.00000000, 12.00000000, 0, 0 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SWITCH_MAD_DRIVERS( 1 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SET_CREATE_RANDOM_COPS( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2452(unknown uParam0)
{
    if (COMPARE_STRING( uParam0, "LOAD ASSETS" ))
    {
        ;
    }
    else if (COMPARE_STRING( uParam0, "CREATE" ))
    {
        if (l_U832 < 2)
        {
            if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
            {
                SET_PED_IS_BLIND_RAGING( sub_2543(), 1 );
                CREATE_RANDOM_CHAR( 564.25560000, 1400.81600000, 15.00000000, ref l_U497[0] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U497[0] );
                SET_CHAR_HEADING( l_U497[0], 283.00000000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U497[0], "room_ten_strflr" );
                TASK_PLAY_ANIM( l_U497[0], "Street_chat_a", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                CREATE_RANDOM_CHAR( 565.31880000, 1400.81600000, 15.00000000, ref l_U497[1] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U497[1] );
                SET_CHAR_HEADING( l_U497[1], 94.00000000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U497[1], "room_ten_strflr" );
                TASK_PLAY_ANIM( l_U497[1], "Street_chat_b", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                l_U832 = 2;
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "FEEDBACK" ))
    {
        if ((DOES_CHAR_EXIST( l_U497[1] )) AND (DOES_CHAR_EXIST( l_U497[0] )))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_2543(), 565.31880000, 1400.81600000, 15.00000000, 3.00000000, 3.00000000, 1.00000000, 0 ))
            {
                if ((NOT (IS_CHAR_DEAD( l_U497[0] ))) AND ((NOT (IS_CHAR_DEAD( l_U497[1] ))) AND (NOT l_U763)))
                {
                    OPEN_SEQUENCE_TASK( ref l_U799 );
                    TASK_PLAY_ANIM( 0, "IDLE_look_L", "missjacob2", 4.00000000, 0, 0, 0, 0, -1 );
                    TASK_PLAY_ANIM( 0, "Street_chat_a", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U799 );
                    TASK_PERFORM_SEQUENCE( l_U497[0], l_U799 );
                    CLEAR_SEQUENCE_TASK( l_U799 );
                    OPEN_SEQUENCE_TASK( ref l_U799 );
                    TASK_PLAY_ANIM( 0, "IDLE_look_R", "missjacob2", 4.00000000, 0, 0, 0, 0, -1 );
                    TASK_PLAY_ANIM( 0, "Street_chat_b", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U799 );
                    TASK_PERFORM_SEQUENCE( l_U497[1], l_U799 );
                    CLEAR_SEQUENCE_TASK( l_U799 );
                    l_U763 = 1;
                }
            }
            else if ((NOT (IS_CHAR_DEAD( l_U497[0] ))) AND ((NOT (IS_CHAR_DEAD( l_U497[1] ))) AND (l_U763)))
            {
                l_U763 = 0;
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "DELETE" ))
    {
        if (l_U832 < 3)
        {
            if (DOES_CHAR_EXIST( l_U497[0] ))
            {
                DELETE_CHAR( ref l_U497[0] );
                l_U497[0] = nil;
            }
            if (DOES_CHAR_EXIST( l_U497[1] ))
            {
                DELETE_CHAR( ref l_U497[1] );
                l_U497[1] = nil;
            }
            l_U832 = 3;
        }
    };;;;
    return;
}

void sub_2543()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3565(unknown uParam0)
{
    if (COMPARE_STRING( uParam0, "LOAD ASSETS" ))
    {
        if (l_U830 == 0)
        {
            REQUEST_MODEL( 1180218190 );
            l_U830 = 1;
        }
    }
    else if (COMPARE_STRING( uParam0, "CREATE" ))
    {
        if (l_U830 < 2)
        {
            if (HAS_MODEL_LOADED( 1180218190 ))
            {
                CREATE_CHAR( 4, 1180218190, 571.73050000, 1401.41900000, 18.60450000, ref l_U496, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U496 );
                SET_CHAR_HEADING( l_U496, 240.00000000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U496, "room_ten_strflr" );
                sub_3799( 4, l_U496, "PISS_GUY", 0 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1180218190 );
                TASK_PLAY_ANIM( l_U496, "piss_loop", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                l_U601 = START_PTFX_ON_PED_BONE( "ped_pissing", l_U496, l_U827._fU0, l_U827._fU4, l_U827._fU8, (3.14200000 * 270.00000000) / 180.00000000, 0.00000000, 0.00000000, 417, 1065353216 );
                PLAY_SOUND_FROM_PED( l_U602, "LJ2_FOLLOW_PED_TO_KILL_PISSING", l_U496 );
                l_U826 = 1;
                l_U830 = 2;
            }
            else
            {
                REQUEST_MODEL( 1180218190 );
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "FEEDBACK" ))
    {
        if (DOES_CHAR_EXIST( l_U496 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U496 )))
            {
                if (l_U825)
                {
                    GET_SCRIPT_TASK_STATUS( l_U496, 29, ref l_U726 );
                    if (l_U726 == 7)
                    {
                        TASK_PLAY_ANIM( l_U496, "piss_loop", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                        l_U601 = START_PTFX_ON_PED_BONE( "ped_pissing", l_U496, l_U827._fU0, l_U827._fU4, l_U827._fU8, (3.14200000 * 270.00000000) / 180.00000000, 0.00000000, 0.00000000, 417, 1065353216 );
                        PLAY_SOUND_FROM_PED( l_U602, "LJ2_FOLLOW_PED_TO_KILL_PISSING", l_U496 );
                        l_U826 = 1;
                        l_U825 = 0;
                    }
                }
                else
                {
                    GET_CHAR_HEADING( l_U496, ref l_U797 );
                    if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U496, 571.73050000, 1401.41900000, 19.60450000, 0.30000000, 0.30000000, 1.00000000, 0 )))
                    {
                        if (l_U826)
                        {
                            STOP_PTFX( l_U601 );
                            STOP_SOUND( l_U602 );
                            l_U826 = 0;
                        }
                        OPEN_SEQUENCE_TASK( ref l_U799 );
                        TASK_CHAR_SLIDE_TO_COORD( 0, 571.73050000, 1401.41900000, 18.60450000, 240, 10000 );
                        CLOSE_SEQUENCE_TASK( l_U799 );
                        TASK_PERFORM_SEQUENCE( l_U496, l_U799 );
                        CLEAR_SEQUENCE_TASK( l_U799 );
                        l_U825 = 1;
                    }
                    else if ((l_U797 > 243) || (l_U797 < 237))
                    {
                        if (l_U826)
                        {
                            STOP_PTFX( l_U601 );
                            STOP_SOUND( l_U602 );
                            l_U826 = 0;
                        }
                        OPEN_SEQUENCE_TASK( ref l_U799 );
                        TASK_ACHIEVE_HEADING( 0, 240 );
                        CLOSE_SEQUENCE_TASK( l_U799 );
                        TASK_PERFORM_SEQUENCE( l_U496, l_U799 );
                        CLEAR_SEQUENCE_TASK( l_U799 );
                        l_U825 = 1;
                    }
                    else if (LOCATE_CHAR_ON_FOOT_3D( sub_2543(), 571.73050000, 1401.41900000, 19.60000000, 1.80000000, 1.80000000, 1.00000000, 0 ))
                    {
                        if (NOT l_U762)
                        {
                            TASK_PLAY_ANIM( l_U496, "idle_look_back", "missjacob2", 4.00000000, 0, 0, 0, 0, -1 );
                            sub_4944( "LJ2_PISSIN", ref l_U733, 4, 1 );
                            STOP_PTFX( l_U601 );
                            STOP_SOUND( l_U602 );
                            l_U826 = 0;
                            l_U762 = 1;
                        }
                    }
                    else if ((LOCATE_CHAR_ON_FOOT_3D( l_U496, 571.73050000, 1401.41900000, 19.60450000, 0.30000000, 0.30000000, 1.00000000, 0 )) AND ((NOT l_U826) || (l_U762)))
                    {
                        TASK_PLAY_ANIM( l_U496, "piss_loop", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                        if (NOT l_U826)
                        {
                            l_U601 = START_PTFX_ON_PED_BONE( "ped_pissing", l_U496, l_U827._fU0, l_U827._fU4, l_U827._fU8, (3.14200000 * 270.00000000) / 180.00000000, 0.00000000, 0.00000000, 417, 1065353216 );
                        }
                        PLAY_SOUND_FROM_PED( l_U602, "LJ2_FOLLOW_PED_TO_KILL_PISSING", l_U496 );
                        l_U826 = 1;
                        l_U762 = 0;
                    };;;;
                }
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "DELETE" ))
    {
        if (l_U830 < 3)
        {
            if (DOES_CHAR_EXIST( l_U496 ))
            {
                if (l_U826)
                {
                    STOP_PTFX( l_U601 );
                    STOP_SOUND( l_U602 );
                }
                DELETE_CHAR( ref l_U496 );
                l_U496 = nil;
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1180218190 );
            l_U830 = 3;
        }
    };;;;
    return;
}

void sub_3799(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3879( "\n PED NUMBER ", uParam0 );
    sub_3919( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3879(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3919(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4944(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_4965( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_4965(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_5019( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_5019(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_5041( iParam1 )))
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
    sub_5729( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_5041(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_5118( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_5118( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_5118( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_5118(unknown uParam0)
{
    return;
}

void sub_5729(int iParam0, int iParam1)
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

void sub_6358(unknown uParam0)
{
    if (COMPARE_STRING( uParam0, "LOAD ASSETS" ))
    {
        if (l_U831 == 0)
        {
            REQUEST_MODEL( -1080673049 );
            l_U831 = 1;
        }
    }
    else if (COMPARE_STRING( uParam0, "CREATE" ))
    {
        if (l_U831 < 2)
        {
            if (HAS_MODEL_LOADED( -1080673049 ))
            {
                CREATE_CHAR( 4, -1080673049, 572.20000000, 1401.10000000, 22.35470000, ref l_U495, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U495 );
                SET_CHAR_HEADING( l_U495, 60.00000000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U495, "room_ten_strflr" );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1080673049 );
                TASK_PLAY_ANIM( l_U495, "beggar_sit", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                l_U831 = 2;
            }
            else
            {
                REQUEST_MODEL( -1080673049 );
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "FEEDBACK" ))
    {
        if (DOES_CHAR_EXIST( l_U495 ))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_2543(), 571.73050000, 1401.41900000, 23.35430000, 4.00000000, 4.00000000, 1.40000000, 0 ))
            {
                if ((NOT (IS_CHAR_DEAD( l_U495 ))) AND (NOT l_U761))
                {
                    OPEN_SEQUENCE_TASK( ref l_U799 );
                    TASK_PLAY_ANIM( 0, "beggar_beg", "missjacob2", 4.00000000, 0, 0, 0, 0, -1 );
                    TASK_PLAY_ANIM( 0, "beggar_sit", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U799 );
                    TASK_PERFORM_SEQUENCE( l_U495, l_U799 );
                    CLEAR_SEQUENCE_TASK( l_U799 );
                    l_U761 = 1;
                }
            }
            else if ((NOT (IS_CHAR_DEAD( l_U495 ))) AND (l_U761))
            {
                l_U761 = 0;
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "DELETE" ))
    {
        if (l_U831 < 3)
        {
            if (DOES_CHAR_EXIST( l_U495 ))
            {
                DELETE_CHAR( ref l_U495 );
                l_U495 = nil;
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1080673049 );
            l_U831 = 3;
        }
    };;;;
    return;
}

void sub_7068(unknown uParam0)
{
    if (COMPARE_STRING( uParam0, "LOAD ASSETS" ))
    {
        if (l_U823 == 0)
        {
            REQUEST_MODEL( 1872110126 );
            l_U823 = 1;
        }
    }
    else if (COMPARE_STRING( uParam0, "CREATE" ))
    {
        if (l_U823 < 2)
        {
            if ((HAS_MODEL_LOADED( 1872110126 )) AND (CAN_CREATE_RANDOM_CHAR( 1, 0 )))
            {
                CREATE_RANDOM_CHAR( 559.00280000, 1401.61000000, 26.10450000, ref l_U489[0] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U489[0] );
                SET_CHAR_HEADING( l_U489[0], 0.00000000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U489[0], "room_ten_strflr" );
                CREATE_CHAR( 4, 1872110126, 558.99060000, 1402.45300000, 26.10450000, ref l_U489[1], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U489[1] );
                SET_CHAR_HEADING( l_U489[1], 180.00000000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U489[1], "room_ten_strflr" );
                MARK_MODEL_AS_NO_LONGER_NEEDED( 1872110126 );
                TASK_PLAY_ANIM( l_U489[0], "argue_a", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                TASK_PLAY_ANIM( l_U489[1], "argue_b", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                l_U823 = 2;
            }
            else
            {
                REQUEST_MODEL( 1872110126 );
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "FEEDBACK" ))
    {
        if ((DOES_CHAR_EXIST( l_U489[1] )) AND (DOES_CHAR_EXIST( l_U489[0] )))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( sub_2543(), 559.00280000, 1401.61000000, 27.10450000, 6.00000000, 6.00000000, 1.00000000, 0 ))
            {
                if ((NOT (IS_CHAR_DEAD( l_U489[0] ))) AND ((NOT (IS_CHAR_DEAD( l_U489[1] ))) AND (NOT l_U764)))
                {
                    OPEN_SEQUENCE_TASK( ref l_U799 );
                    TASK_PLAY_ANIM( 0, "IDLE_look_L", "missjacob2", 4.00000000, 0, 0, 0, 0, -1 );
                    TASK_PLAY_ANIM( 0, "argue_b", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U799 );
                    TASK_PERFORM_SEQUENCE( l_U489[1], l_U799 );
                    CLEAR_SEQUENCE_TASK( l_U799 );
                    OPEN_SEQUENCE_TASK( ref l_U799 );
                    TASK_PLAY_ANIM( 0, "IDLE_look_R", "missjacob2", 4.00000000, 0, 0, 0, 0, -1 );
                    TASK_PLAY_ANIM( 0, "argue_a", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U799 );
                    TASK_PERFORM_SEQUENCE( l_U489[0], l_U799 );
                    CLEAR_SEQUENCE_TASK( l_U799 );
                    l_U764 = 1;
                }
            }
            else if ((NOT (IS_CHAR_DEAD( l_U489[0] ))) AND ((NOT (IS_CHAR_DEAD( l_U489[1] ))) AND (l_U764)))
            {
                l_U764 = 0;
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "DELETE" ))
    {
        if (l_U823 < 3)
        {
            if (DOES_CHAR_EXIST( l_U489[0] ))
            {
                DELETE_CHAR( ref l_U489[0] );
                l_U489[0] = nil;
            }
            if (DOES_CHAR_EXIST( l_U489[1] ))
            {
                DELETE_CHAR( ref l_U489[1] );
                l_U489[1] = nil;
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1872110126 );
            l_U823 = 3;
        }
    };;;;
    return;
}

void sub_8199(unknown uParam0)
{
    float fVar3;

    if (COMPARE_STRING( uParam0, "LOAD ASSETS" ))
    {
        if (l_U780 == 0)
        {
            REQUEST_MODEL( -900623157 );
            l_U780 = 1;
        }
    }
    else if (COMPARE_STRING( uParam0, "CREATE" ))
    {
        if (l_U780 < 2)
        {
            if (HAS_MODEL_LOADED( -900623157 ))
            {
                CREATE_CHAR( 4, -900623157, 567.99020000, 1404.75000000, 14.85420000, ref l_U492, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U492 );
                SET_CHAR_HEADING( l_U492, 270.00000000 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U492, "room_ten_strflr" );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -900623157 );
                l_U780 = 2;
                SETTIMERA( 0 );
            }
            else
            {
                REQUEST_MODEL( -900623157 );
                PRINTNL();
                PRINTSTRING( "Waiting on StairsGirl model to load" );
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "FEEDBACK" ))
    {
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            if ((LOCATE_CHAR_ANY_MEANS_3D( l_U481, 568.20000000, 1404.05000000, 15.00000000, 1.00000000, 1.00000000, 1.50000000, 0 )) || (l_U755))
            {
                if (NOT l_U774)
                {
                    l_U755 = 1;
                    if (l_U780 == 2)
                    {
                        switch (l_U781)
                        {
                            case 0:
                            if (NOT (IS_CHAR_DEAD( l_U481 )))
                            {
                                CLEAR_CHAR_TASKS( l_U481 );
                                SET_CHAR_COORDINATES( l_U481, 568.20000000, 1404.05000000, 15.00000000 );
                                SET_CHAR_HEADING( l_U481, 273.00000000 );
                                l_U781++;
                                l_U756 = 1;
                            }
                            break;
                            case 1:
                            if ((NOT (IS_CHAR_DEAD( l_U481 ))) AND (NOT (IS_CHAR_INJURED( l_U492 ))))
                            {
                                CLEAR_CHAR_TASKS( l_U481 );
                                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U481, "crates", "missjacob2", 100.00000000, 0, 0, 0, 0, 0 );
                                l_U781++;
                            }
                            break;
                            case 2:
                            if (NOT (IS_CHAR_DEAD( l_U481 )))
                            {
                                if (IS_CHAR_PLAYING_ANIM( l_U481, "missjacob2", "crates" ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( l_U481, "missjacob2", "crates", ref fVar3 );
                                    if (fVar3 > 0.45000000)
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U492 )))
                                        {
                                            SET_CHAR_NEVER_TARGETTED( l_U492, 1 );
                                            SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U492, 0, 60000, 2, -1.20000000, 0, 0, 10.50000000, 0, 0, 0, 0, 0, 0 );
                                            if (IS_CHAR_IN_AREA_3D( sub_2543(), 547, 1399, 9, 572.70000000, 1405.40000000, 18, 0 ))
                                            {
                                                sub_4944( "LJ2_STAIRS", ref l_U733, 4, 1 );
                                            }
                                        }
                                        sub_9145( l_U481, l_U519[l_U583] );
                                        l_U756 = 0;
                                        l_U755 = 0;
                                        l_U774 = 1;
                                        l_U780 = 3;
                                        l_U781++;
                                    }
                                }
                            }
                            break;
                        }
                    }
                    else
                    {
                        l_U583++;
                        sub_9145( l_U481, l_U519[l_U583] );
                        l_U756 = 0;
                        l_U755 = 0;
                        l_U774 = 1;
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -900623157 );
                        l_U780 = 3;
                    }
                }
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "DELETE" ))
    {
        if (l_U780 < 4)
        {
            if (DOES_CHAR_EXIST( l_U492 ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U492 );
                l_U492 = nil;
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( -900623157 );
            l_U780 = 4;
        }
    };;;;
    return;
}

void sub_9145(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if ((NOT l_U756) AND (l_U739))
        {
            if (l_U583 == 10)
            {
                TASK_GO_STRAIGHT_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 3, 50000 );
            }
            else
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 3, 50000, 0.50000000 );
            }
        }
        else
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 2, 50000, 0.50000000 );
        }
        sub_9299();
    }
    return;
}

void sub_9299()
{
    if ((l_U583 > l_U717) AND (l_U583 < 13))
    {
        if (NOT ((l_U717 == 10) || ((l_U717 == 6) || (l_U717 == 2))))
        {
            SWITCH_PED_ROADS_BACK_TO_ORIGINAL( l_U603[l_U717][0]._fU0, l_U603[l_U717][0]._fU4, l_U603[l_U717][0]._fU8, l_U603[l_U717][1]._fU0, l_U603[l_U717][1]._fU4, l_U603[l_U717][1]._fU8 );
        }
        if (l_U717 == 0)
        {
            SWITCH_ROADS_BACK_TO_ORIGINAL( l_U695[0][0]._fU0, l_U695[0][0]._fU4, l_U695[0][0]._fU8, l_U695[0][1]._fU0, l_U695[0][1]._fU4, l_U695[0][1]._fU8 );
        }
        else if (l_U717 == 4)
        {
            SWITCH_ROADS_BACK_TO_ORIGINAL( l_U695[1][0]._fU0, l_U695[1][0]._fU4, l_U695[1][0]._fU8, l_U695[1][1]._fU0, l_U695[1][1]._fU4, l_U695[1][1]._fU8 );
        }
        else if (l_U717 == 8)
        {
            SWITCH_ROADS_BACK_TO_ORIGINAL( l_U695[2][0]._fU0, l_U695[2][0]._fU4, l_U695[2][0]._fU8, l_U695[2][1]._fU0, l_U695[2][1]._fU4, l_U695[2][1]._fU8 );
        };;;
        if (l_U768)
        {
            PRINTNL();
            PRINTSTRING( "***** TURNED NODES " );
            PRINTINT( l_U717 );
            PRINTSTRING( " BACK ON." );
            PRINTNL();
        }
        l_U717++;
    }
    return;
}

void sub_10110(unknown uParam0)
{
    vector[2] vVar3;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector[2] vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    float[2] fVar17;

    if (COMPARE_STRING( uParam0, "LOAD ASSETS" ))
    {
        if (l_U810 == 0)
        {
            REQUEST_MODEL( 560413584 );
            l_U810 = 1;
        }
    }
    else if (COMPARE_STRING( uParam0, "CREATE" ))
    {
        if (l_U810 < 2)
        {
            if (HAS_MODEL_LOADED( 560413584 ))
            {
                array(ref vVar3, 2);
                array(ref vVar10, 2);
                array(ref fVar17, 2);
                vVar3[0] = {566.77700000, 1392.41000000, 29.85500000};
                vVar3[1] = {565.19290000, 1392.57600000, 29.85500000};
                vVar10[0] = {570.40500000, 1394.11800000, 29.85500000};
                vVar10[1] = {569.60000000, 1391.66100000, 29.85500000};
                fVar17[0] = 175.00000000;
                fVar17[1] = 224.00000000;
                l_U798 = 0;
                for ( l_U798 = 0; l_U798 < 2; l_U798++ )
                {
                    CREATE_CHAR( 26, 560413584, vVar3[l_U798]._fU0, vVar3[l_U798]._fU4, vVar3[l_U798]._fU8, ref l_U482[l_U798], 1 );
                    SET_CHAR_HEADING( l_U482[l_U798], fVar17[l_U798] );
                    SET_CHAR_ACCURACY( l_U482[l_U798], 70 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U482[l_U798], "shootparrm" );
                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U482[l_U798], 1 );
                    SET_CHAR_RELATIONSHIP_GROUP( l_U482[l_U798], 23 );
                    GIVE_WEAPON_TO_CHAR( l_U482[l_U798], 7, 30000, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U482[l_U798], 7, 1 );
                    SET_CHAR_DECISION_MAKER( l_U482[l_U798], l_U584 );
                    SET_COMBAT_DECISION_MAKER( l_U482[l_U798], l_U585 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U482[l_U798], 1 );
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U482[l_U798], vVar10[l_U798], 1.00000000 );
                    sub_3799( 3, l_U482[l_U798], "SUPPLIER_M", 0 );
                }
                sub_3799( 3, l_U482[1], "SUPPLIER_M", 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U482[0], 0, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U482[1], 0, 0, 2 );
                SET_CHAR_COMPONENT_VARIATION( l_U482[0], 1, 1, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U482[1], 1, 0, 2 );
                SET_CHAR_COMPONENT_VARIATION( l_U482[0], 2, 0, 2 );
                SET_CHAR_COMPONENT_VARIATION( l_U482[1], 2, 0, 1 );
                l_U753 = 1;
                l_U810 = 2;
            }
            else
            {
                REQUEST_MODEL( 560413584 );
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "FEEDBACK" ))
    {
        ;
    }
    else if (COMPARE_STRING( uParam0, "DELETE" ))
    {
        if (l_U810 < 3)
        {
            if (DOES_CHAR_EXIST( l_U482[0] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U482[0] );
                l_U482[0] = nil;
            }
            if (DOES_CHAR_EXIST( l_U482[1] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U482[1] );
                l_U482[1] = nil;
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( 560413584 );
            l_U810 = 3;
        }
    };;;;
    return;
}

void sub_11116(unknown uParam0)
{
    vector vVar3;

    if (COMPARE_STRING( uParam0, "LOAD ASSETS" ))
    {
        if (l_U834 == 0)
        {
            REQUEST_MODEL( -1080673049 );
            REQUEST_MODEL( -1220737489 );
            REQUEST_MODEL( -1425428163 );
            l_U834 = 1;
        }
    }
    else if (COMPARE_STRING( uParam0, "CREATE" ))
    {
        if (l_U834 < 2)
        {
            if ((HAS_MODEL_LOADED( -1425428163 )) AND ((HAS_MODEL_LOADED( -1220737489 )) AND (HAS_MODEL_LOADED( -1080673049 ))))
            {
                CREATE_CHAR( 4, -1080673049, 534.80000000, 1571.83000000, 13.00000000, ref l_U486[0], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U486[0] );
                SET_CHAR_HEADING( l_U486[0], -120.58000000 );
                TASK_PLAY_ANIM( l_U486[0], "braziera", "missjacob2", 8.00000000, 1, 0, 0, 0, -1 );
                CREATE_CHAR( 4, -1220737489, 534.90000000, 1570.43000000, 13.44000000, ref l_U486[1], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U486[1] );
                SET_CHAR_HEADING( l_U486[1], -45.21000000 );
                TASK_PLAY_ANIM( l_U486[1], "brazierb", "missjacob2", 8.00000000, 1, 0, 0, 0, -1 );
                CREATE_OBJECT( -1425428163, 535.59440000, 1571.17500000, 13.76700000, ref l_U599, 1 );
                vVar3 = {0.00000000, 0.00000000, 0.60000000};
                l_U600 = START_PTFX_ON_OBJ( "ambient_fire_generic", l_U599, vVar3, 0.00000000, 0.00000000, 0.10000000, 0.80000000 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1080673049 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1220737489 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1425428163 );
                l_U834 = 2;
            }
            else
            {
                PRINTNL();
                PRINTSTRING( "WAITING ON brazier bum stuff" );
                REQUEST_MODEL( -1080673049 );
                REQUEST_MODEL( -1220737489 );
                REQUEST_MODEL( -1425428163 );
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "DELETE" ))
    {
        if (l_U834 < 3)
        {
            if (DOES_CHAR_EXIST( l_U486[0] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U486[0] );
                l_U486[0] = nil;
            }
            if (DOES_CHAR_EXIST( l_U486[1] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U486[1] );
                l_U486[1] = nil;
            }
            if (DOES_OBJECT_EXIST( l_U599 ))
            {
                if (l_U600 > 0)
                {
                    STOP_PTFX( l_U600 );
                }
                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U599 );
            }
            l_U834 = 3;
        }
    };;;
    return;
}

void sub_11976(unknown uParam0)
{
    if (COMPARE_STRING( uParam0, "LOAD ASSETS" ))
    {
        if (l_U833 == 0)
        {
            REQUEST_MODEL( -1080673049 );
            l_U833 = 1;
        }
    }
    else if (COMPARE_STRING( uParam0, "CREATE" ))
    {
        if (l_U833 < 2)
        {
            if (HAS_MODEL_LOADED( -1080673049 ))
            {
                CREATE_CHAR( 26, -1080673049, 522.94010000, 1507.48500000, 12.18160000, ref l_U494, 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U494 );
                SET_CHAR_HEADING( l_U494, 343.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U494, 1 );
                TASK_PLAY_ANIM( l_U494, "idle", "missjacob2", 4.00000000, 1, 0, 0, 0, -1 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1080673049 );
                l_U833 = 2;
            }
            else
            {
                PRINTNL();
                PRINTSTRING( "WAITING ON M_M_genbum_01" );
                REQUEST_MODEL( -1080673049 );
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "DELETE" ))
    {
        if (l_U833 < 3)
        {
            if (DOES_CHAR_EXIST( l_U494 ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U494 );
                l_U494 = nil;
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1080673049 );
            l_U833 = 3;
        }
    };;;
    return;
}

void sub_12403(unknown uParam0)
{
    int iVar3;

    if (COMPARE_STRING( uParam0, "LOAD ASSETS" ))
    {
        REQUEST_MODEL( -713569950 );
        l_U772 = 1;
    }
    else if (COMPARE_STRING( uParam0, "CREATE" ))
    {
        if (l_U772)
        {
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref l_U505, ref iVar3 );
            if (iVar3 == -1)
            {
                REQUEST_MODEL( 2016857647 );
                while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                {
                    WAIT( 0 );
                }
                l_U505 = 2016857647;
            }
            while ((NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 ))) || (NOT (HAS_MODEL_LOADED( -713569950 ))))
            {
                WAIT( 0 );
            }
            CLEAR_AREA( 563.43020000, 1535.35500000, 15.94780000, 5.00000000, 1 );
            CREATE_CAR( l_U505, 563.43020000, 1535.35500000, 15.94780000, ref l_U504, 1 );
            SET_CAR_HEADING( l_U504, 90.00000000 );
            CREATE_RANDOM_CHAR_AS_DRIVER( l_U504, ref l_U501 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U501 );
            TASK_CAR_DRIVE_TO_COORD( l_U501, l_U504, 439.49350000, 1533.93100000, 15.45670000, 8.00000000, 0, l_U505, 3, 0, -1 );
            CLEAR_AREA( 504.12400000, 1528.24000000, 13.27830000, 5.00000000, 1 );
            CREATE_CAR( -713569950, 504.12400000, 1528.24000000, 13.27830000, ref l_U503, 1 );
            SET_CAR_HEADING( l_U503, 270.00000000 );
            CREATE_RANDOM_CHAR_AS_DRIVER( l_U503, ref l_U500 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U500 );
            TASK_CAR_DRIVE_TO_COORD( l_U500, l_U503, 568.94830000, 1528.80200000, 16.35860000, 8.00000000, 0, -713569950, 3, 0, -1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 2016857647 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -713569950 );
            if (NOT (IS_CHAR_DEAD( l_U481 )))
            {
                l_U583++;
                sub_9145( l_U481, l_U519[l_U583] );
            }
        }
        else
        {
            l_U583++;
            sub_9145( l_U481, l_U519[l_U583] );
        }
    }
    else if (COMPARE_STRING( uParam0, "FEEDBACK" ))
    {
        if (l_U772)
        {
            if (NOT (IS_CAR_DEAD( l_U503 )))
            {
                GET_CAR_COORDINATES( l_U503, ref l_U791._fU0, ref l_U791._fU4, ref l_U791._fU8 );
                PRINTNL();
                PRINTSTRING( "BUS COORDS- " );
                PRINTVECTOR( l_U791 );
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "DELETE" ))
    {
        if (DOES_VEHICLE_EXIST( l_U504 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U504 );
            l_U504 = nil;
        }
        if (DOES_VEHICLE_EXIST( l_U503 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U503 );
            l_U503 = nil;
        }
    };;;;
    return;
}

void sub_13279(unknown uParam0)
{
    float fVar3;

    if (COMPARE_STRING( uParam0, "LOAD ASSETS" ))
    {
        REQUEST_MODEL( -1962071130 );
        REQUEST_CAR_RECORDING( 201 );
        l_U771 = 1;
    }
    else if (COMPARE_STRING( uParam0, "FEEDBACK" ))
    {
        if (l_U723)
        {
            if (l_U771)
            {
                GET_GAME_TIMER( ref l_U719 );
                l_U718 = l_U719 - l_U720;
                l_U721 = TO_FLOAT( l_U718 );
                l_U721 /= 1000.00000000;
                l_U720 = l_U719;
                switch (l_U722)
                {
                    case 0:
                    sub_11976( "DELETE" );
                    while ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 201 ))) || ((NOT (HAS_MODEL_LOADED( -1962071130 ))) || (NOT (CAN_CREATE_RANDOM_CHAR( 0, 0 )))))
                    {
                        WAIT( 0 );
                    }
                    sub_13596( 545.09140000, 1450.16900000, 9.93269300, 30.00000000 );
                    TASK_CHAR_SLIDE_TO_COORD( l_U481, 545.40000000, 1464.20000000, 9.36909900, 180, 100 );
                    l_U722++;
                    break;
                    case 1:
                    if (NOT (IS_CHAR_INJURED( l_U481 )))
                    {
                        if (sub_13721( l_U481, 68 ))
                        {
                            TASK_GO_STRAIGHT_TO_COORD( l_U481, 545.49150000, 1450.16900000, 9.93269300, 4, -1 );
                            SET_CHAR_DECISION_MAKER( l_U481, l_U587 );
                            CREATE_CAR( -1962071130, 0.00000000, 0.00000000, 0.00000000, ref l_U502, 1 );
                            CREATE_RANDOM_CHAR_AS_DRIVER( l_U502, ref l_U493 );
                            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U493 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U493, 1 );
                            MARK_MODEL_AS_NO_LONGER_NEEDED( -1962071130 );
                            SETTIMERB( 0 );
                            if (NOT (IS_CAR_DEAD( l_U502 )))
                            {
                                START_PLAYBACK_RECORDED_CAR( l_U502, 201 );
                                sub_13958( l_U502, TO_FLOAT( l_U782 ) );
                            }
                            l_U722++;
                        }
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_DEAD( l_U481 )))
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( l_U481, 545.31430000, 1450.16900000, 9.93269300, 1.00000000, 1.00000000, 1.00000000, 0 ))
                        {
                            SET_CHAR_HEADING( l_U481, 158.00000000 );
                            FREEZE_CHAR_POSITION( l_U481, 1 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U481, "vault_bonnet_Stop", "missjacob2", 1000.00000000, 0, 1, 1, 0, -1 );
                            sub_14218( "LJ2_BONNET", 0, 1, ref l_U733, 4, 1 );
                            if (NOT (IS_CAR_DEAD( l_U502 )))
                            {
                                SOUND_CAR_HORN( l_U502, 2000 );
                            }
                            l_U722++;
                        }
                    }
                    break;
                    case 3:
                    if ((IS_CHAR_PLAYING_ANIM( l_U481, "missjacob2", "vault_bonnet_Stop" )) AND (NOT (IS_CHAR_DEAD( l_U481 ))))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( l_U481, "missjacob2", "vault_bonnet_Stop", ref fVar3 );
                    }
                    if (((fVar3 > 0.70000000) AND (IS_CHAR_PLAYING_ANIM( l_U481, "missjacob2", "vault_bonnet_Stop" ))) || (NOT (IS_CHAR_PLAYING_ANIM( l_U481, "missjacob2", "vault_bonnet_Stop" ))))
                    {
                        FREEZE_CHAR_POSITION( l_U481, 0 );
                        l_U583++;
                        l_U767 = 1;
                        sub_9145( l_U481, l_U519[l_U583] );
                        SET_CHAR_DECISION_MAKER( l_U481, l_U584 );
                        l_U723 = 0;
                    }
                    else
                    {
                        SET_CHAR_ANIM_SPEED( l_U481, "missjacob2", "vault_bonnet_Stop", 0.80000000 );
                        GET_CHAR_COORDINATES( l_U481, ref l_U791._fU0, ref l_U791._fU4, ref l_U791._fU8 );
                        if (l_U768)
                        {
                            PRINTNL();
                            PRINTSTRING( "moving dealer across bonnet" );
                            PRINTNL();
                        }
                        l_U791._fU4 -= l_U721 * 3.20000000;
                        SET_CHAR_COORDINATES_NO_OFFSET( l_U481, l_U791._fU0, l_U791._fU4, l_U791._fU8 );
                    }
                    break;
                    default: break;
                }
            }
            else
            {
                l_U583++;
                sub_9145( l_U481, l_U519[l_U583] );
                l_U723 = 0;
            }
        }
    }
    else if (COMPARE_STRING( uParam0, "DELETE" ))
    {
        if (DOES_VEHICLE_EXIST( l_U502 ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U502 );
            l_U502 = nil;
            REMOVE_CAR_RECORDING( 201 );
        }
        if (DOES_CHAR_EXIST( l_U493 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U493 );
            l_U493 = nil;
        }
    };;;
    return;
}

void sub_13596(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, uParam3 );
    CLEAR_AREA_OF_CHARS( uParam0, uParam1, uParam2, uParam3 );
    return;
}

int sub_13721(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

void sub_13958(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
        {
            uVar4 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( uParam0, uParam1 - uVar4 );
        }
    }
    return;
}

void sub_14218(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_14243( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_14243(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_5019( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_15052(unknown uParam0)
{
    unknown[10] uVar3;
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
    float fVar34;
    vector vVar35;
    vector vVar38;

    if (COMPARE_STRING( uParam0, "LOAD ASSETS" ))
    {
        REQUEST_MODEL( -1305843483 );
        l_U773 = 1;
    }
    else if (COMPARE_STRING( uParam0, "CREATE" ))
    {
        if (l_U773)
        {
            while (NOT (HAS_MODEL_LOADED( -1305843483 )))
            {
                WAIT( 0 );
            }
            array(ref uVar3, 10);
            uVar3[0] = {l_U787._fU0 - l_U786, l_U787._fU4, l_U787._fU8};
            uVar3[1] = {l_U787._fU0, l_U787._fU4, l_U787._fU8};
            uVar3[2] = {l_U787._fU0 - l_U786, l_U787._fU4, l_U787._fU8 + l_U785};
            uVar3[3] = {l_U787._fU0, l_U787._fU4, l_U787._fU8 + l_U785};
            uVar3[4] = {l_U787._fU0 - l_U786, l_U787._fU4, l_U787._fU8 + (l_U785 * 2)};
            uVar3[5] = {l_U787._fU0, l_U787._fU4, l_U787._fU8 + (l_U785 * 2)};
            uVar3[6] = {l_U787._fU0 - l_U786, l_U787._fU4, l_U787._fU8 + (l_U785 * 3)};
            uVar3[7] = {l_U787._fU0, l_U787._fU4, l_U787._fU8 + (l_U785 * 3)};
            uVar3[8] = {l_U787._fU0 - l_U786, l_U787._fU4, l_U787._fU8 + (l_U785 * 4)};
            uVar3[9] = {l_U787._fU0, l_U787._fU4, l_U787._fU8 + (l_U785 * 4)};
            for ( l_U798 = 0; l_U798 <= 9; l_U798++ )
            {
                CREATE_OBJECT( -1305843483, uVar3[l_U798]._fU0, uVar3[l_U798]._fU4, uVar3[l_U798]._fU8, ref l_U588[l_U798], 1 );
                FREEZE_OBJECT_POSITION( l_U588[l_U798], 1 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1305843483 );
        }
    }
    else if (COMPARE_STRING( uParam0, "FEEDBACK" ))
    {
        if (l_U773)
        {
            if (l_U746)
            {
                if ((IS_CHAR_PLAYING_ANIM( l_U481, "missjacob2", "crates" )) AND (NOT (IS_CHAR_DEAD( l_U481 ))))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U481, "missjacob2", "crates", ref fVar34 );
                }
                if ((NOT l_U747) AND (fVar34 > 0.45000000))
                {
                    vVar35 = {-0.40000000, 1.00000000, 0.30000000};
                    vVar38 = {0.00000000, 0.00000000, 0.00000000};
                    for ( l_U798 = 0; l_U798 <= 9; l_U798++ )
                    {
                        if (((l_U798 mod 2) == 0) AND (l_U798 > 1))
                        {
                            vVar35.x *= 1.20000000;
                            vVar35.y *= 1.20000000;
                            vVar35.z *= 1.20000000;
                            GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 0.20000000, ref l_U797 );
                            vVar35.x *= 1.00000000 + l_U797;
                            GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 0.20000000, ref l_U797 );
                            vVar35.y *= 1.00000000 + l_U797;
                        }
                        FREEZE_OBJECT_POSITION( l_U588[l_U798], 0 );
                        APPLY_FORCE_TO_OBJECT( l_U588[l_U798], 1, vVar35, vVar38, 0, 0, 0, 1 );
                    }
                    sub_14218( "LJ2_BOXES", 0, 1, ref l_U733, 4, 1 );
                    l_U583++;
                    sub_9145( l_U481, l_U519[l_U583] );
                    sub_11116( "DELETE" );
                    sub_12403( "DELETE" );
                    l_U749 = 1;
                    l_U747 = 1;
                }
            }
            if (NOT l_U748)
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U481 );
                SET_CHAR_COORDINATES( l_U481, 524.50000000, 1495.62600000, 12.43070000 );
                SET_CHAR_HEADING( l_U481, 180.00000000 );
                l_U748 = 1;
            }
            if (NOT l_U746)
            {
                if (NOT (IS_CHAR_INJURED( l_U481 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U481 );
                    TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U481, "crates", "missjacob2", 100.00000000, 0, 0, 0, 0, 0 );
                }
                else
                {
                    l_U583++;
                    sub_9145( l_U481, l_U519[l_U583] );
                    sub_11116( "DELETE" );
                    sub_12403( "DELETE" );
                    l_U747 = 1;
                }
                l_U746 = 1;
            }
        }
        else
        {
            l_U583++;
            sub_9145( l_U481, l_U519[l_U583] );
            sub_11116( "DELETE" );
            sub_12403( "DELETE" );
            l_U747 = 1;
        }
    }
    else if (COMPARE_STRING( uParam0, "DELETE" ))
    {
        if (DOES_OBJECT_EXIST( l_U588[0] ))
        {
            for ( l_U798 = 0; l_U798 <= 9; l_U798++ )
            {
                DELETE_OBJECT( ref l_U588[l_U798] );
            }
        }
    };;;;
    return;
}

void sub_16700()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_16769()
{
    for ( l_U798 = 0; l_U798 < 12; l_U798++ )
    {
        SWITCH_PED_ROADS_BACK_TO_ORIGINAL( l_U603[l_U798][0]._fU0, l_U603[l_U798][0]._fU4, l_U603[l_U798][0]._fU8, l_U603[l_U798][1]._fU0, l_U603[l_U798][1]._fU4, l_U603[l_U798][1]._fU8 );
        l_U717 = 12;
    }
    for ( l_U798 = 0; l_U798 < 3; l_U798++ )
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U695[l_U798][0]._fU0, l_U695[l_U798][0]._fU4, l_U695[l_U798][0]._fU8, l_U695[l_U798][1]._fU0, l_U695[l_U798][1]._fU4, l_U695[l_U798][1]._fU8 );
    }
    return;
}

void sub_17211()
{
    LOAD_ADDITIONAL_TEXT( "FLW_PED", 0 );
    LOAD_ADDITIONAL_TEXT( "LJ2AUD", 6 );
    sub_17264( "LJ2AUD" );
    sub_3799( 0, sub_2543(), "NIKO", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION/LJ2_FOLLOW_PED_TO_KILL" )))
    {
        WAIT( 0 );
    }
    SWITCH_PED_PATHS_OFF( 1345.60000000, 112.80000000, 0.00000000, 1322.40000000, 120.20000000, 100.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 1345.60000000, 112.80000000, 0.00000000, 1322.40000000, 120.20000000, 100.00000000 );
    sub_17569( 1325.30000000, 113.10000000, 31.46160000, 91, 1332, 116, 30, 20, -1, 0 );
    SWITCH_PED_PATHS_OFF( 481.26790000, 1569.89800000, 19.92441000, 443.32730000, 1563.45300000, 17.27225000 );
    ADD_SCENARIO_BLOCKING_AREA( 481.26790000, 1569.89800000, 19.92441000, 443.32730000, 1563.45300000, 17.27225000 );
    if (g_U9893._fU24)
    {
        START_CUTSCENE_NOW( "lilj2_a" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "lilj2_a" );
    }
    CLEAR_AREA( 503.19000000, 1574.76000000, 17.50000000, 100, 1 );
    FORCE_WEATHER_NOW( 1 );
    SWITCH_PED_PATHS_ON( 1345.60000000, 112.80000000, 0.00000000, 1322.40000000, 120.20000000, 100.00000000 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    l_U602 = GET_SOUND_ID();
    SET_WANTED_MULTIPLIER( 0.20000000 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
    sub_18155();
    l_U519[0] = {503.19000000, 1574.76000000, 17.50000000};
    l_U519[1] = {529.09000000, 1579.90000000, 16.20000000};
    l_U519[2] = {535.76000000, 1567.08000000, 14.90000000};
    l_U519[3] = {535.54000000, 1546.06000000, 14.50000000};
    l_U519[4] = {527.39000000, 1518.36000000, 14.50000000};
    l_U519[5] = {524.50000000, 1495.63000000, 12.40000000};
    l_U519[6] = {544.50000000, 1483.06000000, 11.60000000};
    l_U519[7] = {545.71000000, 1465.14000000, 9.40000000};
    l_U519[8] = {542.60000000, 1439.40000000, 9.30000000};
    l_U519[9] = {543.57000000, 1407.05000000, 10.30000000};
    l_U519[10] = {543.66000000, 1403.30000000, 10.10000000};
    l_U519[11] = {554.17000000, 1401.48000000, 10.00000000};
    l_U519[12] = {561.26000000, 1404.63000000, 10.50000000};
    l_U519[13] = {566.25000000, 1402.35000000, 14.80000000};
    l_U519[14] = {566.25000000, 1402.35000000, 18.60000000};
    l_U519[15] = {566.25000000, 1402.35000000, 22.30000000};
    l_U519[16] = {566.25000000, 1402.35000000, 26.10000000};
    l_U519[17] = {569.11000000, 1404.40000000, 30.80000000};
    l_U519[18] = {559.67000000, 1393.78000000, 30.80000000};
    l_U519[19] = {564.14000000, 1391.20000000, 30.90000000};
    l_U603[0][0] = {446.07740000, 1561.12800000, 0.00000000};
    l_U603[0][1] = {506.73160000, 1582.51700000, 100.00000000};
    l_U603[1][0] = {506.39940000, 1576.37500000, 0.00000000};
    l_U603[1][1] = {543.51240000, 1582.10100000, 100.00000000};
    l_U603[2][0] = {0.00000000, 0.00000000, 0.00000000};
    l_U603[2][1] = {0.00000000, 0.00000000, 0.00000000};
    l_U603[3][0] = {533.16760000, 1544.75200000, 0.00000000};
    l_U603[3][1] = {543.99010000, 1583.72400000, 100.00000000};
    l_U603[4][0] = {521.56980000, 1519.62300000, 0.00000000};
    l_U603[4][1] = {542.35540000, 1546.16800000, 100.00000000};
    l_U603[5][0] = {521.32180000, 1484.16600000, 0.00000000};
    l_U603[5][1] = {529.33370000, 1519.94600000, 100.00000000};
    l_U603[6][0] = {0.00000000, 0.00000000, 0.00000000};
    l_U603[6][1] = {0.00000000, 0.00000000, 0.00000000};
    l_U603[7][0] = {526.77430000, 1464.65900000, 0.00000000};
    l_U603[7][1] = {551.54330000, 1494.41400000, 100.00000000};
    l_U603[8][0] = {521.09080000, 1441.80800000, 0.00000000};
    l_U603[8][1] = {561.12450000, 1465.86000000, 100.00000000};
    l_U603[9][0] = {540.84590000, 1404.59300000, 0.00000000};
    l_U603[9][1] = {558.85900000, 1439.60300000, 100.00000000};
    l_U603[10][0] = {0.00000000, 0.00000000, 0.00000000};
    l_U603[10][1] = {0.00000000, 0.00000000, 0.00000000};
    l_U603[11][0] = {541.32950000, 1397.17000000, 0.00000000};
    l_U603[11][1] = {555.90070000, 1405.89300000, 100.00000000};
    l_U603[12][0] = {556.05170000, 1383.63500000, 0.00000000};
    l_U603[12][1] = {572.75130000, 1405.45100000, 100.00000000};
    l_U695[0][0] = {488.10590000, 1541.70600000, 0.00000000};
    l_U695[0][1] = {501.74640000, 1601.62000000, 100.00000000};
    l_U695[1][0] = {500.37700000, 1524.11600000, 0.00000000};
    l_U695[1][1] = {579.10500000, 1536.01700000, 100.00000000};
    l_U695[2][0] = {500.01770000, 1441.37600000, 0.00000000};
    l_U695[2][1] = {579.55680000, 1464.37300000, 100.00000000};
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 261592072, 549.40000000, 1439.20000000, 12.00000000, 1, 0 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 261592072, 552.20000000, 1424.00000000, 12.00000000, 1, 0 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U584 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U587 );
    N_1061756705( l_U587, 12 );
    N_1061756705( l_U587, 30 );
    N_1061756705( l_U587, 56 );
    N_1061756705( l_U587, 73 );
    N_1061756705( l_U587, 75 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U585 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U586 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U585, 0 );
    SET_RELATIONSHIP( 5, 23, 0 );
    sub_19872();
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 804737190, 561.97610000, 1391.62600000, 30.85500000, 0, 0.00000000 );
    LOAD_SCENE( 1332.75500000, 116.76190000, 30.68770000 );
    SET_CHAR_COORDINATES( sub_2543(), 1332.75500000, 116.76190000, 30.68770000 );
    SET_CHAR_HEADING( sub_2543(), 201.26380000 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2543() );
    SET_PLAYER_CONTROL( sub_16700(), 1 );
    SET_CAM_BEHIND_PED( sub_2543() );
    sub_20169();
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_17264(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_17281();
    return;
}

void sub_17281()
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

void sub_17569(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, boolean bParam9)
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

void sub_18155()
{
    l_U790 = CREATE_WIDGET_GROUP( "Shadow - Debug" );
    ADD_WIDGET_FLOAT_SLIDER( "spookDistLo", ref l_U731, 0.00000000, 30.00000000, 0.50000000 );
    ADD_WIDGET_FLOAT_SLIDER( "spookDistHi", ref l_U732, 0.00000000, 30.00000000, 0.50000000 );
    ADD_WIDGET_SLIDER( "bonnetCarDelay", ref l_U782, 0, 2000, 50 );
    END_WIDGET_GROUP();
    return;
}

void sub_19872()
{
    for ( l_U798 = 0; l_U798 < 3; l_U798++ )
    {
        SWITCH_ROADS_OFF( l_U695[l_U798][0]._fU0, l_U695[l_U798][0]._fU4, l_U695[l_U798][0]._fU8, l_U695[l_U798][1]._fU0, l_U695[l_U798][1]._fU4, l_U695[l_U798][1]._fU8 );
    }
    return;
}

void sub_20169()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_20277()
{
    if (DOES_BLIP_EXIST( l_U507[0] ))
    {
        REMOVE_BLIP( l_U507[0] );
    }
    if (DOES_BLIP_EXIST( l_U507[1] ))
    {
        REMOVE_BLIP( l_U507[1] );
    }
    if (DOES_BLIP_EXIST( l_U506 ))
    {
        REMOVE_BLIP( l_U506 );
    }
    if (l_U783 == -1)
    {
        CLEAR_WANTED_LEVEL( sub_16700() );
        GET_GAME_TIMER( ref l_U783 );
    }
    else
    {
        GET_GAME_TIMER( ref l_U784 );
        if ((l_U784 - 3000) > l_U783)
        {
            sub_20456();
        }
    }
    return;
}

void sub_20456()
{
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    sub_20498( 3, "LJ2_CALL3", "LJ2AUD", 0 );
    sub_21084();
    sub_2400();
    return;
}

void sub_20498(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_20542( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_20542(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_21084()
{
    sub_21093();
    return;
}

void sub_21093()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_21111();
    sub_21170( iVar2, iVar3, iVar4 );
    return;
}

void sub_21111()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_21170(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 3;
    sub_21201( iVar5, uParam0, uParam1, uParam2, "Friend_4" );
    return;
}

void sub_21201(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_21297( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_21297( ref cVar9 );
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
            sub_21297( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_21297( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_21297( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_21297( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_21874( iParam0, iVar7 );;;
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
                sub_22271( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_22271( 0, 4 );
            }
        }
    }
    if (NOT (sub_22360( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_16700(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_16700() );
    }
    sub_1498();
    bVar27 = true;
    uVar28 = sub_21874( iParam0, iVar7 );
    uVar29 = sub_955( iParam0 );
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
                sub_31736( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_32166();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_32251( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_32308( iParam0 );
                sub_32347( 0 );
                sub_1396( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_32455();
        }
    }
    if (bParam2)
    {
        sub_32166();
        sub_32543();
        sub_32347( 0 );
    }
    if (bParam3)
    {
        sub_32166();
        sub_32583();
        sub_32347( 0 );
        sub_1396( uVar29, 0 );
    }
    sub_842();
    return;
}

void sub_21297(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_21874(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1354( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_22271(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_22360(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_22568( uParam1 );
        break;
        case 1:
        bVar8 = sub_24646( uParam1 );
        break;
        case 2:
        bVar8 = sub_24872( uParam1 );
        break;
        case 3:
        bVar8 = sub_25022( uParam1 );
        break;
        case 4:
        bVar8 = sub_25300( uParam1 );
        break;
        case 5:
        bVar8 = sub_25603( uParam1 );
        break;
        case 6:
        bVar8 = sub_25802( uParam1 );
        break;
        case 7:
        bVar8 = sub_26028( uParam1 );
        break;
        case 8:
        bVar8 = sub_26263( uParam1 );
        break;
        case 9:
        bVar8 = sub_26638( uParam1 );
        break;
        case 10:
        bVar8 = sub_26885( uParam1 );
        break;
        case 11:
        bVar8 = sub_27024( uParam1 );
        break;
        case 12:
        bVar8 = sub_27323( uParam1 );
        break;
        case 13:
        bVar8 = sub_27551( uParam1 );
        break;
        case 14:
        bVar8 = sub_27838( uParam1 );
        break;
        case 15:
        bVar8 = sub_28120( uParam1 );
        break;
        case 16:
        bVar8 = sub_28402( uParam1 );
        break;
        case 17:
        bVar8 = sub_28603( uParam1 );
        break;
        case 18:
        bVar8 = sub_28676( uParam1 );
        break;
        case 19:
        bVar8 = sub_28890( uParam1 );
        break;
        case 20:
        bVar8 = sub_29143( uParam1 );
        break;
        case 21:
        bVar8 = sub_29390( uParam1 );
        break;
        case 22:
        bVar8 = sub_29591( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_24251( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_21874( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_29914( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_22568(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_22847( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_22847( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_22847( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_22847( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_22847( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_22847( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_22847( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_22847( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_22847( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_22847( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_22847( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_22847( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_22847( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_22847( iVar3, 0, 3, 1, 0, 0 );
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
        sub_22847( iVar3, 0, sub_24129(), sub_24395(), 0, 0 );
        break;
        default:
        sub_24554( "Friend 1", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Friend 1", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_22847(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_22858( uParam1 );
    sub_23032( uParam0, 0, uParam2 );
    sub_23032( uParam0, 1, uParam3 );
    sub_23032( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_21111();
    return;
}

void sub_22858(unknown uParam0)
{
    ADD_SCORE( sub_16700(), uParam0 );
    sub_22883( uParam0 );
    return;
}

void sub_22883(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1354( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_23032(unknown uParam0, int iParam1, int iParam2)
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
        sub_23189( uParam0 );
    }
    return;
}

void sub_23189(unknown uParam0)
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

int sub_24129()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_24251( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_24251(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_24395()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_24251( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_24554(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_24646(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22847( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_24554( "Contact 2", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 2", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24872(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_22847( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_24554( "Girl 3", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Girl 3", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25022(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_22847( iVar3, 0, sub_24129(), sub_24395(), 0, 0 );
        break;
        default:
        sub_24554( "Friend 4", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Friend 4", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25300(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22847( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_22847( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_22847( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_22847( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_24554( "Contact 5", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 5", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25603(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_24554( "Contact 7", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 7", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25802(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22847( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_24554( "Contact 7b", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 7b", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26028(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_22847( iVar3, 0, sub_24129(), sub_24395(), 0, 0 );
        break;
        default:
        sub_24554( "Friend 8", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Friend 8", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26263(unknown uParam0)
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
        sub_22847( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_22847( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_22847( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_22847( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_22847( iVar3, 0, sub_24129(), sub_24395(), 0, 0 );
        break;
        default:
        sub_24554( "Friend 9", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Friend 9", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26638(unknown uParam0)
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
        sub_22847( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_22847( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_22847( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_24554( "Contact 10", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_24554( "Contact 10", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26885(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_24554( "Girl 11", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Girl 11", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27024(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22847( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_22847( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_22847( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_22847( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_22847( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_24554( "Contact 12", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 12", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27323(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22847( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_24554( "Contact 13", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 13", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27551(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_22847( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_22847( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_22847( iVar3, 0, sub_24129(), sub_24395(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_24554( "Friend 15", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Friend 15", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27838(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22847( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_22847( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_22847( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_24554( "Contact 16", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 16", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28120(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_22847( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_22847( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_22847( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_24554( "Contact 18", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 18", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28402(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_24554( "Contact 19", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 19", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28603(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_24554( "Girl 20", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28676(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_24554( "Contact 21", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 21", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28890(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22847( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_22847( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_24554( "Contact 22", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 22", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29143(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_22847( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22847( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_22847( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_24554( "Contact 24", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 24", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29390(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22847( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22847( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22847( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_24554( "Contact 25", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24554( "Contact 25", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29591(unknown uParam0)
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
        sub_22847( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_24554( "Girl 26", 1 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_24554( "Girl 26", 0 );
        sub_22847( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_29914(int iParam0, int iParam1)
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
    if (sub_29962( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_30693( iParam1 );
    }
    return;
}

int sub_29962(int iParam0, int iParam1)
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
            sub_30102( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_30102(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_30284( 0 );
    return;
}

void sub_30284(boolean bParam0)
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
        sub_30539();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_30539()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_30693(int iParam0)
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
        sub_31026( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_31026( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_31026( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_31026( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_31026( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_31026( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_31026( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_31026( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_31026( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_31026( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_31026( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_31026( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_31026( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_31026( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_31026( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_31026( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_31026( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_31026( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_31026( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_31026(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_31736(unknown uParam0, unknown uParam1)
{
    sub_31755( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_31755(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_32166()
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

int sub_32251(int iParam0, int iParam1)
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

void sub_32308(unknown uParam0)
{
    sub_741();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_32347(unknown uParam0)
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

void sub_32455()
{
    sub_32464();
    return;
}

void sub_32464()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_32543()
{
    sub_32464();
    return;
}

void sub_32583()
{
    sub_32464();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_32712()
{
    int iVar2;
    unknown uVar3;

    if (NOT l_U743)
    {
        if ((NOT l_U766) AND (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
        {
            LOAD_SCENE( 492.11740000, 1585.72300000, 18.30500000 );
            GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref iVar2, ref l_U798 );
            if (l_U798 == -1)
            {
                REQUEST_MODEL( 2016857647 );
                while (NOT (HAS_MODEL_LOADED( 2016857647 )))
                {
                    WAIT( 0 );
                }
                iVar2 = 2016857647;
            }
            CREATE_CAR( iVar2, 498.02910000, 1524.74900000, 12.83930000, ref uVar3, 1 );
            SET_CAR_HEADING( uVar3, 0.00000000 );
            SET_CAR_COORDINATES( uVar3, 498.02910000, 1524.74900000, 12.83930000 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( iVar2 );
            WARP_CHAR_INTO_CAR( sub_2543(), uVar3 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar3 );
            SET_CAM_BEHIND_PED( sub_2543() );
            l_U766 = 1;
        }
    }
    else if (l_U583 < 3)
    {
        sub_11976( "LOAD ASSETS" );
        if (l_U739)
        {
            sub_15052( "LOAD ASSETS" );
        }
        sub_11976( "CREATE" );
        sub_15052( "CREATE" );
        if (l_U739)
        {
            sub_12403( "LOAD ASSETS" );
        }
        LOAD_SCENE( 535.54000000, 1560.00000000, 13.50000000 );
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            SET_CHAR_COORDINATES( l_U481, 535.54000000, 1560.00000000, 13.50000000 );
            SET_CHAR_HEADING( l_U481, 180.00000000 );
            l_U583 = 3;
            sub_9145( l_U481, l_U519[l_U583] );
        }
        SET_CHAR_COORDINATES( sub_2543(), 535.54000000, 1565.00000000, 13.50000000 );
        SET_CHAR_HEADING( sub_2543(), 180.00000000 );
        SET_CAM_BEHIND_PED( sub_2543() );
    }
    else if (l_U583 < 6)
    {
        sub_11116( "DELETE" );
        sub_12403( "DELETE" );
        sub_15052( "DELETE" );
        if (l_U739)
        {
            sub_13279( "LOAD ASSETS" );
        }
        LOAD_SCENE( 542.61000000, 1488.62000000, 9.69999900 );
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            SET_CHAR_COORDINATES( l_U481, 542.61000000, 1488.62000000, 9.69999900 );
            SET_CHAR_HEADING( l_U481, 180.00000000 );
            l_U583 = 6;
            sub_9145( l_U481, l_U519[l_U583] );
        }
        SET_CHAR_COORDINATES( sub_2543(), 535.77000000, 1491.54000000, 9.40000000 );
        SET_CHAR_HEADING( sub_2543(), 245.00000000 );
        SET_CAM_BEHIND_PED( sub_2543() );
    }
    else if (l_U583 < 11)
    {
        sub_13279( "DELETE" );
        sub_8199( "LOAD ASSETS" );
        sub_8199( "CREATE" );
        LOAD_SCENE( 551.02560000, 1399.08100000, 10.14790000 );
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            SET_CHAR_COORDINATES( l_U481, 550.03000000, 1396.95700000, 10.15410000 );
            SET_CHAR_HEADING( l_U481, 325.00000000 );
            l_U583 = 11;
            sub_9145( l_U481, l_U519[l_U583] );
        }
        SET_CHAR_COORDINATES( sub_2543(), 547.01910000, 1396.57300000, 10.15830000 );
        SET_CHAR_HEADING( sub_2543(), 325.00000000 );
        SET_CAM_BEHIND_PED( sub_2543() );
    }
    else if (l_U583 < 18)
    {
        sub_7068( "DELETE" );
        sub_6358( "DELETE" );
        sub_3565( "DELETE" );
        sub_8199( "DELETE" );
        sub_2452( "DELETE" );
        sub_10110( "LOAD ASSETS" );
        sub_10110( "CREATE" );
        LOAD_SCENE( 566.41200000, 1402.17000000, 29.85380000 );
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            SET_CHAR_COORDINATES( l_U481, 566.41200000, 1402.17000000, 29.85380000 );
            SET_CHAR_HEADING( l_U481, 95.00000000 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U481, "Room_ten_topflr" );
            l_U583 = 18;
            sub_9145( l_U481, l_U519[l_U583] );
        }
        SET_CHAR_COORDINATES( sub_2543(), 569.66930000, 1402.38800000, 29.85380000 );
        SET_CHAR_HEADING( sub_2543(), 95.00000000 );
        SET_ROOM_FOR_CHAR_BY_NAME( sub_2543(), "Room_ten_topflr" );
        WAIT( 0 );
        GET_GAME_VIEWPORT_ID( ref l_U801 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U801, "Room_ten_topflr" );
        SET_CAM_BEHIND_PED( sub_2543() );
    };;;;;
    return;
}

int sub_34398(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2543() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2543(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2543() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2543(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2543()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2543() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2543() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_16700() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_16700() )))
    {
        return 0;
    }
    return 1;
}

void sub_34688()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    boolean bVar9;
    boolean bVar10;
    unknown uVar11;

    iVar4 = 0;
    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2543() )))
    {
        bVar10 = true;
    }
    while ((NOT bVar3) AND (NOT bVar2))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar7 );
        if (iVar4 != 0)
        {
            iVar8 = iVar7 - iVar6;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_34774()) AND (iVar8 >= 1000)))
        {
            if (NOT (IS_CHAR_DEAD( l_U481 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U481 );
                SET_CHAR_COORDINATES( l_U481, 484.55950000, 1565.48200000, 14.91870000 );
                SET_CHAR_HEADING( l_U481, 290.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U481, 503.19000000, 1574.76000000, 17.50000000, 2, -1, 0.50000000 );
            }
            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            ENABLE_FRONTEND_RADIO();
            bVar3 = true;
        }
        switch (iVar4)
        {
            case 0:
            if (IS_CHAR_IN_ANY_CAR( sub_2543() ))
            {
                SET_PLAYER_CONTROL( sub_16700(), 0 );
            }
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            DISPLAY_RADAR( 0 );
            DISPLAY_HUD( 0 );
            CLEAR_PRINTS();
            SET_PLAYER_CONTROL( sub_16700(), 0 );
            while (NOT sub_35148())
            {
                WAIT( 0 );
            }
            sub_17569( 499.87000000, 1561.49000000, 13.96400000, 0.50000000, 472, 1566, 16, 200, 30, 1 );
            sub_17569( 499.87000000, 1561.49000000, 13.96400000, 0.50000000, 472, 1566, 16, 50, -1, 0 );
            sub_17569( 499.87000000, 1561.49000000, 13.96400000, 0.50000000, 472, 1566, 16, 50, -1, 0 );
            CLEAR_AREA( 537, 1579, 20, 40, 1 );
            CLEAR_AREA( 497, 1525, 15, 30, 1 );
            CLEAR_AREA( 550, 1400, 15, 45, 1 );
            SET_PED_DENSITY_MULTIPLIER( 0.20000000 );
            REQUEST_MODEL( -1222963415 );
            REQUEST_MODEL( 1448755353 );
            REQUEST_ANIMS( "missjacob2" );
            LOAD_ALL_OBJECTS_NOW();
            while ((NOT (HAVE_ANIMS_LOADED( "missjacob2" ))) || ((NOT (HAS_MODEL_LOADED( 1448755353 ))) || (NOT (HAS_MODEL_LOADED( -1222963415 )))))
            {
                WAIT( 0 );
            }
            if (IS_CHAR_IN_ANY_CAR( sub_2543() ))
            {
                GET_CAR_CHAR_IS_USING( sub_2543(), ref uVar5 );
                SET_CAR_HEADING( uVar5, 0.00720000 );
                SET_CAR_COORDINATES( uVar5, 490.58120000, 1555.29300000, 13.25850000 );
                SET_CAR_ON_GROUND_PROPERLY( uVar5 );
            }
            else
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2543() );
                SET_CHAR_COORDINATES( sub_2543(), 487.74210000, 1557.38100000, 13.57010000 );
                SET_CHAR_HEADING( sub_2543(), 3.96730000 );
            }
            CREATE_CHAR( 4, -1222963415, 477.37000000, 1567.36000000, 15.25000000, ref l_U481, 1 );
            SET_CHAR_HEADING( l_U481, 135.00000000 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U481, 1 );
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U481, 1 );
            SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U481, 0 );
            SET_CHAR_RELATIONSHIP_GROUP( l_U481, 23 );
            sub_3799( 1, l_U481, "DEALER_M", 0 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U481, 1 );
            SET_CHAR_ACCURACY( l_U481, 70 );
            SET_CHAR_COMPONENT_VARIATION( l_U481, 1, 1, 0 );
            SET_PED_DONT_DO_EVASIVE_DIVES( l_U481, 1 );
            CREATE_CHAR( 4, 1448755353, 476.59000000, 1566.74000000, 15.17000000, ref l_U485, 1 );
            SET_CHAR_COMPONENT_VARIATION( l_U485, 2, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( l_U485, 1, 1, 1 );
            SET_CHAR_COMPONENT_VARIATION( l_U485, 0, 0, 2 );
            SET_CHAR_HEADING( l_U485, 310.00000000 );
            TASK_LOOK_AT_CHAR( l_U485, l_U481, 99999, 0 );
            TASK_LOOK_AT_CHAR( l_U481, l_U485, 99999, 0 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -1222963415 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1448755353 );
            BEGIN_CAM_COMMANDS( ref l_U518 );
            CREATE_CAM( 14, ref l_U512[0] );
            SET_CAM_POS( l_U512[0], 514.43870000, 1537.60600000, 13.80132000 );
            SET_CAM_ROT( l_U512[0], -0.11845300, -0.00000000, 50.25446000 );
            SET_CAM_FOV( l_U512[0], 44.00000000 );
            CREATE_CAM( 14, ref l_U512[1] );
            SET_CAM_POS( l_U512[1], 513.65470000, 1538.02200000, 13.79545000 );
            SET_CAM_ROT( l_U512[1], -0.11845300, -0.00000000, 50.25446000 );
            SET_CAM_FOV( l_U512[1], 37.10002000 );
            CREATE_CAM( 3, ref l_U511 );
            SET_CAM_ACTIVE( l_U512[0], 1 );
            SET_CAM_PROPAGATE( l_U512[0], 1 );
            SET_CAM_ACTIVE( l_U512[1], 1 );
            SET_CAM_PROPAGATE( l_U512[1], 1 );
            SET_CAM_ACTIVE( l_U511, 1 );
            SET_CAM_PROPAGATE( l_U511, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U511, l_U512[0], l_U512[1], 5500, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U511, 0, 0, 1, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_WIDESCREEN_BORDERS( 1 );
            SETTIMERA( 0 );
            GET_GAME_TIMER( ref iVar6 );
            DO_SCREEN_FADE_IN( 500 );
            iVar4 = 1;
            break;
            case 1:
            if (TIMERA() > 5500)
            {
                if ((NOT (IS_CHAR_DEAD( l_U485 ))) AND (NOT (IS_CHAR_DEAD( l_U481 ))))
                {
                    DISABLE_FRONTEND_RADIO();
                    SET_USE_HIGHDOF( 1 );
                    SET_CAM_NEAR_DOF( l_U512[0], 4.00000000 );
                    SET_CAM_FAR_DOF( l_U512[0], 8.00000000 );
                    SET_CAM_POS( l_U512[0], 482.04950000, 1563.24200000, 15.75830000 );
                    SET_CAM_ROT( l_U512[0], 6.29854200, 0.00000000, 52.27054000 );
                    SET_CAM_FOV( l_U512[0], 44 );
                    SET_CAM_POS( l_U512[1], 482.04950000, 1563.24200000, 15.75830000 );
                    SET_CAM_ROT( l_U512[1], 6.29854200, 0.00000000, 52.27054000 );
                    SET_CAM_FOV( l_U512[1], 40 );
                    SET_CAM_INTERP_STYLE_CORE( l_U511, l_U512[0], l_U512[1], 4000, 0 );
                    SET_CAM_INTERP_STYLE_DETAILED( l_U511, 0, 0, 1, 1 );
                    TASK_PLAY_ANIM( l_U481, "Drugs_deal", "missjacob2", 0.40000000, 0, 0, 0, 0, -1 );
                    TASK_PLAY_ANIM( l_U485, "Drugs_buy", "missjacob2", 0.40000000, 0, 0, 0, 0, -1 );
                    SETTIMERA( 0 );
                    iVar4 = 2;
                }
            }
            break;
            case 2:
            if (TIMERA() > 1000)
            {
                sub_14218( "LJ2_FIND", 0, 1, ref l_U733, 6, 1 );
                iVar4 = 3;
            }
            break;
            case 3:
            if (TIMERA() > 4000)
            {
                if (NOT (IS_CHAR_DEAD( l_U485 )))
                {
                    TASK_CLEAR_LOOK_AT( l_U485 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U485, 459.62580000, 1564.29100000, 13.19140000, 2, 20000, 0.50000000 );
                }
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    TASK_CLEAR_LOOK_AT( l_U481 );
                }
                SET_USE_HIGHDOF( 0 );
                SET_CAM_ACTIVE( l_U512[1], 0 );
                SET_CAM_PROPAGATE( l_U512[1], 0 );
                SET_CAM_ACTIVE( l_U511, 0 );
                SET_CAM_PROPAGATE( l_U511, 0 );
                SET_CAM_POS( l_U512[0], 476.57490000, 1564.39000000, 15.34083000 );
                SET_CAM_ROT( l_U512[0], 20.06610000, 0.00000000, 0.36054600 );
                SET_CAM_FOV( l_U512[0], 41.00000000 );
                SETTIMERA( 0 );
                iVar4 = 5;
            }
            break;
            case 5:
            if (TIMERA() > 1000)
            {
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    TASK_USE_MOBILE_PHONE( l_U481, 1 );
                }
                SETTIMERA( 0 );
                iVar4 = 4;
            }
            break;
            case 4:
            if (TIMERA() > 1800)
            {
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    SET_ANIM_GROUP_FOR_CHAR( l_U481, "move_player" );
                    ADD_FOLLOW_NAVMESH_TO_PHONE_TASK( l_U481, 478.60000000, 1564.86000000, 15.22110000 );
                }
                sub_4944( "LJ2_DCALL", ref l_U733, 6, 1 );
                SETTIMERA( 0 );
                iVar4 = 6;
            }
            break;
            case 6:
            if (TIMERA() > 800)
            {
                SET_USE_HIGHDOF( 1 );
                ENABLE_FRONTEND_RADIO();
                SET_CAM_POS( l_U512[0], 497.00210000, 1555.27300000, 14.04439000 );
                SET_CAM_ROT( l_U512[0], 6.31511800, -0.00000000, 63.50060000 );
                SET_CAM_FOV( l_U512[0], 40.00000000 );
                SET_CAM_NEAR_DOF( l_U512[0], 4.00000000 );
                SET_CAM_FAR_DOF( l_U512[0], 22.00000000 );
                SET_CAM_POS( l_U512[1], 497.00210000, 1555.27300000, 14.04439000 );
                SET_CAM_ROT( l_U512[1], 6.31511800, -0.00000000, 63.50060000 );
                SET_CAM_FOV( l_U512[1], 45.00000000 );
                SET_CAM_NEAR_DOF( l_U512[1], 4.00000000 );
                SET_CAM_FAR_DOF( l_U512[1], 22.00000000 );
                SET_CAM_ACTIVE( l_U512[1], 1 );
                SET_CAM_PROPAGATE( l_U512[1], 1 );
                SET_CAM_ACTIVE( l_U511, 1 );
                SET_CAM_PROPAGATE( l_U511, 1 );
                SET_CAM_INTERP_STYLE_CORE( l_U511, l_U512[0], l_U512[1], 4000, 0 );
                SET_CAM_INTERP_STYLE_DETAILED( l_U511, 0, 0, 1, 1 );
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2543() )))
                    {
                        TASK_LOOK_AT_CHAR( sub_2543(), l_U481, 4500, 0 );
                    }
                }
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                SETTIMERA( 0 );
                iVar4 = 7;
            }
            break;
            case 7:
            if (TIMERA() > 4500)
            {
                SET_USE_HIGHDOF( 0 );
                bVar2 = true;
            }
            else if (NOT (IS_CHAR_DEAD( l_U481 )))
            {
                if ((NOT bVar9) AND (LOCATE_CHAR_ON_FOOT_3D( l_U481, 478.60000000, 1564.45000000, 15.22110000, 0.80000000, 0.80000000, 2.00000000, 0 )))
                {
                    TASK_LEAVE_ANY_CAR( sub_2543() );
                    ADD_FOLLOW_NAVMESH_TO_PHONE_TASK( l_U481, 503.19000000, 1574.76000000, 17.50000000 );
                    bVar9 = true;
                }
            }
            break;
            default: break;
        }
    }
    SET_USE_HIGHDOF( 0 );
    REQUEST_MODEL( 261592072 );
    if (NOT (IS_CHAR_DEAD( l_U481 )))
    {
        SET_ANIM_GROUP_FOR_CHAR( l_U481, "move_player" );
        SET_CHAR_MOVE_ANIM_SPEED_MULTIPLIER( l_U481, 1.10000000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U481 )))
    {
        TASK_USE_MOBILE_PHONE( l_U481, 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U481, 503.19000000, 1574.76000000, 17.50000000, 2, 50000, 0.50000000 );
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2543() ))
    {
        GET_CAR_CHAR_IS_USING( sub_2543(), ref uVar11 );
        SET_CAR_ENGINE_ON( uVar11, 0, 1 );
        TASK_LEAVE_CAR( sub_2543(), uVar11 );
    }
    else if (NOT bVar10)
    {
        SET_CHAR_HEADING( sub_2543(), 10.00000000 );
    }
    TASK_CLEAR_LOOK_AT( sub_2543() );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_ACTIVE( l_U512[0], 0 );
    SET_CAM_PROPAGATE( l_U512[0], 0 );
    SET_CAM_ACTIVE( l_U512[1], 0 );
    SET_CAM_PROPAGATE( l_U512[1], 0 );
    SET_CAM_ACTIVE( l_U511, 0 );
    SET_CAM_PROPAGATE( l_U511, 0 );
    DESTROY_CAM( l_U511 );
    DESTROY_CAM( l_U512[0] );
    DESTROY_CAM( l_U512[1] );
    SET_WIDESCREEN_BORDERS( 0 );
    END_CAM_COMMANDS( ref l_U518 );
    SWITCH_PED_PATHS_ON( 481.26790000, 1569.89800000, 19.92441000, 443.32730000, 1563.45300000, 17.27225000 );
    SET_CAM_BEHIND_PED( sub_2543() );
    DELETE_CHAR( ref l_U485 );
    REMOVE_BLIP( l_U510 );
    ADD_BLIP_FOR_CHAR( l_U481, ref l_U506 );
    CHANGE_BLIP_COLOUR( l_U506, 1 );
    CLEAR_SMALL_PRINTS();
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    sub_20169();
    SET_PLAYER_CONTROL( sub_16700(), 1 );
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    SET_CREATE_RANDOM_COPS( 0 );
    CLEAR_AREA_OF_COPS( 565, 1402, 20, 50 );
    sub_38628( "FP_03", 7500 );
    return;
}

int sub_34774()
{
    if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_35148()
{
    return sub_35159( 1, 1 );
}

int sub_35159(boolean bParam0, unknown uParam1)
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

void sub_38628(unknown uParam0, unknown uParam1)
{
    CLEAR_SMALL_PRINTS();
    PRINT( uParam0, uParam1, 1 );
    return;
}

void sub_38746()
{
    if (l_U753)
    {
        if (DOES_BLIP_EXIST( l_U507[0] ))
        {
            if (IS_CHAR_FATALLY_INJURED( l_U482[0] ))
            {
                REMOVE_BLIP( l_U507[0] );
            }
        }
        if (DOES_BLIP_EXIST( l_U507[1] ))
        {
            if (IS_CHAR_FATALLY_INJURED( l_U482[1] ))
            {
                REMOVE_BLIP( l_U507[1] );
            }
        }
        if (DOES_BLIP_EXIST( l_U506 ))
        {
            if (IS_CHAR_FATALLY_INJURED( l_U481 ))
            {
                REMOVE_BLIP( l_U506 );
            }
        }
    }
    return;
}

void sub_39015(unknown uParam0)
{
    switch (uParam0)
    {
        case 2:
        PRINT_NOW( "FAIL_DLR_LOST", 7000, 1 );
        sub_20498( 3, "LJ2_CALL1", "LJ2AUD", 0 );
        break;
        case 0:
        PRINT_NOW( "FAIL_DLR_INJRD", 7000, 1 );
        sub_20498( 3, "LJ2_CALL4", "LJ2AUD", 0 );
        break;
        case 1:
        PRINT_NOW( "FAIL_DLR_DEAD", 7000, 1 );
        sub_20498( 3, "LJ2_CALL2", "LJ2AUD", 0 );
        break;
    }
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_16700(), 150 );
        SAY_AMBIENT_SPEECH( sub_2543(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_39300();
    sub_2400();
    return;
}

void sub_39300()
{
    sub_39309();
    return;
}

void sub_39309()
{
    int iVar2;

    iVar2 = 3;
    sub_39323( iVar2 );
    sub_1489( iVar2 );
    return;
}

void sub_39323(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_16700(), 150 );
    CLEAR_HELP();
    sub_313( uParam0 );
    return;
}

void sub_39559()
{
    if (NOT (IS_CHAR_DEAD( l_U481 )))
    {
        if (IS_CHAR_IN_AREA_2D( l_U481, 508.53570000, 1548.64400000, 542.27480000, 1584.50100000, 0 ))
        {
            if ((IS_CHAR_IN_AREA_2D( sub_2543(), 480.48260000, 1545.36900000, 575.14330000, 1482.50400000, 0 )) || (IS_CHAR_IN_AREA_2D( sub_2543(), 475.64380000, 1596.43100000, 593.22430000, 1623.19300000, 0 )))
            {
                sub_39015( 2 );
            }
        }
        else if (IS_CHAR_IN_AREA_2D( l_U481, 522.24350000, 1518.05600000, 548.13190000, 1468.64800000, 0 ))
        {
            if ((IS_CHAR_IN_AREA_2D( sub_2543(), 573.02590000, 1440.22400000, 598.37500000, 1521.55800000, 0 )) || ((IS_CHAR_IN_AREA_2D( sub_2543(), 480.40600000, 1466.99400000, 507.46340000, 1523.91000000, 0 )) || (IS_CHAR_IN_AREA_2D( sub_2543(), 482.00960000, 1440.66300000, 599.88630000, 1469.50300000, 0 ))))
            {
                sub_39015( 2 );
            }
        }
        else if (IS_CHAR_IN_AREA_2D( l_U481, 540.63920000, 1437.52400000, 555.42410000, 1397.18500000, 0 ))
        {
            if ((IS_CHAR_IN_AREA_2D( sub_2543(), 571.80790000, 1373.40400000, 598.56360000, 1439.17700000, 0 )) || (IS_CHAR_IN_AREA_2D( sub_2543(), 519.67490000, 1400.23300000, 524.53540000, 1441.03000000, 0 )))
            {
                sub_39015( 2 );
            }
        };;;
    }
    return;
}

void sub_39986()
{
    if (NOT (sub_40001( l_U733 )))
    {
        if (l_U739)
        {
            if (NOT l_U804[0])
            {
                sub_4944( "LJ2_SPOOKS", ref l_U733, 4, 1 );
                l_U804[0] = 1;
            }
            if ((NOT l_U804[1]) AND ((IS_CHAR_IN_AREA_3D( sub_2543(), 522.90000000, 1494.20000000, 12.50000000, 526.70000000, 1504.10000000, 14.80000000, 0 )) AND (l_U749)))
            {
                sub_4944( "LJ2_BOX", ref l_U733, 4, 1 );
                l_U804[1] = 1;
            }
            if ((NOT l_U804[2]) AND ((IS_CHAR_IN_AREA_3D( sub_2543(), 556.00000000, 1400.40000000, 10.60000000, 572.80000000, 1405.50000000, 15.00000000, 0 )) AND ((l_U583 < 17) AND (l_U780 > 2))))
            {
                sub_4944( "LJ2_PUSH", ref l_U733, 4, 1 );
                l_U804[2] = 1;
            }
            if ((NOT l_U804[3]) AND (l_U758))
            {
                sub_4944( "LJ2_DOOR", ref l_U733, 4, 1 );
                l_U804[3] = 1;
            }
        }
    }
    return;
}

int sub_40001(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_5118( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_5118( "\n speech is not playing" );
    }
    return 0;
}

void sub_41284()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;

    if (l_U768)
    {
        PRINTNL();
        PRINTSTRING( "routeStage = " );
        PRINTINT( l_U583 );
        PRINTNL();
    }
    if (NOT (IS_CHAR_DEAD( l_U481 )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( l_U481, l_U519[l_U583]._fU0, l_U519[l_U583]._fU4, l_U519[l_U583]._fU8, 1.00000000, 1.00000000, 2.20000000, 0 ))
        {
            switch (l_U583)
            {
                case 0:
                l_U731 = 10.00000000;
                l_U732 = 15.00000000;
                l_U583++;
                sub_9145( l_U481, l_U519[l_U583] );
                sub_11116( "LOAD ASSETS" );
                sub_11976( "LOAD ASSETS" );
                if (l_U739)
                {
                    sub_12403( "LOAD ASSETS" );
                }
                break;
                case 1:
                l_U583++;
                sub_9145( l_U481, l_U519[l_U583] );
                sub_11116( "CREATE" );
                sub_11976( "CREATE" );
                if (l_U739)
                {
                    sub_15052( "LOAD ASSETS" );
                }
                break;
                case 3:
                sub_15052( "CREATE" );
                sub_12403( "CREATE" );
                break;
                case 5:
                sub_15052( "FEEDBACK" );
                break;
                case 6:
                sub_41823();
                l_U583++;
                sub_9145( l_U481, l_U519[l_U583] );
                if (l_U739)
                {
                    sub_13279( "LOAD ASSETS" );
                }
                break;
                case 7:
                l_U723 = 1;
                break;
                case 8:
                if (NOT (IS_CHAR_INJURED( l_U481 )))
                {
                    l_U583++;
                    SET_CHAR_CLIMB_ANIM_RATE( l_U481, 1.30000000 );
                    OPEN_SEQUENCE_TASK( ref l_U799 );
                    TASK_CLIMB( 0, 1 );
                    if (l_U739)
                    {
                        TASK_GO_STRAIGHT_TO_COORD( 0, l_U519[l_U583]._fU0, l_U519[l_U583]._fU4, l_U519[l_U583]._fU8, 3, 50000 );
                    }
                    else
                    {
                        TASK_GO_STRAIGHT_TO_COORD( 0, l_U519[l_U583]._fU0, l_U519[l_U583]._fU4, l_U519[l_U583]._fU8, 2, 50000 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U799 );
                    TASK_PERFORM_SEQUENCE( l_U481, l_U799 );
                    CLEAR_SEQUENCE_TASK( l_U799 );
                    sub_15052( "DELETE" );
                    if (l_U739)
                    {
                        sub_8199( "LOAD ASSETS" );
                    }
                    SET_CAR_DENSITY_MULTIPLIER( 1 );
                    UNLOCK_RAGDOLL( l_U481, 0 );
                    l_U770 = 1;
                    l_U769 = 1;
                    l_U767 = 1;
                }
                break;
                case 10:
                sub_13279( "DELETE" );
                sub_8199( "CREATE" );
                l_U583++;
                sub_9145( l_U481, l_U519[l_U583] );
                break;
                case 12:
                sub_38628( "FP_48", 7500 );
                l_U583++;
                sub_9145( l_U481, l_U519[l_U583] );
                break;
                case 19:
                l_U583++;
                break;
                case 20: break;
                default:
                sub_41823();
                l_U583++;
                sub_9145( l_U481, l_U519[l_U583] );
                break;
            }
        }
        else if ((NOT l_U739) AND (l_U742))
        {
            sub_9145( l_U481, l_U519[l_U583] );
            l_U742 = 0;
        }
        if (l_U739)
        {
            if (NOT l_U741)
            {
                sub_9145( l_U481, l_U519[l_U583] );
                l_U741 = 1;
            }
        }
        sub_42794();
        if (l_U739)
        {
            if (l_U583 < 12)
            {
                if (NOT l_U723)
                {
                    if ((l_U767) || ((sub_44575( sub_2543(), l_U481 )) < 20.00000000))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U481 )))
                        {
                            MODIFY_CHAR_MOVE_STATE( l_U481, 4 );
                        }
                    }
                    else if ((l_U583 == 4) || ((sub_44575( sub_2543(), l_U481 )) < 30.00000000))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U481 )))
                        {
                            MODIFY_CHAR_MOVE_STATE( l_U481, 3 );
                        }
                    }
                    else if ((NOT (HAS_CHAR_SPOTTED_CHAR( sub_2543(), l_U481 ))) AND (NOT (IS_CHAR_INJURED( l_U481 ))))
                    {
                        MODIFY_CHAR_MOVE_STATE( l_U481, 2 );
                    };;;
                }
            }
            else
            {
                GET_CHAR_COORDINATES( l_U481, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                GET_CHAR_COORDINATES( sub_2543(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                fVar8 = uVar2._fU8 - uVar5._fU8;
                if (fVar8 < 2.00000000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U481 )))
                    {
                        MODIFY_CHAR_MOVE_STATE( l_U481, 4 );
                    }
                }
                else if ((IS_CHAR_ON_SCREEN( l_U481 )) || (fVar8 < 2.50000000))
                {
                    if (NOT (IS_CHAR_INJURED( l_U481 )))
                    {
                        MODIFY_CHAR_MOVE_STATE( l_U481, 3 );
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U481 )))
                {
                    MODIFY_CHAR_MOVE_STATE( l_U481, 2 );
                };;;
            }
        }
    }
    return;
}

void sub_41823()
{
    if (l_U739)
    {
        switch (l_U583)
        {
            case 4:
            sub_4944( "LJ2_CHASED", ref l_U733, 4, 1 );
            break;
            case 6:
            sub_4944( "LJ2_CHASE2", ref l_U733, 4, 1 );
            break;
            case 9:
            sub_4944( "LJ2_CHASE3", ref l_U733, 4, 1 );
            break;
            case 14:
            sub_4944( "LJ2_CHASE4", ref l_U733, 4, 1 );
            break;
            case 16:
            sub_4944( "LJ2_CHASE5", ref l_U733, 4, 1 );
            break;
        }
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2543(), l_U481, 10, 10, 6, 0 ))
            {
                ;
            }
        }
    }
    return;
}

void sub_42794()
{
    float fVar2;
    float fVar3;

    if ((l_U583 < 20) AND (NOT (IS_CHAR_DEAD( l_U481 ))))
    {
        GET_CHAR_COORDINATES( l_U481, ref l_U791._fU0, ref l_U791._fU4, ref l_U791._fU8 );
        GET_CHAR_COORDINATES( sub_2543(), ref l_U794._fU0, ref l_U794._fU4, ref l_U794._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U791._fU0, l_U791._fU4, l_U791._fU8, l_U794._fU0, l_U794._fU4, l_U794._fU8, ref fVar2 );
        fVar3 = l_U791._fU8 - l_U794._fU8;
        if ((NOT l_U727) AND (NOT l_U739))
        {
            if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U481, sub_2543(), 0 )) || (IS_CHAR_INJURED( l_U481 )))
            {
                if (NOT l_U728)
                {
                    if (NOT (IS_CHAR_DEAD( l_U481 )))
                    {
                        CLEAR_CHAR_TASKS( l_U481 );
                        SET_CHAR_HEALTH( l_U481, 80 );
                        SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U481, 0 );
                    }
                    l_U728 = 1;
                    GET_GAME_TIMER( ref l_U725 );
                }
                else
                {
                    GET_GAME_TIMER( ref l_U798 );
                    if (l_U798 > (l_U725 + 500))
                    {
                        sub_39015( 0 );
                    }
                }
            }
            else if ((l_U778) AND ((IS_CHAR_IN_ANY_CAR( sub_2543() )) AND (l_U583 == 0)))
            {
                sub_38628( "FP_10", 7500 );
                sub_4944( "LJ2_CHASED", ref l_U733, 4, 1 );
                sub_43215();
            }
            else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U481, sub_2543(), 0 ))
            {
                sub_38628( "FP_39", 7500 );
                sub_4944( "LJ2_SHOOTD", ref l_U733, 4, 1 );
                sub_43215();
            }
            else if ((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U481, sub_2543() )) AND (IS_PLAYER_TARGETTING_CHAR( sub_16700(), l_U481 )))
            {
                sub_38628( "FP_10", 7500 );
                sub_4944( "LJ2_SHOOTD", ref l_U733, 4, 1 );
                sub_43215();
            }
            else if (IS_WANTED_LEVEL_GREATER( sub_16700(), 0 ))
            {
                sub_38628( "FP_10", 7500 );
                sub_4944( "LJ2_SHOOTD", ref l_U733, 4, 1 );
                sub_43215();
            }
            else if ((HAS_CHAR_SPOTTED_CHAR( l_U481, sub_2543() )) AND (((l_U583 < 19) AND ((l_U583 > 13) AND (fVar3 < 1.00000000))) || ((l_U583 < 14) AND (fVar2 < l_U731))))
            {
                sub_38628( "FP_10", 7500 );
                sub_4944( "LJ2_2CLOSE", ref l_U733, 4, 1 );
                sub_43215();
            }
            else if (IS_CHAR_SHOOTING( sub_2543() ))
            {
                sub_38628( "FP_10", 7500 );
                sub_4944( "LJ2_SHOOTD", ref l_U733, 4, 1 );
                sub_43215();
            };;;;;;;
        }
        else if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U481, sub_2543(), 0 )) || (IS_CHAR_INJURED( l_U481 )))
        {
            if (NOT l_U728)
            {
                if (NOT (IS_CHAR_DEAD( l_U481 )))
                {
                    CLEAR_CHAR_TASKS( l_U481 );
                    SET_CHAR_HEALTH( l_U481, 80 );
                    SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U481, 0 );
                }
                GET_GAME_TIMER( ref l_U725 );
                l_U728 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U798 );
                if (l_U798 > (l_U725 + 500))
                {
                    sub_39015( 0 );
                }
            }
        }
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2543(), l_U791._fU0, l_U791._fU4, l_U791._fU8, 70.00000000, 70.00000000, 12.50000000, 0 )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( l_U481 )))
            {
                DELETE_CHAR( ref l_U481 );
                CLEAR_SMALL_PRINTS();
                sub_39015( 2 );
            }
        }
        else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2543(), l_U791._fU0, l_U791._fU4, l_U791._fU8, 50.00000000, 50.00000000, 8.50000000, 0 )))
        {
            sub_38628( "FP_09", 1500 );
        }
    }
    return;
}

void sub_43215()
{
    unknown[4] uVar2;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;
    float fVar16;
    float fVar17;

    array(ref uVar2, 4);
    fVar16 = 9999;
    fVar17 = 9999;
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U481, -0.10000000, 0.10000000, 0.00000000, ref uVar2[0]._fU0, ref uVar2[0]._fU4, ref uVar2[0]._fU8 );
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U481, 0.10000000, 0.10000000, 0.00000000, ref uVar2[1]._fU0, ref uVar2[1]._fU4, ref uVar2[1]._fU8 );
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U481, 0.10000000, -0.10000000, 0.00000000, ref uVar2[2]._fU0, ref uVar2[2]._fU4, ref uVar2[2]._fU8 );
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U481, -0.10000000, -0.10000000, 0.00000000, ref uVar2[3]._fU0, ref uVar2[3]._fU4, ref uVar2[3]._fU8 );
    GET_CHAR_COORDINATES( sub_2543(), ref l_U791._fU0, ref l_U791._fU4, ref l_U791._fU8 );
    for ( l_U798 = 0; l_U798 < 4; l_U798++ )
    {
        GET_DISTANCE_BETWEEN_COORDS_2D( l_U791._fU0, l_U791._fU4, uVar2[l_U798]._fU0, uVar2[l_U798]._fU4, ref fVar17 );
        if (fVar17 < fVar16)
        {
            fVar16 = fVar17;
            iVar15 = l_U798;
        }
    }
    if (iVar15 == 2)
    {
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U481, "run_lookback_r", "missjacob2", 4.00000000, 0, 0, 0, 0, -1 );
    }
    else if (iVar15 == 3)
    {
        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( l_U481, "run_lookback_l", "missjacob2", 4.00000000, 0, 0, 0, 0, -1 );
    }
    else
    {
        TASK_LOOK_AT_CHAR( l_U481, sub_2543(), 1600, 0 );
    }
    UNLOCK_RAGDOLL( l_U481, 0 );
    STOP_PED_SPEAKING( sub_2543(), 0 );
    SETTIMERB( 0 );
    l_U727 = 1;
    return;
}

void sub_44575(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
            GET_CHAR_COORDINATES( uParam1, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_2D( uVar4._fU0, uVar4._fU4, uVar7._fU0, uVar7._fU4, ref Result );
        }
    }
    return Result;
}

int sub_45252()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_45315()
{
    switch (l_U835)
    {
        case 0:
        if (NOT g_U64674)
        {
            l_U798 = 2;
            if (l_U798 == 0)
            {
                l_U836 = {529.51400000, 1580.07600000, 16.08380000};
            }
            else if (l_U798 == 1)
            {
                l_U836 = {535.51250000, 1559.96600000, 13.76300000};
            }
            else
            {
                l_U836 = {534.60000000, 1538.80000000, 15.10000000};
            }
            l_U835 = 1;
        }
        else
        {
            l_U835 = 69;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( l_U481, l_U836._fU0, l_U836._fU4, l_U836._fU8, 2, 2, 2, 0 ))
            {
                if ((sub_45577( 0 )) AND ((NOT l_U727) AND (NOT l_U739)))
                {
                    GET_CHAR_COORDINATES( sub_2543(), ref l_U791._fU0, ref l_U791._fU4, ref l_U791._fU8 );
                    GET_CHAR_COORDINATES( l_U481, ref l_U794._fU0, ref l_U794._fU4, ref l_U794._fU8 );
                    GET_DISTANCE_BETWEEN_COORDS_2D( l_U791._fU0, l_U791._fU4, l_U794._fU0, l_U794._fU4, ref l_U797 );
                    if ((HAS_CHAR_SPOTTED_CHAR( l_U481, sub_2543() )) AND (l_U797 < 20.00000000))
                    {
                        if (sub_47065( 0, "LJ2_CALLR2", "LJ2AUD", 8000, 0 ))
                        {
                            PRINTNL();
                            PRINTSTRING( "DOING CALL 1" );
                            PRINTNL();
                            l_U835 = 2;
                            g_U64674 = 1;
                            GET_GAME_TIMER( ref l_U839 );
                        }
                    }
                    else if (sub_47065( 0, "LJ2_CALLR1", "LJ2AUD", 8000, 0 ))
                    {
                        PRINTNL();
                        PRINTSTRING( "DOING CALL 2" );
                        PRINTNL();
                        l_U835 = 69;
                        g_U64674 = 1;
                    }
                }
            }
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U798 );
        if ((l_U798 > (l_U839 + 6000)) AND (sub_51087() == 0))
        {
            if (sub_51171())
            {
                sub_4944( "LJ2_2CLOSE", ref l_U733, 4, 1 );
                sub_43215();
                l_U730 = 1;
                l_U835 = 69;
            }
        }
        else if ((sub_51087() == 3) || (sub_51087() == 4))
        {
            sub_4944( "LJ2_2CLOSE", ref l_U733, 4, 1 );
            sub_43215();
            l_U730 = 1;
            l_U835 = 69;
        }
        break;
    }
    return;
}

int sub_45577(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U22274[uParam0]._fU0)
    {
        return 0;
    }
    if (g_U22274[uParam0]._fU4)
    {
        return 0;
    }
    if (NOT g_U22274[uParam0]._fU8)
    {
        return 0;
    }
    uVar3 = sub_45656( uParam0 );
    if (sub_46029( uVar3 ))
    {
        if (g_U10981[uVar3]._fU144._fU84)
        {
            return 0;
        }
    }
    if (g_U10981[uVar3]._fU40[1] < g_U22274[uParam0]._fU160)
    {
        return 0;
    }
    if (sub_46154( uParam0 ))
    {
        return 0;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return 0;
    }
    return 1;
}

int sub_45656(unknown uParam0)
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
        case 22: return 20;
        case 20: return 21;
        case 21: return 22;
    }
    sub_1354( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

int sub_46029(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        case 8: return 1;
    }
    return 0;
}

int sub_46154(unknown uParam0)
{
    if (g_U22274[uParam0]._fU188._fU0._fU0 == -1)
    {
        return 0;
    }
    if (NOT (sub_46229( g_U22274[uParam0]._fU188._fU0, g_U22274[uParam0]._fU188._fU8 )))
    {
        return 0;
    }
    return 1;
}

int sub_46229(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    boolean bVar8;

    if ((uParam0._fU0 >= 24) || (uParam0._fU0 < 0))
    {
        sub_1354( "KM_Is_Now_Time_Between_Start_End_Times: Start Hours Error" );
        return 0;
    }
    if ((uParam0._fU4 >= 60) || (uParam0._fU4 < 0))
    {
        sub_1354( "KM_Is_Now_Time_Between_Start_End_Times: Start Minutes Error" );
        return 0;
    }
    if ((uParam2._fU0 >= 24) || (uParam2._fU0 < 0))
    {
        sub_1354( "KM_Is_Now_Time_Between_Start_End_Times: End Hours Error" );
        return 0;
    }
    if ((uParam2._fU4 >= 60) || (uParam2._fU4 < 0))
    {
        sub_1354( "KM_Is_Now_Time_Between_Start_End_Times: End Minutes Error" );
        return 0;
    }
    GET_TIME_OF_DAY( ref uVar6._fU0, ref uVar6._fU4 );
    bVar8 = sub_46609( uParam2, uParam0 );
    if (NOT bVar8)
    {
        if (sub_46609( uVar6, uParam0 ))
        {
            return 0;
        }
        if (sub_46609( uParam2, uVar6 ))
        {
            return 0;
        }
        return 1;
    }
    if (sub_46733( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_46609( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_46609( uVar6, uParam2 ))
    {
        return 1;
    }
    return 0;
}

boolean sub_46609(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (uParam0._fU0 > uParam2._fU0)
    {
        return 0;
    }
    if (uParam0._fU0 < uParam2._fU0)
    {
        return 1;
    }
    return uParam0._fU4 < uParam2._fU4;
}

boolean sub_46733(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (uParam0._fU0 == uParam2._fU0))
    {
        return 0;
    }
    return uParam0._fU4 == uParam2._fU4;
}

void sub_47065(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_47125( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_47125(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_5118( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_5118( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_16700() )))
    {
        sub_5118( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2543() ))) AND (IS_CHAR_IN_ANY_CAR( sub_2543() )))
    {
        sub_5118( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_5118( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_47640()))
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
                sub_5118( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_47640()))
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
    sub_49012( uParam0, ref g_U91._fU176 );
    sub_50393( ref g_U91._fU160 );
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
        sub_3919( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

int sub_47640()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_47697())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_47697()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_16700() )))
    {
        sub_5118( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_5118( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_5118( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_5118( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_16700() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2543() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_2543(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_5118( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_2543() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_5118( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_5118( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_16700() )))
    {
        sub_5118( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_49012(int iParam0, unknown uParam1)
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

void sub_50393(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

int sub_51087()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_51171()
{
    switch (g_U91._fU112)
    {
        case 0:
        case 4:
        return 1;
        break;
    }
    return 0;
}

void sub_51393()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_IN_AREA_3D( sub_2543(), 556.21210000, 1400.63900000, 11.00000000, 572.66620000, 1405.31500000, 32.00000000, 0 ))
    {
        if (l_U768)
        {
            PRINTSTRING( "-interiorAmbienceStage = " );
            PRINTINT( l_U724 );
            PRINTNL();
        }
        sub_2452( "FEEDBACK" );
        sub_3565( "FEEDBACK" );
        sub_6358( "FEEDBACK" );
        sub_7068( "FEEDBACK" );
        GET_CHAR_COORDINATES( sub_2543(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (uVar2._fU8 > 28.00000000)
        {
            sub_10110( "CREATE" );
        }
        if (uVar2._fU8 > 29.80000000)
        {
            sub_7068( "DELETE" );
        }
        else if (uVar2._fU8 > 28.00000000)
        {
            ;
        }
        else if (uVar2._fU8 > 27.00000000)
        {
            sub_6358( "DELETE" );
            sub_10110( "LOAD ASSETS" );
        }
        else if (uVar2._fU8 > 24.30000000)
        {
            sub_7068( "CREATE" );
        }
        else if (uVar2._fU8 > 23.30000000)
        {
            sub_3565( "DELETE" );
            sub_7068( "LOAD ASSETS" );
        }
        else if (uVar2._fU8 > 20.30000000)
        {
            sub_6358( "CREATE" );
        }
        else if (uVar2._fU8 > 19.60000000)
        {
            sub_8199( "DELETE" );
            sub_2452( "DELETE" );
            sub_6358( "LOAD ASSETS" );
        }
        else if (uVar2._fU8 > 16.50000000)
        {
            sub_3565( "CREATE" );
        }
        else if (uVar2._fU8 > 15.80000000)
        {
            sub_3565( "LOAD ASSETS" );
        }
        else if (uVar2._fU8 > 12.50000000)
        {
            sub_2452( "CREATE" );
        }
        else if (uVar2._fU8 > 11.40000000)
        {
            sub_2452( "LOAD ASSETS" );
        };;;;;;;;;;;
    }
    else if (IS_CHAR_IN_AREA_3D( sub_2543(), 562.33620000, 1388.49400000, 30.00000000, 570.26980000, 1395.45500000, 31.50000000, 0 ))
    {
        if (l_U724 == 11)
        {
            l_U724 = 12;
        }
        if (l_U768)
        {
            PRINTSTRING( "-interiorAmbienceStage = " );
            PRINTINT( l_U724 );
            PRINTNL();
        }
    }
    return;
}

void sub_52207()
{
    int iVar2;
    int iVar3;

    if ((l_U583 == 20) || (l_U583 == 19))
    {
        sub_10110( "CREATE" );
    }
    if ((NOT (IS_CHAR_INJURED( l_U482[1] ))) AND ((NOT (IS_CHAR_INJURED( l_U482[0] ))) AND (NOT (IS_CHAR_INJURED( l_U481 )))))
    {
        if ((NOT l_U759) AND (NOT l_U816))
        {
            GET_INTERIOR_AT_COORDS( 565.48000000, 1392.21000000, 31.09000000, ref iVar2 );
            if (iVar2 != nil)
            {
                GET_INTERIOR_FROM_CHAR( sub_2543(), ref iVar3 );
                if (iVar3 == iVar2)
                {
                    GET_INTERIOR_FROM_CHAR( l_U481, ref iVar3 );
                    if (iVar3 == iVar2)
                    {
                        GET_INTERIOR_FROM_CHAR( l_U482[0], ref iVar3 );
                        if (iVar3 == iVar2)
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 804737190, 561.97610000, 1391.62600000, 30.85500000, 0, 0.00000000 );
                            sub_4944( "LJ2_SPOOK", ref l_U733, 4, 1 );
                            if (NOT (DOES_BLIP_EXIST( l_U507[0] )))
                            {
                                SAY_AMBIENT_SPEECH( l_U482[0], "SHIT", 1, 1, 0 );
                                ADD_BLIP_FOR_CHAR( l_U482[0], ref l_U507[0] );
                            }
                            if (NOT (DOES_BLIP_EXIST( l_U507[1] )))
                            {
                                ADD_BLIP_FOR_CHAR( l_U482[1], ref l_U507[1] );
                            }
                            sub_52594( 1 );
                            UNLOCK_RAGDOLL( l_U481, 1 );
                            sub_38628( "FP_32", 7500 );
                            l_U779 = 1;
                        }
                    }
                }
            }
        }
    }
    if (l_U583 == 20)
    {
        if (l_U739)
        {
            if ((NOT l_U779) AND (NOT l_U812))
            {
                if (NOT (IS_CHAR_IN_AREA_3D( sub_2543(), 561.70000000, 1389.16000000, 30.00000000, 571.93000000, 1395.63000000, 32.80000000, 0 )))
                {
                    if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 561.97610000, 1391.62600000, 30.85500000, 1.50000000, 804737190 ))
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 804737190, 561.97610000, 1391.62600000, 30.85500000, 1, 0.00000000 );
                        REQUEST_MODEL( 1459310348 );
                        l_U812 = 1;
                    }
                }
            }
        }
        else if ((NOT l_U759) AND (NOT l_U775))
        {
            sub_53049();
            l_U775 = 1;
        }
        if (l_U775)
        {
            if (NOT l_U759)
            {
                if ((HAS_CHAR_SPOTTED_CHAR( l_U481, sub_2543() )) || (IS_CHAR_IN_AREA_3D( sub_2543(), 562.10000000, 1388.89000000, 29.50000000, 571.95000000, 1395.87000000, 33.00000000, 0 )))
                {
                    sub_4944( "LJ2_HOLLA", ref l_U733, 4, 1 );
                    sub_52594( 0 );
                    if (NOT (IS_CHAR_DEAD( l_U482[0] )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U482[0], 0 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U482[1] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U482[1], "SHIT", 1, 1, 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U482[1], 0 );
                    }
                }
            }
        }
    }
    else if ((NOT (IS_CHAR_DEAD( l_U482[1] ))) AND ((DOES_CHAR_EXIST( l_U482[1] )) AND ((NOT (IS_CHAR_DEAD( l_U482[0] ))) AND (DOES_CHAR_EXIST( l_U482[0] )))))
    {
        if ((NOT (DOES_BLIP_EXIST( l_U507[1] ))) AND (NOT (DOES_BLIP_EXIST( l_U507[0] ))))
        {
            if (((NOT l_U759) AND (HAS_CHAR_SPOTTED_CHAR( sub_2543(), l_U482[1] ))) || (HAS_CHAR_SPOTTED_CHAR( sub_2543(), l_U482[0] )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U507[0] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U482[0], ref l_U507[0] );
                }
                if (NOT (DOES_BLIP_EXIST( l_U507[1] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U482[1], ref l_U507[1] );
                }
                sub_52594( 0 );
                UNLOCK_RAGDOLL( l_U481, 1 );
                PRINTNL();
                PRINTSTRING( "pre 4444444444" );
                PRINTNL();
                sub_38628( "FP_32", 7500 );
            }
        }
    }
    if (IS_CHAR_IN_AREA_3D( sub_2543(), 558.10000000, 1389.10000000, 30.00000000, 561.70000000, 1401.30000000, 32.80000000, 0 ))
    {
        if ((NOT l_U816) AND (l_U812))
        {
            while (NOT (HAS_MODEL_LOADED( 1459310348 )))
            {
                WAIT( 0 );
                REQUEST_MODEL( 1459310348 );
            }
            CREATE_OBJECT( 1459310348, 561.82000000, 1390.89000000, 30.89000000, ref l_U814, 1 );
            SET_OBJECT_HEADING( l_U814, 90.00000000 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U814, "Rm_ten_topflr1Md" );
            FREEZE_OBJECT_POSITION( l_U814, 1 );
            SET_OBJECT_VISIBLE( l_U814, 0 );
            MAKE_OBJECT_TARGETTABLE( l_U814, 1 );
            ADD_BLIP_FOR_OBJECT( l_U814, ref l_U815 );
            CHANGE_BLIP_DISPLAY( l_U815, 2 );
            if (DOES_BLIP_EXIST( l_U507[0] ))
            {
                REMOVE_BLIP( l_U507[0] );
            }
            if (DOES_BLIP_EXIST( l_U507[1] ))
            {
                REMOVE_BLIP( l_U507[1] );
            }
            if (DOES_BLIP_EXIST( l_U506 ))
            {
                REMOVE_BLIP( l_U506 );
            }
            if (NOT l_U759)
            {
                sub_52594( 1 );
            }
            PRINT_NOW( "FP_LOCK3", 7500, 1 );
            l_U816 = 1;
        }
        else if (l_U583 == 20)
        {
            if (NOT l_U759)
            {
                if ((NOT (IS_CHAR_DEAD( l_U482[1] ))) AND (NOT (IS_CHAR_DEAD( l_U482[0] ))))
                {
                    if ((NOT (DOES_BLIP_EXIST( l_U507[1] ))) AND (NOT (DOES_BLIP_EXIST( l_U507[0] ))))
                    {
                        if (NOT l_U775)
                        {
                            sub_52594( 1 );
                        }
                        ADD_BLIP_FOR_CHAR( l_U482[0], ref l_U507[0] );
                        ADD_BLIP_FOR_CHAR( l_U482[1], ref l_U507[1] );
                        sub_38628( "FP_32", 7500 );
                    }
                }
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U814 ))
    {
        GET_OBJECT_HEALTH( l_U814, ref l_U811 );
        if ((IS_EXPLOSION_IN_AREA( -1, 558.50000000, 1389.50000000, 30.00000000, 562.50000000, 1393.00000000, 33.00000000 )) || (l_U811 < 999.00000000))
        {
            if (NOT (IS_CHAR_DEAD( l_U481 )))
            {
                UNLOCK_RAGDOLL( l_U481, 1 );
            }
            sub_4944( "LJ2_LOCK", ref l_U733, 4, 1 );
            PRINTNL();
            PRINTSTRING( "pre 222222222" );
            PRINTNL();
            PRINT_NOW( "FP_32", 7500, 0 );
            REMOVE_BLIP( l_U815 );
            DELETE_OBJECT( ref l_U814 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1459310348 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 804737190, 561.97610000, 1391.62600000, 30.85500000, 0, 0.00000000 );
            FIRE_SINGLE_BULLET( 560.75000000, 1390.94000000, 30.95000000, 562.20000000, 1390.92000000, 30.92000000, 30 );
            l_U758 = 1;
            if ((NOT (IS_CHAR_DEAD( l_U482[0] ))) AND (DOES_CHAR_EXIST( l_U482[0] )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U507[0] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U482[0], ref l_U507[0] );
                    TASK_COMBAT( l_U482[0], sub_2543() );
                }
            }
            if ((NOT (IS_CHAR_DEAD( l_U482[1] ))) AND (DOES_CHAR_EXIST( l_U482[1] )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U507[1] )))
                {
                    ADD_BLIP_FOR_CHAR( l_U482[1], ref l_U507[1] );
                    TASK_COMBAT( l_U482[1], sub_2543() );
                }
            }
            if ((NOT (IS_CHAR_DEAD( l_U481 ))) AND (DOES_CHAR_EXIST( l_U481 )))
            {
                if (NOT (DOES_BLIP_EXIST( l_U506 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U481, ref l_U506 );
                    TASK_COMBAT( l_U481, sub_2543() );
                }
            }
        }
    }
    if ((IS_CHAR_IN_AREA_3D( sub_2543(), 558.10000000, 1392.10000000, 30.00000000, 561.70000000, 1396.30000000, 32.00000000, 0 )) AND ((DOES_BLIP_EXIST( l_U815 )) AND ((l_U812) AND (NOT l_U813))))
    {
        sub_4944( "LJ2_YELLS", ref l_U733, 4, 1 );
        l_U813 = 1;
    }
    return;
}

void sub_52594(boolean bParam0)
{
    if (NOT (IS_CHAR_DEAD( l_U481 )))
    {
        if (NOT l_U759)
        {
            GIVE_WEAPON_TO_CHAR( l_U481, 7, 30000, 0 );
            SET_CURRENT_CHAR_WEAPON( l_U481, 7, 1 );
            SET_CHAR_DECISION_MAKER( l_U481, l_U584 );
            SET_COMBAT_DECISION_MAKER( l_U481, l_U585 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U481, 0 );
            SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U481, 566.28800000, 1388.74900000, 29.85500000, 1.50000000 );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U481 );
            if (bParam0)
            {
                TASK_COMBAT( l_U481, sub_2543() );
            }
            l_U759 = 1;
        }
        else
        {
            TASK_COMBAT( l_U481, sub_2543() );
        }
    }
    return;
}

void sub_53049()
{
    if (NOT (IS_CHAR_INJURED( l_U481 )))
    {
        OPEN_SEQUENCE_TASK( ref l_U799 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 566.40790000, 1391.22100000, 29.85500000, 2, -1, 0.50000000 );
        if (NOT (IS_CHAR_DEAD( l_U482[0] )))
        {
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U482[0] );
        }
        if (NOT (IS_CHAR_DEAD( l_U482[0] )))
        {
            TASK_CHAT_WITH_CHAR( 0, l_U482[0], 0, 1 );
        }
        CLOSE_SEQUENCE_TASK( l_U799 );
        TASK_PERFORM_SEQUENCE( l_U481, l_U799 );
        CLEAR_SEQUENCE_TASK( l_U799 );
    }
    if (NOT (IS_CHAR_INJURED( l_U482[0] )))
    {
        OPEN_SEQUENCE_TASK( ref l_U800 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 566.77700000, 1392.41000000, 29.85500000, 2, -1, 0.50000000 );
        TASK_PAUSE( 0, 3000 );
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U481 );
        }
        if (NOT (IS_CHAR_DEAD( l_U481 )))
        {
            TASK_CHAT_WITH_CHAR( 0, l_U481, 1, 1 );
        }
        CLOSE_SEQUENCE_TASK( l_U800 );
        TASK_PERFORM_SEQUENCE( l_U482[0], l_U800 );
        CLEAR_SEQUENCE_TASK( l_U800 );
    }
    return;
}

void sub_55255()
{
    if ((l_U739) AND (NOT (IS_CHAR_DEAD( l_U481 ))))
    {
        GET_CHAR_COORDINATES( l_U481, ref l_U791._fU0, ref l_U791._fU4, ref l_U791._fU8 );
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2543(), l_U791._fU0, l_U791._fU4, l_U791._fU8, 5.00000000, 5.00000000, 2.00000000, 0 ))
        {
            if (NOT l_U760)
            {
                DISABLE_PLAYER_SPRINT( sub_16700(), 1 );
                l_U760 = 1;
            }
        }
        else
        {
            SETTIMERA( 0 );
            if (l_U760)
            {
                DISABLE_PLAYER_SPRINT( sub_16700(), 0 );
                l_U760 = 0;
            }
        }
    }
    return;
}

