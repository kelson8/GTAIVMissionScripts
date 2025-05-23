void main()
{
    char[16] cVar2;
    int I;

    l_U1 = "missbstop_herc";
    l_U2 = "failed_herc_dance01";
    l_U3 = "success_herc_dance";
    l_U4 = "missbstop_m9";
    l_U5 = "dance_success";
    l_U6 = "dance_fail";
    l_U101 = 0;
    l_U102 = 0;
    l_U103 = 10;
    l_U104 = 0.00700000;
    l_U105 = 0.00700000;
    l_U106 = 0.00700000;
    l_U237 = 0;
    l_U238 = 0;
    l_U239 = 0;
    l_U240 = 0;
    l_U241 = 0;
    l_U242 = 0;
    l_U243 = 0;
    l_U244 = 0;
    l_U245 = 0;
    l_U247 = 0;
    l_U248 = 1;
    l_U250 = 0;
    l_U255 = 0.00000000;
    l_U256 = 0.00000000;
    l_U257 = 1.00000000;
    l_U258 = 1.00000000;
    l_U259 = 0.00000000;
    l_U260 = 0.00000000;
    l_U261 = 0;
    l_U262 = 0;
    l_U263 = 0.68000000;
    l_U264 = 0.95000000;
    l_U275 = 0.00000000;
    l_U276 = 0.00000000;
    l_U277 = 0.00000000;
    l_U279 = 0;
    l_U280 = 131;
    l_U281 = 133;
    l_U282 = 132;
    l_U283 = 130;
    l_U284 = 0;
    l_U302 = 0.29550000;
    l_U303 = 0.03650000;
    l_U304 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_455();
    }
    BEGIN_CAM_COMMANDS( ref l_U31 );
    LOAD_ADDITIONAL_TEXT( "BUSSTOP", 3 );
    CREATE_WIDGET_GROUP( "Bus Stop" );
    ADD_WIDGET_TOGGLE( "pause", ref l_U9 );
    ADD_WIDGET_TOGGLE( "output coords", ref l_U7 );
    ADD_WIDGET_FLOAT_SLIDER( "fCurrentAnimTime", ref l_U42, 0.00000000, 1.00000000, 0.00100000 );
    for ( I = 0; I < 9; I++ )
    {
        StrCopy( ref cVar2, "dancer ", 16 );
        ConcatString(ref cVar2, I, 16);
        CREATE_WIDGET_GROUP( ref cVar2 );
        ADD_WIDGET_FLOAT_SLIDER( "pos x", ref l_U73[I]._fU0, -9999.90000000, 9999.90000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "pos y", ref l_U73[I]._fU4, -9999.90000000, 9999.90000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "pos z", ref l_U73[I]._fU8, -9999.90000000, 9999.90000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "heading", ref l_U32[I], 0.00000000, 360.00000000, 1.00000000 );
        END_WIDGET_GROUP();
    }
    END_WIDGET_GROUP();
    sub_1075();
    while (true)
    {
        switch (g_U30190)
        {
            case 2:
            switch (l_U28)
            {
                case 0:
                if ((NOT IS_SCREEN_FADING_IN()) AND (IS_SCREEN_FADED_OUT()))
                {
                    sub_638( 1 );
                    WAIT( 0 );
                    REQUEST_MODEL( g_U30222 );
                    REQUEST_MODEL( g_U30224 );
                    REQUEST_MODEL( g_U30223 );
                    REQUEST_MODEL( g_U30225 );
                    LOAD_ALL_OBJECTS_NOW();
                    while ((NOT (HAS_MODEL_LOADED( g_U30225 ))) || ((NOT (HAS_MODEL_LOADED( g_U30223 ))) || ((NOT (HAS_MODEL_LOADED( g_U30224 ))) || (NOT (HAS_MODEL_LOADED( g_U30222 ))))))
                    {
                        WAIT( 0 );
                    }
                    REQUEST_ANIMS( l_U1 );
                    REQUEST_ANIMS( "Missamb_herc_female" );
                    REQUEST_ANIMS( "Missamb_herc_male" );
                    while (NOT (HAVE_ANIMS_LOADED( "Missamb_herc_female" )))
                    {
                        PRINTSTRING( "loading Missamb_herc_female anim dict" );
                        PRINTNL();
                        WAIT( 0 );
                    }
                    while (NOT (HAVE_ANIMS_LOADED( "Missamb_herc_male" )))
                    {
                        PRINTSTRING( "loading Missamb_herc_male anim dict" );
                        PRINTNL();
                        WAIT( 0 );
                    }
                    while (NOT (HAVE_ANIMS_LOADED( l_U1 )))
                    {
                        PRINTSTRING( "loading missbstop_herc anim dict" );
                        PRINTNL();
                        WAIT( 0 );
                    }
                    while (NOT (PRELOAD_STREAM( "DANCING_HERCULES_BUSSTOP" )))
                    {
                        PRINTSTRING( "loading DANCING_HERCULES_BUSSTOP audio stream" );
                        PRINTNL();
                        WAIT( 0 );
                    }
                    sub_3555( -427.40200000, 352.13370000, 11.72620000, 4.10000000, 2 );
                    sub_3892( -426.33070000, 349.78220000, 10.91160000, 50.04420000, 0, 0, "gay_dance_stage_a", 0 );
                    sub_3892( -427.12850000, 349.15430000, 10.92610000, 62.26360000, 1, 0, "gay_dance_stage_b", 0 );
                    sub_3892( -427.53740000, 349.74710000, 10.71170000, 45.04730000, 0, 0, "gay_dance_stage_c", 0 );
                    sub_3892( -427.38650000, 354.63780000, 10.71170000, 160.34190000, 1, 0, "gay_dance_stage_d", 0 );
                    sub_3892( -425.56830000, 354.59820000, 10.91160000, 45.27400000, 0, 0, "gay_dance_stage_a", 0 );
                    sub_3892( -428.42020000, 354.37550000, 11.17110000, 203.29490000, 1, 0, "gay_dance_stage_b", 0 );
                    sub_3892( -429.97820000, 354.48310000, 11.17110000, 178.57770000, 0, 0, "gay_dance_stage_c", 0 );
                    sub_3892( -429.24430000, 349.64360000, 10.71170000, 341.79280000, 1, 0, "gay_dance_stage_d", 0 );
                    l_U73[0] = {-426.29400000, 350.81900000, 10.89400000};
                    l_U32[0] = 90.00000000;
                    l_U73[1] = {-429.96000000, 353.29000000, 10.79900000};
                    l_U32[1] = 179.00000000;
                    l_U73[2] = {-428.97100000, 352.28700000, 10.73900000};
                    l_U32[2] = 95.50000000;
                    l_U73[3] = {-426.25800000, 351.96900000, 10.86100000};
                    l_U32[3] = 90.00000000;
                    l_U73[4] = {-429.03600000, 353.29700000, 10.71900000};
                    l_U32[4] = 169.75000000;
                    l_U73[5] = {-426.36900000, 353.19400000, 10.99100000};
                    l_U32[5] = 150.50000000;
                    l_U73[6] = {-428.38800000, 350.79800000, 10.71400000};
                    l_U32[6] = 19.25000000;
                    l_U73[7] = {-429.96900000, 351.78400000, 10.72100000};
                    l_U32[7] = 173.50000000;
                    l_U73[8] = {-430.02700000, 352.15800000, 10.70400000};
                    l_U32[8] = 168.00000000;
                    l_U63[0] = "gayblack_01-2";
                    l_U63[1] = "pgirl_02";
                    l_U63[2] = "gaygang_01-1";
                    l_U63[3] = "gaygang_01-2";
                    l_U63[4] = "hotchick_02";
                    l_U63[5] = "hotchick_03";
                    l_U63[6] = "gaygeneral_01-1";
                    l_U63[7] = "hotchick_01";
                    l_U63[8] = l_U3;
                    for ( I = 0; I < 9; I++ )
                    {
                        CREATE_OBJECT_NO_OFFSET( -195381842, l_U73[I]._fU0, l_U73[I]._fU4, l_U73[I]._fU8, ref l_U43[I], 1 );
                        SET_OBJECT_HEADING( l_U43[I], l_U32[I] );
                        SET_OBJECT_VISIBLE( l_U43[I], 0 );
                        SET_OBJECT_COLLISION( l_U43[I], 0 );
                    }
                    CREATE_CHAR( 4, g_U30222, -427.59810000, 353.19110000, 10.72120000, ref l_U53[0], 1 );
                    SET_CHAR_HEADING( l_U53[0], 89.32170000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[0], "Room_Bar" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[0], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[0], l_U43[0], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U53[0], l_U63[0], l_U1, 1000.00000000, 0, 0, 0, 0, -1 );
                    CREATE_CHAR( 5, g_U30224, -427.84440000, 352.19670000, 10.72120000, ref l_U53[1], 1 );
                    SET_CHAR_HEADING( l_U53[1], 88.25330000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[1], "Room_Bar" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[1], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[1], l_U43[1], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U53[1], l_U63[1], l_U1, 1000.00000000, 0, 0, 0, 0, -1 );
                    CREATE_CHAR( 4, g_U30222, -427.74240000, 351.20400000, 10.72120000, ref l_U53[2], 1 );
                    SET_CHAR_HEADING( l_U53[2], 92.76180000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[2], "Room_Bar" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[2], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[2], l_U43[2], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U53[2], l_U63[2], l_U1, 1000.00000000, 0, 0, 0, 0, -1 );
                    CREATE_CHAR( 4, g_U30223, -428.67260000, 351.99600000, 10.72120000, ref l_U53[3], 1 );
                    SET_CHAR_HEADING( l_U53[3], 106.24010000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[3], "Room_Bar" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[3], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[3], l_U43[3], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U53[3], l_U63[3], l_U1, 1000.00000000, 0, 0, 0, 0, -1 );
                    CREATE_CHAR( 5, g_U30224, -428.67880000, 352.92310000, 10.72120000, ref l_U53[4], 1 );
                    SET_CHAR_HEADING( l_U53[4], 88.25330000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[4], "Room_Bar" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[4], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[4], l_U43[4], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U53[4], l_U63[4], l_U1, 1000.00000000, 0, 0, 0, 0, -1 );
                    CREATE_CHAR( 5, g_U30224, -429.47070000, 353.08690000, 10.72120000, ref l_U53[5], 1 );
                    SET_CHAR_HEADING( l_U53[5], 88.25330000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[5], "Room_Bar" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[5], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[5], l_U43[5], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U53[5], l_U63[5], l_U1, 1000.00000000, 0, 0, 0, 0, -1 );
                    CREATE_CHAR( 4, g_U30223, -429.40690000, 351.09590000, 10.72120000, ref l_U53[6], 1 );
                    SET_CHAR_HEADING( l_U53[6], 89.19730000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[6], "Room_Bar" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[6], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[6], l_U43[6], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U53[6], l_U63[6], l_U1, 1000.00000000, 0, 0, 0, 0, -1 );
                    if (NOT (IS_CHAR_INJURED( g_U30207 )))
                    {
                        SET_CHAR_COORDINATES( g_U30207, -429.72200000, 352.10890000, 10.72120000 );
                        SET_CHAR_HEADING( g_U30207, 88.25330000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U30207, 1 );
                        ATTACH_PED_TO_OBJECT( g_U30207, l_U43[7], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U30207, l_U63[7], l_U1, 1000.00000000, 0, 0, 0, 0, -1 );
                        l_U53[7] = g_U30207;
                    }
                    if (IS_PLAYER_PLAYING( sub_6986() ))
                    {
                        SET_CHAR_COORDINATES( sub_7029(), -429.81910000, 351.98780000, 10.72120000 );
                        SET_CHAR_HEADING( sub_7029(), 82.35920000 );
                        ATTACH_PED_TO_OBJECT( sub_7029(), l_U43[8], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_7029(), l_U63[8], l_U1, 1000.00000000, 0, 0, 0, 0, -1 );
                        l_U53[8] = sub_7029();
                    }
                    TASK_PLAY_ANIM_FACIAL( l_U53[0], "FACIAL_MALE_A", l_U1, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[1], "FACIAL_FEMALE_A", l_U1, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[2], "FACIAL_MALE_B", l_U1, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[3], "FACIAL_MALE_C", l_U1, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[4], "FACIAL_FEMALE_B", l_U1, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[5], "FACIAL_FEMALE_C", l_U1, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[6], "FACIAL_MALE_A", l_U1, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[7], "FACIAL_FEMALE_A", l_U1, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[8], "FACIAL_PLAYER_DANCE", l_U1, 4.00000000, 1, 0, -1 );
                    sub_7596();
                    WAIT( 0 );
                    SETTIMERA( 0 );
                    PLAY_STREAM_FRONTEND();
                    SET_STREAM_PARAMS( 3.50000000, 15000 );
                    while (NOT ((IS_SCREEN_FADING_OUT()) || (IS_SCREEN_FADED_OUT())))
                    {
                        WAIT( 0 );
                    }
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    sub_7888( 0 );
                    if (NOT (IS_CHAR_VISIBLE( sub_7029() )))
                    {
                        SET_CHAR_VISIBLE( sub_7029(), 1 );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                }
                else if (IS_SCREEN_FADED_IN())
                {
                    SAY_AMBIENT_SPEECH( l_U53[8], "DANCING_GAME_SHOWOFF", 1, 1, 2 );
                    l_U28 = 1;
                }
                break;
                case 1:
                for ( I = 0; I < 9; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U53[I] )))
                    {
                        BLOCK_CHAR_VISEME_ANIMS( l_U53[I], 1 );
                    }
                }
                sub_7596();
                sub_8159();
                sub_22638();
                if (l_U7)
                {
                    OPEN_DEBUG_FILE();
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    SAVE_STRING_TO_DEBUG_FILE( "// Bus Stop - character positions" );
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    for ( I = 0; I < 9; I++ )
                    {
                        SAVE_STRING_TO_DEBUG_FILE( "vBusStopPos[" );
                        StrCopy( ref l_U251, "", 16 );
                        ConcatString(ref l_U251, I, 16);
                        SAVE_STRING_TO_DEBUG_FILE( ref l_U251 );
                        SAVE_STRING_TO_DEBUG_FILE( "] = << " );
                        SAVE_FLOAT_TO_DEBUG_FILE( l_U73[I]._fU0 );
                        SAVE_STRING_TO_DEBUG_FILE( ", " );
                        SAVE_FLOAT_TO_DEBUG_FILE( l_U73[I]._fU4 );
                        SAVE_STRING_TO_DEBUG_FILE( ", " );
                        SAVE_FLOAT_TO_DEBUG_FILE( l_U73[I]._fU8 );
                        SAVE_STRING_TO_DEBUG_FILE( ">>" );
                        SAVE_NEWLINE_TO_DEBUG_FILE();
                        SAVE_STRING_TO_DEBUG_FILE( "fBusStopHeading[" );
                        StrCopy( ref l_U251, "", 16 );
                        ConcatString(ref l_U251, I, 16);
                        SAVE_STRING_TO_DEBUG_FILE( ref l_U251 );
                        SAVE_STRING_TO_DEBUG_FILE( "] = " );
                        SAVE_FLOAT_TO_DEBUG_FILE( l_U32[I] );
                        SAVE_NEWLINE_TO_DEBUG_FILE();
                        SAVE_NEWLINE_TO_DEBUG_FILE();
                    }
                    CLOSE_DEBUG_FILE();
                    l_U7 = 0;
                }
                for ( I = 0; I < 9; I++ )
                {
                    if (DOES_OBJECT_EXIST( l_U43[I] ))
                    {
                        SET_OBJECT_COORDINATES( l_U43[I], l_U73[I]._fU0, l_U73[I]._fU4, l_U73[I]._fU8 );
                        SET_OBJECT_HEADING( l_U43[I], l_U32[I] );
                    }
                }
                if (l_U9)
                {
                    if (NOT l_U8)
                    {
                        for ( I = 0; I < 9; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U53[I] )))
                            {
                                if (IS_CHAR_PLAYING_ANIM( l_U53[I], l_U1, l_U63[I] ))
                                {
                                    SET_CHAR_ANIM_SPEED( l_U53[I], l_U1, l_U63[I], 0.00000000 );
                                }
                            }
                        }
                        l_U8 = 1;
                    }
                }
                else if (l_U8)
                {
                    for ( I = 0; I < 9; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U53[I] )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U53[I], l_U1, l_U63[I] ))
                            {
                                SET_CHAR_ANIM_SPEED( l_U53[I], l_U1, l_U63[I], 1.00000000 );
                            }
                        }
                    }
                    l_U8 = 0;
                }
                if ((l_U240) || ((l_U42 > l_U263) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))))
                {
                    if (((l_U247) AND (l_U42 > l_U263)) || (l_U250))
                    {
                        sub_22338();
                        WAIT( 0 );
                        sub_10340();
                        sub_8511( 2, 1 );
                    }
                    if (NOT l_U240)
                    {
                        PRINT_NOW( "BS_MEGAWIN", 7500, 0 );
                        g_U30172[g_U30190] = 1;
                        sub_23777();
                        sub_23827();
                    }
                    else
                    {
                        SAY_AMBIENT_SPEECH( l_U53[8], "DANCING_GAME_LUIS_FAIL", 1, 1, 2 );
                    }
                    if (NOT l_U240)
                    {
                        WAIT( 10000 );
                        DO_SCREEN_FADE_OUT( 500 );
                    }
                    else
                    {
                        WAIT( 7500 );
                        DO_SCREEN_FADE_OUT( 500 );
                    }
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        HIDE_HUD_AND_RADAR_THIS_FRAME();
                        WAIT( 0 );
                    }
                    for ( I = 0; I < 7; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U53[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U53[I] )))
                            {
                                DETACH_PED( l_U53[I], 1 );
                            }
                            DELETE_CHAR( ref l_U53[I] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( g_U30207 )))
                    {
                        DETACH_PED( g_U30207, 1 );
                    }
                    DETACH_PED( sub_7029(), 1 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_7029() );
                    for ( I = 0; I < 9; I++ )
                    {
                        if (DOES_OBJECT_EXIST( l_U43[I] ))
                        {
                            DELETE_OBJECT( ref l_U43[I] );
                        }
                    }
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    sub_10504();
                    sub_25364();
                    sub_25454( 2 );
                    sub_10340();
                    sub_25486();
                    WAIT( 0 );
                    SET_CHAR_COORDINATES( sub_7029(), -431.23480000, 352.37420000, 10.71170000 );
                    SET_CHAR_HEADING( sub_7029(), 86.14950000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( sub_7029(), "Room_Bar" );
                    WAIT( 0 );
                    SET_CAM_BEHIND_PED( sub_7029() );
                    SET_CHAR_VISIBLE( sub_7029(), 1 );
                    WAIT( 0 );
                    sub_455();
                }
                break;
            }
            break;
            case 1:
            switch (l_U28)
            {
                case 0:
                if ((NOT IS_SCREEN_FADING_IN()) AND (IS_SCREEN_FADED_OUT()))
                {
                    sub_638( 1 );
                    WAIT( 0 );
                    REQUEST_MODEL( g_U30220 );
                    REQUEST_MODEL( g_U30218 );
                    REQUEST_MODEL( g_U30219 );
                    REQUEST_MODEL( g_U30221 );
                    LOAD_ALL_OBJECTS_NOW();
                    while ((NOT (HAS_MODEL_LOADED( g_U30221 ))) || ((NOT (HAS_MODEL_LOADED( g_U30219 ))) || ((NOT (HAS_MODEL_LOADED( g_U30218 ))) || (NOT (HAS_MODEL_LOADED( g_U30220 ))))))
                    {
                        WAIT( 0 );
                    }
                    l_U256 = l_U255;
                    sub_3555( -486.40100000, 147.78590000, 7.55610000, 10.20000000, 1 );
                    sub_7888( 1 );
                    REQUEST_ANIMS( l_U4 );
                    REQUEST_ANIMS( "missamb_m9" );
                    while (NOT (HAVE_ANIMS_LOADED( l_U4 )))
                    {
                        WAIT( 0 );
                    }
                    while (NOT (PRELOAD_STREAM( "DANCING_BM_REWARD" )))
                    {
                        PRINTSTRING( "loading DANCING_BM_REWARD audio stream" );
                        PRINTNL();
                        WAIT( 0 );
                    }
                    while (NOT (HAVE_ANIMS_LOADED( "missamb_m9" )))
                    {
                        PRINTSTRING( "loading missamb_m9 anim dict" );
                        PRINTNL();
                        WAIT( 0 );
                    }
                    sub_3892( -483.50110000, 150.03990000, 6.55090000, 128.30900000, 0, 1, "female_dance_loop_a", 0 );
                    sub_3892( -485.35290000, 150.42360000, 7.13990000, 158.90500000, 0, 1, "female_dance_loop_b", 0.50000000 );
                    sub_3892( -484.29090000, 150.01890000, 6.96150000, 214.36830000, 0, 1, "female_dance_loop_a", 0.10000000 );
                    sub_3892( -483.90140000, 146.21710000, 6.55090000, 65.88880000, 0, 1, "female_dance_loop_b", 0.60000000 );
                    sub_3892( -480.23300000, 149.23320000, 6.93300000, 163.58830000, 0, 1, "female_dance_loop_a", 0.20000000 );
                    sub_3892( -484.28390000, 145.17860000, 6.94910000, 33.12750000, 0, 1, "female_dance_loop_b", 0.30000000 );
                    sub_3892( -480.84680000, 146.65870000, 7.33600000, 50.85250000, 0, 1, "female_dance_loop_a", 0.90000000 );
                    sub_3892( -486.78530000, 144.93530000, 7.01240000, 351.50690000, 0, 1, "female_dance_loop_b", 0.40000000 );
                    l_U73[0] = {-485.47000000, 147.32100000, 6.63400000};
                    l_U32[0] = 265.54300000;
                    l_U73[1] = {-485.65200000, 146.27800000, 6.54400000};
                    l_U32[1] = 264.77100000;
                    l_U73[2] = {-487.20650000, 149.70950000, 6.55100000};
                    l_U32[2] = 270.52700000;
                    l_U73[3] = {-487.69000000, 145.80250000, 6.52500000};
                    l_U32[3] = 277.77500000;
                    l_U73[4] = {-486.55700000, 149.75200000, 6.64200000};
                    l_U32[4] = 282.78100000;
                    l_U73[5] = {-487.89900000, 148.17750000, 6.57900000};
                    l_U32[5] = 271.53100000;
                    l_U73[6] = {-486.41400000, 148.26400000, 6.56600000};
                    l_U32[6] = 277.97300000;
                    l_U73[7] = {-484.91500000, 147.86000000, 6.55200000};
                    l_U32[7] = 274.28500000;
                    l_U73[8] = {-485.36500000, 148.45800000, 6.56100000};
                    l_U32[8] = 274.72100000;
                    l_U63[0] = "f_y_pgirl_02-1";
                    l_U63[1] = "m_y_clubeuro_03-1";
                    l_U63[2] = "m_y_clubwhite_01-1";
                    l_U63[3] = "m_y_clubblack_01-1";
                    l_U63[4] = "f_y_hotchick_01-2";
                    l_U63[5] = "m_y_clubeuro_02-2";
                    l_U63[6] = "f_y_pgirl_02-2";
                    l_U63[7] = "f_y_socialite-1";
                    l_U63[8] = l_U5;
                    for ( I = 0; I < 9; I++ )
                    {
                        CREATE_OBJECT_NO_OFFSET( -195381842, l_U73[I]._fU0, l_U73[I]._fU4, l_U73[I]._fU8, ref l_U43[I], 1 );
                        SET_OBJECT_HEADING( l_U43[I], l_U32[I] );
                        SET_OBJECT_VISIBLE( l_U43[I], 0 );
                        SET_OBJECT_COLLISION( l_U43[I], 0 );
                    }
                    CREATE_CHAR( 5, g_U30220, -427.59810000, 353.19110000, 6.55100000, ref l_U53[0], 1 );
                    SET_CHAR_HEADING( l_U53[0], 89.32170000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[0], "E2_MaisonRoommain" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[0], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[0], l_U43[0], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( l_U53[0], l_U63[0], l_U4, 1000, -1, 2080, 0.02800000 );
                    CREATE_CHAR( 4, g_U30218, -427.84440000, 352.19670000, 6.55100000, ref l_U53[1], 1 );
                    SET_CHAR_HEADING( l_U53[1], 88.25330000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[1], "E2_MaisonRoommain" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[1], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[1], l_U43[1], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( l_U53[1], l_U63[1], l_U4, 1000, -1, 2080, 0.02800000 );
                    CREATE_CHAR( 4, g_U30219, -427.74240000, 351.20400000, 6.55100000, ref l_U53[2], 1 );
                    SET_CHAR_HEADING( l_U53[2], 92.76180000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[2], "E2_MaisonRoommain" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[2], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[2], l_U43[2], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( l_U53[2], l_U63[2], l_U4, 1000, -1, 2080, 0.02800000 );
                    CREATE_CHAR( 4, g_U30218, -428.67260000, 351.99600000, 6.55100000, ref l_U53[3], 1 );
                    SET_CHAR_HEADING( l_U53[3], 106.24010000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[3], "E2_MaisonRoommain" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[3], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[3], l_U43[3], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( l_U53[3], l_U63[3], l_U4, 1000, -1, 2080, 0.02800000 );
                    CREATE_CHAR( 5, g_U30221, -428.67880000, 352.92310000, 6.55100000, ref l_U53[4], 1 );
                    SET_CHAR_HEADING( l_U53[4], 88.25330000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[4], "E2_MaisonRoommain" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[4], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[4], l_U43[4], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( l_U53[4], l_U63[4], l_U4, 1000, -1, 2080, 0.02800000 );
                    CREATE_CHAR( 4, g_U30219, -429.47070000, 353.08690000, 6.55100000, ref l_U53[5], 1 );
                    SET_CHAR_HEADING( l_U53[5], 88.25330000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[5], "E2_MaisonRoommain" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[5], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[5], l_U43[5], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( l_U53[5], l_U63[5], l_U4, 1000, -1, 2080, 0.02800000 );
                    CREATE_CHAR( 5, g_U30220, -429.40690000, 351.09590000, 6.55100000, ref l_U53[6], 1 );
                    SET_CHAR_HEADING( l_U53[6], 89.19730000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( l_U53[6], "E2_MaisonRoommain" );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U53[6], 1 );
                    ATTACH_PED_TO_OBJECT( l_U53[6], l_U43[6], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                    TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( l_U53[6], l_U63[6], l_U4, 1000, -1, 2080, 0.02800000 );
                    if (NOT (IS_CHAR_INJURED( g_U30207 )))
                    {
                        SET_CHAR_COORDINATES( g_U30207, -485.90300000, 147.29520000, 6.55100000 );
                        SET_CHAR_HEADING( g_U30207, 249.28500000 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U30207, 1 );
                        ATTACH_PED_TO_OBJECT( g_U30207, l_U43[7], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( g_U30207, l_U63[7], l_U4, 1000, -1, 2080, 0.02800000 );
                        l_U53[7] = g_U30207;
                    }
                    if (IS_PLAYER_PLAYING( sub_6986() ))
                    {
                        SET_CHAR_COORDINATES( sub_7029(), -484.60420000, 148.06820000, 6.55090000 );
                        SET_CHAR_HEADING( sub_7029(), 267.08870000 );
                        ATTACH_PED_TO_OBJECT( sub_7029(), l_U43[8], 0, 0.00000000, 0.00000000, 1.00000000, 0.00000000, 0.00000000, 0, 0 );
                        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( sub_7029(), l_U63[8], l_U4, 1000, -1, 2080, l_U303 );
                        l_U53[8] = sub_7029();
                    }
                    WAIT( 0 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[0], "FACIAL_FEMALE_A", l_U4, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[1], "FACIAL_MALE_A", l_U4, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[2], "FACIAL_MALE_B", l_U4, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[3], "FACIAL_MALE_C", l_U4, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[4], "FACIAL_FEMALE_B", l_U4, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[5], "FACIAL_MALE_A", l_U4, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[6], "FACIAL_FEMALE_C", l_U4, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[7], "FACIAL_FEMALE_A", l_U4, 4.00000000, 1, 0, -1 );
                    TASK_PLAY_ANIM_FACIAL( l_U53[8], "FACIAL_PLAYER_DANCE", l_U4, 4.00000000, 1, 0, -1 );
                    sub_7596();
                    SETTIMERA( 0 );
                    PLAY_STREAM_FRONTEND();
                    SET_STREAM_PARAMS( 3.20000000, 15000 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    sub_7888( 0 );
                    if (NOT (IS_CHAR_VISIBLE( sub_7029() )))
                    {
                        SET_CHAR_VISIBLE( sub_7029(), 1 );
                    }
                    DO_SCREEN_FADE_IN( 500 );
                }
                else if (IS_SCREEN_FADED_IN())
                {
                    SAY_AMBIENT_SPEECH( l_U53[8], "DANCING_GAME_SHOWOFF", 1, 1, 2 );
                    l_U28 = 1;
                }
                break;
                case 1:
                for ( I = 0; I < 9; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U53[I] )))
                    {
                        BLOCK_CHAR_VISEME_ANIMS( l_U53[I], 1 );
                    }
                }
                sub_7596();
                sub_8159();
                sub_22638();
                if (l_U7)
                {
                    OPEN_DEBUG_FILE();
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    SAVE_STRING_TO_DEBUG_FILE( "// Bus Stop - character positions" );
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    for ( I = 0; I < 9; I++ )
                    {
                        SAVE_STRING_TO_DEBUG_FILE( "vBusStopPos[" );
                        StrCopy( ref l_U251, "", 16 );
                        ConcatString(ref l_U251, I, 16);
                        SAVE_STRING_TO_DEBUG_FILE( ref l_U251 );
                        SAVE_STRING_TO_DEBUG_FILE( "] = << " );
                        SAVE_FLOAT_TO_DEBUG_FILE( l_U73[I]._fU0 );
                        SAVE_STRING_TO_DEBUG_FILE( ", " );
                        SAVE_FLOAT_TO_DEBUG_FILE( l_U73[I]._fU4 );
                        SAVE_STRING_TO_DEBUG_FILE( ", " );
                        SAVE_FLOAT_TO_DEBUG_FILE( l_U73[I]._fU8 );
                        SAVE_STRING_TO_DEBUG_FILE( ">>" );
                        SAVE_NEWLINE_TO_DEBUG_FILE();
                        SAVE_STRING_TO_DEBUG_FILE( "fBusStopHeading[" );
                        StrCopy( ref l_U251, "", 16 );
                        ConcatString(ref l_U251, I, 16);
                        SAVE_STRING_TO_DEBUG_FILE( ref l_U251 );
                        SAVE_STRING_TO_DEBUG_FILE( "] = " );
                        SAVE_FLOAT_TO_DEBUG_FILE( l_U32[I] );
                        SAVE_NEWLINE_TO_DEBUG_FILE();
                        SAVE_NEWLINE_TO_DEBUG_FILE();
                    }
                    CLOSE_DEBUG_FILE();
                    l_U7 = 0;
                }
                for ( I = 0; I < 9; I++ )
                {
                    if (DOES_OBJECT_EXIST( l_U43[I] ))
                    {
                        SET_OBJECT_COORDINATES( l_U43[I], l_U73[I]._fU0, l_U73[I]._fU4, l_U73[I]._fU8 );
                        SET_OBJECT_HEADING( l_U43[I], l_U32[I] );
                    }
                }
                if (l_U9)
                {
                    if (NOT l_U8)
                    {
                        for ( I = 0; I < 9; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U53[I] )))
                            {
                                if (IS_CHAR_PLAYING_ANIM( l_U53[I], l_U4, l_U63[I] ))
                                {
                                    SET_CHAR_ANIM_SPEED( l_U53[I], l_U4, l_U63[I], 0.00000000 );
                                }
                            }
                        }
                        l_U8 = 1;
                    }
                }
                else if (l_U8)
                {
                    for ( I = 0; I < 9; I++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U53[I] )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U53[I], l_U4, l_U63[I] ))
                            {
                                SET_CHAR_ANIM_SPEED( l_U53[I], l_U4, l_U63[I], 1.00000000 );
                            }
                        }
                    }
                    l_U8 = 0;
                }
                if ((l_U240) || ((l_U42 > l_U264) || (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))))
                {
                    if (l_U240)
                    {
                        SAY_AMBIENT_SPEECH( l_U53[8], "DANCING_GAME_LUIS_FAIL", 1, 1, 2 );
                    }
                    else
                    {
                        sub_23827();
                    }
                    if (((l_U247) AND (l_U42 > l_U264)) || (l_U250))
                    {
                        sub_22338();
                        WAIT( 0 );
                        sub_10340();
                        sub_8511( 1, 1 );
                    }
                    if (NOT l_U240)
                    {
                        PRINT_NOW( "BS_MEGAWIN", 7500, 0 );
                        g_U30172[g_U30190] = 1;
                        sub_23777();
                    }
                    if (NOT l_U240)
                    {
                        WAIT( 10000 );
                        DO_SCREEN_FADE_OUT( 500 );
                    }
                    else
                    {
                        WAIT( 7500 );
                        DO_SCREEN_FADE_OUT( 500 );
                    }
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        HIDE_HUD_AND_RADAR_THIS_FRAME();
                        WAIT( 0 );
                    }
                    for ( I = 0; I < 7; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U53[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U53[I] )))
                            {
                                DETACH_PED( l_U53[I], 1 );
                            }
                            DELETE_CHAR( ref l_U53[I] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( g_U30207 )))
                    {
                        DETACH_PED( g_U30207, 1 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( g_U30207 );
                    }
                    DETACH_PED( sub_7029(), 1 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_7029() );
                    for ( I = 0; I < 9; I++ )
                    {
                        if (DOES_OBJECT_EXIST( l_U43[I] ))
                        {
                            DELETE_OBJECT( ref l_U43[I] );
                        }
                    }
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    sub_10504();
                    sub_10340();
                    sub_25486();
                    WAIT( 0 );
                    SET_CHAR_COORDINATES( sub_7029(), -482.36530000, 154.58240000, 6.55030000 );
                    SET_CHAR_HEADING( sub_7029(), 1.53470000 );
                    SET_ROOM_FOR_CHAR_BY_NAME( sub_7029(), "E2_MaisonRoommain" );
                    WAIT( 0 );
                    SET_CAM_BEHIND_PED( sub_7029() );
                    SET_CHAR_VISIBLE( sub_7029(), 1 );
                    WAIT( 0 );
                    sub_455();
                }
                break;
            }
            break;
            case 0: break;
        }
        if (NOT l_U250)
        {
            sub_31275();
        }
        WAIT( 0 );
    }
    return;
}

void sub_455()
{
    sub_464();
    sub_565();
    STOP_STREAM();
    sub_638( 0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_464()
{
    int I;

    I = 0;
    for ( I = 0; I <= 15; I++ )
    {
        if (DOES_CHAR_EXIST( l_U285[I] ))
        {
            if (NOT (IS_CHAR_DEAD( l_U285[I] )))
            {
                DELETE_CHAR( ref l_U285[I] );
            }
        }
    }
    return;
}

void sub_565()
{
    if (NOT (HAS_SOUND_FINISHED( l_U278 )))
    {
        STOP_SOUND( l_U278 );
    }
    RELEASE_SOUND_ID( l_U278 );
    l_U279 = 0;
    return;
}

void sub_638(boolean bParam0)
{
    g_U30177 = bParam0;
    if (bParam0)
    {
        g_U30248 = GET_ID_OF_THIS_THREAD();
    }
    else
    {
        g_U30248 = nil;
    }
    return;
}

void sub_1075()
{
    PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND( "BS_INTRO001", "NULL" );
    l_U239 = 0;
    l_U238 = 0;
    l_U246 = 5;
    l_U103 = 10;
    l_U240 = 0;
    l_U250 = 0;
    l_U237 = 0;
    sub_1154();
    switch (g_U30190)
    {
        case 2:
        sub_1211( 0.18000000, 0 );
        sub_1211( 0.20000000, 1 );
        sub_1211( 0.21700000, 2 );
        sub_1211( 0.23300000, 3 );
        sub_1211( 0.24500000, 4 );
        sub_1211( 0.25470000, 6 );
        sub_1211( 0.26320000, 4 );
        sub_1211( 0.27870000, 4 );
        sub_1211( 0.28690000, 6 );
        sub_1211( 0.30000000, 2 );
        sub_1211( 0.32000000, 3 );
        sub_1211( 0.34100000, 2 );
        sub_1211( 0.35500000, 3 );
        sub_1211( 0.37000000, 7 );
        sub_1211( 0.38200000, 5 );
        sub_1211( 0.39100000, 7 );
        sub_1211( 0.40600000, 7 );
        sub_1211( 0.41400000, 5 );
        sub_1211( 0.43000000, 1 );
        sub_1211( 0.45000000, 0 );
        sub_1211( 0.46600000, 1 );
        sub_1211( 0.48000000, 2 );
        sub_1211( 0.50100000, 6 );
        sub_1211( 0.50900000, 4 );
        sub_1211( 0.51700000, 6 );
        sub_1211( 0.53300000, 6 );
        sub_1211( 0.54100000, 4 );
        sub_1211( 0.56000000, 3 );
        sub_1211( 0.58000000, 2 );
        sub_1211( 0.60000000, 0 );
        sub_1211( 0.61400000, 1 );
        sub_1211( 0.63000000, 5 );
        sub_1211( 0.63900000, 7 );
        sub_1211( 0.64600010, 5 );
        sub_1211( 0.66000000, 5 );
        sub_1211( 0.67200000, 7 );
        break;
        case 1:
        sub_1211( (sub_1669( 0.42000000 - l_U302 )) + l_U303, 2 );
        sub_1211( (sub_1669( 0.43280000 - l_U302 )) + l_U303, 3 );
        sub_1211( (sub_1669( 0.44920000 - l_U302 )) + l_U303, 0 );
        sub_1211( (sub_1669( 0.46160000 - l_U302 )) + l_U303, 1 );
        sub_1211( (sub_1669( 0.47190000 - l_U302 )) + l_U303, 0 );
        sub_1211( (sub_1669( 0.48300000 - l_U302 )) + l_U303, 1 );
        sub_1211( (sub_1669( 0.49810000 - l_U302 )) + l_U303, 0 );
        sub_1211( (sub_1669( 0.51750000 - l_U302 )) + l_U303, 2 );
        sub_1211( (sub_1669( 0.53170000 - l_U302 )) + l_U303, 3 );
        sub_1211( (sub_1669( 0.53880000 - l_U302 )) + l_U303, 2 );
        sub_1211( (sub_1669( 0.54900000 - l_U302 )) + l_U303, 3 );
        sub_1211( (sub_1669( 0.56680000 - l_U302 )) + l_U303, 2 );
        sub_1211( (sub_1669( 0.58490010 - l_U302 )) + l_U303, 1 );
        sub_1211( (sub_1669( 0.59990000 - l_U302 )) + l_U303, 0 );
        sub_1211( (sub_1669( 0.61060000 - l_U302 )) + l_U303, 1 );
        sub_1211( (sub_1669( 0.62120000 - l_U302 )) + l_U303, 0 );
        sub_1211( (sub_1669( 0.63970000 - l_U302 )) + l_U303, 1 );
        sub_1211( (sub_1669( 0.65430000 - l_U302 )) + l_U303, 3 );
        sub_1211( (sub_1669( 0.66980000 - l_U302 )) + l_U303, 2 );
        sub_1211( (sub_1669( 0.67960000 - l_U302 )) + l_U303, 3 );
        sub_1211( (sub_1669( 0.69019990 - l_U302 )) + l_U303, 2 );
        sub_1211( (sub_1669( 0.70700000 - l_U302 )) + l_U303, 2 );
        sub_1211( (sub_1669( 0.72300000 - l_U302 )) + l_U303, 3 );
        sub_1211( (sub_1669( 0.73720000 - l_U302 )) + l_U303, 1 );
        sub_1211( (sub_1669( 0.75489990 - l_U302 )) + l_U303, 4 );
        sub_1211( (sub_1669( 0.76200000 - l_U302 )) + l_U303, 7 );
        sub_1211( (sub_1669( 0.77080000 - l_U302 )) + l_U303, 1 );
        sub_1211( (sub_1669( 0.78500000 - l_U302 )) + l_U303, 0 );
        sub_1211( (sub_1669( 0.79960000 - l_U302 )) + l_U303, 3 );
        sub_1211( (sub_1669( 0.81640000 - l_U302 )) + l_U303, 7 );
        sub_1211( (sub_1669( 0.82350000 - l_U302 )) + l_U303, 6 );
        sub_1211( (sub_1669( 0.82810000 - l_U302 )) + l_U303, 3 );
        sub_1211( (sub_1669( 0.84680000 - l_U302 )) + l_U303, 2 );
        sub_1211( (sub_1669( 0.86189990 - l_U302 )) + l_U303, 0 );
        sub_1211( (sub_1669( 0.87670000 - l_U302 )) + l_U303, 6 );
        sub_1211( (sub_1669( 0.88390000 - l_U302 )) + l_U303, 5 );
        sub_1211( (sub_1669( 0.88680000 - l_U302 )) + l_U303, 0 );
        sub_1211( (sub_1669( 0.90880000 - l_U302 )) + l_U303, 1 );
        sub_1211( (sub_1669( 0.92350000 - l_U302 )) + l_U303, 2 );
        sub_1211( (sub_1669( 0.93810000 - l_U302 )) + l_U303, 5 );
        sub_1211( (sub_1669( 0.94540000 - l_U302 )) + l_U303, 4 );
        break;
    }
    return;
}

void sub_1154()
{
    l_U101 = 0;
    return;
}

void sub_1211(unknown uParam0, unknown uParam1)
{
    l_U107[l_U101] = uParam0;
    l_U172[l_U101] = uParam1;
    l_U101++;
    return;
}

float sub_1669(unknown uParam0)
{
    return (uParam0 * 3712) / 2712;
}

void sub_3555(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_3608( uParam0._fU0 - uParam3, uParam0._fU4 - uParam3, uParam0._fU8 - uParam3, uParam0._fU0 + uParam3, uParam0._fU4 + uParam3, uParam0._fU8 + uParam3, uParam4 );
    return;
}

void sub_3608(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    g_U30158[uParam6] = 1;
    if (uParam0._fU0 < uParam3._fU0)
    {
        g_U30251._fU0 = uParam0._fU0;
        g_U30254._fU0 = uParam3._fU0;
    }
    else
    {
        g_U30251._fU0 = uParam3._fU0;
        g_U30254._fU0 = uParam0._fU0;
    }
    if (uParam0._fU4 < uParam3._fU4)
    {
        g_U30251._fU4 = uParam0._fU4;
        g_U30254._fU4 = uParam3._fU4;
    }
    else
    {
        g_U30251._fU4 = uParam3._fU4;
        g_U30254._fU4 = uParam0._fU4;
    }
    if (uParam0._fU8 < uParam3._fU8)
    {
        g_U30251._fU8 = uParam0._fU8;
        g_U30254._fU8 = uParam3._fU8;
    }
    else
    {
        g_U30251._fU8 = uParam3._fU8;
        g_U30254._fU8 = uParam0._fU8;
    }
    g_U30230[uParam6] = GET_ID_OF_THIS_THREAD();
    return;
}

void sub_3892(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, boolean bParam4, boolean bParam5, unknown uParam6, unknown uParam7)
{
    int iVar10;
    int iVar11;
    string sVar12;

    iVar10 = 4;
    iVar11 = 0;
    sVar12 = "Missamb_herc_male";
    switch (g_U30190)
    {
        case 2:
        if (bParam4)
        {
            iVar11 = g_U30222;
        }
        else
        {
            iVar11 = g_U30223;
        }
        if (bParam5)
        {
            sVar12 = "Missamb_herc_female";
            iVar10 = 5;
            if (bParam4)
            {
                iVar11 = g_U30224;
            }
            else
            {
                iVar11 = g_U30225;
            }
        }
        CREATE_CHAR( iVar10, iVar11, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U285[l_U284], 0 );
        FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION( l_U285[l_U284], 1 );
        SET_CHAR_HEADING( l_U285[l_U284], uParam3 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U285[l_U284], "Room_Bar" );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U285[l_U284], 1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U285[l_U284], uParam6, sVar12, 1000.00000000, 1, 0, 0, 0, -1 );
        l_U284++;
        break;
        case 1:
        sVar12 = "missamb_m9";
        if (bParam4)
        {
            iVar11 = g_U30218;
        }
        else
        {
            iVar11 = g_U30219;
        }
        if (bParam5)
        {
            iVar10 = 5;
            if (bParam4)
            {
                iVar11 = g_U30220;
            }
            else
            {
                iVar11 = g_U30221;
            }
        }
        CREATE_CHAR( iVar10, iVar11, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U285[l_U284], 0 );
        FREEZE_CHAR_POSITION_AND_DONT_LOAD_COLLISION( l_U285[l_U284], 1 );
        SET_CHAR_HEADING( l_U285[l_U284], uParam3 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U285[l_U284], "Room_Bar" );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U285[l_U284], 1 );
        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( l_U285[l_U284], uParam6, sVar12, 1000, -1, 2064, uParam7 );
        l_U284++;
        break;
    }
    return;
}

void sub_6986()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_7029()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_7596()
{
    switch (l_U279)
    {
        case 0:
        if (REQUEST_AMBIENT_AUDIO_BANK( "EP2_SFX\CLUB_WALLA" ))
        {
            l_U278 = GET_SOUND_ID();
            PLAY_SOUND_FRONTEND( l_U278, "CLUB_WALLA" );
            l_U279++;
        }
        break;
        case 1:
        if (g_U30190 == 1)
        {
            SET_VARIABLE_ON_SOUND( l_U278, "Loudness", 0.90000000 );
        }
        else
        {
            SET_VARIABLE_ON_SOUND( l_U278, "Loudness", 0.80000000 );
        }
        break;
    }
    return;
}

void sub_7888(int iParam0)
{
    PRINTSTRING( "GOTO_DANCE_CAMERA - called with " );
    PRINTINT( iParam0 );
    PRINTNL();
    if (NOT (l_U29 == iParam0))
    {
        l_U29 = iParam0;
        l_U30 = 0;
    }
    return;
}

void sub_8159()
{
    if (NOT l_U239)
    {
        if (l_U246 > 0)
        {
            if (l_U238)
            {
                SHAKE_PAD( 0, 1, 118 );
                if (l_U42 > ((l_U107[l_U237] + l_U106) + l_U256))
                {
                    l_U237++;
                    l_U237++;
                    l_U238 = 0;
                    CLEAR_HELP();
                    if (NOT (l_U237 < l_U101))
                    {
                        l_U239 = 1;
                    }
                    PRINT_NOW( "BS_TOOBAD", 3000, 0 );
                    l_U103 = 10;
                    l_U246--;
                    SHAKE_PAD( 0, 1000, 218 );
                    if (NOT l_U247)
                    {
                        sub_8374();
                        l_U247 = 1;
                        WAIT( 0 );
                        sub_8511( g_U30190, 0 );
                    }
                }
                else if (sub_8944())
                {
                    l_U237++;
                    l_U238 = 0;
                    CLEAR_HELP();
                    if (NOT (l_U237 < l_U101))
                    {
                        l_U239 = 1;
                    }
                    if (l_U247)
                    {
                        sub_10215();
                        WAIT( 0 );
                        sub_10340();
                    }
                    switch (g_U30190)
                    {
                        case 2:
                        sub_10413();
                        break;
                        case 1:
                        sub_18181();
                        break;
                    }
                    if (l_U247)
                    {
                        l_U247 = 0;
                    }
                }
                else if (l_U238)
                {
                    sub_21827();
                };;;
            }
            else if (l_U42 > ((l_U107[l_U237] - l_U106) + l_U256))
            {
                CLEAR_HELP();
                l_U238 = 1;
            }
        }
        else
        {
            sub_22338();
            WAIT( 0 );
            sub_10340();
            sub_8511( g_U30190, 1 );
            PRINT_NOW( "BS_MEGAFAIL", 7500, 0 );
            l_U239 = 1;
            l_U240 = 1;
        }
    }
    return;
}

void sub_8374()
{
    switch (g_U30190)
    {
        case 2:
        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( sub_7029(), l_U2, l_U1, 1000, -1, 2080, l_U42 );
        break;
        case 1:
        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( sub_7029(), l_U6, l_U4, 1000, -1, 2080, l_U42 );
        break;
    }
    return;
}

void sub_8511(unknown uParam0, boolean bParam1)
{
    if (NOT l_U250)
    {
        CREATE_CAM( 14, ref l_U249 );
        switch (uParam0)
        {
            case 2:
            if (NOT bParam1)
            {
                SET_CAM_POS( l_U249, -432.60420000, 354.02590000, 12.02750000 );
                SET_CAM_ROT( l_U249, 10.14712000, -0.00000000, -119.68050000 );
                SET_CAM_FOV( l_U249, 47.98593000 );
            }
            else
            {
                SET_CAM_POS( l_U249, -431.95410000, 350.95030000, 13.45630000 );
                SET_CAM_ROT( l_U249, -34.72695000, -0.00000100, -59.28638000 );
                SET_CAM_FOV( l_U249, 45.00000000 );
            }
            break;
            case 1:
            if (NOT bParam1)
            {
                SET_CAM_POS( l_U249, -478.42920000, 147.85730000, 7.03233600 );
                SET_CAM_ROT( l_U249, 7.63988500, -0.00000000, 89.33937000 );
                SET_CAM_FOV( l_U249, 27.60004000 );
            }
            else
            {
                SET_CAM_POS( l_U249, -481.72970000, 148.81780000, 7.78020000 );
                SET_CAM_ROT( l_U249, -4.34030000, 0.00000000, 87.60100000 );
                SET_CAM_FOV( l_U249, 33.60000000 );
            }
            break;
        }
        SET_CAM_ACTIVE( l_U249, 1 );
        SET_CAM_PROPAGATE( l_U249, 1 );
        l_U250 = 1;
    }
    return;
}

int sub_8944()
{
    l_U243 = l_U242;
    l_U245 = l_U244;
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U242, ref l_U244, ref l_U241, ref l_U241 );
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref l_U242, ref l_U244 );
    }
    l_U304 = 0;
    if (((l_U244 > 65478) AND (l_U244 < 58)) AND ((l_U242 > 65478) AND (l_U242 < 58)))
    {
        l_U248 = 1;
    }
    if (l_U248)
    {
        switch (l_U172[l_U237])
        {
            case 0:
            if (l_U244 < 65416)
            {
                l_U248 = 0;
                l_U304 = 1;
                return 1;
            }
            else if ((l_U244 < 65416) || ((l_U244 > 120) || ((l_U242 < 65416) || (l_U242 > 120))))
            {
                sub_9253();
                return 0;
            }
            break;
            case 1:
            if (l_U244 > 120)
            {
                l_U248 = 0;
                l_U304 = 1;
                return 1;
            }
            else if ((l_U244 < 65416) || ((l_U244 > 120) || ((l_U242 < 65416) || (l_U242 > 120))))
            {
                sub_9253();
                return 0;
            }
            break;
            case 2:
            if (l_U242 < 65416)
            {
                l_U248 = 0;
                l_U304 = 1;
                return 1;
            }
            else if ((l_U244 < 65416) || ((l_U244 > 120) || ((l_U242 < 65416) || (l_U242 > 120))))
            {
                sub_9253();
                return 0;
            }
            break;
            case 3:
            if (l_U242 > 120)
            {
                l_U248 = 0;
                l_U304 = 1;
                return 1;
            }
            else if ((l_U244 < 65416) || ((l_U244 > 120) || ((l_U242 < 65416) || (l_U242 > 120))))
            {
                sub_9253();
                return 0;
            }
            break;
            case 4:
            if (sub_9716( 0, 16 ))
            {
                l_U304 = 1;
                return 1;
            }
            else if ((sub_9716( 0, 15 )) || ((sub_9716( 0, 14 )) || (sub_9716( 0, 17 ))))
            {
                sub_9253();
                return 0;
            }
            break;
            case 7:
            if (sub_9716( 0, 17 ))
            {
                l_U304 = 1;
                return 1;
            }
            else if ((sub_9716( 0, 15 )) || ((sub_9716( 0, 14 )) || (sub_9716( 0, 16 ))))
            {
                sub_9253();
                return 0;
            }
            break;
            case 5:
            if (sub_9716( 0, 14 ))
            {
                return 1;
            }
            else if ((sub_9716( 0, 15 )) || ((sub_9716( 0, 17 )) || (sub_9716( 0, 16 ))))
            {
                sub_9253();
                return 0;
            }
            break;
            case 6:
            if (sub_9716( 0, 15 ))
            {
                l_U304 = 1;
                return 1;
            }
            else if ((sub_9716( 0, 14 )) || ((sub_9716( 0, 17 )) || (sub_9716( 0, 16 ))))
            {
                sub_9253();
                return 0;
            }
            break;
        }
    }
    return 0;
}

void sub_9253()
{
    l_U237++;
    l_U237++;
    l_U238 = 0;
    CLEAR_HELP();
    if (NOT (l_U237 < l_U101))
    {
        l_U239 = 1;
    }
    PRINT_NOW( "BS_TOOBAD", 3000, 0 );
    l_U103 = 10;
    l_U246--;
    SHAKE_PAD( 0, 1000, 218 );
    if (NOT l_U247)
    {
        sub_8374();
        l_U247 = 1;
        WAIT( 0 );
        sub_8511( g_U30190, 0 );
    }
    return;
}

int sub_9716(unknown uParam0, int iParam1)
{
    if (IS_USING_CONTROLLER())
    {
        return IS_BUTTON_JUST_PRESSED( uParam0, iParam1 );
    }
    else if (iParam1 == 15)
    {
        return IS_CONTROL_JUST_PRESSED( 2, l_U283 );
    }
    else if (iParam1 == 16)
    {
        return IS_CONTROL_JUST_PRESSED( 2, l_U280 );
    }
    else if (iParam1 == 14)
    {
        return IS_CONTROL_JUST_PRESSED( 2, l_U282 );
    }
    else if (iParam1 == 17)
    {
        return IS_CONTROL_JUST_PRESSED( 2, l_U281 );
    };;;;;
    return 0;
}

void sub_10215()
{
    switch (g_U30190)
    {
        case 2:
        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( sub_7029(), l_U3, l_U1, 1000, -1, 2080, l_U42 );
        break;
        case 1:
        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( sub_7029(), l_U5, l_U4, 1000, -1, 2080, l_U42 );
        break;
    }
    return;
}

void sub_10340()
{
    if (l_U250)
    {
        l_U250 = 0;
        DESTROY_CAM( l_U249 );
    }
    return;
}

void sub_10413()
{
    int iVar2;

    iVar2 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar2 );
    if (NOT l_U247)
    {
        if (l_U103 < 3)
        {
            if (NOT (iVar2 == 2))
            {
                l_U103++;
                return;
            }
        }
        else
        {
            l_U103 = 0;
        }
    }
    l_U30 = 1;
    l_U261 = 1;
    sub_10504();
    GENERATE_RANDOM_INT_IN_RANGE( 0, 14, ref iVar2 );
    if (iVar2 == l_U262)
    {
        iVar2++;
        if (iVar2 > 13)
        {
            iVar2 = 13;
            if (l_U262 == iVar2)
            {
                iVar2--;
            }
        }
    }
    l_U262 = iVar2;
    PRINTSTRING( "!!!Success selector picked " );
    PRINTINT( iVar2 );
    PRINTNL();
    switch (iVar2)
    {
        case 0:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -435.54190000, 352.51680000, 11.86340000 );
        SET_CAM_ROT( l_U11[0], 1.27610000, 0.00000000, -99.29500000 );
        SET_CAM_FOV( l_U11[0], 33.90000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -435.91630000, 352.44690000, 11.86340000 );
        SET_CAM_ROT( l_U11[1], 1.27610000, 0.00000000, -99.29500000 );
        SET_CAM_FOV( l_U11[1], 32.30000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -436.29060000, 352.37700000, 11.86340000 );
        SET_CAM_ROT( l_U11[2], 1.27610000, 0.00000000, -99.29500000 );
        SET_CAM_FOV( l_U11[2], 30.70000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -436.66500000, 352.30710000, 11.86340000 );
        SET_CAM_ROT( l_U11[3], 1.27610000, 0.00000000, -99.29500000 );
        SET_CAM_FOV( l_U11[3], 29.10000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 1:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -431.81320000, 352.57160000, 13.22730000 );
        SET_CAM_ROT( l_U11[0], -33.84390000, 0.00000000, -107.30800000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -431.60310000, 352.01520000, 12.40250000 );
        SET_CAM_ROT( l_U11[1], -11.81060000, 0.00000000, -87.89390000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -431.39300000, 351.45880000, 11.57760000 );
        SET_CAM_ROT( l_U11[2], 10.22270000, 0.00000000, -68.47980000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -431.18290000, 350.90240000, 10.75280000 );
        SET_CAM_ROT( l_U11[3], 32.25610000, 0.00000000, -49.06570000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 2:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -433.78100000, 348.18410000, 13.30400000 );
        SET_CAM_ROT( l_U11[0], -21.10260000, 0.00000000, -44.17090000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -433.67370000, 350.35870000, 12.99130000 );
        SET_CAM_ROT( l_U11[1], -18.62810000, 0.00000000, -72.01600000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -433.56630000, 352.53330000, 12.67850000 );
        SET_CAM_ROT( l_U11[2], -16.15360000, 0.00000000, -99.86110000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -433.45900000, 354.70790000, 12.36580000 );
        SET_CAM_ROT( l_U11[3], -13.67900000, 0.00000000, -127.70620000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 3:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -431.68880000, 352.37560000, 11.69170000 );
        SET_CAM_ROT( l_U11[0], 8.19930000, 0.00000000, -95.71140000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -432.59510000, 352.34890000, 11.69170000 );
        SET_CAM_ROT( l_U11[1], 5.34790000, 0.00000000, -94.65290000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -433.50130000, 352.32210000, 11.69170000 );
        SET_CAM_ROT( l_U11[2], 2.49640000, 0.00000000, -93.59430000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -434.40760000, 352.29530000, 11.69170000 );
        SET_CAM_ROT( l_U11[3], -0.35510000, 0.00000000, -92.53580000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 4:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -430.75150000, 353.85860000, 11.08820000 );
        SET_CAM_ROT( l_U11[0], 24.46050000, 0.00000000, -148.08910000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -431.37440000, 353.06550000, 11.08820000 );
        SET_CAM_ROT( l_U11[1], 19.67260000, 0.00000000, -123.36210000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -431.99730000, 352.27230000, 11.08820000 );
        SET_CAM_ROT( l_U11[2], 14.88460000, 0.00000000, -98.63500000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -432.62010000, 351.47920000, 11.08820000 );
        SET_CAM_ROT( l_U11[3], 10.09660000, 0.00000000, -73.90800000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 5:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -431.09320000, 350.73540000, 12.56880000 );
        SET_CAM_ROT( l_U11[0], -17.22080000, 0.00000000, -48.36480000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -431.14720000, 351.75350000, 12.56880000 );
        SET_CAM_ROT( l_U11[1], -17.08210000, 0.00000000, -80.89460000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -431.20130000, 352.77160000, 12.56880000 );
        SET_CAM_ROT( l_U11[2], -16.94350000, 0.00000000, -113.42440000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -431.25540000, 353.78970000, 12.56880000 );
        SET_CAM_ROT( l_U11[3], -16.80480000, 0.00000000, -145.95420000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 6:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -431.59480000, 350.78960000, 13.03800000 );
        SET_CAM_ROT( l_U11[0], -30.68880000, 0.00000000, -60.71289000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -431.54500000, 351.74010000, 12.36960000 );
        SET_CAM_ROT( l_U11[1], -16.09530000, 0.00000000, -85.78959000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -431.49530000, 352.69060000, 11.70110000 );
        SET_CAM_ROT( l_U11[2], -1.50190000, 0.00000000, -110.86620000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -431.44560000, 353.64110000, 11.03270000 );
        SET_CAM_ROT( l_U11[3], 13.09160000, 0.00000000, -135.94280000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 7:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -431.67190000, 352.07970000, 13.23270000 );
        SET_CAM_ROT( l_U11[0], -38.83370000, 0.00000000, -95.86441000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -431.32690000, 352.79960000, 12.15340000 );
        SET_CAM_ROT( l_U11[1], -3.93050000, 0.00000000, -124.30600000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -430.91390000, 351.19060000, 12.15340000 );
        SET_CAM_ROT( l_U11[2], -3.12960000, 0.00000000, -56.71440000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -432.18880000, 351.96800000, 12.04600000 );
        SET_CAM_ROT( l_U11[3], -0.33700000, 0.00000000, -92.26049000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 8:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -436.65340000, 354.42140000, 13.63360000 );
        SET_CAM_ROT( l_U11[0], -12.05750000, 0.00000000, -110.12180000 );
        SET_CAM_FOV( l_U11[0], 28.20000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -435.50420000, 354.00040000, 13.37220000 );
        SET_CAM_ROT( l_U11[1], -12.05750000, 0.00000000, -110.12180000 );
        SET_CAM_FOV( l_U11[1], 28.20000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -434.35500000, 353.57930000, 13.11070000 );
        SET_CAM_ROT( l_U11[2], -12.05750000, 0.00000000, -110.12180000 );
        SET_CAM_FOV( l_U11[2], 28.20000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -433.20580000, 353.15830000, 12.84930000 );
        SET_CAM_ROT( l_U11[3], -12.05750000, 0.00000000, -110.12180000 );
        SET_CAM_FOV( l_U11[3], 28.20000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 9:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -432.60110000, 351.83760000, 12.20770000 );
        SET_CAM_ROT( l_U11[0], -5.51820000, 0.00000000, -80.03370000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -433.15150000, 352.20210000, 12.59980000 );
        SET_CAM_ROT( l_U11[1], -10.63450000, 0.00000000, -86.67560000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -433.70180000, 352.56650000, 12.99180000 );
        SET_CAM_ROT( l_U11[2], -15.75070000, 0.00000000, -93.31740000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -434.25220000, 352.93100000, 13.38390000 );
        SET_CAM_ROT( l_U11[3], -20.86690000, 0.00000000, -99.95920000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 10:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -437.32890000, 351.78860000, 13.43630000 );
        SET_CAM_ROT( l_U11[0], -11.49820000, 0.00000000, -92.20910000 );
        SET_CAM_FOV( l_U11[0], 35.10000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -436.07190000, 352.01860000, 13.18260000 );
        SET_CAM_ROT( l_U11[1], -11.49820000, 0.00000000, -92.20910000 );
        SET_CAM_FOV( l_U11[1], 35.10000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -434.81480000, 352.24850000, 12.92890000 );
        SET_CAM_ROT( l_U11[2], -11.49820000, 0.00000000, -92.20910000 );
        SET_CAM_FOV( l_U11[2], 35.10000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -433.55770000, 352.47850000, 12.67510000 );
        SET_CAM_ROT( l_U11[3], -11.49820000, 0.00000000, -92.20910000 );
        SET_CAM_FOV( l_U11[3], 35.10000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 11:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -436.40430000, 353.03340000, 13.39030000 );
        SET_CAM_ROT( l_U11[0], -13.95760000, 0.00000000, -88.02600000 );
        SET_CAM_FOV( l_U11[0], 30.60000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -436.24060000, 351.53250000, 13.36100000 );
        SET_CAM_ROT( l_U11[1], -13.95760000, 0.00000000, -81.85881000 );
        SET_CAM_FOV( l_U11[1], 30.60000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -436.07680000, 350.03160000, 13.33160000 );
        SET_CAM_ROT( l_U11[2], -13.95760000, 0.00000000, -75.69150000 );
        SET_CAM_FOV( l_U11[2], 30.60000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -435.91310000, 348.53070000, 13.30220000 );
        SET_CAM_ROT( l_U11[3], -13.95760000, 0.00000000, -69.52430000 );
        SET_CAM_FOV( l_U11[3], 30.60000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 12:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -432.46020000, 353.62700000, 12.89720000 );
        SET_CAM_ROT( l_U11[0], -18.03250000, 0.00000000, -102.16010000 );
        SET_CAM_FOV( l_U11[0], 47.10000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -432.73470000, 352.35290000, 12.89720000 );
        SET_CAM_ROT( l_U11[1], -18.03250000, 0.00000000, -91.09080000 );
        SET_CAM_FOV( l_U11[1], 47.10000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -433.00930000, 351.07880000, 12.89720000 );
        SET_CAM_ROT( l_U11[2], -18.03250000, 0.00000000, -80.02140000 );
        SET_CAM_FOV( l_U11[2], 47.10000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -433.28380000, 349.80470000, 12.89720000 );
        SET_CAM_ROT( l_U11[3], -18.03250000, 0.00000000, -68.95211000 );
        SET_CAM_FOV( l_U11[3], 47.10000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 15000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
    }
    return;
}

void sub_10504()
{
    int I;

    for ( I = 0; I < l_U11; I++ )
    {
        if (DOES_CAM_EXIST( l_U11[I] ))
        {
            SET_CAM_ACTIVE( l_U11[I], 0 );
            SET_CAM_PROPAGATE( l_U11[I], 0 );
            DESTROY_CAM( l_U11[I] );
        }
    }
    if (DOES_CAM_EXIST( l_U10 ))
    {
        SET_CAM_ACTIVE( l_U10, 0 );
        SET_CAM_PROPAGATE( l_U10, 0 );
        DESTROY_CAM( l_U10 );
    }
    return;
}

void sub_18181()
{
    int iVar2;

    iVar2 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref iVar2 );
    if (NOT l_U247)
    {
        if (l_U103 < 2)
        {
            if (NOT (iVar2 == 2))
            {
                l_U103++;
                return;
            }
        }
        else
        {
            l_U103 = 0;
        }
    }
    l_U30 = 1;
    l_U261 = 1;
    sub_10504();
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref iVar2 );
    if (iVar2 == l_U262)
    {
        iVar2++;
        if (iVar2 > 5)
        {
            iVar2 = 5;
            if (l_U262 == iVar2)
            {
                iVar2--;
            }
        }
    }
    l_U262 = iVar2;
    PRINTSTRING( "!!!Success selector picked " );
    PRINTINT( iVar2 );
    PRINTNL();
    switch (iVar2)
    {
        case 0:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -479.07750000, 147.75670000, 8.18640000 );
        SET_CAM_ROT( l_U11[0], -11.42670000, 0.00000000, 89.53260000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -479.97210000, 147.75670000, 8.18640000 );
        SET_CAM_ROT( l_U11[1], -12.35130000, 0.00000000, 89.53260000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -480.86680000, 147.75670000, 8.18640000 );
        SET_CAM_ROT( l_U11[2], -13.27580000, 0.00000000, 89.53260000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -481.76140000, 147.75670000, 8.18640000 );
        SET_CAM_ROT( l_U11[3], -14.20040000, 0.00000000, 89.53260000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 10000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 1:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -482.60950000, 149.32330000, 8.77130000 );
        SET_CAM_ROT( l_U11[0], -20.31090000, 0.00000000, 108.14020000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -482.76530000, 148.51930000, 8.36030000 );
        SET_CAM_ROT( l_U11[1], -13.47430000, 0.00000000, 89.34510000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -482.92110000, 147.71530000, 7.94930000 );
        SET_CAM_ROT( l_U11[2], -6.63770000, 0.00000000, 70.55001000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -483.07690000, 146.91130000, 7.53830000 );
        SET_CAM_ROT( l_U11[3], 0.19890000, 0.00000000, 51.75500000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 10000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 2:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -481.80070000, 148.76290000, 7.17580000 );
        SET_CAM_ROT( l_U11[0], 4.45450000, 0.00000000, 104.29720000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -481.98240000, 148.24960000, 7.17580000 );
        SET_CAM_ROT( l_U11[1], 4.29300000, 0.00000000, 97.15900000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -482.16420000, 147.73640000, 7.17580000 );
        SET_CAM_ROT( l_U11[2], 4.13160000, 0.00000000, 90.02080000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -482.34590000, 147.22320000, 7.17580000 );
        SET_CAM_ROT( l_U11[3], 3.97020000, 0.00000000, 82.88260000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 10000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 3:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -483.03630000, 147.78040000, 10.22110000 );
        SET_CAM_ROT( l_U11[0], -53.39790000, 0.00000000, 92.66690000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -482.69500000, 147.79400000, 9.46720100 );
        SET_CAM_ROT( l_U11[1], -39.40610000, 0.00000000, 90.55050000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -482.35370000, 147.80760000, 8.71340000 );
        SET_CAM_ROT( l_U11[2], -25.41420000, 0.00000000, 88.43410000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -482.01240000, 147.82130000, 7.95950000 );
        SET_CAM_ROT( l_U11[3], -11.42240000, 0.00000000, 86.31770000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 10000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 4:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -482.80790000, 148.14030000, 7.01640000 );
        SET_CAM_ROT( l_U11[0], 11.14320000, 0.00000000, 86.71199000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -482.84790000, 148.14280000, 6.87530000 );
        SET_CAM_ROT( l_U11[1], 15.96400000, 0.00000000, 87.90910000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -482.88800000, 148.14520000, 6.73420000 );
        SET_CAM_ROT( l_U11[2], 20.78480000, 0.00000000, 89.10630000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -482.92800000, 148.14770000, 6.59310000 );
        SET_CAM_ROT( l_U11[3], 25.60570000, 0.00000000, 90.30340000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 10000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 5:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -482.80790000, 148.14030000, 7.01640000 );
        SET_CAM_ROT( l_U11[0], 11.14320000, 0.00000000, 86.71199000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -482.84790000, 148.14280000, 6.87530000 );
        SET_CAM_ROT( l_U11[1], 15.96400000, 0.00000000, 87.90910000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -482.88800000, 148.14520000, 6.73420000 );
        SET_CAM_ROT( l_U11[2], 20.78480000, 0.00000000, 89.10630000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -482.92800000, 148.14770000, 6.59310000 );
        SET_CAM_ROT( l_U11[3], 25.60570000, 0.00000000, 90.30340000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 10000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
    }
    return;
}

void sub_21827()
{
    switch (l_U172[l_U237])
    {
        case 0:
        DISPLAY_TEXT( 0.50000000, 0.75000000, "BS_UP" );
        l_U106 = l_U104;
        break;
        case 1:
        DISPLAY_TEXT( 0.50000000, 0.75000000, "BS_DOWN" );
        l_U106 = l_U104;
        break;
        case 2:
        DISPLAY_TEXT( 0.50000000, 0.75000000, "BS_LEFT" );
        l_U106 = l_U104;
        break;
        case 3:
        DISPLAY_TEXT( 0.50000000, 0.75000000, "BS_RIGHT" );
        l_U106 = l_U104;
        break;
        case 4:
        DISPLAY_TEXT( 0.50000000, 0.75000000, "BS_SPECIAL" );
        l_U106 = l_U105;
        break;
        case 5:
        DISPLAY_TEXT( 0.50000000, 0.75000000, "BS_SPECIAL_X" );
        l_U106 = l_U105;
        break;
        case 6:
        DISPLAY_TEXT( 0.50000000, 0.75000000, "BS_SPECIAL_Y" );
        l_U106 = l_U105;
        break;
        case 7:
        DISPLAY_TEXT( 0.50000000, 0.75000000, "BS_SPECIAL_B" );
        l_U106 = l_U105;
        break;
    }
    return;
}

void sub_22338()
{
    switch (g_U30190)
    {
        case 2:
        l_U42 = 0.71100000;
        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( sub_7029(), l_U3, l_U1, 1000, -1, 2080, l_U42 );
        TASK_PLAY_ANIM_FACIAL( l_U53[8], "FACIAL_PLAYER_FAIL", l_U1, 4.00000000, 0, 1, -1 );
        break;
        case 1:
        l_U42 = 0.94000000;
        TASK_PLAY_ANIM_WITH_FLAGS_AND_START_PHASE( sub_7029(), l_U5, l_U4, 1000, -1, 2080, l_U42 );
        TASK_PLAY_ANIM_FACIAL( l_U53[8], "FACIAL_PLAYER_FAIL", l_U4, 4.00000000, 0, 1, -1 );
        break;
    }
    return;
}

void sub_22638()
{
    switch (g_U30190)
    {
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U53[8] )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U53[8], l_U1, l_U3 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U53[8], l_U1, l_U3, ref l_U42 );
            }
            else
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U53[8], l_U1, l_U2, ref l_U42 );
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U53[8] )))
        {
            if (IS_CHAR_PLAYING_ANIM( l_U53[8], l_U4, l_U5 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U53[8], l_U4, l_U5, ref l_U42 );
            }
            else
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U53[8], l_U4, l_U6, ref l_U42 );
            }
        }
        break;
    }
    return;
}

void sub_23777()
{
    if ((g_U30172[1]) AND (g_U30172[2]))
    {
        AWARD_ACHIEVEMENT( 60 );
    }
    return;
}

void sub_23827()
{
    sub_10504();
    switch (g_U30190)
    {
        case 2:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -431.96940000, 352.11990000, 12.09920000 );
        SET_CAM_ROT( l_U11[0], -6.99430000, 0.00000000, -90.38390000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -431.93410000, 352.11970000, 12.38680000 );
        SET_CAM_ROT( l_U11[1], -11.10420000, 0.00000000, -90.38390000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -431.89880000, 352.11940000, 12.67440000 );
        SET_CAM_ROT( l_U11[2], -15.21410000, 0.00000000, -90.38390000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -431.86350000, 352.11920000, 12.96200000 );
        SET_CAM_ROT( l_U11[3], -19.32400000, 0.00000000, -90.38390000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 8000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
        case 1:
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        CREATE_CAM( 14, ref l_U11[0] );
        SET_CAM_POS( l_U11[0], -481.80070000, 148.76290000, 7.17580000 );
        SET_CAM_ROT( l_U11[0], 4.45450000, 0.00000000, 104.29720000 );
        SET_CAM_FOV( l_U11[0], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[0], 1 );
        CREATE_CAM( 14, ref l_U11[1] );
        SET_CAM_POS( l_U11[1], -481.98240000, 148.24960000, 7.17580000 );
        SET_CAM_ROT( l_U11[1], 4.29300000, 0.00000000, 97.15900000 );
        SET_CAM_FOV( l_U11[1], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[1], 1 );
        CREATE_CAM( 14, ref l_U11[2] );
        SET_CAM_POS( l_U11[2], -482.16420000, 147.73640000, 7.17580000 );
        SET_CAM_ROT( l_U11[2], 4.13160000, 0.00000000, 90.02080000 );
        SET_CAM_FOV( l_U11[2], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[2], 1 );
        CREATE_CAM( 14, ref l_U11[3] );
        SET_CAM_POS( l_U11[3], -482.34590000, 147.22320000, 7.17580000 );
        SET_CAM_ROT( l_U11[3], 3.97020000, 0.00000000, 82.88260000 );
        SET_CAM_FOV( l_U11[3], 45.00000000 );
        SET_CAM_ACTIVE( l_U11[3], 1 );
        CREATE_CAM( 25, ref l_U10 );
        SET_CAM_SPLINE_DURATION( l_U10, 10000 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
        ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
        SET_CAM_ACTIVE( l_U10, 1 );
        SET_CAM_PROPAGATE( l_U10, 1 );
        break;
    }
    return;
}

void sub_25364()
{
    g_U30251 = {0.00000000, 0.00000000, 0.00000000};
    g_U30254 = {0.00000000, 0.00000000, 0.00000000};
    g_U30230[2] = nil;
    g_U30230[1] = nil;
    g_U30230[0] = nil;
    return;
}

void sub_25454(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_25486()
{
    CREATE_CAM( 14, ref l_U249 );
    switch (g_U30190)
    {
        case 2:
        SET_CAM_POS( l_U249, -436.49750000, 353.06050000, 13.29244000 );
        SET_CAM_ROT( l_U249, -33.00221000, -0.00000000, -97.65203000 );
        SET_CAM_FOV( l_U249, 99.60031000 );
        break;
        case 1:
        SET_CAM_POS( l_U249, -483.09230000, 140.41220000, 10.71077000 );
        SET_CAM_ROT( l_U249, -16.07076000, -0.00000000, 6.51706000 );
        SET_CAM_FOV( l_U249, 78.00009000 );
        break;
    }
    SET_CAM_ACTIVE( l_U249, 1 );
    SET_CAM_PROPAGATE( l_U249, 1 );
    return;
}

void sub_31275()
{
    switch (l_U30)
    {
        case 0:
        switch (g_U30190)
        {
            case 2:
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_10504();
            sub_31352();
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U30++;
            break;
            case 1:
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_10504();
            sub_31995();
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U30++;
            break;
        }
        break;
        case 1:
        if (DOES_CAM_EXIST( l_U10 ))
        {
            if ((NOT l_U261) AND (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U10 ))))
            {
                switch (g_U30190)
                {
                    case 2:
                    sub_10504();
                    sub_31352();
                    l_U261 = 0;
                    break;
                    case 1:
                    sub_10504();
                    sub_31995();
                    l_U261 = 0;
                    break;
                }
            }
        }
        break;
    }
    return;
}

void sub_31352()
{
    PRINTSTRING( "Herc cam default fired!\n" );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U11[0] );
    SET_CAM_POS( l_U11[0], -432.20080000, 352.54000000, 11.94370000 );
    SET_CAM_ROT( l_U11[0], -8.05590000, 0.00000000, -92.02580000 );
    SET_CAM_FOV( l_U11[0], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[0], 1 );
    CREATE_CAM( 14, ref l_U11[1] );
    SET_CAM_POS( l_U11[1], -433.27330000, 352.54980000, 12.25800000 );
    SET_CAM_ROT( l_U11[1], -10.70860000, 0.00000000, -77.64630000 );
    SET_CAM_FOV( l_U11[1], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[1], 1 );
    CREATE_CAM( 14, ref l_U11[2] );
    SET_CAM_POS( l_U11[2], -433.93850000, 352.49550000, 12.64420000 );
    SET_CAM_ROT( l_U11[2], -12.03220000, 0.00000000, -100.92820000 );
    SET_CAM_FOV( l_U11[2], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[2], 1 );
    CREATE_CAM( 14, ref l_U11[3] );
    SET_CAM_POS( l_U11[3], -434.71570000, 352.50050000, 13.04830000 );
    SET_CAM_ROT( l_U11[3], -11.39970000, 0.00000000, -93.01200000 );
    SET_CAM_FOV( l_U11[3], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[3], 1 );
    CREATE_CAM( 25, ref l_U10 );
    SET_CAM_SPLINE_DURATION( l_U10, 28000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
    SET_CAM_ACTIVE( l_U10, 1 );
    SET_CAM_PROPAGATE( l_U10, 1 );
    return;
}

void sub_31995()
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U11[0] );
    SET_CAM_POS( l_U11[0], -482.73930000, 143.20190000, 9.16080000 );
    SET_CAM_ROT( l_U11[0], -22.48630000, 0.00000000, 39.06020000 );
    SET_CAM_FOV( l_U11[0], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[0], 1 );
    CREATE_CAM( 14, ref l_U11[1] );
    SET_CAM_POS( l_U11[1], -482.69490000, 144.40450000, 8.63540000 );
    SET_CAM_ROT( l_U11[1], -15.95460000, 0.00000000, 50.09920000 );
    SET_CAM_FOV( l_U11[1], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[1], 1 );
    CREATE_CAM( 14, ref l_U11[2] );
    SET_CAM_POS( l_U11[2], -482.65040000, 145.60710000, 8.11000000 );
    SET_CAM_ROT( l_U11[2], -9.42290000, 0.00000000, 61.13820000 );
    SET_CAM_FOV( l_U11[2], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[2], 1 );
    CREATE_CAM( 14, ref l_U11[3] );
    SET_CAM_POS( l_U11[3], -482.60600000, 146.80970000, 7.58460000 );
    SET_CAM_ROT( l_U11[3], -2.89110000, 0.00000000, 72.17720000 );
    SET_CAM_FOV( l_U11[3], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[3], 1 );
    CREATE_CAM( 14, ref l_U11[4] );
    SET_CAM_POS( l_U11[4], -482.77850000, 147.80580000, 8.51200000 );
    SET_CAM_ROT( l_U11[4], -18.55200000, 0.00000000, 87.68530000 );
    SET_CAM_FOV( l_U11[4], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[4], 1 );
    CREATE_CAM( 14, ref l_U11[5] );
    SET_CAM_POS( l_U11[5], -482.95100000, 148.80190000, 9.43939900 );
    SET_CAM_ROT( l_U11[5], -34.21280000, 0.00000000, 103.19330000 );
    SET_CAM_FOV( l_U11[5], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[5], 1 );
    CREATE_CAM( 14, ref l_U11[6] );
    SET_CAM_POS( l_U11[6], -483.12360000, 149.79800000, 10.36680000 );
    SET_CAM_ROT( l_U11[6], -49.87370000, 0.00000000, 118.70140000 );
    SET_CAM_FOV( l_U11[6], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[6], 1 );
    CREATE_CAM( 14, ref l_U11[7] );
    SET_CAM_POS( l_U11[7], -483.37690000, 151.30470000, 10.36680000 );
    SET_CAM_ROT( l_U11[7], -42.76900000, 0.00000000, 132.37590000 );
    SET_CAM_FOV( l_U11[7], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[7], 1 );
    CREATE_CAM( 14, ref l_U11[8] );
    SET_CAM_POS( l_U11[8], -483.63020000, 152.81140000, 10.36680000 );
    SET_CAM_ROT( l_U11[8], -35.66430000, 0.00000000, 146.05040000 );
    SET_CAM_FOV( l_U11[8], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[8], 1 );
    CREATE_CAM( 14, ref l_U11[9] );
    SET_CAM_POS( l_U11[9], -483.88360000, 154.31810000, 10.36680000 );
    SET_CAM_ROT( l_U11[9], -28.55970000, 0.00000000, 159.72490000 );
    SET_CAM_FOV( l_U11[9], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[9], 1 );
    CREATE_CAM( 14, ref l_U11[10] );
    SET_CAM_POS( l_U11[10], -482.57690000, 151.98480000, 10.36680000 );
    SET_CAM_ROT( l_U11[10], -29.13260000, 0.00000000, 134.40020000 );
    SET_CAM_FOV( l_U11[10], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[10], 1 );
    CREATE_CAM( 14, ref l_U11[11] );
    SET_CAM_POS( l_U11[11], -481.27030000, 149.65140000, 10.36680000 );
    SET_CAM_ROT( l_U11[11], -29.70560000, 0.00000000, 109.07540000 );
    SET_CAM_FOV( l_U11[11], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[11], 1 );
    CREATE_CAM( 14, ref l_U11[12] );
    SET_CAM_POS( l_U11[12], -479.96360000, 147.31810000, 10.36680000 );
    SET_CAM_ROT( l_U11[12], -30.27850000, 0.00000000, 83.75070000 );
    SET_CAM_FOV( l_U11[12], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[12], 1 );
    CREATE_CAM( 14, ref l_U11[13] );
    SET_CAM_POS( l_U11[13], -480.88890000, 145.94600000, 9.96480000 );
    SET_CAM_ROT( l_U11[13], -27.68110000, 0.00000000, 68.85390000 );
    SET_CAM_FOV( l_U11[13], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[13], 1 );
    CREATE_CAM( 14, ref l_U11[14] );
    SET_CAM_POS( l_U11[14], -481.81410000, 144.57400000, 9.56280000 );
    SET_CAM_ROT( l_U11[14], -25.08370000, 0.00000000, 53.95710000 );
    SET_CAM_FOV( l_U11[14], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[14], 1 );
    CREATE_CAM( 14, ref l_U11[15] );
    SET_CAM_POS( l_U11[15], -482.73930000, 143.20190000, 9.16080000 );
    SET_CAM_ROT( l_U11[15], -22.48630000, 0.00000000, 39.06020000 );
    SET_CAM_FOV( l_U11[15], 45.00000000 );
    SET_CAM_ACTIVE( l_U11[15], 1 );
    CREATE_CAM( 25, ref l_U10 );
    SET_CAM_SPLINE_DURATION( l_U10, 40000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U10, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U10, 0 );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[0] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[1] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[2] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[3] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[4] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[5] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[6] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[7] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[8] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[9] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[10] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[11] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[12] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[13] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[14] );
    ADD_CAM_SPLINE_NODE( l_U10, l_U11[15] );
    SET_CAM_ACTIVE( l_U10, 1 );
    SET_CAM_PROPAGATE( l_U10, 1 );
    return;
}

