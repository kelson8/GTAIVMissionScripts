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
    l_U491 = 0;
    l_U492 = 999999.80000000;
    l_U493 = 0.00000000;
    l_U494 = 0.26000000;
    l_U495 = 0.65000000;
    l_U497 = 5000.00000000;
    l_U498 = 5000.00000000;
    l_U500 = 0.00000000;
    l_U502 = 0;
    l_U513 = "amb@smoking_spliff";
    l_U514 = "create_spliff";
    l_U515 = "partial_smoke";
    l_U516 = "partial_smoke_car";
    l_U517 = {0.13700000, 0.03100000, 0.03500000};
    l_U520 = {2.21400000, -0.12100000, 0.00000000};
    l_U523 = {0.00000000, 0.00000000, 0.13600000};
    l_U526 = {0.00000000, 0.00000000, 0.00000000};
    l_U529 = {-0.48300000, -0.28500000, 0.62000000};
    l_U532 = {-0.48300000, -1.30000000, 0.62000000};
    l_U535 = {0.00000000, 0.00000000, 90.00000000};
    l_U538 = {0.00000000, -0.28500000, 0.50000000};
    l_U541 = {0.00000000, 0.00000000, 0.00000000};
    l_U568 = 0;
    l_U592 = {19.99000000, 0.00000000, 0.00000000};
    l_U595 = {19.99000000, 0.00000000, 0.00000000};
    StrCopy( ref l_U629, "DRP_JCB_OFF", 16 );
    l_U635 = 1;
    l_U735 = 0;
    l_U736 = 0;
    l_U755 = -90.00000000;
    l_U756 = 10.00000000;
    l_U766 = 1;
    l_U767 = 1.00000000;
    l_U768 = 50.00000000;
    l_U769 = 15.00000000;
    l_U770 = 0.90000000;
    l_U771 = 300.00000000;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_651();
        sub_2761();
    }
    WAIT( 0 );
    sub_3187();
    while (true)
    {
        WAIT( 0 );
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 31 ))
        {
            sub_7017();
        }
        else if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            sub_23243();
        }
        if (l_U734 != 5)
        {
            if (DOES_CHAR_EXIST( l_U548 ))
            {
                if ((IS_CHAR_DEAD( l_U548 )) || (IS_CHAR_INJURED( l_U548 )))
                {
                    l_U765 = 3;
                    sub_23925();
                }
            }
            if (DOES_VEHICLE_EXIST( l_U551 ))
            {
                if (NOT (IS_VEH_DRIVEABLE( l_U551 )))
                {
                    if (l_U734 == 3)
                    {
                        if (DOES_CHAR_EXIST( l_U548 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U548 )))
                            {
                                SET_CHAR_HEALTH( l_U548, 2 );
                            }
                        }
                        l_U765 = 3;
                        sub_23925();
                    }
                    else if (DOES_CHAR_EXIST( l_U548 ))
                    {
                        SET_CHAR_PROOFS( l_U548, 1, 1, 1, 1, 1 );
                    }
                    l_U765 = 2;
                    sub_23925();;
                }
            }
            if (NOT l_U739)
            {
                if (DOES_VEHICLE_EXIST( l_U552 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( l_U552 )))
                    {
                        if ((NOT (IS_CHAR_DEAD( l_U549 ))) AND (NOT (IS_CAR_DEAD( l_U552 ))))
                        {
                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U552 ))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U552 );
                            }
                            TASK_HELI_MISSION( l_U549, l_U552, 0, 0, 0, 0, 0, 20, 0, 0, -1, 0, 0 );
                        }
                        if (DOES_CHAR_EXIST( l_U548 ))
                        {
                            SET_CHAR_PROOFS( l_U548, 1, 1, 1, 1, 1 );
                        }
                        l_U765 = 5;
                        sub_23925();
                    }
                }
            }
        }
        switch (l_U734)
        {
            case 0:
            if (l_U751)
            {
                sub_30436( l_U548 );
                if (IS_CHAR_IN_CAR( sub_6512(), l_U551 ))
                {
                    if (DOES_BLIP_EXIST( l_U545 ))
                    {
                        REMOVE_BLIP( l_U545 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U548 )))
                    {
                        TASK_CLEAR_LOOK_AT( sub_6512() );
                    }
                    FREEZE_CAR_POSITION( l_U551, 1 );
                    sub_43876();
                    PRINT( "LOCATE_HELI1", 7500, 0 );
                    l_U734 = 1;
                }
                else if ((IS_CHAR_PLAYING_ANIM( sub_6512(), "veh@HELICOPTER", "get_in_ds" )) || ((IS_CHAR_PLAYING_ANIM( sub_6512(), "veh@HELICOPTER", "get_in_ps" )) || ((IS_CHAR_PLAYING_ANIM( sub_6512(), "veh@HELICOPTER", "d_open_out_ps" )) || (IS_CHAR_PLAYING_ANIM( sub_6512(), "veh@HELICOPTER", "d_open_out_ds" )))))
                {
                    if (NOT l_U750)
                    {
                        FREEZE_CAR_POSITION( l_U551, 0 );
                        l_U750 = 1;
                    }
                }
                else if (l_U750)
                {
                    FREEZE_CAR_POSITION( l_U551, 1 );
                    l_U750 = 0;
                }
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_6512(), l_U551, 8.00000000, 8.00000000, 8.00000000, 0 ))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U548 ))) AND (NOT l_U667))
                    {
                        TASK_LOOK_AT_CHAR( l_U548, sub_6512(), -2, 0 );
                        sub_26036( "C4_HELO", ref l_U598, 6, 1 );
                        l_U667 = 1;
                    }
                }
                else if ((NOT (DOES_BLIP_EXIST( l_U546 ))) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_6512(), l_U551, 30.00000000, 30.00000000, 30.00000000, 0 )))
                {
                    REMOVE_BLIP( l_U545 );
                    ADD_BLIP_FOR_CAR( l_U551, ref l_U546 );
                    CHANGE_BLIP_COLOUR( l_U546, 3 );
                    PRINT_NOW( "GET_INTO_HELI", 7500, 0 );
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_6512(), -507.29970000, 1734.15000000, 8.36480100, 500.00000000, 500.00000000, 500.00000000, 0 )))
                {
                    sub_46981();
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_6512(), -507.29970000, 1734.15000000, 8.36480100, 300.00000000, 300.00000000, 300.00000000, 0 ))
            {
                sub_47196();
            }
            break;
            case 1:
            sub_49073( ref l_U549 );
            if (NOT (IS_CAR_DEAD( l_U551 )))
            {
                if (IS_CHAR_IN_CAR( sub_6512(), l_U551 ))
                {
                    g_U9938 = 0;
                }
                else
                {
                    g_U9938 = 1;
                }
            }
            if ((NOT (IS_CAR_DEAD( l_U552 ))) AND ((NOT (IS_CHAR_DEAD( l_U548 ))) AND (NOT (IS_CAR_DEAD( l_U551 )))))
            {
                sub_30436( l_U548 );
                sub_49892( l_U548, "C4_B1aV1", "C4_B1aV1", 0 );
                l_U568 = sub_50993( l_U552, sub_6512() );
                if (sub_51164( "LOCATE_HELI1", "LOCATE_HELI2", "BACK_IN_HELI" ))
                {
                    if ((l_U568 < 240) AND ((NOT (IS_CHAR_DEAD( l_U549 ))) AND ((IS_CHAR_IN_CAR( l_U548, l_U551 )) AND (IS_CHAR_IN_CAR( sub_6512(), l_U551 )))))
                    {
                        sub_51567();
                        CLEAR_SMALL_PRINTS();
                        PRINT( "FOLLOW_HELI1", 7500, 0 );
                        l_U734 = 2;
                    }
                    else if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U552 ))
                    {
                        l_U560 = FIND_TIME_POSITION_IN_RECORDING( l_U552 );
                        if (l_U736)
                        {
                            PRINTNL();
                            PRINTSTRING( "Target heli time- " );
                            PRINTFLOAT( l_U560 );
                        }
                        if (l_U560 > 25000)
                        {
                            if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_6512(), l_U548, 150, 150, 150, 0 ))) AND (NOT (sub_49908( sub_6512(), l_U548 ))))
                            {
                                if (DOES_CHAR_EXIST( l_U548 ))
                                {
                                    DELETE_CHAR( ref l_U548 );
                                }
                                l_U765 = 4;
                                sub_23925();
                            }
                            else if (DOES_CHAR_EXIST( l_U548 ))
                            {
                                SET_CHAR_PROOFS( l_U548, 1, 1, 1, 1, 1 );
                            }
                            l_U765 = 0;
                            sub_23925();;
                        }
                    }
                }
                else if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U552 ))
                {
                    l_U560 = FIND_TIME_POSITION_IN_RECORDING( l_U552 );
                    if (l_U560 > 25000)
                    {
                        if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_6512(), l_U548, 150, 150, 150, 0 ))) AND (NOT (sub_49908( sub_6512(), l_U548 ))))
                        {
                            if (DOES_CHAR_EXIST( l_U548 ))
                            {
                                DELETE_CHAR( ref l_U548 );
                            }
                            l_U765 = 4;
                            sub_23925();
                        }
                        else if (DOES_CHAR_EXIST( l_U548 ))
                        {
                            SET_CHAR_PROOFS( l_U548, 1, 1, 1, 1, 1 );
                        }
                        l_U765 = 0;
                        sub_23925();;
                    }
                }
            }
            break;
            case 2:
            if (NOT (IS_CAR_DEAD( l_U551 )))
            {
                if (IS_CHAR_IN_CAR( sub_6512(), l_U551 ))
                {
                    g_U9938 = 0;
                }
                else
                {
                    g_U9938 = 1;
                }
            }
            if (NOT (IS_CAR_DEAD( l_U552 )))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U552 ))
                {
                    l_U560 = FIND_TIME_POSITION_IN_RECORDING( l_U552 );
                    if (l_U736)
                    {
                        PRINTNL();
                        PRINTSTRING( "Target heli time- " );
                        PRINTFLOAT( l_U560 );
                    }
                    sub_52299( l_U552, sub_6512(), ref l_U767, l_U770, l_U769, l_U768, l_U771 );
                    SET_PLAYBACK_SPEED( l_U552, l_U767 );
                    sub_53517();
                    if (NOT l_U733)
                    {
                        sub_55191();
                    }
                }
                if (NOT l_U628)
                {
                    if (l_U560 > 200000)
                    {
                        if ((HAS_MODEL_LOADED( 1516578222 )) AND ((HAS_MODEL_LOADED( 1224353592 )) AND (HAS_MODEL_LOADED( 1443084780 ))))
                        {
                            l_U628 = 1;
                        }
                        else
                        {
                            REQUEST_MODEL( 1443084780 );
                            REQUEST_MODEL( 1224353592 );
                            REQUEST_MODEL( 1516578222 );
                            REQUEST_ANIMS( "VEH@VAN" );
                        }
                    }
                }
                if (l_U740)
                {
                    if (sub_51164( "LINEUP_HELI1", "LINEUP_HELI2", "BACK_IN_HELI" ))
                    {
                        if ((NOT (IS_CHAR_DEAD( l_U549 ))) AND ((NOT (IS_CAR_DEAD( l_U551 ))) AND (NOT (IS_CAR_DEAD( l_U552 )))))
                        {
                            sub_49073( ref l_U549 );
                            sub_56000();
                            if (l_U752)
                            {
                                sub_62106();
                            }
                            if ((l_U753) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT l_U634)))
                            {
                                sub_62841( "LINEUP_HELP", 1, 5000 );
                                l_U634 = 1;
                            }
                            if ((TIMERB() > 2000) AND (l_U732))
                            {
                                if ((NOT l_U624) AND (NOT l_U625))
                                {
                                    if (sub_63332())
                                    {
                                        SETTIMERA( 0 );
                                        l_U625 = 1;
                                    }
                                }
                                else if ((l_U625) AND (TIMERA() > 500))
                                {
                                    if (sub_63332())
                                    {
                                        sub_27308( ref l_U598, 0 );
                                        sub_26036( "C4_HOLD", ref l_U598, 6, 1 );
                                        l_U624 = 1;
                                    }
                                    else
                                    {
                                        l_U625 = 0;
                                    }
                                }
                                if (l_U624)
                                {
                                    if (l_U625)
                                    {
                                        l_U625 = 0;
                                        SETTIMERA( 0 );
                                    }
                                    else if (TIMERA() > 2000)
                                    {
                                        if (sub_63332())
                                        {
                                            if (l_U730 == 2)
                                            {
                                                if (NOT (IS_CAR_DEAD( l_U551 )))
                                                {
                                                    LOCK_CAR_DOORS( l_U551, 4 );
                                                }
                                            }
                                            l_U669[l_U730]._fU56 = 1;
                                            l_U732 = 0;
                                        }
                                        else
                                        {
                                            sub_27308( ref l_U598, 0 );
                                            sub_26036( "C4_NOSHOT", ref l_U598, 6, 1 );
                                            SETTIMERB( 0 );
                                        }
                                        l_U624 = 0;
                                        l_U625 = 0;
                                    }
                                }
                            }
                            if (NOT (IS_CAR_DEAD( l_U552 )))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U552 ))
                                {
                                    l_U560 = FIND_TIME_POSITION_IN_RECORDING( l_U552 );
                                    if (l_U560 > 162000.00000000)
                                    {
                                        if (DOES_CHAR_EXIST( l_U548 ))
                                        {
                                            SET_CHAR_PROOFS( l_U548, 1, 1, 1, 1, 1 );
                                        }
                                        for ( l_U754 = 0; l_U754 < 3; l_U754++ )
                                        {
                                            if (l_U669[l_U754]._fU60)
                                            {
                                                if (DOES_OBJECT_EXIST( l_U669[l_U754]._fU0 ))
                                                {
                                                    GET_OBJECT_COORDINATES( l_U669[l_U754]._fU0, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
                                                    TRIGGER_PTFX( "exp_missed_chopper", l_U561, 0, 0, 0, 1.00000000 );
                                                    PLAY_SOUND_FROM_OBJECT( l_U657, "CHOPPER_CHASE_ROCKET_MISS_EXPLOSION", l_U669[l_U754]._fU0 );
                                                    STOP_PTFX( l_U669[l_U754]._fU52 );
                                                    DELETE_OBJECT( ref l_U669[l_U754]._fU0 );
                                                    l_U669[l_U754]._fU76 = 1;
                                                }
                                            }
                                        }
                                        sub_64475();
                                        l_U765 = 1;
                                        sub_23925();
                                    }
                                }
                            }
                        }
                    }
                    l_U753 = 1;
                }
                else
                {
                    sub_30436( l_U548 );
                    if (sub_51164( "FOLLOW_HELI1", "FOLLOW_HELI2", "BACK_IN_HELI" ))
                    {
                        if ((NOT l_U737) AND (sub_63654()))
                        {
                            sub_26036( "C4_B1VB1", ref l_U598, 6, 1 );
                            l_U737 = 1;
                        }
                        if ((NOT l_U748) AND ((l_U737) AND (sub_63654())))
                        {
                            PRINT_HELP( "HELI_YAW" );
                            l_U748 = 1;
                        }
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U552 ))
                        {
                            sub_49073( ref l_U549 );
                            if (l_U736)
                            {
                                l_U560 = FIND_TIME_POSITION_IN_RECORDING( l_U552 );
                                GET_CAR_COORDINATES( l_U552, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
                                PRINTNL();
                                PRINTSTRING( "Target heli time- " );
                                PRINTFLOAT( l_U560 );
                                PRINTNL();
                                PRINTSTRING( "Target heli coords- " );
                                PRINTVECTOR( l_U561 );
                                PRINTNL();
                            }
                        }
                    }
                }
            }
            else
            {
                sub_7017();
            }
            break;
            case 3:
            if ((NOT (IS_CAR_DEAD( l_U551 ))) AND (NOT (IS_CHAR_DEAD( l_U548 ))))
            {
                sub_30436( l_U548 );
                sub_66269();
                sub_66942();
                if (l_U744)
                {
                    if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "DRP_JCB_OFF1", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                    {
                        sub_49892( l_U548, "C4_B2V1", "C4_B2V2", 4 );
                    }
                }
                else
                {
                    sub_49892( l_U548, "C4_SHOOT", "C4_SHOOT", 3 );
                }
                if ((l_U668) AND ((NOT l_U744) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_45833( l_U598 ))))))
                {
                    sub_51567();
                    PRINT_NOW( "DRP_JCB_OFF1", 7500, 0 );
                    l_U744 = 1;
                }
                if (sub_67408( ref l_U547, ref l_U545, l_U551, 370.34910000, -731.55350000, 4.67650000, l_U629 ))
                {
                    if ((LOCATE_CHAR_IN_CAR_3D( sub_6512(), 370.34910000, -731.55350000, 10.67650000, 8.00000000, 8.00000000, 8.00000000, 1 )) AND (IS_CHAR_IN_CAR( l_U548, l_U551 )))
                    {
                        GET_CHAR_COORDINATES( sub_6512(), ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
                        if (l_U561._fU8 < 4.80000000)
                        {
                            if ((NOT IS_SCREEN_FADING()) AND (sub_24154( 1, 1 )))
                            {
                                sub_51567();
                                REMOVE_BLIP( l_U545 );
                                sub_40688( l_U548, 0 );
                                sub_24595( "C4_DROP2" );
                                sub_7017();
                            }
                        }
                    }
                }
                else if (DOES_BLIP_EXIST( l_U547 ))
                {
                    SET_BLIP_AS_FRIENDLY( l_U547, 1 );
                }
                if (NOT l_U668)
                {
                    l_U668 = 1;
                }
            }
            break;
            case 4:
            if (NOT (IS_CAR_DEAD( l_U552 )))
            {
                GET_CAR_COORDINATES( l_U552, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
                PRINTNL();
                PRINTSTRING( "chopper coords- " );
                PRINTVECTOR( l_U561 );
            }
            break;
            case 5:
            if (l_U559)
            {
                l_U559 = 0;
            }
            else
            {
                sub_23925();
            }
            break;
            default: break;
        }
    }
    sub_2761();
    return;
}

void sub_651()
{
    sub_660();
    return;
}

void sub_660()
{
    int iVar2;

    iVar2 = 12;
    sub_674( iVar2 );
    sub_1850( iVar2 );
    return;
}

void sub_674(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_718();
        sub_879();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_987();
            sub_1026();
        }
    }
    sub_1102();
    sub_1203();
    uVar5 = sub_1316( uParam0 );
    sub_1757( uVar5, 0 );
    return;
}

void sub_718()
{
    sub_732( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_832();
    }
    return;
}

void sub_732(int iParam0)
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

void sub_832()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_879()
{
    sub_888();
    return;
}

void sub_888()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_987()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1026()
{
    sub_1035();
    return;
}

void sub_1035()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1102()
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

void sub_1203()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1225();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1225()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1316(unknown uParam0)
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
    sub_1715( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1715(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1757(int iParam0, boolean bParam1)
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

void sub_1850(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1859();
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
        sub_2634();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1859()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1897( 5, g_U569[I] )) == 1))
        {
            if ((sub_1897( 1, g_U569[I] )) != 0)
            {
                sub_2183( I );
            }
        }
    }
    if (NOT sub_2349())
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

int sub_1897(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2183(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2268( g_U569 - 1 );
    return;
}

void sub_2268(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2349()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1897( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2634()
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

void sub_2761()
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U551 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U552 );
    if (DOES_CHAR_EXIST( l_U548 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U548 )))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U548 );
        }
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U549 );
    sub_2849();
    sub_3000();
    CLEAR_HELP();
    sub_3044();
    if (IS_PLAYER_PLAYING( sub_3090() ))
    {
        CLEAR_WANTED_LEVEL( sub_3090() );
        SET_PLAYER_CONTROL( sub_3090(), 1 );
    }
    g_U9938 = 1;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2849()
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

void sub_3000()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_3044()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_3090()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3187()
{
    l_U569 = {0.00000000, -5.00000000, 1.69087000};
    l_U572 = {0.00000000, 1.38269000, 1.69087000};
    l_U575 = {0.00000000, -1.00000000, 1.40000000};
    l_U578 = {0.00000000, 0.00000000, 1.73459000};
    l_U581 = {2.50000000, 0.00000000, 0.00000000};
    l_U584 = {5.00000000, 0.00000000, -0.80000000};
    l_U608[0] = {26, 15, -14};
    l_U608[1] = {-150.00000000, 50.00000000, 0.00000000};
    l_U608[2] = {-15.00000000, 0.00000000, -8.00000000};
    l_U618[0] = 0.00000000;
    l_U618[1] = 0.00000000;
    l_U618[2] = 0.00000000;
    l_U605 = {-15.00000000, 0.00000000, -8.00000000};
    l_U622 = -10.00000000;
    l_U587 = 1800;
    l_U588 = 1800;
    l_U589 = 2000;
    l_U591 = 1;
    l_U590 = 5000;
    l_U730 = 0;
    sub_3508();
    sub_4831();
    sub_5071();
    REQUEST_MODEL( -1660661558 );
    sub_5212( 3 );
    REQUEST_CAR_RECORDING( 248 );
    REQUEST_ANIMS( "misscia4" );
    while ((NOT (HAVE_ANIMS_LOADED( "misscia4" ))) || ((NOT (HAS_CAR_RECORDING_BEEN_LOADED( 248 ))) || ((NOT (sub_5957( 3 ))) || (NOT (HAS_MODEL_LOADED( -1660661558 ))))))
    {
        WAIT( 0 );
    }
    sub_6051( "CHOPCHS", 0 );
    sub_6204( "CHOPCHS" );
    LOAD_ADDITIONAL_TEXT( "C4AUD", 6 );
    sub_6398( "C4AUD" );
    sub_6561( 0, sub_6512(), "NIKO", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_MISSION/CHOPPER_CHASE" )))
    {
        WAIT( 0 );
    }
    l_U657 = GET_SOUND_ID();
    l_U664 = GET_SOUND_ID();
    l_U658 = GET_SOUND_ID();
    if (l_U735)
    {
        CREATE_CAR( -1660661558, -370.87520000, 1268.85100000, 98.26320000, ref l_U552, 1 );
        SET_CAR_HEADING( l_U552, 194.48740000 );
        CHANGE_CAR_COLOUR( l_U552, 1, 120 );
        WARP_CHAR_INTO_CAR( sub_6512(), l_U552 );
        l_U734 = 4;
    }
    ADD_BLIP_FOR_COORD( -489.80000000, 1725.50000000, 9.00000000, ref l_U545 );
    SET_ROUTE( l_U545, 1 );
    SETTIMERA( 0 );
    PRINT_NOW( "GO_TO_HELI", 7500, 0 );
    return;
}

void sub_3508()
{
    unknown uVar2;

    uVar2 = CREATE_WIDGET_GROUP( "Chopper Chase - Cutscene" );
    ADD_WIDGET_TOGGLE( "Skip", ref l_U558 );
    ADD_WIDGET_FLOAT_SLIDER( "spinDownVect.x", ref l_U592._fU0, -50.00000000, 50.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "spinDownVect.y", ref l_U592._fU4, -50.00000000, 50.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "spinDownVect.z", ref l_U592._fU8, -50.00000000, 50.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "impulseVect.x", ref l_U595._fU0, -50.00000000, 50.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "impulseVect.y", ref l_U595._fU4, -50.00000000, 50.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "impulseVect.z", ref l_U595._fU8, -50.00000000, 50.00000000, 0.20000000 );
    ADD_WIDGET_FLOAT_SLIDER( "firstExplosionVect.x", ref l_U584._fU0, -10.00000000, 10.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "firstExplosionVect.y", ref l_U584._fU4, -10.00000000, 10.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "firstExplosionVect.z", ref l_U584._fU8, -10.00000000, 10.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "explosionVect.x", ref l_U581._fU0, -10.00000000, 10.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "explosionVect.y", ref l_U581._fU4, -10.00000000, 10.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "explosionVect.z", ref l_U581._fU8, -10.00000000, 10.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "explodeCam[0].x", ref l_U608[0]._fU0, -400.00000000, 400.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "explodeCam[0].y", ref l_U608[0]._fU4, -400.00000000, 400.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "explodeCam[0].z", ref l_U608[0]._fU8, -400.00000000, 400.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "pointBehind[0]", ref l_U618[0], -100.00000000, 100.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "explodeCam[1].x", ref l_U608[1]._fU0, -400.00000000, 400.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "explodeCam[1].y", ref l_U608[1]._fU4, -400.00000000, 400.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "explodeCam[1].z", ref l_U608[1]._fU8, -400.00000000, 400.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "pointBehind[1]", ref l_U618[1], -100.00000000, 100.00000000, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "pointDown", ref l_U622, -100.00000000, 100.00000000, 1.00000000 );
    ADD_WIDGET_SLIDER( "spinDownTime", ref l_U590, 0, 20000, 200 );
    ADD_WIDGET_SLIDER( "timeBetwnExplosions", ref l_U587, 0, 20000, 200 );
    ADD_WIDGET_SLIDER( "timeBetwnExplosions2", ref l_U588, 0, 20000, 200 );
    ADD_WIDGET_SLIDER( "timeBetwnExplosions3", ref l_U589, 0, 20000, 200 );
    ADD_WIDGET_TOGGLE( "doTwoExplodeCars", ref l_U591 );
    ADD_WIDGET_TOGGLE( "snapHeliToWater", ref l_U623 );
    END_WIDGET_GROUP();
    return;
}

void sub_4831()
{
    unknown uVar2;

    uVar2 = CREATE_WIDGET_GROUP( "Uber Recording Speed Control" );
    ADD_WIDGET_FLOAT_SLIDER( "PlybkSpd", ref l_U767, 0, 10, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "IdealChsDst", ref l_U768, 0, 300, 10.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "MnChseDst", ref l_U769, 0, 200, 1.00000000 );
    ADD_WIDGET_FLOAT_SLIDER( "DfltPlybkSpd", ref l_U770, 0, 10, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "SlwDwnSped", ref l_U771, 0, 300, 1.00000000 );
    END_WIDGET_GROUP();
    return;
}

void sub_5071()
{
    unknown uVar2;

    uVar2 = CREATE_WIDGET_GROUP( "Rocket vector" );
    ADD_WIDGET_FLOAT_SLIDER( "rocketAngleLow", ref l_U755, 65176, 360, 1 );
    ADD_WIDGET_FLOAT_SLIDER( "rocketAngleHigh", ref l_U756, 65176, 360, 1 );
    END_WIDGET_GROUP();
    return;
}

void sub_5212(unknown uParam0)
{
    REQUEST_MODEL( sub_5223( uParam0 ) );
    return;
}

int sub_5223(unknown uParam0)
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
    sub_1715( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5957(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_5223( uParam0 ) );
}

void sub_6051(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_6087())
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

int sub_6087()
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

void sub_6204(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    StrCopy( ref g_U9232, uParam0, 32 );
    sVar3 = "text_link_mission";
    if (IS_NETWORK_SESSION())
    {
        sVar3 = "txtlnkmiss_net";
    }
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    g_U9240 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_6398(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_6417();
    return;
}

void sub_6417()
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

void sub_6512()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_6561(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6645( "\n PED NUMBER ", uParam0 );
    sub_6685( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6645(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6685(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7017()
{
    sub_7026();
    CLEAR_WANTED_LEVEL( sub_3090() );
    TRIGGER_MISSION_COMPLETE_AUDIO( 58 );
    UNLOCK_MISSION_NEWS_STORY( 26 );
    sub_18646( 26 );
    sub_21849( 24 );
    sub_22624( 12, "C4_CPASS", "C4AUD", 0 );
    sub_2761();
    return;
}

void sub_7026()
{
    sub_7035();
    return;
}

void sub_7035()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_7053();
    sub_7112( iVar2, iVar3, iVar4 );
    return;
}

void sub_7053()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_7112(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 12;
    sub_7145( iVar5, uParam0, uParam1, uParam2, "Contact_13" );
    return;
}

void sub_7145(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_7241( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_7241( ref cVar9 );
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
            sub_7241( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_7241( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_7241( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_7241( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_7818( iParam0, iVar7 );;;
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
                sub_8215( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_8215( 0, 4 );
            }
        }
    }
    if (NOT (sub_8304( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3090(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3090() );
    }
    sub_1859();
    bVar27 = true;
    uVar28 = sub_7818( iParam0, iVar7 );
    uVar29 = sub_1316( iParam0 );
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
                sub_17680( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_18110();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_18195( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_18252( iParam0 );
                sub_18291( 0 );
                sub_1757( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_18399();
        }
    }
    if (bParam2)
    {
        sub_18110();
        sub_18487();
        sub_18291( 0 );
    }
    if (bParam3)
    {
        sub_18110();
        sub_18527();
        sub_18291( 0 );
        sub_1757( uVar29, 0 );
    }
    sub_1203();
    return;
}

void sub_7241(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_7818(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1715( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_8215(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_8304(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_8512( uParam1 );
        break;
        case 1:
        bVar8 = sub_10590( uParam1 );
        break;
        case 2:
        bVar8 = sub_10816( uParam1 );
        break;
        case 3:
        bVar8 = sub_10966( uParam1 );
        break;
        case 4:
        bVar8 = sub_11244( uParam1 );
        break;
        case 5:
        bVar8 = sub_11547( uParam1 );
        break;
        case 6:
        bVar8 = sub_11746( uParam1 );
        break;
        case 7:
        bVar8 = sub_11972( uParam1 );
        break;
        case 8:
        bVar8 = sub_12207( uParam1 );
        break;
        case 9:
        bVar8 = sub_12582( uParam1 );
        break;
        case 10:
        bVar8 = sub_12829( uParam1 );
        break;
        case 11:
        bVar8 = sub_12968( uParam1 );
        break;
        case 12:
        bVar8 = sub_13267( uParam1 );
        break;
        case 13:
        bVar8 = sub_13495( uParam1 );
        break;
        case 14:
        bVar8 = sub_13782( uParam1 );
        break;
        case 15:
        bVar8 = sub_14064( uParam1 );
        break;
        case 16:
        bVar8 = sub_14346( uParam1 );
        break;
        case 17:
        bVar8 = sub_14547( uParam1 );
        break;
        case 18:
        bVar8 = sub_14620( uParam1 );
        break;
        case 19:
        bVar8 = sub_14834( uParam1 );
        break;
        case 20:
        bVar8 = sub_15087( uParam1 );
        break;
        case 21:
        bVar8 = sub_15334( uParam1 );
        break;
        case 22:
        bVar8 = sub_15535( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_10195( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_7818( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_15858( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_8512(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_8791( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_8791( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_8791( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_8791( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_8791( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_8791( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_8791( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_8791( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_8791( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_8791( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_8791( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_8791( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_8791( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_8791( iVar3, 0, 3, 1, 0, 0 );
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
        sub_8791( iVar3, 0, sub_10073(), sub_10339(), 0, 0 );
        break;
        default:
        sub_10498( "Friend 1", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Friend 1", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_8791(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_8802( uParam1 );
    sub_8976( uParam0, 0, uParam2 );
    sub_8976( uParam0, 1, uParam3 );
    sub_8976( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_7053();
    return;
}

void sub_8802(unknown uParam0)
{
    ADD_SCORE( sub_3090(), uParam0 );
    sub_8827( uParam0 );
    return;
}

void sub_8827(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1715( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_8976(unknown uParam0, int iParam1, int iParam2)
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
        sub_9133( uParam0 );
    }
    return;
}

void sub_9133(unknown uParam0)
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

int sub_10073()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_10195( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_10195(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_10339()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_10195( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_10498(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_10590(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_8791( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_10498( "Contact 2", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 2", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10816(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_8791( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_10498( "Girl 3", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Girl 3", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10966(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_8791( iVar3, 0, sub_10073(), sub_10339(), 0, 0 );
        break;
        default:
        sub_10498( "Friend 4", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Friend 4", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11244(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_8791( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_8791( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_8791( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_8791( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_10498( "Contact 5", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 5", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11547(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_10498( "Contact 7", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 7", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11746(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_8791( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_10498( "Contact 7b", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 7b", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11972(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_8791( iVar3, 0, sub_10073(), sub_10339(), 0, 0 );
        break;
        default:
        sub_10498( "Friend 8", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Friend 8", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12207(unknown uParam0)
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
        sub_8791( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_8791( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_8791( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_8791( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_8791( iVar3, 0, sub_10073(), sub_10339(), 0, 0 );
        break;
        default:
        sub_10498( "Friend 9", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Friend 9", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12582(unknown uParam0)
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
        sub_8791( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_8791( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_8791( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_10498( "Contact 10", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_10498( "Contact 10", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12829(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_10498( "Girl 11", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Girl 11", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12968(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_8791( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_8791( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_8791( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_8791( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_8791( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_10498( "Contact 12", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 12", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13267(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_8791( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_10498( "Contact 13", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 13", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13495(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_8791( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_8791( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_8791( iVar3, 0, sub_10073(), sub_10339(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_10498( "Friend 15", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Friend 15", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_13782(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_8791( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_8791( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_8791( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_10498( "Contact 16", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 16", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14064(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_8791( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_8791( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_8791( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_10498( "Contact 18", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 18", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14346(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_10498( "Contact 19", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 19", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14547(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_10498( "Girl 20", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14620(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_10498( "Contact 21", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 21", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_14834(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_8791( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_8791( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_10498( "Contact 22", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 22", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15087(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_8791( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_8791( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_8791( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_10498( "Contact 24", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 24", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15334(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_8791( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_8791( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_8791( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_10498( "Contact 25", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_10498( "Contact 25", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_15535(unknown uParam0)
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
        sub_8791( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_10498( "Girl 26", 1 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_10498( "Girl 26", 0 );
        sub_8791( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_15858(int iParam0, int iParam1)
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
    if (sub_15906( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_16637( iParam1 );
    }
    return;
}

int sub_15906(int iParam0, int iParam1)
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
            sub_16046( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_16046(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_16228( 0 );
    return;
}

void sub_16228(boolean bParam0)
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
        sub_16483();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_16483()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_16637(int iParam0)
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
        sub_16970( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_16970( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_16970( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_16970( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_16970( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_16970( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_16970( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_16970( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_16970( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_16970( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_16970( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_16970( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_16970( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_16970( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_16970( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_16970( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_16970( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_16970( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_16970( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_16970(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_17680(unknown uParam0, unknown uParam1)
{
    sub_17699( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_17699(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_18110()
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

int sub_18195(int iParam0, int iParam1)
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

void sub_18252(unknown uParam0)
{
    sub_1102();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_18291(unknown uParam0)
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

void sub_18399()
{
    sub_18408();
    return;
}

void sub_18408()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_18487()
{
    sub_18408();
    return;
}

void sub_18527()
{
    sub_18408();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_18646(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_18733( iParam0 ))
    {
        sub_19795( iParam0 );
    }
    return;
}

int sub_18733(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_18790( ref uVar3, 1, 0, 0 );
    sub_19402( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_19615( "\n ----------------------------------------------------------------" );
    sub_6645( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_19615( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_18790(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_18843( iParam0, uParam1, uParam2 );
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
        sub_18975( iParam0 + 0 );
    }
    return;
}

void sub_18843(int iParam0, int iParam1, int iParam2)
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
        sub_18975( iParam0 + 0 );
    }
    return;
}

void sub_18975(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_19006( iParam0->_fU4 )))
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

int sub_19006(unknown uParam0)
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

void sub_19402(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_19615(unknown uParam0)
{
    return;
}

void sub_19795(unknown uParam0)
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
        sub_20006( 20, 6, 16383, 16383, ref uVar4 );
        sub_20682( ref uVar4, 7 );
        sub_20713( ref uVar4, 0 );
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
        sub_20006( 20, 7, 9, 16383, ref uVar4 );
        sub_20682( ref uVar4, 7 );
        sub_20713( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_20006(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_20030( uParam0, 0, iParam4 + 0 );
    sub_20030( uParam1, 1, iParam4 + 0 );
    sub_20030( uParam2, 2, iParam4 + 0 );
    sub_20030( uParam3, 3, iParam4 + 0 );
    sub_20030( 0, 4, iParam4 + 0 );
    sub_20030( 1, 5, iParam4 + 0 );
    sub_20030( 65535, 6, iParam4 + 0 );
    sub_20030( 0, 12, iParam4 + 0 );
    sub_20030( 0, 11, iParam4 + 0 );
    sub_20030( 0, 14, iParam4 + 0 );
    sub_20030( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_20030( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_20030( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_20030(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_20682(int iParam0, unknown uParam1)
{
    sub_20030( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_20713(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_20753())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_21440( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_21239( iVar5 );
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

int sub_20753()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_20787( 5, g_U968[I] )) == 7)
        {
            sub_21239( I );
            return 1;
        }
    }
    return 0;
}

int sub_20787(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_21239(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_21312( 39 );
    return;
}

void sub_21312(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_21440(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_21501( uParam0, g_U968[Result] ))
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

int sub_21501(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_21849(unknown uParam0)
{
    switch (uParam0)
    {
        case 21:
        if (g_U1965[0] == 0)
        {
            sub_18790( ref g_U1967[0], 4, 0, 0 );
            g_U1965[0] = 1;
        }
        break;
        case 22:
        if (g_U1984[0] == 0)
        {
            sub_18790( ref g_U1986[0], 4, 0, 0 );
            g_U1984[0] = 1;
        }
        break;
        case 23:
        if (g_U2003[0] == 0)
        {
            sub_18790( ref g_U2005[0], 4, 0, 0 );
            g_U2003[0] = 1;
        }
        break;
        case 24:
        if (g_U2022[0] == 0)
        {
            sub_18790( ref g_U2024[0], 4, 0, 0 );
            g_U2022[0] = 1;
        }
        break;
        case 25:
        if (g_U2041[0] == 0)
        {
            sub_18790( ref g_U2043[0], 4, 0, 0 );
            g_U2041[0] = 1;
        }
        break;
        case 26:
        if (g_U2060[0] == 0)
        {
            sub_18790( ref g_U2062[0], 4, 0, 0 );
            g_U2060[0] = 1;
        }
        break;
        case 27:
        if (g_U2079[0] == 0)
        {
            sub_18790( ref g_U2081[0], 4, 0, 0 );
            g_U2079[0] = 1;
        }
        break;
        case 28:
        if (g_U2098[0] == 0)
        {
            sub_18790( ref g_U2100[0], 4, 0, 0 );
            g_U2098[0] = 1;
        }
        break;
        case 29:
        if (g_U2117[0] == 0)
        {
            sub_18790( ref g_U2119[0], 4, 0, 0 );
            g_U2117[0] = 1;
        }
        break;
        case 30:
        if (g_U2136[0] == 0)
        {
            sub_18790( ref g_U2138[0], 4, 0, 0 );
            g_U2136[0] = 1;
        }
        break;
        case 31:
        if (g_U2155[0] == 0)
        {
            sub_18790( ref g_U2157[0], 4, 0, 0 );
            g_U2155[0] = 1;
        }
        break;
        case 32:
        if (g_U2174[0] == 0)
        {
            sub_18790( ref g_U2176[0], 4, 0, 0 );
            g_U2174[0] = 1;
        }
        break;
        case 33:
        if (g_U2193[0] == 0)
        {
            sub_18790( ref g_U2195[0], 4, 0, 0 );
            g_U2193[0] = 1;
        }
        break;
        case 34:
        if (g_U2212[0] == 0)
        {
            sub_18790( ref g_U2214[0], 4, 0, 0 );
            g_U2212[0] = 1;
        }
        break;
    }
    return;
}

void sub_22624(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_22668( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_22668(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_23243()
{
    if (l_U734 == 0)
    {
        SET_CHAR_COORDINATES( sub_6512(), -502.88850000, 1738.00500000, 7.60010000 );
        SET_CHAR_HEADING( sub_6512(), 150.00000000 );
        SET_CAM_BEHIND_PED( sub_6512() );
    }
    else if (l_U734 == 1)
    {
        if ((IS_PLAYBACK_GOING_ON_FOR_CAR( l_U552 )) AND ((NOT (IS_CAR_DEAD( l_U551 ))) AND (NOT (IS_CAR_DEAD( l_U552 )))))
        {
            sub_23392( l_U552, 10000 );
            SET_CAR_COORDINATES( l_U551, 65216, 1130, 110 );
            SET_CAR_HEADING( l_U551, 200 );
            SET_CAM_BEHIND_PED( sub_6512() );
            l_U556 = 1;
        }
    }
    else if (l_U734 == 2)
    {
        if ((IS_PLAYBACK_GOING_ON_FOR_CAR( l_U552 )) AND ((NOT (IS_CAR_DEAD( l_U551 ))) AND (NOT (IS_CAR_DEAD( l_U552 )))))
        {
            l_U560 = FIND_TIME_POSITION_IN_RECORDING( l_U552 );
            if (l_U560 < 100000)
            {
                sub_23392( l_U552, 100000 );
                SET_CAR_COORDINATES( l_U551, 597, -496.50000000, 25 );
                SET_CAR_HEADING( l_U551, 163 );
                SET_CAM_BEHIND_PED( sub_6512() );
                l_U556 = 1;
            }
        }
    }
    else if (l_U734 == 3)
    {
        if (NOT (IS_CAR_DEAD( l_U551 )))
        {
            SET_CAR_COORDINATES( l_U551, 363.64840000, -827.96920000, 33.89800000 );
            SET_CAR_HEADING( l_U551, -9.00000000 );
        }
    }
    else if (l_U734 == 4)
    {
        if (NOT (IS_CAR_DEAD( l_U552 )))
        {
            SET_CAR_COORDINATES( l_U552, -370.87520000, 1268.85100000, 98.26320000 );
            SET_CAR_HEADING( l_U552, 194.48740000 );
        }
    };;;;;
    return;
}

void sub_23392(unknown uParam0, unknown uParam1)
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

void sub_23925()
{
    if (DOES_BLIP_EXIST( l_U546 ))
    {
        REMOVE_BLIP( l_U546 );
    }
    l_U734 = 5;
    switch (l_U765)
    {
        case 0:
        if (NOT l_U764)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "FAIL_CHPLOST", 7000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U548 )))
            {
                SET_CHAR_PROOFS( l_U548, 1, 1, 1, 1, 1 );
            }
            l_U764 = 1;
        }
        else if ((NOT IS_SCREEN_FADING()) AND ((sub_24154( 1, 1 )) AND (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "FAIL_CHPLOST", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))))
        {
            if (sub_24464( l_U548, l_U551 ))
            {
                SET_CAR_PROOFS( l_U551, 1, 1, 1, 1, 1 );
                LOCK_CAR_DOORS( l_U551, 4 );
                sub_24595( "C4_DROP" );
            }
            else
            {
                sub_27501( "C4_DROP" );
            }
            sub_22624( 12, "C4_CLOST", "C4AUD", 0 );
            sub_28801();
        }
        break;
        case 4:
        PRINT_NOW( "FAIL_JCBLEFT", 7000, 1 );
        sub_22624( 12, "C4_CLAND", "C4AUD", 0 );
        sub_28801();
        break;
        case 1:
        if (NOT l_U764)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "FAIL_SHTMISSED", 7000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U548 )))
            {
                SET_CHAR_PROOFS( l_U548, 1, 1, 1, 1, 1 );
            }
            l_U764 = 1;
        }
        else if ((NOT IS_SCREEN_FADING()) AND ((sub_24154( 1, 1 )) AND (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "FAIL_SHTMISSED", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))))
        {
            if (sub_24464( l_U548, l_U551 ))
            {
                SET_CAR_PROOFS( l_U551, 1, 1, 1, 1, 1 );
                LOCK_CAR_DOORS( l_U551, 4 );
                sub_24595( "C4_DROP" );
            }
            else
            {
                sub_27501( "C4_DROP" );
            }
            sub_22624( 12, "C4_CLAND", "C4AUD", 0 );
            sub_28801();
        }
        break;
        case 2:
        if (NOT l_U764)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "FAIL_CHPDEAD", 7000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U548 )))
            {
                SET_CHAR_PROOFS( l_U548, 1, 1, 1, 1, 1 );
            }
            l_U764 = 1;
            l_U559 = 1;
        }
        else if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "FAIL_CHPDEAD", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
        {
            if (sub_24154( 1, 1 ))
            {
                if (NOT IS_SCREEN_FADING())
                {
                    if (sub_24464( l_U548, l_U551 ))
                    {
                        SET_CAR_PROOFS( l_U551, 1, 1, 1, 1, 1 );
                        LOCK_CAR_DOORS( l_U551, 4 );
                        sub_24595( "C4_DROP" );
                    }
                    else
                    {
                        sub_27501( "C4_DROP" );
                    }
                    sub_22624( 12, "C4_CIMPOSS", "C4AUD", 0 );
                    sub_28801();
                }
            }
        }
        break;
        case 3:
        sub_29624( 3, l_U548, 12 );
        PRINTNL();
        PRINTSTRING( "JACOB_DEAD" );
        PRINTNL();
        PRINT_NOW( "FAIL_JCBDEAD", 7000, 1 );
        sub_22624( 12, "C4_CDEAD", "C4AUD", 0 );
        sub_28801();
        break;
        case 5:
        PRINTNL();
        PRINTSTRING( "SHOT_HELI_OVER_LAND" );
        PRINTNL();
        if (NOT l_U764)
        {
            CLEAR_PRINTS();
            PRINT_NOW( "FAIL_EARLY", 7000, 1 );
            if (NOT (IS_CHAR_DEAD( l_U548 )))
            {
                SET_CHAR_PROOFS( l_U548, 1, 1, 1, 1, 1 );
            }
            l_U764 = 1;
        }
        else if ((NOT IS_SCREEN_FADING()) AND ((sub_24154( 1, 1 )) AND (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "FAIL_EARLY", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))))
        {
            l_U633 = 1;
            sub_27501( "C4_DROP" );
            sub_22624( 12, "C4_CFLAND", "C4AUD", 0 );
            sub_28801();
        }
        break;
    }
    return;
}

int sub_24154(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_6512() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6512(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_6512() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_6512(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_6512()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_6512() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_6512() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3090() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3090() )))
    {
        return 0;
    }
    return 1;
}

int sub_24464(unknown uParam0, unknown uParam1)
{
    if ((IS_VEH_DRIVEABLE( uParam1 )) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
    {
        if (((l_U554 > 0) || (IS_CHAR_IN_CAR( uParam0, uParam1 ))) AND (IS_CHAR_IN_CAR( sub_6512(), uParam1 )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_24595(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown[2] uVar9;
    unknown uVar12;
    int iVar13;

    array(ref uVar9, 2);
    while ((NOT bVar4) AND (NOT bVar3))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar6 );
        if (iVar13 != 0)
        {
            iVar7 = iVar6 - iVar5;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_24660()) AND (iVar7 >= 1000)))
        {
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            if (DOES_CHAR_EXIST( l_U548 ))
            {
                DELETE_CHAR( ref l_U548 );
            }
            DO_SCREEN_FADE_IN( 500 );
            bVar4 = true;
        }
        else
        {
            switch (iVar13)
            {
                case 0:
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    CLEAR_SMALL_PRINTS();
                    SET_WIDESCREEN_BORDERS( 1 );
                    DISPLAY_HUD( 0 );
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                SET_PLAYER_CONTROL( sub_3090(), 0 );
                while (NOT sub_24922())
                {
                    WAIT( 0 );
                }
                REQUEST_ANIMS( "MISSPASS" );
                while (NOT (HAVE_ANIMS_LOADED( "MISSPASS" )))
                {
                    WAIT( 0 );
                }
                CLEAR_AREA( 370.34910000, -731.55350000, 4.47650000, 10.00000000, 1 );
                LOAD_SCENE( 370.34910000, -731.55350000, 4.47650000 );
                CLEAR_HELP();
                if (NOT (IS_CAR_DEAD( l_U551 )))
                {
                    SET_CAR_COORDINATES( l_U551, 370.34910000, -731.55350000, 4.30000000 );
                    SET_CAR_HEADING( l_U551, 160.00000000 );
                    FREEZE_CAR_POSITION( l_U551, 1 );
                    WAIT( 0 );
                    if (NOT (IS_CAR_DEAD( l_U551 )))
                    {
                        FREEZE_CAR_POSITION( l_U551, 0 );
                    }
                    APPLY_FORCE_TO_CAR( l_U551, 1, 0, 0, -0.20000000, 0, 0, 0, 0, 1, 1, 1 );
                }
                BEGIN_CAM_COMMANDS( ref uVar12 );
                CREATE_CAM( 14, ref uVar9[0] );
                SET_CAM_POS( uVar9[0], 355.66040000, -745.14430000, 4.28589400 );
                SET_CAM_ROT( uVar9[0], 7.32983000, 0.00000000, -39.50777000 );
                SET_CAM_FOV( uVar9[0], 45 );
                SET_CAM_ACTIVE( uVar9[0], 1 );
                SET_CAM_PROPAGATE( uVar9[0], 1 );
                CREATE_CAM( 14, ref uVar9[1] );
                SET_CAM_POS( uVar9[1], 355.66040000, -745.14430000, 4.28589400 );
                SET_CAM_ROT( uVar9[1], 7.32983000, 0.00000000, -39.50777000 );
                SET_CAM_FOV( uVar9[1], 45 );
                SET_CAM_ACTIVE( uVar9[1], 1 );
                SET_CAM_PROPAGATE( uVar9[1], 1 );
                CREATE_CAM( 3, ref uVar8 );
                SET_CAM_ACTIVE( uVar8, 1 );
                SET_CAM_PROPAGATE( uVar8, 1 );
                SET_CAM_INTERP_STYLE_CORE( uVar8, uVar9[0], uVar9[1], 4000, 0 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                sub_25590();
                if ((NOT (IS_CAR_DEAD( l_U551 ))) AND (NOT (IS_CHAR_DEAD( l_U548 ))))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U548, l_U551 )))
                    {
                        if ((NOT (IS_CAR_DEAD( l_U551 ))) AND (NOT (IS_CHAR_DEAD( l_U548 ))))
                        {
                            DETACH_PED( l_U548, 1 );
                            TASK_WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U548, l_U551, 0 );
                            SET_CURRENT_CHAR_WEAPON( l_U548, 0, 0 );
                            WAIT( 0 );
                        }
                    }
                    if ((NOT (IS_CAR_DEAD( l_U551 ))) AND (NOT (IS_CHAR_DEAD( l_U548 ))))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U567 );
                        TASK_PAUSE( 0, 2000 );
                        TASK_LEAVE_CAR( 0, l_U551 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 350.26890000, -725.28480000, 4.69180000, 2, 20000, 0.50000000 );
                        TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "partial_bye_r", "MISSPASS", 10.00000000, 0, 0, 0, 0, -1 );
                        CLOSE_SEQUENCE_TASK( l_U567 );
                        TASK_PERFORM_SEQUENCE( l_U548, l_U567 );
                        CLEAR_SEQUENCE_TASK( l_U567 );
                        TASK_LOOK_AT_CHAR( sub_6512(), l_U548, 8000, 0 );
                    }
                }
                sub_26036( uParam0, ref l_U598, 6, 1 );
                DO_SCREEN_FADE_IN( 500 );
                GET_GAME_TIMER( ref iVar5 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                iVar13++;
                break;
                case 1:
                if (NOT (IS_CHAR_DEAD( l_U548 )))
                {
                    if ((LOCATE_CHAR_ANY_MEANS_2D( l_U548, 350.26890000, -725.28480000, 13.00000000, 13.00000000, 0 )) || (NOT (IS_CHAR_ON_SCREEN( l_U548 ))))
                    {
                        DELETE_CHAR( ref l_U548 );
                        bVar3 = true;
                    }
                }
                break;
            }
        }
    }
    TASK_CLEAR_LOOK_AT( sub_6512() );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_ACTIVE( uVar8, 0 );
    SET_CAM_PROPAGATE( uVar8, 0 );
    SET_CAM_ACTIVE( uVar9[0], 0 );
    SET_CAM_PROPAGATE( uVar9[0], 0 );
    SET_CAM_ACTIVE( uVar9[1], 0 );
    SET_CAM_PROPAGATE( uVar9[1], 0 );
    DESTROY_CAM( uVar8 );
    DESTROY_CAM( uVar9[0] );
    DESTROY_CAM( uVar9[1] );
    END_CAM_COMMANDS( ref uVar12 );
    if (NOT (IS_CAR_DEAD( l_U551 )))
    {
        LOCK_CAR_DOORS( l_U551, 1 );
    }
    sub_27308( ref l_U598, 0 );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_3090(), 1 );
    sub_3000();
    SET_CAM_BEHIND_PED( sub_6512() );
    return;
}

int sub_24660()
{
    if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_24922()
{
    return sub_24933( 1, 1 );
}

int sub_24933(boolean bParam0, unknown uParam1)
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

void sub_25590()
{
    if (DOES_OBJECT_EXIST( l_U757 ))
    {
        DELETE_OBJECT( ref l_U757 );
    }
    if (DOES_OBJECT_EXIST( l_U669[l_U730]._fU0 ))
    {
        DELETE_OBJECT( ref l_U669[l_U730]._fU0 );
    }
    return;
}

void sub_26036(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_26059( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_26059(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_26113( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_26113(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_26135( iParam1 )))
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
    sub_26815( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_26135(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_19615( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_19615( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_19615( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_26815(int iParam0, int iParam1)
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

void sub_27308(int iParam0, unknown uParam1)
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

void sub_27501(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    unknown uVar8;
    int iVar9;
    int iVar10;
    int iVar11;

    while ((NOT bVar4) AND (NOT bVar3))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar10 );
        if (iVar7 != 0)
        {
            iVar11 = iVar10 - iVar9;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_24660()) AND (iVar11 >= 1000)))
        {
            if (NOT IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            if (DOES_CHAR_EXIST( l_U548 ))
            {
                DELETE_CHAR( ref l_U548 );
            }
            DO_SCREEN_FADE_IN( 500 );
            bVar4 = true;
        }
        else
        {
            switch (iVar7)
            {
                case 0:
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                SET_PLAYER_CONTROL( sub_3090(), 0 );
                while (NOT sub_24922())
                {
                    WAIT( 0 );
                }
                CLEAR_SMALL_PRINTS();
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                SWITCH_PED_PATHS_OFF( 1336.96800000, 119.77030000, 0.00000000, 1320.97700000, 113.35190000, 100.00000000 );
                ADD_SCENARIO_BLOCKING_AREA( 1336.96800000, 119.77030000, 0.00000000, 1320.97700000, 113.35190000, 100.00000000 );
                SWITCH_ROADS_OFF( 1359.01200000, 111.77500000, 0.00000000, 1268.31500000, 103.02720000, 100.00000000 );
                REQUEST_MODEL( 974744810 );
                while (NOT (HAS_MODEL_LOADED( 974744810 )))
                {
                    WAIT( 0 );
                }
                CLEAR_AREA( 1333.00000000, 110.00000000, 32.00000000, 40.00000000, 1 );
                LOAD_SCENE( 1333.00000000, 110.00000000, 32.00000000 );
                CREATE_CAR( 974744810, 1330.62300000, 112.05770000, 30.99870000, ref uVar8, 1 );
                WARP_CHAR_INTO_CAR( sub_6512(), uVar8 );
                if (NOT (IS_CHAR_DEAD( l_U548 )))
                {
                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U548, uVar8, 0 );
                }
                SET_CAR_COORDINATES( uVar8, 1330.62300000, 112.05770000, 30.99870000 );
                SET_CAR_HEADING( uVar8, 89.70000000 );
                SET_CAR_ON_GROUND_PROPERLY( uVar8 );
                BEGIN_CAM_COMMANDS( ref uVar6 );
                CREATE_CAM( 14, ref uVar5 );
                SET_CAM_POS( uVar5, 1327.90500000, 114.64090000, 31.90141000 );
                SET_CAM_ROT( uVar5, -1.81277800, -0.00000000, -132.16110000 );
                SET_CAM_ACTIVE( uVar5, 1 );
                SET_CAM_PROPAGATE( uVar5, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                sub_25590();
                if ((NOT (IS_CAR_DEAD( uVar8 ))) AND (NOT (IS_CHAR_DEAD( l_U548 ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U567 );
                    TASK_PAUSE( 0, 1500 );
                    TASK_LEAVE_CAR( 0, uVar8 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1332.50000000, 118.12000000, 31.48000000, 2, 20000, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U567 );
                    TASK_PERFORM_SEQUENCE( l_U548, l_U567 );
                    CLEAR_SEQUENCE_TASK( l_U567 );
                }
                if (l_U633)
                {
                    sub_28405( uParam0, 1, 1, ref l_U598, 6, 1 );
                }
                else
                {
                    sub_26036( uParam0, ref l_U598, 6, 1 );
                }
                DO_SCREEN_FADE_IN( 500 );
                GET_GAME_TIMER( ref iVar9 );
                SETTIMERA( 0 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                iVar7++;
                break;
                case 1:
                if (TIMERA() > 7500)
                {
                    if (DOES_CHAR_EXIST( l_U548 ))
                    {
                        DELETE_CHAR( ref l_U548 );
                    }
                    bVar3 = true;
                }
                break;
            }
        }
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    if (DOES_CAM_EXIST( uVar5 ))
    {
        if (IS_CAM_ACTIVE( uVar5 ))
        {
            SET_CAM_ACTIVE( uVar5, 0 );
            SET_CAM_PROPAGATE( uVar5, 0 );
            DESTROY_CAM( uVar5 );
        }
    }
    END_CAM_COMMANDS( ref uVar6 );
    sub_27308( ref l_U598, 0 );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_3090(), 1 );
    sub_3000();
    SET_CAM_BEHIND_PED( sub_6512() );
    return;
}

void sub_28405(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_28432( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_28432(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_26113( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_28801()
{
    if (g_U9930 > 1)
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3090(), 150 );
        SAY_AMBIENT_SPEECH( sub_6512(), "MISSION_FAIL_RAGE", 1, 1, 0 );
    }
    sub_28872();
    sub_2761();
    return;
}

void sub_28872()
{
    sub_28881();
    return;
}

void sub_28881()
{
    int iVar2;

    iVar2 = 12;
    sub_28895( iVar2 );
    sub_1850( iVar2 );
    return;
}

void sub_28895(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_3090(), 150 );
    CLEAR_HELP();
    sub_674( uParam0 );
    return;
}

void sub_29624(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_30436(unknown uParam0)
{
    float fVar3;
    unknown uVar4;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_INJURED( uParam0 )))
        {
            if ((g_U9180) || (NOT IS_MINIGAME_IN_PROGRESS()))
            {
                GET_FRAME_TIME( ref fVar3 );
                l_U492 += fVar3 * 1000.00000000;
                l_U493 += fVar3 * 1000.00000000;
                l_U496 += fVar3 * 1000.00000000;
                sub_30560( uParam0 );
                if (l_U488)
                {
                    if (HAVE_ANIMS_LOADED( l_U513 ))
                    {
                        if ((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U513, l_U516 ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U513, l_U515 ))) AND (NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U513, l_U514 )))))
                        {
                            sub_40532( uParam0, 0 );
                            l_U488 = 0;
                        }
                    }
                    else
                    {
                        sub_40532( uParam0, 0 );
                        l_U488 = 0;
                    }
                }
                switch (l_U501)
                {
                    case 0:
                    if (NOT (sub_40641( uParam0 )))
                    {
                        l_U493 = 0.00000000;
                    }
                    if (l_U485)
                    {
                        sub_41828( uParam0 );
                    }
                    if (l_U493 > 10000.00000000)
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U513 )))
                        {
                            REQUEST_ANIMS( l_U513 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -785338897 )))
                        {
                            REQUEST_MODEL( -785338897 );
                        }
                        if (HAVE_ANIMS_LOADED( l_U513 ))
                        {
                            if ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))) AND (NOT (IS_CHAR_IN_ANY_CAR( uParam0 ))))
                            {
                                sub_40532( uParam0, 1 );
                                TASK_CLEAR_LOOK_AT( uParam0 );
                                TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U514, l_U513, 8.00000000, -1, 3328 );
                                l_U488 = 1;
                                l_U492 = 0.00000000;
                                l_U501 = 1;
                            }
                            else
                            {
                                sub_41828( uParam0 );
                                l_U492 = 0.00000000;
                                l_U501 = 1;
                            }
                        }
                    }
                    else if (HAVE_ANIMS_LOADED( l_U513 ))
                    {
                        REMOVE_ANIMS( l_U513 );
                    }
                    if (HAS_MODEL_LOADED( -785338897 ))
                    {
                        MARK_MODEL_AS_NO_LONGER_NEEDED( -785338897 );
                    }
                    break;
                    case 1:
                    if (sub_40652( uParam0 ))
                    {
                        if (NOT (HAVE_ANIMS_LOADED( l_U513 )))
                        {
                            REQUEST_ANIMS( l_U513 );
                        }
                        if (NOT (HAS_MODEL_LOADED( -785338897 )))
                        {
                            REQUEST_MODEL( -785338897 );
                        }
                        if (DOES_OBJECT_EXIST( l_U510 ))
                        {
                            if (HAVE_ANIMS_LOADED( l_U513 ))
                            {
                                if ((NOT (IS_SCRIPTED_SPEECH_PLAYING( uParam0 ))) AND ((NOT (IS_AMBIENT_SPEECH_PLAYING( uParam0 ))) AND ((NOT (sub_42609( uParam0 ))) AND ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))) AND ((NOT (IS_CHAR_GESTURING( uParam0 ))) AND ((NOT (IS_CHAR_PLAYING_ANIM( uParam0, l_U513, l_U514 ))) AND ((NOT (IS_CHAR_DUCKING( uParam0 ))) AND (NOT (IS_PED_RAGDOLL( uParam0 ))))))))))
                                {
                                    if (l_U492 > 20000.00000000)
                                    {
                                        TASK_CLEAR_LOOK_AT( uParam0 );
                                        sub_40532( uParam0, 1 );
                                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U515, l_U513, 8.00000000, -1, 3328 );
                                        }
                                        else
                                        {
                                            TASK_PLAY_ANIM_WITH_FLAGS( uParam0, l_U516, l_U513, 8.00000000, -1, 3328 );
                                        }
                                        l_U488 = 1;
                                        l_U492 = 0.00000000;
                                    }
                                }
                            }
                            if (NOT l_U486)
                            {
                                if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                                {
                                    if (HAVE_ANIMS_LOADED( l_U513 ))
                                    {
                                        if (IS_CHAR_PLAYING_ANIM( uParam0, l_U513, l_U514 ))
                                        {
                                            GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U513, l_U514, ref fVar3 );
                                            if (fVar3 > l_U495)
                                            {
                                                l_U502 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U510, l_U523, l_U526, 1065353216 );
                                                l_U486 = 1;
                                            }
                                        }
                                        else
                                        {
                                            l_U502 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U510, l_U523, l_U526, 1065353216 );
                                            l_U486 = 1;
                                        }
                                    }
                                }
                                else
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
                                    if (DOES_VEHICLE_EXIST( uVar4 ))
                                    {
                                        if (NOT (IS_CAR_DEAD( uVar4 )))
                                        {
                                            if (NOT (DOES_CAR_HAVE_ROOF( uVar4 )))
                                            {
                                                if (NOT (sub_43115( uParam0 )))
                                                {
                                                    l_U502 = START_PTFX_ON_OBJ( "ambient_cig_smoke", l_U510, l_U523, l_U526, 1065353216 );
                                                    l_U486 = 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            else if ((sub_43115( uParam0 )) || (sub_30799( uParam0 )))
                            {
                                sub_30672( ref l_U502 );
                                l_U486 = 0;
                            }
                        }
                        else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            if (HAVE_ANIMS_LOADED( l_U513 ))
                            {
                                if (IS_CHAR_PLAYING_ANIM( uParam0, l_U513, l_U514 ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, l_U513, l_U514, ref fVar3 );
                                    if (NOT (DOES_OBJECT_EXIST( l_U510 )))
                                    {
                                        if (fVar3 > l_U494)
                                        {
                                            sub_41828( uParam0 );
                                        }
                                    }
                                }
                                else
                                {
                                    sub_41828( uParam0 );
                                }
                            }
                        }
                        else
                        {
                            sub_41828( uParam0 );
                        }
                        if (sub_42609( uParam0 ))
                        {
                            CLEAR_CHAR_SECONDARY_TASK( uParam0 );
                        }
                    }
                    else
                    {
                        l_U501 = 0;
                        l_U493 = 0.00000000;
                    }
                    break;
                }
            }
            else
            {
                sub_40688( uParam0, 0 );
                if (l_U490)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 4 \n" );
                }
            }
        }
        else
        {
            sub_40688( uParam0, 1 );
            if (l_U490)
            {
                PRINTSTRING( "REMOVE_SPLIFF - 5 \n" );
            }
        }
    }
    else
    {
        sub_40688( uParam0, 0 );
        if (l_U490)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 6 \n" );
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_OBJECT_EXIST( l_U510 ))
        {
            if (HAVE_ANIMS_LOADED( l_U513 ))
            {
                if ((IS_CHAR_PLAYING_ANIM( uParam0, l_U513, l_U516 )) || ((IS_CHAR_PLAYING_ANIM( uParam0, l_U513, l_U515 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U513, l_U514 ))))
                {
                    BLOCK_CHAR_HEAD_IK( uParam0, 1 );
                }
            }
        }
    }
    return;
}

void sub_30560(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    int I;
    int iVar9;

    if ((IS_PLAYER_PLAYING( sub_3090() )) AND (NOT (IS_CHAR_INJURED( uParam0 ))))
    {
        switch (l_U503)
        {
            case 0:
            for ( I = 0; I < 4; I++ )
            {
                sub_30672( ref l_U505[I] );
            }
            if (DOES_OBJECT_EXIST( l_U511 ))
            {
                DELETE_OBJECT( ref l_U511 );
            }
            if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
            {
                if (sub_30799( uParam0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref l_U544 );
                    if (DOES_VEHICLE_EXIST( l_U544 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U544 )))
                        {
                            if (NOT (sub_30981( l_U544 )))
                            {
                                l_U503 = 1;
                                l_U496 = 0.00000000;
                            }
                            else
                            {
                                l_U496 = 0.00000000;
                            }
                        }
                        else
                        {
                            l_U496 = 0.00000000;
                        }
                    }
                    else
                    {
                        l_U496 = 0.00000000;
                    }
                }
                else
                {
                    l_U496 = 0.00000000;
                }
            }
            else
            {
                l_U496 = 0.00000000;
            }
            break;
            case 1:
            if (DOES_OBJECT_EXIST( l_U510 ))
            {
                if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref l_U544 );
                    if (DOES_VEHICLE_EXIST( l_U544 ))
                    {
                        if (sub_31167( l_U544 ))
                        {
                            l_U503 = 2;
                            l_U496 = 0.00000000;
                            l_U500 = 0.00000000;
                        }
                        else
                        {
                            l_U503 = 4;
                            l_U496 = 0.00000000;
                        }
                    }
                    else
                    {
                        l_U503 = 0;
                        l_U496 = 0.00000000;
                    }
                }
                else
                {
                    l_U503 = 0;
                    l_U496 = 0.00000000;
                }
            }
            break;
            case 2:
            if (DOES_OBJECT_EXIST( l_U510 ))
            {
                if (DOES_VEHICLE_EXIST( l_U544 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U544 )))
                    {
                        if (NOT (sub_31167( l_U544 )))
                        {
                            l_U503 = 3;
                            l_U496 = 0.00000000;
                            if (l_U500 < 0.10000000)
                            {
                                l_U500 = 0.10000000;
                            }
                        }
                        else if (NOT (IS_CHAR_IN_CAR( uParam0, l_U544 )))
                        {
                            l_U503 = 0;
                            l_U496 = 0.00000000;
                            if (DOES_OBJECT_EXIST( l_U511 ))
                            {
                                DELETE_OBJECT( ref l_U511 );
                            }
                        }
                        if ((l_U491) AND (NOT (DOES_OBJECT_EXIST( l_U511 ))))
                        {
                            GET_CAR_COORDINATES( l_U544, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            CREATE_OBJECT( -735018886, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref l_U511, 1 );
                            SET_OBJECT_COLLISION( l_U511, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U511, l_U544, 0, l_U538, 0.00000000, 0.00000000, 0.00000000 );
                        }
                        else
                        {
                            l_U500 = l_U496 / l_U497;
                            if (l_U500 > 1.00000000)
                            {
                                l_U500 = 1.00000000;
                            }
                            l_U504 = ROUND( 255.00000000 * l_U500 );
                            if (l_U491)
                            {
                                SET_OBJECT_ALPHA( l_U511, l_U504 );
                            }
                        }
                    }
                    else
                    {
                        l_U503 = 0;
                        l_U496 = 0.00000000;
                    }
                }
                else
                {
                    l_U503 = 0;
                    l_U496 = 0.00000000;
                }
            }
            else
            {
                l_U503 = 0;
                l_U496 = 0.00000000;
            }
            break;
            case 3:
            if (DOES_VEHICLE_EXIST( l_U544 ))
            {
                if (NOT (IS_CAR_DEAD( l_U544 )))
                {
                    if (NOT (sub_30684( l_U505[0] )))
                    {
                        if (sub_31222( l_U544, 0 ))
                        {
                            if (sub_32226( l_U544, 0, ref uVar4 ))
                            {
                                l_U505[0] = START_PTFX_ON_VEH( "smoke_filled_car", l_U544, uVar4, l_U535._fU0, l_U535._fU4, l_U535._fU8, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_31222( l_U544, 0 )))
                    {
                        sub_30672( ref l_U505[0] );
                    }
                    if (NOT (sub_30684( l_U505[1] )))
                    {
                        if (sub_31222( l_U544, 1 ))
                        {
                            if (sub_32226( l_U544, 1, ref uVar4 ))
                            {
                                l_U505[1] = START_PTFX_ON_VEH( "smoke_filled_car", l_U544, uVar4, l_U535._fU0, l_U535._fU4, l_U535._fU8 * -1.00000000, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_31222( l_U544, 1 )))
                    {
                        sub_30672( ref l_U505[1] );
                    }
                    if (NOT (sub_30684( l_U505[2] )))
                    {
                        if (sub_31222( l_U544, 2 ))
                        {
                            if (sub_32226( l_U544, 2, ref uVar4 ))
                            {
                                l_U505[2] = START_PTFX_ON_VEH( "smoke_filled_car", l_U544, uVar4, l_U535._fU0, l_U535._fU4, l_U535._fU8, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_31222( l_U544, 2 )))
                    {
                        sub_30672( ref l_U505[2] );
                    }
                    if (NOT (sub_30684( l_U505[3] )))
                    {
                        if (sub_31222( l_U544, 3 ))
                        {
                            if (sub_32226( l_U544, 3, ref uVar4 ))
                            {
                                l_U505[3] = START_PTFX_ON_VEH( "smoke_filled_car", l_U544, uVar4, l_U535._fU0, l_U535._fU4, l_U535._fU8 * -1.00000000, 1065353216 );
                            }
                        }
                    }
                    else if (NOT (sub_31222( l_U544, 3 )))
                    {
                        sub_30672( ref l_U505[3] );
                    }
                    l_U499 = l_U496 / (l_U498 * l_U500);
                    if (l_U499 > 1.00000000)
                    {
                        l_U499 = 1.00000000;
                    }
                    for ( I = 0; I < 4; I++ )
                    {
                        if (sub_30684( l_U505[I] ))
                        {
                            EVOLVE_PTFX( l_U505[I], "fade", l_U499 );
                        }
                    }
                    if (l_U491)
                    {
                        if (DOES_OBJECT_EXIST( l_U511 ))
                        {
                            fVar7 = 1.00000000 - l_U499;
                            l_U504 = ROUND( 255.00000000 * fVar7 );
                            SET_OBJECT_ALPHA( l_U511, l_U504 );
                        }
                    }
                    if (l_U496 > (l_U498 * l_U500))
                    {
                        for ( I = 0; I < 4; I++ )
                        {
                            sub_30672( ref l_U505[I] );
                        }
                        l_U503 = 0;
                        l_U496 = 0.00000000;
                    }
                    if ((NOT (sub_30684( l_U505[3] ))) AND ((NOT (sub_30684( l_U505[2] ))) AND ((NOT (sub_30684( l_U505[1] ))) AND (NOT (sub_30684( l_U505[0] ))))))
                    {
                        l_U503 = 0;
                        l_U496 = 0.00000000;
                    }
                }
                else
                {
                    l_U503 = 0;
                    l_U496 = 0.00000000;
                }
            }
            else
            {
                l_U503 = 0;
                l_U496 = 0.00000000;
            }
            break;
            case 4:
            if (DOES_VEHICLE_EXIST( l_U544 ))
            {
                if (NOT (IS_CAR_DEAD( l_U544 )))
                {
                    if (l_U496 > 1000.00000000)
                    {
                        if (NOT (sub_30684( l_U505[0] )))
                        {
                            if (sub_31222( l_U544, 0 ))
                            {
                                if (sub_32226( l_U544, 0, ref uVar4 ))
                                {
                                    l_U505[0] = START_PTFX_ON_VEH( "smoke_filled_car", l_U544, uVar4, l_U535._fU0, l_U535._fU4, l_U535._fU8, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_31222( l_U544, 0 )))
                        {
                            sub_30672( ref l_U505[0] );
                        }
                        if (NOT (sub_30684( l_U505[1] )))
                        {
                            if (sub_31222( l_U544, 1 ))
                            {
                                if (sub_32226( l_U544, 1, ref uVar4 ))
                                {
                                    l_U505[1] = START_PTFX_ON_VEH( "smoke_filled_car", l_U544, uVar4, l_U535._fU0, l_U535._fU4, l_U535._fU8 * -1.00000000, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_31222( l_U544, 1 )))
                        {
                            sub_30672( ref l_U505[1] );
                        }
                        if (NOT (sub_30684( l_U505[2] )))
                        {
                            if (sub_31222( l_U544, 2 ))
                            {
                                if (sub_32226( l_U544, 2, ref uVar4 ))
                                {
                                    l_U505[2] = START_PTFX_ON_VEH( "smoke_filled_car", l_U544, uVar4, l_U535._fU0, l_U535._fU4, l_U535._fU8, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_31222( l_U544, 2 )))
                        {
                            sub_30672( ref l_U505[2] );
                        }
                        if (NOT (sub_30684( l_U505[3] )))
                        {
                            if (sub_31222( l_U544, 3 ))
                            {
                                if (sub_32226( l_U544, 3, ref uVar4 ))
                                {
                                    l_U505[3] = START_PTFX_ON_VEH( "smoke_filled_car", l_U544, uVar4, l_U535._fU0, l_U535._fU4, l_U535._fU8 * -1.00000000, 1065353216 );
                                }
                            }
                        }
                        else if (NOT (sub_31222( l_U544, 3 )))
                        {
                            sub_30672( ref l_U505[3] );
                        }
                        iVar9 = 0;
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_30684( l_U505[I] ))
                            {
                                iVar9++;
                            }
                        }
                        l_U499 = 1.00000000 / (TO_FLOAT( iVar9 ));
                        for ( I = 0; I < 4; I++ )
                        {
                            if (sub_30684( l_U505[I] ))
                            {
                                EVOLVE_PTFX( l_U505[I], "fade", l_U499 );
                            }
                        }
                        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
                        {
                            for ( I = 0; I < 4; I++ )
                            {
                                sub_30672( ref l_U505[I] );
                            }
                            l_U503 = 0;
                            l_U496 = 0.00000000;
                        }
                        else if ((NOT (sub_30684( l_U505[3] ))) AND ((NOT (sub_30684( l_U505[2] ))) AND ((NOT (sub_30684( l_U505[1] ))) AND (NOT (sub_30684( l_U505[0] ))))))
                        {
                            l_U503 = 1;
                        }
                    }
                }
                else
                {
                    l_U503 = 0;
                    l_U496 = 0.00000000;
                }
            }
            else
            {
                l_U503 = 0;
                l_U496 = 0.00000000;
            }
            break;
        }
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                if (l_U489)
                {
                    for ( I = 0; I < 4; I++ )
                    {
                        if (sub_32226( uVar3, I, ref uVar4 ))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
                            LINE( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar4._fU0, uVar4._fU4, uVar4._fU8 + 1.50000000 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_30672(unknown uParam0)
{
    if (sub_30684( (uParam0^) ))
    {
        STOP_PTFX( (uParam0^) );
    }
    (uParam0^) = 0;
    return;
}

int sub_30684(int iParam0)
{
    if (iParam0 > 0)
    {
        return 1;
    }
    return 0;
}

int sub_30799(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if ((IS_THIS_MODEL_A_HELI( uVar4 )) || (IS_THIS_MODEL_A_CAR( uVar4 )))
                {
                    if (DOES_CAR_HAVE_ROOF( uVar3 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_30981(unknown uParam0)
{
    unknown uVar3;

    return 0;
}

int sub_31167(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (DOES_CAR_HAVE_ROOF( uParam0 ))
            {
                if ((NOT (sub_31222( uParam0, 3 ))) AND ((NOT (sub_31222( uParam0, 2 ))) AND ((NOT (sub_31222( uParam0, 1 ))) AND (NOT (sub_31222( uParam0, 0 ))))))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_31222(unknown uParam0, unknown uParam1)
{
    float fVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref uVar5 );
        if ((NOT (IS_THIS_MODEL_A_BOAT( uVar5 ))) AND (NOT (IS_THIS_MODEL_A_BIKE( uVar5 ))))
        {
            if ((IS_CAR_DOOR_FULLY_OPEN( uParam0, uParam1 )) || (IS_CAR_DOOR_DAMAGED( uParam0, uParam1 )))
            {
                return 1;
            }
            else
            {
                GET_DOOR_ANGLE_RATIO( uParam0, uParam1, ref fVar4 );
                if (fVar4 > 0.10000000)
                {
                    return 1;
                }
                else
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar7 );
                    switch (uParam1)
                    {
                        case 0:
                        if (NOT (IS_VEH_WINDOW_INTACT( uParam0, 0 )))
                        {
                            return 1;
                        }
                        break;
                        case 1:
                        if ((iVar7 >= 1) AND (NOT (IS_VEH_WINDOW_INTACT( uParam0, 1 ))))
                        {
                            return 1;
                        }
                        break;
                        case 2:
                        if ((iVar7 >= 2) AND (NOT (IS_VEH_WINDOW_INTACT( uParam0, 2 ))))
                        {
                            return 1;
                        }
                        break;
                        case 3:
                        iVar6 = 3;
                        if ((iVar7 >= 3) AND (NOT (IS_VEH_WINDOW_INTACT( uParam0, 3 ))))
                        {
                            return 1;
                        }
                        break;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_32226(unknown uParam0, unknown uParam1, int iParam2)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            sub_32274( uParam0, ref l_U529, ref l_U532 );
            switch (uParam1)
            {
                case 0:
                (iParam2^) = {l_U529._fU0, l_U529._fU4, l_U529._fU8};
                iParam2->_fU0 += l_U541._fU0;
                iParam2->_fU4 += l_U541._fU4;
                iParam2->_fU8 += l_U541._fU8;
                break;
                case 1:
                (iParam2^) = {l_U529._fU0 * -1.00000000, l_U529._fU4, l_U529._fU8};
                iParam2->_fU0 += l_U541._fU0 * -1.00000000;
                iParam2->_fU4 += l_U541._fU4;
                iParam2->_fU8 += l_U541._fU8;
                break;
                case 2:
                (iParam2^) = {l_U532._fU0, l_U532._fU4, l_U532._fU8};
                iParam2->_fU0 += l_U541._fU0;
                iParam2->_fU4 += l_U541._fU4;
                iParam2->_fU8 += l_U541._fU8;
                break;
                case 3:
                (iParam2^) = {l_U532._fU0 * -1.00000000, l_U532._fU4, l_U532._fU8};
                iParam2->_fU0 += l_U541._fU0 * -1.00000000;
                iParam2->_fU4 += l_U541._fU4;
                iParam2->_fU8 += l_U541._fU8;
                break;
            }
            return 1;
        }
    }
    return 0;
}

void sub_32274(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_MODEL( uParam0, ref uVar5 );
        switch (uVar5)
        {
            case 1264341792:
            (uParam1^) = {-0.60750000, -0.19750000, 0.61000000};
            (uParam2^) = {-0.61500000, -0.76750000, 0.61750000};
            break;
            case 1171614426:
            (uParam1^) = {-0.79500000, 0.83250000, 1.27500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1041692462:
            (uParam1^) = {-0.60750000, -0.68250000, 0.61000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 2053223216:
            (uParam1^) = {-0.93500000, 1.85250000, 1.35500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 850991848:
            (uParam1^) = {-0.86000000, 2.01500000, 1.38000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -344943009:
            (uParam1^) = {-0.55500000, -0.26500000, 0.86500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1075851868:
            (uParam1^) = {-0.70250000, 0.24500000, 1.00750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1987130134:
            (uParam1^) = {-1.00500000, 0.82750000, 1.16250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -682211828:
            (uParam1^) = {-0.59249990, -0.05000000, 0.55750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1346687836:
            (uParam1^) = {-0.84750010, 0.73250000, 1.14750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -907477130:
            (uParam1^) = {-0.84750010, 0.73250000, 1.14750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -713569950:
            (uParam1^) = {1.18500000, 4.88500000, 1.47250000};
            (uParam2^) = {1.18250000, -1.84000000, 1.47300000};
            break;
            case 1884962369:
            (uParam1^) = {-0.65000000, 0.21250000, 0.86500000};
            (uParam2^) = {-0.62000000, -0.49250000, 0.91500000};
            break;
            case 2006918058:
            (uParam1^) = {-0.61250000, 0.11000000, 1.02500000};
            (uParam2^) = {-0.60500000, -0.66500000, 1.04250000};
            break;
            case -67282078:
            (uParam1^) = {-0.56750000, -0.14250000, 0.87750000};
            (uParam2^) = {-0.56000000, -0.86250000, 0.86500000};
            break;
            case -2030171296:
            (uParam1^) = {-0.58750000, 0.13750000, 0.88750000};
            (uParam2^) = {-0.56750000, -0.86000000, 0.92000000};
            break;
            case 1063483177:
            (uParam1^) = {-0.49000000, -0.25500000, 0.66750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 108773431:
            (uParam1^) = {-0.52000000, -0.47000000, 0.66750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 162883121:
            (uParam1^) = {-0.62500000, -0.15750000, 0.81500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 723973206:
            (uParam1^) = {-0.62500000, -0.17750000, 0.67250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1130810103:
            (uParam1^) = {-0.51750000, 0.03000000, 0.91500000};
            (uParam2^) = {-0.50300000, -0.61750000, 0.91500000};
            break;
            case -1971955454:
            (uParam1^) = {-0.62000000, -0.08500000, 1.10500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -685276541:
            (uParam1^) = {-0.64250000, -0.09000000, 0.75000000};
            (uParam2^) = {-0.63500000, -0.77500000, 0.75250000};
            break;
            case -1883002148:
            (uParam1^) = {-0.64250000, -0.09000000, 0.75000000};
            (uParam2^) = {-0.63500000, -0.77500000, 0.75250000};
            break;
            case -276900515:
            (uParam1^) = {-0.61250000, -0.09000000, 0.75000000};
            (uParam2^) = {-0.59249990, -0.72750000, 0.75250000};
            break;
            case -2119578145:
            (uParam1^) = {-0.59750000, -0.22500000, 0.83000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1127131465:
            (uParam1^) = {-0.57250000, 0.03250000, 0.72250000};
            (uParam2^) = {-0.57500000, -0.73250000, 0.68000000};
            break;
            case -1097828879:
            (uParam1^) = {-0.53000000, -0.41500000, 0.64250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 974744810:
            (uParam1^) = {-0.51000000, -0.10750000, 0.93000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1026055242:
            (uParam1^) = {-0.51000000, -0.10750000, 0.93000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1938952078:
            (uParam1^) = {-1.06250000, 3.41500000, 1.23750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1353720154:
            (uParam1^) = {-1.11250000, 1.71500000, 2.27000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 627033353:
            (uParam1^) = {-0.52500000, -0.14500000, 0.64000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 2016857647:
            (uParam1^) = {-0.50500000, -0.17000000, 0.77750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 675415136:
            (uParam1^) = {-0.62000000, 0.06500000, 1.03000000};
            (uParam2^) = {-0.62250000, -0.63000000, 1.03500000};
            break;
            case 884422927:
            (uParam1^) = {-0.57500000, 0.04500000, 0.85000000};
            (uParam2^) = {-0.56500000, -0.63250000, 0.84750010};
            break;
            case -341892653:
            (uParam1^) = {-0.57500000, -0.04500000, 0.85000000};
            (uParam2^) = {-0.56500000, -0.63250000, 0.84750010};
            break;
            case 486987393:
            (uParam1^) = {-0.63750000, -0.06500000, 1.01750000};
            (uParam2^) = {-0.62250000, -0.87500000, 1.02750000};
            break;
            case -1289722222:
            (uParam1^) = {-0.46000000, -0.06500000, 0.71500000};
            (uParam2^) = {-0.46750000, -0.66250000, 0.71750000};
            break;
            case 886934177:
            (uParam1^) = {-0.53500000, 0.00750000, 0.75000000};
            (uParam2^) = {-0.53250000, -0.67750000, 0.74000000};
            break;
            case 418536135:
            (uParam1^) = {-0.51750000, 0.05500000, 0.56750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1269098716:
            (uParam1^) = {-0.55750000, 0.17250000, 1.28750000};
            (uParam2^) = {-0.55000000, -0.48750000, 1.31000000};
            break;
            case -37030056:
            (uParam1^) = {-0.58500000, -0.13750000, 0.95750000};
            (uParam2^) = {-0.58750000, -0.77250000, 0.97250000};
            break;
            case -2124201592:
            (uParam1^) = {-0.67500000, -0.42750000, 0.67750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1304597482:
            (uParam1^) = {-0.62500000, -0.16500000, 0.81000000};
            (uParam2^) = {-0.62750000, -0.71750000, 0.80250000};
            break;
            case -1260881538:
            (uParam1^) = {-0.61000000, -0.02000000, 0.68250000};
            (uParam2^) = {-0.60000000, -0.58000000, 0.69000000};
            break;
            case -310465116:
            (uParam1^) = {-0.68750000, 0.18000000, 0.86500000};
            (uParam2^) = {-0.66300000, -0.51750000, 0.91000000};
            break;
            case 583100975:
            (uParam1^) = {-0.86750000, 0.89750000, 1.32000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 525509695:
            (uParam1^) = {-0.74500000, 0.38250000, 1.17750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 904750859:
            (uParam1^) = {-0.91250000, 2.66500000, 1.35250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 148777611:
            (uParam1^) = {-0.61250000, -0.18750000, 0.72000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1911513875:
            (uParam1^) = {-1.19250000, 1.06750000, 1.88500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1348744438:
            (uParam1^) = {-0.67250000, -0.08750000, 0.57000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 569305213:
            (uParam1^) = {-1.28750000, 3.05250000, 1.58000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -808457413:
            (uParam1^) = {-0.83999990, 0.36250000, 1.15250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -2077743597:
            (uParam1^) = {-0.63250000, 0.12250000, 1.01250000};
            (uParam2^) = {-0.63250000, -0.84700000, 1.04550000};
            break;
            case -1590284256:
            (uParam1^) = {-0.63250000, 0.12250000, 1.01250000};
            (uParam2^) = {-0.63250000, -0.84700000, 1.04550000};
            break;
            case 1830407356:
            (uParam1^) = {-0.70999990, -0.40500000, 0.88250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 131140572:
            (uParam1^) = {-0.69000000, -0.07000000, 0.80000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1376298265:
            (uParam1^) = {-0.56250000, -0.07000000, 0.76500000};
            (uParam2^) = {-0.56300000, -0.83500000, 0.75500000};
            break;
            case 2046537925:
            (uParam1^) = {-0.62500000, -0.15000000, 0.73500000};
            (uParam2^) = {-0.59300000, -0.71250000, 0.73750000};
            break;
            case -1627000575:
            (uParam1^) = {-0.63250000, 0.01750000, 0.70999990};
            (uParam2^) = {-0.60050000, -0.60750000, 0.71500000};
            break;
            case -350085182:
            (uParam1^) = {-0.82250000, 0.40250000, 1.19500000};
            (uParam2^) = {-0.82050000, -0.68250000, 1.19500000};
            break;
            case -119658072:
            (uParam1^) = {-0.86750000, 0.82750000, 1.10500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1883869285:
            (uParam1^) = {-0.55750000, 0.03750000, 0.79250000};
            (uParam2^) = {-0.53750000, -0.68000000, 0.81750000};
            break;
            case -1962071130:
            (uParam1^) = {-0.53250000, -0.05000000, 0.74250000};
            (uParam2^) = {-0.52000000, -0.58500000, 0.75000000};
            break;
            case -1150599089:
            (uParam1^) = {-0.63500000, -0.05000000, 0.78500000};
            (uParam2^) = {-0.63250000, -0.58500000, 0.79000000};
            break;
            case -1900572838:
            (uParam1^) = {-1.18000000, 1.07750000, 1.87500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1390084576:
            (uParam1^) = {-0.65500000, 0.09250000, 1.11250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 83136452:
            (uParam1^) = {-0.59750000, -0.21250000, 0.94250000};
            (uParam2^) = {-0.59800000, -0.84550000, 0.95050000};
            break;
            case -845979911:
            (uParam1^) = {-1.35000000, 3.69000000, 1.16500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 627094268:
            (uParam1^) = {-0.74250000, 0.28500000, 0.74750000};
            (uParam2^) = {-0.74300000, -0.45700000, 0.77500000};
            break;
            case -1932515764:
            (uParam1^) = {-0.65500000, -0.08000000, 0.71250000};
            (uParam2^) = {-0.65050000, -0.73700000, 0.70999990};
            break;
            case -227741703:
            (uParam1^) = {-0.57000000, -0.37500000, 0.48750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -449022887:
            (uParam1^) = {-0.60750000, -0.27750000, 0.82500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1264386590:
            (uParam1^) = {-0.60750000, -0.27750000, 0.83250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1685021548:
            (uParam1^) = {-0.68000000, -0.25500000, 0.73000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -322343873:
            (uParam1^) = {-0.53500000, -0.12000000, 0.87000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1349725314:
            (uParam1^) = {-0.51750000, -0.19250000, 0.62750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1344573448:
            (uParam1^) = {-0.60250000, -0.00250000, 0.89750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -810318068:
            (uParam1^) = {-0.67250000, 0.64000000, 1.13250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1923400478:
            (uParam1^) = {-0.65250000, -0.17500000, 0.77500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1677715180:
            (uParam1^) = {-0.79750000, 1.25250000, 1.48000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1747439474:
            (uParam1^) = {-1.18000000, 1.00500000, 1.87250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1723137093:
            (uParam1^) = {-0.54000000, -0.12000000, 0.83500000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1961627517:
            (uParam1^) = {-0.57750000, 1.12250000, 0.73750000};
            (uParam2^) = {-0.58250000, -2.04500000, 0.74250000};
            break;
            case 1821991593:
            (uParam1^) = {-0.61000000, -0.36250000, 0.62000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 970598228:
            (uParam1^) = {-0.49750000, -0.17000000, 0.91250000};
            (uParam2^) = {-0.50000000, -0.72250000, 0.91300000};
            break;
            case -295689028:
            (uParam1^) = {-0.49750000, -0.31000000, 0.91250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -956048545:
            (uParam1^) = {-0.62500000, -0.17000000, 0.72750000};
            (uParam2^) = {-0.62500000, -0.76750000, 0.72800000};
            break;
            case 1208856469:
            (uParam1^) = {-0.62500000, 0.02000000, 0.69750000};
            (uParam2^) = {-0.62500000, -0.64000000, 0.70300000};
            break;
            case 1917016601:
            (uParam1^) = {-1.20250000, 3.50500000, 1.55750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1896659641:
            (uParam1^) = {-0.56250000, -0.04000000, 0.61000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1534326199:
            (uParam1^) = {-0.50000000, -0.20500000, 0.77999990};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -825837129:
            (uParam1^) = {-0.59000000, -0.23000000, 0.52000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -1758379524:
            (uParam1^) = {-0.62000000, -0.23750000, 0.51750000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case -583281407:
            (uParam1^) = {-0.45250000, -0.10750000, 0.76500000};
            (uParam2^) = {-0.45300000, -0.70050000, 0.77500000};
            break;
            case -498054846:
            (uParam1^) = {-0.68000000, -0.20500000, 0.93250000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 2006667053:
            (uParam1^) = {-0.71500000, -0.08250001, 0.65000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            case 1937616578:
            (uParam1^) = {-0.60750000, -0.02500000, 0.91750000};
            (uParam2^) = {-0.60800000, -0.67250000, 0.91800000};
            break;
            case 1777363799:
            (uParam1^) = {-0.60750000, -0.17750000, 0.81250000};
            (uParam2^) = {-0.62800000, -0.86750000, 0.78050000};
            break;
            case -1099960214:
            (uParam1^) = {-0.93000000, 1.25000000, 1.58000000};
            (uParam2^) = {0.00000000, 0.00000000, 0.00000000};
            break;
            default:
            (uParam1^) = {-0.48300000, -0.28500000, 0.62000000};
            (uParam2^) = {-0.48300000, -1.30000000, 0.62000000};
            break;
        }
    }
    return;
}

void sub_40532(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        BLOCK_CHAR_GESTURE_ANIMS( uParam0, uParam1 );
        BLOCK_CHAR_AMBIENT_ANIMS( uParam0, uParam1 );
    }
    return;
}

int sub_40641(unknown uParam0)
{
    float fVar3;

    if (NOT (sub_40652( uParam0 )))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 > 2.00000000)
        {
            return 0;
        }
        if (IS_CHAR_GESTURING( uParam0 ))
        {
            return 0;
        }
    }
    else
    {
        l_U493 = 999999.80000000;
    }
    if (IS_PLAYER_PLAYING( sub_3090() ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_6512(), uParam0, 50.00000000, 50.00000000, 0 )))
        {
            return 0;
        }
    }
    return 1;
}

int sub_40652(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (l_U485)
    {
        return 1;
    }
    if (l_U487)
    {
        sub_40688( uParam0, 1 );
        l_U487 = 0;
        if (l_U490)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 1 \n" );
        }
        return 0;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            if ((IS_CHAR_ARMED( uParam0, 7 )) || ((IS_CHAR_SHOOTING( uParam0 )) || ((IS_CHAR_IN_MELEE_COMBAT( uParam0 )) || (IS_PED_IN_COMBAT( uParam0 )))))
            {
                sub_40688( uParam0, 1 );
                if (l_U490)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 1B \n" );
                }
                return 0;
            }
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            if (DOES_VEHICLE_EXIST( uVar3 ))
            {
                GET_CAR_MODEL( uVar3, ref uVar4 );
                if (IS_THIS_MODEL_A_BIKE( uVar4 ))
                {
                    sub_40688( uParam0, 0 );
                    if (l_U490)
                    {
                        PRINTSTRING( "REMOVE_SPLIFF - 2 \n" );
                    }
                    return 0;
                }
            }
            if (sub_41268( uParam0 ))
            {
                sub_40688( uParam0, 0 );
                if (l_U490)
                {
                    PRINTSTRING( "REMOVE_SPLIFF - 3 \n" );
                }
                return 0;
            }
        }
    }
    else
    {
        sub_40688( uParam0, 1 );
        if (l_U490)
        {
            PRINTSTRING( "REMOVE_SPLIFF - 3B \n" );
        }
        return 0;
    }
    return 1;
}

void sub_40688(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_OBJECT_EXIST( l_U510 ))
        {
            DELETE_OBJECT( ref l_U510 );
            l_U510 = nil;
        }
    }
    else if (DOES_OBJECT_EXIST( l_U510 ))
    {
        if (IS_OBJECT_ATTACHED( l_U510 ))
        {
            DETACH_OBJECT( l_U510, 1 );
        }
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U510 );
        l_U510 = nil;
    }
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (HAVE_ANIMS_LOADED( l_U513 ))
        {
            if ((IS_CHAR_PLAYING_ANIM( uParam0, l_U513, l_U516 )) || ((IS_CHAR_PLAYING_ANIM( uParam0, l_U513, l_U515 )) || (IS_CHAR_PLAYING_ANIM( uParam0, l_U513, l_U514 ))))
            {
                CLEAR_CHAR_SECONDARY_TASK( uParam0 );
            }
        }
    }
    if (DOES_OBJECT_EXIST( l_U511 ))
    {
        DELETE_OBJECT( ref l_U511 );
    }
    l_U493 = 0.00000000;
    if (l_U486)
    {
        sub_30672( ref l_U502 );
        l_U486 = 0;
    }
    return;
}

int sub_41268(int iParam0)
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
                if (sub_41332( uVar3 ))
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

int sub_41332(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_41828(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (DOES_OBJECT_EXIST( l_U510 )))
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
            CREATE_OBJECT( -785338897, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U510, 1 );
            GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar6 );
            if (NOT (iVar6 == 0))
            {
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U510, iVar6 );
            }
        }
        if (l_U485)
        {
            if (IS_OBJECT_ATTACHED( l_U510 ))
            {
                DETACH_OBJECT( l_U510, 1 );
            }
        }
        if (sub_41993( uParam0 ))
        {
            if (IS_OBJECT_ATTACHED( l_U510 ))
            {
                DETACH_OBJECT( l_U510, 1 );
            }
        }
        if (NOT (IS_OBJECT_ATTACHED( l_U510 )))
        {
            ATTACH_OBJECT_TO_PED( l_U510, uParam0, 1232, l_U517, l_U520, 0 );
            l_U512 = uParam0;
        }
        if (NOT (l_U501 == 1))
        {
            l_U501 = 1;
            l_U492 = 18000.00000000;
        }
    }
    return;
}

int sub_41993(int iParam0)
{
    if (iParam0 == l_U512)
    {
        return 1;
    }
    return 0;
}

int sub_42609(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_43115(unknown uParam0)
{
    unknown uVar3;
    float fVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            GET_CAR_SPEED( uVar3, ref fVar4 );
            if (fVar4 > 1.00000000)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_43876()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    unknown uVar5;
    unknown[2] uVar6;
    unknown uVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    iVar4 = 0;
    array(ref uVar6, 2);
    while ((NOT bVar3) AND (NOT bVar2))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar11 );
        if (iVar4 != 1)
        {
            iVar12 = iVar11 - iVar10;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_24660()) AND (iVar12 >= 1000)))
        {
            bVar3 = true;
        }
        else
        {
            switch (iVar4)
            {
                case 0:
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
                SET_PLAYER_CONTROL( sub_3090(), 0 );
                while (NOT sub_24922())
                {
                    WAIT( 0 );
                }
                CLEAR_SMALL_PRINTS();
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                REQUEST_CAR_RECORDING( 246 );
                REQUEST_MODEL( -200234085 );
                while ((NOT (HAS_MODEL_LOADED( -200234085 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 246 ))))
                {
                    WAIT( 0 );
                }
                LOAD_SCENE( 65212, 1168, 50 );
                CREATE_CAR( -1660661558, -74.33230000, 1956.74000000, 65.87320000, ref l_U552, 1 );
                SET_CAR_HEADING( l_U552, 223.56000000 );
                CHANGE_CAR_COLOUR( l_U552, 1, 120 );
                SET_HELI_BLADES_FULL_SPEED( l_U552 );
                SET_CAR_ENGINE_ON( l_U552, 1, 1 );
                LOCK_CAR_DOORS( l_U552, 6 );
                PRINTNL();
                PRINTSTRING( "*** CREATED ENEMY CHOPPER ***" );
                PRINTNL();
                CREATE_CHAR( 26, -200234085, 0.00000000, 0.00000000, 0.00000000, ref l_U549, 1 );
                WARP_CHAR_INTO_CAR( l_U549, l_U552 );
                SET_CHAR_COMPONENT_VARIATION( l_U549, 0, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U549, 1, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U549, 2, 0, 1 );
                SET_CHAR_PROP_INDEX( l_U549, 1, 0 );
                CREATE_CHAR_AS_PASSENGER( l_U552, 26, -200234085, 0, ref l_U550 );
                SET_CHAR_COMPONENT_VARIATION( l_U550, 0, 0, 1 );
                SET_CHAR_COMPONENT_VARIATION( l_U550, 1, 0, 0 );
                SET_CHAR_COMPONENT_VARIATION( l_U550, 2, 0, 0 );
                START_PLAYBACK_RECORDED_CAR( l_U552, 246 );
                sub_23392( l_U552, 14400 );
                SET_PLAYBACK_SPEED( l_U552, 1.30000000 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -1660661558 );
                MARK_MODEL_AS_NO_LONGER_NEEDED( -200234085 );
                WARP_CHAR_FROM_CAR_TO_COORD( sub_6512(), -347.82740000, 1182.92100000, 13.72830000 );
                SET_USE_HIGHDOF( 1 );
                BEGIN_CAM_COMMANDS( ref uVar9 );
                CREATE_CAM( 14, ref uVar6[0] );
                CREATE_CAM( 14, ref uVar6[1] );
                CREATE_CAM( 3, ref uVar5 );
                SET_CAM_NEAR_DOF( uVar6[0], 0.50000000 );
                SET_CAM_FAR_DOF( uVar6[0], 10.00000000 );
                SET_CAM_NEAR_DOF( uVar6[1], 0.50000000 );
                SET_CAM_FAR_DOF( uVar6[1], 10.00000000 );
                ATTACH_CAM_TO_VEHICLE( uVar6[0], l_U552 );
                SET_CAM_ATTACH_OFFSET( uVar6[0], -2.97461000, 4.36182000, 1.68275000 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( uVar6[0], 1 );
                POINT_CAM_AT_VEHICLE( uVar6[0], l_U552 );
                SET_CAM_POINT_OFFSET( uVar6[0], 0.00000000, 0.70000000, 0.20000000 );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( uVar6[0], 1 );
                SET_CAM_FOV( uVar6[0], 40.00000000 );
                ATTACH_CAM_TO_VEHICLE( uVar6[1], l_U552 );
                SET_CAM_ATTACH_OFFSET( uVar6[1], 1.89941000, 3.85425000, 1.52928000 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( uVar6[1], 1 );
                POINT_CAM_AT_VEHICLE( uVar6[1], l_U552 );
                SET_CAM_POINT_OFFSET( uVar6[1], 0.00000000, 0.70000000, 0.20000000 );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( uVar6[1], 1 );
                SET_CAM_FOV( uVar6[1], 45.00000000 );
                SET_CAM_INTERP_STYLE_CORE( uVar5, uVar6[0], uVar6[1], 7000, 0 );
                SET_CAM_ACTIVE( uVar6[0], 1 );
                SET_CAM_PROPAGATE( uVar6[0], 1 );
                SET_CAM_ACTIVE( uVar6[1], 1 );
                SET_CAM_PROPAGATE( uVar6[1], 1 );
                SET_CAM_ACTIVE( uVar5, 1 );
                SET_CAM_PROPAGATE( uVar5, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                if (NOT (IS_CHAR_DEAD( l_U550 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U567 );
                    TASK_LOOK_AT_COORD( 0, 65501, 1103, 100, 2500, 0 );
                    TASK_PAUSE( 0, 4000 );
                    TASK_LOOK_AT_COORD( 0, 64811, 991, 100, 2000, 0 );
                    TASK_PAUSE( 0, 3000 );
                    CLOSE_SEQUENCE_TASK( l_U567 );
                    TASK_PERFORM_SEQUENCE( l_U550, l_U567 );
                    CLEAR_SEQUENCE_TASK( l_U567 );
                }
                if (NOT (IS_CHAR_DEAD( l_U549 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U567 );
                    TASK_PAUSE( 0, 4000 );
                    TASK_LOOK_AT_COORD( 0, 100, 1103, 100, 3500, 0 );
                    TASK_PAUSE( 0, 3500 );
                    CLOSE_SEQUENCE_TASK( l_U567 );
                    TASK_PERFORM_SEQUENCE( l_U549, l_U567 );
                    CLEAR_SEQUENCE_TASK( l_U567 );
                }
                DO_SCREEN_FADE_IN( 500 );
                GET_GAME_TIMER( ref iVar10 );
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                SETTIMERA( 0 );
                iVar4 = 1;
                break;
                case 1:
                if (TIMERA() > 4700)
                {
                    UNATTACH_CAM( uVar6[0] );
                    UNATTACH_CAM( uVar6[1] );
                    SET_CAM_NEAR_DOF( uVar6[0], 1 );
                    SET_CAM_FAR_DOF( uVar6[0], 9999 );
                    SET_CAM_NEAR_DOF( uVar6[1], 1 );
                    SET_CAM_FAR_DOF( uVar6[1], 9999 );
                    SET_CAM_POS( uVar6[0], -362.57360000, 1205.14900000, 96.00147000 );
                    SET_CAM_ROT( uVar6[0], -50.82560000, -0.00000000, -165.40970000 );
                    SET_CAM_FOV( uVar6[0], 45.00000000 );
                    SET_CAM_POS( uVar6[1], -362.57360000, 1205.14900000, 96.00147000 );
                    SET_CAM_ROT( uVar6[1], -6.63608900, -0.00000000, -165.40970000 );
                    SET_CAM_FOV( uVar6[1], 45.00000000 );
                    SET_CAM_INTERP_STYLE_CORE( uVar5, uVar6[0], uVar6[1], 4500, 0 );
                    if (NOT (IS_CAR_DEAD( l_U552 )))
                    {
                        SET_PLAYBACK_SPEED( l_U552, 1.40000000 );
                    }
                    PRINT_NOW( "CUTSCENE2", 7500, 0 );
                    SETTIMERA( 0 );
                    iVar4 = 2;
                }
                break;
                case 2:
                if (TIMERA() > 4500)
                {
                    bVar2 = true;
                }
                break;
            }
        }
    }
    SET_USE_HIGHDOF( 0 );
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    if (sub_45833( l_U598 ))
    {
        sub_27308( ref l_U598, 0 );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_ACTIVE( uVar5, 0 );
    SET_CAM_PROPAGATE( uVar5, 0 );
    SET_CAM_ACTIVE( uVar6[0], 0 );
    SET_CAM_PROPAGATE( uVar6[0], 0 );
    SET_CAM_ACTIVE( uVar6[1], 0 );
    SET_CAM_PROPAGATE( uVar6[1], 0 );
    DESTROY_CAM( uVar5 );
    DESTROY_CAM( uVar6[0] );
    DESTROY_CAM( uVar6[1] );
    END_CAM_COMMANDS( ref uVar9 );
    if (NOT (IS_CAR_DEAD( l_U552 )))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U552 ))
        {
            STOP_PLAYBACK_RECORDED_CAR( l_U552 );
        }
        START_PLAYBACK_RECORDED_CAR( l_U552, 248 );
        SET_PLAYBACK_SPEED( l_U552, 0.60000000 );
    }
    if (NOT (IS_CAR_DEAD( l_U551 )))
    {
        WARP_CHAR_INTO_CAR( sub_6512(), l_U551 );
        CLOSE_ALL_CAR_DOORS( l_U551 );
        FREEZE_CAR_POSITION( l_U551, 0 );
    }
    LOAD_SCENE( -501.98280000, 1747.99900000, 7.51660000 );
    REMOVE_BLIP( l_U546 );
    ADD_BLIP_FOR_CAR( l_U552, ref l_U546 );
    CHANGE_BLIP_COLOUR( l_U546, 1 );
    CLEAR_SMALL_PRINTS();
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_3090(), 1 );
    sub_3000();
    SET_CAM_BEHIND_PED( sub_6512() );
    DO_SCREEN_FADE_IN( 500 );
    SETTIMERB( 0 );
    return;
}

int sub_45833(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_19615( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_19615( "\n speech is not playing" );
    }
    return 0;
}

void sub_46981()
{
    if (DOES_CHAR_EXIST( l_U548 ))
    {
        DELETE_CHAR( ref l_U548 );
    }
    if (DOES_VEHICLE_EXIST( l_U551 ))
    {
        DELETE_CAR( ref l_U551 );
    }
    if (NOT (DOES_BLIP_EXIST( l_U545 )))
    {
        ADD_BLIP_FOR_COORD( -489.80000000, 1725.50000000, 9.00000000, ref l_U545 );
        SET_ROUTE( l_U545, 1 );
        PRINT_NOW( "GO_TO_HELI", 7500, 0 );
    }
    l_U751 = 0;
    return;
}

void sub_47196()
{
    CREATE_CAR( -1660661558, -507.29970000, 1734.15000000, 8.36480100, ref l_U551, 1 );
    SET_CAR_HEADING( l_U551, 220.00000000 );
    FREEZE_CAR_POSITION( l_U551, 1 );
    LOCK_CAR_DOORS( l_U551, 1 );
    CHANGE_CAR_COLOUR( l_U551, 27, 195 );
    SET_CAR_STRONG( l_U551, 1 );
    sub_47336( 3, ref l_U548, -386.82060000, 887.35680000, 15.06190000, 197.00000000 );
    sub_6561( 1, l_U548, "JACOB", 0 );
    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U548, l_U551, 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U548, 1 );
    SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U548, 0 );
    l_U751 = 1;
    return;
}

void sub_47336(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_5223( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_47386( uParam0, (uParam1^) );
    return;
}

void sub_47386(unknown uParam0, unknown uParam1)
{
    sub_47398( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_47398(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_47492( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_48036( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_47492(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_48036(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_47492( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_47492( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_47492( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_47492( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_47492( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_47492( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_47492( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_47492( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_47492( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_47492( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_47492( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_47492( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_47492( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_49073(unknown uParam0)
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
    if ((iVar3 != 4) AND ((NOT sub_49241()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_6512() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
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

int sub_49241()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_49892(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (sub_49908( sub_6512(), uParam0 ))
    {
        if (NOT l_U759)
        {
            if (NOT l_U761)
            {
                GET_GAME_TIMER( ref l_U763 );
                l_U761 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U754 );
                l_U754 -= l_U763;
                if (l_U754 > 2000)
                {
                    if (g_U64654[uParam3] == 0)
                    {
                        l_U762 = uParam1;
                        g_U64654[uParam3]++;
                    }
                    else if (g_U64654[uParam3] == 1)
                    {
                        l_U762 = uParam2;
                        g_U64654[uParam3]++;
                    }
                    else if (g_U64654[uParam3] > 1)
                    {
                        SAY_AMBIENT_SPEECH( uParam0, "LISTEN_TO_RADIO", 0, 0, 0 );
                        g_U64654[uParam3] = 3;
                        l_U759 = 1;
                    };;;
                    if (g_U64654[uParam3] < 3)
                    {
                        if (sub_26036( l_U762, ref l_U598, 6, 1 ))
                        {
                            l_U759 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U760)
        {
            if (NOT l_U761)
            {
                GET_GAME_TIMER( ref l_U763 );
                l_U761 = 1;
            }
            else
            {
                GET_GAME_TIMER( ref l_U754 );
                l_U754 -= l_U763;
                if (l_U754 > 2000)
                {
                    sub_50383( l_U762, ref l_U598, 6, 1 );
                    l_U760 = 0;
                    l_U761 = 0;
                }
            }
        }
    }
    else if (sub_45833( l_U598 ))
    {
        sub_50533( ref l_U598 );
        l_U760 = 1;
        l_U761 = 0;
    }
    return;
}

int sub_49908(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if ((IS_CHAR_IN_ANY_CAR( uParam1 )) AND (IS_CHAR_IN_ANY_CAR( uParam0 )))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
        return IS_CHAR_IN_CAR( uParam1, uVar4 );
    }
    return 0;
}

void sub_50383(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_50406( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

int sub_50406(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
        return sub_26113( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_50533(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_19615( "\n already paused" );
    }
    else if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_19615( "\n CONVERSATION PAUSED AT LINE " );
            sub_50689( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_19615( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_19615( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_19615( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_50689(unknown uParam0)
{
    return;
}

void sub_50993(unknown uParam0, unknown uParam1)
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

int sub_51164(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (IS_CHAR_IN_CAR( sub_6512(), l_U551 ))
    {
        if (DOES_BLIP_EXIST( l_U547 ))
        {
            REMOVE_BLIP( l_U547 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U546 )))
        {
            if (NOT l_U766)
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
            else
            {
                PRINT_NOW( uParam1, 7500, 1 );
            }
            l_U766 = 1;
            ADD_BLIP_FOR_CAR( l_U552, ref l_U546 );
        }
        return 1;
    }
    if (DOES_BLIP_EXIST( l_U546 ))
    {
        REMOVE_BLIP( l_U546 );
    }
    if (NOT (DOES_BLIP_EXIST( l_U547 )))
    {
        ADD_BLIP_FOR_CAR( l_U551, ref l_U547 );
        SET_BLIP_AS_FRIENDLY( l_U547, 1 );
        if (NOT l_U766)
        {
            l_U766 = 1;
            ADD_BLIP_FOR_CAR( l_U552, ref l_U546 );
            REMOVE_BLIP( l_U546 );
            PRINT_NOW( uParam0, 7500, 1 );
        }
        else if (sub_45833( l_U598 ))
        {
            sub_27308( ref l_U598, 0 );
        }
        PRINT_NOW( uParam2, 7500, 1 );;
    }
    return 0;
}

void sub_51567()
{
    sub_27308( ref l_U598, 0 );
    l_U759 = 0;
    l_U760 = 0;
    return;
}

void sub_52299(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4, float fParam5, float fParam6)
{
    float fVar9;
    float fVar10;
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;

    fVar9 = uParam3 * 2.00000000;
    fVar14 = uParam3 * 0.50000000;
    fVar15 = ((fParam6 - fParam5) * 0.40000000) + fParam5;
    fVar11 = sub_52351( uParam0, uParam1 );
    if (fVar11 < 0.00000000)
    {
        fVar11 *= -1.00000000;
    }
    fVar12 = fVar11;
    if (fVar12 < fParam4)
    {
        fVar12 = fParam4;
    }
    if (fVar12 > fVar15)
    {
        fVar12 = fVar15;
    }
    fVar13 = uParam3;
    if (DOES_CHAR_EXIST( uParam1 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (sub_52678( uParam1, uParam0 ))
            {
                if (IS_CHAR_IN_ANY_CAR( uParam1 ))
                {
                    fVar13 = fVar9;
                }
                else if (fVar11 < 50.00000000)
                {
                    fVar13 = uParam3;
                }
                else
                {
                    fVar13 = fVar9;
                }
            }
            else if (fVar11 < fParam5)
            {
                if ((sub_50993( uParam0, uParam1 )) < fParam5)
                {
                    fVar10 = sub_53028( uParam0, uParam1 );
                    fVar10 += -15.00000000;
                    if (fVar10 < 0.00000000)
                    {
                        fVar10 = 0.00000000;
                    }
                    if (fVar10 > 75.00000000)
                    {
                        fVar10 = 75.00000000;
                    }
                    fVar16 = (75.00000000 - fVar10) / 75.00000000;
                }
                else
                {
                    fVar16 = 1.00000000;
                }
                fVar13 = (((((fParam5 - fParam4) - (fVar12 - fParam4)) / (fParam5 - fParam4)) * (fVar9 - uParam3)) * fVar16) + uParam3;
            }
            else if (fVar11 > fParam6)
            {
                fVar13 = fVar14;
                l_U758 = 1;
            }
            else if (l_U758)
            {
                if (fVar11 < fVar15)
                {
                    fVar13 = uParam3;
                    l_U758 = 0;
                }
                else
                {
                    fVar13 = fVar14;
                }
            }
            else
            {
                fVar13 = uParam3;
            };;;;
        }
    }
    fVar10 = fVar13 - (uParam2^);
    (uParam2^) += fVar10 * 0.10000000;
    return;
}

float sub_52351(unknown uParam0, unknown uParam1)
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

int sub_52678(unknown uParam0, unknown uParam1)
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
    fVar19 = sub_52849( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

float sub_52849(int iParam0, int iParam1)
{
    return ((iParam0->_fU0 * iParam1->_fU0) + (iParam0->_fU4 * iParam1->_fU4)) + (iParam0->_fU8 * iParam1->_fU8);
}

void sub_53028(unknown uParam0, unknown uParam1)
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

void sub_53517()
{
    if ((IS_PLAYBACK_GOING_ON_FOR_CAR( l_U552 )) AND ((NOT (IS_CAR_DEAD( l_U551 ))) AND (NOT (IS_CAR_DEAD( l_U552 )))))
    {
        if ((NOT l_U742) AND ((IS_CAR_IN_AREA_2D( l_U551, -242.00000000, -27.00000000, -116.00000000, 416.00000000, 0 )) AND (IS_CAR_IN_AREA_2D( l_U552, -242.00000000, -27.00000000, -116.00000000, 416.00000000, 0 ))))
        {
            sub_53679( "C4_B1CV1", "C4_B1CV2", 1 );
            l_U742 = 1;
        }
        l_U560 = FIND_TIME_POSITION_IN_RECORDING( l_U552 );
        if ((NOT l_U745) AND ((IS_CAR_ON_SCREEN( l_U552 )) AND ((l_U560 < 153000.00000000) AND (l_U560 > 151000.00000000))))
        {
            sub_26036( "C4_JERSEY", ref l_U598, 6, 1 );
            l_U745 = 1;
        }
        else if (l_U560 > 106000)
        {
            if (NOT l_U738)
            {
                l_U738 = 1;
            }
            else if (NOT l_U739)
            {
                sub_26036( "C4_WATER", ref l_U598, 6, 1 );
                l_U739 = 1;
                SETTIMERA( 0 );
            }
            else if ((NOT l_U553) AND (TIMERA() > 6000))
            {
                sub_54105();
            }
            if ((NOT (sub_45833( l_U598 ))) AND (NOT l_U740))
            {
                sub_40688( l_U548, 0 );
                REQUEST_MODEL( -1341473171 );
                PRINT_NOW( "LINEUP_HELI1", 7500, 0 );
                l_U740 = 1;
            }
            else if ((NOT l_U557) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                l_U557 = 1;
            };;;;
        }
        else if ((NOT l_U747) AND ((l_U560 < 71000.00000000) AND (l_U560 > 68000.00000000)))
        {
            sub_53679( "C4_BXV2", "C4_BXV1", 2 );
            l_U747 = 1;
        }
        else if ((NOT l_U749) AND ((l_U560 < 100000.00000000) AND (l_U560 > 90000.00000000)))
        {
            if (IS_CHAR_IN_AREA_3D( sub_6512(), 498, 65114, 0, 783, 65196, 50, 0 ))
            {
                sub_26036( "C4_BRIDGE", ref l_U598, 6, 1 );
                l_U749 = 1;
            }
        };;;;
    }
    return;
}

void sub_53679(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (g_U64654[uParam2] == 0)
    {
        uVar5 = uParam0;
        g_U64654[uParam2]++;
    }
    else if (g_U64654[uParam2] == 1)
    {
        uVar5 = uParam1;
        g_U64654[uParam2]++;
    }
    else if (g_U64654[uParam2] > 1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref l_U754 );
        if (l_U754 > 49)
        {
            uVar5 = uParam1;
        }
        else
        {
            uVar5 = uParam0;
        }
        g_U64654[uParam2] = 3;
    };;;
    sub_26036( uVar5, ref l_U598, 6, 1 );
    return;
}

void sub_54105()
{
    if ((NOT (IS_CHAR_DEAD( l_U548 ))) AND (NOT l_U553))
    {
        switch (l_U554)
        {
            case 0:
            WARP_CHAR_FROM_CAR_TO_COORD( l_U548, 0.00000000, 0.00000000, 0.00000000 );
            l_U561 = {-0.50000000, -1.20000000, 1.10000000};
            ATTACH_PED_TO_CAR( l_U548, l_U551, 0, -0.02000000, 1.00000000, 0.17000000, 0.00000000, 0.00000000, 0, 0 );
            OPEN_SEQUENCE_TASK( ref l_U567 );
            TASK_PLAY_ANIM( 0, "heli_enter", "misscia4", 8.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM( 0, "heli_idle", "misscia4", 8.00000000, 1, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U567 );
            TASK_PERFORM_SEQUENCE( l_U548, l_U567 );
            CLEAR_SEQUENCE_TASK( l_U567 );
            l_U554++;
            break;
            case 1:
            if (IS_CHAR_PLAYING_ANIM( l_U548, "misscia4", "heli_enter" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U548, "misscia4", "heli_enter", ref l_U560 );
                if (l_U560 > 0.60000000)
                {
                    CREATE_OBJECT( 1443084780, 1, 1, 1, ref l_U757, 1 );
                    ATTACH_OBJECT_TO_PED( l_U757, l_U548, 1219, 0, 0, 0, 0, 3.08000000, 3.44000000, 0 );
                    CREATE_OBJECT( 1224353592, -501.46200000, 1749.27000000, 9.28658900, ref l_U669[l_U730]._fU0, 1 );
                    ATTACH_OBJECT_TO_PED( l_U669[l_U730]._fU0, l_U548, 1219, 0.39400000, 0.10700000, -0.07500000, 0.00000000, 0.02000000, 3.44000000, 0 );
                    l_U554++;
                }
            }
            break;
            case 2:
            if (IS_CHAR_PLAYING_ANIM( l_U548, "misscia4", "heli_enter" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U548, "misscia4", "heli_enter", ref l_U560 );
                if (l_U560 > 0.99800000)
                {
                    if (g_U64678 > 1)
                    {
                        l_U731 = 2;
                    }
                    else
                    {
                        l_U731 = 3;
                    }
                    l_U669[l_U730]._fU72 = 0;
                    l_U732 = 1;
                    l_U553 = 1;
                    SETTIMERB( 0 );
                }
            }
            break;
        }
    }
    return;
}

void sub_55191()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;

    GET_CHAR_COORDINATES( sub_6512(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    GET_CAR_COORDINATES( l_U552, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    GET_DISTANCE_BETWEEN_COORDS_2D( uVar2._fU0, uVar2._fU4, uVar5._fU0, uVar5._fU4, ref fVar8 );
    if (NOT l_U556)
    {
        if (fVar8 > 330.00000000)
        {
            if ((fVar8 > 450) || (NOT (IS_CAR_ON_SCREEN( l_U552 ))))
            {
                if (NOT (IS_CHAR_DEAD( l_U549 )))
                {
                    if ((fVar8 > 450) || (NOT (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( sub_6512(), l_U549 ))))
                    {
                        if ((NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_6512(), l_U548, 150, 150, 150, 0 ))) AND (NOT (sub_49908( sub_6512(), l_U548 ))))
                        {
                            if (DOES_CHAR_EXIST( l_U548 ))
                            {
                                DELETE_CHAR( ref l_U548 );
                            }
                            l_U765 = 4;
                            sub_23925();
                        }
                        else if (DOES_CHAR_EXIST( l_U548 ))
                        {
                            SET_CHAR_PROOFS( l_U548, 1, 1, 1, 1, 1 );
                        }
                        l_U765 = 0;
                        sub_23925();;
                    }
                    else if (NOT (IS_CAR_DEAD( l_U551 )))
                    {
                        if (IS_CHAR_IN_CAR( sub_6512(), l_U551 ))
                        {
                            PRINT_NOW( "DISTANCE", 100, 0 );
                        }
                    }
                }
            }
            else if (NOT (IS_CAR_DEAD( l_U551 )))
            {
                if (IS_CHAR_IN_CAR( sub_6512(), l_U551 ))
                {
                    PRINT_NOW( "DISTANCE", 100, 0 );
                }
            }
        }
        else if (fVar8 > 270.00000000)
        {
            if (NOT (IS_CAR_DEAD( l_U551 )))
            {
                if (IS_CHAR_IN_CAR( sub_6512(), l_U551 ))
                {
                    PRINT_NOW( "DISTANCE", 100, 0 );
                }
            }
        }
    }
    else
    {
        l_U556 = 0;
    }
    return;
}

void sub_56000()
{
    int I;

    I = 0;
    for ( I = 0; I < l_U731; I++ )
    {
        if ((NOT l_U669[I]._fU76) AND (l_U669[I]._fU56))
        {
            if (NOT l_U669[I]._fU60)
            {
                GET_OBJECT_COORDINATES( l_U669[I]._fU0, ref l_U669[I]._fU4._fU0, ref l_U669[I]._fU4._fU4, ref l_U669[I]._fU4._fU8 );
                if (NOT (IS_CAR_DEAD( l_U552 )))
                {
                    GET_CAR_COORDINATES( l_U552, ref l_U669[I]._fU28._fU0, ref l_U669[I]._fU28._fU4, ref l_U669[I]._fU28._fU8 );
                    l_U669[I]._fU28 = {l_U669[I]._fU28 + l_U578};
                    l_U669[I]._fU40 = {0.00000000, 0.00000000, 0.00000000};
                    if (NOT l_U669[I]._fU72)
                    {
                        if (l_U669[I]._fU4._fU8 >= l_U669[I]._fU28._fU8)
                        {
                            l_U669[I]._fU28._fU8 += 6.00000000;
                            l_U669[I]._fU40._fU8 += 6.00000000;
                        }
                        else
                        {
                            l_U669[I]._fU28._fU8 -= 6.00000000;
                            l_U669[I]._fU40._fU8 -= 6.00000000;
                        }
                        GENERATE_RANDOM_FLOAT_IN_RANGE( -6.00000000, 6.00000000, ref l_U560 );
                        l_U669[I]._fU28._fU0 += l_U560;
                        l_U669[I]._fU40._fU0 += l_U560;
                        GENERATE_RANDOM_FLOAT_IN_RANGE( -6.00000000, 6.00000000, ref l_U560 );
                        l_U669[I]._fU28._fU4 += l_U560;
                        l_U669[I]._fU40._fU4 += l_U560;
                    }
                }
                l_U636 = {l_U669[I]._fU4 - l_U669[I]._fU28};
                l_U642 = VMAG( l_U636 );
                l_U639 = {l_U636 / l_U642};
                if (DOES_OBJECT_EXIST( l_U669[I]._fU0 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U669[I]._fU0 ))
                    {
                        DETACH_OBJECT( l_U669[I]._fU0, 1 );
                    }
                    FREEZE_OBJECT_POSITION( l_U669[I]._fU0, 1 );
                    SET_OBJECT_COLLISION( l_U669[I]._fU0, 0 );
                    SET_OBJECT_COORDINATES( l_U669[I]._fU0, l_U669[I]._fU4._fU0, l_U669[I]._fU4._fU4, l_U669[I]._fU4._fU8 );
                    l_U644 = {0.00000000, 0.00000000, 0.00000000};
                    l_U669[I]._fU52 = START_PTFX_ON_OBJ( "weap_rocket", l_U669[I]._fU0, l_U644, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                    PLAY_SOUND_FROM_OBJECT( l_U657, "CHOPPER_CHASE_ROCKET_FIRE", l_U669[I]._fU0 );
                    PLAY_SOUND_FROM_OBJECT( l_U658, "CHOPPER_CHASE_ROCKET_MULTITRACK_LOOP", l_U669[I]._fU0 );
                }
                if (NOT (IS_CHAR_DEAD( l_U548 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U567 );
                    TASK_PLAY_ANIM( 0, "heli_fire", "misscia4", 8.00000000, 0, 0, 0, 0, -1 );
                    TASK_PLAY_ANIM( 0, "heli_idle", "misscia4", 8.00000000, 1, 0, 0, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U567 );
                    TASK_PERFORM_SEQUENCE( l_U548, l_U567 );
                    CLEAR_SEQUENCE_TASK( l_U567 );
                }
                CLEAR_SMALL_PRINTS();
                if (l_U730 == l_U731)
                {
                    l_U733 = 1;
                }
                l_U669[I]._fU60 = 1;
            }
            else if ((NOT l_U669[I]._fU68) AND (LOCATE_OBJECT_3D( l_U669[I]._fU0, l_U669[I]._fU28._fU0, l_U669[I]._fU28._fU4, l_U669[I]._fU28._fU8, 0.50000000, 0.50000000, 0.50000000, 0 )))
            {
                if (NOT (IS_CAR_DEAD( l_U552 )))
                {
                    STOP_SOUND( l_U658 );
                    if (l_U669[I]._fU72)
                    {
                        sub_57406();
                        l_U734 = 3;
                    }
                    else
                    {
                        l_U669[I]._fU68 = 1;
                        l_U730++;
                        l_U752 = 1;
                    }
                }
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U669[I]._fU0, l_U669[I]._fU28._fU0, l_U669[I]._fU28._fU4, l_U669[I]._fU28._fU8, 300.00000000, 300.00000000, 300.00000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U669[I]._fU0, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
                TRIGGER_PTFX( "exp_missed_chopper", l_U561, 0, 0, 0, 1.00000000 );
                PLAY_SOUND_FROM_OBJECT( l_U657, "CHOPPER_CHASE_ROCKET_MISS_EXPLOSION", l_U669[I]._fU0 );
                STOP_PTFX( l_U669[I]._fU52 );
                DELETE_OBJECT( ref l_U669[I]._fU0 );
                l_U669[I]._fU76 = 1;
            }
            else if (NOT l_U669[I]._fU68)
            {
                if (NOT (IS_CAR_DEAD( l_U552 )))
                {
                    GET_CAR_COORDINATES( l_U552, ref l_U669[I]._fU28._fU0, ref l_U669[I]._fU28._fU4, ref l_U669[I]._fU28._fU8 );
                    l_U669[I]._fU28 = {l_U669[I]._fU28 + l_U578};
                    l_U669[I]._fU28 = {l_U669[I]._fU28 + l_U669[I]._fU40};
                    l_U636 = {l_U669[I]._fU4 - l_U669[I]._fU28};
                    l_U642 = VMAG( l_U636 );
                    l_U639 = {l_U636 / l_U642};
                }
            }
            GET_FRAME_TIME( ref l_U643 );
            l_U669[I]._fU4 = {l_U669[I]._fU4 - ((l_U639 * l_U643) * 65.00000000)};
            SET_OBJECT_COORDINATES( l_U669[I]._fU0, l_U669[I]._fU4._fU0, l_U669[I]._fU4._fU4, l_U669[I]._fU4._fU8 );
            if (l_U736)
            {
                PRINTNL();
                PRINTSTRING( "jacobRockets[" );
                PRINTINT( I );
                PRINTSTRING( "].pos = " );
                PRINTVECTOR( l_U669[I]._fU4 );
                PRINTNL();
                PRINTSTRING( "jacobRockets[" );
                PRINTINT( I );
                PRINTSTRING( "].target = " );
                PRINTVECTOR( l_U669[I]._fU28 );
                PRINTNL();
            };;;;
        }
    }
    return;
}

void sub_57406()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    iVar4 = 1;
    while ((NOT bVar3) AND (NOT bVar2))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar8 );
        if (iVar4 != 1)
        {
            iVar9 = iVar8 - iVar7;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_24660()) AND (iVar9 >= 1000)))
        {
            bVar3 = true;
        }
        else if ((NOT (IS_CAR_DEAD( l_U552 ))) AND (IS_DEBUG_CAMERA_ON()))
        {
            GET_DEBUG_CAM( ref l_U604 );
            GET_CAM_POS( l_U604, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
            GET_CAR_COORDINATES( l_U552, ref l_U564._fU0, ref l_U564._fU4, ref l_U564._fU8 );
            PRINTNL();
            PRINTSTRING( "debugCam Offset Pos- " );
            PRINTVECTOR( l_U561 - l_U564 );
        }
        switch (iVar4)
        {
            case 1:
            SET_PLAYER_CONTROL( sub_3090(), 0 );
            while (NOT sub_24922())
            {
                WAIT( 0 );
            }
            CLEAR_SMALL_PRINTS();
            SET_WIDESCREEN_BORDERS( 1 );
            DISPLAY_HUD( 0 );
            sub_2849();
            STOP_PTFX( l_U669[l_U730]._fU52 );
            DELETE_OBJECT( ref l_U669[l_U730]._fU0 );
            if ((NOT (IS_CAR_DEAD( l_U551 ))) AND (NOT (IS_CHAR_DEAD( l_U548 ))))
            {
                DETACH_PED( l_U548, 1 );
                TASK_WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U548, l_U551, 0 );
                sub_25590();
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1443084780 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1224353592 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1516578222 );
            if (NOT (IS_CAR_DEAD( l_U552 )))
            {
                SET_CAR_ENGINE_ON( l_U552, 0, 1 );
                STOP_PLAYBACK_RECORDED_CAR( l_U552 );
                GET_CAR_HEADING( l_U552, ref uVar14 );
                TRIGGER_PTFX_ON_VEH( "exp_chopper_chase", l_U552, l_U575, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                l_U665 = GET_SOUND_ID();
                PLAY_SOUND_FROM_VEHICLE( l_U665, "FIN2A_KILL_PEGORINO_CHOPPER_ALARMS", l_U552 );
                l_U659[0] = GET_SOUND_ID();
                PLAY_SOUND_FROM_VEHICLE( l_U659[0], "CHOPPER_CHASE_ROCKET_MISS_EXPLOSION", l_U552 );
                l_U666 = 1;
                REMOVE_CAR_WINDOW( l_U552, 0 );
                REMOVE_CAR_WINDOW( l_U552, 1 );
                REMOVE_CAR_WINDOW( l_U552, 2 );
                REMOVE_CAR_WINDOW( l_U552, 2 );
                l_U651[1] = START_PTFX_ON_VEH( "fire_chopper_tail", l_U552, 0, 2.00000000, 0, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                PLAY_SOUND_FROM_VEHICLE( l_U663, "CHOPPER_CHASE_FIRE", l_U552 );
                APPLY_FORCE_TO_CAR( l_U552, 1, 19.99000000, l_U595._fU4, l_U595._fU8, l_U569, 0, 1, 1, 1 );
                APPLY_FORCE_TO_CAR( l_U552, 1, -19.99000000, l_U595._fU4, l_U595._fU8, l_U572, 0, 1, 1, 1 );
                APPLY_FORCE_TO_CAR( l_U552, 1, 19.99000000, l_U595._fU4, l_U595._fU8, l_U569, 0, 1, 1, 1 );
                APPLY_FORCE_TO_CAR( l_U552, 1, -19.99000000, l_U595._fU4, l_U595._fU8, l_U572, 0, 1, 1, 1 );
                if (NOT (IS_CAR_DEAD( l_U551 )))
                {
                    GET_CAR_COORDINATES( l_U552, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
                    SET_CAR_COORDINATES( l_U551, l_U561._fU0 + 60, l_U561._fU4, l_U561._fU8 );
                    sub_58595( sub_6512(), l_U561 );
                    FREEZE_CAR_POSITION( l_U551, 0 );
                    APPLY_FORCE_TO_CAR( l_U551, 1, 1, 8.00000000, -3.00000000, 0, 0, 0, 0, 1, 1, 1 );
                }
            }
            BEGIN_CAM_COMMANDS( ref uVar6 );
            CREATE_CAM( 14, ref uVar5 );
            SET_CAM_FOV( uVar5, 55.00000000 );
            GET_CAR_COORDINATES( l_U552, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
            CREATE_OBJECT( -1341473171, l_U561._fU0, l_U561._fU4, l_U561._fU8, ref uVar15, 1 );
            PRINTNL();
            PRINTSTRING( "heli coords = " );
            PRINTVECTOR( l_U561 );
            PRINTNL();
            SET_OBJECT_HEADING( uVar15, uVar14 );
            SET_OBJECT_VISIBLE( uVar15, 0 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uVar15, l_U608[1]._fU0, l_U608[1]._fU4, l_U608[1]._fU8, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
            PRINTNL();
            PRINTSTRING( "in front of heli coords = " );
            PRINTVECTOR( l_U561 );
            PRINTNL();
            SET_CAM_POS( uVar5, l_U561._fU0, l_U561._fU4, 0.20000000 );
            GET_CAR_COORDINATES( l_U552, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
            l_U561._fU8 -= 50;
            POINT_CAM_AT_COORD( uVar5, l_U561._fU0, l_U561._fU4, l_U561._fU8 );
            SET_CAM_FOV( uVar5, 51.00000000 );
            SET_CAM_ACTIVE( uVar5, 1 );
            SET_CAM_PROPAGATE( uVar5, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_TIME_SCALE( 0.50000000 );
            SETTIMERA( 0 );
            GET_GAME_TIMER( ref iVar7 );
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
            iVar4 = 2;
            break;
            case 2:
            if (NOT (IS_CAR_DEAD( l_U551 )))
            {
                FREEZE_CAR_POSITION( l_U551, 0 );
                APPLY_FORCE_TO_CAR( l_U551, 1, 0, 0, 0.01000000, 0, 0, 0, 0, 1, 1, 1 );
            }
            if (NOT (IS_CAR_DEAD( l_U552 )))
            {
                if (TIMERA() > l_U587)
                {
                    SET_TIME_SCALE( 0.50000000 );
                    TRIGGER_PTFX_ON_VEH( "exp_chopper_chase", l_U552, l_U575, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                    APPLY_FORCE_TO_CAR( l_U552, 1, l_U595, l_U569, 0, 1, 1, 1 );
                    APPLY_FORCE_TO_CAR( l_U552, 1, -l_U595._fU0, l_U595._fU4, l_U595._fU8, l_U572, 0, 1, 1, 1 );
                    l_U659[1] = GET_SOUND_ID();
                    PLAY_SOUND_FROM_VEHICLE( l_U659[1], "CHOPPER_CHASE_ROCKET_MISS_EXPLOSION", l_U552 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U552, l_U608[0]._fU0, l_U608[0]._fU4, l_U608[0]._fU8, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
                    SET_CAM_POS( uVar5, l_U561._fU0, l_U561._fU4, l_U561._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U552, 0.00000000, l_U618[0], 0.00000000, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
                    POINT_CAM_AT_VEHICLE( uVar5, l_U552 );
                    SET_CAM_FOV( uVar5, 45.00000000 );
                    if (HAVE_ANIMS_LOADED( "VEH@VAN" ))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U567 );
                        TASK_PLAY_ANIM( 0, "shunt_ps", "VEH@VAN", 10.00000000, 0, 0, 0, 0, -1 );
                        TASK_PLAY_ANIM( 0, "shunt_ds", "VEH@VAN", 10.00000000, 0, 0, 0, 0, -1 );
                        SET_SEQUENCE_TO_REPEAT( l_U567, 1 );
                        CLOSE_SEQUENCE_TASK( l_U567 );
                        if (NOT (IS_CHAR_INJURED( l_U550 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U550, l_U567 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U567 );
                        OPEN_SEQUENCE_TASK( ref l_U567 );
                        TASK_PAUSE( 0, 400 );
                        TASK_PLAY_ANIM( 0, "shunt_ps", "VEH@VAN", 10.00000000, 0, 0, 0, 0, -1 );
                        TASK_PLAY_ANIM( 0, "shunt_ds", "VEH@VAN", 10.00000000, 0, 0, 0, 0, -1 );
                        SET_SEQUENCE_TO_REPEAT( l_U567, 1 );
                        CLOSE_SEQUENCE_TASK( l_U567 );
                        if (NOT (IS_CHAR_INJURED( l_U549 )))
                        {
                            TASK_PERFORM_SEQUENCE( l_U549, l_U567 );
                        }
                        CLEAR_SEQUENCE_TASK( l_U567 );
                    }
                    SETTIMERA( 0 );
                    iVar4 = 3;
                }
                else
                {
                    APPLY_FORCE_TO_CAR( l_U552, 0, l_U592, l_U569, 0, 1, 1, 1 );
                    APPLY_FORCE_TO_CAR( l_U552, 0, -l_U592._fU0, l_U592._fU4, l_U592._fU8, l_U572, 0, 1, 1, 1 );
                }
            }
            break;
            case 3:
            if (NOT (IS_CAR_DEAD( l_U552 )))
            {
                if (TIMERA() > l_U588)
                {
                    TRIGGER_PTFX_ON_VEH( "exp_chopper_chase", l_U552, l_U575, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                    APPLY_FORCE_TO_CAR( l_U552, 1, l_U595, l_U569, 0, 1, 1, 1 );
                    APPLY_FORCE_TO_CAR( l_U552, 1, -l_U595._fU0, l_U595._fU4, l_U595._fU8, l_U572, 0, 1, 1, 1 );
                    l_U659[2] = GET_SOUND_ID();
                    PLAY_SOUND_FROM_VEHICLE( l_U659[2], "CHOPPER_CHASE_ROCKET_MISS_EXPLOSION", l_U552 );
                    EXPLODE_CAR( l_U552, 1, 0 );
                    if (l_U591)
                    {
                        EXPLODE_CAR( l_U552, 1, 0 );
                    }
                    SET_CAM_COMPONENT_SHAKE( uVar5, 0, 3, 1500, 0.00500000, 3.90000000, 0 );
                    SET_CAM_COMPONENT_SHAKE( uVar5, 1, 3, 1500, 0.00500000, 3.80000000, 0 );
                    SET_CAM_COMPONENT_SHAKE( uVar5, 3, 3, 1500, 0.00500000, 3.80000000, 0 );
                    SET_CAM_COMPONENT_SHAKE( uVar5, 4, 3, 1500, 0.00500000, 3.80000000, 0 );
                    SETTIMERA( 0 );
                    iVar4 = 4;
                }
                else
                {
                    APPLY_FORCE_TO_CAR( l_U552, 0, l_U592, l_U569, 0, 1, 1, 1 );
                    APPLY_FORCE_TO_CAR( l_U552, 0, -l_U592._fU0, l_U592._fU4, l_U592._fU8, l_U572, 0, 1, 1, 1 );
                }
            }
            break;
            case 4:
            if (TIMERA() > l_U589)
            {
                bVar2 = true;
            }
            else
            {
                APPLY_FORCE_TO_CAR( l_U552, 0, l_U592, l_U569, 0, 1, 1, 1 );
                APPLY_FORCE_TO_CAR( l_U552, 0, -l_U592._fU0, l_U592._fU4, l_U592._fU8, l_U572, 0, 1, 1, 1 );
            }
            break;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U549 )))
    {
        CLEAR_CHAR_TASKS( l_U549 );
    }
    if (NOT (IS_CHAR_DEAD( l_U550 )))
    {
        CLEAR_CHAR_TASKS( l_U550 );
    }
    SET_TIME_SCALE( 1.00000000 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    if (DOES_CAM_EXIST( uVar5 ))
    {
        if (IS_CAM_ACTIVE( uVar5 ))
        {
            SET_CAM_ACTIVE( uVar5, 0 );
            SET_CAM_PROPAGATE( uVar5, 0 );
            DESTROY_CAM( uVar5 );
        }
    }
    END_CAM_COMMANDS( ref uVar6 );
    if (l_U666)
    {
        STOP_SOUND( l_U665 );
    }
    if (NOT (IS_CAR_DEAD( l_U551 )))
    {
        LOCK_CAR_DOORS( l_U551, 1 );
    }
    SETTIMERA( 0 );
    if (DOES_BLIP_EXIST( l_U546 ))
    {
        REMOVE_BLIP( l_U546 );
    }
    ADD_BLIP_FOR_COORD( 370.34910000, -731.55350000, 4.67650000, ref l_U545 );
    SET_ROUTE( l_U545, 1 );
    if (NOT (IS_CAR_DEAD( l_U551 )))
    {
        APPLY_FORCE_TO_CAR( l_U551, 0, 0, 0, -0.01000000, 0, 0, 0, 0, 1, 1, 1 );
    }
    if (IS_CAR_DEAD( l_U552 ))
    {
        if (l_U647 > 0)
        {
            STOP_PTFX( l_U647 );
        }
        if (l_U651[1] > 0)
        {
            STOP_PTFX( l_U651[1] );
        }
    }
    sub_26036( "C4_SHOOT", ref l_U598, 6, 1 );
    SET_WIDESCREEN_BORDERS( 0 );
    DISPLAY_HUD( 1 );
    SET_PLAYER_CONTROL( sub_3090(), 1 );
    sub_3000();
    SET_CAM_BEHIND_PED( sub_6512() );
    return;
}

void sub_58595(unknown uParam0, vector vParam1)
{
    vector vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;

    GET_CHAR_COORDINATES( uParam0, ref vVar6.x, ref vVar6.y, ref vVar6.z );
    vVar12 = {vVar6 - vParam1};
    uVar15 = VMAG( vVar12 );
    uVar9 = {vVar12 / uVar15};
    GET_HEADING_FROM_VECTOR_2D( uVar9._fU0, uVar9._fU4, ref uVar16 );
    SET_CHAR_HEADING( sub_6512(), uVar16 - 180 );
    return;
}

void sub_62106()
{
    if ((NOT (IS_CHAR_DEAD( l_U548 ))) AND (l_U553))
    {
        switch (l_U555)
        {
            case 0:
            if (l_U730 == 1)
            {
                sub_27308( ref l_U598, 0 );
                sub_26036( "C4_MISS", ref l_U598, 6, 1 );
            }
            else if (l_U730 == 2)
            {
                sub_27308( ref l_U598, 0 );
                sub_26036( "C4_TEASE", ref l_U598, 6, 1 );
            }
            OPEN_SEQUENCE_TASK( ref l_U567 );
            TASK_PLAY_ANIM( 0, "heli_reload", "misscia4", 8.00000000, 0, 0, 0, 0, -1 );
            TASK_PLAY_ANIM( 0, "heli_idle", "misscia4", 8.00000000, 1, 0, 0, 0, -1 );
            CLOSE_SEQUENCE_TASK( l_U567 );
            TASK_PERFORM_SEQUENCE( l_U548, l_U567 );
            CLEAR_SEQUENCE_TASK( l_U567 );
            l_U555++;
            break;
            case 1:
            if (IS_CHAR_PLAYING_ANIM( l_U548, "misscia4", "heli_reload" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U548, "misscia4", "heli_reload", ref l_U560 );
                if (l_U560 > 0.55000000)
                {
                    CREATE_OBJECT( 1224353592, -501.46200000, 1749.27000000, 9.28658900, ref l_U669[l_U730]._fU0, 1 );
                    ATTACH_OBJECT_TO_PED( l_U669[l_U730]._fU0, l_U548, 1219, 0.39400000, 0.10700000, -0.07500000, 0.00000000, 0.02000000, 3.44000000, 0 );
                    l_U555++;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_PLAYING_ANIM( l_U548, "misscia4", "heli_reload" )))
            {
                if (NOT (sub_45833( l_U598 )))
                {
                    if (l_U730 == (l_U731 - 1))
                    {
                        l_U669[l_U730]._fU72 = 1;
                    }
                    else
                    {
                        l_U669[l_U730]._fU72 = 0;
                    }
                    l_U732 = 1;
                    l_U752 = 0;
                    l_U555 = 0;
                    SETTIMERB( 0 );
                }
            }
            break;
        }
    }
    return;
}

void sub_62841(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_62861( 1, "", -1, uParam0, uParam1, uParam2 );
    return;
}

void sub_62861(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((iParam0 == 2) || (I == iParam0))
        {
            sub_62903( I );
            sub_63020( uParam5, I );
            switch (I)
            {
                case 0:
                StrCopy( ref g_U9241._fU28[0], uParam1, 16 );
                g_U9241._fU100[0] = uParam2;
                break;
                case 1:
                StrCopy( ref g_U9241._fU28[1], uParam3, 16 );
                g_U9241._fU100[1] = uParam4;
                break;
            }
            g_U9241._fU112[I] = 0;
            if (iParam0 == 2)
            {
                g_U9241._fU148[I] = 3;
            }
            else
            {
                g_U9241._fU148[I] = 1;
            }
            g_U9241._fU136[I] = -1;
            g_U9241._fU124[I] = 0;
        }
    }
    return;
}

void sub_62903(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_62955( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_62955(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_63020(int iParam0, unknown uParam1)
{
    if (iParam0 == -1)
    {
        g_U9241._fU16[uParam1] = 6000;
    }
    else
    {
        g_U9241._fU16[uParam1] = iParam0;
    }
    return;
}

int sub_63332()
{
    float fVar2;
    float fVar3;
    float fVar4;
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    GET_CAR_COORDINATES( l_U551, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
    GET_CAR_HEADING( l_U551, ref fVar2 );
    GET_CAR_COORDINATES( l_U552, ref l_U564._fU0, ref l_U564._fU4, ref l_U564._fU8 );
    if ((l_U561._fU8 > (l_U564._fU8 - 70.00000000)) AND (l_U561._fU8 < (l_U564._fU8 + 70.00000000)))
    {
        l_U635 = 1;
        l_U561._fU8 = l_U564._fU8;
        vVar5 = {l_U561 - l_U564};
        fVar4 = VMAG( vVar5 );
        uVar8 = {vVar5 / fVar4};
        GET_HEADING_FROM_VECTOR_2D( uVar8._fU0, uVar8._fU4, ref fVar3 );
        fVar3 -= 180.00000000;
        fVar2 += 360;
        fVar3 += 360;
        if ((fVar4 > 30) AND (fVar4 < 300))
        {
            if ((fVar2 < (fVar3 + l_U756)) AND (fVar2 > (fVar3 + l_U755)))
            {
                return 1;
            }
        }
    }
    else if (l_U635 == 1)
    {
        if (l_U564._fU8 > l_U561._fU8)
        {
            if (sub_63654())
            {
                sub_26036( "C4_HIGH", ref l_U598, 6, 1 );
            }
        }
        else if (sub_63654())
        {
            sub_26036( "C4_LOWER", ref l_U598, 6, 1 );
        }
        l_U635 = 0;
    }
    return 0;
}

int sub_63654()
{
    if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (NOT (sub_45833( l_U598 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_64475()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    unknown uVar5;
    unknown[2] uVar6;
    unknown uVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    iVar4 = 0;
    array(ref uVar6, 2);
    while ((NOT bVar3) AND (NOT bVar2))
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref iVar11 );
        if (iVar4 != 0)
        {
            iVar12 = iVar11 - iVar10;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((sub_24660()) AND (iVar12 >= 1000)))
        {
            bVar3 = true;
        }
        else
        {
            switch (iVar4)
            {
                case 0:
                if (NOT IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                }
                SET_PLAYER_CONTROL( sub_3090(), 0 );
                while (NOT sub_24922())
                {
                    WAIT( 0 );
                }
                CLEAR_SMALL_PRINTS();
                SET_WIDESCREEN_BORDERS( 1 );
                DISPLAY_HUD( 0 );
                REQUEST_CAR_RECORDING( 247 );
                while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 247 )))
                {
                    WAIT( 0 );
                }
                if (NOT (IS_CAR_DEAD( l_U552 )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U552 ))
                    {
                        STOP_PLAYBACK_RECORDED_CAR( l_U552 );
                        START_PLAYBACK_RECORDED_CAR( l_U552, 247 );
                    }
                }
                if (NOT (IS_CAR_DEAD( l_U551 )))
                {
                    GET_CAR_COORDINATES( l_U551, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
                    GET_CAR_HEADING( l_U551, ref l_U560 );
                    SET_CAR_COORDINATES( l_U551, l_U561._fU0, l_U561._fU4, l_U561._fU8 );
                    SET_CAR_HEADING( l_U551, l_U560 );
                    FREEZE_CAR_POSITION( l_U551, 1 );
                    SET_HELI_BLADES_FULL_SPEED( l_U551 );
                    CLOSE_ALL_CAR_DOORS( l_U551 );
                }
                if ((NOT (IS_CAR_DEAD( l_U551 ))) AND (NOT (IS_CHAR_DEAD( l_U548 ))))
                {
                    DETACH_PED( l_U548, 1 );
                    TASK_WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U548, l_U551, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U548, 0, 0 );
                }
                sub_25590();
                BEGIN_CAM_COMMANDS( ref uVar9 );
                CREATE_CAM( 14, ref uVar6[0] );
                SET_CAM_POS( uVar6[0], -1418.02500000, -687.67100000, 125.24040000 );
                SET_CAM_ROT( uVar6[0], -4.14899800, -0.00000000, 24.26487000 );
                CREATE_CAM( 14, ref uVar6[1] );
                SET_CAM_POS( uVar6[1], -1428.39200000, -667.50110000, 124.85690000 );
                SET_CAM_ROT( uVar6[1], -5.57050800, 0.00000000, 3.76116400 );
                CREATE_CAM( 3, ref uVar5 );
                SET_CAM_ACTIVE( uVar6[0], 1 );
                SET_CAM_PROPAGATE( uVar6[0], 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                DO_SCREEN_FADE_IN( 500 );
                GET_GAME_TIMER( ref iVar10 );
                SETTIMERA( 0 );
                iVar4 = 1;
                break;
                case 1:
                if (TIMERA() > 2000)
                {
                    SET_CAM_ACTIVE( uVar6[1], 1 );
                    SET_CAM_PROPAGATE( uVar6[1], 1 );
                    SET_CAM_ACTIVE( uVar5, 1 );
                    SET_CAM_PROPAGATE( uVar5, 1 );
                    SET_CAM_INTERP_STYLE_CORE( uVar5, uVar6[0], uVar6[1], 6000, 0 );
                    sub_26036( "C4_LAND", ref l_U598, 6, 1 );
                    SETTIMERA( 0 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    iVar4 = 2;
                }
                break;
                case 2:
                if (TIMERA() > 5000)
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
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    if (DOES_CAM_EXIST( uVar5 ))
    {
        if (IS_CAM_ACTIVE( uVar5 ))
        {
            SET_CAM_ACTIVE( uVar5, 0 );
            SET_CAM_PROPAGATE( uVar5, 0 );
            DESTROY_CAM( uVar5 );
        }
        if (IS_CAM_ACTIVE( uVar6[0] ))
        {
            SET_CAM_ACTIVE( uVar6[0], 0 );
            SET_CAM_PROPAGATE( uVar6[0], 0 );
            DESTROY_CAM( uVar6[0] );
        }
        if (IS_CAM_ACTIVE( uVar6[1] ))
        {
            SET_CAM_ACTIVE( uVar6[1], 0 );
            SET_CAM_PROPAGATE( uVar6[1], 0 );
            DESTROY_CAM( uVar6[1] );
        }
    }
    END_CAM_COMMANDS( ref uVar9 );
    if (DOES_CHAR_EXIST( l_U549 ))
    {
        DELETE_CHAR( ref l_U549 );
    }
    if (DOES_CHAR_EXIST( l_U550 ))
    {
        DELETE_CHAR( ref l_U550 );
    }
    if (DOES_VEHICLE_EXIST( l_U552 ))
    {
        DELETE_CAR( ref l_U552 );
        PRINTNL();
        PRINTSTRING( "*** DELETED ENEMY CHOPPER 1 ***" );
        PRINTNL();
    }
    if (NOT (IS_CAR_DEAD( l_U551 )))
    {
        FREEZE_CAR_POSITION( l_U551, 0 );
    }
    CLEAR_SMALL_PRINTS();
    return;
}

void sub_66269()
{
    if (l_U558)
    {
        DELETE_CHAR( ref l_U549 );
        DELETE_CAR( ref l_U552 );
        PRINTNL();
        PRINTSTRING( "*** DELETED ENEMY CHOPPER 2 ***" );
        PRINTNL();
        if (IS_CAR_DEAD( l_U552 ))
        {
            CREATE_CAR( -1660661558, -74.33230000, 1956.74000000, 65.87320000, ref l_U552, 1 );
            SET_CAR_HEADING( l_U552, 223.56000000 );
            CHANGE_CAR_COLOUR( l_U552, 1, 120 );
            SET_HELI_BLADES_FULL_SPEED( l_U552 );
            SET_CAR_ENGINE_ON( l_U552, 1, 1 );
            LOCK_CAR_DOORS( l_U552, 6 );
            CREATE_CHAR( 26, -200234085, 0.00000000, 0.00000000, 0.00000000, ref l_U549, 1 );
            WARP_CHAR_INTO_CAR( l_U549, l_U552 );
        }
        REQUEST_CAR_RECORDING( 248 );
        while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 248 )))
        {
            WAIT( 0 );
        }
        if (NOT (IS_CAR_DEAD( l_U552 )))
        {
            START_PLAYBACK_RECORDED_CAR( l_U552, 248 );
            while (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U552 )))
            {
                WAIT( 0 );
            }
            if (NOT (IS_CAR_DEAD( l_U552 )))
            {
                sub_23392( l_U552, 130000 );
            }
            if (NOT (IS_CAR_DEAD( l_U551 )))
            {
                SET_CAR_COORDINATES( l_U551, -99.30000000, 64318, 110 );
                SET_CAR_HEADING( l_U551, 100 );
            }
        }
        STOP_PTFX( l_U647 );
        STOP_PTFX( l_U651[1] );
        l_U669[1]._fU56 = 0;
        l_U669[1]._fU60 = 0;
        l_U669[1]._fU64 = 0;
        l_U669[1]._fU68 = 0;
        l_U669[1]._fU72 = 1;
        l_U669[1]._fU76 = 0;
        l_U730 = 1;
        l_U731 = 2;
        l_U732 = 1;
        l_U733 = 0;
        l_U772 = 0;
        if (DOES_BLIP_EXIST( l_U545 ))
        {
            REMOVE_BLIP( l_U545 );
        }
        l_U752 = 1;
        SET_CAM_BEHIND_PED( sub_6512() );
        l_U556 = 1;
        l_U734 = 2;
        l_U558 = 0;
    }
    return;
}

void sub_66942()
{
    if (NOT (IS_CAR_DEAD( l_U552 )))
    {
        if (NOT l_U772)
        {
            APPLY_FORCE_TO_CAR( l_U552, 0, -l_U592._fU0, l_U592._fU4, l_U592._fU8, l_U569, 0, 1, 1, 1 );
            APPLY_FORCE_TO_CAR( l_U552, 0, l_U592, l_U572, 0, 1, 1, 1 );
            GET_CAR_COORDINATES( l_U552, ref l_U561._fU0, ref l_U561._fU4, ref l_U561._fU8 );
            if (l_U561._fU8 < 10.00000000)
            {
                if (l_U647 > 0)
                {
                    STOP_PTFX( l_U647 );
                }
                if (l_U651[1] > 0)
                {
                    STOP_PTFX( l_U651[1] );
                }
                l_U772 = 1;
            }
        }
        else
        {
            sub_2849();
        }
    }
    return;
}

int sub_67408(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    if (IS_CHAR_IN_CAR( sub_6512(), uParam2 ))
    {
        if (DOES_BLIP_EXIST( (uParam0^) ))
        {
            REMOVE_BLIP( (uParam0^) );
        }
        if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
        {
            if ((uParam1^) == nil)
            {
                uVar12 = {uParam6};
                ConcatString(ref uVar12, "1", 16);
                PRINT_NOW( ref uVar12, 7500, 1 );
                PRINTSTRING( "Go to your vDestination. (DO_BLIPS_CAR)\n" );
            }
            else
            {
                uVar12 = {uParam6};
                ConcatString(ref uVar12, "2", 16);
                PRINT_NOW( ref uVar12, 7500, 1 );
                PRINTSTRING( "Keep going to your vDestination. (DO_BLIPS_CAR)\n" );
            }
            (uParam1^) = sub_67660( uParam3 );
        }
        return 1;
    }
    if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        REMOVE_BLIP( (uParam1^) );
    }
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        ADD_BLIP_FOR_CAR( uParam2, uParam0 );
        if ((uParam1^) == nil)
        {
            (uParam1^) = sub_67782( uParam3 );
            REMOVE_BLIP( (uParam1^) );
            uVar12 = {uParam6};
            ConcatString(ref uVar12, "1", 16);
            PRINT_NOW( ref uVar12, 7500, 1 );
            PRINTSTRING( "Go to your vDestination. (DO_BLIPS_CAR)\n" );
        }
        else
        {
            uVar12 = {uParam6};
            ConcatString(ref uVar12, "3", 16);
            PRINT_NOW( ref uVar12, 7500, 1 );
            PRINTSTRING( "Get in your car. (DO_BLIPS_CAR)\n" );
        }
    }
    return 0;
}

void sub_67660(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;

    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result );
    SET_ROUTE( Result, 1 );
    return Result;
}

void sub_67782(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;

    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result );
    return Result;
}

