void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U251 = 0.08000000;
    l_U325 = 6.00000000;
    l_U327 = 0.10000000;
    l_U370 = 0.06000000;
    l_U371 = 0.08000000;
    l_U372 = 0.10000000;
    l_U373 = 0;
    l_U374 = 0;
    l_U381 = 1;
    l_U391 = 0.18000000;
    l_U393 = {-0.00350000, 0.00000000, -0.00100000};
    l_U401 = 1;
    l_U402 = 0;
    l_U403 = 0;
    l_U419 = 0;
    l_U420 = 0;
    l_U421 = 0;
    l_U422 = 0;
    l_U399 = {l_U424};
    l_U257 = l_U424._fU4;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_206();
    }
    WAIT( 0 );
    if (DOES_OBJECT_EXIST( l_U257 ))
    {
        sub_1650();
    }
    else
    {
        sub_206();
    }
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, 0.00000000, -1.72000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    if (l_U398)
    {
        CLEAR_AREA( l_U300._fU0, l_U300._fU4, l_U300._fU8, 4.00000000, 1 );
    }
    while (l_U381)
    {
        WAIT( 0 );
        if (NOT (DOES_OBJECT_EXIST( l_U257 )))
        {
            sub_206();
        }
        if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U257 )))
        {
            sub_2187( 3 );
            sub_206();
        }
        sub_2368();
        switch (l_U0)
        {
            case 0:
            sub_2726();
            sub_6281();
            l_U331 = 1;
            sub_14422();
            break;
            case 1:
            sub_14797();
            sub_6281();
            if (NOT l_U397)
            {
                sub_37572();
            }
            sub_38022();
            if (l_U396)
            {
                if (IS_CHAR_DEAD( l_U262 ))
                {
                    sub_2187( 4 );
                    sub_206();
                }
            }
            break;
            case 2:
            sub_39809();
            break;
            default: break;
        }
    }
    sub_206();
    sub_206();
    return;
}

void sub_206()
{
    unknown uVar2;
    unknown uVar3;

    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_215(), 0 );
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    CLEAR_HELP();
    CLEAR_PRINTS();
    if (l_U398)
    {
        DELETE_OBJECT( ref l_U2[l_U331][0]._fU0 );
        DELETE_OBJECT( ref l_U2[l_U331][1]._fU0 );
        DELETE_OBJECT( ref l_U2[l_U331][2]._fU0 );
        DELETE_OBJECT( ref l_U258 );
        DELETE_OBJECT( ref l_U259 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 937660317 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U261 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2063078697 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -172899370 );
        if (IS_PLAYER_PLAYING( sub_443() ))
        {
            SET_PLAYER_CONTROL( sub_443(), 1 );
            if (l_U396)
            {
                if ((NOT (IS_CHAR_DEAD( l_U262 ))) AND (DOES_CHAR_EXIST( l_U262 )))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U262 ))) AND (NOT (IS_CHAR_DEAD( sub_215() ))))
                    {
                        TASK_CLEAR_LOOK_AT( sub_215() );
                        TASK_CLEAR_LOOK_AT( l_U262 );
                    }
                    if (NOT (COMPARE_STRING( sub_600( ref l_U399 ), "PLAY_BAR_GUY" )))
                    {
                        GET_PLAYER_GROUP( sub_443(), ref uVar2 );
                        if (NOT (IS_GROUP_MEMBER( l_U262, uVar2 )))
                        {
                            SET_GROUP_MEMBER( sub_998(), l_U262 );
                        }
                    }
                    FREEZE_CHAR_POSITION( l_U262, 0 );
                    if (COMPARE_STRING( sub_600( ref l_U399 ), "PLAY_BAR_GUY" ))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.60000000, -0.70000000, -1.73000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                        OPEN_SEQUENCE_TASK( ref uVar3 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U300._fU0, l_U300._fU4, l_U300._fU8, 2, 20000, 0.20000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_215() );
                        CLOSE_SEQUENCE_TASK( uVar3 );
                        TASK_PERFORM_SEQUENCE( l_U262, uVar3 );
                        CLEAR_SEQUENCE_TASK( uVar3 );
                    }
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U262 )))
        {
            if (l_U405)
            {
                STOP_PED_SPEAKING( l_U262, 1 );
            }
        }
        if (NOT (IS_CHAR_INJURED( sub_215() )))
        {
            if (l_U406)
            {
                STOP_PED_SPEAKING( sub_215(), 1 );
            }
        }
        DESTROY_CAM( l_U291 );
        DESTROY_CAM( l_U292 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U295 );
        if (IS_PLAYER_PLAYING( sub_443() ))
        {
            SET_CAM_BEHIND_PED( sub_215() );
        }
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "darts" );
        sub_1408();
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_215()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_443()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_600(int iParam0)
{
    string Result;

    switch (iParam0->_fU0)
    {
        case 0:
        Result = "PLAY_ROMAN";
        break;
        case 1:
        Result = "PLAY_PACKIE";
        break;
        case 2:
        Result = "PLAY_JACOB";
        break;
        case 3:
        Result = "PLAY_BRUCIE";
        break;
        case 4:
        Result = "PLAY_DWAYNE";
        break;
        case 5:
        Result = "PLAY_MICHELLE";
        break;
        case 6:
        Result = "PLAY_KATE";
        break;
        case 7:
        Result = "PLAY_ALEX";
        break;
        case 8:
        Result = "PLAY_KIKI";
        break;
        case 9:
        Result = "PLAY_CARMEN";
        break;
        default:
        Result = "PLAY_BAR_GUY";
        break;
    }
    return Result;
}

void sub_998()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1408()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U10979 = 0;
    if (g_U32898._fU0 == 54)
    {
        g_U10978 = 0;
        sub_1463();
        return;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        if (g_U32898._fU20 == 8)
        {
            g_U32898._fU20 = 3;
        }
    }
    else if (NOT (g_U32898._fU4 == 9))
    {
        if (g_U32898._fU16 == 8)
        {
            g_U32898._fU16 = 3;
        }
    }
    else
    {
        return;
    }
    g_U32898._fU28 = 1;
    return;
}

void sub_1463()
{
    g_U32896._fU4 = 1;
    return;
}

void sub_1650()
{
    GET_OBJECT_HEADING( l_U257, ref l_U260 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, -0.30000000, -2.36850000 + l_U391, -1.72720000, ref l_U268._fU0, ref l_U268._fU4, ref l_U268._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.50000000, -2.36850000 + l_U391, -1.65000000, ref l_U271._fU0, ref l_U271._fU4, ref l_U271._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -3.00000000 + l_U391, -1.72720000, ref l_U286._fU0, ref l_U286._fU4, ref l_U286._fU8 );
    l_U277 = {0.00000000, -2.36850000 + l_U391, 0.10000000};
    l_U277 = {l_U277 + l_U393};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U277._fU0, l_U277._fU4, l_U277._fU8, ref l_U274._fU0, ref l_U274._fU4, ref l_U274._fU8 );
    l_U283 = {0.00000000, -0.15000000, 0.00000000};
    l_U283 = {l_U283 + l_U393};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, 0.00000000, 0.00000000, ref l_U280._fU0, ref l_U280._fU4, ref l_U280._fU8 );
    return;
}

void sub_2187(unknown uParam0)
{
    if (g_U32898._fU0 == 54)
    {
        return;
    }
    if (NOT (g_U32898._fU8 == 9))
    {
        g_U32898._fU20 = uParam0;
        if (sub_2254( g_U32898._fU0 ))
        {
            g_U32898._fU16 = uParam0;
        }
        return;
    }
    g_U32898._fU16 = uParam0;
    return;
}

int sub_2254(unknown uParam0)
{
    switch (uParam0)
    {
        case 2:
        case 10:
        case 28:
        case 29:
        case 30: return 1;
    }
    return 0;
}

void sub_2368()
{
    if (NOT l_U421)
    {
        if ((IS_CONTROL_PRESSED( 2, 78 )) AND (NOT (IS_CONTROL_PRESSED( 2, 77 ))))
        {
            l_U421 = 1;
        }
        else
        {
            l_U421 = 0;
        }
    }
    if (l_U0 != 2)
    {
        if (l_U419)
        {
            if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
            {
                sub_2187( 3 );
                sub_206();
            }
            if (((# -NULL-0xc27bfa()) || (l_U421)) AND (sub_2479()))
            {
                l_U382 = 0;
                l_U419 = 0;
                l_U420 = 0;
                l_U421 = 0;
                CLEAR_HELP();
            }
        }
        if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
        {
            if (NOT l_U420)
            {
                PRINT_HELP( "QUIT_MSG" );
                l_U420 = 1;
            }
        }
        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "QUIT_MSG" ))
        {
            l_U419 = 1;
        }
        else
        {
            l_U419 = 0;
            l_U420 = 0;
        }
    }
    return;
}

int sub_2479()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_2726()
{
    unknown uVar2;
    int iVar3;
    int iVar4;

    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    CLEAR_PRINTS();
    SET_PLAYER_CONTROL( sub_443(), 0 );
    DISPLAY_RADAR( 0 );
    DISPLAY_HUD( 0 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_215(), 1 );
    sub_2829( "DARTS", 3 );
    REQUEST_STREAMED_TXD( "darts", 0 );
    while (NOT (HAS_STREAMED_TXD_LOADED( "darts" )))
    {
        WAIT( 0 );
    }
    if ((l_U260 < 1) || (l_U260 > 359))
    {
        sub_3090( 1151.53200000, 731.44890000, 34.91700000, 84, l_U300._fU0, l_U300._fU4, l_U300._fU8, 5, -1, 0 );
    }
    else
    {
        sub_3090( -439.15930000, 457.63810000, 8.90010000, 83, l_U300._fU0, l_U300._fU4, l_U300._fU8, 5, -1, 0 );
    }
    l_U261 = sub_3452( ref l_U399 );
    l_U265 = sub_3624( ref l_U399 );
    REQUEST_MODEL( 937660317 );
    REQUEST_MODEL( l_U261 );
    REQUEST_MODEL( 2063078697 );
    REQUEST_MODEL( -172899370 );
    while ((NOT (HAS_MODEL_LOADED( -172899370 ))) || ((NOT (HAS_MODEL_LOADED( 2063078697 ))) || ((NOT (HAS_MODEL_LOADED( l_U261 ))) || (NOT (HAS_MODEL_LOADED( 937660317 ))))))
    {
        WAIT( 0 );
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_AMBIENT/DARTS" )))
    {
        WAIT( 0 );
    }
    l_U356 = GET_SOUND_ID();
    l_U357 = GET_SOUND_ID();
    l_U358 = GET_SOUND_ID();
    l_U359 = GET_SOUND_ID();
    l_U360 = GET_SOUND_ID();
    l_U361 = GET_SOUND_ID();
    l_U362 = GET_SOUND_ID();
    l_U363 = GET_SOUND_ID();
    l_U364 = GET_SOUND_ID();
    l_U365 = GET_SOUND_ID();
    GET_GROUP_SIZE( sub_998(), ref uVar2, ref iVar3 );
    if (iVar3 > 0)
    {
        GET_GROUP_MEMBER( sub_998(), 0, ref l_U262 );
        if (NOT (IS_CHAR_DEAD( l_U262 )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U262 );
        }
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U262 );
        SET_CHAR_COORDINATES( l_U262, l_U271._fU0, l_U271._fU4, l_U271._fU8 - 0.18000000 );
        SET_CHAR_HEADING( l_U262, l_U260 + 25.00000000 );
        FREEZE_CHAR_POSITION( l_U262, 1 );
        l_U396 = 1;
    }
    sub_4438();
    l_U366 = sub_4653( ref l_U367 );
    if (NOT l_U366)
    {
        GET_CHAR_MODEL( l_U262, ref iVar4 );
        if (iVar4 == 1844702918)
        {
            PRINTNL();
            PRINTSTRING( "SETTING VOICE TO M_Y_GIRI_LO_03_FULL_01" );
            PRINTNL();
            SET_AMBIENT_VOICE_NAME( l_U262, "M_Y_GIRI_LO_03_FULL_01" );
        }
        else if (iVar4 == -19263344)
        {
            PRINTNL();
            PRINTSTRING( "SETTING VOICE TO M_Y_GIRI_LO_02_FULL_01" );
            PRINTNL();
            SET_AMBIENT_VOICE_NAME( l_U262, "M_Y_GIRI_LO_02_FULL_01" );
        }
        else if (iVar4 == 280474699)
        {
            PRINTNL();
            PRINTSTRING( "SETTING VOICE TO M_Y_GIRI_LO_01_FULL_01" );
            PRINTNL();
            SET_AMBIENT_VOICE_NAME( l_U262, "M_Y_GIRI_LO_01_FULL_01" );
        };;;
    }
    if (NOT (IS_CHAR_INJURED( l_U262 )))
    {
        if (IS_AMBIENT_SPEECH_DISABLED( l_U262 ))
        {
            l_U405 = 1;
            STOP_PED_SPEAKING( l_U262, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( sub_215() )))
    {
        if (IS_AMBIENT_SPEECH_DISABLED( sub_215() ))
        {
            l_U406 = 1;
            STOP_PED_SPEAKING( sub_215(), 0 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U257 ))
    {
        GET_OBJECT_COORDINATES( l_U257, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
        GET_INTERIOR_AT_COORDS( l_U300._fU0, l_U300._fU4, l_U300._fU8, ref l_U289 );
        GET_ROOM_KEY_FROM_OBJECT( l_U257, ref l_U290 );
        REMOVE_PROJTEX_FROM_OBJECT( l_U257 );
    }
    else
    {
        sub_206();
    }
    l_U264 = 2;
    l_U377 = GET_TEXTURE_FROM_STREAMED_TXD( "darts", "CJ_BLACKBOARD" );
    l_U378 = GET_TEXTURE_FROM_STREAMED_TXD( "darts", sub_5358() );
    l_U379 = GET_TEXTURE_FROM_STREAMED_TXD( "darts", sub_5415( ref l_U399 ) );
    l_U380 = GET_TEXTURE_FROM_STREAMED_TXD( "darts", "strike" );
    sub_5677( "darts", "CJ_BLACKBOARD" );
    sub_5677( "darts", "name_niko" );
    sub_5677( "darts", "name_roman" );
    sub_5677( "darts", "name_packie" );
    sub_5677( "darts", "name_jacob" );
    sub_5677( "darts", "name_brucie" );
    sub_5677( "darts", "name_dwayne" );
    sub_5677( "darts", "name_opponent" );
    GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U375 );
    while (l_U375 == -1)
    {
        GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U375 );
        WAIT( 0 );
    }
    l_U2[0][0]._fU4 = 937660317;
    l_U2[0][1]._fU4 = 937660317;
    l_U2[0][2]._fU4 = 937660317;
    l_U2[1][0]._fU4 = l_U261;
    l_U2[1][1]._fU4 = l_U261;
    l_U2[1][2]._fU4 = l_U261;
    l_U303[0] = 20;
    l_U303[10] = 3;
    l_U303[1] = 1;
    l_U303[11] = 19;
    l_U303[2] = 18;
    l_U303[12] = 7;
    l_U303[3] = 4;
    l_U303[13] = 16;
    l_U303[4] = 13;
    l_U303[14] = 8;
    l_U303[5] = 6;
    l_U303[15] = 11;
    l_U303[6] = 10;
    l_U303[16] = 14;
    l_U303[7] = 15;
    l_U303[17] = 9;
    l_U303[8] = 2;
    l_U303[18] = 12;
    l_U303[9] = 17;
    l_U303[19] = 5;
    l_U303[20] = 20;
    SET_CHAR_COORDINATES( sub_215(), l_U268._fU0, l_U268._fU4, l_U268._fU8 );
    SET_CHAR_HEADING( sub_215(), l_U260 - 35.00000000 );
    sub_6281();
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -0.85000000 + l_U391, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    CREATE_OBJECT( 2063078697, l_U300._fU0, l_U300._fU4, l_U300._fU8, ref l_U259, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U259, l_U290 );
    SET_OBJECT_COLLISION( l_U259, 0 );
    if (NOT g_U8667)
    {
        sub_6935();
    }
    sub_11665();
    CREATE_WIDGET_GROUP( "Darts" );
    CREATE_WIDGET_GROUP( "Player Aim" );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "No Randomness" );
    ADD_TO_WIDGET_COMBO( "Baz random" );
    ADD_TO_WIDGET_COMBO( "Les random" );
    FINISH_WIDGET_COMBO( "Targetting", ref l_U264 );
    ADD_WIDGET_FLOAT_SLIDER( "realTargetRandom", ref l_U371, 0.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fakeTargetRandom", ref l_U370, 0.00000000, 1.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "targetMoveSpeed", ref l_U372, 0.00000000, 1.00000000, 0.02000000 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Opponent Aim" );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "No Randomness" );
    ADD_TO_WIDGET_COMBO( "Baz random" );
    ADD_TO_WIDGET_COMBO( "Les random" );
    FINISH_WIDGET_COMBO( "Targetting", ref l_U264 );
    ADD_WIDGET_FLOAT_SLIDER( "realTargetRandom", ref l_U371, 0.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fakeTargetRandom", ref l_U370, 0.00000000, 1.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "targetMoveSpeed", ref l_U372, 0.00000000, 1.00000000, 0.02000000 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "AI Turn Skip" );
    ADD_WIDGET_TOGGLE( "Show AI Darts", ref l_U401 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Cameras" );
    ADD_WIDGET_FLOAT_SLIDER( "board_pos.x", ref l_U407._fU0, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_pos.y", ref l_U407._fU4, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_pos.z", ref l_U407._fU8, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_point.x", ref l_U410._fU0, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_point.y", ref l_U410._fU4, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_point.z", ref l_U410._fU8, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_pos.x", ref l_U413._fU0, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_pos.y", ref l_U413._fU4, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_pos.z", ref l_U413._fU8, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_point.x", ref l_U416._fU0, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_point.y", ref l_U416._fU4, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_point.z", ref l_U416._fU8, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_TOGGLE( "ReAttach Cams", ref l_U404 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Scoring" );
    ADD_WIDGET_FLOAT_SLIDER( "score_dart_offset.x", ref l_U241._fU0, -20.00000000, 20.00000000, 0.00100000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_dart_offset.y", ref l_U241._fU4, -20.00000000, 20.00000000, 0.00100000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_dart_offset.z", ref l_U241._fU8, -20.00000000, 20.00000000, 0.00100000 );
    ADD_WIDGET_TOGGLE( "Activate Scoring", ref l_U247 );
    ADD_WIDGET_TOGGLE( "Update Rotation", ref l_U248 );
    ADD_WIDGET_TOGGLE( "Set Rotation Zero", ref l_U249 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Accuracy" );
    ADD_WIDGET_TOGGLE( "renderDebugDarts", ref l_U250 );
    ADD_WIDGET_FLOAT_SLIDER( "dartDistance", ref l_U251, -1.00000000, 1.00000000, 0.00500000 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Other" );
    ADD_WIDGET_TOGGLE( "instaWin", ref l_U402 );
    ADD_WIDGET_FLOAT_SLIDER( "sixAxisSensitivity", ref l_U327, -1.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fPitch", ref l_U266, -1.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fRoll", ref l_U267, -1.00000000, 1.00000000, 0.01000000 );
    END_WIDGET_GROUP();
    END_WIDGET_GROUP();
    GET_GAME_TIMER( ref l_U326 );
    l_U398 = 1;
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_2829(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_2865())
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

int sub_2865()
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

void sub_3090(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, boolean bParam9)
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

void sub_3452(int iParam0)
{
    int Result;

    switch (iParam0->_fU0)
    {
        case 0:
        Result = 1556470113;
        break;
        case 1:
        Result = -553099800;
        break;
        case 2:
        Result = 1250866419;
        break;
        case 3:
        Result = 637660122;
        break;
        case 4:
        Result = -1478529133;
        break;
        case 6:
        Result = -553099800;
        break;
        default:
        Result = -247954872;
        break;
    }
    return Result;
}

void sub_3624(int iParam0)
{
    int Result;

    switch (iParam0->_fU0)
    {
        case 0:
        Result = g_U64664;
        break;
        case 1:
        Result = g_U64665;
        break;
        case 2:
        Result = g_U64667;
        break;
        case 3:
        Result = g_U64666;
        break;
        case 4:
        Result = g_U64668;
        break;
        case 5:
        Result = g_U64669;
        break;
        case 6:
        Result = g_U64670;
        break;
        case 7:
        Result = g_U64671;
        break;
        case 8:
        Result = g_U64672;
        break;
        case 9:
        Result = g_U64673;
        break;
        default:
        Result = 50;
        break;
    }
    if (Result < 20)
    {
        Result = 50;
    }
    else if (Result < 40)
    {
        Result = 60;
    }
    else if (Result < 60)
    {
        Result = 80;
    }
    else if (Result < 80)
    {
        Result = 90;
    }
    else
    {
        Result = 100;
    };;;;
    return Result;
}

void sub_4438()
{
    sub_4447();
    DISPLAY_RADAR( 0 );
    return;
}

void sub_4447()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U10979 = 1;
    if (NOT (g_U32898._fU0 == 54))
    {
        g_U32898._fU24 = 1;
        g_U32898._fU28 = 0;
        if (NOT (g_U32898._fU8 == 9))
        {
            sub_4526();
        }
        return;
    }
    g_U10978 = 1;
    sub_4598();
    return;
}

void sub_4526()
{
    if (NOT (g_U32898._fU32 > 0))
    {
        return;
    }
    g_U32898._fU32--;
    return;
}

void sub_4598()
{
    g_U32896._fU4 = 0;
    return;
}

int sub_4653(unknown uParam0)
{
    (uParam0^) = g_U32898._fU0;
    if (g_U32898._fU0 == 54)
    {
        return 0;
    }
    return 1;
}

void sub_5358()
{
    string Result;

    Result = "name_niko";
    return Result;
}

void sub_5415(int iParam0)
{
    string Result;

    switch (iParam0->_fU0)
    {
        case 0:
        Result = "name_roman";
        break;
        case 1:
        Result = "name_packie";
        break;
        case 2:
        Result = "name_jacob";
        break;
        case 3:
        Result = "name_brucie";
        break;
        case 4:
        Result = "name_dwayne";
        break;
        default:
        Result = "name_opponent";
        break;
    }
    return Result;
}

void sub_5677(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6281()
{
    float fVar2;
    float fVar3;

    SET_TEXT_RENDER_ID( l_U375 );
    DRAW_SPRITE( l_U377, 0.25000000, 0.50000000, 0.50000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
    DRAW_SPRITE( l_U378, 0.13000000, 0.15000000, 0.20000000, 0.10000000, 0.00000000, 255, 255, 255, 255 );
    DRAW_SPRITE( l_U379, 0.37000000, 0.15000000, 0.20000000, 0.10000000, 0.00000000, 255, 255, 255, 255 );
    l_U296 = 0;
    l_U297 = 0;
    fVar2 = 0.14000000;
    fVar3 = 0.23000000;
    for ( l_U296 = 0; l_U296 < 2; l_U296++ )
    {
        for ( l_U297 = 0; l_U297 < 7; l_U297++ )
        {
            if (l_U336[l_U296][l_U297] != 0)
            {
                SET_TEXT_SCALE( 0.85000000, 1.40000000 );
                SET_TEXT_FONT( 5 );
                SET_TEXT_CENTRE( 1 );
                SET_TEXT_BACKGROUND( 0 );
                SET_TEXT_PROPORTIONAL( 1 );
                SET_TEXT_DROPSHADOW( 0, 255, 255, 255, 255 );
                DISPLAY_TEXT_WITH_NUMBER( fVar2, fVar3, "TURN_SCORE", l_U336[l_U296][l_U297] );
                fVar3 += 0.09000000;
            }
            if (l_U297 < 6)
            {
                if ((l_U336[l_U296][l_U297 + 1]) != 0)
                {
                    DRAW_SPRITE( l_U380, fVar2, fVar3 - 0.04500000, 0.12000000, 0.05000000, 0.00000000, 255, 255, 255, 255 );
                }
            }
        }
        fVar2 = 0.35000000;
        fVar3 = 0.23000000;
    }
    return;
}

void sub_6935()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    unknown[2] uVar8;
    unknown uVar11;
    unknown uVar12;

    array(ref uVar8, 2);
    while ((NOT bVar3) AND (NOT bVar2))
    {
        WAIT( 0 );
        SET_ENABLE_NEAR_CLIP_SCAN( 0 );
        GET_GAME_TIMER( ref iVar6 );
        if (iVar4 != 0)
        {
            iVar7 = iVar6 - iVar5;
        }
        if ((IS_SCREEN_FADED_IN()) AND ((IS_CONTROL_JUST_PRESSED( 2, 77 )) AND (iVar7 >= 1000)))
        {
            bVar3 = true;
        }
        else
        {
            switch (iVar4)
            {
                case 0:
                BEGIN_CAM_COMMANDS( ref uVar12 );
                CREATE_CAM( 14, ref uVar8[0] );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -0.70000000 + l_U391, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                SET_CAM_POS( uVar8[0], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -0.70000000 + l_U391, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                POINT_CAM_AT_OBJECT( uVar8[0], l_U257 );
                CREATE_CAM( 14, ref uVar8[1] );
                CREATE_CAM( 3, ref uVar11 );
                SET_CAM_ACTIVE( uVar8[0], 1 );
                SET_CAM_PROPAGATE( uVar8[0], 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_WIDESCREEN_BORDERS( 1 );
                for ( l_U296 = 0; l_U296 < 3; l_U296++ )
                {
                    CREATE_OBJECT( 937660317, l_U286._fU0, l_U286._fU4, l_U286._fU8, ref l_U161[l_U296]._fU0, 1 );
                    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 90.00000000, ref l_U298 );
                    SET_OBJECT_ROTATION( l_U161[l_U296]._fU0, 90.00000000 + l_U260, l_U298, 0.00000000 );
                    l_U161[l_U296]._fU80 = {90.00000000 + l_U260, l_U298, 0.00000000};
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U161[l_U296]._fU0, l_U290 );
                }
                PRINT_NOW( "TUTORIAL_1", 3000, 1 );
                SETTIMERA( 0 );
                SETTIMERB( 0 );
                GET_GAME_TIMER( ref iVar5 );
                DO_SCREEN_FADE_IN( 500 );
                iVar4++;
                break;
                case 1:
                if (TIMERA() > 3000)
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -0.70000000 + l_U391, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    SET_CAM_POS( uVar8[1], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, 0.00000000 + l_U391, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    POINT_CAM_AT_COORD( uVar8[1], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    SET_CAM_ACTIVE( uVar8[1], 1 );
                    SET_CAM_PROPAGATE( uVar8[1], 0 );
                    SET_CAM_ACTIVE( uVar8[0], 0 );
                    SET_CAM_PROPAGATE( uVar8[0], 0 );
                    SET_CAM_INTERP_STYLE_CORE( uVar11, uVar8[0], uVar8[1], 2000, 0 );
                    SET_CAM_ACTIVE( uVar11, 1 );
                    SET_CAM_PROPAGATE( uVar11, 1 );
                    PRINT( "TUTORIAL_2", 4000, 1 );
                    iVar4++;
                }
                break;
                case 2:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.12100000, -0.35000000, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    SET_CAM_POS( uVar8[0], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.12300000, -0.03600000, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    POINT_CAM_AT_COORD( uVar8[0], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    SET_CAM_ACTIVE( uVar8[0], 1 );
                    SET_CAM_PROPAGATE( uVar8[0], 0 );
                    SET_CAM_ACTIVE( uVar8[1], 0 );
                    SET_CAM_PROPAGATE( uVar8[1], 0 );
                    SET_CAM_INTERP_STYLE_CORE( uVar11, uVar8[1], uVar8[0], 2000, 0 );
                    PRINT( "TUTORIAL_3", 5000, 1 );
                    iVar4++;
                }
                break;
                case 3:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.18600000, -0.35000000, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    SET_CAM_POS( uVar8[1], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.25400000, 0.07000000, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    POINT_CAM_AT_COORD( uVar8[1], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    SET_CAM_ACTIVE( uVar8[1], 1 );
                    SET_CAM_PROPAGATE( uVar8[1], 0 );
                    SET_CAM_ACTIVE( uVar8[0], 0 );
                    SET_CAM_PROPAGATE( uVar8[0], 0 );
                    SET_CAM_INTERP_STYLE_CORE( uVar11, uVar8[0], uVar8[1], 2000, 0 );
                    PRINT( "TUTORIAL_4", 4000, 1 );
                    iVar4++;
                }
                break;
                case 4:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.17500000, -0.35000000, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    SET_CAM_POS( uVar8[0], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.19000000, 0.00300000, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    POINT_CAM_AT_COORD( uVar8[0], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    SET_CAM_ACTIVE( uVar8[0], 1 );
                    SET_CAM_PROPAGATE( uVar8[0], 0 );
                    SET_CAM_ACTIVE( uVar8[1], 0 );
                    SET_CAM_PROPAGATE( uVar8[1], 0 );
                    SET_CAM_INTERP_STYLE_CORE( uVar11, uVar8[1], uVar8[0], 2000, 0 );
                    PRINT( "TUTORIAL_5", 5000, 1 );
                    SETTIMERB( 0 );
                    iVar4++;
                }
                break;
                case 5:
                if (TIMERB() > 2000)
                {
                    sub_8896( 0 );
                    iVar4++;
                }
                break;
                case 6:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.10700000, -0.35000000, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    SET_CAM_POS( uVar8[1], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.11300000, -0.00400000, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    POINT_CAM_AT_COORD( uVar8[1], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    SET_CAM_ACTIVE( uVar8[1], 1 );
                    SET_CAM_PROPAGATE( uVar8[1], 0 );
                    SET_CAM_ACTIVE( uVar8[0], 0 );
                    SET_CAM_PROPAGATE( uVar8[0], 0 );
                    SET_CAM_INTERP_STYLE_CORE( uVar11, uVar8[0], uVar8[1], 2000, 0 );
                    PRINT( "TUTORIAL_6", 4500, 1 );
                    SETTIMERB( 0 );
                    iVar4++;
                }
                break;
                case 7:
                if (TIMERB() > 2000)
                {
                    sub_8896( 1 );
                    iVar4++;
                }
                break;
                case 8:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -0.35000000, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    SET_CAM_POS( uVar8[0], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, 0.00000000, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    POINT_CAM_AT_COORD( uVar8[0], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    SET_CAM_ACTIVE( uVar8[0], 1 );
                    SET_CAM_PROPAGATE( uVar8[0], 0 );
                    SET_CAM_ACTIVE( uVar8[1], 0 );
                    SET_CAM_PROPAGATE( uVar8[1], 0 );
                    SET_CAM_INTERP_STYLE_CORE( uVar11, uVar8[1], uVar8[0], 2000, 0 );
                    PRINT( "TUTORIAL_7", 6000, 1 );
                    iVar4++;
                }
                break;
                case 9:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -0.70000000 + l_U391, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    SET_CAM_POS( uVar8[1], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, 0.00000000, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    POINT_CAM_AT_COORD( uVar8[1], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    SET_CAM_ACTIVE( uVar8[1], 1 );
                    SET_CAM_PROPAGATE( uVar8[1], 0 );
                    SET_CAM_ACTIVE( uVar8[0], 0 );
                    SET_CAM_PROPAGATE( uVar8[0], 0 );
                    SET_CAM_INTERP_STYLE_CORE( uVar11, uVar8[0], uVar8[1], 2000, 0 );
                    PRINT( "TUTORIAL_8", 4500, 1 );
                    iVar4++;
                }
                break;
                case 10:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -0.35000000, 0.18000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    SET_CAM_POS( uVar8[0], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, 0.00000000, 0.20000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    POINT_CAM_AT_COORD( uVar8[0], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    SET_CAM_ACTIVE( uVar8[0], 1 );
                    SET_CAM_PROPAGATE( uVar8[0], 0 );
                    SET_CAM_ACTIVE( uVar8[1], 0 );
                    SET_CAM_PROPAGATE( uVar8[1], 0 );
                    SET_CAM_INTERP_STYLE_CORE( uVar11, uVar8[1], uVar8[0], 2000, 0 );
                    PRINT( "TUTORIAL_9", 6500, 1 );
                    SETTIMERB( 0 );
                    INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                    iVar4++;
                }
                break;
                case 11:
                if (TIMERB() > 2000)
                {
                    sub_8896( 2 );
                    iVar4++;
                }
                break;
                case 12:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    bVar2 = true;
                }
                break;
                default: break;
            }
        }
    }
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    for ( l_U296 = 0; l_U296 < 3; l_U296++ )
    {
        if (DOES_OBJECT_EXIST( l_U161[l_U296]._fU0 ))
        {
            DELETE_OBJECT( ref l_U161[l_U296]._fU0 );
        }
    }
    CLEAR_PRINTS();
    SET_WIDESCREEN_BORDERS( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_ACTIVE( uVar11, 0 );
    SET_CAM_PROPAGATE( uVar11, 0 );
    SET_CAM_ACTIVE( uVar8[0], 0 );
    SET_CAM_PROPAGATE( uVar8[0], 0 );
    SET_CAM_ACTIVE( uVar8[1], 0 );
    SET_CAM_PROPAGATE( uVar8[1], 0 );
    DESTROY_CAM( uVar11 );
    DESTROY_CAM( uVar8[0] );
    DESTROY_CAM( uVar8[1] );
    END_CAM_COMMANDS( ref uVar12 );
    DELETE_OBJECT( ref l_U161[0]._fU0 );
    DELETE_OBJECT( ref l_U161[1]._fU0 );
    DELETE_OBJECT( ref l_U161[2]._fU0 );
    g_U8667 = 1;
    return;
}

void sub_8896(int iParam0)
{
    boolean bVar3;
    vector vVar4;
    unknown uVar7;
    float fVar8;
    unknown uVar9;

    bVar3 = false;
    fVar8 = 0.04000000;
    SET_OBJECT_COORDINATES( l_U161[iParam0]._fU0, l_U274._fU0, l_U274._fU4, l_U274._fU8 );
    l_U161[iParam0]._fU8 = {l_U277._fU0, l_U277._fU4, l_U277._fU8};
    l_U161[iParam0]._fU96 = 0;
    l_U161[iParam0]._fU100 = 1;
    if (iParam0 == 0)
    {
        l_U161[iParam0]._fU32._fU0 = 0.21100000;
        l_U161[iParam0]._fU32._fU4 = -0.23000000;
        l_U161[iParam0]._fU32._fU8 = 0.01800000;
    }
    else if (iParam0 == 1)
    {
        l_U161[iParam0]._fU32._fU0 = 0.13100000;
        l_U161[iParam0]._fU32._fU4 = -0.23000000;
        l_U161[iParam0]._fU32._fU8 = 0.00100000;
    }
    else
    {
        l_U161[iParam0]._fU32._fU0 = -0.00900000;
        l_U161[iParam0]._fU32._fU4 = -0.23000000;
        l_U161[iParam0]._fU32._fU8 = 0.21600000;
    }
    vVar4 = {l_U277 - l_U2[l_U331][l_U332]._fU32};
    uVar7 = VMAG( vVar4 );
    l_U161[iParam0]._fU20 = {vVar4 / uVar7};
    GET_HEADING_FROM_VECTOR_2D( l_U161[iParam0]._fU20._fU0, l_U161[iParam0]._fU20._fU4, ref l_U298 );
    l_U161[iParam0]._fU80._fU8 = l_U298 - 180.00000000;
    while (NOT bVar3)
    {
        WAIT( 0 );
        if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U257 )))
        {
            sub_2187( 3 );
            sub_206();
        }
        sub_2368();
        GET_FRAME_TIME( ref uVar9 );
        l_U161[iParam0]._fU8 = {l_U161[iParam0]._fU8 - ((l_U161[iParam0]._fU20 * uVar9) * l_U325)};
        if (l_U161[iParam0]._fU8._fU4 > (l_U161[iParam0]._fU32._fU4 - fVar8))
        {
            l_U161[iParam0]._fU96 = 1;
            l_U161[iParam0]._fU100 = 0;
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U161[iParam0]._fU32._fU0, l_U161[iParam0]._fU32._fU4 + l_U391, l_U161[iParam0]._fU32._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
            SET_OBJECT_COORDINATES( l_U161[iParam0]._fU0, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
            bVar3 = true;
            if (iParam0 == 0)
            {
                PLAY_SOUND_FROM_OBJECT( l_U356, "DARTS_HIT_BOARD", l_U161[iParam0]._fU0 );
            }
            else if (iParam0 == 1)
            {
                PLAY_SOUND_FROM_OBJECT( l_U358, "DARTS_HIT_TRIPLE", l_U161[iParam0]._fU0 );
            }
            else
            {
                PLAY_SOUND_FROM_OBJECT( l_U357, "DARTS_HIT_DOUBLE", l_U161[iParam0]._fU0 );
            }
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U161[iParam0]._fU8._fU0, l_U161[iParam0]._fU8._fU4 + l_U391, l_U161[iParam0]._fU8._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
            SET_OBJECT_COORDINATES( l_U161[iParam0]._fU0, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
            l_U161[iParam0]._fU80._fU4 += 1000.00000000 * uVar9;
            SET_OBJECT_ROTATION( l_U161[iParam0]._fU0, l_U161[iParam0]._fU80._fU0, l_U161[iParam0]._fU80._fU4, l_U161[iParam0]._fU80._fU8 );
        }
    }
    return;
}

void sub_11665()
{
    if (GET_IS_WIDESCREEN())
    {
        l_U407 = {-0.20000000, -0.98000000, 0.00000000};
        l_U410 = {-0.22000000, l_U391, 0.00000000};
        l_U397 = 1;
    }
    else
    {
        l_U407 = {0.00000000, -0.61000000 + l_U391, 0.00000000};
        l_U410 = {0.00000000, 0.00000000, 0.00000000};
        l_U413 = {0.00000000, -0.61000000 + l_U391, 0.00000000};
        l_U416 = {-0.26000000, 0.00000000, 0.00000000};
        l_U397 = 0;
    }
    BEGIN_CAM_COMMANDS( ref l_U295 );
    CREATE_CAM( 3, ref l_U294 );
    CREATE_CAM( 14, ref l_U291 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U407._fU0, l_U407._fU4, l_U407._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    SET_CAM_POS( l_U291, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U410._fU0, l_U410._fU4, l_U410._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    POINT_CAM_AT_COORD( l_U291, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
    if (l_U397)
    {
        SET_CAM_FOV( l_U291, 45.00000000 );
    }
    CREATE_CAM( 14, ref l_U292 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U413._fU0, l_U413._fU4, l_U413._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    SET_CAM_POS( l_U292, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U416._fU0, l_U416._fU4, l_U416._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    POINT_CAM_AT_COORD( l_U292, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
    if (l_U397)
    {
        SET_CAM_FOV( l_U292, 45.00000000 );
    }
    CREATE_CAM( 14, ref l_U293 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U407._fU0, l_U407._fU4, l_U407._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    if ((l_U260 < 1) || (l_U260 > 359))
    {
        SET_CAM_POS( l_U293, l_U300._fU0 + 0.40000000, l_U300._fU4 - 2.90000000, l_U300._fU8 - 0.10000000 );
    }
    else
    {
        SET_CAM_POS( l_U293, l_U300._fU0 - 0.40000000, l_U300._fU4 + 2.90000000, l_U300._fU8 - 0.10000000 );
    }
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U410._fU0, l_U410._fU4, l_U410._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    POINT_CAM_AT_COORD( l_U293, l_U300._fU0, l_U300._fU4, l_U300._fU8 - 0.40000000 );
    if (l_U397)
    {
        SET_CAM_FOV( l_U293, 45.00000000 );
    }
    SET_CAM_ACTIVE( l_U291, 1 );
    SET_CAM_PROPAGATE( l_U291, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return;
}

void sub_14422()
{
    l_U336[0][0] = 301;
    l_U336[1][0] = 301;
    for ( l_U296 = 0; l_U296 <= 1; l_U296++ )
    {
        for ( l_U297 = 1; l_U297 <= 6; l_U297++ )
        {
            l_U336[l_U296][l_U297] = 0;
        }
    }
    l_U328[0] = 301;
    l_U328[1] = 301;
    DELETE_OBJECT( ref l_U2[0][0]._fU0 );
    DELETE_OBJECT( ref l_U2[0][1]._fU0 );
    DELETE_OBJECT( ref l_U2[0][2]._fU0 );
    DELETE_OBJECT( ref l_U2[1][0]._fU0 );
    DELETE_OBJECT( ref l_U2[1][1]._fU0 );
    DELETE_OBJECT( ref l_U2[1][2]._fU0 );
    sub_6281();
    if (l_U331 == 0)
    {
        l_U331 = 1;
    }
    else
    {
        l_U331 = 0;
    }
    l_U332 = 0;
    l_U354 = 0;
    l_U369 = 0;
    PRINT_WITH_NUMBER_NOW( "SWITCH_PLAYER", l_U328[l_U331], 5000, 0 );
    l_U0 = 1;
    l_U1 = 0;
    return;
}

void sub_14797()
{
    sub_14806();
    switch (l_U1)
    {
        case 0:
        if (l_U331 == 0)
        {
            sub_14968();
        }
        else
        {
            sub_20425();
            sub_20924();
        }
        break;
        case 1:
        sub_21945();
        break;
        case 2:
        sub_23198();
        sub_26709();
        break;
        case 3:
        CLEAR_HELP();
        sub_36776();
        break;
        default: break;
    }
    return;
}

void sub_14806()
{
    if (NOT l_U421)
    {
        if (NOT (IS_CONTROL_PRESSED( 2, 77 )))
        {
            l_U421 = 1;
        }
    }
    if (l_U331 == 1)
    {
        if (((IS_CONTROL_JUST_PRESSED( 2, 4 )) AND (NOT IS_USING_CONTROLLER())) || ((l_U421) AND (IS_CONTROL_PRESSED( 2, 77 ))))
        {
            l_U1 = 3;
        }
    }
    return;
}

void sub_14968()
{
    int iVar2;

    if (l_U423)
    {
        if (TIMERB() > 600)
        {
            l_U423 = 0;
            sub_15009();
        }
    }
    else if (((NOT (IS_CONTROL_JUST_PRESSED( 2, 4 ))) AND (NOT IS_USING_CONTROLLER())) || ((NOT (IS_CONTROL_JUST_PRESSED( 2, 77 ))) AND (IS_USING_CONTROLLER())))
    {
        l_U421 = 1;
        l_U382 = 1;
        if (NOT l_U256)
        {
            GET_GAME_TIMER( ref iVar2 );
            if (((iVar2 - l_U255) < 15000) AND ((iVar2 - l_U255) > 12000))
            {
                sub_15730();
            }
        }
        if (NOT l_U392)
        {
            sub_15939();
        }
        else
        {
            sub_16904();
            sub_17758();
            sub_20205();
        }
    }
    else if ((l_U382) AND (l_U421))
    {
        if (NOT l_U423)
        {
            SETTIMERB( 0 );
            l_U423 = 1;
        }
    };;;
    return;
}

void sub_15009()
{
    l_U374 = 0;
    l_U373 = 0;
    l_U372 = 0.10000000;
    l_U370 = 0.06000000;
    l_U371 = 0.08000000;
    l_U2[l_U331][l_U332]._fU96 = 0;
    l_U2[l_U331][l_U332]._fU100 = 1;
    sub_15108();
    l_U256 = 0;
    l_U382 = 0;
    l_U392 = 0;
    l_U1 = 1;
    PLAY_SOUND_FROM_OBJECT( l_U364, "DARTS_THROW", l_U259 );
    DELETE_OBJECT( ref l_U258 );
    CLEAR_HELP();
    return;
}

void sub_15108()
{
    vector vVar2;
    unknown uVar5;
    float fVar6;

    l_U2[l_U331][l_U332]._fU32._fU4 = -0.23000000;
    vVar2 = {l_U277 - l_U2[l_U331][l_U332]._fU32};
    uVar5 = VMAG( vVar2 );
    l_U2[l_U331][l_U332]._fU20 = {vVar2 / uVar5};
    GET_HEADING_FROM_VECTOR_2D( l_U2[l_U331][l_U332]._fU20._fU0, l_U2[l_U331][l_U332]._fU20._fU4, ref l_U298 );
    l_U2[l_U331][l_U332]._fU80._fU8 = l_U298 - 180.00000000;
    fVar6 = (TAN( l_U2[l_U331][l_U332]._fU80._fU8 )) * l_U251;
    l_U2[l_U331][l_U332]._fU44 = {l_U2[l_U331][l_U332]._fU32};
    l_U2[l_U331][l_U332]._fU44._fU0 += fVar6;
    vVar2 = {l_U277 - l_U2[l_U331][l_U332]._fU44};
    uVar5 = VMAG( vVar2 );
    l_U2[l_U331][l_U332]._fU20 = {vVar2 / uVar5};
    return;
}

void sub_15730()
{
    if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playBoredContexts()" );
        PRINTNL();
    }
    if (l_U366)
    {
        if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BORED)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_BORED", 1, 1, 2 );
        l_U256 = 1;
    }
    return;
}

void sub_15939()
{
    l_U300 = {0, 0, 0};
    GENERATE_RANDOM_FLOAT_IN_RANGE( -0.10000000, 0.10000000, ref l_U298 );
    l_U300._fU0 += l_U298;
    GENERATE_RANDOM_FLOAT_IN_RANGE( -0.10000000, 0.10000000, ref l_U298 );
    l_U300._fU8 += l_U298;
    WAIT( 0 );
    CREATE_OBJECT( 2063078697, l_U280._fU0 + l_U300._fU0, l_U280._fU4, l_U280._fU8 + l_U300._fU8, ref l_U258, 1 );
    l_U2[l_U331][l_U332]._fU32 = {l_U283 + l_U300};
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U258, l_U290 );
    SET_OBJECT_ROTATION( l_U258, 90.00000000 + l_U260, 0.00000000, 0.00000000 );
    CREATE_OBJECT( l_U2[l_U331][l_U332]._fU4, l_U274._fU0, l_U274._fU4, l_U274._fU8, ref l_U2[l_U331][l_U332]._fU0, 1 );
    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 90.00000000, ref l_U298 );
    SET_OBJECT_ROTATION( l_U2[l_U331][l_U332]._fU0, 90.00000000 + l_U260, l_U298, 0.00000000 );
    l_U2[l_U331][l_U332]._fU80 = {90.00000000 + l_U260, l_U298, 0.00000000};
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U2[l_U331][l_U332]._fU0, l_U290 );
    l_U2[l_U331][l_U332]._fU8 = {l_U277._fU0, l_U277._fU4, l_U277._fU8};
    sub_16454();
    GET_GAME_TIMER( ref l_U255 );
    l_U256 = 0;
    l_U392 = 1;
    return;
}

void sub_16454()
{
    if ((l_U328[l_U331] < 80) AND ((NOT l_U384[0]) AND (NOT l_U383)))
    {
        PRINT_HELP_FOREVER( "HELP_DOUBLE" );
        l_U384[0] = 1;
        l_U383 = 1;
    }
    if ((NOT l_U384[5]) AND ((l_U384[4]) AND (NOT l_U383)))
    {
        if (NOT l_U397)
        {
            if (IS_USING_CONTROLLER())
            {
                PRINT_HELP_FOREVER( "HELP_SCOREBOARD" );
            }
            else
            {
                PRINT_HELP_FOREVER( "HELP_SCORE_PC" );
            }
        }
        l_U384[5] = 1;
    }
    if ((NOT l_U384[4]) AND ((l_U384[3]) AND (NOT l_U383)))
    {
        PRINT_HELP_FOREVER( "HELP_SPEED" );
        l_U384[4] = 1;
    }
    if ((NOT l_U384[3]) AND ((l_U384[2]) AND (NOT l_U383)))
    {
        PRINT_HELP_FOREVER( "HELP_STEADY" );
        l_U384[3] = 1;
    }
    if ((NOT l_U384[2]) AND (NOT l_U383))
    {
        if (# -NULL-0xc238b5( 5 ))
        {
            PRINT_HELP_FOREVER( "HELP_THROW6" );
        }
        else
        {
            PRINT_HELP_FOREVER( "HELP_THROW" );
        }
        l_U384[2] = 1;
    }
    return;
}

void sub_16904()
{
    if (((IS_CONTROL_PRESSED( 2, 1 )) AND (NOT IS_USING_CONTROLLER())) || (IS_BUTTON_PRESSED( 0, 6 )))
    {
        l_U372 = 0.30000000;
    }
    else
    {
        l_U372 = 0.10000000;
    }
    if ((NOT IS_USING_CONTROLLER()) AND (# -NULL-0xc27bfa()))
    {
        l_U372 *= 2.50000000;
    }
    if (((IS_CONTROL_PRESSED( 2, 2 )) AND (NOT IS_USING_CONTROLLER())) || (IS_BUTTON_PRESSED( 0, 7 )))
    {
        if (l_U374)
        {
            if (TIMERA() > 1000)
            {
                l_U370 = 0.06000000;
                l_U371 = 0.08000000;
                l_U372 = 0.10000000;
                DELETE_OBJECT( ref l_U258 );
                CREATE_OBJECT( 2063078697, l_U2[l_U331][l_U332]._fU32._fU0, l_U2[l_U331][l_U332]._fU32._fU4, l_U2[l_U331][l_U332]._fU32._fU8, ref l_U258, 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U258, l_U290 );
                SET_OBJECT_ROTATION( l_U258, 90.00000000 + l_U260, 0.00000000, 0.00000000 );
                PLAY_SOUND_FROM_OBJECT( l_U362, "DARTS_INHALE", l_U259 );
                l_U374 = 0;
            }
        }
        else if (l_U373 < 1)
        {
            l_U370 = 0.03000000;
            l_U371 = 0.05000000;
            l_U372 = 0.10000000;
            SETTIMERA( 0 );
            DELETE_OBJECT( ref l_U258 );
            CREATE_OBJECT( -172899370, l_U2[l_U331][l_U332]._fU32._fU0, l_U2[l_U331][l_U332]._fU32._fU4, l_U2[l_U331][l_U332]._fU32._fU8, ref l_U258, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U258, l_U290 );
            SET_OBJECT_ROTATION( l_U258, 90.00000000 + l_U260, 0.00000000, 0.00000000 );
            PLAY_SOUND_FROM_OBJECT( l_U363, "DARTS_EXHALE", l_U259 );
            l_U374 = 1;
            l_U373++;
        }
    }
    else if (l_U374)
    {
        l_U370 = 0.06000000;
        l_U371 = 0.08000000;
        l_U372 = 0.10000000;
        DELETE_OBJECT( ref l_U258 );
        CREATE_OBJECT( 2063078697, l_U2[l_U331][l_U332]._fU32._fU0, l_U2[l_U331][l_U332]._fU32._fU4, l_U2[l_U331][l_U332]._fU32._fU8, ref l_U258, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U258, l_U290 );
        SET_OBJECT_ROTATION( l_U258, 90.00000000 + l_U260, 0.00000000, 0.00000000 );
        l_U374 = 0;
    }
    return;
}

void sub_17758()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    GET_FRAME_TIME( ref uVar4 );
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar5, ref uVar6, ref uVar7, ref uVar8 );
    if (uVar5 > 40.00000000)
    {
        if ((l_U2[l_U331][l_U332]._fU32._fU0 + (l_U372 * uVar4)) < 0.33000000)
        {
            l_U2[l_U331][l_U332]._fU32._fU0 += l_U372 * uVar4;
            bVar2 = true;
        }
    }
    else if (uVar5 < -40.00000000)
    {
        if ((l_U2[l_U331][l_U332]._fU32._fU0 - (l_U372 * uVar4)) > -0.33000000)
        {
            l_U2[l_U331][l_U332]._fU32._fU0 -= l_U372 * uVar4;
            bVar2 = true;
        }
    }
    if (uVar6 > 40.00000000)
    {
        if ((l_U2[l_U331][l_U332]._fU32._fU8 - (l_U372 * uVar4)) > -0.33000000)
        {
            l_U2[l_U331][l_U332]._fU32._fU8 -= l_U372 * uVar4;
            bVar2 = true;
        }
    }
    else if (uVar6 < -40.00000000)
    {
        if ((l_U2[l_U331][l_U332]._fU32._fU8 + (l_U372 * uVar4)) < 0.33000000)
        {
            l_U2[l_U331][l_U332]._fU32._fU8 += l_U372 * uVar4;
            bVar2 = true;
        }
    }
    if (NOT bVar2)
    {
        GET_MOUSE_INPUT( ref uVar9, ref uVar10 );
        if (uVar9 > 1.00000000)
        {
            if ((l_U2[l_U331][l_U332]._fU32._fU0 + (l_U372 * uVar4)) < 0.33000000)
            {
                l_U2[l_U331][l_U332]._fU32._fU0 += l_U372 * uVar4;
                bVar2 = true;
            }
        }
        else if (uVar9 < -1.00000000)
        {
            if ((l_U2[l_U331][l_U332]._fU32._fU0 - (l_U372 * uVar4)) > -0.33000000)
            {
                l_U2[l_U331][l_U332]._fU32._fU0 -= l_U372 * uVar4;
                bVar2 = true;
            }
        }
        if (uVar10 > 1.00000000)
        {
            if ((l_U2[l_U331][l_U332]._fU32._fU8 - (l_U372 * uVar4)) > -0.33000000)
            {
                l_U2[l_U331][l_U332]._fU32._fU8 -= l_U372 * uVar4;
                bVar2 = true;
            }
        }
        else if (uVar10 < -1.00000000)
        {
            if ((l_U2[l_U331][l_U332]._fU32._fU8 + (l_U372 * uVar4)) < 0.33000000)
            {
                l_U2[l_U331][l_U332]._fU32._fU8 += l_U372 * uVar4;
                bVar2 = true;
            }
        }
    }
    if (NOT bVar2)
    {
        if (# -NULL-0xc238b5( 5 ))
        {
            if (GET_PAD_PITCH_ROLL( 0, ref l_U266, ref l_U267 ))
            {
                if (l_U267 > l_U327)
                {
                    if ((l_U2[l_U331][l_U332]._fU32._fU0 + (l_U372 * uVar4)) < 0.33000000)
                    {
                        l_U2[l_U331][l_U332]._fU32._fU0 += l_U372 * uVar4;
                    }
                }
                else if (l_U267 < -l_U327)
                {
                    if ((l_U2[l_U331][l_U332]._fU32._fU0 - (l_U372 * uVar4)) > -0.33000000)
                    {
                        l_U2[l_U331][l_U332]._fU32._fU0 -= l_U372 * uVar4;
                    }
                }
                if (l_U266 > l_U327)
                {
                    if ((l_U2[l_U331][l_U332]._fU32._fU8 - (l_U372 * uVar4)) > -0.33000000)
                    {
                        l_U2[l_U331][l_U332]._fU32._fU8 -= l_U372 * uVar4;
                    }
                }
                else if (l_U266 < -l_U327)
                {
                    if ((l_U2[l_U331][l_U332]._fU32._fU8 + (l_U372 * uVar4)) < 0.33000000)
                    {
                        l_U2[l_U331][l_U332]._fU32._fU8 += l_U372 * uVar4;
                    }
                }
            }
        }
    }
    l_U2[l_U331][l_U332]._fU68 = {l_U2[l_U331][l_U332]._fU32};
    if (l_U264 != 0)
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000 - l_U371, 0.00000000 + l_U371, ref l_U299 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000 - l_U370, 0.00000000 + l_U370, ref l_U298 );
        if (((l_U2[l_U331][l_U332]._fU32._fU0 + (l_U298 * uVar4)) < 0.33000000) AND ((l_U2[l_U331][l_U332]._fU32._fU0 + (l_U298 * uVar4)) > -0.33000000))
        {
            if (l_U264 == 2)
            {
                l_U2[l_U331][l_U332]._fU32._fU0 += l_U299 * uVar4;
                l_U2[l_U331][l_U332]._fU68._fU0 = l_U2[l_U331][l_U332]._fU32._fU0;
                l_U2[l_U331][l_U332]._fU68._fU0 += l_U298 * uVar4;
            }
            else
            {
                l_U2[l_U331][l_U332]._fU32._fU0 += l_U298 * uVar4;
            }
        }
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000 - l_U371, 0.00000000 + l_U371, ref l_U299 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000 - l_U370, 0.00000000 + l_U370, ref l_U298 );
        if (((l_U2[l_U331][l_U332]._fU32._fU8 + (l_U298 * uVar4)) < 0.33000000) AND ((l_U2[l_U331][l_U332]._fU32._fU8 + (l_U298 * uVar4)) > -0.33000000))
        {
            if (l_U264 == 2)
            {
                l_U2[l_U331][l_U332]._fU32._fU8 += l_U299 * uVar4;
                l_U2[l_U331][l_U332]._fU68._fU8 = l_U2[l_U331][l_U332]._fU32._fU8;
                l_U2[l_U331][l_U332]._fU68._fU8 += l_U298 * uVar4;
            }
            else
            {
                l_U2[l_U331][l_U332]._fU32._fU8 += l_U298 * uVar4;
            }
        }
    }
    return;
}

void sub_20205()
{
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U2[l_U331][l_U332]._fU68._fU0, l_U2[l_U331][l_U332]._fU68._fU4 + l_U391, l_U2[l_U331][l_U332]._fU68._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    SET_OBJECT_COORDINATES( l_U258, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
    return;
}

void sub_20425()
{
    l_U334 = 0;
    l_U335 = 0;
    if (l_U328[l_U331] > 110)
    {
        l_U334 = 20;
        l_U335 = 3;
    }
    else if (l_U328[l_U331] > 60)
    {
        if ((l_U328[l_U331] mod 2) == 1)
        {
            l_U334 = 19;
            l_U335 = 3;
        }
        else
        {
            l_U334 = 20;
            l_U335 = 3;
        }
    }
    else if (l_U328[l_U331] < 61)
    {
        if (l_U328[l_U331] == 50)
        {
            l_U334 = 50;
            l_U335 = 1;
        }
        else if (l_U328[l_U331] > 52)
        {
            l_U334 = l_U328[l_U331] - 40;
            l_U335 = 1;
        }
        else if (l_U328[l_U331] > 40)
        {
            l_U334 = l_U328[l_U331] - 32;
            l_U335 = 1;
        }
        else if ((l_U328[l_U331] mod 2) == 0)
        {
            l_U296 = 1;
            for ( l_U296 = 0; l_U296 < 20; l_U296++ )
            {
                l_U334 = l_U328[l_U331] / 2;
                l_U335 = 2;
            }
        }
        else
        {
            l_U296 = 32;
            while ((l_U296 > 1) AND (l_U334 == 0))
            {
                if (l_U328[l_U331] > l_U296)
                {
                    l_U334 = l_U328[l_U331] - l_U296;
                    l_U335 = 1;
                }
                l_U296 = l_U296 / 2;
            }
        };;;;
    };;;
    return;
}

void sub_20924()
{
    float fVar2;
    float fVar3;
    float fVar4;

    if (l_U334 == 50)
    {
        fVar2 = 0.00000000;
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref fVar3 );
    }
    else if (l_U334 == 25)
    {
        fVar2 = 0.14000000;
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref fVar3 );
    }
    else if (l_U335 == 3)
    {
        fVar2 = 0.13450000;
    }
    else if (l_U335 == 2)
    {
        fVar2 = 0.21800000;
    }
    else
    {
        fVar2 = 0.18000000;
    }
    fVar4 = 0.00000000;
    l_U296 = 0;
    for ( l_U296 = 0; l_U296 < 21; l_U296++ )
    {
        if (l_U334 == l_U303[l_U296])
        {
            fVar3 = fVar4;
        }
        fVar4 += 18.00000000;
    };;;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref l_U296 );
    if (l_U296 < l_U265)
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -60.00000000, 60.00000000, ref l_U298 );
    }
    else
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -100.00000000, 100.00000000, ref l_U298 );
        if (l_U298 > 0)
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( -200.00000000, -60.00000000, ref l_U298 );
        }
        else
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( 60.00000000, 200.00000000, ref l_U298 );
        }
    }
    l_U298 /= 10;
    fVar3 += l_U298;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref l_U296 );
    if (l_U296 < l_U265)
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.30000000, 0.30000000, ref l_U298 );
    }
    else
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -100.00000000, 100.00000000, ref l_U298 );
        if (l_U298 > 0)
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( -1.00000000, -0.30000000, ref l_U298 );
        }
        else
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( 0.30000000, 1.00000000, ref l_U298 );
        }
    }
    l_U298 /= 10;
    fVar2 += l_U298;
    l_U2[l_U331][l_U332]._fU32._fU0 = (SIN( fVar3 )) * fVar2;
    l_U2[l_U331][l_U332]._fU32._fU4 = -0.23000000;
    l_U2[l_U331][l_U332]._fU32._fU8 = (COS( fVar3 )) * fVar2;
    if (l_U1 == 3)
    {
        sub_15108();
    }
    else
    {
        l_U2[l_U331][l_U332]._fU96 = 0;
        l_U2[l_U331][l_U332]._fU100 = 1;
        sub_15108();
        CREATE_OBJECT( l_U2[l_U331][l_U332]._fU4, l_U274._fU0, l_U274._fU4, l_U274._fU8, ref l_U2[l_U331][l_U332]._fU0, 1 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 90.00000000, ref l_U298 );
        SET_OBJECT_ROTATION( l_U2[l_U331][l_U332]._fU0, 90.00000000 + l_U260, l_U298, 0.00000000 );
        l_U2[l_U331][l_U332]._fU80 = {90.00000000 + l_U260, l_U298, 0.00000000};
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U2[l_U331][l_U332]._fU0, l_U290 );
        l_U2[l_U331][l_U332]._fU8 = {l_U277._fU0, l_U277._fU4, l_U277._fU8};
        l_U1 = 1;
    }
    return;
}

void sub_21945()
{
    float fVar2;
    unknown uVar3;

    fVar2 = 0.04000000;
    if (l_U403)
    {
        sub_22013( "DART MOVING FROM...", ref l_U2[l_U331][l_U332]._fU8 );
    }
    GET_FRAME_TIME( ref uVar3 );
    l_U2[l_U331][l_U332]._fU8 = {l_U2[l_U331][l_U332]._fU8 - ((l_U2[l_U331][l_U332]._fU20 * uVar3) * l_U325)};
    if (l_U403)
    {
        sub_22013( "TO...", ref l_U2[l_U331][l_U332]._fU8 );
    }
    if (l_U2[l_U331][l_U332]._fU8._fU4 > (l_U2[l_U331][l_U332]._fU32._fU4 - fVar2))
    {
        l_U2[l_U331][l_U332]._fU96 = 1;
        l_U2[l_U331][l_U332]._fU100 = 0;
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U2[l_U331][l_U332]._fU44._fU0, l_U2[l_U331][l_U332]._fU44._fU4 + l_U391, l_U2[l_U331][l_U332]._fU44._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
        SET_OBJECT_COORDINATES( l_U2[l_U331][l_U332]._fU0, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
        if (l_U250)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U2[l_U331][l_U332]._fU32._fU0, l_U2[l_U331][l_U332]._fU32._fU4 + l_U391, l_U2[l_U331][l_U332]._fU32._fU8 - 0.10000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
            CREATE_OBJECT( l_U2[l_U331][l_U332]._fU4, l_U300._fU0, l_U300._fU4, l_U300._fU8, ref l_U161[l_U332]._fU0, 1 );
            SET_OBJECT_ROTATION( l_U161[l_U332]._fU0, 90.00000000, 0.00000000, 0.00000000 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U161[l_U332]._fU0, l_U290 );
            PRINTNL();
            PRINTSTRING( "*** DEBUG DART " );
            PRINTINT( l_U332 );
            PRINTSTRING( " - " );
            PRINTVECTOR( l_U2[l_U331][l_U332]._fU32 );
            PRINTNL();
        }
        l_U1 = 2;
    }
    else
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U2[l_U331][l_U332]._fU8._fU0, l_U2[l_U331][l_U332]._fU8._fU4 + l_U391, l_U2[l_U331][l_U332]._fU8._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
        SET_OBJECT_COORDINATES( l_U2[l_U331][l_U332]._fU0, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
        l_U2[l_U331][l_U332]._fU80._fU4 += 1000.00000000 * uVar3;
        SET_OBJECT_ROTATION( l_U2[l_U331][l_U332]._fU0, l_U2[l_U331][l_U332]._fU80._fU0, l_U2[l_U331][l_U332]._fU80._fU4, l_U2[l_U331][l_U332]._fU80._fU8 );
    }
    return;
}

void sub_22013(unknown uParam0, int iParam1)
{
    PRINTSTRING( uParam0 );
    PRINTSTRING( " = " );
    PRINTFLOAT( iParam1->_fU0 );
    PRINTSTRING( ", " );
    PRINTFLOAT( iParam1->_fU4 );
    PRINTSTRING( ", " );
    PRINTFLOAT( iParam1->_fU8 );
    PRINTNL();
    return;
}

void sub_23198()
{
    float fVar2;
    float fVar3;
    float fVar4;
    int iVar5;

    GET_ANGLE_BETWEEN_2D_VECTORS( 0.00000000, 1.00000000, l_U2[l_U331][l_U332]._fU32._fU0 + 0.00350000, l_U2[l_U331][l_U332]._fU32._fU8, ref fVar3 );
    fVar2 = sub_23303( ref l_U2[l_U331][l_U332]._fU32 );
    sub_23352();
    if (fVar2 < 0.00900000)
    {
        if (NOT l_U368)
        {
            PLAY_SOUND_FROM_OBJECT( l_U358, "DARTS_HIT_TRIPLE", l_U2[l_U331][l_U332]._fU0 );
        }
        l_U2[l_U331][l_U332]._fU92 = 50;
        iVar5 = l_U328[l_U331];
        iVar5 -= l_U2[l_U331][l_U332]._fU92;
        if (NOT ((iVar5 < 0) || (iVar5 == 1)))
        {
            sub_23875();
        }
    }
    else if (fVar2 < 0.02100000)
    {
        if (NOT l_U368)
        {
            PLAY_SOUND_FROM_OBJECT( l_U358, "DARTS_HIT_TRIPLE", l_U2[l_U331][l_U332]._fU0 );
        }
        l_U2[l_U331][l_U332]._fU92 = 25;
    }
    else if (fVar2 > 0.30000000)
    {
        if (NOT l_U368)
        {
            PLAY_SOUND_FROM_OBJECT( l_U361, "DARTS_HIT_WALL", l_U2[l_U331][l_U332]._fU0 );
        }
        sub_24703();
        l_U2[l_U331][l_U332]._fU92 = 0;
    }
    else if (fVar2 > 0.22500000)
    {
        if (NOT l_U368)
        {
            PLAY_SOUND_FROM_OBJECT( l_U361, "DARTS_HIT_BOARD", l_U2[l_U331][l_U332]._fU0 );
        }
        l_U2[l_U331][l_U332]._fU92 = 0;
    }
    else if ((fVar2 < 0.14200000) AND (fVar2 > 0.12800000))
    {
        if (NOT l_U368)
        {
            PLAY_SOUND_FROM_OBJECT( l_U358, "DARTS_HIT_TRIPLE", l_U2[l_U331][l_U332]._fU0 );
        }
        l_U333 = 3;
    }
    else if ((fVar2 < 0.22500000) AND (fVar2 > 0.21100000))
    {
        if (NOT l_U368)
        {
            PLAY_SOUND_FROM_OBJECT( l_U358, "DARTS_HIT_DOUBLE", l_U2[l_U331][l_U332]._fU0 );
        }
        l_U333 = 2;
    }
    else if (NOT l_U368)
    {
        PLAY_SOUND_FROM_OBJECT( l_U358, "DARTS_HIT_BOARD", l_U2[l_U331][l_U332]._fU0 );
    }
    l_U333 = 1;;;
    if (l_U2[l_U331][l_U332]._fU32._fU0 < 0.00000000)
    {
        fVar3 = 360.00000000 - fVar3;
    }
    if (l_U403)
    {
        sub_26465( "dartAngle", fVar3 );
    }
    fVar4 = 0;
    l_U296 = 0;
    for ( l_U296 = 0; l_U296 < 21; l_U296++ )
    {
        if ((fVar3 < (fVar4 + 9.00000000)) AND (fVar3 >= (fVar4 - 9.00000000)))
        {
            l_U2[l_U331][l_U332]._fU92 = l_U303[l_U296] * l_U333;
        }
        fVar4 += 18.00000000;
    };;;;;
    if ((l_U331 == 0) AND (l_U2[l_U331][l_U332]._fU92 == 50))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 322, 1 );
    }
    l_U368 = 0;
    return;
}

void sub_23303(int iParam0)
{
    return SQRT( (iParam0->_fU0 * iParam0->_fU0) + (iParam0->_fU8 * iParam0->_fU8) );
}

void sub_23352()
{
    for ( l_U296 = 0; l_U296 < l_U332; l_U296++ )
    {
        if ((l_U2[l_U331][l_U332]._fU32._fU8 < (l_U2[l_U331][l_U296]._fU32._fU8 + 0.00800000)) AND ((l_U2[l_U331][l_U332]._fU32._fU8 > (l_U2[l_U331][l_U296]._fU32._fU8 - 0.00800000)) AND ((l_U2[l_U331][l_U332]._fU32._fU0 < (l_U2[l_U331][l_U296]._fU32._fU0 + 0.00800000)) AND (l_U2[l_U331][l_U332]._fU32._fU0 > (l_U2[l_U331][l_U296]._fU32._fU0 - 0.00800000)))))
        {
            l_U368 = 1;
        }
    }
    if (l_U368)
    {
        PLAY_SOUND_FROM_OBJECT( l_U360, "DARTS_HIT_OTHER_DART", l_U2[l_U331][l_U332]._fU0 );
    }
    return;
}

void sub_23875()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playBullContexts()" );
        PRINTNL();
    }
    if (l_U331 == 0)
    {
        if (iVar2 > 2000)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID() DARTS_BULLSEYE)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_BULLSEYE", 1, 1, 2 );
        }
        else if (l_U366)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
        }
    }
    else if (l_U366)
    {
        if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BOAST)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_BOAST", 1, 1, 2 );
    }
    else if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_GOOD_SHOT)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U262, "DARTS_GOOD_SHOT", 1, 1, 2 );;;
    return;
}

void sub_24703()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playMissBoardContexts()" );
        PRINTNL();
    }
    if (l_U331 == 0)
    {
        if (NOT l_U366)
        {
            if (iVar2 > 1000)
            {
                if (l_U422)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_MISSES_BOARD)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_MISSES_BOARD", 1, 1, 2 );
            }
            else if (iVar2 > 500)
            {
                if (l_U422)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );
            }
            else if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );;;
        }
        else if (iVar2 > 1000)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_MISSES_BOARD)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_MISSES_BOARD", 1, 1, 2 );
        }
        else if (iVar2 > 500)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );
        }
        else if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_PLAYS_POORLY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );;;;
    }
    else if (l_U366)
    {
        if (iVar2 > 1000)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BORED)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_BORED", 1, 1, 2 );
        }
    }
    else if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BAD_SHOT)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U262, "DARTS_BAD_SHOT", 1, 1, 2 );;;
    return;
}

void sub_26465(unknown uParam0, unknown uParam1)
{
    PRINTSTRING( uParam0 );
    PRINTSTRING( " = " );
    PRINTFLOAT( uParam1 );
    PRINTNL();
    return;
}

void sub_26709()
{
    GET_GAME_TIMER( ref l_U255 );
    l_U328[l_U331] -= l_U2[l_U331][l_U332]._fU92;
    l_U354 += l_U2[l_U331][l_U332]._fU92;
    if (l_U331 == 0)
    {
        l_U355++;
    }
    if ((l_U328[l_U331] == 0) AND ((l_U2[l_U331][l_U332]._fU92 == 50) || (l_U333 == 2)))
    {
        sub_26890();
    }
    else if (((l_U333 != 2) AND (l_U328[l_U331] == 0)) || ((l_U328[l_U331] < 0) || (l_U328[l_U331] == 1)))
    {
        if ((l_U333 != 2) AND (l_U328[l_U331] == 0))
        {
            PRINT_WITH_NUMBER_NOW( "CHECKOUT_HELP", l_U2[l_U331][l_U332]._fU92, 4000, 0 );
        }
        else if (l_U331 == 1)
        {
            PRINT_WITH_NUMBER_NOW( "OPP_BUST", l_U2[l_U331][l_U332]._fU92, 4000, 0 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( "BUST", l_U2[l_U331][l_U332]._fU92, 4000, 0 );
        }
        sub_30495();
        l_U328[l_U331] = l_U252[l_U331];
        sub_32012();
        l_U1 = 0;
        sub_32182();
    }
    else if (l_U354 == 180)
    {
        sub_33069();
        if (l_U331 == 0)
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 321, 1 );
            AWARD_ACHIEVEMENT( 2 );
        }
    }
    if (l_U354 == 140)
    {
        sub_34471();
    }
    if (NOT l_U369)
    {
        if (l_U331 == 0)
        {
            if (l_U332 < 2)
            {
                if ((l_U328[l_U331] == 50) || (((l_U328[l_U331] mod 2) == 0) AND ((l_U328[l_U331] > 0) AND (l_U328[l_U331] < 41))))
                {
                    sub_35808();
                    l_U369 = 1;
                }
            }
        }
    }
    if (l_U331 == 0)
    {
        PRINT_WITH_2_NUMBERS_NOW( "O_SCORE_REMAIN", l_U354, l_U328[l_U331], 2500, 0 );
    }
    else if ((l_U332 == 2) AND (l_U331 == 1))
    {
        PRINT_WITH_2_NUMBERS_NOW( "P_SCORE_REMAIN", l_U354, l_U328[l_U331], 4000, 0 );
    }
    else if (l_U1 != 3)
    {
        SETTIMERA( 0 );
        while ((NOT (l_U1 == 3)) AND (TIMERA() < 600))
        {
            WAIT( 0 );
            sub_14806();
        }
    };;;
    if (l_U332 == 2)
    {
        SETTIMERA( 0 );
        sub_32012();
    }
    l_U332++;
    if (l_U1 != 3)
    {
        l_U1 = 0;
    }
    if (l_U332 == 3)
    {
        l_U1 = 0;
        sub_32182();
    };;;
    return;
}

void sub_26890()
{
    GET_GAME_TIMER( ref l_U296 );
    INCREMENT_INT_STAT_NO_MESSAGE( 53, l_U296 - l_U326 );
    CLEAR_SMALL_PRINTS();
    CLEAR_HELP();
    if (l_U331 == 0)
    {
        PRINT_NOW( "PLAYER_WIN", 5000, 1 );
        INCREMENT_INT_STAT_NO_MESSAGE( 319, 1 );
        REGISTER_BEST_POSITION( 323, l_U355 );
        sub_2187( 0 );
        sub_27014( 2 );
        sub_27627( ref l_U399 );
    }
    else
    {
        PRINT_NOW( "PLAYER_LOSE", 5000, 1 );
        INCREMENT_INT_STAT_NO_MESSAGE( 320, 1 );
        sub_2187( 1 );
        sub_28181( ref l_U399 );
    }
    sub_28680();
    SETTIMERA( 0 );
    while (TIMERA() < 1500)
    {
        WAIT( 0 );
    }
    SET_CAM_ACTIVE( l_U293, 1 );
    SET_CAM_PROPAGATE( l_U293, 0 );
    SET_CAM_ACTIVE( l_U291, 0 );
    SET_CAM_PROPAGATE( l_U291, 0 );
    SET_CAM_INTERP_STYLE_CORE( l_U294, l_U291, l_U293, 3500, 0 );
    SET_CAM_ACTIVE( l_U294, 1 );
    SET_CAM_PROPAGATE( l_U294, 1 );
    if (NOT (IS_CHAR_DEAD( l_U262 )))
    {
        CLEAR_CHAR_TASKS( l_U262 );
    }
    if ((NOT (IS_CHAR_DEAD( l_U262 ))) AND (NOT (IS_CHAR_DEAD( sub_215() ))))
    {
        TASK_LOOK_AT_CHAR( sub_215(), l_U262, 10000, 0 );
        TASK_LOOK_AT_CHAR( l_U262, sub_215(), -2, 0 );
    }
    l_U0 = 2;
    l_U1 = 0;
    for ( l_U296 = 0; l_U296 < 3; l_U296++ )
    {
        l_U2[l_U331][l_U296]._fU32 = {0.00000000, 0.00000000, 0.00000000};
        l_U2[l_U331][l_U296]._fU20 = {0.00000000, 0.00000000, 0.00000000};
        l_U2[l_U331][l_U296]._fU8 = {0.00000000, -2.36850000, -0.20000000};
        l_U2[l_U331][l_U296]._fU92 = 0;
        l_U2[l_U331][l_U296]._fU96 = 0;
        l_U2[l_U331][l_U296]._fU100 = 0;
    }
    l_U332 = 0;
    l_U354 = 0;
    l_U331 = 0;
    l_U421 = 0;
    l_U252[0] = -1;
    l_U252[1] = -1;
    return;
}

void sub_27014(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U64808[uParam0]._fU0)
    {
        iVar3 = ProtectedGet(g_U64808[uParam0]._fU8);
        if (iVar3 > 0)
        {
            sub_27083( 2, iVar3 );
            g_U64808[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_27083(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_27265( 0 );
    return;
}

void sub_27265(boolean bParam0)
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
        sub_27520();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_27520()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_27627(int iParam0)
{
    int iVar3;

    switch (iParam0->_fU0)
    {
        case 0:
        iVar3 = g_U64664;
        break;
        case 1:
        iVar3 = g_U64665;
        break;
        case 2:
        iVar3 = g_U64667;
        break;
        case 3:
        iVar3 = g_U64666;
        break;
        case 4:
        iVar3 = g_U64668;
        break;
        case 5:
        iVar3 = g_U64669;
        break;
        case 6:
        iVar3 = g_U64670;
        break;
        case 7:
        iVar3 = g_U64671;
        break;
        case 8:
        iVar3 = g_U64672;
        break;
        case 9:
        iVar3 = g_U64673;
        break;
    }
    iVar3 += 5;
    if (iVar3 > 100)
    {
        iVar3 = 100;
    }
    switch (iParam0->_fU0)
    {
        case 0:
        g_U64664 = iVar3;
        break;
        case 1:
        g_U64665 = iVar3;
        break;
        case 2:
        g_U64667 = iVar3;
        break;
        case 3:
        g_U64666 = iVar3;
        break;
        case 4:
        g_U64668 = iVar3;
        break;
        case 5:
        g_U64669 = iVar3;
        break;
        case 6:
        g_U64670 = iVar3;
        break;
        case 7:
        g_U64671 = iVar3;
        break;
        case 8:
        g_U64672 = iVar3;
        break;
        case 9:
        g_U64673 = iVar3;
        break;
    }
    return;
}

void sub_28181(int iParam0)
{
    int iVar3;

    switch (iParam0->_fU0)
    {
        case 0:
        iVar3 = g_U64664;
        break;
        case 1:
        iVar3 = g_U64665;
        break;
        case 2:
        iVar3 = g_U64667;
        break;
        case 3:
        iVar3 = g_U64666;
        break;
        case 4:
        iVar3 = g_U64668;
        break;
        case 5:
        iVar3 = g_U64669;
        break;
        case 6:
        iVar3 = g_U64670;
        break;
        case 7:
        iVar3 = g_U64671;
        break;
        case 8:
        iVar3 = g_U64672;
        break;
        case 9:
        iVar3 = g_U64673;
        break;
    }
    iVar3 -= 2;
    if (iVar3 < 0)
    {
        iVar3 = 0;
    }
    switch (iParam0->_fU0)
    {
        case 0:
        g_U64664 = iVar3;
        break;
        case 1:
        g_U64665 = iVar3;
        break;
        case 2:
        g_U64667 = iVar3;
        break;
        case 3:
        g_U64666 = iVar3;
        break;
        case 4:
        g_U64668 = iVar3;
        break;
        case 5:
        g_U64669 = iVar3;
        break;
        case 6:
        g_U64670 = iVar3;
        break;
        case 7:
        g_U64671 = iVar3;
        break;
        case 8:
        g_U64672 = iVar3;
        break;
        case 9:
        g_U64673 = iVar3;
        break;
    }
    return;
}

void sub_28680()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playWinContexts()" );
        PRINTNL();
    }
    if (l_U331 == 0)
    {
        if (iVar2 > 1500)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_LOSES)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_LOSES", 1, 1, 2 );
        }
        else if (l_U366)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_WINS)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_WINS", 1, 1, 2 );
        }
        else if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_LOST)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "GAME_LOST", 1, 1, 2 );;;
    }
    else if (l_U366)
    {
        if (iVar2 > 1500)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_LOSES)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_LOSES", 1, 1, 2 );
        }
        else if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_LOSES)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_LOSES", 1, 1, 2 );;
    }
    else if (iVar2 > 1500)
    {
        if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_LOSES)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_LOSES", 1, 1, 2 );
    }
    else if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_WON)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U262, "GAME_WON", 1, 1, 2 );;;;
    return;
}

void sub_30495()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playBustContexts()" );
        PRINTNL();
    }
    if (l_U331 == 0)
    {
        if (l_U366)
        {
            if (iVar2 < 2000)
            {
                if (l_U422)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_FAILS_CHECK_OUT)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_FAILS_CHECK_OUT", 1, 1, 2 );
            }
            else if (iVar2 < 2500)
            {
                if (l_U422)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );
            }
            else if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );;;
        }
        else if (iVar2 < 1000)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_BUSTS)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_BUSTS", 1, 1, 2 );
        }
        else if (iVar2 < 2000)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_FAILS_CHECK_OUT)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_FAILS_CHECK_OUT", 1, 1, 2 );
        }
        else if (iVar2 < 2500)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );
        }
        else if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );;;;;
    }
    else if (NOT l_U366)
    {
        if (iVar2 < 1000)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BAD_SHOT)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_BAD_SHOT", 1, 1, 2 );
        }
        else if (iVar2 < 2000)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_PLAYING_BADLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "GAME_PLAYING_BADLY", 1, 1, 2 );
        }
    }
    return;
}

void sub_32012()
{
    boolean bVar2;

    SETTIMERA( 0 );
    l_U421 = 0;
    WAIT( 0 );
    while ((NOT bVar2) AND (IS_MESSAGE_BEING_DISPLAYED()))
    {
        WAIT( 0 );
        if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U257 )))
        {
            sub_2187( 3 );
            sub_206();
        }
        sub_2368();
        if (NOT (IS_CONTROL_JUST_PRESSED( 2, 77 )))
        {
            l_U421 = 1;
        }
        else if (l_U421)
        {
            bVar2 = true;
            if (l_U331 == 1)
            {
                l_U1 = 3;
            }
        }
    }
    CLEAR_SMALL_PRINTS();
    return;
}

void sub_32182()
{
    for ( l_U296 = 0; l_U296 < 3; l_U296++ )
    {
        l_U2[l_U331][l_U296]._fU32 = {0.00000000, 0.00000000, 0.00000000};
        l_U2[l_U331][l_U296]._fU20 = {0.00000000, 0.00000000, 0.00000000};
        l_U2[l_U331][l_U296]._fU8 = {0.00000000, -2.36850000, -0.20000000};
        l_U2[l_U331][l_U296]._fU92 = 0;
        l_U2[l_U331][l_U296]._fU96 = 0;
        l_U2[l_U331][l_U296]._fU100 = 0;
        DELETE_OBJECT( ref l_U2[l_U331][l_U296]._fU0 );
    }
    for ( l_U296 = 0; l_U296 < 3; l_U296++ )
    {
        if (DOES_OBJECT_EXIST( l_U161[l_U296]._fU0 ))
        {
            DELETE_OBJECT( ref l_U161[l_U296]._fU0 );
        }
    }
    if (l_U252[l_U331] != l_U328[l_U331])
    {
        PLAY_SOUND_FROM_OBJECT( l_U365, "DARTS_SCORE", l_U257 );
        SET_VARIABLE_ON_SOUND( l_U365, "Score", TO_FLOAT( l_U328[l_U331] ) );
        sub_32621();
        if (l_U331 != 1)
        {
            sub_6281();
        }
    }
    l_U252[l_U331] = l_U328[l_U331];
    l_U332 = 0;
    l_U354 = 0;
    if (l_U331 == 0)
    {
        l_U331 = 1;
        PRINT_WITH_NUMBER_NOW( "SWITCH_OPPONENT", l_U328[l_U331], 2000, 0 );
        PRINT_HELP_FOREVER( "HELP_SKIP" );
        sub_32012();
    }
    else
    {
        l_U331 = 0;
        CLEAR_HELP();
        PRINT_WITH_NUMBER_NOW( "SWITCH_PLAYER", l_U328[l_U331], 5000, 0 );
    }
    l_U421 = 0;
    return;
}

void sub_32621()
{
    boolean bVar2;
    int iVar3;

    bVar2 = false;
    iVar3 = -1;
    l_U296 = 0;
    while ((NOT bVar2) AND (l_U296 < 7))
    {
        if (l_U336[l_U331][l_U296] == 0)
        {
            iVar3 = l_U296;
            bVar2 = true;
        }
        l_U296++;
    }
    if (iVar3 == -1)
    {
        l_U336[l_U331][0] = l_U328[l_U331];
        for ( l_U296 = 1; l_U296 <= 6; l_U296++ )
        {
            l_U336[l_U331][l_U296] = 0;
        }
    }
    else
    {
        l_U336[l_U331][iVar3] = l_U328[l_U331];
    }
    return;
}

void sub_33069()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ play180Contexts()" );
        PRINTNL();
    }
    if (l_U331 == 0)
    {
        if (NOT l_U366)
        {
            if (iVar2 > 1000)
            {
                if (l_U422)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_GETS_180)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_GETS_180", 1, 1, 2 );
            }
            else if (iVar2 > 500)
            {
                if (l_U422)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
            }
            else if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_HAPPY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_HAPPY", 1, 1, 2 );;;
        }
        else if (iVar2 > 1000)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_GETS_180)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_GETS_180", 1, 1, 2 );
        }
        else if (iVar2 > 500)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
        }
        else if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_PLAYS_WELL)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );;;;
    }
    else if (l_U366)
    {
        if (iVar2 > 1500)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BOAST)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_BOAST", 1, 1, 2 );
        }
        else if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_HAPPY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_HAPPY", 1, 1, 2 );;
    }
    else if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_PLAYING_WELL)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U262, "GAME_PLAYING_WELL", 1, 1, 2 );;;
    return;
}

void sub_34471()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ play140Contexts()" );
        PRINTNL();
    }
    if (l_U331 == 0)
    {
        if (NOT l_U366)
        {
            if (iVar2 > 1000)
            {
                if (l_U422)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_GETS_140)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_GETS_140", 1, 1, 2 );
            }
            else if (iVar2 > 500)
            {
                if (l_U422)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
            }
            else if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_HAPPY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_HAPPY", 1, 1, 2 );;;
        }
        else if (iVar2 > 1000)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_GETS_140)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_GETS_140", 1, 1, 2 );
        }
        else if (iVar2 > 500)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
        }
        else if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_PLAYS_WELL)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );;;;
    }
    else if (l_U366)
    {
        if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_HAPPY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_HAPPY", 1, 1, 2 );
    }
    else if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_PLAYING_WELL)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U262, "GAME_PLAYING_WELL", 1, 1, 2 );;;
    return;
}

void sub_35808()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playOneDartAwayContexts()" );
        PRINTNL();
    }
    if (l_U366)
    {
        if (iVar2 > 1500)
        {
            if (l_U422)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID() DARTS_PLAYER_1_DART_AWAY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_1_DART_AWAY", 1, 1, 2 );
        }
        else if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_1_DART_AWAY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_1_DART_AWAY", 1, 1, 2 );;
    }
    else if (iVar2 > 2000)
    {
        if (l_U422)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID() DARTS_PLAYER_1_DART_AWAY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_1_DART_AWAY", 1, 1, 2 );
    }
    else if (l_U422)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BOAST)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U262, "DARTS_BOAST", 1, 1, 2 );;;
    return;
}

void sub_36776()
{
    l_U331 = 1;
    l_U332 = 0;
    while ((l_U1 == 3) AND (l_U332 < 3))
    {
        if (l_U2[l_U331][l_U332]._fU96)
        {
            PRINTSTRING( " = " );
            PRINTINT( l_U2[l_U331][l_U332]._fU92 );
            PRINTNL();
            l_U332++;
        }
        else if (l_U2[l_U331][l_U332]._fU100)
        {
            l_U2[l_U331][l_U332]._fU96 = 1;
            l_U2[l_U331][l_U332]._fU100 = 0;
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U2[l_U331][l_U332]._fU44._fU0, l_U2[l_U331][l_U332]._fU44._fU4 + l_U391, l_U2[l_U331][l_U332]._fU44._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
            SET_OBJECT_COORDINATES( l_U2[l_U331][l_U332]._fU0, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
            sub_23198();
            sub_26709();
        }
        else
        {
            sub_20425();
            sub_20924();
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U2[l_U331][l_U332]._fU44._fU0, l_U2[l_U331][l_U332]._fU44._fU4 + l_U391, l_U2[l_U331][l_U332]._fU44._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
            CREATE_OBJECT( l_U2[l_U331][l_U332]._fU4, l_U300._fU0, l_U300._fU4, l_U300._fU8 - 0.12000000, ref l_U2[l_U331][l_U332]._fU0, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U2[l_U331][l_U332]._fU0, l_U290 );
            l_U2[l_U331][l_U332]._fU96 = 1;
            l_U2[l_U331][l_U332]._fU100 = 0;
            GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 90.00000000, ref l_U298 );
            SET_OBJECT_ROTATION( l_U2[l_U331][l_U332]._fU0, 90.00000000 + l_U260, l_U298, 0.00000000 );
            sub_23198();
            sub_26709();
        }
    }
    l_U332 = 0;
    return;
}

void sub_37572()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar2, ref uVar3, ref uVar4, ref uVar5 );
    if (NOT IS_USING_CONTROLLER())
    {
        GET_KEYBOARD_MOVE_INPUT( ref uVar4, ref uVar5 );
    }
    if (uVar4 < -80.00000000)
    {
        if (NOT l_U353)
        {
            SET_CAM_ACTIVE( l_U292, 1 );
            SET_CAM_PROPAGATE( l_U292, 0 );
            SET_CAM_ACTIVE( l_U291, 0 );
            SET_CAM_PROPAGATE( l_U291, 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U294, l_U291, l_U292, 1500, 0 );
            SET_CAM_ACTIVE( l_U294, 1 );
            SET_CAM_PROPAGATE( l_U294, 1 );
            while (IS_SPECIFIC_CAM_INTERPOLATING( l_U294 ))
            {
                WAIT( 0 );
            }
            SET_CAM_PROPAGATE( l_U292, 1 );
            SET_CAM_ACTIVE( l_U294, 0 );
            SET_CAM_PROPAGATE( l_U294, 0 );
            l_U353 = 1;
        }
    }
    else if (l_U353)
    {
        SET_CAM_ACTIVE( l_U291, 1 );
        SET_CAM_PROPAGATE( l_U291, 0 );
        SET_CAM_ACTIVE( l_U292, 0 );
        SET_CAM_PROPAGATE( l_U292, 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U294, l_U292, l_U291, 1500, 0 );
        SET_CAM_ACTIVE( l_U294, 1 );
        SET_CAM_PROPAGATE( l_U294, 1 );
        while (IS_SPECIFIC_CAM_INTERPOLATING( l_U294 ))
        {
            WAIT( 0 );
        }
        SET_CAM_PROPAGATE( l_U291, 1 );
        SET_CAM_ACTIVE( l_U294, 0 );
        SET_CAM_PROPAGATE( l_U294, 0 );
        l_U353 = 0;
    }
    return;
}

void sub_38022()
{
    vector vVar2;
    float fVar5;
    float fVar6;
    float fVar7;
    int iVar8;

    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U0 = 4;
    }
    if (l_U402)
    {
        CLEAR_HELP();
        l_U402 = 0;
        sub_26890();
    }
    if (l_U247)
    {
        if (NOT (DOES_OBJECT_EXIST( l_U240 )))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U241._fU0 - 0.00350000, l_U241._fU4 - 0.04000000, l_U241._fU8 - 0.00100000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
            CREATE_OBJECT( 937660317, l_U280._fU0, l_U280._fU4, l_U280._fU8, ref l_U240, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U240, l_U290 );
            SET_OBJECT_ROTATION( l_U240, 90.00000000 + l_U260, 0.00000000, 0.00000000 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U241._fU0 - 0.00350000, l_U241._fU4 - 0.04000000, l_U241._fU8 - 0.00100000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
            SET_OBJECT_COORDINATES( l_U240, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
            if (l_U248)
            {
                vVar2 = {90 + l_U260, 0, 0};
                vVar2.z = sub_38434( l_U241._fU0 - 0.00350000, l_U241._fU4 - 0.04000000, l_U241._fU8 - 0.00100000 );
                SET_OBJECT_ROTATION( l_U240, vVar2.x, vVar2.y, vVar2.z );
                l_U248 = 0;
            }
            else if (l_U249)
            {
                SET_OBJECT_ROTATION( l_U240, 90 + l_U260, 0, 0 );
                l_U249 = 0;
            }
            GET_ANGLE_BETWEEN_2D_VECTORS( 0.00000000, 1.00000000, l_U241._fU0, l_U241._fU8, ref fVar6 );
            fVar5 = sub_23303( ref l_U241 );
            if (fVar5 < 0.00900000)
            {
                PRINTNL();
                PRINTSTRING( "********* SCORE = 50" );
            }
            else if (fVar5 < 0.02100000)
            {
                PRINTNL();
                PRINTSTRING( "********* SCORE = 25" );
            }
            else if (fVar5 > 0.30000000)
            {
                PRINTNL();
                PRINTSTRING( "********* SCORE = 0" );
            }
            else if (fVar5 > 0.22500000)
            {
                PRINTNL();
                PRINTSTRING( "********* SCORE = 0" );
            }
            else if ((fVar5 < 0.14200000) AND (fVar5 > 0.12800000))
            {
                l_U333 = 3;
            }
            else if ((fVar5 < 0.22600000) AND (fVar5 > 0.21100000))
            {
                l_U333 = 2;
            }
            else
            {
                l_U333 = 1;
            }
            if (l_U2[l_U331][l_U332]._fU32._fU0 < 0.00000000)
            {
                fVar6 = 360.00000000 - fVar6;
            }
            fVar7 = 0;
            l_U296 = 0;
            for ( l_U296 = 0; l_U296 < 21; l_U296++ )
            {
                if ((fVar6 < (fVar7 + 9.00000000)) AND (fVar6 >= (fVar7 - 9.00000000)))
                {
                    iVar8 = l_U303[l_U296] * l_U333;
                    PRINTNL();
                    PRINTSTRING( "********* SCORE = " );
                    PRINTINT( iVar8 );
                }
                fVar7 += 18.00000000;
            };;;;;
        }
    }
    else if (DOES_OBJECT_EXIST( l_U240 ))
    {
        DELETE_OBJECT( ref l_U240 );
        PRINTNL();
        PRINTSTRING( "*** DELETING PLACER DART" );
        PRINTNL();
    }
    if (l_U403)
    {
        PRINTSTRING( "******************" );
        PRINTNL();
        sub_39278( "Turn", l_U332 );
        PRINTSTRING( "******************" );
        PRINTNL();
        sub_22013( "Position", ref l_U2[l_U331][l_U332]._fU8 );
        sub_22013( "Target", ref l_U2[l_U331][l_U332]._fU32 );
        sub_22013( "throwVector", ref l_U2[l_U331][l_U332]._fU20 );
        sub_39278( "Score", l_U2[l_U331][l_U332]._fU92 );
        sub_39278( "playerScore[playr]", l_U328[l_U331] );
        sub_39586( "isStuck", l_U2[l_U331][l_U332]._fU96 );
        sub_39586( "isTravelling", l_U2[l_U331][l_U332]._fU100 );
        PRINTSTRING( "******************" );
        PRINTNL();
        PRINTNL();
    }
    return;
}

float sub_38434(vector vParam0)
{
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    vParam0.y = -0.23000000;
    vVar5 = {l_U277 - vParam0};
    uVar8 = VMAG( vVar5 );
    uVar9 = {vVar5 / uVar8};
    GET_HEADING_FROM_VECTOR_2D( uVar9._fU0, uVar9._fU4, ref l_U298 );
    return l_U298 - 180.00000000;
}

void sub_39278(unknown uParam0, unknown uParam1)
{
    PRINTSTRING( uParam0 );
    PRINTSTRING( " = " );
    PRINTINT( uParam1 );
    PRINTNL();
    return;
}

void sub_39586(unknown uParam0, boolean bParam1)
{
    PRINTSTRING( uParam0 );
    PRINTSTRING( " = " );
    if (bParam1)
    {
        PRINTSTRING( "TRUE" );
    }
    else
    {
        PRINTSTRING( "FALSE" );
    }
    PRINTNL();
    return;
}

void sub_39809()
{
    if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ANOTHER_GAME" ))) AND (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U294 ))))
    {
        SET_CAM_PROPAGATE( l_U293, 1 );
        SET_CAM_ACTIVE( l_U294, 0 );
        SET_CAM_PROPAGATE( l_U294, 0 );
        PRINT_HELP_FOREVER( "ANOTHER_GAME" );
    }
    else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ANOTHER_GAME" ))
    {
        if (IS_CONTROL_PRESSED( 2, 77 ))
        {
            CLEAR_HELP();
            SET_CAM_ACTIVE( l_U291, 1 );
            SET_CAM_PROPAGATE( l_U291, 0 );
            SET_CAM_ACTIVE( l_U293, 0 );
            SET_CAM_PROPAGATE( l_U293, 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U294, l_U293, l_U291, 1500, 0 );
            SET_CAM_ACTIVE( l_U294, 1 );
            SET_CAM_PROPAGATE( l_U294, 1 );
            WAIT( 1000 );
            if ((NOT (IS_CHAR_DEAD( l_U262 ))) AND (NOT (IS_CHAR_DEAD( sub_215() ))))
            {
                TASK_CLEAR_LOOK_AT( sub_215() );
                TASK_CLEAR_LOOK_AT( l_U262 );
            }
            l_U331 = 1;
            sub_14422();
        }
        else if (IS_CONTROL_PRESSED( 2, 23 ))
        {
            CLEAR_PRINTS();
            sub_206();
        }
    }
    return;
}

