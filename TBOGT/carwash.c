void main()
{
    l_U0 = -1;
    l_U8 = 86.00000000;
    l_U9 = 274.00000000;
    l_U10 = 0;
    l_U11 = 0;
    l_U12 = 1;
    l_U13 = 3;
    l_U14 = 1;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U21 = -1.00000000;
    l_U22 = -1.00000000;
    l_U23 = 2.50000000;
    l_U26 = 0;
    l_U29 = nil;
    l_U38 = 0;
    l_U39 = 0;
    l_U40 = 0;
    l_U41 = 0;
    l_U42 = 0;
    l_U43 = 0;
    l_U44 = 0;
    l_U45 = 0;
    l_U46 = 0;
    l_U47 = 1;
    l_U99 = 0;
    l_U100 = 99;
    l_U102 = {-500.14840000, 504.59460000, 5.66860000};
    l_U115 = {-0.00400000, 0.00500000, 5.92800000};
    l_U118 = {1.39000000, -2.36300000, 1.70000000};
    l_U121 = {-1.39900000, -2.36100000, 1.70000000};
    l_U151 = {90.00000000, 90.00000000, 180.00000000};
    l_U154 = {0.00000000, 0.00000000, 0.00000000};
    l_U157 = {0.00000000, 0.00000000, 180.00000000};
    l_U163 = 0;
    l_U164 = 0;
    l_U165 = 0;
    l_U166 = 0;
    l_U167 = 0;
    l_U168 = -1;
    l_U267 = 5.00000000;
    l_U269 = "CAR_WASH_BARRIER";
    l_U270 = "CAR_WASH_SPRAY";
    l_U271 = "CAR_WASH_BRUSH_MOTOR";
    l_U272 = "CAR_WASH_BRUSHES";
    l_U273 = "CAR_WASH_PAY";
    l_U274 = -1;
    l_U275 = -1;
    l_U276 = -1;
    l_U277 = -1;
    l_U278 = -1;
    l_U279 = -1;
    l_U280 = 1;
    l_U281 = 1;
    l_U283 = 0;
    l_U284 = -552829610;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    for ( l_U36 = 0; l_U36 < 12; l_U36++ )
    {
        l_U176[l_U36] = 0;
    }
    l_U189[0] = {2.00000000, -0.85000000, 0.50000000};
    l_U226[0] = {0.00000000, 0.00000000, 90.00000000};
    l_U189[1] = {2.00000000, -0.85000000, 1.00000000};
    l_U226[1] = {0.00000000, 0.00000000, 90.00000000};
    l_U189[8] = {2.00000000, -0.85000000, 1.50000000};
    l_U226[8] = {0.00000000, 0.00000000, 90.00000000};
    l_U189[2] = {2.00000000, 1.75000000, 0.50000000};
    l_U226[2] = {0.00000000, 0.00000000, 90.00000000};
    l_U189[3] = {2.00000000, 1.75000000, 1.00000000};
    l_U226[3] = {0.00000000, 0.00000000, 90.00000000};
    l_U189[9] = {2.00000000, 1.75000000, 1.50000000};
    l_U226[9] = {0.00000000, 0.00000000, 90.00000000};
    l_U189[4] = {-2.00000000, -0.85000000, 0.50000000};
    l_U226[4] = {0.00000000, 0.00000000, 270.00000000};
    l_U189[5] = {-2.00000000, -0.85000000, 1.00000000};
    l_U226[5] = {0.00000000, 0.00000000, 270.00000000};
    l_U189[10] = {-2.00000000, -0.85000000, 1.50000000};
    l_U226[10] = {0.00000000, 0.00000000, 270.00000000};
    l_U189[6] = {-2.00000000, 1.75000000, 0.50000000};
    l_U226[6] = {0.00000000, 0.00000000, 270.00000000};
    l_U189[7] = {-2.00000000, 1.75000000, 1.00000000};
    l_U226[7] = {0.00000000, 0.00000000, 270.00000000};
    l_U189[11] = {-2.00000000, 1.75000000, 1.50000000};
    l_U226[11] = {0.00000000, 0.00000000, 270.00000000};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1211();
    }
    sub_1562();
    while (true)
    {
        WAIT( 0 );
        GET_FRAME_TIME( ref l_U19 );
        sub_1607( l_U286 );
        if (DOES_OBJECT_EXIST( l_U286 ))
        {
            if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U286 ))
            {
                switch (l_U10)
                {
                    case 0:
                    GET_OBJECT_COORDINATES( l_U286, ref l_U102._fU0, ref l_U102._fU4, ref l_U102._fU8 );
                    GET_OBJECT_HEADING( l_U286, ref l_U263 );
                    if (sub_6443())
                    {
                        sub_6496();
                        sub_6752( l_U286 );
                        sub_3998( l_U286 );
                        l_U145 = {l_U142 - l_U133};
                        l_U13 = 1;
                        l_U10 = 1;
                        l_U11 = 0;
                    }
                    break;
                    case 1:
                    if (NOT l_U38)
                    {
                        switch (l_U11)
                        {
                            case 0:
                            if ((sub_6443()) AND (NOT sub_8366()))
                            {
                                if (sub_9624())
                                {
                                    if (sub_9789())
                                    {
                                        sub_9988();
                                    }
                                }
                                if (l_U46)
                                {
                                    if (sub_10342())
                                    {
                                        if (IS_CAR_STOPPED( l_U101 ))
                                        {
                                            if (sub_10436())
                                            {
                                                CLEAR_HELP();
                                                if (NOT sub_9804())
                                                {
                                                    ADD_SCORE( sub_5731(), -l_U169 );
                                                }
                                                SET_WIDESCREEN_BORDERS( 1 );
                                                if (IS_THIS_A_MINIGAME_SCRIPT())
                                                {
                                                    DISPLAY_NON_MINIGAME_HELP_MESSAGES( 1 );
                                                }
                                                l_U279 = GET_SOUND_ID();
                                                sub_10737( l_U286 );
                                                sub_11777();
                                                sub_3998( l_U286 );
                                                l_U11 = 1;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        sub_12489( l_U286 );
                                    }
                                }
                                else if (sub_14869( 1, 1 ))
                                {
                                    if (sub_10342())
                                    {
                                        if (sub_12708())
                                        {
                                            if (sub_9789())
                                            {
                                                if (sub_12982( l_U263, 15.00000000 ))
                                                {
                                                    if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5731() ))
                                                    {
                                                        SET_MINIGAME_IN_PROGRESS( 1 );
                                                        CLEAR_HELP();
                                                        sub_13226();
                                                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
                                                        l_U46 = 1;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                sub_15278( l_U286 );
                                            }
                                        }
                                    }
                                    else
                                    {
                                        sub_12489( l_U286 );
                                    }
                                }
                            }
                            else if (LOCATE_CHAR_IN_CAR_3D( sub_1900(), l_U124._fU0, l_U124._fU4, l_U124._fU8, 6.00000000, 6.00000000, 6.00000000, 0 ))
                            {
                                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1900() ))
                                {
                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                    {
                                        PRINT_NOW( "CWBLIST", 7500, 1 );
                                    }
                                }
                            }
                            break;
                            case 1:
                            GET_SCRIPT_TASK_STATUS( sub_1900(), 29, ref l_U20 );
                            if (l_U20 == 7)
                            {
                                CLEAR_SEQUENCE_TASK( l_U24 );
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
                                if (NOT (IS_CAR_DEAD( l_U101 )))
                                {
                                    if (NOT l_U39)
                                    {
                                        sub_15666( l_U286 );
                                        STOP_SOUND( l_U279 );
                                        if (l_U279 > -1)
                                        {
                                            RELEASE_SOUND_ID( l_U279 );
                                            l_U279 = -1;
                                        }
                                        l_U39 = 1;
                                    }
                                    sub_15929( l_U286 );
                                    if (l_U15 == 1)
                                    {
                                        FREEZE_CAR_POSITION( l_U101, 0 );
                                        CLOSE_ALL_CAR_DOORS( l_U101 );
                                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U286, 0.00000000, 1.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                                        TASK_CAR_DRIVE_TO_COORD( sub_1900(), l_U101, l_U124._fU0, l_U124._fU4, l_U124._fU8, 5.00000000, 0, 0, 3, 1.00000000, -1 );
                                        l_U11 = 2;
                                        l_U15 = 2;
                                    }
                                }
                            }
                            break;
                            case 2:
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U286, 0.00000000, 1.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                            if (LOCATE_CHAR_IN_CAR_3D( sub_1900(), l_U124._fU0, l_U124._fU4, l_U124._fU8, 0.75000000, 0.75000000, 2.00000000, 0 ))
                            {
                                FREEZE_OBJECT_POSITION( l_U107, 0 );
                                FREEZE_OBJECT_POSITION( l_U108, 0 );
                                FREEZE_OBJECT_POSITION( l_U109, 0 );
                                FREEZE_OBJECT_POSITION( l_U110, 0 );
                                FREEZE_OBJECT_POSITION( l_U111, 0 );
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
                                CLOSE_ALL_CAR_DOORS( l_U101 );
                                GET_SCRIPT_TASK_STATUS( sub_1900(), 15, ref l_U20 );
                                if (l_U20 == 1)
                                {
                                    SET_DRIVE_TASK_CRUISE_SPEED( sub_1900(), 0.00000000 );
                                }
                                TASK_CAR_TEMP_ACTION( sub_1900(), l_U101, 6, 500 );
                                DISPLAY_HUD( 0 );
                                DISPLAY_RADAR( 0 );
                                l_U38 = 1;
                                l_U99 = 0;
                                l_U12 = 1;
                                l_U13 = 1;
                                l_U14 = 0;
                                l_U10 = 2;
                                l_U11 = 0;
                                l_U15 = 2;
                                l_U16 = 0;
                                l_U39 = 0;
                                sub_17514();
                            }
                            else
                            {
                                l_U38 = 0;
                            }
                            break;
                        }
                    }
                    else if (NOT (LOCATE_CHAR_IN_CAR_3D( sub_1900(), l_U102._fU0, l_U102._fU4, l_U102._fU8, 3.00000000, 3.00000000, 3.00000000, 0 )))
                    {
                        l_U38 = 0;
                        l_U99 = 1;
                    }
                    break;
                    case 2:
                    switch (l_U14)
                    {
                        case 0:
                        sub_15929( l_U286 );
                        break;
                        case 1:
                        sub_18618( l_U286 );
                        sub_20751();
                        sub_20888();
                        break;
                        case 2:
                        sub_21353( l_U286 );
                        sub_20751();
                        sub_20888();
                        break;
                        case 3:
                        sub_23007( l_U286 );
                        break;
                    }
                    break;
                }
            }
            else
            {
                sub_10505( "Car Wash Script Killed - Out of Range" );
                PRINTNL();
                sub_1211();
            }
        }
        else
        {
            sub_10505( "Car Wash Script Killed - Object Doesn't Exist" );
            PRINTNL();
            sub_1211();
        }
    }
    return;
}

void sub_1211()
{
    l_U100 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CARWASH" );
    if (l_U100 == 1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1810621476 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2105160167 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1538289236 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -740011106 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -442566893 );
        REMOVE_ANIMS( "AMB@CARWASH" );
        DELETE_OBJECT( ref l_U106 );
        DELETE_OBJECT( ref l_U107 );
        DELETE_OBJECT( ref l_U108 );
        DELETE_OBJECT( ref l_U109 );
        DELETE_OBJECT( ref l_U110 );
        DELETE_OBJECT( ref l_U111 );
        DELETE_OBJECT( ref l_U112 );
        DELETE_OBJECT( ref l_U113 );
        DELETE_OBJECT( ref l_U114 );
    }
    if (l_U26 > 0)
    {
        SET_USE_HIGHDOF( 0 );
        END_CAM_COMMANDS( ref l_U26 );
        l_U26 = 0;
    }
    if (l_U164 > 0)
    {
        STOP_PTFX( l_U164 );
        l_U164 = 0;
    }
    if (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT/CAR_WASH" ))
    {
        AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1562()
{
    return;
}

void sub_1607(unknown uParam0)
{
    if ((l_U11 == 2) || ((l_U11 == 1) || (l_U10 == 2)))
    {
        if (sub_1638())
        {
            l_U43 = 0;
            l_U17 = 0;
            DO_SCREEN_FADE_OUT( 500 );
            sub_1819( uParam0 );
            l_U43 = 0;
            l_U17 = 0;
        }
    }
    return;
}

int sub_1638()
{
    if (NOT sub_1647())
    {
        l_U42 = 1;
    }
    else if (l_U42 == 1)
    {
        l_U42 = 0;
        return 1;
    }
    return 0;
}

int sub_1647()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_1819(unknown uParam0)
{
    while (NOT l_U43)
    {
        WAIT( 0 );
        switch (l_U17)
        {
            case 0:
            if (IS_SCREEN_FADED_OUT())
            {
                CLEAR_HELP();
                if (IS_CHAR_IN_ANY_CAR( sub_1900() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
                    SET_VEHICLE_DIRT_LEVEL( l_U101, 0.00000000 );
                    WASH_VEHICLE_TEXTURES( l_U101, 255 );
                    if (DOES_OBJECT_EXIST( uParam0 ))
                    {
                        GET_OBJECT_HEADING( uParam0, ref l_U105 );
                    }
                    if (NOT (IS_CAR_A_MISSION_CAR( l_U101 )))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 12.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( l_U124._fU0, l_U124._fU4, l_U124._fU8 + 1.00000000, ref l_U124._fU8 );
                        sub_2135( l_U124 );
                    }
                    else
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( l_U124._fU0, l_U124._fU4, l_U124._fU8 + 1.00000000, ref l_U124._fU8 );
                        sub_2135( l_U124 );
                    }
                    if (NOT (sub_3022( l_U124 )))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 9.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( l_U124._fU0, l_U124._fU4, l_U124._fU8 + 1.00000000, ref l_U124._fU8 );
                        sub_2135( l_U124 );
                    }
                    if (NOT (sub_3022( l_U124 )))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                        GET_GROUND_Z_FOR_3D_COORD( l_U124._fU0, l_U124._fU4, l_U124._fU8 + 1.00000000, ref l_U124._fU8 );
                        sub_2135( l_U124 );
                    }
                    GET_CAR_MODEL( l_U101, ref l_U37 );
                    GET_MODEL_DIMENSIONS( l_U37, ref l_U170, ref l_U173 );
                    l_U124._fU8 += l_U173._fU8 / 2.00000000;
                    l_U124._fU8 -= 0.30000000;
                    SET_CAR_COORDINATES( l_U101, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
                    SET_CAR_HEADING( l_U101, l_U105 );
                    if (NOT (IS_CHAR_DEAD( l_U285 )))
                    {
                        DELETE_CHAR( ref l_U285 );
                    }
                    CLEAR_SEQUENCE_TASK( l_U25 );
                }
                l_U17 = 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_ANY_CAR( sub_1900() ))
            {
                if (l_U163 > 0)
                {
                    STOP_PTFX( l_U163 );
                    l_U163 = 0;
                }
                if (l_U165 > 0)
                {
                    STOP_PTFX( l_U165 );
                    l_U165 = 0;
                }
                if (l_U166 > 0)
                {
                    STOP_PTFX( l_U166 );
                    l_U166 = 0;
                }
                for ( l_U36 = 0; l_U36 < 12; l_U36++ )
                {
                    if (l_U176[l_U36] > 0)
                    {
                        STOP_PTFX( l_U176[l_U36] );
                        l_U176[l_U36] = 0;
                    }
                }
                if (l_U164 > 0)
                {
                    STOP_PTFX( l_U164 );
                    l_U164 = 0;
                }
                sub_3769();
                sub_3998( uParam0 );
                if (NOT (IS_CAR_DEAD( l_U101 )))
                {
                    FREEZE_CAR_POSITION( l_U101, 0 );
                    LOCK_CAR_DOORS( l_U101, 6 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 0.00000000, 0.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                    DISPLAY_HUD( 1 );
                    DISPLAY_RADAR( 1 );
                    CLEAR_CHAR_TASKS( sub_1900() );
                    ENABLE_FRONTEND_RADIO();
                    if (SET_CAR_ON_GROUND_PROPERLY( l_U101 ))
                    {
                        ;
                    }
                }
                sub_5542();
                l_U17 = 2;
            }
            break;
            case 2:
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1900(), 0 );
            sub_5722();
            SET_WIDESCREEN_BORDERS( 0 );
            SET_EVERYONE_IGNORE_PLAYER( sub_5731(), 0 );
            PRINT_NOW( "CLEAN", 7500, 1 );
            DO_SCREEN_FADE_IN( 500 );
            SETTIMERA( 0 );
            while (TIMERA() < 500)
            {
                WAIT( 0 );
            }
            while (NOT IS_SCREEN_FADED_IN())
            {
                WAIT( 0 );
            }
            if (NOT g_U10510)
            {
                PRINT_HELP( "CWHLP3" );
                g_U10510 = 1;
            }
            SET_MINIGAME_IN_PROGRESS( 0 );
            g_U10935 = l_U283;
            l_U43 = 1;
            l_U17 = 0;
            break;
        }
    }
    sub_6016();
    return;
}

void sub_1900()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2135(vector vParam0)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    uVar5 = nil;
    CLEAR_AREA_OF_CARS( vParam0.x, vParam0.y, vParam0.z, 5.00000000 );
    CLEAR_AREA_OF_CHARS( vParam0.x, vParam0.y, vParam0.z, 5.00000000 );
    l_U170 = {-2.00000000, -2.00000000, -3.00000000};
    l_U173 = {2.00000000, 2.00000000, 3.00000000};
    l_U170 = {vParam0 + l_U170};
    l_U173 = {vParam0 + l_U173};
    SWITCH_PED_PATHS_OFF( l_U170._fU0, l_U170._fU4, l_U170._fU8, l_U173._fU0, l_U173._fU4, l_U173._fU8 );
    GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( vParam0.x, vParam0.y, vParam0.z, 5.00000000, 0, 1, ref uVar5 );
    if (NOT (IS_CAR_DEAD( uVar5 )))
    {
        sub_2366( ref uVar6, ref uVar7 );
        CLEAR_AREA_OF_CARS( uVar7._fU0, uVar7._fU4, uVar7._fU8, 5.00000000 );
        CLEAR_AREA_OF_CHARS( uVar7._fU0, uVar7._fU4, uVar7._fU8, 5.00000000 );
        SET_CAR_HEADING( uVar5, uVar6 );
        SET_CAR_COORDINATES( uVar5, uVar7._fU0, uVar7._fU4, uVar7._fU8 );
    }
    return;
}

void sub_2366(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_DEAD( sub_1900() )))
    {
        GET_CHAR_COORDINATES( sub_1900(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    if (sub_2414())
    {
        (uParam1^) = {1512.20700000, 155.67280000, 20.92480000};
        (uParam0^) = 90.00000000;
    }
    else if (sub_2538())
    {
        (uParam1^) = {-505.84230000, 512.64300000, 5.53430000};
        (uParam0^) = 90.00000000;
    }
    else if (sub_2658())
    {
        if (uVar4._fU4 < 250.00000000)
        {
            (uParam1^) = {-1388.67200000, 60.17220000, 5.96440000};
            (uParam0^) = 0.00000000;
        }
        else
        {
            (uParam1^) = {-1309.69600000, 1770.09100000, 26.81960000};
            (uParam0^) = 90.00000000;
        }
    };;;
    return;
}

int sub_2414()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( sub_1900() )))
    {
        GET_CHAR_COORDINATES( sub_1900(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if ((iVar5 == 1) || (iVar5 == 0))
        {
            return 1;
        }
    }
    return 0;
}

int sub_2538()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( sub_1900() )))
    {
        GET_CHAR_COORDINATES( sub_1900(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if (iVar5 == 2)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2658()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( sub_1900() )))
    {
        GET_CHAR_COORDINATES( sub_1900(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if (iVar5 == 3)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3022(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    iVar5 = nil;
    iVar6 = nil;
    GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uParam0._fU0, uParam0._fU4, uParam0._fU8, l_U23 * 3.00000000, 0, 1, ref iVar5 );
    if (iVar5 == nil)
    {
        return 1;
    }
    else
    {
        GET_DRIVER_OF_CAR( iVar5, ref iVar6 );
        if (iVar6 == nil)
        {
            return 0;
        }
        else if (iVar6 == sub_1900())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

void sub_3769()
{
    if (l_U274 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U274 )))
        {
            STOP_SOUND( l_U274 );
        }
    }
    if (l_U275 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U275 )))
        {
            STOP_SOUND( l_U275 );
        }
    }
    if (l_U276 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U276 )))
        {
            STOP_SOUND( l_U276 );
        }
    }
    if (l_U277 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U277 )))
        {
            STOP_SOUND( l_U277 );
        }
    }
    if (l_U278 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U278 )))
        {
            STOP_SOUND( l_U278 );
        }
    }
    return;
}

void sub_3998(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U102._fU0, ref l_U102._fU4, ref l_U102._fU8 );
        GET_OBJECT_HEADING( uParam0, ref l_U263 );
        if (DOES_OBJECT_EXIST( l_U111 ))
        {
            SET_OBJECT_COORDINATES( l_U111, l_U102._fU0, l_U102._fU4, l_U102._fU8 );
        }
        if (DOES_OBJECT_EXIST( l_U110 ))
        {
            SET_OBJECT_COORDINATES( l_U110, l_U102._fU0, l_U102._fU4, l_U102._fU8 );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U115._fU0, l_U115._fU4, l_U115._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        if (DOES_OBJECT_EXIST( l_U107 ))
        {
            SET_OBJECT_COORDINATES( l_U107, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U118._fU0, l_U118._fU4, l_U118._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        if (DOES_OBJECT_EXIST( l_U108 ))
        {
            SET_OBJECT_COORDINATES( l_U108, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U121._fU0, l_U121._fU4, l_U121._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        if (DOES_OBJECT_EXIST( l_U109 ))
        {
            SET_OBJECT_COORDINATES( l_U109, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -3.20000000, 1.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        if (DOES_OBJECT_EXIST( l_U112 ))
        {
            SET_OBJECT_COORDINATES( l_U112, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 3.30000000, 1.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        if (DOES_OBJECT_EXIST( l_U113 ))
        {
            SET_OBJECT_COORDINATES( l_U113, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        }
        if (DOES_OBJECT_EXIST( l_U114 ))
        {
            if (LOCATE_OBJECT_3D( uParam0, -420.37700000, -20.32100000, 9.14100000, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                l_U282 = -6.00000000;
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -2.00000000, l_U282, 5.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                GET_GROUND_Z_FOR_3D_COORD( l_U124._fU0, l_U124._fU4, l_U124._fU8, ref l_U124._fU8 );
            }
            else
            {
                l_U282 = -8.00000000;
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -2.00000000, l_U282, 5.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                GET_GROUND_Z_FOR_3D_COORD( l_U124._fU0, l_U124._fU4, l_U124._fU8, ref l_U124._fU8 );
            }
            SET_OBJECT_COORDINATES( l_U114, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U110 ))
    {
        GET_OBJECT_COORDINATES( l_U110, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
    }
    if (DOES_OBJECT_EXIST( l_U107 ))
    {
        GET_OBJECT_COORDINATES( l_U107, ref l_U148._fU0, ref l_U148._fU4, ref l_U148._fU8 );
    }
    l_U139 = {l_U133};
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 2.80000000, 0.00000000, ref l_U142._fU0, ref l_U142._fU4, ref l_U142._fU8 );
        if (DOES_OBJECT_EXIST( l_U110 ))
        {
            SET_OBJECT_COORDINATES( l_U110, l_U142._fU0, l_U142._fU4, l_U142._fU8 );
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 2.80000000, 3.00000000, ref l_U142._fU0, ref l_U142._fU4, ref l_U142._fU8 );
        if (DOES_OBJECT_EXIST( l_U107 ))
        {
            SET_OBJECT_COORDINATES( l_U107, l_U142._fU0, l_U142._fU4, l_U142._fU8 );
        }
    }
    l_U145 = {l_U142 - l_U133};
    l_U265 = l_U142._fU8 - l_U133._fU8;
    if (DOES_OBJECT_EXIST( l_U111 ))
    {
        GET_OBJECT_COORDINATES( l_U111, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
    }
    l_U139 = {l_U133};
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -0.80000000, 0.00000000, ref l_U142._fU0, ref l_U142._fU4, ref l_U142._fU8 );
    }
    return;
}

void sub_5542()
{
    SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
    if (DOES_CAM_EXIST( l_U28 ))
    {
        SET_CAM_ACTIVE( l_U28, 0 );
        SET_CAM_PROPAGATE( l_U28, 0 );
        DESTROY_CAM( l_U28 );
    }
    if (DOES_CAM_EXIST( l_U27 ))
    {
        SET_CAM_ACTIVE( l_U27, 0 );
        SET_CAM_PROPAGATE( l_U27, 0 );
        DESTROY_CAM( l_U27 );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_BEHIND_PED( sub_1900() );
    SET_USE_HIGHDOF( 0 );
    END_CAM_COMMANDS( ref l_U26 );
    return;
}

void sub_5722()
{
    if (IS_PLAYER_PLAYING( sub_5731() ))
    {
        SET_PLAYER_CONTROL( sub_5731(), 1 );
    }
    sub_5787();
    return;
}

void sub_5731()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5787()
{
    g_U95._fU100 = 0;
    g_U95._fU104 = 0;
    return;
}

void sub_6016()
{
    l_U46 = 0;
    l_U38 = 0;
    l_U39 = 0;
    l_U40 = 0;
    l_U41 = 0;
    l_U42 = 0;
    l_U43 = 0;
    l_U44 = 0;
    l_U10 = 1;
    l_U11 = 0;
    l_U12 = 1;
    l_U13 = 3;
    l_U14 = 1;
    l_U15 = 0;
    l_U16 = 0;
    l_U267 = 4.00000000;
    l_U18 = 0;
    if (l_U274 > -1)
    {
        RELEASE_SOUND_ID( l_U274 );
        l_U274 = -1;
    }
    if (l_U275 > -1)
    {
        RELEASE_SOUND_ID( l_U275 );
        l_U275 = -1;
    }
    if (l_U276 > -1)
    {
        RELEASE_SOUND_ID( l_U276 );
        l_U276 = -1;
    }
    if (l_U277 > -1)
    {
        RELEASE_SOUND_ID( l_U277 );
        l_U277 = -1;
    }
    if (l_U278 > -1)
    {
        RELEASE_SOUND_ID( l_U278 );
        l_U278 = -1;
    }
    if (l_U279 > -1)
    {
        RELEASE_SOUND_ID( l_U279 );
        l_U279 = -1;
    }
    return;
}

void sub_6443()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "tonym1" )) > 0)
    {
        Result = 0;
    }
    return Result;
}

void sub_6496()
{
    REQUEST_MODEL( -1810621476 );
    REQUEST_MODEL( -2105160167 );
    REQUEST_MODEL( -1538289236 );
    REQUEST_MODEL( -740011106 );
    REQUEST_MODEL( -442566893 );
    REQUEST_MODEL( 1824938526 );
    REQUEST_MODEL( 1709547551 );
    while ((NOT (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT/CAR_WASH" ))) || ((NOT (HAS_MODEL_LOADED( 1709547551 ))) || ((NOT (HAS_MODEL_LOADED( 1824938526 ))) || ((NOT (HAS_MODEL_LOADED( -442566893 ))) || ((NOT (HAS_MODEL_LOADED( -740011106 ))) || ((NOT (HAS_MODEL_LOADED( -1538289236 ))) || ((NOT (HAS_MODEL_LOADED( -2105160167 ))) || (NOT (HAS_MODEL_LOADED( -1810621476 ))))))))))
    {
        WAIT( 0 );
    }
    return;
}

void sub_6752(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        CREATE_OBJECT( -740011106, l_U102._fU0, l_U102._fU4, l_U102._fU8, ref l_U111, 1 );
        SET_OBJECT_COLLISION( l_U111, 0 );
        CREATE_OBJECT( -442566893, l_U102._fU0, l_U102._fU4, l_U102._fU8, ref l_U110, 1 );
        SET_OBJECT_COLLISION( l_U110, 0 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U115._fU0, l_U115._fU4, l_U115._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        CREATE_OBJECT( -1810621476, l_U124._fU0, l_U124._fU4, l_U124._fU8, ref l_U107, 1 );
        SET_OBJECT_COLLISION( l_U107, 0 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U118._fU0, l_U118._fU4, l_U118._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        CREATE_OBJECT( -2105160167, l_U124._fU0, l_U124._fU4, l_U124._fU8, ref l_U108, 1 );
        SET_OBJECT_COLLISION( l_U108, 0 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U121._fU0, l_U121._fU4, l_U121._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        CREATE_OBJECT( -1538289236, l_U124._fU0, l_U124._fU4, l_U124._fU8, ref l_U109, 1 );
        SET_OBJECT_COLLISION( l_U109, 0 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -3.20000000, 1.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        CREATE_OBJECT( 1824938526, l_U124._fU0, l_U124._fU4, l_U124._fU8, ref l_U112, 1 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 3.30000000, 1.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        CREATE_OBJECT( 1824938526, l_U124._fU0, l_U124._fU4, l_U124._fU8, ref l_U113, 1 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -2.00000000, -8.00000000, 5.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        GET_GROUND_Z_FOR_3D_COORD( l_U124._fU0, l_U124._fU4, l_U124._fU8, ref l_U124._fU8 );
        CREATE_OBJECT( 1709547551, l_U124._fU0, l_U124._fU4, l_U124._fU8 + 1.00000000, ref l_U114, 1 );
        SET_OBJECT_DYNAMIC( uParam0, 0 );
        FREEZE_OBJECT_POSITION( uParam0, 1 );
        if (DOES_OBJECT_EXIST( l_U110 ))
        {
            SET_OBJECT_HEADING( l_U110, l_U263 );
            SET_OBJECT_DYNAMIC( l_U110, 0 );
            FREEZE_OBJECT_POSITION( l_U110, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U107 ))
        {
            SET_OBJECT_HEADING( l_U107, l_U263 );
            FREEZE_OBJECT_POSITION( l_U107, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U108 ))
        {
            SET_OBJECT_HEADING( l_U108, l_U263 );
            SET_OBJECT_DYNAMIC( l_U108, 0 );
            FREEZE_OBJECT_POSITION( l_U108, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U109 ))
        {
            SET_OBJECT_HEADING( l_U109, l_U263 );
            SET_OBJECT_DYNAMIC( l_U109, 0 );
            FREEZE_OBJECT_POSITION( l_U109, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U112 ))
        {
            SET_OBJECT_HEADING( l_U112, l_U263 );
            SET_OBJECT_DYNAMIC( l_U112, 0 );
            FREEZE_OBJECT_POSITION( l_U112, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U113 ))
        {
            SET_OBJECT_HEADING( l_U113, l_U263 );
            SET_OBJECT_DYNAMIC( l_U113, 0 );
            FREEZE_OBJECT_POSITION( l_U113, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U114 ))
        {
            l_U105 = l_U263 + 180.00000000;
            if (l_U105 > 360.00000000)
            {
                l_U105 -= 360.00000000;
            }
            SET_OBJECT_HEADING( l_U114, l_U105 );
            SET_OBJECT_DYNAMIC( l_U114, 0 );
            FREEZE_OBJECT_POSITION( l_U114, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U111 ))
        {
            GET_OBJECT_COORDINATES( l_U111, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
            SET_OBJECT_HEADING( l_U111, l_U263 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -0.80000000, 0.00000000, ref l_U142._fU0, ref l_U142._fU4, ref l_U142._fU8 );
            SET_OBJECT_COORDINATES( l_U111, l_U142._fU0, l_U142._fU4, l_U133._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U111, l_U118._fU0, l_U118._fU4, l_U118._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            SET_OBJECT_COORDINATES( l_U108, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U111, l_U121._fU0, l_U121._fU4, l_U121._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            SET_OBJECT_COORDINATES( l_U109, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
            SET_OBJECT_DYNAMIC( l_U111, 0 );
            FREEZE_OBJECT_POSITION( l_U111, 1 );
        }
    }
    return;
}

int sub_8366()
{
    if (IS_CHAR_IN_ANY_CAR( sub_1900() ))
    {
        if (DOES_OBJECT_EXIST( l_U114 ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U114, -2.00000000, 0.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
        if (NOT sub_8471())
        {
            return 1;
        }
        GET_CAR_MODEL( l_U101, ref l_U37 );
        if (IS_THIS_MODEL_A_BIKE( l_U37 ))
        {
            return 1;
        }
        if (IS_THIS_MODEL_A_BOAT( l_U37 ))
        {
            return 1;
        }
        if (IS_THIS_MODEL_A_PLANE( l_U37 ))
        {
            return 1;
        }
        if (IS_THIS_MODEL_A_HELI( l_U37 ))
        {
            return 1;
        }
        if (IS_THIS_MODEL_A_TRAIN( l_U37 ))
        {
            return 1;
        }
        if (sub_8745( l_U37 ))
        {
            if (LOCATE_CHAR_IN_CAR_3D( sub_1900(), l_U124._fU0, l_U124._fU4, l_U124._fU8, 6.00000000, 6.00000000, 6.00000000, 0 ))
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (IS_THIS_MODEL_A_BIKE( l_U37 ))
                    {
                        PRINT_NOW( "CWBIKE", 7500, 1 );
                    }
                    else
                    {
                        PRINT_NOW( "CWBLIST", 7500, 1 );
                    }
                }
            }
            return 1;
        }
        if (IS_PLAYER_PLAYING( sub_5731() ))
        {
            if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5731() ))
            {
                if (IS_WANTED_LEVEL_GREATER( sub_5731(), 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_8471()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( sub_1900() )))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1900() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref uVar2 );
            if ((NOT (IS_CAR_ON_FIRE( uVar2 ))) AND (IS_VEH_DRIVEABLE( uVar2 )))
            {
                GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
                if (NOT (IS_CAR_MODEL( uVar2, 1491375716 )))
                {
                    if (iVar3 == sub_1900())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_8745(int iParam0)
{
    int I;
    int[55] iVar4;

    array(ref iVar4, 55);
    iVar4[0] = 1171614426;
    iVar4[1] = 2053223216;
    iVar4[2] = 850991848;
    iVar4[3] = -1830458836;
    iVar4[4] = -1987130134;
    iVar4[5] = -713569950;
    iVar4[6] = 562680400;
    iVar4[7] = -960289747;
    iVar4[8] = 1938952078;
    iVar4[9] = 1938952078;
    iVar4[10] = 1353720154;
    iVar4[11] = 1491375716;
    iVar4[12] = 904750859;
    iVar4[13] = 1203311498;
    iVar4[14] = 569305213;
    iVar4[15] = -2137348917;
    iVar4[16] = -1627000575;
    iVar4[17] = 1759673526;
    iVar4[18] = 1677715180;
    iVar4[19] = 1747439474;
    iVar4[20] = 800869680;
    iVar4[21] = 400514754;
    iVar4[22] = 400514754;
    iVar4[23] = -907477130;
    iVar4[24] = -1099960214;
    iVar4[25] = -1660661558;
    iVar4[26] = 353883353;
    iVar4[27] = -1961627517;
    iVar4[28] = 1560980623;
    iVar4[29] = 1127131465;
    iVar4[30] = 837858166;
    iVar4[31] = 1033245328;
    iVar4[32] = 1127131465;
    iVar4[33] = 2046537925;
    iVar4[34] = 861409633;
    iVar4[35] = 583100975;
    iVar4[36] = 148777611;
    iVar4[37] = 1911513875;
    iVar4[38] = -350085182;
    iVar4[39] = -488123221;
    iVar4[40] = -1900572838;
    iVar4[41] = -845979911;
    iVar4[42] = 1677715180;
    iVar4[43] = 1917016601;
    iVar4[44] = 1064455782;
    iVar4[45] = -1346687836;
    iVar4[46] = -119658072;
    iVar4[47] = -810318068;
    iVar4[48] = -1043459709;
    iVar4[49] = 788045382;
    iVar4[50] = -1842748181;
    iVar4[51] = -1842748181;
    iVar4[52] = 1147287684;
    iVar4[53] = -283209848;
    iVar4[54] = 1638119866;
    for ( I = 0; I < 55; I++ )
    {
        if (iParam0 == iVar4[I])
        {
            return 1;
        }
    }
    return 0;
}

int sub_9624()
{
    if (DOES_OBJECT_EXIST( l_U114 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U114, -2.00000000, 0.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        GET_GROUND_Z_FOR_3D_COORD( l_U124._fU0, l_U124._fU4, l_U124._fU8 + 2.00000000, ref l_U124._fU8 );
        l_U124._fU8 += l_U23;
        if (sub_3022( l_U124 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_9789()
{
    int iVar2;
    int iVar3;
    unknown uVar4;

    iVar2 = 5;
    iVar3 = 3;
    if (sub_9804())
    {
        return 1;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1900() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref uVar4 );
        GET_CAR_MODEL( uVar4, ref l_U37 );
        if ((l_U37 == 1208856469) || ((l_U37 == 1884962369) || (l_U37 == -956048545)))
        {
            l_U169 = iVar3;
        }
        else
        {
            l_U169 = iVar2;
        }
        if (IS_SCORE_GREATER( sub_5731(), l_U169 - 1 ))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

void sub_9804()
{
    int Result;

    Result = 0;
    return Result;
}

void sub_9988()
{
    int iVar2;
    int iVar3;
    unknown uVar4;

    if (DOES_OBJECT_EXIST( l_U114 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U114, -2.00000000, 0.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        if (LOCATE_CHAR_IN_CAR_3D( sub_1900(), l_U124._fU0, l_U124._fU4, l_U124._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
        {
            if (NOT l_U40)
            {
                iVar2 = 5;
                iVar3 = 3;
                if (IS_CHAR_IN_ANY_CAR( sub_1900() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref uVar4 );
                    GET_CAR_MODEL( uVar4, ref l_U37 );
                    if ((l_U37 == 1884962369) || (l_U37 == -956048545))
                    {
                        l_U169 = iVar3;
                    }
                    else
                    {
                        l_U169 = iVar2;
                    }
                }
                if ((NOT sub_9804()) AND (NOT IS_MINIGAME_IN_PROGRESS()))
                {
                    PRINT_HELP_WITH_NUMBER( "CWHLP1", l_U169 );
                }
                l_U40 = 1;
            }
            else if (IS_MINIGAME_IN_PROGRESS())
            {
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CWHLP1" ))
                {
                    CLEAR_HELP();
                }
            }
        }
        else
        {
            l_U40 = 0;
        }
    }
    return;
}

int sub_10342()
{
    if (IS_CHAR_IN_ANY_CAR( sub_1900() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
        if (DOES_CAR_HAVE_ROOF( l_U101 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_10436()
{
    if (l_U26 == 0)
    {
        BEGIN_CAM_COMMANDS( ref l_U26 );
        SET_USE_HIGHDOF( 1 );
        sub_10505( "BEGIN_CAM_COMMANDS(iCamScope)\n" );
    }
    else
    {
        sub_10505( "iCamScope = 1\n" );
        return 1;
    }
    sub_10505( "CarwWash: Another script has called BEGIN_CAM_COMMANDS without END_CAM_COMMANDS.\n" );
    return 0;
}

void sub_10505(unknown uParam0)
{
    return;
}

void sub_10737(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1900() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
        l_U283 = g_U10935;
        g_U10935 = 4;
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 1.00000000, 0.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        if (DOES_OBJECT_EXIST( uParam0 ))
        {
            if (LOCATE_OBJECT_3D( uParam0, -420.37700000, -20.32100000, 9.14100000, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -5.60000000, -0.50000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            }
            else
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -7.60000000, -0.50000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            }
            GET_OBJECT_HEADING( uParam0, ref l_U263 );
            GET_GROUND_Z_FOR_3D_COORD( l_U124._fU0, l_U124._fU4, l_U124._fU8 + 2.00000000, ref l_U124._fU8 );
            GET_CAR_MODEL( l_U101, ref l_U37 );
            GET_MODEL_DIMENSIONS( l_U37, ref l_U170, ref l_U173 );
            l_U124._fU8 += l_U173._fU8 / 2.00000000;
            l_U124._fU8 -= 0.30000000;
            FREEZE_CAR_POSITION( l_U101, 1 );
            SET_CAR_COORDINATES( l_U101, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
            SET_CAR_HEADING( l_U101, l_U263 );
            if (SET_CAR_ON_GROUND_PROPERLY( l_U101 ))
            {
                ;
            }
            CONTROL_CAR_DOOR( l_U101, 1, 0, 0.00000000 );
            CONTROL_CAR_DOOR( l_U101, 0, 0, 0.00000000 );
            LOCK_CAR_DOORS( l_U101, 6 );
            if (GET_CLOSEST_CHAR( l_U124._fU0, l_U124._fU4, l_U124._fU8, 10.00000000, 1, 0, ref l_U266 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U266 )))
                {
                    TASK_WANDER_STANDARD( l_U266 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U266 );
                }
            }
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 0.00000000, 0.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            sub_2135( l_U124 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 0.00000000, 2.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            sub_2135( l_U124 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 0.00000000, 7.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            sub_2135( l_U124 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 0.00000000, 12.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            sub_2135( l_U124 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 0.00000000, 15.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            sub_2135( l_U124 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 0.00000000, 10.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            sub_2135( l_U124 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 0.00000000, 12.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            sub_2135( l_U124 );
            SET_EVERYONE_IGNORE_PLAYER( sub_5731(), 1 );
            DISPLAY_HUD( 0 );
            DISPLAY_RADAR( 0 );
        }
    }
    return;
}

void sub_11777()
{
    if (DOES_OBJECT_EXIST( l_U114 ))
    {
        CREATE_CAM( 14, ref l_U27 );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
        if (IS_CAR_MODEL( l_U101, -808457413 ))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 1.50000000, 2.00000000, 1.20000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            SET_CAM_POS( l_U27, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, -0.50000000, 0.00000000, 1.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            POINT_CAM_AT_COORD( l_U27, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 1.50000000, 2.00000000, 0.75000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            SET_CAM_POS( l_U27, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, -0.50000000, 0.00000000, 0.25000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            POINT_CAM_AT_COORD( l_U27, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        }
        SET_CAM_ACTIVE( l_U27, 1 );
        SET_CAM_PROPAGATE( l_U27, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1900(), 1 );
        SET_CAM_FOV( l_U27, 35.00000000 );
    }
    SET_CAM_NEAR_DOF( l_U27, 1.00000000 );
    SET_CAM_FAR_DOF( l_U27, 10.00000000 );
    sub_12251();
    if (NOT (IS_CHAR_DEAD( sub_1900() )))
    {
        OPEN_SEQUENCE_TASK( ref l_U24 );
        TASK_PLAY_ANIM( 0, "Give_Money", "AMB@CARWASH", 1.00000000, 0, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U24 );
        TASK_PERFORM_SEQUENCE( sub_1900(), l_U24 );
        CLEAR_SEQUENCE_TASK( l_U24 );
    }
    return;
}

void sub_12251()
{
    REQUEST_ANIMS( "AMB@CARWASH" );
    while (NOT (HAVE_ANIMS_LOADED( "AMB@CARWASH" )))
    {
        REQUEST_ANIMS( "AMB@CARWASH" );
        WAIT( 0 );
    }
    return;
}

void sub_12489(unknown uParam0)
{
    float fVar3;

    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_1900() ))
        {
            switch (l_U18)
            {
                case 0:
                sub_10505( "handwashStage = (preloadHandwashAssets)\n" );
                REQUEST_MODEL( l_U284 );
                if (HAS_MODEL_LOADED( l_U284 ))
                {
                    l_U18 = 1;
                }
                break;
                case 1:
                sub_10505( "handwashStage = (awaitingHandwash)\n" );
                if (sub_12708())
                {
                    if (sub_12982( l_U263, 15.00000000 ))
                    {
                        if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5731() ))
                        {
                            SET_MINIGAME_IN_PROGRESS( 1 );
                            if (IS_THIS_A_MINIGAME_SCRIPT())
                            {
                                DISPLAY_NON_MINIGAME_HELP_MESSAGES( 1 );
                            }
                            CLEAR_HELP();
                            sub_13226();
                            l_U46 = 1;
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
                        }
                        if (IS_VEH_DRIVEABLE( l_U101 ))
                        {
                            if (IS_CAR_STOPPED( l_U101 ))
                            {
                                CLEAR_HELP();
                                ADD_SCORE( sub_5731(), -l_U169 );
                                SET_WIDESCREEN_BORDERS( 1 );
                                DISPLAY_RADAR( 1 );
                                DO_SCREEN_FADE_OUT( 250 );
                                while (NOT IS_SCREEN_FADED_OUT())
                                {
                                    WAIT( 0 );
                                }
                                sub_10737( uParam0 );
                                l_U18 = 2;
                            }
                        }
                    }
                    else if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5731() )))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
                        if (IS_CAR_STOPPED( l_U101 ))
                        {
                            CLEAR_HELP();
                            ADD_SCORE( sub_5731(), -l_U169 );
                            SET_WIDESCREEN_BORDERS( 1 );
                            DISPLAY_RADAR( 1 );
                            DO_SCREEN_FADE_OUT( 250 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            sub_10737( uParam0 );
                            l_U18 = 2;
                        }
                    }
                }
                break;
                case 2:
                sub_10505( "handwashStage = (runHandwashCut)\n" );
                sub_13607();
                if (NOT (IS_CHAR_DEAD( l_U285 )))
                {
                    DO_SCREEN_FADE_IN( 250 );
                }
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                l_U18 = 3;
                if (sub_1638())
                {
                    DO_SCREEN_FADE_OUT( 250 );
                    sub_1819( uParam0 );
                }
                break;
                case 3:
                sub_10505( "handwashStage = (fadeOutHandwash)\n" );
                if (NOT (IS_CHAR_DEAD( l_U285 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U285, 29, ref l_U20 );
                    if (l_U20 == 1)
                    {
                        if (IS_CHAR_PLAYING_ANIM( l_U285, "AMB@CARWASH", "CarWash_C" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( l_U285, "AMB@CARWASH", "CarWash_C", ref fVar3 );
                            if (fVar3 > 0.50000000)
                            {
                                DO_SCREEN_FADE_OUT( 1000 );
                                SETTIMERB( 0 );
                                l_U18 = 4;
                            }
                        }
                    }
                }
                if (sub_1638())
                {
                    DO_SCREEN_FADE_OUT( 250 );
                    sub_1819( uParam0 );
                }
                break;
                case 4:
                sub_10505( "handwashStage = (handwashEnd)\n" );
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_1819( uParam0 );
                }
                else if (TIMERB() > 1100)
                {
                    sub_1819( uParam0 );
                }
                break;
            }
        }
    }
    return;
}

int sub_12708()
{
    if (DOES_OBJECT_EXIST( l_U114 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U114, -2.00000000, 0.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        GET_GROUND_Z_FOR_3D_COORD( l_U124._fU0, l_U124._fU4, l_U124._fU8 + 2.00000000, ref l_U124._fU8 );
        l_U124._fU8 += l_U23;
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_1900() ))
        {
            if (sub_3022( l_U124 ))
            {
                if (LOCATE_CHAR_IN_CAR_3D( sub_1900(), l_U124._fU0, l_U124._fU4, l_U124._fU8, l_U23, l_U23, l_U23, 1 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
                    if (NOT (IS_CAR_ON_FIRE( l_U101 )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_12982(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;

    if (NOT (IS_CHAR_DEAD( sub_1900() )))
    {
        GET_CHAR_HEADING( sub_1900(), ref fVar4 );
        fVar6 = uParam0 - uParam1;
        if (fVar6 < 0.00000000)
        {
            fVar6 += 360.00000000;
        }
        fVar5 = uParam0 + uParam1;
        if (fVar5 >= 360.00000000)
        {
            fVar5 -= 360.00000000;
        }
        if (fVar5 > fVar6)
        {
            if ((fVar4 > fVar6) AND (fVar4 < fVar5))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((fVar4 > fVar6) || (fVar4 < fVar5))
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

void sub_13226()
{
    if (IS_PLAYER_PLAYING( sub_5731() ))
    {
        SET_PLAYER_CONTROL( sub_5731(), 0 );
    }
    return;
}

void sub_13607()
{
    if (DOES_OBJECT_EXIST( l_U114 ))
    {
        CREATE_CAM( 14, ref l_U27 );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
        if (IS_CAR_MODEL( l_U101, -808457413 ))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, -1.50000000, 2.00000000, 1.20000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            SET_CAM_POS( l_U27, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 0.50000000, 0.00000000, 1.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            POINT_CAM_AT_COORD( l_U27, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, -1.50000000, 1.50000000, 0.75000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            SET_CAM_POS( l_U27, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 1.00000000, 0.00000000, 0.25000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            POINT_CAM_AT_COORD( l_U27, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        }
        SET_CAM_ACTIVE( l_U27, 1 );
        SET_CAM_PROPAGATE( l_U27, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1900(), 1 );
    }
    SET_CAM_NEAR_DOF( l_U27, 1.00000000 );
    SET_CAM_FAR_DOF( l_U27, 10.00000000 );
    DISABLE_FRONTEND_RADIO();
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref l_U101 );
    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 2.00000000, 0.00000000, 0.25000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
    GET_GROUND_Z_FOR_3D_COORD( l_U124._fU0, l_U124._fU4, l_U124._fU8, ref l_U124._fU8 );
    CREATE_CHAR( 4, l_U284, l_U124._fU0, l_U124._fU4, l_U124._fU8, ref l_U285, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U285 );
    TASK_TURN_CHAR_TO_FACE_CHAR( l_U285, sub_1900() );
    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 1.60000000, 1.60000000, 1.20000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
    sub_12251();
    if (NOT (IS_CHAR_DEAD( l_U285 )))
    {
        OPEN_SEQUENCE_TASK( ref l_U25 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U124._fU0, l_U124._fU4, l_U124._fU8, 2, -2, 0.50000000 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_1900() );
        TASK_PLAY_ANIM( 0, "CarWash_C", "AMB@CARWASH", 1.00000000, 0, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U25 );
        TASK_PERFORM_SEQUENCE( l_U285, l_U25 );
    }
    return;
}

int sub_14869(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1900() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1900() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1900(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1900()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1900() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1900() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_5731() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_5731() )))
    {
        return 0;
    }
    return 1;
}

void sub_15278(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -8.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        if (LOCATE_CHAR_IN_CAR_3D( sub_1900(), l_U124._fU0, l_U124._fU4, l_U124._fU8, 15.00000000, 15.00000000, 15.00000000, 0 ))
        {
            if (l_U40 == 0)
            {
                PRINT_HELP( "CWHLP2" );
                l_U40 = 1;
            }
        }
        else
        {
            l_U40 = 0;
        }
    }
    return;
}

void sub_15666(unknown uParam0)
{
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 2.50000000, -8.00000000, 2.50000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
    SET_CAM_POS( l_U27, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.20000000, 0.00000000, 0.75000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
    POINT_CAM_AT_COORD( l_U27, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
    SET_CAM_FOV( l_U27, 35.00000000 );
    SET_CAM_NEAR_DOF( l_U27, 3.00000000 );
    SET_CAM_FAR_DOF( l_U27, 12.00000000 );
    return;
}

void sub_15929(unknown uParam0)
{
    switch (l_U15)
    {
        case 0:
        if (DOES_OBJECT_EXIST( l_U112 ))
        {
            if (NOT l_U41)
            {
                GET_OBJECT_COORDINATES( l_U112, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
                l_U142._fU8 = l_U133._fU8 + 1.50000000;
                l_U264 = l_U133._fU8;
                l_U265 = l_U142._fU8 - l_U133._fU8;
                if (l_U280)
                {
                    l_U274 = GET_SOUND_ID();
                    PLAY_SOUND_FROM_POSITION( l_U274, l_U269, l_U133 );
                }
                l_U41 = 1;
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U112, l_U133._fU0, l_U133._fU4, l_U142._fU8, 0.05000000, 0.05000000, 0.05000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U112, ref l_U139._fU0, ref l_U139._fU4, ref l_U133._fU8 );
                l_U264 += (l_U265 * l_U19) / l_U267;
                SET_OBJECT_COORDINATES( l_U112, l_U139._fU0, l_U139._fU4, l_U264 );
            }
            else if (l_U280)
            {
                STOP_SOUND( l_U274 );
            }
            SET_OBJECT_COORDINATES( l_U112, l_U133._fU0, l_U133._fU4, l_U142._fU8 );
            l_U15 = 1;
            l_U41 = 0;;;
        }
        break;
        case 1: break;
        case 2:
        if (DOES_OBJECT_EXIST( l_U112 ))
        {
            if (NOT l_U41)
            {
                GET_OBJECT_COORDINATES( l_U112, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
                l_U142._fU8 = l_U133._fU8 - 1.50000000;
                l_U264 = l_U133._fU8;
                l_U265 = l_U142._fU8 - l_U133._fU8;
                if (l_U280)
                {
                    PLAY_SOUND_FROM_POSITION( l_U274, l_U269, l_U133 );
                }
                l_U41 = 1;
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U112, l_U133._fU0, l_U133._fU4, l_U142._fU8, 0.05000000, 0.05000000, 0.05000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U112, ref l_U139._fU0, ref l_U139._fU4, ref l_U133._fU8 );
                l_U264 += (l_U265 * l_U19) / l_U267;
                SET_OBJECT_COORDINATES( l_U112, l_U139._fU0, l_U139._fU4, l_U264 );
            }
            else
            {
                SET_OBJECT_COORDINATES( l_U112, l_U133._fU0, l_U133._fU4, l_U142._fU8 );
                if (DOES_OBJECT_EXIST( l_U107 ))
                {
                    GET_OBJECT_COORDINATES( l_U107, ref l_U160._fU0, ref l_U160._fU4, ref l_U160._fU8 );
                    l_U151 = {90.00000000, 90.00000000, 180.00000000};
                    l_U151._fU8 = l_U263 - 90.00000000;
                    l_U163 = START_PTFX( "water_carwash_top_roller", l_U160, l_U151, 1065353216 );
                    if (l_U281)
                    {
                        l_U275 = GET_SOUND_ID();
                        PLAY_SOUND_FROM_POSITION( l_U275, l_U270, l_U160 );
                    }
                }
                if (DOES_OBJECT_EXIST( uParam0 ))
                {
                    for ( l_U36 = 0; l_U36 < 12; l_U36++ )
                    {
                        l_U176[l_U36] = START_PTFX_ON_OBJ( "water_carwash_jets", uParam0, l_U189[l_U36], l_U226[l_U36], 1065353216 );
                    }
                }
                l_U14 = 1;
                l_U15 = 0;
                if (l_U280)
                {
                    STOP_SOUND( l_U274 );
                }
                l_U41 = 0;
            }
        }
        break;
    }
    return;
}

void sub_17514()
{
    l_U49[0] = {2.40000000, 8.00000000, 2.00000000};
    l_U74[0] = {-1.20000000, 0.00000000, 0.00000000};
    l_U49[1] = {0.00000000, 8.00000000, 2.50000000};
    l_U74[1] = {0.00000000, 0.00000000, 0.00000000};
    l_U49[2] = {-2.40000000, 8.00000000, 2.00000000};
    l_U74[2] = {1.20000000, 0.00000000, 0.00000000};
    l_U49[3] = {-2.40000000, 8.00000000, 0.50000000};
    l_U74[3] = {1.20000000, 0.00000000, 0.00000000};
    l_U49[4] = {0.00000000, 8.00000000, 0.25000000};
    l_U74[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U49[5] = {2.40000000, 8.00000000, 0.50000000};
    l_U74[5] = {-1.20000000, 0.00000000, 0.00000000};
    l_U49[6] = {-2.00000000, 4.00000000, 0.50000000};
    l_U74[6] = {-0.80000000, 0.00000000, 0.00000000};
    l_U49[7] = {-2.40000000, 5.00000000, 0.25000000};
    l_U74[7] = {-0.50000000, 0.00000000, 0.00000000};
    if (DOES_CAM_EXIST( l_U27 ))
    {
        SET_CAM_ACTIVE( l_U27, 0 );
        SET_CAM_PROPAGATE( l_U27, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U27 );
    }
    CREATE_CAM( 14, ref l_U28 );
    if (l_U164 > 0)
    {
        STOP_PTFX( l_U164 );
        l_U164 = 0;
    }
    if (NOT (IS_CAR_DEAD( l_U101 )))
    {
        GET_CAR_COORDINATES( l_U101, ref l_U102._fU0, ref l_U102._fU4, ref l_U102._fU8 );
        GET_GROUND_Z_FOR_3D_COORD( l_U102._fU0, l_U102._fU4, l_U102._fU8, ref l_U102._fU8 );
        l_U102._fU8 -= 0.30000000;
        SET_CAR_HEADING( l_U101, l_U263 );
        SET_CAR_COORDINATES( l_U101, l_U102._fU0, l_U102._fU4, l_U102._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, l_U49[0]._fU0, l_U49[0]._fU4, l_U49[0]._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        SET_CAM_POS( l_U28, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, l_U74[0]._fU0, l_U74[0]._fU4, l_U74[0]._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        POINT_CAM_AT_COORD( l_U28, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        SET_CAM_FOV( l_U28, 55.00000000 );
        l_U48 = 0;
        l_U47 = 1;
        l_U45 = 0;
    }
    SET_CAM_ACTIVE( l_U28, 1 );
    SET_CAM_PROPAGATE( l_U28, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_FOV( l_U28, 30.00000000 );
    SET_CAM_NEAR_DOF( l_U28, 3.00000000 );
    SET_CAM_FAR_DOF( l_U28, 12.00000000 );
    return;
}

void sub_18618(unknown uParam0)
{
    unknown uVar3;

    if (DOES_OBJECT_EXIST( l_U107 ))
    {
        GET_OBJECT_COORDINATES( l_U107, ref l_U160._fU0, ref l_U160._fU4, ref l_U160._fU8 );
        if (l_U163 > 0)
        {
            UPDATE_PTFX_OFFSETS( l_U163, l_U160, l_U151 );
        }
    }
    switch (l_U12)
    {
        case 1:
        if (DOES_OBJECT_EXIST( l_U107 ))
        {
            if (NOT l_U41)
            {
                GET_OBJECT_COORDINATES( l_U107, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
                l_U142._fU8 = l_U133._fU8 - 2.00000000;
                l_U264 = l_U133._fU8;
                l_U265 = l_U142._fU8 - l_U133._fU8;
                l_U276 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( l_U276, l_U271, l_U133 );
                SETTIMERB( 0 );
                l_U41 = 1;
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U107, l_U133._fU0, l_U133._fU4, l_U142._fU8, 0.10000000, 0.10000000, 0.10000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U107, ref l_U139._fU0, ref l_U139._fU4, ref l_U133._fU8 );
                l_U264 += (l_U265 * l_U19) / l_U267;
                SET_OBJECT_COORDINATES( l_U107, l_U139._fU0, l_U139._fU4, l_U264 );
            }
            else
            {
                l_U41 = 0;
                l_U12 = 0;
            }
        }
        break;
        case 0:
        if (DOES_OBJECT_EXIST( l_U107 ))
        {
            if (NOT l_U41)
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -2.80000000, 2.80000000, ref l_U142._fU0, ref l_U142._fU4, ref l_U142._fU8 );
                GET_OBJECT_COORDINATES( l_U110, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
                l_U139 = {l_U133};
                l_U145 = {l_U142 - l_U133};
                l_U278 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( l_U278, l_U272, l_U133 );
                l_U167 = START_PTFX( "water_carwash_mist", l_U102, 0.00000000, 0.00000000, l_U263, 1065353216 );
                SHAKE_PAD( 0, 100, 32 );
                l_U41 = 1;
            }
            else if (NOT (IS_CAR_DEAD( l_U101 )))
            {
                l_U264 = GET_HEIGHT_OF_VEHICLE( l_U101, l_U139, 1, 1 );
                if (l_U264 < 0.50000000)
                {
                    GET_GROUND_Z_FOR_3D_COORD( l_U139._fU0, l_U139._fU4, l_U139._fU8, ref l_U264 );
                    l_U264 += 1.00000000;
                    l_U264 = l_U133._fU8 + 1.00000000;
                }
                else
                {
                    l_U264 += 0.65000000;
                }
            }
            if (NOT (LOCATE_OBJECT_2D( l_U107, l_U142._fU0, l_U142._fU4, 0.10000000, 0.10000000, 0 )))
            {
                l_U139 = {l_U139 + (l_U145 / (l_U267 / l_U19))};
                SET_OBJECT_COORDINATES( l_U110, l_U139._fU0, l_U139._fU4, l_U133._fU8 );
                SET_OBJECT_COORDINATES( l_U107, l_U139._fU0, l_U139._fU4, l_U264 );
            }
            else
            {
                SHAKE_PAD( 0, 1, 32 );
                STOP_SOUND( l_U278 );
                l_U41 = 0;
                l_U12 = 3;
            }
        }
        break;
        case 3:
        if (DOES_OBJECT_EXIST( l_U107 ))
        {
            if (NOT l_U41)
            {
                SHAKE_PAD( 0, 1, 32 );
                GET_OBJECT_COORDINATES( l_U107, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
                l_U264 = l_U133._fU8;
                l_U265 = l_U142._fU8 - l_U133._fU8;
                l_U41 = 1;
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U107, l_U133._fU0, l_U133._fU4, l_U142._fU8, 0.10000000, 0.10000000, 0.10000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U107, ref l_U139._fU0, ref l_U139._fU4, ref l_U133._fU8 );
                l_U264 += (l_U265 * l_U19) / l_U267;
                SET_OBJECT_COORDINATES( l_U107, l_U139._fU0, l_U139._fU4, l_U264 );
            }
            else
            {
                l_U41 = 0;
                l_U12 = 2;
            }
        }
        break;
        case 2:
        if (DOES_OBJECT_EXIST( l_U107 ))
        {
            if (NOT l_U41)
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 2.80000000, 2.80000000, ref l_U142._fU0, ref l_U142._fU4, ref l_U142._fU8 );
                GET_OBJECT_COORDINATES( l_U110, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
                l_U139 = {l_U133};
                l_U145 = {l_U142 - l_U133};
                l_U41 = 1;
            }
            else if (NOT (LOCATE_OBJECT_2D( l_U107, l_U142._fU0, l_U142._fU4, 0.10000000, 0.10000000, 0 )))
            {
                l_U139 = {l_U139 + (l_U145 / (l_U267 / l_U19))};
                SET_OBJECT_COORDINATES( l_U110, l_U139._fU0, l_U139._fU4, l_U133._fU8 );
                SET_OBJECT_COORDINATES( l_U107, l_U139._fU0, l_U139._fU4, l_U142._fU8 );
            }
            else
            {
                l_U41 = 0;
                if (l_U163 > 0)
                {
                    STOP_PTFX( l_U163 );
                    l_U163 = 0;
                }
                if (l_U164 > 0)
                {
                    STOP_PTFX( l_U164 );
                    l_U164 = 0;
                }
                if (DOES_OBJECT_EXIST( l_U107 ))
                {
                    GET_OBJECT_COORDINATES( l_U107, ref l_U160._fU0, ref l_U160._fU4, ref l_U160._fU8 );
                    l_U151 = {0.00000000, 0.00000000, l_U263};
                    if (l_U164 == 0)
                    {
                        l_U164 = START_PTFX( "water_carwash_drips", l_U160, l_U151, 1065353216 );
                    }
                }
                if (DOES_OBJECT_EXIST( l_U108 ))
                {
                    GET_OBJECT_COORDINATES( l_U108, ref l_U160._fU0, ref l_U160._fU4, ref l_U160._fU8 );
                    l_U165 = START_PTFX( "water_carwash_rollers", l_U160, l_U154, 1065353216 );
                }
                if (DOES_OBJECT_EXIST( l_U109 ))
                {
                    GET_OBJECT_COORDINATES( l_U109, ref l_U160._fU0, ref l_U160._fU4, ref l_U160._fU8 );
                    l_U166 = START_PTFX( "water_carwash_rollers", l_U160, l_U157, 1065353216 );
                }
                uVar3 = TIMERB();
                PRINTINT( uVar3 );
                PRINTNL();
                l_U12 = 1;
                l_U13 = 3;
                l_U14 = 2;
            }
        }
        break;
    }
    if (l_U136._fU0 < 360.00000000)
    {
        l_U136._fU0 += 10.00000000;
    }
    else
    {
        l_U136._fU0 = 0.00000000;
    }
    SET_OBJECT_ROTATION( l_U107, l_U136._fU0, l_U136._fU4, l_U263 );
    return;
}

void sub_20751()
{
    if (NOT (IS_CAR_DEAD( l_U101 )))
    {
        if (l_U21 == -1.00000000)
        {
            GET_VEHICLE_DIRT_LEVEL( l_U101, ref l_U21 );
            l_U22 = l_U21 / 255.00000000;
        }
        else if (l_U21 >= (0.00000000 + l_U22))
        {
            l_U21 -= l_U22;
            SET_VEHICLE_DIRT_LEVEL( l_U101, l_U21 );
            WASH_VEHICLE_TEXTURES( l_U101, 1 );
        }
    }
    return;
}

void sub_20888()
{
    if (NOT l_U45)
    {
        if (IS_CONTROL_JUST_PRESSED( 2, 0 ))
        {
            if (NOT (IS_CAR_DEAD( l_U101 )))
            {
                if (l_U47)
                {
                    if (l_U48 < 5)
                    {
                        l_U48++;
                    }
                    else
                    {
                        l_U48 = 0;
                    }
                }
                else if (l_U48 > 0)
                {
                    l_U48--;
                }
                else
                {
                    l_U47 = 1;
                    l_U48++;
                }
                if (DOES_CAM_EXIST( l_U28 ))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, l_U49[l_U48]._fU0, l_U49[l_U48]._fU4, l_U49[l_U48]._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                    SET_CAM_POS( l_U28, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, l_U74[l_U48]._fU0, l_U74[l_U48]._fU4, l_U74[l_U48]._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                    POINT_CAM_AT_COORD( l_U28, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
                    SET_CAM_FOV( l_U28, 30.00000000 );
                    SET_CAM_NEAR_DOF( l_U28, 3.00000000 );
                    SET_CAM_FAR_DOF( l_U28, 12.00000000 );
                    l_U45 = 1;
                }
            }
        }
    }
    else if (NOT (IS_CONTROL_PRESSED( 2, 0 )))
    {
        l_U45 = 0;
    }
    return;
}

void sub_21353(unknown uParam0)
{
    unknown uVar3;

    if (l_U127._fU8 < 360.00000000)
    {
        l_U127._fU8 += 10.00000000;
    }
    else
    {
        l_U127._fU8 = 0.00000000;
    }
    SET_OBJECT_ROTATION( l_U108, l_U127._fU0, l_U127._fU4, l_U127._fU8 );
    if (l_U130._fU8 > 0.00000000)
    {
        l_U130._fU8 -= 10.00000000;
    }
    else
    {
        l_U130._fU8 = 360.00000000;
    }
    SET_OBJECT_ROTATION( l_U109, l_U130._fU0, l_U130._fU4, l_U130._fU8 );
    if (DOES_OBJECT_EXIST( l_U108 ))
    {
        GET_OBJECT_COORDINATES( l_U108, ref l_U160._fU0, ref l_U160._fU4, ref l_U160._fU8 );
        if (l_U165 > 0)
        {
            UPDATE_PTFX_OFFSETS( l_U165, l_U160, l_U154 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U109 ))
    {
        GET_OBJECT_COORDINATES( l_U109, ref l_U160._fU0, ref l_U160._fU4, ref l_U160._fU8 );
        if (l_U165 > 0)
        {
            UPDATE_PTFX_OFFSETS( l_U166, l_U160, l_U157 );
        }
    }
    switch (l_U13)
    {
        case 0: break;
        case 1:
        if (NOT l_U41)
        {
            l_U277 = GET_SOUND_ID();
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 4.50000000, 0.00000000, ref l_U142._fU0, ref l_U142._fU4, ref l_U142._fU8 );
            GET_OBJECT_COORDINATES( l_U111, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
            PLAY_SOUND_FROM_POSITION( l_U277, l_U271, l_U133 );
            PLAY_SOUND_FROM_POSITION( l_U278, l_U272, l_U133 );
            SHAKE_PAD( 0, 100, 32 );
            l_U139 = {l_U133};
            l_U145 = {l_U142 - l_U133};
            SETTIMERB( 0 );
            l_U41 = 1;
        }
        else if (NOT (LOCATE_OBJECT_3D( l_U111, l_U142._fU0, l_U142._fU4, l_U142._fU8, 0.10000000, 0.10000000, 0.10000000, 0 )))
        {
            l_U139 = {l_U139 + (l_U145 / (l_U267 / l_U19))};
            SET_OBJECT_COORDINATES( l_U111, l_U139._fU0, l_U139._fU4, l_U133._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U111, l_U118._fU0, l_U118._fU4, l_U118._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            SET_OBJECT_COORDINATES( l_U108, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U111, l_U121._fU0, l_U121._fU4, l_U121._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            SET_OBJECT_COORDINATES( l_U109, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        }
        else
        {
            uVar3 = TIMERB();
            PRINTINT( uVar3 );
            PRINTNL();
            l_U41 = 0;
            SHAKE_PAD( 0, 1, 32 );
            l_U13 = 3;
        }
        break;
        case 2: break;
        case 3:
        if (NOT l_U41)
        {
            SHAKE_PAD( 0, 1, 32 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -0.80000000, 0.00000000, ref l_U142._fU0, ref l_U142._fU4, ref l_U142._fU8 );
            GET_OBJECT_COORDINATES( l_U111, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
            l_U139 = {l_U133};
            l_U145 = {l_U142 - l_U133};
            l_U41 = 1;
        }
        else if (NOT (LOCATE_OBJECT_3D( l_U111, l_U142._fU0, l_U142._fU4, l_U142._fU8, 0.10000000, 0.10000000, 0.10000000, 0 )))
        {
            l_U139 = {l_U139 + (l_U145 / (l_U267 / l_U19))};
            SET_OBJECT_COORDINATES( l_U111, l_U139._fU0, l_U139._fU4, l_U133._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U111, l_U118._fU0, l_U118._fU4, l_U118._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            SET_OBJECT_COORDINATES( l_U108, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U111, l_U121._fU0, l_U121._fU4, l_U121._fU8, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
            SET_OBJECT_COORDINATES( l_U109, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        }
        else
        {
            l_U99++;
            if (l_U99 > 1)
            {
                l_U14 = 3;
                l_U267 = 3.00000000;
                if (l_U165 > 0)
                {
                    STOP_PTFX( l_U165 );
                    l_U165 = 0;
                }
                if (l_U166 > 0)
                {
                    STOP_PTFX( l_U166 );
                    l_U166 = 0;
                }
                if (l_U163 > 0)
                {
                    STOP_PTFX( l_U163 );
                    l_U163 = 0;
                }
                for ( l_U36 = 0; l_U36 < 12; l_U36++ )
                {
                    if (l_U176[l_U36] > 0)
                    {
                        STOP_PTFX( l_U176[l_U36] );
                        l_U176[l_U36] = 0;
                    }
                }
                STOP_SOUND( l_U275 );
                sub_3769();
            }
            l_U41 = 0;
            l_U13 = 1;
        }
        break;
    }
    return;
}

void sub_23007(unknown uParam0)
{
    switch (l_U16)
    {
        case 0:
        if (DOES_OBJECT_EXIST( l_U113 ))
        {
            if (NOT l_U41)
            {
                GET_OBJECT_COORDINATES( l_U113, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
                l_U142._fU8 = l_U133._fU8 + 1.50000000;
                l_U264 = l_U133._fU8;
                l_U265 = l_U142._fU8 - l_U133._fU8;
                l_U41 = 1;
                if (l_U280)
                {
                    PLAY_SOUND_FROM_POSITION( l_U274, l_U269, l_U133 );
                }
                if (NOT l_U44)
                {
                    sub_23210();
                    l_U44 = 1;
                }
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U113, l_U133._fU0, l_U133._fU4, l_U142._fU8, 0.05000000, 0.05000000, 0.05000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U113, ref l_U139._fU0, ref l_U139._fU4, ref l_U133._fU8 );
                l_U264 += (l_U265 * l_U19) / l_U267;
                SET_OBJECT_COORDINATES( l_U113, l_U139._fU0, l_U139._fU4, l_U264 );
            }
            else if (l_U280)
            {
                STOP_SOUND( l_U274 );
            }
            SET_OBJECT_COORDINATES( l_U113, l_U133._fU0, l_U133._fU4, l_U142._fU8 );
            l_U41 = 0;
            if (DOES_OBJECT_EXIST( l_U107 ))
            {
                FREEZE_OBJECT_POSITION( l_U107, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U108 ))
            {
                FREEZE_OBJECT_POSITION( l_U108, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U109 ))
            {
                FREEZE_OBJECT_POSITION( l_U109, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U110 ))
            {
                FREEZE_OBJECT_POSITION( l_U110, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U111 ))
            {
                FREEZE_OBJECT_POSITION( l_U111, 1 );
            }
            if (NOT (IS_CAR_DEAD( l_U101 )))
            {
                FREEZE_CAR_POSITION( l_U101, 0 );
                if (NOT (IS_CAR_A_MISSION_CAR( l_U101 )))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 12.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                    sub_2135( l_U124 );
                }
                else
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                    sub_2135( l_U124 );
                }
                if (NOT (sub_3022( l_U124 )))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 9.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                    sub_2135( l_U124 );
                }
                if (NOT (sub_3022( l_U124 )))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
                    sub_2135( l_U124 );
                }
                TASK_CAR_DRIVE_TO_COORD( sub_1900(), l_U101, l_U124._fU0, l_U124._fU4, l_U124._fU8, 5.00000000, 0, 0, 3, 1.00000000, -1 );
                SETTIMERB( 0 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1900(), 0 );
                PRINT_NOW( "CLEAN", 7500, 1 );
                if (NOT g_U10510)
                {
                    PRINT_HELP( "CWHLP3" );
                    g_U10510 = 1;
                }
            }
            if (l_U167 > 0)
            {
                STOP_PTFX( l_U167 );
                l_U167 = 0;
            }
            l_U16 = 1;;;
        }
        break;
        case 1:
        if (NOT (IS_CAR_DEAD( l_U101 )))
        {
            if (TIMERB() < 5000)
            {
                if (LOCATE_CHAR_IN_CAR_3D( sub_1900(), l_U124._fU0, l_U124._fU4, l_U124._fU8, 3.00000000, 3.00000000, 3.00000000, 0 ))
                {
                    SET_VEHICLE_DIRT_LEVEL( l_U101, 0.00000000 );
                    WASH_VEHICLE_TEXTURES( l_U101, 255 );
                    l_U16 = 2;
                }
            }
            else if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5731() ))
            {
                SET_PLAYER_CONTROL( sub_5731(), 1 );
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_1900(), l_U102._fU0, l_U102._fU4, l_U102._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
            {
                l_U16 = 2;
            };;;
        }
        break;
        case 2:
        if (DOES_OBJECT_EXIST( l_U113 ))
        {
            GET_SCRIPT_TASK_STATUS( sub_1900(), 15, ref l_U20 );
            if (l_U20 == 7)
            {
                g_U10935 = l_U283;
                if (NOT (IS_CAR_DEAD( l_U101 )))
                {
                    FREEZE_CAR_POSITION( l_U101, 0 );
                }
            }
            if (NOT l_U41)
            {
                GET_OBJECT_COORDINATES( l_U113, ref l_U133._fU0, ref l_U133._fU4, ref l_U133._fU8 );
                l_U142._fU8 = l_U133._fU8 - 1.50000000;
                l_U264 = l_U133._fU8;
                l_U265 = l_U142._fU8 - l_U133._fU8;
                l_U41 = 1;
                if (l_U280)
                {
                    PLAY_SOUND_FROM_POSITION( l_U274, l_U269, l_U133 );
                }
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U113, l_U133._fU0, l_U133._fU4, l_U142._fU8, 0.05000000, 0.05000000, 0.05000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U113, ref l_U139._fU0, ref l_U139._fU4, ref l_U133._fU8 );
                l_U264 += (l_U265 * l_U19) / l_U267;
                SET_OBJECT_COORDINATES( l_U113, l_U139._fU0, l_U139._fU4, l_U264 );
            }
            else if (NOT (IS_CAR_DEAD( l_U101 )))
            {
                sub_5542();
                sub_3769();
                if (l_U167 > 0)
                {
                    STOP_PTFX( l_U167 );
                    l_U167 = 0;
                }
                LOCK_CAR_DOORS( l_U101, 6 );
                DISPLAY_HUD( 1 );
                DISPLAY_RADAR( 1 );
                sub_5722();
                SET_WIDESCREEN_BORDERS( 0 );
                if (IS_THIS_A_MINIGAME_SCRIPT())
                {
                    DISPLAY_NON_MINIGAME_HELP_MESSAGES( 0 );
                    SET_MINIGAME_IN_PROGRESS( 0 );
                }
                SET_EVERYONE_IGNORE_PLAYER( sub_5731(), 0 );
                l_U41 = 0;
                l_U14 = 1;
                l_U16 = 0;
                l_U10 = 1;
                sub_6016();
            };;;
        }
        break;
    }
    return;
}

void sub_23210()
{
    if (NOT (IS_CAR_DEAD( l_U101 )))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, -2.70000000, 8.00000000, 0.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        SET_CAM_POS( l_U28, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        sub_2135( l_U124 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U101, 1.20000000, 0.50000000, 1.00000000, ref l_U124._fU0, ref l_U124._fU4, ref l_U124._fU8 );
        POINT_CAM_AT_COORD( l_U28, l_U124._fU0, l_U124._fU4, l_U124._fU8 );
        SET_CAM_FOV( l_U28, 35.00000000 );
        SET_CAM_NEAR_DOF( l_U28, 1.00000000 );
        SET_CAM_FAR_DOF( l_U28, 10.00000000 );
    }
    return;
}

