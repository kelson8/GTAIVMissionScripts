// TODO Look into this

void main()
{
    l_U0 = -1;
    l_U8 = 0;
    l_U9 = 0;

    l_U10 = 1;
    l_U11 = 3;
    l_U12 = 1;

    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    handwashStage = 0;

    currentCarDirtLevel = -1.00000000;
    newCarDirtLevel = -1.00000000;
    l_U21 = 2.50000000;

    // l_U24 seems to run these if set to 1:
    /*
        SET_USE_HIGHDOF( 0 );
        END_CAM_COMMANDS( ref l_U24 );
        l_U24 = 0;
    */
    l_U24 = 0;
    l_U27 = nil;
    l_U36 = 0;

    l_U37 = 0;
    l_U38 = 0;
    l_U39 = 0;

    l_U40 = 0;
    l_U41 = 0;
    l_U42 = 0;

    l_U43 = 0;
    l_U44 = 0;
    l_U45 = 1;

    l_U97 = 0;
    l_U98 = 99;

    l_U100 = {-500.14840000, 504.59460000, 5.66860000};
    l_U113 = {-0.00400000, 0.00500000, 5.92800000};
    l_U116 = {1.39000000, -2.36300000, 1.70000000};

    l_U119 = {-1.39900000, -2.36100000, 1.70000000};
    l_U149 = {90.00000000, 90.00000000, 180.00000000};
    l_U152 = {0.00000000, 0.00000000, 0.00000000};
    l_U155 = {0.00000000, 0.00000000, 180.00000000};

    l_U161 = 0;

    // I think these are right
    carWashWaterDripsEffect = 0;
    carWashWaterRollersLeft = 0;
    carWashWaterRollersRight = 0;

    l_U165 = 0;
    l_U166 = -1;
    l_U265 = 5.00000000;
    
    // Sounds
    carWashBarrierSound = "CAR_WASH_BARRIER";
    carWashSpraySound = "CAR_WASH_SPRAY";
    carWashBrushMotorSound = "CAR_WASH_BRUSH_MOTOR";
    carWashBrushesSound = "CAR_WASH_BRUSHES";
    // Unused
    carWashPaySound = "CAR_WASH_PAY";
    //

    l_U272 = -1;
    l_U273 = -1;
    l_U274 = -1;
    l_U275 = -1;
    l_U276 = -1;
    l_U277 = -1;
    l_U278 = 1;
    l_U279 = 1;
    l_U281 = 0;

    // l_U282 is possibly carWashPedModel 
    carWashPedModel = -552829610;

    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    for ( l_U34 = 0; l_U34 < 12; l_U34++ )
    {
        l_U174[l_U34] = 0;
    }
    l_U187[0] = {2.00000000, -0.85000000, 0.50000000};
    l_U224[0] = {0.00000000, 0.00000000, 90.00000000};
    l_U187[1] = {2.00000000, -0.85000000, 1.00000000};
    l_U224[1] = {0.00000000, 0.00000000, 90.00000000};
    l_U187[8] = {2.00000000, -0.85000000, 1.50000000};
    l_U224[8] = {0.00000000, 0.00000000, 90.00000000};
    l_U187[2] = {2.00000000, 1.75000000, 0.50000000};
    l_U224[2] = {0.00000000, 0.00000000, 90.00000000};
    l_U187[3] = {2.00000000, 1.75000000, 1.00000000};
    l_U224[3] = {0.00000000, 0.00000000, 90.00000000};
    l_U187[9] = {2.00000000, 1.75000000, 1.50000000};
    l_U224[9] = {0.00000000, 0.00000000, 90.00000000};
    l_U187[4] = {-2.00000000, -0.85000000, 0.50000000};
    l_U224[4] = {0.00000000, 0.00000000, 270.00000000};
    l_U187[5] = {-2.00000000, -0.85000000, 1.00000000};
    l_U224[5] = {0.00000000, 0.00000000, 270.00000000};
    l_U187[10] = {-2.00000000, -0.85000000, 1.50000000};
    l_U224[10] = {0.00000000, 0.00000000, 270.00000000};
    l_U187[6] = {-2.00000000, 1.75000000, 0.50000000};
    l_U224[6] = {0.00000000, 0.00000000, 270.00000000};
    l_U187[7] = {-2.00000000, 1.75000000, 1.00000000};
    l_U224[7] = {0.00000000, 0.00000000, 270.00000000};
    l_U187[11] = {-2.00000000, 1.75000000, 1.50000000};
    l_U224[11] = {0.00000000, 0.00000000, 270.00000000};
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_1195();
    }
    sub_1546();
    while (true)
    {
        WAIT( 0 );
        GET_FRAME_TIME( ref l_U17 );

        // Possibly creating the object l_U284
        sub_1591( l_U284 );
        if (DOES_OBJECT_EXIST( l_U284 ))
        {
            if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U284 ))
            {
                switch (l_U8)
                {
                    case 0:
                    GET_OBJECT_COORDINATES( l_U284, ref l_U100._fU0, ref l_U100._fU4, ref l_U100._fU8 );
                    GET_OBJECT_HEADING( l_U284, ref l_U261 );
                    
                    sub_6459();
                    sub_6715( l_U284 );
                    sub_3982( l_U284 );
                    
                    l_U143 = {l_U140 - l_U131};
                    l_U11 = 1;
                    l_U8 = 1;
                    l_U9 = 0;
                    break;

                    case 1:
                    if (NOT l_U36)
                    {
                        switch (l_U9)
                        {
                            case 0:
                            if (NOT sub_8329())
                            {
                                if (sub_9533())
                                {
                                    if (sub_9698())
                                    {
                                        sub_9922();
                                    }
                                }
                                if (l_U44)
                                {
                                    if (sub_10276())
                                    {
                                        if (IS_CAR_STOPPED( currentPlayerCar ))
                                        {
                                            CLEAR_HELP();
                                            if (NOT sub_9713())
                                            {
                                                ADD_SCORE( CurrentPlayerId(), -1 * ProtectedGet(l_U167) );
                                            }
                                            SET_WIDESCREEN_BORDERS( 1 );
                                            DISPLAY_NON_MINIGAME_HELP_MESSAGES( 1 );
                                            l_U277 = GET_SOUND_ID();
                                            sub_10440( l_U284 );
                                            sub_11480();
                                            sub_3982( l_U284 );
                                            l_U9 = 1;
                                        }
                                    }
                                    else
                                    {
                                        sub_12192( l_U284 );
                                    }
                                }
                                else if (sub_14557( 1, 1 ))
                                {
                                    if (sub_10276())
                                    {
                                        if (sub_12423())
                                        {
                                            if (sub_9698())
                                            {
                                                if (sub_14877())
                                                {
                                                    if (sub_12697( l_U261, 15.00000000 ))
                                                    {
                                                        if (IS_PLAYER_SCRIPT_CONTROL_ON( CurrentPlayerId() ))
                                                        {
                                                            SET_MINIGAME_IN_PROGRESS( 1 );
                                                            CLEAR_HELP();
                                                        }
                                                        sub_12929();
                                                        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
                                                        l_U44 = 1;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                sub_15174( l_U284 );
                                            }
                                        }
                                    }
                                    else
                                    {
                                        sub_12192( l_U284 );
                                    }
                                }
                            }
                            else if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U122.x, l_U122.y, l_U122.z, 6.00000000, 6.00000000, 6.00000000, 0 ))
                            {
                                if (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() ))
                                {
                                    if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                    {
                                        // CWBLIST = You cannot wash that vehicle here.
                                        PRINT_NOW( "CWBLIST", 7500, 1 );
                                    }
                                }
                            }
                            break;

                            case 1:
                            GET_SCRIPT_TASK_STATUS( CurrentPlayerChar(), 29, ref l_U18 );
                            if (l_U18 == 7)
                            {
                                CLEAR_SEQUENCE_TASK( l_U22 );
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
                                if (NOT (IS_CAR_DEAD( currentPlayerCar )))
                                {
                                    if (NOT l_U37)
                                    {
                                        sub_15562( l_U284 );
                                        STOP_SOUND( l_U277 );
                                        if (l_U277 > -1)
                                        {
                                            RELEASE_SOUND_ID( l_U277 );
                                            l_U277 = -1;
                                        }
                                        l_U37 = 1;
                                    }
                                    sub_15825( l_U284 );
                                    if (l_U13 == 1)
                                    {
                                        FREEZE_CAR_POSITION( currentPlayerCar, 0 );
                                        CLOSE_ALL_CAR_DOORS( currentPlayerCar );
                                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U284, 0.00000000, 1.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                                        TASK_CAR_DRIVE_TO_COORD( CurrentPlayerChar(), currentPlayerCar, l_U122.x, l_U122.y, l_U122.z, 5.00000000, 0, 0, 3, 1.00000000, -1 );
                                        l_U9 = 2;
                                        l_U13 = 2;
                                    }
                                }
                            }
                            break;

                            case 2:
                            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U284, 0.00000000, 1.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                            if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U122.x, l_U122.y, l_U122.z, 0.75000000, 0.75000000, 2.00000000, 0 ))
                            {
                                FREEZE_OBJECT_POSITION( l_U105, 0 );
                                FREEZE_OBJECT_POSITION( l_U106, 0 );
                                FREEZE_OBJECT_POSITION( l_U107, 0 );
                                FREEZE_OBJECT_POSITION( l_U108, 0 );
                                FREEZE_OBJECT_POSITION( l_U109, 0 );
                                STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
                                CLOSE_ALL_CAR_DOORS( currentPlayerCar );
                                GET_SCRIPT_TASK_STATUS( CurrentPlayerChar(), 15, ref l_U18 );
                                if (l_U18 == 1)
                                {
                                    SET_DRIVE_TASK_CRUISE_SPEED( CurrentPlayerChar(), 0.00000000 );
                                }
                                TASK_CAR_TEMP_ACTION( CurrentPlayerChar(), currentPlayerCar, 6, 500 );
                                DISPLAY_HUD( 0 );
                                DISPLAY_RADAR( 0 );
                                l_U36 = 1;
                                l_U97 = 0;
                                l_U10 = 1;
                                l_U11 = 1;
                                l_U12 = 0;
                                l_U8 = 2;
                                l_U9 = 0;
                                l_U13 = 2;
                                l_U14 = 0;
                                l_U37 = 0;
                                sub_17410();
                            }
                            else
                            {
                                l_U36 = 0;
                            }
                            break;
                        }
                    }
                    else if (NOT (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U100._fU0, l_U100._fU4, l_U100._fU8, 3.00000000, 3.00000000, 3.00000000, 0 )))
                    {
                        l_U36 = 0;
                        l_U97 = 1;
                    }
                    break;

                    case 2:
                    switch (l_U12)
                    {
                        case 0:
                        sub_15825( l_U284 );
                        break;
                        case 1:
                        sub_18514( l_U284 );
                        sub_20647();
                        sub_20784();
                        break;
                        case 2:
                        sub_21249( l_U284 );
                        sub_20647();
                        sub_20784();
                        break;
                        case 3:
                        sub_22903( l_U284 );
                        break;
                    }
                    break;
                }
            }
            else
            {
                sub_12325( "Car Wash Script Killed - Out of Range" );
                PRINTNL();
                sub_1195();
            }
        }
        else
        {
            sub_12325( "Car Wash Script Killed - Object Doesn't Exist" );
            PRINTNL();
            sub_1195();
        }
    }
    return;
}

void sub_1195()
{
    l_U98 = GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CARWASH" );
    if (l_U98 == 1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1810621476 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -2105160167 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1538289236 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -740011106 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -442566893 );
        REMOVE_ANIMS( "AMB@CARWASH" );
        DELETE_OBJECT( ref l_U104 );
        DELETE_OBJECT( ref l_U105 );
        DELETE_OBJECT( ref l_U106 );
        DELETE_OBJECT( ref l_U107 );
        DELETE_OBJECT( ref l_U108 );
        DELETE_OBJECT( ref l_U109 );
        DELETE_OBJECT( ref l_U110 );
        DELETE_OBJECT( ref l_U111 );
        DELETE_OBJECT( ref l_U112 );
    }
    if (l_U24 > 0)
    {
        SET_USE_HIGHDOF( 0 );
        END_CAM_COMMANDS( ref l_U24 );
        l_U24 = 0;
    }
    if (carWashWaterDripsEffect > 0)
    {
        STOP_PTFX( carWashWaterDripsEffect );
        carWashWaterDripsEffect = 0;
    }
    if (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT/CAR_WASH" ))
    {
        AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
    }
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1546()
{
    return;
}

void sub_1591(unknown uParam0)
{
    if ((l_U9 == 2) || ((l_U9 == 1) || (l_U8 == 2)))
    {
        if (sub_1622())
        {
            l_U41 = 0;
            l_U15 = 0;
            DO_SCREEN_FADE_OUT( 500 );
            sub_1803( uParam0 );
            l_U41 = 0;
            l_U15 = 0;
        }
    }
    return;
}

int sub_1622()
{
    if (NOT sub_1631())
    {
        l_U40 = 1;
    }
    else if (l_U40 == 1)
    {
        l_U40 = 0;
        return 1;
    }
    return 0;
}

int sub_1631()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

// I think this is possibly the main part of the car wash.
void sub_1803(unknown uParam0)
{
    while (NOT l_U41)
    {
        WAIT( 0 );
        switch (l_U15)
        {
            case 0:
            if (IS_SCREEN_FADED_OUT())
            {
                CLEAR_HELP();
                if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
                    SET_VEHICLE_DIRT_LEVEL( currentPlayerCar, 0.00000000 );
                    WASH_VEHICLE_TEXTURES( currentPlayerCar, 255 );

                    if (DOES_OBJECT_EXIST( uParam0 ))
                    {
                        GET_OBJECT_HEADING( uParam0, ref l_U103 );
                    }

                    if (NOT (IS_CAR_A_MISSION_CAR( currentPlayerCar )))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 12.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                        GET_GROUND_Z_FOR_3D_COORD( l_U122.x, l_U122.y, l_U122.z + 1.00000000, ref l_U122.z );
                        sub_2119( l_U122 );
                    }
                    else
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                        GET_GROUND_Z_FOR_3D_COORD( l_U122.x, l_U122.y, l_U122.z + 1.00000000, ref l_U122.z );
                        sub_2119( l_U122 );
                    }

                    if (NOT (sub_3006( l_U122 )))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 9.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                        GET_GROUND_Z_FOR_3D_COORD( l_U122.x, l_U122.y, l_U122.z + 1.00000000, ref l_U122.z );
                        sub_2119( l_U122 );
                    }

                    if (NOT (sub_3006( l_U122 )))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                        GET_GROUND_Z_FOR_3D_COORD( l_U122.x, l_U122.y, l_U122.z + 1.00000000, ref l_U122.z );
                        sub_2119( l_U122 );
                    }

                    GET_CAR_MODEL( currentPlayerCar, ref currentCarModel );
                    GET_MODEL_DIMENSIONS( currentCarModel, ref l_U168, ref l_U171 );

                    l_U122.z += l_U171._fU8 / 2.00000000;
                    l_U122.z -= 0.30000000;

                    SET_CAR_COORDINATES( currentPlayerCar, l_U122.x, l_U122.y, l_U122.z );
                    SET_CAR_HEADING( currentPlayerCar, l_U103 );

                    if (NOT (IS_CHAR_DEAD( carWashPed )))
                    {
                        DELETE_CHAR( ref carWashPed );
                    }

                    CLEAR_SEQUENCE_TASK( carWashPedTaskSequence );
                }
                l_U15 = 1;
            }
            break;
            case 1:
            if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
            {
                if (l_U161 > 0)
                {
                    STOP_PTFX( l_U161 );
                    l_U161 = 0;
                }
                if (carWashWaterRollersLeft > 0)
                {
                    STOP_PTFX( carWashWaterRollersLeft );
                    carWashWaterRollersLeft = 0;
                }
                if (carWashWaterRollersRight > 0)
                {
                    STOP_PTFX( carWashWaterRollersRight );
                    carWashWaterRollersRight = 0;
                }
                for ( l_U34 = 0; l_U34 < 12; l_U34++ )
                {
                    if (l_U174[l_U34] > 0)
                    {
                        STOP_PTFX( l_U174[l_U34] );
                        l_U174[l_U34] = 0;
                    }
                }
                if (carWashWaterDripsEffect > 0)
                {
                    STOP_PTFX( carWashWaterDripsEffect );
                    carWashWaterDripsEffect = 0;
                }
                sub_3753();
                sub_3982( uParam0 );
                if (NOT (IS_CAR_DEAD( currentPlayerCar )))
                {
                    FREEZE_CAR_POSITION( currentPlayerCar, 0 );
                    LOCK_CAR_DOORS( currentPlayerCar, 6 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 0.00000000, 0.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                    DISPLAY_HUD( 1 );
                    DISPLAY_RADAR( 1 );
                    CLEAR_CHAR_TASKS( CurrentPlayerChar() );
                    ENABLE_FRONTEND_RADIO();
                    if (SET_CAR_ON_GROUND_PROPERLY( currentPlayerCar ))
                    {
                        ;
                    }
                }
                sub_5526();
                l_U15 = 2;
            }
            break;
            case 2:
            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( CurrentPlayerChar(), 0 );
            sub_5738();
            SET_WIDESCREEN_BORDERS( 0 );
            SET_EVERYONE_IGNORE_PLAYER( CurrentPlayerId(), 0 );
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
            if (NOT g_U9164)
            {
                PRINT_HELP( "CWHLP3" );
                g_U9164 = 1;
            }
            SET_MINIGAME_IN_PROGRESS( 0 );
            g_U9890 = l_U281;
            l_U41 = 1;
            l_U15 = 0;
            break;
        }
    }
    sub_6032();
    return;
}

// sub_1884
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2119(vector vParam0)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    uVar5 = nil;
    CLEAR_AREA_OF_CARS( vParam0.x, vParam0.y, vParam0.z, 5.00000000 );
    CLEAR_AREA_OF_CHARS( vParam0.x, vParam0.y, vParam0.z, 5.00000000 );
    l_U168 = {-2.00000000, -2.00000000, -3.00000000};
    l_U171 = {2.00000000, 2.00000000, 3.00000000};
    l_U168 = {vParam0 + l_U168};
    l_U171 = {vParam0 + l_U171};
    SWITCH_PED_PATHS_OFF( l_U168._fU0, l_U168._fU4, l_U168._fU8, l_U171._fU0, l_U171._fU4, l_U171._fU8 );
    GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( vParam0.x, vParam0.y, vParam0.z, 5.00000000, 0, 1, ref uVar5 );
    if (NOT (IS_CAR_DEAD( uVar5 )))
    {
        sub_2350( ref uVar6, ref uVar7 );
        CLEAR_AREA_OF_CARS( uVar7._fU0, uVar7._fU4, uVar7._fU8, 5.00000000 );
        CLEAR_AREA_OF_CHARS( uVar7._fU0, uVar7._fU4, uVar7._fU8, 5.00000000 );
        SET_CAR_HEADING( uVar5, uVar6 );
        SET_CAR_COORDINATES( uVar5, uVar7._fU0, uVar7._fU4, uVar7._fU8 );
    }
    return;
}

void sub_2350(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    }
    if (sub_2398())
    {
        (uParam1^) = {1512.20700000, 155.67280000, 20.92480000};
        (uParam0^) = 90.00000000;
    }
    else if (sub_2522())
    {
        (uParam1^) = {-505.84230000, 512.64300000, 5.53430000};
        (uParam0^) = 90.00000000;
    }
    else if (sub_2642())
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

int sub_2398()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if ((iVar5 == 1) || (iVar5 == 0))
        {
            return 1;
        }
    }
    return 0;
}

int sub_2522()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if (iVar5 == 2)
        {
            return 1;
        }
    }
    return 0;
}

int sub_2642()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
        if (iVar5 == 3)
        {
            return 1;
        }
    }
    return 0;
}

int sub_3006(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    iVar5 = nil;
    iVar6 = nil;
    GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( uParam0._fU0, uParam0._fU4, uParam0._fU8, l_U21 * 3.00000000, 0, 1, ref iVar5 );
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
        else if (iVar6 == CurrentPlayerChar())
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

void sub_3753()
{
    if (l_U272 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U272 )))
        {
            STOP_SOUND( l_U272 );
        }
    }
    if (l_U273 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U273 )))
        {
            STOP_SOUND( l_U273 );
        }
    }
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
    return;
}

void sub_3982(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U100._fU0, ref l_U100._fU4, ref l_U100._fU8 );
        GET_OBJECT_HEADING( uParam0, ref l_U261 );
        if (DOES_OBJECT_EXIST( l_U109 ))
        {
            SET_OBJECT_COORDINATES( l_U109, l_U100._fU0, l_U100._fU4, l_U100._fU8 );
        }
        if (DOES_OBJECT_EXIST( l_U108 ))
        {
            SET_OBJECT_COORDINATES( l_U108, l_U100._fU0, l_U100._fU4, l_U100._fU8 );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U113._fU0, l_U113._fU4, l_U113._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        if (DOES_OBJECT_EXIST( l_U105 ))
        {
            SET_OBJECT_COORDINATES( l_U105, l_U122.x, l_U122.y, l_U122.z );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U116._fU0, l_U116._fU4, l_U116._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        if (DOES_OBJECT_EXIST( l_U106 ))
        {
            SET_OBJECT_COORDINATES( l_U106, l_U122.x, l_U122.y, l_U122.z );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U119._fU0, l_U119._fU4, l_U119._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        if (DOES_OBJECT_EXIST( l_U107 ))
        {
            SET_OBJECT_COORDINATES( l_U107, l_U122.x, l_U122.y, l_U122.z );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -3.20000000, 1.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        if (DOES_OBJECT_EXIST( l_U110 ))
        {
            SET_OBJECT_COORDINATES( l_U110, l_U122.x, l_U122.y, l_U122.z );
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 3.30000000, 1.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        if (DOES_OBJECT_EXIST( l_U111 ))
        {
            SET_OBJECT_COORDINATES( l_U111, l_U122.x, l_U122.y, l_U122.z );
        }
        if (DOES_OBJECT_EXIST( l_U112 ))
        {
            if (LOCATE_OBJECT_3D( uParam0, -420.37700000, -20.32100000, 9.14100000, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                l_U280 = -6.00000000;
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -2.00000000, l_U280, 5.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                GET_GROUND_Z_FOR_3D_COORD( l_U122.x, l_U122.y, l_U122.z, ref l_U122.z );
            }
            else
            {
                l_U280 = -8.00000000;
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -2.00000000, l_U280, 5.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                GET_GROUND_Z_FOR_3D_COORD( l_U122.x, l_U122.y, l_U122.z, ref l_U122.z );
            }
            SET_OBJECT_COORDINATES( l_U112, l_U122.x, l_U122.y, l_U122.z );
        }
    }
    if (DOES_OBJECT_EXIST( l_U108 ))
    {
        GET_OBJECT_COORDINATES( l_U108, ref l_U131.x, ref l_U131.y, ref l_U131.z );
    }
    if (DOES_OBJECT_EXIST( l_U105 ))
    {
        GET_OBJECT_COORDINATES( l_U105, ref l_U146._fU0, ref l_U146._fU4, ref l_U146._fU8 );
    }
    l_U137 = {l_U131};
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 2.80000000, 0.00000000, ref l_U140.x, ref l_U140.y, ref l_U140.z );
        if (DOES_OBJECT_EXIST( l_U108 ))
        {
            SET_OBJECT_COORDINATES( l_U108, l_U140.x, l_U140.y, l_U140.z );
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 2.80000000, 3.00000000, ref l_U140.x, ref l_U140.y, ref l_U140.z );
        if (DOES_OBJECT_EXIST( l_U105 ))
        {
            SET_OBJECT_COORDINATES( l_U105, l_U140.x, l_U140.y, l_U140.z );
        }
    }
    l_U143 = {l_U140 - l_U131};
    l_U263 = l_U140.z - l_U131.z;
    if (DOES_OBJECT_EXIST( l_U109 ))
    {
        GET_OBJECT_COORDINATES( l_U109, ref l_U131.x, ref l_U131.y, ref l_U131.z );
    }
    l_U137 = {l_U131};
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -0.80000000, 0.00000000, ref l_U140.x, ref l_U140.y, ref l_U140.z );
    }
    return;
}

void sub_5526()
{
    SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 0 );
    if (DOES_CAM_EXIST( l_U26 ))
    {
        SET_CAM_ACTIVE( l_U26, 0 );
        SET_CAM_PROPAGATE( l_U26, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U26 );
    }
    if (DOES_CAM_EXIST( carWashCamera ))
    {
        SET_CAM_ACTIVE( carWashCamera, 0 );
        SET_CAM_PROPAGATE( carWashCamera, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( carWashCamera );
    }
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    SET_CAM_BEHIND_PED( CurrentPlayerChar() );
    if (l_U24 > 0)
    {
        SET_USE_HIGHDOF( 0 );
        END_CAM_COMMANDS( ref l_U24 );
        l_U24 = 0;
    }
    return;
}

void sub_5738()
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
    }
    sub_5803();
    return;
}

// sub_5747
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5803()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_6032()
{
    l_U44 = 0;
    l_U36 = 0;
    l_U37 = 0;
    l_U38 = 0;
    l_U39 = 0;
    l_U40 = 0;
    l_U41 = 0;
    l_U42 = 0;
    l_U8 = 1;
    l_U9 = 0;
    
    // l_U10 is some type of car wash stage for one of the switch statements below.
    l_U10 = 1;

    l_U11 = 3;
    l_U12 = 1;
    l_U13 = 0;
    l_U14 = 0;
    l_U265 = 4.00000000;

    // l_U16 I think is handwashStage, found it in a debug line somewhere.
    handwashStage = 0;

    // Release sounds
    // TODO Figure out what to name these.
    if (l_U272 > -1)
    {
        RELEASE_SOUND_ID( l_U272 );
        l_U272 = -1;
    }

    if (l_U273 > -1)
    {
        RELEASE_SOUND_ID( l_U273 );
        l_U273 = -1;
    }

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
    return;
}

void sub_6459()
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

void sub_6715(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        CREATE_OBJECT( -740011106, l_U100._fU0, l_U100._fU4, l_U100._fU8, ref l_U109, 1 );
        SET_OBJECT_COLLISION( l_U109, 0 );
        CREATE_OBJECT( -442566893, l_U100._fU0, l_U100._fU4, l_U100._fU8, ref l_U108, 1 );
        SET_OBJECT_COLLISION( l_U108, 0 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U113._fU0, l_U113._fU4, l_U113._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        CREATE_OBJECT( -1810621476, l_U122.x, l_U122.y, l_U122.z, ref l_U105, 1 );
        SET_OBJECT_COLLISION( l_U105, 0 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U116._fU0, l_U116._fU4, l_U116._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        CREATE_OBJECT( -2105160167, l_U122.x, l_U122.y, l_U122.z, ref l_U106, 1 );
        SET_OBJECT_COLLISION( l_U106, 0 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U119._fU0, l_U119._fU4, l_U119._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        CREATE_OBJECT( -1538289236, l_U122.x, l_U122.y, l_U122.z, ref l_U107, 1 );
        SET_OBJECT_COLLISION( l_U107, 0 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -3.20000000, 1.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        CREATE_OBJECT( 1824938526, l_U122.x, l_U122.y, l_U122.z, ref l_U110, 1 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 3.30000000, 1.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        CREATE_OBJECT( 1824938526, l_U122.x, l_U122.y, l_U122.z, ref l_U111, 1 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -2.00000000, -8.00000000, 5.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        GET_GROUND_Z_FOR_3D_COORD( l_U122.x, l_U122.y, l_U122.z, ref l_U122.z );
        CREATE_OBJECT( 1709547551, l_U122.x, l_U122.y, l_U122.z + 1.00000000, ref l_U112, 1 );
        SET_OBJECT_DYNAMIC( uParam0, 0 );
        FREEZE_OBJECT_POSITION( uParam0, 1 );
        if (DOES_OBJECT_EXIST( l_U108 ))
        {
            SET_OBJECT_HEADING( l_U108, l_U261 );
            SET_OBJECT_DYNAMIC( l_U108, 0 );
            FREEZE_OBJECT_POSITION( l_U108, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U105 ))
        {
            SET_OBJECT_HEADING( l_U105, l_U261 );
            FREEZE_OBJECT_POSITION( l_U105, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U106 ))
        {
            SET_OBJECT_HEADING( l_U106, l_U261 );
            SET_OBJECT_DYNAMIC( l_U106, 0 );
            FREEZE_OBJECT_POSITION( l_U106, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U107 ))
        {
            SET_OBJECT_HEADING( l_U107, l_U261 );
            SET_OBJECT_DYNAMIC( l_U107, 0 );
            FREEZE_OBJECT_POSITION( l_U107, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U110 ))
        {
            SET_OBJECT_HEADING( l_U110, l_U261 );
            SET_OBJECT_DYNAMIC( l_U110, 0 );
            FREEZE_OBJECT_POSITION( l_U110, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U111 ))
        {
            SET_OBJECT_HEADING( l_U111, l_U261 );
            SET_OBJECT_DYNAMIC( l_U111, 0 );
            FREEZE_OBJECT_POSITION( l_U111, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U112 ))
        {
            l_U103 = l_U261 + 180.00000000;
            if (l_U103 > 360.00000000)
            {
                l_U103 -= 360.00000000;
            }
            SET_OBJECT_HEADING( l_U112, l_U103 );
            SET_OBJECT_DYNAMIC( l_U112, 0 );
            FREEZE_OBJECT_POSITION( l_U112, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U109 ))
        {
            GET_OBJECT_COORDINATES( l_U109, ref l_U131.x, ref l_U131.y, ref l_U131.z );
            SET_OBJECT_HEADING( l_U109, l_U261 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -0.80000000, 0.00000000, ref l_U140.x, ref l_U140.y, ref l_U140.z );
            SET_OBJECT_COORDINATES( l_U109, l_U140.x, l_U140.y, l_U131.z );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U109, l_U116._fU0, l_U116._fU4, l_U116._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            SET_OBJECT_COORDINATES( l_U106, l_U122.x, l_U122.y, l_U122.z );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U109, l_U119._fU0, l_U119._fU4, l_U119._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            SET_OBJECT_COORDINATES( l_U107, l_U122.x, l_U122.y, l_U122.z );
            SET_OBJECT_DYNAMIC( l_U109, 0 );
            FREEZE_OBJECT_POSITION( l_U109, 1 );
        }
    }
    return;
}

int sub_8329()
{
    if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
    {
        if (DOES_OBJECT_EXIST( l_U112 ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U112, -2.00000000, 0.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
        if (NOT sub_8434())
        {
            return 1;
        }
        GET_CAR_MODEL( currentPlayerCar, ref currentCarModel );
        if (IS_THIS_MODEL_A_BIKE( currentCarModel ))
        {
            return 1;
        }
        if (IS_THIS_MODEL_A_BOAT( currentCarModel ))
        {
            return 1;
        }
        if (IS_THIS_MODEL_A_PLANE( currentCarModel ))
        {
            return 1;
        }
        if (IS_THIS_MODEL_A_HELI( currentCarModel ))
        {
            return 1;
        }
        if (IS_THIS_MODEL_A_TRAIN( currentCarModel ))
        {
            return 1;
        }
        if (sub_8708( currentCarModel ))
        {
            if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U122.x, l_U122.y, l_U122.z, 6.00000000, 6.00000000, 6.00000000, 0 ))
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    if (IS_THIS_MODEL_A_BIKE( currentCarModel ))
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
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            if (IS_PLAYER_SCRIPT_CONTROL_ON( CurrentPlayerId() ))
            {
                if (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_8434()
{
    unknown uVar2;
    int iVar3;

    if (NOT (IS_CHAR_INJURED( CurrentPlayerChar() )))
    {
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar2 );
            if ((NOT (IS_CAR_ON_FIRE( uVar2 ))) AND (IS_VEH_DRIVEABLE( uVar2 )))
            {
                GET_DRIVER_OF_CAR( uVar2, ref iVar3 );
                if (NOT (IS_CAR_MODEL( uVar2, 1491375716 )))
                {
                    if (iVar3 == CurrentPlayerChar())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_8708(int iParam0)
{
    int I;
    int[51] iVar4;

    array(ref iVar4, 51);
    iVar4[0] = 1171614426;
    iVar4[1] = 2053223216;
    iVar4[2] = 850991848;
    iVar4[3] = -1830458836;
    iVar4[4] = -1987130134;
    iVar4[5] = -713569950;
    iVar4[6] = -960289747;
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
    iVar4[22] = -907477130;
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
    for ( I = 0; I < 51; I++ )
    {
        if (iParam0 == iVar4[I])
        {
            return 1;
        }
    }
    return 0;
}

int sub_9533()
{
    if (DOES_OBJECT_EXIST( l_U112 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U112, -2.00000000, 0.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        GET_GROUND_Z_FOR_3D_COORD( l_U122.x, l_U122.y, l_U122.z + 2.00000000, ref l_U122.z );
        l_U122.z += l_U21;
        if (sub_3006( l_U122 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_9698()
{
    int iVar2;
    int iVar3;
    unknown uVar4;

    iVar2 = 5;
    iVar3 = 3;
    if (sub_9713())
    {
        return 1;
    }
    if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar4 );
        GET_CAR_MODEL( uVar4, ref currentCarModel );
        if ((currentCarModel == 1208856469) || ((currentCarModel == 1884962369) || (currentCarModel == -956048545)))
        {
            ProtectedSet(l_U167, iVar3);
        }
        else
        {
            ProtectedSet(l_U167, iVar2);
        }
        if (IS_SCORE_GREATER( CurrentPlayerId(), ProtectedGet(l_U167) - 1 ))
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

void sub_9713()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Vlad3" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_9922()
{
    int iVar2;
    int iVar3;
    unknown uVar4;

    if (DOES_OBJECT_EXIST( l_U112 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U112, -2.00000000, 0.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U122.x, l_U122.y, l_U122.z, 5.00000000, 5.00000000, 5.00000000, 0 ))
        {
            if (NOT l_U38)
            {
                iVar2 = 5;
                iVar3 = 3;
                if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar4 );
                    GET_CAR_MODEL( uVar4, ref currentCarModel );
                    if ((currentCarModel == 1884962369) || (currentCarModel == -956048545))
                    {
                        ProtectedSet(l_U167, iVar3);
                    }
                    else
                    {
                        ProtectedSet(l_U167, iVar2);
                    }
                }
                if ((NOT sub_9713()) AND (NOT IS_MINIGAME_IN_PROGRESS()))
                {
                    PRINT_HELP_WITH_NUMBER( "CWHLP1", ProtectedGet(l_U167) );
                }
                l_U38 = 1;
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
            l_U38 = 0;
        }
    }
    return;
}

int sub_10276()
{
    if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
        if (DOES_CAR_HAVE_ROOF( currentPlayerCar ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_10440(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
        l_U281 = g_U9890;
        g_U9890 = 4;
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 1.00000000, 0.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        if (DOES_OBJECT_EXIST( uParam0 ))
        {
            if (LOCATE_OBJECT_3D( uParam0, -420.37700000, -20.32100000, 9.14100000, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -5.60000000, -0.50000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            }
            else
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -7.60000000, -0.50000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            }
            GET_OBJECT_HEADING( uParam0, ref l_U261 );
            GET_GROUND_Z_FOR_3D_COORD( l_U122.x, l_U122.y, l_U122.z + 2.00000000, ref l_U122.z );
            GET_CAR_MODEL( currentPlayerCar, ref currentCarModel );
            GET_MODEL_DIMENSIONS( currentCarModel, ref l_U168, ref l_U171 );
            l_U122.z += l_U171._fU8 / 2.00000000;
            l_U122.z -= 0.30000000;
            FREEZE_CAR_POSITION( currentPlayerCar, 1 );
            SET_CAR_COORDINATES( currentPlayerCar, l_U122.x, l_U122.y, l_U122.z );
            SET_CAR_HEADING( currentPlayerCar, l_U261 );
            if (SET_CAR_ON_GROUND_PROPERLY( currentPlayerCar ))
            {
                ;
            }
            CONTROL_CAR_DOOR( currentPlayerCar, 1, 0, 0.00000000 );
            CONTROL_CAR_DOOR( currentPlayerCar, 0, 0, 0.00000000 );
            LOCK_CAR_DOORS( currentPlayerCar, 6 );
            if (GET_CLOSEST_CHAR( l_U122.x, l_U122.y, l_U122.z, 10.00000000, 1, 0, ref l_U264 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U264 )))
                {
                    TASK_WANDER_STANDARD( l_U264 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U264 );
                }
            }
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 0.00000000, 0.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            sub_2119( l_U122 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 0.00000000, 2.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            sub_2119( l_U122 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 0.00000000, 7.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            sub_2119( l_U122 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 0.00000000, 12.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            sub_2119( l_U122 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 0.00000000, 15.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            sub_2119( l_U122 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 0.00000000, 10.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            sub_2119( l_U122 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 0.00000000, 12.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            sub_2119( l_U122 );
            SET_EVERYONE_IGNORE_PLAYER( CurrentPlayerId(), 1 );
            DISPLAY_HUD( 0 );
            DISPLAY_RADAR( 0 );
        }
    }
    return;
}

void sub_11480()
{
    if (DOES_OBJECT_EXIST( l_U112 ))
    {
        CREATE_CAM( 14, ref carWashCamera );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
        if (IS_CAR_MODEL( currentPlayerCar, -808457413 ))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 1.50000000, 2.00000000, 1.20000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            SET_CAM_POS( carWashCamera, l_U122.x, l_U122.y, l_U122.z );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, -0.50000000, 0.00000000, 1.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            POINT_CAM_AT_COORD( carWashCamera, l_U122.x, l_U122.y, l_U122.z );
        }
        else
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 1.50000000, 2.00000000, 0.75000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            SET_CAM_POS( carWashCamera, l_U122.x, l_U122.y, l_U122.z );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, -0.50000000, 0.00000000, 0.25000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            POINT_CAM_AT_COORD( carWashCamera, l_U122.x, l_U122.y, l_U122.z );
        }
        SET_CAM_ACTIVE( carWashCamera, 1 );
        SET_CAM_PROPAGATE( carWashCamera, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( CurrentPlayerChar(), 1 );
        SET_CAM_FOV( carWashCamera, 35.00000000 );
    }
    SET_CAM_NEAR_DOF( carWashCamera, 1.00000000 );
    SET_CAM_FAR_DOF( carWashCamera, 10.00000000 );
    sub_11954();
    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        OPEN_SEQUENCE_TASK( ref l_U22 );
        TASK_PLAY_ANIM( 0, "Give_Money", "AMB@CARWASH", 1.00000000, 0, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U22 );
        TASK_PERFORM_SEQUENCE( CurrentPlayerChar(), l_U22 );
        CLEAR_SEQUENCE_TASK( l_U22 );
    }
    return;
}

void sub_11954()
{
    REQUEST_ANIMS( "AMB@CARWASH" );
    while (NOT (HAVE_ANIMS_LOADED( "AMB@CARWASH" )))
    {
        REQUEST_ANIMS( "AMB@CARWASH" );
        WAIT( 0 );
    }
    return;
}

void sub_12192(unknown uParam0)
{
    float fVar3;

    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            // I think handwashStage is handwashStage judging from the debug lines.
            switch (handwashStage)
            {
                case 0:
                sub_12325( "handwashStage = (preloadHandwashAssets)\n" );
                REQUEST_MODEL( carWashPedModel );
                if (HAS_MODEL_LOADED( carWashPedModel ))
                {
                    handwashStage = 1;
                }
                break;

                case 1:
                sub_12325( "handwashStage = (awaitingHandwash)\n" );
                if (sub_12423())
                {
                    if (sub_12697( l_U261, 15.00000000 ))
                    {
                        if (IS_PLAYER_SCRIPT_CONTROL_ON( CurrentPlayerId() ))
                        {
                            SET_MINIGAME_IN_PROGRESS( 1 );
                            DISPLAY_NON_MINIGAME_HELP_MESSAGES( 1 );
                            CLEAR_HELP();
                        }
                        sub_12929();
                        l_U44 = 1;
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
                        if (IS_CAR_STOPPED( currentPlayerCar ))
                        {
                            CLEAR_HELP();
                            ADD_SCORE( CurrentPlayerId(), -1 * ProtectedGet(l_U167) );
                            SET_WIDESCREEN_BORDERS( 1 );
                            DISPLAY_RADAR( 1 );
                            DO_SCREEN_FADE_OUT( 250 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            sub_10440( uParam0 );
                            handwashStage = 2;
                        }
                    }
                    else if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( CurrentPlayerId() )))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
                        if (IS_CAR_STOPPED( currentPlayerCar ))
                        {
                            CLEAR_HELP();
                            ADD_SCORE( CurrentPlayerId(), -1 * ProtectedGet(l_U167) );
                            SET_WIDESCREEN_BORDERS( 1 );
                            DISPLAY_RADAR( 1 );
                            DO_SCREEN_FADE_OUT( 250 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            sub_10440( uParam0 );
                            handwashStage = 2;
                        }
                    }
                }
                break;

                case 2:
                sub_12325( "handwashStage = (runHandwashCut)\n" );
                sub_13295();
                if (NOT (IS_CHAR_DEAD( carWashPed )))
                {
                    DO_SCREEN_FADE_IN( 250 );
                }
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                handwashStage = 3;
                if (sub_1622())
                {
                    DO_SCREEN_FADE_OUT( 250 );
                    sub_1803( uParam0 );
                }
                break;

                case 3:
                sub_12325( "handwashStage = (fadeOutHandwash)\n" );

                if (NOT (IS_CHAR_DEAD( carWashPed )))
                {
                    GET_SCRIPT_TASK_STATUS( carWashPed, 29, ref l_U18 );
                    if (l_U18 == 1)
                    {
                        if (IS_CHAR_PLAYING_ANIM( carWashPed, "AMB@CARWASH", "CarWash_C" ))
                        {
                            GET_CHAR_ANIM_CURRENT_TIME( carWashPed, "AMB@CARWASH", "CarWash_C", ref fVar3 );
                            if (fVar3 > 0.50000000)
                            {
                                DO_SCREEN_FADE_OUT( 1000 );
                                SETTIMERB( 0 );
                                handwashStage = 4;
                            }
                        }
                    }
                }

                if (sub_1622())
                {
                    DO_SCREEN_FADE_OUT( 250 );
                    sub_1803( uParam0 );
                }
                break;

                case 4:
                sub_12325( "handwashStage = (handwashEnd)\n" );
                if (IS_SCREEN_FADED_OUT())
                {
                    sub_1803( uParam0 );
                }
                else if (TIMERB() > 1100)
                {
                    sub_1803( uParam0 );
                }
                break;
            }
        }
    }
    return;
}

void sub_12325(unknown uParam0)
{
    return;
}

int sub_12423()
{
    if (DOES_OBJECT_EXIST( l_U112 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U112, -2.00000000, 0.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        GET_GROUND_Z_FOR_3D_COORD( l_U122.x, l_U122.y, l_U122.z + 2.00000000, ref l_U122.z );
        l_U122.z += l_U21;
        if (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            if (sub_3006( l_U122 ))
            {
                if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U122.x, l_U122.y, l_U122.z, l_U21, l_U21, l_U21, 1 ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
                    if (NOT (IS_CAR_ON_FIRE( currentPlayerCar )))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_12697(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;

    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        GET_CHAR_HEADING( CurrentPlayerChar(), ref fVar4 );
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

void sub_12929()
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
    }
    return;
}

// If the object exists
// Create a camera, store the player car.
// If the car model a Patriot run the main if statement, else run the other one.
// Set the camera as active, propagate cam, activate scripted cams, and hide current player weapon for cutscene.
// Set cam near and far DOF, disable frontend radio.
// Create the car wash ped, and open the sequence task that plays the car wash animation.
void sub_13295()
{
    if (DOES_OBJECT_EXIST( l_U112 ))
    {
        CREATE_CAM( 14, ref carWashCamera );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
        if (IS_CAR_MODEL( currentPlayerCar, -808457413 ))
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, -1.50000000, 2.00000000, 1.20000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            SET_CAM_POS( carWashCamera, l_U122.x, l_U122.y, l_U122.z );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 0.50000000, 0.00000000, 1.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            POINT_CAM_AT_COORD( carWashCamera, l_U122.x, l_U122.y, l_U122.z );
        }
        else
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, -1.50000000, 1.50000000, 0.75000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            SET_CAM_POS( carWashCamera, l_U122.x, l_U122.y, l_U122.z );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 1.00000000, 0.00000000, 0.25000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            POINT_CAM_AT_COORD( carWashCamera, l_U122.x, l_U122.y, l_U122.z );
        }

        SET_CAM_ACTIVE( carWashCamera, 1 );
        SET_CAM_PROPAGATE( carWashCamera, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( CurrentPlayerChar(), 1 );
    }

    SET_CAM_NEAR_DOF( carWashCamera, 1.00000000 );
    SET_CAM_FAR_DOF( carWashCamera, 10.00000000 );
    DISABLE_FRONTEND_RADIO();

    STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 2.00000000, 0.00000000, 0.25000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
    GET_GROUND_Z_FOR_3D_COORD( l_U122.x, l_U122.y, l_U122.z, ref l_U122.z );

    CREATE_CHAR( 4, carWashPedModel, l_U122.x, l_U122.y, l_U122.z, ref carWashPed, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( carWashPed );
    
    TASK_TURN_CHAR_TO_FACE_CHAR( carWashPed, CurrentPlayerChar() );
    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 1.60000000, 1.60000000, 1.20000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
    
    sub_11954();
    if (NOT (IS_CHAR_DEAD( carWashPed )))
    {
        OPEN_SEQUENCE_TASK( ref carWashPedTaskSequence );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U122.x, l_U122.y, l_U122.z, 2, -2, 0.50000000 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, CurrentPlayerChar() );
        TASK_PLAY_ANIM( 0, "CarWash_C", "AMB@CARWASH", 1.00000000, 0, 0, 0, 0, 0 );
        CLOSE_SEQUENCE_TASK( carWashPedTaskSequence );
        TASK_PERFORM_SEQUENCE( carWashPed, carWashPedTaskSequence );
    }

    return;
}

int sub_14557(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == CurrentPlayerChar()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( CurrentPlayerId() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( CurrentPlayerId() )))
    {
        return 0;
    }
    return 1;
}

int sub_14877()
{
    if (l_U24 == 0)
    {
        BEGIN_CAM_COMMANDS( ref l_U23 );
        SET_USE_HIGHDOF( 1 );
        sub_12325( "BEGIN_CAM_COMMANDS(iCamScope)\n" );
    }
    else
    {
        sub_12325( "iCamScope = 1\n" );
        return 1;
    }
    sub_12325( "CarwWash: Another script has called BEGIN_CAM_COMMANDS without END_CAM_COMMANDS.\n" );
    return 0;
}

void sub_15174(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -8.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U122.x, l_U122.y, l_U122.z, 15.00000000, 15.00000000, 15.00000000, 0 ))
        {
            if (l_U38 == 0)
            {
                PRINT_HELP( "CWHLP2" );
                l_U38 = 1;
            }
        }
        else
        {
            l_U38 = 0;
        }
    }
    return;
}

void sub_15562(unknown uParam0)
{
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 2.50000000, -8.00000000, 2.50000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
    SET_CAM_POS( carWashCamera, l_U122.x, l_U122.y, l_U122.z );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.20000000, 0.00000000, 0.75000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
    POINT_CAM_AT_COORD( carWashCamera, l_U122.x, l_U122.y, l_U122.z );
    SET_CAM_FOV( carWashCamera, 35.00000000 );
    SET_CAM_NEAR_DOF( carWashCamera, 3.00000000 );
    SET_CAM_FAR_DOF( carWashCamera, 12.00000000 );
    return;
}

void sub_15825(unknown uParam0)
{
    switch (l_U13)
    {
        case 0:
        if (DOES_OBJECT_EXIST( l_U110 ))
        {
            if (NOT l_U39)
            {
                GET_OBJECT_COORDINATES( l_U110, ref l_U131.x, ref l_U131.y, ref l_U131.z );
                l_U140.z = l_U131.z + 1.50000000;
                currentHeightOfVehicle = l_U131.z;
                l_U263 = l_U140.z - l_U131.z;
                if (l_U278)
                {
                    l_U272 = GET_SOUND_ID();
                    PLAY_SOUND_FROM_POSITION( l_U272, carWashBarrierSound, l_U131 );
                }
                l_U39 = 1;
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U110, l_U131.x, l_U131.y, l_U140.z, 0.05000000, 0.05000000, 0.05000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U110, ref l_U137.x, ref l_U137.y, ref l_U131.z );
                currentHeightOfVehicle += (l_U263 * l_U17) / l_U265;
                SET_OBJECT_COORDINATES( l_U110, l_U137.x, l_U137.y, currentHeightOfVehicle );
            }
            else if (l_U278)
            {
                STOP_SOUND( l_U272 );
            }
            SET_OBJECT_COORDINATES( l_U110, l_U131.x, l_U131.y, l_U140.z );
            l_U13 = 1;
            l_U39 = 0;;;
        }
        break;
        case 1: break;
        case 2:
        if (DOES_OBJECT_EXIST( l_U110 ))
        {
            if (NOT l_U39)
            {
                GET_OBJECT_COORDINATES( l_U110, ref l_U131.x, ref l_U131.y, ref l_U131.z );
                l_U140.z = l_U131.z - 1.50000000;
                currentHeightOfVehicle = l_U131.z;
                l_U263 = l_U140.z - l_U131.z;
                if (l_U278)
                {
                    PLAY_SOUND_FROM_POSITION( l_U272, carWashBarrierSound, l_U131 );
                }
                l_U39 = 1;
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U110, l_U131.x, l_U131.y, l_U140.z, 0.05000000, 0.05000000, 0.05000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U110, ref l_U137.x, ref l_U137.y, ref l_U131.z );
                currentHeightOfVehicle += (l_U263 * l_U17) / l_U265;
                SET_OBJECT_COORDINATES( l_U110, l_U137.x, l_U137.y, currentHeightOfVehicle );
            }
            else
            {
                SET_OBJECT_COORDINATES( l_U110, l_U131.x, l_U131.y, l_U140.z );
                if (DOES_OBJECT_EXIST( l_U105 ))
                {
                    GET_OBJECT_COORDINATES( l_U105, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
                    l_U149 = {90.00000000, 90.00000000, 180.00000000};
                    l_U149._fU8 = l_U261 - 90.00000000;
                    l_U161 = START_PTFX( "water_carwash_top_roller", l_U158, l_U149, 1065353216 );
                    if (l_U279)
                    {
                        l_U273 = GET_SOUND_ID();
                        PLAY_SOUND_FROM_POSITION( l_U273, carWashSpraySound, l_U158 );
                    }
                }
                if (DOES_OBJECT_EXIST( uParam0 ))
                {
                    for ( l_U34 = 0; l_U34 < 12; l_U34++ )
                    {
                        l_U174[l_U34] = START_PTFX_ON_OBJ( "water_carwash_jets", uParam0, l_U187[l_U34], l_U224[l_U34], 1065353216 );
                    }
                }
                l_U12 = 1;
                l_U13 = 0;
                if (l_U278)
                {
                    STOP_SOUND( l_U272 );
                }
                l_U39 = 0;
            }
        }
        break;
    }
    return;
}

void sub_17410()
{
    l_U47[0] = {2.40000000, 8.00000000, 2.00000000};
    l_U72[0] = {-1.20000000, 0.00000000, 0.00000000};
    l_U47[1] = {0.00000000, 8.00000000, 2.50000000};
    l_U72[1] = {0.00000000, 0.00000000, 0.00000000};
    l_U47[2] = {-2.40000000, 8.00000000, 2.00000000};
    l_U72[2] = {1.20000000, 0.00000000, 0.00000000};
    l_U47[3] = {-2.40000000, 8.00000000, 0.50000000};
    l_U72[3] = {1.20000000, 0.00000000, 0.00000000};
    l_U47[4] = {0.00000000, 8.00000000, 0.25000000};
    l_U72[4] = {0.00000000, 0.00000000, 0.00000000};
    l_U47[5] = {2.40000000, 8.00000000, 0.50000000};
    l_U72[5] = {-1.20000000, 0.00000000, 0.00000000};
    l_U47[6] = {-2.00000000, 4.00000000, 0.50000000};
    l_U72[6] = {-0.80000000, 0.00000000, 0.00000000};
    l_U47[7] = {-2.40000000, 5.00000000, 0.25000000};
    l_U72[7] = {-0.50000000, 0.00000000, 0.00000000};

    if (DOES_CAM_EXIST( carWashCamera ))
    {
        SET_CAM_ACTIVE( carWashCamera, 0 );
        SET_CAM_PROPAGATE( carWashCamera, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( carWashCamera );
    }

    CREATE_CAM( 14, ref l_U26 );
    if (carWashWaterDripsEffect > 0)
    {
        STOP_PTFX( carWashWaterDripsEffect );
        carWashWaterDripsEffect = 0;
    }
    if (NOT (IS_CAR_DEAD( currentPlayerCar )))
    {
        GET_CAR_COORDINATES( currentPlayerCar, ref l_U100._fU0, ref l_U100._fU4, ref l_U100._fU8 );
        GET_GROUND_Z_FOR_3D_COORD( l_U100._fU0, l_U100._fU4, l_U100._fU8, ref l_U100._fU8 );
        l_U100._fU8 -= 0.30000000;
        SET_CAR_HEADING( currentPlayerCar, l_U261 );
        SET_CAR_COORDINATES( currentPlayerCar, l_U100._fU0, l_U100._fU4, l_U100._fU8 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, l_U47[0]._fU0, l_U47[0]._fU4, l_U47[0]._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        SET_CAM_POS( l_U26, l_U122.x, l_U122.y, l_U122.z );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, l_U72[0]._fU0, l_U72[0]._fU4, l_U72[0]._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        POINT_CAM_AT_COORD( l_U26, l_U122.x, l_U122.y, l_U122.z );
        SET_CAM_FOV( l_U26, 55.00000000 );
        l_U46 = 0;
        l_U45 = 1;
        l_U43 = 0;
    }
    SET_CAM_ACTIVE( l_U26, 1 );
    SET_CAM_PROPAGATE( l_U26, 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_FOV( l_U26, 30.00000000 );
    SET_CAM_NEAR_DOF( l_U26, 3.00000000 );
    SET_CAM_FAR_DOF( l_U26, 12.00000000 );
    return;
}

void sub_18514(unknown uParam0)
{
    unknown uVar3;

    if (DOES_OBJECT_EXIST( l_U105 ))
    {
        GET_OBJECT_COORDINATES( l_U105, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
        if (l_U161 > 0)
        {
            UPDATE_PTFX_OFFSETS( l_U161, l_U158, l_U149 );
        }
    }
    switch (l_U10)
    {
        case 1:
        if (DOES_OBJECT_EXIST( l_U105 ))
        {
            if (NOT l_U39)
            {
                GET_OBJECT_COORDINATES( l_U105, ref l_U131.x, ref l_U131.y, ref l_U131.z );
                l_U140.z = l_U131.z - 2.00000000;
                currentHeightOfVehicle = l_U131.z;
                l_U263 = l_U140.z - l_U131.z;
                l_U274 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( l_U274, carWashBrushMotorSound, l_U131 );
                SETTIMERB( 0 );
                l_U39 = 1;
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U105, l_U131.x, l_U131.y, l_U140.z, 0.10000000, 0.10000000, 0.10000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U105, ref l_U137.x, ref l_U137.y, ref l_U131.z );
                currentHeightOfVehicle += (l_U263 * l_U17) / l_U265;
                SET_OBJECT_COORDINATES( l_U105, l_U137.x, l_U137.y, currentHeightOfVehicle );
            }
            else
            {
                l_U39 = 0;
                l_U10 = 0;
            }
        }
        break;

        case 0:
        if (DOES_OBJECT_EXIST( l_U105 ))
        {
            if (NOT l_U39)
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -2.80000000, 2.80000000, ref l_U140.x, ref l_U140.y, ref l_U140.z );
                GET_OBJECT_COORDINATES( l_U108, ref l_U131.x, ref l_U131.y, ref l_U131.z );
                l_U137 = {l_U131};
                l_U143 = {l_U140 - l_U131};
                l_U276 = GET_SOUND_ID();
                PLAY_SOUND_FROM_POSITION( l_U276, carWashBrushesSound, l_U131 );
                l_U165 = START_PTFX( "water_carwash_mist", l_U100, 0.00000000, 0.00000000, l_U261, 1065353216 );
                SHAKE_PAD( 0, 100, 32 );
                l_U39 = 1;
            }
            else if (NOT (IS_CAR_DEAD( currentPlayerCar )))
            {
                currentHeightOfVehicle = GET_HEIGHT_OF_VEHICLE( currentPlayerCar, l_U137, 1, 1 );
                if (currentHeightOfVehicle < 0.50000000)
                {
                    GET_GROUND_Z_FOR_3D_COORD( l_U137.x, l_U137.y, l_U137.z, ref currentHeightOfVehicle );
                    currentHeightOfVehicle += 1.00000000;
                    currentHeightOfVehicle = l_U131.z + 1.00000000;
                }
                else
                {
                    currentHeightOfVehicle += 0.65000000;
                }
            }
            if (NOT (LOCATE_OBJECT_2D( l_U105, l_U140.x, l_U140.y, 0.10000000, 0.10000000, 0 )))
            {
                l_U137 = {l_U137 + (l_U143 / (l_U265 / l_U17))};
                SET_OBJECT_COORDINATES( l_U108, l_U137.x, l_U137.y, l_U131.z );
                SET_OBJECT_COORDINATES( l_U105, l_U137.x, l_U137.y, currentHeightOfVehicle );
            }
            else
            {
                SHAKE_PAD( 0, 1, 32 );
                STOP_SOUND( l_U276 );
                l_U39 = 0;
                l_U10 = 3;
            }
        }
        break;
        case 3:
        if (DOES_OBJECT_EXIST( l_U105 ))
        {
            if (NOT l_U39)
            {
                SHAKE_PAD( 0, 1, 32 );
                GET_OBJECT_COORDINATES( l_U105, ref l_U131.x, ref l_U131.y, ref l_U131.z );
                currentHeightOfVehicle = l_U131.z;
                l_U263 = l_U140.z - l_U131.z;
                l_U39 = 1;
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U105, l_U131.x, l_U131.y, l_U140.z, 0.10000000, 0.10000000, 0.10000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U105, ref l_U137.x, ref l_U137.y, ref l_U131.z );
                currentHeightOfVehicle += (l_U263 * l_U17) / l_U265;
                SET_OBJECT_COORDINATES( l_U105, l_U137.x, l_U137.y, currentHeightOfVehicle );
            }
            else
            {
                l_U39 = 0;
                l_U10 = 2;
            }
        }
        break;

        case 2:
        if (DOES_OBJECT_EXIST( l_U105 ))
        {
            if (NOT l_U39)
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 2.80000000, 2.80000000, ref l_U140.x, ref l_U140.y, ref l_U140.z );
                GET_OBJECT_COORDINATES( l_U108, ref l_U131.x, ref l_U131.y, ref l_U131.z );
                l_U137 = {l_U131};
                l_U143 = {l_U140 - l_U131};
                l_U39 = 1;
            }
            else if (NOT (LOCATE_OBJECT_2D( l_U105, l_U140.x, l_U140.y, 0.10000000, 0.10000000, 0 )))
            {
                l_U137 = {l_U137 + (l_U143 / (l_U265 / l_U17))};
                SET_OBJECT_COORDINATES( l_U108, l_U137.x, l_U137.y, l_U131.z );
                SET_OBJECT_COORDINATES( l_U105, l_U137.x, l_U137.y, l_U140.z );
            }
            else
            {
                l_U39 = 0;
                if (l_U161 > 0)
                {
                    STOP_PTFX( l_U161 );
                    l_U161 = 0;
                }
                if (carWashWaterDripsEffect > 0)
                {
                    STOP_PTFX( carWashWaterDripsEffect );
                    carWashWaterDripsEffect = 0;
                }
                if (DOES_OBJECT_EXIST( l_U105 ))
                {
                    GET_OBJECT_COORDINATES( l_U105, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
                    l_U149 = {0.00000000, 0.00000000, l_U261};
                    if (carWashWaterDripsEffect == 0)
                    {
                        carWashWaterDripsEffect = START_PTFX( "water_carwash_drips", l_U158, l_U149, 1065353216 );
                    }
                }
                if (DOES_OBJECT_EXIST( l_U106 ))
                {
                    GET_OBJECT_COORDINATES( l_U106, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
                    carWashWaterRollersLeft = START_PTFX( "water_carwash_rollers", l_U158, l_U152, 1065353216 );
                }
                if (DOES_OBJECT_EXIST( l_U107 ))
                {
                    GET_OBJECT_COORDINATES( l_U107, ref l_U158._fU0, ref l_U158._fU4, ref l_U158._fU8 );
                    carWashWaterRollersRight = START_PTFX( "water_carwash_rollers", l_U158, l_U155, 1065353216 );
                }
                uVar3 = TIMERB();
                PRINTINT( uVar3 );
                PRINTNL();

                l_U10 = 1;
                l_U11 = 3;
                l_U12 = 2;
            }
        }
        break;
    }
    if (l_U134._fU0 < 360.00000000)
    {
        l_U134._fU0 += 10.00000000;
    }
    else
    {
        l_U134._fU0 = 0.00000000;
    }
    SET_OBJECT_ROTATION( l_U105, l_U134._fU0, l_U134._fU4, l_U261 );
    return;
}

void sub_20647()
{
    if (NOT (IS_CAR_DEAD( currentPlayerCar )))
    {
        if (currentCarDirtLevel == -1.00000000)
        {
            GET_VEHICLE_DIRT_LEVEL( currentPlayerCar, ref currentCarDirtLevel );
            newCarDirtLevel = currentCarDirtLevel / 255.00000000;
        }
        else if (currentCarDirtLevel >= (0.00000000 + newCarDirtLevel))
        {
            currentCarDirtLevel -= newCarDirtLevel;
            SET_VEHICLE_DIRT_LEVEL( currentPlayerCar, currentCarDirtLevel );
            WASH_VEHICLE_TEXTURES( currentPlayerCar, 1 );
        }
    }
    return;
}

void sub_20784()
{
    if (NOT l_U43)
    {
        if (IS_CONTROL_JUST_PRESSED( 2, 0 ))
        {
            if (NOT (IS_CAR_DEAD( currentPlayerCar )))
            {

                if (l_U45)
                {
                    if (l_U46 < 5)
                    {
                        l_U46++;
                    }
                    else
                    {
                        l_U46 = 0;
                    }
                }

                else if (l_U46 > 0)
                {
                    l_U46--;
                }

                else
                {
                    l_U45 = 1;
                    l_U46++;
                }

                if (DOES_CAM_EXIST( l_U26 ))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, l_U47[l_U46].x, l_U47[l_U46].y, l_U47[l_U46].z, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                    SET_CAM_POS( l_U26, l_U122.x, l_U122.y, l_U122.z );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, l_U72[l_U46].x, l_U72[l_U46].y, l_U72[l_U46].z, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                    POINT_CAM_AT_COORD( l_U26, l_U122.x, l_U122.y, l_U122.z );
                    SET_CAM_FOV( l_U26, 30.00000000 );
                    SET_CAM_NEAR_DOF( l_U26, 3.00000000 );
                    SET_CAM_FAR_DOF( l_U26, 12.00000000 );
                    l_U43 = 1;
                }
            }
        }
    }
    else if (NOT (IS_CONTROL_PRESSED( 2, 0 )))
    {
        l_U43 = 0;
    }
    return;
}

void sub_21249(unknown uParam0)
{
    unknown uVar3;

    if (l_U125.z < 360.00000000)
    {
        l_U125.z += 10.00000000;
    }
    else
    {
        l_U125.z = 0.00000000;
    }
    SET_OBJECT_ROTATION( l_U106, l_U125.x, l_U125.y, l_U125.z );
    if (l_U128.z > 0.00000000)
    {
        l_U128.z -= 10.00000000;
    }
    else
    {
        l_U128.z = 360.00000000;
    }
    SET_OBJECT_ROTATION( l_U107, l_U128.x, l_U128.y, l_U128.z );
    if (DOES_OBJECT_EXIST( l_U106 ))
    {
        GET_OBJECT_COORDINATES( l_U106, ref l_U158.x, ref l_U158.y, ref l_U158.z );
        if (carWashWaterRollersLeft > 0)
        {
            UPDATE_PTFX_OFFSETS( carWashWaterRollersLeft, l_U158, l_U152 );
        }
    }
    if (DOES_OBJECT_EXIST( l_U107 ))
    {
        GET_OBJECT_COORDINATES( l_U107, ref l_U158.x, ref l_U158.y, ref l_U158.z );
        if (carWashWaterRollersLeft > 0)
        {
            UPDATE_PTFX_OFFSETS( carWashWaterRollersRight, l_U158, l_U155 );
        }
    }
    switch (l_U11)
    {
        case 0: break;
        case 1:
        if (NOT l_U39)
        {
            l_U275 = GET_SOUND_ID();
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 4.50000000, 0.00000000, ref l_U140.x, ref l_U140.y, ref l_U140.z );
            GET_OBJECT_COORDINATES( l_U109, ref l_U131.x, ref l_U131.y, ref l_U131.z );
            PLAY_SOUND_FROM_POSITION( l_U275, carWashBrushMotorSound, l_U131 );
            PLAY_SOUND_FROM_POSITION( l_U276, carWashBrushesSound, l_U131 );
            SHAKE_PAD( 0, 100, 32 );
            l_U137 = {l_U131};
            l_U143 = {l_U140 - l_U131};
            SETTIMERB( 0 );
            l_U39 = 1;
        }
        else if (NOT (LOCATE_OBJECT_3D( l_U109, l_U140.x, l_U140.y, l_U140.z, 0.10000000, 0.10000000, 0.10000000, 0 )))
        {
            l_U137 = {l_U137 + (l_U143 / (l_U265 / l_U17))};
            SET_OBJECT_COORDINATES( l_U109, l_U137.x, l_U137.y, l_U131.z );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U109, l_U116._fU0, l_U116._fU4, l_U116._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            SET_OBJECT_COORDINATES( l_U106, l_U122.x, l_U122.y, l_U122.z );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U109, l_U119._fU0, l_U119._fU4, l_U119._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            SET_OBJECT_COORDINATES( l_U107, l_U122.x, l_U122.y, l_U122.z );
        }
        else
        {
            uVar3 = TIMERB();
            PRINTINT( uVar3 );
            PRINTNL();
            l_U39 = 0;
            SHAKE_PAD( 0, 1, 32 );
            l_U11 = 3;
        }
        break;
        case 2: break;
        case 3:
        if (NOT l_U39)
        {
            SHAKE_PAD( 0, 1, 32 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -0.80000000, 0.00000000, ref l_U140.x, ref l_U140.y, ref l_U140.z );
            GET_OBJECT_COORDINATES( l_U109, ref l_U131.x, ref l_U131.y, ref l_U131.z );
            l_U137 = {l_U131};
            l_U143 = {l_U140 - l_U131};
            l_U39 = 1;
        }
        else if (NOT (LOCATE_OBJECT_3D( l_U109, l_U140.x, l_U140.y, l_U140.z, 0.10000000, 0.10000000, 0.10000000, 0 )))
        {
            l_U137 = {l_U137 + (l_U143 / (l_U265 / l_U17))};
            SET_OBJECT_COORDINATES( l_U109, l_U137.x, l_U137.y, l_U131.z );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U109, l_U116._fU0, l_U116._fU4, l_U116._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            SET_OBJECT_COORDINATES( l_U106, l_U122.x, l_U122.y, l_U122.z );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U109, l_U119._fU0, l_U119._fU4, l_U119._fU8, ref l_U122.x, ref l_U122.y, ref l_U122.z );
            SET_OBJECT_COORDINATES( l_U107, l_U122.x, l_U122.y, l_U122.z );
        }
        else
        {
            l_U97++;
            if (l_U97 > 1)
            {
                l_U12 = 3;
                l_U265 = 3.00000000;
                if (carWashWaterRollersLeft > 0)
                {
                    STOP_PTFX( carWashWaterRollersLeft );
                    carWashWaterRollersLeft = 0;
                }
                if (carWashWaterRollersRight > 0)
                {
                    STOP_PTFX( carWashWaterRollersRight );
                    carWashWaterRollersRight = 0;
                }
                if (l_U161 > 0)
                {
                    STOP_PTFX( l_U161 );
                    l_U161 = 0;
                }
                for ( l_U34 = 0; l_U34 < 12; l_U34++ )
                {
                    if (l_U174[l_U34] > 0)
                    {
                        STOP_PTFX( l_U174[l_U34] );
                        l_U174[l_U34] = 0;
                    }
                }
                STOP_SOUND( l_U273 );
                sub_3753();
            }
            l_U39 = 0;
            l_U11 = 1;
        }
        break;
    }
    return;
}

void sub_22903(unknown uParam0)
{
    switch (l_U14)
    {
        case 0:
        if (DOES_OBJECT_EXIST( l_U111 ))
        {
            if (NOT l_U39)
            {
                GET_OBJECT_COORDINATES( l_U111, ref l_U131.x, ref l_U131.y, ref l_U131.z );
                l_U140.z = l_U131.z + 1.50000000;
                currentHeightOfVehicle = l_U131.z;
                l_U263 = l_U140.z - l_U131.z;
                l_U39 = 1;
                if (l_U278)
                {
                    PLAY_SOUND_FROM_POSITION( l_U272, carWashBarrierSound, l_U131 );
                }
                if (NOT l_U42)
                {
                    sub_23106();
                    l_U42 = 1;
                }
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U111, l_U131.x, l_U131.y, l_U140.z, 0.05000000, 0.05000000, 0.05000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U111, ref l_U137.x, ref l_U137.y, ref l_U131.z );
                currentHeightOfVehicle += (l_U263 * l_U17) / l_U265;
                SET_OBJECT_COORDINATES( l_U111, l_U137.x, l_U137.y, currentHeightOfVehicle );
            }
            else if (l_U278)
            {
                STOP_SOUND( l_U272 );
            }
            SET_OBJECT_COORDINATES( l_U111, l_U131.x, l_U131.y, l_U140.z );
            l_U39 = 0;
            if (DOES_OBJECT_EXIST( l_U105 ))
            {
                FREEZE_OBJECT_POSITION( l_U105, 1 );
            }
            if (DOES_OBJECT_EXIST( l_U106 ))
            {
                FREEZE_OBJECT_POSITION( l_U106, 1 );
            }
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
            if (NOT (IS_CAR_DEAD( currentPlayerCar )))
            {
                FREEZE_CAR_POSITION( currentPlayerCar, 0 );
                if (NOT (IS_CAR_A_MISSION_CAR( currentPlayerCar )))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 12.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                    sub_2119( l_U122 );
                }
                else
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                    sub_2119( l_U122 );
                }
                if (NOT (sub_3006( l_U122 )))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 9.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                    sub_2119( l_U122 );
                }
                if (NOT (sub_3006( l_U122 )))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
                    sub_2119( l_U122 );
                }
                TASK_CAR_DRIVE_TO_COORD( CurrentPlayerChar(), currentPlayerCar, l_U122.x, l_U122.y, l_U122.z, 5.00000000, 0, 0, 3, 1.00000000, -1 );
                SETTIMERB( 0 );
                HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( CurrentPlayerChar(), 0 );
                PRINT_NOW( "CLEAN", 7500, 1 );
                if (NOT g_U9164)
                {
                    PRINT_HELP( "CWHLP3" );
                    g_U9164 = 1;
                }
            }
            if (l_U165 > 0)
            {
                STOP_PTFX( l_U165 );
                l_U165 = 0;
            }
            l_U14 = 1;;;
        }
        break;
        case 1:
        if (NOT (IS_CAR_DEAD( currentPlayerCar )))
        {
            if (TIMERB() < 5000)
            {
                if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U122.x, l_U122.y, l_U122.z, 3.00000000, 3.00000000, 3.00000000, 0 ))
                {
                    SET_VEHICLE_DIRT_LEVEL( currentPlayerCar, 0.00000000 );
                    WASH_VEHICLE_TEXTURES( currentPlayerCar, 255 );
                    l_U14 = 2;
                }
            }
            else if (IS_PLAYER_SCRIPT_CONTROL_ON( CurrentPlayerId() ))
            {
                SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
            }
            else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), l_U100._fU0, l_U100._fU4, l_U100._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )))
            {
                l_U14 = 2;
            };;;
        }
        break;
        case 2:
        if (DOES_OBJECT_EXIST( l_U111 ))
        {
            GET_SCRIPT_TASK_STATUS( CurrentPlayerChar(), 15, ref l_U18 );
            if (l_U18 == 7)
            {
                g_U9890 = l_U281;
                if (NOT (IS_CAR_DEAD( currentPlayerCar )))
                {
                    FREEZE_CAR_POSITION( currentPlayerCar, 0 );
                }
            }
            if (NOT l_U39)
            {
                GET_OBJECT_COORDINATES( l_U111, ref l_U131.x, ref l_U131.y, ref l_U131.z );
                l_U140.z = l_U131.z - 1.50000000;
                currentHeightOfVehicle = l_U131.z;
                l_U263 = l_U140.z - l_U131.z;
                l_U39 = 1;
                if (l_U278)
                {
                    PLAY_SOUND_FROM_POSITION( l_U272, carWashBarrierSound, l_U131 );
                }
            }
            else if (NOT (LOCATE_OBJECT_3D( l_U111, l_U131.x, l_U131.y, l_U140.z, 0.05000000, 0.05000000, 0.05000000, 0 )))
            {
                GET_OBJECT_COORDINATES( l_U111, ref l_U137.x, ref l_U137.y, ref l_U131.z );
                currentHeightOfVehicle += (l_U263 * l_U17) / l_U265;
                SET_OBJECT_COORDINATES( l_U111, l_U137.x, l_U137.y, currentHeightOfVehicle );
            }
            else if (NOT (IS_CAR_DEAD( currentPlayerCar )))
            {
                sub_5526();
                sub_3753();
                if (l_U165 > 0)
                {
                    STOP_PTFX( l_U165 );
                    l_U165 = 0;
                }
                LOCK_CAR_DOORS( currentPlayerCar, 6 );
                DISPLAY_HUD( 1 );
                DISPLAY_RADAR( 1 );
                sub_5738();
                SET_WIDESCREEN_BORDERS( 0 );
                if (IS_MINIGAME_IN_PROGRESS())
                {
                    DISPLAY_NON_MINIGAME_HELP_MESSAGES( 0 );
                    SET_MINIGAME_IN_PROGRESS( 0 );
                }
                SET_EVERYONE_IGNORE_PLAYER( CurrentPlayerId(), 0 );
                l_U39 = 0;
                l_U12 = 1;
                l_U14 = 0;
                l_U8 = 1;
                sub_6032();
            };;;
        }
        break;
    }
    return;
}

void sub_23106()
{
    if (NOT (IS_CAR_DEAD( currentPlayerCar )))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, -2.70000000, 8.00000000, 0.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        SET_CAM_POS( l_U26, l_U122.x, l_U122.y, l_U122.z );
        sub_2119( l_U122 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( currentPlayerCar, 1.20000000, 0.50000000, 1.00000000, ref l_U122.x, ref l_U122.y, ref l_U122.z );
        POINT_CAM_AT_COORD( l_U26, l_U122.x, l_U122.y, l_U122.z );
        SET_CAM_FOV( l_U26, 35.00000000 );
        SET_CAM_NEAR_DOF( l_U26, 1.00000000 );
        SET_CAM_FAR_DOF( l_U26, 10.00000000 );
    }
    return;
}

