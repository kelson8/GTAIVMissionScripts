void main()
{
    int iVar2;
    unknown uVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    l_U203 = 0;
    l_U204 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U236 = 10.00000000;
    l_U237 = 15.00000000;
    l_U252 = 350;
    l_U253 = 1.00000000;
    l_U254 = 20.00000000;
    l_U255 = 0.00000000;
    l_U256 = 0.50000000;
    l_U257 = 0;
    l_U262 = 1;
    l_U264 = 0.20000000;
    l_U269 = 0;
    l_U270 = 28;
    l_U271 = {-449.26720000, 356.90620000, 10.09230000};
    l_U275 = {737.62840000, 1553.32100000, 20.86280000};
    l_U296 = 0;
    l_U298 = {-460.67510000, 152.90150000, 8.74310000};
    l_U301 = 183.67400000;
    l_U309 = 0;
    l_U310 = 0;
    l_U311 = 0;
    l_U314 = 8000;
    l_U316 = 0;
    l_U318 = {-477.53300000, 156.73000000, 6.55090000};
    l_U321 = {-481.89720000, 147.04190000, 6.55070000};
    l_U324 = {-480.67240000, 165.78080000, 10.61200000};
    l_U327 = {-477.60400000, 142.40070000, 6.55290000};
    l_U330 = {-468.55550000, 140.33990000, 8.85910100};
    l_U333 = 129.90300000;
    l_U334 = 104.42500000;
    l_U335 = 184.52100000;
    l_U336 = 90.00000000;
    l_U337 = 45.32310000;
    l_U344 = 1;
    l_U346 = 1;
    l_U348 = 0;
    l_U349 = 0;
    l_U359 = 0;
    l_U360 = 0;
    l_U361 = 0;
    l_U362 = 0;
    l_U363 = 0;
    l_U371 = 0;
    l_U372 = 0;
    l_U382 = {0.00000000, 0.30000000, 0.00000000};
    l_U385 = 40.00000000;
    l_U386 = 2000;
    l_U387 = 4.00000000;
    l_U390 = -45.00000000;
    l_U391 = 45.00000000;
    l_U392 = -89.00000000;
    l_U393 = 89.00000000;
    l_U395 = 50.00000000;
    l_U396 = {0.00000000, 0.00000000, 0.70000000};
    sub_656();
    while (true)
    {
        WAIT( 0 );
        switch (l_U269)
        {
            case 0:
            switch (l_U317)
            {
                case 0:
                g_U30180 = 1;
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_3095( g_U30199, 1 );
                        WAIT( 0 );
                        sub_3238( "CLBPRC2", 0 );
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LA2" )))
                        {
                            PRINT_HELP_FOREVER( "LA2" );
                        }
                        sub_3413();
                        SETTIMERA( 0 );
                        l_U317++;
                    }
                }
                break;
                case 1:
                sub_3413();
                REQUEST_MODEL( 1878085135 );
                REQUEST_MODEL( 1781540370 );
                REQUEST_MODEL( sub_4568( 0 ) );
                REQUEST_ANIMS( "misstonym2" );
                sub_3238( "E2Tm2AU", 6 );
                sub_4775( "E2Tm2AU" );
                sub_4894( 0, sub_3827(), "LUIS", 0 );
                sub_5041( 28, 0 );
                g_U8781 = 0;
                l_U317++;
                break;
                case 2:
                sub_3413();
                if ((HAVE_ANIMS_LOADED( "misstonym2" )) AND ((HAS_MODEL_LOADED( sub_4568( 0 ) )) AND ((HAS_MODEL_LOADED( 1781540370 )) AND (HAS_MODEL_LOADED( 1878085135 )))))
                {
                    l_U317++;
                }
                break;
                case 3:
                sub_3413();
                if (TIMERA() > 4000)
                {
                    sub_5313();
                    CLEAR_HELP();
                    l_U317++;
                }
                break;
                case 4:
                SET_WIDESCREEN_BORDERS( 1 );
                sub_5540( sub_3827() );
                sub_6622( 1 );
                OPEN_SEQUENCE_TASK( ref l_U364 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "luis_check_earpiece_intro", "misstonym2", 8.00000000, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "luis_check_earpiece_loop", "misstonym2", 8.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U364 );
                TASK_PERFORM_SEQUENCE( sub_3827(), l_U364 );
                CLEAR_SEQUENCE_TASK( l_U364 );
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_4894( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                        sub_6938( "E2TM2_TODO", ref l_U365, 7, 0 );
                    }
                }
                l_U317++;
                break;
                case 5:
                if ((sub_8085()) || (NOT (sub_7922( l_U365 ))))
                {
                    if (g_U30199 != -1)
                    {
                        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                        {
                            sub_3095( g_U30199, 0 );
                        }
                    }
                    CLEAR_CHAR_TASKS( sub_3827() );
                    if (sub_7922( l_U365 ))
                    {
                        sub_8270( ref l_U365, 0 );
                    }
                    SET_WIDESCREEN_BORDERS( 0 );
                    sub_8402();
                    sub_6622( 0 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3827(), 0 );
                    sub_8570();
                    SET_PLAYER_CONTROL( sub_800(), 1 );
                    SETTIMERA( 0 );
                    l_U317 = 0;
                    l_U269 = 1;
                }
                break;
            }
            break;
            case 1:
            sub_9920();
            if (NOT IS_INTERIOR_SCENE())
            {
                if (NOT (sub_11363( 0 )))
                {
                    if (NOT l_U349)
                    {
                        if (g_U30199 != -1)
                        {
                            if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 )))
                                {
                                    sub_4894( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                                    sub_11732( ref l_U350, "E2TM2_BYE", "E2TM2_LBYE" );
                                    sub_12079( ref l_U350, ref l_U365, 7, 1 );
                                }
                            }
                            l_U349 = 1;
                        }
                    }
                }
            }
            if (LOCATE_CHAR_ON_FOOT_3D( sub_3827(), l_U275._fU0, l_U275._fU4, l_U275._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 0 ))
            {
                if (IS_THIS_PRINT_BEING_DISPLAYED( "FARE", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    CLEAR_THIS_PRINT( "FARE" );
                }
                if (NOT (IS_THIS_PRINT_BEING_DISPLAYED( "CP2_05", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 )))
                {
                    PRINT_NOW( "CP2_05", 7500, 0 );
                }
            }
            if (IS_PAY_N_SPRAY_ACTIVE())
            {
                PRINT( "CP2_04", 7500, 0 );
                sub_10203();
            }
            if (TIMERA() < 300000)
            {
                if (sub_12436( l_U275._fU0, l_U275._fU4, l_U275._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1, "CP2_01", "CP2_05", 1, "CP2_03" ))
                {
                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref iVar2 );
                    if (DOES_VEHICLE_EXIST( iVar2 ))
                    {
                        if (IS_VEH_DRIVEABLE( iVar2 ))
                        {
                            if (DOES_VEHICLE_EXIST( l_U297 ))
                            {
                                if (IS_VEH_DRIVEABLE( l_U297 ))
                                {
                                    if (iVar2 != l_U297)
                                    {
                                        sub_2612();
                                    }
                                }
                            }
                        }
                    }
                    SET_PLAYER_CONTROL( sub_800(), 0 );
                    l_U269 = 2;
                }
            }
            else if (NOT l_U316)
            {
                PRINT( "CP2_04", 7500, 0 );
                l_U316 = 1;
            }
            else if (NOT (sub_11363( 0 )))
            {
                sub_18922();
                sub_19129( 28, l_U295, "E2Tm2AU", 1 );
                sub_10203();
            };;;
            break;
            case 2:
            sub_8270( ref l_U365, 0 );
            sub_10026( 0 );
            CLEAR_WANTED_LEVEL( sub_800() );
            sub_19855();
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3827(), 1 );
            CREATE_OBJECT( 1781540370, 733.71950000, 1554.14400000, 21.04320000, ref l_U315, 1 );
            if (NOT (IS_CHAR_DEAD( l_U292 )))
            {
                ATTACH_OBJECT_TO_PED( l_U315, l_U292, 1232, 0.07000000, -0.03000000, -0.03000000, 4, 7, 12, 0 );
            }
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar3 );
            if (NOT (IS_CAR_DEAD( uVar3 )))
            {
                SET_CAR_ENGINE_ON( uVar3, 0, 0 );
                GET_CAR_HEADING( uVar3, ref fVar4 );
                if ((fVar4 < 90) || (fVar4 > 270))
                {
                    SET_CAR_HEADING( uVar3, 0 );
                }
                if (fVar4 > 90)
                {
                    if (fVar4 < 270)
                    {
                        SET_CAR_HEADING( uVar3, 180 );
                    }
                }
                SET_CAR_COORDINATES( uVar3, 736.49410000, 1552.30300000 + 2, 20.65680000 );
                SET_CAR_ON_GROUND_PROPERLY( uVar3 );
            }
            ENABLE_SCENE_STREAMING( 0 );
            BEGIN_CAM_COMMANDS( ref l_U338 );
            if (NOT l_U339)
            {
                sub_20274();
            }
            SET_USE_HIGHDOF( 1 );
            SET_WIDESCREEN_BORDERS( 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            CLEAR_AREA( 736.49410000, 1552.30300000, 20.65680000, 100, 1 );
            SWITCH_PED_PATHS_OFF( 728, 1543, -10, 733, 1559, 50 );
            SET_CAM_POS( l_U341, 745.92280000, 1531.00700000, 25.07866000 );
            SET_CAM_ROT( l_U341, 12.51185000, -0.00000000, 30.29911000 );
            SET_CAM_FOV( l_U341, 22.20006000 );
            SET_CAM_POS( l_U342, 745.92280000, 1531.00700000, 25.07866000 );
            SET_CAM_ROT( l_U342, -6.16658000, -0.00000000, 30.29911000 );
            SET_CAM_FOV( l_U342, 22.20006000 );
            SET_CAM_ACTIVE( l_U343, 1 );
            SET_CAM_PROPAGATE( l_U343, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U343, l_U341, l_U342, 6750, 0 );
            SETTIMERA( 0 );
            while (l_U344 == 1)
            {
                switch (l_U345)
                {
                    case 0:
                    if (NOT (IS_CHAR_INJURED( l_U292 )))
                    {
                        CLEAR_CHAR_TASKS( l_U292 );
                        SET_CHAR_COORDINATES( l_U292, 733.12840000 - 1.50000000, 1555.35600000, 21.15760000 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3827() );
                        if (IS_CHAR_IN_ANY_CAR( sub_3827() ))
                        {
                            WARP_CHAR_FROM_CAR_TO_COORD( sub_3827(), 733.12840000, 1555.35600000, 21.15760000 );
                        }
                        else
                        {
                            SET_CHAR_COORDINATES( sub_3827(), 733.12840000, 1555.35600000, 21.15760000 );
                        }
                        sub_20952( sub_3827(), l_U292 );
                        sub_20952( l_U292, sub_3827() );
                        OPEN_SEQUENCE_TASK( ref l_U364 );
                        TASK_LOOK_AT_CHAR( 0, sub_3827(), -2, 0 );
                        TASK_PLAY_ANIM( 0, "handover_ped_a", "misstonym2", 4.00000000, 0, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U364 );
                        TASK_PERFORM_SEQUENCE( l_U292, l_U364 );
                        CLEAR_SEQUENCE_TASK( l_U364 );
                        TASK_LOOK_AT_CHAR( sub_3827(), l_U292, -2, 0 );
                    }
                    l_U345++;
                    break;
                    case 1:
                    if (TIMERA() > 4000)
                    {
                        sub_6938( "E2T2_TAWAY", ref l_U365, 7, 1 );
                        l_U345++;
                    }
                    break;
                    case 2:
                    if (TIMERA() > 6750)
                    {
                        TASK_PLAY_ANIM( sub_3827(), "handover_ped_b", "misstonym2", 4.00000000, 0, 1, 1, 0, 0 );
                        SET_CAM_POS( l_U341, 730.29580000, 1554.00700000, 22.68442000 );
                        SET_CAM_ROT( l_U341, -0.28265000, -0.00000000, -53.01294000 );
                        SET_CAM_FOV( l_U341, 23.69059000 );
                        SET_CAM_POS( l_U342, 730.29580000, 1554.00700000, 22.68442000 );
                        SET_CAM_ROT( l_U342, -0.28265000, -0.00000000, -53.01294000 );
                        SET_CAM_FOV( l_U342, 26.69059000 );
                        SET_CAM_ACTIVE( l_U343, 0 );
                        SET_CAM_PROPAGATE( l_U343, 0 );
                        SET_CAM_ACTIVE( l_U343, 1 );
                        SET_CAM_PROPAGATE( l_U343, 1 );
                        SET_CAM_INTERP_STYLE_CORE( l_U343, l_U341, l_U342, 2500, 0 );
                        SET_CAM_FAR_DOF( l_U341, 4.50000000 );
                        SET_CAM_FAR_DOF( l_U342, 4.50000000 );
                        l_U345++;
                    }
                    break;
                    case 3:
                    if (NOT (IS_CHAR_INJURED( l_U292 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U292, "misstonym2", "handover_ped_a" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U292, "misstonym2", "handover_ped_a", ref fVar5 );
                        }
                    }
                    if (fVar5 >= 0.20000000)
                    {
                        DETACH_OBJECT( l_U315, 0 );
                        ATTACH_OBJECT_TO_PED( l_U315, sub_3827(), 1232, 0.07000000, -0.03000000, -0.03000000, 4, 7, 12, 0 );
                        l_U345++;
                    }
                    break;
                    case 4:
                    if (IS_CHAR_PLAYING_ANIM( sub_3827(), "misstonym2", "handover_ped_b" ))
                    {
                        GET_CHAR_ANIM_CURRENT_TIME( sub_3827(), "misstonym2", "handover_ped_b", ref fVar6 );
                    }
                    if (fVar6 >= 0.70000000)
                    {
                        l_U345++;
                    }
                    break;
                    case 5:
                    if (NOT (IS_CHAR_INJURED( l_U292 )))
                    {
                        CLEAR_CHAR_TASKS( l_U292 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( l_U292, 729.65730000, 1554.50800000, 21.16180000, 2, 20000, 1 );
                    }
                    TASK_CLEAR_LOOK_AT( sub_3827() );
                    CLEAR_CHAR_TASKS( sub_3827() );
                    SET_CHAR_HEADING( sub_3827(), 302.93410000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( sub_3827(), 734.07560000, 1554.28300000, 21.06190000, 2, 20000, 1 );
                    SET_CAM_POS( l_U341, 731.46080000, 1549.03000000, 28.00205000 );
                    SET_CAM_ROT( l_U341, -41.61602000, -0.00000000, -15.39978000 );
                    SET_CAM_FOV( l_U341, 46.20000000 );
                    SET_CAM_POS( l_U342, 731.54760000, 1549.34700000, 27.71120000 );
                    SET_CAM_ROT( l_U342, -41.61602000, -0.00000000, -15.39978000 );
                    SET_CAM_FOV( l_U342, 46.20000000 );
                    SET_CAM_FAR_DOF( l_U341, 10 );
                    SET_CAM_FAR_DOF( l_U342, 10 );
                    SET_CAM_ACTIVE( l_U343, 0 );
                    SET_CAM_PROPAGATE( l_U343, 0 );
                    SET_CAM_ACTIVE( l_U343, 1 );
                    SET_CAM_PROPAGATE( l_U343, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U343, l_U341, l_U342, 2000, 0 );
                    SETTIMERA( 0 );
                    l_U345++;
                    break;
                    case 6:
                    if (TIMERA() > 1500)
                    {
                        l_U345++;
                    }
                    break;
                    case 7:
                    if (DOES_CHAR_EXIST( l_U292 ))
                    {
                        DELETE_CHAR( ref l_U292 );
                    }
                    if (DOES_OBJECT_EXIST( l_U315 ))
                    {
                        DETACH_OBJECT( l_U315, 0 );
                        DELETE_OBJECT( ref l_U315 );
                    }
                    CLEAR_CHAR_TASKS( sub_3827() );
                    SET_CAM_ACTIVE( l_U340, 0 );
                    SET_CAM_PROPAGATE( l_U340, 0 );
                    SET_USE_HIGHDOF( 0 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3827(), 0 );
                    l_U344 = 0;
                    break;
                }
                if (sub_22600())
                {
                    l_U344 = 0;
                    if (IS_SCREEN_FADED_IN())
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3827(), 0 );
                    CLEAR_CHAR_TASKS( sub_3827() );
                    CLEAR_PRINTS();
                    if (DOES_OBJECT_EXIST( l_U315 ))
                    {
                        DETACH_OBJECT( l_U315, 0 );
                        DELETE_OBJECT( ref l_U315 );
                    }
                    SET_CHAR_COORDINATES( sub_3827(), 734.07560000, 1554.28300000, 21.06190000 );
                    SET_CHAR_HEADING( sub_3827(), 279.00820000 );
                    if (DOES_CHAR_EXIST( l_U292 ))
                    {
                        DELETE_CHAR( ref l_U292 );
                    }
                    INCREMENT_INT_STAT( 372, 1 );
                    SET_CAM_ACTIVE( l_U343, 0 );
                    SET_CAM_PROPAGATE( l_U343, 0 );
                    SET_CAM_ACTIVE( l_U340, 0 );
                    SET_CAM_PROPAGATE( l_U340, 0 );
                    SET_USE_HIGHDOF( 0 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                }
                WAIT( 0 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            END_CAM_COMMANDS( ref l_U338 );
            ENABLE_SCENE_STREAMING( 1 );
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
            }
            SET_PLAYER_CONTROL( sub_800(), 1 );
            l_U269 = 3;
            break;
            case 3:
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3827() )))
            {
                PRINT( "CP2_05", 7500, 0 );
            }
            SETTIMERA( 0 );
            l_U269 = 4;
            break;
            case 4:
            sub_9920();
            if (IS_CHAR_IN_ANY_CAR( sub_3827() ))
            {
                if (IS_THIS_PRINT_BEING_DISPLAYED( "CP2_05", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
                {
                    CLEAR_THIS_PRINT( "CP2_05" );
                }
            }
            sub_23243();
            if (NOT l_U359)
            {
                if (TIMERA() > 12000)
                {
                    if (g_U43685 == 0)
                    {
                        sub_23551( 29, "E2T2_KM1V1", "E2Tm2AU", 2000, 1 );
                    }
                    else if (g_U43685 == 1)
                    {
                        sub_23551( 29, "E2T2_KM1V2", "E2Tm2AU", 2000, 1 );
                    }
                    else if (g_U43685 > 1)
                    {
                        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar7 );
                        if (iVar7 == 0)
                        {
                            sub_23551( 29, "E2T2_KM1V1", "E2Tm2AU", 2000, 1 );
                        }
                        else if (iVar7 == 1)
                        {
                            sub_23551( 29, "E2T2_KM1V2", "E2Tm2AU", 2000, 1 );
                        }
                    };;;
                    l_U359 = 1;
                }
            }
            if (l_U359)
            {
                if (NOT l_U360)
                {
                    if (TIMERA() > 50000)
                    {
                        if (g_U43685 == 0)
                        {
                            sub_23551( 29, "E2T2_KM1V3", "E2Tm2AU", 2000, 1 );
                        }
                        else if (g_U43685 == 1)
                        {
                            sub_23551( 29, "E2T2_KM1V4", "E2Tm2AU", 2000, 1 );
                        }
                        else if (g_U43685 > 1)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar8 );
                            if (iVar8 == 0)
                            {
                                sub_23551( 29, "E2T2_KM1V3", "E2Tm2AU", 2000, 1 );
                            }
                            else if (iVar8 == 1)
                            {
                                sub_23551( 29, "E2T2_KM1V4", "E2Tm2AU", 2000, 1 );
                            }
                        };;;
                        l_U360 = 1;
                    }
                }
            }
            if (l_U360)
            {
                if (NOT l_U361)
                {
                    if (TIMERA() > 90000)
                    {
                        if (g_U43685 == 0)
                        {
                            sub_23551( 29, "E2T2_KM1V5", "E2Tm2AU", 2000, 1 );
                        }
                        else if (g_U43685 == 1)
                        {
                            sub_23551( 29, "E2T2_KM1V6", "E2Tm2AU", 2000, 1 );
                        }
                        else if (g_U43685 > 1)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar9 );
                            if (iVar9 == 0)
                            {
                                sub_23551( 29, "E2T2_KM1V5", "E2Tm2AU", 2000, 1 );
                            }
                            else if (iVar9 == 1)
                            {
                                sub_23551( 29, "E2T2_KM1V6", "E2Tm2AU", 2000, 1 );
                            }
                        };;;
                        l_U361 = 1;
                    }
                }
            }
            if (TIMERA() < 150000)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_800(), 0 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_3827() ))
                    {
                        if (NOT l_U362)
                        {
                            if ((sub_27514()) AND (LOCATE_CHAR_IN_CAR_3D( sub_3827(), l_U271._fU0, l_U271._fU4, l_U271._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1 )))
                            {
                                if (DOES_BLIP_EXIST( l_U274 ))
                                {
                                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
                                }
                                SET_PLAYER_CONTROL( sub_800(), 0 );
                                l_U269 = 5;
                            }
                        }
                    }
                }
            }
            else if (NOT l_U362)
            {
                if (g_U43685 == 0)
                {
                    sub_23551( 29, "E2T2_KM1V7", "E2Tm2AU", 2000, 1 );
                }
                else if (g_U43685 == 1)
                {
                    sub_23551( 29, "E2T2_KM1V8", "E2Tm2AU", 2000, 1 );
                }
                else if (g_U43685 > 1)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar10 );
                    if (iVar10 == 0)
                    {
                        sub_23551( 29, "E2T2_KM1V7", "E2Tm2AU", 2000, 1 );
                    }
                    else if (iVar10 == 1)
                    {
                        sub_23551( 29, "E2T2_KM1V8", "E2Tm2AU", 2000, 1 );
                    }
                };;;
                if (DOES_BLIP_EXIST( l_U274 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
                }
                l_U362 = 1;
            }
            if (IS_PAY_N_SPRAY_ACTIVE())
            {
                PRINT( "CP2_04", 7500, 0 );
                sub_10203();
            }
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3827() )))
            {
                if (DOES_BLIP_EXIST( l_U274 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
                }
                if (LOCATE_CHAR_ON_FOOT_3D( sub_3827(), l_U271._fU0, l_U271._fU4, l_U271._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 0 ))
                {
                    if (NOT l_U309)
                    {
                        PRINT_NOW( "CP2_05", 7500, 0 );
                        l_U309 = 1;
                    }
                }
            }
            else if (NOT l_U311)
            {
                PRINT( "CP2_02", 7500, 0 );
                l_U311 = 1;
            }
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_800(), 0 )))
            {
                if ((NOT l_U362) AND (NOT (DOES_BLIP_EXIST( l_U274 ))))
                {
                    ADD_BLIP_FOR_COORD( l_U271._fU0, l_U271._fU4, l_U271._fU8, ref l_U274 );
                    SET_ROUTE( l_U274, 1 );
                }
            }
            if (l_U362)
            {
                if (sub_28270( 0 ))
                {
                    if (NOT (sub_11363( 0 )))
                    {
                        if (NOT l_U316)
                        {
                            PRINT( "CP2_04", 7500, 0 );
                            l_U316 = 1;
                        }
                        else if (NOT (sub_11363( 0 )))
                        {
                            sub_18922();
                            sub_19129( 28, l_U295, "E2Tm2AU", 1 );
                            sub_10203();
                        }
                    }
                }
            }
            break;
            case 5:
            sub_28639();
            sub_19129( 28, "E2TM2_SORTD", "E2Tm2AU", 1 );
            sub_32079();
            break;
        }
    }
    return;
}

void sub_656()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_677();
        sub_2597();
    }
    return;
}

void sub_677()
{
    int iVar2;

    iVar2 = 0;
    sub_691( iVar2 );
    sub_1635();
    return;
}

void sub_691(unknown uParam0)
{
    if (g_U819)
    {
        sub_710();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_800(), 150 );
    switch (uParam0)
    {
        case 0:
        case 1:
        sub_873( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1405( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1540();
    return;
}

void sub_710()
{
    sub_719();
    return;
}

void sub_719()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_800()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_873(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_884( uParam1 );
    sub_1079( uParam0, 0, uParam2 );
    sub_1079( uParam0, 1, uParam3 );
    sub_1079( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_1272();
    return;
}

void sub_884(unknown uParam0)
{
    ADD_SCORE( sub_800(), uParam0 );
    sub_909( uParam0 );
    return;
}

void sub_909(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1020( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_1020(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1079(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_1272()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U196[I] = 4;
    }
    return;
}

void sub_1405(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1540()
{
    sub_1549();
    return;
}

void sub_1549()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_1635()
{
    int iVar2;

    iVar2 = 0;
    sub_1647();
    return;
}

void sub_1647()
{
    int iVar2;

    iVar2 = 0;
    g_U12379 = 0;
    g_U30153 = 0;
    sub_1671();
    sub_2295();
    sub_2331( iVar2, 0 );
    sub_2414();
    sub_2453();
    g_U30097[1] = 0;
    return;
}

void sub_1671()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((g_U575[I]._fU20) AND ((sub_1709( 5, g_U575[I] )) == 1))
        {
            if ((sub_1709( 1, g_U575[I] )) != 0)
            {
                sub_1995( I );
            }
        }
    }
    if (NOT sub_2161())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    if (g_U95._fU0 == 1016)
    {
        g_U95._fU92 = 1;
    }
    return;
}

int sub_1709(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1995(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2080( g_U575 - 1 );
    return;
}

void sub_2080(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2161()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_1709( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2295()
{
    unknown uVar2;

    uVar2 = g_U10965;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_2331(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 37))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U22883[iParam0] = iVar4;
    if (bParam1)
    {
        g_U22883[iParam0] += 30000;
    }
    return;
}

void sub_2414()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_2453()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_2475();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_2475()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_2597()
{
    g_U30180 = 0;
    sub_2612();
    g_U8781 = 1;
    if (DOES_BLIP_EXIST( l_U274 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
    }
    if (DOES_BLIP_EXIST( l_U278 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U278 );
    }
    if (DOES_OBJECT_EXIST( l_U315 ))
    {
        DELETE_OBJECT( ref l_U315 );
    }
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 728, 1543, -10, 733, 1559, 50 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 65088, 343, -10, 65094, 368, 50 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 65074, 335, -10, 65091, 374, 50 );
    g_U43685++;
    g_U43673++;
    if (g_U43673 > 7)
    {
        g_U43673 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2612()
{
    if (DOES_VEHICLE_EXIST( l_U297 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U297 );
    }
    return;
}

void sub_3095(int iParam0, unknown uParam1)
{
    if (NOT (iParam0 == -1))
    {
        g_U30132[iParam0] = uParam1;
    }
    else
    {
        SCRIPT_ASSERT( "SET_GLOBAL_CLUBPED_SLOT_AS_SCRIPT_CONTROLLED - invalid slot number (-1)" );
    }
    return;
}

void sub_3238(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3274())
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

int sub_3274()
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

void sub_3413()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;

    sub_3423( 1 );
    if (DOES_CAM_EXIST( l_U379 ))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref iVar5, ref iVar6 );
        if (NOT IS_USING_CONTROLLER())
        {
            GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
        }
        if (NOT IS_LOOK_INVERTED())
        {
            iVar6 *= -1;
        }
        if ((iVar6 < 65508) || (iVar6 > 28))
        {
            fVar2 = TO_FLOAT( iVar6 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U387;
            if (iVar6 < 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U389 += fVar2;
            if (l_U389 < l_U390)
            {
                l_U389 = l_U390;
            }
            if (l_U389 > l_U391)
            {
                l_U389 = l_U391;
            }
        }
        if ((iVar5 < 65508) || (iVar5 > 28))
        {
            fVar2 = TO_FLOAT( iVar5 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U387;
            if (iVar5 > 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U388 += fVar2;
            if (l_U388 < l_U392)
            {
                l_U388 = l_U392;
            }
            if (l_U388 > l_U393)
            {
                l_U388 = l_U393;
            }
        }
        sub_3887( sub_3827(), ref l_U379, l_U389, 0.00000000, l_U388 );
        SET_CAM_FOV( l_U379, l_U395 );
        SET_CAM_ATTACH_OFFSET( l_U379, l_U396._fU0, l_U396._fU4, l_U396._fU8 );
    }
    else if (DOES_CAM_EXIST( l_U404 ))
    {
        sub_4080();
    }
    BEGIN_CAM_COMMANDS( ref l_U405 );
    if (DOES_CAM_EXIST( l_U379 ))
    {
        DESTROY_CAM( l_U379 );
    }
    CREATE_CAM( 14, ref l_U379 );
    ATTACH_CAM_TO_PED( l_U379, sub_3827() );
    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U379, 1 );
    SET_CAM_NEAR_CLIP( l_U379, 0.01000000 );
    l_U388 = 0.00000000;
    l_U389 = -9.00000000;
    sub_3887( sub_3827(), ref l_U379, l_U389, 0.00000000, l_U388 );
    SET_CAM_FOV( l_U379, l_U395 );
    SET_CAM_ATTACH_OFFSET( l_U379, l_U396._fU0, l_U396._fU4, l_U396._fU8 );
    SET_CAM_ACTIVE( l_U379, 1 );
    SET_CAM_PROPAGATE( l_U379, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (IS_PLAYER_PLAYING( sub_800() ))
    {
        FREEZE_CHAR_POSITION( sub_3827(), 1 );
        SET_CHAR_VISIBLE( sub_3827(), 0 );
    }
    return;
}

void sub_3423(unknown uParam0)
{
    g_U10597 = uParam0;
    return;
}

void sub_3827()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3887(unknown uParam0, unknown uParam1, vector vParam2)
{
    unknown uVar7;
    vector vVar8;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_CAM_EXIST( (uParam1^) ))
        {
            GET_CHAR_HEADING( uParam0, ref uVar7 );
            vVar8.x = 0.00000000;
            vVar8.y = 0.00000000;
            vVar8.z = uVar7;
            vVar8 = {vVar8 + vParam2};
            SET_CAM_ROT( (uParam1^), vVar8.x, vVar8.y, vVar8.z );
        }
    }
    return;
}

void sub_4080()
{
    for ( l_U312 = 0; l_U312 < l_U399; l_U312++ )
    {
        if (DOES_CAM_EXIST( l_U399[l_U312] ))
        {
            DESTROY_CAM( l_U399[l_U312] );
        }
    }
    if (DOES_CAM_EXIST( l_U404 ))
    {
        DESTROY_CAM( l_U404 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U405 );
    }
    return;
}

int sub_4568(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -1255452397;
        case 3: return -789894171;
        case 2: return 1638119866;
        case 1: return -304802106;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -1660661558;
}

void sub_4775(unknown uParam0)
{
    StrCopy( ref l_U19._fU0, uParam0, 16 );
    sub_4792();
    return;
}

void sub_4792()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U19._fU16[I]._fU0 = nil;
        StrCopy( ref l_U19._fU16[I]._fU4, "", 32 );
        l_U19._fU344[I] = 0;
    }
    return;
}

void sub_4894(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U19._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U19._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4974( "\n PED NUMBER ", uParam0 );
    sub_5014( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4974(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5014(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5041(unknown uParam0, boolean bParam1)
{
    char[16] cVar4;

    if (NOT g_U16014[uParam0]._fU212._fU0)
    {
        if (g_U95._fU0 == 1012)
        {
            g_U95._fU92 = 1;
        }
        g_U16014[uParam0]._fU212._fU0 = 1;
        if (bParam1)
        {
            StrCopy( ref cVar4, "CONT_", 16 );
            ConcatString(ref cVar4, ref g_U16014[uParam0]._fU212._fU8, 16);
            SET_PHONE_HUD_ITEM( 2, ref cVar4, -1 );
        }
        g_U95._fU520 = 0;
    }
    return;
}

void sub_5313()
{
    sub_3423( 0 );
    sub_4080();
    if (DOES_CAM_EXIST( l_U380 ))
    {
        DESTROY_CAM( l_U380 );
    }
    if (DOES_CAM_EXIST( l_U381 ))
    {
        DESTROY_CAM( l_U381 );
    }
    if (DOES_CAM_EXIST( l_U379 ))
    {
        DESTROY_CAM( l_U379 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (IS_PLAYER_PLAYING( sub_800() ))
        {
            FREEZE_CHAR_POSITION( sub_3827(), 0 );
            SET_CHAR_VISIBLE( sub_3827(), 1 );
            SET_CAM_BEHIND_PED( sub_3827() );
        }
        END_CAM_COMMANDS( ref l_U405 );
    }
    return;
}

void sub_5540(unknown uParam0)
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U399[0] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U399[0], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U399[0], 1.61040000, 0.91440000, 0.59110000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U399[0], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U399[0], uParam0 );
        POINT_CAM_AT_PED( l_U399[0], uParam0 );
        SET_CAM_POINT_OFFSET( l_U399[0], 0.73220000, 0.43610000, 0.58830000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U399[0], 1 );
    }
    SET_CAM_FOV( l_U399[0], 13.20010000 );
    SET_CAM_ACTIVE( l_U399[0], 1 );
    CREATE_CAM( 14, ref l_U399[1] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U399[1], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U399[1], 1.18410000, 1.13140000, 0.62390000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U399[1], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U399[1], uParam0 );
        POINT_CAM_AT_PED( l_U399[1], uParam0 );
        SET_CAM_POINT_OFFSET( l_U399[1], 0.52730000, 0.48740000, 0.60610000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U399[1], 1 );
    }
    SET_CAM_FOV( l_U399[1], 13.20010000 );
    SET_CAM_ACTIVE( l_U399[1], 1 );
    CREATE_CAM( 14, ref l_U399[2] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U399[2], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U399[2], 0.75790000, 1.34850000, 0.65670000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U399[2], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U399[2], uParam0 );
        POINT_CAM_AT_PED( l_U399[2], uParam0 );
        SET_CAM_POINT_OFFSET( l_U399[2], 0.32250000, 0.53870000, 0.62380000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U399[2], 1 );
    }
    SET_CAM_FOV( l_U399[2], 13.20010000 );
    SET_CAM_ACTIVE( l_U399[2], 1 );
    CREATE_CAM( 14, ref l_U399[3] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U399[3], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U399[3], 0.33170000, 1.56560000, 0.68950000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U399[3], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U399[3], uParam0 );
        POINT_CAM_AT_PED( l_U399[3], uParam0 );
        SET_CAM_POINT_OFFSET( l_U399[3], 0.11770000, 0.58990000, 0.64160000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U399[3], 1 );
    }
    SET_CAM_FOV( l_U399[3], 13.20010000 );
    SET_CAM_ACTIVE( l_U399[3], 1 );
    CREATE_CAM( 25, ref l_U404 );
    SET_CAM_SPLINE_DURATION( l_U404, 20000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U404, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U404, 0 );
    ADD_CAM_SPLINE_NODE( l_U404, l_U399[0] );
    ADD_CAM_SPLINE_NODE( l_U404, l_U399[1] );
    ADD_CAM_SPLINE_NODE( l_U404, l_U399[2] );
    ADD_CAM_SPLINE_NODE( l_U404, l_U399[3] );
    SET_CAM_ACTIVE( l_U404, 1 );
    SET_CAM_PROPAGATE( l_U404, 1 );
    return;
}

void sub_6622(boolean bParam0)
{
    if (bParam0)
    {
        g_U30166 = 1;
        g_U30234 = GET_ID_OF_THIS_THREAD();
    }
    else
    {
        g_U30166 = 0;
        g_U30234 = nil;
    }
    return;
}

void sub_6938(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_6959( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_6959(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7013( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7013(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7035( iParam1 )))
    {
        return 0;
    }
    l_U19._fU384 = 0;
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_7723( ref g_U8868, ref l_U19 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_7035(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_7112( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_7112( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_7112( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_7112(unknown uParam0)
{
    return;
}

void sub_7723(int iParam0, int iParam1)
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

int sub_7922(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_7112( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_7112( "\n speech is not playing" );
    }
    return 0;
}

int sub_8085()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_8270(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_8402()
{
    for ( l_U312 = 0; l_U312 < l_U399; l_U312++ )
    {
        if (DOES_CAM_EXIST( l_U399[l_U312] ))
        {
            DESTROY_CAM( l_U399[l_U312] );
        }
    }
    if (DOES_CAM_EXIST( l_U404 ))
    {
        DESTROY_CAM( l_U404 );
    }
    SET_CAM_BEHIND_PED( sub_3827() );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    return;
}

void sub_8570()
{
    sub_8595( 0, l_U298, l_U301, ref l_U297 );
    SET_CAR_AS_MISSION_CAR( l_U297 );
    return;
}

void sub_8595(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_4568( uParam0 );
    return sub_8626( uParam5, uVar8, uParam1, uParam4, uParam0 );
}

int sub_8626(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    SUPPRESS_CAR_MODEL( uParam1 );
    REQUEST_MODEL( uParam1 );
    if (NOT (HAS_MODEL_LOADED( uParam1 )))
    {
        REQUEST_MODEL( uParam1 );
        return 0;
    }
    CLEAR_AREA( uParam2._fU0, uParam2._fU4, uParam2._fU8, 5.00000000, 0 );
    CREATE_CAR( uParam1, uParam2._fU0, uParam2._fU4, uParam2._fU8, uParam0, 1 );
    SET_CAR_HEADING( (uParam0^), uParam5 );
    SET_CAR_ON_GROUND_PROPERLY( (uParam0^) );
    sub_8758( (uParam0^), uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_8758(unknown uParam0, int iParam1)
{
    if (iParam1 == 8)
    {
        return;
    }
    switch (iParam1)
    {
        case 0:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 1, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_3827() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3827() )))
            {
                PRINTSTRING( "KGM.............Retune TONY car to K109_THE_STUDIO\n" );
                RETUNE_RADIO_TO_STATION_NAME( "K109_THE_STUDIO" );
            }
        }
        break;
        case 3:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 0 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 0, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 0, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 3.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_3827() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3827() )))
            {
                PRINTSTRING( "KGM.............Retune DOMINICANS car to SAN_JUAN_SOUNDS\n" );
                RETUNE_RADIO_TO_STATION_NAME( "SAN_JUAN_SOUNDS" );
            }
        }
        break;
        case 2:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 134, 136 );
        SET_EXTRA_CAR_COLOURS( uParam0, 134, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_3827() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3827() )))
            {
                PRINTSTRING( "KGM.............Retune YUSUF car to BEAT\n" );
                RETUNE_RADIO_TO_STATION_NAME( "BEAT_95" );
            }
        }
        break;
        case 1:
        TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
        TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
        CHANGE_CAR_COLOUR( uParam0, 45, 45 );
        SET_EXTRA_CAR_COLOURS( uParam0, 35, 0 );
        SET_VEHICLE_DIRT_LEVEL( uParam0, 0.00000000 );
        if (NOT (IS_CHAR_DEAD( sub_3827() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3827() )))
            {
                PRINTSTRING( "KGM.............Retune MORI car to DANCE_ROCK\n" );
                RETUNE_RADIO_TO_STATION_NAME( "DANCE_ROCK" );
            }
        }
        break;
    }
    return;
}

void sub_9920()
{
    if (g_U30199 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30199]._fU12, sub_3827(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 ))
                {
                    sub_10026( 0 );
                    sub_8270( ref l_U365, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP2_08", 7000, 0 );
                    sub_10203();
                }
            }
        }
    }
    if (g_U30200 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30200]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30200]._fU12, sub_3827(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 ))
                {
                    sub_10026( 0 );
                    sub_8270( ref l_U365, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP2_08", 7000, 0 );
                    sub_10203();
                }
            }
        }
    }
    if ((sub_10381( sub_3827(), 2, 1 )) || (sub_10381( sub_3827(), 1, 1 )))
    {
        if (IS_CHAR_SHOOTING( sub_3827() ))
        {
            sub_10026( 0 );
            sub_8270( ref l_U365, 0 );
            CLEAR_PRINTS();
            PRINT( "CP2_08", 7000, 0 );
            sub_10203();
        }
    }
    if (g_U30198 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30198]._fU12, sub_3827(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 ))
                {
                    sub_10026( 0 );
                    sub_8270( ref l_U365, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP2_08", 7000, 0 );
                    sub_10203();
                }
            }
        }
    }
    return;
}

void sub_10026(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 <= 3) AND (g_U8865 >= 1))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_10203()
{
    sub_677();
    sub_2597();
    return;
}

int sub_10381(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_10409( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if (((LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) AND (IS_CHAR_ON_ANY_BIKE( uParam0 ))) || (LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_10409(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_3827(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_11363(boolean bParam0)
{
    if ((sub_11521()) || ((IS_SCRIPTED_CONVERSATION_ONGOING()) || ((sub_11462()) || ((((bParam0) AND (sub_11433())) || ((NOT bParam0) AND (sub_11379()))) || (IS_MESSAGE_BEING_DISPLAYED())))))
    {
        return 1;
    }
    return 0;
}

int sub_11379()
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        return 1;
    }
    return 0;
}

void sub_11433()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_11462()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_11521()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U239;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

void sub_11732(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_11783( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_11783(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_12079(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_12100( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_12100(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_7013( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_12436(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown uVar13;

    sub_12445();
    sub_13325();
    if (IS_SCREEN_FADED_IN())
    {
        if ((IS_WANTED_LEVEL_GREATER( sub_800(), 0 )) AND (uParam9))
        {
            if (DOES_BLIP_EXIST( l_U234 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                sub_13523( uParam7 );
            }
            if ((NOT l_U203) AND (NOT (sub_11363( 0 ))))
            {
                sub_13587( uParam10, 0 );
                l_U247 = uParam10;
                l_U203 = 1;
            }
        }
        else if (l_U203)
        {
            sub_13523( uParam10 );
            l_U203 = 0;
        }
        if (NOT (DOES_BLIP_EXIST( l_U234 )))
        {
            ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U234 );
            sub_13758( l_U234 );
            if (l_U222)
            {
                SHOW_BLIP_ON_ALTIMETER( l_U234, 1 );
            }
        }
        if (NOT (sub_11363( 0 )))
        {
            if (NOT l_U205)
            {
                sub_13587( uParam7, 0 );
                l_U205 = 1;
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_3827(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_3827() ))
            {
                if (sub_13944())
                {
                    sub_13523( uParam7 );
                    sub_13523( uParam8 );
                    sub_13523( uParam10 );
                    sub_14464();
                    return 1;
                }
            }
            else if (NOT (sub_11363( 0 )))
            {
                sub_13587( uParam8, 0 );
            }
        }
        sub_14944( uParam0, uParam1, uParam2, 0, 0 );
    }
    sub_18404( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_12445()
{
    if (NOT l_U216)
    {
        l_U251 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U203 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U204 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U205 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U206 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U208 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U207 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U209 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U210[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U210[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U210[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U214 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U215 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U236, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U237, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U238, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U248._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U248._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U248._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U217 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U218 );
        END_WIDGET_GROUP();
        l_U216 = 1;
    }
    return;
}

void sub_13325()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_800() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3827(), 0 );
    }
    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U243[I], 0 );
            }
        }
    }
    return;
}

void sub_13523(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

void sub_13587(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (IS_STRING_NULL( uParam0 )))
        {
            if (NOT (COMPARE_STRING( uParam0, "" )))
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U239 );
    return;
}

void sub_13758(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U235 ))
        {
            SET_ROUTE( l_U235, 0 );
        }
        l_U235 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_13944()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3827() ))
    {
        if ((IS_CHAR_IN_ANY_HELI( sub_3827() )) || (IS_CHAR_ON_ANY_BIKE( sub_3827() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U221)
    {
        if (sub_14021( sub_3827() ))
        {
            if ((l_U215) || (sub_14099( 1, iVar2 )))
            {
                return 1;
            }
        }
    }
    else if ((l_U215) || (sub_14099( 1, iVar2 )))
    {
        return 1;
    }
    return 0;
}

int sub_14021(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 < 0.50000000) AND (fVar3 > -0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_14099(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3827() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3827(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3827() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3827(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3827()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3827() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3827() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_800() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_800() )))
    {
        return 0;
    }
    return 1;
}

void sub_14464()
{
    int I;

    sub_14473();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U230[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U229 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U229 );
    }
    l_U235 = nil;
    l_U209 = 0;
    for ( I = 0; I < l_U210; I++ )
    {
        l_U210[I] = 0;
        l_U225[I] = 0;
    }
    l_U205 = 0;
    l_U203 = 0;
    l_U204 = 0;
    l_U206 = 0;
    l_U208 = 0;
    l_U207 = 0;
    l_U214 = 0;
    l_U215 = 0;
    l_U217 = 0;
    l_U218 = 0;
    l_U241 = 0;
    for ( I = 0; I < l_U243; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U243[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U243[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_800() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_3827(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_800() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3827(), 1 );
    }
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    return;
}

void sub_14473()
{
    if (DOES_BLIP_EXIST( l_U234 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
    }
    return;
}

void sub_14944(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown[1] uVar7;

    array(ref uVar7, 1);
    sub_14967( uParam0, uParam1, uParam2, uParam3, uParam4 );
    return;
}

void sub_14967(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_12445();
    if (l_U214)
    {
        uParam0 = l_U248._fU0;
        uParam1 = l_U248._fU4;
        uParam2 = l_U248._fU8;
        uVar12 = l_U238;
        l_U214 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_3827() )))
    {
        GET_CHAR_HEADING( sub_3827(), ref uVar12 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            PRINTSTRING( "J_SKIP - called" );
            PRINTNL();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_800() );
            sub_15178( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_15599( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U243; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                        if (NOT (IS_CHAR_INJURED( sub_3827() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3827(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U243[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U243[I], uVar12 );
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( uParam4 ))
            {
                PRINTSTRING( "J_SKIP - SpecificCarID exists" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3827() );
                    WARP_CHAR_INTO_CAR( sub_3827(), uParam4 );
                    for ( I = 0; I < l_U243; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U243[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U243[I], 0 );
                            }
                        }
                    }
                }
                sub_15599( uParam0, uParam1, uParam2, uVar12 );
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    SET_CAR_COORDINATES( uParam4, uParam0, uParam1, uParam2 );
                }
            }
            else
            {
                PRINTSTRING( "J_SKIP - searching for temp_car" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( uVar8 )))
                    {
                        PRINTSTRING( "J_SKIP - temp_car existed but not driveable" );
                        PRINTNL();
                        uVar8 = nil;
                    }
                }
                if (NOT (DOES_VEHICLE_EXIST( uVar8 )))
                {
                    PRINTSTRING( "J_SKIP - creating new temp_car" );
                    PRINTNL();
                    REQUEST_MODEL( 1264341792 );
                    while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar8, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3827() );
                    WARP_CHAR_INTO_CAR( sub_3827(), uVar8 );
                    sub_16506( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3827() );
                        WARP_CHAR_INTO_CAR( sub_3827(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U243; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U243[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U243; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U243[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U243[I], uVar8, I );
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( uVar8 ))
                {
                    SET_CAR_COORDINATES( uVar8, uParam0, uParam1, uParam2 );
                    SET_CAR_HEADING( uVar8, uVar12 );
                }
            }
            LOAD_SCENE( uParam0, uParam1, uParam2 );
            WAIT( 500 );
            sub_17126( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_15178(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_800() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3827() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3827(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_3827(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_15298( (uParam0^) );
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    else
    {
        (uParam0^) = nil;
    }
    return;
}

void sub_15298(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
                else
                {
                    DELETE_CHAR( ref uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                        else
                        {
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_15599(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_3827(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_3827(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_3827(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_3827(), uParam3 );
    return;
}

void sub_16506(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_17126(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if (((bParam0) || (IS_SCREEN_FADED_OUT())) AND (NOT (IS_CHAR_INJURED( sub_3827() ))))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_17506( sub_3827(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_17506( sub_3827(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_17506( sub_3827(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_18055( 0 );
        sub_18055( 1 );
        sub_18055( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U202 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U202;
            if (((g_U30110[2] == 0) AND ((g_U30110[1] == 0) AND (g_U30110[0] == 0))) || (iVar6 > 15000))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_17506(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_17517( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_10381( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_17517(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( -399.10690000, 397.67000000, 14.17720000);
        break;
        case 1:
        return vector( -468.03000000, 153.41000000, 9.80000000);
        break;
        case 2:
        return vector( -440.28000000, 356.98000000, 11.54000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

void sub_18055(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_18404(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_18429( uParam0, uParam1, uParam2, l_U236, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3827(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U236, l_U236, l_U236, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U236 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U236 );
            }
        }
    }
    return;
}

int sub_18429(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_18446( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_3827(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_18446(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_18922()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U294 );
    if (l_U294 == 0)
    {
        l_U295 = "E2Tm2_CMGEN6";
    }
    if (l_U294 == 1)
    {
        l_U295 = "E2Tm2_CMGEN7";
    }
    if (l_U294 == 2)
    {
        l_U295 = "E2Tm2_CMGEN8";
    }
    if (l_U294 == 3)
    {
        l_U295 = "E2Tm2_CMGEN9";
    }
    if (l_U294 == 4)
    {
        l_U295 = "E2Tm2_CMGEN0";
    }
    return;
}

void sub_19129(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_19173( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_19173(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

    if (g_U43133)
    {
        PRINTSTRING( "KGM........End of mission call blocked because the mission is being repeated\n" );
        return;
    }
    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U818 )))
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
        g_U817 = 1;
        g_U818 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_19855()
{
    CREATE_CHAR( 26, 1878085135, 729.50150000, 1554.45300000, 21.25800000, ref l_U292, 1 );
    SET_CHAR_HEADING( l_U292, 287.22160000 );
    SET_CHAR_COMPONENT_VARIATION( l_U292, 2, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U292, 1, 0, 1 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U292, 1 );
    sub_4894( 2, l_U292, "TAKE_OUT", 0 );
    return;
}

void sub_20274()
{
    if (NOT (DOES_CAM_EXIST( l_U340 )))
    {
        CREATE_CAM( 14, ref l_U340 );
    }
    if (NOT (DOES_CAM_EXIST( l_U342 )))
    {
        CREATE_CAM( 14, ref l_U342 );
    }
    if (NOT (DOES_CAM_EXIST( l_U341 )))
    {
        CREATE_CAM( 14, ref l_U341 );
    }
    if (NOT (DOES_CAM_EXIST( l_U343 )))
    {
        CREATE_CAM( 3, ref l_U343 );
    }
    l_U339 = 1;
    return;
}

void sub_20952(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    GET_HEADING_FROM_VECTOR_2D( uVar10._fU0, uVar10._fU4, ref l_U394 );
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_PED_RAGDOLL( uParam0 )))
        {
            SET_CHAR_HEADING( uParam0, l_U394 );
        }
    }
    return;
}

int sub_22600()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_23243()
{
    if (IS_WANTED_LEVEL_GREATER( sub_800(), 0 ))
    {
        if (DOES_BLIP_EXIST( l_U274 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
        }
        if (NOT l_U371)
        {
            PRINT_NOW( "CP2_03", 7500, 0 );
            l_U371 = 1;
        }
    }
    else if (IS_THIS_PRINT_BEING_DISPLAYED( "CP2_03", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
    {
        CLEAR_THIS_PRINT( "CP2_03" );
    }
    l_U371 = 0;
    if (NOT l_U362)
    {
        if ((NOT l_U362) AND (NOT (DOES_BLIP_EXIST( l_U274 ))))
        {
            ADD_BLIP_FOR_COORD( l_U271._fU0, l_U271._fU4, l_U271._fU8, ref l_U274 );
            SET_ROUTE( l_U274, 1 );
        }
    }
    return;
}

void sub_23551(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_23611( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_23611(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U95._fU540)
    {
        return 0;
    }
    sub_7112( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 >= 6)
        {
            sub_7112( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_800() )))
    {
        sub_7112( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3827() ))) AND (IS_CHAR_IN_ANY_CAR( sub_3827() )))
    {
        sub_7112( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        sub_7112( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_24126()))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU48 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
        case 1:
        if (g_U95._fU368)
        {
            if ((NOT bParam8) || (g_U95._fU372))
            {
                sub_7112( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U95._fU60 != -1)
        {
            if ((g_U16014[g_U95._fU60]._fU212._fU24 != 4) AND (g_U16014[g_U95._fU60]._fU212._fU24 != 5))
            {
                g_U16014[g_U95._fU60]._fU212._fU24 = 0;
            }
        }
        g_U95._fU368 = 1;
        g_U95._fU372 = bParam8;
        uParam0 = g_U95._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_24126()))
        {
            return 0;
        }
        g_U95._fU60 = uParam0;
        g_U95._fU52 = 1;
        g_U95._fU56 = 1;
        g_U95._fU372 = 1;
        g_U95._fU368 = 1;
        g_U16014[g_U95._fU60]._fU212._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_25498( uParam0, ref g_U95._fU176 );
    sub_26158( ref g_U95._fU160 );
    g_U95._fU380 = uParam10;
    g_U95._fU376 = bParam11;
    g_U95._fU420 = uParam12;
    g_U95._fU424 = -1;
    g_U95._fU364 = uParam3;
    StrCopy( ref g_U95._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8972[I] = {(uParam1^)[I]};
        sub_5014( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U95._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U95._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U95._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U95._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U95._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U95._fU208, uParam6, 16 );
    g_U95._fU80 = uParam7;
    g_U95._fU384 = 0;
    g_U95._fU532 = uParam13;
    g_U8867 = 4;
    return 1;
}

int sub_24126()
{
    if ((g_U95._fU52) || (g_U95._fU48))
    {
        return 0;
    }
    if (g_U95._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_24183())
    {
        return 0;
    }
    if (g_U560 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_24183()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_800() )))
    {
        sub_7112( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_7112( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U95._fU376)
    {
        sub_7112( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U95._fU104) || (g_U95._fU100))
    {
        sub_7112( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_800() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_3827() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_3827(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_7112( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_3827() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_7112( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_7112( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_800() )))
    {
        sub_7112( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_25498(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( (uParam1^), "TONY", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "MORI", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "YUSUF", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "ARMANDO", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "ADRIANA", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "BULGARIN", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ROCCO", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "HENRIQUE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "reserve1", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "ASSISTANT", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "DESSIE", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "JOJO", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "TAYLOR", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "VIKKY", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "ANA", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "DANA", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "CINDY", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "TANIA", 32 );
        break;
        case 23:
        StrCopy( (uParam1^), "LILY", 32 );
        break;
        case 24:
        StrCopy( (uParam1^), "TAMI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DOMINO", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "HEIDI", 32 );
        break;
        case 27:
        StrCopy( (uParam1^), "SIMONE", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        break;
    }
    return;
}

void sub_26158(unknown uParam0)
{
    StrCopy( (uParam0^), "LUIS", 16 );
    return;
}

int sub_27514()
{
    unknown uVar2;
    int iVar3;

    if (IS_CHAR_IN_TAXI( sub_3827() ))
    {
        GET_CAR_CHAR_IS_USING( sub_3827(), ref uVar2 );
        if (NOT (IS_CAR_DEAD( uVar2 )))
        {
            GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
        }
        if (iVar3 == sub_3827())
        {
            return 1;
        }
        if (iVar3 != sub_3827())
        {
            return 0;
        }
    }
    return 1;
}

int sub_28270(boolean bParam0)
{
    unknown uVar3;

    if (g_U95._fU60 != -1)
    {
        switch (g_U16014[g_U95._fU60]._fU212._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U95._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_3827(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_7112( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_28639()
{
    unknown uVar2;
    float fVar3;
    float fVar4;
    float fVar5;

    sub_10026( 0 );
    CLEAR_PRINTS();
    CLEAR_WANTED_LEVEL( sub_800() );
    if (g_U30200 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30200]._fU12 ))
        {
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 )))
            {
                sub_3095( g_U30200, 1 );
                sub_4894( 4, g_U29971[g_U30200]._fU12, "TROY", 0 );
            }
        }
    }
    else if (IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    sub_17126( 0, 0 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    if (g_U30200 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30200]._fU12 ))
        {
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 )))
            {
                sub_3095( g_U30200, 1 );
                sub_4894( 4, g_U29971[g_U30200]._fU12, "TROY", 0 );
            }
        }
    }
    CREATE_OBJECT( 1781540370, 733.71950000, 1554.14400000, 21.04320000, ref l_U315, 1 );
    ATTACH_OBJECT_TO_PED( l_U315, sub_3827(), 1219, 0.10000000, 0.06520000, 0, 9, 11, 0, 0 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3827(), 1 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (DOES_VEHICLE_EXIST( uVar2 ))
    {
        if (IS_VEH_DRIVEABLE( uVar2 ))
        {
            SET_CAR_COORDINATES( uVar2, -449.02070000, 356.67010000, 10.10970000 );
        }
    }
    if (NOT (IS_CAR_DEAD( uVar2 )))
    {
        GET_CAR_HEADING( uVar2, ref fVar3 );
        if ((fVar3 < 90) || (fVar3 > 270))
        {
            SET_CAR_HEADING( uVar2, 0 );
        }
        if (fVar3 > 90)
        {
            if (fVar3 < 270)
            {
                SET_CAR_HEADING( uVar2, 180 );
            }
        }
        SET_CAR_ON_GROUND_PROPERLY( uVar2 );
    }
    ENABLE_SCENE_STREAMING( 0 );
    BEGIN_CAM_COMMANDS( ref l_U338 );
    if (NOT l_U339)
    {
        sub_20274();
    }
    CLEAR_AREA( -438.36440000, 355.93410000, 10.71170000, 100, 1 );
    SWITCH_PED_PATHS_OFF( 65088, 343, -10, 65094, 368, 50 );
    SWITCH_ROADS_OFF( 65074, 335, -10, 65091, 374, 50 );
    SET_USE_HIGHDOF( 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_POS( l_U341, -462.31820000, 345.61410000, 19.18925000 );
    SET_CAM_ROT( l_U341, -20.08940000, 0.00000000, -56.25957000 );
    SET_CAM_FOV( l_U341, 38.70002000 );
    SET_CAM_POS( l_U342, -461.80260000, 345.95850000, 18.96255000 );
    SET_CAM_ROT( l_U342, -20.08940000, 0.00000000, -56.25957000 );
    SET_CAM_FOV( l_U342, 38.70002000 );
    SET_CAM_ACTIVE( l_U343, 1 );
    SET_CAM_PROPAGATE( l_U343, 1 );
    SET_CAM_FAR_DOF( l_U341, 26 );
    SET_CAM_FAR_DOF( l_U342, 26 );
    SET_CAM_INTERP_STYLE_CORE( l_U343, l_U341, l_U342, 8500, 0 );
    SETTIMERA( 0 );
    while (l_U346 == 1)
    {
        switch (l_U347)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U364 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -445.61350000, 356.36390000, 10.16310000, 2, 20000, 1 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, g_U29971[g_U30200]._fU12 );
                CLOSE_SEQUENCE_TASK( l_U364 );
                TASK_PERFORM_SEQUENCE( sub_3827(), l_U364 );
                CLEAR_SEQUENCE_TASK( l_U364 );
                OPEN_SEQUENCE_TASK( ref l_U364 );
                TASK_LOOK_AT_CHAR( 0, g_U29971[g_U30200]._fU12, -2, 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -444.98830000, 356.73320000, 10.11670000, 2, 20000, 1 );
                CLOSE_SEQUENCE_TASK( l_U364 );
                TASK_PERFORM_SEQUENCE( g_U29971[g_U30200]._fU12, l_U364 );
                CLEAR_SEQUENCE_TASK( l_U364 );
            }
            l_U347++;
            break;
            case 1:
            if (TIMERA() > 6500)
            {
                l_U347++;
            }
            break;
            case 2:
            if (g_U30200 != -1)
            {
                if (DOES_CHAR_EXIST( g_U29971[g_U30200]._fU12 ))
                {
                    if (NOT (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 )))
                    {
                        sub_4894( 4, g_U29971[g_U30200]._fU12, "TROY", 0 );
                        sub_6938( "E2TM2_ARRIV", ref l_U365, 7, 1 );
                    }
                }
            }
            SET_CHAR_COORDINATES( sub_3827(), -446.36950000, 357.12880000, 10.13460000 );
            SET_CHAR_HEADING( sub_3827(), 270.04990000 );
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 )))
            {
                SET_CHAR_COORDINATES( g_U29971[g_U30200]._fU12, -444.20070000, 357.55040000, 10.08060000 );
                sub_20952( g_U29971[g_U30200]._fU12, sub_3827() );
            }
            SET_CAM_POS( l_U341, -447.91970000, 357.46330000, 11.63857000 );
            SET_CAM_ROT( l_U341, -2.44465200, -0.00000000, -91.91781000 );
            SET_CAM_FOV( l_U341, 45.00000000 );
            SET_CAM_POS( l_U342, -447.76460000, 356.94570000, 11.57862000 );
            SET_CAM_ROT( l_U342, 3.35910200, -0.00000000, -84.09162000 );
            SET_CAM_FOV( l_U342, 45.00000000 );
            SET_CAM_ACTIVE( l_U343, 0 );
            SET_CAM_PROPAGATE( l_U343, 0 );
            SET_CAM_ACTIVE( l_U343, 1 );
            SET_CAM_PROPAGATE( l_U343, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U343, l_U341, l_U342, 8500, 0 );
            SET_CAM_FAR_DOF( l_U341, 4.50000000 );
            SET_CAM_FAR_DOF( l_U342, 4.50000000 );
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 )))
            {
                TASK_PLAY_ANIM( g_U29971[g_U30200]._fU12, "handover_ped_b", "misstonym2", 4.00000000, 0, 0, 0, 0, 0 );
            }
            TASK_PLAY_ANIM( sub_3827(), "handover_ped_a", "misstonym2", 4.00000000, 0, 0, 0, 0, 0 );
            l_U347++;
            break;
            case 3:
            if (IS_CHAR_PLAYING_ANIM( sub_3827(), "misstonym2", "handover_ped_a" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_3827(), "misstonym2", "handover_ped_a", ref fVar4 );
            }
            if (fVar4 >= 0.20000000)
            {
                DETACH_OBJECT( l_U315, 0 );
                if (NOT (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 )))
                {
                    ATTACH_OBJECT_TO_PED( l_U315, g_U29971[g_U30200]._fU12, 1219, 0.10000000, 0.06520000, 0, 9, 11, 0, 0 );
                    l_U347++;
                }
            }
            break;
            case 4:
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 )))
            {
                if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30200]._fU12, "misstonym2", "handover_ped_b" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30200]._fU12, "misstonym2", "handover_ped_b", ref fVar5 );
                }
            }
            if (fVar5 >= 0.70000000)
            {
                if (NOT (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 )))
                {
                    CLEAR_CHAR_TASKS( g_U29971[g_U30200]._fU12 );
                    SET_CHAR_HEADING( g_U29971[g_U30200]._fU12, 286.26730000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( g_U29971[g_U30200]._fU12, -438.56370000, 355.31560000, 10.71170000, 2, 120000, 1 );
                }
                if (NOT (IS_CHAR_INJURED( sub_3827() )))
                {
                    CLEAR_CHAR_TASKS( sub_3827() );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( sub_3827(), -445.43660000, 352.82100000, 10.66270000, 2, 120000, 1 );
                }
                SET_CAM_POS( l_U340, -448.25420000, 353.56540000, 16.69408000 );
                SET_CAM_ROT( l_U340, -42.26352000, -5.44790800, -38.57483000 );
                SET_CAM_FOV( l_U340, 42.60001000 );
                SET_CAM_FAR_DOF( l_U340, 10 );
                SET_CAM_ACTIVE( l_U343, 0 );
                SET_CAM_PROPAGATE( l_U343, 0 );
                SET_CAM_ACTIVE( l_U340, 1 );
                SET_CAM_PROPAGATE( l_U340, 1 );
                l_U347++;
            }
            break;
            case 5:
            if (TIMERA() > 15500)
            {
                l_U347++;
            }
            break;
            case 6:
            SET_CAM_ACTIVE( l_U343, 0 );
            SET_CAM_PROPAGATE( l_U343, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_3827() );
            if (DOES_VEHICLE_EXIST( uVar2 ))
            {
                DELETE_CAR( ref uVar2 );
            }
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3827(), 0 );
            SET_CHAR_COORDINATES( sub_3827(), -445.43660000, 352.82100000, 10.66270000 );
            SET_CHAR_HEADING( sub_3827(), 176.21760000 );
            l_U346 = 0;
            break;
        }
        if (sub_22600())
        {
            l_U346 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3827(), 0 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3827() );
            SET_CHAR_COORDINATES( sub_3827(), -445.43660000, 352.82100000, 10.66270000 );
            SET_CHAR_HEADING( sub_3827(), 176.21760000 );
            if (DOES_VEHICLE_EXIST( uVar2 ))
            {
                DELETE_CAR( ref uVar2 );
            }
            if (DOES_OBJECT_EXIST( l_U315 ))
            {
                DETACH_OBJECT( l_U315, 0 );
                DELETE_OBJECT( ref l_U315 );
            }
            INCREMENT_INT_STAT( 372, 1 );
            SET_CAM_ACTIVE( l_U343, 0 );
            SET_CAM_PROPAGATE( l_U343, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_3827() );
        }
        WAIT( 0 );
    }
    if (DOES_OBJECT_EXIST( l_U315 ))
    {
        DETACH_OBJECT( l_U315, 0 );
        DELETE_OBJECT( ref l_U315 );
    }
    if (g_U30200 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30200]._fU12 ))
        {
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 )))
            {
                sub_3095( g_U30200, 0 );
            }
        }
    }
    END_CAM_COMMANDS( ref l_U338 );
    ENABLE_SCENE_STREAMING( 1 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    SET_PLAYER_CONTROL( sub_800(), 1 );
    return;
}

void sub_32079()
{
    g_U25 = 82;
    INCREMENT_INT_STAT( 244, 1 );
    g_U43676 = 1;
    g_U43674++;
    if (g_U43674 > 7)
    {
        sub_32144( 0 );
        sub_32791();
        g_U43683 = 1;
    }
    sub_32952();
    sub_2597();
    return;
}

void sub_32144(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 1;
    switch (uParam0)
    {
        case 0:
        iVar3 = 0;
        break;
        default: return;
    }
    if (iVar3 == 1)
    {
        return;
    }
    iVar4 = 0;
    if (NOT g_U43026[iVar3]._fU0)
    {
        iVar4 = g_U43026[iVar3]._fU8;
        if (iVar4 > 0)
        {
            sub_32256( 1, iVar4 );
            g_U43026[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_32256(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_32426( 0 );
    return;
}

void sub_32426(boolean bParam0)
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
        sub_32671();
    }
    if ((NOT ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_32671()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_32791()
{
    g_U15811[38] = 1;
    sub_32820( 2, 10000, 60000 );
    return;
}

void sub_32820(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_32835( uParam0, uParam1, uParam2 );
    return;
}

void sub_32835(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15904[uParam0]._fU0 = 1;
    g_U15904[uParam0]._fU4 = iVar5 + iParam1;
    g_U15904[uParam0]._fU8 = uParam2;
    g_U15904[uParam0]._fU12 = 0;
    g_U15904[uParam0]._fU16 = 0;
    return;
}

void sub_32952()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_873( iVar2, 500, 3, 1, 0, 0 );
    SET_PLAYER_MOOD_NORMAL( sub_800() );
    sub_32999();
    sub_33083();
    sub_33171( 0 );
    sub_1635();
    return;
}

void sub_32999()
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

void sub_33083()
{
    sub_33092();
    return;
}

void sub_33092()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_33171(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_33222( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_33222(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

