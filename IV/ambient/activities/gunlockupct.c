void main()
{
    l_U5 = 0;
    l_U6 = 0;
    l_U7 = 0;
    l_U114 = 0;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U182 = 1;
    l_U183 = 0;
    l_U184 = 0;
    l_U185 = 0;
    l_U186 = 0;
    l_U187 = 0;
    l_U188 = 0;
    l_U192 = "GtaMloRoom01";
    l_U193 = 0;
    l_U199 = 0;
    l_U356 = 0;
    l_U357 = 0;
    l_U418 = 0;
    l_U419 = 0;
    l_U420 = 0;
    l_U421 = 0;
    l_U422 = 0;
    l_U423 = 0;
    l_U424 = 0;
    l_U427 = 7;
    l_U428 = 1;
    StrCopy( ref l_U429, "GL_ARMOUR", 16 );
    l_U434 = 0;
    ProtectedSet(l_U448, 500);
    l_U449 = 0;
    l_U450 = 0;
    l_U454 = 0;
    l_U189 = {l_U455._fU4[0]};
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
    GET_INTERIOR_AT_COORDS( l_U189._fU0, l_U189._fU4, l_U189._fU8, ref l_U341 );
    while (l_U341 == nil)
    {
        WAIT( 0 );
        GET_INTERIOR_AT_COORDS( l_U189._fU0, l_U189._fU4, l_U189._fU8, ref l_U341 );
    }
    ACTIVATE_INTERIOR( l_U341, 1 );
    GET_INTERIOR_HEADING( l_U341, ref l_U119 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_417();
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
    sub_1815();
    if (g_U0)
    {
        g_U64663 = 1;
        l_U161[0] = 1;
        l_U161[1] = 1;
        l_U161[2] = 1;
        l_U161[3] = 1;
        l_U161[4] = 1;
        l_U161[5] = 1;
        l_U161[6] = 1;
        l_U161[7] = 1;
        l_U161[8] = 1;
        l_U161[9] = 1;
        l_U161[10] = 1;
        l_U161[11] = 1;
        l_U161[12] = 1;
        l_U161[13] = 1;
    }
    while (l_U182)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            switch (l_U356)
            {
                case 0:
                if (NOT l_U114)
                {
                    if (NOT (IS_CHAR_INJURED( sub_950() )))
                    {
                        if (LOCATE_CHAR_ANY_MEANS_3D( sub_950(), 81.12530000, -338.25000000, 11.15940000, 150.00000000, 150.00000000, 150.00000000, 0 ))
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
                            l_U189._fU0 += 1.00000000;
                            l_U189._fU4 += -3.35000000;
                            l_U189._fU8 += -0.11900000;
                            l_U192 = "Room_GunChina";
                            l_U124 = -1084007777;
                            l_U114 = 1;
                        }
                    }
                }
                else if (g_U64663)
                {
                    sub_2622();
                }
                else
                {
                    l_U356 = 6;
                }
                break;
                case 1:
                if (NOT (IS_CHAR_INJURED( sub_950() )))
                {
                    if ((sub_6652()) || (LOCATE_CHAR_ANY_MEANS_3D( sub_950(), 67.55050000, -342.48320000, 12.96240000, 5.00000000, 5.00000000, 10.00000000, 0 )))
                    {
                        if (IS_WANTED_LEVEL_GREATER( sub_708(), 0 ))
                        {
                            if (NOT sub_6652())
                            {
                                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
                            }
                            if (NOT g_U9337)
                            {
                                PRINT_HELP( "GLOCK_WL" );
                                sub_6911( "GS1_AWAY1", ref l_U344, 1, 0 );
                                PRINTSTRING( "  b_blockedbypackie3c = FALSE  " );
                            }
                            l_U356 = 6;
                        }
                        else if (g_U9337)
                        {
                            PRINTSTRING( "  b_blockedbypackie3c = TRUE  " );
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
                            l_U356 = 6;
                        }
                        else if (l_U116 == 1)
                        {
                            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 0, 0.00000000 );
                            l_U116 = 0;
                        }
                        if (NOT (IS_CHAR_DEAD( l_U120 )))
                        {
                            FREEZE_CHAR_POSITION( l_U120, 0 );
                        }
                        l_U356 = 2;;
                    }
                }
                break;
                case 2:
                if ((NOT sub_6652()) AND (IS_WANTED_LEVEL_GREATER( sub_708(), 0 )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_950(), 67.55050000, -342.48320000, 12.96240000, 4.00000000, 4.00000000, 10.00000000, 0 ))
                    {
                        SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
                        PRINT_HELP( "GLOCK_WL" );
                        sub_6911( "GS1_AWAY1", ref l_U344, 1, 0 );
                        l_U356 = 6;
                    }
                }
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U120, sub_950(), 0 ))
                {
                    GET_GAME_TIMER( ref g_U9332 );
                    g_U9335 = 1;
                    l_U356 = 5;
                }
                if ((sub_6652()) || (LOCATE_CHAR_ANY_MEANS_3D( sub_950(), l_U371[12]._fU0 - 0.80000000, l_U371[12]._fU4 - 0.50000000, l_U371[12]._fU8 + (1.60000000 / 2), 1.60000000 + 0.10000000, 1.60000000 + 0.10000000, 1.60000000 + 0.20000000, 0 )))
                {
                    sub_8423();
                    if (NOT g_U9338)
                    {
                        GET_GAME_TIMER( ref l_U452 );
                        g_U9338 = 1;
                    }
                    if ((NOT g_U9335) AND (NOT l_U450))
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U120 ))) AND (DOES_CHAR_EXIST( l_U120 )))
                        {
                            sub_6911( "GS1_GREET1", ref l_U344, 1, 0 );
                        }
                        l_U450 = 1;
                    }
                    l_U356 = 4;
                }
                else if (l_U450)
                {
                    if (NOT l_U115)
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U120 ))) AND (DOES_CHAR_EXIST( l_U120 )))
                        {
                            sub_6911( "GS1_BYE1", ref l_U344, 1, 0 );
                        }
                        l_U115 = 1;
                    }
                }
                break;
                case 4:
                sub_8759();
                if (NOT sub_6652())
                {
                    if (NOT (IS_CHAR_DEAD( l_U120 )))
                    {
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U120, 1 );
                        FREEZE_CHAR_POSITION( l_U120, 1 );
                    }
                    if (NOT g_U9335)
                    {
                        if (NOT (sub_22250( l_U350 )))
                        {
                            if (l_U187 == 1)
                            {
                                sub_6911( "GS1_BUY", ref l_U350, 1, 0 );
                            }
                            else
                            {
                                sub_6911( "GS1_NOBUY", ref l_U350, 1, 0 );
                            }
                        }
                    }
                    if (g_U9338)
                    {
                        GET_GAME_TIMER( ref l_U451 );
                        l_U453 = l_U451 - l_U452;
                        INCREMENT_INT_STAT_NO_MESSAGE( 50, l_U453 );
                        g_U9338 = 0;
                    }
                    l_U356 = 2;
                }
                if (NOT (IS_CHAR_INJURED( l_U120 )))
                {
                    if ((IS_PED_RAGDOLL( l_U120 )) || ((IS_CHAR_SHOOTING_IN_AREA( sub_950(), l_U189._fU0 - 9.39310000, l_U189._fU4 - 1.66650000, l_U189._fU0 + 3.09560000, l_U189._fU4 + 6.77950000, 0 )) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( sub_708(), l_U120 )) || (IS_PLAYER_TARGETTING_CHAR( sub_708(), l_U120 )))))
                    {
                        if (NOT l_U454)
                        {
                            OPEN_SEQUENCE_TASK( ref l_U343 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_950() );
                            TASK_LOOK_AT_CHAR( 0, sub_950(), -2, 1 );
                            TASK_STAND_GUARD( 0, l_U358[0]._fU0, l_U358[0]._fU4, l_U358[0]._fU8, l_U119 + 100.48830000, 0.50000000, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U343 );
                            TASK_PERFORM_SEQUENCE( l_U120, l_U343 );
                            CLEAR_SEQUENCE_TASK( l_U343 );
                            if ((IS_PED_RAGDOLL( l_U120 )) || (IS_CHAR_ARMED( sub_950(), 6 )))
                            {
                                if (NOT (sub_22250( l_U344 )))
                                {
                                    sub_6911( "GS1_MONKEY1", ref l_U344, 1, 0 );
                                }
                            }
                            l_U454 = 1;
                        }
                    }
                    if ((NOT (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_708(), l_U120 ))) AND (NOT (IS_PLAYER_TARGETTING_CHAR( sub_708(), l_U120 ))))
                    {
                        if (l_U454)
                        {
                            CLEAR_CHAR_TASKS( l_U120 );
                            TASK_STAND_GUARD( l_U120, l_U358[0]._fU0, l_U358[0]._fU4, l_U358[0]._fU8, l_U119 + 100.48830000, 0.50000000, 0, -1 );
                            l_U454 = 0;
                        }
                    }
                }
                if (g_U9335 == 1)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_950(), l_U371[12]._fU0, l_U371[12]._fU4, l_U371[12]._fU8, 3.50000000, 3.50000000, 3.50000000, 0 ))
                    {
                        GET_GAME_TIMER( ref l_U195 );
                        if ((l_U195 - g_U9332) > 300000)
                        {
                            if ((NOT (IS_CHAR_INJURED( l_U120 ))) AND (DOES_CHAR_EXIST( l_U120 )))
                            {
                                sub_6911( "GS1_GREET1", ref l_U344, 1, 0 );
                            }
                            g_U9335 = 0;
                        }
                        else
                        {
                            sub_6911( "GS1_AWAY1", ref l_U344, 1, 0 );
                            if (NOT (IS_CHAR_INJURED( l_U120 )))
                            {
                                CLEAR_CHAR_TASKS( l_U120 );
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U120, 0 );
                                FREEZE_CHAR_POSITION( l_U120, 0 );
                                SET_CHAR_RELATIONSHIP( l_U120, 5, 0 );
                            }
                            l_U356 = 6;
                        }
                    }
                }
                else if ((IS_WANTED_LEVEL_GREATER( sub_708(), 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U120, sub_950(), 0 )))
                {
                    CLEAR_CHAR_TASKS( sub_950() );
                    SET_RELATIONSHIP( 5, 28, 0 );
                    if (NOT (IS_CHAR_INJURED( l_U120 )))
                    {
                        CLEAR_HELP();
                        CLEAR_PRINTS();
                        CLEAR_CHAR_TASKS( l_U120 );
                        SET_CHAR_RELATIONSHIP( l_U120, 5, 0 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U120, 0 );
                        FREEZE_CHAR_POSITION( l_U120, 0 );
                    }
                    GET_GAME_TIMER( ref g_U9332 );
                    g_U9335 = 1;
                    l_U356 = 5;
                }
                break;
                case 5:
                if (NOT l_U186)
                {
                    if (NOT (IS_CHAR_INJURED( l_U120 )))
                    {
                        CLEAR_HELP();
                        sub_799( ref l_U344, 0 );
                        g_U9330 = 1;
                        sub_6911( "GS1_ASST1", ref l_U344, 1, 0 );
                        sub_23566();
                        l_U186 = 1;
                    }
                    else
                    {
                        CLEAR_HELP();
                        g_U9330 = 1;
                        sub_23566();
                        l_U186 = 1;
                    }
                }
                break;
                case 6:
                if (g_U9338)
                {
                    GET_GAME_TIMER( ref l_U451 );
                    l_U453 = l_U451 - l_U452;
                    INCREMENT_INT_STAT_NO_MESSAGE( 50, l_U453 );
                    g_U9338 = 0;
                }
                if (DOES_CHAR_EXIST( l_U120 ))
                {
                    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U120, sub_950(), 0 ))
                    {
                        PRINTSTRING( "  b_blockedbypackie3c = FALSE(2)  " );
                        GET_GAME_TIMER( ref g_U9332 );
                    }
                }
                STORE_WANTED_LEVEL( sub_708(), ref l_U426 );
                if (g_U64663)
                {
                    if (l_U426 == 0)
                    {
                        if (NOT g_U9335)
                        {
                            if (NOT g_U9337)
                            {
                                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 0, 0.00000000 );
                            }
                            else
                            {
                                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 1, 0.00000000 );
                                l_U116 = 1;
                            }
                            l_U356 = 1;
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U195 );
                            if ((l_U195 - g_U9332) > 300000)
                            {
                                g_U9335 = 0;
                            }
                        }
                    }
                }
                break;
            }
        }
        else
        {
            l_U182 = 0;
        }
    }
    sub_417();
    return;
}

void sub_417()
{
    sub_438( 4, "GLOCK_H1" );
    sub_799( ref l_U344, 0 );
    sub_799( ref l_U350, 0 );
    if (IS_PLAYER_PLAYING( sub_708() ))
    {
        SET_CHAR_WILL_USE_COVER( sub_950(), 1 );
    }
    for ( l_U194 = 0; l_U194 <= (l_U117 - 1); l_U194++ )
    {
        if (DOES_OBJECT_EXIST( l_U200[l_U194]._fU20 ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U200[l_U194]._fU20 );
        }
    }
    SET_RELATIONSHIP( 2, 28, 0 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( l_U189._fU0 - 9.39310000, l_U189._fU4 - 1.66650000, l_U189._fU8 - 4.14000000, l_U189._fU0 + 3.09560000, l_U189._fU4 + 5.77950000, l_U189._fU8 + 5.86000000 );
    REMOVE_ANIMS( "missgunlockup" );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1516578222 );
    if (l_U5 == 1)
    {
        sub_1226();
    }
    if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U439 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U435 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U429 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_B1" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_A1" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FAIL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_BUY" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FULL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FULL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_FAUST" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_BUY" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FAIL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_BUY" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_WH1" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H11" ))))))))))))))))))
    {
        CLEAR_HELP();
    }
    SWITCH_PED_PATHS_ON( l_U189._fU0 - 9.39310000, l_U189._fU4 - 1.66650000, l_U189._fU8 - 3.00000000, l_U189._fU0 + 3.09560000, l_U189._fU4 + 6.77950000, l_U189._fU8 + 3.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_438(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((l_U3) AND (g_U9172 == iParam0))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_659();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_708(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_659()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_708()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_799(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_950()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1226()
{
    if (IS_PLAYER_PLAYING( sub_708() ))
    {
        for ( l_U194 = 0; l_U194 <= 13; l_U194++ )
        {
            if ((NOT l_U140[l_U194]) AND (HAS_CHAR_GOT_WEAPON( sub_950(), l_U200[l_U194]._fU0 )))
            {
                REMOVE_WEAPON_FROM_CHAR( sub_950(), l_U200[l_U194]._fU0 );
            }
        }
    }
    return;
}

void sub_1815()
{
    l_U161[0] = 1;
    if (g_U15654[62] == 1)
    {
        l_U161[1] = 1;
    }
    if (g_U15654[63] == 1)
    {
        l_U161[2] = 1;
    }
    if (g_U15654[66] == 1)
    {
        l_U161[3] = 1;
    }
    if (g_U15654[67] == 1)
    {
        l_U161[4] = 1;
    }
    if (g_U15654[64] == 1)
    {
        l_U161[5] = 1;
    }
    if (g_U15654[65] == 1)
    {
        l_U161[6] = 1;
    }
    if (g_U15654[68] == 1)
    {
        l_U161[7] = 1;
    }
    if (g_U15654[69] == 1)
    {
        l_U161[8] = 1;
    }
    if (g_U15654[70] == 1)
    {
        l_U161[9] = 1;
        l_U161[10] = 1;
    }
    if (g_U15654[71] == 1)
    {
        l_U161[11] = 1;
    }
    if (g_U15654[72] == 1)
    {
        l_U161[12] = 1;
    }
    if (g_U15654[73] == 1)
    {
        l_U161[13] = 1;
    }
    return;
}

// Create the chars
void sub_2622()
{
    sub_2634( "" );
    REQUEST_MODEL( l_U124 );
    while (NOT (HAS_MODEL_LOADED( l_U124 )))
    {
        WAIT( 0 );
        REQUEST_MODEL( l_U124 );
    }
    CREATE_OBJECT_NO_OFFSET( 501936518, l_U189._fU0, l_U189._fU4, l_U189._fU8, ref l_U125[0], 1 );
    SET_OBJECT_HEADING( l_U125[0], l_U119 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], 0.80000000, 4.00000000, 0.96000000, ref l_U358[0]._fU0, ref l_U358[0]._fU4, ref l_U358[0]._fU8 );
    SET_RELATIONSHIP( 2, 28, 0 );

    CREATE_CHAR( 26, l_U124, 82.52380000, -337.32920000, 10.17450000, ref l_U120, 1 );
    SET_AMBIENT_VOICE_NAME( l_U123, " M_Y_GTRI_LO_01_FULL_01" );
    SET_CHAR_HEADING( l_U120, l_U119 + 100.48830000 );

    SET_CHAR_RELATIONSHIP( l_U120, 1, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( l_U120, 28 );

    GIVE_WEAPON_TO_CHAR( l_U120, 9, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U120, 0, 0 );
    TASK_STAND_GUARD( l_U120, l_U358[0]._fU0, l_U358[0]._fU4, l_U358[0]._fU8, l_U119 + 100.48830000, 0.50000000, 0, -1 );
    SET_ROOM_FOR_CHAR_BY_NAME( l_U120, l_U192 );
    TASK_START_SCENARIO_AT_POSITION( l_U120, "SCENARIO_STANDING", l_U358[0]._fU0, l_U358[0]._fU4, l_U358[0]._fU8, l_U119 + 100.48830000 );
    sub_3248( 1, l_U120, "GUNSHOP_TRIAD", 0 );

    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U124 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -7.39380000, 3.80900000, 0.10710000, ref l_U358[1]._fU0, ref l_U358[1]._fU4, ref l_U358[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -7.51180000, 5.74700000, 0.10730000, ref l_U358[2]._fU0, ref l_U358[2]._fU4, ref l_U358[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -7.53000000, 3.81300000, 0.10720000, ref l_U358[3]._fU0, ref l_U358[3]._fU4, ref l_U358[3]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -3.40000000, -1.40000000, 0.92700000, ref l_U371[0]._fU0, ref l_U371[0]._fU4, ref l_U371[0]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -1.90000000, -1.40000000, 0.93000000, ref l_U371[1]._fU0, ref l_U371[1]._fU4, ref l_U371[1]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -0.35000000, -1.40000000, 0.87000000, ref l_U371[2]._fU0, ref l_U371[2]._fU4, ref l_U371[2]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], 0.90000000, -1.30000000, 0.83999990, ref l_U371[3]._fU0, ref l_U371[3]._fU4, ref l_U371[3]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -4.00000000, 6.20000000, 0.83999990, ref l_U371[4]._fU0, ref l_U371[4]._fU4, ref l_U371[4]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -2.60000000, 6.20000000, 0.94000000, ref l_U371[5]._fU0, ref l_U371[5]._fU4, ref l_U371[5]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -5.00000000, 3.70000000, 0.83999990, ref l_U371[6]._fU0, ref l_U371[6]._fU4, ref l_U371[6]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -1.40000000, 1.50000000, 0.94000000, ref l_U371[7]._fU0, ref l_U371[7]._fU4, ref l_U371[7]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -1.10000000, 6.20000000, 0.99000000, ref l_U371[8]._fU0, ref l_U371[8]._fU4, ref l_U371[8]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], 0.60000000, 6.20000000, 0.97200000, ref l_U371[9]._fU0, ref l_U371[9]._fU4, ref l_U371[9]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -2.50000000, 2.95000000, 0.97000000, ref l_U371[10]._fU0, ref l_U371[10]._fU4, ref l_U371[10]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], 0.60000000, 2.60000000, 1.07000000, ref l_U371[11]._fU0, ref l_U371[11]._fU4, ref l_U371[11]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -3.40000000, 2.45000000, 0.50000000, ref l_U371[12]._fU0, ref l_U371[12]._fU4, ref l_U371[12]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -4.90000000, -1.31000000, 1.04000000, ref l_U371[13]._fU0, ref l_U371[13]._fU4, ref l_U371[13]._fU8 );
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U125[0], -1.20000000, 3.00000000, 0.00000000, ref l_U371[14]._fU0, ref l_U371[14]._fU4, ref l_U371[14]._fU8 );
    
    MARK_MODEL_AS_NO_LONGER_NEEDED( 501936518 );
    
    DELETE_OBJECT( ref l_U125[0] );
    
    sub_4528( ref l_U200[l_U117], 1, l_U371[13]._fU0, l_U371[13]._fU4, l_U371[13]._fU8, 192.78730000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 7, l_U371[0]._fU0, l_U371[0]._fU4, l_U371[0]._fU8, 90.00000000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 9, l_U371[1]._fU0, l_U371[1]._fU4, l_U371[1]._fU8, 180.00000000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 12, l_U371[2]._fU0, l_U371[2]._fU4, l_U371[2]._fU8, 90.00000000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 13, l_U371[3]._fU0, l_U371[3]._fU4, l_U371[3]._fU8, 90.00000000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 10, l_U371[4]._fU0, l_U371[4]._fU4, l_U371[4]._fU8, 90.00000000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 11, l_U371[5]._fU0, l_U371[5]._fU4, l_U371[5]._fU8, 45.00000000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 14, l_U371[6]._fU0, l_U371[6]._fU4, l_U371[6]._fU8, 90.00000000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 15, l_U371[7]._fU0, l_U371[7]._fU4, l_U371[7]._fU8, 90.00000000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 16, l_U371[8]._fU0, l_U371[8]._fU4, l_U371[8]._fU8, 298.46520000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 17, l_U371[9]._fU0, l_U371[9]._fU4, l_U371[9]._fU8, 298.46520000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 4, l_U371[10]._fU0, l_U371[10]._fU4, l_U371[10]._fU8, 181.15430000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 5, l_U371[11]._fU0, l_U371[11]._fU4, l_U371[11]._fU8, 181.15430000, ref l_U117 );
    sub_4528( ref l_U200[l_U117], 18, l_U371[12]._fU0, l_U371[12]._fU4, l_U371[12]._fU8, 181.15430000, ref l_U117 );

    for ( l_U194 = 0; l_U194 <= (l_U117 - 1); l_U194++ )
    {
        sub_5349( ref l_U200[l_U194] );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U200[l_U194]._fU20, l_U192 );
    }

    if (NOT l_U424)
    {
        CREATE_OBJECT_NO_OFFSET( -1758615024, l_U371[14]._fU0, l_U371[14]._fU4, l_U371[14]._fU8, ref l_U425, 1 );
        ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME( l_U425, l_U192 );
        SET_OBJECT_ROTATION( l_U425, 90.00000000, 180.00000000, l_U119 + 25.00000000 );
        FREEZE_OBJECT_POSITION( l_U425, 1 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1758615024 );
        l_U424 = 1;
    }

    SET_OBJECT_HEADING( l_U200[0]._fU20, l_U119 );
    SET_OBJECT_ROTATION( l_U200[0]._fU20, 90.00000000, 85.00000000, l_U119 + 90.00000000 );

    SET_OBJECT_HEADING( l_U200[1]._fU20, l_U119 );
    SET_OBJECT_ROTATION( l_U200[1]._fU20, 90.00000000, 0.00000000, l_U119 + 45.00000000 );

    SET_OBJECT_HEADING( l_U200[2]._fU20, l_U119 );
    SET_OBJECT_ROTATION( l_U200[2]._fU20, 90.00000000, 0.00000000, l_U119 + 60.00000000 );

    SET_OBJECT_HEADING( l_U200[3]._fU20, l_U119 );
    SET_OBJECT_ROTATION( l_U200[3]._fU20, 90.00000000, 0.00000000, l_U119 );

    SET_OBJECT_HEADING( l_U200[4]._fU20, l_U119 );
    SET_OBJECT_ROTATION( l_U200[4]._fU20, 90.00000000, 0.00000000, l_U119 + 315.00000000 );

    SET_OBJECT_HEADING( l_U200[5]._fU20, l_U119 );
    SET_OBJECT_ROTATION( l_U200[5]._fU20, 90.00000000, 0.00000000, l_U119 + 160.00000000 );

    SET_OBJECT_HEADING( l_U200[6]._fU20, l_U119 );
    SET_OBJECT_ROTATION( l_U200[6]._fU20, 90.00000000, 0.00000000, l_U119 + 200.00000000 );

    SET_OBJECT_HEADING( l_U200[7]._fU20, l_U119 );
    SET_OBJECT_ROTATION( l_U200[7]._fU20, 90.00000000, 180.00000000, l_U119 + 270.00000000 );

    SET_OBJECT_HEADING( l_U200[8]._fU20, l_U119 );
    SET_OBJECT_ROTATION( l_U200[8]._fU20, 90.00000000, 180.00000000, l_U119 + 130.00000000 );

    SET_OBJECT_HEADING( l_U200[9]._fU20, l_U119 );
    SET_OBJECT_ROTATION( l_U200[9]._fU20, 90.00000000, 180.00000000, l_U119 + 200.00000000 );

    SET_OBJECT_HEADING( l_U200[10]._fU20, l_U119 );
    SET_OBJECT_ROTATION( l_U200[10]._fU20, 90.00000000, 180.00000000, l_U119 + 180.00000000 );

    SET_OBJECT_HEADING( l_U200[13]._fU20, l_U119 );
    SET_OBJECT_ROTATION( l_U200[13]._fU20, 90.00000000, 0.00000000, l_U119 + 90.00000000 );

    REQUEST_ANIMS( "missgunlockup" );

    while (NOT (HAVE_ANIMS_LOADED( "missgunlockup" )))
    {
        WAIT( 0 );
        REQUEST_ANIMS( "missgunlockup" );
    }

    if (NOT (IS_CHAR_INJURED( l_U120 )))
    {
        UNLOCK_RAGDOLL( l_U120, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U120, 1 );
        FREEZE_CHAR_POSITION( l_U120, 1 );
    }

    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 807349477, 73.00000000, -343.10000000, 11.40000000, 0, 0.00000000 );
    sub_3248( 0, sub_950(), "NIKO", 0 );
    l_U356 = 1;
    return;
}

void sub_2634(unknown uParam0)
{
    StrCopy( ref l_U16._fU0, uParam0, 16 );
    sub_2651();
    return;
}

void sub_2651()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U16._fU16[I]._fU0 = nil;
        StrCopy( ref l_U16._fU16[I]._fU4, "", 32 );
        l_U16._fU344[I] = 0;
    }
    return;
}

void sub_3248(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U16._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U16._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3328( "\n PED NUMBER ", uParam0 );
    sub_3368( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3328(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3368(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4528(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if ((uParam6^) < 20)
    {
        iParam0->_fU0 = uParam1;
        iParam0->_fU4 = {uParam2};
        iParam0->_fU16 = uParam5;
        (uParam6^)++;
    }
    return;
}

void sub_5349(int iParam0)
{
    int iVar3;

    if (iParam0->_fU0 == 5)
    {
        iVar3 = -2049396802;
    }
    else
    {
        GET_WEAPONTYPE_MODEL( iParam0->_fU0, ref iVar3 );
    }
    CREATE_OBJECT_NO_OFFSET( iVar3, ref iParam0->_fU4->_fU0, ref iParam0->_fU4->_fU4, (ref iParam0->_fU4->_fU8) - 1.00000000, iParam0 + 20, 1 );
    FREEZE_OBJECT_POSITION( iParam0->_fU20, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( iVar3 );
    return;
}

int sub_6652()
{
    int iVar2;

    if ((LOCATE_CHAR_ANY_MEANS_3D( sub_950(), l_U189._fU0, l_U189._fU4, l_U189._fU8, 15.00000000, 15.00000000, 15.00000000, 0 )) AND (NOT (IS_CHAR_INJURED( sub_950() ))))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_950(), ref iVar2 );
        if (iVar2 == (GET_HASH_KEY( "Room_GunChina" )))
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

void sub_6911(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_6932( uParam0, ref l_U16._fU0, uParam1, uParam2, uParam3 );
}

void sub_6932(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_6986( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_6986(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7008( iParam1 )))
    {
        return 0;
    }
    l_U16._fU384 = 0;
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
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_7696( ref g_U8395, ref l_U16 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_7008(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_7085( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_7085( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_7085( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_7085(unknown uParam0)
{
    return;
}

void sub_7696(int iParam0, int iParam1)
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

void sub_8423()
{
    if (IS_PLAYER_PLAYING( sub_708() ))
    {
        for ( l_U194 = 0; l_U194 <= 13; l_U194++ )
        {
            if (HAS_CHAR_GOT_WEAPON( sub_950(), l_U200[l_U194]._fU0 ))
            {
                l_U140[l_U194] = 1;
            }
            else
            {
                l_U140[l_U194] = 0;
            }
        }
    }
    return;
}

void sub_8759()
{
    switch (l_U199)
    {
        case 0:
        DISPLAY_CASH( 1 );
        sub_8796();
        break;
        default:
    }
    return;
}

void sub_8796()
{
    switch (l_U357)
    {
        case 0:
        for ( l_U194 = 0; l_U194 <= (l_U117 - 1); l_U194++ )
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_950(), l_U200[l_U194]._fU4._fU0, l_U200[l_U194]._fU4._fU4, l_U200[l_U194]._fU4._fU8 - 0.40000000, 0.80000000, 0.90000000, 1.20000000, 0 ))
            {
                l_U193 = l_U194;
            }
        }
        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FAIL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FULL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FULL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_BUY" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FAIL" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U443 ))))))))
        {
            if (TIMERB() > 1500)
            {
                CLEAR_HELP();
            }
        }
        if (LOCATE_CHAR_ON_FOOT_3D( sub_950(), l_U200[l_U193]._fU4._fU0, l_U200[l_U193]._fU4._fU4, l_U200[l_U193]._fU4._fU8, 0.80000000, 0.90000000, 1.20000000, 0 ))
        {
            if ((NOT sub_9290()) AND (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_708() )))
            {
                if (l_U161[l_U193])
                {
                    if (NOT l_U140[l_U193])
                    {
                        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U429 )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U439 ))))
                        {
                            CLEAR_HELP();
                        }
                        if (sub_9424( sub_950() ))
                        {
                            if (sub_9486( 4, 0 ))
                            {
                                if (sub_9753( 4, "GLOCK_H1", 0 ))
                                {
                                    l_U357 = 1;
                                }
                            }
                            else
                            {
                                sub_438( 4, "GLOCK_H1" );
                            }
                        }
                    }
                    else if ((NOT (l_U193 == 12)) AND (NOT (l_U193 == 11)))
                    {
                        if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U429 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U435 )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" ))))
                        {
                            CLEAR_HELP();
                        }
                    }
                    if (sub_9424( sub_950() ))
                    {
                        if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FAIL" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_FULL" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "AMMO_BUY" ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U443 ))))))
                        {
                            if (NOT (l_U193 == 0))
                            {
                                if (NOT l_U434)
                                {
                                    SET_CURRENT_CHAR_WEAPON( sub_950(), l_U200[l_U193]._fU0, 1 );
                                    GET_AMMO_IN_CHAR_WEAPON( sub_950(), l_U200[l_U193]._fU0, ref l_U433 );
                                    l_U449 = 1;
                                    l_U434 = 1;
                                }
                                else
                                {
                                    DISPLAY_AMMO( 1 );
                                    l_U439 = {sub_10684( l_U200[l_U193]._fU0 )};
                                    PRINT_HELP_FOREVER( ref l_U439 );
                                    if (sub_11112())
                                    {
                                        l_U357 = 6;
                                    }
                                }
                            }
                            else
                            {
                                PRINT_HELP_FOREVER( "GLOCK_B1" );
                            }
                        }
                    }
                }
                else if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )))
                {
                    CLEAR_HELP();
                    PRINT_HELP_FOREVER( "GL_SOON" );
                }
            }
            else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H1" ))
            {
                CLEAR_HELP();
            }
        }
        else if (LOCATE_CHAR_ON_FOOT_3D( sub_950(), l_U371[14]._fU0 + 0.20000000, l_U371[14]._fU4, l_U371[14]._fU8, 0.60000000, 0.80000000, 1.20000000, 0 ))
        {
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U439 )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U435 ))))
            {
                CLEAR_HELP();
            }
            if (sub_9424( sub_950() ))
            {
                if ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FAIL" ))) AND ((NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_FULL" ))) AND (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "ARM_BUY" )))))
                {
                    if ((NOT sub_9290()) AND (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_708() )))
                    {
                        PRINT_HELP_FOREVER( ref l_U429 );
                        if (sub_11112())
                        {
                            if (NOT sub_11538())
                            {
                                PRINT_HELP( "ARM_FULL" );
                                SETTIMERB( 0 );
                                l_U357 = 0;
                            }
                            else
                            {
                                l_U357 = 8;
                            }
                        }
                    }
                    else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U429 )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_A1" )))
                    {
                        CLEAR_HELP();
                    }
                }
            }
        }
        else
        {
            l_U434 = 0;
            DISPLAY_AMMO( 0 );
            sub_438( 4, "GLOCK_H1" );
            if (l_U449)
            {
                if (IS_CHAR_ARMED( sub_950(), l_U427 ))
                {
                    SET_CURRENT_CHAR_WEAPON( sub_950(), 0, 0 );
                }
                l_U449 = 0;
            }
            if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_SOON" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U429 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U439 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U435 )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_B1" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_A1" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GL_FAUST" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_WH1" )) || ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H1" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_H11" )))))))))))
            {
                CLEAR_HELP();
            }
        }
        break;
        case 1:
        sub_438( 4, "GLOCK_H1" );
        if (IS_CHAR_ARMED( sub_950(), l_U427 ))
        {
            SET_CURRENT_CHAR_WEAPON( sub_950(), 0, 0 );
        }
        if (NOT l_U183)
        {
            SET_PLAYER_CONTROL( sub_708(), 0 );
            if (NOT (IS_CHAR_INJURED( sub_950() )))
            {
                TASK_TURN_CHAR_TO_FACE_COORD( sub_950(), l_U200[l_U193]._fU4._fU0, l_U200[l_U193]._fU4._fU4, l_U200[l_U193]._fU4._fU8 );
            }
            while (NOT (sub_12152( sub_950(), 45 )))
            {
                WAIT( 0 );
            }
            l_U183 = 1;
        }
        else if (sub_12243( l_U200[l_U193]._fU0, ref l_U417 ))
        {
            l_U428 = 0;
            sub_438( 4, "GLOCK_H1" );
            l_U357 = 2;
        }
        else if (sub_12398( l_U200[l_U193]._fU0 ))
        {
            l_U428 = 1;
            sub_438( 4, "GLOCK_H1" );
            l_U357 = 2;
        };;;
        break;
        case 2:
        sub_13032( ref l_U200[l_U193] );
        l_U183 = 0;
        if (l_U5)
        {
            if ((TIMERB() > 3000) AND (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" )))
            {
                CLEAR_HELP();
            }
            if (l_U193 == 0)
            {
                sub_14955( l_U118 );
            }
            else if (l_U193 == 10)
            {
                sub_15213( l_U118 );
            }
            else
            {
                sub_15402( l_U118 );
            }
        }
        if ((IS_CHAR_PLAYING_ANIM( sub_950(), "missgunlockup", "rpg_loop" )) || ((IS_CHAR_PLAYING_ANIM( sub_950(), "missgunlockup", "uzi_loop" )) || ((IS_CHAR_PLAYING_ANIM( sub_950(), "missgunlockup", "grenade_loop" )) || ((IS_CHAR_PLAYING_ANIM( sub_950(), "missgunlockup", "over_shoulder" )) || ((IS_CHAR_PLAYING_ANIM( sub_950(), "missgunlockup", "shotgun_loop" )) || ((IS_CHAR_PLAYING_ANIM( sub_950(), "missgunlockup", "rifle_loop" )) || (IS_CHAR_PLAYING_ANIM( sub_950(), "missgunlockup", "pistol_loop" ))))))))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" )))
            {
                l_U357 = 3;
            }
        }
        break;
        case 3:
        l_U435 = {sub_15931( l_U200[l_U193]._fU0 )};
        PRINT_HELP_FOREVER( ref l_U435 );
        if (sub_11112())
        {
            if (l_U428)
            {
                if (IS_SCORE_GREATER( sub_708(), ProtectedGet(l_U447) ))
                {
                    CLEAR_HELP();
                    l_U357 = 4;
                }
                else
                {
                    PRINT_HELP( "GUN_FAIL" );
                    SETTIMERB( 0 );
                    l_U357 = 2;
                }
            }
            else
            {
                CLEAR_HELP();
                CLEAR_PRINTS();
                l_U4 = 1;
                l_U357 = 5;
            }
        }
        else if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
        {
            CLEAR_HELP();
            l_U357 = 9;
        }
        break;
        case 4:
        if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GLOCK_WH2" )))
        {
            PRINT_HELP_FOREVER( "GLOCK_WH2" );
        }
        if (sub_11112())
        {
            if (sub_16585( l_U200[l_U193]._fU0 ))
            {
                CLEAR_HELP();
                l_U4 = 1;
                l_U428 = 0;
                l_U357 = 5;
            }
        }
        else if (IS_CONTROL_JUST_PRESSED( 2, 23 ))
        {
            CLEAR_HELP();
            l_U357 = 9;
        }
        break;
        case 5:
        sub_438( 4, "GLOCK_WH1" );
        if (l_U4)
        {
            if (sub_17266( sub_17045( l_U200[l_U193]._fU0 ) ))
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_17045( l_U200[l_U193]._fU0 ) );
                PLAY_AUDIO_EVENT_FROM_PED( sub_17392( l_U200[l_U193]._fU0 ), sub_950() );
                l_U140[l_U193] = 1;
                l_U443 = {sub_18010( l_U200[l_U193]._fU0 )};
                PRINT_HELP_FOREVER( ref l_U443 );
                SETTIMERB( 0 );
                if ((NOT (IS_CHAR_INJURED( sub_950() ))) AND (NOT (IS_CHAR_INJURED( l_U120 ))))
                {
                    OPEN_SEQUENCE_TASK( ref l_U343 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_950() );
                    TASK_LOOK_AT_CHAR( 0, sub_950(), -2, 1 );
                    TASK_STAND_GUARD( 0, l_U358[0]._fU0, l_U358[0]._fU4, l_U358[0]._fU8, l_U119 + 100.48830000, 0.50000000, 0, -1 );
                    CLOSE_SEQUENCE_TASK( l_U343 );
                    TASK_PERFORM_SEQUENCE( l_U120, l_U343 );
                    CLEAR_SEQUENCE_TASK( l_U343 );
                }
                sub_6911( "GS1_PURCH1", ref l_U344, 1, 0 );
                l_U187 = 1;
                l_U357 = 9;
            }
            else
            {
                PRINT_HELP( "GUN_FAIL" );
                SETTIMERB( 0 );
                l_U4 = 0;
                l_U357 = 2;
            }
        }
        break;
        case 6:
        if (l_U433 < (sub_18716( l_U200[l_U193]._fU0 )))
        {
            l_U4 = 1;
            l_U357 = 7;
        }
        else
        {
            PRINT_HELP( "AMMO_FULL" );
            SETTIMERB( 0 );
            l_U434 = 0;
            l_U357 = 0;
        }
        break;
        case 7:
        if (l_U4)
        {
            if (sub_17266( sub_19222( l_U200[l_U193]._fU0 ) ))
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 106, sub_19222( l_U200[l_U193]._fU0 ) );
                PLAY_AUDIO_EVENT_FROM_PED( sub_17392( l_U200[l_U193]._fU0 ), sub_950() );
                GIVE_WEAPON_TO_CHAR( sub_950(), l_U200[l_U193]._fU0, sub_14562( l_U200[l_U193]._fU0 ), 1 );
                GET_AMMO_IN_CHAR_WEAPON( sub_950(), l_U200[l_U193]._fU0, ref l_U433 );
                if (l_U433 >= (sub_18716( l_U200[l_U193]._fU0 )))
                {
                    SET_CHAR_AMMO( sub_950(), l_U200[l_U193]._fU0, sub_18716( l_U200[l_U193]._fU0 ) );
                }
                l_U4 = 0;
                l_U434 = 0;
                l_U187 = 1;
                l_U357 = 0;
            }
            else
            {
                PRINT_HELP( "AMMO_FAIL" );
                SETTIMERB( 0 );
                l_U4 = 0;
                l_U434 = 0;
                l_U357 = 0;
            }
        }
        break;
        case 8:
        if (sub_17266( ProtectedGet(l_U448) ))
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 106, ProtectedGet(l_U448) );
            ADD_ARMOUR_TO_CHAR( sub_950(), l_U13 );
            PLAY_AUDIO_EVENT_FROM_PED( "BODY_ARMOUR_BUY", sub_950() );
            PRINT_HELP( "ARM_BUY" );
            SETTIMERB( 0 );
            l_U187 = 1;
            l_U357 = 0;
        }
        else
        {
            PRINT_HELP( "ARM_FAIL" );
            SETTIMERB( 0 );
            l_U357 = 0;
        }
        break;
        case 9:
        sub_438( 4, "GLOCK_H1" );
        sub_19921( ref l_U200[l_U193] );
        if (l_U428)
        {
            if (l_U5 == 0)
            {
                if (l_U4 == 1)
                {
                    GIVE_WEAPON_TO_CHAR( sub_950(), l_U200[l_U193]._fU0, sub_14562( l_U200[l_U193]._fU0 ), 0 );
                    l_U4 = 0;
                }
                if (sub_21127( l_U200[l_U193]._fU0 ))
                {
                    sub_21747( l_U118 );
                    l_U357 = 10;
                }
            }
        }
        else if (l_U5 == 0)
        {
            if (l_U4 == 1)
            {
                if (l_U188)
                {
                    GIVE_WEAPON_TO_CHAR( sub_950(), l_U200[l_U193]._fU0, (sub_14562( l_U200[l_U193]._fU0 )) + l_U417, 0 );
                }
                else
                {
                    GIVE_WEAPON_TO_CHAR( sub_950(), l_U200[l_U193]._fU0, sub_14562( l_U200[l_U193]._fU0 ), 0 );
                }
                l_U4 = 0;
            }
            sub_21747( l_U118 );
            l_U357 = 10;
        }
        break;
        case 10:
        if (((TIMERB() > 3000) AND (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "GUN_FAIL" ))) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref l_U443 )))
        {
            CLEAR_HELP();
        }
        if (sub_22092( sub_950(), 29 ))
        {
            l_U188 = 0;
            l_U357 = 0;
        }
        break;
    }
    return;
}

int sub_9290()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_9424(unknown uParam0)
{
    float fVar3;

    GET_CHAR_SPEED( uParam0, ref fVar3 );
    if ((IS_CHAR_STOPPED( uParam0 )) || (fVar3 < 0.80000000))
    {
        return 1;
    }
    return 0;
}

int sub_9486(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_708() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_708() )))
            {
                if (((g_U9202) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_708() )))))
                {
                    if (NOT sub_9290())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_950() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_9638())
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

void sub_9638()
{
    return sub_9649( 0, 0 );
}

int sub_9649(boolean bParam0, unknown uParam1)
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

int sub_9753(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_9486( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_708(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_10028();
                l_U1 = 1;
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
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_10028()
{
    return sub_9649( 1, 1 );
}

void sub_10684(unknown uParam0)
{
    char[16] Result;

    switch (uParam0)
    {
        case 1:
        StrCopy( ref Result, "GL_BBAT3", 16 );
        break;
        case 7:
        StrCopy( ref Result, "GL_PIST3", 16 );
        break;
        case 9:
        StrCopy( ref Result, "GL_DEAGLE3", 16 );
        break;
        case 12:
        StrCopy( ref Result, "GL_UZI3", 16 );
        break;
        case 13:
        StrCopy( ref Result, "GL_MP53", 16 );
        break;
        case 10:
        StrCopy( ref Result, "GL_SHOT3", 16 );
        break;
        case 11:
        StrCopy( ref Result, "GL_BARET3", 16 );
        break;
        case 14:
        StrCopy( ref Result, "GL_AK473", 16 );
        break;
        case 15:
        StrCopy( ref Result, "GL_M43", 16 );
        break;
        case 16:
        StrCopy( ref Result, "GL_SNIPER3", 16 );
        break;
        case 17:
        StrCopy( ref Result, "GL_M40A13", 16 );
        break;
        case 4:
        StrCopy( ref Result, "GL_GREN3", 16 );
        break;
        case 5:
        StrCopy( ref Result, "GL_MOLOTOV3", 16 );
        break;
        case 18:
        StrCopy( ref Result, "GL_RKL3", 16 );
        break;
    }
    return Result;
}

int sub_11112()
{
    if ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_11538()
{
    if (NOT (IS_CHAR_INJURED( sub_950() )))
    {
        GET_CHAR_ARMOUR( sub_950(), ref l_U12 );
    }
    if (l_U12 < 100)
    {
        l_U13 = 100 - l_U12;
        return 1;
        break;
    }
    return 0;
}

int sub_12152(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_12243(int iParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;
    unknown uVar6;

    if (NOT (iParam0 == 55))
    {
        GET_WEAPONTYPE_SLOT( iParam0, ref uVar4 );
    }
    GET_CHAR_WEAPON_IN_SLOT( sub_950(), uVar4, ref iVar5, uParam1, ref uVar6 );
    if ((iVar5 == 55) || (iVar5 == 0))
    {
        return 1;
        break;
    }
    if (iVar5 == iParam0)
    {
        return 1;
        break;
    }
    return 0;
}

int sub_12398(int iParam0)
{
    if (iParam0 == 7)
    {
        l_U418 = l_U417;
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 9 );
        return 1;
    }
    else if (iParam0 == 9)
    {
        l_U418 = l_U417;
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 7 );
        return 1;
    }
    else if (iParam0 == 12)
    {
        l_U188 = 1;
        l_U419 = l_U417;
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 13 );
        return 1;
    }
    else if (iParam0 == 13)
    {
        l_U188 = 1;
        l_U419 = l_U417;
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 12 );
        return 1;
    }
    else if (iParam0 == 10)
    {
        l_U188 = 1;
        l_U420 = l_U417;
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 11 );
        return 1;
    }
    else if (iParam0 == 11)
    {
        l_U188 = 1;
        l_U420 = l_U417;
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 10 );
        return 1;
    }
    else if (iParam0 == 14)
    {
        l_U188 = 1;
        l_U421 = l_U417;
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 15 );
        return 1;
    }
    else if (iParam0 == 15)
    {
        l_U188 = 1;
        l_U421 = l_U417;
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 14 );
        return 1;
    }
    else if (iParam0 == 16)
    {
        l_U188 = 1;
        l_U422 = l_U417;
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 17 );
        return 1;
    }
    else if (iParam0 == 17)
    {
        l_U188 = 1;
        l_U422 = l_U417;
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 16 );
        return 1;
    }
    else if (iParam0 == 4)
    {
        l_U423 = l_U417;
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 5 );
        return 1;
    }
    else if (iParam0 == 5)
    {
        l_U423 = l_U417;
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 4 );
        return 1;
    }
    else if (iParam0 == 1)
    {
        REMOVE_WEAPON_FROM_CHAR( sub_950(), 3 );
        return 1;
    };;;;;;;;;;;;;
    return 0;
}

void sub_13032(int iParam0)
{
    unknown uVar3;

    REQUEST_MODEL( -2001451511 );
    DISPLAY_CASH( 1 );
    DISPLAY_HUD( 0 );
    DISPLAY_RADAR( 0 );
    if (NOT l_U6)
    {
        OPEN_SEQUENCE_TASK( ref uVar3 );
        TASK_PLAY_ANIM( 0, sub_13100( iParam0->_fU0 ), "missgunlockup", 8.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM( 0, sub_13582( iParam0->_fU0 ), "missgunlockup", 8.00000000, 1, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( uVar3 );
        TASK_PERFORM_SEQUENCE( sub_950(), uVar3 );
        CLEAR_SEQUENCE_TASK( uVar3 );
        l_U6 = 1;
    }
    if (NOT l_U5)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_950(), "missgunlockup", sub_13100( iParam0->_fU0 ) ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_950(), "missgunlockup", sub_13100( iParam0->_fU0 ), ref l_U14 );
            if (l_U14 > (sub_14178( iParam0->_fU0 )))
            {
                if (DOES_OBJECT_EXIST( iParam0->_fU20 ))
                {
                    if (IS_PLAYER_PLAYING( sub_708() ))
                    {
                        SET_OBJECT_VISIBLE( iParam0->_fU20, 0 );
                        if (iParam0->_fU0 == 5)
                        {
                            GIVE_WEAPON_TO_CHAR( sub_950(), 5, sub_14562( iParam0->_fU0 ), 0 );
                            SET_CURRENT_CHAR_WEAPON( sub_950(), 5, 0 );
                            SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_950(), 1 );
                            l_U5 = 1;
                        }
                        else
                        {
                            GIVE_WEAPON_TO_CHAR( sub_950(), iParam0->_fU0, sub_14562( iParam0->_fU0 ), 0 );
                            SET_CURRENT_CHAR_WEAPON( sub_950(), iParam0->_fU0, 0 );
                            SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_950(), 1 );
                            l_U5 = 1;
                        }
                    }
                }
            }
        }
    }
    l_U15 = 0.00000000;
    return;
}

void sub_13100(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 1:
        Result = "GRENADE_INTRO";
        break;
        case 7:
        Result = "pistol_intro";
        break;
        case 9:
        Result = "pistol_intro";
        break;
        case 12:
        Result = "uzi_intro";
        break;
        case 13:
        Result = "pistol_intro";
        break;
        case 10:
        Result = "shotgun_intro";
        break;
        case 11:
        Result = "shotgun_intro";
        break;
        case 14:
        Result = "rifle_intro";
        break;
        case 15:
        Result = "rifle_intro";
        break;
        case 16:
        Result = "rifle_intro";
        break;
        case 17:
        Result = "rifle_intro";
        break;
        case 4:
        Result = "GRENADE_INTRO";
        break;
        case 5:
        Result = "GRENADE_INTRO";
        break;
        case 18:
        Result = "rpg_intro";
        break;
    }
    return Result;
}

void sub_13582(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 1:
        Result = "over_shoulder";
        break;
        case 7:
        Result = "pistol_loop";
        break;
        case 9:
        Result = "pistol_loop";
        break;
        case 12:
        Result = "uzi_loop";
        break;
        case 13:
        Result = "rifle_loop";
        break;
        case 10:
        Result = "shotgun_loop";
        break;
        case 11:
        Result = "rifle_loop";
        break;
        case 14:
        Result = "rifle_loop";
        break;
        case 15:
        Result = "rifle_loop";
        break;
        case 16:
        Result = "rifle_loop";
        break;
        case 17:
        Result = "rifle_loop";
        break;
        case 4:
        Result = "GRENADE_LOOP";
        break;
        case 5:
        Result = "GRENADE_LOOP";
        break;
        case 18:
        Result = "rpg_loop";
        break;
    }
    return Result;
}

void sub_14178(unknown uParam0)
{
    float Result;

    switch (uParam0)
    {
        case 1:
        Result = 0.64000000;
        break;
        case 7:
        Result = 0.41000000;
        break;
        case 9:
        Result = 0.41000000;
        break;
        case 12:
        Result = 0.41000000;
        break;
        case 13:
        Result = 0.41000000;
        break;
        case 10:
        Result = 0.44000000;
        break;
        case 11:
        Result = 0.44000000;
        break;
        case 14:
        Result = 0.46000000;
        break;
        case 15:
        Result = 0.46000000;
        break;
        case 16:
        Result = 0.46000000;
        break;
        case 17:
        Result = 0.46000000;
        break;
        case 4:
        Result = 0.64000000;
        break;
        case 5:
        Result = 0.64000000;
        break;
        case 18:
        Result = 0.46000000;
        break;
    }
    return Result;
}

int sub_14562(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 1;
        case 7: return 17;
        case 9: return 9;
        case 12: return 50;
        case 13: return 30;
        case 10: return 8;
        case 11: return 10;
        case 14: return 30;
        case 15: return 30;
        case 16: return 10;
        case 17: return 5;
        case 4: return 1;
        case 5: return 1;
        case 18: return 1;
    }
    return -1;
}

void sub_14955(unknown uParam0)
{
    if (sub_10028())
    {
        if (NOT l_U7)
        {
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref uParam0 );
            CREATE_CAM( 14, ref l_U8 );
            ATTACH_CAM_TO_PED( l_U8, sub_950() );
            SET_CAM_FOV( l_U8, 68.50000000 );
            if (NOT (IS_CHAR_INJURED( sub_950() )))
            {
                GET_CHAR_COORDINATES( sub_950(), ref l_U9._fU0, ref l_U9._fU4, ref l_U9._fU8 );
            }
            SET_CAM_ATTACH_OFFSET( l_U8, 0.00000000, 0.77000000, 0.66000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U8, 1 );
            POINT_CAM_AT_COORD( l_U8, l_U9._fU0, l_U9._fU4, l_U9._fU8 + 0.40000000 );
            SET_CAM_ACTIVE( l_U8, 1 );
            SET_CAM_PROPAGATE( l_U8, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U7 = 1;
        }
    }
    return;
}

void sub_15213(unknown uParam0)
{
    if (sub_10028())
    {
        if (NOT l_U7)
        {
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref uParam0 );
            CREATE_CAM( 14, ref l_U8 );
            ATTACH_CAM_TO_PED( l_U8, sub_950() );
            SET_CAM_FOV( l_U8, 58.50000000 );
            SET_CAM_ATTACH_OFFSET( l_U8, -1.30000000, 0.87000000, 0.86000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U8, 1 );
            POINT_CAM_AT_PED( l_U8, sub_950() );
            SET_CAM_ACTIVE( l_U8, 1 );
            SET_CAM_PROPAGATE( l_U8, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U7 = 1;
        }
    }
    return;
}

void sub_15402(unknown uParam0)
{
    if (sub_10028())
    {
        if (NOT l_U7)
        {
            SET_WIDESCREEN_BORDERS( 1 );
            BEGIN_CAM_COMMANDS( ref uParam0 );
            CREATE_CAM( 14, ref l_U8 );
            ATTACH_CAM_TO_PED( l_U8, sub_950() );
            SET_CAM_FOV( l_U8, 68.50000000 );
            SET_CAM_ATTACH_OFFSET( l_U8, 1.00000000, 0.07000000, 0.86000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U8, 1 );
            POINT_CAM_AT_PED( l_U8, sub_950() );
            SET_CAM_ACTIVE( l_U8, 1 );
            SET_CAM_PROPAGATE( l_U8, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U7 = 1;
        }
    }
    return;
}

void sub_15931(unknown uParam0)
{
    char[16] Result;

    switch (uParam0)
    {
        case 1:
        StrCopy( ref Result, "GL_BBAT2", 16 );
        break;
        case 7:
        StrCopy( ref Result, "GL_PIST2", 16 );
        break;
        case 9:
        StrCopy( ref Result, "GL_DEAGLE2", 16 );
        break;
        case 12:
        StrCopy( ref Result, "GL_UZI2", 16 );
        break;
        case 13:
        StrCopy( ref Result, "GL_MP52", 16 );
        break;
        case 10:
        StrCopy( ref Result, "GL_SHOT2", 16 );
        break;
        case 11:
        StrCopy( ref Result, "GL_BARET2", 16 );
        break;
        case 14:
        StrCopy( ref Result, "GL_AK472", 16 );
        break;
        case 15:
        StrCopy( ref Result, "GL_M42", 16 );
        break;
        case 16:
        StrCopy( ref Result, "GL_SNIPER2", 16 );
        break;
        case 17:
        StrCopy( ref Result, "GL_M40A12", 16 );
        break;
        case 4:
        StrCopy( ref Result, "GL_GREN2", 16 );
        break;
        case 5:
        StrCopy( ref Result, "GL_MOLOTOV2", 16 );
        break;
        case 18:
        StrCopy( ref Result, "GL_RKL2", 16 );
        break;
    }
    return Result;
}

int sub_16585(int iParam0)
{
    if (iParam0 == 7)
    {
        l_U140[2] = 0;
        return 1;
    }
    else if (iParam0 == 9)
    {
        l_U140[1] = 0;
        return 1;
    }
    else if (iParam0 == 12)
    {
        l_U140[4] = 0;
        return 1;
    }
    else if (iParam0 == 13)
    {
        l_U140[3] = 0;
        return 1;
    }
    else if (iParam0 == 10)
    {
        l_U140[6] = 0;
        return 1;
    }
    else if (iParam0 == 11)
    {
        l_U140[5] = 0;
        return 1;
    }
    else if (iParam0 == 14)
    {
        l_U140[8] = 0;
        return 1;
    }
    else if (iParam0 == 15)
    {
        l_U140[7] = 0;
        return 1;
    }
    else if (iParam0 == 16)
    {
        l_U140[10] = 0;
        return 1;
    }
    else if (iParam0 == 17)
    {
        l_U140[9] = 0;
        return 1;
    }
    else if (iParam0 == 4)
    {
        l_U140[12] = 0;
        return 1;
    }
    else if (iParam0 == 5)
    {
        l_U140[11] = 0;
        return 1;
    }
    else if (iParam0 == 1)
    {
        return 1;
    };;;;;;;;;;;;;
    return 0;
}

int sub_17045(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 5;
        case 7: return 600;
        case 9: return 1500;
        case 12: return 1200;
        case 13: return 2500;
        case 10: return 1200;
        case 11: return 2500;
        case 14: return 3500;
        case 15: return 5000;
        case 16: return 8500;
        case 17: return 6000;
        case 4: return 1000;
        case 5: return 500;
        case 18: return 15000;
    }
    return -1;
}

int sub_17266(int iParam0)
{
    int iVar3;

    if (IS_PLAYER_PLAYING( sub_708() ))
    {
        STORE_SCORE( sub_708(), ref iVar3 );
        if (iVar3 >= iParam0)
        {
            ADD_SCORE( sub_708(), -1 * iParam0 );
            return 1;
        }
    }
    return 0;
}

void sub_17392(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 1:
        Result = "WEAPON_PICKUP_BASEBALL_BAT";
        break;
        case 7:
        Result = "WEAPON_PICKUP_HANDGUN";
        break;
        case 9:
        Result = "WEAPON_PICKUP_DESERT_EAGLE";
        break;
        case 12:
        Result = "WEAPON_PICKUP_UZI";
        break;
        case 13:
        Result = "WEAPON_PICKUP_MP5K";
        break;
        case 10:
        Result = "WEAPON_PICKUP_SHOTGUN";
        break;
        case 11:
        Result = "WEAPON_PICKUP_BARETTA";
        break;
        case 14:
        Result = "WEAPON_PICKUP_AK47";
        break;
        case 15:
        Result = "WEAPON_PICKUP_M4";
        break;
        case 16:
        Result = "WEAPON_PICKUP_SNIPER_RIFLE";
        break;
        case 17:
        Result = "WEAPON_PICKUP_SNIPER_RIFLE";
        break;
        case 4:
        Result = "WEAPON_PICKUP_GRENADE";
        break;
        case 5:
        Result = "WEAPON_PICKUP_MOLOTOV";
        break;
        case 18:
        Result = "WEAPON_PICKUP_BARETTA";
        break;
    }
    return Result;
}

void sub_18010(unknown uParam0)
{
    char[16] Result;

    switch (uParam0)
    {
        case 1:
        StrCopy( ref Result, "GL_BBAT4", 16 );
        break;
        case 7:
        StrCopy( ref Result, "GL_PIST4", 16 );
        break;
        case 9:
        StrCopy( ref Result, "GL_DEAGLE4", 16 );
        break;
        case 12:
        StrCopy( ref Result, "GL_UZI4", 16 );
        break;
        case 13:
        StrCopy( ref Result, "GL_MP54", 16 );
        break;
        case 10:
        StrCopy( ref Result, "GL_SHOT4", 16 );
        break;
        case 11:
        StrCopy( ref Result, "GL_BARET4", 16 );
        break;
        case 14:
        StrCopy( ref Result, "GL_AK474", 16 );
        break;
        case 15:
        StrCopy( ref Result, "GL_M44", 16 );
        break;
        case 16:
        StrCopy( ref Result, "GL_SNIPER4", 16 );
        break;
        case 17:
        StrCopy( ref Result, "GL_M40A14", 16 );
        break;
        case 4:
        StrCopy( ref Result, "GL_GREN4", 16 );
        break;
        case 5:
        StrCopy( ref Result, "GL_MOLOTOV4", 16 );
        break;
        case 18:
        StrCopy( ref Result, "GL_RKL4", 16 );
        break;
    }
    return Result;
}

int sub_18716(unknown uParam0)
{
    unknown Result;

    switch (uParam0)
    {
        case 1:
        GET_MAX_AMMO( sub_950(), 1, ref Result );
        return Result;
        case 7:
        GET_MAX_AMMO( sub_950(), 7, ref Result );
        return Result;
        case 9:
        GET_MAX_AMMO( sub_950(), 9, ref Result );
        return Result;
        case 12:
        GET_MAX_AMMO( sub_950(), 12, ref Result );
        return Result;
        case 13:
        GET_MAX_AMMO( sub_950(), 13, ref Result );
        return Result;
        case 10:
        GET_MAX_AMMO( sub_950(), 10, ref Result );
        return Result;
        case 11:
        GET_MAX_AMMO( sub_950(), 11, ref Result );
        return Result;
        case 14:
        GET_MAX_AMMO( sub_950(), 14, ref Result );
        return Result;
        case 15:
        GET_MAX_AMMO( sub_950(), 15, ref Result );
        return Result;
        case 16:
        GET_MAX_AMMO( sub_950(), 16, ref Result );
        return Result;
        case 17:
        GET_MAX_AMMO( sub_950(), 17, ref Result );
        return Result;
        case 4:
        GET_MAX_AMMO( sub_950(), 4, ref Result );
        return Result;
        case 5:
        GET_MAX_AMMO( sub_950(), 5, ref Result );
        return Result;
        case 18:
        GET_MAX_AMMO( sub_950(), 18, ref Result );
        return Result;
    }
    return -1;
}

int sub_19222(unknown uParam0)
{
    switch (uParam0)
    {
        case 1: return 5;
        case 7: return 35;
        case 9: return 100;
        case 12: return 100;
        case 13: return 150;
        case 10: return 100;
        case 11: return 200;
        case 14: return 80;
        case 15: return 100;
        case 16: return 500;
        case 17: return 800;
        case 4: return 1000;
        case 5: return 500;
        case 18: return 5000;
    }
    return -1;
}

void sub_19921(int iParam0)
{
    unknown uVar3;

    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    DISPLAY_CASH( 1 );
    if (l_U6)
    {
        OPEN_SEQUENCE_TASK( ref uVar3 );
        TASK_PLAY_ANIM( 0, sub_19976( iParam0->_fU0 ), "missgunlockup", 8.00000000, 0, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( uVar3 );
        TASK_PERFORM_SEQUENCE( sub_950(), uVar3 );
        CLEAR_SEQUENCE_TASK( uVar3 );
        l_U6 = 0;
    }
    if (l_U5)
    {
        if (IS_CHAR_PLAYING_ANIM( sub_950(), "missgunlockup", sub_19976( iParam0->_fU0 ) ))
        {
            GET_CHAR_ANIM_CURRENT_TIME( sub_950(), "missgunlockup", sub_19976( iParam0->_fU0 ), ref l_U15 );
            if (l_U15 > (sub_20587( iParam0->_fU0 )))
            {
                if (DOES_OBJECT_EXIST( iParam0->_fU20 ))
                {
                    if (IS_PLAYER_PLAYING( sub_708() ))
                    {
                        SET_OBJECT_VISIBLE( iParam0->_fU20, 1 );
                        if (HAS_CHAR_GOT_WEAPON( sub_950(), iParam0->_fU0 ))
                        {
                            REMOVE_WEAPON_FROM_CHAR( sub_950(), iParam0->_fU0 );
                        }
                        SET_CURRENT_CHAR_WEAPON( sub_950(), 0, 0 );
                        l_U5 = 0;
                    }
                }
            }
        }
    }
    l_U14 = 0.00000000;
    MARK_MODEL_AS_NO_LONGER_NEEDED( -2001451511 );
    return;
}

void sub_19976(unknown uParam0)
{
    string Result;

    switch (uParam0)
    {
        case 1:
        Result = "grenade_outro";
        break;
        case 7:
        Result = "pistol_outro";
        break;
        case 9:
        Result = "pistol_outro";
        break;
        case 12:
        Result = "uzi_outro";
        break;
        case 13:
        Result = "pistol_outro";
        break;
        case 10:
        Result = "shotgun_outro";
        break;
        case 11:
        Result = "shotgun_outro";
        break;
        case 14:
        Result = "rifle_outro";
        break;
        case 15:
        Result = "rifle_outro";
        break;
        case 16:
        Result = "rifle_outro";
        break;
        case 17:
        Result = "rifle_outro";
        break;
        case 4:
        Result = "grenade_outro";
        break;
        case 5:
        Result = "grenade_outro";
        break;
        case 18:
        Result = "rpg_outro";
        break;
    }
    return Result;
}

void sub_20587(unknown uParam0)
{
    float Result;

    switch (uParam0)
    {
        case 1:
        Result = 0.44000000;
        break;
        case 7:
        Result = 0.51000000;
        break;
        case 9:
        Result = 0.51000000;
        break;
        case 12:
        Result = 0.51000000;
        break;
        case 13:
        Result = 0.51000000;
        break;
        case 10:
        Result = 0.36000000;
        break;
        case 11:
        Result = 0.36000000;
        break;
        case 14:
        Result = 0.40000000;
        break;
        case 15:
        Result = 0.40000000;
        break;
        case 16:
        Result = 0.40000000;
        break;
        case 17:
        Result = 0.40000000;
        break;
        case 4:
        Result = 0.44000000;
        break;
        case 5:
        Result = 0.44000000;
        break;
        case 18:
        Result = 0.37000000;
        break;
    }
    return Result;
}

int sub_21127(int iParam0)
{
    if (iParam0 == 7)
    {
        l_U418 = l_U417;
        GIVE_WEAPON_TO_CHAR( sub_950(), 9, l_U418, 0 );
        return 1;
    }
    else if (iParam0 == 9)
    {
        l_U418 = l_U417;
        GIVE_WEAPON_TO_CHAR( sub_950(), 7, l_U417, 0 );
        return 1;
    }
    else if (iParam0 == 12)
    {
        l_U419 = l_U417;
        GIVE_WEAPON_TO_CHAR( sub_950(), 13, l_U419, 0 );
        return 1;
    }
    else if (iParam0 == 13)
    {
        l_U419 = l_U417;
        GIVE_WEAPON_TO_CHAR( sub_950(), 12, l_U419, 0 );
        return 1;
    }
    else if (iParam0 == 10)
    {
        l_U420 = l_U417;
        GIVE_WEAPON_TO_CHAR( sub_950(), 11, l_U420, 0 );
        return 1;
    }
    else if (iParam0 == 11)
    {
        l_U420 = l_U417;
        GIVE_WEAPON_TO_CHAR( sub_950(), 10, l_U420, 0 );
        return 1;
    }
    else if (iParam0 == 14)
    {
        l_U421 = l_U417;
        GIVE_WEAPON_TO_CHAR( sub_950(), 15, l_U421, 0 );
        return 1;
    }
    else if (iParam0 == 15)
    {
        l_U421 = l_U417;
        GIVE_WEAPON_TO_CHAR( sub_950(), 14, l_U421, 0 );
        return 1;
    }
    else if (iParam0 == 16)
    {
        l_U422 = l_U417;
        GIVE_WEAPON_TO_CHAR( sub_950(), 17, l_U422, 0 );
        return 1;
    }
    else if (iParam0 == 17)
    {
        l_U422 = l_U417;
        GIVE_WEAPON_TO_CHAR( sub_950(), 16, l_U422, 0 );
        return 1;
    }
    else if (iParam0 == 4)
    {
        l_U423 = l_U417;
        GIVE_WEAPON_TO_CHAR( sub_950(), 5, l_U423, 0 );
        return 1;
    }
    else if (iParam0 == 5)
    {
        l_U423 = l_U417;
        GIVE_WEAPON_TO_CHAR( sub_950(), 4, l_U423, 0 );
        return 1;
    }
    else if (iParam0 == 1)
    {
        GIVE_WEAPON_TO_CHAR( sub_950(), 3, 1, 0 );
        return 1;
    };;;;;;;;;;;;;
    return 0;
}

void sub_21747(unknown uParam0)
{
    if (l_U7)
    {
        SET_CAM_ACTIVE( l_U8, 0 );
        SET_CAM_PROPAGATE( l_U8, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        END_CAM_COMMANDS( ref uParam0 );
        DESTROY_CAM( l_U8 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_PLAYER_CONTROL( sub_708(), 1 );
        sub_659();
        l_U7 = 0;
    }
    return;
}

int sub_22092(unknown uParam0, unknown uParam1)
{
    int iVar4;

    GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    if (iVar4 == 7)
    {
        return 1;
    }
    return 0;
}

int sub_22250(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_7085( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_7085( "\n speech is not playing" );
    }
    return 0;
}

// Seems to create multiple chars for this
void sub_23566()
{
    while ((sub_23610( l_U358[3]._fU0, l_U358[3]._fU4, l_U358[3]._fU8, 2.00000000 )) || ((sub_23610( l_U358[2]._fU0, l_U358[2]._fU4, l_U358[2]._fU8, 2.00000000 )) || (NOT (sub_23610( l_U358[1]._fU0, l_U358[1]._fU4, l_U358[1]._fU8, 2.00000000 )))))
    {
        WAIT( 0 );
    }

    if (NOT l_U184)
    {
        SET_RELATIONSHIP( 5, 28, 0 );
        CREATE_CHAR( 7, l_U124, l_U358[1]._fU0, l_U358[1]._fU4, l_U358[1]._fU8, ref l_U121, 1 );
        SET_AMBIENT_VOICE_NAME( l_U121, " M_Y_GTRI_LO_01_GANG_01" );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U196 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U121, l_U192 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U121 );

        CREATE_CHAR( 7, l_U124, l_U358[2]._fU0, l_U358[2]._fU4, l_U358[2]._fU8, ref l_U122, 1 );
        SET_AMBIENT_VOICE_NAME( l_U122, "M_Y_GTRI_LO_02_GANG_01" );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U197 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U122, l_U192 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U122 );

        CREATE_CHAR( 7, l_U124, l_U358[3]._fU0, l_U358[3]._fU4, l_U358[3]._fU8, ref l_U123, 1 );
        SET_AMBIENT_VOICE_NAME( l_U123, " M_Y_GTRI_LO_01_GANG_01" );
        LOAD_COMBAT_DECISION_MAKER( 3, ref l_U198 );
        SET_ROOM_FOR_CHAR_BY_NAME( l_U123, l_U192 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U123 );

        if (NOT (IS_CHAR_INJURED( l_U121 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U121, 28 );
            GIVE_WEAPON_TO_CHAR( l_U121, 11, 150, 0 );
            SET_CHAR_HEADING( l_U121, 180.00000000 );
            SET_COMBAT_DECISION_MAKER( l_U121, l_U196 );
            TASK_COMBAT( l_U121, sub_950() );
        }

        if (NOT (IS_CHAR_INJURED( l_U122 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U122, 28 );
            GIVE_WEAPON_TO_CHAR( l_U122, 13, 150, 0 );
            SET_CHAR_HEADING( l_U122, 180.00000000 );
            SET_COMBAT_DECISION_MAKER( l_U122, l_U197 );
            TASK_COMBAT( l_U122, sub_950() );
        }

        if (NOT (IS_CHAR_INJURED( l_U123 )))
        {
            SET_CHAR_RELATIONSHIP_GROUP( l_U123, 28 );
            GIVE_WEAPON_TO_CHAR( l_U123, 11, 150, 0 );
            SET_CHAR_HEADING( l_U123, 180.00000000 );
            SET_COMBAT_DECISION_MAKER( l_U123, l_U198 );
            TASK_COMBAT( l_U123, sub_950() );
        }
        if (NOT (IS_CHAR_INJURED( l_U120 )))
        {
            ;
        }
        l_U184 = 1;
    }
    else
    {
        sub_24490();
    }
    return;
}

int sub_23610(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_24490()
{
    if (NOT l_U185)
    {
        if (NOT (IS_CHAR_INJURED( l_U121 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U121 );
            SET_COMBAT_DECISION_MAKER( l_U121, l_U196 );
            SET_CHAR_RELATIONSHIP( l_U121, 5, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U122 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U122 );
            SET_COMBAT_DECISION_MAKER( l_U122, l_U197 );
            SET_CHAR_RELATIONSHIP( l_U122, 5, 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U123 )))
        {
            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U122 );
            SET_COMBAT_DECISION_MAKER( l_U122, l_U198 );
            SET_CHAR_RELATIONSHIP( l_U122, 5, 0 );
            CLEAR_SEQUENCE_TASK( l_U342 );
        }
        l_U185 = 1;
    }
    return;
}

