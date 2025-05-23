void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U251 = 0.08000000;
    l_U325 = 6.00000000;
    l_U327 = 0.10000000;
    l_U381 = 0.06000000;
    l_U382 = 0.08000000;
    l_U383 = 0.10000000;
    l_U384 = 0;
    l_U385 = 0;
    l_U392 = 1;
    l_U402 = 0.18000000;
    l_U404 = {-0.00350000, 0.00000000, -0.00100000};
    l_U412 = 1;
    l_U413 = 0;
    l_U414 = 0;
    l_U430 = 0;
    l_U431 = 0;
    l_U432 = 0;
    l_U433 = 0;
    l_U410 = {l_U435};
    l_U257 = l_U435._fU4;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_206();
    }
    WAIT( 0 );
    if (DOES_OBJECT_EXIST( l_U257 ))
    {
        sub_1890();
    }
    else
    {
        sub_206();
    }
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, 0.00000000, -1.72000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    if (l_U409)
    {
        CLEAR_AREA( l_U300._fU0, l_U300._fU4, l_U300._fU8, 4.00000000, 1 );
    }
    while (l_U392)
    {
        WAIT( 0 );
        if (NOT (DOES_OBJECT_EXIST( l_U257 )))
        {
            sub_206();
        }
        if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U257 )))
        {
            sub_2540( 3 );
            sub_206();
        }
        sub_2654();
        switch (l_U0)
        {
            case 0:
            sub_3012();
            sub_7486();
            l_U331 = 1;
            sub_15627();
            break;
            case 1:
            sub_16002();
            sub_7486();
            if (NOT l_U408)
            {
                sub_38148();
            }
            sub_38598();
            if (l_U407)
            {
                if (IS_CHAR_DEAD( l_U262 ))
                {
                    sub_2540( 4 );
                    sub_206();
                }
            }
            break;
            case 2:
            sub_40385();
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
    if (l_U409)
    {
        DELETE_OBJECT( ref l_U2[l_U331][0]._fU0 );
        DELETE_OBJECT( ref l_U2[l_U331][1]._fU0 );
        DELETE_OBJECT( ref l_U2[l_U331][2]._fU0 );
        DELETE_OBJECT( ref l_U258 );
        DELETE_OBJECT( ref l_U259 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 127575244 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U261 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2063078697 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -172899370 );
        if (IS_PLAYER_PLAYING( sub_443() ))
        {
            SET_PLAYER_CONTROL( sub_443(), 1 );
            if (l_U407)
            {
                if ((NOT (IS_CHAR_DEAD( l_U262 ))) AND (DOES_CHAR_EXIST( l_U262 )))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U262 ))) AND (NOT (IS_CHAR_DEAD( sub_215() ))))
                    {
                        TASK_CLEAR_LOOK_AT( sub_215() );
                        TASK_CLEAR_LOOK_AT( l_U262 );
                    }
                    if (NOT (COMPARE_STRING( sub_600( ref l_U410 ), "PLAY_BAR_GUY" )))
                    {
                        PRINTSTRING( "Darts cleanup - opponent is friend \n" );
                        GET_PLAYER_GROUP( sub_443(), ref uVar2 );
                        if (NOT (IS_GROUP_MEMBER( l_U262, uVar2 )))
                        {
                            SET_GROUP_MEMBER( sub_841(), l_U262 );
                            PRINTSTRING( "Darts Opponent added to players group \n" );
                        }
                    }
                    FREEZE_CHAR_POSITION( l_U262, 0 );
                    if (COMPARE_STRING( sub_600( ref l_U410 ), "PLAY_BAR_GUY" ))
                    {
                        PRINTSTRING( "Darts cleanup - opponent is bar guy \n" );
                        REMOVE_CHAR_FROM_GROUP( l_U262 );
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
        for ( l_U296 = 0; l_U296 < l_U370; l_U296++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U371[l_U296] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U371[l_U296], sub_841() )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U371[l_U296], 0 );
                    SET_GROUP_MEMBER( sub_841(), l_U371[l_U296] );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U371[l_U296] );
                    SET_CHAR_COORDINATES( l_U371[l_U296], l_U374[l_U296]._fU0, l_U374[l_U296]._fU4, l_U374[l_U296]._fU8 );
                    SET_CHAR_HEADING( l_U371[l_U296], l_U260 );
                    PRINTSTRING( "Darts non-playing group member added to players group \n" );
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U262 )))
        {
            if (l_U416)
            {
                STOP_PED_SPEAKING( l_U262, 1 );
            }
        }
        if (NOT (IS_CHAR_INJURED( sub_215() )))
        {
            if (l_U417)
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
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "dartsE1" );
        sub_1668();
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
        Result = "PLAY_JIM";
        break;
        case 1:
        Result = "PLAY_TERRY";
        break;
        case 2:
        Result = "PLAY_CLAY";
        break;
        default:
        Result = "PLAY_BAR_GUY";
        break;
    }
    return Result;
}

void sub_841()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1668()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12304 = 0;
    if (g_U26739._fU0 == 19)
    {
        g_U12303 = 0;
        sub_1719();
        return;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        if (g_U26739._fU20 == 8)
        {
            g_U26739._fU20 = 3;
        }
    }
    else if (NOT (g_U26739._fU4 == 12))
    {
        if (g_U26739._fU16 == 8)
        {
            g_U26739._fU16 = 3;
        }
    }
    else
    {
        return;
    }
    g_U26739._fU28 = 1;
    return;
}

void sub_1719()
{
    g_U26737._fU4 = 1;
    return;
}

void sub_1890()
{
    GET_OBJECT_HEADING( l_U257, ref l_U260 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, -0.30000000, -2.36850000 + l_U402, -1.72720000, ref l_U268._fU0, ref l_U268._fU4, ref l_U268._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.50000000, -2.36850000 + l_U402, -1.65000000, ref l_U271._fU0, ref l_U271._fU4, ref l_U271._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -3.00000000 + l_U402, -1.72720000, ref l_U286._fU0, ref l_U286._fU4, ref l_U286._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.25000000, -4.50000000, -1.60000000, ref l_U374[0]._fU0, ref l_U374[0]._fU4, ref l_U374[0]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, -0.50000000, -4.50000000, -1.60000000, ref l_U374[1]._fU0, ref l_U374[1]._fU4, ref l_U374[1]._fU8 );
    l_U277 = {0.00000000, -2.36850000 + l_U402, 0.10000000};
    l_U277 = {l_U277 + l_U404};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U277._fU0, l_U277._fU4, l_U277._fU8, ref l_U274._fU0, ref l_U274._fU4, ref l_U274._fU8 );
    l_U283 = {0.00000000, -0.15000000, 0.00000000};
    l_U283 = {l_U283 + l_U404};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, 0.00000000, 0.00000000, ref l_U280._fU0, ref l_U280._fU4, ref l_U280._fU8 );
    return;
}

void sub_2540(unknown uParam0)
{
    if (g_U26739._fU0 == 19)
    {
        return;
    }
    if (NOT (g_U26739._fU8 == 12))
    {
        g_U26739._fU20 = uParam0;
        if (sub_2597( g_U26739._fU0 ))
        {
            g_U26739._fU16 = uParam0;
        }
        return;
    }
    g_U26739._fU16 = uParam0;
    return;
}

int sub_2597(unknown uParam0)
{
    return 0;
}

void sub_2654()
{
    if (NOT l_U432)
    {
        if ((IS_CONTROL_PRESSED( 2, 78 )) AND (NOT (IS_CONTROL_PRESSED( 2, 77 ))))
        {
            l_U432 = 1;
        }
        else
        {
            l_U432 = 0;
        }
    }
    if (l_U0 != 2)
    {
        if (l_U430)
        {
            if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
            {
                sub_2540( 3 );
                sub_206();
            }
            if (((# -NULL-0xc27bfa()) || (l_U432)) AND (sub_2765()))
            {
                l_U393 = 0;
                l_U430 = 0;
                l_U431 = 0;
                l_U432 = 0;
                CLEAR_HELP();
            }
        }
        if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
        {
            if (NOT l_U431)
            {
                PRINT_HELP( "QUIT_MSG" );
                l_U431 = 1;
            }
        }
        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "QUIT_MSG" ))
        {
            l_U430 = 1;
        }
        else
        {
            l_U430 = 0;
            l_U431 = 0;
        }
    }
    return;
}

int sub_2765()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_3012()
{
    int iVar2;
    int iVar3;

    SET_PLAYER_CONTROL( sub_443(), 0 );
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    CLEAR_PRINTS();
    DISPLAY_RADAR( 0 );
    DISPLAY_HUD( 0 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_215(), 1 );
    sub_3115( "DARTS", 3 );
    REQUEST_STREAMED_TXD( "dartsE1", 0 );
    while (NOT (HAS_STREAMED_TXD_LOADED( "dartsE1" )))
    {
        WAIT( 0 );
    }
    if ((l_U260 < 1) || (l_U260 > 359))
    {
        sub_3380( 1151.53200000, 731.44890000, 34.91700000, 84, l_U300._fU0, l_U300._fU4, l_U300._fU8, 5, -1, 0 );
    }
    else
    {
        sub_3380( -439.15930000, 457.63810000, 8.90010000, 83, l_U300._fU0, l_U300._fU4, l_U300._fU8, 5, -1, 0 );
    }
    l_U261 = sub_3742( ref l_U410 );
    l_U265 = sub_3854( ref l_U410 );
    REQUEST_MODEL( 127575244 );
    REQUEST_MODEL( l_U261 );
    REQUEST_MODEL( 2063078697 );
    REQUEST_MODEL( -172899370 );
    while ((NOT (HAS_MODEL_LOADED( -172899370 ))) || ((NOT (HAS_MODEL_LOADED( 2063078697 ))) || ((NOT (HAS_MODEL_LOADED( l_U261 ))) || (NOT (HAS_MODEL_LOADED( 127575244 ))))))
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
    if (NOT (IS_CHAR_INJURED( g_U9218 )))
    {
        l_U262 = g_U9218;
        REMOVE_CHAR_FROM_GROUP( l_U262 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U262 );
        SET_CHAR_COORDINATES( l_U262, l_U271._fU0, l_U271._fU4, l_U271._fU8 - 0.18000000 );
        SET_CHAR_HEADING( l_U262, l_U260 + 25.00000000 );
        FREEZE_CHAR_POSITION( l_U262, 1 );
        l_U407 = 1;
    }
    l_U370 = 0;
    if (IS_PLAYER_PLAYING( sub_443() ))
    {
        if (DOES_GROUP_EXIST( sub_841() ))
        {
            GET_GROUP_SIZE( sub_841(), ref l_U296, ref l_U297 );
            if (l_U297 > 0)
            {
                for ( l_U296 = 0; l_U296 < l_U297; l_U296++ )
                {
                    GET_GROUP_MEMBER( sub_841(), l_U296, ref iVar2 );
                    if ((sub_4626( iVar2 )) AND ((l_U370 < 2) AND ((NOT (l_U262 == iVar2)) AND (NOT (IS_CHAR_INJURED( iVar2 ))))))
                    {
                        l_U371[l_U370] = iVar2;
                        PRINTSTRING( "DARTS GAME - Found non-playing group member \n" );
                        l_U370++;
                    }
                }
            }
        }
    }
    for ( l_U296 = 0; l_U296 < 3; l_U296++ )
    {
        iVar2 = sub_5176( l_U296 );
        if (NOT (iVar2 == nil))
        {
            if (NOT (IS_CHAR_INJURED( iVar2 )))
            {
                if ((sub_4626( iVar2 )) AND ((l_U370 < 2) AND ((NOT (l_U371[1] == iVar2)) AND ((NOT (l_U371[0] == iVar2)) AND (NOT (l_U262 == iVar2))))))
                {
                    l_U371[l_U370] = iVar2;
                    PRINTSTRING( "DARTS GAME - Found non-playing friend \n" );
                    l_U370++;
                }
            }
        }
    }
    for ( l_U296 = 0; l_U296 < l_U371; l_U296++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U371[l_U296] )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U371[l_U296] );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U371[l_U296], 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U371[l_U296] );
            SET_CHAR_COORDINATES( l_U371[l_U296], l_U374[l_U296]._fU0, l_U374[l_U296]._fU4, l_U374[l_U296]._fU8 );
            SET_CHAR_HEADING( l_U371[l_U296], l_U260 );
        }
    }
    sub_5685();
    l_U366 = sub_5882( ref l_U367 );
    if (NOT l_U366)
    {
        if (NOT (IS_CHAR_INJURED( l_U262 )))
        {
            GET_CHAR_MODEL( l_U262, ref iVar3 );
            if (iVar3 == 1844702918)
            {
                PRINTNL();
                PRINTSTRING( "SETTING VOICE TO M_Y_GIRI_LO_03_FULL_01" );
                PRINTNL();
                SET_AMBIENT_VOICE_NAME( l_U262, "M_Y_GIRI_LO_03_FULL_01" );
            }
            else if (iVar3 == -19263344)
            {
                PRINTNL();
                PRINTSTRING( "SETTING VOICE TO M_Y_GIRI_LO_02_FULL_01" );
                PRINTNL();
                SET_AMBIENT_VOICE_NAME( l_U262, "M_Y_GIRI_LO_02_FULL_01" );
            }
            else if (iVar3 == 280474699)
            {
                PRINTNL();
                PRINTSTRING( "SETTING VOICE TO M_Y_GIRI_LO_01_FULL_01" );
                PRINTNL();
                SET_AMBIENT_VOICE_NAME( l_U262, "M_Y_GIRI_LO_01_FULL_01" );
            };;;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U262 )))
    {
        if (IS_AMBIENT_SPEECH_DISABLED( l_U262 ))
        {
            l_U416 = 1;
            STOP_PED_SPEAKING( l_U262, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( sub_215() )))
    {
        if (IS_AMBIENT_SPEECH_DISABLED( sub_215() ))
        {
            l_U417 = 1;
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
    l_U388 = GET_TEXTURE_FROM_STREAMED_TXD( "dartsE1", "CJ_BLACKBOARD" );
    l_U389 = GET_TEXTURE_FROM_STREAMED_TXD( "dartsE1", sub_6603() );
    l_U390 = GET_TEXTURE_FROM_STREAMED_TXD( "dartsE1", sub_6664( ref l_U410 ) );
    l_U391 = GET_TEXTURE_FROM_STREAMED_TXD( "dartsE1", "strike" );
    sub_6868( "dartsE1", "CJ_BLACKBOARD" );
    sub_6868( "dartsE1", "name_niko" );
    sub_6868( "dartsE1", "name_roman" );
    sub_6868( "dartsE1", "name_packie" );
    sub_6868( "dartsE1", "name_jacob" );
    sub_6868( "dartsE1", "name_brucie" );
    sub_6868( "dartsE1", "name_dwayne" );
    sub_6868( "dartsE1", "name_opponent" );
    GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U386 );
    while (l_U386 == -1)
    {
        GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U386 );
        WAIT( 0 );
    }
    l_U2[0][0]._fU4 = 127575244;
    l_U2[0][1]._fU4 = 127575244;
    l_U2[0][2]._fU4 = 127575244;
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
    sub_7486();
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -0.85000000 + l_U402, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    CREATE_OBJECT( 2063078697, l_U300._fU0, l_U300._fU4, l_U300._fU8, ref l_U259, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U259, l_U290 );
    SET_OBJECT_COLLISION( l_U259, 0 );
    if (NOT g_U9220)
    {
        sub_8140();
    }
    sub_12870();
    CREATE_WIDGET_GROUP( "Darts" );
    CREATE_WIDGET_GROUP( "Player Aim" );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "No Randomness" );
    ADD_TO_WIDGET_COMBO( "Baz random" );
    ADD_TO_WIDGET_COMBO( "Les random" );
    FINISH_WIDGET_COMBO( "Targetting", ref l_U264 );
    ADD_WIDGET_FLOAT_SLIDER( "realTargetRandom", ref l_U382, 0.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fakeTargetRandom", ref l_U381, 0.00000000, 1.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "targetMoveSpeed", ref l_U383, 0.00000000, 1.00000000, 0.02000000 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Opponent Aim" );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "No Randomness" );
    ADD_TO_WIDGET_COMBO( "Baz random" );
    ADD_TO_WIDGET_COMBO( "Les random" );
    FINISH_WIDGET_COMBO( "Targetting", ref l_U264 );
    ADD_WIDGET_FLOAT_SLIDER( "realTargetRandom", ref l_U382, 0.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fakeTargetRandom", ref l_U381, 0.00000000, 1.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "targetMoveSpeed", ref l_U383, 0.00000000, 1.00000000, 0.02000000 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "AI Turn Skip" );
    ADD_WIDGET_TOGGLE( "Show AI Darts", ref l_U412 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Cameras" );
    ADD_WIDGET_FLOAT_SLIDER( "board_pos.x", ref l_U418._fU0, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_pos.y", ref l_U418._fU4, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_pos.z", ref l_U418._fU8, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_point.x", ref l_U421._fU0, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_point.y", ref l_U421._fU4, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_point.z", ref l_U421._fU8, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_pos.x", ref l_U424._fU0, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_pos.y", ref l_U424._fU4, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_pos.z", ref l_U424._fU8, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_point.x", ref l_U427._fU0, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_point.y", ref l_U427._fU4, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_point.z", ref l_U427._fU8, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_TOGGLE( "ReAttach Cams", ref l_U415 );
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
    ADD_WIDGET_TOGGLE( "instaWin", ref l_U413 );
    ADD_WIDGET_FLOAT_SLIDER( "sixAxisSensitivity", ref l_U327, -1.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fPitch", ref l_U266, -1.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fRoll", ref l_U267, -1.00000000, 1.00000000, 0.01000000 );
    END_WIDGET_GROUP();
    END_WIDGET_GROUP();
    GET_GAME_TIMER( ref l_U326 );
    l_U409 = 1;
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_3115(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3151())
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

int sub_3151()
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

void sub_3380(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, boolean bParam9)
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

void sub_3742(int iParam0)
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
        default:
        Result = -247954872;
        break;
    }
    return Result;
}

void sub_3854(int iParam0)
{
    int Result;

    switch (iParam0->_fU0)
    {
        case 0:
        Result = g_U38714;
        break;
        case 1:
        Result = g_U38715;
        break;
        case 2:
        Result = g_U38716;
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

int sub_4626(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if ((IS_CHAR_MODEL( uParam0, sub_4653( 7 ) )) || ((IS_CHAR_MODEL( uParam0, sub_4653( 6 ) )) || (IS_CHAR_MODEL( uParam0, sub_4653( 1 ) ))))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4653(unknown uParam0)
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
    sub_4952( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_4952(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_5176(int iParam0)
{
    if ((iParam0 >= 3) || (iParam0 < 0))
    {
        SCRIPT_ASSERT( "Minigames_Get_Biker_Friend_Index: Minigame Biker Index out of range" );
        return nil;
    }
    return g_U38857[iParam0]._fU0;
}

void sub_5685()
{
    sub_5694();
    DISPLAY_RADAR( 0 );
    return;
}

void sub_5694()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12304 = 1;
    if (NOT (g_U26739._fU0 == 19))
    {
        g_U26739._fU24 = 1;
        g_U26739._fU28 = 0;
        if (NOT (g_U26739._fU8 == 12))
        {
            sub_5763();
        }
        return;
    }
    g_U12303 = 1;
    sub_5829();
    return;
}

void sub_5763()
{
    if (NOT (g_U26739._fU32 > 0))
    {
        return;
    }
    g_U26739._fU32--;
    return;
}

void sub_5829()
{
    g_U26737._fU4 = 0;
    return;
}

int sub_5882(unknown uParam0)
{
    (uParam0^) = g_U26739._fU0;
    if (g_U26739._fU0 == 19)
    {
        return 0;
    }
    return 1;
}

void sub_6603()
{
    string Result;

    Result = "name_johnny";
    return Result;
}

void sub_6664(int iParam0)
{
    string Result;

    switch (iParam0->_fU0)
    {
        case 0:
        Result = "name_jim";
        break;
        case 1:
        Result = "name_terry";
        break;
        case 2:
        Result = "name_clay";
        break;
        default:
        Result = "name_opponent";
        break;
    }
    return Result;
}

void sub_6868(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7486()
{
    float fVar2;
    float fVar3;

    SET_TEXT_RENDER_ID( l_U386 );
    DRAW_SPRITE( l_U388, 0.25000000, 0.50000000, 0.50000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
    DRAW_SPRITE( l_U389, 0.13000000, 0.15000000, 0.20000000, 0.10000000, 0.00000000, 255, 255, 255, 255 );
    DRAW_SPRITE( l_U390, 0.37000000, 0.15000000, 0.20000000, 0.10000000, 0.00000000, 255, 255, 255, 255 );
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
                    DRAW_SPRITE( l_U391, fVar2, fVar3 - 0.04500000, 0.12000000, 0.05000000, 0.00000000, 255, 255, 255, 255 );
                }
            }
        }
        fVar2 = 0.35000000;
        fVar3 = 0.23000000;
    }
    return;
}

void sub_8140()
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
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -0.70000000 + l_U402, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                SET_CAM_POS( uVar8[0], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -0.70000000 + l_U402, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                POINT_CAM_AT_OBJECT( uVar8[0], l_U257 );
                CREATE_CAM( 14, ref uVar8[1] );
                CREATE_CAM( 3, ref uVar11 );
                SET_CAM_ACTIVE( uVar8[0], 1 );
                SET_CAM_PROPAGATE( uVar8[0], 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_WIDESCREEN_BORDERS( 1 );
                for ( l_U296 = 0; l_U296 < 3; l_U296++ )
                {
                    CREATE_OBJECT( 127575244, l_U286._fU0, l_U286._fU4, l_U286._fU8, ref l_U161[l_U296]._fU0, 1 );
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
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -0.70000000 + l_U402, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
                    SET_CAM_POS( uVar8[1], l_U300._fU0, l_U300._fU4, l_U300._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, 0.00000000 + l_U402, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
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
                    sub_10101( 0 );
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
                    sub_10101( 1 );
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
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, 0.00000000, -0.70000000 + l_U402, 0.00000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
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
                    sub_10101( 2 );
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
    g_U9220 = 1;
    return;
}

void sub_10101(int iParam0)
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
            sub_2540( 3 );
            sub_206();
        }
        sub_2654();
        GET_FRAME_TIME( ref uVar9 );
        l_U161[iParam0]._fU8 = {l_U161[iParam0]._fU8 - ((l_U161[iParam0]._fU20 * uVar9) * l_U325)};
        if (l_U161[iParam0]._fU8._fU4 > (l_U161[iParam0]._fU32._fU4 - fVar8))
        {
            l_U161[iParam0]._fU96 = 1;
            l_U161[iParam0]._fU100 = 0;
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U161[iParam0]._fU32._fU0, l_U161[iParam0]._fU32._fU4 + l_U402, l_U161[iParam0]._fU32._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
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
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U161[iParam0]._fU8._fU0, l_U161[iParam0]._fU8._fU4 + l_U402, l_U161[iParam0]._fU8._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
            SET_OBJECT_COORDINATES( l_U161[iParam0]._fU0, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
            l_U161[iParam0]._fU80._fU4 += 1000.00000000 * uVar9;
            SET_OBJECT_ROTATION( l_U161[iParam0]._fU0, l_U161[iParam0]._fU80._fU0, l_U161[iParam0]._fU80._fU4, l_U161[iParam0]._fU80._fU8 );
        }
    }
    return;
}

void sub_12870()
{
    if (GET_IS_WIDESCREEN())
    {
        l_U418 = {-0.20000000, -0.98000000, 0.00000000};
        l_U421 = {-0.22000000, l_U402, 0.00000000};
        l_U408 = 1;
    }
    else
    {
        l_U418 = {0.00000000, -0.61000000 + l_U402, 0.00000000};
        l_U421 = {0.00000000, 0.00000000, 0.00000000};
        l_U424 = {0.00000000, -0.61000000 + l_U402, 0.00000000};
        l_U427 = {-0.26000000, 0.00000000, 0.00000000};
        l_U408 = 0;
    }
    BEGIN_CAM_COMMANDS( ref l_U295 );
    CREATE_CAM( 3, ref l_U294 );
    CREATE_CAM( 14, ref l_U291 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U418._fU0, l_U418._fU4, l_U418._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    SET_CAM_POS( l_U291, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U421._fU0, l_U421._fU4, l_U421._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    POINT_CAM_AT_COORD( l_U291, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
    if (l_U408)
    {
        SET_CAM_FOV( l_U291, 45.00000000 );
    }
    CREATE_CAM( 14, ref l_U292 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U424._fU0, l_U424._fU4, l_U424._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    SET_CAM_POS( l_U292, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U427._fU0, l_U427._fU4, l_U427._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    POINT_CAM_AT_COORD( l_U292, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
    if (l_U408)
    {
        SET_CAM_FOV( l_U292, 45.00000000 );
    }
    CREATE_CAM( 14, ref l_U293 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U418._fU0, l_U418._fU4, l_U418._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    if ((l_U260 < 1) || (l_U260 > 359))
    {
        SET_CAM_POS( l_U293, l_U300._fU0 + 0.40000000, l_U300._fU4 - 2.90000000, l_U300._fU8 - 0.10000000 );
    }
    else
    {
        SET_CAM_POS( l_U293, l_U300._fU0 - 0.40000000, l_U300._fU4 + 2.90000000, l_U300._fU8 - 0.10000000 );
    }
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U421._fU0, l_U421._fU4, l_U421._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    POINT_CAM_AT_COORD( l_U293, l_U300._fU0, l_U300._fU4, l_U300._fU8 - 0.40000000 );
    if (l_U408)
    {
        SET_CAM_FOV( l_U293, 45.00000000 );
    }
    SET_CAM_ACTIVE( l_U291, 1 );
    SET_CAM_PROPAGATE( l_U291, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return;
}

void sub_15627()
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
    sub_7486();
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

void sub_16002()
{
    sub_16011();
    switch (l_U1)
    {
        case 0:
        if (l_U331 == 0)
        {
            sub_16173();
        }
        else
        {
            sub_21630();
            sub_22129();
        }
        break;
        case 1:
        sub_23150();
        break;
        case 2:
        sub_24403();
        sub_27914();
        break;
        case 3:
        CLEAR_HELP();
        sub_37352();
        break;
        default: break;
    }
    return;
}

void sub_16011()
{
    if (NOT l_U432)
    {
        if (NOT (IS_CONTROL_PRESSED( 2, 77 )))
        {
            l_U432 = 1;
        }
    }
    if (l_U331 == 1)
    {
        if (((IS_CONTROL_JUST_PRESSED( 2, 4 )) AND (NOT IS_USING_CONTROLLER())) || ((l_U432) AND (IS_CONTROL_PRESSED( 2, 77 ))))
        {
            l_U1 = 3;
        }
    }
    return;
}

void sub_16173()
{
    int iVar2;

    if (l_U434)
    {
        if (TIMERB() > 600)
        {
            l_U434 = 0;
            sub_16214();
        }
    }
    else if (((NOT (IS_CONTROL_JUST_PRESSED( 2, 4 ))) AND (NOT IS_USING_CONTROLLER())) || ((NOT (IS_CONTROL_JUST_PRESSED( 2, 77 ))) AND (IS_USING_CONTROLLER())))
    {
        l_U432 = 1;
        l_U393 = 1;
        if (NOT l_U256)
        {
            GET_GAME_TIMER( ref iVar2 );
            if (((iVar2 - l_U255) < 15000) AND ((iVar2 - l_U255) > 12000))
            {
                sub_16935();
            }
        }
        if (NOT l_U403)
        {
            sub_17144();
        }
        else
        {
            sub_18109();
            sub_18963();
            sub_21410();
        }
    }
    else if ((l_U393) AND (l_U432))
    {
        if (NOT l_U434)
        {
            SETTIMERB( 0 );
            l_U434 = 1;
        }
    };;;
    return;
}

void sub_16214()
{
    l_U385 = 0;
    l_U384 = 0;
    l_U383 = 0.10000000;
    l_U381 = 0.06000000;
    l_U382 = 0.08000000;
    l_U2[l_U331][l_U332]._fU96 = 0;
    l_U2[l_U331][l_U332]._fU100 = 1;
    sub_16313();
    l_U256 = 0;
    l_U393 = 0;
    l_U403 = 0;
    l_U1 = 1;
    PLAY_SOUND_FROM_OBJECT( l_U364, "DARTS_THROW", l_U259 );
    DELETE_OBJECT( ref l_U258 );
    CLEAR_HELP();
    return;
}

void sub_16313()
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

void sub_16935()
{
    if (l_U433)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playBoredContexts()" );
        PRINTNL();
    }
    if (l_U366)
    {
        if (l_U433)
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

void sub_17144()
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
    sub_17659();
    GET_GAME_TIMER( ref l_U255 );
    l_U256 = 0;
    l_U403 = 1;
    return;
}

void sub_17659()
{
    if ((l_U328[l_U331] < 80) AND ((NOT l_U395[0]) AND (NOT l_U394)))
    {
        PRINT_HELP_FOREVER( "HELP_DOUBLE" );
        l_U395[0] = 1;
        l_U394 = 1;
    }
    if ((NOT l_U395[5]) AND ((l_U395[4]) AND (NOT l_U394)))
    {
        if (NOT l_U408)
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
        l_U395[5] = 1;
    }
    if ((NOT l_U395[4]) AND ((l_U395[3]) AND (NOT l_U394)))
    {
        PRINT_HELP_FOREVER( "HELP_SPEED" );
        l_U395[4] = 1;
    }
    if ((NOT l_U395[3]) AND ((l_U395[2]) AND (NOT l_U394)))
    {
        PRINT_HELP_FOREVER( "HELP_STEADY" );
        l_U395[3] = 1;
    }
    if ((NOT l_U395[2]) AND (NOT l_U394))
    {
        if (# -NULL-0xc238b5( 5 ))
        {
            PRINT_HELP_FOREVER( "HELP_THROW6" );
        }
        else
        {
            PRINT_HELP_FOREVER( "HELP_THROW" );
        }
        l_U395[2] = 1;
    }
    return;
}

void sub_18109()
{
    if (((IS_CONTROL_PRESSED( 2, 1 )) AND (NOT IS_USING_CONTROLLER())) || (IS_BUTTON_PRESSED( 0, 6 )))
    {
        l_U383 = 0.30000000;
    }
    else
    {
        l_U383 = 0.10000000;
    }
    if ((NOT IS_USING_CONTROLLER()) AND (# -NULL-0xc27bfa()))
    {
        l_U383 *= 2.50000000;
    }
    if (((IS_CONTROL_PRESSED( 2, 2 )) AND (NOT IS_USING_CONTROLLER())) || (IS_BUTTON_PRESSED( 0, 7 )))
    {
        if (l_U385)
        {
            if (TIMERA() > 1000)
            {
                l_U381 = 0.06000000;
                l_U382 = 0.08000000;
                l_U383 = 0.10000000;
                DELETE_OBJECT( ref l_U258 );
                CREATE_OBJECT( 2063078697, l_U2[l_U331][l_U332]._fU32._fU0, l_U2[l_U331][l_U332]._fU32._fU4, l_U2[l_U331][l_U332]._fU32._fU8, ref l_U258, 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U258, l_U290 );
                SET_OBJECT_ROTATION( l_U258, 90.00000000 + l_U260, 0.00000000, 0.00000000 );
                PLAY_SOUND_FROM_OBJECT( l_U362, "DARTS_INHALE", l_U259 );
                l_U385 = 0;
            }
        }
        else if (l_U384 < 1)
        {
            l_U381 = 0.03000000;
            l_U382 = 0.05000000;
            l_U383 = 0.10000000;
            SETTIMERA( 0 );
            DELETE_OBJECT( ref l_U258 );
            CREATE_OBJECT( -172899370, l_U2[l_U331][l_U332]._fU32._fU0, l_U2[l_U331][l_U332]._fU32._fU4, l_U2[l_U331][l_U332]._fU32._fU8, ref l_U258, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U258, l_U290 );
            SET_OBJECT_ROTATION( l_U258, 90.00000000 + l_U260, 0.00000000, 0.00000000 );
            PLAY_SOUND_FROM_OBJECT( l_U363, "DARTS_EXHALE", l_U259 );
            l_U385 = 1;
            l_U384++;
        }
    }
    else if (l_U385)
    {
        l_U381 = 0.06000000;
        l_U382 = 0.08000000;
        l_U383 = 0.10000000;
        DELETE_OBJECT( ref l_U258 );
        CREATE_OBJECT( 2063078697, l_U2[l_U331][l_U332]._fU32._fU0, l_U2[l_U331][l_U332]._fU32._fU4, l_U2[l_U331][l_U332]._fU32._fU8, ref l_U258, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U258, l_U290 );
        SET_OBJECT_ROTATION( l_U258, 90.00000000 + l_U260, 0.00000000, 0.00000000 );
        l_U385 = 0;
    }
    return;
}

void sub_18963()
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
        if ((l_U2[l_U331][l_U332]._fU32._fU0 + (l_U383 * uVar4)) < 0.33000000)
        {
            l_U2[l_U331][l_U332]._fU32._fU0 += l_U383 * uVar4;
            bVar2 = true;
        }
    }
    else if (uVar5 < -40.00000000)
    {
        if ((l_U2[l_U331][l_U332]._fU32._fU0 - (l_U383 * uVar4)) > -0.33000000)
        {
            l_U2[l_U331][l_U332]._fU32._fU0 -= l_U383 * uVar4;
            bVar2 = true;
        }
    }
    if (uVar6 > 40.00000000)
    {
        if ((l_U2[l_U331][l_U332]._fU32._fU8 - (l_U383 * uVar4)) > -0.33000000)
        {
            l_U2[l_U331][l_U332]._fU32._fU8 -= l_U383 * uVar4;
            bVar2 = true;
        }
    }
    else if (uVar6 < -40.00000000)
    {
        if ((l_U2[l_U331][l_U332]._fU32._fU8 + (l_U383 * uVar4)) < 0.33000000)
        {
            l_U2[l_U331][l_U332]._fU32._fU8 += l_U383 * uVar4;
            bVar2 = true;
        }
    }
    if (NOT bVar2)
    {
        GET_MOUSE_INPUT( ref uVar9, ref uVar10 );
        if (uVar9 > 1.00000000)
        {
            if ((l_U2[l_U331][l_U332]._fU32._fU0 + (l_U383 * uVar4)) < 0.33000000)
            {
                l_U2[l_U331][l_U332]._fU32._fU0 += l_U383 * uVar4;
                bVar2 = true;
            }
        }
        else if (uVar9 < -1.00000000)
        {
            if ((l_U2[l_U331][l_U332]._fU32._fU0 - (l_U383 * uVar4)) > -0.33000000)
            {
                l_U2[l_U331][l_U332]._fU32._fU0 -= l_U383 * uVar4;
                bVar2 = true;
            }
        }
        if (uVar10 > 1.00000000)
        {
            if ((l_U2[l_U331][l_U332]._fU32._fU8 - (l_U383 * uVar4)) > -0.33000000)
            {
                l_U2[l_U331][l_U332]._fU32._fU8 -= l_U383 * uVar4;
                bVar2 = true;
            }
        }
        else if (uVar10 < -1.00000000)
        {
            if ((l_U2[l_U331][l_U332]._fU32._fU8 + (l_U383 * uVar4)) < 0.33000000)
            {
                l_U2[l_U331][l_U332]._fU32._fU8 += l_U383 * uVar4;
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
                    if ((l_U2[l_U331][l_U332]._fU32._fU0 + (l_U383 * uVar4)) < 0.33000000)
                    {
                        l_U2[l_U331][l_U332]._fU32._fU0 += l_U383 * uVar4;
                    }
                }
                else if (l_U267 < -l_U327)
                {
                    if ((l_U2[l_U331][l_U332]._fU32._fU0 - (l_U383 * uVar4)) > -0.33000000)
                    {
                        l_U2[l_U331][l_U332]._fU32._fU0 -= l_U383 * uVar4;
                    }
                }
                if (l_U266 > l_U327)
                {
                    if ((l_U2[l_U331][l_U332]._fU32._fU8 - (l_U383 * uVar4)) > -0.33000000)
                    {
                        l_U2[l_U331][l_U332]._fU32._fU8 -= l_U383 * uVar4;
                    }
                }
                else if (l_U266 < -l_U327)
                {
                    if ((l_U2[l_U331][l_U332]._fU32._fU8 + (l_U383 * uVar4)) < 0.33000000)
                    {
                        l_U2[l_U331][l_U332]._fU32._fU8 += l_U383 * uVar4;
                    }
                }
            }
        }
    }
    l_U2[l_U331][l_U332]._fU68 = {l_U2[l_U331][l_U332]._fU32};
    if (l_U264 != 0)
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000 - l_U382, 0.00000000 + l_U382, ref l_U299 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000 - l_U381, 0.00000000 + l_U381, ref l_U298 );
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
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000 - l_U382, 0.00000000 + l_U382, ref l_U299 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000 - l_U381, 0.00000000 + l_U381, ref l_U298 );
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

void sub_21410()
{
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U2[l_U331][l_U332]._fU68._fU0, l_U2[l_U331][l_U332]._fU68._fU4 + l_U402, l_U2[l_U331][l_U332]._fU68._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
    SET_OBJECT_COORDINATES( l_U258, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
    return;
}

void sub_21630()
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

void sub_22129()
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
        sub_16313();
    }
    else
    {
        l_U2[l_U331][l_U332]._fU96 = 0;
        l_U2[l_U331][l_U332]._fU100 = 1;
        sub_16313();
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

void sub_23150()
{
    float fVar2;
    unknown uVar3;

    fVar2 = 0.04000000;
    if (l_U414)
    {
        sub_23218( "DART MOVING FROM...", ref l_U2[l_U331][l_U332]._fU8 );
    }
    GET_FRAME_TIME( ref uVar3 );
    l_U2[l_U331][l_U332]._fU8 = {l_U2[l_U331][l_U332]._fU8 - ((l_U2[l_U331][l_U332]._fU20 * uVar3) * l_U325)};
    if (l_U414)
    {
        sub_23218( "TO...", ref l_U2[l_U331][l_U332]._fU8 );
    }
    if (l_U2[l_U331][l_U332]._fU8._fU4 > (l_U2[l_U331][l_U332]._fU32._fU4 - fVar2))
    {
        l_U2[l_U331][l_U332]._fU96 = 1;
        l_U2[l_U331][l_U332]._fU100 = 0;
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U2[l_U331][l_U332]._fU44._fU0, l_U2[l_U331][l_U332]._fU44._fU4 + l_U402, l_U2[l_U331][l_U332]._fU44._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
        SET_OBJECT_COORDINATES( l_U2[l_U331][l_U332]._fU0, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
        if (l_U250)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U2[l_U331][l_U332]._fU32._fU0, l_U2[l_U331][l_U332]._fU32._fU4 + l_U402, l_U2[l_U331][l_U332]._fU32._fU8 - 0.10000000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
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
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U2[l_U331][l_U332]._fU8._fU0, l_U2[l_U331][l_U332]._fU8._fU4 + l_U402, l_U2[l_U331][l_U332]._fU8._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
        SET_OBJECT_COORDINATES( l_U2[l_U331][l_U332]._fU0, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
        l_U2[l_U331][l_U332]._fU80._fU4 += 1000.00000000 * uVar3;
        SET_OBJECT_ROTATION( l_U2[l_U331][l_U332]._fU0, l_U2[l_U331][l_U332]._fU80._fU0, l_U2[l_U331][l_U332]._fU80._fU4, l_U2[l_U331][l_U332]._fU80._fU8 );
    }
    return;
}

void sub_23218(unknown uParam0, int iParam1)
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

void sub_24403()
{
    float fVar2;
    float fVar3;
    float fVar4;
    int iVar5;

    GET_ANGLE_BETWEEN_2D_VECTORS( 0.00000000, 1.00000000, l_U2[l_U331][l_U332]._fU32._fU0 + 0.00350000, l_U2[l_U331][l_U332]._fU32._fU8, ref fVar3 );
    fVar2 = sub_24508( ref l_U2[l_U331][l_U332]._fU32 );
    sub_24557();
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
            sub_25080();
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
        sub_25908();
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
    if (l_U414)
    {
        sub_27670( "dartAngle", fVar3 );
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

void sub_24508(int iParam0)
{
    return SQRT( (iParam0->_fU0 * iParam0->_fU0) + (iParam0->_fU8 * iParam0->_fU8) );
}

void sub_24557()
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

void sub_25080()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U433)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playBullContexts()" );
        PRINTNL();
    }
    if (l_U331 == 0)
    {
        if (iVar2 > 2000)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID() DARTS_BULLSEYE)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_BULLSEYE", 1, 1, 2 );
        }
        else if (l_U366)
        {
            if (l_U433)
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
        if (l_U433)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BOAST)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_BOAST", 1, 1, 2 );
    }
    else if (l_U433)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_GOOD_SHOT)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U262, "DARTS_GOOD_SHOT", 1, 1, 2 );;;
    return;
}

void sub_25908()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U433)
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
                if (l_U433)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_MISSES_BOARD)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_MISSES_BOARD", 1, 1, 2 );
            }
            else if (iVar2 > 500)
            {
                if (l_U433)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );
            }
            else if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );;;
        }
        else if (iVar2 > 1000)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_MISSES_BOARD)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_MISSES_BOARD", 1, 1, 2 );
        }
        else if (iVar2 > 500)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );
        }
        else if (l_U433)
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
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BORED)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_BORED", 1, 1, 2 );
        }
    }
    else if (l_U433)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BAD_SHOT)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U262, "DARTS_BAD_SHOT", 1, 1, 2 );;;
    return;
}

void sub_27670(unknown uParam0, unknown uParam1)
{
    PRINTSTRING( uParam0 );
    PRINTSTRING( " = " );
    PRINTFLOAT( uParam1 );
    PRINTNL();
    return;
}

void sub_27914()
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
        sub_28095();
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
        sub_31071();
        l_U328[l_U331] = l_U252[l_U331];
        sub_32588();
        l_U1 = 0;
        sub_32758();
    }
    else if (l_U354 == 180)
    {
        sub_33645();
        if (l_U331 == 0)
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 321, 1 );
            AWARD_ACHIEVEMENT( 2 );
        }
    }
    if (l_U354 == 140)
    {
        sub_35047();
    }
    if (NOT l_U369)
    {
        if (l_U331 == 0)
        {
            if (l_U332 < 2)
            {
                if ((l_U328[l_U331] == 50) || (((l_U328[l_U331] mod 2) == 0) AND ((l_U328[l_U331] > 0) AND (l_U328[l_U331] < 41))))
                {
                    sub_36384();
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
            sub_16011();
        }
    };;;
    if (l_U332 == 2)
    {
        SETTIMERA( 0 );
        sub_32588();
    }
    l_U332++;
    if (l_U1 != 3)
    {
        l_U1 = 0;
    }
    if (l_U332 == 3)
    {
        l_U1 = 0;
        sub_32758();
    };;;
    return;
}

void sub_28095()
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
        sub_2540( 0 );
        sub_28219( 1 );
        sub_28819( ref l_U410 );
    }
    else
    {
        PRINT_NOW( "PLAYER_LOSE", 5000, 1 );
        INCREMENT_INT_STAT_NO_MESSAGE( 320, 1 );
        sub_2540( 1 );
        sub_29065( ref l_U410 );
    }
    sub_29256();
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
    l_U432 = 0;
    l_U252[0] = -1;
    l_U252[1] = -1;
    return;
}

void sub_28219(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U38782[uParam0]._fU0)
    {
        iVar3 = ProtectedGet(g_U38782[uParam0]._fU8);
        if (iVar3 > 0)
        {
            sub_28288( 2, iVar3 );
            g_U38782[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_28288(unknown uParam0, int iParam1)
{
    g_U26712[uParam0]._fU4 += iParam1;
    if (g_U26712[uParam0]._fU4 > g_U26712[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U26712[uParam0]._fU4 = g_U26712[uParam0]._fU0;
    }
    sub_28458( 0 );
    return;
}

void sub_28458(boolean bParam0)
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
        sub_28703();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_28703()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15728[5] = 1;
    return;
}

void sub_28819(int iParam0)
{
    int iVar3;

    switch (iParam0->_fU0)
    {
        case 0:
        iVar3 = g_U38714;
        break;
        case 1:
        iVar3 = g_U38715;
        break;
        case 2:
        iVar3 = g_U38716;
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
        g_U38714 = iVar3;
        break;
        case 1:
        g_U38715 = iVar3;
        break;
        case 2:
        g_U38716 = iVar3;
        break;
    }
    return;
}

void sub_29065(int iParam0)
{
    int iVar3;

    switch (iParam0->_fU0)
    {
        case 0:
        iVar3 = g_U38714;
        break;
        case 1:
        iVar3 = g_U38715;
        break;
        case 2:
        iVar3 = g_U38716;
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
        g_U38714 = iVar3;
        break;
        case 1:
        g_U38715 = iVar3;
        break;
        case 2:
        g_U38716 = iVar3;
        break;
    }
    return;
}

void sub_29256()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U433)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playWinContexts()" );
        PRINTNL();
    }
    if (l_U331 == 0)
    {
        if (iVar2 > 1500)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_LOSES)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_LOSES", 1, 1, 2 );
        }
        else if (l_U366)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_WINS)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_WINS", 1, 1, 2 );
        }
        else if (l_U433)
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
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_LOSES)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_LOSES", 1, 1, 2 );
        }
        else if (l_U433)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_LOSES)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_LOSES", 1, 1, 2 );;
    }
    else if (iVar2 > 1500)
    {
        if (l_U433)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_LOSES)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_LOSES", 1, 1, 2 );
    }
    else if (l_U433)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_WON)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U262, "GAME_WON", 1, 1, 2 );;;;
    return;
}

void sub_31071()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U433)
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
                if (l_U433)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_FAILS_CHECK_OUT)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_FAILS_CHECK_OUT", 1, 1, 2 );
            }
            else if (iVar2 < 2500)
            {
                if (l_U433)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );
            }
            else if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );;;
        }
        else if (iVar2 < 1000)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_BUSTS)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_BUSTS", 1, 1, 2 );
        }
        else if (iVar2 < 2000)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_FAILS_CHECK_OUT)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_FAILS_CHECK_OUT", 1, 1, 2 );
        }
        else if (iVar2 < 2500)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );
        }
        else if (l_U433)
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
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BAD_SHOT)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_BAD_SHOT", 1, 1, 2 );
        }
        else if (iVar2 < 2000)
        {
            if (l_U433)
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

void sub_32588()
{
    boolean bVar2;

    SETTIMERA( 0 );
    l_U432 = 0;
    WAIT( 0 );
    while ((NOT bVar2) AND (IS_MESSAGE_BEING_DISPLAYED()))
    {
        WAIT( 0 );
        if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U257 )))
        {
            sub_2540( 3 );
            sub_206();
        }
        sub_2654();
        if (NOT (IS_CONTROL_JUST_PRESSED( 2, 77 )))
        {
            l_U432 = 1;
        }
        else if (l_U432)
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

void sub_32758()
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
        sub_33197();
        if (l_U331 != 1)
        {
            sub_7486();
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
        sub_32588();
    }
    else
    {
        l_U331 = 0;
        CLEAR_HELP();
        PRINT_WITH_NUMBER_NOW( "SWITCH_PLAYER", l_U328[l_U331], 5000, 0 );
    }
    l_U432 = 0;
    return;
}

void sub_33197()
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

void sub_33645()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U433)
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
                if (l_U433)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_GETS_180)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_GETS_180", 1, 1, 2 );
            }
            else if (iVar2 > 500)
            {
                if (l_U433)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
            }
            else if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_HAPPY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_HAPPY", 1, 1, 2 );;;
        }
        else if (iVar2 > 1000)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_GETS_180)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_GETS_180", 1, 1, 2 );
        }
        else if (iVar2 > 500)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
        }
        else if (l_U433)
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
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BOAST)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_BOAST", 1, 1, 2 );
        }
        else if (l_U433)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_HAPPY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_HAPPY", 1, 1, 2 );;
    }
    else if (l_U433)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_PLAYING_WELL)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U262, "GAME_PLAYING_WELL", 1, 1, 2 );;;
    return;
}

void sub_35047()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U433)
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
                if (l_U433)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_GETS_140)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_GETS_140", 1, 1, 2 );
            }
            else if (iVar2 > 500)
            {
                if (l_U433)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
            }
            else if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_HAPPY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_HAPPY", 1, 1, 2 );;;
        }
        else if (iVar2 > 1000)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_GETS_140)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_GETS_140", 1, 1, 2 );
        }
        else if (iVar2 > 500)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
        }
        else if (l_U433)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_PLAYS_WELL)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );;;;
    }
    else if (l_U366)
    {
        if (l_U433)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_HAPPY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_HAPPY", 1, 1, 2 );
    }
    else if (l_U433)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_PLAYING_WELL)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U262, "GAME_PLAYING_WELL", 1, 1, 2 );;;
    return;
}

void sub_36384()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U433)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playOneDartAwayContexts()" );
        PRINTNL();
    }
    if (l_U366)
    {
        if (iVar2 > 1500)
        {
            if (l_U433)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID() DARTS_PLAYER_1_DART_AWAY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_1_DART_AWAY", 1, 1, 2 );
        }
        else if (l_U433)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_1_DART_AWAY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U262, "DARTS_PLAYER_1_DART_AWAY", 1, 1, 2 );;
    }
    else if (iVar2 > 2000)
    {
        if (l_U433)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID() DARTS_PLAYER_1_DART_AWAY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( sub_215(), "DARTS_PLAYER_1_DART_AWAY", 1, 1, 2 );
    }
    else if (l_U433)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BOAST)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U262, "DARTS_BOAST", 1, 1, 2 );;;
    return;
}

void sub_37352()
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
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U2[l_U331][l_U332]._fU44._fU0, l_U2[l_U331][l_U332]._fU44._fU4 + l_U402, l_U2[l_U331][l_U332]._fU44._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
            SET_OBJECT_COORDINATES( l_U2[l_U331][l_U332]._fU0, l_U300._fU0, l_U300._fU4, l_U300._fU8 );
            sub_24403();
            sub_27914();
        }
        else
        {
            sub_21630();
            sub_22129();
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U2[l_U331][l_U332]._fU44._fU0, l_U2[l_U331][l_U332]._fU44._fU4 + l_U402, l_U2[l_U331][l_U332]._fU44._fU8, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
            CREATE_OBJECT( l_U2[l_U331][l_U332]._fU4, l_U300._fU0, l_U300._fU4, l_U300._fU8 - 0.12000000, ref l_U2[l_U331][l_U332]._fU0, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U2[l_U331][l_U332]._fU0, l_U290 );
            l_U2[l_U331][l_U332]._fU96 = 1;
            l_U2[l_U331][l_U332]._fU100 = 0;
            GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 90.00000000, ref l_U298 );
            SET_OBJECT_ROTATION( l_U2[l_U331][l_U332]._fU0, 90.00000000 + l_U260, l_U298, 0.00000000 );
            sub_24403();
            sub_27914();
        }
    }
    l_U332 = 0;
    return;
}

void sub_38148()
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

void sub_38598()
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
    if (l_U413)
    {
        CLEAR_HELP();
        l_U413 = 0;
        sub_28095();
    }
    if (l_U247)
    {
        if (NOT (DOES_OBJECT_EXIST( l_U240 )))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U257, l_U241._fU0 - 0.00350000, l_U241._fU4 - 0.04000000, l_U241._fU8 - 0.00100000, ref l_U300._fU0, ref l_U300._fU4, ref l_U300._fU8 );
            CREATE_OBJECT( 127575244, l_U280._fU0, l_U280._fU4, l_U280._fU8, ref l_U240, 1 );
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
                vVar2.z = sub_39010( l_U241._fU0 - 0.00350000, l_U241._fU4 - 0.04000000, l_U241._fU8 - 0.00100000 );
                SET_OBJECT_ROTATION( l_U240, vVar2.x, vVar2.y, vVar2.z );
                l_U248 = 0;
            }
            else if (l_U249)
            {
                SET_OBJECT_ROTATION( l_U240, 90 + l_U260, 0, 0 );
                l_U249 = 0;
            }
            GET_ANGLE_BETWEEN_2D_VECTORS( 0.00000000, 1.00000000, l_U241._fU0, l_U241._fU8, ref fVar6 );
            fVar5 = sub_24508( ref l_U241 );
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
    if (l_U414)
    {
        PRINTSTRING( "******************" );
        PRINTNL();
        sub_39854( "Turn", l_U332 );
        PRINTSTRING( "******************" );
        PRINTNL();
        sub_23218( "Position", ref l_U2[l_U331][l_U332]._fU8 );
        sub_23218( "Target", ref l_U2[l_U331][l_U332]._fU32 );
        sub_23218( "throwVector", ref l_U2[l_U331][l_U332]._fU20 );
        sub_39854( "Score", l_U2[l_U331][l_U332]._fU92 );
        sub_39854( "playerScore[playr]", l_U328[l_U331] );
        sub_40162( "isStuck", l_U2[l_U331][l_U332]._fU96 );
        sub_40162( "isTravelling", l_U2[l_U331][l_U332]._fU100 );
        PRINTSTRING( "******************" );
        PRINTNL();
        PRINTNL();
    }
    return;
}

float sub_39010(vector vParam0)
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

void sub_39854(unknown uParam0, unknown uParam1)
{
    PRINTSTRING( uParam0 );
    PRINTSTRING( " = " );
    PRINTINT( uParam1 );
    PRINTNL();
    return;
}

void sub_40162(unknown uParam0, boolean bParam1)
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

void sub_40385()
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
            sub_15627();
        }
        else if (IS_CONTROL_PRESSED( 2, 23 ))
        {
            CLEAR_PRINTS();
            sub_206();
        }
    }
    return;
}

