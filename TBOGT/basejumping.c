void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 1;
    l_U106 = 3;
    l_U108 = {0.00000000, 0.00000000, 0.00000000};
    l_U226 = {1.00000000, 1.00000000, 1.00000000};
    l_U229 = {0.00000000, 1.00000000, 0.00000000};
    l_U232 = {0.00000000, -1.00000000, 0.00000000};
    l_U245 = 0;
    l_U246 = 0;
    l_U257 = 100.00000000;
    l_U258 = 10.50000000;
    l_U259 = 0.50000000;
    l_U260 = 2.85000000;
    l_U265 = 0;
    l_U266 = 0;
    l_U267 = 0;
    l_U268 = 0;
    l_U269 = 1;
    l_U335 = 6;
    l_U373 = nil;
    l_U386 = nil;
    l_U404 = 1;
    l_U439 = nil;
    l_U459 = 1;
    l_U535 = 6;
    l_U541 = 0;
    l_U542 = 2;
    l_U543 = -1;
    l_U554 = 1;
    l_U557 = 0;
    l_U577 = 0;
    l_U578 = 0;
    l_U581 = 1.60000000;
    l_U582 = 20.00000000;
    l_U584 = 0;
    l_U585 = 1;
    l_U599 = -20.70100000;
    l_U600 = -30.24400000;
    l_U601 = 0.00000000;
    l_U602 = -30.00000000;
    l_U603 = {0.26000000, -0.64000000, 1.00000000};
    l_U606 = {0.26000000, -0.64000000, 1.00000000};
    l_U609 = {0.00000000, 0.00000000, 0.00000000};
    l_U617 = 4.00000000;
    l_U618 = -50.00000000;
    l_U619 = 50.00000000;
    l_U620 = -89.00000000;
    l_U621 = 89.00000000;
    l_U622 = 45;
    l_U623 = 50.00000000;
    l_U626 = 4.00000000;
    l_U627 = {0.00000000, 0.00000000, 0.70000000};
    l_U543 = l_U643._fU100;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_569();
        sub_618();
    }
    SET_MISSION_FLAG( 1 );
    sub_1551( "BJUMP", 0 );
    sub_1708( 0, sub_1088(), "LUIS", 0 );
    sub_1853();
    sub_1904();
    while (true)
    {
        WAIT( 0 );
        sub_2651( l_U643 );
        switch (l_U541)
        {
            case 0:
            g_U2792 = 1;
            g_U42991 = 0;
            g_U10935 = 1;
            g_U10512 = 1;
            SWITCH_GARBAGE_TRUCKS( 0 );
            sub_2738();
            WAIT( 0 );
            REQUEST_ANIMS( "MISSBASEJUMP" );
            if ((l_U643._fU100 == 3) || (l_U643._fU100 == 2))
            {
                REQUEST_MODEL( 788045382 );
            }
            while (NOT (HAVE_ANIMS_LOADED( "MISSBASEJUMP" )))
            {
                WAIT( 0 );
            }
            sub_2929();
            if (l_U643._fU104 == 0)
            {
                sub_3026( l_U643 );
            }
            sub_3457();
            WAIT( 0 );
            if ((l_U643._fU100 == 11) || ((l_U643._fU100 == 7) || ((l_U643._fU100 == 4) || ((l_U643._fU100 == 3) || (l_U643._fU100 == 2)))))
            {
                LOAD_SCENE( l_U643._fU84._fU0, l_U643._fU84._fU4, l_U643._fU84._fU8 );
            }
            else
            {
                LOAD_SCENE( l_U643._fU12._fU0, l_U643._fU12._fU4, l_U643._fU12._fU8 );
            }
            WAIT( 0 );
            sub_4444( sub_1088() );
            SET_CHAR_COORDINATES( sub_1088(), l_U643._fU12._fU0, l_U643._fU12._fU4, l_U643._fU12._fU8 );
            SET_CHAR_HEADING( sub_1088(), l_U643._fU24 );
            SET_CHAR_DUCKING( sub_1088(), 0 );
            FREEZE_CHAR_POSITION( sub_1088(), 1 );
            SET_PLAYER_CONTROL( sub_685(), 0 );
            REMOVE_PLAYER_HELMET( sub_685(), 1 );
            if (l_U643._fU104 == 0)
            {
                l_U542 = 2;
                l_U589 = 1;
                sub_5090( 0 );
            }
            if (l_U643._fU104 == 1)
            {
                l_U542 = 0;
                l_U589 = 1;
            }
            if (l_U643._fU104 == 2)
            {
                l_U542 = 1;
                l_U589 = 1;
            }
            switch (l_U542)
            {
                case 0:
                if (NOT (DOES_BLIP_EXIST( l_U569 )))
                {
                    ADD_BLIP_FOR_COORD( l_U643._fU84._fU0, l_U643._fU84._fU4, l_U643._fU84._fU8, ref l_U569 );
                    SHOW_BLIP_ON_ALTIMETER( l_U569, 1 );
                    CREATE_CHECKPOINT( 9, l_U643._fU84._fU0, l_U643._fU84._fU4, l_U643._fU84._fU8, l_U643._fU84._fU0, l_U643._fU84._fU4, l_U643._fU84._fU8, 5.00000000 );
                    REQUEST_ALL_SLODS_IN_WORLD();
                }
                break;
                case 1:
                sub_5381( l_U643 );
                if (l_U643._fU100 == 2)
                {
                    while (NOT (HAS_MODEL_LOADED( 788045382 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 788045382, -18.74000000, 71.59000000, 218.27000000, ref l_U587, 1 );
                    SET_CAR_HEADING( l_U587, 180.00000000 );
                    CHANGE_CAR_COLOUR( l_U587, 139, 132 );
                    WARP_CHAR_INTO_CAR( sub_1088(), l_U587 );
                    CREATE_OBJECT( 337733980, -18.78310000, 48.59640000, 217.95700000, ref l_U597, 1 );
                    SET_OBJECT_HEADING( l_U597, 176.00000000 );
                    GIVE_PED_HELMET( sub_1088() );
                }
                if (l_U643._fU100 == 3)
                {
                    while (NOT (HAS_MODEL_LOADED( 788045382 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 788045382, -156.81000000, -546.37000000, 109.11000000, ref l_U587, 1 );
                    SET_CAR_HEADING( l_U587, 100.00000000 );
                    CHANGE_CAR_COLOUR( l_U587, 139, 132 );
                    WARP_CHAR_INTO_CAR( sub_1088(), l_U587 );
                    CREATE_OBJECT( 337733980, -205.43420000, -558.31850000, 108.34100000, ref l_U597, 1 );
                    SET_OBJECT_HEADING( l_U597, 105.00000000 );
                    GIVE_PED_HELMET( sub_1088() );
                }
                break;
                case 2:
                if (NOT (DOES_BLIP_EXIST( l_U569 )))
                {
                    REQUEST_ALL_SLODS_IN_WORLD();
                }
                break;
            }
            if ((l_U643._fU100 == 3) || (l_U643._fU100 == 2))
            {
                ;
            }
            else if (l_U643._fU104 == 0)
            {
                ;
            }
            else
            {
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_1088(), "idle_02", "MISSBASEJUMP", 1000.00000000, 1, 1, 1, 0, 0 );
            }
            SET_CURRENT_CHAR_WEAPON( sub_1088(), 0, 1 );
            sub_6447( l_U643 );
            SET_WIDESCREEN_BORDERS( 1 );
            while (NOT (sub_7300( sub_1088() )))
            {
                WAIT( 0 );
                sub_4444( sub_1088() );
                sub_5090( 0 );
            }
            if (l_U643._fU100 == 0)
            {
                sub_7497( 1 );
            }
            while (NOT sub_7521())
            {
                PRINTSTRING( "Waiting for cutscene to  finish" );
                WAIT( 0 );
            }
            DISPLAY_RADAR( 1 );
            DISPLAY_HUD( 1 );
            WAIT( 0 );
            if ((l_U643._fU100 == 11) || ((l_U643._fU100 == 7) || ((l_U643._fU100 == 4) || ((l_U643._fU100 == 3) || (l_U643._fU100 == 2)))))
            {
                LOAD_SCENE( l_U643._fU84._fU0, l_U643._fU84._fU4, l_U643._fU84._fU8 );
            }
            else
            {
                LOAD_SCENE( l_U643._fU12._fU0, l_U643._fU12._fU4, l_U643._fU12._fU8 );
            }
            WAIT( 0 );
            SET_CURRENT_CHAR_WEAPON( sub_1088(), 0, 1 );
            if ((l_U643._fU104 == 0) || ((l_U643._fU100 == 3) || (l_U643._fU100 == 2)))
            {
                FREEZE_CHAR_POSITION( sub_1088(), 0 );
            }
            else
            {
                FREEZE_CHAR_POSITION( sub_1088(), 1 );
            }
            SET_WIDESCREEN_BORDERS( 0 );
            if ((l_U643._fU100 == 3) || (l_U643._fU100 == 2))
            {
                ;
            }
            else
            {
                sub_8155();
            }
            if (l_U643._fU104 == 2)
            {
                if (NOT (IS_CAR_DEAD( l_U586 )))
                {
                    ADD_BLIP_FOR_CAR( l_U586, ref l_U569 );
                    SHOW_BLIP_ON_ALTIMETER( l_U569, 1 );
                    SET_BLIP_AS_FRIENDLY( l_U569, 1 );
                }
            }
            if (l_U643._fU100 == 3)
            {
                l_U580 = GET_HASH_KEY( "10D_MH1" );
                REQUEST_MODEL( l_U580 );
                WAIT( 1000 );
            }
            if (l_U643._fU100 == 11)
            {
                REQUEST_ALL_SLODS_IN_WORLD();
            }
            DO_SCREEN_FADE_IN( 500 );
            while (IS_SCREEN_FADING())
            {
                WAIT( 0 );
            }
            if ((l_U643._fU104 == 0) || ((l_U643._fU100 == 3) || (l_U643._fU100 == 2)))
            {
                SET_PLAYER_CONTROL( sub_685(), 1 );
            }
            else
            {
                SET_PLAYER_CONTROL( sub_685(), 0 );
            }
            if ((l_U643._fU100 == 3) || (l_U643._fU100 == 2))
            {
                FREEZE_CHAR_POSITION( sub_1088(), 0 );
                SET_PLAYER_CONTROL( sub_685(), 1 );
                if (l_U643._fU104 == 2)
                {
                    PRINT_NOW( "BJTRUC", 7000, 1 );
                }
                PRINT_HELP( "BJBIKE" );
            }
            else
            {
                PRINT_HELP_FOREVER( "HEHELP1" );
                if (NOT (IS_CAR_DEAD( l_U586 )))
                {
                    sub_8155();
                }
            }
            SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_EDGE", 1, 0, 0 );
            if (l_U643._fU100 == 3)
            {
                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U580 );
            }
            SETTIMERB( 0 );
            l_U541 = 1;
            break;
            case 1:
            if (l_U589)
            {
                ;
            }
            if (l_U643._fU104 == 2)
            {
                if (l_U584 == 1)
                {
                    if (DOES_VEHICLE_EXIST( l_U586 ))
                    {
                        if (IS_CAR_DEAD( l_U586 ))
                        {
                            sub_9830();
                        }
                    }
                }
            }
            if (sub_7300( sub_1088() ))
            {
                if (l_U643._fU104 == 0)
                {
                    if (l_U583 == 0)
                    {
                        if (NOT (IS_CAR_DEAD( l_U586 )))
                        {
                            sub_8155();
                        }
                        if ((IS_CONTROL_PRESSED( 2, 137 )) || (IS_BUTTON_PRESSED( 0, 15 )))
                        {
                            SET_CINEMATIC_BUTTON_ENABLED( 1 );
                            CLEAR_HELP();
                            FREEZE_CHAR_POSITION( sub_1088(), 1 );
                            SET_CHAR_COLLISION( sub_1088(), 0 );
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1088() );
                            SET_PLAYER_CONTROL( sub_685(), 0 );
                            if (DOES_CAM_EXIST( l_U561 ))
                            {
                                SET_CAM_ACTIVE( l_U561, 0 );
                                SET_CAM_PROPAGATE( l_U561, 0 );
                                DESTROY_CAM( l_U561 );
                                SET_GAME_CAM_HEADING( 0.00000000 );
                            }
                            SET_CHAR_VISIBLE( sub_1088(), 1 );
                            BEGIN_CAM_COMMANDS( ref l_U575 );
                            CREATE_CAM( 14, ref l_U558 );
                            if (NOT (IS_CAR_DEAD( l_U586 )))
                            {
                                FREEZE_CAR_POSITION( l_U586, 1 );
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U586, 7.00000000, 2.00000000, 4.40000000, ref l_U550._fU0, ref l_U550._fU4, ref l_U550._fU8 );
                                SET_CAM_POS( l_U558, l_U550._fU0, l_U550._fU4, l_U550._fU8 );
                                SET_CAM_FOV( l_U558, 45.00000000 );
                                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U586, -0.00000000, 0.30000000, 0.00000000, ref l_U550._fU0, ref l_U550._fU4, ref l_U550._fU8 );
                                POINT_CAM_AT_COORD( l_U558, l_U550._fU0, l_U550._fU4, l_U550._fU8 );
                            }
                            SET_CAM_ACTIVE( l_U558, 1 );
                            SET_CAM_PROPAGATE( l_U558, 1 );
                            SET_CAM_FOV( l_U558, 30.00000000 );
                            SET_CAM_NEAR_DOF( l_U558, 7.50000000 );
                            SET_CAM_FAR_DOF( l_U558, 10.00000000 );
                            SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_FREEFALL", 1, 0, 0 );
                            sub_10531( 1 );
                            SET_CURRENT_CHAR_WEAPON( sub_1088(), 0, 1 );
                            OPEN_SEQUENCE_TASK( ref l_U591 );
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "Dive", "MISSBASEJUMP", 1000.00000000, 0, 64 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Free_Fall", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                            CLOSE_SEQUENCE_TASK( l_U591 );
                            TASK_PERFORM_SEQUENCE( sub_1088(), l_U591 );
                            CLEAR_SEQUENCE_TASK( l_U591 );
                            SET_GAME_CAM_HEADING( 0.00000000 );
                            SET_CAM_BEHIND_PED( sub_1088() );
                            while (NOT (IS_CHAR_PLAYING_ANIM( sub_1088(), "PARACHUTE", "Free_Fall" )))
                            {
                                WAIT( 0 );
                            }
                            FREEZE_CHAR_POSITION( sub_1088(), 0 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_1088(), "Free_Fall", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                            sub_10845( sub_1088() );
                            if (DOES_CAM_EXIST( l_U558 ))
                            {
                                SET_CAM_ACTIVE( l_U558, 0 );
                                SET_CAM_PROPAGATE( l_U558, 0 );
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                DESTROY_CAM( l_U558 );
                                DESTROY_CAM( l_U631 );
                                END_CAM_COMMANDS( ref l_U575 );
                            }
                            SET_PLAYER_CONTROL( sub_685(), 1 );
                            SET_CHAR_COLLISION( sub_1088(), 1 );
                            SET_CHAR_DUCKING( sub_1088(), 0 );
                            l_U583 = 1;
                            PRINT_NOW( "BJHELI", 5000, 1 );
                            CLEAR_HELP();
                            PRINT_HELP( "BJHELP" );
                        }
                    }
                }
                else if (l_U554 == 1)
                {
                    if ((sub_11234( sub_1088() )) == 3)
                    {
                        l_U583 = 1;
                        CLEAR_HELP();
                        PRINT_HELP( "BJHELP" );
                        l_U554 = 0;
                    }
                }
                if (l_U583 == 0)
                {
                    if ((l_U643._fU100 == 3) || (l_U643._fU100 == 2))
                    {
                        ;
                    }
                    else
                    {
                        sub_8155();
                        if ((IS_CONTROL_PRESSED( 2, 137 )) || (IS_BUTTON_PRESSED( 0, 15 )))
                        {
                            CLEAR_HELP();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1088() );
                            CLEAR_HELP();
                            SET_PLAYER_CONTROL( sub_685(), 0 );
                            sub_10531( 1 );
                            OPEN_SEQUENCE_TASK( ref l_U591 );
                            TASK_PLAY_ANIM_WITH_FLAGS( 0, "Dive_02", "MISSBASEJUMP", 4.00000000, 0, 64 );
                            TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "Free_Fall", "PARACHUTE", 1000.00000000, 1, 1, 1, 0, 0 );
                            CLOSE_SEQUENCE_TASK( l_U591 );
                            TASK_PERFORM_SEQUENCE( sub_1088(), l_U591 );
                            CLEAR_SEQUENCE_TASK( l_U591 );
                            WAIT( 500 );
                            SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_BREATHE", 1, 1, 1 );
                            if (DOES_CAM_EXIST( l_U561 ))
                            {
                                SET_CAM_ACTIVE( l_U561, 0 );
                                SET_CAM_PROPAGATE( l_U561, 0 );
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                DESTROY_CAM( l_U561 );
                                SET_GAME_CAM_HEADING( 0.00000000 );
                            }
                            BEGIN_CAM_COMMANDS( ref l_U575 );
                            CREATE_CAM( 14, ref l_U558 );
                            if (WAS_PED_SKELETON_UPDATED( sub_1088() ))
                            {
                                GET_PED_BONE_POSITION( sub_1088(), 417, 0.00000000, -5.00000000, 0.00000000, ref l_U550 );
                                SET_CAM_POS( l_U558, l_U550._fU0, l_U550._fU4, l_U550._fU8 );
                                GET_PED_BONE_POSITION( sub_1088(), 417, 0.00000000, 0.00000000, 0.00000000, ref l_U550 );
                                POINT_CAM_AT_COORD( l_U558, l_U550._fU0, l_U550._fU4, l_U550._fU8 );
                            }
                            SET_CAM_ACTIVE( l_U558, 1 );
                            SET_CAM_PROPAGATE( l_U558, 1 );
                            SET_CAM_FOV( l_U558, 30.00000000 );
                            SET_CAM_NEAR_DOF( l_U558, 7.50000000 );
                            SET_CAM_FAR_DOF( l_U558, 10.00000000 );
                            SET_CHAR_VISIBLE( sub_1088(), 1 );
                            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            while (NOT (IS_CHAR_PLAYING_ANIM( sub_1088(), "PARACHUTE", "Free_Fall" )))
                            {
                                SET_TIME_SCALE( 0.40000000 );
                                if (WAS_PED_SKELETON_UPDATED( sub_1088() ))
                                {
                                    GET_PED_BONE_POSITION( sub_1088(), 417, 0.00000000, -5.00000000, 0.00000000, ref l_U550 );
                                    SET_CAM_POS( l_U558, l_U550._fU0, l_U550._fU4, l_U550._fU8 );
                                    GET_PED_BONE_POSITION( sub_1088(), 417, 0.00000000, 0.00000000, 0.00000000, ref l_U550 );
                                    POINT_CAM_AT_COORD( l_U558, l_U550._fU0, l_U550._fU4, l_U550._fU8 );
                                }
                                WAIT( 0 );
                            }
                            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 1100 );
                            FREEZE_CHAR_POSITION( sub_1088(), 0 );
                            SET_TIME_SCALE( 1.00000000 );
                            if (DOES_CAM_EXIST( l_U558 ))
                            {
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                            }
                            SET_PLAYER_CONTROL( sub_685(), 1 );
                            SET_CHAR_DUCKING( sub_1088(), 0 );
                            FREEZE_CHAR_POSITION( sub_1088(), 0 );
                            WAIT( 1300 );
                            l_U583 = 1;
                            CLEAR_HELP();
                            PRINT_HELP( "BJHELP" );
                            if (DOES_CAM_EXIST( l_U558 ))
                            {
                                ;
                            }
                        }
                    }
                }
                if (NOT l_U553)
                {
                    if ((sub_11234( sub_1088() )) == 5)
                    {
                        sub_12469( l_U643 );
                        l_U553 = 1;
                    }
                }
            }
            if (sub_7300( sub_1088() ))
            {
                if (NOT (IS_CHAR_INJURED( sub_1088() )))
                {
                    sub_12647( l_U643 );
                    if (l_U585 == 1)
                    {
                        if ((l_U643._fU100 != 3) AND ((l_U643._fU100 != 2) AND ((l_U583 == 1) AND (l_U643._fU104 != 0))))
                        {
                            if (NOT IS_CAM_INTERPOLATING())
                            {
                                SET_CAM_ACTIVE( l_U558, 0 );
                                SET_CAM_PROPAGATE( l_U558, 0 );
                                DESTROY_CAM( l_U558 );
                                END_CAM_COMMANDS( ref l_U575 );
                                sub_13376();
                                l_U585 = 0;
                            }
                        }
                    }
                    if (l_U643._fU104 == 2)
                    {
                        if (NOT (IS_CAR_DEAD( l_U586 )))
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U586, 0.00000000, -2.00000000, 2.30000000, ref l_U634._fU0, ref l_U634._fU4, ref l_U634._fU8 );
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), l_U634._fU0, l_U634._fU4, l_U634._fU8, 5.50000000, 5.50000000, 1.50000000, 0 ))
                            {
                                ;
                            }
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), l_U634._fU0, l_U634._fU4, l_U634._fU8, 0.50000000, 0.50000000, 0.50000000, 0 ))
                            {
                                ;
                            }
                        }
                    }
                    else if (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), l_U643._fU84._fU0, l_U643._fU84._fU4, l_U643._fU84._fU8, 5.90000000, 5.90000000, 5.90000000, 0 ))
                    {
                        ;
                    }
                    if (l_U643._fU104 == 0)
                    {
                        if (l_U577 == 0)
                        {
                            l_U592[0] = CREATE_CHECKPOINT( 8, l_U643._fU108, l_U643._fU120, 1.00000000 );
                            if (NOT (DOES_BLIP_EXIST( l_U570[0] )))
                            {
                                ADD_BLIP_FOR_COORD( l_U643._fU108._fU0, l_U643._fU108._fU4, l_U643._fU108._fU8, ref l_U570[0] );
                                CHANGE_BLIP_SCALE( l_U570[0], 0.60000000 );
                                CHANGE_BLIP_DISPLAY( l_U570[0], 2 );
                                SHOW_BLIP_ON_ALTIMETER( l_U570[0], 1 );
                            }
                            l_U577++;
                        }
                        if (l_U577 == 1)
                        {
                            GET_CHAR_COORDINATES( sub_1088(), ref l_U550._fU0, ref l_U550._fU4, ref l_U550._fU8 );
                            if ((l_U550._fU8 < l_U643._fU108._fU8) || (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), l_U643._fU108._fU0, l_U643._fU108._fU4, l_U643._fU108._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                            {
                                DELETE_CHECKPOINT( l_U592[0] );
                                l_U592[1] = CREATE_CHECKPOINT( 8, l_U643._fU120, l_U643._fU132, 1.00000000 );
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U570[0] );
                                if (NOT (DOES_BLIP_EXIST( l_U570[1] )))
                                {
                                    ADD_BLIP_FOR_COORD( l_U643._fU120._fU0, l_U643._fU120._fU4, l_U643._fU120._fU8, ref l_U570[1] );
                                    CHANGE_BLIP_SCALE( l_U570[1], 0.60000000 );
                                    CHANGE_BLIP_DISPLAY( l_U570[1], 2 );
                                    SHOW_BLIP_ON_ALTIMETER( l_U570[1], 1 );
                                }
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), l_U643._fU108._fU0, l_U643._fU108._fU4, l_U643._fU108._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
                                {
                                    ADD_SCORE( sub_685(), 30 );
                                    l_U590 = GET_SOUND_ID();
                                    PLAY_SOUND_FRONTEND( l_U590, "PARACHUTE_COLLECT_RING" );
                                    SET_VARIABLE_ON_SOUND( l_U590, "Score", 1 );
                                    SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_CHECKPOINT_HIT", 0, 0, 0 );
                                    g_U42991 += 10;
                                    l_U578 += 30;
                                }
                                else
                                {
                                    l_U590 = GET_SOUND_ID();
                                    SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_CHECKPOINT_MISS", 0, 0, 0 );
                                    PLAY_SOUND_FRONTEND( l_U590, "PARACHUTE_COLLECT_RING" );
                                    SET_VARIABLE_ON_SOUND( l_U590, "Score", 0 );
                                }
                                l_U577++;
                            }
                        }
                        if (l_U577 == 2)
                        {
                            GET_CHAR_COORDINATES( sub_1088(), ref l_U550._fU0, ref l_U550._fU4, ref l_U550._fU8 );
                            if ((l_U550._fU8 < l_U643._fU120._fU8) || (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), l_U643._fU120._fU0, l_U643._fU120._fU4, l_U643._fU120._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                            {
                                DELETE_CHECKPOINT( l_U592[1] );
                                l_U592[2] = CREATE_CHECKPOINT( 8, l_U643._fU132, l_U643._fU144, 1.00000000 );
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U570[1] );
                                if (NOT (DOES_BLIP_EXIST( l_U570[2] )))
                                {
                                    ADD_BLIP_FOR_COORD( l_U643._fU132._fU0, l_U643._fU132._fU4, l_U643._fU132._fU8, ref l_U570[2] );
                                    CHANGE_BLIP_SCALE( l_U570[2], 0.60000000 );
                                    CHANGE_BLIP_DISPLAY( l_U570[2], 2 );
                                    SHOW_BLIP_ON_ALTIMETER( l_U570[2], 1 );
                                }
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), l_U643._fU120._fU0, l_U643._fU120._fU4, l_U643._fU120._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
                                {
                                    ADD_SCORE( sub_685(), 30 );
                                    l_U590 = GET_SOUND_ID();
                                    PLAY_SOUND_FRONTEND( l_U590, "PARACHUTE_COLLECT_RING" );
                                    SET_VARIABLE_ON_SOUND( l_U590, "Score", 1 );
                                    SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_CHECKPOINT_HIT", 0, 0, 0 );
                                    g_U42991 += 10;
                                    l_U578 += 30;
                                }
                                else
                                {
                                    l_U590 = GET_SOUND_ID();
                                    PLAY_SOUND_FRONTEND( l_U590, "PARACHUTE_COLLECT_RING" );
                                    SET_VARIABLE_ON_SOUND( l_U590, "Score", 0 );
                                    SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_CHECKPOINT_MISS", 0, 0, 0 );
                                }
                                l_U577++;
                            }
                        }
                        if (l_U577 == 3)
                        {
                            GET_CHAR_COORDINATES( sub_1088(), ref l_U550._fU0, ref l_U550._fU4, ref l_U550._fU8 );
                            if ((l_U550._fU8 < l_U643._fU132._fU8) || (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), l_U643._fU132._fU0, l_U643._fU132._fU4, l_U643._fU132._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                            {
                                DELETE_CHECKPOINT( l_U592[2] );
                                l_U592[3] = CREATE_CHECKPOINT( 8, l_U643._fU144, l_U643._fU84._fU0, l_U643._fU84._fU4, l_U643._fU84._fU8, 1.00000000 );
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U570[2] );
                                if (NOT (DOES_BLIP_EXIST( l_U570[3] )))
                                {
                                    ADD_BLIP_FOR_COORD( l_U643._fU144._fU0, l_U643._fU144._fU4, l_U643._fU144._fU8, ref l_U570[3] );
                                    CHANGE_BLIP_SCALE( l_U570[3], 0.60000000 );
                                    CHANGE_BLIP_DISPLAY( l_U570[3], 2 );
                                    SHOW_BLIP_ON_ALTIMETER( l_U570[3], 1 );
                                }
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), l_U643._fU132._fU0, l_U643._fU132._fU4, l_U643._fU132._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
                                {
                                    ADD_SCORE( sub_685(), 30 );
                                    l_U590 = GET_SOUND_ID();
                                    PLAY_SOUND_FRONTEND( l_U590, "PARACHUTE_COLLECT_RING" );
                                    SET_VARIABLE_ON_SOUND( l_U590, "Score", 1 );
                                    SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_CHECKPOINT_HIT", 0, 0, 0 );
                                    g_U42991 += 10;
                                    l_U578 += 30;
                                }
                                else
                                {
                                    l_U590 = GET_SOUND_ID();
                                    PLAY_SOUND_FRONTEND( l_U590, "PARACHUTE_COLLECT_RING" );
                                    SET_VARIABLE_ON_SOUND( l_U590, "Score", 0 );
                                    SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_CHECKPOINT_MISS", 0, 0, 0 );
                                }
                                l_U577++;
                            }
                        }
                        if (l_U577 == 4)
                        {
                            GET_CHAR_COORDINATES( sub_1088(), ref l_U550._fU0, ref l_U550._fU4, ref l_U550._fU8 );
                            if ((l_U550._fU8 < l_U643._fU144._fU8) || (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), l_U643._fU144._fU0, l_U643._fU144._fU4, l_U643._fU144._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
                            {
                                DELETE_CHECKPOINT( l_U592[3] );
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U570[3] );
                                if (NOT (DOES_BLIP_EXIST( l_U569 )))
                                {
                                    ADD_BLIP_FOR_COORD( l_U643._fU84._fU0, l_U643._fU84._fU4, l_U643._fU84._fU8, ref l_U569 );
                                    SHOW_BLIP_ON_ALTIMETER( l_U569, 1 );
                                    CHANGE_BLIP_SCALE( l_U569, 0.60000000 );
                                }
                                CREATE_CHECKPOINT( 9, l_U643._fU84._fU0, l_U643._fU84._fU4, l_U643._fU84._fU8, l_U643._fU84._fU0, l_U643._fU84._fU4, l_U643._fU84._fU8, 5.00000000 );
                                if (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), l_U643._fU144._fU0, l_U643._fU144._fU4, l_U643._fU144._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
                                {
                                    ADD_SCORE( sub_685(), 30 );
                                    l_U590 = GET_SOUND_ID();
                                    PLAY_SOUND_FRONTEND( l_U590, "PARACHUTE_COLLECT_RING" );
                                    SET_VARIABLE_ON_SOUND( l_U590, "Score", 1 );
                                    SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_CHECKPOINT_HIT", 0, 0, 0 );
                                    g_U42991 += 10;
                                    l_U578 += 30;
                                }
                                else
                                {
                                    l_U590 = GET_SOUND_ID();
                                    PLAY_SOUND_FRONTEND( l_U590, "PARACHUTE_COLLECT_RING" );
                                    SET_VARIABLE_ON_SOUND( l_U590, "Score", 0 );
                                    SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_CHECKPOINT_MISS", 0, 0, 0 );
                                }
                                l_U577++;
                            }
                        }
                    }
                    if (l_U583)
                    {
                        if ((NOT (sub_7300( sub_1088() ))) || ((IS_CHAR_IN_WATER( sub_1088() )) || (sub_12734( sub_1088() ))))
                        {
                            if (sub_16711( l_U643 ))
                            {
                                l_U590 = GET_SOUND_ID();
                                PLAY_SOUND_FRONTEND( l_U590, "PARACHUTE_COLLECT_RING" );
                                SET_VARIABLE_ON_SOUND( l_U590, "Score", 1 );
                                SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_CHECKPOINT_HIT", 0, 0, 0 );
                                sub_18571( l_U643 );
                            }
                            else
                            {
                                SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_CHECKPOINT_MISS", 0, 0, 0 );
                                PRINTSTRING( " \nPLayer injured\n" );
                                sub_9830();
                            }
                        }
                    }
                }
                else
                {
                    PRINTSTRING( " \n Cilmbed to the bottom \n" );
                    sub_9830();
                }
            }
            else if (l_U583)
            {
                if ((NOT (sub_7300( sub_1088() ))) || ((IS_CHAR_IN_WATER( sub_1088() )) || (sub_12734( sub_1088() ))))
                {
                    if (sub_16711( l_U643 ))
                    {
                        sub_18571( l_U643 );
                    }
                    else
                    {
                        PRINTSTRING( " \n missed target 2 \n" );
                        sub_9830();
                    }
                }
            }
            break;
            case 2: break;
        }
    }
    return;
}

void sub_569()
{
    g_U43589 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "BasejumpScreen" );
    return;
}

void sub_618()
{
    sub_627();
    REMOVE_PLAYER_HELMET( sub_685(), 1 );
    g_U10512 = 0;
    sub_730();
    g_U10935 = 0;
    SWITCH_GARBAGE_TRUCKS( 1 );
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    SET_PTFX_CAM_INSIDE_VEHICLE( 0 );
    if (DOES_CAM_EXIST( l_U561 ))
    {
        SET_CAM_ACTIVE( l_U561, 0 );
        SET_CAM_PROPAGATE( l_U561, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U561 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    if (DOES_CAM_EXIST( l_U560 ))
    {
        SET_CAM_ACTIVE( l_U560, 0 );
        SET_CAM_PROPAGATE( l_U560, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U560 );
    }
    if (DOES_CAM_EXIST( l_U558 ))
    {
        SET_CAM_ACTIVE( l_U558, 0 );
        SET_CAM_PROPAGATE( l_U558, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U558 );
    }
    if (DOES_CAM_EXIST( l_U559 ))
    {
        SET_CAM_ACTIVE( l_U559, 0 );
        SET_CAM_PROPAGATE( l_U559, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U559 );
        END_CAM_COMMANDS( ref l_U575 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    if (NOT (IS_CHAR_DEAD( sub_1088() )))
    {
        SET_CHAR_VISIBLE( sub_1088(), 1 );
    }
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    SET_TIME_SCALE( 1.00000000 );
    if (NOT (IS_CAR_DEAD( l_U586 )))
    {
        if (NOT (IS_CHAR_DEAD( l_U588 )))
        {
            if ((NOT (IS_CHAR_DEAD( sub_1088() ))) AND (IS_CHAR_IN_CAR( l_U588, l_U586 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U591 );
                TASK_LEAVE_CAR_IMMEDIATELY( 0, l_U586 );
                TASK_SMART_FLEE_CHAR( 0, sub_1088(), 40.00000000, -2 );
                CLOSE_SEQUENCE_TASK( l_U591 );
                TASK_PERFORM_SEQUENCE( l_U588, l_U591 );
                CLEAR_SEQUENCE_TASK( l_U591 );
            }
        }
    }
    if ((NOT (IS_CHAR_IN_ANY_CAR( sub_1088() ))) AND (NOT (IS_CHAR_DEAD( sub_1088() ))))
    {
        SET_CHAR_COLLISION( sub_1088(), 1 );
    }
    if (NOT (IS_CHAR_DEAD( sub_1088() )))
    {
        FREEZE_CHAR_POSITION( sub_1088(), 0 );
    }
    CLEAR_HELP();
    l_U583 = 0;
    l_U553 = 0;
    l_U541 = 0;
    sub_1440();
    if (DOES_VEHICLE_EXIST( l_U586 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U586 );
    }
    if (DOES_BLIP_EXIST( l_U569 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U569 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_627()
{
    sub_637( 1 );
    sub_637( 2 );
    sub_637( 0 );
    return;
}

void sub_637(unknown uParam0)
{
    g_U30226[uParam0] = nil;
    return;
}

void sub_685()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_730()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_1088()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1440()
{
    g_U2793 = 0;
    return;
}

void sub_1551(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_1587())
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

int sub_1587()
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

void sub_1708(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_1788( "\n PED NUMBER ", uParam0 );
    sub_1828( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_1788(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1828(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_1853()
{
    g_U817 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_1904()
{
    unknown[20] uVar2;

    array(ref uVar2, 20);
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -179.19800000, -338.50000000, 50.93000000, 8.70000000, 0, 11.13000000, ref uVar2[0] );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 18.89800000, 326.81650000, 69.01999000, 25, 0, 169.96000000, ref uVar2[1] );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -30.92000000, 140.93000000, 63.77910000, 25.60000000, 0, -14.96000000, ref uVar2[2] );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -336.07000000, -652.32000000, 17.23000000, 2, 0, -29.96000000, ref uVar2[3] );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -187.71410000, 346.46700000, 13.80560000, 90, 0, 48.96000000, ref uVar2[4] );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -174.27040000, 205.10870000, 13.75790000, 90, 0, 48.96000000, ref uVar2[5] );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -218.71780000, 229.59520000, 13.76960000, 90, 0, 48.96000000, ref uVar2[6] );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -180.13420000, 17.25550000, 13.72320000, 90, 0, 48.96000000, ref uVar2[7] );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 938.65240000, -936.97650000, 13.73270000, 90, 0, 48.96000000, ref uVar2[8] );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, 1492.68600000, 49.22330000, 54.59520000, 90, 0, 48.96000000, ref uVar2[9] );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, 2133.23700000, 429.33000000, 20.82650000, 90, 0, 48.96000000, ref uVar2[10] );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -1287.54500000, 884.57500000, 18.56640000, 90, 0, 48.96000000, ref uVar2[11] );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -2159.69000000, 165.47350000, 11.04610000, 90, 0, 48.96000000, ref uVar2[12] );
    CREATE_PICKUP_ROTATE( -1758615024, 22, 200, -1191.15000000, 1692.54500000, 35.42050000, 90, 0, 48.96000000, ref uVar2[13] );
    CREATE_PICKUP_ROTATE( 1069950328, 22, 200, -699.67500000, 348.91720000, 3.07100000, 90, 0, 48.96000000, ref uVar2[14] );
    return;
}

void sub_2651(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41)
{
    return;
}

void sub_2738()
{
    return sub_2749( 1, 1 );
}

int sub_2749(boolean bParam0, unknown uParam1)
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

void sub_2929()
{
    sub_2939( 1 );
    sub_2939( 2 );
    sub_2939( 0 );
    return;
}

void sub_2939(unknown uParam0)
{
    g_U30226[uParam0] = GET_ID_OF_THIS_THREAD();
    g_U30149[uParam0] = 1;
    return;
}

int sub_3026(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41)
{
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;

    REQUEST_MODEL( -1660661558 );
    REQUEST_MODEL( 504377658 );
    while ((NOT (HAS_MODEL_LOADED( 504377658 ))) || (NOT (HAS_MODEL_LOADED( -1660661558 ))))
    {
        WAIT( 0 );
    }
    SET_CINEMATIC_BUTTON_ENABLED( 0 );
    if ((HAS_MODEL_LOADED( 504377658 )) AND (HAS_MODEL_LOADED( -1660661558 )))
    {
        CLEAR_AREA( uParam0._fU12._fU0, uParam0._fU12._fU4, uParam0._fU12._fU8, 400.00000000, 1 );
        CREATE_CAR( -1660661558, uParam0._fU12._fU0, uParam0._fU12._fU4, uParam0._fU12._fU8, ref l_U586, 1 );
        uVar45 = {uParam0._fU84 - uParam0._fU12};
        GET_HEADING_FROM_VECTOR_2D( uVar45._fU0, uVar45._fU4, ref uVar44 );
        SET_CAR_HEADING( l_U586, uVar44 );
        SET_HELI_BLADES_FULL_SPEED( l_U586 );
        FREEZE_CAR_POSITION( l_U586, 1 );
        CREATE_CHAR_INSIDE_CAR( l_U586, 26, 504377658, ref l_U588 );
        TASK_HELI_MISSION( l_U588, l_U586, 0, 0, uParam0._fU12._fU0, uParam0._fU12._fU4, uParam0._fU12._fU8, 4, 30.00000000, 5, -1, 80, 70 );
        SET_HELI_STABILISER( l_U586, 1 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( sub_1088(), l_U586, 2 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_1088(), "idle", "MISSBASEJUMP", 4.00000000, 1, 1, 1, 0, 0 );
        return 1;
    }
    return 0;
}

void sub_3457()
{
    sub_3466();
    sub_3611( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_3685();
    return;
}

void sub_3466()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_3611(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_3685()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_3723( 1, g_U575[I] )) == 0)
        {
            sub_3974( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_4152())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_3723(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_3974(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_4059( g_U575 - 1 );
    return;
}

void sub_4059(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_4152()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_3723( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_4444(int iParam0)
{
    int iVar3;
    int I;

    iVar3 = sub_4455( iParam0 );
    if (iVar3 == -1)
    {
        if (NOT (IS_CHAR_INJURED( iParam0 )))
        {
            if (iParam0 != sub_1088())
            {
                I = 1;
                for ( I = 0; I < g_U2692; I++ )
                {
                    if (NOT g_U2692[I]._fU56)
                    {
                        iVar3 = I;
                    }
                }
            }
            else
            {
                iVar3 = 0;
            }
            if (iVar3 != -1)
            {
                if (NOT g_U2692[iVar3]._fU56)
                {
                    g_U2692[iVar3]._fU0 = iParam0;
                    g_U2692[iVar3]._fU4 = 0;
                    g_U2692[iVar3]._fU8 = 0;
                    g_U2692[iVar3]._fU12 = {0.00000000, 0.00000000, 0.00000000};
                    g_U2692[iVar3]._fU56 = 1;
                    g_U2692[iVar3]._fU60 = 0;
                    g_U2692[iVar3]._fU64 = 0;
                    g_U2692[iVar3]._fU48 = -60.00000000;
                    g_U2692[iVar3]._fU52 = -7.00000000;
                    g_U2791 = 0;
                    g_U2789 = 0;
                    g_U2785 = 1;
                    g_U2784 = 0;
                    g_U2783 = 0;
                    g_U2786 = 0;
                    g_U2790 = 0;
                }
            }
            else
            {
                SCRIPT_ASSERT( "GIVE_PED_A_PARACHUTE: All AI parachute ped slots are currently in use." );
            }
        }
    }
    return;
}

int sub_4455(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < g_U2692; Result++ )
    {
        if (g_U2692[Result]._fU0 == iParam0)
        {
            if (g_U2692[Result]._fU56)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_5090(unknown uParam0)
{
    g_U2794 = uParam0;
    return;
}

void sub_5381(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41)
{
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;

    if (uParam0._fU100 == 3)
    {
        l_U598 = -1043459709;
    }
    else
    {
        l_U598 = 1353720154;
    }
    REQUEST_MODEL( l_U598 );
    REQUEST_MODEL( 504377658 );
    while ((NOT (HAS_MODEL_LOADED( 504377658 ))) || (NOT (HAS_MODEL_LOADED( l_U598 ))))
    {
        WAIT( 0 );
    }
    if (l_U584 == 0)
    {
        if (DOES_BLIP_EXIST( l_U569 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U569 );
        }
        WAIT( 0 );
        CLEAR_AREA_OF_CARS( uParam0._fU84._fU0, uParam0._fU84._fU4, uParam0._fU84._fU8, 200.00000000 );
        WAIT( 0 );
        CREATE_CAR( l_U598, uParam0._fU84._fU0, uParam0._fU84._fU4, uParam0._fU84._fU8, ref l_U586, 1 );
        uVar45 = {uParam0._fU84 - uParam0._fU12};
        GET_HEADING_FROM_VECTOR_2D( uVar45._fU0, uVar45._fU4, ref uVar44 );
        SET_CAR_HEADING( l_U586, uVar44 );
        if (uParam0._fU100 == 3)
        {
            ;
        }
        else
        {
            CHANGE_CAR_COLOUR( l_U586, 47, 0 );
        }
        if (uParam0._fU100 == 3)
        {
            SET_CAR_HEADING( l_U586, 110.00000000 );
        }
        if (uParam0._fU100 == 11)
        {
            SET_CAR_HEADING( l_U586, 270.00000000 );
        }
        SET_CAR_FORWARD_SPEED( l_U586, 2 );
        TURN_OFF_VEHICLE_EXTRA( l_U586, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( l_U586, 2, 1 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U586, 1 );
        CREATE_CHAR_INSIDE_CAR( l_U586, 26, 504377658, ref l_U588 );
        TASK_CAR_DRIVE_WANDER( l_U588, l_U586, 2.50000000, 2 );
        l_U584 = 1;
    }
    return;
}

void sub_6447(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41)
{
    if (NOT (DOES_CAM_EXIST( l_U560 )))
    {
        BEGIN_CAM_COMMANDS( ref l_U575 );
        DISPLAY_RADAR( 0 );
        DISPLAY_HUD( 0 );
        CREATE_CAM( 14, ref l_U558 );
        SET_CAM_POS( l_U558, uParam0._fU28._fU0, uParam0._fU28._fU4, uParam0._fU28._fU8 );
        SET_CAM_ROT( l_U558, uParam0._fU40._fU0, uParam0._fU40._fU4, uParam0._fU40._fU8 );
        SET_CAM_FOV( l_U558, uParam0._fU52 );
        CREATE_CAM( 14, ref l_U559 );
        SET_CAM_POS( l_U559, uParam0._fU56._fU0, uParam0._fU56._fU4, uParam0._fU56._fU8 );
        SET_CAM_ROT( l_U559, uParam0._fU68._fU0, uParam0._fU68._fU4, uParam0._fU68._fU8 );
        SET_CAM_FOV( l_U559, uParam0._fU80 );
        SET_CAM_ACTIVE( l_U558, 1 );
        SET_CAM_PROPAGATE( l_U558, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        DO_SCREEN_FADE_IN( 500 );
        SETTIMERA( 0 );
        if ((uParam0._fU100 != 3) AND ((uParam0._fU100 != 2) AND (uParam0._fU104 != 0)))
        {
            while ((TIMERA() < 1500) AND (NOT sub_6783()))
            {
                WAIT( 0 );
            }
        }
        if (uParam0._fU104 == 0)
        {
            PRINT_HELP( "BJHELI2" );
        }
        if (uParam0._fU104 == 1)
        {
            PRINT_HELP( "BJGROUN2" );
        }
        if (uParam0._fU104 == 2)
        {
            PRINT_HELP( "BJTRUC2" );
        }
        CREATE_CAM( 3, ref l_U560 );
        SET_CAM_INTERP_STYLE_CORE( l_U560, l_U558, l_U559, 10000, 0 );
        if (uParam0._fU104 != 0)
        {
            SET_CAM_INTERP_STYLE_DETAILED( l_U560, 1, 1, 1, 1 );
        }
        else
        {
            SET_CAM_INTERP_STYLE_DETAILED( l_U560, 0, 0, 1, 1 );
        }
        SET_CAM_ACTIVE( l_U560, 1 );
        SET_CAM_PROPAGATE( l_U560, 1 );
        SET_CAM_FOV( l_U560, 30.00000000 );
        SET_CAM_NEAR_DOF( l_U560, 7.50000000 );
        SET_CAM_FAR_DOF( l_U560, 10.00000000 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        while ((TIMERA() < 9000) AND (NOT sub_6783()))
        {
            WAIT( 0 );
        }
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        CLEAR_HELP();
    }
    return;
}

int sub_6783()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_7300(unknown uParam0)
{
    int iVar3;

    if (sub_7309())
    {
        iVar3 = sub_4455( uParam0 );
        if (iVar3 < 0)
        {
            return 0;
        }
        else if (g_U2692[iVar3]._fU60)
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

int sub_7309()
{
    if ((HAVE_ANIMS_LOADED( "PARACHUTE" )) AND (HAS_MODEL_LOADED( 1490460832 )))
    {
        return 1;
    }
    return 0;
}

void sub_7497(unknown uParam0)
{
    g_U2784 = uParam0;
    return;
}

int sub_7521()
{
    if (DOES_CAM_EXIST( l_U560 ))
    {
        if ((sub_6783()) || (NOT IS_CAM_INTERPOLATING()))
        {
            if (DOES_CAM_EXIST( l_U560 ))
            {
                SET_CAM_ACTIVE( l_U560, 0 );
                SET_CAM_PROPAGATE( l_U560, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DESTROY_CAM( l_U560 );
            }
            if (DOES_CAM_EXIST( l_U558 ))
            {
                SET_CAM_ACTIVE( l_U558, 0 );
                SET_CAM_PROPAGATE( l_U558, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DESTROY_CAM( l_U558 );
            }
            if (DOES_CAM_EXIST( l_U559 ))
            {
                SET_CAM_ACTIVE( l_U559, 0 );
                SET_CAM_PROPAGATE( l_U559, 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                DESTROY_CAM( l_U559 );
            }
            END_CAM_COMMANDS( ref l_U575 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            return 1;
        }
    }
    return 0;
}

void sub_8155()
{
    if (DOES_CAM_EXIST( l_U631 ))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U612, ref l_U613, ref l_U614, ref l_U615 );
        if (NOT IS_USING_CONTROLLER())
        {
            GET_MOUSE_INPUT( ref l_U614, ref l_U615 );
        }
        if (NOT IS_LOOK_INVERTED())
        {
            l_U615 *= -1;
        }
        if ((l_U615 < 65508) || (l_U615 > 28))
        {
            l_U640 = TO_FLOAT( l_U615 );
            l_U640 *= l_U640;
            l_U640 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            l_U640 *= l_U626;
            if (l_U615 < 0)
            {
                l_U640 *= -1.00000000;
            }
            l_U625 += l_U640;
            if (l_U625 < l_U618)
            {
                l_U625 = l_U618;
            }
            if (l_U625 > l_U619)
            {
                l_U625 = l_U619;
            }
        }
        if ((l_U614 < 65508) || (l_U614 > 28))
        {
            l_U640 = TO_FLOAT( l_U614 );
            l_U640 *= l_U640;
            l_U640 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            l_U640 *= l_U626;
            if (l_U614 > 0)
            {
                l_U640 *= -1.00000000;
            }
            l_U624 += l_U640;
            if (l_U624 < l_U620)
            {
                l_U624 = l_U620;
            }
            if (l_U624 > l_U621)
            {
                l_U624 = l_U621;
            }
        }
        sub_8682( sub_1088(), ref l_U631, l_U625, 0.00000000, l_U624 );
        SET_CAM_FOV( l_U631, l_U623 );
        SET_CAM_ATTACH_OFFSET( l_U631, l_U627._fU0, l_U627._fU4, l_U627._fU8 );
    }
    else
    {
        BEGIN_CAM_COMMANDS( ref l_U632 );
        if (DOES_CAM_EXIST( l_U631 ))
        {
            DESTROY_CAM( l_U631 );
        }
        CREATE_CAM( 14, ref l_U631 );
        ATTACH_CAM_TO_PED( l_U631, sub_1088() );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U631, 1 );
        SET_CAM_NEAR_CLIP( l_U631, 0.01000000 );
        l_U624 = 0.00000000;
        l_U625 = -35.00000000;
        sub_8682( sub_1088(), ref l_U631, l_U625, 0.00000000, l_U624 );
        SET_CAM_FOV( l_U631, l_U623 );
        SET_CAM_ATTACH_OFFSET( l_U631, l_U627._fU0, l_U627._fU4, l_U627._fU8 );
        SET_CAM_ACTIVE( l_U631, 1 );
        SET_CAM_PROPAGATE( l_U631, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        if (IS_PLAYER_PLAYING( sub_685() ))
        {
            FREEZE_CHAR_POSITION( sub_1088(), 1 );
            SET_CHAR_VISIBLE( sub_1088(), 0 );
        }
    }
    return;
}

void sub_8682(unknown uParam0, unknown uParam1, vector vParam2)
{
    float fVar7;
    vector vVar8;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_CAM_EXIST( (uParam1^) ))
        {
            if (IS_CHAR_IN_ANY_CAR( uParam0 ))
            {
                GET_CHAR_HEADING( uParam0, ref fVar7 );
                vVar8.x = 0.00000000;
                vVar8.y = 0.00000000;
                vVar8.z = fVar7 + 280;
                if (fVar7 > 360.00000000)
                {
                    fVar7 -= 360.00000000;
                }
                vVar8 = {vVar8 + vParam2};
                SET_CAM_ROT( (uParam1^), vVar8.x, vVar8.y, vVar8.z );
            }
            else
            {
                GET_CHAR_HEADING( uParam0, ref fVar7 );
                vVar8.x = 0.00000000;
                vVar8.y = 0.00000000;
                vVar8.z = fVar7;
                vVar8 = {vVar8 + vParam2};
                SET_CAM_ROT( (uParam1^), vVar8.x, vVar8.y, vVar8.z );
            }
        }
    }
    return;
}

void sub_9830()
{
    PRINT_NOW( "BJFAIL", 5000, 1 );
    l_U583 = 0;
    l_U553 = 0;
    l_U541 = 0;
    SAY_AMBIENT_SPEECH( sub_1088(), "BASEJUMP_CHECKPOINT_MISS", 0, 0, 0 );
    INCREMENT_INT_STAT( 235, l_U578 );
    sub_569();
    sub_618();
    return;
}

void sub_10531(unknown uParam0)
{
    g_U2786 = uParam0;
    return;
}

void sub_10845(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_4455( uParam0 );
    if (iVar3 >= 0)
    {
        g_U2692[iVar3]._fU4 = 2;
    }
    else
    {
        SCRIPT_ASSERT( "FORCE_ENTER_FREE_FALL: Ped must have parachute equipped, and all resources must have finished loading before using this function." );
    }
    return;
}

int sub_11234(unknown uParam0)
{
    int iVar3;

    iVar3 = sub_4455( uParam0 );
    if (iVar3 >= 0)
    {
        return g_U2692[iVar3]._fU4;
        break;
    }
    SCRIPT_ASSERT( "GET_PARACHUTE_PED_STATE: Ped does not have a parachute equipped." );
    return 0;
}

void sub_12469(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41)
{
    float fVar44;
    float fVar45;
    float fVar46;

    GET_CHAR_COORDINATES( sub_1088(), ref l_U547._fU0, ref l_U547._fU4, ref l_U547._fU8 );
    fVar44 = uParam0._fU12._fU8 - uParam0._fU0._fU8;
    fVar45 = l_U547._fU8 - uParam0._fU0._fU8;
    fVar46 = 100.00000000 - (fVar45 / (fVar44 / 100.00000000));
    l_U556 = 5 * (CEIL( fVar46 ));
    return;
}

int sub_12647(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41)
{
    GET_CHAR_COORDINATES( sub_1088(), ref l_U550._fU0, ref l_U550._fU4, ref l_U550._fU8 );
    l_U550._fU8 -= uParam0._fU84._fU8;
    if ((sub_12734( sub_1088() )) AND ((NOT l_U583) AND (l_U550._fU8 < 50.00000000)))
    {
        sub_1440();
        g_U2692[0]._fU56 = 0;
        PRINTSTRING( " \n Cilmbed to the bottom \n" );
        sub_9830();
    }
    GET_CHAR_COORDINATES( sub_1088(), ref l_U550._fU0, ref l_U550._fU4, ref l_U550._fU8 );
    l_U550._fU8 -= uParam0._fU84._fU8;
    if ((NOT l_U583) AND (l_U550._fU8 < 5.00000000))
    {
        sub_1440();
        g_U2692[0]._fU56 = 0;
        PRINTSTRING( " \n Cilmbed to the bottom \n" );
        sub_9830();
    }
    GET_CHAR_COORDINATES( sub_1088(), ref l_U550._fU0, ref l_U550._fU4, ref l_U550._fU8 );
    if (l_U550._fU8 < 50.00000000)
    {
        if ((IS_CHAR_IN_ANY_CAR( sub_1088() )) AND (NOT l_U583))
        {
            l_U557++;
            if (l_U557 > 500)
            {
                sub_1440();
                g_U2692[0]._fU56 = 0;
                PRINTSTRING( " \n Cilmbed to the bottom \n" );
                sub_9830();
            }
        }
        else
        {
            l_U557 = 0;
        }
    }
    return 0;
}

int sub_12734(unknown uParam0)
{
    int iVar3;
    float fVar4;

    iVar3 = sub_4455( uParam0 );
    if (iVar3 >= 0)
    {
        if ((g_U2692[iVar3]._fU4 == 7) || (g_U2692[iVar3]._fU4 == 0))
        {
            return 1;
        }
    }
    else if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_HEIGHT_ABOVE_GROUND( uParam0, ref fVar4 );
        if ((IS_CHAR_IN_WATER( uParam0 )) || ((NOT (IS_PED_RAGDOLL( uParam0 ))) AND (fVar4 < 2.00000000)))
        {
            return 1;
        }
    }
    return 0;
}

void sub_13376()
{
    if (DOES_CAM_EXIST( l_U631 ))
    {
        DESTROY_CAM( l_U631 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (IS_PLAYER_PLAYING( sub_685() ))
        {
            FREEZE_CHAR_POSITION( sub_1088(), 0 );
            SET_CHAR_VISIBLE( sub_1088(), 1 );
        }
        END_CAM_COMMANDS( ref l_U632 );
    }
    return;
}

int sub_16711(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41)
{
    switch (l_U542)
    {
        case 0:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), uParam0._fU84._fU0, uParam0._fU84._fU4, uParam0._fU84._fU8, 6.50000000, 6.50000000, 2.50000000, 1 ))
        {
            GET_CHAR_COORDINATES( sub_1088(), ref l_U550._fU0, ref l_U550._fU4, ref l_U550._fU8 );
            l_U579 = VDIST2( l_U550, uParam0._fU84 );
            if (l_U579 < 3.50000000)
            {
                g_U42991 = 100;
            }
            else if ((l_U579 > 3.50000000) AND (l_U579 < 4.00000000))
            {
                g_U42991 = 90;
            }
            else if ((l_U579 > 4.00000000) AND (l_U579 < 4.50000000))
            {
                g_U42991 = 80;
            }
            else if ((l_U579 > 4.50000000) AND (l_U579 < 5.00000000))
            {
                g_U42991 = 70;
            }
            else if ((l_U579 > 5.00000000) AND (l_U579 < 5.50000000))
            {
                g_U42991 = 60;
            }
            else if ((l_U579 > 5.50000000) AND (l_U579 < 6.00000000))
            {
                g_U42991 = 50;
            }
            else if ((l_U579 > 6.00000000) AND (l_U579 < 6.50000000))
            {
                g_U42991 = 10;
            }
            else if ((l_U579 > 6.50000000) AND (l_U579 < 7.00000000))
            {
                g_U42991 = 7;
            }
            else if ((l_U579 > 7.00000000) AND (l_U579 < 7.50000000))
            {
                g_U42991 = 5;
            }
            else if (l_U579 >= 7.50000000)
            {
                g_U42991 = 3;
            };;;;;;;;;;
            return 1;
        }
        break;
        case 1:
        if (IS_VEH_DRIVEABLE( l_U586 ))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U586, 0.00000000, -2.00000000, 2.30000000, ref l_U634._fU0, ref l_U634._fU4, ref l_U634._fU8 );
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), l_U634._fU0, l_U634._fU4, l_U634._fU8, 5.90000000, 5.90000000, 1.70000000, 0 ))
            {
                GET_CHAR_COORDINATES( sub_1088(), ref l_U550._fU0, ref l_U550._fU4, ref l_U550._fU8 );
                l_U579 = VDIST2( l_U550, l_U634 );
                if (l_U579 < 3.50000000)
                {
                    g_U42991 = 100;
                }
                else if ((l_U579 > 3.50000000) AND (l_U579 < 4.00000000))
                {
                    g_U42991 = 90;
                }
                else if ((l_U579 > 4.00000000) AND (l_U579 < 4.50000000))
                {
                    g_U42991 = 80;
                }
                else if ((l_U579 > 4.50000000) AND (l_U579 < 5.00000000))
                {
                    g_U42991 = 70;
                }
                else if ((l_U579 > 5.00000000) AND (l_U579 < 5.50000000))
                {
                    g_U42991 = 60;
                }
                else if ((l_U579 > 5.50000000) AND (l_U579 < 6.00000000))
                {
                    g_U42991 = 50;
                }
                else if ((l_U579 > 6.00000000) AND (l_U579 < 6.50000000))
                {
                    g_U42991 = 40;
                }
                else if ((l_U579 > 6.50000000) AND (l_U579 < 7.00000000))
                {
                    g_U42991 = 30;
                }
                else if ((l_U579 > 7.00000000) AND (l_U579 < 7.50000000))
                {
                    g_U42991 = 20;
                }
                else if (l_U579 >= 7.50000000)
                {
                    g_U42991 = 10;
                };;;;;;;;;;
                return 1;
            }
        }
        break;
        case 2:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_1088(), uParam0._fU84._fU0, uParam0._fU84._fU4, uParam0._fU84._fU8, 4.50000000, 4.50000000, 4.50000000, 1 ))
        {
            GET_CHAR_COORDINATES( sub_1088(), ref l_U550._fU0, ref l_U550._fU4, ref l_U550._fU8 );
            l_U579 = VDIST2( l_U550, uParam0._fU84 );
            if (l_U579 < 3.50000000)
            {
                g_U42991 += 60;
            }
            else if ((l_U579 > 3.50000000) AND (l_U579 < 4.00000000))
            {
                g_U42991 += 50;
            }
            else if ((l_U579 > 4.00000000) AND (l_U579 < 4.50000000))
            {
                g_U42991 += 45;
            }
            else if ((l_U579 > 4.50000000) AND (l_U579 < 5.00000000))
            {
                g_U42991 += 40;
            }
            else if ((l_U579 > 5.00000000) AND (l_U579 < 5.50000000))
            {
                g_U42991 += 35;
            }
            else if ((l_U579 > 5.50000000) AND (l_U579 < 6.00000000))
            {
                g_U42991 += 30;
            }
            else if ((l_U579 > 6.00000000) AND (l_U579 < 6.50000000))
            {
                g_U42991 += 25;
            }
            else if ((l_U579 > 6.50000000) AND (l_U579 < 7.00000000))
            {
                g_U42991 += 20;
            }
            else if ((l_U579 > 7.00000000) AND (l_U579 < 7.50000000))
            {
                g_U42991 += 15;
            }
            else if (l_U579 >= 7.50000000)
            {
                g_U42991 += 10;
            };;;;;;;;;;
            return 1;
        }
        break;
    }
    return 0;
}

void sub_18571(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22, unknown uParam23, unknown uParam24, unknown uParam25, unknown uParam26, unknown uParam27, unknown uParam28, unknown uParam29, unknown uParam30, unknown uParam31, unknown uParam32, unknown uParam33, unknown uParam34, unknown uParam35, unknown uParam36, unknown uParam37, unknown uParam38, unknown uParam39, unknown uParam40, unknown uParam41)
{
    WAIT( 1000 );
    g_U42992 = TIMERB();
    PRINTNL();
    PRINTINT( g_U42991 );
    PRINTNL();
    PRINTINT( g_U42992 );
    PRINTNL();
    for ( l_U576 = 0; l_U576 < g_U42975; l_U576++ )
    {
        if (uParam0._fU100 == l_U576)
        {
            if (g_U42975[l_U576] == 0)
            {
                if (uParam0._fU104 == 0)
                {
                    g_U43631++;
                }
                if (uParam0._fU104 == 1)
                {
                    g_U43629++;
                }
                if (uParam0._fU104 == 2)
                {
                    g_U43630++;
                }
                g_U42975[l_U576] = 1;
                l_U556 = l_U556;
                ADD_SCORE( sub_685(), l_U556 );
            }
            else
            {
                l_U556 = l_U556 / 2;
                ADD_SCORE( sub_685(), l_U556 );
            }
        }
    }
    PRINTSTRING( "\n Basejump passed \n" );
    l_U556 += l_U578;
    INCREMENT_INT_STAT( 235, l_U556 );
    if (g_U42974 == 0)
    {
        if ((g_U43630 == 5) AND ((g_U43631 == 5) AND (g_U43629 == 5)))
        {
            AWARD_ACHIEVEMENT( 56 );
            sub_19015( 3 );
            g_U42974 = 1;
            PRINT_HELP( "BJREWAR" );
        }
    }
    SET_BIT( ref g_U42973, l_U543 );
    l_U583 = 0;
    l_U553 = 0;
    l_U541 = 0;
    g_U25 = 82;
    sub_19686();
    INCREMENT_INT_STAT( 207, 1 );
    sub_618();
    return;
}

void sub_19015(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U43089[uParam0]._fU0)
    {
        iVar3 = g_U43089[uParam0]._fU8;
        if (iVar3 > 0)
        {
            sub_19084( 7, iVar3 );
            g_U43089[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_19084(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_19254( 0 );
    return;
}

void sub_19254(boolean bParam0)
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
        sub_19499();
    }
    if ((NOT ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_19499()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_19686()
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

