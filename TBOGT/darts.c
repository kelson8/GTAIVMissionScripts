void main()
{
    l_U0 = 55;
    l_U1 = 50;
    l_U2 = 0;
    l_U3 = 0;
    l_U253 = 0.08000000;
    l_U327 = 6.00000000;
    l_U329 = 0.10000000;
    l_U383 = 0.06000000;
    l_U384 = 0.08000000;
    l_U385 = 0.10000000;
    l_U386 = 0;
    l_U387 = 0;
    l_U393 = 1;
    l_U403 = 0.18000000;
    l_U405 = {-0.00350000, 0.00000000, -0.00100000};
    l_U413 = 1;
    l_U414 = 0;
    l_U415 = 0;
    l_U431 = 0;
    l_U432 = 0;
    l_U433 = 0;
    l_U434 = 0;
    l_U411 = {l_U436};
    l_U259 = l_U436._fU4;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_218();
    }
    WAIT( 0 );
    if (DOES_OBJECT_EXIST( l_U259 ))
    {
        sub_2053();
    }
    else
    {
        sub_218();
    }
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, 0.00000000, -1.72000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
    if (l_U410)
    {
        CLEAR_AREA( l_U302._fU0, l_U302._fU4, l_U302._fU8, 4.00000000, 1 );
    }
    while (l_U393)
    {
        WAIT( 0 );
        if (NOT (DOES_OBJECT_EXIST( l_U259 )))
        {
            sub_218();
        }
        if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U259 )))
        {
            sub_2703( 3 );
            sub_218();
        }
        sub_2787();
        switch (l_U2)
        {
            case 0:
            sub_3145();
            sub_7970();
            l_U333 = 1;
            sub_16111();
            break;
            case 1:
            sub_16486();
            sub_7970();
            if (NOT l_U409)
            {
                sub_38530();
            }
            sub_38980();
            if (l_U408)
            {
                if (IS_CHAR_DEAD( l_U264 ))
                {
                    sub_2703( 4 );
                    sub_218();
                }
            }
            break;
            case 2:
            sub_40767();
            break;
            default: break;
        }
    }
    sub_218();
    sub_218();
    return;
}

void sub_218()
{
    unknown uVar2;
    unknown uVar3;

    if (IS_PLAYER_PLAYING( sub_227() ))
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_270(), 0 );
    }
    DISPLAY_RADAR( 1 );
    DISPLAY_HUD( 1 );
    CLEAR_HELP();
    CLEAR_PRINTS();
    if (l_U410)
    {
        DELETE_OBJECT( ref l_U4[l_U333][0]._fU0 );
        DELETE_OBJECT( ref l_U4[l_U333][1]._fU0 );
        DELETE_OBJECT( ref l_U4[l_U333][2]._fU0 );
        DELETE_OBJECT( ref l_U260 );
        DELETE_OBJECT( ref l_U261 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U263 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( 2063078697 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -172899370 );
        if (IS_PLAYER_PLAYING( sub_227() ))
        {
            SET_PLAYER_CONTROL( sub_227(), 1 );
            if (l_U408)
            {
                if ((NOT (IS_CHAR_DEAD( l_U264 ))) AND (DOES_CHAR_EXIST( l_U264 )))
                {
                    if ((NOT (IS_CHAR_DEAD( l_U264 ))) AND (NOT (IS_CHAR_DEAD( sub_270() ))))
                    {
                        TASK_CLEAR_LOOK_AT( sub_270() );
                        TASK_CLEAR_LOOK_AT( l_U264 );
                    }
                    if (NOT (COMPARE_STRING( sub_617( ref l_U411 ), "PLAY_BAR_GUY" )))
                    {
                        PRINTSTRING( "Darts cleanup - opponent is friend \n" );
                        GET_PLAYER_GROUP( sub_227(), ref uVar2 );
                        if (NOT (IS_GROUP_MEMBER( l_U264, uVar2 )))
                        {
                            SET_GROUP_MEMBER( sub_838(), l_U264 );
                            PRINTSTRING( "Darts Opponent added to players group \n" );
                        }
                    }
                    FREEZE_CHAR_POSITION( l_U264, 0 );
                    if (COMPARE_STRING( sub_617( ref l_U411 ), "PLAY_BAR_GUY" ))
                    {
                        PRINTSTRING( "Darts cleanup - opponent is bar guy \n" );
                        REMOVE_CHAR_FROM_GROUP( l_U264 );
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.60000000, -0.70000000, -1.73000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                        OPEN_SEQUENCE_TASK( ref uVar3 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U302._fU0, l_U302._fU4, l_U302._fU8, 2, 20000, 0.20000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_270() );
                        CLOSE_SEQUENCE_TASK( uVar3 );
                        TASK_PERFORM_SEQUENCE( l_U264, uVar3 );
                        CLEAR_SEQUENCE_TASK( uVar3 );
                    }
                }
            }
        }
        for ( l_U298 = 0; l_U298 < l_U372; l_U298++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U373[l_U298] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U373[l_U298], sub_838() )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U373[l_U298], 0 );
                    SET_GROUP_MEMBER( sub_838(), l_U373[l_U298] );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U373[l_U298] );
                    SET_CHAR_COORDINATES( l_U373[l_U298], l_U376[l_U298]._fU0, l_U376[l_U298]._fU4, l_U376[l_U298]._fU8 );
                    SET_CHAR_HEADING( l_U373[l_U298], l_U262 );
                    PRINTSTRING( "Darts non-playing group member added to players group \n" );
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U264 )))
        {
            if (l_U417)
            {
                STOP_PED_SPEAKING( l_U264, 1 );
            }
        }
        if (NOT (IS_CHAR_INJURED( sub_270() )))
        {
            if (l_U418)
            {
                STOP_PED_SPEAKING( sub_270(), 1 );
            }
        }
        DESTROY_CAM( l_U293 );
        DESTROY_CAM( l_U294 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U297 );
        if (IS_PLAYER_PLAYING( sub_227() ))
        {
            SET_CAM_BEHIND_PED( sub_270() );
        }
        MARK_STREAMED_TXD_AS_NO_LONGER_NEEDED( "DartsE2" );
        sub_1665();
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_227()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_270()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_617(int iParam0)
{
    string Result;

    switch (iParam0->_fU0)
    {
        case 0:
        Result = "PLAY_ARMANDO";
        break;
        case 1:
        Result = "PLAY_HENRIQUE";
        break;
        default:
        Result = "PLAY_BAR_GUY";
        break;
    }
    return Result;
}

void sub_838()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1665()
{
    DISPLAY_RADAR( 1 );
    SET_MINIGAME_IN_PROGRESS( 0 );
    g_U12380 = 0;
    if (g_U28807._fU0[0] == 34)
    {
        if (sub_1715())
        {
            g_U12379 = 0;
        }
        sub_1872();
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        if (g_U28807._fU40 == 8)
        {
            g_U28807._fU40 = 3;
        }
    }
    else if (NOT (g_U28807._fU24 == 16))
    {
        if (g_U28807._fU36 == 8)
        {
            g_U28807._fU36 = 3;
        }
    }
    else
    {
        return;
    }
    g_U28807._fU52 = 1;
    return;
}

int sub_1715()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Tony1" )) > 0)
    {
        PRINTSTRING( "\n\n*******************\nTony1 Active so don't change the g_onMission flag\n*******************\n" );
        return 0;
    }
    return 1;
}

void sub_1872()
{
    g_U28805._fU4 = 1;
    return;
}

void sub_2053()
{
    GET_OBJECT_HEADING( l_U259, ref l_U262 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, -0.30000000, -2.36850000 + l_U403, -1.72720000, ref l_U270._fU0, ref l_U270._fU4, ref l_U270._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.50000000, -2.36850000 + l_U403, -1.65000000, ref l_U273._fU0, ref l_U273._fU4, ref l_U273._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, -3.00000000 + l_U403, -1.72720000, ref l_U288._fU0, ref l_U288._fU4, ref l_U288._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.25000000, -4.50000000, -1.60000000, ref l_U376[0]._fU0, ref l_U376[0]._fU4, ref l_U376[0]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, -0.50000000, -4.50000000, -1.60000000, ref l_U376[1]._fU0, ref l_U376[1]._fU4, ref l_U376[1]._fU8 );
    l_U279 = {0.00000000, -2.36850000 + l_U403, 0.10000000};
    l_U279 = {l_U279 + l_U405};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U279._fU0, l_U279._fU4, l_U279._fU8, ref l_U276._fU0, ref l_U276._fU4, ref l_U276._fU8 );
    l_U285 = {0.00000000, -0.15000000, 0.00000000};
    l_U285 = {l_U285 + l_U405};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, 0.00000000, 0.00000000, ref l_U282._fU0, ref l_U282._fU4, ref l_U282._fU8 );
    return;
}

void sub_2703(unknown uParam0)
{
    if (g_U28807._fU0[0] == 34)
    {
        return;
    }
    if (NOT (g_U28807._fU28 == 16))
    {
        g_U28807._fU40 = uParam0;
        return;
    }
    g_U28807._fU36 = uParam0;
    return;
}

void sub_2787()
{
    if (NOT l_U433)
    {
        if ((IS_CONTROL_PRESSED( 2, 78 )) AND (NOT (IS_CONTROL_PRESSED( 2, 77 ))))
        {
            l_U433 = 1;
        }
        else
        {
            l_U433 = 0;
        }
    }
    if (l_U2 != 2)
    {
        if (l_U431)
        {
            if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
            {
                sub_2703( 3 );
                sub_218();
            }
            if (((# -NULL-0xc27bfa()) || (l_U433)) AND (sub_2898()))
            {
                l_U394 = 0;
                l_U431 = 0;
                l_U432 = 0;
                l_U433 = 0;
                CLEAR_HELP();
            }
        }
        if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
        {
            if (NOT l_U432)
            {
                PRINT_HELP( "QUIT_MSG" );
                l_U432 = 1;
            }
        }
        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "QUIT_MSG" ))
        {
            l_U431 = 1;
        }
        else
        {
            l_U431 = 0;
            l_U432 = 0;
        }
    }
    return;
}

int sub_2898()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_3145()
{
    int iVar2;
    int iVar3;

    SET_PLAYER_CONTROL( sub_227(), 0 );
    DO_SCREEN_FADE_OUT( 500 );
    while (NOT IS_SCREEN_FADED_OUT())
    {
        WAIT( 0 );
    }
    if (DOES_OBJECT_EXIST( l_U259 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, 0.00000000, 0.00000000, ref l_U419._fU0, ref l_U419._fU4, ref l_U419._fU8 );
        CLEAR_AREA( l_U419._fU0, l_U419._fU4, l_U419._fU8, 2.00000000, 1 );
    }
    CLEAR_PRINTS();
    DISPLAY_RADAR( 0 );
    DISPLAY_HUD( 0 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_270(), 1 );
    sub_3344( "DARTS", 3 );
    REQUEST_STREAMED_TXD( "DartsE2", 0 );
    while (NOT (HAS_STREAMED_TXD_LOADED( "DartsE2" )))
    {
        WAIT( 0 );
    }
    if ((l_U262 < 1) || (l_U262 > 359))
    {
        sub_3609( 1151.53200000, 731.44890000, 34.91700000, 84, l_U302._fU0, l_U302._fU4, l_U302._fU8, 5, -1, 0 );
    }
    else
    {
        sub_3609( -439.15930000, 457.63810000, 8.90010000, 83, l_U302._fU0, l_U302._fU4, l_U302._fU8, 5, -1, 0 );
    }
    l_U263 = sub_3971( ref l_U411 );
    l_U267 = sub_4063( ref l_U411 );
    REQUEST_MODEL( l_U263 );
    REQUEST_MODEL( 2063078697 );
    REQUEST_MODEL( -172899370 );
    while ((NOT (HAS_MODEL_LOADED( -172899370 ))) || ((NOT (HAS_MODEL_LOADED( 2063078697 ))) || (NOT (HAS_MODEL_LOADED( l_U263 )))))
    {
        WAIT( 0 );
    }
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    while (NOT (REQUEST_MISSION_AUDIO_BANK( "SCRIPT_AMBIENT/DARTS" )))
    {
        WAIT( 0 );
    }
    l_U358 = GET_SOUND_ID();
    l_U359 = GET_SOUND_ID();
    l_U360 = GET_SOUND_ID();
    l_U361 = GET_SOUND_ID();
    l_U362 = GET_SOUND_ID();
    l_U363 = GET_SOUND_ID();
    l_U364 = GET_SOUND_ID();
    l_U365 = GET_SOUND_ID();
    l_U366 = GET_SOUND_ID();
    l_U367 = GET_SOUND_ID();
    if (NOT (IS_CHAR_INJURED( g_U9267 )))
    {
        l_U264 = g_U9267;
        REMOVE_CHAR_FROM_GROUP( l_U264 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U264 );
        SET_CHAR_COORDINATES( l_U264, l_U273._fU0, l_U273._fU4, l_U273._fU8 - 0.18000000 );
        SET_CHAR_HEADING( l_U264, l_U262 + 25.00000000 );
        FREEZE_CHAR_POSITION( l_U264, 1 );
        l_U408 = 1;
    }
    l_U372 = 0;
    if (IS_PLAYER_PLAYING( sub_227() ))
    {
        if (DOES_GROUP_EXIST( sub_838() ))
        {
            GET_GROUP_SIZE( sub_838(), ref l_U298, ref l_U299 );
            if (l_U299 > 0)
            {
                for ( l_U298 = 0; l_U298 < l_U299; l_U298++ )
                {
                    GET_GROUP_MEMBER( sub_838(), l_U298, ref iVar2 );
                    if ((sub_4779( iVar2 )) AND ((l_U372 < 2) AND ((NOT (l_U264 == iVar2)) AND (NOT (IS_CHAR_INJURED( iVar2 ))))))
                    {
                        l_U373[l_U372] = iVar2;
                        PRINTSTRING( "DARTS GAME - Found non-playing group member \n" );
                        l_U372++;
                    }
                }
            }
        }
    }
    for ( l_U298 = 0; l_U298 < 3; l_U298++ )
    {
        iVar2 = sub_5445( l_U298 );
        if (NOT (iVar2 == nil))
        {
            if (NOT (IS_CHAR_INJURED( iVar2 )))
            {
                if ((sub_4779( iVar2 )) AND ((l_U372 < 2) AND ((NOT (l_U373[1] == iVar2)) AND ((NOT (l_U373[0] == iVar2)) AND (NOT (l_U264 == iVar2))))))
                {
                    l_U373[l_U372] = iVar2;
                    PRINTSTRING( "DARTS GAME - Found non-playing friend \n" );
                    l_U372++;
                }
            }
        }
    }
    for ( l_U298 = 0; l_U298 < l_U373; l_U298++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U373[l_U298] )))
        {
            REMOVE_CHAR_FROM_GROUP( l_U373[l_U298] );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U373[l_U298], 1 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U373[l_U298] );
            SET_CHAR_COORDINATES( l_U373[l_U298], l_U376[l_U298]._fU0, l_U376[l_U298]._fU4, l_U376[l_U298]._fU8 );
            SET_CHAR_HEADING( l_U373[l_U298], l_U262 );
        }
    }
    sub_5847();
    sub_6076( l_U264 );
    l_U368 = sub_6316( ref l_U369, 0 );
    if (NOT l_U368)
    {
        if (NOT (IS_CHAR_INJURED( l_U264 )))
        {
            GET_CHAR_MODEL( l_U264, ref iVar3 );
            if (iVar3 == 1844702918)
            {
                PRINTNL();
                PRINTSTRING( "SETTING VOICE TO M_Y_GIRI_LO_03_FULL_01" );
                PRINTNL();
                SET_AMBIENT_VOICE_NAME( l_U264, "M_Y_GIRI_LO_03_FULL_01" );
            }
            else if (iVar3 == -19263344)
            {
                PRINTNL();
                PRINTSTRING( "SETTING VOICE TO M_Y_GIRI_LO_02_FULL_01" );
                PRINTNL();
                SET_AMBIENT_VOICE_NAME( l_U264, "M_Y_GIRI_LO_02_FULL_01" );
            }
            else if (iVar3 == 280474699)
            {
                PRINTNL();
                PRINTSTRING( "SETTING VOICE TO M_Y_GIRI_LO_01_FULL_01" );
                PRINTNL();
                SET_AMBIENT_VOICE_NAME( l_U264, "M_Y_GIRI_LO_01_FULL_01" );
            };;;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U264 )))
    {
        if (IS_AMBIENT_SPEECH_DISABLED( l_U264 ))
        {
            l_U417 = 1;
            STOP_PED_SPEAKING( l_U264, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( sub_270() )))
    {
        if (IS_AMBIENT_SPEECH_DISABLED( sub_270() ))
        {
            l_U418 = 1;
            STOP_PED_SPEAKING( sub_270(), 0 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U259 ))
    {
        GET_OBJECT_COORDINATES( l_U259, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
        GET_INTERIOR_AT_COORDS( l_U302._fU0, l_U302._fU4, l_U302._fU8, ref l_U291 );
        GET_ROOM_KEY_FROM_OBJECT( l_U259, ref l_U292 );
        REMOVE_PROJTEX_FROM_OBJECT( l_U259 );
    }
    else
    {
        sub_218();
    }
    l_U266 = 2;
    l_U389 = GET_TEXTURE_FROM_STREAMED_TXD( "DartsE2", "CJ_BLACKBOARD" );
    l_U390 = GET_TEXTURE_FROM_STREAMED_TXD( "DartsE2", sub_7060() );
    l_U391 = GET_TEXTURE_FROM_STREAMED_TXD( "DartsE2", sub_7119( ref l_U411 ) );
    l_U392 = GET_TEXTURE_FROM_STREAMED_TXD( "DartsE2", "strike" );
    sub_7303( "DartsE2", "CJ_BLACKBOARD" );
    sub_7303( "DartsE2", "name_armando" );
    sub_7303( "DartsE2", "name_brucie" );
    sub_7303( "DartsE2", "name_henrique" );
    sub_7303( "DartsE2", "name_mori" );
    sub_7303( "DartsE2", "name_opponent" );
    sub_7303( "DartsE2", "name_tony" );
    sub_7303( "DartsE2", "name_luis" );
    sub_7303( "DartsE2", "strike" );
    sub_7303( "DartsE2", "TARGET" );
    GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U388 );
    while (l_U388 == -1)
    {
        GET_SCRIPT_RENDERTARGET_RENDER_ID( ref l_U388 );
        WAIT( 0 );
    }
    l_U4[0][0]._fU4 = l_U263;
    l_U4[0][1]._fU4 = l_U263;
    l_U4[0][2]._fU4 = l_U263;
    l_U4[1][0]._fU4 = l_U263;
    l_U4[1][1]._fU4 = l_U263;
    l_U4[1][2]._fU4 = l_U263;
    l_U305[0] = 20;
    l_U305[10] = 3;
    l_U305[1] = 1;
    l_U305[11] = 19;
    l_U305[2] = 18;
    l_U305[12] = 7;
    l_U305[3] = 4;
    l_U305[13] = 16;
    l_U305[4] = 13;
    l_U305[14] = 8;
    l_U305[5] = 6;
    l_U305[15] = 11;
    l_U305[6] = 10;
    l_U305[16] = 14;
    l_U305[7] = 15;
    l_U305[17] = 9;
    l_U305[8] = 2;
    l_U305[18] = 12;
    l_U305[9] = 17;
    l_U305[19] = 5;
    l_U305[20] = 20;
    SET_CHAR_COORDINATES( sub_270(), l_U270._fU0, l_U270._fU4, l_U270._fU8 );
    SET_CHAR_HEADING( sub_270(), l_U262 - 35.00000000 );
    sub_7970();
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, -0.85000000 + l_U403, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
    CREATE_OBJECT( 2063078697, l_U302._fU0, l_U302._fU4, l_U302._fU8, ref l_U261, 1 );
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U261, l_U292 );
    SET_OBJECT_COLLISION( l_U261, 0 );
    if (NOT g_U9269)
    {
        sub_8624();
    }
    sub_13354();
    CREATE_WIDGET_GROUP( "Darts" );
    CREATE_WIDGET_GROUP( "Player Aim" );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "No Randomness" );
    ADD_TO_WIDGET_COMBO( "Baz random" );
    ADD_TO_WIDGET_COMBO( "Les random" );
    FINISH_WIDGET_COMBO( "Targetting", ref l_U266 );
    ADD_WIDGET_FLOAT_SLIDER( "realTargetRandom", ref l_U384, 0.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fakeTargetRandom", ref l_U383, 0.00000000, 1.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "targetMoveSpeed", ref l_U385, 0.00000000, 1.00000000, 0.02000000 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Opponent Aim" );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "No Randomness" );
    ADD_TO_WIDGET_COMBO( "Baz random" );
    ADD_TO_WIDGET_COMBO( "Les random" );
    FINISH_WIDGET_COMBO( "Targetting", ref l_U266 );
    ADD_WIDGET_FLOAT_SLIDER( "realTargetRandom", ref l_U384, 0.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fakeTargetRandom", ref l_U383, 0.00000000, 1.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "targetMoveSpeed", ref l_U385, 0.00000000, 1.00000000, 0.02000000 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "AI Turn Skip" );
    ADD_WIDGET_TOGGLE( "Show AI Darts", ref l_U413 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Cameras" );
    ADD_WIDGET_FLOAT_SLIDER( "board_pos.x", ref l_U419._fU0, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_pos.y", ref l_U419._fU4, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_pos.z", ref l_U419._fU8, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_point.x", ref l_U422._fU0, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_point.y", ref l_U422._fU4, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "board_point.z", ref l_U422._fU8, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_pos.x", ref l_U425._fU0, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_pos.y", ref l_U425._fU4, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_pos.z", ref l_U425._fU8, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_point.x", ref l_U428._fU0, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_point.y", ref l_U428._fU4, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_point.z", ref l_U428._fU8, -10.00000000, 10.00000000, 0.02000000 );
    ADD_WIDGET_TOGGLE( "ReAttach Cams", ref l_U416 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Scoring" );
    ADD_WIDGET_FLOAT_SLIDER( "score_dart_offset.x", ref l_U243._fU0, -20.00000000, 20.00000000, 0.00100000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_dart_offset.y", ref l_U243._fU4, -20.00000000, 20.00000000, 0.00100000 );
    ADD_WIDGET_FLOAT_SLIDER( "score_dart_offset.z", ref l_U243._fU8, -20.00000000, 20.00000000, 0.00100000 );
    ADD_WIDGET_TOGGLE( "Activate Scoring", ref l_U249 );
    ADD_WIDGET_TOGGLE( "Update Rotation", ref l_U250 );
    ADD_WIDGET_TOGGLE( "Set Rotation Zero", ref l_U251 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Accuracy" );
    ADD_WIDGET_TOGGLE( "renderDebugDarts", ref l_U252 );
    ADD_WIDGET_FLOAT_SLIDER( "dartDistance", ref l_U253, -1.00000000, 1.00000000, 0.00500000 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Other" );
    ADD_WIDGET_TOGGLE( "instaWin", ref l_U414 );
    ADD_WIDGET_FLOAT_SLIDER( "sixAxisSensitivity", ref l_U329, -1.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fPitch", ref l_U268, -1.00000000, 1.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fRoll", ref l_U269, -1.00000000, 1.00000000, 0.01000000 );
    END_WIDGET_GROUP();
    END_WIDGET_GROUP();
    GET_GAME_TIMER( ref l_U328 );
    l_U410 = 1;
    DO_SCREEN_FADE_IN( 500 );
    return;
}

void sub_3344(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3380())
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

int sub_3380()
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

void sub_3609(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, int iParam8, boolean bParam9)
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

void sub_3971(int iParam0)
{
    int Result;

    switch (iParam0->_fU0)
    {
        case 0:
        Result = -553099800;
        break;
        case 1:
        Result = 1250866419;
        break;
        default:
        Result = -247954872;
        break;
    }
    return Result;
}

void sub_4063(int iParam0)
{
    int Result;

    switch (iParam0->_fU0)
    {
        case 0:
        Result = l_U0;
        break;
        case 1:
        Result = l_U1;
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

int sub_4779(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if ((IS_CHAR_MODEL( uParam0, sub_4806( 3 ) )) || ((IS_CHAR_MODEL( uParam0, sub_4806( 1 ) )) || (IS_CHAR_MODEL( uParam0, sub_4806( 7 ) ))))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4806(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -274568867;
        case 1: return 1662225612;
        case 2: return -448171135;
        case 3: return 1370299619;
        case 4: return -773750838;
        case 5: return 243666427;
        case 6: return -913924918;
        case 7: return 1905515841;
        case 9:
        SCRIPT_ASSERT( "Attempt to Return the model for the Reserve Strand 1 Character" );
        return 0;
        case 30: return -1949352469;
        case 31: return -401698464;
        case 32: return -487173849;
        case 33: return -407067034;
        case 13: return 714517099;
        case 14: return 653404222;
        case 15: return 1798610950;
    }
    sub_5221( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5221(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_5445(unknown uParam0)
{
    return nil;
}

void sub_5847()
{
    sub_5856();
    DISPLAY_RADAR( 0 );
    return;
}

void sub_5856()
{
    SET_MINIGAME_IN_PROGRESS( 1 );
    g_U12380 = 1;
    g_U28807._fU44 = 34;
    if (NOT (g_U28807._fU0[0] == 34))
    {
        g_U28807._fU48 = 1;
        g_U28807._fU52 = 0;
        if (NOT (g_U28807._fU28 == 16))
        {
            sub_5946();
        }
        return;
    }
    if (sub_1715())
    {
        g_U12379 = 1;
    }
    sub_6022();
    return;
}

void sub_5946()
{
    if (NOT (g_U28807._fU56 > 0))
    {
        return;
    }
    g_U28807._fU56--;
    return;
}

void sub_6022()
{
    g_U28805._fU4 = 0;
    return;
}

void sub_6076(int iParam0)
{
    int I;

    if (g_U28807._fU0[0] == 34)
    {
        return;
    }
    if (iParam0 == nil)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        if (NOT (g_U28807._fU0[I] == 34))
        {
            if (g_U28807._fU12[I] == iParam0)
            {
                g_U28807._fU44 = g_U28807._fU0[I];
                return;
            }
        }
    }
    PRINTSTRING( "********************Minigames_Store_CompetitorID() ---> Unknown Competitor PedIndex\n" );
    return;
}

int sub_6316(unknown uParam0, int iParam1)
{
    if (iParam1 >= 2)
    {
        return 0;
    }
    (uParam0^) = g_U28807._fU0[iParam1];
    if (g_U28807._fU0[iParam1] == 34)
    {
        return 0;
    }
    return 1;
}

void sub_7060()
{
    string Result;

    Result = "name_luis";
    return Result;
}

void sub_7119(int iParam0)
{
    string Result;

    switch (iParam0->_fU0)
    {
        case 0:
        Result = "name_armando";
        break;
        case 1:
        Result = "name_henrique";
        break;
        default:
        Result = "name_opponent";
        break;
    }
    return Result;
}

void sub_7303(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7970()
{
    float fVar2;
    float fVar3;

    SET_TEXT_RENDER_ID( l_U388 );
    DRAW_SPRITE( l_U389, 0.25000000, 0.50000000, 0.50000000, 1.00000000, 0.00000000, 255, 255, 255, 255 );
    DRAW_SPRITE( l_U390, 0.13000000, 0.15000000, 0.20000000, 0.10000000, 0.00000000, 255, 255, 255, 255 );
    DRAW_SPRITE( l_U391, 0.37000000, 0.15000000, 0.20000000, 0.10000000, 0.00000000, 255, 255, 255, 255 );
    l_U298 = 0;
    l_U299 = 0;
    fVar2 = 0.14000000;
    fVar3 = 0.23000000;
    for ( l_U298 = 0; l_U298 < 2; l_U298++ )
    {
        for ( l_U299 = 0; l_U299 < 7; l_U299++ )
        {
            if (l_U338[l_U298][l_U299] != 0)
            {
                SET_TEXT_SCALE( 0.85000000, 1.40000000 );
                SET_TEXT_FONT( 5 );
                SET_TEXT_CENTRE( 1 );
                SET_TEXT_BACKGROUND( 0 );
                SET_TEXT_PROPORTIONAL( 1 );
                SET_TEXT_DROPSHADOW( 0, 255, 255, 255, 255 );
                DISPLAY_TEXT_WITH_NUMBER( fVar2, fVar3, "TURN_SCORE", l_U338[l_U298][l_U299] );
                fVar3 += 0.09000000;
            }
            if (l_U299 < 6)
            {
                if ((l_U338[l_U298][l_U299 + 1]) != 0)
                {
                    DRAW_SPRITE( l_U392, fVar2, fVar3 - 0.04500000, 0.12000000, 0.05000000, 0.00000000, 255, 255, 255, 255 );
                }
            }
        }
        fVar2 = 0.35000000;
        fVar3 = 0.23000000;
    }
    return;
}

void sub_8624()
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
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, -0.70000000 + l_U403, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                SET_CAM_POS( uVar8[0], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, -0.70000000 + l_U403, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                POINT_CAM_AT_OBJECT( uVar8[0], l_U259 );
                CREATE_CAM( 14, ref uVar8[1] );
                CREATE_CAM( 3, ref uVar11 );
                SET_CAM_ACTIVE( uVar8[0], 1 );
                SET_CAM_PROPAGATE( uVar8[0], 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                SET_WIDESCREEN_BORDERS( 1 );
                for ( l_U298 = 0; l_U298 < 3; l_U298++ )
                {
                    CREATE_OBJECT( l_U263, l_U288._fU0, l_U288._fU4, l_U288._fU8, ref l_U163[l_U298]._fU0, 1 );
                    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 90.00000000, ref l_U300 );
                    SET_OBJECT_ROTATION( l_U163[l_U298]._fU0, 90.00000000 + l_U262, l_U300, 0.00000000 );
                    l_U163[l_U298]._fU80 = {90.00000000 + l_U262, l_U300, 0.00000000};
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U163[l_U298]._fU0, l_U292 );
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
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, -0.70000000 + l_U403, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    SET_CAM_POS( uVar8[1], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, 0.00000000 + l_U403, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    POINT_CAM_AT_COORD( uVar8[1], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
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
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.12100000, -0.35000000, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    SET_CAM_POS( uVar8[0], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.12300000, -0.03600000, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    POINT_CAM_AT_COORD( uVar8[0], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
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
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.18600000, -0.35000000, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    SET_CAM_POS( uVar8[1], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.25400000, 0.07000000, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    POINT_CAM_AT_COORD( uVar8[1], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
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
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.17500000, -0.35000000, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    SET_CAM_POS( uVar8[0], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.19000000, 0.00300000, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    POINT_CAM_AT_COORD( uVar8[0], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
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
                    sub_10585( 0 );
                    iVar4++;
                }
                break;
                case 6:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.10700000, -0.35000000, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    SET_CAM_POS( uVar8[1], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.11300000, -0.00400000, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    POINT_CAM_AT_COORD( uVar8[1], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
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
                    sub_10585( 1 );
                    iVar4++;
                }
                break;
                case 8:
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, -0.35000000, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    SET_CAM_POS( uVar8[0], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, 0.00000000, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    POINT_CAM_AT_COORD( uVar8[0], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
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
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, -0.70000000 + l_U403, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    SET_CAM_POS( uVar8[1], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, 0.00000000, 0.00000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    POINT_CAM_AT_COORD( uVar8[1], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
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
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, -0.35000000, 0.18000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    SET_CAM_POS( uVar8[0], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, 0.00000000, 0.00000000, 0.20000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
                    POINT_CAM_AT_COORD( uVar8[0], l_U302._fU0, l_U302._fU4, l_U302._fU8 );
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
                    sub_10585( 2 );
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
    for ( l_U298 = 0; l_U298 < 3; l_U298++ )
    {
        if (DOES_OBJECT_EXIST( l_U163[l_U298]._fU0 ))
        {
            DELETE_OBJECT( ref l_U163[l_U298]._fU0 );
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
    DELETE_OBJECT( ref l_U163[0]._fU0 );
    DELETE_OBJECT( ref l_U163[1]._fU0 );
    DELETE_OBJECT( ref l_U163[2]._fU0 );
    g_U9269 = 1;
    return;
}

void sub_10585(int iParam0)
{
    boolean bVar3;
    vector vVar4;
    unknown uVar7;
    float fVar8;
    unknown uVar9;

    bVar3 = false;
    fVar8 = 0.04000000;
    SET_OBJECT_COORDINATES( l_U163[iParam0]._fU0, l_U276._fU0, l_U276._fU4, l_U276._fU8 );
    l_U163[iParam0]._fU8 = {l_U279._fU0, l_U279._fU4, l_U279._fU8};
    l_U163[iParam0]._fU96 = 0;
    l_U163[iParam0]._fU100 = 1;
    if (iParam0 == 0)
    {
        l_U163[iParam0]._fU32._fU0 = 0.21100000;
        l_U163[iParam0]._fU32._fU4 = -0.23000000;
        l_U163[iParam0]._fU32._fU8 = 0.01800000;
    }
    else if (iParam0 == 1)
    {
        l_U163[iParam0]._fU32._fU0 = 0.13100000;
        l_U163[iParam0]._fU32._fU4 = -0.23000000;
        l_U163[iParam0]._fU32._fU8 = 0.00100000;
    }
    else
    {
        l_U163[iParam0]._fU32._fU0 = -0.00900000;
        l_U163[iParam0]._fU32._fU4 = -0.23000000;
        l_U163[iParam0]._fU32._fU8 = 0.21600000;
    }
    vVar4 = {l_U279 - l_U4[l_U333][l_U334]._fU32};
    uVar7 = VMAG( vVar4 );
    l_U163[iParam0]._fU20 = {vVar4 / uVar7};
    GET_HEADING_FROM_VECTOR_2D( l_U163[iParam0]._fU20._fU0, l_U163[iParam0]._fU20._fU4, ref l_U300 );
    l_U163[iParam0]._fU80._fU8 = l_U300 - 180.00000000;
    while (NOT bVar3)
    {
        WAIT( 0 );
        if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U259 )))
        {
            sub_2703( 3 );
            sub_218();
        }
        sub_2787();
        GET_FRAME_TIME( ref uVar9 );
        l_U163[iParam0]._fU8 = {l_U163[iParam0]._fU8 - ((l_U163[iParam0]._fU20 * uVar9) * l_U327)};
        if (l_U163[iParam0]._fU8._fU4 > (l_U163[iParam0]._fU32._fU4 - fVar8))
        {
            l_U163[iParam0]._fU96 = 1;
            l_U163[iParam0]._fU100 = 0;
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U163[iParam0]._fU32._fU0, l_U163[iParam0]._fU32._fU4 + l_U403, l_U163[iParam0]._fU32._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
            SET_OBJECT_COORDINATES( l_U163[iParam0]._fU0, l_U302._fU0, l_U302._fU4, l_U302._fU8 );
            bVar3 = true;
            if (iParam0 == 0)
            {
                PLAY_SOUND_FROM_OBJECT( l_U358, "DARTS_HIT_BOARD", l_U163[iParam0]._fU0 );
            }
            else if (iParam0 == 1)
            {
                PLAY_SOUND_FROM_OBJECT( l_U360, "DARTS_HIT_TRIPLE", l_U163[iParam0]._fU0 );
            }
            else
            {
                PLAY_SOUND_FROM_OBJECT( l_U359, "DARTS_HIT_DOUBLE", l_U163[iParam0]._fU0 );
            }
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U163[iParam0]._fU8._fU0, l_U163[iParam0]._fU8._fU4 + l_U403, l_U163[iParam0]._fU8._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
            SET_OBJECT_COORDINATES( l_U163[iParam0]._fU0, l_U302._fU0, l_U302._fU4, l_U302._fU8 );
            l_U163[iParam0]._fU80._fU4 += 1000.00000000 * uVar9;
            SET_OBJECT_ROTATION( l_U163[iParam0]._fU0, l_U163[iParam0]._fU80._fU0, l_U163[iParam0]._fU80._fU4, l_U163[iParam0]._fU80._fU8 );
        }
    }
    return;
}

void sub_13354()
{
    if (GET_IS_WIDESCREEN())
    {
        l_U419 = {-0.20000000, -0.98000000, 0.00000000};
        l_U422 = {-0.22000000, l_U403, 0.00000000};
        l_U409 = 1;
    }
    else
    {
        l_U419 = {0.00000000, -0.61000000 + l_U403, 0.00000000};
        l_U422 = {0.00000000, 0.00000000, 0.00000000};
        l_U425 = {0.00000000, -0.61000000 + l_U403, 0.00000000};
        l_U428 = {-0.26000000, 0.00000000, 0.00000000};
        l_U409 = 0;
    }
    BEGIN_CAM_COMMANDS( ref l_U297 );
    CREATE_CAM( 3, ref l_U296 );
    CREATE_CAM( 14, ref l_U293 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U419._fU0, l_U419._fU4, l_U419._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
    SET_CAM_POS( l_U293, l_U302._fU0, l_U302._fU4, l_U302._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U422._fU0, l_U422._fU4, l_U422._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
    POINT_CAM_AT_COORD( l_U293, l_U302._fU0, l_U302._fU4, l_U302._fU8 );
    if (l_U409)
    {
        SET_CAM_FOV( l_U293, 45.00000000 );
    }
    CREATE_CAM( 14, ref l_U294 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U425._fU0, l_U425._fU4, l_U425._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
    SET_CAM_POS( l_U294, l_U302._fU0, l_U302._fU4, l_U302._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U428._fU0, l_U428._fU4, l_U428._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
    POINT_CAM_AT_COORD( l_U294, l_U302._fU0, l_U302._fU4, l_U302._fU8 );
    if (l_U409)
    {
        SET_CAM_FOV( l_U294, 45.00000000 );
    }
    CREATE_CAM( 14, ref l_U295 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U419._fU0, l_U419._fU4, l_U419._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
    if ((l_U262 < 1) || (l_U262 > 359))
    {
        SET_CAM_POS( l_U295, l_U302._fU0 + 0.40000000, l_U302._fU4 - 2.90000000, l_U302._fU8 - 0.10000000 );
    }
    else
    {
        SET_CAM_POS( l_U295, l_U302._fU0 - 0.40000000, l_U302._fU4 + 2.90000000, l_U302._fU8 - 0.10000000 );
    }
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U422._fU0, l_U422._fU4, l_U422._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
    POINT_CAM_AT_COORD( l_U295, l_U302._fU0, l_U302._fU4, l_U302._fU8 - 0.40000000 );
    if (l_U409)
    {
        SET_CAM_FOV( l_U295, 45.00000000 );
    }
    SET_CAM_ACTIVE( l_U293, 1 );
    SET_CAM_PROPAGATE( l_U293, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    return;
}

void sub_16111()
{
    l_U338[0][0] = 301;
    l_U338[1][0] = 301;
    for ( l_U298 = 0; l_U298 <= 1; l_U298++ )
    {
        for ( l_U299 = 1; l_U299 <= 6; l_U299++ )
        {
            l_U338[l_U298][l_U299] = 0;
        }
    }
    l_U330[0] = 301;
    l_U330[1] = 301;
    DELETE_OBJECT( ref l_U4[0][0]._fU0 );
    DELETE_OBJECT( ref l_U4[0][1]._fU0 );
    DELETE_OBJECT( ref l_U4[0][2]._fU0 );
    DELETE_OBJECT( ref l_U4[1][0]._fU0 );
    DELETE_OBJECT( ref l_U4[1][1]._fU0 );
    DELETE_OBJECT( ref l_U4[1][2]._fU0 );
    sub_7970();
    if (l_U333 == 0)
    {
        l_U333 = 1;
    }
    else
    {
        l_U333 = 0;
    }
    l_U334 = 0;
    l_U356 = 0;
    l_U371 = 0;
    PRINT_WITH_NUMBER_NOW( "SWITCH_PLAYER", l_U330[l_U333], 5000, 0 );
    l_U2 = 1;
    l_U3 = 0;
    return;
}

void sub_16486()
{
    sub_16495();
    switch (l_U3)
    {
        case 0:
        if (l_U333 == 0)
        {
            sub_16657();
        }
        else
        {
            sub_22114();
            sub_22613();
        }
        break;
        case 1:
        sub_23634();
        break;
        case 2:
        sub_24887();
        sub_28398();
        break;
        case 3:
        CLEAR_HELP();
        sub_37734();
        break;
        default: break;
    }
    return;
}

void sub_16495()
{
    if (NOT l_U433)
    {
        if (NOT (IS_CONTROL_PRESSED( 2, 77 )))
        {
            l_U433 = 1;
        }
    }
    if (l_U333 == 1)
    {
        if (((IS_CONTROL_JUST_PRESSED( 2, 4 )) AND (NOT IS_USING_CONTROLLER())) || ((l_U433) AND (IS_CONTROL_PRESSED( 2, 77 ))))
        {
            l_U3 = 3;
        }
    }
    return;
}

void sub_16657()
{
    int iVar2;

    if (l_U435)
    {
        if (TIMERB() > 600)
        {
            l_U435 = 0;
            sub_16698();
        }
    }
    else if (((NOT (IS_CONTROL_JUST_PRESSED( 2, 4 ))) AND (NOT IS_USING_CONTROLLER())) || ((NOT (IS_CONTROL_JUST_PRESSED( 2, 77 ))) AND (IS_USING_CONTROLLER())))
    {
        l_U433 = 1;
        l_U394 = 1;
        if (NOT l_U258)
        {
            GET_GAME_TIMER( ref iVar2 );
            if (((iVar2 - l_U257) < 15000) AND ((iVar2 - l_U257) > 12000))
            {
                sub_17419();
            }
        }
        if (NOT l_U404)
        {
            sub_17628();
        }
        else
        {
            sub_18593();
            sub_19447();
            sub_21894();
        }
    }
    else if ((l_U394) AND (l_U433))
    {
        if (NOT l_U435)
        {
            SETTIMERB( 0 );
            l_U435 = 1;
        }
    };;;
    return;
}

void sub_16698()
{
    l_U387 = 0;
    l_U386 = 0;
    l_U385 = 0.10000000;
    l_U383 = 0.06000000;
    l_U384 = 0.08000000;
    l_U4[l_U333][l_U334]._fU96 = 0;
    l_U4[l_U333][l_U334]._fU100 = 1;
    sub_16797();
    l_U258 = 0;
    l_U394 = 0;
    l_U404 = 0;
    l_U3 = 1;
    PLAY_SOUND_FROM_OBJECT( l_U366, "DARTS_THROW", l_U261 );
    DELETE_OBJECT( ref l_U260 );
    CLEAR_HELP();
    return;
}

void sub_16797()
{
    vector vVar2;
    unknown uVar5;
    float fVar6;

    l_U4[l_U333][l_U334]._fU32._fU4 = -0.23000000;
    vVar2 = {l_U279 - l_U4[l_U333][l_U334]._fU32};
    uVar5 = VMAG( vVar2 );
    l_U4[l_U333][l_U334]._fU20 = {vVar2 / uVar5};
    GET_HEADING_FROM_VECTOR_2D( l_U4[l_U333][l_U334]._fU20._fU0, l_U4[l_U333][l_U334]._fU20._fU4, ref l_U300 );
    l_U4[l_U333][l_U334]._fU80._fU8 = l_U300 - 180.00000000;
    fVar6 = (TAN( l_U4[l_U333][l_U334]._fU80._fU8 )) * l_U253;
    l_U4[l_U333][l_U334]._fU44 = {l_U4[l_U333][l_U334]._fU32};
    l_U4[l_U333][l_U334]._fU44._fU0 += fVar6;
    vVar2 = {l_U279 - l_U4[l_U333][l_U334]._fU44};
    uVar5 = VMAG( vVar2 );
    l_U4[l_U333][l_U334]._fU20 = {vVar2 / uVar5};
    return;
}

void sub_17419()
{
    if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playBoredContexts()" );
        PRINTNL();
    }
    if (l_U368)
    {
        if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BORED)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U264, "DARTS_BORED", 1, 1, 2 );
        l_U258 = 1;
    }
    return;
}

void sub_17628()
{
    l_U302 = {0, 0, 0};
    GENERATE_RANDOM_FLOAT_IN_RANGE( -0.10000000, 0.10000000, ref l_U300 );
    l_U302._fU0 += l_U300;
    GENERATE_RANDOM_FLOAT_IN_RANGE( -0.10000000, 0.10000000, ref l_U300 );
    l_U302._fU8 += l_U300;
    WAIT( 0 );
    CREATE_OBJECT( 2063078697, l_U282._fU0 + l_U302._fU0, l_U282._fU4, l_U282._fU8 + l_U302._fU8, ref l_U260, 1 );
    l_U4[l_U333][l_U334]._fU32 = {l_U285 + l_U302};
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U260, l_U292 );
    SET_OBJECT_ROTATION( l_U260, 90.00000000 + l_U262, 0.00000000, 0.00000000 );
    CREATE_OBJECT( l_U4[l_U333][l_U334]._fU4, l_U276._fU0, l_U276._fU4, l_U276._fU8, ref l_U4[l_U333][l_U334]._fU0, 1 );
    GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 90.00000000, ref l_U300 );
    SET_OBJECT_ROTATION( l_U4[l_U333][l_U334]._fU0, 90.00000000 + l_U262, l_U300, 0.00000000 );
    l_U4[l_U333][l_U334]._fU80 = {90.00000000 + l_U262, l_U300, 0.00000000};
    ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U4[l_U333][l_U334]._fU0, l_U292 );
    l_U4[l_U333][l_U334]._fU8 = {l_U279._fU0, l_U279._fU4, l_U279._fU8};
    sub_18143();
    GET_GAME_TIMER( ref l_U257 );
    l_U258 = 0;
    l_U404 = 1;
    return;
}

void sub_18143()
{
    if ((l_U330[l_U333] < 80) AND ((NOT l_U396[0]) AND (NOT l_U395)))
    {
        PRINT_HELP_FOREVER( "HELP_DOUBLE" );
        l_U396[0] = 1;
        l_U395 = 1;
    }
    if ((NOT l_U396[5]) AND ((l_U396[4]) AND (NOT l_U395)))
    {
        if (NOT l_U409)
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
        l_U396[5] = 1;
    }
    if ((NOT l_U396[4]) AND ((l_U396[3]) AND (NOT l_U395)))
    {
        PRINT_HELP_FOREVER( "HELP_SPEED" );
        l_U396[4] = 1;
    }
    if ((NOT l_U396[3]) AND ((l_U396[2]) AND (NOT l_U395)))
    {
        PRINT_HELP_FOREVER( "HELP_STEADY" );
        l_U396[3] = 1;
    }
    if ((NOT l_U396[2]) AND (NOT l_U395))
    {
        if (# -NULL-0xc238b5( 5 ))
        {
            PRINT_HELP_FOREVER( "HELP_THROW6" );
        }
        else
        {
            PRINT_HELP_FOREVER( "HELP_THROW" );
        }
        l_U396[2] = 1;
    }
    return;
}

void sub_18593()
{
    if (((IS_CONTROL_PRESSED( 2, 1 )) AND (NOT IS_USING_CONTROLLER())) || (IS_BUTTON_PRESSED( 0, 6 )))
    {
        l_U385 = 0.30000000;
    }
    else
    {
        l_U385 = 0.10000000;
    }
    if ((NOT IS_USING_CONTROLLER()) AND (# -NULL-0xc27bfa()))
    {
        l_U385 *= 2.50000000;
    }
    if (((IS_CONTROL_PRESSED( 2, 2 )) AND (NOT IS_USING_CONTROLLER())) || (IS_BUTTON_PRESSED( 0, 7 )))
    {
        if (l_U387)
        {
            if (TIMERA() > 1000)
            {
                l_U383 = 0.06000000;
                l_U384 = 0.08000000;
                l_U385 = 0.10000000;
                DELETE_OBJECT( ref l_U260 );
                CREATE_OBJECT( 2063078697, l_U4[l_U333][l_U334]._fU32._fU0, l_U4[l_U333][l_U334]._fU32._fU4, l_U4[l_U333][l_U334]._fU32._fU8, ref l_U260, 1 );
                ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U260, l_U292 );
                SET_OBJECT_ROTATION( l_U260, 90.00000000 + l_U262, 0.00000000, 0.00000000 );
                PLAY_SOUND_FROM_OBJECT( l_U364, "DARTS_INHALE", l_U261 );
                l_U387 = 0;
            }
        }
        else if (l_U386 < 1)
        {
            l_U383 = 0.03000000;
            l_U384 = 0.05000000;
            l_U385 = 0.10000000;
            SETTIMERA( 0 );
            DELETE_OBJECT( ref l_U260 );
            CREATE_OBJECT( -172899370, l_U4[l_U333][l_U334]._fU32._fU0, l_U4[l_U333][l_U334]._fU32._fU4, l_U4[l_U333][l_U334]._fU32._fU8, ref l_U260, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U260, l_U292 );
            SET_OBJECT_ROTATION( l_U260, 90.00000000 + l_U262, 0.00000000, 0.00000000 );
            PLAY_SOUND_FROM_OBJECT( l_U365, "DARTS_EXHALE", l_U261 );
            l_U387 = 1;
            l_U386++;
        }
    }
    else if (l_U387)
    {
        l_U383 = 0.06000000;
        l_U384 = 0.08000000;
        l_U385 = 0.10000000;
        DELETE_OBJECT( ref l_U260 );
        CREATE_OBJECT( 2063078697, l_U4[l_U333][l_U334]._fU32._fU0, l_U4[l_U333][l_U334]._fU32._fU4, l_U4[l_U333][l_U334]._fU32._fU8, ref l_U260, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U260, l_U292 );
        SET_OBJECT_ROTATION( l_U260, 90.00000000 + l_U262, 0.00000000, 0.00000000 );
        l_U387 = 0;
    }
    return;
}

void sub_19447()
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
        if ((l_U4[l_U333][l_U334]._fU32._fU0 + (l_U385 * uVar4)) < 0.33000000)
        {
            l_U4[l_U333][l_U334]._fU32._fU0 += l_U385 * uVar4;
            bVar2 = true;
        }
    }
    else if (uVar5 < -40.00000000)
    {
        if ((l_U4[l_U333][l_U334]._fU32._fU0 - (l_U385 * uVar4)) > -0.33000000)
        {
            l_U4[l_U333][l_U334]._fU32._fU0 -= l_U385 * uVar4;
            bVar2 = true;
        }
    }
    if (uVar6 > 40.00000000)
    {
        if ((l_U4[l_U333][l_U334]._fU32._fU8 - (l_U385 * uVar4)) > -0.33000000)
        {
            l_U4[l_U333][l_U334]._fU32._fU8 -= l_U385 * uVar4;
            bVar2 = true;
        }
    }
    else if (uVar6 < -40.00000000)
    {
        if ((l_U4[l_U333][l_U334]._fU32._fU8 + (l_U385 * uVar4)) < 0.33000000)
        {
            l_U4[l_U333][l_U334]._fU32._fU8 += l_U385 * uVar4;
            bVar2 = true;
        }
    }
    if (NOT bVar2)
    {
        GET_MOUSE_INPUT( ref uVar9, ref uVar10 );
        if (uVar9 > 1.00000000)
        {
            if ((l_U4[l_U333][l_U334]._fU32._fU0 + (l_U385 * uVar4)) < 0.33000000)
            {
                l_U4[l_U333][l_U334]._fU32._fU0 += l_U385 * uVar4;
                bVar2 = true;
            }
        }
        else if (uVar9 < -1.00000000)
        {
            if ((l_U4[l_U333][l_U334]._fU32._fU0 - (l_U385 * uVar4)) > -0.33000000)
            {
                l_U4[l_U333][l_U334]._fU32._fU0 -= l_U385 * uVar4;
                bVar2 = true;
            }
        }
        if (uVar10 > 1.00000000)
        {
            if ((l_U4[l_U333][l_U334]._fU32._fU8 - (l_U385 * uVar4)) > -0.33000000)
            {
                l_U4[l_U333][l_U334]._fU32._fU8 -= l_U385 * uVar4;
                bVar2 = true;
            }
        }
        else if (uVar10 < -1.00000000)
        {
            if ((l_U4[l_U333][l_U334]._fU32._fU8 + (l_U385 * uVar4)) < 0.33000000)
            {
                l_U4[l_U333][l_U334]._fU32._fU8 += l_U385 * uVar4;
                bVar2 = true;
            }
        }
    }
    if (NOT bVar2)
    {
        if (# -NULL-0xc238b5( 5 ))
        {
            if (GET_PAD_PITCH_ROLL( 0, ref l_U268, ref l_U269 ))
            {
                if (l_U269 > l_U329)
                {
                    if ((l_U4[l_U333][l_U334]._fU32._fU0 + (l_U385 * uVar4)) < 0.33000000)
                    {
                        l_U4[l_U333][l_U334]._fU32._fU0 += l_U385 * uVar4;
                    }
                }
                else if (l_U269 < -l_U329)
                {
                    if ((l_U4[l_U333][l_U334]._fU32._fU0 - (l_U385 * uVar4)) > -0.33000000)
                    {
                        l_U4[l_U333][l_U334]._fU32._fU0 -= l_U385 * uVar4;
                    }
                }
                if (l_U268 > l_U329)
                {
                    if ((l_U4[l_U333][l_U334]._fU32._fU8 - (l_U385 * uVar4)) > -0.33000000)
                    {
                        l_U4[l_U333][l_U334]._fU32._fU8 -= l_U385 * uVar4;
                    }
                }
                else if (l_U268 < -l_U329)
                {
                    if ((l_U4[l_U333][l_U334]._fU32._fU8 + (l_U385 * uVar4)) < 0.33000000)
                    {
                        l_U4[l_U333][l_U334]._fU32._fU8 += l_U385 * uVar4;
                    }
                }
            }
        }
    }
    l_U4[l_U333][l_U334]._fU68 = {l_U4[l_U333][l_U334]._fU32};
    if (l_U266 != 0)
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000 - l_U384, 0.00000000 + l_U384, ref l_U301 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000 - l_U383, 0.00000000 + l_U383, ref l_U300 );
        if (((l_U4[l_U333][l_U334]._fU32._fU0 + (l_U300 * uVar4)) < 0.33000000) AND ((l_U4[l_U333][l_U334]._fU32._fU0 + (l_U300 * uVar4)) > -0.33000000))
        {
            if (l_U266 == 2)
            {
                l_U4[l_U333][l_U334]._fU32._fU0 += l_U301 * uVar4;
                l_U4[l_U333][l_U334]._fU68._fU0 = l_U4[l_U333][l_U334]._fU32._fU0;
                l_U4[l_U333][l_U334]._fU68._fU0 += l_U300 * uVar4;
            }
            else
            {
                l_U4[l_U333][l_U334]._fU32._fU0 += l_U300 * uVar4;
            }
        }
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000 - l_U384, 0.00000000 + l_U384, ref l_U301 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000 - l_U383, 0.00000000 + l_U383, ref l_U300 );
        if (((l_U4[l_U333][l_U334]._fU32._fU8 + (l_U300 * uVar4)) < 0.33000000) AND ((l_U4[l_U333][l_U334]._fU32._fU8 + (l_U300 * uVar4)) > -0.33000000))
        {
            if (l_U266 == 2)
            {
                l_U4[l_U333][l_U334]._fU32._fU8 += l_U301 * uVar4;
                l_U4[l_U333][l_U334]._fU68._fU8 = l_U4[l_U333][l_U334]._fU32._fU8;
                l_U4[l_U333][l_U334]._fU68._fU8 += l_U300 * uVar4;
            }
            else
            {
                l_U4[l_U333][l_U334]._fU32._fU8 += l_U300 * uVar4;
            }
        }
    }
    return;
}

void sub_21894()
{
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U4[l_U333][l_U334]._fU68._fU0, l_U4[l_U333][l_U334]._fU68._fU4 + l_U403, l_U4[l_U333][l_U334]._fU68._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
    SET_OBJECT_COORDINATES( l_U260, l_U302._fU0, l_U302._fU4, l_U302._fU8 );
    return;
}

void sub_22114()
{
    l_U336 = 0;
    l_U337 = 0;
    if (l_U330[l_U333] > 110)
    {
        l_U336 = 20;
        l_U337 = 3;
    }
    else if (l_U330[l_U333] > 60)
    {
        if ((l_U330[l_U333] mod 2) == 1)
        {
            l_U336 = 19;
            l_U337 = 3;
        }
        else
        {
            l_U336 = 20;
            l_U337 = 3;
        }
    }
    else if (l_U330[l_U333] < 61)
    {
        if (l_U330[l_U333] == 50)
        {
            l_U336 = 50;
            l_U337 = 1;
        }
        else if (l_U330[l_U333] > 52)
        {
            l_U336 = l_U330[l_U333] - 40;
            l_U337 = 1;
        }
        else if (l_U330[l_U333] > 40)
        {
            l_U336 = l_U330[l_U333] - 32;
            l_U337 = 1;
        }
        else if ((l_U330[l_U333] mod 2) == 0)
        {
            l_U298 = 1;
            for ( l_U298 = 0; l_U298 < 20; l_U298++ )
            {
                l_U336 = l_U330[l_U333] / 2;
                l_U337 = 2;
            }
        }
        else
        {
            l_U298 = 32;
            while ((l_U298 > 1) AND (l_U336 == 0))
            {
                if (l_U330[l_U333] > l_U298)
                {
                    l_U336 = l_U330[l_U333] - l_U298;
                    l_U337 = 1;
                }
                l_U298 = l_U298 / 2;
            }
        };;;;
    };;;
    return;
}

void sub_22613()
{
    float fVar2;
    float fVar3;
    float fVar4;

    if (l_U336 == 50)
    {
        fVar2 = 0.00000000;
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref fVar3 );
    }
    else if (l_U336 == 25)
    {
        fVar2 = 0.14000000;
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 360.00000000, ref fVar3 );
    }
    else if (l_U337 == 3)
    {
        fVar2 = 0.13450000;
    }
    else if (l_U337 == 2)
    {
        fVar2 = 0.21800000;
    }
    else
    {
        fVar2 = 0.18000000;
    }
    fVar4 = 0.00000000;
    l_U298 = 0;
    for ( l_U298 = 0; l_U298 < 21; l_U298++ )
    {
        if (l_U336 == l_U305[l_U298])
        {
            fVar3 = fVar4;
        }
        fVar4 += 18.00000000;
    };;;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref l_U298 );
    if (l_U298 < l_U267)
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -60.00000000, 60.00000000, ref l_U300 );
    }
    else
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -100.00000000, 100.00000000, ref l_U300 );
        if (l_U300 > 0)
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( -200.00000000, -60.00000000, ref l_U300 );
        }
        else
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( 60.00000000, 200.00000000, ref l_U300 );
        }
    }
    l_U300 /= 10;
    fVar3 += l_U300;
    GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref l_U298 );
    if (l_U298 < l_U267)
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -0.30000000, 0.30000000, ref l_U300 );
    }
    else
    {
        GENERATE_RANDOM_FLOAT_IN_RANGE( -100.00000000, 100.00000000, ref l_U300 );
        if (l_U300 > 0)
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( -1.00000000, -0.30000000, ref l_U300 );
        }
        else
        {
            GENERATE_RANDOM_FLOAT_IN_RANGE( 0.30000000, 1.00000000, ref l_U300 );
        }
    }
    l_U300 /= 10;
    fVar2 += l_U300;
    l_U4[l_U333][l_U334]._fU32._fU0 = (SIN( fVar3 )) * fVar2;
    l_U4[l_U333][l_U334]._fU32._fU4 = -0.23000000;
    l_U4[l_U333][l_U334]._fU32._fU8 = (COS( fVar3 )) * fVar2;
    if (l_U3 == 3)
    {
        sub_16797();
    }
    else
    {
        l_U4[l_U333][l_U334]._fU96 = 0;
        l_U4[l_U333][l_U334]._fU100 = 1;
        sub_16797();
        CREATE_OBJECT( l_U4[l_U333][l_U334]._fU4, l_U276._fU0, l_U276._fU4, l_U276._fU8, ref l_U4[l_U333][l_U334]._fU0, 1 );
        GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 90.00000000, ref l_U300 );
        SET_OBJECT_ROTATION( l_U4[l_U333][l_U334]._fU0, 90.00000000 + l_U262, l_U300, 0.00000000 );
        l_U4[l_U333][l_U334]._fU80 = {90.00000000 + l_U262, l_U300, 0.00000000};
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U4[l_U333][l_U334]._fU0, l_U292 );
        l_U4[l_U333][l_U334]._fU8 = {l_U279._fU0, l_U279._fU4, l_U279._fU8};
        l_U3 = 1;
    }
    return;
}

void sub_23634()
{
    float fVar2;
    unknown uVar3;

    fVar2 = 0.04000000;
    if (l_U415)
    {
        sub_23702( "DART MOVING FROM...", ref l_U4[l_U333][l_U334]._fU8 );
    }
    GET_FRAME_TIME( ref uVar3 );
    l_U4[l_U333][l_U334]._fU8 = {l_U4[l_U333][l_U334]._fU8 - ((l_U4[l_U333][l_U334]._fU20 * uVar3) * l_U327)};
    if (l_U415)
    {
        sub_23702( "TO...", ref l_U4[l_U333][l_U334]._fU8 );
    }
    if (l_U4[l_U333][l_U334]._fU8._fU4 > (l_U4[l_U333][l_U334]._fU32._fU4 - fVar2))
    {
        l_U4[l_U333][l_U334]._fU96 = 1;
        l_U4[l_U333][l_U334]._fU100 = 0;
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U4[l_U333][l_U334]._fU44._fU0, l_U4[l_U333][l_U334]._fU44._fU4 + l_U403, l_U4[l_U333][l_U334]._fU44._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
        SET_OBJECT_COORDINATES( l_U4[l_U333][l_U334]._fU0, l_U302._fU0, l_U302._fU4, l_U302._fU8 );
        if (l_U252)
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U4[l_U333][l_U334]._fU32._fU0, l_U4[l_U333][l_U334]._fU32._fU4 + l_U403, l_U4[l_U333][l_U334]._fU32._fU8 - 0.10000000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
            CREATE_OBJECT( l_U4[l_U333][l_U334]._fU4, l_U302._fU0, l_U302._fU4, l_U302._fU8, ref l_U163[l_U334]._fU0, 1 );
            SET_OBJECT_ROTATION( l_U163[l_U334]._fU0, 90.00000000, 0.00000000, 0.00000000 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U163[l_U334]._fU0, l_U292 );
            PRINTNL();
            PRINTSTRING( "*** DEBUG DART " );
            PRINTINT( l_U334 );
            PRINTSTRING( " - " );
            PRINTVECTOR( l_U4[l_U333][l_U334]._fU32 );
            PRINTNL();
        }
        l_U3 = 2;
    }
    else
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U4[l_U333][l_U334]._fU8._fU0, l_U4[l_U333][l_U334]._fU8._fU4 + l_U403, l_U4[l_U333][l_U334]._fU8._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
        SET_OBJECT_COORDINATES( l_U4[l_U333][l_U334]._fU0, l_U302._fU0, l_U302._fU4, l_U302._fU8 );
        l_U4[l_U333][l_U334]._fU80._fU4 += 1000.00000000 * uVar3;
        SET_OBJECT_ROTATION( l_U4[l_U333][l_U334]._fU0, l_U4[l_U333][l_U334]._fU80._fU0, l_U4[l_U333][l_U334]._fU80._fU4, l_U4[l_U333][l_U334]._fU80._fU8 );
    }
    return;
}

void sub_23702(unknown uParam0, int iParam1)
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

void sub_24887()
{
    float fVar2;
    float fVar3;
    float fVar4;
    int iVar5;

    GET_ANGLE_BETWEEN_2D_VECTORS( 0.00000000, 1.00000000, l_U4[l_U333][l_U334]._fU32._fU0 + 0.00350000, l_U4[l_U333][l_U334]._fU32._fU8, ref fVar3 );
    fVar2 = sub_24992( ref l_U4[l_U333][l_U334]._fU32 );
    sub_25041();
    if (fVar2 < 0.00900000)
    {
        if (NOT l_U370)
        {
            PLAY_SOUND_FROM_OBJECT( l_U360, "DARTS_HIT_TRIPLE", l_U4[l_U333][l_U334]._fU0 );
        }
        l_U4[l_U333][l_U334]._fU92 = 50;
        iVar5 = l_U330[l_U333];
        iVar5 -= l_U4[l_U333][l_U334]._fU92;
        if (NOT ((iVar5 < 0) || (iVar5 == 1)))
        {
            sub_25564();
        }
    }
    else if (fVar2 < 0.02100000)
    {
        if (NOT l_U370)
        {
            PLAY_SOUND_FROM_OBJECT( l_U360, "DARTS_HIT_TRIPLE", l_U4[l_U333][l_U334]._fU0 );
        }
        l_U4[l_U333][l_U334]._fU92 = 25;
    }
    else if (fVar2 > 0.30000000)
    {
        if (NOT l_U370)
        {
            PLAY_SOUND_FROM_OBJECT( l_U363, "DARTS_HIT_WALL", l_U4[l_U333][l_U334]._fU0 );
        }
        sub_26392();
        l_U4[l_U333][l_U334]._fU92 = 0;
    }
    else if (fVar2 > 0.22500000)
    {
        if (NOT l_U370)
        {
            PLAY_SOUND_FROM_OBJECT( l_U363, "DARTS_HIT_BOARD", l_U4[l_U333][l_U334]._fU0 );
        }
        l_U4[l_U333][l_U334]._fU92 = 0;
    }
    else if ((fVar2 < 0.14200000) AND (fVar2 > 0.12800000))
    {
        if (NOT l_U370)
        {
            PLAY_SOUND_FROM_OBJECT( l_U360, "DARTS_HIT_TRIPLE", l_U4[l_U333][l_U334]._fU0 );
        }
        l_U335 = 3;
    }
    else if ((fVar2 < 0.22500000) AND (fVar2 > 0.21100000))
    {
        if (NOT l_U370)
        {
            PLAY_SOUND_FROM_OBJECT( l_U360, "DARTS_HIT_DOUBLE", l_U4[l_U333][l_U334]._fU0 );
        }
        l_U335 = 2;
    }
    else if (NOT l_U370)
    {
        PLAY_SOUND_FROM_OBJECT( l_U360, "DARTS_HIT_BOARD", l_U4[l_U333][l_U334]._fU0 );
    }
    l_U335 = 1;;;
    if (l_U4[l_U333][l_U334]._fU32._fU0 < 0.00000000)
    {
        fVar3 = 360.00000000 - fVar3;
    }
    if (l_U415)
    {
        sub_28154( "dartAngle", fVar3 );
    }
    fVar4 = 0;
    l_U298 = 0;
    for ( l_U298 = 0; l_U298 < 21; l_U298++ )
    {
        if ((fVar3 < (fVar4 + 9.00000000)) AND (fVar3 >= (fVar4 - 9.00000000)))
        {
            l_U4[l_U333][l_U334]._fU92 = l_U305[l_U298] * l_U335;
        }
        fVar4 += 18.00000000;
    };;;;;
    if ((l_U333 == 0) AND (l_U4[l_U333][l_U334]._fU92 == 50))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 322, 1 );
    }
    l_U370 = 0;
    return;
}

void sub_24992(int iParam0)
{
    return SQRT( (iParam0->_fU0 * iParam0->_fU0) + (iParam0->_fU8 * iParam0->_fU8) );
}

void sub_25041()
{
    for ( l_U298 = 0; l_U298 < l_U334; l_U298++ )
    {
        if ((l_U4[l_U333][l_U334]._fU32._fU8 < (l_U4[l_U333][l_U298]._fU32._fU8 + 0.00800000)) AND ((l_U4[l_U333][l_U334]._fU32._fU8 > (l_U4[l_U333][l_U298]._fU32._fU8 - 0.00800000)) AND ((l_U4[l_U333][l_U334]._fU32._fU0 < (l_U4[l_U333][l_U298]._fU32._fU0 + 0.00800000)) AND (l_U4[l_U333][l_U334]._fU32._fU0 > (l_U4[l_U333][l_U298]._fU32._fU0 - 0.00800000)))))
        {
            l_U370 = 1;
        }
    }
    if (l_U370)
    {
        PLAY_SOUND_FROM_OBJECT( l_U362, "DARTS_HIT_OTHER_DART", l_U4[l_U333][l_U334]._fU0 );
    }
    return;
}

void sub_25564()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playBullContexts()" );
        PRINTNL();
    }
    if (l_U333 == 0)
    {
        if (iVar2 > 2000)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID() DARTS_BULLSEYE)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_BULLSEYE", 1, 1, 2 );
        }
        else if (l_U368)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
        }
    }
    else if (l_U368)
    {
        if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BOAST)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U264, "DARTS_BOAST", 1, 1, 2 );
    }
    else if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_GOOD_SHOT)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U264, "DARTS_GOOD_SHOT", 1, 1, 2 );;;
    return;
}

void sub_26392()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playMissBoardContexts()" );
        PRINTNL();
    }
    if (l_U333 == 0)
    {
        if (NOT l_U368)
        {
            if (iVar2 > 1000)
            {
                if (l_U434)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_MISSES_BOARD)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_MISSES_BOARD", 1, 1, 2 );
            }
            else if (iVar2 > 500)
            {
                if (l_U434)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );
            }
            else if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );;;
        }
        else if (iVar2 > 1000)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_MISSES_BOARD)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_MISSES_BOARD", 1, 1, 2 );
        }
        else if (iVar2 > 500)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );
        }
        else if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_PLAYS_POORLY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );;;;
    }
    else if (l_U368)
    {
        if (iVar2 > 1000)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BORED)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U264, "DARTS_BORED", 1, 1, 2 );
        }
    }
    else if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BAD_SHOT)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U264, "DARTS_BAD_SHOT", 1, 1, 2 );;;
    return;
}

void sub_28154(unknown uParam0, unknown uParam1)
{
    PRINTSTRING( uParam0 );
    PRINTSTRING( " = " );
    PRINTFLOAT( uParam1 );
    PRINTNL();
    return;
}

void sub_28398()
{
    GET_GAME_TIMER( ref l_U257 );
    l_U330[l_U333] -= l_U4[l_U333][l_U334]._fU92;
    l_U356 += l_U4[l_U333][l_U334]._fU92;
    if (l_U333 == 0)
    {
        l_U357++;
    }
    if ((l_U330[l_U333] == 0) AND ((l_U4[l_U333][l_U334]._fU92 == 50) || (l_U335 == 2)))
    {
        sub_28579();
    }
    else if (((l_U335 != 2) AND (l_U330[l_U333] == 0)) || ((l_U330[l_U333] < 0) || (l_U330[l_U333] == 1)))
    {
        if ((l_U335 != 2) AND (l_U330[l_U333] == 0))
        {
            PRINT_WITH_NUMBER_NOW( "CHECKOUT_HELP", l_U4[l_U333][l_U334]._fU92, 4000, 0 );
        }
        else if (l_U333 == 1)
        {
            PRINT_WITH_NUMBER_NOW( "OPP_BUST", l_U4[l_U333][l_U334]._fU92, 4000, 0 );
        }
        else
        {
            PRINT_WITH_NUMBER_NOW( "BUST", l_U4[l_U333][l_U334]._fU92, 4000, 0 );
        }
        sub_31453();
        l_U330[l_U333] = l_U254[l_U333];
        sub_32970();
        l_U3 = 0;
        sub_33140();
    }
    else if (l_U356 == 180)
    {
        sub_34027();
        if (l_U333 == 0)
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 321, 1 );
            AWARD_ACHIEVEMENT( 2 );
        }
    }
    if (l_U356 == 140)
    {
        sub_35429();
    }
    if (NOT l_U371)
    {
        if (l_U333 == 0)
        {
            if (l_U334 < 2)
            {
                if ((l_U330[l_U333] == 50) || (((l_U330[l_U333] mod 2) == 0) AND ((l_U330[l_U333] > 0) AND (l_U330[l_U333] < 41))))
                {
                    sub_36766();
                    l_U371 = 1;
                }
            }
        }
    }
    if (l_U333 == 0)
    {
        PRINT_WITH_2_NUMBERS_NOW( "O_SCORE_REMAIN", l_U356, l_U330[l_U333], 2500, 0 );
    }
    else if ((l_U334 == 2) AND (l_U333 == 1))
    {
        PRINT_WITH_2_NUMBERS_NOW( "P_SCORE_REMAIN", l_U356, l_U330[l_U333], 4000, 0 );
    }
    else if (l_U3 != 3)
    {
        SETTIMERA( 0 );
        while ((NOT (l_U3 == 3)) AND (TIMERA() < 600))
        {
            WAIT( 0 );
            sub_16495();
        }
    };;;
    if (l_U334 == 2)
    {
        SETTIMERA( 0 );
        sub_32970();
    }
    l_U334++;
    if (l_U3 != 3)
    {
        l_U3 = 0;
    }
    if (l_U334 == 3)
    {
        l_U3 = 0;
        sub_33140();
    };;;
    return;
}

void sub_28579()
{
    GET_GAME_TIMER( ref l_U298 );
    INCREMENT_INT_STAT_NO_MESSAGE( 53, l_U298 - l_U328 );
    CLEAR_SMALL_PRINTS();
    CLEAR_HELP();
    if (l_U333 == 0)
    {
        PRINT_NOW( "PLAYER_WIN", 5000, 1 );
        INCREMENT_INT_STAT_NO_MESSAGE( 319, 1 );
        REGISTER_BEST_POSITION( 323, l_U357 );
        sub_2703( 0 );
        sub_28703( 1 );
        sub_29311( ref l_U411 );
    }
    else
    {
        PRINT_NOW( "PLAYER_LOSE", 5000, 1 );
        INCREMENT_INT_STAT_NO_MESSAGE( 320, 1 );
        sub_2703( 1 );
        sub_29502( ref l_U411 );
    }
    sub_29638();
    SETTIMERA( 0 );
    while (TIMERA() < 1500)
    {
        WAIT( 0 );
    }
    SET_CAM_ACTIVE( l_U295, 1 );
    SET_CAM_PROPAGATE( l_U295, 0 );
    SET_CAM_ACTIVE( l_U293, 0 );
    SET_CAM_PROPAGATE( l_U293, 0 );
    SET_CAM_INTERP_STYLE_CORE( l_U296, l_U293, l_U295, 3500, 0 );
    SET_CAM_ACTIVE( l_U296, 1 );
    SET_CAM_PROPAGATE( l_U296, 1 );
    if (NOT (IS_CHAR_DEAD( l_U264 )))
    {
        CLEAR_CHAR_TASKS( l_U264 );
    }
    if ((NOT (IS_CHAR_DEAD( l_U264 ))) AND (NOT (IS_CHAR_DEAD( sub_270() ))))
    {
        TASK_LOOK_AT_CHAR( sub_270(), l_U264, 10000, 0 );
        TASK_LOOK_AT_CHAR( l_U264, sub_270(), -2, 0 );
    }
    l_U2 = 2;
    l_U3 = 0;
    for ( l_U298 = 0; l_U298 < 3; l_U298++ )
    {
        l_U4[l_U333][l_U298]._fU32 = {0.00000000, 0.00000000, 0.00000000};
        l_U4[l_U333][l_U298]._fU20 = {0.00000000, 0.00000000, 0.00000000};
        l_U4[l_U333][l_U298]._fU8 = {0.00000000, -2.36850000, -0.20000000};
        l_U4[l_U333][l_U298]._fU92 = 0;
        l_U4[l_U333][l_U298]._fU96 = 0;
        l_U4[l_U333][l_U298]._fU100 = 0;
    }
    l_U334 = 0;
    l_U356 = 0;
    l_U333 = 0;
    l_U433 = 0;
    l_U254[0] = -1;
    l_U254[1] = -1;
    return;
}

void sub_28703(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U43030[uParam0]._fU0)
    {
        iVar3 = g_U43030[uParam0]._fU8;
        if (iVar3 > 0)
        {
            sub_28772( 2, iVar3 );
            g_U43030[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_28772(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_28942( 0 );
    return;
}

void sub_28942(boolean bParam0)
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
        sub_29187();
    }
    if ((NOT ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_29187()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_29311(int iParam0)
{
    int iVar3;

    iVar3 = 50;
    switch (iParam0->_fU0)
    {
        case 0:
        iVar3 = l_U0;
        break;
        case 1:
        iVar3 = l_U1;
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
        l_U0 = iVar3;
        break;
        case 1:
        l_U1 = iVar3;
        break;
    }
    return;
}

void sub_29502(int iParam0)
{
    int iVar3;

    iVar3 = 50;
    switch (iParam0->_fU0)
    {
        case 0:
        iVar3 = l_U0;
        break;
        case 1:
        iVar3 = l_U1;
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
        l_U0 = iVar3;
        break;
        case 1:
        l_U1 = iVar3;
        break;
    }
    return;
}

void sub_29638()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playWinContexts()" );
        PRINTNL();
    }
    if (l_U333 == 0)
    {
        if (iVar2 > 1500)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_LOSES)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_PLAYS_LOSES", 1, 1, 2 );
        }
        else if (l_U368)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_WINS)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_WINS", 1, 1, 2 );
        }
        else if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_LOST)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U264, "GAME_LOST", 1, 1, 2 );;;
    }
    else if (l_U368)
    {
        if (iVar2 > 1500)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_LOSES)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_LOSES", 1, 1, 2 );
        }
        else if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_LOSES)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_LOSES", 1, 1, 2 );;
    }
    else if (iVar2 > 1500)
    {
        if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_LOSES)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_LOSES", 1, 1, 2 );
    }
    else if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_WON)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U264, "GAME_WON", 1, 1, 2 );;;;
    return;
}

void sub_31453()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playBustContexts()" );
        PRINTNL();
    }
    if (l_U333 == 0)
    {
        if (l_U368)
        {
            if (iVar2 < 2000)
            {
                if (l_U434)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_FAILS_CHECK_OUT)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_FAILS_CHECK_OUT", 1, 1, 2 );
            }
            else if (iVar2 < 2500)
            {
                if (l_U434)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );
            }
            else if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );;;
        }
        else if (iVar2 < 1000)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_BUSTS)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_BUSTS", 1, 1, 2 );
        }
        else if (iVar2 < 2000)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_FAILS_CHECK_OUT)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_FAILS_CHECK_OUT", 1, 1, 2 );
        }
        else if (iVar2 < 2500)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );
        }
        else if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_POORLY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_PLAYS_POORLY", 1, 1, 2 );;;;;
    }
    else if (NOT l_U368)
    {
        if (iVar2 < 1000)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BAD_SHOT)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U264, "DARTS_BAD_SHOT", 1, 1, 2 );
        }
        else if (iVar2 < 2000)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_PLAYING_BADLY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U264, "GAME_PLAYING_BADLY", 1, 1, 2 );
        }
    }
    return;
}

void sub_32970()
{
    boolean bVar2;

    SETTIMERA( 0 );
    l_U433 = 0;
    WAIT( 0 );
    while ((NOT bVar2) AND (IS_MESSAGE_BEING_DISPLAYED()))
    {
        WAIT( 0 );
        if (NOT (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U259 )))
        {
            sub_2703( 3 );
            sub_218();
        }
        sub_2787();
        if (NOT (IS_CONTROL_JUST_PRESSED( 2, 77 )))
        {
            l_U433 = 1;
        }
        else if (l_U433)
        {
            bVar2 = true;
            if (l_U333 == 1)
            {
                l_U3 = 3;
            }
        }
    }
    CLEAR_SMALL_PRINTS();
    return;
}

void sub_33140()
{
    for ( l_U298 = 0; l_U298 < 3; l_U298++ )
    {
        l_U4[l_U333][l_U298]._fU32 = {0.00000000, 0.00000000, 0.00000000};
        l_U4[l_U333][l_U298]._fU20 = {0.00000000, 0.00000000, 0.00000000};
        l_U4[l_U333][l_U298]._fU8 = {0.00000000, -2.36850000, -0.20000000};
        l_U4[l_U333][l_U298]._fU92 = 0;
        l_U4[l_U333][l_U298]._fU96 = 0;
        l_U4[l_U333][l_U298]._fU100 = 0;
        DELETE_OBJECT( ref l_U4[l_U333][l_U298]._fU0 );
    }
    for ( l_U298 = 0; l_U298 < 3; l_U298++ )
    {
        if (DOES_OBJECT_EXIST( l_U163[l_U298]._fU0 ))
        {
            DELETE_OBJECT( ref l_U163[l_U298]._fU0 );
        }
    }
    if (l_U254[l_U333] != l_U330[l_U333])
    {
        PLAY_SOUND_FROM_OBJECT( l_U367, "DARTS_SCORE", l_U259 );
        SET_VARIABLE_ON_SOUND( l_U367, "Score", TO_FLOAT( l_U330[l_U333] ) );
        sub_33579();
        if (l_U333 != 1)
        {
            sub_7970();
        }
    }
    l_U254[l_U333] = l_U330[l_U333];
    l_U334 = 0;
    l_U356 = 0;
    if (l_U333 == 0)
    {
        l_U333 = 1;
        PRINT_WITH_NUMBER_NOW( "SWITCH_OPPONENT", l_U330[l_U333], 2000, 0 );
        PRINT_HELP_FOREVER( "HELP_SKIP" );
        sub_32970();
    }
    else
    {
        l_U333 = 0;
        CLEAR_HELP();
        PRINT_WITH_NUMBER_NOW( "SWITCH_PLAYER", l_U330[l_U333], 5000, 0 );
    }
    l_U433 = 0;
    return;
}

void sub_33579()
{
    boolean bVar2;
    int iVar3;

    bVar2 = false;
    iVar3 = -1;
    l_U298 = 0;
    while ((NOT bVar2) AND (l_U298 < 7))
    {
        if (l_U338[l_U333][l_U298] == 0)
        {
            iVar3 = l_U298;
            bVar2 = true;
        }
        l_U298++;
    }
    if (iVar3 == -1)
    {
        l_U338[l_U333][0] = l_U330[l_U333];
        for ( l_U298 = 1; l_U298 <= 6; l_U298++ )
        {
            l_U338[l_U333][l_U298] = 0;
        }
    }
    else
    {
        l_U338[l_U333][iVar3] = l_U330[l_U333];
    }
    return;
}

void sub_34027()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ play180Contexts()" );
        PRINTNL();
    }
    if (l_U333 == 0)
    {
        if (NOT l_U368)
        {
            if (iVar2 > 1000)
            {
                if (l_U434)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_GETS_180)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_GETS_180", 1, 1, 2 );
            }
            else if (iVar2 > 500)
            {
                if (l_U434)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
            }
            else if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_HAPPY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_HAPPY", 1, 1, 2 );;;
        }
        else if (iVar2 > 1000)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_GETS_180)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_GETS_180", 1, 1, 2 );
        }
        else if (iVar2 > 500)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
        }
        else if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_PLAYS_WELL)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );;;;
    }
    else if (l_U368)
    {
        if (iVar2 > 1500)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BOAST)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U264, "DARTS_BOAST", 1, 1, 2 );
        }
        else if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_HAPPY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U264, "DARTS_HAPPY", 1, 1, 2 );;
    }
    else if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_PLAYING_WELL)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U264, "GAME_PLAYING_WELL", 1, 1, 2 );;;
    return;
}

void sub_35429()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ play140Contexts()" );
        PRINTNL();
    }
    if (l_U333 == 0)
    {
        if (NOT l_U368)
        {
            if (iVar2 > 1000)
            {
                if (l_U434)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_GETS_140)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_GETS_140", 1, 1, 2 );
            }
            else if (iVar2 > 500)
            {
                if (l_U434)
                {
                    PRINTNL();
                    PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                    PRINTNL();
                }
                SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
            }
            else if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_HAPPY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_HAPPY", 1, 1, 2 );;;
        }
        else if (iVar2 > 1000)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_GETS_140)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_GETS_140", 1, 1, 2 );
        }
        else if (iVar2 > 500)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID(), DARTS_PLAYER_PLAYS_WELL)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );
        }
        else if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_PLAYS_WELL)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_PLAYS_WELL", 1, 1, 2 );;;;
    }
    else if (l_U368)
    {
        if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_HAPPY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U264, "DARTS_HAPPY", 1, 1, 2 );
    }
    else if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, GAME_PLAYING_WELL)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U264, "GAME_PLAYING_WELL", 1, 1, 2 );;;
    return;
}

void sub_36766()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 3000, ref iVar2 );
    PRINTNL();
    PRINTINT( iVar2 );
    if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ playOneDartAwayContexts()" );
        PRINTNL();
    }
    if (l_U368)
    {
        if (iVar2 > 1500)
        {
            if (l_U434)
            {
                PRINTNL();
                PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID() DARTS_PLAYER_1_DART_AWAY)" );
                PRINTNL();
            }
            SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_1_DART_AWAY", 1, 1, 2 );
        }
        else if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_PLAYER_1_DART_AWAY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( l_U264, "DARTS_PLAYER_1_DART_AWAY", 1, 1, 2 );;
    }
    else if (iVar2 > 2000)
    {
        if (l_U434)
        {
            PRINTNL();
            PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(PLAYER_CHAR_ID() DARTS_PLAYER_1_DART_AWAY)" );
            PRINTNL();
        }
        SAY_AMBIENT_SPEECH( sub_270(), "DARTS_PLAYER_1_DART_AWAY", 1, 1, 2 );
    }
    else if (l_U434)
    {
        PRINTNL();
        PRINTSTRING( "$$$ SAY_AMBIENT_SPEECH(opponent, DARTS_BOAST)" );
        PRINTNL();
    }
    SAY_AMBIENT_SPEECH( l_U264, "DARTS_BOAST", 1, 1, 2 );;;
    return;
}

void sub_37734()
{
    l_U333 = 1;
    l_U334 = 0;
    while ((l_U3 == 3) AND (l_U334 < 3))
    {
        if (l_U4[l_U333][l_U334]._fU96)
        {
            PRINTSTRING( " = " );
            PRINTINT( l_U4[l_U333][l_U334]._fU92 );
            PRINTNL();
            l_U334++;
        }
        else if (l_U4[l_U333][l_U334]._fU100)
        {
            l_U4[l_U333][l_U334]._fU96 = 1;
            l_U4[l_U333][l_U334]._fU100 = 0;
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U4[l_U333][l_U334]._fU44._fU0, l_U4[l_U333][l_U334]._fU44._fU4 + l_U403, l_U4[l_U333][l_U334]._fU44._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
            SET_OBJECT_COORDINATES( l_U4[l_U333][l_U334]._fU0, l_U302._fU0, l_U302._fU4, l_U302._fU8 );
            sub_24887();
            sub_28398();
        }
        else
        {
            sub_22114();
            sub_22613();
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U4[l_U333][l_U334]._fU44._fU0, l_U4[l_U333][l_U334]._fU44._fU4 + l_U403, l_U4[l_U333][l_U334]._fU44._fU8, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
            CREATE_OBJECT( l_U4[l_U333][l_U334]._fU4, l_U302._fU0, l_U302._fU4, l_U302._fU8 - 0.12000000, ref l_U4[l_U333][l_U334]._fU0, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U4[l_U333][l_U334]._fU0, l_U292 );
            l_U4[l_U333][l_U334]._fU96 = 1;
            l_U4[l_U333][l_U334]._fU100 = 0;
            GENERATE_RANDOM_FLOAT_IN_RANGE( 0.00000000, 90.00000000, ref l_U300 );
            SET_OBJECT_ROTATION( l_U4[l_U333][l_U334]._fU0, 90.00000000 + l_U262, l_U300, 0.00000000 );
            sub_24887();
            sub_28398();
        }
    }
    l_U334 = 0;
    return;
}

void sub_38530()
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
        if (NOT l_U355)
        {
            SET_CAM_ACTIVE( l_U294, 1 );
            SET_CAM_PROPAGATE( l_U294, 0 );
            SET_CAM_ACTIVE( l_U293, 0 );
            SET_CAM_PROPAGATE( l_U293, 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U296, l_U293, l_U294, 1500, 0 );
            SET_CAM_ACTIVE( l_U296, 1 );
            SET_CAM_PROPAGATE( l_U296, 1 );
            while (IS_SPECIFIC_CAM_INTERPOLATING( l_U296 ))
            {
                WAIT( 0 );
            }
            SET_CAM_PROPAGATE( l_U294, 1 );
            SET_CAM_ACTIVE( l_U296, 0 );
            SET_CAM_PROPAGATE( l_U296, 0 );
            l_U355 = 1;
        }
    }
    else if (l_U355)
    {
        SET_CAM_ACTIVE( l_U293, 1 );
        SET_CAM_PROPAGATE( l_U293, 0 );
        SET_CAM_ACTIVE( l_U294, 0 );
        SET_CAM_PROPAGATE( l_U294, 0 );
        SET_CAM_INTERP_STYLE_CORE( l_U296, l_U294, l_U293, 1500, 0 );
        SET_CAM_ACTIVE( l_U296, 1 );
        SET_CAM_PROPAGATE( l_U296, 1 );
        while (IS_SPECIFIC_CAM_INTERPOLATING( l_U296 ))
        {
            WAIT( 0 );
        }
        SET_CAM_PROPAGATE( l_U293, 1 );
        SET_CAM_ACTIVE( l_U296, 0 );
        SET_CAM_PROPAGATE( l_U296, 0 );
        l_U355 = 0;
    }
    return;
}

void sub_38980()
{
    vector vVar2;
    float fVar5;
    float fVar6;
    float fVar7;
    int iVar8;

    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U2 = 4;
    }
    if (l_U414)
    {
        CLEAR_HELP();
        l_U414 = 0;
        sub_28579();
    }
    if (l_U249)
    {
        if (NOT (DOES_OBJECT_EXIST( l_U242 )))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U243._fU0 - 0.00350000, l_U243._fU4 - 0.04000000, l_U243._fU8 - 0.00100000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
            CREATE_OBJECT( l_U263, l_U282._fU0, l_U282._fU4, l_U282._fU8, ref l_U242, 1 );
            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( l_U242, l_U292 );
            SET_OBJECT_ROTATION( l_U242, 90.00000000 + l_U262, 0.00000000, 0.00000000 );
        }
        else
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U259, l_U243._fU0 - 0.00350000, l_U243._fU4 - 0.04000000, l_U243._fU8 - 0.00100000, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
            SET_OBJECT_COORDINATES( l_U242, l_U302._fU0, l_U302._fU4, l_U302._fU8 );
            if (l_U250)
            {
                vVar2 = {90 + l_U262, 0, 0};
                vVar2.z = sub_39392( l_U243._fU0 - 0.00350000, l_U243._fU4 - 0.04000000, l_U243._fU8 - 0.00100000 );
                SET_OBJECT_ROTATION( l_U242, vVar2.x, vVar2.y, vVar2.z );
                l_U250 = 0;
            }
            else if (l_U251)
            {
                SET_OBJECT_ROTATION( l_U242, 90 + l_U262, 0, 0 );
                l_U251 = 0;
            }
            GET_ANGLE_BETWEEN_2D_VECTORS( 0.00000000, 1.00000000, l_U243._fU0, l_U243._fU8, ref fVar6 );
            fVar5 = sub_24992( ref l_U243 );
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
                l_U335 = 3;
            }
            else if ((fVar5 < 0.22600000) AND (fVar5 > 0.21100000))
            {
                l_U335 = 2;
            }
            else
            {
                l_U335 = 1;
            }
            if (l_U4[l_U333][l_U334]._fU32._fU0 < 0.00000000)
            {
                fVar6 = 360.00000000 - fVar6;
            }
            fVar7 = 0;
            l_U298 = 0;
            for ( l_U298 = 0; l_U298 < 21; l_U298++ )
            {
                if ((fVar6 < (fVar7 + 9.00000000)) AND (fVar6 >= (fVar7 - 9.00000000)))
                {
                    iVar8 = l_U305[l_U298] * l_U335;
                    PRINTNL();
                    PRINTSTRING( "********* SCORE = " );
                    PRINTINT( iVar8 );
                }
                fVar7 += 18.00000000;
            };;;;;
        }
    }
    else if (DOES_OBJECT_EXIST( l_U242 ))
    {
        DELETE_OBJECT( ref l_U242 );
        PRINTNL();
        PRINTSTRING( "*** DELETING PLACER DART" );
        PRINTNL();
    }
    if (l_U415)
    {
        PRINTSTRING( "******************" );
        PRINTNL();
        sub_40236( "Turn", l_U334 );
        PRINTSTRING( "******************" );
        PRINTNL();
        sub_23702( "Position", ref l_U4[l_U333][l_U334]._fU8 );
        sub_23702( "Target", ref l_U4[l_U333][l_U334]._fU32 );
        sub_23702( "throwVector", ref l_U4[l_U333][l_U334]._fU20 );
        sub_40236( "Score", l_U4[l_U333][l_U334]._fU92 );
        sub_40236( "playerScore[playr]", l_U330[l_U333] );
        sub_40544( "isStuck", l_U4[l_U333][l_U334]._fU96 );
        sub_40544( "isTravelling", l_U4[l_U333][l_U334]._fU100 );
        PRINTSTRING( "******************" );
        PRINTNL();
        PRINTNL();
    }
    return;
}

float sub_39392(vector vParam0)
{
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    vParam0.y = -0.23000000;
    vVar5 = {l_U279 - vParam0};
    uVar8 = VMAG( vVar5 );
    uVar9 = {vVar5 / uVar8};
    GET_HEADING_FROM_VECTOR_2D( uVar9._fU0, uVar9._fU4, ref l_U300 );
    return l_U300 - 180.00000000;
}

void sub_40236(unknown uParam0, unknown uParam1)
{
    PRINTSTRING( uParam0 );
    PRINTSTRING( " = " );
    PRINTINT( uParam1 );
    PRINTNL();
    return;
}

void sub_40544(unknown uParam0, boolean bParam1)
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

void sub_40767()
{
    if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ANOTHER_GAME" ))) AND (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U296 ))))
    {
        SET_CAM_PROPAGATE( l_U295, 1 );
        SET_CAM_ACTIVE( l_U296, 0 );
        SET_CAM_PROPAGATE( l_U296, 0 );
        PRINT_HELP_FOREVER( "ANOTHER_GAME" );
    }
    else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ANOTHER_GAME" ))
    {
        if (IS_CONTROL_PRESSED( 2, 77 ))
        {
            CLEAR_HELP();
            SET_CAM_ACTIVE( l_U293, 1 );
            SET_CAM_PROPAGATE( l_U293, 0 );
            SET_CAM_ACTIVE( l_U295, 0 );
            SET_CAM_PROPAGATE( l_U295, 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U296, l_U295, l_U293, 1500, 0 );
            SET_CAM_ACTIVE( l_U296, 1 );
            SET_CAM_PROPAGATE( l_U296, 1 );
            WAIT( 1000 );
            if ((NOT (IS_CHAR_DEAD( l_U264 ))) AND (NOT (IS_CHAR_DEAD( sub_270() ))))
            {
                TASK_CLEAR_LOOK_AT( sub_270() );
                TASK_CLEAR_LOOK_AT( l_U264 );
            }
            l_U333 = 1;
            sub_16111();
        }
        else if (IS_CONTROL_PRESSED( 2, 23 ))
        {
            CLEAR_PRINTS();
            sub_218();
        }
    }
    return;
}

