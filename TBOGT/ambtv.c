void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0.40000000;
    l_U7 = 0;
    l_U16 = 50;
    l_U17 = 0;
    l_U23 = 0;
    l_U24 = 0;
    l_U25 = 0;
    l_U26 = 0;
    l_U30 = 0;
    l_U80 = 0;
    l_U81 = 0;
    l_U82 = 2;
    l_U83 = 0;
    l_U85 = 0;
    l_U86 = 0;
    l_U93 = 0;
    l_U96 = -12.00000000;
    l_U97 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_138();
    }
    if (DOES_OBJECT_EXIST( l_U98 ))
    {
        GET_OBJECT_COORDINATES( l_U98, ref l_U8._fU0, ref l_U8._fU4, ref l_U8._fU8 );
    }
    if (DOES_OBJECT_EXIST( l_U98 ))
    {
        if (sub_936( l_U98, "e1_lost_grnddrink" ))
        {
            l_U31 = {-1708.84400000, 348.60170000, 25.92240000};
            l_U34 = 250.00000000;
            l_U40[1] = {-1707.49500000, 348.37160000, 27.18502000};
            l_U53[1] = {2.55960400, -0.00000000, -89.12234000};
            l_U66[1] = 45.00000000;
            if (# -NULL-0xc27c84())
            {
                l_U40[2] = {-1707.49500000, 348.37160000, 27.18502000};
                l_U53[2] = {2.55960400, -0.00000000, -89.12234000};
                l_U66[2] = 45.00000000;
            }
            else
            {
                l_U40[2] = {-1710.80000000, 347.22760000, 27.21375000};
                l_U53[2] = {-11.78221000, 0.00000000, -53.50981000};
                l_U66[2] = 56.70000000;
            }
            l_U40[3] = {-1709.38000000, 349.58630000, 27.14694000};
            l_U53[3] = {-2.43597000, -0.00000000, -137.28340000};
            l_U66[3] = 48.00000000;
            l_U71 = {-1707.45100000, 346.33860000, 26.47214000};
            l_U74 = {-1709.16400000, 350.05460000, 27.93596000};
            l_U87 = "e1_lost_grnddrink";
            l_U88 = {-1705.50300000, 345.97640000, 25.92240000};
            l_U91 = 67.00000000;
            if (NOT g_U10527)
            {
                l_U93 = 1;
            }
        }
        else if (sub_936( l_U98, "e1_lost_grndbar" ))
        {
            l_U31 = {-1717.11100000, 350.03730000, 25.34160000};
            l_U34 = 180.00000000;
            l_U40[1] = {-1717.73900000, 344.56110000, 28.11092000};
            l_U53[1] = {2.51168000, 0.00000000, -156.01500000};
            l_U66[1] = 45.00000000;
            if (# -NULL-0xc27c84())
            {
                l_U40[2] = {-1719.60400000, 352.31210000, 26.37176000};
                l_U53[2] = {7.17631700, -0.00000000, -141.83650000};
                l_U66[2] = 60.00000000;
            }
            else
            {
                l_U40[2] = {-1719.60400000, 352.31210000, 26.37176000};
                l_U53[2] = {7.17631700, -0.00000000, -141.83650000};
                l_U66[2] = 56.70000000;
            }
            l_U40[3] = {-1714.02900000, 350.72370000, 26.87038000};
            l_U53[3] = {-6.88076000, -0.00000000, 124.16020000};
            l_U66[3] = 48.00000000;
            l_U71 = {-1717.38000000, 344.54780000, 25.20428000};
            l_U74 = {-1719.19900000, 352.15690000, 27.83739000};
            l_U87 = "e1_lost_grndbar";
            l_U88 = {-1719.64500000, 346.24150000, 25.34160000};
            l_U91 = 333.67140000;
            l_U93 = 1;
        }
        else if (sub_936( l_U98, "e2_luisapartment" ))
        {
            l_U31 = {-437.98700000, 1395.16200000, 15.45710000};
            l_U34 = 180.00000000;
            l_U40[1] = {-438.04120000, 1393.23000000, 16.58787000};
            l_U53[1] = {-2.70288000, 0.00000000, 162.25930000};
            l_U66[1] = 45.00000000;
            if (# -NULL-0xc27c84())
            {
                l_U40[2] = {-436.92930000, 1395.15700000, 16.80920000};
                l_U53[2] = {-5.23258100, 0.00000000, 154.69080000};
                l_U66[2] = 31.25000000;
            }
            else
            {
                l_U40[2] = {-436.92930000, 1395.15700000, 16.80920000};
                l_U53[2] = {-6.83828300, -0.00000000, 155.37530000};
                l_U66[2] = 56.70000000;
            }
            l_U40[3] = {-436.06440000, 1397.40500000, 17.24201000};
            l_U53[3] = {-10.16429000, -0.00000000, 152.50610000};
            l_U66[3] = 48.00000000;
            l_U71 = {-436.83110000, 1392.63800000, 15.45760000};
            l_U74 = {-439.15100000, 1395.07800000, 16.46210000};
            l_U87 = "e2_luisapartment";
            l_U88 = {-433.86920000, 1396.38400000, 15.45660000};
            l_U91 = 148.67140000;
            l_U77 = {-438.47580000, 1393.41600000, 16.46260000};
        }
        else
        {
            sub_138();
        };;;
    }
    if (# -NULL-0xc27c84())
    {
        l_U14 = "e2:/xbox360/movies/weazelep2";
        l_U15 = "e2:/xbox360/movies/cntep2";
    }
    else if (# -NULL-0xc27bfa())
    {
        l_U14 = "e2:/movies/weazelep2";
        l_U15 = "e2:/movies/cntep2";
    }
    else
    {
        l_U14 = "e2:/ps3/movies/weazelep2";
        l_U15 = "e2:/ps3/movies/cntep2";
    }
    while (true)
    {
        WAIT( 0 );
        if (DOES_OBJECT_EXIST( l_U98 ))
        {
            if ((NOT (HAS_OBJECT_BEEN_DAMAGED( l_U98 ))) AND (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U98 )))
            {
                if (IS_PLAYER_PLAYING( sub_581() ))
                {
                    switch (l_U7)
                    {
                        case 0:
                        g_U10738 = 0;
                        GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U11 );
                        SET_TEXT_RENDER_ID( l_U11 );
                        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                        l_U7 = 1;
                        break;
                        case 1:
                        if (sub_2752())
                        {
                            GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 80.00000000, ref l_U27 );
                            l_U28 = ROUND( l_U27 );
                            l_U27 = TO_FLOAT( l_U28 );
                            if (g_U10527)
                            {
                                if (g_U10528)
                                {
                                    l_U7 = 5;
                                }
                            }
                            else
                            {
                                l_U7 = 2;
                            }
                        }
                        break;
                        case 2:
                        if (IS_CHAR_IN_ANY_CAR( sub_667() ))
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_667(), ref l_U92 );
                        }
                        if (IS_WANTED_LEVEL_GREATER( sub_581(), 0 ))
                        {
                            WAIT( 0 );
                        }
                        else
                        {
                            l_U27 += 0.01000000;
                            if (l_U27 > 100.00000000)
                            {
                                l_U27 = 0.00000000;
                            }
                            if ((IS_OBJECT_UPRIGHT( l_U98, 1 )) AND ((NOT g_U12379) AND ((IS_OBJECT_STATIC( l_U98 )) AND ((sub_3054( 4, 0 )) AND (LOCATE_CHAR_ON_FOOT_3D( sub_667(), l_U77._fU0, l_U77._fU4, l_U77._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))))))
                            {
                                PRINT_HELP_FOREVER( "TV_HLP1" );
                                if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                                {
                                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U92 );
                                    if (NOT (IS_CAR_DEAD( l_U92 )))
                                    {
                                        if (IS_CAR_IN_AREA_3D( l_U92, l_U71._fU0 - 2.00000000, l_U71._fU4 - 2.00000000, l_U71._fU8 - 2.00000000, l_U74._fU0 + 2.00000000, l_U74._fU4 + 2.00000000, l_U74._fU8 + 2.00000000, 0 ))
                                        {
                                            SET_CAR_COORDINATES( l_U92, l_U88._fU0, l_U88._fU4, l_U88._fU8 );
                                            SET_CAR_HEADING( l_U92, l_U91 );
                                            SET_CAR_ON_GROUND_PROPERLY( l_U92 );
                                            CLEAR_ROOM_FOR_CAR( l_U92 );
                                        }
                                    }
                                    CLEAR_AREA( l_U31._fU0, l_U31._fU4, l_U31._fU8, 5.00000000, 1 );
                                    REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\TELEVISION" );
                                    l_U29 = GET_SOUND_ID();
                                    GET_GAME_VIEWPORT_ID( ref l_U13 );
                                    l_U7 = 3;
                                }
                            }
                            else
                            {
                                sub_311( 4, "TV_HLP1" );
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TV_HLP1" ))
                                {
                                    CLEAR_HELP();
                                }
                            }
                        }
                        break;
                        case 3:
                        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TV_HLP1" ))
                        {
                            CLEAR_HELP();
                        }
                        if (NOT g_U10735)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                            if (NOT l_U83)
                            {
                                sub_3807( l_U30 );
                                l_U82 = 2;
                                SET_PLAYER_CONTROL( sub_581(), 0 );
                                SET_CHAR_COORDINATES( sub_667(), l_U31._fU0, l_U31._fU4, l_U31._fU8 );
                                SET_CHAR_HEADING( sub_667(), l_U34 );
                                SWITCH_STREAMING( 0 );
                                OVERRIDE_FREEZE_FLAGS( 1 );
                                OPEN_SEQUENCE_TASK( ref l_U84 );
                                TASK_PLAY_ANIM( 0, "sit_down", "missambtv", 8.00000000, 0, 0, 0, 0, -2 );
                                TASK_PLAY_ANIM( 0, "sit_loop", "missambtv", 8.00000000, 1, 0, 0, 0, -2 );
                                CLOSE_SEQUENCE_TASK( l_U84 );
                                TASK_PERFORM_SEQUENCE( sub_667(), l_U84 );
                                CLEAR_SEQUENCE_TASK( l_U84 );
                                l_U83 = 1;
                            }
                            else if ((IS_CHAR_PLAYING_ANIM( sub_667(), "missambtv", "sit_loop" )) AND (NOT (IS_CHAR_INJURED( sub_667() ))))
                            {
                                FREEZE_CHAR_POSITION( sub_667(), 1 );
                                TASK_LOOK_AT_COORD( sub_667(), l_U8._fU0, l_U8._fU4, l_U8._fU8, -2, 0 );
                                PLAY_SOUND_FRONTEND( l_U29, "TELEVISION_TURN_ON" );
                                MUTE_GAMEWORLD_AND_POSITIONED_RADIO_FOR_TV( 1 );
                                sub_4662();
                                l_U7 = 4;
                            }
                        }
                        break;
                        case 4:
                        if (NOT g_U10735)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                        }
                        if (NOT g_U10735)
                        {
                            if (NOT l_U81)
                            {
                                if (USING_STANDARD_CONTROLS())
                                {
                                    PRINT_HELP( "TV_HLP2" );
                                }
                                else
                                {
                                    PRINT_HELP( "TV_HLP3" );
                                }
                                l_U81 = 1;
                            }
                        }
                        l_U7 = 5;
                        break;
                        case 5:
                        if (g_U10527)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                            l_U16 = 1;
                            SET_CURRENT_MOVIE( l_U14 );
                        }
                        else if (NOT g_U10735)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                            if ((sub_4858( 0, 2 )) == 0)
                            {
                                l_U16 = 2;
                                sub_4900();
                            }
                            else
                            {
                                l_U16 = 1;
                                sub_4900();
                            }
                        }
                        l_U7 = 6;
                        break;
                        case 6:
                        sub_5541();
                        if (NOT l_U86)
                        {
                            SET_TEXT_RENDER_ID( l_U11 );
                            SET_MOVIE_TIME( l_U27 );
                            SET_MOVIE_VOLUME( l_U96 );
                            PLAY_MOVIE();
                            l_U86 = 1;
                        }
                        else
                        {
                            l_U27 += 0.01000000;
                            if (l_U27 > 100.00000000)
                            {
                                l_U27 = 0.00000000;
                            }
                        }
                        if ((g_U10738 == 1) || (HAS_OBJECT_BEEN_DAMAGED( l_U98 )))
                        {
                            if (NOT l_U85)
                            {
                                if (g_U10737)
                                {
                                    l_U26 = 1;
                                    if (l_U23 == 0)
                                    {
                                        l_U23 = 1;
                                    }
                                    STOP_STREAM();
                                    RELEASE_MOVIE();
                                    l_U85 = 1;
                                }
                                else
                                {
                                    RELEASE_MOVIE();
                                    l_U16 = 10;
                                    sub_4900();
                                    SET_TEXT_RENDER_ID( l_U11 );
                                    PLAY_MOVIE();
                                    l_U85 = 1;
                                }
                            }
                            else if (HAS_OBJECT_BEEN_DAMAGED( l_U98 ))
                            {
                                sub_138();
                            }
                        }
                        if (NOT g_U10735)
                        {
                            HIDE_HUD_AND_RADAR_THIS_FRAME();
                            if (NOT g_U10527)
                            {
                                if (l_U97)
                                {
                                    sub_138();
                                }
                                if (TIMERA() > 250)
                                {
                                    if ((IS_CONTROL_JUST_PRESSED( 2, 64 )) || (IS_CONTROL_JUST_PRESSED( 2, 65 )))
                                    {
                                        if (l_U27 >= 100.00000000)
                                        {
                                            l_U27 = 0.00000000;
                                        }
                                        if (NOT l_U93)
                                        {
                                            switch (l_U16)
                                            {
                                                case 1:
                                                l_U16 = 2;
                                                break;
                                                case 2:
                                                l_U16 = 1;
                                                break;
                                            }
                                            sub_6036();
                                            sub_4900();
                                            sub_6106( 0 );
                                        }
                                        else if ((sub_4858( 0, 10 )) > 5)
                                        {
                                            switch (l_U16)
                                            {
                                                case 1:
                                                if ((sub_4858( 0, 10 )) > 3)
                                                {
                                                    l_U16 = 2;
                                                    l_U17 = 0;
                                                }
                                                else
                                                {
                                                    l_U16 = 10;
                                                    l_U17 = 1;
                                                }
                                                break;
                                                case 2:
                                                if ((sub_4858( 0, 10 )) > 3)
                                                {
                                                    l_U16 = 1;
                                                    l_U17 = 0;
                                                }
                                                else
                                                {
                                                    l_U16 = 10;
                                                    l_U17 = 1;
                                                }
                                                break;
                                                case 10:
                                                if ((sub_4858( 0, 10 )) > 5)
                                                {
                                                    l_U16 = 2;
                                                    l_U17 = 0;
                                                }
                                                else
                                                {
                                                    l_U16 = 1;
                                                    l_U17 = 0;
                                                }
                                                break;
                                            }
                                            sub_6036();
                                            sub_4900();
                                            sub_6106( l_U17 );
                                        }
                                        else
                                        {
                                            l_U16 = 10;
                                            sub_6036();
                                            sub_4900();
                                            sub_6106( 1 );
                                        }
                                    }
                                }
                                if (IS_CONTROL_JUST_PRESSED( 2, 0 ))
                                {
                                    if (# -NULL-0xc27c84())
                                    {
                                        switch (l_U82)
                                        {
                                            case 2:
                                            SET_CAM_ACTIVE( l_U35[l_U82], 0 );
                                            SET_CAM_PROPAGATE( l_U35[l_U82], 0 );
                                            l_U82 = 3;
                                            SET_CAM_ACTIVE( l_U35[l_U82], 1 );
                                            SET_CAM_PROPAGATE( l_U35[l_U82], 1 );
                                            break;
                                            case 3:
                                            SET_CAM_ACTIVE( l_U35[l_U82], 0 );
                                            SET_CAM_PROPAGATE( l_U35[l_U82], 0 );
                                            l_U82 = 2;
                                            SET_CAM_ACTIVE( l_U35[l_U82], 1 );
                                            SET_CAM_PROPAGATE( l_U35[l_U82], 1 );
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        switch (l_U82)
                                        {
                                            case 1:
                                            SET_CAM_ACTIVE( l_U35[l_U82], 0 );
                                            SET_CAM_PROPAGATE( l_U35[l_U82], 0 );
                                            l_U82 = 2;
                                            SET_CAM_ACTIVE( l_U35[l_U82], 1 );
                                            SET_CAM_PROPAGATE( l_U35[l_U82], 1 );
                                            break;
                                            case 2:
                                            SET_CAM_ACTIVE( l_U35[l_U82], 0 );
                                            SET_CAM_PROPAGATE( l_U35[l_U82], 0 );
                                            l_U82 = 3;
                                            SET_CAM_ACTIVE( l_U35[l_U82], 1 );
                                            SET_CAM_PROPAGATE( l_U35[l_U82], 1 );
                                            break;
                                            case 3:
                                            SET_CAM_ACTIVE( l_U35[l_U82], 0 );
                                            SET_CAM_PROPAGATE( l_U35[l_U82], 0 );
                                            l_U82 = 1;
                                            SET_CAM_ACTIVE( l_U35[l_U82], 1 );
                                            SET_CAM_PROPAGATE( l_U35[l_U82], 1 );
                                            break;
                                        }
                                    }
                                }
                                if ((NOT IS_USING_CONTROLLER()) || (USING_STANDARD_CONTROLS()))
                                {
                                    if (IS_CONTROL_JUST_PRESSED( 2, 84 ))
                                    {
                                        l_U96 += 1.50000000;
                                        PRINTNL();
                                        PRINTSTRING( "fMovieVolume: " );
                                        PRINTFLOAT( l_U96 );
                                        PRINTNL();
                                        if (l_U96 > 0.00000000)
                                        {
                                            l_U96 = 0.00000000;
                                            SET_MOVIE_VOLUME( l_U96 );
                                        }
                                        else if (l_U96 < 65512)
                                        {
                                            l_U96 = -24.00000000;
                                            SET_MOVIE_VOLUME( l_U96 );
                                        }
                                        else
                                        {
                                            SET_MOVIE_VOLUME( l_U96 );
                                        }
                                    }
                                    if (IS_CONTROL_JUST_PRESSED( 2, 83 ))
                                    {
                                        l_U96 -= 1.50000000;
                                        PRINTNL();
                                        PRINTSTRING( "fMovieVolume: " );
                                        PRINTFLOAT( l_U96 );
                                        PRINTNL();
                                        if (l_U96 < -24.00000000)
                                        {
                                            l_U96 = -100.00000000;
                                            SET_MOVIE_VOLUME( l_U96 );
                                        }
                                        else
                                        {
                                            SET_MOVIE_VOLUME( l_U96 );
                                        }
                                    }
                                }
                                else if (IS_CONTROL_JUST_PRESSED( 2, 82 ))
                                {
                                    l_U96 += 1.50000000;
                                    PRINTNL();
                                    PRINTSTRING( "fMovieVolume: " );
                                    PRINTFLOAT( l_U96 );
                                    PRINTNL();
                                    if (l_U96 > 0.00000000)
                                    {
                                        l_U96 = 0.00000000;
                                        SET_MOVIE_VOLUME( l_U96 );
                                    }
                                    else if (l_U96 < 65512)
                                    {
                                        l_U96 = -24.00000000;
                                        SET_MOVIE_VOLUME( l_U96 );
                                    }
                                    else
                                    {
                                        SET_MOVIE_VOLUME( l_U96 );
                                    }
                                }
                                if (IS_CONTROL_JUST_PRESSED( 2, 81 ))
                                {
                                    l_U96 -= 1.50000000;
                                    PRINTNL();
                                    PRINTSTRING( "fMovieVolume: " );
                                    PRINTFLOAT( l_U96 );
                                    PRINTNL();
                                    if (l_U96 < -24.00000000)
                                    {
                                        l_U96 = -100.00000000;
                                        SET_MOVIE_VOLUME( l_U96 );
                                    }
                                    else
                                    {
                                        SET_MOVIE_VOLUME( l_U96 );
                                    }
                                }
                                if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
                                {
                                    SET_ROOM_FOR_VIEWPORT_BY_NAME( l_U13, l_U87 );
                                    if (NOT (IS_CHAR_INJURED( sub_667() )))
                                    {
                                        SET_ROOM_FOR_CHAR_BY_NAME( sub_667(), l_U87 );
                                    }
                                    SWITCH_STREAMING( 1 );
                                    OVERRIDE_FREEZE_FLAGS( 0 );
                                    CLEAR_HELP();
                                    STOP_MOVIE();
                                    RELEASE_MOVIE();
                                    if (NOT (l_U11 == -1))
                                    {
                                        SET_TEXT_RENDER_ID( l_U11 );
                                        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                                    }
                                    PLAY_SOUND_FRONTEND( l_U29, "TELEVISION_TURN_OFF" );
                                    sub_7786( l_U30 );
                                    if (NOT (IS_CHAR_INJURED( sub_667() )))
                                    {
                                        FREEZE_CHAR_POSITION( sub_667(), 0 );
                                        TASK_LOOK_AT_COORD( sub_667(), l_U8._fU0, l_U8._fU4, l_U8._fU8, 0, 0 );
                                        CLEAR_CHAR_TASKS( sub_667() );
                                        SET_PLAYER_CONTROL( sub_581(), 1 );
                                    }
                                    l_U83 = 0;
                                    g_U10738 = 0;
                                    l_U86 = 0;
                                    sub_311( 4, "TV_HLP1" );
                                    SETTIMERA( 0 );
                                    l_U7 = 7;
                                }
                                if (USING_STANDARD_CONTROLS())
                                {
                                    if ((IS_CONTROL_JUST_PRESSED( 2, 67 )) || ((IS_CONTROL_JUST_PRESSED( 2, 66 )) || ((sub_8223()) || ((sub_8167()) || ((IS_CONTROL_JUST_PRESSED( 2, 80 )) || ((IS_CONTROL_JUST_PRESSED( 2, 79 )) || (IS_CONTROL_JUST_PRESSED( 2, 82 ))))))))
                                    {
                                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TV_HLP2" )))
                                        {
                                            PRINT_HELP( "TV_HLP2" );
                                        }
                                    }
                                }
                                else if ((IS_CONTROL_JUST_PRESSED( 2, 67 )) || ((IS_CONTROL_JUST_PRESSED( 2, 66 )) || ((sub_8223()) || ((sub_8167()) || ((IS_CONTROL_JUST_PRESSED( 2, 80 )) || ((IS_CONTROL_JUST_PRESSED( 2, 79 )) || (IS_CONTROL_JUST_PRESSED( 2, 84 ))))))))
                                {
                                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TV_HLP3" )))
                                    {
                                        PRINT_HELP( "TV_HLP3" );
                                    }
                                }
                            }
                            else
                            {
                                l_U97 = 1;
                                if (NOT g_U10528)
                                {
                                    sub_138();
                                }
                            }
                        }
                        break;
                        case 7:
                        if (TIMERA() > 2000)
                        {
                            if (HAS_SOUND_FINISHED( l_U29 ))
                            {
                                if (NOT g_U10735)
                                {
                                    sub_8543();
                                }
                                sub_532();
                                MUTE_GAMEWORLD_AND_POSITIONED_RADIO_FOR_TV( 0 );
                                AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
                                l_U7 = 8;
                            }
                        }
                        break;
                        case 8:
                        if (NOT (l_U11 == -1))
                        {
                            SET_TEXT_RENDER_ID( l_U11 );
                            DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
                        }
                        if (NOT g_U10735)
                        {
                            sub_311( 4, "TV_HLP1" );
                            l_U7 = 2;
                        }
                        break;
                    }
                }
            }
            else
            {
                sub_138();
            }
        }
        else
        {
            sub_138();
        }
        sub_8707();
    }
    sub_138();
    return;
}

void sub_138()
{
    int I;

    RELEASE_MOVIE();
    if (NOT (l_U11 == -1))
    {
        SET_TEXT_RENDER_ID( l_U11 );
        DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    }
    sub_218( "TV_HLP1" );
    sub_218( "TV_HLP2" );
    sub_218( "TV_HLP3" );
    sub_311( 4, "TV_HLP1" );
    if (NOT (IS_CHAR_INJURED( sub_667() )))
    {
        FREEZE_CHAR_POSITION( sub_667(), 0 );
    }
    g_U10735 = 0;
    g_U10738 = 0;
    SWITCH_STREAMING( 1 );
    OVERRIDE_FREEZE_FLAGS( 0 );
    MUTE_GAMEWORLD_AND_POSITIONED_RADIO_FOR_TV( 0 );
    if (l_U25)
    {
        for ( I = 0; I <= 1; I++ )
        {
            RELEASE_TEXTURE( l_U19[I] );
        }
    }
    MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "TV_fakeStatic" );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_218(unknown uParam0)
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

void sub_311(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U10536 ))
        {
            if ((l_U5) AND (g_U10534 == iParam0))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_532();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_581(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_532()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_581()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_667()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

boolean sub_936(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_ROOM_KEY_FROM_OBJECT( uParam0, ref iVar4 );
    return iVar4 == (GET_HASH_KEY( uParam1 ));
}

int sub_2752()
{
    REQUEST_ANIMS( "missambtv" );
    if (HAVE_ANIMS_LOADED( "missambtv" ))
    {
        return 1;
    }
    return 0;
}

int sub_3054(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_581() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_581() )))
            {
                if (((g_U9200) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_581() )))))
                {
                    if (NOT sub_3150())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_667() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_3235())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_3150()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_3235()
{
    return sub_3246( 0, 0 );
}

int sub_3246(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U95._fU104 = 1;
    }
    if ((g_U560 != 9) AND (uParam1))
    {
        g_U95._fU100 = 1;
    }
    return 1;
}

void sub_3807(unknown uParam0)
{
    if (sub_3816())
    {
        if (NOT l_U80)
        {
            BEGIN_CAM_COMMANDS( ref uParam0 );
            CREATE_CAM( 14, ref l_U35[1] );
            SET_CAM_POS( l_U35[1], l_U40[1]._fU0, l_U40[1]._fU4, l_U40[1]._fU8 );
            SET_CAM_ROT( l_U35[1], l_U53[1]._fU0, l_U53[1]._fU4, l_U53[1]._fU8 );
            SET_CAM_FOV( l_U35[1], l_U66[1] );
            CREATE_CAM( 14, ref l_U35[2] );
            SET_CAM_POS( l_U35[2], l_U40[2]._fU0, l_U40[2]._fU4, l_U40[2]._fU8 );
            SET_CAM_ROT( l_U35[2], l_U53[2]._fU0, l_U53[2]._fU4, l_U53[2]._fU8 );
            SET_CAM_FOV( l_U35[2], l_U66[2] );
            CREATE_CAM( 14, ref l_U35[3] );
            SET_CAM_POS( l_U35[3], l_U40[3]._fU0, l_U40[3]._fU4, l_U40[3]._fU8 );
            SET_CAM_ROT( l_U35[3], l_U53[3]._fU0, l_U53[3]._fU4, l_U53[3]._fU8 );
            SET_CAM_FOV( l_U35[3], l_U66[3] );
            SET_CAM_ACTIVE( l_U35[2], 1 );
            SET_CAM_PROPAGATE( l_U35[2], 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U80 = 1;
        }
    }
    return;
}

void sub_3816()
{
    return sub_3246( 1, 1 );
}

void sub_4662()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    return;
}

void sub_4858(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_4900()
{
    if (l_U16 == 1)
    {
        if (NOT IS_EPISODIC_DISC_BUILD())
        {
            SET_CURRENT_MOVIE( l_U14 );
        }
        else
        {
            SET_CURRENT_MOVIE( "EFLC_WEAZEL" );
        }
    }
    else if (l_U16 == 2)
    {
        if (NOT IS_EPISODIC_DISC_BUILD())
        {
            SET_CURRENT_MOVIE( l_U15 );
        }
        else
        {
            SET_CURRENT_MOVIE( "EFLC_CNT" );
        }
    }
    else if (l_U16 == 10)
    {
        SET_CURRENT_MOVIE( "static" );
    }
    else if (l_U16 == 66)
    {
        SET_CURRENT_MOVIE( "burgershot_nosound" );
    }
    else if (l_U16 == 98)
    {
        SET_CURRENT_MOVIE( "static_nosound" );
    }
    else if (l_U16 == 50)
    {
        SET_CURRENT_MOVIE( "cnt_75" );
        PRINT_NOW( "cnt_75", 7500, 1 );
        sub_5229( "SET_CURRENT_MOVIE(cnt_75) \n" );
    }
    else if (l_U16 == 51)
    {
        SET_CURRENT_MOVIE( "cnt_65" );
        PRINT_NOW( "cnt_65", 7500, 1 );
        sub_5229( "SET_CURRENT_MOVIE(cnt_65) \n" );
    }
    else if (l_U16 == 52)
    {
        SET_CURRENT_MOVIE( "cnt_50" );
        PRINT_NOW( "cnt_50", 7500, 1 );
        sub_5229( "SET_CURRENT_MOVIE(cnt_50) \n" );
    }
    else if (l_U16 == 53)
    {
        SET_CURRENT_MOVIE( "cnt_40" );
        PRINT_NOW( "cnt_40", 7500, 1 );
        sub_5229( "SET_CURRENT_MOVIE(cnt_40) \n" );
    };;;;;;;;;
    return;
}

void sub_5229(unknown uParam0)
{
    return;
}

void sub_5541()
{
    GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U11 );
    SET_TEXT_RENDER_ID( l_U11 );
    DRAW_MOVIE( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
    return;
}

void sub_6036()
{
    STOP_MOVIE();
    RELEASE_MOVIE();
    DRAW_RECT( 0.50000000, 0.50000000, 1.00000000, 1.00000000, 0, 0, 0, 255 );
    return;
}

void sub_6106(boolean bParam0)
{
    SET_TEXT_RENDER_ID( l_U11 );
    if (NOT bParam0)
    {
        SET_MOVIE_TIME( l_U27 );
    }
    PLAY_MOVIE();
    SETTIMERA( 0 );
    return;
}

void sub_7786(unknown uParam0)
{
    if (l_U80)
    {
        SET_CAM_ACTIVE( l_U35[1], 0 );
        SET_CAM_PROPAGATE( l_U35[1], 0 );
        SET_CAM_ACTIVE( l_U35[2], 0 );
        SET_CAM_PROPAGATE( l_U35[2], 0 );
        SET_CAM_ACTIVE( l_U35[3], 0 );
        SET_CAM_PROPAGATE( l_U35[3], 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        END_CAM_COMMANDS( ref uParam0 );
        DESTROY_CAM( l_U35[1] );
        DESTROY_CAM( l_U35[2] );
        DESTROY_CAM( l_U35[3] );
        l_U80 = 0;
    }
    return;
}

int sub_8167()
{
    if ((IS_CONTROL_PRESSED( 2, 78 )) || (IS_CONTROL_PRESSED( 0, 78 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_8223()
{
    if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_8543()
{
    SET_MINIGAME_IN_PROGRESS( 0 );
    return;
}

void sub_8707()
{
    unknown uVar2;

    switch (l_U23)
    {
        case 1:
        REQUEST_STREAMED_TXD( "TV_fakeStatic", 0 );
        if (NOT (HAS_STREAMED_TXD_LOADED( "TV_fakeStatic" )))
        {
            break;
        }
        l_U19[0] = GET_TEXTURE_FROM_STREAMED_TXD( "TV_fakeStatic", "static_0" );
        l_U19[1] = GET_TEXTURE_FROM_STREAMED_TXD( "TV_fakeStatic", "static_1" );
        l_U19[2] = GET_TEXTURE_FROM_STREAMED_TXD( "TV_fakeStatic", "static_2" );
        l_U25 = 1;
        l_U23 = 2;
        case 2:
        if (l_U26)
        {
            SET_TEXT_RENDER_ID( l_U11 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref uVar2 );
            DRAW_SPRITE( l_U19[l_U24], 0.50000000, 0.50000000, 1.00000000, 1.00000000, (TO_FLOAT( uVar2 )) * 180.00000000, 255, 255, 255, 255 );
            sub_9023( ref l_U24, 1, 0, 2 );
        }
        break;
    }
    return;
}

void sub_9023(unknown uParam0, int iParam1, int iParam2, int iParam3)
{
    boolean bVar6;

    bVar6 = true;
    (uParam0^) += iParam1;
    while (bVar6)
    {
        if ((uParam0^) > iParam3)
        {
            (uParam0^) -= (iParam3 - iParam2) + 1;
        }
        else if ((uParam0^) < iParam2)
        {
            (uParam0^) += (iParam3 - iParam2) + 1;
        }
        else
        {
            bVar6 = false;
        }
    }
    return;
}

