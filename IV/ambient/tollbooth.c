void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U8 = {0.00000000, 0.00000000, 0.00000000};
    l_U14 = {1.00000000, -4.00000000, 0.00000000};
    l_U34 = 0;
    l_U35 = 0;
    l_U36 = 0;
    l_U37 = 0;
    l_U40 = 0;
    l_U42 = 0;
    // l_U43 = tollBoothRaiseBarrierSound

    tollBoothRaiseBarrierSound = "TOLLBOOTH_BARRIER_RAISE";
    l_U44 = "TOLLBOOTH_BARRIER_LOWER";
    // Is this unused?
    l_U45 = "TOLLBOOTH_COINS_IN";
    
    // l_U46 = currentSoundId 
    currentSoundId = -1;
    
    l_U47 = -1;
    l_U48 = -1;
    l_U49 = -1;
    l_U50 = 0;
    l_U51 = 0;
    l_U52 = 0;

    // currentCopModelReference
    // l_U54 = currentCopModelRef
    currentCopModelRef = 0;
    l_U56 = 1;
    // l_U11 = Toll booth coords or tollBoothGateCoords?
    l_U11 = {l_U57._fU4[0]};

    // l_U32 = tollBoothGateHeading
    l_U32 = l_U57._fU68[0];

    // Seems to check "if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MultiTutorial" )) >= 1)"
    while (sub_266())
    {
        WAIT( 0 );
    }

    // l_U20 might be tollBoothObject or tollBoothGate
    CREATE_OBJECT_NO_OFFSET( -1341473171, l_U11.x, l_U11.y, l_U11.z, ref l_U20, 1 );
    SET_OBJECT_HEADING( l_U20, l_U32 );
    SET_OBJECT_DYNAMIC( l_U20, 0 );
    SET_OBJECT_COLLISION( l_U20, 0 );
    FREEZE_OBJECT_POSITION( l_U20, 1 );
    SET_OBJECT_VISIBLE( l_U20, 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    GET_OBJECT_COORDINATES( l_U20, ref l_U11.x, ref l_U11.y, ref l_U11.z );

    sub_458();

    // Possibly debug function, does nothing
    sub_530();

    while (true)
    {
        WAIT( 0 );
        sub_561();
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            GivePlayerWantedLevel();
            if (NOT (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )))
            {
                if (NOT l_U55)
                {
                    sub_2875();
                }
            }
            else
            {
                l_U55 = 1;
            }
            if (DOES_OBJECT_EXIST( l_U20 ))
            {
                GET_OBJECT_COORDINATES( l_U20, ref l_U11.x, ref l_U11.y, ref l_U11.z );
                GET_OBJECT_HEADING( l_U20, ref l_U53 );
                SET_OBJECT_DYNAMIC( l_U20, 0 );

                if ((NOT (sub_3063( l_U20 ))) AND (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()))
                {
                    if (IS_VEH_DRIVEABLE( playerVehicle ))
                    {
                        if (DOES_OBJECT_EXIST( l_U22 ))
                        {
                            if (NOT sub_3225())
                            {
                                sub_3292();
                            }
                            GivePlayerWantedLevel();
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( CurrentPlayerChar() )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                        {
                            if (NOT sub_1046())
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), l_U11.x, l_U11.y, l_U11.z, 50.00000000, 50.00000000, 10.00000000, 1 ))
                                {
                                    if (g_U9890 != 9)
                                    {
                                        l_U42 = g_U9890;
                                        g_U9890 = 9;
                                    }
                                }
                                else if (g_U9890 == 9)
                                {
                                    g_U9890 = l_U42;
                                }
                            }
                        }
                    }
                    switch (l_U0)
                    {
                        case 0:
                        if (sub_3722())
                        {
                            sub_3953( l_U20 );
                            sub_4338( l_U20 );
                            l_U0 = 2;
                        }
                        break;
                        case 2:
                        sub_1698();
                        sub_4551();
                        if (NOT (IS_CHAR_INJURED( tollBoothPed )))
                        {
                            if (DOES_OBJECT_EXIST( l_U22 ))
                            {
                                if (HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED_BY_CHAR( l_U17._fU0, l_U17._fU4, l_U17._fU8, 3.00000000, -1295524692, CurrentPlayerChar() ))
                                {
                                    if (NOT (sub_846( CurrentPlayerChar() )))
                                    {
                                        CLEAR_CHAR_TASKS( CurrentPlayerChar() );
                                    }
                                }
                                else if (NOT sub_3225())
                                {
                                    if (NOT (IS_CHAR_INJURED( CurrentPlayerChar() )))
                                    {
                                        if (sub_4979())
                                        {
                                            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref playerVehicle );
                                        }
                                        else if (IS_CAR_DEAD( playerVehicle ))
                                        {
                                            GET_RANDOM_CAR_FRONT_BUMPER_IN_SPHERE_NO_SAVE( l_U17._fU0, l_U17._fU4, l_U17._fU8, 5.00000000, 0, 0, ref playerVehicle, 0 );
                                        }
                                    }
                                    if (IS_VEH_DRIVEABLE( playerVehicle ))
                                    {
                                        sub_5439( "IF IS_VEH_DRIVEABLE(boothCar)\n" );
                                        if (sub_5467( playerVehicle, l_U31, 15.00000000 ))
                                        {
                                            if ((NOT (IS_CHAR_IN_ANY_HELI( CurrentPlayerChar() ))) AND (IS_CHAR_IN_CAR( CurrentPlayerChar(), playerVehicle )))
                                            {
                                                if (NOT (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )))
                                                {
                                                    if (sub_1046())
                                                    {
                                                        sub_5716();
                                                        if (sub_5831( playerVehicle ))
                                                        {
                                                            if (sub_846( CurrentPlayerChar() ))
                                                            {
                                                                l_U0 = 3;
                                                            }
                                                            else if (SetPlayerMoney( 5 ))
                                                            {
                                                                sub_6034( playerVehicle );
                                                                sub_6093( CurrentPlayerChar(), playerVehicle );
                                                                l_U0 = 3;
                                                            }
                                                            else if (NOT l_U51)
                                                            {
                                                                PRINT_HELP( "TOLCASH" );
                                                                SAY_AMBIENT_SPEECH( tollBoothPed, "TOLL_PAID_NO", 1, 0, 0 );
                                                                l_U51 = 1;
                                                            }
                                                        }
                                                    }
                                                    else
                                                    {
                                                        l_U52 = 1;
                                                        sub_5439( "IF NOT isPlayerAbleToDriveCar()\n" );
                                                        l_U36 = 1;
                                                        l_U0 = 3;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                GET_DRIVER_OF_CAR( playerVehicle, ref l_U26 );
                                                if (sub_846( l_U26 ))
                                                {
                                                    TASK_CAR_TEMP_ACTION( l_U26, playerVehicle, 1, 2500 );
                                                    l_U36 = 1;
                                                    l_U0 = 3;
                                                }
                                                else
                                                {
                                                    sub_6034( playerVehicle );
                                                    sub_6093( l_U26, playerVehicle );
                                                    l_U36 = 1;
                                                    l_U0 = 3;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            sub_5439( "IF NOT isCarHeadingAcceptable(boothCar, fArmH, 15.0)\n" );
                                        }
                                    }
                                }
                            }
                            else
                            {
                                l_U40 = 1;
                            }
                        }
                        break;

                        case 3:
                        if (l_U36)
                        {
                            sub_1698();
                        }

                        switch (l_U1)
                        {
                            case 0:
                            sub_5439( "armStage = openArm\n" );
                            if (TIMERA() > 1200)
                            {
                                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U20, 0.00000000, -1.00000000, 0.00000000, ref l_U2.x, ref l_U2.y, ref l_U2.z );
                                SETTIMERA( 0 );
                            }
                            if (l_U36)
                            {
                                sub_5439( "IF bAmbientPedUse\n" );
                                if (IS_VEH_DRIVEABLE( playerVehicle ))
                                {
                                    GET_DRIVER_OF_CAR( playerVehicle, ref l_U26 );
                                    if (NOT (IS_CHAR_INJURED( l_U26 )))
                                    {
                                        if (sub_846( l_U26 ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U26, 48, ref tollBoothScriptTaskStatus );
                                            if (tollBoothScriptTaskStatus == 7)
                                            {
                                                sub_656();
                                                l_U1 = 1;
                                            }
                                        }
                                        else
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U26, 29, ref tollBoothScriptTaskStatus );
                                            if (tollBoothScriptTaskStatus == 7)
                                            {
                                                sub_656();
                                                l_U1 = 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else if (NOT (IS_CHAR_INJURED( CurrentPlayerChar() )))
                            {
                                GET_SCRIPT_TASK_STATUS( CurrentPlayerChar(), 80, ref tollBoothScriptTaskStatus );
                                if (tollBoothScriptTaskStatus == 7)
                                {
                                    sub_656();
                                    l_U1 = 1;
                                }
                            }
                            break;

                            case 1:
                            sub_5439( "armStage = armOpen\n" );
                            if (NOT l_U35)
                            {
                                sub_7517();
                                l_U35 = 1;
                            }
                            if (l_U36)
                            {
                                sub_5439( "armStage = armOpen & IF bAmbientPedUse\n" );
                                if (IS_VEH_DRIVEABLE( playerVehicle ))
                                {
                                    if (DOES_OBJECT_EXIST( l_U22 ))
                                    {
                                        if (NOT (LOCATE_CAR_2D( playerVehicle, l_U17._fU0, l_U17._fU4, 10.00000000, 10.00000000, 0 )))
                                        {
                                            l_U1 = 2;
                                            l_U35 = 0;
                                            playerVehicle = nil;
                                            l_U24 = nil;
                                            l_U52 = 0;
                                        }
                                        else
                                        {
                                            sub_7899();
                                        }
                                    }
                                }
                                else
                                {
                                    l_U1 = 2;
                                    l_U35 = 0;
                                    l_U36 = 0;
                                    playerVehicle = nil;
                                    l_U24 = nil;
                                    l_U52 = 0;
                                }
                            }
                            else if (NOT (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( CurrentPlayerChar(), l_U22, 10.00000000, 10.00000000, 10.00000000, 0 )))
                            {
                                l_U1 = 2;
                                l_U35 = 0;
                                l_U36 = 0;
                                playerVehicle = nil;
                                l_U24 = nil;
                                if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TOLNTRO" )))
                                {
                                    ClearHelpMessage( "TOLLHLP" );
                                }
                                else
                                {
                                    ClearHelpMessage( "TOLNTRO" );
                                }
                            }
                            break;
                            case 2:
                            sub_5439( "armStage = closeArm\n" );
                            if (g_U9890 == 9)
                            {
                                g_U9890 = l_U42;
                            }
                            sub_2589();
                            l_U1 = 0;
                            l_U0 = 2;
                            break;
                        }
                        break;
                    }
                }
                else if (l_U40)
                {
                    if (NOT (IS_CHAR_INJURED( tollBoothPed )))
                    {
                        SAY_AMBIENT_SPEECH( tollBoothPed, "TOLL_COME_BACK", 1, 0, 0 );
                    }
                }
                PRINTSTRING( "Toll Booth Script Killed" );
                PRINTNL();
                CleanupScript();
            }
            else if (l_U40)
            {
                if (NOT (IS_CHAR_INJURED( tollBoothPed )))
                {
                    SAY_AMBIENT_SPEECH( tollBoothPed, "TOLL_COME_BACK", 1, 0, 0 );
                }
            }

            PRINTSTRING( "Toll Booth Script Killed" );
            PRINTNL();
            CleanupScript();
        }
    }
    return;
}

void sub_266()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MultiTutorial" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_458()
{
    vector vVar2;

    vVar2 = {1363.24500000, 999.26650000, 12.61550000};
    l_U29 = VDIST( l_U11, vVar2 );
    if (l_U29 < 5.00000000)
    {
        l_U49 = 0;
    }
    return;
}

// Possibly debug function, does nothing
void sub_530()
{
    return;
}

void sub_561()
{
    if (g_U9153)
    {
        sub_458();
        if (l_U49 == 0)
        {
            if (NOT l_U50)
            {
                if (DOES_OBJECT_EXIST( l_U22 ))
                {
                    l_U8._fU4 = 86.00000000;
                    SET_OBJECT_ROTATION( l_U22, 0.00000000, l_U8._fU4, l_U30 );
                    sub_656();
                    l_U50 = 1;
                }
            }
        }
    }
    else if (l_U50)
    {
        sub_2589();
        l_U50 = 0;
    }
    return;
}

void sub_656()
{
    if (DOES_OBJECT_EXIST( l_U22 ))
    {
        currentSoundId = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( currentSoundId, tollBoothRaiseBarrierSound, l_U22 );
        SET_OBJECT_COLLISION( l_U22, 0 );
        while (l_U8._fU4 <= 84.00000000)
        {
            WAIT( 0 );
            l_U8._fU4 += 3.00000000;

            GivePlayerWantedLevel();
            SET_OBJECT_ROTATION( l_U22, 0.00000000, l_U8._fU4, l_U30 );
            if (l_U36)
            {
                sub_1698();
            }
        }
        SET_OBJECT_COLLISION( l_U22, 1 );
        STOP_SOUND( currentSoundId );
        RELEASE_SOUND_ID( currentSoundId );
        currentSoundId = -1;
    }
    return;
}

// sub_763
// Seems to add the wanted level if the player skips the toll booth without paying
void GivePlayerWantedLevel()

{
    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        if (DOES_OBJECT_EXIST( l_U22 ))
        {
            if (NOT (sub_846( CurrentPlayerChar() )))
            {
                if ((l_U40) || (HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED_BY_CHAR( l_U17._fU0, l_U17._fU4, l_U17._fU8, 3.00000000, -1295524692, CurrentPlayerChar() )))
                {
                    CLEAR_CHAR_TASKS( CurrentPlayerChar() );
                    ALTER_WANTED_LEVEL_NO_DROP( CurrentPlayerId(), 1 );
                    APPLY_WANTED_LEVEL_CHANGE_NOW( CurrentPlayerId() );
                    if (NOT (IS_CHAR_INJURED( tollBoothPed )))
                    {
                        SAY_AMBIENT_SPEECH( tollBoothPed, "TOLL_COME_BACK", 1, 0, 0 );
                    }

                    PRINTSTRING( "Toll Booth Script Killed" );
                    PRINTNL();
                    CleanupScript();
                }
            }
        }
    }
    return;
}

// sub_772
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

// If the player is not injured, and in a car
// TODO Fill out all the car models for this, there is a lot, I think it is all emergency vehicles
// If the car models are: Police Patrol, Police Stockade, Police Patriot, 
// iParam0 is charToCheck
// If sub_1046 return 1, else return 1
int sub_846(int charToCheck)
{
    Vehicle currentPlayerCar;

    if (NOT (IS_CHAR_INJURED( charToCheck )))
    {
        if (IS_CHAR_IN_ANY_CAR( charToCheck ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( charToCheck, ref currentPlayerCar );
            // -1627000575 = Police Patrol 
            if ((IS_CAR_MODEL( currentPlayerCar, -1627000575 ))
            // -1900572838 = Police Stockade
            || ((IS_CAR_MODEL( currentPlayerCar, -1900572838 )) 
            // -350085182 = Police Patriot
            || ((IS_CAR_MODEL( currentPlayerCar, -350085182 )) 
            // 2046537925 = Police Cruiser
            || ((IS_CAR_MODEL( currentPlayerCar, 2046537925 )) 
            // 1911513875 = Noose Stockade
            || ((IS_CAR_MODEL( currentPlayerCar, 1911513875 )) 
            // 148777611 = Noose Patrol Car
            || ((IS_CAR_MODEL( currentPlayerCar, 148777611 )) 
            // 1938952078 = Firetruck
            || ((IS_CAR_MODEL( currentPlayerCar, 1938952078 )) 
            // 1127131465 = FIB Car
            || ((IS_CAR_MODEL( currentPlayerCar, 1127131465 )) 
            // 1171614426 = Ambulance
            || (IS_CAR_MODEL( currentPlayerCar, 1171614426 ))))))))))
            {
                if (charToCheck == CurrentPlayerChar())
                {
                    if (sub_1046())
                    {
                        return 1;
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

// Check if player is not injured and is in any car.
// Store the players car.
// If the car is not on fire and is driveable, get the driver of the car.
// If the model is not a forklift, check if the current driver is the player.
// If the current driver is the player, return 1, otherwise return 0.
int sub_1046()
{
    Vehicle currentPlayerCar;
    int currentCarDriver;

    if (NOT (IS_CHAR_INJURED( CurrentPlayerChar() )))
    {
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentPlayerCar );
            if ((NOT (IS_CAR_ON_FIRE( currentPlayerCar ))) AND (IS_VEH_DRIVEABLE( currentPlayerCar )))
            {
                GET_DRIVER_OF_CAR( currentPlayerCar, ref currentCarDriver );
                // 1491375716 = Forklift 
                if (NOT (IS_CAR_MODEL( currentPlayerCar, 1491375716 )))
                {
                    if (currentCarDriver == CurrentPlayerChar())
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

// sub_1277
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

// sub_1415
void CleanupScript()
{
    // TOLLHLP = Drive up to the pay kiosk. The toll is $5.
    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TOLNTRO" )))
    {
        ClearHelpMessage( "TOLLHLP" );
    }
    else
    {
        // TOLNTRO = Slow down to pay the toll if you don't want to attract attention.
        ClearHelpMessage( "TOLNTRO" );
    }

    REMOVE_ANIMS( "AMB@TOLLBOOTH" );

    if (l_U42 != 0)
    {
        g_U9890 = 0;
    }

    if (l_U47 != -1)
    {
        STOP_SOUND( l_U47 );
        RELEASE_SOUND_ID( l_U47 );
    }

    if (currentSoundId != -1)
    {
        STOP_SOUND( currentSoundId );
        RELEASE_SOUND_ID( currentSoundId );
    }

    TERMINATE_THIS_SCRIPT();
    return;
}

// sub_1457
// Clear the help message
void ClearHelpMessage(char gxtMessage)
{
    if (DOES_TEXT_LABEL_EXIST( gxtMessage ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( gxtMessage ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_1698()
{
    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        if (DOES_OBJECT_EXIST( l_U21 ))
        {
            if (sub_1046())
            {
                if (LOCATE_CHAR_IN_CAR_OBJECT_3D( CurrentPlayerChar(), l_U21, 1.50000000, 1.50000000, 1.50000000, 0 ))
                {
                    if (l_U40 == 0)
                    {
                        l_U40 = 1;
                        if (NOT (IS_CHAR_INJURED( tollBoothPed )))
                        {
                            SAY_AMBIENT_SPEECH( tollBoothPed, "TOLL_COME_BACK", 1, 0, 0 );
                        }
                    }
                }
                if (NOT (HAS_OBJECT_BEEN_DAMAGED( l_U22 )))
                {
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, -6.00000000, 0.00000000, 0.00000000, ref l_U2.x, ref l_U2.y, ref l_U2.z );
                    if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U2.x, l_U2.y, l_U2.z, 1.50000000, 1.50000000, 2.00000000, 0 ))
                    {
                        if (l_U40 == 0)
                        {
                            l_U40 = 1;
                            if (NOT (IS_CHAR_INJURED( tollBoothPed )))
                            {
                                SAY_AMBIENT_SPEECH( tollBoothPed, "TOLL_COME_BACK", 1, 0, 0 );
                            }
                            SETTIMERB( 0 );
                        }
                    }
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, -4.00000000, 0.00000000, 0.00000000, ref l_U2.x, ref l_U2.y, ref l_U2.z );
                    if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U2.x, l_U2.y, l_U2.z, 1.50000000, 1.50000000, 2.00000000, 0 ))
                    {
                        if (l_U40 == 0)
                        {
                            l_U40 = 1;
                            if (NOT (IS_CHAR_INJURED( tollBoothPed )))
                            {
                                SAY_AMBIENT_SPEECH( tollBoothPed, "TOLL_COME_BACK", 1, 0, 0 );
                            }
                            SETTIMERB( 0 );
                        }
                    }
                    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, -2.00000000, 0.00000000, 0.00000000, ref l_U2.x, ref l_U2.y, ref l_U2.z );
                    if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U2.x, l_U2.y, l_U2.z, 1.50000000, 1.50000000, 2.00000000, 0 ))
                    {
                        if (l_U40 == 0)
                        {
                            l_U40 = 1;
                            if (NOT (IS_CHAR_INJURED( tollBoothPed )))
                            {
                                SAY_AMBIENT_SPEECH( tollBoothPed, "TOLL_COME_BACK", 1, 0, 0 );
                            }
                            SETTIMERB( 0 );
                        }
                    }
                }
            }
            if (IS_CAR_DEAD( l_U24 ))
            {
                GET_RANDOM_CAR_FRONT_BUMPER_IN_SPHERE_NO_SAVE( l_U2.x, l_U2.y, l_U2.z, 5.00000000, 0, 0, ref l_U24, playerVehicle );
            }
            else
            {
                GET_DRIVER_OF_CAR( l_U24, ref l_U27 );
                if (l_U27 == CurrentPlayerChar())
                {
                    ;
                }
                else if (NOT (IS_CHAR_INJURED( l_U27 )))
                {
                    GET_SCRIPT_TASK_STATUS( l_U27, 48, ref tollBoothScriptTaskStatus );
                    if (tollBoothScriptTaskStatus == 7)
                    {
                        if (NOT (IS_CHAR_IN_CAR( CurrentPlayerChar(), l_U24 )))
                        {
                            ;
                        }
                        else if (l_U52)
                        {
                            ;
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_2589()
{
    if (DOES_OBJECT_EXIST( l_U22 ))
    {
        l_U47 = GET_SOUND_ID();
        PLAY_SOUND_FROM_OBJECT( l_U47, l_U44, l_U22 );
        SET_OBJECT_COLLISION( l_U22, 0 );
        while (l_U8._fU4 >= 0.00000000)
        {
            WAIT( 0 );
            GivePlayerWantedLevel();
            SET_OBJECT_ROTATION( l_U22, 0.00000000, l_U8._fU4, l_U30 );
            l_U8._fU4 -= 3.00000000;
            if (l_U36)
            {
                sub_1698();
            }
        }
        if (l_U36)
        {
            l_U36 = 0;
        }
        SET_OBJECT_COLLISION( l_U22, 1 );
        STOP_SOUND( l_U47 );
        RELEASE_SOUND_ID( l_U47 );
        l_U47 = -1;
    }
    return;
}

void sub_2875()
{
    if (NOT (IS_CHAR_INJURED( tollBoothPed )))
    {
        GET_SCRIPT_TASK_STATUS( tollBoothPed, 80, ref tollBoothScriptTaskStatus );
        if (tollBoothScriptTaskStatus == 7)
        {
            TASK_PLAY_ANIM( tollBoothPed, "Idle", "AMB@TOLLBOOTH", 4.00000000, 1, 0, 0, 0, 0 );
        }
    }
    return;
}

int sub_3063(unknown uParam0)
{
    Vector3 tollBoothCoords;

    tollBoothCoords = {540.60000000, 755.00000000, 20.10000000};
    // Distance between tollBoothGate? and tollBoothCoords
    l_U29 = VDIST( l_U11, tollBoothCoords );
    if (l_U29 < 2.00000000)
    {
        if (NOT IsJimmy4Running())
        {
            return 1;
        }
    }
    return 0;
}

// sub_3121
void IsJimmy4Running()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Jimmy4" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

int sub_3225()
{
    float fVar2;

    if (DOES_OBJECT_EXIST( l_U22 ))
    {
        GET_OBJECT_HEALTH( l_U22, ref fVar2 );
        if (fVar2 < l_U33)
        {
            return 1;
        }
    }
    return 0;
}

void sub_3292()
{
    if (NOT (IS_CAR_DEAD( playerVehicle )))
    {
        if (DOES_OBJECT_EXIST( l_U20 ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, 3.00000000, 3.00000000, 0.00000000, ref l_U2.x, ref l_U2.y, ref l_U2.z );
            GET_RANDOM_CAR_FRONT_BUMPER_IN_SPHERE_NO_SAVE( l_U2.x, l_U2.y, l_U2.z, 4.00000000, 0, 0, ref l_U24, playerVehicle );
            if (NOT (IS_CAR_DEAD( l_U24 )))
            {
                GET_DRIVER_OF_CAR( l_U24, ref l_U27 );
                if (l_U27 != CurrentPlayerChar())
                {
                    if (NOT (IS_CHAR_INJURED( l_U27 )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U27, 48, ref tollBoothScriptTaskStatus );
                        if (tollBoothScriptTaskStatus == 7)
                        {
                            if (NOT (IS_CHAR_IN_CAR( CurrentPlayerChar(), l_U24 )))
                            {
                                ;
                            }
                            else if (l_U52)
                            {
                                ;
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_3722()
{
    REQUEST_ANIMS( "AMB@TOLLBOOTH" );
    REQUEST_MODEL( -1295524692 );
    REQUEST_MODEL( -1174154857 );
    REQUEST_MODEL( CurrentCopModel() );

    if ((HAS_MODEL_LOADED( CurrentCopModel() )) 
    AND ((REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT\TOLLBOOTH" )) 
    AND ((HAVE_ANIMS_LOADED( "AMB@TOLLBOOTH" )) 
    AND ((HAS_MODEL_LOADED( -1174154857 )) 
    AND (HAS_MODEL_LOADED( -1295524692 ))))))
    {
        return 1;
    }
    return 0;
}

// sub_3778
void CurrentCopModel()
{
    if (currentCopModelRef == 0)
    {
        GET_CURRENT_BASIC_COP_MODEL( ref currentCopModelRef );
    }
    return currentCopModelRef;
}

void sub_3953(unknown uParam0)
{
    float fVar3;
    float fVar4;

    fVar3 = -0.30000000;
    fVar4 = 0.70000000;

    // TODO Figure out what these objects are.
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 2.89900000, -1.00000000, fVar3, ref l_U2.x, ref l_U2.y, ref l_U2.z );
    CREATE_OBJECT( -1174154857, l_U2.x, l_U2.y, l_U2.z, ref l_U21, 1 );

    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 3.09900000, -1.00000000, fVar4, ref l_U2.x, ref l_U2.y, ref l_U2.z );
    CREATE_OBJECT( -1295524692, l_U2.x, l_U2.y, l_U2.z, ref l_U22, 1 );

    l_U17 = {l_U2};
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, l_U14._fU0, l_U14._fU4, l_U14._fU8, ref l_U17._fU0, ref l_U17._fU4, ref l_U17._fU8 );
    GET_OBJECT_HEADING( uParam0, ref l_U28 );

    l_U29 = l_U28 + 90.00000000;
    
    if (l_U29 > 360.00000000)
    {
        l_U29 -= 360.00000000;
    }

    l_U30 = l_U29;
    l_U31 = l_U30 + 180.00000000;

    if (l_U31 > 360.00000000)
    {
        l_U31 -= 360.00000000;
    }

    SET_OBJECT_HEADING( l_U22, l_U29 );
    SET_OBJECT_HEADING( l_U21, l_U29 );

    SET_OBJECT_ROTATION( l_U22, 0.00000000, l_U8._fU4, l_U29 );
    GET_OBJECT_HEALTH( l_U22, ref l_U33 );
    SET_OBJECT_DYNAMIC( l_U21, 0 );
    FREEZE_OBJECT_POSITION( l_U21, 1 );
    return;
}

// Create the cop peds for the toll booths
void sub_4338(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.50000000, 0.25000000, 0.00000000, ref l_U2.x, ref l_U2.y, ref l_U2.z );

        CREATE_CHAR( 6, CurrentCopModel(), l_U2.x, l_U2.y, l_U2.z, ref tollBoothPed, 1 );
        GET_OBJECT_HEADING( uParam0, ref l_U29 );
        
        SET_INFORM_RESPECTED_FRIENDS( tollBoothPed, 999, 999 );
        SET_PED_DONT_DO_EVASIVE_DIVES( tollBoothPed, 1 );
        SET_PED_WONT_ATTACK_PLAYER_WITHOUT_WANTED_LEVEL( tollBoothPed, 1 );

        l_U29 += 180.00000000;
        if (l_U29 >= 360.00000000)
        {
            l_U29 -= 360.00000000;
        }
        SET_CHAR_HEADING( tollBoothPed, l_U29 );
    }
    return;
}

void sub_4551()
{
    if ((l_U56) AND (g_U9152))
    {
        if (DOES_OBJECT_EXIST( l_U21 ))
        {
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U21, 0.00000000, 10.00000000, 0.00000000, ref l_U2.x, ref l_U2.y, ref l_U2.z );
            if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U2.x, l_U2.y, l_U2.z, 50.00000000, 50.00000000, 3.00000000, 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_HELI( CurrentPlayerChar() )))
                {
                    if (sub_1046())
                    {
                        if (NOT (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )))
                        {
                            if (NOT (sub_846( CurrentPlayerChar() )))
                            {
                                if (IS_SCORE_GREATER( CurrentPlayerId(), 4 ))
                                {
                                    sub_4768( "TOLNTRO", 1 );
                                    l_U56 = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_4768(unknown uParam0, unknown uParam1)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam1 );
            PRINT_HELP( uParam0 );
        }
    }
    return;
}

int sub_4979()
{
    unknown uVar2;
    float fVar3;

    if (DOES_OBJECT_EXIST( l_U20 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U20, l_U14._fU0, l_U14._fU4, l_U14._fU8, ref l_U2.x, ref l_U2.y, ref l_U2.z );
    }
    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar2 );
            if (sub_1046())
            {
                if ((IS_CAR_MODEL( uVar2, 1917016601 )) || ((IS_CAR_MODEL( uVar2, 1677715180 )) || ((IS_CAR_MODEL( uVar2, 850991848 )) || ((IS_CAR_MODEL( uVar2, -1099960214 )) || ((IS_CAR_MODEL( uVar2, 2053223216 )) || ((IS_CAR_MODEL( uVar2, 904750859 )) || ((IS_CAR_MODEL( uVar2, 569305213 )) || ((IS_CAR_MODEL( uVar2, 1353720154 )) || (IS_CAR_MODEL( uVar2, -2137348917 ))))))))))
                {
                    fVar3 = 8.00000000;
                }
                else
                {
                    fVar3 = 4.00000000;
                }
            }
            else
            {
                fVar3 = 6.00000000;
            }
            if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U2.x, l_U2.y, l_U2.z, fVar3, fVar3, fVar3, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

// Debug line
void sub_5439(unknown uParam0)
{
    return;
}

int sub_5467(Vehicle vehicleToCheck, unknown uParam1, unknown uParam2)
{
    float carHeading;
    float fVar6;
    float fVar7;

    if (NOT (IS_CAR_DEAD( vehicleToCheck )))
    {
        GET_CAR_HEADING( vehicleToCheck, ref carHeading );
        fVar7 = uParam1 - uParam2;
        if (fVar7 < 0.00000000)
        {
            fVar7 += 360.00000000;
        }
        fVar6 = uParam1 + uParam2;
        if (fVar6 >= 360.00000000)
        {
            fVar6 -= 360.00000000;
        }
        if (fVar6 > fVar7)
        {
            if ((carHeading > fVar7) AND (carHeading < fVar6))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((carHeading > fVar7) || (carHeading < fVar6))
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

void sub_5716()
{
    if (g_U9152)
    {
        if (NOT (sub_846( CurrentPlayerChar() )))
        {
            if (IS_SCORE_GREATER( CurrentPlayerId(), 4 ))
            {
                	
	            // TOLNTRO = Slow down to pay the toll if you don't want to attract attention.
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TOLNTRO" ))
                {
                    CLEAR_HELP();
                }
                // TOLLHLP = Drive up to the pay kiosk. The toll is $5.
                sub_4768( "TOLLHLP", 0 );
                g_U9152 = 0;
            }
        }
    }
    return;
}

int sub_5831(unknown uParam0)
{
    float fVar3;
    float fVar4;

    fVar4 = 7.50000000;
    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if (sub_846( CurrentPlayerChar() ))
        {
            fVar4 = 20.00000000;
        }
        if (fVar3 < fVar4)
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

// sub_5961
int SetPlayerMoney(int amount)
{
    int currentPlayerMoney;

    STORE_SCORE( CurrentPlayerId(), ref currentPlayerMoney );
    if (currentPlayerMoney >= amount)
    {
        ADD_SCORE( CurrentPlayerId(), -amount );
        return 1;
        break;
    }
    return 0;
}

void sub_6034(Vehicle carToCheck)
{
    Vehicle currentPlayerCar;

    GET_CAR_MODEL( carToCheck, ref currentPlayerCar );
    if (IS_THIS_MODEL_A_CAR( currentPlayerCar ))
    {
        REMOVE_CAR_WINDOW( carToCheck, 0 );
    }
    return;
}

// Animations for giving money using the toll booth.
// void sub_6093(int iParam0, unknown uParam1)
void sub_6093(int iParam0, int vehicle)
{
    string sVar4;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_VEH_DRIVEABLE( vehicle ))
        {
            if (sub_6133( iParam0 ))
            {
                sVar4 = "Give_Money";
                if (sub_6239( vehicle ))
                {
                    sVar4 = "toss_money_chopper";
                }
                else if (sub_6315( vehicle ))
                {
                    sVar4 = "toss_money_dirt";
                }
                else if (sub_6388( vehicle ))
                {
                    sVar4 = "toss_money_freeway";
                }
                else if (sub_6479( vehicle ))
                {
                    sVar4 = "toss_money_scooter";
                }
                else if (sub_6555( vehicle ))
                {
                    sVar4 = "toss_money_spt";
                };;;;;
                if (iParam0 == CurrentPlayerChar())
                {
                    TASK_PLAY_ANIM( iParam0, sVar4, "AMB@TOLLBOOTH", 4.00000000, 0, 0, 0, 0, 0 );
                }
                else
                {
                    OPEN_SEQUENCE_TASK( ref l_U39 );
                    TASK_CAR_TEMP_ACTION( 0, vehicle, 24, 1000 );
                    TASK_PLAY_ANIM( 0, sVar4, "AMB@TOLLBOOTH", 4.00000000, 0, 1, 0, 0, 0 );
                    CLOSE_SEQUENCE_TASK( l_U39 );
                    TASK_PERFORM_SEQUENCE( iParam0, l_U39 );
                    CLEAR_SEQUENCE_TASK( l_U39 );
                }
            }
        }
    }
    return;
}

int sub_6133(int iParam0)
{
    if (iParam0 == CurrentPlayerChar())
    {
        if (NOT sub_6155())
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_6155()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

// Chopper bike
int sub_6239(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, -570033273 ))
    {
        return 1;
    }
    return 0;
}

// Sanchez bike
int sub_6315(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, 788045382 ))
    {
        return 1;
    }
    return 0;
}

// 584879743 = Hellfury bike
// -1830458836 = Bobber? not in the vehicle list
int sub_6388(unknown uParam0)
{
    if ((IS_CAR_MODEL( uParam0, 584879743 )) 
    || (IS_CAR_MODEL( uParam0, -1830458836 )))
    {
        return 1;
    }
    return 0;
}

// Faggio
int sub_6479(unknown uParam0)
{
    if (IS_CAR_MODEL( uParam0, -1842748181 ))
    {
        return 1;
    }
    return 0;
}

// -909201658 = PCJ-600
// 1203311498 = NRG-900
int sub_6555(unknown uParam0)
{
    if ((IS_CAR_MODEL( uParam0, -909201658 )) 
    || (IS_CAR_MODEL( uParam0, 1203311498 )))
    {
        return 1;
    }
    return 0;
}

void sub_7517()
{
    if (NOT (IS_CHAR_INJURED( tollBoothPed )))
    {
        // I guess if this is 0, then it is set
        if (GetRandomInt())
        {
            TASK_PLAY_ANIM( tollBoothPed, "Indicate_Left_A", "AMB@TOLLBOOTH", 4.00000000, 0, 0, 0, 0, 0 );
        }
        else
        {
            TASK_PLAY_ANIM( tollBoothPed, "Indicate_Left_B", "AMB@TOLLBOOTH", 4.00000000, 0, 0, 0, 0, 0 );
        }
        SAY_AMBIENT_SPEECH( tollBoothPed, "TOLL_PAID_YES", 1, 0, 0 );
    }
    return;
}


// int sub_7542()
int GetRandomInt()
{
    // iVar2 = randomInt
    int randomInt;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref randomInt );
    if (randomInt == 0)
    {
        return 1;
    }
    return 0;
}

void sub_7899()
{
    if (IS_VEH_DRIVEABLE( playerVehicle ))
    {
        GET_DRIVER_OF_CAR( playerVehicle, ref l_U26 );
        if (l_U26 == CurrentPlayerChar())
        {
            ;
        }
        else if (NOT (IS_CHAR_INJURED( l_U26 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U26, 16, ref tollBoothScriptTaskStatus );
            if (tollBoothScriptTaskStatus == 7)
            {
                if (l_U52)
                {
                    GET_SCRIPT_TASK_STATUS( l_U26, 49, ref tollBoothScriptTaskStatus );
                    if (tollBoothScriptTaskStatus == 1)
                    {
                        // Seems to set the char speeds when going through the toll booth
                        if (g_U2230)
                        {
                            SET_DRIVE_TASK_CRUISE_SPEED( l_U26, 22.00000000 );
                        }
                        else
                        {
                            SET_DRIVE_TASK_CRUISE_SPEED( l_U26, 12.00000000 );
                        }
                    }
                }
                else if (NOT (IS_CHAR_IN_CAR( CurrentPlayerChar(), playerVehicle )))
                {
                    TASK_CAR_DRIVE_WANDER( l_U26, playerVehicle, 15.00000000, 0 );
                }
            }
        }
    }
    return;
}

