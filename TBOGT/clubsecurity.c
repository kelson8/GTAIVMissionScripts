void main()
{
    float fVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    unknown uVar8;
    int iVar9;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U104 = 0;
    l_U105 = 1;
    l_U106 = 3;
    l_U108 = 0;
    l_U109 = -1;
    l_U110 = 0;
    l_U111 = 0;
    l_U116 = 1;
    l_U203 = 0;
    l_U204 = 0;
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U236 = 10.00000000;
    l_U237 = 15.00000000;
    l_U252 = 225;
    l_U253 = 350;
    l_U254 = 1.00000000;
    l_U255 = 20.00000000;
    l_U256 = 0.00000000;
    l_U257 = 0.50000000;
    l_U258 = 0;
    l_U263 = 1;
    l_U265 = 0.20000000;
    l_U273 = 0;
    l_U280 = 0;
    l_U281 = 0;
    l_U282 = 0;
    l_U284 = 0;
    l_U285 = 0;
    l_U290 = 1;
    l_U291 = 1;
    l_U319 = 1;
    l_U321 = 1;
    l_U323 = 1;
    l_U325 = 1;
    l_U327 = 1;
    l_U329 = 1;
    l_U331 = 1;
    l_U336 = 0;
    l_U337 = 0;
    l_U338 = 1;
    l_U339 = 0;
    l_U340 = 0;
    l_U394 = 0;
    l_U395 = 0;
    l_U396 = 0;
    l_U411 = 0;
    l_U419 = {-472.33910000, 149.08610000, 8.85890000};
    l_U437 = 2;
    l_U443 = 2000;
    l_U455 = 0;
    l_U482 = 50.00000000;
    l_U485 = 4.00000000;
    l_U486 = -45.00000000;
    l_U487 = 45.00000000;
    l_U488 = -89.00000000;
    l_U489 = 89.00000000;
    l_U490 = 40.00000000;
    l_U491 = 0;
    l_U492 = 0;
    l_U565 = {0.00000000, 0.00000000, 0.70000000};
    l_U568 = {0.00000000, 0.30000000, 0.00000000};
    l_U605 = 0;
    l_U606 = 1;
    l_U613 = 0;
    l_U614 = 0;
    l_U615 = 0;
    l_U616 = 0;
    l_U617 = 0;
    l_U618 = 0.00000000;
    l_U619 = 0;
    sub_577();
    while (true)
    {
        sub_6359();
        if (l_U599)
        {
            sub_6921( 4 );
            l_U599 = 0;
        }
        switch (l_U432)
        {
            case 0:
            switch (l_U433)
            {
                case 0:
                sub_7092( "CLUBSEC", 0 );
                sub_7092( "E2CLJA", 6 );
                sub_7259( "E2CLJA" );
                sub_7378( 0, sub_1955(), "LUIS", 0 );
                REQUEST_ANIMS( "MISSCLUB_MGMT" );
                while (NOT (HAVE_ANIMS_LOADED( "MISSCLUB_MGMT" )))
                {
                    WAIT( 0 );
                }
                if (((GET_CHAR_TEXTURE_VARIATION( sub_1955(), 3 )) == 0) AND (((GET_CHAR_DRAWABLE_VARIATION( sub_1955(), 3 )) == 1) AND (((GET_CHAR_TEXTURE_VARIATION( sub_1955(), 5 )) == 0) AND (((GET_CHAR_DRAWABLE_VARIATION( sub_1955(), 5 )) == 1) AND (((GET_CHAR_TEXTURE_VARIATION( sub_1955(), 2 )) == 0) AND (((GET_CHAR_DRAWABLE_VARIATION( sub_1955(), 2 )) == 1) AND (((GET_CHAR_TEXTURE_VARIATION( sub_1955(), 1 )) == 0) AND ((GET_CHAR_DRAWABLE_VARIATION( sub_1955(), 1 )) == 2))))))))
                {
                    l_U339 = 1;
                }
                if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                {
                    sub_2439( g_U30198, 1 );
                    sub_7378( 1, g_U29971[g_U30198]._fU12, "JONI", 0 );
                    SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, -473.10700000, 145.81830000, 8.90600000 );
                    SET_CHAR_HEADING( g_U29971[g_U30198]._fU12, 333.00000000 );
                    SET_CHAR_COLLISION( g_U29971[g_U30198]._fU12, 0 );
                    FREEZE_CHAR_POSITION( g_U29971[g_U30198]._fU12, 1 );
                    if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U680 );
                        TASK_LOOK_AT_CHAR( 0, sub_1955(), -2, 0 );
                        TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "joni_idle", "MISSCLUB_MGMT", 4.00000000, 1, 0, 0, 0, 0 );
                        CLOSE_SEQUENCE_TASK( l_U680 );
                        TASK_PERFORM_SEQUENCE( g_U29971[g_U30198]._fU12, l_U680 );
                        CLEAR_SEQUENCE_TASK( l_U680 );
                    }
                }
                REQUEST_MODEL( g_U30218 );
                while (NOT (HAS_MODEL_LOADED( g_U30218 )))
                {
                    WAIT( 0 );
                }
                REQUEST_MODEL( g_U30219 );
                while (NOT (HAS_MODEL_LOADED( g_U30219 )))
                {
                    WAIT( 0 );
                }
                REQUEST_MODEL( g_U30220 );
                while (NOT (HAS_MODEL_LOADED( g_U30220 )))
                {
                    WAIT( 0 );
                }
                REQUEST_MODEL( 1429724027 );
                while (NOT (HAS_MODEL_LOADED( 1429724027 )))
                {
                    WAIT( 0 );
                }
                REQUEST_MODEL( 159317168 );
                while (NOT (HAS_MODEL_LOADED( 159317168 )))
                {
                    WAIT( 0 );
                }
                REQUEST_MODEL( -71916080 );
                while (NOT (HAS_MODEL_LOADED( -71916080 )))
                {
                    WAIT( 0 );
                }
                while (NOT (REQUEST_MISSION_AUDIO_BANK( "EP2_SFX\BG2_DROPPING_IN" )))
                {
                    WAIT( 0 );
                }
                if (g_U43683)
                {
                    l_U438 = 999999;
                    l_U452 = 0;
                }
                else
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref l_U438 );
                    GENERATE_RANDOM_INT_IN_RANGE( 1, 3, ref l_U452 );
                }
                if (# -NULL-0xc27c84())
                {
                    l_U620 = LOAD_TXD( "e2:/xbox360/textures/securitycam" );
                }
                else
                {
                    l_U620 = LOAD_TXD( "e2:/pc/textures/securitycam" );
                }
                l_U621 = GET_TEXTURE( l_U620, "e2_securitycam_lines1" );
                l_U622 = GET_TEXTURE( l_U620, "e2_securitycam_lines_512x512_b" );
                SWITCH_GARBAGE_TRUCKS( 0 );
                g_U10935 = 1;
                g_U8781 = 0;
                g_U2792 = 1;
                if (IS_PLAYER_PLAYING( sub_903() ))
                {
                    if (IS_CHAR_DUCKING( sub_1955() ))
                    {
                        SET_CHAR_DUCKING( sub_1955(), 0 );
                    }
                    SET_CHAR_COORDINATES( sub_1955(), -472.81330000, 147.95070000, 8.85849900 );
                    SET_CHAR_HEADING( sub_1955(), 319.18460000 );
                    SET_CAM_BEHIND_PED( sub_1955() );
                    l_U444 = GET_CHAR_DRAWABLE_VARIATION( sub_1955(), 1 );
                    l_U445 = GET_CHAR_TEXTURE_VARIATION( sub_1955(), 1 );
                    l_U446 = GET_CHAR_DRAWABLE_VARIATION( sub_1955(), 2 );
                    l_U447 = GET_CHAR_TEXTURE_VARIATION( sub_1955(), 2 );
                    l_U448 = GET_CHAR_DRAWABLE_VARIATION( sub_1955(), 5 );
                    l_U449 = GET_CHAR_TEXTURE_VARIATION( sub_1955(), 5 );
                    l_U450 = GET_CHAR_DRAWABLE_VARIATION( sub_1955(), 3 );
                    l_U451 = GET_CHAR_TEXTURE_VARIATION( sub_1955(), 3 );
                    if (NOT l_U339)
                    {
                        SET_CHAR_COMPONENT_VARIATION( sub_1955(), 1, 2, 0 );
                        SET_CHAR_COMPONENT_VARIATION( sub_1955(), 2, 1, 0 );
                        SET_CHAR_COMPONENT_VARIATION( sub_1955(), 5, 1, 0 );
                        SET_CHAR_COMPONENT_VARIATION( sub_1955(), 3, 1, 0 );
                    }
                    g_U43692 = 1;
                    if (NOT l_U339)
                    {
                        TASK_PLAY_ANIM( sub_1955(), "luis_suit", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
                        SET_WIDESCREEN_BORDERS( 1 );
                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 1 );
                        sub_9054( sub_1955() );
                    }
                }
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 790510853, 65065, 148, 10, 1, 0 );
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 790510853, 65065, 148, 10, 0, 0 );
                if (NOT (DOES_OBJECT_EXIST( l_U286 )))
                {
                    CREATE_OBJECT( 159317168, -473.08840000, 145.66880000, 8.85860000, ref l_U286, 1 );
                    SET_OBJECT_HEADING( l_U286, 294.49840000 - 180 );
                    ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U286, "E2_MaisonsecurRoom" );
                }
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        if (NOT (IS_CHAR_DEAD( g_U29971[g_U30199]._fU12 )))
                        {
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U29971[g_U30199]._fU12, 1 );
                        }
                    }
                }
                if (NOT l_U339)
                {
                    if (g_U30198 != -1)
                    {
                        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                        {
                            sub_10502( "EECLJ_CANG", ref l_U681, 7, 1 );
                            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
                            {
                                CLEAR_CHAR_TASKS( g_U29971[g_U30198]._fU12 );
                                OPEN_SEQUENCE_TASK( ref l_U680 );
                                TASK_LOOK_AT_CHAR( 0, sub_1955(), -2, 0 );
                                TASK_PLAY_ANIM( 0, "joni_chat", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "joni_idle", "MISSCLUB_MGMT", 4.00000000, 1, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( l_U680 );
                                TASK_PERFORM_SEQUENCE( g_U29971[g_U30198]._fU12, l_U680 );
                                CLEAR_SEQUENCE_TASK( l_U680 );
                            }
                        }
                    }
                }
                l_U433++;
                break;
                case 1:
                if (IS_CHAR_PLAYING_ANIM( sub_1955(), "MISSCLUB_MGMT", "luis_suit" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( sub_1955(), "MISSCLUB_MGMT", "luis_suit", ref fVar2 );
                    if (fVar2 > 0.73000000)
                    {
                        SET_WIDESCREEN_BORDERS( 0 );
                        sub_3183();
                        if (IS_PLAYER_PLAYING( sub_903() ))
                        {
                            SET_CAM_BEHIND_PED( sub_1955() );
                        }
                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 0 );
                        CLEAR_CHAR_TASKS( sub_1955() );
                        SET_PLAYER_CONTROL( sub_903(), 1 );
                        if (g_U30198 != -1)
                        {
                            if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                            {
                                sub_10502( "EECLJ_JBYE", ref l_U681, 7, 1 );
                            }
                            if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                            {
                                if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
                                {
                                    CLEAR_CHAR_TASKS( g_U29971[g_U30198]._fU12 );
                                    OPEN_SEQUENCE_TASK( ref l_U680 );
                                    TASK_LOOK_AT_CHAR( 0, sub_1955(), -2, 0 );
                                    TASK_PLAY_ANIM( 0, "joni_bye_a", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
                                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "joni_idle", "MISSCLUB_MGMT", 4.00000000, 1, 0, 0, 0, 0 );
                                    CLOSE_SEQUENCE_TASK( l_U680 );
                                    TASK_PERFORM_SEQUENCE( g_U29971[g_U30198]._fU12, l_U680 );
                                    CLEAR_SEQUENCE_TASK( l_U680 );
                                }
                            }
                        }
                        l_U433++;
                    }
                }
                else
                {
                    SET_PLAYER_CONTROL( sub_903(), 1 );
                    if (g_U30198 != -1)
                    {
                        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                        {
                            sub_10502( "EECLJ_JBYE", ref l_U681, 7, 1 );
                            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U680 );
                                TASK_LOOK_AT_CHAR( 0, sub_1955(), -2, 0 );
                                TASK_PLAY_ANIM( 0, "joni_bye_a", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "joni_idle", "MISSCLUB_MGMT", 4.00000000, 1, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( l_U680 );
                                TASK_PERFORM_SEQUENCE( g_U29971[g_U30198]._fU12, l_U680 );
                                CLEAR_SEQUENCE_TASK( l_U680 );
                            }
                        }
                    }
                    l_U433++;
                }
                break;
                case 2:
                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
                if (l_U453 == 0)
                {
                    l_U270 = 1;
                }
                else
                {
                    l_U270 = 0;
                }
                l_U435 = 2;
                sub_6921( 1 );
                break;
            }
            break;
            case 1:
            switch (l_U433)
            {
                case 0:
                l_U434 = l_U435;
                l_U435 = sub_12602( l_U435 );
                if (NOT l_U273)
                {
                    if (l_U434 == 4)
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( sub_1955(), -480.67240000, 165.78080000, 10.61200000, 2, 2, 2, 0 ))
                        {
                            l_U434 = 1;
                        }
                        if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_1955(), -480.67240000, 165.78080000, 10.61200000, 2, 2, 2, 0 )))
                        {
                            l_U434 = 3;
                        }
                    }
                }
                l_U493 = {sub_13638( l_U434 )};
                l_U493._fU8 += 1.60000000;
                l_U454 = sub_13950( l_U434 );
                l_U433++;
                break;
                case 1:
                if (NOT (DOES_BLIP_EXIST( l_U292 )))
                {
                    ADD_BLIP_FOR_COORD( l_U493._fU0, l_U493._fU4, l_U493._fU8, ref l_U292 );
                }
                if (DOES_CHAR_EXIST( l_U603 ))
                {
                    if (IS_CHAR_INJURED( l_U603 ))
                    {
                        sub_14277( "BOUNCER_FAIL", 0 );
                        sub_598();
                    }
                }
                if (NOT l_U338)
                {
                    if (l_U273)
                    {
                        if (DOES_CHAR_EXIST( l_U603 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U603 )))
                            {
                                if (g_U30198 != -1)
                                {
                                    if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                                    {
                                        sub_14728( ref l_U350, sub_14467( l_U434 ), "E2CLJ_LGO" );
                                        sub_15075( ref l_U350, ref l_U681, 7, 1 );
                                    }
                                }
                                l_U433++;
                            }
                            else
                            {
                                sub_14277( "BOUNCER_FAIL", 0 );
                                sub_598();
                            }
                        }
                        else
                        {
                            l_U433++;
                        }
                    }
                    else
                    {
                        l_U433++;
                    }
                }
                else if (NOT (sub_2167( sub_1955(), "E2_MaisonsecurRoom" )))
                {
                    if (NOT l_U285)
                    {
                        SETTIMERA( 0 );
                        l_U285 = 1;
                    }
                    else if (TIMERA() > 1000)
                    {
                        if (NOT (sub_15316( l_U681 )))
                        {
                            if (g_U30198 != -1)
                            {
                                if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                                {
                                    sub_10502( "EECLJ_DANC", ref l_U681, 7, 1 );
                                }
                            }
                            l_U433++;
                        }
                    }
                }
                break;
                case 2:
                if ((sub_16097()) AND ((NOT sub_16061()) AND ((NOT (IS_PLAYER_CLIMBING( sub_903() ))) AND ((sub_15620( sub_1955(), 1, 0 )) AND (LOCATE_CHAR_ON_FOOT_3D( sub_1955(), l_U493._fU0, l_U493._fU4, l_U493._fU8, 1.20000000, 1.20000000, 1.60000000, 1 ))))))
                {
                    l_U436++;
                    if (IS_CHAR_DUCKING( sub_1955() ))
                    {
                        SET_CHAR_DUCKING( sub_1955(), 0 );
                    }
                    if (DOES_BLIP_EXIST( l_U292 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U292 );
                    }
                    l_U410 = 0;
                    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 1 );
                    if (NOT l_U273)
                    {
                        if ((g_U43683) || (l_U439 < l_U438))
                        {
                            sub_6921( 2 );
                        }
                        else if (l_U436 > l_U452)
                        {
                            switch (g_U43673)
                            {
                                case 0:
                                if (NOT g_U43675)
                                {
                                    sub_6921( 4 );
                                }
                                else
                                {
                                    g_U43673++;
                                }
                                break;
                                case 1:
                                if (NOT g_U43676)
                                {
                                    sub_6921( 4 );
                                }
                                else
                                {
                                    g_U43673++;
                                }
                                break;
                                case 2:
                                if (NOT g_U43677)
                                {
                                    sub_6921( 4 );
                                }
                                else
                                {
                                    g_U43673++;
                                }
                                break;
                                case 3:
                                if (NOT g_U43678)
                                {
                                    sub_6921( 4 );
                                }
                                else
                                {
                                    g_U43673++;
                                }
                                break;
                                case 4:
                                if (NOT g_U43679)
                                {
                                    sub_6921( 4 );
                                }
                                else
                                {
                                    g_U43673++;
                                }
                                break;
                                case 5:
                                if (NOT g_U43680)
                                {
                                    sub_6921( 4 );
                                }
                                else
                                {
                                    g_U43673++;
                                }
                                break;
                                case 6:
                                if (NOT g_U43681)
                                {
                                    sub_6921( 4 );
                                }
                                else
                                {
                                    g_U43673++;
                                }
                                break;
                                case 7:
                                if (NOT g_U43682)
                                {
                                    sub_6921( 4 );
                                }
                                else
                                {
                                    g_U43673 = 0;
                                }
                                break;
                            }
                        }
                        else
                        {
                            sub_6921( 2 );
                        }
                    }
                    else if (DOES_CHAR_EXIST( l_U603 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U603 )))
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 2, 5, ref l_U437 );
                            l_U600 = l_U603;
                            l_U601 = l_U604;
                            SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U600, 1 );
                            if (DOES_CHAR_EXIST( l_U601 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U601 )))
                                {
                                    SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U601, 1 );
                                }
                                else
                                {
                                    sub_14277( "BOUNCER_FAIL", 0 );
                                    sub_598();
                                }
                            }
                            sub_16907();
                        }
                        else
                        {
                            sub_14277( "BOUNCER_FAIL", 0 );
                            sub_598();
                        }
                    }
                    sub_6921( 2 );;
                }
                else if (DOES_CHAR_EXIST( l_U603 ))
                {
                    if (IS_CHAR_INJURED( l_U603 ))
                    {
                        sub_14277( "BOUNCER_FAIL", 0 );
                        sub_598();
                    }
                }
                if (DOES_CHAR_EXIST( l_U604 ))
                {
                    if (IS_CHAR_INJURED( l_U604 ))
                    {
                        sub_14277( "BOUNCER_FAIL", 0 );
                        sub_598();
                    }
                }
                if (l_U272)
                {
                    if (g_U30198 != -1)
                    {
                        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                        {
                            if (NOT (sub_18980( 0 )))
                            {
                                if (NOT (sub_2167( sub_1955(), "E2_MaisonsecurRoom" )))
                                {
                                    if (NOT (sub_2167( sub_1955(), "E2_MaisonRoomt03" )))
                                    {
                                        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1955(), -469.56240000, 150.01650000, 8.85910100, 2, 2, 2, 0 )))
                                        {
                                            if (NOT l_U273)
                                            {
                                                GET_GAME_TIMER( ref iVar3 );
                                                if (((iVar3 - l_U334) > 70000) AND (((iVar3 - l_U333) > 70000) AND (((iVar3 - l_U416) > 70000) AND ((iVar3 - l_U415) > 70000))))
                                                {
                                                    if (NOT l_U410)
                                                    {
                                                        GENERATE_RANDOM_INT_IN_RANGE( 0, 101, ref iVar4 );
                                                        if (iVar4 < 30)
                                                        {
                                                            SET_PLAYER_CONTROL( sub_903(), 0 );
                                                            sub_19455();
                                                            sub_10502( "EECLJ_REPL", ref l_U681, 7, 1 );
                                                            SET_PLAYER_CONTROL( sub_903(), 1 );
                                                            GET_GAME_TIMER( ref l_U416 );
                                                            l_U410 = 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((GET_HOURS_OF_DAY() < 21) AND (GET_HOURS_OF_DAY() > 5))
                {
                    if (NOT l_U411)
                    {
                        sub_22173( 1 );
                        sub_22318( ref l_U681, 1 );
                        if (g_U30198 != -1)
                        {
                            if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                            {
                                sub_10502( "EECLJ_CLOS", ref l_U681, 7, 1 );
                                l_U411 = 1;
                            }
                        }
                    }
                    else if (NOT (sub_15316( l_U681 )))
                    {
                        if (NOT (sub_2167( sub_1955(), "E2_MaisonsecurRoom" )))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1955(), -469.56240000, 150.01650000, 8.85910100, 2, 2, 2, 0 )))
                            {
                                PRINT_NOW( "ENDED", 7500, 0 );
                                sub_623( 2, "STOP_CLUBSEC" );
                                sub_995();
                                sub_1929();
                            }
                        }
                    }
                }
                break;
            }
            sub_22666();
            break;
            case 2:
            switch (l_U433)
            {
                case 0:
                if (l_U434 != 4)
                {
                    SET_PLAYER_CONTROL( sub_903(), 0 );
                    SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 0 );
                    OPEN_SEQUENCE_TASK( ref l_U680 );
                    TASK_GO_STRAIGHT_TO_COORD( 0, l_U493._fU0, l_U493._fU4, l_U493._fU8, 2, -1 );
                    TASK_ACHIEVE_HEADING( 0, l_U454 );
                    TASK_PLAY_ANIM( 0, "lookaround_a", "MISSCLUB_MGMT", 4.00000000, 0, 1, 1, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U680 );
                    TASK_PERFORM_SEQUENCE( sub_1955(), l_U680 );
                    CLEAR_SEQUENCE_TASK( l_U680 );
                    GET_GAME_TIMER( ref l_U288 );
                    l_U433++;
                }
                else if (DOES_CHAR_EXIST( l_U600 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U600 )))
                    {
                        SET_PLAYER_CONTROL( sub_903(), 0 );
                        SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 0 );
                        OPEN_SEQUENCE_TASK( ref l_U680 );
                        TASK_ACHIEVE_HEADING( 0, l_U454 );
                        TASK_LOOK_AT_CHAR( 0, l_U600, 7000, 0 );
                        CLOSE_SEQUENCE_TASK( l_U680 );
                        TASK_PERFORM_SEQUENCE( sub_1955(), l_U680 );
                        CLEAR_SEQUENCE_TASK( l_U680 );
                        GET_GAME_TIMER( ref l_U288 );
                        l_U433 = 3;
                    }
                }
                break;
                case 1:
                GET_GAME_TIMER( ref l_U289 );
                if (IS_CHAR_PLAYING_ANIM( sub_1955(), "MISSCLUB_MGMT", "lookaround_a" ))
                {
                    if (l_U434 != 4)
                    {
                        SETTIMERA( 0 );
                        l_U274[0] = 0;
                        l_U274[1] = 0;
                        l_U274[2] = 0;
                        SET_CHAR_ANIM_CURRENT_TIME( sub_1955(), "MISSCLUB_MGMT", "lookaround_a", 0.60000000 );
                        if (l_U338)
                        {
                            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 1 );
                            SET_WIDESCREEN_BORDERS( 1 );
                            sub_23632( sub_1955() );
                            l_U338 = 0;
                            l_U433++;
                        }
                        else
                        {
                            l_U433 = 3;
                        }
                    }
                    else
                    {
                        SETTIMERA( 0 );
                        l_U433 = 3;
                    }
                }
                else if (l_U289 > (l_U288 + 5000))
                {
                    CLEAR_CHAR_TASKS( sub_1955() );
                    SET_CHAR_HEADING( sub_1955(), l_U454 );
                    TASK_PLAY_ANIM( sub_1955(), "lookaround_a", "MISSCLUB_MGMT", 4.00000000, 0, 1, 1, 0, -1 );
                    GET_GAME_TIMER( ref l_U288 );
                }
                break;
                case 2:
                if (TIMERA() > 1250)
                {
                    SET_WIDESCREEN_BORDERS( 0 );
                    l_U433++;
                }
                break;
                case 3:
                if (l_U434 != 4)
                {
                    sub_24951();
                    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LOOK_AROUND" )))
                    {
                        PRINT_HELP_FOREVER( "LOOK_AROUND" );
                    }
                }
                if (l_U273)
                {
                    if ((TIMERA() > 2000) || (l_U434 == 4))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U600 )))
                        {
                            if (IS_CHAR_ON_SCREEN( l_U600 ))
                            {
                                if (NOT l_U284)
                                {
                                    GET_GAME_TIMER( ref iVar5 );
                                    l_U284 = 1;
                                }
                                else
                                {
                                    GET_GAME_TIMER( ref iVar6 );
                                    if ((iVar6 - iVar5) > 1500)
                                    {
                                        if (NOT (DOES_BLIP_EXIST( l_U417 )))
                                        {
                                            ADD_BLIP_FOR_CHAR( l_U600, ref l_U417 );
                                            sub_26070( l_U417 );
                                        }
                                        SET_CHAR_AS_ENEMY( l_U600, 1 );
                                        CLEAR_HELP();
                                        sub_3149();
                                        sub_26135();
                                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 0 );
                                        SET_PLAYER_CONTROL( sub_903(), 1 );
                                        l_U284 = 0;
                                        sub_6921( 3 );
                                    }
                                }
                            }
                        }
                        else
                        {
                            sub_14277( "BOUNCER_FAIL", 0 );
                            sub_598();
                        }
                    }
                }
                else if (NOT l_U274[0])
                {
                    if (sub_28461( l_U496[l_U434]._fU0, l_U496[l_U434]._fU4, l_U496[l_U434]._fU8, 0.50000000 ))
                    {
                        l_U274[0] = 1;
                    }
                }
                if (NOT l_U274[1])
                {
                    if (sub_28461( l_U518[l_U434]._fU0, l_U518[l_U434]._fU4, l_U518[l_U434]._fU8, 0.50000000 ))
                    {
                        l_U274[1] = 1;
                    }
                }
                if (NOT l_U274[2])
                {
                    if (sub_28461( l_U540[l_U434]._fU0, l_U540[l_U434]._fU4, l_U540[l_U434]._fU8, 0.50000000 ))
                    {
                        l_U274[2] = 1;
                    }
                }
                if ((l_U434 == 4) || ((TIMERA() > 12500) AND ((l_U274[2]) AND ((l_U274[1]) AND (l_U274[0])))))
                {
                    CLEAR_HELP();
                    SETTIMERA( 0 );
                    l_U433++;
                }
                break;
                case 4:
                if (g_U30198 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                    {
                        sub_10502( "EECLJ_LTLK", ref l_U681, 7, 1 );
                    }
                }
                sub_3149();
                if (l_U436 >= l_U437)
                {
                    if (l_U439 < l_U438)
                    {
                        sub_28870();
                        l_U273 = 1;
                    }
                }
                CLEAR_PRINTS();
                CLEAR_CHAR_TASKS( sub_1955() );
                SET_PLAYER_CONTROL( sub_903(), 1 );
                if (l_U436 > 0)
                {
                    if ((NOT l_U455) AND (NOT l_U273))
                    {
                        if (l_U439 < l_U438)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 1, 101, ref iVar7 );
                            if (g_U43683)
                            {
                                if (iVar7 > 60)
                                {
                                    l_U455 = 1;
                                    sub_6921( 5 );
                                }
                                else
                                {
                                    sub_6921( 1 );
                                }
                            }
                            else if (iVar7 > 55)
                            {
                                l_U455 = 1;
                                sub_6921( 5 );
                            }
                            else
                            {
                                sub_6921( 1 );
                            }
                        }
                        else
                        {
                            sub_6921( 1 );
                        }
                    }
                    else
                    {
                        sub_6921( 1 );
                    }
                }
                else
                {
                    sub_6921( 1 );
                }
                break;
            }
            sub_22666();
            break;
            case 3:
            switch (l_U433)
            {
                case 0:
                if (NOT (IS_CHAR_INJURED( l_U600 )))
                {
                    l_U436 = 0;
                    l_U455 = 0;
                    l_U433++;
                }
                else
                {
                    sub_14277( "BOUNCER_FAIL", 0 );
                    sub_598();
                }
                break;
                case 1:
                if (NOT (IS_CHAR_INJURED( l_U600 )))
                {
                    SET_CHAR_IS_TARGET_PRIORITY( l_U600, 1 );
                    SET_CHAR_NAME_DEBUG( l_U600, "Evicteeeeee" );
                    CLEAR_CHAR_TASKS( sub_1955() );
                    l_U433++;
                }
                else
                {
                    sub_14277( "BOUNCER_FAIL", 0 );
                    sub_598();
                }
                break;
                case 2:
                if (NOT (IS_CHAR_INJURED( l_U600 )))
                {
                    if (sub_6419( l_U600, 1 ))
                    {
                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_1955(), l_U600, 8.00000000, 8.00000000, 2.00000000, 0 ))
                        {
                            if (NOT l_U394)
                            {
                                sub_31495();
                                l_U394 = 1;
                            }
                        }
                        if (LOCATE_CHAR_ON_FOOT_CHAR_3D( sub_1955(), l_U600, 1.60000000, 1.60000000, 2.00000000, 0 ))
                        {
                            if (DOES_BLIP_EXIST( l_U417 ))
                            {
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U417 );
                            }
                            SET_PLAYER_CONTROL( sub_903(), 0 );
                            if (IS_CHAR_DUCKING( sub_1955() ))
                            {
                                SET_CHAR_DUCKING( sub_1955(), 0 );
                            }
                            FREEZE_CHAR_POSITION( l_U600, 0 );
                            if (DOES_CHAR_EXIST( l_U601 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U601 )))
                                {
                                    FREEZE_CHAR_POSITION( l_U601, 0 );
                                }
                            }
                            if (l_U441 == 0)
                            {
                                sub_32341();
                                l_U433++;
                            }
                            if (l_U441 == 1)
                            {
                                sub_37382();
                                l_U433++;
                            }
                            if (l_U441 == 2)
                            {
                                sub_39254();
                                l_U433++;
                            }
                            if (l_U441 == 3)
                            {
                                sub_41096();
                                l_U433++;
                            }
                            if (l_U441 == 4)
                            {
                                sub_43194();
                                l_U336 = 1;
                            }
                            if (l_U336)
                            {
                                l_U394 = 0;
                                if (l_U441 == 4)
                                {
                                    if (DOES_CHAR_EXIST( l_U600 ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U600 )))
                                        {
                                            CLEAR_CHAR_TASKS( l_U600 );
                                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U600, -465.40350000, 153.56340000, 8.83730000, 2, -2, 2.00000000 );
                                            SET_CHAR_KEEP_TASK( l_U600, 1 );
                                            if (DOES_BLIP_EXIST( l_U417 ))
                                            {
                                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U417 );
                                            }
                                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U600 );
                                        }
                                    }
                                    if (DOES_CHAR_EXIST( l_U601 ))
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U601 )))
                                        {
                                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U601, -483.57520000, 158.44580000, 10.61910000, 2, 120000, 2.50000000 );
                                            SET_CHAR_KEEP_TASK( l_U601, 1 );
                                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U601 );
                                        }
                                    }
                                    l_U336 = 0;
                                    l_U433 = 4;
                                }
                            }
                        }
                    }
                }
                else
                {
                    sub_14277( "BOUNCER_FAIL", 0 );
                    sub_598();
                }
                break;
                case 3:
                if ((l_U441 == 3) || ((l_U441 == 2) || (l_U441 == 0)))
                {
                    if (DOES_CHAR_EXIST( l_U601 ))
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U601 );
                    }
                }
                sub_45728();
                CLEAR_PRINTS();
                if (DOES_CHAR_EXIST( l_U600 ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U600 );
                }
                if (DOES_CHAR_EXIST( l_U601 ))
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U601 );
                }
                GET_GAME_VIEWPORT_ID( ref uVar8 );
                CLEAR_ROOM_FOR_VIEWPORT( uVar8 );
                SET_CAM_BEHIND_PED( sub_1955() );
                SET_PLAYER_CONTROL( sub_903(), 1 );
                if (NOT IS_SCREEN_FADED_IN())
                {
                    DO_SCREEN_FADE_IN( 500 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                }
                l_U433++;
                break;
                case 4:
                if (l_U441 == 4)
                {
                    SET_PLAYER_CONTROL( sub_903(), 1 );
                }
                l_U439++;
                l_U273 = 0;
                GET_GAME_TIMER( ref l_U333 );
                sub_6921( 1 );
                break;
            }
            sub_22666();
            break;
            case 4:
            switch (l_U433)
            {
                case 0:
                SET_PLAYER_CONTROL( sub_903(), 0 );
                SET_CAMERA_CONTROLS_DISABLED_WITH_PLAYER_CONTROLS( 0 );
                OPEN_SEQUENCE_TASK( ref l_U680 );
                TASK_GO_STRAIGHT_TO_COORD( 0, l_U493._fU0, l_U493._fU4, l_U493._fU8, 2, -1 );
                TASK_ACHIEVE_HEADING( 0, l_U454 );
                TASK_PLAY_ANIM( 0, "lookaround_a", "MISSCLUB_MGMT", 4.00000000, 0, 1, 1, 0, -1 );
                CLOSE_SEQUENCE_TASK( l_U680 );
                TASK_PERFORM_SEQUENCE( sub_1955(), l_U680 );
                CLEAR_SEQUENCE_TASK( l_U680 );
                GET_GAME_TIMER( ref l_U288 );
                l_U433++;
                break;
                case 1:
                GET_GAME_TIMER( ref l_U289 );
                if (IS_CHAR_PLAYING_ANIM( sub_1955(), "MISSCLUB_MGMT", "lookaround_a" ))
                {
                    switch (g_U43673)
                    {
                        case 0:
                        l_U597 = "tonym1";
                        break;
                        case 1:
                        l_U597 = "tonym2";
                        break;
                        case 2:
                        l_U597 = "tonym3";
                        break;
                        case 3:
                        l_U597 = "tonym4";
                        break;
                        case 4:
                        l_U597 = "tonym5";
                        break;
                        case 5:
                        l_U597 = "tonym6";
                        break;
                        case 6:
                        l_U597 = "tonym7";
                        break;
                        case 7:
                        l_U597 = "tonym8";
                        break;
                    }
                    REQUEST_SCRIPT( l_U597 );
                    l_U433++;
                }
                else if (l_U289 > (l_U288 + 5000))
                {
                    CLEAR_CHAR_TASKS( sub_1955() );
                    SET_CHAR_HEADING( sub_1955(), l_U454 );
                    TASK_PLAY_ANIM( sub_1955(), "lookaround_a", "MISSCLUB_MGMT", 4.00000000, 0, 1, 1, 0, -1 );
                    GET_GAME_TIMER( ref l_U288 );
                }
                break;
                case 2:
                if (NOT (HAS_SCRIPT_LOADED( l_U597 )))
                {
                    REQUEST_SCRIPT( l_U597 );
                }
                else
                {
                    START_NEW_SCRIPT( l_U597, 8192 );
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( l_U597 );
                    sub_1929();
                }
                break;
            }
            break;
            case 5:
            switch (l_U433)
            {
                case 0:
                ADD_BLIP_FOR_COORD( l_U419._fU0, l_U419._fU4, l_U419._fU8 + 1.60000000, ref l_U418 );
                l_U433++;
                break;
                case 1:
                if (NOT sub_18996())
                {
                    if (g_U30198 != -1)
                    {
                        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                        {
                            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
                            {
                                sub_2439( g_U30198, 1 );
                                sub_7378( 1, g_U29971[g_U30198]._fU12, "JONI", 0 );
                                sub_10502( "EECLJ_OFFI", ref l_U681, 7, 1 );
                                l_U433++;
                            }
                        }
                    }
                }
                break;
                case 2:
                if (g_U30198 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                    {
                        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
                        {
                            if (LOCATE_CHAR_ON_FOOT_3D( sub_1955(), l_U419._fU0, l_U419._fU4, l_U419._fU8, 1.60000000, 1.60000000, 1.60000000, 0 ))
                            {
                                if (DOES_BLIP_EXIST( l_U418 ))
                                {
                                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U418 );
                                }
                                l_U433++;
                            }
                        }
                        else
                        {
                            sub_14277( "BOUNCER_FAIL", 0 );
                            sub_598();
                        }
                    }
                }
                break;
                case 3:
                SET_PLAYER_CONTROL( sub_903(), 0 );
                if (IS_CHAR_DUCKING( sub_1955() ))
                {
                    SET_CHAR_DUCKING( sub_1955(), 0 );
                }
                sub_51419();
                SET_PLAYER_CONTROL( sub_903(), 1 );
                l_U433++;
                break;
                case 4:
                sub_6921( 1 );
                break;
            }
            sub_22666();
            break;
            case 6:
            switch (l_U433)
            {
                case 0:
                sub_22318( ref l_U681, 0 );
                sub_22173( 0 );
                CLEAR_HELP();
                if (DOES_BLIP_EXIST( l_U417 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U417 );
                }
                if (DOES_BLIP_EXIST( l_U292 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U292 );
                }
                if (g_U30198 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                    {
                        sub_10502( "EECLJ_BYEN", ref l_U681, 7, 1 );
                        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
                        {
                            if ((IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", "Joni_hi_a" )) || (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", "Joni_idle" )))
                            {
                                TASK_PLAY_ANIM( g_U29971[g_U30198]._fU12, "Joni_goodnight_a", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
                            }
                        }
                    }
                }
                l_U433++;
                break;
                case 1:
                if (NOT (sub_15316( l_U681 )))
                {
                    SET_PLAYER_CONTROL( sub_903(), 0 );
                    DO_SCREEN_FADE_OUT( 500 );
                    while (NOT IS_SCREEN_FADED_OUT())
                    {
                        WAIT( 0 );
                    }
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 790510853, 65065, 148, 10, 0, 0 );
                    if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                    {
                        if (NOT (IS_CHAR_DEAD( g_U29971[g_U30198]._fU12 )))
                        {
                            SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, -473.10700000, 145.81830000, 8.90600000 );
                            SET_CHAR_HEADING( g_U29971[g_U30198]._fU12, 333.00000000 );
                            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
                            {
                                TASK_PLAY_ANIM( g_U29971[g_U30198]._fU12, "female_chair_alone", "MISSCLUB_MGMT", 8.00000000, 1, 0, 0, 0, 0 );
                            }
                            FREEZE_CHAR_POSITION( g_U29971[g_U30198]._fU12, 1 );
                            SET_CHAR_COLLISION( g_U29971[g_U30198]._fU12, 0 );
                            g_U30209 = g_U29971[g_U30198]._fU12;
                        }
                    }
                    SET_CHAR_COMPONENT_VARIATION( sub_1955(), 1, l_U444, l_U445 );
                    SET_CHAR_COMPONENT_VARIATION( sub_1955(), 2, l_U446, l_U447 );
                    SET_CHAR_COMPONENT_VARIATION( sub_1955(), 5, l_U448, l_U449 );
                    SET_CHAR_COMPONENT_VARIATION( sub_1955(), 3, l_U450, l_U451 );
                    SET_CHAR_COORDINATES( sub_1955(), -472.81330000, 147.95070000, 8.85849900 );
                    SET_CHAR_HEADING( sub_1955(), 319.18460000 );
                    SET_CAM_BEHIND_PED( sub_1955() );
                    DO_SCREEN_FADE_IN( 500 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                    SET_PLAYER_CONTROL( sub_903(), 1 );
                    sub_623( 2, "STOP_CLUBSEC" );
                    sub_995();
                    sub_1929();
                }
                break;
            }
            break;
        }
        if (NOT l_U272)
        {
            if (IS_PLAYER_PLAYING( sub_903() ))
            {
                if (NOT (IS_CHAR_IN_AREA_3D( sub_1955(), -474.97280000, 143.74440000, 8.86370000, -471.82280000, 150.54440000, 11.86370000, 0 )))
                {
                    GET_GAME_TIMER( ref l_U415 );
                    l_U272 = 1;
                }
            }
        }
        else if ((NOT l_U282) AND ((sub_64657( 2, 0 )) AND ((IS_CHAR_ON_FOOT( sub_1955() )) AND (IS_CHAR_IN_AREA_3D( sub_1955(), -474.97280000, 143.74440000, 8.86370000, -471.82280000, 150.54440000, 11.86370000, 0 )))))
        {
            if (sub_64965( 2, "STOP_CLUBSEC", 0 ))
            {
                l_U282 = 1;
                sub_6921( 6 );
            }
        }
        else
        {
            sub_623( 2, "STOP_CLUBSEC" );
        }
        if (g_U30198 != -1)
        {
            if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
            {
                if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
                {
                    if (IS_CHAR_IN_AREA_3D( sub_1955(), -474.97280000, 143.74440000, 8.86370000, -471.82280000, 150.54440000, 11.86370000, 0 ))
                    {
                        if ((NOT l_U282) AND ((IS_CHAR_ON_SCREEN( g_U29971[g_U30198]._fU12 )) AND ((sub_65761( sub_1955(), g_U29971[g_U30198]._fU12, 1 )) < 6)))
                        {
                            GET_GAME_TIMER( ref iVar9 );
                            if ((iVar9 - l_U334) > 120000)
                            {
                                if (NOT l_U283)
                                {
                                    sub_10502( "EECLJ_JOHI", ref l_U681, 6, 1 );
                                    OPEN_SEQUENCE_TASK( ref l_U680 );
                                    TASK_LOOK_AT_CHAR( 0, sub_1955(), -2, 0 );
                                    TASK_PLAY_ANIM( 0, "Joni_hi_a", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
                                    TASK_PLAY_ANIM_NON_INTERRUPTABLE( 0, "joni_idle", "MISSCLUB_MGMT", 4.00000000, 1, 0, 0, 0, 0 );
                                    CLOSE_SEQUENCE_TASK( l_U680 );
                                    TASK_PERFORM_SEQUENCE( g_U29971[g_U30198]._fU12, l_U680 );
                                    CLEAR_SEQUENCE_TASK( l_U680 );
                                    l_U283 = 1;
                                }
                            }
                        }
                    }
                    else if (NOT (sub_2167( sub_1955(), "E2_MaisonsecurRoom" )))
                    {
                        l_U283 = 0;
                        if (NOT (IS_CHAR_ON_SCREEN( g_U29971[g_U30198]._fU12 )))
                        {
                            if (NOT (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", "joni_idle" )))
                            {
                                SET_OBJECT_COORDINATES( l_U286, -473.08840000, 145.66880000, 8.85860000 );
                                SET_OBJECT_HEADING( l_U286, 294.49840000 - 180 );
                                SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, -473.10700000, 145.81830000, 8.90600000 );
                                SET_CHAR_HEADING( g_U29971[g_U30198]._fU12, 333.00000000 );
                                SET_CHAR_COLLISION( g_U29971[g_U30198]._fU12, 0 );
                                FREEZE_CHAR_POSITION( g_U29971[g_U30198]._fU12, 1 );
                                CLEAR_CHAR_TASKS( g_U29971[g_U30198]._fU12 );
                                TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U29971[g_U30198]._fU12, "joni_idle", "MISSCLUB_MGMT", 4.00000000, 1, 0, 0, 0, 0 );
                            }
                        }
                    }
                }
            }
        }
        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
        {
            if (NOT (IS_CHAR_DEAD( g_U29971[g_U30198]._fU12 )))
            {
                l_U293 = {sub_65774( g_U29971[g_U30198]._fU12, 1 )};
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_1955(), l_U293._fU0, l_U293._fU4, l_U293._fU8, 0.40000000, 0.40000000, 4, 0 ))
                {
                    SET_CHAR_COLLISION( g_U29971[g_U30198]._fU12, 1 );
                    FREEZE_CHAR_POSITION( g_U29971[g_U30198]._fU12, 0 );
                    if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
                    {
                        OPEN_SEQUENCE_TASK( ref l_U680 );
                        TASK_GO_STRAIGHT_TO_COORD( 0, -472.19740000, 146.71430000, 8.85870000, 2, -1 );
                        TASK_ACHIEVE_HEADING( 0, 55.32500000 );
                        TASK_LOOK_AT_CHAR( 0, sub_1955(), -2, 0 );
                        CLOSE_SEQUENCE_TASK( l_U680 );
                        TASK_PERFORM_SEQUENCE( g_U29971[g_U30198]._fU12, l_U680 );
                        CLEAR_SEQUENCE_TASK( l_U680 );
                    }
                }
            }
        }
        if (sub_15620( sub_1955(), 1, 1 ))
        {
            if (IS_CHAR_SHOOTING( sub_1955() ))
            {
                sub_14277( "BOUNCER_FAIL", 0 );
                sub_598();
            }
        }
        if (sub_15620( sub_1955(), 1, 0 ))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_1955() ))
            {
                sub_14277( "BOUNCER_FAIL", 0 );
                sub_598();
            }
        }
        if (IS_WANTED_LEVEL_GREATER( sub_903(), 0 ))
        {
            sub_14277( "BOUNCER_FAIL", 0 );
            sub_598();
        }
        if (g_U30199 != -1)
        {
            if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
            {
                if (NOT (IS_CHAR_DEAD( g_U29971[g_U30199]._fU12 )))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30199]._fU12, sub_1955(), 0 ))
                    {
                        sub_14277( "BOUNCER_FAIL", 0 );
                        sub_598();
                    }
                }
            }
        }
        if (g_U30198 != -1)
        {
            if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
            {
                if (NOT (IS_CHAR_DEAD( g_U29971[g_U30198]._fU12 )))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30198]._fU12, sub_1955(), 0 ))
                    {
                        SET_CHAR_COLLISION( g_U29971[g_U30198]._fU12, 1 );
                        sub_14277( "BOUNCER_FAIL", 0 );
                        sub_598();
                    }
                }
            }
        }
        if (l_U278)
        {
            DRAW_DEBUG_SPHERE( l_U496[l_U434]._fU0, l_U496[l_U434]._fU4, l_U496[l_U434]._fU8, 1.00000000 );
            DRAW_DEBUG_SPHERE( l_U518[l_U434]._fU0, l_U518[l_U434]._fU4, l_U518[l_U434]._fU8, 1.00000000 );
            DRAW_DEBUG_SPHERE( l_U540[l_U434]._fU0, l_U540[l_U434]._fU4, l_U540[l_U434]._fU8, 1.00000000 );
        }
        if (l_U598)
        {
            l_U598 = 0;
        }
        else
        {
            WAIT( 0 );
        }
        if (NOT (HAVE_ANIMS_LOADED( "MISSCLUB_MGMT" )))
        {
            PRINTSTRING( "\n\n\n\n\n>>------------------------- ANIMS NOT LOADED --------------------------<<\n\n\n\n\n" );
        }
    }
    return;
}

void sub_577()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_598();
    }
    CREATE_WIDGET_GROUP( "Club Security" );
    CREATE_WIDGET_GROUP( "For Test" );
    ADD_WIDGET_SLIDER( "Procedural Mission No", ref g_U43673, 0, 7, 1 );
    ADD_WIDGET_TOGGLE( "Launch", ref l_U599 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "debug" );
    ADD_WIDGET_SLIDER( "iState", ref l_U432, 0, 99, 1 );
    ADD_WIDGET_SLIDER( "iProgress", ref l_U433, 0, 99, 1 );
    ADD_WIDGET_SLIDER( "iPatrolsDone", ref l_U436, 0, 99, 1 );
    ADD_WIDGET_SLIDER( "iEventsDone", ref l_U439, 0, 99, 1 );
    ADD_WIDGET_SLIDER( "iNumberOfPatrolsForEvent", ref l_U437, 0, 99, 1 );
    ADD_WIDGET_SLIDER( "iNoOfEventsForMission", ref l_U438, 0, 99, 1 );
    ADD_WIDGET_SLIDER( "iNextPatrolPoint", ref l_U435, -1, 99, 1 );
    ADD_WIDGET_SLIDER( "iCurrentPatrolPoint", ref l_U434, -1, 99, 1 );
    ADD_WIDGET_SLIDER( "iThisEvent", ref l_U441, -1, 99, 1 );
    ADD_WIDGET_SLIDER( "g_iClubProcMissionNumber", ref g_U43673, 0, 8, 1 );
    ADD_WIDGET_TOGGLE( "bThisIsAnEvent", ref l_U273 );
    ADD_WIDGET_TOGGLE( "bShowCurrentCreationPoints", ref l_U278 );
    ADD_WIDGET_TOGGLE( "bThisScriptHasDisabledPlayerSprint", ref l_U279 );
    CREATE_WIDGET_GROUP( "Camera" );
    ADD_WIDGET_FLOAT_SLIDER( "vCamOffset.x", ref l_U565._fU0, -10.00000000, 10.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vCamOffset.y", ref l_U565._fU4, -10.00000000, 10.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vCamOffset.z", ref l_U565._fU8, -10.00000000, 10.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fClubCamFOV", ref l_U482, 10.00000000, 80.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fClubCamChangeX", ref l_U483, -360.00000000, 360.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fClubCamChangeY", ref l_U484, -360.00000000, 360.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fClubCamSpeed", ref l_U485, 0.00000000, 100.00000000, 0.10000000 );
    ADD_WIDGET_SLIDER( "iCamScope", ref l_U442, -1, 99, 1 );
    ADD_WIDGET_FLOAT_SLIDER( "fMinXChange", ref l_U488, -360.00000000, 360.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fMaxXChange", ref l_U489, -360.00000000, 360.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fMinYChange", ref l_U486, -360.00000000, 360.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fMaxYChange", ref l_U487, -360.00000000, 360.00000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fFocusCamFOV", ref l_U490, 10.00000000, 50.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vFocusCamOffset.x", ref l_U568._fU0, -5.00000000, 5.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vFocusCamOffset.y", ref l_U568._fU4, -5.00000000, 5.00000000, 0.01000000 );
    ADD_WIDGET_FLOAT_SLIDER( "vFocusCamOffset.z", ref l_U568._fU8, -5.00000000, 5.00000000, 0.01000000 );
    ADD_WIDGET_SLIDER( "iFocusCamInterpTime", ref l_U443, 0, 5000, 1 );
    END_WIDGET_GROUP();
    END_WIDGET_GROUP();
    END_WIDGET_GROUP();
    l_U496[1] = {-482.73830000, 155.30140000, 6.55030000};
    l_U456[1] = 85.62641000;
    l_U572[1] = "E2_MaisonRoommain";
    l_U518[1] = {-482.73830000, 155.30140000, 6.55030000};
    l_U464[1] = 85.62641000;
    l_U580[1] = "E2_MaisonRoommain";
    l_U540[1] = {-487.05620000, 156.39670000, 6.55120000};
    l_U472[1] = 324.17250000;
    l_U588[1] = "E2_MaisonRoommain";
    l_U496[2] = {-486.48510000, 148.56750000, 6.55100000};
    l_U456[2] = 15.56920000;
    l_U572[2] = "E2_MaisonRoommain";
    l_U518[2] = {-485.24800000, 147.77560000, 6.55090000};
    l_U464[2] = 339.45140000;
    l_U580[2] = "E2_MaisonRoommain";
    l_U540[2] = {-486.48510000, 148.56750000, 6.55100000};
    l_U472[2] = 78.54490000;
    l_U588[2] = "E2_MaisonRoommain";
    l_U496[3] = {-485.33610000, 164.45740000, 10.61840000};
    l_U456[3] = 98.19420000;
    l_U572[3] = "E2_MaisonRoomtop";
    l_U518[3] = {-485.33610000, 164.45740000, 10.61840000};
    l_U464[3] = 124.45330000;
    l_U580[3] = "E2_MaisonRoomtop";
    l_U540[3] = {-482.28650000, 164.29760000, 10.61800000};
    l_U472[3] = 121.70370000;
    l_U588[3] = "E2_MaisonRoomtop";
    l_U496[4] = {-469.57460000, 161.46420000, 8.66910000};
    l_U456[4] = 2.14330000;
    l_U572[4] = "E2_MaisonRoomt03";
    l_U518[4] = {-469.57460000, 161.46420000, 8.66910000};
    l_U464[4] = 2.14330000;
    l_U580[4] = "E2_MaisonRoomt03";
    l_U540[4] = {-469.57460000, 161.46420000, 8.66910000};
    l_U472[4] = 2.14330000;
    l_U588[4] = "E2_MaisonRoomt03";
    l_U496[5] = {-479.96490000, 140.90890000, 6.55280000};
    l_U456[5] = 102.40180000;
    l_U572[5] = "E2_MaisonRoommain";
    l_U518[5] = {-480.22300000, 141.28730000, 6.55270000};
    l_U464[5] = 272.31930000;
    l_U580[5] = "E2_MaisonRoommain";
    l_U540[5] = {-480.22300000, 141.28730000, 6.55270000};
    l_U472[5] = 1.52450000;
    l_U588[5] = "E2_MaisonRoommain";
    l_U496[6] = {-469.36780000, 147.19580000, 8.85910100};
    l_U456[6] = 353.79860000;
    l_U572[6] = "E2_MaisonRoomfront";
    l_U518[6] = {-469.42920000, 150.16590000, 8.85910100};
    l_U464[6] = 178.67620000;
    l_U580[6] = "E2_MaisonRoomfront";
    l_U540[6] = {-471.82910000, 141.03860000, 8.85910100};
    l_U472[6] = 295.73530000;
    l_U588[6] = "E2_MaisonRoomfront";
    g_U30097[1] = 1;
    return;
}

void sub_598()
{
    sub_623( 2, "STOP_CLUBSEC" );
    sub_995();
    sub_1929();
    return;
}

void sub_623(int iParam0, string sParam1)
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
            if ((l_U103) AND (g_U10534 == iParam0))
            {
                StrCopy( ref g_U10536, "", 16 );
                g_U10534 = 0;
                g_U10535 = 0;
                g_U10540 = nil;
                l_U103 = 0;
                if (l_U101)
                {
                    sub_850();
                    l_U101 = 0;
                }
            }
            if (l_U102)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_903(), 1 );
                l_U102 = 0;
            }
            if (l_U100)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U100 = 0;
            }
        }
    }
    return;
}

void sub_850()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_903()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_995()
{
    int iVar2;

    iVar2 = 0;
    g_U12379 = 0;
    g_U30153 = 0;
    sub_1019();
    sub_1643();
    sub_1679( iVar2, 0 );
    sub_1762();
    sub_1801();
    g_U30097[1] = 0;
    return;
}

void sub_1019()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((g_U575[I]._fU20) AND ((sub_1057( 5, g_U575[I] )) == 1))
        {
            if ((sub_1057( 1, g_U575[I] )) != 0)
            {
                sub_1343( I );
            }
        }
    }
    if (NOT sub_1509())
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

int sub_1057(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1343(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_1428( g_U575 - 1 );
    return;
}

void sub_1428(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_1509()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_1057( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1643()
{
    unknown uVar2;

    uVar2 = g_U10965;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_1679(int iParam0, boolean bParam1)
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

void sub_1762()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_1801()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1823();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_1823()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_1929()
{
    if (IS_PLAYER_PLAYING( sub_903() ))
    {
        SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_1955(), 3.00000000 );
    }
    RELEASE_TEXTURE( l_U621 );
    RELEASE_TEXTURE( l_U622 );
    REMOVE_TXD( l_U620 );
    if (IS_PLAYER_PLAYING( sub_903() ))
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
        {
            if (NOT (IS_CHAR_DEAD( g_U29971[g_U30198]._fU12 )))
            {
                if (NOT (IS_CHAR_ON_SCREEN( g_U29971[g_U30198]._fU12 )))
                {
                    if (NOT (sub_2167( sub_1955(), "E2_MaisonsecurRoom" )))
                    {
                        SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, -473.10700000, 145.81830000, 8.90600000 );
                        SET_CHAR_HEADING( g_U29971[g_U30198]._fU12, 333.00000000 );
                        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
                        {
                            TASK_PLAY_ANIM( g_U29971[g_U30198]._fU12, "female_chair_alone", "MISSCLUB_MGMT", 8.00000000, 1, 0, 0, 0, 0 );
                        }
                        FREEZE_CHAR_POSITION( g_U29971[g_U30198]._fU12, 1 );
                        SET_CHAR_COLLISION( g_U29971[g_U30198]._fU12, 0 );
                        g_U30209 = g_U29971[g_U30198]._fU12;
                    }
                }
            }
            sub_2439( g_U30198, 0 );
        }
    }
    if (g_U30199 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
        {
            if (NOT (IS_CHAR_DEAD( g_U29971[g_U30199]._fU12 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( g_U29971[g_U30199]._fU12, 0 );
            }
        }
    }
    g_U10935 = 0;
    SWITCH_GARBAGE_TRUCKS( 1 );
    if (DOES_BLIP_EXIST( l_U417 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U417 );
    }
    if (DOES_BLIP_EXIST( l_U292 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U292 );
    }
    if (DOES_OBJECT_EXIST( l_U286 ))
    {
        DELETE_OBJECT( ref l_U286 );
    }
    if (DOES_CHAR_EXIST( l_U600 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U600 )))
        {
            FREEZE_CHAR_POSITION( l_U600, 0 );
            SET_CHAR_COLLISION( l_U600, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U600 );
    }
    if (DOES_CHAR_EXIST( l_U603 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U603 )))
        {
            FREEZE_CHAR_POSITION( l_U603, 0 );
            SET_CHAR_COLLISION( l_U603, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U603 );
    }
    if (DOES_CHAR_EXIST( l_U601 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U601 )))
        {
            FREEZE_CHAR_POSITION( l_U601, 0 );
            SET_CHAR_COLLISION( l_U601, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U601 );
    }
    if (DOES_CHAR_EXIST( l_U604 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U604 )))
        {
            FREEZE_CHAR_POSITION( l_U604, 0 );
            SET_CHAR_COLLISION( l_U604, 1 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U604 );
    }
    if (HAVE_ANIMS_LOADED( "MISSCLUB_MGMT" ))
    {
        REMOVE_ANIMS( "MISSCLUB_MGMT" );
    }
    sub_3088( 1 );
    sub_3149();
    g_U8781 = 1;
    if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "GET_BACK", l_U440 ))
    {
        CLEAR_HELP();
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1955()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

boolean sub_2167(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_KEY_FOR_CHAR_IN_ROOM( uParam0, ref iVar4 );
    return iVar4 == (GET_HASH_KEY( uParam1 ));
}

void sub_2439(int iParam0, unknown uParam1)
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

void sub_3088(boolean bParam0)
{
    if (NOT bParam0)
    {
        g_U30167 = 1;
        g_U30235 = GET_ID_OF_THIS_THREAD();
    }
    else
    {
        g_U30167 = 0;
        g_U30235 = nil;
    }
    return;
}

void sub_3149()
{
    sub_3159( 0 );
    sub_3183();
    if (DOES_CAM_EXIST( l_U423 ))
    {
        DESTROY_CAM( l_U423 );
    }
    if (DOES_CAM_EXIST( l_U424 ))
    {
        DESTROY_CAM( l_U424 );
    }
    if (DOES_CAM_EXIST( l_U422 ))
    {
        DESTROY_CAM( l_U422 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (IS_PLAYER_PLAYING( sub_903() ))
        {
            FREEZE_CHAR_POSITION( sub_1955(), 0 );
            SET_CHAR_VISIBLE( sub_1955(), 1 );
            if (l_U273)
            {
                if (DOES_CHAR_EXIST( l_U600 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U600 )))
                    {
                        sub_3525( sub_1955(), l_U600 );
                    }
                }
            }
            SET_CAM_BEHIND_PED( sub_1955() );
        }
        END_CAM_COMMANDS( ref l_U442 );
    }
    return;
}

void sub_3159(unknown uParam0)
{
    g_U10597 = uParam0;
    return;
}

void sub_3183()
{
    for ( l_U453 = 0; l_U453 < l_U688; l_U453++ )
    {
        if (DOES_CAM_EXIST( l_U688[l_U453] ))
        {
            DESTROY_CAM( l_U688[l_U453] );
        }
    }
    if (DOES_CAM_EXIST( l_U687 ))
    {
        DESTROY_CAM( l_U687 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U442 );
    }
    return;
}

void sub_3525(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    GET_HEADING_FROM_VECTOR_2D( uVar10._fU0, uVar10._fU4, ref uVar13 );
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_PED_RAGDOLL( uParam0 )))
        {
            SET_CHAR_HEADING( uParam0, uVar13 );
        }
    }
    return;
}

void sub_6359()
{
    if (IS_PLAYER_PLAYING( sub_903() ))
    {
        if (NOT l_U279)
        {
            SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_1955(), 3.00000000 );
            if (sub_6419( sub_1955(), 1 ))
            {
                if ((NOT (l_U432 == 5)) AND ((NOT (l_U432 == 4)) AND ((NOT (l_U432 == 3)) AND (NOT g_U30093[1]))))
                {
                    if (sub_6419( sub_1955(), 1 ))
                    {
                        SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_1955(), 1.50000000 );
                        l_U279 = 1;
                    }
                }
            }
        }
        else
        {
            SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_1955(), 1.50000000 );
            if ((l_U432 == 5) || ((l_U432 == 4) || ((l_U432 == 3) || (NOT (sub_6419( sub_1955(), 1 ))))))
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_1955(), 3.00000000 );
                l_U279 = 0;
            }
        }
    }
    return;
}

int sub_6419(unknown uParam0, unknown uParam1)
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
            if (IS_CHAR_IN_AREA_3D( sub_1955(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_6921(int iParam0)
{
    if (NOT (iParam0 == l_U432))
    {
        l_U432 = iParam0;
        l_U433 = 0;
        l_U598 = 1;
    }
    return;
}

void sub_7092(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_7128())
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

int sub_7128()
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

void sub_7259(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_7276();
    return;
}

void sub_7276()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U2._fU16[I]._fU0 = nil;
        StrCopy( ref l_U2._fU16[I]._fU4, "", 32 );
        l_U2._fU344[I] = 0;
    }
    return;
}

void sub_7378(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_7458( "\n PED NUMBER ", uParam0 );
    sub_7498( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_7458(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_7498(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_9054(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( ref l_U442 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U688[0] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[0], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U688[0], -0.26710000, 1.47790000, 0.64590000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U688[0], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[0], uParam0 );
        POINT_CAM_AT_PED( l_U688[0], uParam0 );
        SET_CAM_POINT_OFFSET( l_U688[0], -0.08039999, 0.49830000, 0.57070000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U688[0], 1 );
    }
    SET_CAM_FOV( l_U688[0], 21.60010000 );
    SET_CAM_ACTIVE( l_U688[0], 1 );
    CREATE_CAM( 14, ref l_U688[1] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[1], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U688[1], -0.44110000, 2.16540000, 0.42970000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U688[1], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[1], uParam0 );
        POINT_CAM_AT_PED( l_U688[1], uParam0 );
        SET_CAM_POINT_OFFSET( l_U688[1], -0.25510000, 1.18300000, 0.41380000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U688[1], 1 );
    }
    SET_CAM_FOV( l_U688[1], 21.60010000 );
    SET_CAM_ACTIVE( l_U688[1], 1 );
    CREATE_CAM( 14, ref l_U688[2] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[2], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U688[2], -0.61510000, 2.85300000, 0.21360000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U688[2], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[2], uParam0 );
        POINT_CAM_AT_PED( l_U688[2], uParam0 );
        SET_CAM_POINT_OFFSET( l_U688[2], -0.43020000, 1.87060000, 0.22280000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U688[2], 1 );
    }
    SET_CAM_FOV( l_U688[2], 21.60010000 );
    SET_CAM_ACTIVE( l_U688[2], 1 );
    CREATE_CAM( 14, ref l_U688[3] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[3], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U688[3], -0.78910000, 3.54060000, -0.00250000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U688[3], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[3], uParam0 );
        POINT_CAM_AT_PED( l_U688[3], uParam0 );
        SET_CAM_POINT_OFFSET( l_U688[3], -0.60540000, 2.55820000, 0.03180000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U688[3], 1 );
    }
    SET_CAM_FOV( l_U688[3], 21.60010000 );
    SET_CAM_ACTIVE( l_U688[3], 1 );
    CREATE_CAM( 25, ref l_U687 );
    SET_CAM_SPLINE_DURATION( l_U687, 5000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U687, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U687, 0 );
    ADD_CAM_SPLINE_NODE( l_U687, l_U688[0] );
    ADD_CAM_SPLINE_NODE( l_U687, l_U688[1] );
    ADD_CAM_SPLINE_NODE( l_U687, l_U688[2] );
    ADD_CAM_SPLINE_NODE( l_U687, l_U688[3] );
    SET_CAM_ACTIVE( l_U687, 1 );
    SET_CAM_PROPAGATE( l_U687, 1 );
    return;
}

void sub_10502(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_10523( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_10523(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_10577( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_10577(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_10599( iParam1 )))
    {
        return 0;
    }
    l_U2._fU384 = 0;
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
    sub_11287( ref g_U8868, ref l_U2 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_10599(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_10676( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_10676( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_10676( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_10676(unknown uParam0)
{
    return;
}

void sub_11287(int iParam0, int iParam1)
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

int sub_12602(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 6:
        if (l_U270)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                return 1;
                break;
                case 1:
                return 3;
                break;
            }
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                return 5;
                break;
                case 1:
                return 2;
                break;
            }
        }
        break;
        case 1:
        if (l_U270)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                return 2;
                break;
                case 1:
                return 5;
                break;
            }
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                return 3;
                break;
                case 1:
                return 4;
                break;
            }
        }
        break;
        case 2:
        if (l_U270)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                return 5;
                break;
                case 1:
                return 6;
                break;
            }
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                return 1;
                break;
                case 1:
                return 3;
                break;
            }
        }
        break;
        case 3:
        if (l_U270)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                return 1;
                break;
                case 1:
                return 2;
                break;
            }
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                return 4;
                break;
                case 1:
                return 6;
                break;
            }
        }
        break;
        case 4:
        if (l_U270)
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                return 3;
                break;
                case 1:
                return 1;
                break;
            }
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                return 6;
                break;
                case 1:
                return 5;
                break;
            }
        }
        break;
        case 5:
        if (l_U270)
        {
            return 6;
        }
        else
        {
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                return 2;
                break;
                case 1:
                return 1;
                break;
            }
        }
        break;
    }
    SCRIPT_ASSERT( "GET_NEXT_PATROL_POINT - returning null value" );
    return -1;
}

vector sub_13638(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return vector( -477.53300000, 156.73000000, 6.55090000);
        break;
        case 2:
        return vector( -481.89720000, 147.04190000, 6.55070000);
        break;
        case 3:
        return vector( -480.67240000, 165.78080000, 10.61200000);
        break;
        case 4:
        return vector( -469.48400000, 159.34640000, 8.66889900);
        break;
        case 5:
        return vector( -477.60400000, 142.40070000, 6.55290000);
        break;
        case 6:
        return vector( -468.48100000, 140.44260000, 8.85910100);
        break;
    }
    SCRIPT_ASSERT( "GET_LOCATION_COORDS - invalid location" );
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

float sub_13950(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 129.90300000;
        break;
        case 2:
        return 104.42500000;
        break;
        case 3:
        return 184.52100000;
        break;
        case 4:
        return 30.37750000;
        break;
        case 5:
        return 90.00000000;
        break;
        case 6:
        return 69.00000000;
        break;
    }
    SCRIPT_ASSERT( "GET_LOCATION_COORDS - invalid location" );
    return 0.00000000;
}

void sub_14277(unknown uParam0, boolean bParam1)
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

string sub_14467(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return "EECLJ_BARA";
        break;
        case 2:
        return "EECLJ_DANC";
        break;
        case 3:
        return "EECLJ_VIPR";
        break;
        case 4:
        return "EECLJ_WASH";
        break;
        case 5:
        return "EECLJ_BACK";
        break;
        case 6:
        return "EECLJ_HALL";
        break;
    }
    SCRIPT_ASSERT( "GET_GOTO_DIALOGUE - invalid location" );
    return "";
}

void sub_14728(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_14779( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_14779(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_15075(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_15096( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_15096(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_10577( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_15316(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_10676( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_10676( "\n speech is not playing" );
    }
    return 0;
}

int sub_15620(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_6419( uParam0, uParam1 ))
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

int sub_16061()
{
    if (g_U560 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_16097()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

void sub_16907()
{
    if (l_U441 == 0)
    {
        if (NOT (IS_CHAR_INJURED( l_U600 )))
        {
            CLEAR_CHAR_TASKS( l_U600 );
            OPEN_SEQUENCE_TASK( ref l_U680 );
            TASK_PLAY_ANIM( 0, "drunk_hassle_guy_intro", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "drunk_hassle_guy_loop", "MISSCLUB_MGMT", 8.00000000, 1, 0, 0, 0, 0 );
            CLOSE_SEQUENCE_TASK( l_U680 );
            TASK_PERFORM_SEQUENCE( l_U600, l_U680 );
            CLEAR_SEQUENCE_TASK( l_U680 );
            l_U491 = 1;
        }
    }
    if (l_U441 == 1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
        CREATE_OBJECT( -71916080, 65055, 144, 6, ref l_U287, 1 );
        ATTACH_OBJECT_TO_PED( l_U287, l_U600, 1232, 0.06800000, 0.04000000, 0.02500000, 0.00000000, 0.00000000, 0.00000000, 0 );
        if (NOT (IS_CHAR_INJURED( l_U600 )))
        {
            CLEAR_CHAR_TASKS( l_U600 );
            if (l_U453 == 0)
            {
                TASK_PLAY_ANIM( l_U600, "m_drunk_a", "MISSCLUB_MGMT", 8.00000000, 1, 1, 1, 0, 0 );
            }
            else
            {
                TASK_PLAY_ANIM( l_U600, "m_drunk_b", "MISSCLUB_MGMT", 8.00000000, 1, 1, 1, 0, 0 );
            }
        }
    }
    if (l_U441 == 2)
    {
        if (NOT (IS_CHAR_INJURED( l_U600 )))
        {
            CLEAR_CHAR_TASKS( l_U600 );
            OPEN_SEQUENCE_TASK( ref l_U680 );
            TASK_PLAY_ANIM( 0, "M_drugdeal__dealer", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "M_drugdeal__dealer_loop", "MISSCLUB_MGMT", 8.00000000, 1, 0, 0, 0, 0 );
            CLOSE_SEQUENCE_TASK( l_U680 );
            TASK_PERFORM_SEQUENCE( l_U600, l_U680 );
            CLEAR_SEQUENCE_TASK( l_U680 );
            l_U491 = 1;
        }
    }
    if (l_U441 == 3)
    {
        if (NOT (IS_CHAR_INJURED( l_U600 )))
        {
            CLEAR_CHAR_TASKS( l_U600 );
            OPEN_SEQUENCE_TASK( ref l_U680 );
            TASK_PLAY_ANIM( 0, "Agro_Intro_A", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Agro_Loop_A", "MISSCLUB_MGMT", 8.00000000, 1, 0, 0, 0, 0 );
            CLOSE_SEQUENCE_TASK( l_U680 );
            TASK_PERFORM_SEQUENCE( l_U600, l_U680 );
            CLEAR_SEQUENCE_TASK( l_U680 );
            l_U491 = 1;
        }
    }
    if (l_U441 == 4)
    {
        if (NOT (IS_CHAR_INJURED( l_U600 )))
        {
            CLEAR_CHAR_TASKS( l_U600 );
            OPEN_SEQUENCE_TASK( ref l_U680 );
            TASK_PLAY_ANIM( 0, "DRUNK_HASSLE_WAITRESS_INTRO", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "DRUNK_HASSLE_WAITRESS_LOOP", "MISSCLUB_MGMT", 8.00000000, 1, 0, 0, 0, 0 );
            CLOSE_SEQUENCE_TASK( l_U680 );
            TASK_PERFORM_SEQUENCE( l_U600, l_U680 );
            CLEAR_SEQUENCE_TASK( l_U680 );
            l_U491 = 1;
        }
    }
    if (l_U441 == 0)
    {
        if (NOT (IS_CHAR_INJURED( l_U601 )))
        {
            CLEAR_CHAR_TASKS( l_U601 );
            OPEN_SEQUENCE_TASK( ref l_U680 );
            TASK_PLAY_ANIM( 0, "drunk_hassle_girl_intro", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "drunk_hassle_girl_loop", "MISSCLUB_MGMT", 8.00000000, 1, 1, 1, 0, 0 );
            CLOSE_SEQUENCE_TASK( l_U680 );
            TASK_PERFORM_SEQUENCE( l_U601, l_U680 );
            CLEAR_SEQUENCE_TASK( l_U680 );
            l_U492 = 1;
        }
    }
    if (l_U441 == 2)
    {
        if (NOT (IS_CHAR_INJURED( l_U601 )))
        {
            CLEAR_CHAR_TASKS( l_U601 );
            TASK_PLAY_ANIM( l_U601, "M_drugdeal__buyer", "MISSCLUB_MGMT", 8.00000000, 1, 0, 0, 0, 0 );
            l_U492 = 1;
        }
    }
    if (l_U441 == 3)
    {
        if (NOT (IS_CHAR_INJURED( l_U601 )))
        {
            CLEAR_CHAR_TASKS( l_U601 );
            OPEN_SEQUENCE_TASK( ref l_U680 );
            TASK_PLAY_ANIM( 0, "Agro_Intro_B", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "Agro_Loop_B", "MISSCLUB_MGMT", 8.00000000, 1, 0, 0, 0, 0 );
            CLOSE_SEQUENCE_TASK( l_U680 );
            TASK_PERFORM_SEQUENCE( l_U601, l_U680 );
            CLEAR_SEQUENCE_TASK( l_U680 );
            l_U492 = 1;
        }
    }
    if (l_U441 == 4)
    {
        if (NOT (IS_CHAR_INJURED( l_U601 )))
        {
            CLEAR_CHAR_TASKS( l_U601 );
            OPEN_SEQUENCE_TASK( ref l_U680 );
            TASK_PLAY_ANIM( 0, "HASSLED_WAITRESS_INTRO", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
            TASK_PLAY_ANIM( 0, "HASSLED_WAITRESS_LOOP", "MISSCLUB_MGMT", 8.00000000, 1, 0, 0, 0, 0 );
            CLOSE_SEQUENCE_TASK( l_U680 );
            TASK_PERFORM_SEQUENCE( l_U601, l_U680 );
            CLEAR_SEQUENCE_TASK( l_U680 );
            l_U492 = 1;
        }
    }
    return;
}

int sub_18980(boolean bParam0)
{
    if ((sub_19138()) || ((IS_SCRIPTED_CONVERSATION_ONGOING()) || ((sub_19079()) || ((((bParam0) AND (sub_19050())) || ((NOT bParam0) AND (sub_18996()))) || (IS_MESSAGE_BEING_DISPLAYED())))))
    {
        return 1;
    }
    return 0;
}

int sub_18996()
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        return 1;
    }
    return 0;
}

void sub_19050()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_19079()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_19138()
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

void sub_19455()
{
    vector vVar2;
    vector vVar5;
    float fVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;

    vVar2 = {-474.26910000, 149.53010000, 11.37636000};
    vVar5 = {-19.84572000, -0.00000100, -143.65910000};
    fVar8 = 48.59999000;
    l_U335 = "CS_SECRM";
    GET_TIME_OF_DAY( ref l_U613, ref l_U614 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 50000, ref l_U615 );
    GET_GAME_TIMER( ref l_U617 );
    CREATE_CAM( 14, ref uVar12 );
    SET_CAM_POS( uVar12, vVar2.x, vVar2.y, vVar2.z );
    SET_CAM_ROT( uVar12, vVar5.x, vVar5.y, vVar5.z );
    SET_CAM_FOV( uVar12, 85.50017000 );
    CREATE_CAM( 14, ref uVar13 );
    SET_CAM_POS( uVar13, vVar2.x, vVar2.y, vVar2.z );
    SET_CAM_ROT( uVar13, vVar5.x, vVar5.y, vVar5.z );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_ACTIVE( uVar12, 1 );
    SET_CAM_PROPAGATE( uVar12, 1 );
    WAIT( 0 );
    SET_CHAR_COMPONENT_VARIATION( g_U29971[g_U30198]._fU12, 1, 1, 0 );
    GET_GAME_VIEWPORT_ID( ref uVar14 );
    SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar14, "E2_MaisonsecurRoom" );
    if (g_U30198 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
        {
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
            {
                SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, -473.00100000, 145.72020000, 8.91000000 );
                TASK_PLAY_ANIM( g_U29971[g_U30198]._fU12, "Joni_chat_a", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
                GET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                POINT_CAM_AT_COORD( uVar13, uVar9._fU0, uVar9._fU4, uVar9._fU8 + 0.50000000 );
            }
        }
    }
    SET_TIMECYCLE_MODIFIER( "death" );
    CLEAR_PRINTS();
    CLEAR_HELP();
    SET_WIDESCREEN_BORDERS( 1 );
    uVar16 = GET_SOUND_ID();
    PLAY_SOUND_FRONTEND( uVar16, "BG2_DROPPING_IN_CAMERA_BACKGROUND" );
    SETTIMERB( 0 );
    if (g_U30198 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
        {
            sub_10502( "EECLJ_JCHT", ref l_U681, 7, 1 );
        }
    }
    l_U332 = 0;
    while (l_U290)
    {
        sub_20204();
        switch (l_U332)
        {
            case 0:
            if (TIMERB() > 6500)
            {
                l_U332++;
            }
            break;
            case 1:
            CLEAR_TIMECYCLE_MODIFIER();
            UNPOINT_CAM( uVar12 );
            STOP_SOUND( uVar16 );
            RELEASE_SOUND_ID( uVar16 );
            SET_CAM_ACTIVE( uVar12, 0 );
            SET_CAM_PROPAGATE( uVar12, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            GET_GAME_VIEWPORT_ID( ref uVar14 );
            CLEAR_ROOM_FOR_VIEWPORT( uVar14 );
            SET_CAM_BEHIND_PED( sub_1955() );
            l_U290 = 0;
            break;
        }
        WAIT( 0 );
    }
    SET_OBJECT_COORDINATES( l_U286, -473.08840000, 145.66880000, 8.85860000 );
    SET_OBJECT_HEADING( l_U286, 294.49840000 - 180 );
    if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
    {
        SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, -473.10700000, 145.81830000, 8.90600000 );
        SET_CHAR_HEADING( g_U29971[g_U30198]._fU12, 333.00000000 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U29971[g_U30198]._fU12, "joni_idle", "MISSCLUB_MGMT", 4.00000000, 1, 0, 0, 0, 0 );
    }
    SET_CHAR_COMPONENT_VARIATION( g_U29971[g_U30198]._fU12, 1, 0, 0 );
    l_U290 = 1;
    return;
}

void sub_20204()
{
    int iVar2;
    float fVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    string sVar7;

    GET_GAME_TIMER( ref iVar2 );
    iVar2 -= l_U617;
    SET_WIDESCREEN_FORMAT( 0 );
    DRAW_SPRITE( l_U622, 0.50000000, 0.50000000, 0.50000000, 0.50000000, 0.00000000, 255, 255, 255, 255 );
    SET_WIDESCREEN_FORMAT( 1 );
    if (GET_IS_WIDESCREEN())
    {
        l_U623 = 0.15000000;
        l_U624 = 0.05000000;
        l_U625 = 0.00000000;
        l_U626 = 0.90000000;
    }
    else
    {
        l_U623 = 0.15000000;
        l_U624 = 0.05000000;
        l_U625 = 0.13000000;
        l_U626 = 0.90000000;
    }
    sub_20412( 0, 0.00000000, 1.00000000, 0, 1, 0, 0, 0, 255 );
    SET_TEXT_SCALE( 0.50000000, 0.50000000 );
    DISPLAY_TEXT( l_U625 - (l_U623 / 2.10000000), (1.00000000 - l_U626) - (l_U624 / 4.00000000), l_U335 );
    l_U453 = 0;
    fVar3 = 0.02000000;
    if (GET_IS_WIDESCREEN())
    {
        l_U623 = 0.23000000;
        l_U624 = 0.05000000;
        l_U625 = 0.05000000;
        l_U626 = 0.90000000;
    }
    else
    {
        l_U623 = 0.23000000;
        l_U624 = 0.05000000;
        l_U625 = 0.18000000;
        l_U626 = 0.90000000;
    }
    DRAW_RECT( l_U625, l_U626, l_U623, l_U624, 0, 0, 0, 255 );
    while (l_U453 < 11)
    {
        iVar4 = l_U615 + iVar2;
        iVar5 = iVar4 / 1000;
        iVar6 = (iVar4 mod 1000) / 10;
        sub_20412( 0, 0.00000000, 1.00000000, 0, 1, 0, 0, 0, 255 );
        SET_TEXT_SCALE( 0.50000000, 0.50000000 );
        sVar7 = "CS_CAMCOL";
        switch (l_U453)
        {
            case 0:
            sVar7 = sub_20975( l_U613 / 10 );
            break;
            case 1:
            sVar7 = sub_20975( l_U613 mod 10 );
            break;
            case 3:
            sVar7 = sub_20975( l_U614 / 10 );
            break;
            case 4:
            sVar7 = sub_20975( l_U614 mod 10 );
            break;
            case 6:
            sVar7 = sub_20975( iVar5 / 10 );
            break;
            case 7:
            sVar7 = sub_20975( iVar5 mod 10 );
            break;
            case 9:
            sVar7 = sub_20975( iVar6 / 10 );
            break;
            case 10:
            sVar7 = sub_20975( iVar6 mod 10 );
            break;
        }
        DISPLAY_TEXT( (l_U625 - (l_U623 / 2.10000000)) + (fVar3 * l_U453), l_U626 - (l_U624 / 4.00000000), sVar7 );
        l_U453++;
    }
    SET_WIDESCREEN_FORMAT( 0 );
    l_U618 += 0.00200000;
    if (l_U618 > 0.08000000)
    {
        l_U618 = 0.00000000;
    }
    if ((iVar2 - l_U627) > 100)
    {
        DRAW_SPRITE( l_U621, 0.50000000, 0.50000000 + l_U618, 1.00000000, 1.10000000, 0.00000000, 255, 255, 255, 255 );
        l_U619 = 1;
        GET_GAME_TIMER( ref l_U627 );
    }
    else
    {
        DRAW_SPRITE( l_U621, 0.50000000, 0.50000000 + l_U618, 1.00000000, 1.10000000, 0.00000000, 0, 0, 0, 255 );
        l_U619 = 0;
    }
    return;
}

void sub_20412(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_20975(unknown uParam0)
{
    string Result;

    Result = "CS_CAM0";
    switch (uParam0)
    {
        case 1:
        Result = "CS_CAM1";
        break;
        case 2:
        Result = "CS_CAM2";
        break;
        case 3:
        Result = "CS_CAM3";
        break;
        case 4:
        Result = "CS_CAM4";
        break;
        case 5:
        Result = "CS_CAM5";
        break;
        case 6:
        Result = "CS_CAM6";
        break;
        case 7:
        Result = "CS_CAM7";
        break;
        case 8:
        Result = "CS_CAM8";
        break;
        case 9:
        Result = "CS_CAM9";
        break;
    }
    return Result;
}

void sub_22173(unknown uParam0)
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

void sub_22318(int iParam0, unknown uParam1)
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

void sub_22666()
{
    unknown uVar2;

    if (l_U271)
    {
        GET_FRAME_TIME( ref uVar2 );
        l_U481 += uVar2;
        l_U440 = 10 - (ROUND( l_U481 ));
        PRINT_HELP_FOREVER_WITH_NUMBER( "GET_BACK", l_U440 );
        if (NOT l_U383)
        {
            if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
            {
                sub_10502( "E2CL_WALK", ref l_U681, 7, 1 );
            }
            l_U383 = 1;
        }
        if (l_U440 == 0)
        {
            PRINT_NOW( "ENDEDR", 7500, 0 );
            sub_995();
            sub_1929();
        }
        else if (IS_PLAYER_PLAYING( sub_903() ))
        {
            if (sub_15620( sub_1955(), 1, 0 ))
            {
                l_U271 = 0;
            }
        }
    }
    else
    {
        l_U383 = 0;
        if (IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED( "GET_BACK", l_U440 ))
        {
            CLEAR_HELP();
        }
        if (IS_PLAYER_PLAYING( sub_903() ))
        {
            if (NOT (sub_15620( sub_1955(), 1, 1 )))
            {
                if (NOT l_U271)
                {
                    l_U481 = -0.50000000;
                    l_U271 = 1;
                }
            }
        }
    }
    return;
}

void sub_23632(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( ref l_U442 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U688[0] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[0], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U688[0], 0.66630000, 0.85010000, 0.66160000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U688[0], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[0], uParam0 );
        POINT_CAM_AT_PED( l_U688[0], uParam0 );
        SET_CAM_POINT_OFFSET( l_U688[0], 0.07780000, 0.05190000, 0.53340000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U688[0], 1 );
    }
    SET_CAM_FOV( l_U688[0], 33.90000000 );
    SET_CAM_ACTIVE( l_U688[0], 1 );
    CREATE_CAM( 14, ref l_U688[1] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[1], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U688[1], 0.40350000, 0.96570000, 0.65750010 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U688[1], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[1], uParam0 );
        POINT_CAM_AT_PED( l_U688[1], uParam0 );
        SET_CAM_POINT_OFFSET( l_U688[1], 0.03820000, 0.10410000, 0.52920000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U688[1], 1 );
    }
    SET_CAM_FOV( l_U688[1], 33.90000000 );
    SET_CAM_ACTIVE( l_U688[1], 1 );
    CREATE_CAM( 14, ref l_U688[2] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[2], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U688[2], 0.14070000, 1.08120000, 0.65340000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U688[2], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[2], uParam0 );
        POINT_CAM_AT_PED( l_U688[2], uParam0 );
        SET_CAM_POINT_OFFSET( l_U688[2], -0.00140000, 0.15630000, 0.52500000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U688[2], 1 );
    }
    SET_CAM_FOV( l_U688[2], 33.90000000 );
    SET_CAM_ACTIVE( l_U688[2], 1 );
    CREATE_CAM( 14, ref l_U688[3] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[3], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U688[3], -0.12220000, 1.19680000, 0.64930000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U688[3], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U688[3], uParam0 );
        POINT_CAM_AT_PED( l_U688[3], uParam0 );
        SET_CAM_POINT_OFFSET( l_U688[3], -0.04090000, 0.20840000, 0.52090000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U688[3], 1 );
    }
    SET_CAM_FOV( l_U688[3], 33.90000000 );
    SET_CAM_ACTIVE( l_U688[3], 1 );
    CREATE_CAM( 25, ref l_U687 );
    SET_CAM_SPLINE_DURATION( l_U687, 5000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U687, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U687, 0 );
    ADD_CAM_SPLINE_NODE( l_U687, l_U688[0] );
    ADD_CAM_SPLINE_NODE( l_U687, l_U688[1] );
    ADD_CAM_SPLINE_NODE( l_U687, l_U688[2] );
    ADD_CAM_SPLINE_NODE( l_U687, l_U688[3] );
    SET_CAM_ACTIVE( l_U687, 1 );
    SET_CAM_PROPAGATE( l_U687, 1 );
    return;
}

void sub_24951()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;

    sub_3159( 1 );
    if (DOES_CAM_EXIST( l_U422 ))
    {
        GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar3, ref uVar4, ref iVar5, ref iVar6 );
        if (NOT IS_LOOK_INVERTED())
        {
            iVar6 *= -1;
        }
        if (NOT IS_USING_CONTROLLER())
        {
            GET_MOUSE_INPUT( ref iVar5, ref iVar6 );
            iVar6 *= -1;
        }
        if ((iVar6 < 65508) || (iVar6 > 28))
        {
            fVar2 = TO_FLOAT( iVar6 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U485;
            if (iVar6 < 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U484 += fVar2;
            if (l_U484 < l_U486)
            {
                l_U484 = l_U486;
            }
            if (l_U484 > l_U487)
            {
                l_U484 = l_U487;
            }
        }
        if ((iVar5 < 65508) || (iVar5 > 28))
        {
            fVar2 = TO_FLOAT( iVar5 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U485;
            if (iVar5 > 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U483 += fVar2;
            if (l_U483 < l_U488)
            {
                l_U483 = l_U488;
            }
            if (l_U483 > l_U489)
            {
                l_U483 = l_U489;
            }
        }
        sub_25376( sub_1955(), ref l_U422, l_U484, 0.00000000, l_U483 );
        SET_CAM_FOV( l_U422, l_U482 );
        SET_CAM_ATTACH_OFFSET( l_U422, l_U565._fU0, l_U565._fU4, l_U565._fU8 );
    }
    else if (DOES_CAM_EXIST( l_U687 ))
    {
        sub_3183();
    }
    BEGIN_CAM_COMMANDS( ref l_U442 );
    if (DOES_CAM_EXIST( l_U422 ))
    {
        DESTROY_CAM( l_U422 );
    }
    CREATE_CAM( 14, ref l_U422 );
    ATTACH_CAM_TO_PED( l_U422, sub_1955() );
    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U422, 1 );
    SET_CAM_NEAR_CLIP( l_U422, 0.01000000 );
    l_U483 = 0.00000000;
    l_U484 = -9.00000000;
    sub_25376( sub_1955(), ref l_U422, l_U484, 0.00000000, l_U483 );
    SET_CAM_FOV( l_U422, l_U482 );
    SET_CAM_ATTACH_OFFSET( l_U422, l_U565._fU0, l_U565._fU4, l_U565._fU8 );
    SET_CAM_ACTIVE( l_U422, 1 );
    SET_CAM_PROPAGATE( l_U422, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (IS_PLAYER_PLAYING( sub_903() ))
    {
        FREEZE_CHAR_POSITION( sub_1955(), 1 );
        SET_CHAR_VISIBLE( sub_1955(), 0 );
    }
    return;
}

void sub_25376(unknown uParam0, unknown uParam1, vector vParam2)
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
            vVar8.z = l_U454;
            vVar8 = {vVar8 + vParam2};
            SET_CAM_ROT( (uParam1^), vVar8.x, vVar8.y, vVar8.z );
        }
    }
    return;
}

void sub_26070(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

void sub_26135()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    boolean bVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    float fVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    bVar8 = false;
    if (l_U434 == 3)
    {
        l_U425 = {-479.63180000, 165.65970000, 13.85420000};
        l_U428 = {-32.24043000, 0.00000000, 116.24570000};
        l_U431 = 71.70003000;
        l_U335 = "CS_CAMVIP";
    }
    if (l_U434 == 5)
    {
        l_U425 = {-477.76490000, 139.38500000, 10.72685000};
        l_U428 = {-38.08840000, -0.00000100, 43.69609000};
        l_U431 = 66.29997000;
        l_U335 = "CS_CAMBAC";
    }
    if (l_U434 == 2)
    {
        l_U425 = {-488.15500000, 157.56660000, 13.16867000};
        l_U428 = {-33.21974000, 0.00000000, -142.15070000};
        l_U431 = 56.69997000;
        l_U335 = "CS_CAMDAN";
    }
    if (l_U434 == 1)
    {
        l_U425 = {-476.98460000, 157.65630000, 10.17931000};
        l_U428 = {-31.05078000, -0.00000000, 114.56620000};
        l_U431 = 51.29998000;
        l_U335 = "CS_CAMBAR";
    }
    if (l_U434 == 6)
    {
        l_U425 = {-468.27300000, 140.52110000, 11.72332000};
        l_U428 = {-29.81530000, -0.00000000, 46.70243000};
        l_U431 = 65.99997000;
        l_U335 = "CS_CAMENT";
    }
    if (l_U434 == 4)
    {
        l_U425 = {-471.01770000, 156.56260000, 11.23409000};
        l_U428 = {-21.72942000, 0.00000000, -38.08142000};
        l_U431 = 55.19997000;
        l_U335 = "CS_CAMTOI";
    }
    BEGIN_CAM_COMMANDS( ref l_U442 );
    GET_TIME_OF_DAY( ref l_U613, ref l_U614 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 50000, ref l_U615 );
    GET_GAME_TIMER( ref l_U617 );
    CREATE_CAM( 14, ref uVar9 );
    SET_CAM_POS( uVar9, l_U425._fU0, l_U425._fU4, l_U425._fU8 );
    SET_CAM_ROT( uVar9, l_U428._fU0, l_U428._fU4, l_U428._fU8 );
    SET_CAM_FOV( uVar9, l_U431 );
    CREATE_CAM( 14, ref uVar10 );
    SET_CAM_POS( uVar10, l_U425._fU0, l_U425._fU4, l_U425._fU8 );
    SET_CAM_ROT( uVar10, l_U428._fU0, l_U428._fU4, l_U428._fU8 );
    if (DOES_CHAR_EXIST( l_U600 ))
    {
        GET_CHAR_COORDINATES( l_U600, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        POINT_CAM_AT_COORD( uVar10, uVar2._fU0, uVar2._fU4, uVar2._fU8 + 0.50000000 );
    }
    SET_TIMECYCLE_MODIFIER( "death" );
    if (l_U434 == 4)
    {
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_ACTIVE( uVar9, 1 );
        SET_CAM_PROPAGATE( uVar9, 1 );
        WAIT( 0 );
        GET_GAME_VIEWPORT_ID( ref uVar11 );
        SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar11, "E2_MaisonRoomt03" );
    }
    else
    {
        sub_27043( uVar9, 1 );
    }
    l_U332 = 0;
    CLEAR_PRINTS();
    CLEAR_HELP();
    SET_WIDESCREEN_BORDERS( 1 );
    uVar13 = GET_SOUND_ID();
    PLAY_SOUND_FRONTEND( uVar13, "BG2_DROPPING_IN_CAMERA_BACKGROUND" );
    SETTIMERB( 0 );
    if (l_U441 == 0)
    {
        sub_10502( "E2CLJ_PERV", ref l_U681, 7, 1 );
    }
    if (l_U441 == 1)
    {
        sub_10502( "E2CLJ_DRUNK", ref l_U681, 7, 1 );
    }
    if (l_U441 == 2)
    {
        sub_10502( "E2CLJ_DEAL", ref l_U681, 7, 1 );
    }
    if (l_U441 == 3)
    {
        sub_10502( "E2CLJ_FGHT", ref l_U681, 7, 1 );
    }
    if (l_U441 == 4)
    {
        sub_10502( "E2CLJ_NPAY", ref l_U681, 7, 1 );
    }
    while (l_U331 == 1)
    {
        sub_20204();
        switch (l_U332)
        {
            case 0:
            if (((TIMERB() < 7000) AND (TIMERB() > 4750)) || ((TIMERB() < 4000) AND (TIMERB() > 2750)))
            {
                if (TIMERB() > 3750)
                {
                    fVar16 = 0.30000000;
                }
                else
                {
                    fVar16 = 0.60000000;
                }
                GET_CAM_FOV( uVar9, ref uVar14 );
                GET_FRAME_TIME( ref uVar15 );
                SET_CAM_FOV( uVar9, uVar14 - ((fVar16 * 30.00000000) * uVar15) );
            }
            if ((TIMERB() < 4000) AND (TIMERB() > 2250))
            {
                GET_CAM_ROT( uVar10, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
                sub_27619( ref l_U428._fU8, uVar17._fU8, 0.70000000 );
                sub_27619( ref l_U428._fU0, uVar17._fU0, 0.70000000 );
                SET_CAM_ROT( uVar9, l_U428._fU0, l_U428._fU4, l_U428._fU8 );
            }
            if ((TIMERB() < 6500) AND (TIMERB() > 4750))
            {
                GET_CAM_ROT( uVar10, ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
                sub_27619( ref l_U428._fU0, uVar17._fU0, 0.20000000 );
                sub_27619( ref l_U428._fU8, uVar17._fU8, 0.20000000 );
                SET_CAM_ROT( uVar9, l_U428._fU0, l_U428._fU4, l_U428._fU8 );
            }
            if (((TIMERB() < 6850) AND (TIMERB() > 4750)) || ((TIMERB() < 4350) AND (TIMERB() > 2250)))
            {
                if (iVar12 == 0)
                {
                    iVar12 = GET_SOUND_ID();
                    PLAY_SOUND_FRONTEND( iVar12, "BG2_DROPPING_IN_CAMERA_ZOOM" );
                }
            }
            else if (iVar12 != 0)
            {
                STOP_SOUND( iVar12 );
                RELEASE_SOUND_ID( iVar12 );
                iVar12 = 0;
            }
            if (TIMERB() > 6500)
            {
                if (NOT bVar8)
                {
                    if (g_U30198 != -1)
                    {
                        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
                        {
                            sub_10502( "EECLJ_COOL", ref l_U681, 7, 1 );
                            bVar8 = true;
                        }
                    }
                }
            }
            if (TIMERB() > 7500)
            {
                l_U332++;
            }
            break;
            case 1:
            CLEAR_TIMECYCLE_MODIFIER();
            UNPOINT_CAM( uVar9 );
            STOP_SOUND( uVar13 );
            RELEASE_SOUND_ID( uVar13 );
            SET_CAM_ACTIVE( uVar9, 0 );
            SET_CAM_PROPAGATE( uVar9, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref l_U442 );
            SET_CAM_BEHIND_PED( sub_1955() );
            l_U331 = 0;
            break;
        }
        WAIT( 0 );
    }
    l_U331 = 1;
    return;
}

void sub_27043(unknown uParam0, unknown uParam1)
{
    SET_CAM_ACTIVE( uParam0, uParam1 );
    SET_CAM_PROPAGATE( uParam0, uParam1 );
    ACTIVATE_SCRIPTED_CAMS( uParam1, uParam1 );
    return;
}

void sub_27619(unknown uParam0, float fParam1, unknown uParam2)
{
    unknown uVar5;
    float fVar6;

    if ((uParam0^) != fParam1)
    {
        GET_FRAME_TIME( ref uVar5 );
        fVar6 = (uParam2 * 30.00000000) * uVar5;
        if (((uParam0^) - fParam1) > fVar6)
        {
            (uParam0^) -= fVar6;
        }
        else if (((uParam0^) - fParam1) < -fVar6)
        {
            (uParam0^) += fVar6;
        }
        else
        {
            (uParam0^) = fParam1;
        }
    }
    return;
}

int sub_28461(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_28870()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (sub_28884( l_U435 ))
    {
        switch (l_U435)
        {
            case 4:
            l_U441 = 1;
            break;
            case 6:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                l_U441 = 1;
                break;
                case 1:
                l_U441 = 4;
                break;
            }
            break;
            default:
            GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U453 );
            switch (l_U453)
            {
                case 0:
                l_U441 = 3;
                break;
                case 1:
                l_U441 = 2;
                break;
                case 2:
                l_U441 = 0;
                break;
            }
            break;
        }
        sub_29647( l_U562, 1.50000000, 1 );
        GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref l_U453 );
        if (l_U453 == 0)
        {
            CREATE_CHAR( 26, g_U30218, l_U562._fU0, l_U562._fU4, l_U562._fU8, ref l_U603, 1 );
            SET_CHAR_HEADING( l_U603, l_U480 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U603, l_U596 );
            SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U603, 1 );
        }
        else
        {
            CREATE_CHAR( 26, g_U30219, l_U562._fU0, l_U562._fU4, l_U562._fU8, ref l_U603, 1 );
            SET_CHAR_HEADING( l_U603, l_U480 );
            SET_ROOM_FOR_CHAR_BY_NAME( l_U603, l_U596 );
            SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U603, 1 );
        }
        if (NOT (DOES_CHAR_EXIST( l_U604 )))
        {
            if ((l_U441 == 4) || (l_U441 == 0))
            {
                CREATE_CHAR( 26, g_U30220, l_U562._fU0 + 0.60000000, l_U562._fU4 + 0.60000000, l_U562._fU8, ref l_U604, 1 );
                SET_CHAR_HEADING( l_U604, l_U480 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U604, l_U596 );
                SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U604, 1 );
            }
            if (l_U441 == 2)
            {
                if (l_U453 == 0)
                {
                    CREATE_CHAR( 26, g_U30219, l_U562._fU0 + 1.10000000, l_U562._fU4 + 0.50000000, l_U562._fU8, ref l_U604, 1 );
                }
                else
                {
                    CREATE_CHAR( 26, g_U30218, l_U562._fU0 + 1.10000000, l_U562._fU4 + 0.50000000, l_U562._fU8, ref l_U604, 1 );
                }
                SET_CHAR_HEADING( l_U604, l_U480 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U604, l_U596 );
                SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U604, 1 );
            }
            if (l_U441 == 3)
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U603, 0.06100000, 0.85100000, 0, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                GET_GROUND_Z_FOR_3D_COORD( uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U315 );
                if (l_U453 == 0)
                {
                    CREATE_CHAR( 26, g_U30219, uVar2._fU0, uVar2._fU4, l_U315, ref l_U604, 1 );
                }
                else
                {
                    CREATE_CHAR( 26, g_U30218, uVar2._fU0, uVar2._fU4, l_U315, ref l_U604, 1 );
                }
                SET_CHAR_HEADING( l_U604, l_U480 );
                SET_ROOM_FOR_CHAR_BY_NAME( l_U604, l_U596 );
                SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( l_U604, 1 );
            }
        }
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U603, 1 );
        if (l_U441 == 1)
        {
            if (NOT (IS_CHAR_INJURED( l_U603 )))
            {
                TASK_PLAY_ANIM( l_U603, "male_stand_chat", "MISSCLUB_MGMT", 8.00000000, 1, 1, 1, 0, 0 );
            }
        }
        if (DOES_CHAR_EXIST( l_U604 ))
        {
            if (NOT (IS_CHAR_DEAD( l_U604 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U604, 1 );
                sub_3525( l_U604, l_U603 );
                sub_3525( l_U603, l_U604 );
                if (NOT (IS_CHAR_INJURED( l_U603 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U604 )))
                    {
                        TASK_CHAT_WITH_CHAR( l_U603, l_U604, 1, 1 );
                        TASK_CHAT_WITH_CHAR( l_U604, l_U603, 0, 1 );
                    }
                }
                FREEZE_CHAR_POSITION( l_U603, 1 );
                FREEZE_CHAR_POSITION( l_U604, 1 );
            }
        }
    }
    return;
}

int sub_28884(int iParam0)
{
    if (iParam0 == 0)
    {
        iParam0 = 6;
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, 3, ref l_U453 );
    if (iParam0 == 4)
    {
        if (NOT (IS_CHAR_IN_AREA_3D( sub_1955(), -471.33800000, 156.27170000, 7.92400000, -468.18800000, 168.52170000, 11.67400000, 0 )))
        {
            l_U480 = l_U456[iParam0];
            l_U562 = {l_U496[iParam0]};
            l_U596 = l_U572[iParam0];
            return 1;
        }
    }
    else
    {
        switch (l_U453)
        {
            case 0:
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1955(), l_U496[iParam0]._fU0, l_U496[iParam0]._fU4, l_U496[iParam0]._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )))
            {
                l_U480 = l_U456[iParam0];
                l_U562 = {l_U496[iParam0]};
                l_U596 = l_U572[iParam0];
                return 1;
            }
            break;
            case 1:
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1955(), l_U518[iParam0]._fU0, l_U518[iParam0]._fU4, l_U518[iParam0]._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )))
            {
                l_U480 = l_U464[iParam0];
                l_U562 = {l_U518[iParam0]};
                l_U596 = l_U580[iParam0];
                return 1;
            }
            break;
            case 2:
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1955(), l_U540[iParam0]._fU0, l_U540[iParam0]._fU4, l_U540[iParam0]._fU8, 1.50000000, 1.50000000, 1.50000000, 0 )))
            {
                l_U480 = l_U472[iParam0];
                l_U562 = {l_U540[iParam0]};
                l_U596 = l_U588[iParam0];
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_29647(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_29700( uParam0._fU0 - uParam3, uParam0._fU4 - uParam3, uParam0._fU8 - uParam3, uParam0._fU0 + uParam3, uParam0._fU4 + uParam3, uParam0._fU8 + uParam3, uParam4 );
    return;
}

void sub_29700(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_31495()
{
    l_U393 = 0;
    switch (l_U441)
    {
        case 0:
        switch (l_U393)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                SAY_AMBIENT_SPEECH( l_U600, "Club_Game_Perv", 1, 0, 1 );
                l_U393++;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U600 )))
                {
                    l_U393++;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U601 )))
            {
                SAY_AMBIENT_SPEECH( l_U601, "Club_Game_Perv_Reject", 1, 0, 1 );
                l_U393 = -1;
            }
            break;
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U600 )))
        {
            SAY_AMBIENT_SPEECH( l_U600, "Club_Game_Drunkard", 1, 0, 2 );
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U600 )))
        {
            SAY_AMBIENT_SPEECH( l_U600, "Club_Game_Deal_Drug", 1, 0, 1 );
        }
        break;
        case 3: break;
        case 4:
        switch (l_U393)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                SAY_AMBIENT_SPEECH( l_U600, "Club_Game_Argue", 1, 0, 1 );
                l_U393++;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U600 )))
                {
                    l_U393++;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U601 )))
            {
                SAY_AMBIENT_SPEECH( l_U601, "Club_Game_Argue_Resp", 1, 0, 1 );
                l_U393 = -1;
            }
            break;
        }
        break;
    }
    return;
}

void sub_32341()
{
    float fVar2;

    sub_22173( 1 );
    l_U311 = 0.04700000;
    l_U312 = 1.01800000;
    l_U305 = {sub_32376()};
    l_U308 = {sub_33182()};
    l_U316 = {sub_34005()};
    sub_29647( l_U316, 2, 1 );
    sub_34826( 1 );
    if (NOT (IS_CHAR_INJURED( l_U600 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U600 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
        TASK_PLAY_ANIM( l_U600, "SPOT_Perv_B", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
        SET_CHAR_COLLISION( sub_1955(), 0 );
        FREEZE_CHAR_POSITION( sub_1955(), 1 );
        TASK_PLAY_ANIM( sub_1955(), "SPOT_Perv_A", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
        WAIT( 2 );
        ENABLE_SCENE_STREAMING( 0 );
        BEGIN_CAM_COMMANDS( ref l_U612 );
        SET_USE_HIGHDOF( 1 );
        SET_WIDESCREEN_BORDERS( 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        if (NOT (DOES_CAM_EXIST( l_U611 )))
        {
            CREATE_CAM( 14, ref l_U611 );
        }
        if (NOT (DOES_CAM_EXIST( l_U608 )))
        {
            CREATE_CAM( 3, ref l_U608 );
        }
        if (NOT (DOES_CAM_EXIST( l_U609 )))
        {
            CREATE_CAM( 14, ref l_U609 );
        }
        if (NOT (DOES_CAM_EXIST( l_U610 )))
        {
            CREATE_CAM( 14, ref l_U610 );
        }
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 1 );
        SET_CAM_POS( l_U610, l_U305._fU0, l_U305._fU4, l_U305._fU8 );
        SET_CAM_ROT( l_U610, l_U308._fU0, l_U308._fU4, l_U308._fU8 );
        SET_CAM_FOV( l_U610, sub_35314() );
        SET_CAM_POS( l_U609, l_U305._fU0, l_U305._fU4, l_U305._fU8 );
        SET_CAM_ROT( l_U609, l_U308._fU0, l_U308._fU4, l_U308._fU8 );
        SET_CAM_FOV( l_U609, sub_35314() - 3 );
        SET_CAM_FAR_DOF( l_U610, 5 );
        SET_CAM_FAR_DOF( l_U609, 5 );
        SET_CAM_ACTIVE( l_U608, 1 );
        SET_CAM_PROPAGATE( l_U608, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 3500, 0 );
        if (NOT (IS_CHAR_INJURED( l_U600 )))
        {
            SET_CHAR_COORDINATES_DONT_CLEAR_PLAYER_TASKS( sub_1955(), l_U316._fU0, l_U316._fU4, l_U316._fU8 );
            GET_CHAR_COORDINATES( sub_1955(), ref l_U296._fU0, ref l_U296._fU4, ref l_U296._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1955(), l_U311, l_U312, 0, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1955(), l_U313, l_U314, 0, ref l_U299._fU0, ref l_U299._fU4, ref l_U299._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( l_U302._fU0, l_U302._fU4, l_U302._fU8, ref l_U315 );
            SET_CHAR_COORDINATES( l_U600, l_U302._fU0, l_U302._fU4, l_U315 );
            FREEZE_CHAR_POSITION( l_U600, 1 );
            sub_3525( l_U600, sub_1955() );
            SET_CHAR_COLLISION( l_U600, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U601 )))
    {
        sub_3525( l_U601, sub_1955() );
        CLEAR_CHAR_TASKS( l_U601 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U601 );
    }
    l_U322 = 0;
    WAIT( 0 );
    SETTIMERA( 0 );
    while (l_U321)
    {
        switch (l_U322)
        {
            case 0:
            if (TIMERA() > 500)
            {
                SAY_AMBIENT_SPEECH( sub_1955(), "CLUB_GAME_PERV_LEAVE", 1, 0, 2 );
                l_U322++;
            }
            break;
            case 1:
            if (TIMERA() > 1000)
            {
                SAY_AMBIENT_SPEECH( l_U600, "CLUB_GAME_BEATEN_UP", 1, 0, 2 );
                l_U322++;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U600, "MISSCLUB_MGMT", "SPOT_Perv_B" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U600, "MISSCLUB_MGMT", "SPOT_Perv_B", ref fVar2 );
                    if (fVar2 > 0.75000000)
                    {
                        l_U322++;
                    }
                }
            }
            break;
            case 3:
            l_U322++;
            break;
            case 4:
            l_U322++;
            break;
            case 5:
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            sub_34826( 0 );
            l_U321 = 0;
            break;
        }
        if (sub_36936())
        {
            l_U321 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_CHAR_TASKS( sub_1955() );
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                CLEAR_CHAR_TASKS( l_U600 );
            }
            sub_34826( 0 );
            INCREMENT_INT_STAT( 372, 1 );
            sub_22318( ref l_U681, 0 );
            sub_22173( 0 );
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
        }
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U600 )))
    {
        FREEZE_CHAR_POSITION( l_U600, 0 );
        SET_CHAR_COLLISION( l_U600, 1 );
    }
    SET_CHAR_COLLISION( sub_1955(), 1 );
    FREEZE_CHAR_POSITION( sub_1955(), 0 );
    CLEAR_CHAR_TASKS( sub_1955() );
    END_CAM_COMMANDS( ref l_U612 );
    ENABLE_SCENE_STREAMING( 1 );
    l_U321 = 1;
    return;
}

vector sub_32376()
{
    if (l_U434 == 1)
    {
        if (l_U562._fU0 == l_U496[1]._fU0)
        {
            return vector( -482.11850000, 156.75360000, 8.14605400);
        }
        if (l_U562._fU0 == l_U518[1]._fU0)
        {
            return vector( -482.11850000, 156.75360000, 8.14605400);
        }
        if (l_U562._fU0 == l_U540[1]._fU0)
        {
            return vector( -487.91300000, 160.61970000, 8.28512900);
        }
    }
    if (l_U434 == 2)
    {
        if (l_U562._fU0 == l_U496[2]._fU0)
        {
            return vector( -487.84870000, 151.02020000, 9.33168400);
        }
        if (l_U562._fU0 == l_U518[2]._fU0)
        {
            return vector( -487.72450000, 149.11340000, 7.60669800);
        }
        if (l_U562._fU0 == l_U540[2]._fU0)
        {
            return vector( -487.84870000, 151.02020000, 9.33168400);
        }
    }
    if (l_U434 == 3)
    {
        if (l_U562._fU0 == l_U496[3]._fU0)
        {
            return vector( -487.77610000, 161.32620000, 12.00355000);
        }
        if (l_U562._fU0 == l_U518[3]._fU0)
        {
            return vector( -487.77610000, 161.32620000, 12.00355000);
        }
        if (l_U562._fU0 == l_U540[3]._fU0)
        {
            return vector( -483.70800000, 166.00640000, 11.81454000);
        }
    }
    if (l_U434 == 4)
    {
        return vector( -470.97090000, 163.10660000, 10.38461000);
    }
    if (l_U434 == 5)
    {
        if (l_U562._fU0 == l_U496[5]._fU0)
        {
            return vector( -478.01750000, 139.50560000, 8.15687800);
        }
        if (l_U562._fU0 == l_U518[5]._fU0)
        {
            return vector( -478.01750000, 139.50560000, 8.15687800);
        }
        if (l_U562._fU0 == l_U540[5]._fU0)
        {
            return vector( -478.01750000, 139.50560000, 8.15687800);
        }
    }
    if (l_U434 == 6)
    {
        if (l_U562._fU0 == l_U496[6]._fU0)
        {
            return vector( -471.66640000, 144.90610000, 10.50855000);
        }
        if (l_U562._fU0 == l_U518[6]._fU0)
        {
            return vector( -468.87830000, 139.83140000, 10.19803000);
        }
        if (l_U562._fU0 == l_U540[6]._fU0)
        {
            return vector( -475.65860000, 140.11430000, 8.72851500);
        }
    }
    SCRIPT_ASSERT( "GET_CAM_POS_COORDS - invalid location" );
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

vector sub_33182()
{
    if (l_U434 == 1)
    {
        if (l_U562._fU0 == l_U496[1]._fU0)
        {
            return vector( -3.09022500, -0.00000000, 154.92610000);
        }
        if (l_U562._fU0 == l_U518[1]._fU0)
        {
            return vector( -3.09022500, -0.00000000, 154.92610000);
        }
        if (l_U562._fU0 == l_U540[1]._fU0)
        {
            return vector( -2.71883300, -0.00000000, -172.14820000);
        }
    }
    if (l_U434 == 2)
    {
        if (l_U562._fU0 == l_U496[2]._fU0)
        {
            return vector( -43.42024000, 5.13863600, -169.09550000);
        }
        if (l_U562._fU0 == l_U518[2]._fU0)
        {
            return vector( 4.89961900, -0.00000000, -128.28010000);
        }
        if (l_U562._fU0 == l_U540[2]._fU0)
        {
            return vector( -43.42024000, 5.13863600, -169.09550000);
        }
    }
    if (l_U434 == 3)
    {
        if (l_U562._fU0 == l_U496[3]._fU0)
        {
            return vector( -5.20845600, -0.00000000, -32.17744000);
        }
        if (l_U562._fU0 == l_U518[3]._fU0)
        {
            return vector( -5.20845600, -0.00000000, -32.17744000);
        }
        if (l_U562._fU0 == l_U540[3]._fU0)
        {
            return vector( -0.42647100, 0.00000000, -161.69460000);
        }
    }
    if (l_U434 == 4)
    {
        return vector( -9.42126600, 0.00000000, -104.48080000);
    }
    if (l_U434 == 5)
    {
        if (l_U562._fU0 == l_U496[5]._fU0)
        {
            return vector( -5.91582800, -0.00000000, 67.52788000);
        }
        if (l_U562._fU0 == l_U518[5]._fU0)
        {
            return vector( -5.91582800, -0.00000000, 67.52788000);
        }
        if (l_U562._fU0 == l_U540[5]._fU0)
        {
            return vector( -5.91582800, -0.00000000, 67.52788000);
        }
    }
    if (l_U434 == 6)
    {
        if (l_U562._fU0 == l_U496[6]._fU0)
        {
            return vector( 0.48940600, -0.00000000, -26.27252000);
        }
        if (l_U562._fU0 == l_U518[6]._fU0)
        {
            return vector( -1.41180900, 0.00000000, 11.66562000);
        }
        if (l_U562._fU0 == l_U540[6]._fU0)
        {
            return vector( 18.90566000, 0.00000000, -63.98282000);
        }
    }
    SCRIPT_ASSERT( "GET_CAM_ROT_COORDS - invalid location" );
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

vector sub_34005()
{
    if (l_U434 == 1)
    {
        if (l_U562._fU0 == l_U496[1]._fU0)
        {
            return vector( -482.73830000, 155.30140000, 6.55030000);
        }
        if (l_U562._fU0 == l_U518[1]._fU0)
        {
            return vector( -482.73830000, 155.30140000, 6.55030000);
        }
        if (l_U562._fU0 == l_U540[1]._fU0)
        {
            return vector( -487.05620000, 156.39670000, 6.55120000);
        }
    }
    if (l_U434 == 2)
    {
        if (l_U562._fU0 == l_U496[2]._fU0)
        {
            return vector( -486.48510000, 148.56750000, 6.55100000);
        }
        if (l_U562._fU0 == l_U518[2]._fU0)
        {
            return vector( -485.24800000, 147.77560000, 6.55090000);
        }
        if (l_U562._fU0 == l_U540[2]._fU0)
        {
            return vector( -486.48510000, 148.56750000, 6.55100000);
        }
    }
    if (l_U434 == 3)
    {
        if (l_U562._fU0 == l_U496[3]._fU0)
        {
            return vector( -485.33610000, 164.45740000, 10.61840000);
        }
        if (l_U562._fU0 == l_U518[3]._fU0)
        {
            return vector( -485.33610000, 164.45740000, 10.61840000);
        }
        if (l_U562._fU0 == l_U540[3]._fU0)
        {
            return vector( -482.28650000, 164.29760000, 10.61800000);
        }
    }
    if (l_U434 == 4)
    {
        return vector( -469.57460000, 161.46420000, 8.66910000);
    }
    if (l_U434 == 5)
    {
        if (l_U562._fU0 == l_U496[5]._fU0)
        {
            return vector( -479.96490000, 140.90890000, 6.55280000);
        }
        if (l_U562._fU0 == l_U518[5]._fU0)
        {
            return vector( -480.22300000, 141.28730000, 6.55270000);
        }
        if (l_U562._fU0 == l_U540[5]._fU0)
        {
            return vector( -480.22300000, 141.28730000, 6.55270000);
        }
    }
    if (l_U434 == 6)
    {
        if (l_U562._fU0 == l_U496[6]._fU0)
        {
            return vector( -469.36780000, 147.19580000, 8.85910100);
        }
        if (l_U562._fU0 == l_U518[6]._fU0)
        {
            return vector( -469.42920000, 150.16590000, 8.85910100);
        }
        if (l_U562._fU0 == l_U540[6]._fU0)
        {
            return vector( -471.82910000, 141.03860000, 8.85910100);
        }
    }
    SCRIPT_ASSERT( "GET_CAM_ROT_COORDS - invalid location" );
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

void sub_34826(boolean bParam0)
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

float sub_35314()
{
    if (l_U434 == 1)
    {
        if (l_U562._fU0 == l_U496[1]._fU0)
        {
            return 51.29998000;
        }
        if (l_U562._fU0 == l_U518[1]._fU0)
        {
            return 51.29998000;
        }
        if (l_U562._fU0 == l_U540[1]._fU0)
        {
            return 21.30005000;
        }
    }
    if (l_U434 == 2)
    {
        if (l_U562._fU0 == l_U496[2]._fU0)
        {
            return 44.36261000;
        }
        if (l_U562._fU0 == l_U518[2]._fU0)
        {
            return 55.79997000;
        }
        if (l_U562._fU0 == l_U540[2]._fU0)
        {
            return 44.36261000;
        }
    }
    if (l_U434 == 3)
    {
        if (l_U562._fU0 == l_U496[3]._fU0)
        {
            return 34.15837000;
        }
        if (l_U562._fU0 == l_U518[3]._fU0)
        {
            return 34.15837000;
        }
        if (l_U562._fU0 == l_U540[3]._fU0)
        {
            return 37.50002000;
        }
    }
    if (l_U434 == 4)
    {
        return 42.03731000;
    }
    if (l_U434 == 5)
    {
        if (l_U562._fU0 == l_U496[5]._fU0)
        {
            return 34.20003000;
        }
        if (l_U562._fU0 == l_U518[5]._fU0)
        {
            return 34.20003000;
        }
        if (l_U562._fU0 == l_U540[5]._fU0)
        {
            return 34.20003000;
        }
    }
    if (l_U434 == 6)
    {
        if (l_U562._fU0 == l_U496[6]._fU0)
        {
            return 24.90005000;
        }
        if (l_U562._fU0 == l_U518[6]._fU0)
        {
            return 18.30007000;
        }
        if (l_U562._fU0 == l_U540[6]._fU0)
        {
            return 45.00000000;
        }
    }
    SCRIPT_ASSERT( "GET_CAM_ROT_COORDS - invalid location" );
    return 40.24000000;
}

int sub_36936()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_37382()
{
    float fVar2;

    sub_22173( 1 );
    l_U311 = -0.03000000;
    l_U312 = 1.24000000;
    l_U305 = {sub_32376()};
    l_U308 = {sub_33182()};
    l_U316 = {sub_34005()};
    if (NOT (IS_CHAR_INJURED( l_U600 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U600 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
        TASK_PLAY_ANIM( l_U600, "Spot_Drunk_Drunk", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
        SET_CHAR_COLLISION( sub_1955(), 0 );
        FREEZE_CHAR_POSITION( sub_1955(), 1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_1955(), "Spot_Drunk_Player", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
        WAIT( 2 );
        if (l_U434 != 4)
        {
            sub_29647( l_U316, 2, 1 );
        }
        sub_34826( 1 );
        ENABLE_SCENE_STREAMING( 0 );
        BEGIN_CAM_COMMANDS( ref l_U612 );
        SET_USE_HIGHDOF( 1 );
        SET_WIDESCREEN_BORDERS( 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        if (NOT (DOES_CAM_EXIST( l_U611 )))
        {
            CREATE_CAM( 14, ref l_U611 );
        }
        if (NOT (DOES_CAM_EXIST( l_U608 )))
        {
            CREATE_CAM( 3, ref l_U608 );
        }
        if (NOT (DOES_CAM_EXIST( l_U609 )))
        {
            CREATE_CAM( 14, ref l_U609 );
        }
        if (NOT (DOES_CAM_EXIST( l_U610 )))
        {
            CREATE_CAM( 14, ref l_U610 );
        }
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 1 );
        SET_CAM_POS( l_U610, l_U305._fU0, l_U305._fU4, l_U305._fU8 );
        SET_CAM_ROT( l_U610, l_U308._fU0, l_U308._fU4, l_U308._fU8 );
        SET_CAM_FOV( l_U610, sub_35314() );
        SET_CAM_POS( l_U609, l_U305._fU0, l_U305._fU4, l_U305._fU8 );
        SET_CAM_ROT( l_U609, l_U308._fU0, l_U308._fU4, l_U308._fU8 );
        SET_CAM_FOV( l_U609, sub_35314() - 3 );
        SET_CAM_FAR_DOF( l_U610, 5 );
        SET_CAM_FAR_DOF( l_U609, 5 );
        SET_CAM_ACTIVE( l_U608, 1 );
        SET_CAM_PROPAGATE( l_U608, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 3500, 0 );
        if (NOT (IS_CHAR_INJURED( l_U600 )))
        {
            SET_CHAR_COORDINATES_DONT_CLEAR_PLAYER_TASKS( sub_1955(), l_U316._fU0, l_U316._fU4, l_U316._fU8 );
            GET_CHAR_COORDINATES( sub_1955(), ref l_U296._fU0, ref l_U296._fU4, ref l_U296._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1955(), l_U311, l_U312, 0, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1955(), l_U313, l_U314, 0, ref l_U299._fU0, ref l_U299._fU4, ref l_U299._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( l_U302._fU0, l_U302._fU4, l_U302._fU8, ref l_U315 );
            SET_CHAR_COORDINATES( l_U600, l_U302._fU0, l_U302._fU4, l_U315 );
            FREEZE_CHAR_POSITION( l_U600, 1 );
            sub_3525( l_U600, sub_1955() );
            SET_CHAR_COLLISION( l_U600, 0 );
        }
    }
    l_U324 = 0;
    SETTIMERA( 0 );
    while (l_U323)
    {
        switch (l_U324)
        {
            case 0:
            if (TIMERA() > 500)
            {
                SAY_AMBIENT_SPEECH( sub_1955(), "CLUB_GAME_DRUNKARD_LEAVE", 1, 1, 2 );
                l_U324++;
            }
            break;
            case 1:
            if (TIMERA() > 1200)
            {
                SAY_AMBIENT_SPEECH( l_U600, "CLUB_GAME_DRUNKARD_HIT", 1, 1, 2 );
                l_U324++;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U600, "MISSCLUB_MGMT", "Spot_Drunk_Drunk" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U600, "MISSCLUB_MGMT", "Spot_Drunk_Drunk", ref fVar2 );
                    if (fVar2 > 0.80000000)
                    {
                        l_U324++;
                    }
                }
            }
            break;
            case 3:
            l_U324++;
            break;
            case 4:
            l_U324++;
            break;
            case 5:
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_34826( 0 );
            DETACH_OBJECT( l_U287, 1 );
            DELETE_OBJECT( ref l_U287 );
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            l_U323 = 0;
            break;
        }
        if (sub_36936())
        {
            l_U323 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_CHAR_TASKS( sub_1955() );
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                CLEAR_CHAR_TASKS( l_U600 );
            }
            sub_34826( 0 );
            INCREMENT_INT_STAT( 372, 1 );
            sub_22318( ref l_U681, 0 );
            sub_22173( 0 );
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
        }
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U600 )))
    {
        SET_CHAR_COLLISION( l_U600, 1 );
        FREEZE_CHAR_POSITION( l_U600, 0 );
    }
    SET_CHAR_COLLISION( sub_1955(), 1 );
    FREEZE_CHAR_POSITION( sub_1955(), 0 );
    END_CAM_COMMANDS( ref l_U612 );
    ENABLE_SCENE_STREAMING( 1 );
    l_U323 = 1;
    return;
}

void sub_39254()
{
    float fVar2;

    sub_22173( 1 );
    l_U311 = 0.25000000;
    l_U312 = 1.44000000;
    l_U305 = {sub_32376()};
    l_U308 = {sub_33182()};
    l_U316 = {sub_34005()};
    sub_29647( l_U316, 2, 1 );
    sub_34826( 1 );
    if (NOT (IS_CHAR_INJURED( l_U600 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U600 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
        TASK_PLAY_ANIM( l_U600, "Spot_Drugs_Dealer", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
        SET_CHAR_COLLISION( sub_1955(), 0 );
        FREEZE_CHAR_POSITION( sub_1955(), 1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_1955(), "Spot_Drugs_Player", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
        WAIT( 2 );
        ENABLE_SCENE_STREAMING( 0 );
        BEGIN_CAM_COMMANDS( ref l_U612 );
        SET_USE_HIGHDOF( 1 );
        SET_WIDESCREEN_BORDERS( 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        if (NOT (DOES_CAM_EXIST( l_U611 )))
        {
            CREATE_CAM( 14, ref l_U611 );
        }
        if (NOT (DOES_CAM_EXIST( l_U608 )))
        {
            CREATE_CAM( 3, ref l_U608 );
        }
        if (NOT (DOES_CAM_EXIST( l_U609 )))
        {
            CREATE_CAM( 14, ref l_U609 );
        }
        if (NOT (DOES_CAM_EXIST( l_U610 )))
        {
            CREATE_CAM( 14, ref l_U610 );
        }
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 1 );
        SET_CAM_POS( l_U610, l_U305._fU0, l_U305._fU4, l_U305._fU8 );
        SET_CAM_ROT( l_U610, l_U308._fU0, l_U308._fU4, l_U308._fU8 );
        SET_CAM_FOV( l_U610, sub_35314() );
        SET_CAM_POS( l_U609, l_U305._fU0, l_U305._fU4, l_U305._fU8 );
        SET_CAM_ROT( l_U609, l_U308._fU0, l_U308._fU4, l_U308._fU8 );
        SET_CAM_FOV( l_U609, sub_35314() - 3 );
        SET_CAM_FAR_DOF( l_U610, 5 );
        SET_CAM_FAR_DOF( l_U609, 5 );
        SET_CAM_ACTIVE( l_U608, 1 );
        SET_CAM_PROPAGATE( l_U608, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 7000, 0 );
        if (NOT (IS_CHAR_INJURED( l_U600 )))
        {
            SET_CHAR_COORDINATES_DONT_CLEAR_PLAYER_TASKS( sub_1955(), l_U316._fU0, l_U316._fU4, l_U316._fU8 );
            GET_CHAR_COORDINATES( sub_1955(), ref l_U296._fU0, ref l_U296._fU4, ref l_U296._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1955(), l_U311, l_U312, 0, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
            GET_GROUND_Z_FOR_3D_COORD( l_U302._fU0, l_U302._fU4, l_U302._fU8, ref l_U315 );
            SET_CHAR_COORDINATES( l_U600, l_U302._fU0, l_U302._fU4, l_U315 );
            FREEZE_CHAR_POSITION( l_U600, 1 );
            sub_3525( l_U600, sub_1955() );
            SET_CHAR_COLLISION( l_U600, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U601 )))
    {
        CLEAR_CHAR_TASKS( l_U601 );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U601 );
    }
    l_U326 = 0;
    SETTIMERA( 0 );
    while (l_U325)
    {
        switch (l_U326)
        {
            case 0:
            if (TIMERA() > 500)
            {
                SAY_AMBIENT_SPEECH( sub_1955(), "CLUB_GAME_DEAL_LEAVE", 1, 0, 2 );
                l_U326++;
            }
            break;
            case 1:
            if (TIMERA() > 1000)
            {
                SAY_AMBIENT_SPEECH( l_U600, "CLUB_GAME_BEATEN_UP", 1, 0, 2 );
                l_U326++;
            }
            break;
            case 2:
            l_U326++;
            break;
            case 3:
            l_U326++;
            break;
            case 4:
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U600, "MISSCLUB_MGMT", "Spot_Drugs_Dealer" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U600, "MISSCLUB_MGMT", "Spot_Drugs_Dealer", ref fVar2 );
                    if (fVar2 > 0.70000000)
                    {
                        l_U326++;
                    }
                }
            }
            break;
            case 5:
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_34826( 0 );
            l_U325 = 0;
            break;
        }
        if (sub_36936())
        {
            l_U325 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_CHAR_TASKS( sub_1955() );
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                CLEAR_CHAR_TASKS( l_U600 );
            }
            sub_34826( 0 );
            INCREMENT_INT_STAT( 372, 1 );
            sub_22318( ref l_U681, 0 );
            sub_22173( 0 );
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
        }
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U600 )))
    {
        FREEZE_CHAR_POSITION( l_U600, 0 );
        SET_CHAR_COLLISION( l_U600, 1 );
    }
    END_CAM_COMMANDS( ref l_U612 );
    ENABLE_SCENE_STREAMING( 1 );
    l_U325 = 1;
    SET_CHAR_COLLISION( sub_1955(), 1 );
    FREEZE_CHAR_POSITION( sub_1955(), 0 );
    CLEAR_CHAR_TASKS( sub_1955() );
    return;
}

void sub_41096()
{
    unknown uVar2;
    float fVar3;

    sub_22173( 1 );
    l_U311 = -0.25200000;
    l_U312 = 1.10100000 - 0.40000000;
    l_U313 = 0.72100000;
    l_U314 = 1.09200000 - 0.40000000;
    l_U305 = {sub_32376()};
    l_U308 = {sub_33182()};
    l_U316 = {sub_34005()};
    sub_29647( l_U316, 2, 1 );
    sub_34826( 1 );
    if (NOT (IS_CHAR_INJURED( l_U600 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U600 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
        TASK_PLAY_ANIM( l_U600, "SPOT_Fight_B", "MISSCLUB_MGMT", 8.00000000, 0, 1, 1, 0, 0 );
        SET_CHAR_COLLISION( sub_1955(), 0 );
        FREEZE_CHAR_POSITION( sub_1955(), 1 );
        TASK_PLAY_ANIM( sub_1955(), "SPOT_Fight_A", "MISSCLUB_MGMT", 8.00000000, 0, 1, 1, 0, 0 );
        WAIT( 2 );
        ENABLE_SCENE_STREAMING( 0 );
        BEGIN_CAM_COMMANDS( ref l_U612 );
        SET_USE_HIGHDOF( 1 );
        SET_WIDESCREEN_BORDERS( 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        if (NOT (DOES_CAM_EXIST( l_U611 )))
        {
            CREATE_CAM( 14, ref l_U611 );
        }
        if (NOT (DOES_CAM_EXIST( l_U608 )))
        {
            CREATE_CAM( 3, ref l_U608 );
        }
        if (NOT (DOES_CAM_EXIST( l_U609 )))
        {
            CREATE_CAM( 14, ref l_U609 );
        }
        if (NOT (DOES_CAM_EXIST( l_U610 )))
        {
            CREATE_CAM( 14, ref l_U610 );
        }
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 1 );
        SET_CAM_POS( l_U610, l_U305._fU0, l_U305._fU4, l_U305._fU8 );
        SET_CAM_ROT( l_U610, l_U308._fU0, l_U308._fU4, l_U308._fU8 );
        SET_CAM_FOV( l_U610, sub_35314() );
        SET_CAM_POS( l_U609, l_U305._fU0, l_U305._fU4, l_U305._fU8 );
        SET_CAM_ROT( l_U609, l_U308._fU0, l_U308._fU4, l_U308._fU8 );
        SET_CAM_FOV( l_U609, sub_35314() - 3 );
        SET_CAM_FAR_DOF( l_U610, 5 );
        SET_CAM_FAR_DOF( l_U609, 5 );
        SET_CAM_ACTIVE( l_U608, 1 );
        SET_CAM_PROPAGATE( l_U608, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 3500, 0 );
        if (NOT (IS_CHAR_INJURED( l_U600 )))
        {
            SET_CHAR_COORDINATES_DONT_CLEAR_PLAYER_TASKS( sub_1955(), l_U316._fU0, l_U316._fU4, l_U316._fU8 );
            GET_CHAR_COORDINATES( sub_1955(), ref l_U296._fU0, ref l_U296._fU4, ref l_U296._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1955(), l_U311, l_U312, 0, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1955(), l_U313, l_U314, 0, ref l_U299._fU0, ref l_U299._fU4, ref l_U299._fU8 );
            GET_CHAR_HEADING( sub_1955(), ref uVar2 );
            GET_GROUND_Z_FOR_3D_COORD( l_U302._fU0, l_U302._fU4, l_U302._fU8, ref l_U315 );
            SET_CHAR_COORDINATES( l_U600, l_U302._fU0, l_U302._fU4, l_U315 );
            SET_CHAR_HEADING( l_U600, uVar2 - 90 );
            SET_CHAR_COLLISION( l_U600, 0 );
            FREEZE_CHAR_POSITION( l_U600, 1 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U601 )))
    {
        GET_GROUND_Z_FOR_3D_COORD( l_U299._fU0, l_U299._fU4, l_U299._fU8, ref l_U315 );
        SET_CHAR_COORDINATES( l_U601, l_U299._fU0, l_U299._fU4, l_U315 );
        SET_CHAR_HEADING( l_U601, uVar2 + 90 );
        SET_CHAR_COLLISION( l_U601, 0 );
        FREEZE_CHAR_POSITION( l_U601, 1 );
        TASK_PLAY_ANIM( l_U601, "SPOT_Fight_C", "MISSCLUB_MGMT", 8.00000000, 0, 1, 1, 0, 0 );
    }
    l_U328 = 0;
    SETTIMERA( 0 );
    while (l_U327)
    {
        switch (l_U328)
        {
            case 0:
            if (TIMERA() > 500)
            {
                SAY_AMBIENT_SPEECH( sub_1955(), "CLUB_GAME_FIGHT_LEAVE", 1, 0, 2 );
                l_U328++;
            }
            break;
            case 1:
            if (TIMERA() > 1000)
            {
                SAY_AMBIENT_SPEECH( l_U600, "CLUB_GAME_BEATEN_UP", 1, 0, 2 );
                l_U328++;
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U600, "MISSCLUB_MGMT", "SPOT_Fight_B" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U600, "MISSCLUB_MGMT", "SPOT_Fight_B", ref fVar3 );
                    if (fVar3 > 0.75000000)
                    {
                        l_U328++;
                    }
                }
            }
            break;
            case 3:
            l_U328++;
            break;
            case 4:
            l_U328++;
            break;
            case 5:
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_34826( 0 );
            l_U327 = 0;
            break;
        }
        if (sub_36936())
        {
            l_U327 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_CHAR_TASKS( sub_1955() );
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                CLEAR_CHAR_TASKS( l_U600 );
            }
            sub_34826( 0 );
            INCREMENT_INT_STAT( 372, 1 );
            sub_22318( ref l_U681, 0 );
            sub_22173( 0 );
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
        }
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U600 )))
    {
        FREEZE_CHAR_POSITION( l_U600, 0 );
        SET_CHAR_COLLISION( l_U600, 1 );
    }
    if (NOT (IS_CHAR_DEAD( l_U601 )))
    {
        FREEZE_CHAR_POSITION( l_U601, 0 );
        SET_CHAR_COLLISION( l_U601, 1 );
    }
    SET_CHAR_COLLISION( sub_1955(), 1 );
    FREEZE_CHAR_POSITION( sub_1955(), 0 );
    END_CAM_COMMANDS( ref l_U612 );
    ENABLE_SCENE_STREAMING( 1 );
    l_U327 = 1;
    CLEAR_CHAR_TASKS( sub_1955() );
    return;
}

void sub_43194()
{
    unknown uVar2;
    float fVar3;
    float fVar4;

    sub_22173( 1 );
    l_U311 = 0.06200000;
    l_U312 = 1.07100000;
    l_U305 = {sub_32376()};
    l_U308 = {sub_33182()};
    l_U316 = {sub_34005()};
    sub_29647( l_U316, 2, 1 );
    sub_34826( 1 );
    CREATE_OBJECT( 1429724027, l_U316._fU0, l_U316._fU4, l_U316._fU8, ref uVar2, 1 );
    if (NOT (IS_CHAR_INJURED( l_U600 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U600 );
        TASK_PLAY_ANIM( l_U600, "SPOT_Non_Payer_B", "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
        SET_CHAR_COLLISION( sub_1955(), 0 );
        FREEZE_CHAR_POSITION( sub_1955(), 1 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_1955(), "SPOT_Non_Payer_A", "MISSCLUB_MGMT", 4.00000000, 0, 0, 0, 0, 0 );
        WAIT( 2 );
        ENABLE_SCENE_STREAMING( 0 );
        BEGIN_CAM_COMMANDS( ref l_U612 );
        SET_USE_HIGHDOF( 1 );
        SET_WIDESCREEN_BORDERS( 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        if (NOT (DOES_CAM_EXIST( l_U611 )))
        {
            CREATE_CAM( 14, ref l_U611 );
        }
        if (NOT (DOES_CAM_EXIST( l_U608 )))
        {
            CREATE_CAM( 3, ref l_U608 );
        }
        if (NOT (DOES_CAM_EXIST( l_U609 )))
        {
            CREATE_CAM( 14, ref l_U609 );
        }
        if (NOT (DOES_CAM_EXIST( l_U610 )))
        {
            CREATE_CAM( 14, ref l_U610 );
        }
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 1 );
        SET_CAM_POS( l_U610, l_U305._fU0, l_U305._fU4, l_U305._fU8 );
        SET_CAM_ROT( l_U610, l_U308._fU0, l_U308._fU4, l_U308._fU8 );
        SET_CAM_FOV( l_U610, sub_35314() );
        SET_CAM_POS( l_U609, l_U305._fU0, l_U305._fU4, l_U305._fU8 );
        SET_CAM_ROT( l_U609, l_U308._fU0, l_U308._fU4, l_U308._fU8 );
        SET_CAM_FOV( l_U609, sub_35314() - 3 );
        SET_CAM_FAR_DOF( l_U610, 5 );
        SET_CAM_FAR_DOF( l_U609, 5 );
        SET_CAM_ACTIVE( l_U608, 1 );
        SET_CAM_PROPAGATE( l_U608, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 7000, 0 );
        if (NOT (IS_CHAR_INJURED( l_U600 )))
        {
            SET_CHAR_COORDINATES_DONT_CLEAR_PLAYER_TASKS( sub_1955(), l_U316._fU0, l_U316._fU4, l_U316._fU8 );
            GET_CHAR_COORDINATES( sub_1955(), ref l_U296._fU0, ref l_U296._fU4, ref l_U296._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1955(), l_U311, l_U312, 0, ref l_U302._fU0, ref l_U302._fU4, ref l_U302._fU8 );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1955(), l_U313, l_U314, 0, ref l_U299._fU0, ref l_U299._fU4, ref l_U299._fU8 );
            ATTACH_OBJECT_TO_PED( uVar2, l_U600, 1219, 0.13200000, 0.00200000, 0, 18, 20, 7, 0 );
            GET_GROUND_Z_FOR_3D_COORD( l_U302._fU0, l_U302._fU4, l_U302._fU8, ref l_U315 );
            SET_CHAR_COORDINATES( l_U600, l_U302._fU0, l_U302._fU4, l_U315 );
            FREEZE_CHAR_POSITION( l_U600, 1 );
            sub_3525( l_U600, sub_1955() );
            SET_CHAR_COLLISION( l_U600, 0 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U601 )))
    {
        sub_3525( l_U601, sub_1955() );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U601 );
    }
    l_U320 = 0;
    SETTIMERA( 0 );
    while (l_U319)
    {
        switch (l_U320)
        {
            case 0:
            if (TIMERA() > 500)
            {
                SAY_AMBIENT_SPEECH( sub_1955(), "CLUB_GAME_ARGUE_LEAVE", 1, 0, 2 );
                l_U320++;
            }
            break;
            case 1:
            l_U320++;
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U600, "MISSCLUB_MGMT", "SPOT_Non_Payer_B" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U600, "MISSCLUB_MGMT", "SPOT_Non_Payer_B", ref fVar3 );
                    if (fVar3 > 0.59000000)
                    {
                        SAY_AMBIENT_SPEECH( l_U600, "CLUB_GAME_ESCORT", 1, 0, 2 );
                        DETACH_OBJECT( uVar2, 1 );
                        DELETE_OBJECT( ref uVar2 );
                        TRIGGER_PTFX_ON_PED_BONE( "player_wasted_cash", l_U600, 0, 0, 0, 0, 0, 0, 1219, 1065353216 );
                        l_U320++;
                    }
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U600, "MISSCLUB_MGMT", "SPOT_Non_Payer_B" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U600, "MISSCLUB_MGMT", "SPOT_Non_Payer_B", ref fVar4 );
                    if (fVar4 > 0.70000000)
                    {
                        l_U320++;
                    }
                }
            }
            break;
            case 4:
            l_U320++;
            break;
            case 5:
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_34826( 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
            l_U319 = 0;
            break;
        }
        if (sub_36936())
        {
            l_U319 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_CHAR_TASKS( sub_1955() );
            if (NOT (IS_CHAR_INJURED( l_U600 )))
            {
                CLEAR_CHAR_TASKS( l_U600 );
            }
            sub_34826( 0 );
            INCREMENT_INT_STAT( 372, 1 );
            sub_22318( ref l_U681, 0 );
            sub_22173( 0 );
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
        }
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_DEAD( l_U600 )))
    {
        FREEZE_CHAR_POSITION( l_U600, 0 );
        SET_CHAR_COLLISION( l_U600, 1 );
    }
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    SET_CHAR_COLLISION( sub_1955(), 1 );
    FREEZE_CHAR_POSITION( sub_1955(), 0 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 0 );
    END_CAM_COMMANDS( ref l_U612 );
    ENABLE_SCENE_STREAMING( 1 );
    SET_CAM_BEHIND_PED( sub_1955() );
    l_U319 = 1;
    return;
}

void sub_45728()
{
    string sVar2;
    string sVar3;
    unknown uVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    vector vVar15;
    float fVar18;
    float fVar19;
    float fVar20;
    unknown uVar21;

    sub_3088( 0 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -175426899, 65068, 153, 10, 1, -1 );
    CLEAR_AREA( -464.18050000, 153.65440000, 8.84160000, 15, 1 );
    SET_PLAYER_CONTROL( sub_903(), 0 );
    ENABLE_SCENE_STREAMING( 0 );
    BEGIN_CAM_COMMANDS( ref l_U612 );
    SET_USE_HIGHDOF( 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    sub_34826( 1 );
    if (l_U441 == 0)
    {
        sVar2 = "Eject_Ped_06_A";
        sVar3 = "Eject_Ped_06_B";
        fVar5 = -0.52300000;
        fVar6 = -0.60399990;
        fVar7 = 0.88000000;
        vVar8 = {-465.72140000, 153.45310000, 8.80000000};
        fVar14 = 300.03970000;
    }
    if (l_U441 == 1)
    {
        sVar2 = "Eject_Ped_01_A";
        sVar3 = "Eject_Ped_01_B";
        fVar5 = 0.11000000;
        fVar6 = -0.36800000;
        fVar7 = 0.89000000;
        vVar8 = {-467.84390000, 153.68200000, 8.85999900};
        fVar14 = 298.00000000;
    }
    if (l_U441 == 2)
    {
        sVar2 = "Eject_Ped_02_A";
        sVar3 = "Eject_Ped_02_B";
        fVar5 = -0.15700000;
        fVar6 = 0.52700000;
        fVar7 = 0.89000000;
        vVar8 = {-467.34390000, 153.68200000, 8.85999900};
        fVar14 = 268.00000000;
    }
    if (l_U441 == 3)
    {
        sVar2 = "Eject_Ped_04_A";
        sVar3 = "Eject_Ped_04_B";
        fVar5 = -0.14100000;
        fVar6 = 0.97700000;
        fVar7 = 0.65000000;
        vVar8 = {-467.44390000, 153.68200000, 8.85999900};
        fVar14 = 279.00000000;
        vVar15 = {-465.78390000, 152.68570000, 8.82700000};
        fVar18 = 57.91110000;
    }
    if (g_U30199 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
        {
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 )))
            {
                SET_CHAR_COORDINATES( g_U29971[g_U30199]._fU12, -467.35710000, 155.00280000, 8.85849900 );
                SET_CHAR_HEADING( g_U29971[g_U30199]._fU12, 232.55620000 );
            }
        }
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 )))
        {
            OPEN_SEQUENCE_TASK( ref l_U680 );
            TASK_LOOK_AT_CHAR( 0, sub_1955(), -2, 0 );
            TASK_STAND_STILL( 0, 10000 );
            CLOSE_SEQUENCE_TASK( l_U680 );
            TASK_PERFORM_SEQUENCE( g_U29971[g_U30199]._fU12, l_U680 );
            CLEAR_SEQUENCE_TASK( l_U680 );
        }
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
    SET_CHAR_COORDINATES( sub_1955(), vVar8.x, vVar8.y, vVar8.z );
    SET_CHAR_HEADING( sub_1955(), fVar14 );
    SET_CHAR_COLLISION( sub_1955(), 0 );
    FREEZE_CHAR_POSITION( sub_1955(), 1 );
    TASK_PLAY_ANIM_NON_INTERRUPTABLE( sub_1955(), sVar2, "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
    if (g_U30199 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
        {
            sub_2439( g_U30199, 1 );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U600 )))
    {
        CLEAR_ROOM_FOR_CHAR( l_U600 );
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U600 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_1955(), fVar5, fVar6, 0, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
        SET_CHAR_COORDINATES( l_U600, uVar11._fU0, uVar11._fU4, vVar8.z );
        if (l_U441 == 3)
        {
            SET_CHAR_HEADING( l_U600, fVar14 - 180 );
        }
        else if (NOT (l_U441 == 0))
        {
            SET_CHAR_HEADING( l_U600, fVar14 );
        }
        SET_CHAR_COLLISION( l_U600, 0 );
        FREEZE_CHAR_POSITION( l_U600, 1 );
        CLEAR_ROOM_FOR_CHAR( l_U600 );
        TASK_PLAY_ANIM( l_U600, sVar3, "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
    }
    if (l_U441 == 3)
    {
        if (DOES_CHAR_EXIST( l_U601 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U601 )))
            {
                SET_CHAR_COORDINATES( l_U601, vVar15.x, vVar15.y, vVar15.z );
                SET_CHAR_HEADING( l_U601, fVar18 );
            }
        }
    }
    WAIT( 2 );
    if (NOT (DOES_CAM_EXIST( l_U611 )))
    {
        CREATE_CAM( 14, ref l_U611 );
    }
    if (NOT (DOES_CAM_EXIST( l_U608 )))
    {
        CREATE_CAM( 3, ref l_U608 );
    }
    if (NOT (DOES_CAM_EXIST( l_U609 )))
    {
        CREATE_CAM( 14, ref l_U609 );
    }
    if (NOT (DOES_CAM_EXIST( l_U610 )))
    {
        CREATE_CAM( 14, ref l_U610 );
    }
    GET_GAME_VIEWPORT_ID( ref uVar21 );
    CLEAR_ROOM_FOR_VIEWPORT( uVar21 );
    if (l_U441 == 1)
    {
        SET_CAM_POS( l_U610, -464.42410000, 151.20690000, 9.10922200 );
        SET_CAM_ROT( l_U610, 21.11524000, 0.00000100, 43.03430000 );
        SET_CAM_FOV( l_U610, 45.00000000 );
        SET_CAM_POS( l_U609, -464.42410000, 151.20690000, 9.10922200 );
        SET_CAM_ROT( l_U609, 5.66956500, 0.00000000, 27.58861000 );
        SET_CAM_FOV( l_U609, 45.00000000 );
    }
    else
    {
        SET_CAM_POS( l_U610, -466.94100000, 157.23850000, 10.55515000 );
        SET_CAM_ROT( l_U610, -6.73245000, 0.00000000, -178.76260000 );
        SET_CAM_FOV( l_U610, 45.00000000 );
        SET_CAM_POS( l_U609, -466.92750000, 156.60830000, 10.18360000 );
        SET_CAM_ROT( l_U609, -1.29984600, 0.00000000, -163.10390000 );
        SET_CAM_FOV( l_U609, 45.00000000 );
    }
    SET_CAM_FAR_DOF( l_U610, 5 );
    SET_CAM_FAR_DOF( l_U609, 5 );
    SET_CAM_ACTIVE( l_U608, 1 );
    SET_CAM_PROPAGATE( l_U608, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 3500, 0 );
    l_U607 = 0;
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    SETTIMERA( 0 );
    while (l_U606)
    {
        switch (l_U607)
        {
            case 0:
            if (TIMERA() > 100)
            {
                if (l_U441 == 3)
                {
                    sub_10502( "EECLJ_KIK2", ref l_U681, 7, 1 );
                }
                else
                {
                    sub_10502( "EECLJ_KICK", ref l_U681, 7, 1 );
                }
                l_U607++;
            }
            break;
            case 1:
            if (IS_CHAR_PLAYING_ANIM( sub_1955(), "MISSCLUB_MGMT", sVar2 ))
            {
                if ((l_U441 == 0) || (l_U441 == 1))
                {
                    if (NOT (IS_CHAR_INJURED( l_U600 )))
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U600, "MISSCLUB_MGMT", sVar3 ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U600, "MISSCLUB_MGMT", sVar3, ref fVar20 );
                            if (fVar20 > (fVar7 - 0.05000000))
                            {
                                if (NOT (IS_CHAR_DEAD( l_U600 )))
                                {
                                    FREEZE_CHAR_POSITION( l_U600, 0 );
                                    SET_CHAR_COLLISION( l_U600, 1 );
                                }
                                if (NOT (IS_PED_RAGDOLL( l_U600 )))
                                {
                                    SWITCH_PED_TO_RAGDOLL( l_U600, 3000, 4000, 0, 1, 1, 0 );
                                }
                            }
                        }
                    }
                }
                GET_CHAR_ANIM_CURRENT_TIME( sub_1955(), "MISSCLUB_MGMT", sVar2, ref fVar19 );
                if (fVar19 > fVar7)
                {
                    l_U607++;
                }
            }
            break;
            case 2:
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
            if (DOES_CHAR_EXIST( l_U600 ))
            {
                DELETE_CHAR( ref l_U600 );
            }
            SET_CAM_POS( l_U611, -467.33010000, 156.34850000, 10.90463000 );
            SET_CAM_ROT( l_U611, -10.34089000, -0.00000000, -172.14690000 );
            SET_CAM_FOV( l_U611, 38.10002000 );
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_CAM_FAR_DOF( l_U611, 3.50000000 );
            SET_CAM_ACTIVE( l_U611, 1 );
            SET_CAM_PROPAGATE( l_U611, 1 );
            SET_CHAR_COORDINATES( sub_1955(), -462.98170000, 153.96100000, 8.85770000 );
            SET_CHAR_HEADING( sub_1955(), 139.35650000 );
            if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
            {
                if (NOT (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U680 );
                    TASK_LOOK_AT_CHAR( 0, g_U29971[g_U30199]._fU12, 5000, 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -466.72750000, 153.83230000, 8.85870000, 2, 30000, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( l_U680 );
                    TASK_PERFORM_SEQUENCE( sub_1955(), l_U680 );
                    CLEAR_SEQUENCE_TASK( l_U680 );
                }
            }
            FREEZE_CHAR_POSITION( sub_1955(), 0 );
            SET_CHAR_COLLISION( sub_1955(), 1 );
            if (NOT (sub_15316( l_U681 )))
            {
                sub_48552( "E2CLAUD" );
                sub_7378( 0, sub_1955(), "LUIS", 0 );
                if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                {
                    sub_7378( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                    sub_14728( ref l_U384, "E2CL_KOUT2", "E2CL_LRESP" );
                    sub_15075( ref l_U384, ref l_U681, 7, 1 );
                }
            }
            SETTIMERA( 0 );
            l_U607++;
            break;
            case 3:
            if (TIMERA() > 2000)
            {
                if (NOT (sub_15316( l_U681 )))
                {
                    sub_48552( "E2CLAUD" );
                    sub_7378( 0, sub_1955(), "LUIS", 0 );
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_7378( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                        sub_14728( ref l_U384, "E2CL_KOUT2", "E2CL_LRESP" );
                        sub_15075( ref l_U384, ref l_U681, 7, 1 );
                    }
                }
                l_U607++;
            }
            break;
            case 4:
            if (NOT (sub_15316( l_U681 )))
            {
                SET_CHAR_MAX_MOVE_BLEND_RATIO( sub_1955(), 3.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( sub_1955(), -470.05280000, 154.62270000, 8.85910100, 2, 30000, 1 );
                SETTIMERA( 0 );
                l_U607++;
            }
            break;
            case 5:
            l_U607++;
            break;
            case 6:
            if (TIMERA() > 700)
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    if ((l_U441 == 0) || (l_U441 == 1))
                    {
                        if (DOES_CHAR_EXIST( l_U600 ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U600 )))
                            {
                                if (IS_CHAR_PLAYING_ANIM( l_U600, "MISSCLUB_MGMT", sVar3 ))
                                {
                                    GET_CHAR_ANIM_CURRENT_TIME( l_U600, "MISSCLUB_MGMT", sVar3, ref fVar20 );
                                    if (fVar20 > (fVar7 - 0.05000000))
                                    {
                                        if (NOT (IS_CHAR_DEAD( l_U600 )))
                                        {
                                            FREEZE_CHAR_POSITION( l_U600, 0 );
                                            SET_CHAR_COLLISION( l_U600, 1 );
                                        }
                                        if (NOT (IS_PED_RAGDOLL( l_U600 )))
                                        {
                                            SWITCH_PED_TO_RAGDOLL( l_U600, 3000, 4000, 0, 1, 1, 0 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                    WAIT( 0 );
                }
                CLEAR_CHAR_TASKS( sub_1955() );
                SET_CHAR_COORDINATES( sub_1955(), -470.05280000, 154.62270000, 8.85910100 );
                SET_CHAR_HEADING( sub_1955(), 77.06260000 );
                SET_CAM_ACTIVE( l_U611, 0 );
                SET_CAM_PROPAGATE( l_U611, 0 );
                SET_USE_HIGHDOF( 0 );
                SET_WIDESCREEN_BORDERS( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                SET_CAM_BEHIND_PED( sub_1955() );
                l_U606 = 0;
            }
            break;
        }
        if (sub_36936())
        {
            l_U606 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            SET_CHAR_COORDINATES( sub_1955(), -470.05280000, 154.62270000, 8.85910100 );
            SET_CHAR_HEADING( sub_1955(), 77.06260000 );
            INCREMENT_INT_STAT( 372, 1 );
            sub_22318( ref l_U681, 0 );
            sub_22173( 0 );
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
        }
        WAIT( 0 );
    }
    SET_CHAR_COLLISION( sub_1955(), 1 );
    FREEZE_CHAR_POSITION( sub_1955(), 0 );
    sub_3088( 1 );
    sub_34826( 0 );
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 0 );
    if (DOES_CHAR_EXIST( l_U600 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U600 )))
        {
            FREEZE_CHAR_POSITION( l_U600, 0 );
            SET_CHAR_COLLISION( l_U600, 1 );
        }
    }
    sub_48552( "E2CLJA" );
    sub_7378( 0, sub_1955(), "LUIS", 0 );
    if (g_U30198 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
        {
            sub_7378( 1, g_U29971[g_U30198]._fU12, "JONI", 0 );
        }
    }
    sub_2439( g_U30199, 0 );
    END_CAM_COMMANDS( ref l_U612 );
    ENABLE_SCENE_STREAMING( 1 );
    l_U606 = 1;
    return;
}

int sub_48552(unknown uParam0)
{
    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        StrCopy( ref l_U2._fU0, uParam0, 16 );
        return 1;
    }
    return 0;
}

void sub_51419()
{
    unknown uVar2;

    if (IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
    if (NOT (IS_CHAR_DEAD( g_U29971[g_U30198]._fU12 )))
    {
        SET_CHAR_COLLISION( g_U29971[g_U30198]._fU12, 0 );
    }
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 1 );
    sub_34826( 1 );
    BEGIN_CAM_COMMANDS( ref l_U612 );
    if (NOT (DOES_CAM_EXIST( l_U611 )))
    {
        CREATE_CAM( 14, ref l_U611 );
    }
    if (NOT (DOES_CAM_EXIST( l_U608 )))
    {
        CREATE_CAM( 3, ref l_U608 );
    }
    if (NOT (DOES_CAM_EXIST( l_U609 )))
    {
        CREATE_CAM( 14, ref l_U609 );
    }
    if (NOT (DOES_CAM_EXIST( l_U610 )))
    {
        CREATE_CAM( 14, ref l_U610 );
    }
    if (g_U10598)
    {
        g_U43693 = 1;
    }
    else if (g_U43693 == 1)
    {
        g_U43693++;
    }
    switch (g_U43693)
    {
        case 0:
        l_U638 = "EECLJ_FRK1";
        l_U639 = "Luis_Freakout";
        l_U640 = "Joni_Freakout";
        l_U644 = {-473.00100000, 145.72020000, 9.07000000};
        l_U647 = 321.29890000;
        l_U648 = -1.25900000;
        l_U649 = -0.22400000;
        l_U651 = 0.85000000;
        l_U652 = {-472.11000000, 149.94710000, 9.82670800};
        l_U655 = {1.69792200, 0.00000000, 171.46900000};
        l_U658 = 25.28154000;
        l_U659 = {-472.40250000, 150.08440000, 9.81339300};
        l_U662 = {1.69792200, 0.00000000, 150.32380000};
        l_U665 = 25.28154000;
        l_U673 = {-473.08840000, 145.66880000, 8.93980100};
        l_U676 = 141.29890000;
        l_U678 = 9.09000000;
        l_U679 = 12000;
        break;
        case 1:
        l_U638 = "EECLJ_FRKG";
        l_U639 = "Luis_Freakout_B";
        l_U640 = "Joni_Freakout_B";
        l_U644 = {-473.00100000, 145.72020000, 9.06000100};
        l_U647 = 321.29890000;
        l_U648 = -1.25900000;
        l_U649 = -0.22400000;
        l_U651 = 0.85000000;
        l_U652 = {-473.49790000, 147.87800000, 9.77829600};
        l_U655 = {7.05734200, -0.00000000, -172.60720000};
        l_U658 = 37.20001000;
        l_U659 = {-472.79050000, 147.58370000, 9.74613500};
        l_U662 = {10.47845000, -0.00000000, 164.58540000};
        l_U665 = 37.20001000;
        l_U673 = {-473.08840000, 145.66880000, 8.85860000};
        l_U676 = 141.29890000;
        l_U678 = 9.06000100;
        l_U679 = 7000;
        break;
        case 2:
        l_U638 = "EECLJ_LOVE";
        l_U639 = "Luis_BJ";
        l_U640 = "Joni_BJ";
        l_U644 = {-472.73510000, 147.04680000, 9.06000100};
        l_U647 = 324.01530000;
        l_U648 = -1.31600000;
        l_U649 = -0.20500000;
        l_U651 = 0.85000000;
        l_U652 = {-474.23000000, 145.36550000, 9.88844200};
        l_U655 = {-0.09015800, -0.00000000, -36.88780000};
        l_U658 = 39.00000000;
        l_U659 = {-474.01290000, 145.65450000, 9.88787400};
        l_U662 = {-0.09016100, -0.00000000, -36.88780000};
        l_U665 = 39.00000000;
        l_U673 = {-472.71920000, 146.90300000, 9.01820000};
        l_U676 = 144.01530000;
        l_U678 = 9.14000000;
        l_U679 = 7000;
        break;
        case 3:
        l_U638 = "EECLJ_GTOL";
        l_U639 = "Luis_Anal";
        l_U640 = "Joni_Anal";
        l_U644 = {-473.10070000, 145.66240000, 9.00000000};
        l_U647 = 280.00000000;
        l_U648 = -1.15900000;
        l_U649 = 0.37600000;
        l_U651 = 0.85000000;
        l_U652 = {-471.57770000, 144.30130000, 10.21680000};
        l_U655 = {-3.11930400, 0.00000000, 25.96180000};
        l_U658 = 34.36098000;
        l_U659 = {-471.57770000, 144.30130000, 10.21680000};
        l_U662 = {-3.11930400, 0.00000000, 25.96180000};
        l_U665 = 31.36098000;
        l_U666 = {-473.35590000, 145.49890000, 10.75349000};
        l_U669 = {-32.45593000, 0.00000000, -66.70140000};
        l_U672 = 41.39999000;
        l_U673 = {-473.11480000, 145.66880000, 8.91520000};
        l_U676 = 114.49840000;
        l_U678 = 9.06000100;
        l_U679 = 7000;
        break;
        case 4:
        l_U638 = "E2CLJ_DANC";
        l_U639 = "Luis_Dance";
        l_U640 = "Joni_Dance";
        l_U644 = {-473.00100000, 145.72020000, 8.94000000};
        l_U647 = 321.29890000;
        l_U648 = -1.00100000;
        l_U649 = -0.22000000;
        l_U651 = 0.85000000;
        l_U652 = {-471.06400000, 147.54370000, 9.96000600};
        l_U655 = {-0.75325600, -0.00000000, 131.47050000};
        l_U658 = 40.50000000;
        l_U659 = {-471.25430000, 147.64220000, 9.95718800};
        l_U662 = {-0.75325600, -0.00000000, 135.81800000};
        l_U665 = 40.50000000;
        l_U673 = {-473.13710000, 145.56340000, 8.85860000};
        l_U676 = 141.29890000;
        l_U678 = 8.91000000;
        l_U679 = 7000;
        break;
    }
    SET_USE_HIGHDOF( 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    if (DOES_OBJECT_EXIST( l_U286 ))
    {
        SET_OBJECT_COORDINATES( l_U286, l_U673._fU0, l_U673._fU4, l_U673._fU8 );
        SET_OBJECT_HEADING( l_U286, l_U676 );
        SET_OBJECT_COLLISION( l_U286, 0 );
    }
    if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( g_U29971[g_U30198]._fU12 );
        SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, l_U644._fU0, l_U644._fU4, l_U644._fU8 );
        SET_CHAR_HEADING( g_U29971[g_U30198]._fU12, l_U647 );
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( g_U29971[g_U30198]._fU12, l_U648, l_U649, 0, ref l_U641._fU0, ref l_U641._fU4, ref l_U641._fU8 );
        if (g_U43693 == 2)
        {
            SET_CHAR_COMPONENT_VARIATION( g_U29971[g_U30198]._fU12, 1, 1, 0 );
        }
    }
    SET_CHAR_COORDINATES( sub_1955(), l_U641._fU0, l_U641._fU4, l_U678 );
    SET_CHAR_HEADING( sub_1955(), l_U647 );
    SET_CHAR_COLLISION( sub_1955(), 0 );
    FREEZE_CHAR_POSITION( sub_1955(), 1 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 790510853, 65065, 148, 10, 1, 0 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 790510853, 65065, 148, 10, 0, 0 );
    if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
    {
        TASK_PLAY_ANIM( g_U29971[g_U30198]._fU12, l_U640, "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
    }
    TASK_PLAY_ANIM( sub_1955(), l_U639, "MISSCLUB_MGMT", 8.00000000, 0, 0, 0, 0, 0 );
    SET_CAM_POS( l_U610, l_U652._fU0, l_U652._fU4, l_U652._fU8 );
    SET_CAM_ROT( l_U610, l_U655._fU0, l_U655._fU4, l_U655._fU8 );
    SET_CAM_FOV( l_U610, l_U658 );
    SET_CAM_POS( l_U609, l_U659._fU0, l_U659._fU4, l_U659._fU8 );
    SET_CAM_ROT( l_U609, l_U662._fU0, l_U662._fU4, l_U662._fU8 );
    SET_CAM_FOV( l_U609, l_U665 );
    SET_CAM_FAR_DOF( l_U610, 5 );
    SET_CAM_FAR_DOF( l_U609, 5 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_ACTIVE( l_U608, 1 );
    SET_CAM_PROPAGATE( l_U608, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, l_U679, 0 );
    WAIT( 0 );
    GET_GAME_VIEWPORT_ID( ref uVar2 );
    SET_ROOM_FOR_VIEWPORT_BY_NAME( uVar2, "E2_MaisonsecurRoom" );
    l_U330 = 0;
    SETTIMERA( 0 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    while (l_U329)
    {
        switch (g_U43693)
        {
            case 0:
            sub_54242();
            break;
            case 1:
            sub_55660();
            break;
            case 2:
            sub_57367();
            break;
            case 3:
            sub_59231();
            break;
            case 4:
            sub_61155();
            break;
        }
        if (sub_36936())
        {
            l_U329 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_CHAR_TASKS( sub_1955() );
            SET_CHAR_COORDINATES( sub_1955(), -472.39850000, 148.18050000, 8.85880000 );
            SET_CHAR_HEADING( sub_1955(), 300.60770000 );
            sub_34826( 0 );
            INCREMENT_INT_STAT( 372, 1 );
            sub_22318( ref l_U681, 0 );
            sub_22173( 0 );
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
        }
        WAIT( 0 );
    }
    SET_CHAR_COORDINATES( sub_1955(), -472.39850000, 148.18050000, 8.85880000 );
    SET_CHAR_HEADING( sub_1955(), 300.60770000 );
    SET_OBJECT_COORDINATES( l_U286, -473.08840000, 145.66880000, 8.85860000 );
    SET_OBJECT_HEADING( l_U286, 294.49840000 - 180 );
    SET_OBJECT_COLLISION( l_U286, 1 );
    if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
    {
        CLEAR_CHAR_TASKS( g_U29971[g_U30198]._fU12 );
        SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, -473.10700000, 145.81830000, 8.90600000 );
        SET_CHAR_HEADING( g_U29971[g_U30198]._fU12, 333.00000000 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( g_U29971[g_U30198]._fU12, "joni_idle", "MISSCLUB_MGMT", 4.00000000, 1, 0, 0, 0, 0 );
        SET_CHAR_COLLISION( g_U29971[g_U30198]._fU12, 0 );
        FREEZE_CHAR_POSITION( g_U29971[g_U30198]._fU12, 1 );
    }
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    END_CAM_COMMANDS( ref l_U612 );
    ENABLE_SCENE_STREAMING( 1 );
    SET_CHAR_COMPONENT_VARIATION( g_U29971[g_U30198]._fU12, 1, 0, 0 );
    SET_CHAR_COLLISION( sub_1955(), 1 );
    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
    FREEZE_CHAR_POSITION( sub_1955(), 0 );
    g_U10598 = 0;
    g_U43693++;
    if (g_U43693 > 4)
    {
        g_U43693 = 0;
    }
    GET_GAME_TIMER( ref l_U334 );
    l_U329 = 1;
    return;
}

void sub_54242()
{
    switch (l_U330)
    {
        case 0:
        sub_10502( l_U638, ref l_U681, 7, 1 );
        l_U330++;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.35000000)
                {
                    SET_CAM_POS( l_U610, -471.38110000, 149.85150000, 10.03368000 );
                    SET_CAM_ROT( l_U610, 1.43377200, 0.00000000, 152.11610000 );
                    SET_CAM_FOV( l_U610, 14.78157000 );
                    SET_CAM_POS( l_U609, -472.67040000, 150.13280000, 10.05137000 );
                    SET_CAM_ROT( l_U609, 1.43377200, 0.00000000, 169.37390000 );
                    SET_CAM_FOV( l_U609, 14.78157000 );
                    SET_CAM_FAR_DOF( l_U610, 5 );
                    SET_CAM_FAR_DOF( l_U609, 5 );
                    SET_CAM_ACTIVE( l_U608, 0 );
                    SET_CAM_PROPAGATE( l_U608, 0 );
                    SET_CAM_ACTIVE( l_U608, 1 );
                    SET_CAM_PROPAGATE( l_U608, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 7000, 0 );
                    l_U330++;
                }
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.65000000)
                {
                    SET_CAM_POS( l_U610, -472.11000000, 149.94710000, 9.82670800 );
                    SET_CAM_ROT( l_U610, 1.69792200, 0.00000000, 171.46900000 );
                    SET_CAM_FOV( l_U610, 25.28154000 );
                    SET_CAM_POS( l_U609, -472.40250000, 150.08440000, 9.81339300 );
                    SET_CAM_ROT( l_U609, 1.69792200, 0.00000000, 150.32380000 );
                    SET_CAM_FOV( l_U609, 25.28154000 );
                    SET_CAM_FAR_DOF( l_U610, 5 );
                    SET_CAM_FAR_DOF( l_U609, 5 );
                    SET_CAM_ACTIVE( l_U608, 0 );
                    SET_CAM_PROPAGATE( l_U608, 0 );
                    SET_CAM_ACTIVE( l_U608, 1 );
                    SET_CAM_PROPAGATE( l_U608, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 10000, 0 );
                    l_U330++;
                }
            }
        }
        break;
        case 3:
        l_U330++;
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > l_U651)
                {
                    l_U330++;
                }
            }
        }
        break;
        case 5:
        if (NOT (sub_15316( l_U681 )))
        {
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
            FREEZE_CHAR_POSITION( sub_1955(), 0 );
            SET_CHAR_COORDINATES( sub_1955(), -472.29230000, 147.99760000, 8.85880000 );
            SET_CHAR_HEADING( sub_1955(), 324.01530000 );
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( g_U29971[g_U30198]._fU12 );
                SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, -472.48740000, 145.92200000, 8.85860000 );
                SET_CHAR_HEADING( g_U29971[g_U30198]._fU12, 26.51080000 );
            }
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_34826( 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
            l_U329 = 0;
        }
        break;
    }
    return;
}

void sub_55660()
{
    switch (l_U330)
    {
        case 0:
        sub_10502( l_U638, ref l_U681, 7, 1 );
        l_U330++;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.30000000)
                {
                    SET_CAM_POS( l_U610, -471.97470000, 147.38570000, 10.44006000 );
                    SET_CAM_ROT( l_U610, -3.20114700, 0.00000000, 136.94900000 );
                    SET_CAM_FOV( l_U610, 30.90003000 );
                    SET_CAM_POS( l_U609, -473.20650000, 147.16480000, 10.42233000 );
                    SET_CAM_ROT( l_U609, 0.29335900, 0.00000000, 159.17710000 );
                    SET_CAM_FOV( l_U609, 30.90003000 );
                    SET_CAM_FAR_DOF( l_U610, 5 );
                    SET_CAM_FAR_DOF( l_U609, 5 );
                    SET_CAM_ACTIVE( l_U608, 0 );
                    SET_CAM_PROPAGATE( l_U608, 0 );
                    SET_CAM_ACTIVE( l_U608, 1 );
                    SET_CAM_PROPAGATE( l_U608, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 7000, 0 );
                    l_U330++;
                }
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.60000000)
                {
                    SET_CAM_POS( l_U610, -474.72760000, 147.11940000, 10.50292000 );
                    SET_CAM_ROT( l_U610, -4.70936800, -0.00000000, -143.03280000 );
                    SET_CAM_FOV( l_U610, 30.90003000 );
                    SET_CAM_POS( l_U609, -474.18870000, 147.09890000, 10.45843000 );
                    SET_CAM_ROT( l_U609, -4.70936800, 0.00000000, -155.34290000 );
                    SET_CAM_FOV( l_U609, 30.90003000 );
                    SET_CAM_FAR_DOF( l_U610, 5 );
                    SET_CAM_FAR_DOF( l_U609, 5 );
                    SET_CAM_ACTIVE( l_U608, 0 );
                    SET_CAM_PROPAGATE( l_U608, 0 );
                    SET_CAM_ACTIVE( l_U608, 1 );
                    SET_CAM_PROPAGATE( l_U608, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 7000, 0 );
                    l_U330++;
                }
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.80000000)
                {
                    SET_CAM_POS( l_U610, -471.38110000, 149.85150000, 10.03368000 );
                    SET_CAM_POS( l_U610, -473.18330000, 149.31980000, 10.23836000 );
                    SET_CAM_ROT( l_U610, -1.65332100, -0.00000000, -179.25190000 );
                    SET_CAM_FOV( l_U610, 30.90003000 );
                    SET_CAM_POS( l_U609, -472.08170000, 148.91130000, 10.20441000 );
                    SET_CAM_ROT( l_U609, -1.65332100, -0.00000000, 153.23990000 );
                    SET_CAM_FOV( l_U609, 30.90003000 );
                    SET_CAM_FAR_DOF( l_U610, 5 );
                    SET_CAM_FAR_DOF( l_U609, 5 );
                    SET_CAM_ACTIVE( l_U608, 0 );
                    SET_CAM_PROPAGATE( l_U608, 0 );
                    SET_CAM_ACTIVE( l_U608, 1 );
                    SET_CAM_PROPAGATE( l_U608, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 7000, 0 );
                    l_U330++;
                }
            }
        }
        break;
        case 4:
        l_U330++;
        break;
        case 5:
        if (NOT (sub_15316( l_U681 )))
        {
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
            FREEZE_CHAR_POSITION( sub_1955(), 0 );
            SET_CHAR_COORDINATES( sub_1955(), -472.29230000, 147.99760000, 8.85880000 );
            SET_CHAR_HEADING( sub_1955(), 324.01530000 );
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( g_U29971[g_U30198]._fU12 );
                SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, -472.48740000, 145.92200000, 8.85860000 );
                SET_CHAR_HEADING( g_U29971[g_U30198]._fU12, 26.51080000 );
            }
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_34826( 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
            l_U329 = 0;
        }
        break;
    }
    return;
}

void sub_57367()
{
    SET_USE_LEG_IK( sub_903(), 0 );
    switch (l_U330)
    {
        case 0:
        sub_10502( l_U638, ref l_U681, 7, 1 );
        l_U330++;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.25000000)
                {
                    l_U330++;
                }
            }
        }
        break;
        case 2:
        SET_CAM_POS( l_U610, -472.72660000, 146.33510000, 10.17301000 );
        SET_CAM_ROT( l_U610, 2.93517700, -0.00000000, 24.35951000 );
        SET_CAM_FOV( l_U610, 35.10003000 );
        SET_CAM_POS( l_U609, -472.27810000, 148.39010000, 10.15310000 );
        SET_CAM_ROT( l_U609, 1.44533300, 0.00000000, 131.80010000 );
        SET_CAM_FOV( l_U609, 35.10003000 );
        SET_CAM_FAR_DOF( l_U610, 5 );
        SET_CAM_FAR_DOF( l_U609, 5 );
        SET_CAM_ACTIVE( l_U608, 0 );
        SET_CAM_PROPAGATE( l_U608, 0 );
        SET_CAM_ACTIVE( l_U608, 1 );
        SET_CAM_PROPAGATE( l_U608, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 3000, 0 );
        l_U330++;
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.35000000)
                {
                    SET_CAM_POS( l_U610, -472.62560000, 146.52630000, 10.20687000 );
                    SET_CAM_ROT( l_U610, -15.85176000, 0.00000000, 17.99968000 );
                    SET_CAM_FOV( l_U610, 41.70001000 );
                    SET_CAM_POS( l_U609, -472.62560000, 146.52630000, 10.20687000 );
                    SET_CAM_ROT( l_U609, -15.85176000, 0.00000000, 17.99968000 );
                    SET_CAM_FOV( l_U609, 42.70001000 );
                    SET_CAM_FAR_DOF( l_U610, 5 );
                    SET_CAM_FAR_DOF( l_U609, 5 );
                    SET_CAM_ACTIVE( l_U608, 0 );
                    SET_CAM_PROPAGATE( l_U608, 0 );
                    SET_CAM_ACTIVE( l_U608, 1 );
                    SET_CAM_PROPAGATE( l_U608, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 3000, 0 );
                    l_U330++;
                }
            }
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.60000000)
                {
                    SET_CAM_POS( l_U610, -474.61450000, 148.37970000, 11.09079000 );
                    SET_CAM_ROT( l_U610, -36.87156000, -4.84860900, -127.49780000 );
                    SET_CAM_FOV( l_U610, 42.70001000 );
                    SET_CAM_POS( l_U609, -474.43800000, 148.23930000, 10.92492000 );
                    SET_CAM_ROT( l_U609, -35.89527000, -4.90957300, -121.50350000 );
                    SET_CAM_FOV( l_U609, 42.70001000 );
                    SET_CAM_FAR_DOF( l_U610, 5 );
                    SET_CAM_FAR_DOF( l_U609, 5 );
                    SET_CAM_ACTIVE( l_U608, 0 );
                    SET_CAM_PROPAGATE( l_U608, 0 );
                    SET_CAM_ACTIVE( l_U608, 1 );
                    SET_CAM_PROPAGATE( l_U608, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 3000, 0 );
                    l_U330++;
                }
            }
        }
        break;
        case 5:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > l_U651)
                {
                    l_U330++;
                }
            }
        }
        break;
        case 6:
        if (NOT (sub_15316( l_U681 )))
        {
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
            FREEZE_CHAR_POSITION( sub_1955(), 0 );
            SET_CHAR_COORDINATES( sub_1955(), -472.39850000, 148.18050000, 8.85880000 );
            SET_CHAR_HEADING( sub_1955(), 300.60770000 );
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( g_U29971[g_U30198]._fU12 );
                SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, -472.48740000, 145.92200000, 8.85860000 );
                SET_CHAR_HEADING( g_U29971[g_U30198]._fU12, 26.51080000 );
            }
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 0 );
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_34826( 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
            l_U329 = 0;
        }
        break;
    }
    return;
}

void sub_59231()
{
    switch (l_U330)
    {
        case 0:
        sub_10502( l_U638, ref l_U681, 7, 1 );
        l_U330++;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.17000000)
                {
                    l_U330++;
                }
            }
        }
        break;
        case 2:
        SET_CAM_POS( l_U610, -471.08010000, 148.97050000, 10.08064000 );
        SET_CAM_ROT( l_U610, 0.23949800, 0.00000000, 153.86870000 );
        SET_CAM_FOV( l_U610, 21.46101000 );
        SET_CAM_POS( l_U609, -471.58000000, 148.70850000, 10.08295000 );
        SET_CAM_ROT( l_U609, 0.78416900, 0.00000000, 157.31830000 );
        SET_CAM_FOV( l_U609, 21.46101000 );
        SET_CAM_FAR_DOF( l_U610, 5 );
        SET_CAM_FAR_DOF( l_U609, 5 );
        SET_CAM_ACTIVE( l_U608, 0 );
        SET_CAM_PROPAGATE( l_U608, 0 );
        SET_CAM_ACTIVE( l_U608, 1 );
        SET_CAM_PROPAGATE( l_U608, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 7000, 0 );
        l_U330++;
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.38000000)
                {
                    SET_CHAR_COMPONENT_VARIATION( g_U29971[g_U30198]._fU12, 1, 1, 0 );
                    SET_CAM_POS( l_U610, l_U666._fU0, l_U666._fU4, l_U666._fU8 );
                    SET_CAM_ROT( l_U610, l_U669._fU0, l_U669._fU4, l_U669._fU8 );
                    SET_CAM_FOV( l_U610, l_U672 );
                    SET_CAM_POS( l_U609, l_U666._fU0, l_U666._fU4, l_U666._fU8 );
                    SET_CAM_ROT( l_U609, l_U669._fU0, l_U669._fU4, l_U669._fU8 );
                    SET_CAM_FOV( l_U609, l_U672 - 3 );
                    SET_CAM_FAR_DOF( l_U610, 5 );
                    SET_CAM_FAR_DOF( l_U609, 5 );
                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                    SET_CAM_ACTIVE( l_U608, 1 );
                    SET_CAM_PROPAGATE( l_U608, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 3000, 0 );
                    SET_OBJECT_COORDINATES( l_U286, -474.03180000, 145.41810000, 8.85849900 );
                    SET_OBJECT_HEADING( l_U286, 294.49840000 - 180 );
                    l_U330++;
                }
            }
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.75000000)
                {
                    SET_CAM_POS( l_U610, -471.24760000, 147.20760000, 9.88372700 );
                    SET_CAM_ROT( l_U610, 5.67796900, 0.00000000, 153.82200000 );
                    SET_CAM_FOV( l_U610, 39.32224000 );
                    SET_CAM_POS( l_U609, -471.24760000, 146.76790000, 9.88372700 );
                    SET_CAM_ROT( l_U609, 6.87599800, 0.00000000, 139.72220000 );
                    SET_CAM_FOV( l_U609, 39.32224000 );
                    SET_CAM_FAR_DOF( l_U610, 5 );
                    SET_CAM_FAR_DOF( l_U609, 5 );
                    SET_CAM_ACTIVE( l_U608, 0 );
                    SET_CAM_PROPAGATE( l_U608, 0 );
                    SET_CAM_ACTIVE( l_U608, 1 );
                    SET_CAM_PROPAGATE( l_U608, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 3000, 0 );
                    l_U330++;
                }
            }
        }
        break;
        case 5:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > l_U651)
                {
                    l_U330++;
                }
            }
        }
        break;
        case 6:
        if (NOT (sub_15316( l_U681 )))
        {
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
            FREEZE_CHAR_POSITION( sub_1955(), 0 );
            SET_CHAR_COORDINATES( sub_1955(), -472.29230000, 147.99760000, 8.85880000 );
            SET_CHAR_HEADING( sub_1955(), 333.00000000 );
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( g_U29971[g_U30198]._fU12 );
                SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, -472.48740000, 145.92200000, 8.85860000 );
                SET_CHAR_HEADING( g_U29971[g_U30198]._fU12, 26.51080000 );
            }
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 0 );
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_34826( 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
            l_U329 = 0;
        }
        break;
    }
    return;
}

void sub_61155()
{
    switch (l_U330)
    {
        case 0:
        sub_61245( l_U638, 0, 1, ref l_U681, 7, 1 );
        l_U330++;
        break;
        case 1:
        if (NOT sub_18996())
        {
            sub_61245( l_U638, 2, 1, ref l_U681, 7, 1 );
            l_U330++;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.40000000)
                {
                    SET_CAM_POS( l_U611, -473.89120000, 144.82030000, 9.83182500 );
                    SET_CAM_ROT( l_U611, 5.79297000, -0.00000000, -44.69802000 );
                    SET_CAM_FOV( l_U611, 40.50000000 );
                    SET_CAM_FAR_DOF( l_U611, 5 );
                    SET_CAM_ACTIVE( l_U608, 0 );
                    SET_CAM_PROPAGATE( l_U608, 0 );
                    SET_CAM_ACTIVE( l_U611, 1 );
                    SET_CAM_PROPAGATE( l_U611, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 3000, 0 );
                    l_U330++;
                }
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > 0.60000000)
                {
                    SET_CAM_POS( l_U610, -473.32300000, 147.61990000, 10.62052000 );
                    SET_CAM_ROT( l_U610, -13.23367000, -1.90116000, -165.97420000 );
                    SET_CAM_FOV( l_U610, 30.30003000 );
                    SET_CAM_POS( l_U609, -474.51510000, 146.56450000, 10.18193000 );
                    SET_CAM_ROT( l_U609, -2.09426200, -1.95168000, -117.36370000 );
                    SET_CAM_FOV( l_U609, 30.30003000 );
                    SET_CAM_FAR_DOF( l_U610, 5 );
                    SET_CAM_FAR_DOF( l_U609, 5 );
                    SET_CAM_ACTIVE( l_U608, 0 );
                    SET_CAM_PROPAGATE( l_U608, 0 );
                    SET_CAM_ACTIVE( l_U608, 1 );
                    SET_CAM_PROPAGATE( l_U608, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U608, l_U610, l_U609, 3000, 0 );
                    SETTIMERA( 0 );
                    l_U330++;
                }
            }
        }
        break;
        case 4:
        if (TIMERA() > 500)
        {
            sub_61245( l_U638, 4, 0, ref l_U681, 7, 1 );
            l_U330++;
        }
        break;
        case 5:
        if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
        {
            if (IS_CHAR_PLAYING_ANIM( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640 ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( g_U29971[g_U30198]._fU12, "MISSCLUB_MGMT", l_U640, ref l_U677 );
                if (l_U677 > l_U651)
                {
                    l_U330++;
                }
            }
        }
        break;
        case 6:
        if (NOT (sub_15316( l_U681 )))
        {
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1955() );
            FREEZE_CHAR_POSITION( sub_1955(), 0 );
            SET_CHAR_COORDINATES( sub_1955(), -472.29230000, 147.99760000, 8.85880000 );
            SET_CHAR_HEADING( sub_1955(), 324.01530000 );
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1955(), 0 );
            if (NOT (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( g_U29971[g_U30198]._fU12 );
                SET_CHAR_COORDINATES( g_U29971[g_U30198]._fU12, -472.48740000, 145.92200000, 8.85860000 );
                SET_CHAR_HEADING( g_U29971[g_U30198]._fU12, 26.51080000 );
            }
            SET_CAM_ACTIVE( l_U608, 0 );
            SET_CAM_PROPAGATE( l_U608, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            sub_34826( 0 );
            SET_CAM_BEHIND_PED( sub_1955() );
            l_U329 = 0;
        }
        break;
    }
    return;
}

void sub_61245(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_61270( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_61270(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_10577( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

int sub_64657(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_903() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_903() )))
            {
                if (((g_U9200) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_903() )))))
                {
                    if (NOT sub_64753())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1955() )) == nil)
                        {
                            if (g_U10534 <= iParam0)
                            {
                                if (g_U10535 == 0)
                                {
                                    if (sub_64838())
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

int sub_64753()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_64838()
{
    return sub_64849( 0, 0 );
}

int sub_64849(boolean bParam0, unknown uParam1)
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

int sub_64965(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
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
    if (sub_64657( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U102)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_903(), 0 );
                l_U102 = 1;
            }
            g_U10534 = uParam0;
            l_U103 = 1;
            StrCopy( ref g_U10536, sParam1, 16 );
            g_U10540 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_65246();
                l_U101 = 1;
                g_U10535 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U10535 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U100 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U100)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U100 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_65246()
{
    return sub_64849( 1, 1 );
}

void sub_65761(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_65774( uParam0, uParam2 ), sub_65774( uParam1, uParam2 ) );
}

void sub_65774(unknown uParam0, boolean bParam1)
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

