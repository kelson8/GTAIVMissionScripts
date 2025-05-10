void main()
{
    Vehicle currentCableCar;

    // TODO Either this or l_U1 below which I renamed is cableCarStage for the switch statements
    l_U0 = 0;
    cableCarStage = 0;
    
    l_U6 = 0;
    l_U70 = 0;
    l_U71 = 0;
    l_U72 = 1;
    maxNumberOfPassengers = 0;
    l_U74 = 0;
    l_U75 = 0;
    l_U76 = 7.00000000;

    // I think this may be a Vector3
    l_U67 = {l_U77._fU4[0]};

    if (g_U9052)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "cablecars" )) == 1)
        {
            g_U9052 = 0;
            l_U70 = 1;
        }
        else
        {
            l_U70 = 0;
        }
    }
    else
    {
        l_U70 = 1;
    }
    sub_154();

    if (IsVehicleModelACableCar( ref currentCableCar ))
    {
        l_U71 = 0;
        l_U72 = 1;
        l_U3[0] = 6;
        l_U3[1] = 6;
        l_U0 = 2;
    }

    while (sub_997())
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            switch (l_U0)
            {
                case 0:
                sub_1147();
                break;

                case 1:
                sub_2307();
                break;

                case 2:
                sub_2893();
                break;

                case 3:
                sub_3160();
                break;

                case 4: break;
            }
        }
    }
    if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_SKIP" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_ENT" )))
    {
        CLEAR_HELP();
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_154()
{
    int iVar2;
    float fVar3;
    float fVar4;
    int iVar5;
    boolean bVar6;

    coordSet2[0] = {431.58370000, 227.08710000, 13.71420000};
    coordSet2[1] = {155.08820000, 227.51710000, 19.85840000};

    // Possibly coordSet1
    coordSet1[1][0] = {154.90000000, 231.50000000, 28.20000000};
    coordSet1[1][1] = {154.80000000, 222.40000000, 28.20000000};
    coordSet1[0][0] = {433.70000000, 231.90000000, 22.10000000};
    coordSet1[0][1] = {433.70000000, 222.50000000, 22.10000000};

    coordSet3[0][0] = {434.10240000, 227.63250000, 13.71420000};
    headings[0][0] = 272.00000000;

    coordSet3[0][1] = {431.74560000, 228.67370000, 13.71420000};
    headings[0][1] = 279.61260000;

    coordSet3[0][2] = {431.72970000, 227.04970000, 13.71420000};
    headings[0][2] = 280.57770000;
    coordSet3[0][3] = {432.67930000, 225.35610000, 13.71420000};

    headings[0][3] = 267.85710000;
    coordSet3[1][0] = {152.62290000, 227.27120000, 19.85840000};

    headings[1][0] = 90.84470000;

    coordSet3[1][1] = {154.76840000, 226.03000000, 19.85840000};
    headings[1][1] = 90.64090000;
    coordSet3[1][2] = {154.72260000, 227.49330000, 19.85840000};

    headings[1][2] = 90.28960000;
    coordSet3[1][3] = {155.66070000, 228.64720000, 19.85840000};
    headings[1][3] = 90.00000000;
    iVar2 = 0;
    fVar3 = 999999.00000000;
    bVar6 = false;

    while (iVar2 < 2)
    {
        fVar4 = VDIST( l_U67, coordSet2[iVar2] );
        if (fVar4 < fVar3)
        {
            iVar5 = iVar2;
            fVar3 = fVar4;
            bVar6 = true;
        }
        iVar2++;
    }

    if (bVar6)
    {
        // l_U2 seems to only be 0 or 2, seems to be something to do with the coordinates and headings.
        // This possibly determines which cable car is running.
        l_U2 = iVar5;
    }

    else
    {
        SCRIPT_ASSERT( "BAD BEDDOES LOGIC FOR CABLE CARS" );
    }
    l_U3[0] = 0;
    l_U3[1] = 0;
    return;
}

// sub_794
int IsVehicleModelACableCar(Vehicle storedVehicle)
{
    // Check if player is not busted/wasted.
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        // Check if player is in a car
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            // Store the players vehicle to storedVehicle
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), storedVehicle );
            if (NOT (IS_CAR_DEAD( (storedVehicle^) )))
            {
                // Check if vehicle is a Cablecar
                if (IS_CAR_MODEL( (storedVehicle^), -960289747 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

// sub_803
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

// sub_846
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_997()
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            return 1;
        }

        else if (g_U9052)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1147()
{
    Vehicle storedCableCar1;
    Vehicle storedCableCar2;
    vector cableCar2Coords;
    vector cableCar1Coords;
    boolean cableCarMoving;

    cableCar2Coords = {0.00000000, 0.00000000, 0.00000000};
    cableCar1Coords = {0.00000000, 0.00000000, 0.00000000};
    // I think this is correct, TODO Look into this.
    cableCarMoving = false;

    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() )))
        {
            if ((NOT (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 ))) AND (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), l_U67._fU0, l_U67._fU4, l_U67._fU8, 20.00000000, 20.00000000, 5.00000000, 0 )))
            {
                GET_NEAREST_CABLE_CAR( coordSet1[l_U2][0]._fU0, coordSet1[l_U2][0]._fU4, coordSet1[l_U2][0]._fU8, 5.00000000, ref storedCableCar1 );
                if (NOT (IS_CAR_DEAD( storedCableCar1 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( storedCableCar1, cableCar1Coords.x, cableCar1Coords.y, cableCar1Coords.z - l_U76, ref cableCar1Coords.x, ref cableCar1Coords.y, ref cableCar1Coords.z );
                    if (IS_CAR_STOPPED( storedCableCar1 ))
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( CurrentPlayerChar(), cableCar1Coords.x, cableCar1Coords.y, cableCar1Coords.z, 4.00000000, 4.00000000, 3.00000000, 0 ))
                        {
                            if (sub_1462())
                            {
                                l_U3[0] = 4;
                                cableCarMoving = true;

                                // "2" key on the keyboard
                                if (IS_CONTROL_PRESSED( 2, 3 ))
                                {
                                    l_U3[0] = 5;
                                    cableCarMoving = false;
                                    SET_TRAIN_IS_STOPPED_AT_STATION( storedCableCar1 );
                                    l_U0 = 1;
                                    cableCarStage = 0;
                                    l_U72 = 1;
                                    l_U71 = 0;
                                    l_U6 = 0;
                                    return;
                                }
                            }
                        }
                        else
                        {
                            l_U3[0] = 3;
                        }
                    }
                    else
                    {
                        l_U3[0] = 1;
                    }
                }
                else
                {
                    l_U3[0] = 0;
                }
                GET_NEAREST_CABLE_CAR( coordSet1[l_U2][1]._fU0, coordSet1[l_U2][1]._fU4, coordSet1[l_U2][1]._fU8, 5.00000000, ref storedCableCar2 );
                if (NOT (IS_CAR_DEAD( storedCableCar2 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( storedCableCar2, cableCar2Coords.x, cableCar2Coords.y, cableCar2Coords.z - l_U76, ref cableCar2Coords.x, ref cableCar2Coords.y, ref cableCar2Coords.z );
                    if (IS_CAR_STOPPED( storedCableCar2 ))
                    {
                        if (LOCATE_CHAR_ON_FOOT_3D( CurrentPlayerChar(), cableCar2Coords.x, cableCar2Coords.y, cableCar2Coords.z, 4.00000000, 4.00000000, 3.00000000, 0 ))
                        {
                            if (sub_1462())
                            {
                                l_U3[1] = 4;
                                cableCarMoving = true;
                                if (IS_CONTROL_PRESSED( 2, 3 ))
                                {
                                    l_U3[1] = 5;
                                    SET_TRAIN_IS_STOPPED_AT_STATION( storedCableCar2 );
                                    cableCarMoving = false;
                                    l_U0 = 1;
                                    cableCarStage = 0;
                                    l_U72 = 1;
                                    l_U71 = 0;
                                    l_U6 = 1;
                                    return;
                                }
                            }
                        }
                        else
                        {
                            l_U3[1] = 3;
                        }
                    }
                    else
                    {
                        l_U3[1] = 1;
                    }
                }
                else
                {
                    l_U3[1] = 0;
                }
            }
        }
    }
    if (cableCarMoving)
    {
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_ENT" )))
        {
            PRINT_HELP_FOREVER( "CCAR_ENT" );
        }
    }
    else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_ENT" ))
    {
        CLEAR_HELP();
    }
    return;
}

int sub_1462()
{
    // TODO Figure out what this one is doing.
    if (NOT (sub_1473( 1, 1 )))
    {
        return 0;
    }

    if (NOT IS_SCREEN_FADED_IN())
    {
        return 0;
    }
    if (NOT (IS_PLAYER_CONTROL_ON( CurrentPlayerId() )))
    {
        return 0;
    }

    return 1;
}

int sub_1473(boolean bParam0, boolean bParam1)
{
    Vehicle currentVehicle;
    int vehicleCurrentPed;
    float currentVehicleUprightValue;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }

    // Check if player is in any car, store their car.
    // Check if the car is not dead, store the car upright value
    // If the upright value is more than 1.01100000, or less than 0.95000000 return 0.
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentVehicle );
            if (NOT (IS_CAR_DEAD( currentVehicle )))
            {
                GET_CAR_UPRIGHT_VALUE( currentVehicle, ref currentVehicleUprightValue );
                if ((currentVehicleUprightValue > 1.01100000) || (currentVehicleUprightValue < 0.95000000))
                {
                    return 0;
                }
            }
        }
    }

    // Check if player is in any car, store their car.
    // Check if the car is not dead, get the current driver.
    // If the driver is not the player, return 0.
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref currentVehicle );
            if (NOT (IS_CAR_DEAD( currentVehicle )))
            {
                GET_DRIVER_OF_CAR( currentVehicle, ref vehicleCurrentPed );
                if (NOT (vehicleCurrentPed == CurrentPlayerChar()))
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

    // IF the player is not ready for cutscene
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( CurrentPlayerId() )))
    {
        return 0;
    }

    // If the player cannot start a mission
    if (NOT (CAN_PLAYER_START_MISSION( CurrentPlayerId() )))
    {
        return 0;
    }

    return 1;
}

void sub_2307()
{
    unknown[7] groupMemberArray;
    unknown currentPlayerGroup;
    unknown currentGroupMemberNumber;
    int currentCharIndex;
    int I;
    int currentCableCarSeat;
    unknown nearestCableCar;

    array(ref groupMemberArray, 7);
    GET_NEAREST_CABLE_CAR( coordSet1[l_U2][l_U6]._fU0, coordSet1[l_U2][l_U6]._fU4, coordSet1[l_U2][l_U6]._fU8, 10.00000000, ref nearestCableCar );
    if (NOT (IS_CAR_DEAD( nearestCableCar )))
    {
        switch (cableCarStage)
        {
            // If the screen is not fading, clear the help message and do fade out.
            // Seems to advance cableCarStage to 1, moving onto the next case.
            case 0:
            if (NOT IS_SCREEN_FADING())
            {
                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_ENT" ))
                {
                    CLEAR_HELP();
                }
                DO_SCREEN_FADE_OUT( 4000 );
                cableCarStage = 1;
            }
            break;

            // If the screen is not fading. 
            // Run sub_2504(), set currentCableCarSeat to 0
            // Warp player into nearest cable car, store player group and group size.
            // Store max amount of passengers for the nearest cable car.
            // Increment cableCarStage to 2, running the last part of the switch.
            case 1:
            if (NOT IS_SCREEN_FADING())
            {
                sub_2504();

                currentCableCarSeat = 0;
                WARP_CHAR_INTO_CAR( CurrentPlayerChar(), nearestCableCar );
                GET_PLAYER_GROUP( CurrentPlayerId(), ref currentPlayerGroup );
                GET_GROUP_SIZE( currentPlayerGroup, ref currentGroupMemberNumber, ref currentCharIndex );
                GET_MAXIMUM_NUMBER_OF_PASSENGERS( nearestCableCar, ref maxNumberOfPassengers );

                for ( I = 0; I < currentCharIndex; I++ )
                {
                    if (currentCableCarSeat < maxNumberOfPassengers)
                    {
                        GET_GROUP_MEMBER( currentPlayerGroup, I, ref groupMemberArray[I] );
                        if (NOT (IS_CHAR_INJURED( groupMemberArray[I] )))
                        {
                            if (IS_CAR_PASSENGER_SEAT_FREE( nearestCableCar, currentCableCarSeat ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( groupMemberArray[I], nearestCableCar, currentCableCarSeat );
                            }
                            currentCableCarSeat++;
                        }
                    }
                }
                l_U71 = 0;
                cableCarStage = 2;
            }
            break;

            // If the screen is not fading, fade the screen in.
            // Make the cable car leave the train station.
            // Set l_U72 to 1, I think to indicate complete.
            // And set l_U0 to 2.
            case 2:
            if (NOT IS_SCREEN_FADING())
            {
                DO_SCREEN_FADE_IN( 4000 );
                TRAIN_LEAVE_STATION( nearestCableCar );
                l_U72 = 1;
                l_U0 = 2;
            }
            break;
        }
    }
    else if (NOT IS_SCREEN_FADING())
    {
        if (IS_SCREEN_FADED_OUT())
        {
            DO_SCREEN_FADE_IN( 4000 );
            l_U0 = 0;
        }
    }
    return;
}

void sub_2504()
{
    return sub_2515( 0, 1 );
}

int sub_2515(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((g_U555 != 9) AND (uParam1))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

void sub_2893()
{
    Vehicle currentCableCar;

    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (IsVehicleModelACableCar( ref currentCableCar ))
        {
            if (IS_CAR_STOPPED( currentCableCar ))
            {
                if (l_U71)
                {
                    cableCarStage = 0;
                    l_U0 = 3;
                    l_U3[l_U6] = 7;
                    SET_TRAIN_IS_STOPPED_AT_STATION( currentCableCar );
                }
            }
            else
            {
                l_U71 = 1;
                l_U3[l_U6] = 6;

                if (IsNumPad6Pressed())
                {
                    if (NOT l_U72)
                    {
                        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_SKIP" ))
                        {
                            CLEAR_HELP();
                        }
                    }
                }

                else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_SKIP" )))
                {
                    ;
                }
                
                l_U72 = 0;;
            }
        }
        else
        {
            l_U0 = 0;
        }
    }
    return;
}

// Is button "NUMPAD 6" being pressed
// sub_3000
int IsNumPad6Pressed()
{
    if ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_3160()
{
    unknown[7] groupMemberArray;
    unknown currentPlayerGroup;
    int currentGroupMemberNumber;
    int currentCharIndex;
    int I;
    unknown uVar14;
    int iVar15;
    Vehicle currentCableCar;

    array(ref groupMemberArray, 7);
    iVar15 = 0;

    switch (cableCarStage)
    {
        case 0:
        if (NOT IS_SCREEN_FADING())
        {
            DO_SCREEN_FADE_OUT( 4000 );
            cableCarStage = 1;
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "CCAR_SKIP" ))
            {
                CLEAR_HELP();
            }
        }
        break;

        case 1:
        if (NOT IS_SCREEN_FADING())
        {
            sub_2504();
            if (IsVehicleModelACableCar( ref currentCableCar ))
            {
                TRAIN_LEAVE_STATION( currentCableCar );
                GET_MAXIMUM_NUMBER_OF_PASSENGERS( currentCableCar, ref maxNumberOfPassengers );
                iVar15 = 0;

                if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( CurrentPlayerChar(), coordSet3[l_U2][iVar15]._fU0, coordSet3[l_U2][iVar15]._fU4, coordSet3[l_U2][iVar15]._fU8 );
                }
                else
                {
                    SET_CHAR_COORDINATES( CurrentPlayerChar(), coordSet3[l_U2][iVar15]._fU0, coordSet3[l_U2][iVar15]._fU4, coordSet3[l_U2][iVar15]._fU8 );
                }

                SET_CHAR_HEADING( CurrentPlayerChar(), headings[l_U2][iVar15] );
                iVar15 = 1;

                // currentPlayerGroup
                GET_PLAYER_GROUP( CurrentPlayerId(), ref currentPlayerGroup );
                GET_GROUP_SIZE( currentPlayerGroup, ref currentGroupMemberNumber, ref currentCharIndex );

                for ( I = 0; I < currentCharIndex; I++ )
                {
                    if (iVar15 < 4)
                    {
                        GET_GROUP_MEMBER( currentPlayerGroup, I, ref groupMemberArray[I] );
                        if (NOT (IS_CHAR_INJURED( groupMemberArray[I] )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( groupMemberArray[I] ))
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( groupMemberArray[I], coordSet3[l_U2][iVar15]._fU0, coordSet3[l_U2][iVar15]._fU4, coordSet3[l_U2][iVar15]._fU8 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( groupMemberArray[I], coordSet3[l_U2][iVar15]._fU0, coordSet3[l_U2][iVar15]._fU4, coordSet3[l_U2][iVar15]._fU8 );
                            }
                            SET_CHAR_HEADING( groupMemberArray[I], headings[l_U2][iVar15] );
                            iVar15++;
                        }
                    }
                }
                cableCarStage = 2;
            }

            else
            {
                I = 0;
                iVar15 = 1;
                while (I < 7)
                {
                    if (iVar15 < 4)
                    {
                        GET_GROUP_MEMBER( currentPlayerGroup, I, ref groupMemberArray[I] );
                        if (NOT (IS_CHAR_INJURED( groupMemberArray[I] )))
                        {
                            if (IS_CHAR_IN_ANY_CAR( groupMemberArray[I] ))
                            {
                                WARP_CHAR_FROM_CAR_TO_COORD( groupMemberArray[I], coordSet3[l_U2][iVar15]._fU0, coordSet3[l_U2][iVar15]._fU4, coordSet3[l_U2][iVar15]._fU8 );
                            }
                            else
                            {
                                SET_CHAR_COORDINATES( groupMemberArray[I], coordSet3[l_U2][iVar15]._fU0, coordSet3[l_U2][iVar15]._fU4, coordSet3[l_U2][iVar15]._fU8 );
                            }
                            SET_CHAR_HEADING( groupMemberArray[I], headings[l_U2][iVar15] );
                            iVar15++;
                        }
                    }
                    I++;
                }
                l_U0 = 0;
            }
        }
        break;

        case 2:
        if (NOT IS_SCREEN_FADING())
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                SET_CAM_BEHIND_PED( CurrentPlayerChar() );
            }
            DO_SCREEN_FADE_IN( 4000 );
            l_U72 = 1;
            l_U0 = 0;
        }
        break;
    }
    return;
}

