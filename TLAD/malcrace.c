void main()
{
    l_U0 = 225;
    l_U1 = 86.00000000;
    l_U2 = 274.00000000;
    l_U3 = 0.92800000;
    l_U4 = 0.01400000;
    l_U5 = 0.93000000;
    l_U6 = -0.02500000;
    l_U7 = -0.11600000;
    l_U8 = 0.90100000;
    l_U9 = 0.39500000;
    l_U10 = 0.55000000;
    l_U11 = 0.86700000;
    l_U12 = 0.39500000;
    l_U13 = 0.55000000;
    l_U14 = 0.88400000;
    l_U15 = 0.88500000;
    l_U16 = 0.86900000;
    l_U17 = 0.87100000;
    l_U18 = 0.31510000;
    l_U19 = 0.47800000;
    l_U20 = 0.00200000;
    l_U21 = 0.01000000;
    l_U22 = 0.83250000;
    l_U23 = 0.79800000;
    l_U24 = 0.80000000;
    l_U25 = 1.23000000;
    l_U26 = 0.83900000;
    l_U27 = 0.80400000;
    l_U28 = 0.31500000;
    l_U29 = 0.47800000;
    l_U30 = 0.86800000;
    l_U31 = 0.83300000;
    l_U32 = 0.39500000;
    l_U33 = 0.55000000;
    l_U37 = 20.00000000;
    l_U42 = 0;
    l_U43 = 0;
    l_U44 = 0;
    l_U45 = 0;
    l_U46 = 0;
    l_U48 = -1;
    l_U160 = 15.00000000;
    l_U161 = 35.00000000;
    l_U162 = 16.00000000;
    l_U163 = 0.00000000;
    l_U169 = 1000.00000000;
    l_U170 = 7500.00000000;
    l_U179 = 1;
    l_U180 = 30.00000000;
    l_U181 = 30.00000000;
    l_U182 = 2.00000000;
    l_U192 = 0.00000000;
    l_U193 = 0.00000000;
    l_U205 = 1;
    l_U206 = 0;
    l_U207 = -1;
    l_U208 = 1;
    l_U209 = -1;
    l_U210 = -1;
    l_U211 = 15.00000000;
    l_U238 = 0;
    l_U239 = -1949702649;
    l_U240 = 2075870698;
    l_U245 = 0.12000000;
    l_U252 = 0;
    l_U253 = 1;
    l_U254 = 3;
    l_U263 = 0;
    l_U264 = 0;
    l_U265 = 0;
    l_U266 = 0;
    l_U267 = 6;
    l_U268 = 7;
    l_U568 = 4;
    l_U571 = 2;
    l_U611 = 1;
    l_U623 = 0;
    l_U624 = 0;
    l_U625 = 0;
    l_U626 = 0;
    l_U630 = 0;
    l_U631 = 0;
    l_U632 = 1;
    l_U634 = 15;
    l_U636 = 20.00000000;
    l_U637 = 20;
    l_U638 = 0;
    l_U640 = 270.00000000;
    l_U641 = {-1.21200000, -0.43300000, 0.50000000};
    l_U645 = 2.50000000;
    l_U646 = 0;
    l_U686 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_738();
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    SET_MISSION_FLAG( 1 );
    sub_2714( l_U634, l_U571 );
    sub_4873( "JIMRACE", 0 );
    l_U446._fU364 = 5;
    sub_5030( ref l_U446 );
    sub_10589( "MALC2AU" );
    sub_10718( 0, sub_1331(), "JOHNNY", 0 );
    sub_10871( ref l_U269 );
    sub_11511();
    while ((NOT sub_15549()) || ((NOT sub_15390()) || (NOT sub_11612())))
    {
        WAIT( 0 );
    }
    SET_CHAR_HEADING( l_U269[l_U268]._fU0, l_U269[l_U268]._fU48 );
    SET_CHAR_COORDINATES( l_U269[l_U268]._fU0, l_U269[l_U268]._fU36._fU0, l_U269[l_U268]._fU36._fU4, l_U269[l_U268]._fU36._fU8 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    sub_17502( ref l_U269 );
    sub_17591( ref l_U269 );
    sub_18144();
    sub_18418( 1, 1 );
    DO_SCREEN_FADE_IN( 300 );
    while (IS_SCREEN_FADING())
    {
        WAIT( 0 );
    }
    SET_PLAYER_CONTROL( sub_1662(), 1 );
    l_U626 = g_U38743;
    l_U264 = 0;
    sub_18550();
    while (true)
    {
        WAIT( 0 );
        sub_18716();
        switch (l_U263)
        {
            case 0:
            if ((l_U624) || (l_U631))
            {
                if ((IS_VEH_DRIVEABLE( l_U269[l_U267]._fU8 )) AND (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 ))))
                {
                    l_U211 = 5.00000000;
                    sub_18857( ref l_U573, 0 );
                }
                else if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
                {
                    TASK_SMART_FLEE_CHAR( l_U269[l_U267]._fU0, sub_1331(), 200.00000000, -1 );
                    SET_CHAR_KEEP_TASK( l_U269[l_U267]._fU0, 1 );
                }
                PRINT_NOW( "raband", 7500, 1 );
                sub_43729();;
            }
            switch (l_U264)
            {
                case 0:
                if (sub_11612())
                {
                    if ((IS_VEH_DRIVEABLE( l_U269[l_U267]._fU8 )) AND (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 ))))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U269[l_U268]._fU0, l_U269[l_U267]._fU0, 10.00000000, 10.00000000, 10.00000000, 0 ))
                        {
                            if (IS_CHAR_ON_ANY_BIKE( l_U269[l_U268]._fU0 ))
                            {
                                sub_23293( "MALC2_FOLO", ref l_U550, 6, 1 );
                                l_U573._fU28 = 30.00000000;
                                sub_44100( ref l_U573, l_U269[l_U267]._fU36, 2 );
                                l_U264 = 1;
                                l_U631 = 1;
                            }
                            else if (NOT l_U624)
                            {
                                PRINT_NOW( "MalBike", 7500, 1 );
                                l_U624 = 1;
                            }
                        }
                    }
                }
                else
                {
                    PRINTSTRING( "IF NOT HAS_MALC_BEEN_CREATED_WITH_BIKE()" );
                    PRINTNL();
                }
                break;
                case 1:
                if (sub_18144())
                {
                    SWITCH_ROADS_OFF( l_U446._fU0._fU0 - 10.00000000, l_U446._fU0._fU4 - 10.00000000, l_U446._fU0._fU8 - 10.00000000, l_U446._fU0._fU0 + 10.00000000, l_U446._fU0._fU4 + 10.00000000, l_U446._fU0._fU8 + 10.00000000 );
                    if (IS_WANTED_LEVEL_GREATER( sub_1662(), 0 ))
                    {
                        PRINT_NOW( "rawant", 7500, 1 );
                    }
                    l_U264 = 2;
                }
                break;
                case 2:
                if (NOT l_U630)
                {
                    sub_44778( ref l_U556 );
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U269[l_U268]._fU0, l_U269[l_U268]._fU36._fU0, l_U269[l_U268]._fU36._fU4, l_U269[l_U268]._fU36._fU8, 200.00000000, 200.00000000, 50.00000000, 0 ))
                    {
                        if (TIMERA() > 1000)
                        {
                            if (sub_45100( ref l_U269 ))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( l_U269[l_U268]._fU0, l_U269[l_U268]._fU36._fU0, l_U269[l_U268]._fU36._fU4, l_U269[l_U268]._fU36._fU8, 100.00000000, 100.00000000, 50.00000000, 0 ))
                                {
                                    l_U630 = 1;
                                }
                                else
                                {
                                    sub_45856( ref l_U269 );
                                    SETTIMERA( 0 );
                                }
                            }
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
                {
                    sub_46138( ref l_U269[l_U267]._fU0 );
                }
                if (IS_WANTED_LEVEL_GREATER( sub_1662(), 0 ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U269[l_U268]._fU0, l_U269[l_U268]._fU36._fU0, l_U269[l_U268]._fU36._fU4, l_U269[l_U268]._fU36._fU8, 100.00000000, 100.00000000, 50.00000000, 1 ))
                    {
                        sub_43729();
                    }
                    else if (DOES_BLIP_EXIST( l_U269[l_U268]._fU16 ))
                    {
                        PRINT_NOW( "rawant", 7500, 1 );
                        REMOVE_BLIP( l_U269[l_U268]._fU16 );
                    }
                    if (DOES_BLIP_EXIST( l_U269[l_U267]._fU16 ))
                    {
                        PRINT_NOW( "rawant", 7500, 1 );
                        REMOVE_BLIP( l_U269[l_U267]._fU16 );
                    }
                }
                else if (NOT l_U624)
                {
                    if (sub_47094( ref l_U550 ))
                    {
                        PRINT( "MalStart", 7500, 1 );
                        l_U624 = 1;
                    }
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U269[l_U268]._fU0, l_U269[l_U268]._fU36._fU0, l_U269[l_U268]._fU36._fU4, l_U269[l_U268]._fU36._fU8, 10.00000000, 10.00000000, 10.00000000, 1 ))
                {
                    sub_47273();
                }
                else if (NOT (DOES_BLIP_EXIST( l_U269[l_U267]._fU16 )))
                {
                    ADD_BLIP_FOR_CHAR( l_U269[l_U267]._fU0, ref l_U269[l_U267]._fU16 );
                    SET_BLIP_AS_FRIENDLY( l_U269[l_U267]._fU16, 1 );
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U269[l_U268]._fU0, l_U269[l_U268]._fU36._fU0, l_U269[l_U268]._fU36._fU4, l_U269[l_U268]._fU36._fU8 + l_U645, l_U645, l_U645, l_U645, 1 ))
                {
                    if (l_U630)
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U269[l_U268]._fU0 ))
                        {
                            if (NOT (IS_CHAR_IN_ANY_HELI( l_U269[l_U268]._fU0 )))
                            {
                                if (sub_47620( ref l_U269[l_U268], 0 ))
                                {
                                    if (sub_48295())
                                    {
                                        if (sub_48453( ref l_U269[l_U268], ref l_U446 ))
                                        {
                                            if (sub_48695( 1, 1 ))
                                            {
                                                SET_PED_DENSITY_MULTIPLIER( 0.20000000 );
                                                SET_CAR_DENSITY_MULTIPLIER( 0.20000000 );
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U269[l_U268]._fU0, ref l_U269[l_U268]._fU8 );
                                                SET_CAR_AS_MISSION_CAR( l_U269[l_U268]._fU8 );
                                                GET_CAR_HEADING( l_U269[l_U268]._fU8, ref l_U269[l_U268]._fU48 );
                                                sub_49100();
                                                if (DOES_BLIP_EXIST( l_U269[l_U267]._fU16 ))
                                                {
                                                    REMOVE_BLIP( l_U269[l_U267]._fU16 );
                                                }
                                                if (DOES_BLIP_EXIST( l_U269[l_U268]._fU16 ))
                                                {
                                                    REMOVE_BLIP( l_U269[l_U268]._fU16 );
                                                }
                                                SET_HIDE_WEAPON_ICON( 1 );
                                                SET_PLAYER_CONTROL( sub_1662(), 0 );
                                                SET_WIDESCREEN_BORDERS( 1 );
                                                if (IS_VEH_DRIVEABLE( l_U269[l_U268]._fU8 ))
                                                {
                                                    SET_BLIP_THROTTLE_RANDOMLY( l_U269[l_U268]._fU8, 1 );
                                                }
                                                CLEAR_AREA_OF_CARS( l_U269[l_U268]._fU36._fU0, l_U269[l_U268]._fU36._fU4, l_U269[l_U268]._fU36._fU8, 2.00000000 );
                                                l_U264 = 5;
                                            }
                                        }
                                        else
                                        {
                                            PRINT_NOW( "LINEUP", 100, 1 );
                                        }
                                    }
                                }
                                else
                                {
                                    PRINT_NOW( "RNEECar", 100, 1 );
                                }
                            }
                        }
                    }
                }
                if (IS_CHAR_IN_ANY_CAR( l_U269[l_U268]._fU0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U269[l_U268]._fU0, ref l_U269[l_U268]._fU8 );
                    if (HAS_CAR_BEEN_RESPRAYED( l_U269[l_U268]._fU8 ))
                    {
                        ;
                    }
                }
                sub_49607( ref l_U269 );
                break;
                case 5:
                sub_50305();
                break;
                case 6:
                if (sub_54588( ref l_U568, ref l_U569, ref l_U570, 0, ref l_U269, ref l_U446, ref l_U556 ))
                {
                    if (IS_CHAR_IN_ANY_CAR( l_U269[l_U268]._fU0 ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U269[l_U268]._fU0, ref l_U269[l_U268]._fU8 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U269[l_U268]._fU8 )))
                    {
                        SET_BLIP_THROTTLE_RANDOMLY( l_U269[l_U268]._fU8, 0 );
                        if (HAS_CAR_BEEN_RESPRAYED( l_U269[l_U268]._fU8 ))
                        {
                            ;
                        }
                    }
                    sub_57081( ref l_U269[l_U268], ref l_U446 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U269[l_U268]._fU0, 0 );
                    GET_GAME_TIMER( ref l_U628 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    SET_PLAYER_CAN_DO_DRIVE_BY( sub_1662(), 0 );
                    SET_PLAYER_CONTROL( sub_1662(), 1 );
                    sub_58748( l_U627, (sub_58055( ref l_U269[l_U268], ref l_U269, ref l_U446 )) + 1, 8, 0, l_U446._fU316, 0 );
                    sub_62674( ref l_U269, ref l_U446 );
                    sub_58748( l_U627, (sub_58055( ref l_U269[l_U268], ref l_U269, ref l_U446 )) + 1, 8, 0, l_U446._fU316, 0 );
                    CLEAR_PRINTS();
                    sub_1792();
                    l_U263 = 1;
                }
                else if (NOT l_U686)
                {
                    sub_49995();
                    sub_50068();
                }
                sub_63059( ref l_U269[l_U268], ref l_U446 );
                sub_57081( ref l_U269[l_U268], ref l_U446 );
                SET_WIDESCREEN_BORDERS( 0 );
                SET_SUPPRESS_HEADLIGHT_SWITCH( 1 );
                sub_58748( l_U627, (sub_58055( ref l_U269[l_U268], ref l_U269, ref l_U446 )) + 1, 8, 0, l_U446._fU316, 0 );;
                break;
            }
            break;
            case 1:
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                if (IS_CHAR_IN_ANY_CAR( l_U269[l_U268]._fU0 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U269[l_U268]._fU0, ref l_U736 );
                    if (HAS_CAR_BEEN_RESPRAYED( l_U736 ))
                    {
                        PRINT_NOW( "raband", 7500, 1 );
                        sub_43729();
                    }
                }
            }
            sub_1792();
            sub_50068();
            sub_63942();
            sub_64945( ref l_U556, ref l_U564, ref l_U269[0]._fU0, ref l_U269[1]._fU0, ref l_U269[2]._fU0, ref l_U269[3]._fU0, ref l_U269[4]._fU0, ref l_U269[5]._fU0, ref l_U269[l_U267]._fU0 );
            sub_68552( ref l_U269, ref l_U564 );
            sub_70091( ref l_U269[l_U268], ref l_U269, ref l_U446 );
            sub_70906( ref l_U269[l_U268], ref l_U269, ref l_U446 );
            sub_63059( ref l_U269[l_U268], ref l_U446 );
            if (l_U269[l_U268]._fU84 == 5)
            {
                SETTIMERA( 0 );
                l_U263 = 2;
            }
            else
            {
                sub_71949( ref l_U269 );
            }
            GET_GAME_TIMER( ref l_U627 );
            l_U627 -= l_U628;
            if (sub_47620( ref l_U269[l_U268], 0 ))
            {
                sub_77502( ref l_U269[l_U268], ref l_U269, ref l_U556 );
                sub_79383();
                sub_58748( l_U627, (sub_58055( ref l_U269[l_U268], ref l_U269, ref l_U446 )) + 1, 8, l_U269[l_U268]._fU60 - 1, l_U446._fU316, 0 );
                sub_79805();
                l_U684 = sub_58055( ref l_U269[l_U268], ref l_U269, ref l_U446 );
                l_U685 = sub_58055( ref l_U269[l_U267], ref l_U269, ref l_U446 );
                if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
                {
                    sub_46138( ref l_U269[l_U267]._fU0 );
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U269[l_U268]._fU0, l_U269[l_U267]._fU0, 7.50000000, 7.50000000, 3.00000000, 0 ))
                    {
                        if ((NOT (IS_AMBIENT_SPEECH_PLAYING( l_U269[l_U267]._fU0 ))) AND (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U269[l_U268]._fU0 ))))
                        {
                            if (l_U684 > l_U685)
                            {
                                if (NOT l_U683)
                                {
                                    SAY_AMBIENT_SPEECH( l_U269[l_U267]._fU0, "RR_PASS_FRIEND", 0, 0, 2 );
                                    l_U683 = 1;
                                }
                            }
                            else if (l_U683)
                            {
                                SAY_AMBIENT_SPEECH( l_U269[l_U267]._fU0, "RR_FRIEND_PASS", 0, 0, 2 );
                                l_U683 = 0;
                            }
                        }
                    }
                    else if (l_U684 > l_U685)
                    {
                        l_U683 = 1;
                    }
                    else
                    {
                        l_U683 = 0;
                    }
                }
            }
            else
            {
                sub_1474();
                if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "bkCombatHlp12" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "bkCombatHlp1" )))
                {
                    CLEAR_HELP();
                }
            }
            break;
            case 2:
            sub_80436();
            break;
            case 3: break;
        }
    }
    return;
}

void sub_738()
{
    if (sub_757( l_U634, l_U571 ))
    {
        sub_847( l_U634, l_U571 );
        sub_1311();
        sub_1474();
        sub_1607();
        if (NOT (IS_CHAR_INJURED( sub_1331() )))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_1662(), 1 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1331(), 0 );
            CLEAR_CHAR_TASKS( sub_1331() );
        }
        UNREGISTER_SCRIPT_WITH_AUDIO();
        INCREMENT_INT_STAT_NO_MESSAGE( 55, l_U627 );
        OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
        sub_1607();
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        UNREGISTER_SCRIPT_WITH_AUDIO();
    }
    sub_1792();
    sub_1943();
    sub_2149();
    sub_2375();
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_757(int iParam0, int iParam1)
{
    if (NOT g_U27953._fU4)
    {
        return 0;
    }
    if (NOT (g_U27953._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U27953._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_847(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_757( uParam0, uParam1 )))
    {
        sub_935( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_964();
    if (g_U816)
    {
        sub_1044();
    }
    else
    {
        sub_1173();
    }
    g_U12303 = 0;
    return;
}

void sub_935(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_964()
{
    if (g_U0)
    {
        g_U27953._fU0 = 0;
    }
    else
    {
        g_U27953._fU0 = 1;
    }
    g_U27953._fU4 = 0;
    g_U27953._fU8 = 19;
    g_U27953._fU12 = 0;
    return;
}

void sub_1044()
{
    if (COMPARE_STRING( ref g_U10987, "RIPASS" ))
    {
        StrCopy( ref g_U10987, "", 16 );
        return;
    }
    sub_1090();
    return;
}

void sub_1090()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1173()
{
    if (COMPARE_STRING( ref g_U10987, "RIPASS" ))
    {
        StrCopy( ref g_U10987, "", 16 );
        return;
    }
    sub_1219();
    return;
}

void sub_1219()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_1311()
{
    if (NOT l_U611)
    {
        if (NOT (IS_CHAR_INJURED( sub_1331() )))
        {
            if (HAS_CHAR_GOT_WEAPON( sub_1331(), 1 ))
            {
                REMOVE_WEAPON_FROM_CHAR( sub_1331(), 1 );
                if (l_U612)
                {
                    GIVE_WEAPON_TO_CHAR( sub_1331(), 3, 0, 1 );
                }
                if (l_U613)
                {
                    GIVE_WEAPON_TO_CHAR( sub_1331(), 2, 0, 1 );
                }
            }
        }
    }
    return;
}

void sub_1331()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1474()
{
    int I;

    if (l_U687)
    {
        for ( I = 0; I < 15; I++ )
        {
            if (l_U688[I])
            {
                GIVE_WEAPON_TO_CHAR( sub_1331(), l_U720[I], l_U704[I], 0 );
            }
        }
        if (HAS_CHAR_GOT_WEAPON( sub_1331(), 1 ))
        {
            SET_CURRENT_CHAR_WEAPON( sub_1331(), 1, 1 );
        }
        l_U687 = 0;
    }
    return;
}

void sub_1607()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_1662()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1792()
{
    if (l_U46)
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
    l_U44 = 0;
    l_U43 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_1943()
{
    sub_1792();
    sub_1957();
    return;
}

void sub_1957()
{
    int iVar2;

    if (DOES_CAM_EXIST( l_U47 ))
    {
        BEGIN_CAM_COMMANDS( ref iVar2 );
        if (iVar2 != 1)
        {
            ;
        }
        else
        {
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_PROPAGATE( l_U47, 0 );
            SET_CAM_ACTIVE( l_U47, 0 );
            DESTROY_CAM( l_U47 );
            l_U47 = nil;
            l_U48 = -1;
            l_U60 = 0;
            if (IS_CONTROL_PRESSED( 0, 51 ))
            {
                GET_GAME_TIMER( ref l_U60 );
            }
            else
            {
                l_U60 = 0;
            }
            SET_GAME_CAMERA_CONTROLS_ACTIVE( 1 );
            SET_CINEMATIC_BUTTON_ENABLED( 1 );
        }
        END_CAM_COMMANDS( ref iVar2 );
    }
    return;
}

void sub_2149()
{
    if (DOES_OBJECT_EXIST( l_U256 ))
    {
        DELETE_OBJECT( ref l_U256 );
    }
    SET_SUPPRESS_HEADLIGHT_SWITCH( 0 );
    if (IS_PLAYER_PLAYING( sub_1662() ))
    {
        SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_1331(), 1 );
        sub_2284( "SET_CHAR_CURRENT_WEAPON_VISIBLE(PLAYER_CHAR_ID(), TRUE) \n" );
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_1662(), 1 );
    }
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    SET_HIDE_WEAPON_ICON( 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1775021974 );
    REMOVE_ANIMS( "MISSBIKE_COMBAT" );
    return;
}

void sub_2284(unknown uParam0)
{
    return;
}

void sub_2375()
{
    int I;

    for ( I = 0; I < 6; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U269[I]._fU0 )))
        {
            if (IS_VEH_DRIVEABLE( l_U269[I]._fU8 ))
            {
                CLEAR_CHAR_TASKS( l_U269[I]._fU0 );
                TASK_CAR_DRIVE_WANDER( l_U269[I]._fU0, l_U269[I]._fU8, 30.00000000, 3 );
            }
        }
        if (DOES_BLIP_EXIST( l_U269[I]._fU16 ))
        {
            REMOVE_BLIP( l_U269[I]._fU16 );
        }
    }
    if (DOES_BLIP_EXIST( l_U269[l_U268]._fU24 ))
    {
        REMOVE_BLIP( l_U269[l_U268]._fU24 );
    }
    if (DOES_BLIP_EXIST( l_U269[l_U268]._fU28 ))
    {
        REMOVE_BLIP( l_U269[l_U268]._fU28 );
    }
    DELETE_CHECKPOINT( l_U269[l_U268]._fU32 );
    return;
}

void sub_2714(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U12303)
    {
        sub_935( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_2788( uParam0 );
    if (g_U27953._fU4)
    {
        sub_935( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U27892[uVar4]._fU0 = 1;
        g_U27892[uVar4]._fU4 = 1;
        g_U27892[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U27892[uVar4]._fU0)
    {
        sub_935( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U27953._fU4 = 1;
    g_U27953._fU8 = uParam0;
    g_U27953._fU12 = uParam1;
    sub_3197();
    sub_4033( g_U27892[uVar4]._fU32 );
    g_U27892[uVar4]._fU32 = 0;
    sub_4156( uParam0, uParam1 );
    g_U12303 = 1;
    return;
}

int sub_2788(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_2799( uParam0 )))
    {
        sub_935( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 13;
}

int sub_2799(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 13))
    {
        return 0;
    }
    iVar4 = 16;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_3197()
{
    sub_3206();
    sub_3351( ref g_U10959._fU32 );
    g_U10959._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_3425();
    return;
}

void sub_3206()
{
    CLEAR_BIT( ref g_U10959._fU0, 2 );
    CLEAR_BIT( ref g_U10959._fU0, 3 );
    CLEAR_BIT( ref g_U10959._fU0, 4 );
    CLEAR_BIT( ref g_U10959._fU0, 5 );
    CLEAR_BIT( ref g_U10959._fU0, 6 );
    CLEAR_BIT( ref g_U10959._fU0, 8 );
    CLEAR_BIT( ref g_U10959._fU0, 9 );
    CLEAR_BIT( ref g_U10959._fU0, 10 );
    g_U10959._fU12 = 0;
    return;
}

void sub_3351(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_3425()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_3463( 1, g_U572[I] )) == 0)
        {
            sub_3714( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_3892())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U94._fU404 = 1000;
    }
    g_U94._fU404 = 1000;
    return;
}

int sub_3463(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_3714(int iParam0)
{
    int I;

    if (iParam0 < (g_U572 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U572 - 1); I++ )
        {
            g_U572[I - 1] = {g_U572[I]};
        }
    }
    sub_3799( g_U572 - 1 );
    return;
}

void sub_3799(unknown uParam0)
{
    g_U572[uParam0]._fU0[0] = -1;
    g_U572[uParam0]._fU0[1] = -1;
    g_U572[uParam0]._fU0[2] = -1;
    return;
}

int sub_3892()
{
    int I;

    for ( I = 0; I <= (g_U572 - 1); I++ )
    {
        if ((sub_3463( 4, g_U572[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_4033(int iParam0)
{
    g_U27953._fU16._fU4 += iParam0;
    sub_4063();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_4063()
{
    if (g_U0)
    {
        return;
    }
    if (g_U27953._fU16._fU4 < g_U27953._fU16._fU0)
    {
        return;
    }
    return;
}

void sub_4156(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 13:
        StrCopy( ref cVar4, "BRIAN", 16 );
        iVar8 = 1;
        break;
        case 14:
        StrCopy( ref cVar4, "DAVE", 16 );
        iVar8 = 1;
        break;
        case 15:
        StrCopy( ref cVar4, "MALC", 16 );
        iVar8 = 2;
        break;
        default:
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: Unknown Random Character ID" );
        return;
    }
    ConcatString(ref cVar4, "_", 16);
    if (iParam1 <= 0)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence < 0" );
        return;
    }
    if (iParam1 > iVar8)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence > max sequence" );
        return;
    }
    switch (iParam1)
    {
        case 1:
        ConcatString(ref cVar4, "1", 16);
        break;
        case 2:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 3:
        ConcatString(ref cVar4, "3", 16);
        break;
        default: SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: unknown problem with paramSequence" );
    }
    sub_4686( cVar4 );
    return;
}

void sub_4686(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10987, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U10987 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10987 );
    return;
}

void sub_4873(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4909())
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

int sub_4909()
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

void sub_5030(int iParam0)
{
    iParam0->_fU312 = 0;
    switch (iParam0->_fU364)
    {
        case 0:
        StrCopy( ref iParam0->_fU368, "RR_RC_BS", 32 );
        iParam0->_fU0 = {1033.99000000, 1627.78700000, 15.76540000};
        iParam0->_fU12 = 45;
        sub_5223( iParam0, 964.76400000, 1696.67300000, 16.23630000 );
        sub_5223( iParam0, 988.77110000, 1754.31500000, 18.13960000 );
        sub_5223( iParam0, 1075.96300000, 1745.30000000, 13.72290000 );
        sub_5223( iParam0, 1158.89100000, 1756.09600000, 9.92039900 );
        sub_5223( iParam0, 1262.86500000, 1740.91500000, 14.19160000 );
        sub_5223( iParam0, 1274.46600000, 1655.34600000, 16.66900000 );
        sub_5223( iParam0, 1211.31700000, 1602.73700000, 16.86470000 );
        sub_5223( iParam0, 1242.74000000, 1502.22100000, 16.31270000 );
        sub_5223( iParam0, 1166.26700000, 1495.50700000, 16.76570000 );
        sub_5223( iParam0, 1033.99000000, 1627.78700000, 16.25280000 );
        iParam0->_fU316 = 3;
        iParam0->_fU352 = {1067.78400000, 1601.05500000, 15.61230000};
        iParam0->_fU308 = 15;
        iParam0->_fU336 = {1331.43700000, 1710.24100000, 15.57580000};
        iParam0->_fU348 = 106.07990000;
        break;
        case 1:
        StrCopy( ref iParam0->_fU368, "RR_RC_BB", 32 );
        iParam0->_fU0 = {1357.23100000, 1899.55700000, 4.41730000};
        iParam0->_fU12 = 320;
        sub_5223( iParam0, 1361.60500000, 1904.97500000, 4.57340000 );
        sub_5223( iParam0, 1322.94100000, 1977.62600000, 4.27390000 );
        sub_5223( iParam0, 1184.09300000, 2040.75800000, 1.03460000 );
        sub_5223( iParam0, 1086.45700000, 2023.65600000, 1.48830000 );
        sub_5223( iParam0, 1137.76000000, 2000.92500000, 8.39080100 );
        sub_5223( iParam0, 1073.20600000, 1914.24000000, 13.76000000 );
        sub_5223( iParam0, 1183.05300000, 1862.82000000, 11.18080000 );
        sub_5223( iParam0, 1324.87700000, 1858.75100000, 7.68360000 );
        iParam0->_fU316 = 3;
        iParam0->_fU352 = {1306.58800000, 1834.67800000, 9.02540000};
        iParam0->_fU308 = 15;
        iParam0->_fU336 = {1026.36600000, 1729.88000000, 14.97850000};
        iParam0->_fU348 = 224.72640000;
        break;
        case 2:
        StrCopy( ref iParam0->_fU368, "RR_RC_ST", 32 );
        iParam0->_fU0 = {460.96790000, 1695.84700000, 15.05270000};
        iParam0->_fU12 = 225;
        sub_5223( iParam0, 534.92200000, 1654.93400000, 25.71860000 );
        sub_5223( iParam0, 602.38350000, 1579.19600000, 22.33240000 );
        sub_5223( iParam0, 604.16020000, 1531.39100000, 19.48000000 );
        sub_5223( iParam0, 585.51730000, 1475.35400000, 11.80080000 );
        sub_5223( iParam0, 654.37210000, 1453.48300000, 12.69270000 );
        sub_5223( iParam0, 719.11820000, 1484.09100000, 13.91230000 );
        sub_5223( iParam0, 741.72200000, 1568.41900000, 21.83020000 );
        sub_5223( iParam0, 711.85780000, 1670.14600000, 23.77040000 );
        sub_5223( iParam0, 857.31650000, 1800.20700000, 39.20090000 );
        sub_5223( iParam0, 750.16380000, 1948.18900000, 40.25790000 );
        sub_5223( iParam0, 408.05860000, 1971.38700000, 23.05290000 );
        sub_5223( iParam0, 347.05860000, 1937.38700000, 19.05290000 );
        sub_5223( iParam0, 337.66360000, 1823.25400000, 17.25720000 );
        sub_5223( iParam0, 389.95540000, 1776.12800000, 20.43720000 );
        sub_5223( iParam0, 460.96790000, 1695.84700000, 15.88920000 );
        iParam0->_fU316 = 3;
        iParam0->_fU352 = {400.62520000, 1767.64400000, 20.39760000};
        iParam0->_fU308 = 15;
        iParam0->_fU336 = {726.04780000, 1782.44500000, 38.27910000};
        iParam0->_fU348 = 225;
        break;
        case 3:
        StrCopy( ref iParam0->_fU368, "RR_RC_SS", 32 );
        iParam0->_fU0 = {1586.64000000, 261.05680000, 21.30030000};
        iParam0->_fU12 = 90;
        sub_5223( iParam0, 1446.30800000, 260.12470000, 25.97810000 );
        sub_5223( iParam0, 1421.94400000, 199.09120000, 26.93790000 );
        sub_5223( iParam0, 1360.51500000, 108.94440000, 31.50630000 );
        sub_5223( iParam0, 1316.22200000, 10.66980000, 31.41310000 );
        sub_5223( iParam0, 1313.19300000, -123.49120000, 25.93510000 );
        sub_5223( iParam0, 1335.01600000, -154.68590000, 24.10480000 );
        sub_5223( iParam0, 1338.74000000, -198.90850000, 22.40840000 );
        sub_5223( iParam0, 1225.12600000, -220.57560000, 24.15610000 );
        sub_5223( iParam0, 1191.65300000, -349.30420000, 21.18350000 );
        sub_5223( iParam0, 1314.90100000, -369.45610000, 19.04250000 );
        sub_5223( iParam0, 1379.79300000, -320.75590000, 20.26970000 );
        sub_5223( iParam0, 1394.94900000, -143.61520000, 21.41460000 );
        sub_5223( iParam0, 1494.93200000, 13.99220000, 24.55630000 );
        sub_5223( iParam0, 1623.82200000, 153.51050000, 28.72200000 );
        sub_5223( iParam0, 1702.90900000, 234.58530000, 25.83570000 );
        sub_5223( iParam0, 1586.64000000, 261.05680000, 21.30030000 );
        iParam0->_fU316 = 3;
        iParam0->_fU352 = {1630.56600000, 262.51590000, 22.03290000};
        iParam0->_fU308 = 15;
        iParam0->_fU336 = {1772.38800000, 179.98760000, 20.78910000};
        iParam0->_fU348 = 40.00000000;
        break;
        case 4:
        StrCopy( ref iParam0->_fU368, "RR_RC_HL", 32 );
        iParam0->_fU0 = {-130.48390000, 1544.40800000, 17.47840000};
        iParam0->_fU12 = 270;
        sub_5223( iParam0, -85.62910000, 1544.73300000, 18.07020000 );
        sub_5223( iParam0, -49.06830000, 1369.10400000, 19.94910000 );
        sub_5223( iParam0, -27.18660000, 1285.34600000, 19.92220000 );
        sub_5223( iParam0, -54.96650000, 1201.38400000, 16.37750000 );
        sub_5223( iParam0, -211.86130000, 1173.67700000, 14.30850000 );
        sub_5223( iParam0, -410.15900000, 1173.62500000, 14.76680000 );
        sub_5223( iParam0, -453.75960000, 1039.08900000, 9.50000000 );
        sub_5223( iParam0, -565.48530000, 1011.92700000, 9.23930000 );
        sub_5223( iParam0, -576.63150000, 1231.71400000, 11.83730000 );
        sub_5223( iParam0, -550.28790000, 1439.21500000, 14.70970000 );
        sub_5223( iParam0, -547.84520000, 1566.49900000, 9.65910000 );
        sub_5223( iParam0, -454.17720000, 1522.03200000, 18.39000000 );
        sub_5223( iParam0, -219.92630000, 1497.75600000, 17.97910000 );
        iParam0->_fU316 = 3;
        iParam0->_fU352 = {-168.74080000, 1523.84100000, 17.23480000};
        iParam0->_fU308 = 15;
        iParam0->_fU336 = {-459.10310000, 1513.39200000, 17.72150000};
        iParam0->_fU348 = 180.00000000;
        break;
        case 5:
        StrCopy( ref iParam0->_fU368, "RR_RC_PC", 32 );
        iParam0->_fU0 = {-261.81830000, 1433.14200000, 19.47840000};
        iParam0->_fU12 = 180;
        sub_5223( iParam0, -261.66540000, 1297.51200000, 24.78220000 );
        sub_5223( iParam0, -418.36330000, 1262.98000000, 21.95040000 );
        sub_5223( iParam0, -454.03510000, 1091.12500000, 10.01230000 );
        sub_5223( iParam0, -453.91070000, 968.61360000, 10.00870000 );
        sub_5223( iParam0, -311.45770000, 933.46500000, 15.49330000 );
        sub_5223( iParam0, -121.64190000, 933.45850000, 12.85440000 );
        sub_5223( iParam0, 5.24090000, 933.57970000, 17.76250000 );
        sub_5223( iParam0, 40.15740000, 1125.83000000, 16.78140000 );
        sub_5223( iParam0, 39.20770000, 1358.26400000, 16.35670000 );
        sub_5223( iParam0, 5.23470000, 1525.70200000, 10.88830000 );
        sub_5223( iParam0, -80.01610000, 1668.94700000, 18.65390000 );
        sub_5223( iParam0, -216.91830000, 1704.48300000, 16.03230000 );
        sub_5223( iParam0, -261.96890000, 1581.75900000, 20.46970000 );
        sub_5223( iParam0, -261.81830000, 1433.14200000, 20.47840000 );
        iParam0->_fU316 = 2;
        iParam0->_fU352 = {-266.62780000, 1482.39900000, 19.33160000};
        iParam0->_fU308 = 15;
        iParam0->_fU336 = {-195.30250000, 1647.34900000, 17.71760000};
        iParam0->_fU348 = 56.71580000;
        break;
        case 6:
        StrCopy( ref iParam0->_fU368, "RR_RC_AB", 32 );
        iParam0->_fU0 = {-761.83480000, 1430.99600000, 0.54010000};
        iParam0->_fU12 = 340;
        sub_5223( iParam0, -746.14040000, 1531.05200000, 2.22920000 );
        sub_5223( iParam0, -817.22670000, 1671.11800000, 2.12080000 );
        sub_5223( iParam0, -835.39830000, 1822.09900000, 0.95720000 );
        sub_5223( iParam0, -906.91990000, 1963.77100000, 1.04740000 );
        sub_5223( iParam0, -1002.94300000, 1976.83100000, 0.89080000 );
        sub_5223( iParam0, -1069.29700000, 1892.79200000, 0.94390000 );
        sub_5223( iParam0, -1009.28900000, 1794.78100000, 8.74370000 );
        sub_5223( iParam0, -973.81480000, 1616.72400000, 23.36960000 );
        sub_5223( iParam0, -926.33060000, 1450.40700000, 24.26340000 );
        sub_5223( iParam0, -945.79460000, 1266.26600000, 23.56080000 );
        sub_5223( iParam0, -801.30440000, 1244.55500000, 16.34630000 );
        sub_5223( iParam0, -761.83480000, 1430.99600000, 0.98040000 );
        iParam0->_fU316 = 3;
        iParam0->_fU352 = {-773.21880000, 1245.35700000, 15.65960000};
        iParam0->_fU308 = 15;
        iParam0->_fU336 = {-788.03190000, 1163.00700000, 7.96510000};
        iParam0->_fU348 = 38.20310000;
        break;
        case 7:
        StrCopy( ref iParam0->_fU368, "RR_RC_AI", 32 );
        iParam0->_fU0 = {-1380.67400000, -100.52880000, 5.57280000};
        iParam0->_fU12 = 90.00000000;
        sub_5223( iParam0, -1492.35100000, -100.65950000, 6.91200000 );
        sub_5223( iParam0, -1518.21900000, -205.86770000, 6.97700100 );
        sub_5223( iParam0, -1721.70500000, -368.72230000, 2.34140000 );
        sub_5223( iParam0, -1806.95200000, -343.62410000, 2.51180000 );
        sub_5223( iParam0, -1972.53000000, -349.22100000, 2.58230000 );
        sub_5223( iParam0, -1971.83200000, -479.17470000, 2.46220000 );
        sub_5223( iParam0, -1879.16300000, -498.00530000, 2.42090000 );
        sub_5223( iParam0, -1861.07600000, -628.86240000, 2.25550000 );
        sub_5223( iParam0, -1749.73000000, -628.77400000, 2.30960000 );
        sub_5223( iParam0, -1716.73800000, -507.61710000, 2.32410000 );
        sub_5223( iParam0, -1537.02500000, -509.79770000, 2.34060000 );
        sub_5223( iParam0, -1513.45300000, -341.70040000, 2.32200000 );
        sub_5223( iParam0, -1324.93500000, -363.98150000, 2.30960000 );
        sub_5223( iParam0, -1259.57900000, -285.23540000, 2.29850000 );
        sub_5223( iParam0, -1314.98700000, -202.22580000, 2.59630000 );
        sub_5223( iParam0, -1380.67400000, -100.52880000, 5.94750000 );
        iParam0->_fU316 = 2;
        iParam0->_fU352 = {-1350.18500000, -91.96769000, 5.50610000};
        iParam0->_fU308 = 15;
        iParam0->_fU336 = {-1404.71400000, 1.04530000, 6.02140000};
        iParam0->_fU348 = 261.02660000;
        break;
        case 8:
        StrCopy( ref iParam0->_fU368, "RR_RC_TD", 32 );
        iParam0->_fU0 = {-1279.20000000, 448.38180000, 16.33540000};
        iParam0->_fU12 = 180;
        sub_5223( iParam0, -1283.78800000, 199.82800000, 8.00360000 );
        sub_5223( iParam0, -1355.96400000, -19.97520000, 8.03280000 );
        sub_5223( iParam0, -1316.59800000, -72.18230000, 8.30869900 );
        sub_5223( iParam0, -1245.10500000, -119.39170000, 4.71800000 );
        sub_5223( iParam0, -1223.37800000, 114.37650000, 4.70140000 );
        sub_5223( iParam0, -1174.10700000, 172.79860000, 4.79560000 );
        sub_5223( iParam0, -1162.60800000, 233.43080000, 4.89190000 );
        sub_5223( iParam0, -1119.36500000, 292.12020000, 4.86900000 );
        sub_5223( iParam0, -1119.21900000, 477.28020000, 4.86830000 );
        sub_5223( iParam0, -1165.41400000, 539.90940000, 4.86730000 );
        sub_5223( iParam0, -1178.47600000, 711.48660000, 15.69160000 );
        sub_5223( iParam0, -1271.55400000, 595.48040000, 13.03310000 );
        sub_5223( iParam0, -1279.20000000, 448.38180000, 18.33540000 );
        iParam0->_fU316 = 3;
        iParam0->_fU352 = {-1286.33000000, 475.24090000, 16.56890000};
        iParam0->_fU308 = 30;
        iParam0->_fU336 = {-1411.23800000, 685.18350000, 18.45950000};
        iParam0->_fU348 = 23.50850000;
        break;
        case 9:
        StrCopy( ref iParam0->_fU368, "RR_RC_CT", 32 );
        iParam0->_fU0 = {-1240.10400000, 850.45270000, 18.61590000};
        iParam0->_fU12 = 180;
        sub_5223( iParam0, -1248.20600000, 807.85990000, 19.03920000 );
        sub_5223( iParam0, -1287.89800000, 784.94200000, 18.97750000 );
        sub_5223( iParam0, -1325.05700000, 870.05330000, 19.10830000 );
        sub_5223( iParam0, -1313.23900000, 993.23940000, 19.05840000 );
        sub_5223( iParam0, -1290.62500000, 1023.32300000, 18.82910000 );
        sub_5223( iParam0, -1315.65500000, 1041.64600000, 19.12540000 );
        sub_5223( iParam0, -1327.80100000, 1208.80400000, 16.71710000 );
        sub_5223( iParam0, -1194.69700000, 1259.94400000, 23.81610000 );
        sub_5223( iParam0, -1121.08300000, 1245.72700000, 23.98130000 );
        sub_5223( iParam0, -928.52240000, 1245.87800000, 23.08680000 );
        sub_5223( iParam0, -909.38340000, 1083.87300000, 20.16510000 );
        sub_5223( iParam0, -1002.66000000, 959.41850000, 24.06340000 );
        sub_5223( iParam0, -1146.44300000, 877.97910000, 19.09750000 );
        sub_5223( iParam0, -1240.10400000, 850.45270000, 18.99100000 );
        iParam0->_fU316 = 3;
        iParam0->_fU352 = {-1250.90700000, 898.63120000, 18.46510000};
        iParam0->_fU308 = 15;
        iParam0->_fU336 = {-1453.34500000, 762.96260000, 22.13470000};
        iParam0->_fU348 = 189.87210000;
        break;
        case 10:
        StrCopy( ref iParam0->_fU368, "RR_RC_AC", 32 );
        iParam0->_fU0 = {-1167.77100000, 1717.83900000, 33.63240000};
        iParam0->_fU12 = 90;
        sub_5223( iParam0, -1257.77000000, 1717.70600000, 27.22700000 );
        sub_5223( iParam0, -1280.79900000, 1785.57900000, 19.31720000 );
        sub_5223( iParam0, -1191.34400000, 1801.33300000, 14.64720000 );
        sub_5223( iParam0, -1163.85000000, 1876.47300000, 6.68590000 );
        sub_5223( iParam0, -1291.67700000, 1917.97300000, 6.39860000 );
        sub_5223( iParam0, -1304.92100000, 1852.61800000, 6.47780000 );
        sub_5223( iParam0, -1201.69800000, 1836.80600000, 6.37000000 );
        sub_5223( iParam0, -1093.59100000, 1834.87300000, 1.52090000 );
        sub_5223( iParam0, -1014.45700000, 1967.30800000, 1.48080000 );
        sub_5223( iParam0, -908.87250000, 1966.24400000, 1.04600000 );
        sub_5223( iParam0, -859.59750000, 1824.24200000, 1.78230000 );
        sub_5223( iParam0, -914.60100000, 1686.42500000, 23.23370000 );
        sub_5223( iParam0, -992.79250000, 1589.59100000, 23.87490000 );
        sub_5223( iParam0, -1071.03200000, 1613.92500000, 34.64570000 );
        sub_5223( iParam0, -1095.25500000, 1703.70200000, 34.64910000 );
        iParam0->_fU316 = 3;
        iParam0->_fU352 = {-1136.47500000, 1722.72800000, 33.47990000};
        iParam0->_fU308 = 15;
        iParam0->_fU336 = {-1340.15500000, 1305.32800000, 20.54670000};
        iParam0->_fU348 = 343.87150000;
        break;
        case 11:
        StrCopy( ref iParam0->_fU368, "RR_RC_NW", 32 );
        iParam0->_fU0 = {-1374.33400000, 989.45830000, 18.86360000};
        iParam0->_fU12 = 180;
        sub_5223( iParam0, -1374.39900000, 960.35030000, 19.86240000 );
        sub_5223( iParam0, -1527.06700000, 939.12100000, 26.63530000 );
        sub_5223( iParam0, -1541.16800000, 1075.14600000, 26.70910000 );
        sub_5223( iParam0, -1466.82800000, 1150.16000000, 22.82000000 );
        sub_5223( iParam0, -1440.02500000, 1189.79400000, 24.04710000 );
        sub_5223( iParam0, -1359.20500000, 1302.62900000, 22.74430000 );
        sub_5223( iParam0, -1373.60100000, 1403.79500000, 17.22670000 );
        sub_5223( iParam0, -1467.14100000, 1443.00200000, 13.82010000 );
        sub_5223( iParam0, -1411.93300000, 1548.13600000, 17.68160000 );
        sub_5223( iParam0, -1338.23100000, 1559.51400000, 25.01120000 );
        sub_5223( iParam0, -1277.39000000, 1561.22800000, 26.00780000 );
        sub_5223( iParam0, -1226.72600000, 1490.32000000, 23.16740000 );
        sub_5223( iParam0, -1289.63100000, 1356.11600000, 21.13410000 );
        sub_5223( iParam0, -1283.26600000, 1273.18200000, 21.14680000 );
        sub_5223( iParam0, -1335.03300000, 1202.24700000, 18.12780000 );
        sub_5223( iParam0, -1338.98300000, 1068.75300000, 20.61920000 );
        iParam0->_fU316 = 3;
        iParam0->_fU352 = {-1379.23800000, 1014.24000000, 18.72010000};
        iParam0->_fU308 = 15;
        iParam0->_fU336 = {-1459.81200000, 1141.30900000, 21.97560000};
        iParam0->_fU348 = 3.00000000;
        break;
    }
    return (iParam0^);
}

void sub_5223(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    iParam0->_fU16[iParam0->_fU312] = {uParam1};
    iParam0->_fU312++;
    return;
}

void sub_10589(unknown uParam0)
{
    StrCopy( ref l_U62._fU0, uParam0, 16 );
    sub_10608();
    return;
}

void sub_10608()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U62._fU16[I]._fU0 = nil;
        StrCopy( ref l_U62._fU16[I]._fU4, "", 32 );
        l_U62._fU344[I] = 0;
    }
    return;
}

void sub_10718(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U62._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U62._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_10802( "\n PED NUMBER ", uParam0 );
    sub_10842( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_10802(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_10842(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_10871(unknown uParam0)
{
    int I;

    l_U446._fU320 = 8;
    for ( I = 0; I < 8; I++ )
    {
        (uParam0^)[I]._fU60 = 1;
        (uParam0^)[I]._fU52 = 0;
        (uParam0^)[I]._fU64 = 30.00000000;
        (uParam0^)[I]._fU48 = l_U446._fU12;
        (uParam0^)[I]._fU80 = 11;
    }
    for ( I = 0; I < 4; I++ )
    {
        l_U599[I] = 0;
    }
    (uParam0^)[l_U267]._fU60 = 1;
    (uParam0^)[l_U267]._fU52 = 0;
    (uParam0^)[l_U267]._fU36 = {-326.62960000, 1605.18600000, 19.27820000};
    (uParam0^)[l_U267]._fU48 = 180.00000000;
    (uParam0^)[l_U267]._fU12 = sub_11097( 15 );
    (uParam0^)[l_U267]._fU80 = 11;
    (uParam0^)[l_U268]._fU60 = 1;
    (uParam0^)[l_U268]._fU52 = 0;
    (uParam0^)[l_U268]._fU56 = 1;
    (uParam0^)[l_U268]._fU0 = sub_1331();
    (uParam0^)[l_U268]._fU36 = {-330.37660000, 1605.07000000, 19.30430000};
    (uParam0^)[l_U268]._fU48 = 215.64590000;
    (uParam0^)[l_U268]._fU12 = sub_11454();
    (uParam0^)[l_U268]._fU80 = 11;
    return;
}

int sub_11097(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -359167535;
        case 1: return -570033273;
        case 6: return -408052231;
        case 7: return -408052231;
        case 13: return -408052231;
        case 16: return -408052231;
        case 17: return -255678177;
        case 15: return -1759858085;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -570033273;
}

int sub_11454()
{
    return 301427732;
}

void sub_11511()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( sub_1331() )))
    {
        GET_CHAR_COORDINATES( sub_1331(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        uVar2 = GET_CLOSEST_CAR( uVar3, 2000.00000000, sub_11454(), 22 );
        if (DOES_VEHICLE_EXIST( uVar2 ))
        {
            DELETE_CAR( ref uVar2 );
        }
    }
    return;
}

int sub_11612()
{
    if (sub_11621())
    {
        if (NOT l_U623)
        {
            l_U179 = 0;
            sub_12086( l_U269[l_U267]._fU36, l_U269[l_U267]._fU48, sub_11631( 15 ), sub_11097( 15 ), ref l_U573, 1 );
            l_U269[l_U267]._fU0 = l_U573._fU0;
            l_U269[l_U267]._fU8 = l_U573._fU4;
            ADD_BLIP_FOR_CHAR( l_U269[l_U267]._fU0, ref l_U269[l_U267]._fU16 );
            SET_BLIP_AS_FRIENDLY( l_U269[l_U267]._fU16, 1 );
            SET_CHAR_PROOFS( l_U269[l_U267]._fU0, 0, 0, 0, 0, 0 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U269[l_U267]._fU0, 1 );
            SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U269[l_U267]._fU0, 1 );
            SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U269[l_U267]._fU0, 0 );
            SET_CAR_CAN_BE_VISIBLY_DAMAGED( l_U269[l_U267]._fU8, 0 );
            SET_CHAR_DROWNS_IN_WATER( l_U269[l_U267]._fU0, 0 );
            SET_CHAR_DROWNS_IN_SINKING_VEHICLE( l_U269[l_U267]._fU0, 0 );
            LOCK_CAR_DOORS( l_U269[l_U267]._fU8, 3 );
            sub_10718( 1, l_U269[l_U267]._fU0, "MALC", 0 );
            l_U623 = 1;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_11621()
{
    REQUEST_MODEL( sub_11631( 15 ) );
    REQUEST_MODEL( sub_11097( 15 ) );
    if ((HAS_MODEL_LOADED( sub_11097( 15 ) )) AND (HAS_MODEL_LOADED( sub_11631( 15 ) )))
    {
        return 1;
    }
    return 0;
}

int sub_11631(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_935( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_12086(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7)
{
    unknown uVar10;

    sub_12120( vParam0 + (vector( 0.00000000, 0.00000000, 2.00000000)), uParam3, uParam4, iParam6 );
    uVar10 = sub_13545( vParam0, uParam3, uParam5 );
    WARP_CHAR_INTO_CAR( iParam6->_fU0, uVar10 );
    GIVE_PED_HELMET_WITH_OPTS( iParam6->_fU0, 1 );
    iParam6->_fU4 = uVar10;
    if (NOT bParam7)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
    }
    return;
}

void sub_12120(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_12718( sub_12130( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_12846( iParam5 );
    return;
}

void sub_12130(unknown uParam0)
{
    int Result;

    Result = 0;
    switch ((uParam0^))
    {
        case -159126838:
        case 301427732:
        case -570033273:
        case -408052231:
        case 584879743:
        case 802082487:
        case -359167535:
        case 1439613707:
        case 1737188996:
        case -411638179:
        case -2130437771:
        case -1832534792:
        case -1670328242:
        case 188410296:
        case 1414790133:
        case 630267504:
        case 1719115836:
        case 1914397972:
        case -2138439183:
        case 1215631816:
        case 1706970202:
        case 717510247:
        case 965080042:
        case 693982133:
        case 454735664:
        case 1409362172:
        case 767450539:
        case 1686719296:
        case 1917871822:
        case 422524045:
        Result = 1;
        break;
        case -571009320:
        case 2006142190:
        case -1606187161:
        case -77769032:
        case -618617997:
        case 977480632:
        case -1159156463:
        case 479817841:
        case 226415164:
        case 15972646:
        case -2107556865:
        case -150646512:
        case 690697563:
        case -504027408:
        Result = 2;
        break;
        case -114291515:
        case -891462355:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case 236691815:
        case 1590280898:
        Result = 3;
        break;
    }
    if (Result == 0)
    {
        if (((uParam0^) == (sub_11631( 16 ))) || (((uParam0^) == (sub_11631( 13 ))) || (((uParam0^) == (sub_11631( 7 ))) || (((uParam0^) == (sub_11631( 6 ))) || (((uParam0^) == (sub_11631( 1 ))) || ((uParam0^) == (sub_11631( 0 ))))))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_11631( 17 ))) || ((uParam0^) == (sub_11631( 15 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_12718(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 9;
        break;
        case 2:
        return 8;
        break;
    }
    return 25;
}

void sub_12846(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_12885( iParam0 + 0 );
    if (iVar3 == 1)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 0, 0 );
        SET_CHAR_NEVER_TARGETTED( iParam0->_fU0, 1 );
    }
    else if (iVar3 == 3)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 1, 0 );
    }
    else if (iVar3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_13055( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_13055( iVar3 ) );
    };;;
    SET_CHAR_PROOFS( iParam0->_fU0, 0, 0, 0, 1, 0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam0->_fU0, 1 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
    SET_PED_FALL_OFF_BIKES_WHEN_SHOT( iParam0->_fU0, 0 );
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU92 = 0;
    iParam0->_fU16 = {0, 0, 0};
    iParam0->_fU28 = 18.00000000;
    iParam0->_fU32 = 0;
    iParam0->_fU36 = 4;
    iParam0->_fU40 = 2;
    iParam0->_fU88 = 12;
    iParam0->_fU96 = 5;
    if (iVar3 == 1)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) == 0)
        {
            sub_13342( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_11631( 7 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_11631( 6 ) ))))
        {
            sub_13342( iParam0 );
        }
    }
    return;
}

void sub_12885(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_12130( ref uVar3 );
    }
    return Result;
}

int sub_13055(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 6;
        break;
        case 2:
        return 5;
        break;
    }
    return 22;
}

void sub_13342(int iParam0)
{
    if (l_U179)
    {
        ADD_BLIP_FOR_CHAR( iParam0->_fU0, iParam0 + 100 );
        SET_BLIP_AS_FRIENDLY( iParam0->_fU100, 1 );
        CHANGE_BLIP_PRIORITY( iParam0->_fU100, 0 );
        SET_BLIP_AS_SHORT_RANGE( iParam0->_fU100, 1 );
        CHANGE_BLIP_SCALE( iParam0->_fU100, 0.50000000 );
        CHANGE_BLIP_DISPLAY( iParam0->_fU100, 5 );
    }
    return;
}

void sub_13545(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_13593( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

void sub_13593(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

int sub_15390()
{
    REQUEST_ANIMS( "MISSBIKE_COMBAT" );
    REQUEST_MODEL( 377107 );
    REQUEST_MODEL( 800724201 );
    if ((REQUEST_MISSION_AUDIO_BANK( "EP1_SFX\BIKER_MELEE" )) AND ((HAS_MODEL_LOADED( 800724201 )) AND ((HAS_MODEL_LOADED( 377107 )) AND (HAVE_ANIMS_LOADED( "MISSBIKE_COMBAT" )))))
    {
        return 1;
    }
    return 0;
}

int sub_15549()
{
    int I;

    if (l_U599[0] == 0)
    {
        l_U599[0] = sub_15574( 0 );
    }
    if (l_U599[1] == 0)
    {
        l_U599[1] = sub_15574( 0 );
    }
    if (l_U599[1] != l_U599[0])
    {
        if (l_U599[2] == 0)
        {
            l_U599[2] = sub_15574( 0 );
        }
        if ((l_U599[2] != l_U599[1]) AND (l_U599[2] != l_U599[0]))
        {
            if (l_U599[3] == 0)
            {
                l_U599[3] = sub_15574( 0 );
            }
            if ((l_U599[3] != l_U599[2]) AND ((l_U599[3] != l_U599[1]) AND (l_U599[3] != l_U599[0])))
            {
                for ( I = 0; I < 4; I++ )
                {
                    sub_16251( ref l_U599[I], ref l_U604[I] );
                }
                return 1;
            }
            else
            {
                l_U599[3] = sub_15574( 0 );
            }
        }
        else
        {
            l_U599[2] = sub_15574( 0 );
        }
    }
    else
    {
        l_U599[1] = sub_15574( 0 );
    }
    return 0;
}

void sub_15574(unknown uParam0)
{
    int[24] iVar3;
    int iVar28;

    array(ref iVar3, 24);
    iVar28 = 0;
    switch (uParam0)
    {
        case 0:
        iVar3[0] = -159126838;
        iVar3[1] = 301427732;
        iVar3[2] = -570033273;
        iVar3[3] = -408052231;
        iVar3[4] = 584879743;
        iVar3[5] = 802082487;
        iVar3[6] = -359167535;
        iVar3[7] = -571009320;
        iVar3[8] = 2006142190;
        iVar3[9] = -1606187161;
        iVar3[10] = -618617997;
        iVar3[11] = -114291515;
        iVar3[12] = -891462355;
        iVar3[13] = -1670998136;
        iVar3[14] = -1759858085;
        iVar3[15] = 1265391242;
        iVar3[16] = -255678177;
        iVar3[17] = 788045382;
        iVar3[18] = 1203311498;
        iVar3[19] = -909201658;
        iVar28 = 20;
        break;
        case 1:
        iVar3[0] = -449022887;
        iVar3[1] = 1264386590;
        iVar3[2] = -1685021548;
        iVar3[3] = 723973206;
        iVar3[4] = 1923400478;
        iVar3[5] = -825837129;
        iVar3[6] = -1758379524;
        iVar28 = 7;
        break;
        case 2:
        iVar3[0] = 1821991593;
        iVar3[1] = 418536135;
        iVar3[2] = -1896659641;
        iVar3[3] = 1063483177;
        iVar28 = 4;
        break;
    }
    return iVar3[sub_15965( 0, iVar28 )];
}

void sub_15965(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_16251(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_12130( uParam0 );
    if (iVar4 == 0)
    {
        (uParam1^) = 0;
    }
    else
    {
        (uParam1^) = sub_16290( iVar4, 0 );
    }
    return;
}

void sub_16290(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (sub_16305( uParam0, uParam1, ref iVar4, ref iVar5 )))
    {
        return 1439613707;
    }
    return sub_16759( uParam0, sub_15965( iVar5, iVar5 + iVar4 ) );
}

int sub_16305(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 1:
        switch (uParam1)
        {
            case 0:
            (uParam2^) = 10;
            (uParam3^) = 0;
            break;
            case 1:
            (uParam2^) = 6;
            (uParam3^) = 0;
            break;
            case 2:
            (uParam2^) = 4;
            (uParam3^) = 6;
            break;
        }
        break;
        case 2:
        switch (uParam1)
        {
            case 0:
            (uParam2^) = 9;
            (uParam3^) = 0;
            break;
            case 1:
            (uParam2^) = 6;
            (uParam3^) = 0;
            break;
            case 2:
            (uParam2^) = 3;
            (uParam3^) = 6;
            break;
        }
        break;
        case 3:
        switch (uParam1)
        {
            case 0:
            case 1:
            (uParam2^) = 2;
            (uParam3^) = 0;
            break;
            case 2:
            SCRIPT_ASSERT( "getBikerGangModelDetails - no female models for BIKER_GANG_RUFF_RIDERS" );
            return 0;
            break;
        }
        break;
        default:
        SCRIPT_ASSERT( "getBikerGangModelDetails - BIKER_GANG_TYPE is not a valid gang" );
        return 0;
        break;
    }
    return 1;
}

int sub_16759(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        switch (uParam1)
        {
            case 0: return 1439613707;
            case 1: return 1737188996;
            case 2: return -411638179;
            case 3: return -2130437771;
            case 4: return -1832534792;
            case 5: return -1670328242;
            case 6: return 188410296;
            case 7: return 1414790133;
            case 8: return 630267504;
            case 9: return 1719115836;
        }
        break;
        case 2:
        switch (uParam1)
        {
            case 0: return 977480632;
            case 1: return -1159156463;
            case 2: return 479817841;
            case 3: return 226415164;
            case 4: return 15972646;
            case 5: return -2107556865;
            case 6: return -150646512;
            case 7: return 690697563;
            case 8: return -504027408;
        }
        break;
        case 3:
        switch (uParam1)
        {
            case 0: return 236691815;
            case 1: return 1590280898;
        }
        break;
    }
    SCRIPT_ASSERT( "grabSpecificBikerModel - invalid bike or gang passed" );
    return 1439613707;
}

void sub_17502(unknown uParam0)
{
    int I;
    unknown uVar4;

    for ( I = 0; I < 6; I++ )
    {
        uVar4 = sub_15965( 0, 4 );
        (uParam0^)[I]._fU12 = l_U599[uVar4];
        (uParam0^)[I]._fU4 = l_U604[uVar4];
    }
    return;
}

void sub_17591(unknown uParam0)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        (uParam0^)[I]._fU36 = {sub_17627( ref (uParam0^)[I], l_U446, ref I )};
        (uParam0^)[I]._fU48 = l_U446._fU12;
    }
    return;
}

void sub_17627(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41, unknown uParam42, unknown uParam43, unknown uParam44, unknown uParam45, unknown uParam46, unknown uParam47, unknown uParam48, unknown uParam49, unknown uParam50, unknown uParam51, unknown uParam52, unknown uParam53, unknown uParam54, unknown uParam55, unknown uParam56, unknown uParam57, unknown uParam58, unknown uParam59, unknown uParam60, unknown uParam61, unknown uParam62, unknown uParam63, unknown uParam64, unknown uParam65, unknown uParam66, unknown uParam67, unknown uParam68, unknown uParam69, unknown uParam70, unknown uParam71, unknown uParam72, unknown uParam73, unknown uParam74, unknown uParam75, unknown uParam76, unknown uParam77, unknown uParam78, unknown uParam79, unknown uParam80, unknown uParam81, unknown uParam82, unknown uParam83, unknown uParam84, unknown uParam85, unknown uParam86, unknown uParam87, unknown uParam88, unknown uParam89, unknown uParam90, unknown uParam91, unknown uParam92, unknown uParam93, unknown uParam94, unknown uParam95, unknown uParam96, unknown uParam97, unknown uParam98, unknown uParam99, unknown uParam100, unknown uParam101)
{
    int iVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    float fVar111;
    float fVar112;
    float fVar113;
    float fVar114;

    fVar111 = 3.00000000;
    fVar112 = 1.00000000;
    ref iParam0->_fU36->_fU8 = 0.00000000;
    uVar105._fU0 = -1.00000000 * (SIN( uParam1._fU12 + 90.00000000 ));
    uVar105._fU4 = COS( uParam1._fU12 + 90.00000000 );
    uVar108._fU0 = -1.00000000 * (SIN( uParam1._fU12 + 180.00000000 ));
    uVar108._fU4 = COS( uParam1._fU12 + 180.00000000 );
    iVar104 = (uParam101^) / 2;
    if ((iVar104 * 2) == (uParam101^))
    {
        fVar113 = fVar112 + (sub_17827( 0.00000000, 0.70000000 ));
    }
    else
    {
        fVar113 = -fVar112 + (sub_17827( 0.00000000, 0.70000000 ));
    }
    if ((uParam101^) == 7)
    {
        fVar113 = -fVar112 + 0.50000000;
    }
    fVar114 = fVar111 + (sub_17827( -1.00000000, 1.00000000 ));
    fVar114 += (TO_FLOAT( iVar104 )) * (2 * fVar111);
    ref iParam0->_fU36->_fU0 = (fVar113 * uVar105._fU0) + (fVar114 * uVar108._fU0);
    ref iParam0->_fU36->_fU4 = (fVar113 * uVar105._fU4) + (fVar114 * uVar108._fU4);
    iParam0->_fU36 = {iParam0->_fU36 + uParam1._fU0};
    return iParam0->_fU36;
}

void sub_17827(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_FLOAT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

int sub_18144()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        REQUEST_MODEL( l_U599[I] );
    }
    if ((sub_18262( ref l_U604[3] )) AND ((sub_18262( ref l_U604[2] )) AND ((sub_18262( ref l_U604[1] )) AND ((sub_18262( ref l_U604[0] )) AND ((HAS_MODEL_LOADED( l_U599[3] )) AND ((HAS_MODEL_LOADED( l_U599[2] )) AND ((HAS_MODEL_LOADED( l_U599[1] )) AND (HAS_MODEL_LOADED( l_U599[0] )))))))))
    {
        return 1;
    }
    return 0;
}

int sub_18262(unknown uParam0)
{
    if ((uParam0^) != 0)
    {
        REQUEST_MODEL( (uParam0^) );
        if (HAS_MODEL_LOADED( (uParam0^) ))
        {
            return 1;
        }
    }
    else
    {
        REQUEST_MODEL( -740078918 );
        if (HAS_MODEL_LOADED( -740078918 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_18418(boolean bParam0, unknown uParam1)
{
    if ((NOT g_U11093) AND (NOT g_U11094))
    {
        if (bParam0)
        {
            g_U11092 = 1;
        }
        else
        {
            g_U11091 = 1;
        }
        g_U11098 = uParam1;
    }
    return;
}

void sub_18550()
{
    l_U720[0] = 4;
    l_U720[1] = 5;
    l_U720[2] = 7;
    l_U720[3] = 9;
    l_U720[4] = 12;
    l_U720[5] = 13;
    l_U720[6] = 26;
    l_U720[7] = 27;
    l_U720[8] = 28;
    l_U720[9] = 17;
    l_U720[10] = 16;
    l_U720[11] = 14;
    l_U720[12] = 15;
    l_U720[13] = 11;
    l_U720[14] = 22;
    return;
}

void sub_18716()
{
    return;
}

void sub_18857(int iParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        if (iParam0->_fU92 > 0)
        {
            sub_18904( iParam0->_fU92 );
            iParam0->_fU92 = 0;
        }
        if (DOES_BLIP_EXIST( iParam0->_fU100 ))
        {
            REMOVE_BLIP( iParam0->_fU100 );
        }
        return;
    }
    if (iParam0->_fU36 != 0)
    {
        if ((sub_19299( iParam0 )) == 2)
        {
            return;
        }
        sub_22983( iParam0 );
        if (iParam0->_fU36 != 0)
        {
            sub_25843( iParam0 );
        }
        if (sub_22395( iParam0, 1 ))
        {
            sub_30669( iParam0 + 0, 0 );
        }
        else
        {
            sub_30669( iParam0 + 0, 1 );
        }
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            if (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))
            {
                uVar4 = nil;
                STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
                if (NOT (IS_CAR_DEAD( uVar4 )))
                {
                    if ((NOT (IS_CAR_IN_AIR_PROPER( uVar4 ))) AND (IS_CAR_UPSIDEDOWN( uVar4 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
                    }
                }
            }
        }
    }
    switch (iParam0->_fU36)
    {
        case 2:
        iVar5 = sub_30960( iParam0 );
        if (iVar5 == 1)
        {
            if (sub_22395( iParam0, 32 ))
            {
                sub_31931( iParam0, 3 );
            }
            else if (sub_22395( iParam0, 64 ))
            {
                if (sub_22395( iParam0, 1 ))
                {
                    sub_31931( iParam0, 5 );
                }
                else
                {
                    sub_31931( iParam0, 4 );
                }
            }
        }
        else if (iVar5 == 2)
        {
            ;
        }
        else if ((sub_32032( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33271( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34439( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34553( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34674( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34974( iParam0 )) != 0)
        {
            ;
        };;;;;;;;
        break;
        case 3:
        if ((sub_35330( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_32032( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33271( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34439( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34553( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 1:
        if ((g_U10958 != 0) || (g_U10956 != 0))
        {
            if ((sub_22503( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_35589( iParam0 )) != 0)
            {
                ;
            }
        }
        else if ((sub_35746( iParam0 )) != 0)
        {
            ;
        }
        break;
        case 4:
        if ((sub_22503( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_32032( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33271( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34439( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34553( iParam0 )) != 0)
        {
            ;
        };;;;;
        break;
        case 5:
        if ((sub_31057( iParam0 )) > 30.00000000)
        {
            sub_42966( iParam0 );
        }
        else if ((sub_35589( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_22317( iParam0, 1, 0 )) != 0)
        {
            ;
        };;;
        break;
        default: break;
    }
    if (NOT bParam1)
    {
        sub_43051( iParam0 );
    }
    return;
}

void sub_18904(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_18915( uParam0 );
    if (iVar3 == -1)
    {
        return;
    }
    if (NOT g_U38937[iVar3]._fU4)
    {
        PRINTSTRING( "Recurring_Lost_Killed: marked as killed but wasn't in use: " );
        PRINTINT( iVar3 );
        PRINTNL();
        return;
    }
    g_U38937[iVar3]._fU0 = 0;
    return;
}

int sub_18915(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = 0;
    Result = 0;
    for ( Result = 0; Result < 13; Result++ )
    {
        if ((g_U38937[Result]._fU4) || (g_U38937[Result]._fU0))
        {
            iVar3++;
            if (iVar3 == iParam0)
            {
                return Result;
            }
        }
    }
    SCRIPT_ASSERT( "Get_Recurring_Lost_ArrayPos: Run out of alive Recurring Lost characters" );
    return -1;
}

int sub_19299(int iParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_1331() )) || (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar3 );
    GET_CAR_CHAR_IS_USING( sub_1331(), ref iVar4 );
    GET_DRIVER_OF_CAR( iVar3, ref iVar5 );
    if (iVar5 != iParam0->_fU0)
    {
        return 0;
    }
    GET_CAR_DOOR_LOCK_STATUS( iVar3, ref iVar6 );
    if (iVar6 != 1)
    {
        return 0;
    }
    if (iVar4 == iVar3)
    {
        if (NOT (((sub_19442( iVar3 )) == sub_11454()) AND ((sub_12885( iParam0 + 0 )) == 3)))
        {
            if (((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1331() ))) AND (sub_19542( sub_1331() ))) || (((sub_19500( iParam0->_fU0 )) == (sub_11631( 0 ))) || ((sub_12885( iParam0 + 0 )) != 1)))
            {
                return 0;
            }
            else
            {
                GET_CAR_DOOR_LOCK_STATUS( iVar4, ref iVar7 );
                if (iVar7 != 1)
                {
                    return 0;
                }
            }
        }
        if ((sub_12885( iParam0 + 0 )) == 3)
        {
            sub_19661( iParam0->_fU0, "", sub_1331(), 26 );
        }
        else
        {
            sub_19661( sub_1331(), "", iParam0->_fU0, 37 );
        }
        return sub_22317( iParam0, 1, 1 );
    }
    return 0;
}

void sub_19442(unknown uParam0)
{
    unknown Result;

    GET_CAR_MODEL( uParam0, ref Result );
    return Result;
}

void sub_19500(unknown uParam0)
{
    unknown Result;

    GET_CHAR_MODEL( uParam0, ref Result );
    return Result;
}

boolean sub_19542(unknown uParam0)
{
    return (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))) AND (IS_CHAR_IN_ANY_CAR( uParam0 ));
}

void sub_19661(int iParam0, unknown uParam1, int iParam2, int iParam3)
{
    boolean Result;
    unknown uVar7;
    int iVar8;

    Result = false;
    if (IS_CHAR_INJURED( iParam0 ))
    {
        PRINTSTRING( "PERFORM_BIKER_GESTURE: ped is injured\n" );
        return 0;
    }
    if (IS_STRING_NULL( uParam1 ))
    {
        Result = true;
    }
    else if (COMPARE_STRING( uParam1, "" ))
    {
        Result = true;
    }
    else if (NOT ((IS_CHAR_SITTING_IN_ANY_CAR( iParam0 )) AND (IS_CHAR_ON_ANY_BIKE( iParam0 ))))
    {
        Result = true;
    }
    else
    {
        uVar7 = sub_20151( sub_19821( iParam0 ) );
        if (NOT (IS_STRING_NULL( uVar7 )))
        {
            if (HAVE_ANIMS_LOADED( uVar7 ))
            {
                if (NOT (IS_CHAR_PLAYING_ANIM( iParam0, uVar7, uParam1 )))
                {
                    TASK_PLAY_ANIM_SECONDARY_IN_CAR( iParam0, uParam1, uVar7, 8.00000000, 0, 0, 0, 0, 0 );
                    Result = true;
                }
            }
        }
    };;;
    if (Result)
    {
        l_U203 = iParam0;
        l_U204 = iParam2;
        if (DOES_CHAR_EXIST( iParam2 ))
        {
            if (NOT (IS_PED_LOOKING_AT_PED( iParam0, iParam2 )))
            {
                TASK_LOOK_AT_CHAR( iParam0, iParam2, sub_15965( 2000, 5500 ), 0 );
            }
            if (iParam0 != sub_1331())
            {
                iVar8 = sub_12885( ref iParam0 );
                if ((iParam2 != sub_1331()) AND (iVar8 == 1))
                {
                    if (NOT (IS_PED_LOOKING_AT_PED( sub_1331(), iParam2 )))
                    {
                        TASK_LOOK_AT_CHAR( sub_1331(), iParam2, sub_15965( 2000, 5500 ), 0 );
                    }
                }
                else if (NOT (IS_PED_LOOKING_AT_PED( sub_1331(), iParam0 )))
                {
                    TASK_LOOK_AT_CHAR( sub_1331(), iParam0, sub_15965( 2000, 5500 ), 0 );
                }
            }
        }
        if (iParam3 != 39)
        {
            if ((IS_CHAR_MODEL( iParam0, sub_11631( 0 ) )) AND (iParam3 == 38))
            {
                if (l_U208)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( iParam0, "E1B1_WA", "BILLY", 1, 1, 2 );
                }
            }
            else
            {
                SAY_AMBIENT_SPEECH( iParam0, sub_20733( iParam3 ), 1, 1, 2 );
            }
            l_U202 = iParam3;
        }
        GET_GAME_TIMER( ref l_U201 );
        switch (iParam3)
        {
            case 35: SET_BIT( ref l_U206, 2 );
            case 36: SET_BIT( ref l_U206, 1 );
            case 24:
            SET_BIT( ref l_U206, 0 );
            break;
            case 38:
            SET_BIT( ref l_U206, 6 );
            break;
        }
    }
    return Result;
}

void sub_19821(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 5;
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar3 );
            Result = sub_19874( uVar3 );
        }
    }
    return Result;
}

void sub_19874(unknown uParam0)
{
    int Result;
    unknown uVar4;

    Result = 5;
    GET_CAR_MODEL( uParam0, ref uVar4 );
    switch (uVar4)
    {
        case -1830458836:
        case 584879743:
        case -1606187161:
        case -618617997:
        case 301427732:
        case 802082487:
        case -359167535:
        case -159126838:
        case -408052231:
        Result = 0;
        break;
        case -570033273:
        case -571009320:
        case 2006142190:
        case -77769032:
        Result = 1;
        break;
        case 1203311498:
        case -909201658:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case -114291515:
        case -891462355:
        Result = 2;
        break;
        case 788045382:
        Result = 4;
        break;
        case -1842748181:
        Result = 3;
        break;
    }
    return Result;
}

void sub_20151(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "MISSBIKE_GESTFREE";
        break;
        case 1:
        Result = "MISSBIKE_GESTCHOP";
        break;
        case 2:
        Result = "MISSBIKE_GESTSPT";
        break;
        case 3:
        Result = "MISSBIKE_GESTSCOT";
        break;
        case 4:
        Result = "MISSBIKE_GESTDIRT";
        break;
    }
    return Result;
}

void sub_20733(unknown uParam0)
{
    string Result;

    Result = nil;
    switch (uParam0)
    {
        case 0:
        Result = "ABUSE_COPS";
        break;
        case 1:
        Result = "ABUSE_GENERIC_BIKER_PED";
        break;
        case 2:
        Result = "ABUSE_HOOKER";
        break;
        case 3:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST";
        break;
        case 4:
        Result = "ANGELS_OF_DEATH_TAUNT_LOST_TRUCE";
        break;
        case 5:
        Result = "BIKE_CRASH_DRIVEN";
        break;
        case 6:
        Result = "BIKE_DRIVE_MORE_CAREFUL";
        break;
        case 7:
        Result = "BIKE_HIT_PED";
        break;
        case 8:
        Result = "BIKE_JUMP";
        break;
        case 9:
        Result = "BIKE_ON_FIRE";
        break;
        case 10:
        Result = "BIKE_OVERTAKE";
        break;
        case 11:
        Result = "BIKER_ACHIEVE_MISSION_OBJECTIVE";
        break;
        case 12:
        Result = "BIKER_CLIPS_ANOTHER_BIKE";
        break;
        case 13:
        Result = "BIKER_CLIPS_ANYTHING";
        break;
        case 14:
        Result = "BIKER_FALLING_BEHIND";
        break;
        case 15:
        Result = "BIKER_FALLS_BEHIND";
        break;
        case 16:
        Result = "BIKER_PASSENGER_SHOOT_GENERIC";
        break;
        case 17:
        Result = "BIKER_PLAYER_FALLS_BEHIND";
        break;
        case 18:
        Result = "COME_UNDER_ATTACK";
        break;
        case 19:
        Result = "FOLLOW_ME_GUYS";
        break;
        case 20:
        Result = "GENERIC_CELEBRATION";
        break;
        case 21:
        Result = "GET_A_MOVE_ON";
        break;
        case 22:
        Result = "GET_IN_COVER";
        break;
        case 23:
        Result = "GET_THE_HELL_OUT_OF_HERE";
        break;
        case 24:
        Result = "GET_WANTED_LEVEL";
        break;
        case 25:
        Result = "GREET_JOHNNY";
        break;
        case 26:
        Result = "JACKED_BY_PLAYER_LIKE";
        break;
        case 27:
        Result = "KEEP_SHOOTING";
        break;
        case 28:
        Result = "LOST_TAUNT_ANGELS_OF_DEATH";
        break;
        case 29:
        Result = "LOST_TAUNT_LOST";
        break;
        case 30:
        Result = "LOST_WHOOP";
        break;
        case 31:
        Result = "NEED_BIKE_NOT_CAR";
        break;
        case 32:
        Result = "NEED_SOME_HELP";
        break;
        case 33:
        Result = "NICE_BIKE";
        break;
        case 34:
        Result = "NICE_SHOOTING_JOHNNY";
        break;
        case 35:
        Result = "POLICE_PURSUIT";
        break;
        case 36:
        Result = "SPOT_POLICE";
        break;
        case 37:
        Result = "JACKING_LOST_BIKE";
        break;
        case 38:
        Result = "WAIT_FOR_ME";
        break;
    }
    return Result;
}

int sub_22317(int iParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    float fVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (IS_CHAR_ON_FOOT( iParam0->_fU0 ))
    {
        return 1;
    }
    else if ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU0 ))) AND (sub_19542( iParam0->_fU0 )))
    {
        return 2;
    }
    else if ((sub_22395( iParam0, 1 )) || (uParam1))
    {
        uVar5 = nil;
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar5 );
        }
        if (IS_VEH_DRIVEABLE( uVar5 ))
        {
            GET_CAR_SPEED( uVar5, ref fVar6 );
            if (fVar6 > 0.20000000)
            {
                return sub_22503( iParam0 );
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 31, ref iVar7 );
            if (iVar7 == 7)
            {
                if (bParam2)
                {
                    uVar8 = {sub_22772( sub_1331(), 1 )};
                    GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( uVar5, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    TASK_LEAVE_CAR_IN_DIRECTION( iParam0->_fU0, uVar5, uVar8._fU0 > 0.00000000 );
                }
                else
                {
                    TASK_LEAVE_ANY_CAR( iParam0->_fU0 );
                }
            }
            return 2;
        }
    };;;
    return 0;
}

boolean sub_22395(int iParam0, unknown uParam1)
{
    return ((uParam1) AND (iParam0->_fU88)) > 0;
}

int sub_22503(int iParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = sub_22514( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        if (IS_CHAR_STOPPED( iParam0->_fU0 ))
        {
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar4 );
            if ((iParam0->_fU96 != 5) || (iVar4 == 7))
            {
                iParam0->_fU96 = 5;
                TASK_CAR_MISSION( iParam0->_fU0, uVar3, 0, iParam0->_fU96, 0.00000000, 2, -1, -1 );
            }
            return 2;
        }
    }
    return 0;
}

void sub_22514(int iParam0)
{
    unknown Result;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref Result );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            GET_DRIVER_OF_CAR( Result, ref iVar4 );
            if (iVar4 == iParam0->_fU0)
            {
                return Result;
            }
        }
    }
    return nil;
}

void sub_22772(unknown uParam0, boolean bParam1)
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

void sub_22983(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (NOT (sub_23014( (iParam0^) )))
        {
            if ((NOT l_U191) AND ((NOT l_U190) AND (sub_23049( (iParam0^) ))))
            {
                if ((NOT sub_23101()) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                {
                    if ((IS_CHAR_ON_ANY_BIKE( sub_1331() )) AND (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1331(), iParam0->_fU0, l_U180, l_U180, l_U180, 0 ))
                        {
                            if (sub_23200())
                            {
                                if (iParam0->_fU0 == l_U189)
                                {
                                    if (NOT (ref iParam0->_fU44->_fU8))
                                    {
                                        sub_23293( (iParam0 + 44) + 12, ref l_U183, 7, 1 );
                                    }
                                    else
                                    {
                                        sub_23293( (iParam0 + 44) + 28, ref l_U183, 7, 1 );
                                    }
                                    sub_24275( iParam0 );
                                    if (NOT (IS_CHAR_INJURED( sub_1331() )))
                                    {
                                        TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_1331(), -2, 0 );
                                        TASK_LOOK_AT_CHAR( sub_1331(), iParam0->_fU0, -2, 128 );
                                    }
                                    l_U166 = 0;
                                }
                                else
                                {
                                    GET_CHAR_COORDINATES( sub_1331(), ref l_U195._fU0, ref l_U195._fU4, ref l_U195._fU8 );
                                    GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U198._fU0, ref l_U198._fU4, ref l_U198._fU8 );
                                    GET_DISTANCE_BETWEEN_COORDS_3D( l_U195._fU0, l_U195._fU4, l_U195._fU8, l_U198._fU0, l_U198._fU4, l_U198._fU8, ref l_U194 );
                                    if (iParam0->_fU0 == l_U189)
                                    {
                                        l_U193 += 1.00000000 * TIMESTEP();
                                        l_U192 = l_U194;
                                    }
                                    else if ((IS_CHAR_INJURED( l_U189 )) || (l_U194 <= l_U192))
                                    {
                                        l_U189 = iParam0->_fU0;
                                        l_U192 = l_U194;
                                        l_U193 = 0.00000000;
                                    }
                                }
                            }
                            else if (NOT sub_24703())
                            {
                                sub_24731();
                            }
                            else if (sub_24788())
                            {
                                sub_24752();
                            }
                            GET_CHAR_COORDINATES( sub_1331(), ref l_U195._fU0, ref l_U195._fU4, ref l_U195._fU8 );
                            GET_CHAR_COORDINATES( iParam0->_fU0, ref l_U198._fU0, ref l_U198._fU4, ref l_U198._fU8 );
                            GET_DISTANCE_BETWEEN_COORDS_3D( l_U195._fU0, l_U195._fU4, l_U195._fU8, l_U198._fU0, l_U198._fU4, l_U198._fU8, ref l_U194 );
                            if (iParam0->_fU0 == l_U189)
                            {
                                l_U193 += 1.00000000 * TIMESTEP();
                                l_U192 = l_U194;
                            }
                            else if ((IS_CHAR_INJURED( l_U189 )) || (l_U194 <= l_U192))
                            {
                                l_U189 = iParam0->_fU0;
                                l_U192 = l_U194;
                                l_U193 = 0.00000000;
                            };;;;
                        }
                        else if (NOT sub_25052())
                        {
                            sub_25260( (iParam0^) );
                        }
                    }
                    else if (NOT sub_25052())
                    {
                        sub_25260( (iParam0^) );
                    }
                }
                else if (NOT sub_25052())
                {
                    sub_25260( (iParam0^) );
                }
            }
            else if (NOT sub_25052())
            {
                sub_25260( (iParam0^) );
            }
        }
        else if (NOT sub_25052())
        {
            if ((NOT (sub_25070( l_U183 ))) || ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1331() ))) || ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 ))) || ((NOT (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 ))) || ((NOT (IS_CHAR_ON_ANY_BIKE( sub_1331() ))) || (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1331(), iParam0->_fU0, l_U181, l_U181, l_U181, 0 ))))))))
            {
                sub_25561( iParam0 );
            }
        }
    }
    else if (sub_23014( (iParam0^) ))
    {
        sub_25575( ref l_U183, 0 );
        sub_25561( iParam0 );
    }
    return;
}

void sub_23014(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU4;
}

void sub_23049(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    return uParam0._fU44._fU0;
}

void sub_23101()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_23200()
{
    if (NOT l_U167)
    {
        if (l_U166)
        {
            return 1;
        }
    }
    return 0;
}

void sub_23293(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_23316( uParam0, ref l_U62._fU0, uParam1, uParam2, uParam3 );
}

void sub_23316(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_23370( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_23370(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_23392( iParam1 )))
    {
        return 0;
    }
    l_U62._fU384 = 0;
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_24072( ref g_U8947, ref l_U62 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_23392(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_2284( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_2284( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_2284( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_24072(int iParam0, int iParam1)
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

void sub_24275(int iParam0)
{
    ref iParam0->_fU44->_fU4 = 1;
    if (ref iParam0->_fU44->_fU8)
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else if (COMPARE_STRING( (iParam0 + 44) + 28, "" ))
    {
        ref iParam0->_fU44->_fU0 = 0;
    }
    else
    {
        ref iParam0->_fU44->_fU8 = 1;
    }
    l_U189 = nil;
    l_U193 = 0.00000000;
    l_U190 = 1;
    return;
}

void sub_24703()
{
    return l_U165;
}

void sub_24731()
{
    l_U165 = 1;
    l_U166 = 0;
    sub_24752();
    return;
}

void sub_24752()
{
    l_U167 = 0;
    return;
}

void sub_24788()
{
    return l_U167;
}

void sub_25052()
{
    int Result;

    Result = 0;
    if (sub_25070( l_U173 ))
    {
        Result = 1;
    }
    return Result;
}

int sub_25070(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_2284( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_2284( "\n speech is not playing" );
    }
    return 0;
}

void sub_25260(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25)
{
    if (uParam0._fU0 == l_U189)
    {
        l_U189 = nil;
        l_U193 = 0.00000000;
        sub_25301();
    }
    return;
}

void sub_25301()
{
    if (l_U164 == 1)
    {
        l_U168 = 0.00000000;
        l_U167 = 1;
        l_U166 = 0;
    }
    return;
}

void sub_25561(int iParam0)
{
    sub_25575( ref l_U183, 1 );
    ref iParam0->_fU44->_fU4 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        TASK_CLEAR_LOOK_AT( iParam0->_fU0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_1331() )))
    {
        TASK_CLEAR_LOOK_AT( sub_1331() );
    }
    l_U190 = 0;
    return;
}

void sub_25575(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_25843(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    int iVar15;
    boolean bVar16;
    boolean bVar17;
    boolean bVar18;
    int iVar19;
    int iVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;
    int iVar24;
    unknown uVar25;
    float fVar26;

    GET_GAME_TIMER( ref iVar4 );
    if ((iParam0->_fU36 == 0) || (NOT l_U205))
    {
        return;
    }
    if ((sub_23101()) AND (sub_23014( (iParam0^) )))
    {
        if ((IS_VEH_DRIVEABLE( iParam0->_fU4 )) AND (NOT (IS_CHAR_INJURED( iParam0->_fU0 ))))
        {
            if ((IS_CHAR_ON_ANY_BIKE( sub_1331() )) AND ((IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )) AND (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))))
            {
                GET_CHAR_COORDINATES( sub_1331(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                GET_OFFSET_FROM_CAR_GIVEN_WORLD_COORDS( iParam0->_fU4, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                if (IS_SCRIPTED_SPEECH_PLAYING( iParam0->_fU0 ))
                {
                    if ((l_U204 != sub_1331()) || (l_U203 != iParam0->_fU0))
                    {
                        sub_19661( iParam0->_fU0, sub_26117( uVar8._fU0 < 0.00000000, sub_19874( iParam0->_fU4 ) ), sub_1331(), 39 );
                        PRINTSTRING( "PERFORM_BIKER_GESTURE(biker.ped, GET_RANDOM_SPEECH_ANIM(TRUE), PLAYER_CHAR_ID())\n" );
                    }
                    return;
                }
                else if (IS_SCRIPTED_SPEECH_PLAYING( sub_1331() ))
                {
                    l_U203 = sub_1331();
                    l_U204 = iParam0->_fU0;
                }
            }
        }
    }
    if (((iVar4 - l_U201) < 33) || ((sub_23014( (iParam0^) )) || (sub_23101())))
    {
        return;
    }
    if (l_U201 <= 0)
    {
        l_U201 = iVar4;
        return;
    }
    if ((IS_VEH_DRIVEABLE( iParam0->_fU4 )) AND (NOT (IS_CHAR_INJURED( iParam0->_fU0 ))))
    {
        iVar11 = nil;
        uVar12 = nil;
        uVar13 = nil;
        uVar14 = nil;
        iVar15 = 39;
        bVar16 = false;
        bVar17 = false;
        bVar18 = false;
        iVar19 = 10000;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar20 );
        if (iVar20 == iParam0->_fU0)
        {
            uVar12 = iParam0->_fU4;
            bVar16 = true;
        }
        else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar12 );
        }
        if (NOT (IS_CAR_DEAD( uVar12 )))
        {
            if (sub_26770( uVar12 ))
            {
                fVar21 = sub_26813( iParam0 );
                if ((iParam0->_fU0 != l_U203) AND (((fVar21 < 15) || ((fVar21 < 19) AND (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))) AND (NOT (sub_23014( (iParam0^) )))))
                {
                    GET_CAR_PITCH( uVar12, ref uVar22 );
                    if ((((sub_15965( 0, 10 )) == 0) || (iParam0->_fU36 != 1)) AND (l_U42))
                    {
                        l_U42 = 0;
                        iVar15 = 17;
                        iVar11 = sub_1331();
                    }
                    else if ((NOT (IS_BIT_SET( l_U206, 6 ))) AND (((sub_12885( iParam0 + 0 )) == 1) AND ((iParam0->_fU36 == 2) AND (sub_27007( iParam0 )))))
                    {
                        iVar15 = 38;
                        uVar13 = sub_27121( bVar16 );
                        iVar11 = sub_1331();
                    }
                    else if ((sub_27209( 8 )) AND (((ABSF( uVar22 )) < 20.00000000) AND (IS_CAR_IN_AIR_PROPER( uVar12 ))))
                    {
                        uVar13 = sub_27463( bVar16 );
                        iVar15 = 8;
                    }
                    else if ((sub_27209( 12 )) AND (HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, sub_1331() )))
                    {
                        uVar13 = sub_27121( bVar16 );
                        iVar11 = sub_1331();
                        iVar15 = 12;
                        bVar17 = true;
                    }
                    else if ((sub_27209( 13 )) AND ((IS_PED_RAGDOLL( iParam0->_fU0 )) || (HAS_CAR_BEEN_DAMAGED_BY_CHAR( uVar12, 0 ))))
                    {
                        uVar13 = sub_27121( bVar16 );
                        iVar11 = nil;
                        iVar15 = 13;
                        bVar17 = true;
                    }
                    else if ((sub_27209( 20 )) AND ((IS_BIT_SET( l_U206, 7 )) AND ((NOT (IS_PLAYER_PRESSING_HORN( sub_1662() ))) AND ((sub_12885( iParam0 + 0 )) == 1))))
                    {
                        if (bVar16)
                        {
                            bVar18 = true;
                            uVar13 = sub_27463( bVar16 );
                        }
                        iVar15 = 20;
                        iVar11 = sub_1331();
                        CLEAR_BIT( ref l_U206, 7 );
                    }
                    else if (((sub_12885( iParam0 + 0 )) == 1) AND ((sub_27209( 24 )) AND ((NOT (IS_BIT_SET( l_U206, 0 ))) AND (IS_WANTED_LEVEL_GREATER( sub_1662(), 0 )))))
                    {
                        iVar15 = 24;
                        iVar11 = sub_1331();
                    }
                    else if (((sub_12885( iParam0 + 0 )) == 1) AND ((sub_27209( 30 )) AND ((IS_BIT_SET( l_U206, 0 )) AND (NOT (IS_WANTED_LEVEL_GREATER( sub_1662(), 0 ))))))
                    {
                        iVar15 = 30;
                    }
                    else
                    {
                        uVar5 = {sub_22772( sub_1331(), 1 )};
                        uVar23 = nil;
                        if (iVar15 == 39)
                        {
                            if (IS_BIT_SET( l_U206, 3 ))
                            {
                                if (NOT (IS_CHAR_ON_ANY_BIKE( sub_1331() )))
                                {
                                    if (IS_PED_RAGDOLL( sub_1331() ))
                                    {
                                        if (sub_27209( 20 ))
                                        {
                                            iVar15 = 20;
                                            iVar11 = sub_1331();
                                            if ((sub_15965( 0, 2 )) == 0)
                                            {
                                                uVar13 = sub_27463( bVar16 );
                                            }
                                            else
                                            {
                                                uVar13 = sub_27121( bVar16 );
                                            }
                                            CLEAR_BIT( ref l_U206, 3 );
                                        }
                                    }
                                    else if (IS_CHAR_ON_FOOT( sub_1331() ))
                                    {
                                        CLEAR_BIT( ref l_U206, 3 );
                                        CLEAR_BIT( ref l_U206, 4 );
                                    }
                                }
                            }
                            else if (IS_CHAR_ON_ANY_BIKE( sub_1331() ))
                            {
                                if (((sub_12885( iParam0 + 0 )) == 1) AND ((NOT (IS_BIT_SET( l_U206, 4 ))) AND (sub_27209( 33 ))))
                                {
                                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1331(), ref uVar23 );
                                    if (DOES_VEHICLE_EXIST( uVar23 ))
                                    {
                                        iVar24 = sub_19874( uVar23 );
                                        if (((iVar24 == 0) || (iVar24 == 1)) AND (NOT (IS_CAR_A_MISSION_CAR( uVar23 ))))
                                        {
                                            iVar15 = 33;
                                            SET_BIT( ref l_U206, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U206, 3 );
                            }
                            else if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1331() ))
                            {
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1331(), ref uVar23 );
                                if (DOES_VEHICLE_EXIST( uVar23 ))
                                {
                                    if (((sub_12885( iParam0 + 0 )) == 1) AND ((NOT (IS_BIT_SET( l_U206, 4 ))) AND (sub_27209( 31 ))))
                                    {
                                        if (NOT (IS_CAR_A_MISSION_CAR( uVar23 )))
                                        {
                                            iVar15 = 31;
                                            SET_BIT( ref l_U206, 4 );
                                        }
                                    }
                                }
                                SET_BIT( ref l_U206, 3 );
                            }
                            else if ((NOT (IS_PED_RAGDOLL( sub_1331() ))) AND (IS_CHAR_ON_FOOT( sub_1331() )))
                            {
                                CLEAR_BIT( ref l_U206, 3 );
                                CLEAR_BIT( ref l_U206, 4 );
                            };;;
                            uVar23 = nil;;
                        }
                        if (iVar15 == 39)
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
                            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
                            END_CHAR_SEARCH_CRITERIA();
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((iVar11 == l_U204) || (IS_CHAR_INJURED( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else if ((NOT (IS_WANTED_LEVEL_GREATER( sub_1662(), 0 ))) AND (sub_27209( 0 )))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 0;
                                        bVar18 = (sub_15965( 0, 10 )) == 0;
                                    }
                                }
                                else if ((NOT (IS_BIT_SET( l_U206, 1 ))) AND ((IS_WANTED_LEVEL_GREATER( sub_1662(), 0 )) AND (sub_27209( 36 ))))
                                {
                                    if (IS_CHAR_ON_SCREEN( iVar11 ))
                                    {
                                        uVar13 = nil;
                                        iVar15 = 36;
                                    }
                                }
                                else if ((sub_27209( 23 )) AND (IS_WANTED_LEVEL_GREATER( sub_1662(), 2 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 23;
                                };;;;
                            }
                        }
                        if ((iVar15 == 39) AND (sub_27209( 2 )))
                        {
                            BEGIN_CHAR_SEARCH_CRITERIA();
                            SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 1 );
                            END_CHAR_SEARCH_CRITERIA();
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (GET_CLOSEST_CHAR( uVar5._fU0, uVar5._fU4, uVar5._fU8, 25.00000000, 1, 1, ref iVar11 ))
                            {
                                if ((iVar11 == l_U204) || (IS_CHAR_INJURED( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else if ((IS_CHAR_MODEL( iVar11, 996267216 )) || (IS_CHAR_MODEL( iVar11, 552542187 )))
                                {
                                    uVar13 = nil;
                                    iVar15 = 2;
                                    bVar18 = (sub_15965( 0, 100 )) == 0;
                                }
                                else
                                {
                                    iVar11 = nil;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((NOT (IS_BIT_SET( l_U206, 2 ))) AND (IS_WANTED_LEVEL_GREATER( sub_1662(), 0 )))
                            {
                                if (IS_COP_VEHICLE_IN_AREA_3D_NO_SAVE( uVar5._fU0 - 25.00000000, uVar5._fU4 - 25.00000000, uVar5._fU8 - 25.00000000, uVar5._fU0 + 25.00000000, uVar5._fU4 + 25.00000000, uVar5._fU8 + 25.00000000 ))
                                {
                                    iVar15 = 35;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            uVar23 = sub_29352( uVar5, 25.00000000, 4 );
                            if (IS_VEH_DRIVEABLE( uVar23 ))
                            {
                                GET_DRIVER_OF_CAR( uVar23, ref iVar11 );
                                if ((iVar11 == l_U204) || (IS_CHAR_INJURED( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else if (NOT (IS_CHAR_ON_SCREEN( iVar11 )))
                                {
                                    iVar11 = nil;
                                }
                                else
                                {
                                    uVar13 = nil;
                                    uVar25 = sub_12885( ref iVar11 );
                                    switch (uVar25)
                                    {
                                        case 2:
                                        if (((sub_12885( iParam0 + 0 )) == 1) AND (sub_27209( 28 )))
                                        {
                                            iVar15 = 28;
                                        }
                                        break;
                                        case 1:
                                        if ((sub_12885( iParam0 + 0 )) == 2)
                                        {
                                            if ((sub_27209( 4 )) AND (sub_27209( 3 )))
                                            {
                                                if (g_U15728[13])
                                                {
                                                    iVar15 = 4;
                                                }
                                                else
                                                {
                                                    iVar15 = 3;
                                                }
                                            }
                                        }
                                        else if ((sub_12885( iParam0 + 0 )) == 1)
                                        {
                                            if (sub_27209( 30 ))
                                            {
                                                uVar13 = sub_29953( bVar16 );
                                                iVar15 = 30;
                                            }
                                        }
                                        break;
                                        default:
                                        if (sub_27209( 1 ))
                                        {
                                            iVar15 = 1;
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        GET_CHAR_SPEED( sub_1331(), ref fVar26 );
                        if (iVar15 == 39)
                        {
                            if ((fVar26 < 5) AND ((sub_12885( iParam0 + 0 )) == 1))
                            {
                                if ((IS_WANTED_LEVEL_GREATER( sub_1662(), 0 )) AND (sub_27209( 23 )))
                                {
                                    iVar15 = 23;
                                }
                                else if (sub_27209( 21 ))
                                {
                                    iVar15 = 21;
                                }
                            }
                        }
                        if (iVar15 == 39)
                        {
                            if ((fVar26 > 30) AND (NOT (IS_BIT_SET( l_U206, 5 ))))
                            {
                                if (((sub_12885( iParam0 + 0 )) == 1) AND (sub_27209( 30 )))
                                {
                                    iVar15 = 30;
                                }
                                else if (sub_27209( 20 ))
                                {
                                    iVar15 = 20;
                                }
                            }
                        }
                    };;;;;;;;
                    if (bVar18)
                    {
                        SOUND_CAR_HORN( uVar12, sub_15965( 1500, 2500 ) );
                    }
                    if (bVar17)
                    {
                        CLEAR_CAR_LAST_DAMAGE_ENTITY( uVar12 );
                    }
                    if ((NOT (IS_STRING_NULL( uVar13 ))) || (iVar15 != 39))
                    {
                        if (sub_19661( iParam0->_fU0, uVar13, iVar11, iVar15 ))
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    if ((IS_BIT_SET( l_U206, 6 )) AND ((iVar4 - l_U201) > 10000))
    {
        CLEAR_BIT( ref l_U206, 6 );
    }
    if ((NOT (IS_BIT_SET( l_U206, 7 ))) AND (IS_PLAYER_PRESSING_HORN( sub_1662() )))
    {
        SET_BIT( ref l_U206, 7 );
    }
    if ((l_U203 != nil) AND ((iVar4 - l_U201) > 28000))
    {
        if ((sub_12885( iParam0 + 0 )) == 1)
        {
            sub_19661( iParam0->_fU0, "", sub_1331(), 30 );
        }
        else
        {
            sub_19661( iParam0->_fU0, "", sub_1331(), 20 );
        }
        l_U203 = iParam0->_fU0;
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_1662(), 0 )))
        {
            CLEAR_BIT( ref l_U206, 0 );
            CLEAR_BIT( ref l_U206, 2 );
            CLEAR_BIT( ref l_U206, 1 );
        }
        CLEAR_BIT( ref l_U206, 7 );
    }
    return;
}

void sub_26117(boolean bParam0, int iParam1)
{
    string Result;

    Result = nil;
    if ((iParam1 == 0) || (iParam1 == 1))
    {
        if (bParam0)
        {
            switch (sub_15965( 0, 3 ))
            {
                case 0:
                Result = "chat_left_e";
                break;
                case 1:
                Result = "chat_left_f";
                break;
                default:
                Result = "chat_left_g";
                break;
            }
        }
        else
        {
            switch (sub_15965( 0, 3 ))
            {
                case 0:
                Result = "chat_right_e";
                break;
                case 1:
                Result = "chat_right_f";
                break;
                default:
                Result = "chat_right_g";
                break;
            }
        }
        PRINTSTRING( "Anim used: " );
        PRINTSTRING( Result );
        PRINTNL();
    }
    return Result;
}

void sub_26770(unknown uParam0)
{
    unknown uVar3;

    GET_CAR_MODEL( uParam0, ref uVar3 );
    return IS_THIS_MODEL_A_BIKE( uVar3 );
}

void sub_26813(int iParam0)
{
    return sub_26833( iParam0->_fU0, sub_1331(), 1 );
}

void sub_26833(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_22772( uParam0, uParam2 ), sub_22772( uParam1, uParam2 ) );
}

void sub_27007(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( iParam0->_fU4, 0, 11, 0, ref uVar3, ref uVar4, ref uVar5 );
    return LOCATE_CHAR_IN_CAR_3D( sub_1331(), uVar3, uVar4, uVar5, 10, 10, 10, 0 );
}

void sub_27121(boolean bParam0)
{
    string Result;

    Result = nil;
    if (bParam0)
    {
        Result = "gest_damn";
    }
    return Result;
}

boolean sub_27209(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 10000;
    switch (iParam0)
    {
        case 20:
        iVar3 = 2500;
        break;
        case 8:
        iVar3 = 4500;
        break;
        case 6:
        iVar3 = 2500;
        break;
        case 5:
        iVar3 = 1000;
        break;
        case 33:
        iVar3 = 2000;
        break;
        case 31:
        iVar3 = 2000;
        break;
        case 0:
        iVar3 = 18000;
        break;
        case 1:
        iVar3 = 19000;
        break;
        case 21:
        iVar3 = 25000;
        break;
        case 38:
        iVar3 = 2000;
        break;
    }
    GET_GAME_TIMER( ref iVar4 );
    if (iParam0 == 39)
    {
        return 0;
    }
    return (iVar4 - l_U201) > iVar3;
}

void sub_27463(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref uVar3 );
        switch (uVar3)
        {
            case 1:
            Result = "gest_thumbsup";
            break;
            default:
            Result = "gest_thumbsup";
            break;
        }
    }
    else
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 7, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "p_gest_celeb_a";
            break;
            case 1:
            Result = "p_gest_celeb_b";
            break;
            case 2:
            Result = "p_gest_celeb_c";
            break;
            case 3:
            Result = "p_gest_celeb_d";
            break;
            case 5:
            Result = "p_gest_rockin";
            break;
            case 6:
            Result = "p_gest_yes";
            break;
            default:
            Result = "p_gest_yes";
            break;
        }
    }
    return Result;
}

void sub_29352(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;
    int[22] iVar8;
    int I;

    Result = nil;
    array(ref iVar8, 22);
    iVar8[0] = -408052231;
    iVar8[1] = 584879743;
    iVar8[2] = 802082487;
    iVar8[3] = -570033273;
    iVar8[4] = 301427732;
    iVar8[5] = -159126838;
    iVar8[6] = -359167535;
    iVar8[7] = -571009320;
    iVar8[8] = 2006142190;
    iVar8[9] = -1606187161;
    iVar8[10] = -618617997;
    iVar8[11] = -77769032;
    iVar8[12] = 1265391242;
    iVar8[13] = -255678177;
    iVar8[14] = -1670998136;
    iVar8[15] = -1759858085;
    iVar8[16] = -114291515;
    iVar8[17] = -891462355;
    iVar8[18] = 1203311498;
    iVar8[19] = -909201658;
    iVar8[20] = 788045382;
    iVar8[21] = -1842748181;
    for ( I = 0; I < iVar8; I++ )
    {
        Result = GET_CLOSEST_CAR( uParam0, uParam3, iVar8[I], uParam4 );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            return Result;
        }
    }
    return nil;
}

void sub_29953(boolean bParam0)
{
    unknown uVar3;
    string Result;

    Result = nil;
    if (bParam0)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar3 );
        switch (uVar3)
        {
            case 0:
            Result = "gest_thumbsup";
            break;
            case 1:
            Result = "gest_hey";
            break;
        }
    }
    else
    {
        Result = "p_gest_rockin";
    }
    return Result;
}

void sub_30669(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        if ((sub_12885( uParam0 )) == 1)
        {
            if ((NOT (IS_CHAR_ON_SCREEN( (uParam0^) ))) || (IS_SCREEN_FADED_OUT()))
            {
                if ((uParam1) || (IS_CHAR_ON_ANY_BIKE( (uParam0^) )))
                {
                    GIVE_PED_HELMET_WITH_OPTS( (uParam0^), 1 );
                }
                else
                {
                    REMOVE_PED_HELMET( (uParam0^), 1 );
                }
            }
        }
    }
    return;
}

int sub_30960(int iParam0)
{
    int iVar3;
    float fVar4;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_22514( iParam0 )) != iParam0->_fU4)
    {
        if (sub_26770( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if ((sub_31057( iParam0 )) < l_U211)
    {
        return 1;
    };;;
    if (sub_26770( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 1.70000000 );
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    if (((iParam0->_fU96 != 14) AND (iParam0->_fU96 != 4)) || (iVar3 == 7))
    {
        if (sub_22395( iParam0, 8 ))
        {
            iParam0->_fU96 = 14;
        }
        else
        {
            iParam0->_fU96 = 4;
        }
        if (sub_22395( iParam0, 16 ))
        {
            iVar5 = 4;
        }
        else
        {
            iVar5 = 2;
        }
        if (sub_22395( iParam0, 128 ))
        {
            TASK_CAR_MISSION_COORS_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U210, l_U209 );
        }
        else
        {
            TASK_CAR_MISSION_COORS_TARGET( iParam0->_fU0, iParam0->_fU4, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, iParam0->_fU96, iParam0->_fU28, iVar5, l_U210, l_U209 );
        }
    }
    else if (sub_22395( iParam0, 64 ))
    {
        fVar4 = (sub_31057( iParam0 )) / 3.00000000;
        if (fVar4 < iParam0->_fU28)
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar4 );
        }
        else
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
    }
    else
    {
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    }
    if (sub_31585( iParam0->_fU4 ))
    {
        uVar6 = {sub_31735( iParam0->_fU4, 1 )};
        if (GET_RANDOM_CAR_NODE( uVar6, 12.00000000, 1, 0, 0, ref uVar6, ref uVar9 ))
        {
            SET_CAR_COORDINATES( iParam0->_fU4, uVar6._fU0, uVar6._fU4, uVar6._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
        }
    }
    return 2;
}

void sub_31057(int iParam0)
{
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        switch (iParam0->_fU36)
        {
            case 1:
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                return sub_26833( iParam0->_fU0, iParam0->_fU8, 1 );
            }
            break;
            default:
        }
    }
    return VDIST( sub_22772( iParam0->_fU0, 1 ), iParam0->_fU16 );
}

int sub_31585(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (CHECK_STUCK_TIMER( uParam0, 0, 5000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 3, 60000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 2, 30000 ))
        {
            return 1;
        }
        else if (CHECK_STUCK_TIMER( uParam0, 1, 40000 ))
        {
            return 1;
        };;;;
    }
    return 0;
}

void sub_31735(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CAR_DEAD( uParam0 ))
    {
        GET_DEAD_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_31931(int iParam0, unknown uParam1)
{
    iParam0->_fU36 = uParam1;
    return;
}

int sub_32032(int iParam0)
{
    unknown uVar3;
    int iVar4;

    if (NOT (sub_22395( iParam0, 2 )))
    {
        return 0;
    }
    uVar3 = sub_22514( iParam0 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        GET_CAR_CHAR_IS_USING( iParam0->_fU0, ref uVar3 );
        if (NOT (IS_CAR_DEAD( uVar3 )))
        {
            if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
            {
                if (IS_CHAR_IN_CAR( iParam0->_fU8, uVar3 ))
                {
                    iParam0->_fU4 = uVar3;
                    return 1;
                }
            }
            GET_DRIVER_OF_CAR( uVar3, ref iVar4 );
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if ((((sub_12885( iParam0 + 0 )) == 1) AND (iVar4 == sub_1331())) || ((sub_12885( ref iVar4 )) == (sub_12885( iParam0 + 0 ))))
                {
                    sub_32257( iParam0, iVar4 );
                    return 2;
                }
            }
        }
    }
    return 0;
}

void sub_32257(int iParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (IS_CHAR_INJURED( iParam1 ))
    {
        return;
    }
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                if (sub_32353( iParam0->_fU0, uVar4 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( iParam1, uVar4 )))
                    {
                        return;
                    }
                }
            }
        }
    }
    if ((iParam1 != sub_1331()) AND (iParam0->_fU8 == sub_1331()))
    {
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
    }
    if ((iParam0->_fU0 != g_U11081[1]) AND (iParam0->_fU0 != g_U11081[0]))
    {
        if (DOES_CHAR_EXIST( g_U11197 ))
        {
            if ((g_U11197 == g_U11081[1]) || (g_U11197 == g_U11081[0]))
            {
                g_U11197 = nil;
            }
        }
        if (DOES_CHAR_EXIST( g_U11198 ))
        {
            if ((g_U11198 == g_U11081[1]) || (g_U11198 == g_U11081[0]))
            {
                g_U11198 = nil;
            }
        }
        g_U11114 = 1;
    }
    if (((iParam0->_fU36 != 1) || (iParam0->_fU8 != iParam1)) AND (NOT (IS_CHAR_INJURED( iParam0->_fU0 ))))
    {
        TASK_PAUSE( iParam0->_fU0, 30 );
    }
    iParam0->_fU8 = iParam1;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if (IS_PED_IN_GROUP( iParam0->_fU0 ))
        {
            GET_PED_GROUP_INDEX( iParam0->_fU0, ref uVar5 );
            GET_GROUP_LEADER( uVar5, ref iVar6 );
            if (DOES_GROUP_EXIST( uVar5 ))
            {
                GET_GROUP_LEADER( uVar5, ref iVar6 );
                if (iVar6 != iParam0->_fU8)
                {
                    REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
                }
            }
        }
        sub_31931( iParam0, 1 );
        if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
        {
            SET_CHAR_DEFENSIVE_AREA_ATTACHED_TO_PED( iParam0->_fU0, iParam0->_fU8, 0, 2, -2, 0, 65516, 5, 20, 1 );
        }
        if (iParam0->_fU8 == sub_1331())
        {
            if (NOT (DOES_CHAR_EXIST( g_U11198 )))
            {
                sub_32932( iParam0, 0 );
            }
            else if (IS_CHAR_INJURED( g_U11198 ))
            {
                sub_32932( iParam0, 0 );
            }
            else if (NOT (g_U11198 == iParam0->_fU0))
            {
                if (NOT (DOES_CHAR_EXIST( g_U11197 )))
                {
                    sub_32932( iParam0, 1 );
                }
                else if (IS_CHAR_INJURED( g_U11197 ))
                {
                    sub_32932( iParam0, 1 );
                }
                else if (NOT (g_U11197 == iParam0->_fU0))
                {
                    sub_32932( iParam0, 2 );
                };;;
            };;;
        }
    }
    return;
}

boolean sub_32353(unknown uParam0, unknown uParam1)
{
    return (NOT (sub_32377( uParam0, uParam1 ))) AND (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ));
}

boolean sub_32377(int iParam0, unknown uParam1)
{
    int iVar4;

    GET_DRIVER_OF_CAR( uParam1, ref iVar4 );
    return iVar4 == iParam0;
}

void sub_32932(int iParam0, int iParam1)
{
    if (iParam0->_fU8 == sub_1331())
    {
        if (iParam1 == 1)
        {
            g_U11197 = iParam0->_fU0;
            if (g_U11198 == iParam0->_fU0)
            {
                g_U11198 = nil;
            }
        }
        if (iParam1 == 0)
        {
            g_U11198 = iParam0->_fU0;
            if (g_U11197 == iParam0->_fU0)
            {
                g_U11197 = nil;
            }
        }
    }
    if ((iParam0->_fU0 != g_U11081[1]) AND (iParam0->_fU0 != g_U11081[0]))
    {
        g_U11114 = 1;
    }
    iParam0->_fU40 = iParam1;
    return;
}

int sub_33271(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU8 )))
    {
        if (sub_33309( iParam0->_fU8, iParam0->_fU0, 0 ))
        {
            return 2;
        }
    }
    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (sub_19542( iParam0->_fU0 ))
        {
            return 2;
        }
        if ((sub_22514( iParam0 )) == iParam0->_fU4)
        {
            if (sub_26770( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        if (NOT (sub_26770( iParam0->_fU4 )))
        {
            iParam0->_fU4 = nil;
            return 0;
        }
        iVar3 = nil;
        GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
        if (((NOT (IS_CHAR_INJURED( iVar3 ))) AND (iVar3 == iParam0->_fU8)) || (iVar3 == sub_1331()))
        {
            if (IS_CHAR_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
            {
                return 2;
            }
            else
            {
                return 0;
            }
        }
        else if (NOT (IS_CHAR_INJURED( iVar3 )))
        {
            if ((sub_12885( iParam0 + 0 )) == (sub_12885( ref iVar3 )))
            {
                return 0;
            }
        }
        if (((sub_26833( iParam0->_fU0, sub_1331(), 1 )) < 90.00000000) || ((IS_CAR_ON_SCREEN( iParam0->_fU4 )) || ((IS_CHAR_ON_SCREEN( iParam0->_fU0 )) || (IS_CHAR_IN_CAR( sub_1331(), iParam0->_fU4 )))))
        {
            if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 30.00000000, 30.00000000, 30.00000000, 0 ))
            {
                bVar4 = false;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            bVar4 = true;
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (NOT (IS_CHAR_DEAD( iVar3 )))
                {
                    if (IS_PED_A_MISSION_PED( iVar3 ))
                    {
                        bVar4 = false;
                    }
                }
                if (bVar4)
                {
                    DELETE_CHAR( ref iVar3 );
                }
            }
        }
        sub_33993( iParam0 );
        if (bVar4)
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( iParam0->_fU0 );
            SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
            if (sub_26770( iParam0->_fU4 ))
            {
                SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
            }
            return 1;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 12, ref iVar5 );
            if (iVar5 == 7)
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU0, iParam0->_fU4, 12.00000000, 30.00000000, 30.00000000, 0 ))
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -1 );
                }
                else
                {
                    TASK_ENTER_CAR_AS_DRIVER( iParam0->_fU0, iParam0->_fU4, -2 );
                }
            }
            return 2;
        }
    }
    return 0;
}

void sub_33309(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_33339( ref uVar5, uParam2 );
}

int sub_33339(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_33364( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_33364( (uParam0^)[I], ref uVar5[1], uParam1 ))
        {
            if (uVar5[0] != uVar5[1])
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int sub_33364(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
        {
            return 0;
        }
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
    {
        return 0;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, uParam1 );
    return 1;
}

int sub_33993(int iParam0)
{
    if (sub_34007( iParam0->_fU0 ))
    {
        ;
    }
    return 1;
}

int sub_34007(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (IS_PED_IN_GROUP( uParam0 ))
    {
        GET_PED_GROUP_INDEX( uParam0, ref iVar3 );
        if (DOES_GROUP_EXIST( iVar3 ))
        {
            GET_GROUP_SIZE( iVar3, ref iVar4, ref iVar5 );
            if (NOT (IS_GROUP_LEADER( uParam0, iVar3 )))
            {
                if ((iVar3 != sub_34093()) AND ((iVar5 < 2) || (iVar4 < 1)))
                {
                    REMOVE_GROUP( iVar3 );
                }
                else
                {
                    REMOVE_CHAR_FROM_GROUP( uParam0 );
                }
                return 1;
            }
            else if ((iVar3 != sub_34093()) AND (iVar5 < 1))
            {
                REMOVE_GROUP( iVar3 );
            }
        }
    }
    return 0;
}

void sub_34093()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_34439(int iParam0)
{
    unknown uVar3;

    if ((IS_VEH_DRIVEABLE( iParam0->_fU4 )) AND (NOT (sub_22395( iParam0, 2 ))))
    {
        return 0;
    }
    uVar3 = sub_29352( sub_22772( iParam0->_fU0, 1 ), 30.00000000, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_34553(int iParam0)
{
    unknown uVar3;

    return 0;
    if ((IS_VEH_DRIVEABLE( iParam0->_fU4 )) AND (NOT (sub_22395( iParam0, 2 ))))
    {
        return 0;
    }
    uVar3 = GET_CLOSEST_CAR( sub_22772( iParam0->_fU0, 1 ), 30.00000000, 0, 190 );
    if (IS_VEH_DRIVEABLE( uVar3 ))
    {
        iParam0->_fU4 = uVar3;
        return 1;
    }
    return 0;
}

int sub_34674(int iParam0)
{
    float fVar3;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        return 0;
    }
    fVar3 = sub_31057( iParam0 );
    if (fVar3 < 12.00000000)
    {
        return 1;
    }
    else if (fVar3 > 90.00000000)
    {
        return 0;
    }
    else
    {
        switch (iParam0->_fU36)
        {
            case 2:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 27, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( iParam0->_fU0, ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 4, -1, 12.00000000 / 2.00000000 );
            }
            else if ((GET_NAVMESH_ROUTE_RESULT( iParam0->_fU0 )) == 2)
            {
                return 0;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 21, ref iVar4 );
            if (iVar4 == 7)
            {
                TASK_GO_TO_CHAR( iParam0->_fU0, iParam0->_fU8, -1, 12.00000000 / 2.00000000 );
            }
            break;
            default: break;
        }
    }
    return 2;
}

int sub_34974(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (iParam0->_fU36 != 2)
    {
        return 0;
    }
    GET_GAME_VIEWPORT_ID( ref uVar3 );
    if ((sub_31057( iParam0 )) < 12.00000000)
    {
        return 1;
    }
    else if (((sub_26833( iParam0->_fU0, sub_1331(), 1 )) > 90.00000000) AND ((NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))) AND ((sub_31057( iParam0 )) > 90.00000000)))
    {
        if (GET_SAFE_POSITION_FOR_CHAR( ref iParam0->_fU16->_fU0, ref iParam0->_fU16->_fU4, ref iParam0->_fU16->_fU8, 0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 ))
        {
            if (((VDIST( sub_22772( sub_1331(), 1 ), uVar4 )) < 30.00000000) || ((IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000, 2.00000000, 2.00000000 )) || (CAM_IS_SPHERE_VISIBLE( uVar3, uVar4._fU0, uVar4._fU4, uVar4._fU8, 2.00000000 ))))
            {
                ;
            }
            else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( iParam0->_fU0, uVar4._fU0, uVar4._fU4, uVar4._fU8 );
            }
            return 2;;
        }
    }
    return 0;
}

int sub_35330(int iParam0)
{
    int iVar3;

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_22514( iParam0 )) != iParam0->_fU4)
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 16, ref iVar3 );
    if (iVar3 == 7)
    {
        TASK_CAR_DRIVE_WANDER( iParam0->_fU0, iParam0->_fU4, iParam0->_fU28, 2 );
    }
    SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
    return 2;
}

int sub_35589(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
    {
        if (NOT (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 34, ref iVar3 );
            if ((NOT (IS_CHAR_FACING_CHAR( iParam0->_fU0, sub_1331(), 45.00000000 ))) AND (iVar3 == 7))
            {
                TASK_LOOK_AT_CHAR( iParam0->_fU0, sub_1331(), -1, 0 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam0->_fU0, sub_1331() );
            }
        }
        return 1;
    }
    return 0;
}

int sub_35746(int iParam0)
{
    unknown uVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    float fVar8;
    int iVar9;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    iVar4 = nil;
    bVar5 = false;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref iVar4 );
    }
    if (DOES_VEHICLE_EXIST( iVar4 ))
    {
        if (sub_32353( iParam0->_fU0, iVar4 ))
        {
            bVar5 = true;
            GET_DRIVER_OF_CAR( iVar4, ref uVar3 );
            bVar6 = false;
            if ((NOT (IS_CHAR_GETTING_IN_TO_A_CAR( sub_1331() ))) AND (NOT (IS_CHAR_IN_CAR( sub_1331(), iVar4 ))))
            {
                if (IS_CHAR_INJURED( uVar3 ))
                {
                    bVar6 = true;
                }
            }
            if (IS_CAR_MODEL( iVar4, -960289747 ))
            {
                if (sub_33309( sub_1331(), iParam0->_fU0, 0 ))
                {
                    return 2;
                }
            }
            else if ((sub_12885( iParam0 + 0 )) == 1)
            {
                GET_CAR_CHAR_IS_USING( sub_1331(), ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (IS_CAR_MODEL( uVar7, 800869680 ))
                    {
                        return 2;
                    }
                }
            }
            if (bVar6)
            {
                return sub_22317( iParam0, 1, 0 );
            }
        }
    }
    if (((sub_31057( iParam0 )) < 30.00000000) AND (sub_22395( iParam0, 1 )))
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        if (IS_PED_IN_COMBAT( iParam0->_fU0 ))
        {
            return 2;
        }
    }
    else
    {
        SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        if ((NOT bVar5) AND (IS_PED_IN_COMBAT( iParam0->_fU0 )))
        {
            CLEAR_CHAR_TASKS( iParam0->_fU0 );
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU0 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 1 );
        }
        else
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
        }
    }
    iVar4 = nil;
    GET_CAR_CHAR_IS_USING( sub_1331(), ref iVar4 );
    fVar8 = 20.00000000;
    if (iParam0->_fU8 == sub_1331())
    {
        if ((IS_CHAR_ON_FOOT( sub_1331() )) AND (IS_CHAR_ON_FOOT( iParam0->_fU0 )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_1331(), ref iVar9 );
            if (iVar9 != 0)
            {
                fVar8 = 100.00000000;
            }
        }
    }
    if ((((sub_26833( iParam0->_fU0, iParam0->_fU8, 1 )) > fVar8) || ((DOES_VEHICLE_EXIST( iVar4 )) || ((IS_CHAR_GETTING_IN_TO_A_CAR( iParam0->_fU8 )) || (IS_CHAR_SITTING_IN_ANY_CAR( iParam0->_fU8 ))))) AND (NOT (IS_CHAR_IN_WATER( iParam0->_fU8 ))))
    {
        if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
        {
            if ((iParam0->_fU4 == iVar4) || (sub_32377( iParam0->_fU8, iParam0->_fU4 )))
            {
                if ((sub_36432( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_32032( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_34439( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_37499( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_37910( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_34674( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_35589( iParam0 )) != 0)
                {
                    ;
                };;;;;;;
            }
            else if (((sub_12885( iParam0 + 0 )) == 1) AND (sub_32377( sub_1331(), iParam0->_fU4 )))
            {
                if ((sub_32032( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_34439( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_37499( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_37910( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_34674( iParam0 )) != 0)
                {
                    ;
                }
                else if ((sub_35589( iParam0 )) != 0)
                {
                    ;
                };;;;;;
            }
            else if ((sub_38736( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_38885( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33271( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_32032( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34439( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_37910( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_36432( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_37499( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34674( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_35589( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;;;;
        }
        else if ((sub_38736( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_33271( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_32032( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_36432( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34439( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34553( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_37499( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_37910( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34674( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_35589( iParam0 )) != 0)
        {
            ;
        };;;;;;;;;;;
    }
    else if (((sub_12885( iParam0 + 0 )) == 1) AND ((iParam0->_fU8 != sub_1331()) AND (sub_33309( sub_1331(), iParam0->_fU0, 1 ))))
    {
        sub_32257( iParam0, sub_1331() );
    }
    if (IS_CHAR_IN_WATER( iParam0->_fU8 ))
    {
        if (IS_CHAR_IN_WATER( iParam0->_fU0 ))
        {
            if ((sub_22503( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33271( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_32032( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_37910( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_36771( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34674( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34439( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_34553( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_37499( iParam0 )) != 0)
            {
                ;
            };;;;;;;;;
        }
        else if ((IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )) || (NOT (sub_22395( iParam0, 1 ))))
        {
            if ((sub_22503( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_33271( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_32032( iParam0 )) != 0)
            {
                ;
            }
            else if ((sub_37910( iParam0 )) != 0)
            {
                ;
            };;;;
        }
        else if ((sub_38736( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_36771( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34674( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_35589( iParam0 )) != 0)
        {
            ;
        };;;;;;
    }
    else if ((NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))) AND (sub_22395( iParam0, 1 )))
    {
        if ((sub_38736( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_36771( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_34674( iParam0 )) != 0)
        {
            ;
        }
        else if ((sub_22317( iParam0, 0, 0 )) != 0)
        {
            ;
        }
        else if ((sub_22503( iParam0 )) != 0)
        {
            ;
        };;;;;
    }
    else if ((sub_38736( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_22503( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_33271( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_32032( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_36432( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_34439( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_37910( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_37499( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_36771( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_34674( iParam0 )) != 0)
    {
        ;
    }
    else if ((sub_35589( iParam0 )) != 0)
    {
        ;
    };;;;;;;;;;;;;;
    return 2;
}

int sub_36432(int iParam0)
{
    unknown uVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;
    int iVar15;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        return 0;
    }
    else if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 )))
    {
        return 0;
    }
    else
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar3 );
        if (NOT (IS_VEH_DRIVEABLE( uVar3 )))
        {
            return 0;
        }
        else if (IS_CHAR_IN_CAR( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
        else
        {
            iVar4 = sub_36561( uVar3 );
            if (iVar4 < 0)
            {
                return 0;
            }
        }
    }
    uVar5 = {sub_31735( uVar3, 1 )};
    uVar8 = {sub_22772( iParam0->_fU0, 1 )};
    uVar11 = {sub_22772( sub_1331(), 1 )};
    if (IS_PED_IN_GROUP( iParam0->_fU0 ))
    {
        if ((sub_31057( iParam0 )) > 30.00000000)
        {
            sub_33993( iParam0 );
            return 0;
        }
        else
        {
            return 2;
        }
    }
    else if ((sub_31057( iParam0 )) < 12.00000000)
    {
        iVar14 = sub_36771( iParam0 );
        if (iVar14 != 0)
        {
            return 2;
        }
    }
    if (((VDIST( uVar11, uVar8 )) < 30.00000000) || (((VDIST( uVar11, uVar5 )) < 30.00000000) || ((IS_CAR_ON_SCREEN( uVar3 )) || (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))))
    {
        if ((VDIST( uVar8, uVar5 )) > 30.00000000)
        {
            return 0;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar15 );
            if (iVar15 == 7)
            {
                TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, -2, iVar4 );
            }
            return 2;
        }
    }
    else
    {
        CLEAR_CHAR_TASKS( iParam0->_fU0 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( iParam0->_fU0, uVar3, iVar4 );
        return 1;
    }
    return 0;
}

int sub_36561(unknown uParam0)
{
    int Result;
    int iVar4;

    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
    for ( Result = 0; Result < iVar4; Result++ )
    {
        if (IS_CAR_PASSENGER_SEAT_FREE( uParam0, Result ))
        {
            return Result;
        }
    }
    return -1;
}

int sub_36771(int iParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (IS_CHAR_INJURED( iParam0->_fU8 ))
    {
        if (sub_34007( iParam0->_fU0 ))
        {
            ;
        }
        return 0;
    }
    else if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        if (NOT (sub_33309( iParam0->_fU0, iParam0->_fU8, 1 )))
        {
            return 0;
        }
    }
    else if ((sub_26833( iParam0->_fU0, iParam0->_fU8, 1 )) > 12.00000000)
    {
        return 0;
    }
    GET_PED_GROUP_INDEX( iParam0->_fU8, ref uVar3 );
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        if (IS_GROUP_MEMBER( iParam0->_fU0, uVar3 ))
        {
            return 1;
        }
    }
    else
    {
        REMOVE_ALL_INACTIVE_GROUPS_FROM_CLEANUP_LIST();
        CREATE_GROUP( 0, ref uVar3, 1 );
        SET_GROUP_LEADER( uVar3, iParam0->_fU8 );
        PRINTSTRING( "e1_biker_buddy_task: CREATING GROUP with leader" );
        PRINTINT( iParam0->_fU8 );
        PRINTSTRING( " and ped " );
        PRINTINT( iParam0->_fU0 );
        PRINTNL();
    }
    if (DOES_GROUP_EXIST( uVar3 ))
    {
        GET_GROUP_SIZE( uVar3, ref uVar4, ref iVar5 );
        if (iVar5 < 7)
        {
            if (IS_PED_IN_GROUP( iParam0->_fU0 ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
            }
            GET_GROUP_LEADER( uVar3, ref uVar6 );
            if (NOT (IS_CHAR_INJURED( uVar6 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( iParam0->_fU0, 0 );
                SET_GROUP_MEMBER( uVar3, iParam0->_fU0 );
                SET_CHAR_NEVER_LEAVES_GROUP( iParam0->_fU0, 1 );
                return 1;
            }
        }
    }
    return 0;
}

int sub_37499(int iParam0)
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

    if (NOT (sub_22395( iParam0, 2 )))
    {
        return 0;
    }
    iVar3 = 0;
    if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
    {
        iVar3 = sub_19442( iParam0->_fU4 );
    }
    else if (HAS_MODEL_LOADED( -408052231 ))
    {
        iVar3 = -408052231;
    }
    else if (HAS_MODEL_LOADED( -570033273 ))
    {
        iVar3 = -570033273;
    }
    else if (HAS_MODEL_LOADED( 584879743 ))
    {
        iVar3 = 584879743;
    }
    else if (HAS_MODEL_LOADED( 802082487 ))
    {
        iVar3 = 802082487;
    }
    else if (HAS_MODEL_LOADED( -1830458836 ))
    {
        iVar3 = -1830458836;
    };;;;;;
    if (iVar3 == 0)
    {
        ;
    }
    else if (((sub_26813( iParam0 )) > 30.00000000) AND (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 ))))
    {
        GET_CHAR_COORDINATES( iParam0->_fU0, ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
        if (GET_CLOSEST_CAR_NODE_WITH_HEADING( uVar4._fU0, uVar4._fU4, uVar4._fU8, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8, ref uVar10 ))
        {
            uVar11 = sub_13545( uVar4, uVar10, iVar3 );
            WARP_CHAR_INTO_CAR( iParam0->_fU0, uVar11 );
            if (sub_26770( uVar11 ))
            {
                GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                SET_BLIP_THROTTLE_RANDOMLY( uVar11, 1 );
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar11 );
            return 1;
        }
    }
    return 0;
}

int sub_37910(int iParam0)
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
    int iVar13;
    int iVar14;
    boolean bVar15;

    if (IS_VEH_DRIVEABLE( iParam0->_fU4 ))
    {
        if (IS_CHAR_SITTING_IN_CAR( iParam0->_fU0, iParam0->_fU4 ))
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if ((IS_CHAR_INJURED( iVar3 )) || (iVar3 == iParam0->_fU0))
            {
                return 0;
            }
            else if (iVar3 != iParam0->_fU8)
            {
                sub_32257( iParam0, iVar3 );
                return 2;
            }
            else
            {
                return 1;
            }
        }
        uVar4 = {sub_22772( sub_1331(), 1 )};
        uVar7 = {sub_22772( iParam0->_fU0, 1 )};
        uVar10 = {sub_31735( iParam0->_fU4, 1 )};
        if (((VDIST( uVar4, uVar7 )) < 30.00000000) || (((VDIST( uVar4, uVar10 )) < 30.00000000) || ((IS_CAR_ON_SCREEN( iParam0->_fU4 )) || (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))))
        {
            if ((VDIST( uVar10, uVar7 )) > 30.00000000)
            {
                return 0;
            }
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 11, ref iVar13 );
            if (iVar13 != 7)
            {
                return 2;
            }
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (IS_CHAR_INJURED( iVar3 ))
            {
                return 0;
            }
            else if (((sub_12885( ref iVar3 )) == (sub_12885( iParam0 + 0 ))) || (iVar3 == sub_1331()))
            {
                iVar14 = sub_36561( iParam0->_fU4 );
                if (iVar14 < 0)
                {
                    return 0;
                }
                else
                {
                    TASK_ENTER_CAR_AS_PASSENGER( iParam0->_fU0, iParam0->_fU4, -2, iVar14 );
                    return 2;
                }
            }
            else
            {
                return 0;
            }
        }
        else
        {
            GET_DRIVER_OF_CAR( iParam0->_fU4, ref iVar3 );
            if (DOES_CHAR_EXIST( iVar3 ))
            {
                if (IS_PED_A_MISSION_PED( iVar3 ))
                {
                    bVar15 = false;
                }
                else
                {
                    DELETE_CHAR( ref iVar3 );
                    bVar15 = true;
                }
            }
            else
            {
                bVar15 = true;
            }
            if (bVar15)
            {
                CLEAR_CHAR_TASKS( iParam0->_fU0 );
                SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
                WARP_CHAR_INTO_CAR( iParam0->_fU0, iParam0->_fU4 );
                if (sub_26770( iParam0->_fU4 ))
                {
                    GIVE_PED_HELMET_WITH_OPTS( iParam0->_fU0, 0 );
                    SET_BLIP_THROTTLE_RANDOMLY( iParam0->_fU4, 1 );
                }
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    iParam0->_fU4 = nil;
    return 0;
}

int sub_38736(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (IS_CHAR_INJURED( iParam0->_fU0 ))
    {
        return 0;
    }
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 91, ref uVar3 );
    GET_CHAR_HIGHEST_PRIORITY_EVENT( iParam0->_fU0, ref uVar4 );
    if (((sub_31057( iParam0 )) < 30.00000000) AND ((IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 115 )) || ((IS_CHAR_RESPONDING_TO_EVENT( iParam0->_fU0, 110 )) || (IS_PED_IN_COMBAT( iParam0->_fU0 )))))
    {
        return 2;
    }
    return 0;
}

int sub_38885(int iParam0)
{
    int iVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    int iVar8;
    boolean bVar9;
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

    if (NOT (IS_VEH_DRIVEABLE( iParam0->_fU4 )))
    {
        return 0;
    }
    else if ((sub_22514( iParam0 )) != iParam0->_fU4)
    {
        if (sub_26770( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    }
    else if (NOT (DOES_CHAR_EXIST( iParam0->_fU8 )))
    {
        if (sub_26770( iParam0->_fU4 ))
        {
            SET_CAR_TRACTION( iParam0->_fU4, 1.00000000 );
        }
        return 0;
    };;;
    if (sub_26770( iParam0->_fU4 ))
    {
        SET_CAR_TRACTION( iParam0->_fU4, 2.00000000 );
    }
    if ((NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 ))) AND (CHECK_STUCK_TIMER( iParam0->_fU4, 0, 5000 )))
    {
        SET_CAR_ON_GROUND_PROPERLY( iParam0->_fU4 );
    }
    sub_33993( iParam0 );
    iVar8 = 2;
    if (sub_22395( iParam0, 16 ))
    {
        iVar8 = 4;
    }
    bVar9 = false;
    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar3 );
    fVar6 = sub_31057( iParam0 );
    uVar10 = nil;
    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU8 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU8, ref uVar10 );
    }
    else if ((IS_CHAR_GETTING_IN_TO_A_CAR( sub_1331() )) AND (iParam0->_fU8 == sub_1331()))
    {
        GET_VEHICLE_PLAYER_WOULD_ENTER( sub_1662(), ref uVar10 );
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        GET_CAR_MODEL( uVar10, ref uVar11 );
        if (NOT ((IS_THIS_MODEL_A_CAR( uVar11 )) || (IS_THIS_MODEL_A_BIKE( uVar11 ))))
        {
            uVar10 = nil;
        }
    }
    if (IS_VEH_DRIVEABLE( uVar10 ))
    {
        if (PLAYER_IS_INTERACTING_WITH_GARAGE())
        {
            uVar12 = {sub_22772( sub_1331(), 1 )};
            if (GET_NTH_CLOSEST_CAR_NODE( uVar12._fU0, uVar12._fU4, uVar12._fU8, 5, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 ))
            {
                return sub_39403( iParam0, uVar12 );
            }
            else
            {
                return sub_22503( iParam0 );
            }
        }
        GET_CHAR_SPEED( iParam0->_fU8, ref fVar5 );
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        fVar7 = 50.00000000;
        if ((fVar6 < 9.00000000) AND (fVar4 < 2.50000000))
        {
            return sub_22503( iParam0 );
        }
        else if (fVar6 < 15.00000000)
        {
            if (fVar6 < 1.50000000)
            {
                fVar7 = 0.00000000;
            }
            else if (fVar5 < 0.50000000)
            {
                return sub_22503( iParam0 );
            }
            else if (fVar5 < 4.00000000)
            {
                fVar7 = fVar5;
            }
            else
            {
                GET_MODEL_DIMENSIONS( uVar11, ref uVar15, ref uVar18 );
                if (iParam0->_fU8 != sub_1331())
                {
                    if ((fVar6 < 3.00000000) || (((iParam0->_fU40 == 3) AND (fVar6 < 5.00000000)) || ((iParam0->_fU40 == 2) AND (fVar6 < 6.00000000))))
                    {
                        fVar7 = fVar5 - 2.00000000;
                        if (iParam0->_fU40 == 2)
                        {
                            SET_CAR_LANE_SHIFT( iParam0->_fU4, 1.50000000 );
                        }
                    }
                    else
                    {
                        SET_CAR_LANE_SHIFT( iParam0->_fU4, 0.00000000 );
                    }
                }
                else if (sub_39884())
                {
                    if (fVar6 < 5.00000000)
                    {
                        fVar7 = fVar5 - 5.00000000;
                    }
                    else
                    {
                        fVar7 = fVar5;
                    }
                }
                else if ((fVar6 < (((ABSF( uVar15._fU4 )) + uVar18._fU0) + 2.50000000)) AND (IS_THIS_MODEL_A_CAR( uVar11 )))
                {
                    fVar7 = fVar5 - 2.00000000;
                }
                else if ((iParam0->_fU40 == 2) AND (fVar6 < 4.00000000))
                {
                    fVar7 = fVar5 - 5.00000000;
                }
                else if (fVar6 < 2.50000000)
                {
                    fVar7 = fVar5;
                };;;;;
            };;;
        }
        else if (((sub_26813( iParam0 )) >= l_U161) AND ((sub_22395( iParam0, 4 )) || (sub_31585( iParam0->_fU4 ))))
        {
            bVar9 = sub_40154( iParam0, l_U161, l_U162, fVar5 + 4.00000000 );
            if (bVar9)
            {
                if (sub_22395( iParam0, 128 ))
                {
                    TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                else
                {
                    TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar5 + 6.00000000, iVar8, 12, -1 );
                }
                return 2;
            }
        };;;
        if (fVar7 < 0.00000000)
        {
            fVar7 = 0.00000000;
        }
        if (((NOT (iParam0->_fU12 == nil)) AND (iParam0->_fU8 != iParam0->_fU12)) || (((iParam0->_fU96 != 11) AND ((iParam0->_fU96 != 12) AND ((iParam0->_fU96 != 10) AND (iParam0->_fU96 != 7)))) || (((iParam0->_fU40 != 3) AND (iParam0->_fU96 == 7)) || (((iParam0->_fU40 != 1) AND (iParam0->_fU96 == 11)) || (((iParam0->_fU40 != 2) AND (iParam0->_fU96 == 12)) || (((iParam0->_fU40 != 0) AND (iParam0->_fU96 == 10)) || (iVar3 == 7)))))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_22395( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, fVar7, iVar8, 12, -1 );
            }
            return 2;
        }
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );
        return 2;
    }
    else
    {
        GET_CHAR_SPEED( iParam0->_fU0, ref fVar4 );
        if (fVar6 < 12.00000000)
        {
            return sub_22503( iParam0 );
        }
        else if (((NOT (iParam0->_fU12 == nil)) AND (iParam0->_fU8 != iParam0->_fU12)) || (((iParam0->_fU96 != 11) AND ((iParam0->_fU96 != 12) AND ((iParam0->_fU96 != 10) AND (iParam0->_fU96 != 7)))) || (((iParam0->_fU40 != 3) AND (iParam0->_fU96 == 7)) || (((iParam0->_fU40 != 1) AND (iParam0->_fU96 == 11)) || (((iParam0->_fU40 != 2) AND (iParam0->_fU96 == 12)) || (((iParam0->_fU40 != 0) AND (iParam0->_fU96 == 10)) || (iVar3 == 7)))))))
        {
            switch (iParam0->_fU40)
            {
                case 0:
                iParam0->_fU96 = 10;
                break;
                case 1:
                iParam0->_fU96 = 11;
                break;
                case 2:
                iParam0->_fU96 = 12;
                break;
                default:
                iParam0->_fU96 = 7;
                break;
            }
            if (sub_22395( iParam0, 128 ))
            {
                TASK_CAR_MISSION_PED_TARGET_NOT_AGAINST_TRAFFIC( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
            else
            {
                TASK_CAR_MISSION_PED_TARGET( iParam0->_fU0, iParam0->_fU4, iParam0->_fU8, iParam0->_fU96, iParam0->_fU28, iVar8, 12, -1 );
            }
        }
        fVar7 = fVar6;
        sub_41598( ref fVar7, 5.00000000, 50.00000000 );
        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, fVar7 );;
    }
    return 2;
}

void sub_39403(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown Result;

    uVar6 = {iParam0->_fU16};
    iParam0->_fU16 = {uParam1};
    uVar9 = iParam0->_fU88;
    sub_39445( iParam0, 64 );
    Result = sub_30960( iParam0 );
    iParam0->_fU16 = {uVar6};
    iParam0->_fU88 = uVar9;
    return Result;
}

void sub_39445(int iParam0, int iParam1)
{
    iParam0->_fU88 = (iParam1) || (iParam0->_fU88);
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 1 );
        }
    }
    return;
}

boolean sub_39884()
{
    return (IS_CONTROL_PRESSED( 0, 45 )) || ((IS_CONTROL_PRESSED( 0, 44 )) || (IS_CONTROL_PRESSED( 0, 41 )));
}

int sub_40154(int iParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    vector vVar6;
    vector vVar9;
    vector vVar12;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float fVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( iParam0->_fU8, iParam0->_fU4, uParam1, uParam1, uParam1, 0 )))
    {
        if (NOT (IS_CAR_ON_SCREEN( iParam0->_fU4 )))
        {
            GET_CAR_COORDINATES( iParam0->_fU4, ref vVar6.x, ref vVar6.y, ref vVar6.z );
            GET_CHAR_COORDINATES( iParam0->_fU8, ref vVar12.x, ref vVar12.y, ref vVar12.z );
            vVar9 = {vVar6 - vVar12};
            vVar9 = {vVar9 * ((fParam2 + (10.00000000 / 2)) / (VMAG( vVar9 )))};
            vVar9 = {vVar9 + vVar12};
            if (GET_CLOSEST_CAR_NODE_WITH_HEADING( vVar9.x, vVar9.y, vVar9.z, ref uVar15._fU0, ref uVar15._fU4, ref uVar15._fU8, ref uVar18 ))
            {
                if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar15._fU0, uVar15._fU4, uVar15._fU8, 4.00000000, 4.00000000, 4.00000000 )))
                {
                    GET_GAME_VIEWPORT_ID( ref uVar19 );
                    if (((VDIST2( uVar15, vVar6 )) > 9.00000000) AND (((VDIST( uVar15, sub_22772( sub_1331(), 1 ) )) > fParam2) AND (NOT (CAM_IS_SPHERE_VISIBLE( uVar19, uVar15._fU0, uVar15._fU4, uVar15._fU8, 6.00000000 )))))
                    {
                        uVar21 = {-SIN( uVar18 ), COS( uVar18 ), 0.00000000};
                        GET_ANGLE_BETWEEN_2D_VECTORS( uVar21._fU0, uVar21._fU4, vVar12.x - uVar15._fU0, vVar12.y - uVar15._fU4, ref fVar20 );
                        if (fVar20 > 90.00000000)
                        {
                            LIMIT_ANGLE( fVar20 + 180.00000000, ref fVar20 );
                            LIMIT_ANGLE( uVar18 + 180.00000000, ref uVar18 );
                        }
                        if ((fVar20 > 315.00000000) || (fVar20 < 45.00000000))
                        {
                            SET_CAR_HEADING( iParam0->_fU4, uVar18 );
                            SET_CAR_COORDINATES( iParam0->_fU4, uVar15._fU0, uVar15._fU4, uVar15._fU8 );
                            SET_CAR_FORWARD_SPEED( iParam0->_fU4, uParam3 );
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_41598(unknown uParam0, float fParam1, float fParam2)
{
    float fVar5;

    if (fParam2 < fParam1)
    {
        fVar5 = fParam2;
        fParam2 = fParam1;
        fParam1 = fVar5;
    }
    if ((uParam0^) < fParam1)
    {
        (uParam0^) = fParam1;
        return 1;
    }
    else if ((uParam0^) > fParam2)
    {
        (uParam0^) = fParam2;
        return 1;
    }
    return 0;
}

void sub_42966(unknown uParam0)
{
    sub_31931( uParam0, 2 );
    return;
}

void sub_43051(int iParam0)
{
    if (PLAYER_IS_INTERACTING_WITH_GARAGE())
    {
        if (NOT (sub_22395( iParam0, 256 )))
        {
            if (DOES_CHAR_EXIST( iParam0->_fU0 ))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (IS_CHAR_VISIBLE( iParam0->_fU0 ))
                    {
                        if (NOT (sub_33309( sub_1331(), iParam0->_fU0, 1 )))
                        {
                            SET_CHAR_VISIBLE( iParam0->_fU0, 0 );
                            FREEZE_CHAR_POSITION( iParam0->_fU0, 1 );
                            if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                            {
                                SET_CHAR_COLLISION( iParam0->_fU0, 0 );
                            }
                        }
                    }
                }
            }
            if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
            {
                if (NOT (IS_CHAR_IN_CAR( sub_1331(), iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 0 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 1 );
                    SET_CAR_COLLISION( iParam0->_fU4, 0 );
                }
            }
            sub_39445( iParam0, 256 );
        }
    }
    else if (sub_22395( iParam0, 256 ))
    {
        if (DOES_CHAR_EXIST( iParam0->_fU0 ))
        {
            if (NOT (IS_CHAR_ON_SCREEN( iParam0->_fU0 )))
            {
                if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
                {
                    if (NOT (IS_CHAR_VISIBLE( iParam0->_fU0 )))
                    {
                        SET_CHAR_VISIBLE( iParam0->_fU0, 1 );
                        FREEZE_CHAR_POSITION( iParam0->_fU0, 0 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 )))
                        {
                            SET_CHAR_COLLISION( iParam0->_fU0, 1 );
                        }
                    }
                }
                if (NOT (IS_CAR_DEAD( iParam0->_fU4 )))
                {
                    SET_CAR_VISIBLE( iParam0->_fU4, 1 );
                    FREEZE_CAR_POSITION( iParam0->_fU4, 0 );
                    SET_CAR_COLLISION( iParam0->_fU4, 1 );
                }
                sub_43519( iParam0, 256 );
            }
        }
    }
    return;
}

void sub_43519(int iParam0, int iParam1)
{
    if (sub_22395( iParam0, iParam1 ))
    {
        iParam0->_fU88 = (iParam1) XOR (iParam0->_fU88);
    }
    if (iParam1 == 1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
        {
            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
        }
    }
    return;
}

void sub_43729()
{
    if (l_U263 != 1)
    {
        if (IS_WANTED_LEVEL_GREATER( sub_1662(), 0 ))
        {
            PRINT_NOW( "racops", 7500, 1 );
        }
        else
        {
            PRINT_NOW( "raband", 7500, 1 );
        }
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 331, 1 );
    INCREMENT_INT_STAT_NO_MESSAGE( 99, 0 );
    sub_738();
    return;
}

void sub_44100(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        if ((VDIST2( uParam1, iParam0->_fU16 )) > 1.00000000)
        {
            TASK_PAUSE( iParam0->_fU0, 30 );
        }
        else if (((VDIST( iParam0->_fU16, sub_22772( iParam0->_fU0, 1 ) )) < 12.00000000) AND (iParam0->_fU36 == 4))
        {
            return;
        }
        else if (iParam0->_fU36 != 2)
        {
            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 49, ref iVar7 );
            if (iVar7 != 7)
            {
                TASK_PAUSE( iParam0->_fU0, 30 );
            }
        };;;
    }
    if (iParam0->_fU28 < 0.01000000)
    {
        iParam0->_fU28 = 28.00000000;
    }
    iParam0->_fU36 = 2;
    iParam0->_fU16 = {uParam1};
    switch (uParam4)
    {
        case 0:
        sub_43519( iParam0, 32 );
        sub_43519( iParam0, 64 );
        break;
        case 1:
        sub_43519( iParam0, 32 );
        sub_39445( iParam0, 64 );
        sub_39445( iParam0, 1 );
        break;
        case 2:
        sub_43519( iParam0, 32 );
        sub_39445( iParam0, 64 );
        sub_43519( iParam0, 1 );
        break;
        case 3:
        sub_39445( iParam0, 32 );
        sub_43519( iParam0, 64 );
        break;
    }
    return;
}

int sub_44778(unknown uParam0)
{
    if (NOT (sub_44789( uParam0 )))
    {
        return 0;
    }
    return 1;
}

int sub_44789(int iParam0)
{
    REQUEST_MODEL( 1775021974 );
    REQUEST_ANIMS( "MISSBIKE_COMBAT" );
    if ((NOT (REQUEST_MISSION_AUDIO_BANK( "EP1_SFX\BIKER_MELEE" ))) || ((NOT (HAVE_ANIMS_LOADED( "MISSBIKE_COMBAT" ))) || (NOT (HAS_MODEL_LOADED( 1775021974 )))))
    {
        return 0;
    }
    iParam0->_fU4 = 0;
    iParam0->_fU0 = 11;
    iParam0->_fU28 = 0;
    l_U34[0] = 51;
    l_U34[1] = 42;
    return 1;
}

int sub_45100(unknown uParam0)
{
    int I;

    if (IS_CHAR_DEAD( (uParam0^)[0]._fU0 ))
    {
        if (CAN_CREATE_RANDOM_CHAR( 1, 0 ))
        {
            for ( I = 0; I < 6; I++ )
            {
                CLEAR_AREA( (uParam0^)[I]._fU36._fU0, (uParam0^)[I]._fU36._fU4, (uParam0^)[I]._fU36._fU8, 1.00000000, 0 );
                CREATE_CAR( (uParam0^)[I]._fU12, (uParam0^)[I]._fU36._fU0, (uParam0^)[I]._fU36._fU4, (uParam0^)[I]._fU36._fU8, ref (uParam0^)[I]._fU8, 1 );
                LOCK_CAR_DOORS( (uParam0^)[I]._fU8, 3 );
                SET_CAR_HEADING( (uParam0^)[I]._fU8, (uParam0^)[I]._fU48 );
                SET_BLIP_THROTTLE_RANDOMLY( (uParam0^)[I]._fU8, 1 );
                if ((uParam0^)[I]._fU4 == 0)
                {
                    if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                    {
                        CREATE_RANDOM_CHAR_AS_DRIVER( (uParam0^)[I]._fU8, ref (uParam0^)[I]._fU0 );
                    }
                    else
                    {
                        CREATE_CHAR_INSIDE_CAR( (uParam0^)[I]._fU8, 7, -740078918, ref (uParam0^)[I]._fU0 );
                    }
                }
                else
                {
                    CREATE_CHAR_INSIDE_CAR( (uParam0^)[I]._fU8, 7, (uParam0^)[I]._fU4, ref (uParam0^)[I]._fU0 );
                }
                SET_CHAR_ONLY_DAMAGED_BY_PLAYER( (uParam0^)[I]._fU0, 1 );
                SET_CAR_ONLY_DAMAGED_BY_PLAYER( (uParam0^)[I]._fU8, 1 );
                SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^)[I]._fU0, 1 );
                TASK_CAR_TEMP_ACTION( (uParam0^)[I]._fU0, (uParam0^)[I]._fU8, 1, 999999 );
                SET_CAR_COORDINATES( (uParam0^)[I]._fU8, (uParam0^)[I]._fU36._fU0, (uParam0^)[I]._fU36._fU4, (uParam0^)[I]._fU36._fU8 );
                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( (uParam0^)[I]._fU0, 0 );
                SET_CAR_CAN_BE_VISIBLY_DAMAGED( (uParam0^)[I]._fU8, 0 );
                SET_CHAR_DROWNS_IN_WATER( (uParam0^)[I]._fU0, 0 );
                SET_CHAR_DROWNS_IN_SINKING_VEHICLE( (uParam0^)[I]._fU0, 0 );
                SET_CHAR_PROOFS( (uParam0^)[I]._fU0, 0, 0, 0, 1, 0 );
                GIVE_PED_HELMET_WITH_OPTS( (uParam0^)[I]._fU0, 0 );
            }
            OVERRIDE_NUMBER_OF_PARKED_CARS( 1 );
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_45856(unknown uParam0)
{
    int I;

    for ( I = 0; I < 6; I++ )
    {
        if (NOT (IS_CAR_DEAD( (uParam0^)[I]._fU8 )))
        {
            SET_CAR_PROOFS( (uParam0^)[I]._fU8, 0, 0, 0, 0, 0 );
            GET_CAR_COORDINATES( (uParam0^)[I]._fU8, ref (uParam0^)[I]._fU36._fU0, ref (uParam0^)[I]._fU36._fU4, ref (uParam0^)[I]._fU36._fU8 );
            SET_CAR_HEADING( (uParam0^)[I]._fU8, (uParam0^)[I]._fU48 );
            SET_CAR_COORDINATES( (uParam0^)[I]._fU8, (uParam0^)[I]._fU36._fU0, (uParam0^)[I]._fU36._fU4, (uParam0^)[I]._fU36._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( (uParam0^)[I]._fU8 );
        }
    }
    return;
}

void sub_46138(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U46)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U44))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U45 + 500))
        {
            l_U44 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_46306()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_1331() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U46)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U45 );
            l_U44 = 1;
            l_U43 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U44) AND (NOT l_U43))
        {
            if (l_U46)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U43 = 1;
        }
    }
    else if (l_U43)
    {
        if (l_U46)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U43 = 0;
    };;;
    return;
}

int sub_46306()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_47094(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8945)
        {
            return 0;
        }
    }
    return 1;
}

void sub_47273()
{
    if (NOT (DOES_BLIP_EXIST( l_U269[l_U268]._fU16 )))
    {
        ADD_BLIP_FOR_COORD( l_U269[l_U268]._fU36._fU0, l_U269[l_U268]._fU36._fU4, l_U269[l_U268]._fU36._fU8, ref l_U269[l_U268]._fU16 );
        SET_ROUTE( l_U269[l_U268]._fU16, l_U632 );
        CHANGE_BLIP_DISPLAY( l_U269[l_U268]._fU16, 2 );
        sub_47431();
        if (DOES_BLIP_EXIST( l_U269[l_U267]._fU16 ))
        {
            CHANGE_BLIP_DISPLAY( l_U269[l_U267]._fU16, 1 );
        }
        if (sub_47620( ref l_U269[l_U268], 0 ))
        {
            PRINT_NOW( "RaceStartB", 7500, 1 );
        }
        else
        {
            PRINT_NOW( "RaceCarB", 7500, 1 );
        }
    }
    return;
}

void sub_47431()
{
    if (DOES_BLIP_EXIST( l_U269[l_U268]._fU16 ))
    {
        sub_47496( ref l_U269[l_U268]._fU16, l_U446._fU352, l_U446._fU12 );
    }
    return;
}

void sub_47496(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2765 = (uParam0^);
        g_U2780 = {uParam1};
        g_U2778 = uParam4;
    }
    return;
}

int sub_47620(int iParam0, int iParam1)
{
    if (NOT (IS_CAR_DEAD( iParam0->_fU8 )))
    {
        if (IS_CHAR_IN_CAR( iParam0->_fU0, iParam0->_fU8 ))
        {
            if (iParam1 == 0)
            {
                if (NOT (IS_CHAR_ON_ANY_BIKE( iParam0->_fU0 )))
                {
                    return 0;
                }
                else
                {
                    return 1;
                }
            }
            else if ((IS_CAR_MODEL( iParam0->_fU8, 837858166 )) || ((IS_CAR_MODEL( iParam0->_fU8, 353883353 )) || ((IS_CAR_MODEL( iParam0->_fU8, -1660661558 )) || ((IS_CAR_MODEL( iParam0->_fU8, -1900572838 )) || ((IS_CAR_MODEL( iParam0->_fU8, -350085182 )) || ((IS_CAR_MODEL( iParam0->_fU8, -1627000575 )) || ((IS_CAR_MODEL( iParam0->_fU8, 2046537925 )) || ((IS_CAR_MODEL( iParam0->_fU8, 1911513875 )) || ((IS_CAR_MODEL( iParam0->_fU8, 148777611 )) || ((IS_CAR_MODEL( iParam0->_fU8, 1938952078 )) || ((IS_CAR_MODEL( iParam0->_fU8, 1127131465 )) || (IS_CAR_MODEL( iParam0->_fU8, 1171614426 )))))))))))))
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_48295()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( sub_1331() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1331() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1331(), ref uVar2 );
            if ((NOT (IS_CAR_ON_FIRE( uVar2 ))) AND (IS_VEH_DRIVEABLE( uVar2 )))
            {
                GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
                if (NOT (IS_CAR_MODEL( uVar2, 1491375716 )))
                {
                    if (iVar3 == sub_1331())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_48453(int iParam0, int iParam1)
{
    float fVar4;
    float fVar5;

    fVar4 = 15.00000000;
    fVar5 = 15.00000000;
    if (NOT (IS_CAR_DEAD( iParam0->_fU8 )))
    {
        GET_CAR_HEADING( iParam0->_fU8, iParam0 + 48 );
        fVar5 = iParam1->_fU12 - fVar5;
        if (fVar5 < 0.00000000)
        {
            fVar5 += 360.00000000;
        }
        fVar4 = iParam1->_fU12 + 15.00000000;
        if (fVar4 >= 360.00000000)
        {
            fVar4 -= 360.00000000;
        }
        if (fVar4 > fVar5)
        {
            if ((iParam0->_fU48 > fVar5) AND (iParam0->_fU48 < fVar4))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((iParam0->_fU48 > fVar5) || (iParam0->_fU48 < fVar4))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

int sub_48695(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1331() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1331(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1331() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1331(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1331()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1331() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1331() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1662() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1662() )))
    {
        return 0;
    }
    return 1;
}

void sub_49100()
{
    if (HAS_CHAR_GOT_WEAPON( sub_1331(), 1 ))
    {
        SET_CURRENT_CHAR_WEAPON( sub_1331(), 1, 1 );
    }
    else if (HAS_CHAR_GOT_WEAPON( sub_1331(), 3 ))
    {
        l_U612 = 1;
    }
    if (HAS_CHAR_GOT_WEAPON( sub_1331(), 2 ))
    {
        l_U613 = 1;
    }
    GIVE_WEAPON_TO_CHAR( sub_1331(), 1, 0, 1 );
    l_U611 = 0;;
    return;
}

void sub_49607(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    int I;

    bVar3 = false;
    bVar4 = false;
    for ( I = 0; I < 6; I++ )
    {
        if (IS_VEH_DRIVEABLE( (uParam0^)[I]._fU8 ))
        {
            if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( (uParam0^)[I]._fU8, l_U269[l_U268]._fU0 ))
            {
                bVar3 = true;
            }
            if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( (uParam0^)[I]._fU0, l_U269[l_U268]._fU0, 0 ))
                {
                    bVar3 = true;
                }
            }
            else
            {
                bVar3 = true;
            }
            if (I != l_U267)
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( (uParam0^)[l_U268]._fU0, (uParam0^)[I]._fU8, 20.00000000, 20.00000000, 20.00000000, 0 ))
                {
                    if (NOT (sub_48453( ref (uParam0^)[I], ref l_U446 )))
                    {
                        bVar4 = true;
                    }
                }
            }
        }
        else
        {
            bVar3 = true;
        }
    }
    if (bVar3)
    {
        if (sub_47620( ref (uParam0^)[l_U268], 0 ))
        {
            if (IS_CHAR_SHOOTING( (uParam0^)[l_U268]._fU0 ))
            {
                PRINT_NOW( "raband", 7500, 1 );
                sub_43729();
            }
            else if (DOES_BLIP_EXIST( l_U269[l_U267]._fU16 ))
            {
                REMOVE_BLIP( l_U269[l_U267]._fU16 );
            }
            sub_49995();
            sub_50068();
            l_U568 = 0;
            l_U264 = 6;;
        }
        else
        {
            PRINT_NOW( "raband", 7500, 1 );
            sub_43729();
        }
    }
    else if (bVar4)
    {
        if (DOES_BLIP_EXIST( l_U269[l_U267]._fU16 ))
        {
            REMOVE_BLIP( l_U269[l_U267]._fU16 );
        }
        sub_49995();
        sub_50068();
        l_U568 = 0;
        l_U264 = 6;
    }
    return;
}

void sub_49995()
{
    int I;

    START_GPS_RACE_TRACK( 10 );
    for ( I = 0; I < l_U446._fU312; I++ )
    {
        ADD_POINT_TO_GPS_RACE_TRACK( ref l_U446._fU16[I] );
    }
    return;
}

void sub_50068()
{
    unknown uVar2;

    if (sub_47620( ref l_U269[l_U268], 0 ))
    {
        if (NOT l_U686)
        {
            l_U686 = 1;
            RENDER_RACE_TRACK( l_U686 );
        }
    }
    else if (l_U686)
    {
        l_U686 = 0;
        RENDER_RACE_TRACK( l_U686 );
    }
    return;
}

void sub_50305()
{
    switch (l_U265)
    {
        case 0:
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        CLEAR_PRINTS();
        l_U265 = 1;
        break;
        case 1:
        if (IS_CHAR_IN_ANY_CAR( l_U269[l_U268]._fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U269[l_U268]._fU0, ref l_U269[l_U268]._fU8 );
            SET_CAR_HEADING( l_U269[l_U268]._fU8, l_U446._fU12 );
            SET_CAR_COORDINATES( l_U269[l_U268]._fU8, l_U269[l_U268]._fU36._fU0, l_U269[l_U268]._fU36._fU4, l_U269[l_U268]._fU36._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( l_U269[l_U268]._fU8 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U269[l_U268]._fU8, -1.21200000, -0.43300000, 0.00000000, ref l_U546._fU0, ref l_U546._fU4, ref l_U546._fU8 );
            if ((sub_19821( sub_1331() )) == 4)
            {
                l_U641 = {-1.21200000, -0.43300000, 0.50000000};
            }
            else if ((sub_19821( sub_1331() )) == 1)
            {
                l_U641 = {-1.21200000, -0.43300000, 0.50000000};
            }
            else if ((sub_19821( sub_1331() )) == 0)
            {
                l_U641 = {-1.21200000, -0.40300000, 0.50000000};
            }
            else if ((sub_19821( sub_1331() )) == 2)
            {
                if ((IS_CAR_MODEL( l_U269[l_U268]._fU8, -891462355 )) || (IS_CAR_MODEL( l_U269[l_U268]._fU8, -114291515 )))
                {
                    l_U641 = {-1.21200000, -0.36300000, 0.60000000};
                }
                else if ((IS_CAR_MODEL( l_U269[l_U268]._fU8, -1759858085 )) || (IS_CAR_MODEL( l_U269[l_U268]._fU8, -1670998136 )))
                {
                    l_U641 = {-1.21200000, -0.30300000, 0.46000000};
                }
                else if ((IS_CAR_MODEL( l_U269[l_U268]._fU8, -255678177 )) || (IS_CAR_MODEL( l_U269[l_U268]._fU8, 1265391242 )))
                {
                    l_U641 = {-1.21200000, -0.38300000, 0.46000000};
                }
                else if ((IS_CAR_MODEL( l_U269[l_U268]._fU8, -909201658 )) || (IS_CAR_MODEL( l_U269[l_U268]._fU8, 1203311498 )))
                {
                    l_U641 = {-1.21200000, -0.40300000, 0.47000000};
                };;;;
            }
            else if ((sub_19821( sub_1331() )) == 3)
            {
                l_U641 = {-1.21200000, -0.43300000, 0.50000000};
            };;;;;
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_1662(), 0 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1331(), 1 );
            if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U269[l_U267]._fU0, l_U546._fU0, l_U546._fU4, l_U269[l_U267]._fU36._fU8 - 1.30000000 );
                ATTACH_PED_TO_CAR( l_U269[l_U267]._fU0, l_U269[l_U268]._fU8, 0, l_U641, l_U640, 0.00000000, 0, 0 );
            }
        }
        if (IS_VEH_DRIVEABLE( l_U269[l_U267]._fU8 ))
        {
            sub_51380();
            if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
            {
                CREATE_OBJECT( 800724201, l_U546._fU0, l_U546._fU4, l_U546._fU8, ref l_U610, 0 );
                ATTACH_OBJECT_TO_PED( l_U610, l_U269[l_U267]._fU0, 1232, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
                SET_CAR_HEADING( l_U269[l_U267]._fU8, l_U446._fU12 );
                SET_CAR_COORDINATES( l_U269[l_U267]._fU8, l_U269[l_U267]._fU36._fU0, l_U269[l_U267]._fU36._fU4, l_U269[l_U267]._fU36._fU8 );
                SET_CAR_ON_GROUND_PROPERLY( l_U269[l_U267]._fU8 );
            }
        }
        while (NOT (sub_44778( ref l_U556 )))
        {
            WAIT( 0 );
        }
        sub_52098();
        if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
        {
            TASK_PLAY_ANIM( l_U269[l_U267]._fU0, "Give_Bat", "MISSBIKE_COMBAT", 4.00000000, 0, 0, 0, 0, -1 );
        }
        sub_52958( ref l_U615 );
        if (NOT (IS_CHAR_INJURED( l_U269[l_U268]._fU0 )))
        {
            TASK_PLAY_ANIM( l_U269[l_U268]._fU0, ref l_U615, "MISSBIKE_COMBAT", 4.00000000, 0, 0, 0, 0, -1 );
        }
        DO_SCREEN_FADE_IN( 150 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
        {
            sub_23293( "MALC2_BAT", ref l_U550, 6, 1 );
        }
        l_U265 = 2;
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U269[l_U267]._fU0, 80, ref l_U635 );
            if (l_U635 == 7)
            {
                if (IS_VEH_DRIVEABLE( l_U269[l_U267]._fU8 ))
                {
                    if (NOT (IS_CHAR_IN_CAR( l_U269[l_U267]._fU0, l_U269[l_U267]._fU8 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U269[l_U267]._fU0, 12, ref l_U635 );
                        if (l_U635 == 7)
                        {
                            ;
                        }
                    }
                }
            }
            if (NOT l_U549)
            {
                if (NOT (sub_25070( l_U550 )))
                {
                    sub_23293( "MALC2_SHOOT", ref l_U550, 6, 1 );
                    l_U549 = 1;
                }
            }
            GET_SCRIPT_TASK_STATUS( l_U269[l_U268]._fU0, 80, ref l_U635 );
            if (l_U635 == 7)
            {
                if (NOT (sub_25070( l_U550 )))
                {
                    INCREMENT_INT_STAT( 373, 1 );
                    l_U265 = 3;
                }
            }
            else if (NOT l_U614)
            {
                sub_52958( ref l_U615 );
                if (IS_CHAR_PLAYING_ANIM( l_U269[l_U268]._fU0, "MISSBIKE_COMBAT", ref l_U615 ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U269[l_U268]._fU0, "MISSBIKE_COMBAT", ref l_U615, ref l_U609 );
                    if (l_U609 > (l_U682 - 0.20000000))
                    {
                        if (IS_CAM_ACTIVE( l_U678[0] ))
                        {
                            SET_CAM_ACTIVE( l_U678[0], 0 );
                            SET_CAM_PROPAGATE( l_U678[0], 0 );
                            SET_CAM_ACTIVE( l_U678[1], 1 );
                            SET_CAM_PROPAGATE( l_U678[1], 1 );
                        }
                        if (l_U609 > l_U682)
                        {
                            DETACH_OBJECT( l_U610, 0 );
                            ATTACH_OBJECT_TO_PED( l_U610, l_U269[l_U268]._fU0, 1219, 0.00000000, 0.03700000, -0.12000000, 135.00000000, 0.00000000, 0.00000000, 0 );
                            l_U614 = 1;
                        }
                    }
                }
            }
            else if (NOT (sub_25070( l_U550 )))
            {
                INCREMENT_INT_STAT( 373, 1 );
                l_U265 = 3;
            };;;
        }
        if (sub_53942())
        {
            INCREMENT_INT_STAT( 372, 1 );
            l_U265 = 3;
        }
        break;
        case 3:
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
        {
            if (IS_VEH_DRIVEABLE( l_U269[l_U267]._fU8 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( l_U269[l_U267]._fU0 )))
                {
                    DETACH_PED( l_U269[l_U267]._fU0, 1 );
                    WARP_CHAR_INTO_CAR( l_U269[l_U267]._fU0, l_U269[l_U267]._fU8 );
                }
            }
        }
        if (DOES_OBJECT_EXIST( l_U610 ))
        {
            DETACH_OBJECT( l_U610, 0 );
            DELETE_OBJECT( ref l_U610 );
        }
        CLEAR_PRINTS();
        sub_25575( ref l_U550, 0 );
        CLEAR_CHAR_TASKS( sub_1331() );
        sub_54308();
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        l_U264 = 6;
        break;
    }
    return;
}

void sub_51380()
{
    if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
    {
        if (IS_VEH_DRIVEABLE( l_U269[l_U267]._fU8 ))
        {
            sub_51472( ref l_U573, ref l_U269[l_U267]._fU0, ref l_U269[l_U267]._fU8 );
            SET_CAR_HEADING( l_U269[l_U267]._fU8, l_U269[l_U267]._fU48 );
            SET_CAR_COORDINATES( l_U269[l_U267]._fU8, l_U269[l_U267]._fU36._fU0, l_U269[l_U267]._fU36._fU4, l_U269[l_U267]._fU36._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( l_U269[l_U267]._fU8 );
        }
    }
    return;
}

void sub_51472(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_22514( iParam0 ) ))
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if ((iParam0->_fU0 != g_U11081[1]) AND (iParam0->_fU0 != g_U11081[0]))
        {
            g_U11114 = 1;
        }
        TASK_STAND_STILL( iParam0->_fU0, -2 );
    }
    return;
}

void sub_52098()
{
    int I;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U647[0] = {0.40600000, 0.92400000, 0.75600000};
    l_U660[0] = {5.60000000, 0.00000000, 134.98000000};
    l_U647[1] = {-0.23800000, 0.92400000, 0.70000000};
    l_U660[1] = {7.28000000, 0.00000000, 165.92000000};
    l_U647[2] = {-1.96000000, 0.51800000, 0.75600000};
    l_U660[2] = {8.44000000, 0.00000000, -125.12000000};
    l_U647[3] = {-1.96000000, 0.98000000, 0.75600000};
    l_U660[3] = {8.44000000, 0.00000000, -125.12000000};
    BEGIN_CAM_COMMANDS( ref l_U681 );
    for ( I = 0; I < 4; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U269[l_U268]._fU8 ))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U269[l_U268]._fU8, l_U647[I]._fU0, l_U647[I]._fU4, l_U647[I]._fU8, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        }
        l_U660[I]._fU8 = l_U446._fU12 + l_U660[I]._fU8;
        if (l_U660[I]._fU8 > 360.00000000)
        {
            l_U660[I]._fU8 -= 360.00000000;
        }
        else if (l_U660[I]._fU8 < 0.00000000)
        {
            l_U660[I]._fU8 += 360.00000000;
        }
        CREATE_CAM( 14, ref l_U673[I] );
        SET_CAM_POS( l_U673[I], uVar3._fU0, uVar3._fU4, uVar3._fU8 );
        SET_CAM_ROT( l_U673[I], l_U660[I]._fU0, l_U660[I]._fU4, l_U660[I]._fU8 );
        SET_CAM_FOV( l_U673[I], 40.00000000 );
    }
    CREATE_CAM( 3, ref l_U678[0] );
    SET_CAM_INTERP_STYLE_CORE( l_U678[0], l_U673[0], l_U673[1], 60000, 0 );
    SET_CAM_INTERP_STYLE_DETAILED( l_U678[0], 1, 0, 1, 1 );
    CREATE_CAM( 3, ref l_U678[1] );
    SET_CAM_INTERP_STYLE_CORE( l_U678[1], l_U673[2], l_U673[3], 60000, 0 );
    SET_CAM_INTERP_STYLE_DETAILED( l_U678[1], 1, 0, 1, 1 );
    SET_CAM_ACTIVE( l_U678[0], 1 );
    SET_CAM_PROPAGATE( l_U678[0], 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return;
}

void sub_52958(unknown uParam0)
{
    float fVar3;
    float fVar4;

    fVar3 = 330.00000000;
    fVar4 = 208.00000000;
    StrCopy( (uParam0^), "", 32 );
    ConcatString((uParam0^), sub_19821( sub_1331() ), 32);
    ConcatString((uParam0^), "_Take_Bat", 32);
    l_U682 = ((100.00000000 / fVar3) * fVar4) / 100.00000000;
    sub_53063( "handoverTime = ", l_U682 );
    sub_2284( "\n" );
    return;
}

void sub_53063(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_53942()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_54308()
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        SET_CAM_ACTIVE( l_U678[I], 0 );
        SET_CAM_PROPAGATE( l_U678[I], 0 );
        DESTROY_CAM( l_U678[I] );
    }
    for ( I = 0; I < 4; I++ )
    {
        SET_CAM_ACTIVE( l_U673[I], 0 );
        SET_CAM_PROPAGATE( l_U673[I], 0 );
        DESTROY_CAM( l_U673[I] );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref l_U681 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    return;
}

int sub_54588(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch ((uParam0^))
    {
        case 4:
        if ((uParam2^) < ((uParam1^) + 3000))
        {
            sub_54668( ref uParam3, uParam4, uParam5 );
            GET_GAME_TIMER( uParam2 );
            CLEAR_PRINTS();
        }
        else if (sub_56227( uParam3 ))
        {
            if (sub_44789( uParam6 ))
            {
                PRINT_WITH_NUMBER_BIG( "NUMBER", 3, 1100, 1 );
                PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_321" );
                GET_GAME_TIMER( uParam1 );
                (uParam0^) = 3;
            }
        }
        break;
        case 3:
        if ((uParam2^) < ((uParam1^) + 1000))
        {
            GET_GAME_TIMER( uParam2 );
        }
        else
        {
            PRINT_WITH_NUMBER_BIG( "NUMBER", 2, 1100, 1 );
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_321" );
            GET_GAME_TIMER( uParam1 );
            (uParam0^) = 2;
        }
        break;
        case 2:
        if ((uParam2^) < ((uParam1^) + 1000))
        {
            GET_GAME_TIMER( uParam2 );
        }
        else
        {
            PRINT_WITH_NUMBER_BIG( "NUMBER", 1, 1100, 1 );
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_321" );
            GET_GAME_TIMER( uParam1 );
            (uParam0^) = 1;
        }
        break;
        case 1:
        if ((uParam2^) < ((uParam1^) + 1000))
        {
            GET_GAME_TIMER( uParam2 );
        }
        else
        {
            PRINT_WITH_NUMBER_BIG( "GO", 3, 1100, 1 );
            PLAY_AUDIO_EVENT( "FRONTEND_OTHER_RACE_GO" );
            GET_GAME_TIMER( uParam1 );
            (uParam0^) = 0;
        }
        break;
        case 0:
        return 1;
        break;
    }
    return 0;
}

void sub_54668(unknown uParam0, unknown uParam1, int iParam2)
{
    vector vVar5;
    vector vVar8;
    vector vVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    vector vVar17;
    int iVar20;
    int iVar21;
    int iVar22;
    int iVar23;

    iVar20 = 7;
    iVar21 = 5;
    iVar22 = 4;
    iVar23 = 5;
    if ((uParam0^) != 0)
    {
        switch ((uParam0^))
        {
            case 1:
            vVar5 = {(uParam1^)[1]._fU36};
            vVar8 = {(uParam1^)[2]._fU36};
            vVar11 = {(uParam1^)[iVar20]._fU36};
            uVar14 = {(uParam1^)[iVar22]._fU36};
            vVar17 = {vVar5 - vVar8};
            vVar5 = {vVar5 + vVar17};
            vVar11 = {vVar11 + vVar17};
            vVar17 = {(uParam1^)[iVar23]._fU36 - (uParam1^)[iVar20]._fU36};
            vVar11 = {vVar11 + vVar17};
            vVar5.z += 1.00000000;
            vVar11.z += 2.00000000;
            break;
            case 2:
            vVar5 = {(uParam1^)[2]._fU36};
            vVar8 = {(uParam1^)[1]._fU36};
            vVar11 = {(uParam1^)[iVar22]._fU36};
            uVar14 = {(uParam1^)[iVar20]._fU36};
            vVar17 = {vVar5 - vVar8};
            vVar5 = {vVar5 + vVar17};
            vVar11 = {vVar11 + vVar17};
            vVar17 = {(uParam1^)[iVar22]._fU36 - (uParam1^)[iVar21]._fU36};
            vVar11 = {vVar11 + vVar17};
            vVar5.z += 3.00000000;
            vVar11.z += 4.00000000;
            break;
            case 3:
            vVar5 = {iParam2->_fU0};
            vVar17 = {(uParam1^)[2]._fU36 - (uParam1^)[0]._fU36};
            vVar8 = {vVar5 + vVar17};
            vVar8 = {vVar8 + vVar17};
            vVar8 = {vVar8 + vVar17};
            vVar8 = {vVar8 + vVar17};
            vVar11 = {vVar8};
            vVar8 = {vVar8 + vVar17};
            vVar8 = {vVar8 + vVar17};
            vVar8 = {vVar8 + vVar17};
            uVar14 = {vVar8};
            vVar8.z += 1.00000000;
            uVar14._fU8 += 1.50000000;
            vVar5.z += 1.00000000;
            vVar11.z += 2.50000000;
            break;
            case 4:
            vVar11 = {(uParam1^)[1]._fU36};
            uVar14 = {(uParam1^)[2]._fU36};
            vVar5 = {(uParam1^)[iVar20]._fU36};
            vVar8 = {(uParam1^)[iVar22]._fU36};
            vVar17 = {vVar5 - vVar8};
            vVar5 = {vVar5 + vVar17};
            vVar11 = {vVar11 + vVar17};
            vVar17 = {(uParam1^)[iVar23]._fU36 - (uParam1^)[iVar20]._fU36};
            vVar11 = {vVar11 + vVar17};
            vVar5.z += 1.00000000;
            vVar11.z += 2.00000000;
            break;
            case 5:
            vVar11 = {(uParam1^)[2]._fU36};
            uVar14 = {(uParam1^)[1]._fU36};
            vVar5 = {(uParam1^)[iVar22]._fU36};
            vVar8 = {(uParam1^)[iVar20]._fU36};
            vVar17 = {vVar5 - vVar8};
            vVar5 = {vVar5 + vVar17};
            vVar11 = {vVar11 + vVar17};
            vVar17 = {(uParam1^)[iVar22]._fU36 - (uParam1^)[iVar21]._fU36};
            vVar11 = {vVar11 + vVar17};
            vVar5.z += 3.00000000;
            vVar11.z += 4.00000000;
            break;
            case 6:
            vVar11 = {iParam2->_fU0};
            vVar17 = {(uParam1^)[2]._fU36 - (uParam1^)[0]._fU36};
            vVar8 = {vVar11 + vVar17};
            vVar8 = {vVar8 + vVar17};
            vVar8 = {vVar8 + vVar17};
            vVar8 = {vVar8 + vVar17};
            vVar5 = {vVar8};
            vVar8 = {vVar8 + vVar17};
            vVar8 = {vVar8 + vVar17};
            vVar8 = {vVar8 + vVar17};
            uVar14 = {vVar8};
            vVar8.z += 1.00000000;
            uVar14._fU8 += 1.50000000;
            vVar5.z += 2.50000000;
            vVar11.z += 1.00000000;
            break;
        }
        if (NOT (DOES_CAM_EXIST( l_U41 )))
        {
            BEGIN_CAM_COMMANDS( ref l_U38 );
            CREATE_CAM( 14, ref l_U39 );
            SET_CAM_POS( l_U39, vVar5.x, vVar5.y, vVar5.z );
            POINT_CAM_AT_COORD( l_U39, vVar8.x, vVar8.y, vVar8.z );
            CREATE_CAM( 14, ref l_U40 );
            SET_CAM_POS( l_U40, vVar11.x, vVar11.y, vVar11.z + 2.00000000 );
            POINT_CAM_AT_COORD( l_U40, uVar14._fU0, uVar14._fU4, uVar14._fU8 );
            CREATE_CAM( 3, ref l_U41 );
            SET_CAM_INTERP_STYLE_CORE( l_U41, l_U39, l_U40, 7500, 0 );
            SET_CAM_INTERP_STYLE_DETAILED( l_U41, 1, 0, 1, 1 );
            SET_CAM_ACTIVE( l_U41, 1 );
            SET_CAM_PROPAGATE( l_U41, 1 );
            SET_CAM_FOV( l_U41, 30.00000000 );
            SET_CAM_NEAR_DOF( l_U41, 7.50000000 );
            SET_CAM_FAR_DOF( l_U41, 10.00000000 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        }
    }
    return;
}

int sub_56227(int iParam0)
{
    if (iParam0 != 0)
    {
        if (DOES_CAM_EXIST( l_U41 ))
        {
            if ((sub_53942()) || (NOT IS_CAM_INTERPOLATING()))
            {
                if (DOES_CAM_EXIST( l_U41 ))
                {
                    SET_CAM_ACTIVE( l_U41, 0 );
                    SET_CAM_PROPAGATE( l_U41, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    DESTROY_CAM( l_U41 );
                }
                if (DOES_CAM_EXIST( l_U39 ))
                {
                    SET_CAM_ACTIVE( l_U39, 0 );
                    SET_CAM_PROPAGATE( l_U39, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    DESTROY_CAM( l_U39 );
                }
                if (DOES_CAM_EXIST( l_U40 ))
                {
                    SET_CAM_ACTIVE( l_U40, 0 );
                    SET_CAM_PROPAGATE( l_U40, 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    DESTROY_CAM( l_U40 );
                    END_CAM_COMMANDS( ref l_U38 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                }
                return 1;
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_57081(int iParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;
    boolean bVar8;

    fVar7 = 0.60000000;
    bVar8 = true;
    if (DOES_BLIP_EXIST( iParam0->_fU24 ))
    {
        REMOVE_BLIP( iParam0->_fU24 );
        DELETE_CHECKPOINT( iParam0->_fU32 );
    }
    if (NOT (DOES_BLIP_EXIST( iParam0->_fU24 )))
    {
        ADD_BLIP_FOR_COORD( iParam1->_fU16[iParam0->_fU52]._fU0, iParam1->_fU16[iParam0->_fU52]._fU4, iParam1->_fU16[iParam0->_fU52]._fU8, iParam0 + 24 );
        CHANGE_BLIP_DISPLAY( iParam0->_fU24, 2 );
        GET_GROUND_Z_FOR_3D_COORD( iParam1->_fU16[iParam0->_fU52]._fU0, iParam1->_fU16[iParam0->_fU52]._fU4, iParam1->_fU16[iParam0->_fU52]._fU8, ref uVar4._fU8 );
        uVar4._fU0 = iParam1->_fU16[iParam0->_fU52]._fU0;
        uVar4._fU4 = iParam1->_fU16[iParam0->_fU52]._fU4;
        uVar4._fU8 += 3.00000000;
        if (iParam0->_fU52 == (iParam1->_fU312 - 1))
        {
            if (iParam0->_fU60 == iParam1->_fU316)
            {
                iParam0->_fU32 = CREATE_CHECKPOINT( 3, uVar4, iParam1->_fU16[iParam0->_fU52], 1.00000000 );
                CHANGE_BLIP_SPRITE( iParam0->_fU24, 65 );
                bVar8 = false;
            }
            else
            {
                iParam0->_fU32 = CREATE_CHECKPOINT( 2, uVar4, iParam1->_fU16[0], 1.00000000 );
            }
        }
        else
        {
            iParam0->_fU32 = CREATE_CHECKPOINT( 2, uVar4, iParam1->_fU16[iParam0->_fU52 + 1], 1.00000000 );
        }
    }
    if (DOES_BLIP_EXIST( iParam0->_fU28 ))
    {
        REMOVE_BLIP( iParam0->_fU28 );
    }
    if (bVar8)
    {
        if (NOT (DOES_BLIP_EXIST( iParam0->_fU28 )))
        {
            if (iParam0->_fU56 < (iParam1->_fU312 - 1))
            {
                ADD_BLIP_FOR_COORD( iParam1->_fU16[iParam0->_fU56]._fU0, iParam1->_fU16[iParam0->_fU56]._fU4, iParam1->_fU16[iParam0->_fU56]._fU8, iParam0 + 28 );
                CHANGE_BLIP_DISPLAY( iParam0->_fU28, 2 );
                DIM_BLIP( iParam0->_fU28, 1 );
                CHANGE_BLIP_SCALE( iParam0->_fU28, fVar7 );
            }
            else if (iParam0->_fU56 == (iParam1->_fU312 - 1))
            {
                if (iParam0->_fU60 == iParam1->_fU316)
                {
                    ADD_BLIP_FOR_COORD( iParam1->_fU16[iParam0->_fU56]._fU0, iParam1->_fU16[iParam0->_fU56]._fU4, iParam1->_fU16[iParam0->_fU56]._fU8, iParam0 + 28 );
                    CHANGE_BLIP_SPRITE( iParam0->_fU28, 65 );
                    CHANGE_BLIP_DISPLAY( iParam0->_fU28, 2 );
                    CHANGE_BLIP_SCALE( iParam0->_fU28, fVar7 );
                }
                else
                {
                    ADD_BLIP_FOR_COORD( iParam1->_fU16[iParam0->_fU56]._fU0, iParam1->_fU16[iParam0->_fU56]._fU4, iParam1->_fU16[iParam0->_fU56]._fU8, iParam0 + 28 );
                    DIM_BLIP( iParam0->_fU28, 1 );
                    CHANGE_BLIP_DISPLAY( iParam0->_fU28, 2 );
                    CHANGE_BLIP_SCALE( iParam0->_fU28, fVar7 );
                }
            }
        }
    }
    return;
}

void sub_58055(int iParam0, unknown uParam1, int iParam2)
{
    int Result;
    int I;

    Result = iParam2->_fU320 - 1;
    for ( I = 0; I < (iParam2->_fU320 - 1); I++ )
    {
        if (iParam0->_fU60 == (uParam1^)[I]._fU60)
        {
            if (iParam0->_fU52 == (uParam1^)[I]._fU52)
            {
                if (iParam0->_fU68 < (uParam1^)[I]._fU68)
                {
                    if (Result > 0)
                    {
                        Result--;
                        sub_58188( ref (uParam1^)[I] );
                    }
                }
                else
                {
                    sub_58404( ref (uParam1^)[I] );
                }
            }
            else if (iParam0->_fU52 > (uParam1^)[I]._fU52)
            {
                if (Result > 0)
                {
                    Result--;
                    sub_58188( ref (uParam1^)[I] );
                }
            }
            else
            {
                sub_58404( ref (uParam1^)[I] );
            }
        }
        else if (iParam0->_fU60 > (uParam1^)[I]._fU60)
        {
            if (Result > 0)
            {
                Result--;
                sub_58188( ref (uParam1^)[I] );
            }
        }
        else
        {
            sub_58404( ref (uParam1^)[I] );
        }
    }
    return Result;
}

void sub_58188(int iParam0)
{
    int iVar3;
    float fVar4;

    fVar4 = 0.20000000 * (g_U39118 + 1);
    if (fVar4 > 2.00000000)
    {
        fVar4 = 2.00000000;
    }
    if (iParam0->_fU0 != sub_1331())
    {
        if ((NOT (IS_CAR_DEAD( iParam0->_fU8 ))) AND (NOT (IS_CHAR_DEAD( iParam0->_fU0 ))))
        {
            if (iParam0->_fU64 < 50.00000000)
            {
                if (IS_CHAR_IN_CAR( iParam0->_fU0, iParam0->_fU8 ))
                {
                    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 15, ref iVar3 );
                    if (iVar3 == 1)
                    {
                        iParam0->_fU64 += 0.20000000;
                        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU64 );
                    }
                }
            }
        }
    }
    return;
}

void sub_58404(int iParam0)
{
    int iVar3;

    if (iParam0->_fU0 != sub_1331())
    {
        if ((NOT (IS_CAR_DEAD( iParam0->_fU8 ))) AND (NOT (IS_CHAR_DEAD( iParam0->_fU0 ))))
        {
            if (iParam0->_fU64 > 25.00000000)
            {
                if (IS_CHAR_IN_CAR( iParam0->_fU0, iParam0->_fU8 ))
                {
                    GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 15, ref iVar3 );
                    if (iVar3 == 1)
                    {
                        iParam0->_fU64 -= 0.00500000;
                        SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU64 );
                    }
                }
            }
        }
    }
    return;
}

void sub_58748(unknown uParam0, int iParam1, unknown uParam2, int iParam3, int iParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    float fVar18;
    float fVar19;

    if (NOT sub_46306())
    {
        if (IS_HUD_PREFERENCE_SWITCHED_ON())
        {
            if (GET_IS_HIDEF())
            {
                uVar14 = l_U3;
                uVar15 = l_U4;
                uVar16 = l_U20;
                uVar17 = l_U14;
                fVar18 = 0.00000000;
            }
            else
            {
                uVar14 = l_U5;
                uVar15 = l_U6;
                uVar16 = l_U20;
                uVar17 = l_U15;
                fVar18 = 0.00000000;
            }
            fVar19 = sub_58861();
            if ((fVar19 < 1.26000000) AND (fVar19 > 1.24000000))
            {
                uVar16 = l_U21;
                uVar17 = l_U16;
                fVar18 = l_U7;
            }
            SET_WIDESCREEN_FORMAT( 3 );
            DISPLAY_AREA_NAME( 0 );
            if (iParam1 == 1)
            {
                GET_HUD_COLOUR( 10, ref uVar8, ref uVar9, ref uVar10, ref uVar11 );
            }
            else
            {
                GET_HUD_COLOUR( 7, ref uVar8, ref uVar9, ref uVar10, ref uVar11 );
            }
            if (IS_NETWORK_SESSION())
            {
                GET_HUD_COLOUR( sub_59011( GET_PLAYER_ID() ), ref uVar8, ref uVar9, ref uVar10, ref uVar11 );
            }
            if (iParam4 > 1)
            {
                sub_59327( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                fVar12 = sub_59547( "OUTOF_NUM", uVar14, l_U31 + uVar15, l_U32, l_U33, uVar8, uVar9, uVar10, uVar11, 3, uParam2 );
                sub_59327( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                fVar13 = sub_59884( iParam1, uVar14, l_U27 + uVar15, l_U28, l_U29, uVar8, uVar9, uVar10, uVar11, 3 );
                if (fVar12 < fVar13)
                {
                    fVar12 = fVar13;
                }
                sub_59327( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                sub_60481( (uVar14 - fVar12) - uVar16, l_U23 + uVar15, l_U24, l_U25, uVar8, uVar9, uVar10, uVar11, 3, iParam1 );
                sub_59327( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                sub_60657( "NUM_OUTOF_NUM", uVar14, l_U11 + uVar15, l_U12, l_U13, 255, 255, 255, 255, 3, iParam3 + 1, iParam4 );
                sub_59327( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                sub_60657( "LAP", uVar17, l_U17 + uVar15, l_U18, l_U19, 255, 255, 255, 255, 3, iParam3 + 1, iParam4 );
            }
            else
            {
                sub_59327( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                fVar12 = sub_59547( "OUTOF_NUM", uVar14, l_U30 + uVar15, l_U32, l_U33, uVar8, uVar9, uVar10, uVar11, 3, uParam2 );
                sub_59327( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                fVar13 = sub_59884( iParam1, uVar14, l_U26 + uVar15, l_U28, l_U29, uVar8, uVar9, uVar10, uVar11, 3 );
                if (fVar12 < fVar13)
                {
                    fVar12 = fVar13;
                }
                sub_59327( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
                sub_60481( (uVar14 - fVar12) - uVar16, l_U22 + uVar15, l_U24, l_U25, uVar8, uVar9, uVar10, uVar11, 3, iParam1 );
            }
            sub_59327( 6, 0.00000000, 1.00000000, 3, 1, 0, 0, 0, 255 );
            sub_61167( uVar14 + fVar18, l_U8 + uVar15, l_U9, l_U10, 255, 255, 255, 255, 3, uParam0, 1065353216 );
            SET_WIDESCREEN_FORMAT( 0 );
        }
    }
    return;
}

void sub_58861()
{
    return GET_ASPECT_RATIO();
}

void sub_59011(unknown uParam0)
{
    int[32] iVar3;

    array(ref iVar3, 32);
    iVar3[0] = 26;
    iVar3[1] = 27;
    iVar3[2] = 28;
    iVar3[3] = 29;
    iVar3[4] = 30;
    iVar3[5] = 31;
    iVar3[6] = 32;
    iVar3[7] = 33;
    iVar3[8] = 34;
    iVar3[9] = 35;
    iVar3[10] = 36;
    iVar3[11] = 37;
    iVar3[12] = 38;
    iVar3[13] = 39;
    iVar3[14] = 40;
    iVar3[15] = 41;
    iVar3[16] = 42;
    iVar3[17] = 43;
    iVar3[18] = 44;
    iVar3[19] = 45;
    iVar3[20] = 46;
    iVar3[21] = 47;
    iVar3[22] = 48;
    iVar3[23] = 49;
    iVar3[24] = 50;
    iVar3[25] = 51;
    iVar3[26] = 52;
    iVar3[27] = 53;
    iVar3[28] = 54;
    iVar3[29] = 55;
    iVar3[30] = 56;
    iVar3[31] = 57;
    return iVar3[uParam0];
}

void sub_59327(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    SET_TEXT_FONT( uParam0 );
    SET_TEXT_BACKGROUND( 0 );
    SET_TEXT_DROPSHADOW( 0, 0, 0, 0, 255 );
    SET_TEXT_EDGE( 0, 0, 0, 0, 255 );
    switch (uParam3)
    {
        case 1:
        SET_TEXT_BACKGROUND( 1 );
        break;
        case 2:
        SET_TEXT_DROPSHADOW( uParam4, uParam5, uParam6, uParam7, uParam8 );
        break;
        case 3:
        SET_TEXT_EDGE( uParam4, uParam5, uParam6, uParam7, uParam8 );
        break;
    }
    SET_TEXT_PROPORTIONAL( 1 );
    SET_TEXT_WRAP( uParam1, uParam2 );
    return;
}

void sub_59547(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_59587( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    DISPLAY_TEXT_WITH_NUMBER( uParam1, uParam2, uParam0, uParam10 );
    return Result;
}

void sub_59587(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        SET_TEXT_JUSTIFY( 0 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        break;
        case 1:
        SET_TEXT_JUSTIFY( 0 );
        SET_TEXT_CENTRE( 1 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        break;
        case 2:
        SET_TEXT_JUSTIFY( 1 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 0 );
        break;
        case 3:
        SET_TEXT_JUSTIFY( 0 );
        SET_TEXT_CENTRE( 0 );
        SET_TEXT_RIGHT_JUSTIFY( 1 );
        SET_TEXT_WRAP( 0.00000000, (uParam1^) );
        (uParam1^) = 0.00000000;
        break;
    }
    return;
}

void sub_59884(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    if ((iParam0 == 61) || ((iParam0 == 51) || ((iParam0 == 41) || ((iParam0 == 31) || ((iParam0 == 21) || (iParam0 == 1))))))
    {
        return sub_59959( "ST", uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, 0 );
    }
    if ((iParam0 == 62) || ((iParam0 == 52) || ((iParam0 == 42) || ((iParam0 == 32) || ((iParam0 == 22) || (iParam0 == 2))))))
    {
        return sub_59959( "ND", uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, 0 );
    }
    if ((iParam0 == 63) || ((iParam0 == 53) || ((iParam0 == 43) || ((iParam0 == 33) || ((iParam0 == 23) || (iParam0 == 3))))))
    {
        return sub_59959( "RD", uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, 0 );
    }
    return sub_59959( "TH", uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, uParam8, uParam9, 0 );
}

void sub_59959(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    float Result;

    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_59587( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH( uParam0 );
    if (((NOT GET_IS_HIDEF()) AND (NOT GET_IS_WIDESCREEN())) AND ((Result >= 0.25000000) AND (uParam10)))
    {
        while (NOT (sub_60050( uParam0, uParam1, uParam3, uParam4, uParam9, ref Result, 0 )))
        {
            ;
        }
    }
    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    DISPLAY_TEXT( uParam1, uParam2, uParam0 );
    return Result;
}

boolean sub_60050(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, boolean bParam6)
{
    SET_TEXT_SCALE( uParam2 * 0.80000000, uParam3 * 0.80000000 );
    sub_59587( uParam4, ref uParam1 );
    if (bParam6)
    {
        (uParam5^) = GET_STRING_WIDTH_WITH_STRING( "STRING", uParam0 );
    }
    else
    {
        (uParam5^) = GET_STRING_WIDTH( uParam0 );
    }
    return (uParam5^) < 0.25000000;
}

void sub_60481(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    unknown Result;

    SET_TEXT_COLOUR( uParam4, uParam5, uParam6, uParam7 );
    SET_TEXT_SCALE( uParam2, uParam3 );
    sub_59587( uParam8, ref uParam0 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam9 );
    DISPLAY_TEXT_WITH_NUMBER( uParam0, uParam1, "NUMBER", uParam9 );
    return Result;
}

void sub_60657(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    float Result;

    SET_TEXT_COLOUR( uParam5, uParam6, uParam7, uParam8 );
    SET_TEXT_SCALE( uParam3, uParam4 );
    sub_59587( uParam9, ref uParam1 );
    Result = GET_STRING_WIDTH_WITH_NUMBER( uParam0, uParam10 );
    Result += GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", uParam11 );
    Result -= GET_STRING_WIDTH_WITH_NUMBER( "NUMBER", 11 );
    DISPLAY_TEXT_WITH_2_NUMBERS( uParam1, uParam2, uParam0, uParam10, uParam11 );
    return Result;
}

float sub_61167(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, int iParam9, unknown uParam10)
{
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    float fVar22;
    float fVar23;
    float fVar24;
    float fVar25;
    float fVar26;

    if (iParam9 < 0)
    {
        iParam9 = 0;
    }
    else if (iParam9 > 5999990)
    {
        iParam9 = 5999990;
    }
    iVar13 = iParam9 / 10;
    iVar14 = iParam9 / 1000;
    iVar15 = iVar14 / 60;
    iVar13 -= iVar14 * 100;
    iVar14 -= iVar15 * 60;
    iVar16 = iVar13 / 10;
    iVar17 = iVar13 mod 10;
    iVar18 = iVar14 / 10;
    iVar19 = iVar14 mod 10;
    iVar20 = iVar15 / 10;
    iVar21 = iVar15 mod 10;
    SET_TEXT_SCALE( uParam2, uParam3 );
    fVar22 = (GET_STRING_WIDTH_WITH_STRING( "STRING", "0" )) * uParam10;
    fVar23 = (GET_STRING_WIDTH( "COLON" )) * uParam10;
    fVar24 = fVar22 * 0.50000000;
    fVar25 = fVar23 * 0.50000000;
    if (iParam8 == 2)
    {
        fVar26 = uParam0 + (fVar22 / 2);
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_59959( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_59959( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 += fVar25;
        fVar26 += fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
    }
    else if (iParam8 == 3)
    {
        fVar26 = uParam0 - (fVar22 / 2);
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_59959( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_59959( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 -= fVar25;
        fVar26 -= fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    else
    {
        fVar26 = uParam0 + fVar24;
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar19 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_59959( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 += fVar24;
        fVar26 += fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar16 );
        fVar26 += fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar17 );
        fVar26 = uParam0 - fVar24;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar18 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_59959( "COLON", fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, 0 );
        fVar26 -= fVar24;
        fVar26 -= fVar25;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar21 );
        fVar26 -= fVar22;
        USE_PREVIOUS_FONT_SETTINGS();
        sub_60481( fVar26, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 1, iVar20 );
    }
    return (6 * fVar22) + (2 * fVar23);
}

void sub_62674(unknown uParam0, int iParam1)
{
    unknown uVar4;
    int I;

    for ( I = 0; I < 6; I++ )
    {
        if (NOT (IS_CAR_DEAD( (uParam0^)[I]._fU8 )))
        {
            if ((NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))) AND (NOT (IS_CHAR_DEAD( (uParam0^)[I]._fU0 ))))
            {
                CLEAR_CHAR_TASKS( (uParam0^)[I]._fU0 );
                FREEZE_CAR_POSITION( (uParam0^)[I]._fU8, 0 );
                SET_CAR_PROOFS( (uParam0^)[I]._fU8, 0, 0, 0, 0, 0 );
                SET_BLIP_THROTTLE_RANDOMLY( (uParam0^)[I]._fU8, 0 );
                uVar4 = (uParam0^)[I]._fU52;
                TASK_CAR_DRIVE_TO_COORD( (uParam0^)[I]._fU0, (uParam0^)[I]._fU8, iParam1->_fU16[uVar4]._fU0, iParam1->_fU16[uVar4]._fU4, iParam1->_fU16[uVar4]._fU8, (uParam0^)[I]._fU64, 1, 0, 3, l_U37, iParam1->_fU308 );
                WAIT( 1 );
            }
        }
    }
    return;
}

void sub_63059(int iParam0, int iParam1)
{
    if (sub_47620( iParam0, 0 ))
    {
        if (sub_63085( iParam0, iParam1 ))
        {
            if (iParam0->_fU52 < (iParam1->_fU312 - 1))
            {
                iParam0->_fU52++;
                if (iParam0->_fU56 == (iParam1->_fU312 - 1))
                {
                    if (iParam0->_fU60 < iParam1->_fU316)
                    {
                        iParam0->_fU56 = 0;
                    }
                }
                else
                {
                    iParam0->_fU56++;
                }
                sub_57081( iParam0, iParam1 );
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT" );
            }
            else if (iParam0->_fU60 < iParam1->_fU316)
            {
                iParam0->_fU52 = 0;
                iParam0->_fU56 = 1;
                iParam0->_fU60++;
                sub_57081( iParam0, iParam1 );
                PLAY_AUDIO_EVENT( "FRONTEND_GAME_PICKUP_CHECKPOINT_LAP" );
            }
            else if (DOES_BLIP_EXIST( iParam0->_fU24 ))
            {
                iParam0->_fU84 = 5;
                REMOVE_BLIP( iParam0->_fU24 );
                DELETE_CHECKPOINT( iParam0->_fU32 );
            };;;
        }
        else if (NOT (DOES_BLIP_EXIST( iParam0->_fU24 )))
        {
            sub_57081( iParam0, iParam1 );
        }
        GET_CHAR_COORDINATES( iParam0->_fU0, (iParam0 + 36) + 0, (iParam0 + 36) + 4, (iParam0 + 36) + 8 );
        iParam0->_fU68 = VDIST( iParam0->_fU36, iParam1->_fU16[iParam0->_fU52] );
    }
    else if (DOES_BLIP_EXIST( iParam0->_fU24 ))
    {
        REMOVE_BLIP( iParam0->_fU24 );
        DELETE_CHECKPOINT( iParam0->_fU32 );
    }
    if (DOES_BLIP_EXIST( iParam0->_fU28 ))
    {
        REMOVE_BLIP( iParam0->_fU28 );
    }
    return;
}

int sub_63085(int iParam0, int iParam1)
{
    if (iParam0->_fU52 > -1)
    {
        if (LOCATE_CHAR_IN_CAR_3D( iParam0->_fU0, iParam1->_fU16[iParam0->_fU52]._fU0, iParam1->_fU16[iParam0->_fU52]._fU4, iParam1->_fU16[iParam0->_fU52]._fU8, l_U37, l_U37, l_U37, 0 ))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_63942()
{
    if (sub_47620( ref l_U269[l_U268], 0 ))
    {
        if (l_U263 == 1)
        {
            if (DOES_BLIP_EXIST( l_U269[l_U268]._fU20 ))
            {
                REMOVE_BLIP( l_U269[l_U268]._fU20 );
                l_U269[l_U268]._fU20 = nil;
            }
            sub_57081( ref l_U269[l_U268], ref l_U446 );
        }
    }
    else if (IS_VEH_DRIVEABLE( l_U269[l_U268]._fU8 ))
    {
        if (NOT (DOES_BLIP_EXIST( l_U269[l_U268]._fU20 )))
        {
            ADD_BLIP_FOR_CAR( l_U269[l_U268]._fU8, ref l_U269[l_U268]._fU20 );
            SET_BLIP_AS_FRIENDLY( l_U269[l_U268]._fU20, 1 );
        }
        if (DOES_BLIP_EXIST( l_U269[l_U268]._fU24 ))
        {
            sub_1607();
            REMOVE_BLIP( l_U269[l_U268]._fU24 );
            DELETE_CHECKPOINT( l_U269[l_U268]._fU32 );
        }
        if (DOES_BLIP_EXIST( l_U269[l_U268]._fU28 ))
        {
            REMOVE_BLIP( l_U269[l_U268]._fU28 );
        }
    }
    else
    {
        PRINT_NOW( "raband", 7500, 1 );
        sub_43729();
    }
    if (sub_64357( ref l_U269[l_U268], 0, ref l_U627, ref l_U629, 30000 ))
    {
        PRINT_NOW( "raband", 7500, 1 );
        sub_43729();
    }
    return;
}

int sub_64357(int iParam0, int iParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;
    int iVar8;
    int iVar9;

    if (sub_47620( iParam0, iParam1 ))
    {
        (uParam3^) = (uParam2^);
    }
    else
    {
        iVar7 = (uParam2^) - (uParam3^);
        iVar8 = iParam4 - iVar7;
        iVar9 = iVar8 / 1000;
        if (iVar9 > 0)
        {
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
            iVar9 = iVar8 / 1000;
            if (iVar9 < 11)
            {
                if (iParam0->_fU20 == nil)
                {
                    if (iParam1 != 0)
                    {
                        if (iVar9 == 1)
                        {
                            PRINT_WITH_NUMBER_NOW( "RACEOUTCAR", iVar9, 250, 1 );
                        }
                        else
                        {
                            PRINT_WITH_NUMBER_NOW( "RACEOUTCARs", iVar9, 250, 1 );
                        }
                    }
                    else if (iVar9 == 1)
                    {
                        PRINT_WITH_NUMBER_NOW( "RACEOUTBIK", iVar9, 250, 1 );
                    }
                    else
                    {
                        PRINT_WITH_NUMBER_NOW( "RACEOUTBIKs", iVar9, 250, 1 );
                    }
                }
                else if (iParam1 != 0)
                {
                    if (iVar9 == 1)
                    {
                        PRINT_WITH_NUMBER_NOW( "RACEOUTCARBLIP", iVar8 / 1000, 250, 1 );
                    }
                    else
                    {
                        PRINT_WITH_NUMBER_NOW( "RACEOUTCARBLIPS", iVar8 / 1000, 250, 1 );
                    }
                }
                else if (iVar9 == 1)
                {
                    PRINT_WITH_NUMBER_NOW( "RACEOUTBIKBLIP", iVar8 / 1000, 250, 1 );
                }
                else
                {
                    PRINT_WITH_NUMBER_NOW( "RACEOUTBIKBLIPS", iVar8 / 1000, 250, 1 );
                };;;
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

void sub_64945(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown[7] uVar11;

    array(ref uVar11, 7);
    uVar11[0] = (uParam2^);
    uVar11[1] = (uParam3^);
    uVar11[2] = (uParam4^);
    uVar11[3] = (uParam5^);
    uVar11[4] = (uParam6^);
    uVar11[5] = (uParam7^);
    uVar11[6] = (uParam8^);
    sub_65029( uParam0, ref uVar11, uParam1 );
    return;
}

void sub_65029(int iParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int I;
    int iVar7;
    float fVar8;
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

    (uParam2^)[0] = 0;
    (uParam2^)[1] = 0;
    (uParam2^)[2] = 0;
    if (IS_CHAR_ON_ANY_BIKE( sub_1331() ))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1331() ))
        {
            SET_SUPPRESS_HEADLIGHT_SWITCH( 1 );
            BLOCK_PED_WEAPON_SWITCHING( sub_1331(), 1 );
            SET_PLAYER_CAN_DO_DRIVE_BY( sub_1662(), 0 );
            SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_1331(), 0 );
            sub_2284( "SET_CHAR_CURRENT_WEAPON_VISIBLE(PLAYER_CHAR_ID(), FALSE) \n" );
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            SET_HIDE_WEAPON_ICON( 1 );
        }
    }
    if (sub_65242( sub_1331(), (iParam0->_fU0 == 4) || (iParam0->_fU0 == 9) ))
    {
        if (HAS_CHAR_GOT_WEAPON( sub_1331(), 1 ))
        {
            GET_CURRENT_CHAR_WEAPON( sub_1331(), ref iVar5 );
            if (iVar5 != 1)
            {
                SET_CURRENT_CHAR_WEAPON( sub_1331(), 1, 0 );
            }
        }
        if (USING_STANDARD_CONTROLS())
        {
            l_U34[0] = 51;
            l_U34[1] = 42;
        }
        else
        {
            l_U34[0] = 84;
            l_U34[1] = 42;
        }
        switch (iParam0->_fU0)
        {
            case 11:
            l_U257 = -1;
            if (((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 0, 138 ))) || ((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 0, l_U34[0] ))))
            {
                l_U257 = 0;
                iParam0->_fU0 = 0;
            }
            else if (((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 0, 137 ))) || ((IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 0, l_U34[1] ))))
            {
                l_U257 = 1;
                iParam0->_fU0 = 5;
            }
            if (l_U257 != -1)
            {
                sub_65752( sub_1331(), iParam0->_fU0, ref l_U256, 0 );
                GET_GAME_TIMER( ref l_U258 );
            }
            break;
            case 0:
            case 5:
            if (((((IS_CONTROL_PRESSED( 0, 137 )) AND (l_U257 == 1)) || ((IS_CONTROL_PRESSED( 0, 138 )) AND (l_U257 == 0))) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 0, l_U34[l_U257] )) AND (IS_USING_CONTROLLER())))
            {
                GET_GAME_TIMER( ref iVar7 );
                if ((iVar7 - l_U258) >= 500)
                {
                    if (iParam0->_fU0 == 0)
                    {
                        iParam0->_fU0 = 2;
                        sub_65752( sub_1331(), iParam0->_fU0, ref l_U256, 0 );
                    }
                    else
                    {
                        iParam0->_fU0 = 7;
                        sub_65752( sub_1331(), iParam0->_fU0, ref l_U256, 0 );
                    }
                }
            }
            else if (l_U257 == 0)
            {
                iParam0->_fU0 = 1;
                sub_65752( sub_1331(), iParam0->_fU0, ref l_U256, 0 );
            }
            else
            {
                iParam0->_fU0 = 6;
                sub_65752( sub_1331(), iParam0->_fU0, ref l_U256, 0 );
            }
            break;
            case 2:
            case 7:
            if (((((NOT (IS_CONTROL_PRESSED( 0, 137 ))) AND (l_U257 == 1)) || ((NOT (IS_CONTROL_PRESSED( 0, 138 ))) AND (l_U257 == 0))) AND (NOT IS_USING_CONTROLLER())) || ((NOT (IS_CONTROL_PRESSED( 0, l_U34[l_U257] ))) AND (IS_USING_CONTROLLER())))
            {
                if (l_U257 == 0)
                {
                    iParam0->_fU0 = 3;
                    sub_65752( sub_1331(), iParam0->_fU0, ref l_U256, 0 );
                }
                else
                {
                    iParam0->_fU0 = 8;
                    sub_65752( sub_1331(), iParam0->_fU0, ref l_U256, 0 );
                }
            }
            break;
            case 1:
            case 6:
            case 3:
            case 8:
            sub_65789( sub_1331(), iParam0->_fU0, ref uVar13, ref uVar21 );
            if (IS_CHAR_PLAYING_ANIM( sub_1331(), ref uVar21, ref uVar13 ))
            {
                if (iParam0->_fU28 == 0)
                {
                    GET_CHAR_ANIM_CURRENT_TIME( sub_1331(), ref uVar21, ref uVar13, ref fVar8 );
                    if (fVar8 >= 0.25000000)
                    {
                        for ( I = 0; I <= ((uParam1^) - 1); I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( (uParam1^)[I] )))
                            {
                                if (sub_67394( sub_1331(), (uParam1^)[I], iParam0 + 0, ref uVar10 ))
                                {
                                    SET_BIT( ref (uParam2^)[0], I );
                                    if (uVar10._fU4)
                                    {
                                        SET_BIT( ref (uParam2^)[1], I );
                                    }
                                    if (uVar10._fU0)
                                    {
                                        SET_BIT( ref (uParam2^)[2], I );
                                    }
                                }
                            }
                        }
                        iParam0->_fU28 = 1;
                    }
                }
            }
            else
            {
                sub_68191( iParam0 );
            }
            break;
            case 4:
            case 9:
            sub_65789( sub_1331(), iParam0->_fU0, ref uVar13, ref uVar21 );
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_1331(), ref uVar21, ref uVar13 )))
            {
                sub_68191( iParam0 );
            }
            break;
        }
    }
    else
    {
        sub_68191( iParam0 );
    }
    return;
}

int sub_65242(int iParam0, unknown uParam1)
{
    if (IS_NETWORK_SESSION())
    {
        if (NOT (IS_NETWORK_PLAYER_ACTIVE( GET_PLAYER_ID() )))
        {
            return 0;
        }
    }
    if (iParam0 == sub_1331())
    {
        if (sub_46306())
        {
            return 0;
        }
    }
    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if ((uParam1) || ((IS_CHAR_SITTING_IN_ANY_CAR( iParam0 )) AND (IS_CHAR_ON_ANY_BIKE( iParam0 ))))
        {
            return 1;
        }
    }
    return 0;
}

void sub_65752(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3)
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

    if (sub_65242( uParam0, (iParam1 == 4) || (iParam1 == 9) ))
    {
        sub_65789( uParam0, iParam1, ref uVar6, ref uVar14 );
        if (sub_66312( iParam1, uParam2 ))
        {
            sub_66412( uParam0, iParam1, uParam2 );
        }
        if (bParam3)
        {
            TASK_PLAY_ANIM_ON_CLONE( uParam0, ref uVar6, ref uVar14, 800.00000000, 0, 0, 0, sub_66700( iParam1 ), 0 );
        }
        else
        {
            CLEAR_CHAR_TASKS( uParam0 );
            TASK_PLAY_ANIM( uParam0, ref uVar6, ref uVar14, 800.00000000, 0, 0, 0, sub_66700( iParam1 ), 0 );
        }
    }
    return;
}

void sub_65789(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    StrCopy( (uParam2^), "", 32 );
    if (NOT (IS_CHAR_ON_ANY_BIKE( uParam0 )))
    {
        StrCopy( (uParam2^), "Hit_Wall", 32 );
        StrCopy( (uParam3^), "PED", 32 );
    }
    else
    {
        ConcatString((uParam2^), sub_19821( uParam0 ), 32);
        switch (uParam1)
        {
            case 0:
            ConcatString((uParam2^), "_bat_attack_intro_R", 32);
            break;
            case 1:
            ConcatString((uParam2^), "_bat_attack_weak_R", 32);
            break;
            case 2:
            ConcatString((uParam2^), "_bat_attack_powerup_intro_R", 32);
            break;
            case 3:
            ConcatString((uParam2^), "_bat_attack_powerup_strike_R", 32);
            break;
            case 4:
            ConcatString((uParam2^), "_Hit_React_R", 32);
            break;
            case 5:
            ConcatString((uParam2^), "_bat_attack_intro_L", 32);
            break;
            case 6:
            ConcatString((uParam2^), "_bat_attack_weak_L", 32);
            break;
            case 7:
            ConcatString((uParam2^), "_bat_attack_powerup_intro_L", 32);
            break;
            case 8:
            ConcatString((uParam2^), "_bat_attack_powerup_strike_L", 32);
            break;
            case 9:
            ConcatString((uParam2^), "_Hit_React_L", 32);
            break;
        }
        StrCopy( (uParam3^), "MISSBIKE_COMBAT", 32 );
    }
    return;
}

int sub_66312(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 8: return NOT (DOES_OBJECT_EXIST( (uParam1^) ));
    }
    return 1;
}

void sub_66412(unknown uParam0, int iParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (DOES_OBJECT_EXIST( (uParam2^) ))
    {
        DELETE_OBJECT( uParam2 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if ((iParam1 != 9) AND (iParam1 != 4))
        {
            CREATE_OBJECT( 1775021974, uVar5._fU0, uVar5._fU4, sub_17827( uVar5._fU8 + 100.00000000, uVar5._fU8 + 300.00000000 ), uParam2, 0 );
            if (sub_66542( iParam1 ))
            {
                ATTACH_OBJECT_TO_PED( (uParam2^), uParam0, 1232, 0.09000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
            }
            else
            {
                ATTACH_OBJECT_TO_PED( (uParam2^), uParam0, 1219, 0.09000000, 0.05000000, 0.00000000, 134.90000000, 0.00000000, 0.00000000, 0 );
            }
        }
    }
    return;
}

boolean sub_66542(int iParam0)
{
    return (iParam0 <= 4) AND (iParam0 >= 0);
}

int sub_66700(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 2:
        case 5:
        case 7:
        return 1;
        break;
    }
    return 0;
}

void sub_67394(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3)
{
    float fVar6;
    unknown uVar7;
    float fVar8;
    unknown uVar9;
    unknown[2] uVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    float fVar18;
    float fVar19;
    float fVar20;

    array(ref uVar10, 2);
    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( uParam0, uParam1, 8.00000000, 8.00000000, 8.00000000, 0 ))
    {
        GET_CHAR_SPEED( uParam0, ref fVar6 );
        GET_CHAR_HEADING( uParam0, ref uVar7 );
        GET_CHAR_SPEED( uParam1, ref fVar8 );
        GET_CHAR_HEADING( uParam1, ref uVar9 );
        fVar19 = sub_67487( uVar7, uVar9 );
        fVar20 = fVar19;
        if (fVar20 < 0)
        {
            fVar20 *= -1;
        }
        if (NOT (IS_CHAR_ON_ANY_BIKE( uParam1 )))
        {
            fVar20 = 0.70000000;
        }
        if (fVar20 >= 0.70000000)
        {
            if (sub_66542( (uParam2^) ))
            {
                if (fVar19 > 0)
                {
                    iParam3->_fU0 = 0;
                }
                else
                {
                    iParam3->_fU0 = 1;
                }
            }
            else if (fVar19 > 0)
            {
                iParam3->_fU0 = 1;
            }
            else
            {
                iParam3->_fU0 = 0;
            }
            if (sub_67692( (uParam2^) ))
            {
                iParam3->_fU4 = 1;
                iParam3->_fU8 = ROUND( 40 * fVar20 );
            }
            else
            {
                iParam3->_fU4 = 0;
                iParam3->_fU8 = ROUND( 20 * fVar20 );
            }
            if (fVar19 > 0)
            {
                fVar8 += fVar6;
            }
            else
            {
                fVar8 -= fVar6;
            }
            if (fVar6 < 0.00000000)
            {
                fVar6 *= -1;
            }
            fVar6 *= 0.06250000;
            if (sub_66542( (uParam2^) ))
            {
                fVar18 = -2.00000000;
            }
            else
            {
                fVar18 = 2.00000000;
            }
            GET_CHAR_COORDINATES( uParam0, ref uVar10[0]._fU0, ref uVar10[0]._fU4, ref uVar17 );
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam0, 0.00000000, -0.50000000 - (fVar6 * 0.20000000), 0.00000000, ref uVar10[0]._fU0, ref uVar10[0]._fU4, ref uVar10[0]._fU8 );
    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam0, 0.00000000, 2.50000000 + (fVar6 * 0.80000000), 0.00000000, ref uVar10[1]._fU0, ref uVar10[1]._fU4, ref uVar10[1]._fU8 );
    return IS_CHAR_IN_ANGLED_AREA_3D( uParam1, uVar10[0]._fU0, uVar10[0]._fU4, uVar17 - 0.50000000, uVar10[1]._fU0, uVar10[1]._fU4, uVar17 + 1.50000000, fVar18, 0 );
}

float sub_67487(unknown uParam0, unknown uParam1)
{
    return (((SIN( uParam0 )) * -1) * ((SIN( uParam1 )) * -1)) + ((COS( uParam0 )) * (COS( uParam1 )));
}

boolean sub_67692(int iParam0)
{
    return (iParam0 == 8) || (iParam0 == 3);
}

void sub_68191(int iParam0)
{
    unknown uVar3;

    if (NOT sub_46306())
    {
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        BLOCK_PED_WEAPON_SWITCHING( sub_1331(), 0 );
        SET_PLAYER_CAN_DO_DRIVE_BY( sub_1662(), 1 );
    }
    if (DOES_OBJECT_EXIST( l_U256 ))
    {
        DELETE_OBJECT( ref l_U256 );
    }
    if (IS_CHAR_ON_ANY_BIKE( sub_1331() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1331(), ref uVar3 );
        SET_VEHICLE_STEER_BIAS( uVar3, 0.00000000 );
        if (iParam0->_fU0 != 11)
        {
            CLEAR_CHAR_TASKS( sub_1331() );
        }
    }
    else
    {
        SET_HIDE_WEAPON_ICON( 0 );
        SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_1331(), 1 );
        sub_2284( "SET_CHAR_CURRENT_WEAPON_VISIBLE(PLAYER_CHAR_ID(), TRUE) \n" );
    }
    iParam0->_fU0 = 11;
    iParam0->_fU4 = 0;
    iParam0->_fU28 = 0;
    return;
}

void sub_68552(unknown uParam0, unknown uParam1)
{
    int I;
    vector vVar5;
    vector vVar8;
    vector vVar11;
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
    int iVar30;
    int iVar31;
    int iVar32;
    int iVar33;
    unknown uVar34;

    vVar8 = {0.00000000, 0.21000000, 0.00000000};
    vVar11 = {0.00000000, 0.00000000, 0.00000000};
    iVar33 = 7;
    for ( I = 0; I < iVar33; I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam0^)[I]._fU0 )))
        {
            if (IS_VEH_DRIVEABLE( (uParam0^)[I]._fU8 ))
            {
                if (IS_BIT_SET( (uParam1^)[0], I ))
                {
                    if (IS_BIT_SET( (uParam1^)[1], I ))
                    {
                        if (I < 6)
                        {
                            iVar30 = 1;
                            if (IS_BIT_SET( (uParam1^)[2], I ))
                            {
                                vVar5 = {2.00000000, 0.00000000, -4.00000000};
                            }
                            else
                            {
                                vVar5 = {-2.00000000, 0.00000000, -4.00000000};
                            }
                            if (IS_CHAR_IN_CAR( (uParam0^)[I]._fU0, (uParam0^)[I]._fU8 ))
                            {
                                if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1331() )))
                                {
                                    SAY_AMBIENT_SPEECH( sub_1331(), "RR_ATTACK_GENERIC", 0, 0, 2 );
                                }
                                KNOCK_PED_OFF_BIKE( (uParam0^)[I]._fU0 );
                                APPLY_FORCE_TO_PED( (uParam0^)[I]._fU0, 1, vVar5, vVar8, 12, 1, 1, 1 );
                                INCREMENT_INT_STAT( 138, 1 );
                                if ((GET_INT_STAT( 138 )) >= 69)
                                {
                                    AWARD_ACHIEVEMENT( 54 );
                                }
                            }
                        }
                        else
                        {
                            iVar30 = 0;
                            if (IS_CHAR_IN_CAR( (uParam0^)[I]._fU0, (uParam0^)[I]._fU8 ))
                            {
                                if (NOT (IS_BIT_SET( (uParam1^)[2], I )))
                                {
                                    vVar5 = {6.00000000, 0.00000000, -4.00000000};
                                    sub_65789( (uParam0^)[I]._fU0, 4, ref uVar14, ref uVar22 );
                                    iVar31 = 10;
                                    iVar32 = 11;
                                }
                                else
                                {
                                    vVar5 = {-6.00000000, 0.00000000, -4.00000000};
                                    sub_65789( (uParam0^)[I]._fU0, 9, ref uVar14, ref uVar22 );
                                    iVar31 = 11;
                                    iVar32 = 10;
                                }
                                if (NOT (IS_AMBIENT_SPEECH_PLAYING( sub_1331() )))
                                {
                                    SAY_AMBIENT_SPEECH( sub_1331(), "RR_ATTACK_FRIEND", 0, 0, 2 );
                                    g_U39106 = 0;
                                }
                                APPLY_FORCE_TO_CAR( (uParam0^)[I]._fU8, 1, vVar5, vVar8, 0, 1, 1, 1 );
                                OPEN_SEQUENCE_TASK( ref uVar34 );
                                TASK_PLAY_ANIM( 0, ref uVar14, "MISSBIKE_COMBAT", 800.00000000, 0, 0, 0, 0, 0 );
                                TASK_CAR_TEMP_ACTION( 0, (uParam0^)[I]._fU8, iVar31, 250 );
                                TASK_CAR_TEMP_ACTION( 0, (uParam0^)[I]._fU8, iVar32, 500 );
                                CLOSE_SEQUENCE_TASK( uVar34 );
                                TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar34 );
                                CLEAR_SEQUENCE_TASK( uVar34 );
                            }
                        }
                    }
                    else
                    {
                        iVar30 = 0;
                        if (IS_CHAR_IN_CAR( (uParam0^)[I]._fU0, (uParam0^)[I]._fU8 ))
                        {
                            if (NOT (IS_BIT_SET( (uParam1^)[2], I )))
                            {
                                vVar5 = {6.00000000, 0.00000000, -4.00000000};
                                sub_65789( (uParam0^)[I]._fU0, 4, ref uVar14, ref uVar22 );
                                iVar31 = 10;
                                iVar32 = 11;
                            }
                            else
                            {
                                vVar5 = {-6.00000000, 0.00000000, -4.00000000};
                                sub_65789( (uParam0^)[I]._fU0, 9, ref uVar14, ref uVar22 );
                                iVar31 = 11;
                                iVar32 = 10;
                            }
                            if (I == 6)
                            {
                                if (NOT (IS_AMBIENT_SPEECH_PLAYING( (uParam0^)[I]._fU0 )))
                                {
                                    SAY_AMBIENT_SPEECH( (uParam0^)[I]._fU0, "RR_FRIEND_ANNOY", 0, 0, 2 );
                                    g_U39106 = 0;
                                }
                            }
                            APPLY_FORCE_TO_CAR( (uParam0^)[I]._fU8, 1, vVar5, vVar8, 0, 1, 1, 1 );
                            OPEN_SEQUENCE_TASK( ref uVar34 );
                            TASK_PLAY_ANIM( 0, ref uVar14, "MISSBIKE_COMBAT", 800.00000000, 0, 0, 0, 0, 0 );
                            TASK_CAR_TEMP_ACTION( 0, (uParam0^)[I]._fU8, iVar31, 250 );
                            TASK_CAR_TEMP_ACTION( 0, (uParam0^)[I]._fU8, iVar32, 500 );
                            CLOSE_SEQUENCE_TASK( uVar34 );
                            TASK_PERFORM_SEQUENCE( (uParam0^)[I]._fU0, uVar34 );
                            CLEAR_SEQUENCE_TASK( uVar34 );
                        }
                    }
                    sub_69762( (uParam0^)[I]._fU0, iVar30, 1 );
                }
            }
        }
    }
    return;
}

void sub_69762(unknown uParam0, boolean bParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = 1.00000000;
    if (NOT bParam1)
    {
        fVar5 = 0.40000000;
    }
    TRIGGER_PTFX_ON_PED_BONE( "BLOOD_BIKE_SUBGAME", uParam0, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 1205, fVar5 );
    if (bParam1)
    {
        if (IS_CHAR_MALE( uParam0 ))
        {
            PLAY_SOUND_FROM_PED( -1, "BIKER_MELEE_HIT_HARD", uParam0 );
        }
        else
        {
            PLAY_SOUND_FROM_PED( -1, "BIKER_MELEE_HIT_HARD_FEMALE", uParam0 );
        }
    }
    else if (IS_CHAR_MALE( uParam0 ))
    {
        PLAY_SOUND_FROM_PED( -1, "BIKER_MELEE_HIT", uParam0 );
    }
    else
    {
        PLAY_SOUND_FROM_PED( -1, "BIKER_MELEE_HIT_FEMALE", uParam0 );
    }
    return;
}

void sub_70091(int iParam0, unknown uParam1, int iParam2)
{
    int I;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int iVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    for ( I = 0; I < iParam2->_fU320; I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam1^)[I]._fU0 )))
        {
            if (IS_VEH_DRIVEABLE( (uParam1^)[I]._fU8 ))
            {
                if (IS_CHAR_IN_CAR( (uParam1^)[I]._fU0, (uParam1^)[I]._fU8 ))
                {
                    if (sub_63085( ref (uParam1^)[I], iParam2 ))
                    {
                        if (iParam0->_fU0 != (uParam1^)[I]._fU0)
                        {
                            if ((uParam1^)[I]._fU52 < (iParam2->_fU312 - 1))
                            {
                                (uParam1^)[I]._fU52++;
                            }
                            else if ((uParam1^)[I]._fU60 < iParam2->_fU316)
                            {
                                (uParam1^)[I]._fU60++;
                                (uParam1^)[I]._fU52 = 0;
                            }
                            else if ((uParam1^)[I]._fU60 == iParam2->_fU316)
                            {
                                (uParam1^)[I]._fU84 = 5;
                            };;;
                            GET_SCRIPT_TASK_STATUS( (uParam1^)[I]._fU0, 80, ref iVar10 );
                            if (iVar10 == 7)
                            {
                                uVar6 = (uParam1^)[I]._fU52;
                                TASK_CAR_DRIVE_TO_COORD( (uParam1^)[I]._fU0, (uParam1^)[I]._fU8, iParam2->_fU16[uVar6]._fU0, iParam2->_fU16[uVar6]._fU4, iParam2->_fU16[uVar6]._fU8, (uParam1^)[I]._fU64, 1, 0, 3, l_U37, iParam2->_fU308 );
                            }
                        }
                    }
                    else
                    {
                        uVar6 = (uParam1^)[I]._fU52;
                    }
                }
                else if (iParam0->_fU0 != (uParam1^)[I]._fU0)
                {
                    if ((NOT (IS_CAR_ON_SCREEN( (uParam1^)[I]._fU8 ))) AND (NOT (IS_CHAR_ON_SCREEN( (uParam1^)[I]._fU0 ))))
                    {
                        GET_CHAR_COORDINATES( (uParam1^)[I]._fU0, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
                        GET_GAME_VIEWPORT_ID( ref uVar11 );
                        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar11, uVar12._fU0, uVar12._fU4, uVar12._fU8, 50.00000000 )))
                        {
                            WARP_CHAR_INTO_CAR( (uParam1^)[I]._fU0, (uParam1^)[I]._fU8 );
                        }
                    }
                    else if (NOT (IS_CHAR_GETTING_IN_TO_A_CAR( (uParam1^)[I]._fU0 )))
                    {
                        GET_SCRIPT_TASK_STATUS( (uParam1^)[I]._fU0, 12, ref iVar10 );
                        if (iVar10 == 7)
                        {
                            TASK_ENTER_CAR_AS_DRIVER( (uParam1^)[I]._fU0, (uParam1^)[I]._fU8, -1 );
                        }
                    }
                }
            }
            GET_CHAR_COORDINATES( (uParam1^)[I]._fU0, ref (uParam1^)[I]._fU36._fU0, ref (uParam1^)[I]._fU36._fU4, ref (uParam1^)[I]._fU36._fU8 );
            (uParam1^)[I]._fU68 = VDIST( (uParam1^)[I]._fU36, iParam2->_fU16[uVar6] );
        }
    }
    return;
}

void sub_70906(int iParam0, unknown uParam1, int iParam2)
{
    int I;
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    int iVar13;
    unknown uVar14;

    for ( I = 0; I < iParam2->_fU320; I++ )
    {
        if (NOT (IS_CHAR_INJURED( (uParam1^)[I]._fU0 )))
        {
            if ((uParam1^)[I]._fU0 != iParam0->_fU0)
            {
                GET_SCRIPT_TASK_STATUS( (uParam1^)[I]._fU0, 15, ref iVar13 );
                if (iVar13 == 7)
                {
                    GET_SCRIPT_TASK_STATUS( (uParam1^)[I]._fU0, 80, ref iVar13 );
                    if (iVar13 == 7)
                    {
                        iVar7 = (uParam1^)[I]._fU52;
                        if (IS_CHAR_IN_ANY_CAR( (uParam1^)[I]._fU0 ))
                        {
                            if (IS_VEH_DRIVEABLE( (uParam1^)[I]._fU8 ))
                            {
                                TASK_CAR_DRIVE_TO_COORD( (uParam1^)[I]._fU0, (uParam1^)[I]._fU8, iParam2->_fU16[iVar7]._fU0, iParam2->_fU16[iVar7]._fU4, iParam2->_fU16[iVar7]._fU8, (uParam1^)[I]._fU64, 1, 0, 3, l_U37, iParam2->_fU308 );
                            }
                            else
                            {
                                TASK_CAR_DRIVE_TO_COORD( (uParam1^)[I]._fU0, 0, iParam2->_fU16[iVar7]._fU0, iParam2->_fU16[iVar7]._fU4, iParam2->_fU16[iVar7]._fU8, (uParam1^)[I]._fU64, 1, 0, 3, l_U37, iParam2->_fU308 );
                            }
                        }
                    }
                }
                if (sub_71265( iParam0, ref (uParam1^)[I], iParam2 ))
                {
                    iVar7 = (uParam1^)[I]._fU52;
                    if (iVar7 < (iParam2->_fU312 - 1))
                    {
                        iVar6 = iVar7 + 1;
                    }
                    else
                    {
                        iVar6 = 0;
                    }
                    GET_GAME_VIEWPORT_ID( ref uVar14 );
                    if (NOT (IS_CHAR_ON_SCREEN( (uParam1^)[I]._fU0 )))
                    {
                        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar14, iParam2->_fU16[iVar7]._fU0, iParam2->_fU16[iVar7]._fU4, iParam2->_fU16[iVar7]._fU8, 25.00000000 )))
                        {
                            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( iParam2->_fU16[iVar7]._fU0, iParam2->_fU16[iVar7]._fU4, iParam2->_fU16[iVar7]._fU8, 5.00000000, 5.00000000, 5.00000000 )))
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU0, iParam2->_fU16[iVar7]._fU0, iParam2->_fU16[iVar7]._fU4, iParam2->_fU16[iVar7]._fU8, 15.00000000, 15.00000000, 10.00000000, 0 )))
                                {
                                    if (NOT (IS_PED_RAGDOLL( (uParam1^)[I]._fU0 )))
                                    {
                                        GET_GROUND_Z_FOR_3D_COORD( iParam2->_fU16[iVar7]._fU0, iParam2->_fU16[iVar7]._fU4, iParam2->_fU16[iVar7]._fU8 + 1.00000000, ref uVar8 );
                                        uVar10 = {iParam2->_fU16[iVar6] - iParam2->_fU16[iVar7]};
                                        GET_HEADING_FROM_VECTOR_2D( uVar10._fU0, uVar10._fU4, ref uVar9 );
                                        SET_CHAR_HEADING( (uParam1^)[I]._fU0, uVar9 );
                                        SET_CHAR_COORDINATES( (uParam1^)[I]._fU0, iParam2->_fU16[iVar7]._fU0, iParam2->_fU16[iVar7]._fU4, uVar8 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_71265(int iParam0, int iParam1, int iParam2)
{
    int iVar5;

    if (iParam0->_fU60 == iParam1->_fU60)
    {
        if (iParam0->_fU52 > iParam1->_fU52)
        {
            iVar5 = iParam0->_fU52 - iParam1->_fU52;
            if (iVar5 > 1)
            {
                return 1;
            }
        }
    }
    else if (iParam0->_fU60 > iParam1->_fU60)
    {
        if (iParam1->_fU52 == (iParam2->_fU312 - 1))
        {
            if (iParam0->_fU52 > 0)
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

void sub_71949(unknown uParam0)
{
    int I;

    for ( I = 0; I < 7; I++ )
    {
        if (IS_CHAR_INJURED( (uParam0^)[I]._fU0 ))
        {
            PRINT_NOW( "raband", 7500, 1 );
            sub_43729();
        }
        else if ((uParam0^)[I]._fU84 == 5)
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 331, 1 );
            PRINT_NOW( "LOSEBR", 7500, 1 );
            sub_72070();
        }
    }
    return;
}

void sub_72070()
{
    int iVar2;
    int iVar3;
    int I;
    int iVar5;

    iVar2 = 500;
    for ( I = 0; I < g_U39117; I++ )
    {
        if (IS_BIT_SET( g_U10457, I ))
        {
            iVar3++;
        }
    }
    g_U39118 = iVar3;
    g_U39106 = 3;
    if (g_U39118 == g_U39117)
    {
        sub_72176( 2 );
    }
    iVar2 = 250 + (g_U39118 * 250);
    if (iVar2 > 5000)
    {
        iVar2 = 5000;
    }
    sub_72862( iVar2 );
    INCREMENT_INT_STAT_NO_MESSAGE( 332, 1 );
    iVar5 = GET_INT_STAT( 332 );
    if (iVar5 > 19)
    {
        AWARD_ACHIEVEMENT( 6 );
    }
    g_U38747 = 1;
    CLEAR_WANTED_LEVEL( sub_1662() );
    INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar2 );
    sub_73109( 1.00000000 );
    sub_75220( l_U634 );
    g_U24 = 83;
    CLEAR_WANTED_LEVEL( sub_1662() );
    sub_77309();
    WAIT( 0 );
    sub_1607();
    sub_738();
    return;
}

void sub_72176(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U38835[uParam0]._fU0)
    {
        iVar3 = ProtectedGet(g_U38835[uParam0]._fU8);
        if (iVar3 > 0)
        {
            sub_72245( 7, iVar3 );
            g_U38835[uParam0]._fU0 = 1;
            switch (uParam0)
            {
                case 2:
                g_U15728[32] = 1;
                break;
                case 0:
                g_U15728[30] = 1;
                break;
            }
            return;
        }
    }
    return;
}

void sub_72245(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_72415( 0 );
    return;
}

void sub_72415(boolean bParam0)
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
        if (g_U26712[I]._fU4 == g_U26712[I]._fU0)
        {
            fVar4 = g_U26712[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U26712[I]._fU0 );
            fVar6 = TO_FLOAT( g_U26712[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U26712[I]._fU8;
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
    SET_FLOAT_STAT( 133, fVar3 );
    if (bVar7)
    {
        sub_72660();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_72660()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_72862(unknown uParam0)
{
    ADD_SCORE( sub_1662(), uParam0 );
    sub_72887( uParam0 );
    return;
}

void sub_72887(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_935( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_73109(unknown uParam0)
{
    int I;

    for ( I = 0; I < 2; I++ )
    {
        sub_73135( I, uParam0, 0 );
    }
    g_U11101 = 1;
    return;
}

void sub_73135(int iParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    unknown uVar6;
    float fVar7;
    float fVar8;
    float fVar9;

    if ((uParam2) || (NOT (IS_CHAR_INJURED( g_U11081[iParam0] ))))
    {
        if (iParam0 == 0)
        {
            fVar5 = 20.00000000;
        }
        else
        {
            fVar5 = 20.00000000;
        }
        fVar7 = g_U11141[iParam0] + (((100.00000000 - fVar5) / 10.00000000) * uParam1);
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11180[iParam0] = fVar7 - g_U11141[iParam0];
        g_U11141[iParam0] = fVar7;
        fVar8 = (g_U11141[iParam0] - fVar5) / (100.00000000 - fVar5);
        fVar9 = (-1.00000000 * ((fVar8 - 1.00000000) * (fVar8 - 1.00000000))) + 1.00000000;
        if (iParam0 == 0)
        {
            fVar5 = 350.00000000;
        }
        else
        {
            fVar5 = 475.00000000;
        }
        fVar7 = ((1000.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 1000.00000000)
        {
            fVar7 = 1000.00000000;
        }
        g_U11165[iParam0] = fVar7 - g_U11144[iParam0];
        g_U11144[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 0.00000000;
        }
        else
        {
            fVar5 = 0.00000000;
        }
        fVar7 = ((13.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 13.00000000)
        {
            fVar7 = 13.00000000;
        }
        g_U11168[iParam0] = fVar7 - g_U11147[iParam0];
        g_U11147[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 38.00000000;
        }
        else
        {
            fVar5 = 28.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11171[iParam0] = fVar7 - g_U11150[iParam0];
        g_U11150[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 33.00000000;
        }
        else
        {
            fVar5 = 23.00000000;
        }
        fVar7 = ((100.00000000 - fVar5) * fVar9) + fVar5;
        if (fVar7 > 100.00000000)
        {
            fVar7 = 100.00000000;
        }
        g_U11174[iParam0] = fVar7 - g_U11153[iParam0];
        g_U11153[iParam0] = fVar7;
        if (iParam0 == 0)
        {
            fVar5 = 1.00000000;
        }
        else
        {
            fVar5 = 1.00000000;
        }
        fVar7 = ((5.00000000 - fVar5) * fVar8) + fVar5;
        if (fVar7 > 5.00000000)
        {
            fVar7 = 5.00000000;
        }
        g_U11177[iParam0] = fVar7 - g_U11156[iParam0];
        g_U11156[iParam0] = fVar7;
        if ((g_U11141[1] >= 100.00000000) AND (g_U11141[0] >= 100.00000000))
        {
            AWARD_ACHIEVEMENT( 55 );
        }
        SET_FLOAT_STAT( 168, g_U11141[0] );
        SET_FLOAT_STAT( 169, g_U11141[1] );
        sub_73905( iParam0 );
        g_U11129[iParam0] = 1;
        GET_GAME_TIMER( ref g_U11140 );
    }
    else
    {
        g_U11165[iParam0] = 0.00000000;
        g_U11168[iParam0] = 0.00000000;
        g_U11171[iParam0] = 0.00000000;
        g_U11174[iParam0] = 0.00000000;
        g_U11177[iParam0] = 0.00000000;
        g_U11129[iParam0] = 0;
    }
    return;
}

void sub_73905(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( g_U11081[uParam0] )))
    {
        SET_CHAR_MAX_HEALTH( g_U11081[uParam0], FLOOR( g_U11144[uParam0] ) );
        GET_CHAR_HEALTH( g_U11081[uParam0], ref iVar3 );
        iVar3 += FLOOR( g_U11165[uParam0] );
        SET_CHAR_HEALTH( g_U11081[uParam0], iVar3 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_74044( g_U11147[uParam0], uParam0 ), 30000, 0 );
        GIVE_WEAPON_TO_CHAR( g_U11081[uParam0], sub_74698( g_U11147[uParam0], uParam0 ), 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( g_U11081[uParam0], sub_74698( g_U11147[uParam0], uParam0 ), 0 );
        SET_CHAR_ACCURACY( g_U11081[uParam0], FLOOR( g_U11150[uParam0] ) );
        SET_CHAR_SHOOT_RATE( g_U11081[uParam0], FLOOR( g_U11153[uParam0] ) );
        SET_CHAR_FIRE_DAMAGE_MULTIPLIER( g_U11081[uParam0], g_U11156[uParam0] );
    }
    return;
}

int sub_74044(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned PISTOL \n" );
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned EPISODIC_7 \n" );
            return 27;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 0 - returned UZI \n" );
            return 12;
        }
        break;
        case 1:
        if (fParam0 < 3.00000000)
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned PISTOL \n" );
            return 7;
        }
        else
        {
            PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - called on 1 - returned EPISODIC 6 \n" );
            return 26;
        }
        break;
    }
    PRINTSTRING( "GET_DRIVEBY_WEAPON_TYPE_FOR_WEAPONLEVEL - returned default value \n" );
    return 7;
}

int sub_74698(float fParam0, unknown uParam1)
{
    switch (uParam1)
    {
        default:
          case 0:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 27;
        }
        else if (fParam0 < 8.00000000)
        {
            return 12;
        }
        else if (fParam0 < 13.00000000)
        {
            return 14;
        }
        else
        {
            return 15;
        };;;;
        break;
        case 1:
        if (fParam0 < 1.00000000)
        {
            return 7;
        }
        else if (fParam0 < 3.00000000)
        {
            return 10;
        }
        else if (fParam0 < 8.00000000)
        {
            return 26;
        }
        else if (fParam0 < 13.00000000)
        {
            return 11;
        }
        else
        {
            return 22;
        };;;;
        break;
    }
    return 7;
}

void sub_75220(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_2788( uParam0 );
    sub_75240( uParam0 );
    sub_76821( uParam0 );
    return;
}

void sub_75240(unknown uParam0)
{
    switch (uParam0)
    {
        case 13:
        sub_75282();
        break;
        case 14:
        sub_76068();
        break;
        case 15:
        sub_76367();
        break;
        default: sub_935( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_76636();
    sub_76709();
    return;
}

void sub_75282()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 13;
    uVar3 = sub_2788( iVar2 );
    sub_75318( ref g_U27892[uVar3]._fU8, 48, 0, 0 );
    g_U27892[uVar3]._fU24 = 0;
    switch (g_U27892[uVar3]._fU28)
    {
        case 1:
        sub_75958( 0 );
        break;
        default: sub_935( "Interactions_Brian_Pass: Unknown Brian Sequence - tell Keith" );
    }
    return;
}

void sub_75318(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_75371( iParam0, uParam1, uParam2 );
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
        sub_75503( iParam0 + 0 );
    }
    return;
}

void sub_75371(int iParam0, int iParam1, int iParam2)
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
        sub_75503( iParam0 + 0 );
    }
    return;
}

void sub_75503(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_75534( iParam0->_fU4 )))
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

int sub_75534(unknown uParam0)
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

void sub_75958(unknown uParam0)
{
    sub_72862( uParam0 );
    return;
}

void sub_76068()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 14;
    uVar3 = sub_2788( iVar2 );
    sub_75318( ref g_U27892[uVar3]._fU8, 48, 0, 0 );
    g_U27892[uVar3]._fU24 = 0;
    switch (g_U27892[uVar3]._fU28)
    {
        case 1:
        sub_75958( 500 );
        break;
        default: sub_935( "Interactions_Dave_Pass: Unknown Dave Sequence - tell Keith" );
    }
    sub_76228( 10, 0 );
    return;
}

void sub_76228(unknown uParam0, int iParam1)
{
    if (iParam1 < g_U1551[uParam0]._fU316)
    {
        if (g_U1551[uParam0]._fU184[iParam1] == 0)
        {
            sub_75318( ref g_U1551[uParam0]._fU204[iParam1], g_U1551[uParam0]._fU400, 0, 0 );
            g_U1551[uParam0]._fU184[iParam1] = 1;
        }
    }
    return;
}

void sub_76367()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 15;
    uVar3 = sub_2788( iVar2 );
    sub_75318( ref g_U27892[uVar3]._fU8, 48, 0, 0 );
    g_U27892[uVar3]._fU24 = 0;
    switch (g_U27892[uVar3]._fU28)
    {
        case 1:
        sub_75958( 500 );
        break;
        case 2:
        sub_75958( 0 );
        break;
        default: sub_935( "Interactions_Malc_Pass: Unknown Malc Sequence - tell Keith" );
    }
    return;
}

void sub_76636()
{
    g_U10974._fU0 = 1;
    g_U10974._fU4 = 0;
    g_U10974._fU8 = 0;
    g_U10974._fU12 = 0;
    g_U10974._fU16 = 0;
    g_U10974._fU20 = 0;
    g_U10974._fU28 = 6;
    return;
}

void sub_76709()
{
    sub_76718();
    StrCopy( ref g_U10987, "RIPASS", 16 );
    return;
}

void sub_76718()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10987, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10987 );
    StrCopy( ref g_U10987, "", 16 );
    return;
}

void sub_76821(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_2788( uParam0 );
    g_U27892[uVar3]._fU28 = 99;
    g_U27892[uVar3]._fU4 = 0;
    sub_3351( ref g_U27892[uVar3]._fU8 );
    g_U27892[uVar3]._fU24 = 0;
    sub_76894( uParam0 );
    sub_77053( uVar3 );
    return;
}

void sub_76894(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 2;
    switch (uParam0)
    {
        case 14:
        iVar3 = 0;
        break;
        case 15:
        iVar3 = 1;
        break;
        case 13: return;
    }
    return;
    iVar4 = 0;
    if (NOT g_U38821[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U38821[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_72245( 5, iVar4 );
            g_U38821[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_77053(unknown uParam0)
{
    g_U27892[uParam0]._fU36 = 0;
    g_U27892[uParam0]._fU40 = {0.00000000, 0.00000000, 0.00000000};
    g_U27892[uParam0]._fU52 = 1;
    StrCopy( ref g_U27892[uParam0]._fU60, "", 16 );
    sub_77138( uParam0 );
    return;
}

void sub_77138(unknown uParam0)
{
    sub_77149( uParam0 );
    sub_77228( uParam0 );
    return;
}

void sub_77149(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U27892[uParam0]._fU56 ))
    {
        REMOVE_BLIP( g_U27892[uParam0]._fU56 );
    }
    g_U27892[uParam0]._fU56 = nil;
    return;
}

void sub_77228(unknown uParam0)
{
    g_U27892[uParam0]._fU76 = 0;
    return;
}

void sub_77309()
{
    return sub_77320( 0, 1 );
}

int sub_77320(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((g_U558 != 9) AND (uParam1))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

void sub_77502(int iParam0, unknown uParam1, unknown uParam2)
{
    int I;
    int iVar6;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;
    int iVar12;
    int iVar13;
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
    vector vVar31;
    vector vVar34;
    vector vVar37;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    float fVar62;
    float fVar63;
    int iVar64;
    int iVar65;
    int iVar66;
    int iVar67;

    iVar6 = 7;
    iVar7 = 0;
    vVar34 = {0.00000000, 0.21000000, 0.00000000};
    vVar37 = {1.50000000, 0.00000000, 0.00000000};
    fVar62 = 1.00000000;
    iVar64 = 500 - (g_U39118 * 10);
    if (iVar64 < 250)
    {
        iVar64 = 250;
    }
    iVar65 = 1000 - (g_U39118 * 10);
    if (iVar65 < 500)
    {
        iVar65 = 500;
    }
    for ( I = 0; I < iVar6; I++ )
    {
        if ((uParam1^)[I]._fU80 == 11)
        {
            if (DOES_OBJECT_EXIST( (uParam1^)[I]._fU76 ))
            {
                DELETE_OBJECT( ref (uParam1^)[I]._fU76 );
            }
            if (IS_VEH_DRIVEABLE( (uParam1^)[I]._fU8 ))
            {
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( (uParam1^)[I]._fU8, -vVar37.x, vVar37.y, vVar37.z, ref uVar40._fU0, ref uVar40._fU4, ref uVar40._fU8 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( (uParam1^)[I]._fU8, vVar37.x, vVar37.y, vVar37.z, ref uVar43._fU0, ref uVar43._fU4, ref uVar43._fU8 );
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU0, uVar40._fU0, uVar40._fU4, uVar40._fU8, fVar62, fVar62, fVar62, 0 ))
            {
                if (TIMERA() > (sub_15965( iVar64, iVar65 )))
                {
                    (uParam1^)[I]._fU72 = 0;
                    iVar11 = 5;
                    iVar12 = 6;
                    (uParam1^)[I]._fU80 = iVar11;
                    SETTIMERA( 0 );
                }
            }
            else if (LOCATE_CHAR_ANY_MEANS_3D( iParam0->_fU0, uVar43._fU0, uVar43._fU4, uVar43._fU8, fVar62, fVar62, fVar62, 0 ))
            {
                if (TIMERA() > (sub_15965( iVar64, iVar65 )))
                {
                    (uParam1^)[I]._fU72 = 1;
                    iVar11 = 0;
                    iVar12 = 1;
                    (uParam1^)[I]._fU80 = iVar11;
                    SETTIMERA( 0 );
                }
            }
            if ((uParam1^)[I]._fU80 != 11)
            {
                if (sub_67394( (uParam1^)[I]._fU0, iParam0->_fU0, ref (uParam1^)[I]._fU80, ref uVar8 ))
                {
                    sub_65789( (uParam1^)[I]._fU0, (uParam1^)[I]._fU80, ref uVar15, ref uVar23 );
                    sub_65752( (uParam1^)[I]._fU0, (uParam1^)[I]._fU80, ref (uParam1^)[I]._fU76, 0 );
                }
                else
                {
                    (uParam1^)[I]._fU80 = 11;
                }
            }
        }
        else if (((uParam1^)[I]._fU80 == 5) || ((uParam1^)[I]._fU80 == 0))
        {
            sub_65789( (uParam1^)[I]._fU0, (uParam1^)[I]._fU80, ref uVar15, ref uVar23 );
            GET_SCRIPT_TASK_STATUS( (uParam1^)[I]._fU0, 80, ref iVar13 );
            if (iVar13 == 1)
            {
                if (HAS_CHAR_ANIM_FINISHED( (uParam1^)[I]._fU0, ref uVar23, ref uVar15 ))
                {
                    if ((uParam1^)[I]._fU72)
                    {
                        iVar11 = 0;
                        iVar12 = 1;
                    }
                    else
                    {
                        iVar11 = 5;
                        iVar12 = 6;
                    }
                    (uParam1^)[I]._fU80 = iVar12;
                    sub_65789( (uParam1^)[I]._fU0, (uParam1^)[I]._fU80, ref uVar15, ref uVar23 );
                    sub_65752( (uParam1^)[I]._fU0, (uParam1^)[I]._fU80, ref (uParam1^)[I]._fU76, 0 );
                }
            }
            else if (iVar13 == 7)
            {
                if (DOES_OBJECT_EXIST( (uParam1^)[I]._fU76 ))
                {
                    DELETE_OBJECT( ref (uParam1^)[I]._fU76 );
                }
                (uParam1^)[I]._fU80 = 11;
            }
        }
        else if (((uParam1^)[I]._fU80 == 6) || ((uParam1^)[I]._fU80 == 1))
        {
            PRINTSTRING( "racerInfo[" );
            PRINTINT( I );
            PRINTSTRING( "].attackState = attackHit \n" );
            GET_SCRIPT_TASK_STATUS( (uParam1^)[I]._fU0, 80, ref iVar13 );
            if (iVar13 == 1)
            {
                if (sub_67394( (uParam1^)[I]._fU0, iParam0->_fU0, ref (uParam1^)[I]._fU80, ref uVar8 ))
                {
                    sub_65789( (uParam1^)[I]._fU0, (uParam1^)[I]._fU80, ref uVar15, ref uVar23 );
                    if (IS_CHAR_PLAYING_ANIM( (uParam1^)[I]._fU0, ref uVar23, ref uVar15 ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( (uParam1^)[I]._fU0, ref uVar23, ref uVar15, ref fVar63 );
                        if (fVar63 >= 0.25000000)
                        {
                            GET_SCRIPT_TASK_STATUS( iParam0->_fU0, 29, ref iVar13 );
                            if (iVar13 == 7)
                            {
                                if (IS_VEH_DRIVEABLE( iParam0->_fU8 ))
                                {
                                    if (uVar8._fU0)
                                    {
                                        vVar31 = {-6.00000000, 0.00000000, -4.00000000};
                                        sub_65789( iParam0->_fU0, 9, ref uVar46, ref uVar54 );
                                        iVar66 = 10;
                                        iVar67 = 11;
                                    }
                                    else
                                    {
                                        vVar31 = {6.00000000, 0.00000000, -4.00000000};
                                        sub_65789( iParam0->_fU0, 4, ref uVar46, ref uVar54 );
                                        iVar66 = 11;
                                        iVar67 = 10;
                                    }
                                    if (I == 6)
                                    {
                                        if (NOT (IS_AMBIENT_SPEECH_PLAYING( (uParam1^)[I]._fU0 )))
                                        {
                                            SAY_AMBIENT_SPEECH( (uParam1^)[I]._fU0, "RR_FRIEND_ATTACKSJ", 0, 0, 2 );
                                            g_U39106 = 1;
                                        }
                                    }
                                    if (IS_CHAR_IN_CAR( sub_1331(), iParam0->_fU8 ))
                                    {
                                        APPLY_FORCE_TO_CAR( iParam0->_fU8, 1, vVar31, vVar34, 0, 1, 1, 1 );
                                        OPEN_SEQUENCE_TASK( ref uVar14 );
                                        TASK_PLAY_ANIM( 0, ref uVar46, ref uVar54, 800.00000000, 0, 0, 0, 0, 0 );
                                        TASK_CAR_TEMP_ACTION( 0, iParam0->_fU8, iVar66, 250 );
                                        TASK_CAR_TEMP_ACTION( 0, iParam0->_fU8, iVar67, 500 );
                                        CLOSE_SEQUENCE_TASK( uVar14 );
                                        TASK_PERFORM_SEQUENCE( iParam0->_fU0, uVar14 );
                                        CLEAR_SEQUENCE_TASK( uVar14 );
                                    }
                                    else
                                    {
                                        OPEN_SEQUENCE_TASK( ref uVar14 );
                                        TASK_PLAY_ANIM( 0, ref uVar46, ref uVar54, 800.00000000, 0, 0, 0, 0, 0 );
                                        CLOSE_SEQUENCE_TASK( uVar14 );
                                        TASK_PERFORM_SEQUENCE( iParam0->_fU0, uVar14 );
                                        CLEAR_SEQUENCE_TASK( uVar14 );
                                    }
                                }
                                sub_69762( iParam0->_fU0, 0, 1 );
                            }
                        }
                    }
                }
            }
            else if (iVar13 == 7)
            {
                if (DOES_OBJECT_EXIST( (uParam1^)[I]._fU76 ))
                {
                    DELETE_OBJECT( ref (uParam1^)[I]._fU76 );
                }
                (uParam1^)[I]._fU80 = 11;
            }
        };;;
    }
    return;
}

void sub_79383()
{
    if (NOT l_U626)
    {
        if (((NOT IS_USING_CONTROLLER()) AND ((IS_CONTROL_PRESSED( 0, 138 )) || (IS_CONTROL_PRESSED( 0, 137 )))) || ((IS_USING_CONTROLLER()) AND ((IS_CONTROL_PRESSED( 0, l_U34[1] )) || (IS_CONTROL_PRESSED( 0, l_U34[0] )))))
        {
            l_U626 = 1;
        }
    }
    if (NOT g_U38743)
    {
        if (l_U625)
        {
            if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "bkCombatHlp3" ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "bkCombatHlp1" ))))
            {
                if (USING_STANDARD_CONTROLS())
                {
                    PRINT_HELP( "bkCombatHlp2" );
                }
                else
                {
                    PRINT_HELP( "bkCombatHlp4" );
                }
                g_U38743 = 1;
            }
        }
        else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "bkCombatHlp2" )))
        {
            if (USING_STANDARD_CONTROLS())
            {
                PRINT_HELP( "bkCombatHlp1" );
            }
            else
            {
                PRINT_HELP( "bkCombatHlp3" );
            }
            l_U625 = 1;
        }
    }
    return;
}

void sub_79805()
{
    int I;

    if (NOT l_U687)
    {
        for ( I = 0; I < 15; I++ )
        {
            if (HAS_CHAR_GOT_WEAPON( sub_1331(), l_U720[I] ))
            {
                GET_AMMO_IN_CHAR_WEAPON( sub_1331(), l_U720[I], ref l_U704[I] );
                REMOVE_WEAPON_FROM_CHAR( sub_1331(), l_U720[I] );
                l_U688[I] = 1;
            }
        }
        if (HAS_CHAR_GOT_WEAPON( sub_1331(), 1 ))
        {
            SET_CURRENT_CHAR_WEAPON( sub_1331(), 1, 1 );
        }
        l_U687 = 1;
    }
    return;
}

void sub_80436()
{
    unknown uVar2;

    switch (l_U266)
    {
        case 0:
        SET_PLAYER_CONTROL( sub_1662(), 0 );
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        REQUEST_CAR_RECORDING( 2951 );
        while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 2951 )))
        {
            WAIT( 0 );
        }
        CLEAR_PRINTS();
        SET_WIDESCREEN_BORDERS( 1 );
        l_U266 = 1;
        break;
        case 1:
        l_U269[l_U268]._fU36 = {-261.97400000, 1435.58500000, 19.96810000};
        l_U269[l_U267]._fU36 = {-259.50550000, 1511.37800000, 19.80690000};
        CLEAR_AREA_OF_CARS( l_U269[l_U267]._fU36._fU0, l_U269[l_U267]._fU36._fU4, l_U269[l_U267]._fU36._fU8, 10.00000000 );
        if (IS_CHAR_IN_ANY_CAR( l_U269[l_U268]._fU0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U269[l_U268]._fU0, ref l_U269[l_U268]._fU8 );
            SET_CAR_HEADING( l_U269[l_U268]._fU8, 196.60310000 );
            SET_CAR_COORDINATES( l_U269[l_U268]._fU8, l_U269[l_U268]._fU36._fU0, l_U269[l_U268]._fU36._fU4, l_U269[l_U268]._fU36._fU8 );
            SET_CAR_ON_GROUND_PROPERLY( l_U269[l_U268]._fU8 );
            if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
            {
                TASK_LOOK_AT_CHAR( l_U269[l_U267]._fU0, l_U269[l_U268]._fU0, 20000, 0 );
                TASK_LOOK_AT_CHAR( l_U269[l_U268]._fU0, l_U269[l_U267]._fU0, 20000, 0 );
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
        {
            CLEAR_CHAR_TASKS( l_U269[l_U267]._fU0 );
            if (IS_VEH_DRIVEABLE( l_U269[l_U267]._fU8 ))
            {
                if (IS_CHAR_ON_ANY_BIKE( l_U269[l_U267]._fU0 ))
                {
                    SET_CAR_HEADING( l_U269[l_U267]._fU8, l_U446._fU12 );
                    SET_CAR_COORDINATES( l_U269[l_U267]._fU8, l_U269[l_U267]._fU36._fU0, l_U269[l_U267]._fU36._fU4, l_U269[l_U267]._fU36._fU8 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U269[l_U267]._fU8 );
                }
                else
                {
                    WARP_CHAR_INTO_CAR( l_U269[l_U267]._fU0, l_U269[l_U267]._fU8 );
                    SET_CAR_HEADING( l_U269[l_U267]._fU8, l_U446._fU12 );
                    SET_CAR_COORDINATES( l_U269[l_U267]._fU8, l_U269[l_U267]._fU36._fU0, l_U269[l_U267]._fU36._fU4, l_U269[l_U267]._fU36._fU8 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U269[l_U267]._fU8 );
                }
                SET_CHAR_PROOFS( l_U269[l_U267]._fU0, 1, 1, 1, 1, 1 );
                SET_CAR_PROOFS( l_U269[l_U267]._fU8, 1, 1, 1, 1, 1 );
                START_PLAYBACK_RECORDED_CAR( l_U269[l_U267]._fU8, 2951 );
                SET_PLAYBACK_SPEED( l_U269[l_U267]._fU8, 0.65000000 );
            }
        }
        sub_81522();
        if (IS_VEH_DRIVEABLE( l_U269[l_U267]._fU8 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U269[l_U267]._fU8 ))
            {
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U269[l_U267]._fU8, 2500.00000000 );
            }
        }
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        l_U266 = 2;
        break;
        case 2:
        if (IS_VEH_DRIVEABLE( l_U269[l_U267]._fU8 ))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U269[l_U267]._fU8 )))
            {
                sub_82148();
                sub_23293( "MALC2_PASS", ref l_U550, 6, 1 );
                l_U266 = 3;
            }
        }
        break;
        case 3:
        if (NOT (sub_25070( l_U550 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
            {
                if (IS_VEH_DRIVEABLE( l_U269[l_U267]._fU8 ))
                {
                    TASK_CAR_DRIVE_WANDER( l_U269[l_U267]._fU0, l_U269[l_U267]._fU8, 10.00000000, 3 );
                    INCREMENT_INT_STAT( 373, 1 );
                    l_U266 = 4;
                }
            }
        }
        if (sub_53942())
        {
            INCREMENT_INT_STAT( 372, 1 );
            sub_25575( ref l_U550, 1 );
            l_U266 = 4;
        }
        break;
        case 4:
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U269[l_U267]._fU0 )))
        {
            if (IS_VEH_DRIVEABLE( l_U269[l_U267]._fU8 ))
            {
                DELETE_CHAR( ref l_U269[l_U267]._fU0 );
                DELETE_CAR( ref l_U269[l_U267]._fU8 );
            }
        }
        sub_82563();
        CLEAR_CHAR_TASKS( l_U269[l_U268]._fU0 );
        SET_WIDESCREEN_BORDERS( 0 );
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL( sub_1662(), 1 );
        sub_72070();
        break;
    }
    return;
}

void sub_81522()
{
    int I;

    l_U647[0] = {-254.80690000, 1474.76200000, 20.18526000};
    l_U660[0] = {2.71692500, -0.00000000, 75.20808000};
    l_U647[1] = {-254.80690000, 1435.55300000, 20.18526000};
    l_U660[1] = {2.71692500, -0.00000000, 75.20808000};
    l_U647[2] = {-262.54330000, 1434.28000000, 20.73423000};
    l_U660[2] = {-3.81479300, -0.00000000, -28.49728000};
    BEGIN_CAM_COMMANDS( ref l_U681 );
    for ( I = 0; I < 3; I++ )
    {
        CREATE_CAM( 14, ref l_U673[I] );
        SET_CAM_POS( l_U673[I], l_U647[I]._fU0, l_U647[I]._fU4, l_U647[I]._fU8 );
        SET_CAM_ROT( l_U673[I], l_U660[I]._fU0, l_U660[I]._fU4, l_U660[I]._fU8 );
        SET_CAM_FOV( l_U673[I], 45.00000000 );
    }
    CREATE_CAM( 3, ref l_U673[3] );
    SET_CAM_INTERP_STYLE_CORE( l_U673[3], l_U673[0], l_U673[1], 7000, 0 );
    SET_CAM_INTERP_STYLE_DETAILED( l_U673[3], 1, 0, 1, 1 );
    SET_CAM_ACTIVE( l_U673[3], 1 );
    SET_CAM_PROPAGATE( l_U673[3], 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return;
}

void sub_82148()
{
    SET_CAM_ACTIVE( l_U673[3], 0 );
    SET_CAM_PROPAGATE( l_U673[3], 0 );
    SET_CAM_ACTIVE( l_U673[2], 1 );
    SET_CAM_PROPAGATE( l_U673[2], 1 );
    return;
}

void sub_82563()
{
    int I;

    for ( I = 0; I < 4; I++ )
    {
        SET_CAM_ACTIVE( l_U673[I], 0 );
        SET_CAM_PROPAGATE( l_U673[I], 0 );
        DESTROY_CAM( l_U673[I] );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref l_U681 );
    SET_GAME_CAM_HEADING( 0.00000000 );
    return;
}

