void main()
{
    int iVar2;
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
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
    l_U275 = {-505.67700000, 1012.86100000, 8.74780000};
    l_U279 = {-278.40240000, 22.64970000, 13.60230000};
    l_U298 = 0;
    l_U336 = 0;
    l_U337 = 0;
    l_U338 = 0;
    l_U339 = 0;
    l_U340 = 0;
    l_U341 = 0;
    l_U342 = 0;
    l_U343 = 0;
    l_U344 = 0;
    l_U345 = 0;
    l_U346 = 0;
    l_U347 = 0;
    l_U348 = 0;
    l_U349 = 0;
    l_U354 = {-460.67510000, 152.90150000, 8.74310000};
    l_U357 = 183.67400000;
    l_U358 = {-477.53300000, 156.73000000, 6.55090000};
    l_U361 = {-481.89720000, 147.04190000, 6.55070000};
    l_U364 = {-480.67240000, 165.78080000, 10.61200000};
    l_U367 = {-477.60400000, 142.40070000, 6.55290000};
    l_U370 = {-468.55550000, 140.33990000, 8.85910100};
    l_U373 = 129.90300000;
    l_U374 = 104.42500000;
    l_U375 = 184.52100000;
    l_U376 = 90.00000000;
    l_U377 = 45.32310000;
    l_U384 = {-432.84300000, 352.99960000, 10.71170000};
    l_U387 = 44.74590000;
    l_U388 = 0;
    l_U389 = 0;
    l_U390 = 0;
    l_U391 = 0;
    l_U392 = 0;
    l_U393 = 0;
    l_U394 = 1;
    l_U396 = 0;
    l_U399 = 8000;
    l_U400 = 8000;
    l_U401 = 0;
    l_U409 = 1;
    l_U412 = 1;
    l_U414 = 0;
    l_U415 = 0;
    l_U416 = 0;
    l_U417 = 0;
    l_U435 = {0.00000000, 0.30000000, 0.00000000};
    l_U438 = 40.00000000;
    l_U439 = 2000;
    l_U440 = 4.00000000;
    l_U443 = -45.00000000;
    l_U444 = 45.00000000;
    l_U445 = -89.00000000;
    l_U446 = 89.00000000;
    l_U448 = 50.00000000;
    l_U449 = {0.00000000, 0.00000000, 0.70000000};
    sub_803();
    while (true)
    {
        WAIT( 0 );
        switch (l_U269)
        {
            case 0:
            switch (l_U402)
            {
                case 0:
                g_U30180 = 1;
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_3157( g_U30199, 1 );
                        WAIT( 0 );
                        sub_3300( "CLBPRC6", 0 );
                        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "LA6" )))
                        {
                            PRINT_HELP_FOREVER( "LA6" );
                        }
                        sub_3475();
                        SETTIMERA( 0 );
                        SWITCH_GARBAGE_TRUCKS( 0 );
                        g_U10935 = 1;
                        REQUEST_MODEL( 1448755353 );
                        REQUEST_MODEL( -836732954 );
                        REQUEST_MODEL( 2046537925 );
                        REQUEST_MODEL( -183203150 );
                        REQUEST_CAR_RECORDING( 1903 );
                        REQUEST_CAR_RECORDING( 1904 );
                        REQUEST_CAR_RECORDING( 1905 );
                        REQUEST_MODEL( sub_4676( 0 ) );
                        REQUEST_ANIMS( "misstonym7" );
                        REQUEST_ANIMS( "missnightclub" );
                        sub_3300( "E2Tm7AU", 6 );
                        sub_4906( "E2Tm7AU" );
                        sub_5025( 0, sub_3889(), "LUIS", 0 );
                        sub_5172( 28, 0 );
                        g_U8781 = 0;
                        l_U402++;
                    }
                }
                break;
                case 1:
                sub_3475();
                if ((HAVE_ANIMS_LOADED( "missnightclub" )) AND ((HAVE_ANIMS_LOADED( "misstonym7" )) AND ((HAS_MODEL_LOADED( sub_4676( 0 ) )) AND ((HAS_CAR_RECORDING_BEEN_LOADED( 1905 )) AND ((HAS_CAR_RECORDING_BEEN_LOADED( 1904 )) AND ((HAS_CAR_RECORDING_BEEN_LOADED( 1903 )) AND ((HAS_MODEL_LOADED( -183203150 )) AND ((HAS_MODEL_LOADED( 2046537925 )) AND ((HAS_MODEL_LOADED( -836732954 )) AND (HAS_MODEL_LOADED( 1448755353 )))))))))))
                {
                    l_U402++;
                }
                break;
                case 2:
                sub_3475();
                if (TIMERA() > 4000)
                {
                    sub_5527();
                    CLEAR_HELP();
                    l_U402++;
                }
                break;
                case 3:
                SET_WIDESCREEN_BORDERS( 1 );
                sub_5754( sub_3889() );
                sub_6836( 1 );
                OPEN_SEQUENCE_TASK( ref l_U411 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "luis_check_earpiece_intro", "misstonym7", 8.00000000, 0, 0, 0, 0, 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "luis_check_earpiece_loop", "misstonym7", 8.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U411 );
                TASK_PERFORM_SEQUENCE( sub_3889(), l_U411 );
                CLEAR_SEQUENCE_TASK( l_U411 );
                if (g_U30199 != -1)
                {
                    if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                    {
                        sub_5025( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                        sub_7152( "E2Tm7_TODO", ref l_U426, 7, 0 );
                    }
                }
                l_U402++;
                break;
                case 4:
                if ((sub_8299()) || (NOT (sub_8136( l_U426 ))))
                {
                    if (g_U30199 != -1)
                    {
                        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                        {
                            sub_3157( g_U30199, 0 );
                        }
                    }
                    CLEAR_CHAR_TASKS( sub_3889() );
                    if (sub_8136( l_U426 ))
                    {
                        sub_8484( ref l_U426, 0 );
                    }
                    sub_8608();
                    sub_6836( 0 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    SET_PLAYER_CONTROL( sub_947(), 1 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3889(), 0 );
                    SET_CAR_GENERATORS_ACTIVE_IN_AREA( 65346, 615, -10, 65391, 620, 100, 0 );
                    SET_WANTED_MULTIPLIER( 0.50000000 );
                    sub_8861( -432.84300000, 352.99960000, 10.71170000, 1.50000000, 2 );
                    sub_9154();
                    CREATE_OBJECT( -71916080, 65055, 144, 6, ref l_U350, 1 );
                    ATTACH_OBJECT_TO_PED( l_U350, l_U296, 1219, 0.06800000, 0.04000000, 0.02500000, 0.00000000, 0.00000000, 0.00000000, 0 );
                    if (NOT (IS_CHAR_DEAD( l_U296 )))
                    {
                        ADD_BLIP_FOR_CHAR( l_U296, ref l_U297 );
                        SET_BLIP_AS_FRIENDLY( l_U297, 1 );
                        sub_9489( l_U297 );
                    }
                    sub_9529();
                    PRINT( "CP6_02", 7500, 0 );
                    l_U402 = 0;
                    l_U269 = 3;
                }
                break;
            }
            break;
            case 3:
            sub_10878();
            sub_12124();
            sub_12376();
            if (NOT IS_INTERIOR_SCENE())
            {
                if (NOT (sub_13662( 0 )))
                {
                    if (NOT l_U298)
                    {
                        if (g_U30199 != -1)
                        {
                            if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
                            {
                                sub_5025( 1, g_U29971[g_U30199]._fU12, "DESSIE", 0 );
                                sub_14005( ref l_U299, "E2Tm7_BYE", "E2Tm7_SORTD" );
                                sub_14352( ref l_U299, ref l_U426, 7, 1 );
                                l_U298 = 1;
                            }
                        }
                    }
                }
            }
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref iVar2 );
            if (DOES_VEHICLE_EXIST( iVar2 ))
            {
                if (IS_VEH_DRIVEABLE( iVar2 ))
                {
                    SET_CAR_AS_MISSION_CAR( iVar2 );
                    if (iVar2 != l_U353)
                    {
                        sub_2759();
                    }
                }
            }
            if ((NOT (IS_CHAR_DEAD( l_U296 ))) AND (DOES_CHAR_EXIST( l_U296 )))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_947(), 0 )))
                {
                    if ((sub_14552( sub_3889(), l_U296, 1 )) < 2.50000000)
                    {
                        if (DOES_OBJECT_EXIST( l_U350 ))
                        {
                            DETACH_OBJECT( l_U350, 1 );
                            DELETE_OBJECT( ref l_U350 );
                        }
                        CLEAR_CHAR_TASKS( l_U296 );
                        sub_14005( ref l_U308, "E2TM7_HIYA", "E2TM7_COMU" );
                        sub_14352( ref l_U308, ref l_U426, 7, 1 );
                        if (DOES_BLIP_EXIST( l_U297 ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U297 );
                            SET_GROUP_MEMBER( sub_14824(), l_U296 );
                        }
                        SETTIMERA( 0 );
                        l_U269 = 5;
                    }
                }
            }
            break;
            case 5:
            sub_14896();
            sub_10878();
            sub_12376();
            if (NOT (sub_13662( 0 )))
            {
                if (TIMERA() > 12500)
                {
                    if (DOES_CHAR_EXIST( l_U296 ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U296 )))
                        {
                            if (NOT (IS_WANTED_LEVEL_GREATER( sub_947(), 0 )))
                            {
                                if ((sub_14552( sub_3889(), l_U296, 1 )) < 8)
                                {
                                    if (NOT l_U335)
                                    {
                                        if (g_U43689 == 0)
                                        {
                                            sub_7152( "E2TM7_WLK1", ref l_U426, 7, 1 );
                                        }
                                        else if (g_U43689 == 1)
                                        {
                                            sub_7152( "E2TM7_WLK2", ref l_U426, 7, 1 );
                                        }
                                        else if (g_U43689 > 1)
                                        {
                                            GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                                            if (iVar3 == 0)
                                            {
                                                sub_7152( "E2TM7_WLK1", ref l_U426, 7, 1 );
                                            }
                                            else if (iVar3 == 1)
                                            {
                                                sub_7152( "E2TM7_WLK2", ref l_U426, 7, 1 );
                                            }
                                        };;;
                                        l_U335 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (DOES_CHAR_EXIST( l_U296 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U296 )))
                {
                    if (IS_CHAR_IN_ANY_CAR( sub_3889() ))
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_947(), 0 )))
                        {
                            if ((sub_14552( l_U296, sub_3889(), 1 )) < 8)
                            {
                                if (NOT l_U336)
                                {
                                    sub_7152( "E2TM7_WHER", ref l_U426, 7, 1 );
                                    SETTIMERA( 0 );
                                    l_U336 = 1;
                                }
                            }
                        }
                        if (sub_15438( l_U296, sub_3889(), 1 ))
                        {
                            if (l_U336)
                            {
                                if (NOT (sub_13662( 0 )))
                                {
                                    if (NOT l_U337)
                                    {
                                        if (TIMERA() > 12000)
                                        {
                                            if (g_U43689 == 0)
                                            {
                                                sub_14005( ref l_U317, "E2TM7_B1AV1", "E2TM7_B1BV1" );
                                                sub_14352( ref l_U317, ref l_U426, 7, 1 );
                                            }
                                            else if (g_U43689 == 1)
                                            {
                                                sub_14005( ref l_U317, "E2TM7_B1AV2", "E2TM7_B1BV2" );
                                                sub_14352( ref l_U317, ref l_U426, 7, 1 );
                                            }
                                            else if (g_U43689 > 1)
                                            {
                                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar4 );
                                                if (iVar4 == 0)
                                                {
                                                    sub_14005( ref l_U317, "E2TM7_B1AV1", "E2TM7_B1BV1" );
                                                    sub_14352( ref l_U317, ref l_U426, 7, 1 );
                                                }
                                                else if (iVar4 == 1)
                                                {
                                                    sub_14005( ref l_U317, "E2TM7_B1AV2", "E2TM7_B1BV2" );
                                                    sub_14352( ref l_U317, ref l_U426, 7, 1 );
                                                }
                                            };;;
                                            l_U337 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (l_U337)
            {
                if (DOES_CHAR_EXIST( l_U296 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U296 )))
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( sub_947(), 0 )))
                        {
                            if (NOT (sub_15438( l_U296, sub_3889(), 1 )))
                            {
                                sub_16125( ref l_U426 );
                            }
                            else
                            {
                                sub_16570( ref l_U317, ref l_U426, 7, 1 );
                            }
                        }
                    }
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3889(), l_U275._fU0, l_U275._fU4, l_U275._fU8, 150, 150, 50, 0 ))
            {
                if (NOT l_U390)
                {
                    sub_16716();
                }
            }
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_947(), 0 )))
            {
                uVar5 = {sub_14565( sub_3889(), 1 )};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar5._fU0, uVar5._fU4, uVar5._fU8, l_U275._fU0, l_U275._fU4, l_U275._fU8, ref fVar8 );
                if ((fVar8 < 17) || ((LOCATE_CHAR_ANY_MEANS_3D( sub_3889(), -578.81230000, 1011.17800000, 8.74770000, 7, 7, 5, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( sub_3889(), -466.73030000, 1011.89500000, 8.76500000, 7, 7, 5, 0 ))))
                {
                    if (sub_15438( l_U296, sub_3889(), 1 ))
                    {
                        if (NOT l_U340)
                        {
                            sub_8484( ref l_U426, 1 );
                            if (NOT sub_13732())
                            {
                                sub_7152( "E2TM7_VESP", ref l_U426, 7, 1 );
                                l_U340 = 1;
                            }
                        }
                    }
                }
            }
            sub_17347();
            if (sub_17545( l_U275._fU0, l_U275._fU4, l_U275._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1, l_U296, "CP6_03", "CP6_06", "CP6_12", 0, 1, "CP6_08" ))
            {
                SET_PLAYER_CONTROL_ADVANCED( sub_947(), 0, 1, 1 );
                if (NOT (IS_CHAR_INJURED( l_U283[0] )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U283[0], -506.86500000, 1018.20300000, 9.00960000, 2, 30000, 1.50000000 );
                }
                if (NOT (IS_CHAR_INJURED( l_U283[1] )))
                {
                    TASK_FOLLOW_NAV_MESH_TO_COORD( l_U283[1], -505.14030000, 1017.74200000, 9.03720000, 2, 30000, 1.50000000 );
                }
                WAIT( 0 );
                l_U269 = 6;
            }
            break;
            case 6:
            sub_10922( 1 );
            sub_8484( ref l_U426, 1 );
            CLEAR_WANTED_LEVEL( sub_947() );
            if (NOT (IS_CHAR_DEAD( l_U296 )))
            {
                if (IS_PED_IN_GROUP( l_U296 ))
                {
                    REMOVE_CHAR_FROM_GROUP( l_U296 );
                }
            }
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U383 );
            if (NOT (IS_CAR_DEAD( l_U383 )))
            {
                SET_CAR_AS_MISSION_CAR( l_U383 );
            }
            if (NOT (IS_CAR_DEAD( l_U383 )))
            {
                SET_CAR_COORDINATES( l_U383, -504.85490000, 1012.19800000, 8.74800000 );
                SET_CAR_HEADING( l_U383, 264.31000000 );
            }
            CLEAR_AREA( -504.85490000, 1012.19800000, 8.74800000, 500, 1 );
            sub_30766();
            ENABLE_SCENE_STREAMING( 0 );
            BEGIN_CAM_COMMANDS( ref l_U403 );
            if (NOT l_U404)
            {
                sub_31189();
            }
            SET_USE_HIGHDOF( 1 );
            SET_WIDESCREEN_BORDERS( 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            SET_CAM_POS( l_U406, -505.08930000, 1024.04500000, 10.41831000 );
            SET_CAM_ROT( l_U406, -5.97528800, 0.00000000, 174.14740000 );
            SET_CAM_FOV( l_U406, 31.80003000 );
            SET_CAM_POS( l_U407, -505.08930000, 1024.04500000, 10.41831000 );
            SET_CAM_ROT( l_U407, -5.97528700, -0.00000000, 174.14730000 );
            SET_CAM_FOV( l_U407, 23.40006000 );
            SET_CAM_ACTIVE( l_U408, 1 );
            SET_CAM_PROPAGATE( l_U408, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U408, l_U406, l_U407, 6500, 0 );
            if (IS_CHAR_IN_ANY_CAR( sub_3889() ))
            {
                TASK_LEAVE_ANY_CAR( sub_3889() );
            }
            SETTIMERA( 0 );
            while (l_U409 == 1)
            {
                switch (l_U410)
                {
                    case 0:
                    if (NOT (IS_CHAR_INJURED( l_U296 )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( l_U296 ))
                        {
                            if (NOT (IS_CHAR_DEAD( l_U283[0] )))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U411 );
                                TASK_LEAVE_ANY_CAR( 0 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -505.14030000, 1017.74200000, 9.03720000, 2, 30000, 1.50000000 );
                                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U283[0] );
                                TASK_LOOK_AT_CHAR( 0, l_U283[0], 20000, 0 );
                                CLOSE_SEQUENCE_TASK( l_U411 );
                                TASK_PERFORM_SEQUENCE( l_U296, l_U411 );
                                CLEAR_SEQUENCE_TASK( l_U411 );
                            }
                        }
                        else if (NOT (IS_CHAR_DEAD( l_U283[0] )))
                        {
                            TASK_LOOK_AT_CHAR( l_U296, l_U283[0], 20000, 0 );
                        }
                    }
                    OPEN_SEQUENCE_TASK( ref l_U411 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -505.85870000, 1017.19300000, 9.01060000, 2, 30000, 1.50000000 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U283[0] );
                    TASK_LOOK_AT_CHAR( 0, l_U283[0], 20000, 0 );
                    CLOSE_SEQUENCE_TASK( l_U411 );
                    TASK_PERFORM_SEQUENCE( sub_3889(), l_U411 );
                    CLEAR_SEQUENCE_TASK( l_U411 );
                    l_U410++;
                    break;
                    case 1:
                    if (TIMERA() > 500)
                    {
                        sub_7152( "E2TM7_OSC1", ref l_U426, 7, 1 );
                        l_U410++;
                    }
                    break;
                    case 2:
                    if (TIMERA() > 6000)
                    {
                        SET_CAM_POS( l_U406, -509.69710000, 1020.58300000, 10.68606000 );
                        SET_CAM_ROT( l_U406, -2.32384200, 0.00000000, -123.50500000 );
                        SET_CAM_FOV( l_U406, 22.50006000 );
                        SET_CAM_POS( l_U407, -509.60650000, 1019.75100000, 10.69092000 );
                        SET_CAM_ROT( l_U407, -2.32384200, -0.00000000, -114.33770000 );
                        SET_CAM_FOV( l_U407, 22.50006000 );
                        SET_CAM_ACTIVE( l_U405, 0 );
                        SET_CAM_PROPAGATE( l_U405, 0 );
                        SET_CAM_ACTIVE( l_U408, 1 );
                        SET_CAM_PROPAGATE( l_U408, 1 );
                        SET_CAM_INTERP_STYLE_CORE( l_U408, l_U406, l_U407, 5000, 0 );
                        if (NOT (IS_CHAR_DEAD( l_U296 )))
                        {
                            CLEAR_CHAR_TASKS( l_U296 );
                            SET_CHAR_COORDINATES( l_U296, -504.87270000, 1016.59200000, 8.97550000 );
                            SET_CHAR_HEADING( l_U296, 35.11660000 );
                        }
                        CLEAR_CHAR_TASKS( sub_3889() );
                        SET_CHAR_COORDINATES( sub_3889(), -506.14330000, 1017.42200000, 9.02410000 );
                        SET_CHAR_HEADING( sub_3889(), 354.14340000 );
                        l_U410++;
                    }
                    break;
                    case 3:
                    if (TIMERA() > 8000)
                    {
                        l_U410++;
                    }
                    break;
                    case 4:
                    if (TIMERA() > 11200)
                    {
                        if (NOT (IS_CAR_DEAD( l_U423[1] )))
                        {
                            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U423[1] )))
                            {
                                if (HAS_CAR_RECORDING_BEEN_LOADED( 1905 ))
                                {
                                    START_PLAYBACK_RECORDED_CAR( l_U423[1], 1905 );
                                }
                            }
                        }
                        TRIGGER_POLICE_REPORT( "CLUB_PROC_7_SCANNER" );
                        l_U410++;
                    }
                    break;
                    case 5:
                    if (TIMERA() > 11700)
                    {
                        if (NOT (IS_CAR_DEAD( l_U423[0] )))
                        {
                            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U423[0] )))
                            {
                                if (HAS_CAR_RECORDING_BEEN_LOADED( 1903 ))
                                {
                                    START_PLAYBACK_RECORDED_CAR( l_U423[0], 1903 );
                                    SWITCH_CAR_SIREN( l_U423[0], 1 );
                                }
                            }
                        }
                    }
                    if (TIMERA() > 12700)
                    {
                        SET_CAM_POS( l_U405, -515.87460000, 1028.94900000, 10.13660000 );
                        SET_CAM_ROT( l_U405, 8.06101500, -0.00000000, -50.08287000 );
                        SET_CAM_FOV( l_U405, 43.20000000 );
                        SET_CAM_ACTIVE( l_U408, 0 );
                        SET_CAM_PROPAGATE( l_U408, 0 );
                        SET_CAM_ACTIVE( l_U405, 1 );
                        SET_CAM_PROPAGATE( l_U405, 1 );
                        sub_7152( "E2TM7_LOSE", ref l_U426, 7, 1 );
                        if (NOT (IS_CHAR_INJURED( l_U283[0] )))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U283[0], -518.32760000, 999.04570000, 8.72480000, 3, 30000, 1 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U283[1] )))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U283[1], -518.32760000, 999.04570000, 8.72480000, 3, 30000, 1 );
                        }
                        if (NOT (IS_CAR_DEAD( l_U383 )))
                        {
                            SET_CAR_COORDINATES( l_U383, -514.66960000, 1010.97400000, 8.74780000 );
                            SET_CAR_HEADING( l_U383, 287.21900000 );
                        }
                        l_U410++;
                    }
                    break;
                    case 6:
                    if (TIMERA() > 15700)
                    {
                        if (NOT (IS_CAR_DEAD( l_U383 )))
                        {
                            SET_NEXT_DESIRED_MOVE_STATE( 3 );
                            TASK_ENTER_CAR_AS_DRIVER( sub_3889(), l_U383, 60000 );
                            if (NOT (IS_CHAR_INJURED( l_U296 )))
                            {
                                SET_NEXT_DESIRED_MOVE_STATE( 3 );
                                TASK_ENTER_CAR_AS_PASSENGER( l_U296, l_U383, 30000, 0 );
                                l_U410++;
                            }
                        }
                    }
                    break;
                    case 7:
                    SET_CAM_POS( l_U406, -519.92990000, 1016.49400000, 10.18009000 );
                    SET_CAM_ROT( l_U406, 0.12116700, -0.00000000, 109.90700000 );
                    SET_CAM_FOV( l_U406, 45.00000000 );
                    SET_CAM_POS( l_U407, -519.92990000, 1016.49400000, 10.18009000 );
                    SET_CAM_ROT( l_U407, 0.12116700, -0.00000000, -95.58494000 );
                    SET_CAM_FOV( l_U407, 45.00000000 );
                    SET_CAM_ACTIVE( l_U405, 0 );
                    SET_CAM_PROPAGATE( l_U405, 0 );
                    SET_CAM_ACTIVE( l_U408, 1 );
                    SET_CAM_PROPAGATE( l_U408, 1 );
                    SET_CAM_INTERP_STYLE_CORE( l_U408, l_U406, l_U407, 8000, 0 );
                    SET_CAM_INTERP_STYLE_DETAILED( l_U408, 0, 0, 1, 1 );
                    CLEAR_AREA( -519.42390000, 1009.49800000, 8.74689900, 5, 1 );
                    if (NOT (IS_CHAR_DEAD( l_U283[0] )))
                    {
                        SET_CHAR_COORDINATES( l_U283[0], -517.61250000, 1014.58400000, 8.74680100 );
                        SET_CHAR_HEADING( l_U283[0], 172.14190000 );
                    }
                    if (NOT (IS_CHAR_DEAD( l_U283[1] )))
                    {
                        SET_CHAR_COORDINATES( l_U283[1], -518.96180000, 1014.93000000, 8.74680100 );
                        SET_CHAR_HEADING( l_U283[1], 163.24540000 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U382 )))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U382 )))
                        {
                            if (HAS_CAR_RECORDING_BEEN_LOADED( 1904 ))
                            {
                                START_PLAYBACK_RECORDED_CAR( l_U382, 1904 );
                                SWITCH_CAR_SIREN( l_U382, 1 );
                            }
                        }
                    }
                    l_U410++;
                    break;
                    case 8:
                    if (NOT (IS_CAR_DEAD( l_U382 )))
                    {
                        if (LOCATE_CAR_3D( l_U382, -491.87880000, 1011.52000000, 8.74780000, 3, 3, 3, 0 ))
                        {
                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U382 ))
                            {
                                PAUSE_PLAYBACK_RECORDED_CAR( l_U382 );
                                STOP_PLAYBACK_RECORDED_CAR( l_U382 );
                            }
                        }
                    }
                    if (NOT (IS_CAR_DEAD( l_U423[0] )))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U423[0] ))
                        {
                            PAUSE_PLAYBACK_RECORDED_CAR( l_U423[0] );
                            STOP_PLAYBACK_RECORDED_CAR( l_U423[0] );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U418[0] )))
                        {
                            TASK_CAR_TEMP_ACTION( l_U418[0], l_U423[0], 4, 2000 );
                        }
                    }
                    if (TIMERA() > 16700)
                    {
                        if (NOT l_U396)
                        {
                            if (NOT (IS_CHAR_INJURED( l_U283[0] )))
                            {
                                TASK_SMART_FLEE_CHAR( l_U283[0], sub_3889(), 210, 120000 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U283[1] )))
                            {
                                TASK_SMART_FLEE_CHAR( l_U283[1], sub_3889(), 210, 120000 );
                            }
                            l_U396 = 1;
                        }
                    }
                    if (DOES_CHAR_EXIST( l_U283[0] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U283[0] )))
                        {
                            if (IS_CHAR_ON_SCREEN( l_U283[0] ))
                            {
                                if (NOT l_U341)
                                {
                                    sub_7152( "E2TM7_OSC2", ref l_U426, 7, 1 );
                                    l_U341 = 1;
                                }
                            }
                        }
                    }
                    if (TIMERA() > 24200)
                    {
                        SET_CAM_ACTIVE( l_U408, 0 );
                        SET_CAM_PROPAGATE( l_U408, 0 );
                        SET_USE_HIGHDOF( 0 );
                        SET_WIDESCREEN_BORDERS( 0 );
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        SET_GAME_CAM_HEADING( 0.00000000 );
                        if (NOT (IS_CAR_DEAD( l_U383 )))
                        {
                            if (IS_VEH_DRIVEABLE( l_U383 ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( sub_3889(), l_U383 )))
                                {
                                    WARP_CHAR_INTO_CAR( sub_3889(), l_U383 );
                                }
                                if (NOT (IS_CHAR_DEAD( l_U296 )))
                                {
                                    if (NOT (IS_CHAR_IN_CAR( l_U296, l_U383 )))
                                    {
                                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U296, l_U383, 0 );
                                    }
                                }
                            }
                        }
                        l_U409 = 0;
                    }
                    break;
                }
                if (sub_34465())
                {
                    l_U409 = 0;
                    if (IS_SCREEN_FADED_IN())
                    {
                        DO_SCREEN_FADE_OUT( 500 );
                        while (NOT IS_SCREEN_FADED_OUT())
                        {
                            WAIT( 0 );
                        }
                    }
                    CLEAR_PRINTS();
                    if (NOT (IS_CAR_DEAD( l_U383 )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U383 ))
                        {
                            CLEAR_CHAR_TASKS( sub_3889() );
                            if (NOT (IS_CHAR_IN_CAR( sub_3889(), l_U383 )))
                            {
                                WARP_CHAR_INTO_CAR( sub_3889(), l_U383 );
                            }
                            if (NOT (IS_CHAR_DEAD( l_U296 )))
                            {
                                CLEAR_CHAR_TASKS( l_U296 );
                                if (NOT (IS_CHAR_IN_CAR( l_U296, l_U383 )))
                                {
                                    WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U296, l_U383, 0 );
                                }
                            }
                        }
                    }
                    INCREMENT_INT_STAT( 372, 1 );
                    sub_8484( ref l_U426, 0 );
                    SET_CAM_ACTIVE( l_U408, 0 );
                    SET_CAM_PROPAGATE( l_U408, 0 );
                    SET_CAM_ACTIVE( l_U405, 0 );
                    SET_CAM_PROPAGATE( l_U405, 0 );
                    SET_USE_HIGHDOF( 0 );
                    SET_WIDESCREEN_BORDERS( 0 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                }
                WAIT( 0 );
            }
            END_CAM_COMMANDS( ref l_U403 );
            ENABLE_SCENE_STREAMING( 1 );
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
            }
            SET_PLAYER_CONTROL( sub_947(), 1 );
            l_U269 = 7;
            break;
            case 7:
            if (NOT (IS_CHAR_DEAD( l_U296 )))
            {
                if (NOT (IS_PED_IN_GROUP( l_U296 )))
                {
                    SET_GROUP_MEMBER( sub_14824(), l_U296 );
                }
            }
            PRINT( "CP6_08", 7500, 0 );
            ALTER_WANTED_LEVEL( sub_947(), 2 );
            APPLY_WANTED_LEVEL_CHANGE_NOW( sub_947() );
            l_U269 = 8;
            break;
            case 8:
            sub_35114( l_U296 );
            sub_35282();
            sub_10878();
            sub_14896();
            sub_12376();
            if (sub_15438( l_U296, sub_3889(), 1 ))
            {
                if (NOT (sub_13662( 0 )))
                {
                    if (NOT l_U401)
                    {
                        if (TIMERA() > l_U400)
                        {
                            GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref iVar9 );
                            if (iVar9 == 0)
                            {
                                if (NOT l_U342)
                                {
                                    sub_7152( "E2TM7_CHS1", ref l_U426, 7, 1 );
                                    l_U342 = 1;
                                }
                                else
                                {
                                    iVar9++;
                                }
                            }
                            if (iVar9 == 1)
                            {
                                if (NOT l_U343)
                                {
                                    sub_7152( "E2TM7_CHS2", ref l_U426, 7, 1 );
                                    l_U343 = 1;
                                }
                                else
                                {
                                    iVar9++;
                                }
                            }
                            if (iVar9 == 2)
                            {
                                if (NOT l_U344)
                                {
                                    sub_7152( "E2TM7_CHS3", ref l_U426, 7, 1 );
                                    l_U344 = 1;
                                }
                                else
                                {
                                    iVar9++;
                                }
                            }
                            if (iVar9 == 3)
                            {
                                if (NOT l_U345)
                                {
                                    sub_7152( "E2TM7_CHS4", ref l_U426, 7, 1 );
                                    l_U345 = 1;
                                }
                                else
                                {
                                    iVar9++;
                                }
                            }
                            if (iVar9 == 4)
                            {
                                if (NOT l_U346)
                                {
                                    sub_7152( "E2TM7_CHS5", ref l_U426, 7, 1 );
                                    l_U346 = 1;
                                }
                                else
                                {
                                    iVar9++;
                                }
                            }
                            if (iVar9 == 5)
                            {
                                if (NOT l_U347)
                                {
                                    sub_7152( "E2TM7_CHS6", ref l_U426, 7, 1 );
                                    l_U347 = 1;
                                }
                                else
                                {
                                    iVar9++;
                                }
                            }
                            if (iVar9 == 6)
                            {
                                if (NOT l_U348)
                                {
                                    sub_7152( "E2TM7_CHS7", ref l_U426, 7, 1 );
                                    l_U348 = 1;
                                }
                                else
                                {
                                    iVar9++;
                                }
                            }
                            if (iVar9 == 7)
                            {
                                if (NOT l_U349)
                                {
                                    sub_7152( "E2TM7_CHS8", ref l_U426, 7, 1 );
                                    l_U349 = 1;
                                }
                                else
                                {
                                    iVar9 = 0;
                                }
                            }
                            GENERATE_RANDOM_INT_IN_RANGE( 17000, 21000, ref l_U400 );
                            SETTIMERA( 0 );
                            l_U401 = 1;
                        }
                    }
                }
                else
                {
                    l_U401 = 0;
                }
            }
            else
            {
                sub_8484( ref l_U426, 1 );
            }
            if (DOES_CHAR_EXIST( l_U378[0] ))
            {
                if ((IS_CHAR_INJURED( l_U378[0] )) || ((sub_14552( sub_3889(), l_U378[0], 1 )) > 150))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U381 );
                    l_U414 = 1;
                }
            }
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_947(), 0 )))
            {
                if (DOES_BLIP_EXIST( l_U381 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U381 );
                }
                for ( l_U397 = 0; l_U397 <= 1; l_U397++ )
                {
                    if (DOES_CHAR_EXIST( l_U378[l_U397] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U378[l_U397] )))
                        {
                            CLEAR_CHAR_TASKS( l_U378[l_U397] );
                        }
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U378[l_U397] );
                    }
                }
                for ( l_U397 = 0; l_U397 <= 3; l_U397++ )
                {
                    if (DOES_CHAR_EXIST( l_U418[l_U397] ))
                    {
                        if (NOT (IS_CHAR_DEAD( l_U418[l_U397] )))
                        {
                            CLEAR_CHAR_TASKS( l_U418[l_U397] );
                        }
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U418[l_U397] );
                    }
                }
                if (DOES_VEHICLE_EXIST( l_U382 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U382 );
                }
                if (DOES_VEHICLE_EXIST( l_U423[0] ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U423[0] );
                }
                if (DOES_VEHICLE_EXIST( l_U423[1] ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U423[1] );
                }
                l_U269 = 10;
            }
            break;
            case 10:
            sub_10878();
            sub_14896();
            sub_12376();
            if (sub_15438( l_U296, sub_3889(), 1 ))
            {
                if (NOT l_U339)
                {
                    sub_7152( "E2TM7_BACK", ref l_U426, 7, 1 );
                    l_U339 = 1;
                    SETTIMERB( 0 );
                }
                else if (TIMERB() > 20000)
                {
                    if (NOT (sub_13662( 0 )))
                    {
                        if (NOT l_U338)
                        {
                            if (g_U43689 == 0)
                            {
                                sub_36837( ref l_U326, "E2TM7_B2AV1", "E2TM7_B2BV1", "E2TM7_B2CV1" );
                                sub_14352( ref l_U326, ref l_U426, 7, 1 );
                            }
                            else if (g_U43689 == 1)
                            {
                                sub_36837( ref l_U326, "E2TM7_B2AV2", "E2TM7_B2BV2", "E2TM7_B2CV2" );
                                sub_14352( ref l_U326, ref l_U426, 7, 1 );
                            }
                            else if (g_U43689 > 1)
                            {
                                GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar10 );
                                if (iVar10 == 0)
                                {
                                    sub_36837( ref l_U326, "E2TM7_B2AV1", "E2TM7_B2BV1", "E2TM7_B2CV1" );
                                    sub_14352( ref l_U326, ref l_U426, 7, 1 );
                                }
                                else if (iVar10 == 1)
                                {
                                    sub_36837( ref l_U326, "E2TM7_B2AV2", "E2TM7_B2BV2", "E2TM7_B2CV2" );
                                    sub_14352( ref l_U326, ref l_U426, 7, 1 );
                                }
                            };;;
                            l_U338 = 1;
                        }
                    }
                }
            }
            if (sub_37271( l_U279._fU0, l_U279._fU4, l_U279._fU8 + 2.50000000, 2.50000000, 2.50000000, 2.50000000, 1, l_U296, "CP6_05", "CP6_06", 0, 1, "CP6_08" ))
            {
                l_U269 = 11;
            }
            break;
            case 11:
            sub_38204();
            SET_PLAYER_CONTROL( sub_947(), 1 );
            sub_11299( 28, "E2Tm7_SRTD2", "E2Tm7AU", 0 );
            sub_39920();
            break;
            case 12:
            if (NOT l_U393)
            {
                sub_25912();
                sub_10922( 0 );
                sub_8484( ref l_U426, 0 );
                PRINT( "CP6_11", 7000, 0 );
                for ( l_U397 = 0; l_U397 <= 1; l_U397++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U283[l_U397] )))
                    {
                        TASK_SMART_FLEE_CHAR( l_U283[l_U397], sub_3889(), 150, 120000 );
                    }
                }
                SETTIMERA( 0 );
                l_U393 = 1;
            }
            if (l_U393)
            {
                if (TIMERA() > 7000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U296 )))
                    {
                        SET_PLAYER_CONTROL( sub_947(), 0 );
                        sub_41668();
                    }
                    else
                    {
                        sub_11987();
                    }
                }
            }
            break;
        }
    }
    return;
}

void sub_803()
{
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_824();
        sub_2744();
    }
    return;
}

void sub_824()
{
    int iVar2;

    iVar2 = 0;
    sub_838( iVar2 );
    sub_1782();
    return;
}

void sub_838(unknown uParam0)
{
    if (g_U819)
    {
        sub_857();
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_947(), 150 );
    switch (uParam0)
    {
        case 0:
        case 1:
        sub_1020( uParam0, 0, 0, -3, 0, 0 );
        break;
        default: sub_1552( "Flow_Proc_Fail_Stats_Update: Need to add stat details for strand" );
    }
    sub_1687();
    return;
}

void sub_857()
{
    sub_866();
    return;
}

void sub_866()
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

void sub_947()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1020(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_1031( uParam1 );
    sub_1226( uParam0, 0, uParam2 );
    sub_1226( uParam0, 1, uParam3 );
    sub_1226( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_1419();
    return;
}

void sub_1031(unknown uParam0)
{
    ADD_SCORE( sub_947(), uParam0 );
    sub_1056( uParam0 );
    return;
}

void sub_1056(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1167( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_1167(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1226(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_1419()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U196[I] = 4;
    }
    return;
}

void sub_1552(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_1687()
{
    sub_1696();
    return;
}

void sub_1696()
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

void sub_1782()
{
    int iVar2;

    iVar2 = 0;
    sub_1794();
    return;
}

void sub_1794()
{
    int iVar2;

    iVar2 = 0;
    g_U12379 = 0;
    g_U30153 = 0;
    sub_1818();
    sub_2442();
    sub_2478( iVar2, 0 );
    sub_2561();
    sub_2600();
    g_U30097[1] = 0;
    return;
}

void sub_1818()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((g_U575[I]._fU20) AND ((sub_1856( 5, g_U575[I] )) == 1))
        {
            if ((sub_1856( 1, g_U575[I] )) != 0)
            {
                sub_2142( I );
            }
        }
    }
    if (NOT sub_2308())
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

int sub_1856(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2142(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_2227( g_U575 - 1 );
    return;
}

void sub_2227(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_2308()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_1856( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2442()
{
    unknown uVar2;

    uVar2 = g_U10965;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_2478(int iParam0, boolean bParam1)
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

void sub_2561()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    g_U22959 = iVar2 + 2000;
    return;
}

void sub_2600()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_2622();
    if (iVar3 > g_U42731._fU4)
    {
        g_U42731._fU4 = iVar3;
        g_U42731._fU8 = iVar2;
    }
    return;
}

int sub_2622()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

void sub_2744()
{
    g_U30180 = 0;
    sub_2759();
    g_U8781 = 1;
    if (DOES_BLIP_EXIST( l_U274 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U274 );
    }
    if (DOES_BLIP_EXIST( l_U278 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U278 );
    }
    g_U10935 = 0;
    SWITCH_GARBAGE_TRUCKS( 1 );
    g_U43673++;
    if (g_U43673 > 7)
    {
        g_U43673 = 0;
    }
    g_U43689++;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2759()
{
    if (DOES_VEHICLE_EXIST( l_U353 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U353 );
    }
    return;
}

void sub_3157(int iParam0, unknown uParam1)
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

void sub_3300(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_3336())
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

int sub_3336()
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

void sub_3475()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;

    sub_3485( 1 );
    if (DOES_CAM_EXIST( l_U432 ))
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
            fVar2 *= l_U440;
            if (iVar6 < 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U442 += fVar2;
            if (l_U442 < l_U443)
            {
                l_U442 = l_U443;
            }
            if (l_U442 > l_U444)
            {
                l_U442 = l_U444;
            }
        }
        if ((iVar5 < 65508) || (iVar5 > 28))
        {
            fVar2 = TO_FLOAT( iVar5 );
            fVar2 *= fVar2;
            fVar2 /= (TO_FLOAT( 100 )) * (TO_FLOAT( 100 ));
            fVar2 *= l_U440;
            if (iVar5 > 0)
            {
                fVar2 *= -1.00000000;
            }
            l_U441 += fVar2;
            if (l_U441 < l_U445)
            {
                l_U441 = l_U445;
            }
            if (l_U441 > l_U446)
            {
                l_U441 = l_U446;
            }
        }
        sub_3949( sub_3889(), ref l_U432, l_U442, 0.00000000, l_U441 );
        SET_CAM_FOV( l_U432, l_U448 );
        SET_CAM_ATTACH_OFFSET( l_U432, l_U449._fU0, l_U449._fU4, l_U449._fU8 );
    }
    else if (DOES_CAM_EXIST( l_U457 ))
    {
        sub_4142();
    }
    BEGIN_CAM_COMMANDS( ref l_U458 );
    if (DOES_CAM_EXIST( l_U432 ))
    {
        DESTROY_CAM( l_U432 );
    }
    CREATE_CAM( 14, ref l_U432 );
    ATTACH_CAM_TO_PED( l_U432, sub_3889() );
    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U432, 1 );
    SET_CAM_NEAR_CLIP( l_U432, 0.01000000 );
    l_U441 = 0.00000000;
    l_U442 = -9.00000000;
    sub_3949( sub_3889(), ref l_U432, l_U442, 0.00000000, l_U441 );
    SET_CAM_FOV( l_U432, l_U448 );
    SET_CAM_ATTACH_OFFSET( l_U432, l_U449._fU0, l_U449._fU4, l_U449._fU8 );
    SET_CAM_ACTIVE( l_U432, 1 );
    SET_CAM_PROPAGATE( l_U432, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (IS_PLAYER_PLAYING( sub_947() ))
    {
        FREEZE_CHAR_POSITION( sub_3889(), 1 );
        SET_CHAR_VISIBLE( sub_3889(), 0 );
    }
    return;
}

void sub_3485(unknown uParam0)
{
    g_U10597 = uParam0;
    return;
}

void sub_3889()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3949(unknown uParam0, unknown uParam1, vector vParam2)
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

void sub_4142()
{
    for ( l_U397 = 0; l_U397 < l_U452; l_U397++ )
    {
        if (DOES_CAM_EXIST( l_U452[l_U397] ))
        {
            DESTROY_CAM( l_U452[l_U397] );
        }
    }
    if (DOES_CAM_EXIST( l_U457 ))
    {
        DESTROY_CAM( l_U457 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U458 );
    }
    return;
}

int sub_4676(unknown uParam0)
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

void sub_4906(unknown uParam0)
{
    StrCopy( ref l_U19._fU0, uParam0, 16 );
    sub_4923();
    return;
}

void sub_4923()
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

void sub_5025(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U19._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U19._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5105( "\n PED NUMBER ", uParam0 );
    sub_5145( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5105(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5145(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5172(unknown uParam0, boolean bParam1)
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

void sub_5527()
{
    sub_3485( 0 );
    sub_4142();
    if (DOES_CAM_EXIST( l_U433 ))
    {
        DESTROY_CAM( l_U433 );
    }
    if (DOES_CAM_EXIST( l_U434 ))
    {
        DESTROY_CAM( l_U434 );
    }
    if (DOES_CAM_EXIST( l_U432 ))
    {
        DESTROY_CAM( l_U432 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (IS_PLAYER_PLAYING( sub_947() ))
        {
            FREEZE_CHAR_POSITION( sub_3889(), 0 );
            SET_CHAR_VISIBLE( sub_3889(), 1 );
            SET_CAM_BEHIND_PED( sub_3889() );
        }
        END_CAM_COMMANDS( ref l_U458 );
    }
    return;
}

void sub_5754(unknown uParam0)
{
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    CREATE_CAM( 14, ref l_U452[0] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U452[0], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U452[0], 1.61040000, 0.91440000, 0.59110000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U452[0], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U452[0], uParam0 );
        POINT_CAM_AT_PED( l_U452[0], uParam0 );
        SET_CAM_POINT_OFFSET( l_U452[0], 0.73220000, 0.43610000, 0.58830000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U452[0], 1 );
    }
    SET_CAM_FOV( l_U452[0], 13.20010000 );
    SET_CAM_ACTIVE( l_U452[0], 1 );
    CREATE_CAM( 14, ref l_U452[1] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U452[1], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U452[1], 1.18410000, 1.13140000, 0.62390000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U452[1], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U452[1], uParam0 );
        POINT_CAM_AT_PED( l_U452[1], uParam0 );
        SET_CAM_POINT_OFFSET( l_U452[1], 0.52730000, 0.48740000, 0.60610000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U452[1], 1 );
    }
    SET_CAM_FOV( l_U452[1], 13.20010000 );
    SET_CAM_ACTIVE( l_U452[1], 1 );
    CREATE_CAM( 14, ref l_U452[2] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U452[2], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U452[2], 0.75790000, 1.34850000, 0.65670000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U452[2], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U452[2], uParam0 );
        POINT_CAM_AT_PED( l_U452[2], uParam0 );
        SET_CAM_POINT_OFFSET( l_U452[2], 0.32250000, 0.53870000, 0.62380000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U452[2], 1 );
    }
    SET_CAM_FOV( l_U452[2], 13.20010000 );
    SET_CAM_ACTIVE( l_U452[2], 1 );
    CREATE_CAM( 14, ref l_U452[3] );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U452[3], uParam0 );
        SET_CAM_ATTACH_OFFSET( l_U452[3], 0.33170000, 1.56560000, 0.68950000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U452[3], 1 );
    }
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        ATTACH_CAM_TO_PED( l_U452[3], uParam0 );
        POINT_CAM_AT_PED( l_U452[3], uParam0 );
        SET_CAM_POINT_OFFSET( l_U452[3], 0.11770000, 0.58990000, 0.64160000 );
        SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U452[3], 1 );
    }
    SET_CAM_FOV( l_U452[3], 13.20010000 );
    SET_CAM_ACTIVE( l_U452[3], 1 );
    CREATE_CAM( 25, ref l_U457 );
    SET_CAM_SPLINE_DURATION( l_U457, 20000 );
    SET_CAM_SPLINE_SPEED_GRAPH( l_U457, 0 );
    SET_CAM_SPLINE_SPEED_CONSTANT( l_U457, 0 );
    ADD_CAM_SPLINE_NODE( l_U457, l_U452[0] );
    ADD_CAM_SPLINE_NODE( l_U457, l_U452[1] );
    ADD_CAM_SPLINE_NODE( l_U457, l_U452[2] );
    ADD_CAM_SPLINE_NODE( l_U457, l_U452[3] );
    SET_CAM_ACTIVE( l_U457, 1 );
    SET_CAM_PROPAGATE( l_U457, 1 );
    return;
}

void sub_6836(boolean bParam0)
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

void sub_7152(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_7173( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_7173(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7227( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7227(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7249( iParam1 )))
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
    sub_7937( ref g_U8868, ref l_U19 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_7249(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_7326( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_7326( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_7326( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_7326(unknown uParam0)
{
    return;
}

void sub_7937(int iParam0, int iParam1)
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

int sub_8136(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_7326( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_7326( "\n speech is not playing" );
    }
    return 0;
}

int sub_8299()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_8484(int iParam0, unknown uParam1)
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

void sub_8608()
{
    for ( l_U397 = 0; l_U397 < l_U452; l_U397++ )
    {
        if (DOES_CAM_EXIST( l_U452[l_U397] ))
        {
            DESTROY_CAM( l_U452[l_U397] );
        }
    }
    if (DOES_CAM_EXIST( l_U457 ))
    {
        DESTROY_CAM( l_U457 );
    }
    SET_CAM_BEHIND_PED( sub_3889() );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    return;
}

void sub_8861(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_8914( uParam0._fU0 - uParam3, uParam0._fU4 - uParam3, uParam0._fU8 - uParam3, uParam0._fU0 + uParam3, uParam0._fU4 + uParam3, uParam0._fU8 + uParam3, uParam4 );
    return;
}

void sub_8914(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_9154()
{
    CREATE_CHAR( 26, -836732954, l_U384._fU0, l_U384._fU4, l_U384._fU8, ref l_U296, 1 );
    SET_CHAR_HEADING( l_U296, l_U387 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U296, "Room_Bar" );
    TASK_PLAY_ANIM( l_U296, "male_stand_chat", "missnightclub", 8.00000000, 1, 0, 0, 0, 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U296, 1 );
    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U296, 1 );
    sub_5025( 2, l_U296, "AL_DI_NAPOLI", 0 );
    return;
}

void sub_9489(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

void sub_9529()
{
    sub_9554( 0, l_U354, l_U357, ref l_U353 );
    SET_CAR_AS_MISSION_CAR( l_U353 );
    return;
}

void sub_9554(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_4676( uParam0 );
    return sub_9585( uParam5, uVar8, uParam1, uParam4, uParam0 );
}

int sub_9585(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    sub_9717( (uParam0^), uParam6 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( uParam1 );
    }
    return 1;
}

void sub_9717(unknown uParam0, int iParam1)
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
        if (NOT (IS_CHAR_DEAD( sub_3889() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3889() )))
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
        if (NOT (IS_CHAR_DEAD( sub_3889() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3889() )))
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
        if (NOT (IS_CHAR_DEAD( sub_3889() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3889() )))
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
        if (NOT (IS_CHAR_DEAD( sub_3889() )))
        {
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_3889() )))
            {
                PRINTSTRING( "KGM.............Retune MORI car to DANCE_ROCK\n" );
                RETUNE_RADIO_TO_STATION_NAME( "DANCE_ROCK" );
            }
        }
        break;
    }
    return;
}

void sub_10878()
{
    if (DOES_CHAR_EXIST( l_U296 ))
    {
        if (IS_CHAR_DEAD( l_U296 ))
        {
            sub_10922( 0 );
            sub_8484( ref l_U426, 0 );
            PRINT( "CP6_09", 7500, 0 );
            sub_11092();
            sub_11299( 28, l_U352, "E2Tm7AU", 1 );
            sub_11987();
        }
    }
    if (DOES_CHAR_EXIST( l_U296 ))
    {
        if (IS_CHAR_INJURED( l_U296 ))
        {
            sub_10922( 0 );
            sub_8484( ref l_U426, 0 );
            PRINT( "CP6_10", 7500, 0 );
            sub_11092();
            sub_11299( 28, l_U352, "E2Tm7AU", 1 );
            sub_11987();
        }
    }
    return;
}

void sub_10922(unknown uParam0)
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

void sub_11092()
{
    GENERATE_RANDOM_INT_IN_RANGE( 0, 5, ref l_U351 );
    if (l_U351 == 0)
    {
        l_U352 = "E2Tm7_CMGEN6";
    }
    if (l_U351 == 1)
    {
        l_U352 = "E2Tm7_CMGEN7";
    }
    if (l_U351 == 2)
    {
        l_U352 = "E2Tm7_CMGEN8";
    }
    if (l_U351 == 3)
    {
        l_U352 = "E2Tm7_CMGEN9";
    }
    if (l_U351 == 4)
    {
        l_U352 = "E2Tm7_CMGEN0";
    }
    return;
}

void sub_11299(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_11343( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_11343(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_11987()
{
    sub_824();
    sub_2744();
    return;
}

void sub_12124()
{
    if (IS_WANTED_LEVEL_GREATER( sub_947(), 0 ))
    {
        if (DOES_BLIP_EXIST( l_U297 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U297 );
        }
        if (NOT l_U416)
        {
            if (NOT IS_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_NOW( "CP6_08", 7500, 0 );
                l_U416 = 1;
            }
        }
    }
    else
    {
        CLEAR_THIS_PRINT( "CP6_08" );
        l_U416 = 0;
        if (NOT (DOES_BLIP_EXIST( l_U297 )))
        {
            if (NOT (IS_CHAR_DEAD( l_U296 )))
            {
                ADD_BLIP_FOR_CHAR( l_U296, ref l_U297 );
                SET_BLIP_AS_FRIENDLY( l_U297, 1 );
                sub_9489( l_U297 );
            }
        }
        if (NOT l_U417)
        {
            PRINT( "CP6_02", 7500, 0 );
            l_U417 = 1;
        }
    }
    return;
}

void sub_12376()
{
    if (g_U30199 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30199]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30199]._fU12, sub_3889(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30199]._fU12 ))
                {
                    sub_10922( 0 );
                    sub_8484( ref l_U426, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP6_15", 7000, 0 );
                    sub_11987();
                }
            }
        }
    }
    if (g_U30200 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30200]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30200]._fU12, sub_3889(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30200]._fU12 ))
                {
                    sub_10922( 0 );
                    sub_8484( ref l_U426, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP6_15", 7000, 0 );
                    sub_11987();
                }
            }
        }
    }
    if ((sub_12680( sub_3889(), 2, 1 )) || (sub_12680( sub_3889(), 1, 1 )))
    {
        if (IS_CHAR_SHOOTING( sub_3889() ))
        {
            sub_10922( 0 );
            sub_8484( ref l_U426, 0 );
            CLEAR_PRINTS();
            PRINT( "CP6_15", 7000, 0 );
            sub_11987();
        }
    }
    if (g_U30198 != -1)
    {
        if (DOES_CHAR_EXIST( g_U29971[g_U30198]._fU12 ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( g_U29971[g_U30198]._fU12, sub_3889(), 0 ))
            {
                if (IS_CHAR_INJURED( g_U29971[g_U30198]._fU12 ))
                {
                    sub_10922( 0 );
                    sub_8484( ref l_U426, 0 );
                    CLEAR_PRINTS();
                    PRINT( "CP6_15", 7000, 0 );
                    sub_11987();
                }
            }
        }
    }
    return;
}

int sub_12680(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_12708( uParam0, uParam1 ))
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

int sub_12708(unknown uParam0, unknown uParam1)
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
            if (IS_CHAR_IN_AREA_3D( sub_3889(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

int sub_13662(boolean bParam0)
{
    if ((sub_13820()) || ((IS_SCRIPTED_CONVERSATION_ONGOING()) || ((sub_13761()) || ((((bParam0) AND (sub_13732())) || ((NOT bParam0) AND (sub_13678()))) || (IS_MESSAGE_BEING_DISPLAYED())))))
    {
        return 1;
    }
    return 0;
}

int sub_13678()
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        return 1;
    }
    return 0;
}

void sub_13732()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_13761()
{
    if ((g_U95._fU0 == 1008) || (g_U95._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_13820()
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

void sub_14005(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_14056( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_14056(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_14352(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_14373( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_14373(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_7227( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_14552(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_14565( uParam0, uParam2 ), sub_14565( uParam1, uParam2 ) );
}

void sub_14565(unknown uParam0, boolean bParam1)
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

void sub_14824()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_14896()
{
    if ((sub_14552( sub_3889(), l_U296, 1 )) > 200)
    {
        PRINT( "CP6_07", 7500, 0 );
        sub_11987();
    }
    return;
}

void sub_15438(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown[2] uVar5;

    array(ref uVar5, 2);
    uVar5[0] = uParam0;
    uVar5[1] = uParam1;
    return sub_15468( ref uVar5, uParam2 );
}

int sub_15468(unknown uParam0, unknown uParam1)
{
    int I;
    unknown[2] uVar5;

    array(ref uVar5, 2);
    if (NOT (sub_15493( (uParam0^)[0], ref uVar5[0], uParam1 )))
    {
        return 0;
    }
    for ( I = 1; I <= ((uParam0^) - 1); I++ )
    {
        if (sub_15493( (uParam0^)[I], ref uVar5[1], uParam1 ))
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

int sub_15493(unknown uParam0, unknown uParam1, boolean bParam2)
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

int sub_16125(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_7326( "\n already paused" );
    }
    else if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (iParam0->_fU4 == g_U8866)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_7326( "\n CONVERSATION PAUSED AT LINE " );
            sub_16281( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_7326( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_7326( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_7326( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_16281(unknown uParam0)
{
    return;
}

void sub_16570(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_16591( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

int sub_16591(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    if (iParam2->_fU12)
    {
        return sub_7227( uParam0, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

void sub_16716()
{
    CREATE_CHAR( 26, 1448755353, -505.57760000, 1022.63100000, 8.70910000, ref l_U283[0], 1 );
    SET_CHAR_HEADING( l_U283[0], 187.43140000 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U283[0], 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U283[0], 0, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U283[0], 1, 0, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U283[0], 2, 0, 2 );
    sub_5025( 3, l_U283[0], "OSCAR", 0 );
    SET_AMBIENT_VOICE_NAME( l_U283[0], "M_Y_DOMGUY_02_FULL_02" );
    CREATE_CHAR( 26, 1448755353, -504.82700000, 1022.49700000, 8.70830000, ref l_U283[1], 1 );
    SET_CHAR_HEADING( l_U283[1], 175.53070000 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U283[1], 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U283[1], 0, 0, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U283[1], 1, 1, 0 );
    SET_CHAR_COMPONENT_VARIATION( l_U283[1], 2, 1, 1 );
    TASK_CHAT_WITH_CHAR( l_U283[1], l_U283[0], 1, 1 );
    TASK_CHAT_WITH_CHAR( l_U283[0], l_U283[1], 0, 1 );
    l_U390 = 1;
    return;
}

void sub_17347()
{
    for ( l_U397 = 0; l_U397 <= 1; l_U397++ )
    {
        if (DOES_CHAR_EXIST( l_U283[l_U397] ))
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U283[l_U397], sub_3889(), 0 ))
            {
                l_U269 = 12;
            }
        }
    }
    return;
}

void sub_17545(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    return sub_17600( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam9, uParam9, uParam9, uParam10, uParam11, uParam12, uParam13, 0 );
}

int sub_17600(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    unknown uVar22;
    int iVar23;
    int I;

    l_U243[0] = uParam7;
    l_U243[1] = uParam8;
    l_U243[2] = uParam9;
    l_U242 = uParam7;
    sub_17648();
    sub_17935();
    sub_18815();
    if (sub_18996( l_U243[0], l_U243[1], l_U243[2], uParam11, uParam12, uParam13, uParam14, l_U237, uParam16, 0, 0, 0 ))
    {
        sub_19544( uParam11 );
        sub_19544( uParam12 );
        sub_19544( uParam13 );
        sub_19544( uParam14 );
        if (IS_SCREEN_FADED_IN())
        {
            if (sub_24711())
            {
                l_U207 = 1;
                l_U218 = 1;
                sub_19544( uParam15 );
                sub_19544( uParam19 );
                if ((IS_WANTED_LEVEL_GREATER( sub_947(), 0 )) AND (uParam17))
                {
                    if (DOES_BLIP_EXIST( l_U234 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                        sub_19544( uParam10 );
                    }
                    if ((NOT l_U203) AND ((NOT sub_24873()) AND (NOT (sub_13662( 0 )))))
                    {
                        sub_19424( uParam18, 0 );
                        l_U247 = uParam18;
                        l_U203 = 1;
                        l_U204 = 0;
                        if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U243[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                        }
                    }
                }
                else if (l_U203)
                {
                    sub_19544( uParam18 );
                    l_U203 = 0;
                    l_U204 = 1;
                }
                if (l_U204)
                {
                    if (NOT (sub_13662( 0 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                        {
                            SAY_AMBIENT_SPEECH( l_U243[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                        }
                        l_U204 = 0;
                    }
                }
                if (NOT (DOES_BLIP_EXIST( l_U234 )))
                {
                    ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U234 );
                    sub_21495( l_U234 );
                    if (l_U222)
                    {
                        SHOW_BLIP_ON_ALTIMETER( l_U234, 1 );
                    }
                }
                if (NOT (sub_13662( 0 )))
                {
                    if (NOT l_U205)
                    {
                        sub_19424( uParam10, 0 );
                        l_U205 = 1;
                    }
                }
                if (l_U223)
                {
                    iParam6 = 0;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( sub_3889(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, iParam6 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3889(), ref uVar22 );
                    iVar23 = 1;
                    for ( I = 0; I < l_U243; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U243[I] ))
                        {
                            if (NOT (IS_CHAR_IN_CAR( l_U243[I], uVar22 )))
                            {
                                iVar23 = 0;
                            }
                        }
                    }
                    if ((sub_25415()) AND (iVar23))
                    {
                        sub_19544( uParam10 );
                        sub_19544( uParam15 );
                        sub_19544( uParam11 );
                        sub_19544( uParam12 );
                        sub_19544( uParam13 );
                        sub_19544( uParam14 );
                        sub_19544( uParam18 );
                        sub_19544( uParam19 );
                        sub_25912();
                        return 1;
                    }
                }
            }
            else if (DOES_BLIP_EXIST( l_U234 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                sub_19544( uParam10 );
            }
            if (NOT (sub_13662( 0 )))
            {
                if (NOT l_U207)
                {
                    sub_19424( uParam15, 0 );
                    l_U207 = 1;
                }
                else if (l_U218)
                {
                    if (NOT (IS_STRING_NULL( uParam19 )))
                    {
                        if (NOT l_U208)
                        {
                            sub_19424( uParam19, 0 );
                            l_U208 = 1;
                        }
                    }
                    else if (NOT l_U208)
                    {
                        sub_19424( uParam15, 0 );
                        l_U208 = 1;
                    }
                }
            }
        }
    }
    else if (l_U203)
    {
        l_U203 = 0;
    }
    sub_19544( uParam10 );
    sub_19544( uParam15 );
    sub_19544( uParam19 );
    sub_19544( uParam18 );
    if (DOES_BLIP_EXIST( l_U234 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
    }
    sub_26614( uParam0, uParam1, uParam2, 0, 0 );
    sub_30043( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_17648()
{
    int I;

    for ( I = 0; I < l_U243; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                if ((sub_13678()) AND ((sub_17741( l_U243[I] )) AND (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U243[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_947() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_3889() )))
        {
            if ((sub_13678()) AND ((sub_17741( sub_3889() )) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_3889() ))))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_3889(), 1 );
            }
        }
    }
    return;
}

int sub_17741(int iParam0)
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (l_U19._fU16[I]._fU0 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_17935()
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

void sub_18815()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_947() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3889(), 0 );
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

int sub_18996(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int[3] iVar20;
    boolean bVar24;
    boolean bVar25;
    int iVar26;
    int iVar27;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    l_U243[0] = uParam0;
    l_U243[1] = uParam1;
    l_U243[2] = uParam2;
    l_U242 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    iVar18 = 1;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
        {
            iVar16++;
        }
    }
    if ((NOT (DOES_VEHICLE_EXIST( iParam9 ))) AND ((IS_CHAR_SITTING_IN_ANY_CAR( sub_3889() )) AND (NOT sub_19167())))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3889(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U223)
            {
                sub_19424( "MORE_SEATS", 0 );
                l_U223 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U223 = 0;
        sub_19544( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U243[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U243[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14824() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U243[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U243[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3889() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3889(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U243[I], sub_14824() ))
                        {
                            if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_3889() )) AND (NOT sub_19167()))
                            {
                                if (NOT (sub_19820( l_U243[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14824() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U243[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3889(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U243[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U243[I], sub_14824() ))
                {
                    if (sub_20381())
                    {
                        if (l_U225[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U243[I], -1 );
                            l_U225[I] = 0;
                        }
                    }
                    else if (NOT l_U225[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U243[I], 2 );
                        l_U225[I] = 1;
                    }
                }
                if ((NOT (sub_20659( l_U243[I], iParam9 ))) AND ((NOT (sub_20563( l_U243[I], iParam9 ))) AND (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14824() )))))
                {
                    if (sub_20772( l_U243[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14824() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U243[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_14824(), l_U243[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U230[I] )))
                        {
                            GET_GAME_TIMER( ref l_U240 );
                            ADD_BLIP_FOR_CHAR( l_U243[I], ref l_U230[I] );
                            CHANGE_BLIP_DISPLAY( l_U230[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U230[I], 1 );
                            if (bParam8)
                            {
                                sub_21495( l_U230[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U230[I] ))
                {
                    if ((uParam11) || ((sub_20563( l_U243[I], iParam9 )) || (sub_21614( l_U243[I] ))))
                    {
                        if (DOES_BLIP_EXIST( l_U230[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_19544( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_21495( l_U230[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U243[I], iParam9 )))
                    {
                        if ((NOT l_U220) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U243[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U243[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U243[I], iParam9 )))
                                {
                                    if (NOT (sub_21614( l_U243[I] )))
                                    {
                                        if (sub_22222( l_U243[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U243[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U243[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_3889(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_3889(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U243[I], sub_14824() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U243[I], 1 );
                                if (l_U219)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U243[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U243[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_3889(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U243[I], ref l_U230[I] );
                                CHANGE_BLIP_DISPLAY( l_U230[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U230[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14824() )))
                        {
                            if (sub_20772( l_U243[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U243[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U243[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U243[I], 0 );
                                SET_GROUP_MEMBER( sub_14824(), l_U243[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_3889(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14824() )))
                        {
                            SET_GROUP_MEMBER( sub_14824(), l_U243[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U243[I], sub_14824() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U243[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U230[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_19544( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U230[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_13662( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U243[I], sub_3889(), 40.00000000, 40.00000000, 40.00000000, 0 )) || (sub_19820( l_U243[I] )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if ((iVar16 == 1) || ((iVar17 - l_U240) > 1500))
        {
            if (iVar15 > 0)
            {
                if (l_U241 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U241 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar16 > 1) AND (iVar15 == iVar16))
                    {
                        if ((NOT (l_U241 == iVar15)) AND (NOT l_U209))
                        {
                            sub_19424( uParam6, 0 );
                            l_U209 = 1;
                            l_U241 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT (l_U241 == iVar15)) AND (NOT l_U210[I]))
                                {
                                    sub_19424( uVar28[I], 0 );
                                    l_U210[I] = 1;
                                    l_U241 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U241 = 0;
            }
        }
    }
    l_U219 = 0;
    if ((NOT bVar25) AND (iVar18))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U230[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U230[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_19544( uVar28[I] );
            }
        }
        sub_19544( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_3889() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3889(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                {
                    SET_CHAR_COORDINATES( l_U243[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_19167()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3889() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3889(), ref uVar2 );
        if (sub_19208( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_19208(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U243; I++ )
        {
            if (DOES_CHAR_EXIST( l_U243[I] ))
            {
                iVar3++;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        if (iVar4 >= iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_19424(unknown uParam0, boolean bParam1)
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

void sub_19544(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

int sub_19820(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_947() ))
    {
        GET_CAR_CHAR_IS_USING( sub_3889(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3889(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_20381()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_3889(), ref uVar2 );
    if (sub_19208( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_20563(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_20659(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_14824() )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (IS_VEH_DRIVEABLE( iParam1 ))
            {
                if (iVar4 == iParam1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_20772(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_VEH_DRIVEABLE( uVar5 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_3889(), uVar5 ))
                    {
                        if (sub_19167())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3889(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3889(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_20381())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_3889(), ref uVar5 );
                    if (NOT (DOES_VEHICLE_EXIST( uVar5 )))
                    {
                        return 1;
                    }
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_21495(unknown uParam0)
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

int sub_21614(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3889() ))
        {
            if (sub_21662( sub_3889(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_14824(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_14824() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_14824(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_21662(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_22222(unknown uParam0)
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

int sub_24711()
{
    unknown uVar2;

    if (IS_CHAR_IN_ANY_CAR( sub_3889() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3889(), ref uVar2 );
        if (sub_19208( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_24873()
{
    if (NOT (IS_CHAR_INJURED( l_U242 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U242 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_25415()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_3889() ))
    {
        if ((IS_CHAR_IN_ANY_HELI( sub_3889() )) || (IS_CHAR_ON_ANY_BIKE( sub_3889() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U221)
    {
        if (sub_22222( sub_3889() ))
        {
            if ((l_U215) || (sub_25505( 1, iVar2 )))
            {
                return 1;
            }
        }
    }
    else if ((l_U215) || (sub_25505( 1, iVar2 )))
    {
        return 1;
    }
    return 0;
}

int sub_25505(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3889() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3889(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3889() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3889(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3889()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3889() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3889() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_947() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_947() )))
    {
        return 0;
    }
    return 1;
}

void sub_25912()
{
    int I;

    sub_25921();
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
    if (IS_PLAYER_PLAYING( sub_947() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_3889(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_947() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3889(), 1 );
    }
    l_U219 = 0;
    l_U220 = 0;
    l_U221 = 0;
    l_U222 = 0;
    return;
}

void sub_25921()
{
    if (DOES_BLIP_EXIST( l_U234 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
    }
    return;
}

void sub_26614(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_17935();
    if (l_U214)
    {
        uParam0 = l_U248._fU0;
        uParam1 = l_U248._fU4;
        uParam2 = l_U248._fU8;
        uVar12 = l_U238;
        l_U214 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_3889() )))
    {
        GET_CHAR_HEADING( sub_3889(), ref uVar12 );
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
            CLEAR_WANTED_LEVEL( sub_947() );
            sub_26825( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_27246( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U243; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U243[I] );
                        if (NOT (IS_CHAR_INJURED( sub_3889() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3889(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
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
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3889() );
                    WARP_CHAR_INTO_CAR( sub_3889(), uParam4 );
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
                sub_27246( uParam0, uParam1, uParam2, uVar12 );
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
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3889() );
                    WARP_CHAR_INTO_CAR( sub_3889(), uVar8 );
                    sub_28153( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3889() );
                        WARP_CHAR_INTO_CAR( sub_3889(), uVar8 );
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
            sub_28773( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_26825(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_947() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_3889() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3889(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_3889(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_26945( (uParam0^) );
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

void sub_26945(unknown uParam0)
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

void sub_27246(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_3889(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_3889(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_3889(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_3889(), uParam3 );
    return;
}

void sub_28153(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_28773(boolean bParam0, unknown uParam1)
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
    if (((bParam0) || (IS_SCREEN_FADED_OUT())) AND (NOT (IS_CHAR_INJURED( sub_3889() ))))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_29153( sub_3889(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_29153( sub_3889(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_29153( sub_3889(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_29702( 0 );
        sub_29702( 1 );
        sub_29702( 2 );
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

int sub_29153(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_29164( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_12680( uParam0, uParam1, 0 ))
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

vector sub_29164(unknown uParam0)
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

void sub_29702(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_30043(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_30068( uParam0, uParam1, uParam2, l_U236, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3889(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
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

int sub_30068(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_30085( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_3889(), uParam0, uParam1, uParam4, uParam4, 0 )))
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

int sub_30085(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_30766()
{
    CREATE_CAR( 2046537925, -417.65540000, 1009.47300000, 11.32120000, ref l_U382, 1 );
    SET_VEHICLE_QUATERNION( l_U382, -0.03060000, -0.04820000, 0.70100000, 0.71090000 );
    CREATE_CHAR_INSIDE_CAR( l_U382, 6, -183203150, ref l_U378[0] );
    CREATE_CHAR_AS_PASSENGER( l_U382, 6, -183203150, 0, ref l_U378[1] );
    CREATE_CAR( 2046537925, -504.40540000, 1041.58400000, 12.11650000, ref l_U423[0], 1 );
    SET_VEHICLE_QUATERNION( l_U423[0], 0.00280000, 0.00100000, 0.90450000, 0.42640000 );
    CREATE_CHAR_INSIDE_CAR( l_U423[0], 6, -183203150, ref l_U418[0] );
    CREATE_CHAR_AS_PASSENGER( l_U423[0], 6, -183203150, 0, ref l_U418[1] );
    CREATE_CAR( 2046537925, -549.43000000, 1014.18600000, 9.42540000, ref l_U423[1], 1 );
    SET_VEHICLE_QUATERNION( l_U423[1], -0.00030000, 0.00040000, -0.59740000, 0.80200000 );
    CREATE_CHAR_INSIDE_CAR( l_U423[1], 6, -183203150, ref l_U418[2] );
    CREATE_CHAR_AS_PASSENGER( l_U423[1], 6, -183203150, 0, ref l_U418[3] );
    return;
}

void sub_31189()
{
    if (NOT (DOES_CAM_EXIST( l_U405 )))
    {
        CREATE_CAM( 14, ref l_U405 );
    }
    if (NOT (DOES_CAM_EXIST( l_U407 )))
    {
        CREATE_CAM( 14, ref l_U407 );
    }
    if (NOT (DOES_CAM_EXIST( l_U406 )))
    {
        CREATE_CAM( 14, ref l_U406 );
    }
    if (NOT (DOES_CAM_EXIST( l_U408 )))
    {
        CREATE_CAM( 3, ref l_U408 );
    }
    l_U404 = 1;
    return;
}

int sub_34465()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_35114(unknown uParam0)
{
    float fVar3;
    float fVar4;
    unknown uVar5;

    fVar3 = 40.00000000;
    fVar4 = 15.00000000;
    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            GET_PLAYER_GROUP( sub_947(), ref uVar5 );
            if (NOT (IS_GROUP_MEMBER( uParam0, uVar5 )))
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3889(), uParam0, fVar4, fVar4, fVar4, 0 ))
                {
                    SET_GROUP_MEMBER( uVar5, uParam0 );
                }
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_3889(), uParam0, fVar3, fVar3, fVar3, 0 )))
            {
                REMOVE_CHAR_FROM_GROUP( uParam0 );
            }
        }
    }
    return;
}

void sub_35282()
{
    if (NOT (IS_CHAR_DEAD( l_U296 )))
    {
        if (IS_PED_IN_GROUP( l_U296 ))
        {
            if (DOES_BLIP_EXIST( l_U297 ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U297 );
            }
            if (IS_THIS_PRINT_BEING_DISPLAYED( "CP6_06", 0, 0, 0, 0, -1, -1, -1, -1, -1, -1 ))
            {
                CLEAR_THIS_PRINT( "CP6_06" );
            }
        }
        else if (NOT l_U391)
        {
            PRINT( "CP6_06", 7500, 0 );
            l_U391 = 1;
        }
        if (NOT (DOES_BLIP_EXIST( l_U297 )))
        {
            ADD_BLIP_FOR_CHAR( l_U296, ref l_U297 );
            SET_BLIP_AS_FRIENDLY( l_U297, 1 );
            sub_9489( l_U297 );
        }
    }
    return;
}

void sub_36837(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_14056( uParam0, uParam1, uParam2, uParam3, "END", "END", "END", "END", "END" );
    return;
}

void sub_37271(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    return sub_37322( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam9, uParam9, uParam9, uParam10, uParam11, uParam12 );
}

int sub_37322(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
{
    int iVar20;
    int I;
    unknown uVar22;

    l_U243[0] = uParam7;
    l_U243[1] = uParam8;
    l_U243[2] = uParam9;
    l_U242 = uParam7;
    sub_17648();
    sub_17935();
    sub_18815();
    if (sub_18996( l_U243[0], l_U243[1], l_U243[2], uParam11, uParam12, uParam13, uParam14, l_U237, uParam15, 0, 0, 0 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_WANTED_LEVEL_GREATER( sub_947(), 0 )) AND (uParam16))
            {
                if (DOES_BLIP_EXIST( l_U234 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
                    sub_19544( uParam10 );
                }
                if ((NOT l_U203) AND ((NOT sub_24873()) AND (NOT (sub_13662( 0 )))))
                {
                    sub_19424( uParam17, 0 );
                    l_U247 = uParam17;
                    l_U203 = 1;
                    l_U204 = 0;
                    if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U243[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                    }
                }
            }
            else if (l_U203)
            {
                sub_19544( uParam17 );
                l_U203 = 0;
                l_U204 = 1;
            }
            if (l_U204)
            {
                if (NOT (sub_13662( 0 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U243[0] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U243[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                    }
                    l_U204 = 0;
                }
            }
            if (NOT (DOES_BLIP_EXIST( l_U234 )))
            {
                ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U234 );
                sub_21495( l_U234 );
                if (l_U222)
                {
                    SHOW_BLIP_ON_ALTIMETER( l_U234, 1 );
                }
            }
            if (NOT (sub_13662( 0 )))
            {
                if (NOT l_U205)
                {
                    sub_19424( uParam10, 0 );
                    l_U205 = 1;
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_3889(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
            {
                iVar20 = 1;
                for ( I = 0; I < 3; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U243[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U243[I] )))
                        {
                            if ((NOT (sub_21614( l_U243[I] ))) || (NOT (IS_GROUP_MEMBER( l_U243[I], sub_14824() ))))
                            {
                                iVar20 = 0;
                            }
                        }
                    }
                }
                if ((sub_25415()) AND (iVar20))
                {
                    sub_19544( uParam10 );
                    sub_19544( uParam11 );
                    sub_19544( uParam12 );
                    sub_19544( uParam13 );
                    sub_19544( uParam14 );
                    sub_19544( uParam17 );
                    sub_19544( "MORE_SEATS" );
                    sub_25912();
                    return 1;
                }
            }
        }
    }
    else if (DOES_BLIP_EXIST( l_U234 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U234 );
        sub_19544( uParam10 );
    }
    sub_26614( uParam0, uParam1, uParam2, 0, 0 );
    sub_30043( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_38204()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    SET_PLAYER_CONTROL( sub_947(), 0 );
    sub_8484( ref l_U426, 0 );
    sub_10922( 0 );
    CLEAR_WANTED_LEVEL( sub_947() );
    CLEAR_AREA( -276.85360000, 28.49230000, 13.73580000, 15, 1 );
    SWITCH_ROADS_OFF( 65216, 17, 0, 65291, 35, 50 );
    ENABLE_SCENE_STREAMING( 0 );
    BEGIN_CAM_COMMANDS( ref l_U403 );
    if (NOT l_U404)
    {
        sub_31189();
    }
    if (NOT (IS_CHAR_DEAD( l_U296 )))
    {
        if (IS_PED_IN_GROUP( l_U296 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U296 );
        }
    }
    if (IS_CHAR_DUCKING( sub_3889() ))
    {
        SET_CHAR_DUCKING( sub_3889(), 0 );
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3889() ))
    {
        GET_CAR_CHAR_IS_USING( sub_3889(), ref l_U383 );
        if (NOT (IS_CAR_DEAD( l_U383 )))
        {
            SET_CAR_ENGINE_ON( l_U383, 0, 0 );
            GET_CAR_HEADING( l_U383, ref fVar2 );
            if (fVar2 > 0)
            {
                if (fVar2 < 180)
                {
                    SET_CAR_HEADING( l_U383, 90 );
                }
            }
            if (fVar2 > 180)
            {
                if (fVar2 < 360)
                {
                    SET_CAR_HEADING( l_U383, 270 );
                }
            }
            SET_CAR_COORDINATES( l_U383, -277.95520000, 22.49940000, 13.59450000 );
            SET_CAR_ON_GROUND_PROPERLY( l_U383 );
        }
    }
    SET_USE_HIGHDOF( 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_POS( l_U406, -267.98640000, 22.66544000, 19.33493000 );
    SET_CAM_ROT( l_U406, 5.46953200, -0.00000000, 114.45990000 );
    SET_CAM_FOV( l_U406, 42.00001000 );
    SET_CAM_POS( l_U407, -268.43060000, 22.46338000, 14.23825000 );
    SET_CAM_ROT( l_U407, 5.46953200, -0.00000000, 114.45990000 );
    SET_CAM_FOV( l_U407, 42.00001000 );
    SET_CAM_ACTIVE( l_U408, 1 );
    SET_CAM_PROPAGATE( l_U408, 1 );
    SET_CAM_INTERP_STYLE_CORE( l_U408, l_U406, l_U407, 8000, 0 );
    SETTIMERA( 0 );
    while (l_U412 == 1)
    {
        switch (l_U413)
        {
            case 0:
            if (TIMERA() > 1000)
            {
                sub_7152( "E2TM7_AMDR", ref l_U426, 7, 1 );
                l_U413++;
            }
            break;
            case 1:
            if (TIMERA() > 8000)
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3889(), 0.00000000, 3.00000000, 1.10000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                SET_CAM_POS( l_U405, uVar3._fU0, uVar3._fU4, uVar3._fU8 );
                POINT_CAM_AT_PED( l_U405, sub_3889() );
                SET_CAM_FOV( l_U405, 39 );
                SET_CAM_ACTIVE( l_U408, 0 );
                SET_CAM_PROPAGATE( l_U408, 0 );
                SET_CAM_ACTIVE( l_U405, 1 );
                SET_CAM_PROPAGATE( l_U405, 1 );
                l_U413++;
            }
            break;
            case 2:
            if (TIMERA() > 11000)
            {
                if (NOT (IS_CAR_DEAD( l_U383 )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U411 );
                    TASK_LEAVE_CAR( 0, l_U383 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, -274.61640000, 14.91670000, 13.70740000, 2, 30000, 1 );
                    CLOSE_SEQUENCE_TASK( l_U411 );
                    if (NOT (IS_CHAR_INJURED( l_U296 )))
                    {
                        TASK_PERFORM_SEQUENCE( l_U296, l_U411 );
                    }
                    CLEAR_SEQUENCE_TASK( l_U411 );
                }
                l_U413++;
            }
            break;
            case 3:
            if (TIMERA() > 12000)
            {
                SET_CAM_POS( l_U405, -287.58700000, 27.38906000, 13.94303000 );
                SET_CAM_ROT( l_U405, 15.39066000, 0.00000100, -122.24060000 );
                SET_CAM_FOV( l_U405, 45.00000000 );
                SET_CAM_ACTIVE( l_U405, 0 );
                SET_CAM_PROPAGATE( l_U405, 0 );
                SET_CAM_ACTIVE( l_U405, 1 );
                SET_CAM_PROPAGATE( l_U405, 1 );
                l_U413++;
            }
            break;
            case 4:
            if (TIMERA() > 16500)
            {
                SET_CAM_ACTIVE( l_U408, 0 );
                SET_CAM_PROPAGATE( l_U408, 0 );
                SET_USE_HIGHDOF( 0 );
                SET_WIDESCREEN_BORDERS( 0 );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                if (DOES_CHAR_EXIST( l_U296 ))
                {
                    DELETE_CHAR( ref l_U296 );
                }
                SET_GAME_CAM_HEADING( 0.00000000 );
                l_U412 = 0;
            }
            break;
        }
        if (sub_34465())
        {
            l_U412 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            INCREMENT_INT_STAT( 372, 1 );
            sub_8484( ref l_U426, 0 );
            SET_CAM_ACTIVE( l_U408, 0 );
            SET_CAM_PROPAGATE( l_U408, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            if (DOES_CHAR_EXIST( l_U296 ))
            {
                DELETE_CHAR( ref l_U296 );
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
        WAIT( 0 );
    }
    END_CAM_COMMANDS( ref l_U403 );
    ENABLE_SCENE_STREAMING( 1 );
    DELETE_CHAR( ref l_U296 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    SET_PLAYER_CONTROL( sub_947(), 1 );
    return;
}

void sub_39920()
{
    g_U25 = 82;
    INCREMENT_INT_STAT( 244, 1 );
    g_U43680 = 1;
    g_U43674++;
    if (g_U43674 > 7)
    {
        sub_39985( 0 );
        sub_40632();
        g_U43683 = 1;
    }
    sub_40794( 4 );
    sub_41064();
    sub_2744();
    return;
}

void sub_39985(unknown uParam0)
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
            sub_40097( 1, iVar4 );
            g_U43026[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_40097(unknown uParam0, int iParam1)
{
    g_U28780[uParam0]._fU4 += iParam1;
    if (g_U28780[uParam0]._fU4 > g_U28780[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U28780[uParam0]._fU4 = g_U28780[uParam0]._fU0;
    }
    sub_40267( 0 );
    return;
}

void sub_40267(boolean bParam0)
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
        sub_40512();
    }
    if ((NOT ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_40512()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    g_U15811[5] = 1;
    return;
}

void sub_40632()
{
    g_U15811[38] = 1;
    sub_40661( 2, 10000, 60000 );
    return;
}

void sub_40661(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_40676( uParam0, uParam1, uParam2 );
    return;
}

void sub_40676(unknown uParam0, int iParam1, unknown uParam2)
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

void sub_40794(unknown uParam0)
{
    if (NOT g_U42941[uParam0])
    {
        g_U42941[uParam0] = 1;
        sub_7326( "\n ----------------------------------------------------------------" );
        sub_5105( "\n  Following block of Celeb Stories has been unlocked CELEB_BLOCK_", uParam0 );
        sub_7326( "\n ----------------------------------------------------------------" );
    }
    return;
}

void sub_41064()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 1;
    iVar5 = 0;
    sub_1020( iVar2, 500, 3, 1, 0, 0 );
    SET_PLAYER_MOOD_NORMAL( sub_947() );
    sub_41111();
    sub_41195();
    sub_41283( 0 );
    sub_1782();
    return;
}

void sub_41111()
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

void sub_41195()
{
    sub_41204();
    return;
}

void sub_41204()
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

void sub_41283(unknown uParam0)
{
    if (g_U10754)
    {
        g_U10754 = 0;
        return;
    }
    SET_BIT( ref g_U10751._fU0, 1 );
    sub_41334( ref g_U10751._fU0, 2, uParam0 );
    CLEAR_BIT( ref g_U10751._fU0, 3 );
    g_U10751._fU4 = 0;
    g_U10751._fU8 = 0;
    return;
}

void sub_41334(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        SET_BIT( uParam0, uParam1 );
        return;
    }
    CLEAR_BIT( uParam0, uParam1 );
    return;
}

void sub_41668()
{
    if (IS_SCREEN_FADED_IN())
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
    }
    sub_10922( 0 );
    CLEAR_PRINTS();
    CLEAR_WANTED_LEVEL( sub_947() );
    ENABLE_SCENE_STREAMING( 0 );
    BEGIN_CAM_COMMANDS( ref l_U403 );
    if (NOT l_U404)
    {
        sub_31189();
    }
    HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3889(), 1 );
    if (DOES_CHAR_EXIST( l_U296 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U296 )))
        {
            if (IS_CHAR_IN_ANY_CAR( l_U296 ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( l_U296, -446.79250000, 350.67200000, 10.92280000 );
            }
            else
            {
                SET_CHAR_COORDINATES( l_U296, -446.79250000, 350.67200000, 10.92280000 );
            }
            SET_CHAR_HEADING( l_U296, 355.62460000 );
            OPEN_SEQUENCE_TASK( ref l_U411 );
            TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, -444.32510000, 357.03480000, 10.07750000, 2, 120000, 1 );
            TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, -438.78850000, 356.78770000, 10.71170000, 2, 120000, 1 );
            CLOSE_SEQUENCE_TASK( l_U411 );
            TASK_PERFORM_SEQUENCE( l_U296, l_U411 );
            CLEAR_SEQUENCE_TASK( l_U411 );
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3889() ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( sub_3889(), -445.83560000, 349.55290000, 11.04430000 );
    }
    else
    {
        SET_CHAR_COORDINATES( sub_3889(), -445.83560000, 349.55290000, 11.04430000 );
    }
    SET_CHAR_HEADING( sub_3889(), 32.44890000 );
    if (NOT (IS_CHAR_DEAD( l_U296 )))
    {
        if (IS_PED_IN_GROUP( l_U296 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U296 );
        }
    }
    CLEAR_AREA( -438.36440000, 355.93410000, 10.71170000, 100, 1 );
    LOAD_SCENE( -438.36440000, 355.93410000, 10.71170000 );
    SWITCH_PED_PATHS_OFF( 65088, 343, -10, 65094, 368, 50 );
    SWITCH_ROADS_OFF( 65074, 335, -10, 65091, 374, 50 );
    SET_USE_HIGHDOF( 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_POS( l_U405, -447.95020000, 350.09920000, 12.40860000 );
    SET_CAM_ROT( l_U405, -1.04603800, 0.00000000, -36.51356000 );
    SET_CAM_FOV( l_U405, 34.80003000 );
    SET_CAM_ACTIVE( l_U405, 1 );
    SET_CAM_PROPAGATE( l_U405, 1 );
    SETTIMERA( 0 );
    sub_7152( "E2TM7_FCUT", ref l_U426, 5, 1 );
    while (l_U394 == 1)
    {
        switch (l_U395)
        {
            case 0:
            if (TIMERA() > 1000)
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( sub_3889(), -445.51500000, 352.15870000, 10.76980000, 2, 120000, 1 );
                if (IS_SCREEN_FADED_OUT())
                {
                    DO_SCREEN_FADE_IN( 1000 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                }
                l_U395++;
            }
            break;
            case 1:
            if (TIMERA() > 10000)
            {
                l_U395++;
            }
            break;
            case 2:
            SET_CHAR_COORDINATES( sub_3889(), -445.57780000, 352.12370000, 10.77550000 );
            SET_CHAR_HEADING( sub_3889(), 342.93360000 );
            SET_CAM_ACTIVE( l_U405, 0 );
            SET_CAM_PROPAGATE( l_U405, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_3889() );
            l_U394 = 0;
            break;
        }
        if (sub_34465())
        {
            l_U394 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            DELETE_CHAR( ref l_U296 );
            if (IS_CHAR_IN_ANY_CAR( sub_3889() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_3889(), -445.57780000, 352.12370000, 10.77550000 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_3889(), -445.57780000, 352.12370000, 10.77550000 );
            }
            SET_CHAR_HEADING( sub_3889(), 342.93360000 );
            INCREMENT_INT_STAT( 372, 1 );
            sub_8484( ref l_U426, 0 );
            SET_CAM_ACTIVE( l_U405, 0 );
            SET_CAM_PROPAGATE( l_U405, 0 );
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            SET_CAM_BEHIND_PED( sub_3889() );
        }
        WAIT( 0 );
    }
    if (DOES_CHAR_EXIST( l_U296 ))
    {
        DELETE_CHAR( ref l_U296 );
    }
    END_CAM_COMMANDS( ref l_U403 );
    ENABLE_SCENE_STREAMING( 1 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    SET_PLAYER_CONTROL( sub_947(), 1 );
    sub_11987();
    return;
}

