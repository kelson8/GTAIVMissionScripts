// TODO Figure out how to use this, make a sprunk animation and heal the player in GTA Connected.
// Quite sure l_U142 is vendingMachineObject, rename if incorrect.
// l_U138 seems to be another object, I wonder if that is the sprunk can? I think this one is sprunkCanObject

// l_U114 = currentAnimTime


void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U105 = 0.40000000;
    l_U106 = 0;
    currentPlayerWeapon = 0;
    // I think this one is iVendingMachineSwitchState
    // l_U112
    iVendingMachineSwitchState = 0;
    // I think this one is iDrinkSwitchState
    // l_U113
    iDrinkSwitchState = 0;
    l_U125 = -1;
    buyDrinkAnim = "buy_drink";
    // l_U133
    drinkAnimSet = "AMB@sprunk_plyr";
    l_U137 = -1218270655;
    if (HAS_DEATHARREST_EXECUTED())
    {
        CleanupSprunkScript();
    }
    sub_615( vendingMachineObject );

    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            if (DOES_OBJECT_EXIST( vendingMachineObject ))
            {
                if (IS_OBJECT_UPRIGHT( vendingMachineObject, 5 ))
                {
                    if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( vendingMachineObject ))
                    {
                        switch (iVendingMachineSwitchState)
                        {
                            case 0:
                            if (HAVE_ANIMS_LOADED( drinkAnimSet ))
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), l_U120._fU0, l_U120._fU4, l_U120._fU8, 1.50000000, 1.50000000, 1.50000000, 0 ))
                                {
                                    if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( CurrentPlayerId() ))
                                    {
                                        if (IS_CHAR_ON_FOOT( CurrentPlayerChar() ))
                                        {
                                            GET_INTERIOR_FROM_CHAR( CurrentPlayerChar(), ref currentPlayerInterior );
                                            GET_KEY_FOR_CHAR_IN_ROOM( CurrentPlayerChar(), ref currentPlayerRoomKey );
                                            GET_ROOM_KEY_FROM_OBJECT( vendingMachineObject, ref currentObjectRoomKey );
                                            GET_GAME_VIEWPORT_ID( ref objectViewportId );
                                            if ((currentObjectRoomKey != -1) AND (currentObjectRoomKey != 0))
                                            {
                                                GET_KEY_FOR_VIEWPORT_IN_ROOM( objectViewportId, ref currentViewportRoomKey );
                                            }
                                            else
                                            {
                                                currentViewportRoomKey = currentObjectRoomKey;
                                            }
                                            if ((currentPlayerRoomKey != -1) AND (currentPlayerRoomKey != 0))
                                            {
                                                GET_INTERIOR_AT_COORDS( l_U117._fU0, l_U117._fU4, l_U117._fU8, ref l_U140 );
                                            }
                                            else
                                            {
                                                currentObjectRoomKey = currentPlayerRoomKey;
                                                l_U140 = currentPlayerInterior;
                                            }

                                            if (currentPlayerRoomKey == currentObjectRoomKey)
                                            {
                                                if (currentPlayerInterior == l_U140)
                                                {
                                                    sub_806();

                                                    if (currentViewportRoomKey == currentObjectRoomKey)
                                                    {
                                                        if (sub_1368( 2, 0 ))
                                                        {
                                                            if (IS_CONTEXT_BUTTON_PRESSED( 2, sprunkContextButton, 0 ))
                                                            {
                                                                if (IS_SCORE_GREATER( CurrentPlayerId(), 1 ))
                                                                {
                                                                    // What is this object?
                                                                    if (HAS_MODEL_LOADED( l_U137 ))
                                                                    {
                                                                        CREATE_OBJECT( l_U137, l_U120._fU0, l_U120._fU4 + 0.60000000, l_U120._fU8, ref sprunkCanObject, 1 );
                                                                    }

                                                                    // Remove player helmet
                                                                    REMOVE_PED_HELMET( CurrentPlayerChar(), 1 );
                                                                    if (currentPlayerRoomKey != 0)
                                                                    {
                                                                        if (currentPlayerRoomKey != -1)
                                                                        {
                                                                            ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY( sprunkCanObject, currentPlayerRoomKey );
                                                                        }
                                                                    }

                                                                    if (DOES_OBJECT_EXIST( sprunkCanObject ))
                                                                    {
                                                                        SET_OBJECT_VISIBLE( sprunkCanObject, 0 );
                                                                    }
                                                                    iVendingMachineSwitchState = 1;
                                                                }

                                                                // Show a failed transaction message
                                                                // FAIL_TRAN = You don't have enough cash.
                                                                else
                                                                {
                                                                    PrintAndAddMessageToBrief( "FAIL_TRAN", 3000, 0 );
                                                                }
                                                            }
                                                        }
                                                        else
                                                        {
                                                            sub_200( 2, "sprunk_act" );
                                                            sub_200( 2, "classprunk_act" );
                                                        }
                                                    }
                                                    else
                                                    {
                                                        sub_200( 2, "sprunk_act" );
                                                        sub_200( 2, "classprunk_act" );
                                                    }
                                                }

                                                else
                                                {
                                                    sub_200( 2, "sprunk_act" );
                                                    sub_200( 2, "classprunk_act" );
                                                }
                                            }

                                            else
                                            {
                                                sub_200( 2, "sprunk_act" );
                                                sub_200( 2, "classprunk_act" );
                                            }
                                        }

                                        else
                                        {
                                            sub_200( 2, "sprunk_act" );
                                            sub_200( 2, "classprunk_act" );
                                        }
                                    }

                                    else
                                    {
                                        sub_200( 2, "sprunk_act" );
                                        sub_200( 2, "classprunk_act" );
                                    }
                                }
                                else
                                {
                                    sub_200( 2, "sprunk_act" );
                                    sub_200( 2, "classprunk_act" );
                                }
                            }

                            else
                            {
                                sub_200( 2, "sprunk_act" );
                                sub_200( 2, "classprunk_act" );
                            }
                            break;

                            case 1:
                            // Seems to run the main code for the vending machine.
                            sub_2914( vendingMachineObject );
                            break;

                            case 3:
                            // Reset player weapon back to fists.
                            sub_5027();

                            // Another game timer, possibly name this oldGameTimer
                            GET_GAME_TIMER( ref l_U129 );
                            iVendingMachineSwitchState = 2;
                            break;

                            case 2:
                            GET_GAME_TIMER( ref l_U130 );
                            l_U131 = l_U130 - l_U129;
                            if (l_U131 > 1000)
                            {
                                iVendingMachineSwitchState = 0;
                            }
                            break;

                            case 4: break;
                        }
                    }
                    else if (iVendingMachineSwitchState == 1)
                    {
                        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
                        {
                            CLEAR_CHAR_TASKS( CurrentPlayerChar() );
                            TogglePlayerControl( 1 );
                        }
                    }
                    CleanupSprunkScript();
                }
                else if (iVendingMachineSwitchState == 1)
                {
                    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
                    {
                        CLEAR_CHAR_TASKS( CurrentPlayerChar() );
                        TogglePlayerControl( 1 );
                    }
                }
                CleanupSprunkScript();
            }
            else if (iVendingMachineSwitchState == 1)
            {
                if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
                {
                    CLEAR_CHAR_TASKS( CurrentPlayerChar() );
                    TogglePlayerControl( 1 );
                }
            }
            CleanupSprunkScript();
        }
        else if (iVendingMachineSwitchState == 1)
        {
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                CLEAR_CHAR_TASKS( CurrentPlayerChar() );
                TogglePlayerControl( 1 );
            }
        }
        CleanupSprunkScript();
    }
    return;
}

// sub_119
// Detach the object, mark as no longer needed and terminate the script
void CleanupSprunkScript()
{
    if (DOES_OBJECT_EXIST( sprunkCanObject ))
    {
        if (IS_OBJECT_ATTACHED( sprunkCanObject ))
        {
            DETACH_OBJECT( sprunkCanObject, 1 );
        }
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref sprunkCanObject );
    }
    sub_200( 2, "sprunk_act" );
    sub_200( 2, "classprunk_act" );
    TERMINATE_THIS_SCRIPT();
    return;
}

// Seems to show a continue and possibly cancel button
// Possibly CAN_USE_CONTEXT_BUTTON? Unknown though
// iParam0 is set to 2, what is this? Seems to be setting this global: g_U9172
// sParam1 seems to be a help message that this is showing, like "sprunk_act", and "classprunk_act".
// if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
void sub_200(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        // CNTBUT1 = ~PAD_LB~
        sVar4 = "CNTBUT1";
    }
    else
    {
        // CNTBUT2 = ~PAD_LT~
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
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((l_U104) AND (g_U9172 == iParam0))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U104 = 0;
                if (l_U102)
                {
                    // Reset globals:
                    //    cellphone3Dstructure.disableCellphone = 0;
                    //    cellphone3Dstructure.hideCellPhone = 0;
                    ResetPhoneGlobalsForSprunk();
                    l_U102 = 0;
                }
            }

            if (canPlayerCarryNonMissionObjects)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( CurrentPlayerId(), 1 );
                canPlayerCarryNonMissionObjects = 0;
            }

            if (isSprunkHeapMessageDisplayed)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                isSprunkHeapMessageDisplayed = 0;
            }
        }
    }

    return;
}

// I had g_U91 labled in my Globals.md file as cellphone3Dstructure from finding it in the debug lines.
// sub_427
void ResetPhoneGlobalsForSprunk()
{
    cellphone3Dstructure.disableCellphone = 0;
    cellphone3Dstructure.hideCellPhone = 0;
    return;
}

// sub_480
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_615(unknown uParam0)
{
    REQUEST_ANIMS( drinkAnimSet );
    REQUEST_MODEL( l_U137 );
    while (NOT (HAS_MODEL_LOADED( l_U137 )))
    {
        WAIT( 0 );
    }
    sub_679();
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_HEALTH( uParam0, ref l_U115 );
        GET_OBJECT_COORDINATES( uParam0, ref l_U117._fU0, ref l_U117._fU4, ref l_U117._fU8 );
        GET_OBJECT_HEADING( uParam0, ref l_U123 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, -1.18000000, 0.00000000, ref l_U120._fU0, ref l_U120._fU4, ref l_U120._fU8 );
    }
    sub_806();
    return;
}

void sub_679()
{
    return;
}

// Seems to set the sprunk context button
void sub_806()
{
    sprunkContextButton = "sprunk_act";
    return;
}

// sub_1002
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1368(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( CurrentPlayerId() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( CurrentPlayerId() )))))
                {
                    if (NOT sub_1464())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( CurrentPlayerChar() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_1549())
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

int sub_1464()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_1549()
{
    return sub_1560( 0, 0 );
}

int sub_1560(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        cellphone3Dstructure.hideCellPhone = 1;
    }
    if ((g_U555 != 9) AND (uParam1))
    {
        cellphone3Dstructure.disableCellphone = 1;
    }
    return 1;
}

// sub_1658
// Name obtained from debug string below
int IS_CONTEXT_BUTTON_PRESSED(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_1368( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT canPlayerCarryNonMissionObjects)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( CurrentPlayerId(), 0 );
                canPlayerCarryNonMissionObjects = 1;
            }
            g_U9172 = uParam0;
            l_U104 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();

            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_1939();
                l_U102 = 1;
                g_U9173 = 6;
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
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            isSprunkHeapMessageDisplayed = 1;
                        }
                    }
                }
            }
        }
        else if (isSprunkHeapMessageDisplayed)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                isSprunkHeapMessageDisplayed = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_1939()
{
    return sub_1560( 1, 1 );
}

// sub_2471
// First, check if a message is not being displayed.
// Add next message to briefs, print the string now.
int PrintAndAddMessageToBrief(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

// Seems to run the animations, and the main functions to this.
void sub_2914(int object)
{
    switch (iDrinkSwitchState)
    {
        case 0:

        // Disable player control first
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            TogglePlayerControl( 0 );
        }

        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( object, 0.00000000, -1.18000000, 0.00000000, ref l_U120._fU0, ref l_U120._fU4, ref l_U120._fU8 );
        TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( CurrentPlayerChar(), l_U120._fU0, l_U120._fU4, l_U120._fU8, l_U123, 1.00000000, 270.00000000 );
        iDrinkSwitchState = 1;
        break;

        case 1:
        if (sub_3192())
        {
            iDrinkSwitchState = 9;
        }
       
        GET_SCRIPT_TASK_STATUS( CurrentPlayerChar(), 68, ref scriptTaskStatus );
        
        if (scriptTaskStatus == 7)
        {
            iDrinkSwitchState = 2;
        }
        break;

        case 2:
        sub_3411();
        scriptTaskStatus = 0;
        iDrinkSwitchState = 3;
        break;

        case 3:
        iDrinkSwitchState = 4;
        break;

        case 4:
        TASK_PLAY_ANIM( CurrentPlayerChar(), buyDrinkAnim, drinkAnimSet, 8.00000000, 0, 0, 0, 1, -2 );
        scriptTaskStatus = 0;
        iDrinkSwitchState = 5;
        break;

        case 5:
        if (IS_CHAR_PLAYING_ANIM( CurrentPlayerChar(), drinkAnimSet, buyDrinkAnim ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( CurrentPlayerChar(), drinkAnimSet, buyDrinkAnim, ref currentAnimTime );
        }

        else if (DOES_OBJECT_EXIST( sprunkCanObject ))
        {
            if (IS_OBJECT_ATTACHED( sprunkCanObject ))
            {
                DETACH_OBJECT( sprunkCanObject, 1 );
            }
            DELETE_OBJECT( ref sprunkCanObject );
        }
        iDrinkSwitchState = 9;

        if (currentAnimTime > 0.64700000)
        {
            if (DOES_OBJECT_EXIST( sprunkCanObject ))
            {
                if (NOT (IS_OBJECT_ATTACHED( sprunkCanObject )))
                {
                    ATTACH_OBJECT_TO_PED( sprunkCanObject, CurrentPlayerChar(), 1232, 0.20000000, 0, -0.02000000, 0.04000000, -0.20000000, 2.28000000, 0 );
                }
                SET_OBJECT_VISIBLE( sprunkCanObject, 1 );
                iDrinkSwitchState = 6;
            }
        }
        break;

        case 6:
        
        if (IS_CHAR_PLAYING_ANIM( CurrentPlayerChar(), drinkAnimSet, buyDrinkAnim ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( CurrentPlayerChar(), drinkAnimSet, buyDrinkAnim, ref currentAnimTime );
        }

        // 
        if ((NOT (IS_CHAR_PLAYING_ANIM( CurrentPlayerChar(), drinkAnimSet, buyDrinkAnim ))) || (currentAnimTime > 0.98000000))
        {
            // Play the drink animation
            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( CurrentPlayerChar(), "PARTIAL_DRINK", drinkAnimSet, 1.00000000, 0, 0, 0, 0, -2 );
            TogglePlayerControl( 1 );

            ADD_SCORE( CurrentPlayerId(), -1 );
            INCREMENT_INT_STAT_NO_MESSAGE( 374, 1 );

            // 0 = Stat {SPRUNK_BOUGHT}, 1 = Amount to increment
            IncrementStatValues( 0, 1 );
            SET_CHAR_HEALTH( CurrentPlayerChar(), NewPlayerHealth() );
            
            // Possibly incorrect name, but this should remove the blood and stuff from the player. 
            CleanupPlayerClothes();
            iDrinkSwitchState = 7;
        }
        break;

        case 7:

        // If the player is playing the animation, get the current time of it
        if (IS_CHAR_PLAYING_ANIM( CurrentPlayerChar(), drinkAnimSet, "PARTIAL_DRINK" ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( CurrentPlayerChar(), drinkAnimSet, "PARTIAL_DRINK", ref currentAnimTime );
        }

        // If the sprunk can and object are attached, detach and delete them.
        else if (DOES_OBJECT_EXIST( sprunkCanObject ))
        {
            if (IS_OBJECT_ATTACHED( sprunkCanObject ))
            {
                DETACH_OBJECT( sprunkCanObject, 1 );
            }
            DELETE_OBJECT( ref sprunkCanObject );
        }
        iDrinkSwitchState = 9;

        // If the current anim time is greater then this value, and the sprunk can object exists.
        // If the sprunk can object is attached, detach it, mark it as no longer needed, and set sprunkCanObject to null.
        // Clear the player tasks
        if (currentAnimTime > 0.87000000)
        {
            if (DOES_OBJECT_EXIST( sprunkCanObject ))
            {
                if (IS_OBJECT_ATTACHED( sprunkCanObject ))
                {
                    DETACH_OBJECT( sprunkCanObject, 1 );
                }
                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref sprunkCanObject );
                sprunkCanObject = nil;

                // Unsure what to name this, I think there is other timer values also.
                GET_GAME_TIMER( ref l_U129 );

                if (NOT (IS_CONTROL_PRESSED( 2, 2 )))
                {
                    CLEAR_CHAR_TASKS( CurrentPlayerChar() );
                }
                iDrinkSwitchState = 8;
            }
        }
        break;

        // Possible debug function was here, this only switches into the last option.
        case 8:
        iDrinkSwitchState = 9;
        break;
        
        // If the sprunk can exists, delete and detach object
        // Enable player controls
        case 9:
        if (DOES_OBJECT_EXIST( sprunkCanObject ))
        {
            if (IS_OBJECT_ATTACHED( sprunkCanObject ))
            {
                DETACH_OBJECT( sprunkCanObject, 1 );
            }
            DELETE_OBJECT( ref sprunkCanObject );
        }
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            TogglePlayerControl( 1 );
        }

        sub_200( 2, "sprunk_act" );
        sub_200( 2, "classprunk_act" );

        iDrinkSwitchState = 0;

        GET_GAME_TIMER( ref l_U129 );
        iVendingMachineSwitchState = 3;
        break;
    }
    return;
}

// sub_3033
void TogglePlayerControl(int toggle)
{
    if (toggle == 0)
    {
        SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
    }
    return;
}

// I think this is for if the player walks away from the vending machine or cancels? Seems to jump to bottom of animation switch.
// In use here: sub_2914
int sub_3192()
{
    if ((sub_3240()) 
    // 16 = Q
    // 15 = TAB
    // 14 = BACKSPACE
    // 17 = W
    || ((IS_BUTTON_PRESSED( 0, 16 )) 
    || ((IS_BUTTON_PRESSED( 0, 15 )) 
    || ((IS_BUTTON_PRESSED( 0, 14 ))
     || (IS_BUTTON_PRESSED( 0, 17 ))))))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( CurrentPlayerChar() );
        SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
        return 1;
    }
    return 0;
}

// Position of analogue sticks? I wonder what this is for.
int sub_3240()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 < 65436) || (iVar2 > 100))
    {
        return 1;
    }
    if ((iVar3 < 65436) || (iVar3 > 100))
    {
        return 1;
    }
    return 0;
}

void sub_3411()
{
    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        GET_CURRENT_CHAR_WEAPON( CurrentPlayerChar(), ref currentPlayerWeapon );
        if (currentPlayerWeapon == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( CurrentPlayerChar(), 46 );
            SET_CURRENT_CHAR_WEAPON( CurrentPlayerChar(), 0, 1 );
        }
        if (currentPlayerWeapon != 0)
        {
            SET_CURRENT_CHAR_WEAPON( CurrentPlayerChar(), 0, 1 );
        }
    }
    return;
}

// sub_4024
void IncrementStatValues(int stat, int incrementValue)
{
    UpdateStatValues( stat, incrementValue, 0.00000000, "" );
    return;
}

// sub_4045
void UpdateStatValues(int stat, int incrementValue, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
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

    switch (stat)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", incrementValue );
        break;

        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", incrementValue );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", incrementValue );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", incrementValue );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", incrementValue );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", incrementValue );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", incrementValue );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", incrementValue );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", incrementValue );
        break;
        case 9: break;
    }
    return;
}

// sub_4434
void NewPlayerHealth()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        GET_CHAR_HEALTH( CurrentPlayerChar(), ref Result );
        if (Result <= 150)
        {
            Result += 50;
        }
        else
        {
            Result = 200;
        }
    }
    return Result;
}

// Reset damange on the ped, I guess cleanup the blood or something?
// sub_4520
void CleanupPlayerClothes()
{
    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        RESET_VISIBLE_PED_DAMAGE( CurrentPlayerChar() );
    }
    return;
}

void sub_5027()
{
    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        if (currentPlayerWeapon != 0)
        {
            if (currentPlayerWeapon != 46)
            {
                SET_CURRENT_CHAR_WEAPON( CurrentPlayerChar(), currentPlayerWeapon, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( CurrentPlayerChar(), 46 );
            }
        }
    }
    return;
}

