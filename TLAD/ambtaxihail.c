void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U7 = 0;
    l_U16 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_61();
    }
    while (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
    {
        WAIT( 0 );
        sub_105();
        if (IS_PLAYER_PLAYING( sub_186() ))
        {
            switch (l_U5)
            {
                case 0:
                GENERATE_RANDOM_INT_IN_RANGE( 0, 12, ref l_U24 );
                if (GET_MISSION_FLAG() == 0)
                {
                    if (l_U24 == 7)
                    {
                        l_U5 = 1;
                    }
                    else
                    {
                        sub_61();
                    }
                }
                else
                {
                    sub_61();
                }
                break;
                case 1:
                sub_647( l_U28 );
                l_U5 = 2;
                break;
                case 2:
                sub_888();
                break;
                case 3:
                sub_1412();
                sub_3257( l_U27 );
                break;
                case 4:
                sub_3257( l_U27 );
                if (IS_VEH_DRIVEABLE( l_U27 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U26 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U25 )))
                        {
                            if (IS_CHAR_IN_CAR( l_U25, l_U27 ))
                            {
                                SET_TAXI_LIGHTS( l_U27, 0 );
                                SET_CHAR_KEEP_TASK( l_U26, 1 );
                                TASK_CAR_DRIVE_WANDER( l_U26, l_U27, 8, 6 );
                                l_U5 = 5;
                            }
                        }
                    }
                }
                break;
                case 5:
                sub_3510();
                break;
                case 6:
                sub_3571();
                break;
            }
        }
    }
    sub_61();
    return;
}

void sub_61()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_105()
{
    if (DOES_CHAR_EXIST( l_U25 ))
    {
        if (IS_CHAR_DEAD( l_U25 ))
        {
            l_U5 = 6;
        }
        if (IS_CHAR_FATALLY_INJURED( l_U25 ))
        {
            l_U5 = 6;
        }
        if (IS_CHAR_INJURED( l_U25 ))
        {
            l_U5 = 6;
        }
        if (IS_PLAYER_TARGETTING_CHAR( sub_186(), l_U25 ))
        {
            l_U5 = 6;
        }
        if (IS_CHAR_SHOOTING_IN_AREA( sub_236(), l_U8._fU0 - 15, l_U8._fU4 - 15, l_U8._fU0 + 15, l_U8._fU4 + 15, 0 ))
        {
            l_U5 = 6;
        }
    }
    if (NOT (IS_CAR_DEAD( l_U27 )))
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U27 )))
        {
            l_U5 = 6;
        }
    }
    if (DOES_CHAR_EXIST( l_U26 ))
    {
        if (IS_CHAR_DEAD( l_U26 ))
        {
            l_U5 = 6;
        }
        if (IS_CHAR_FATALLY_INJURED( l_U26 ))
        {
            l_U5 = 6;
        }
        if (IS_CHAR_INJURED( l_U26 ))
        {
            l_U5 = 6;
        }
        if (IS_CHAR_SHOOTING_IN_AREA( sub_236(), l_U8._fU0 - 15, l_U8._fU4 - 15, l_U8._fU0 + 15, l_U8._fU4 + 15, 0 ))
        {
            l_U5 = 6;
        }
    }
    return;
}

void sub_186()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_236()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_647(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    l_U8._fU0 = uParam0._fU4[0]._fU0;
    l_U8._fU4 = uParam0._fU4[0]._fU4;
    l_U8._fU8 = uParam0._fU4[0]._fU8;
    l_U11 = uParam0._fU68[0];
    while (NOT (GET_CLOSEST_CAR_NODE_WITH_HEADING( l_U8._fU0, l_U8._fU4, l_U8._fU8, ref l_U18._fU0, ref l_U18._fU4, ref l_U18._fU8, ref l_U21 )))
    {
        WAIT( 0 );
    }
    sub_765();
    l_U15 = l_U21;
    l_U11 = l_U21 - 180;
    if (l_U11 < 0)
    {
        l_U11 += 360;
    }
    REQUEST_ANIMS( "AMB@TAXI_HAIL_M" );
    REQUEST_ANIMS( "AMB@TAXI_HAIL_F" );
    return;
}

void sub_765()
{
    return;
}

void sub_888()
{
    switch (l_U7)
    {
        case 0:
        if (l_U25 == nil)
        {
            GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U8._fU0, l_U8._fU4, l_U8._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U25 );
        }
        if (l_U25 != nil)
        {
            if (NOT (IS_CHAR_INJURED( l_U25 )))
            {
                if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U25 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U25 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U25, 0 );
                    l_U7 = 1;
                }
                else
                {
                    l_U25 = nil;
                }
            }
            else
            {
                l_U25 = nil;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U25 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U25, l_U8._fU0, l_U8._fU4, l_U8._fU8, 2, -1, 0.00000000 );
            l_U22 = 0;
            l_U7 = 2;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U25 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U25, 27, ref l_U22 );
            if (l_U22 == 7)
            {
                l_U7 = 3;
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U25 )))
        {
            TASK_ACHIEVE_HEADING( l_U25, l_U11 );
            l_U22 = 0;
            l_U7 = 4;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U25 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U25, 19, ref l_U22 );
            if (l_U22 == 7)
            {
                l_U7 = 5;
            }
        }
        break;
        case 5:
        if (NOT (IS_CHAR_INJURED( l_U25 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_2D( l_U25, l_U8._fU0, l_U8._fU4, 2.00000000, 2.00000000, 0 ))
            {
                TASK_START_SCENARIO_IN_PLACE( l_U25, "Scenario_WaitingForTaxi", -1082130432 );
                l_U5 = 3;
            }
        }
        break;
    }
    return;
}

void sub_1412()
{
    switch (l_U6)
    {
        case 0:
        if (l_U27 == nil)
        {
            GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( l_U8._fU0, l_U8._fU4, l_U8._fU8, 20.00000000, -956048545, 0, ref l_U27 );
        }
        if (l_U27 != nil)
        {
            if (IS_VEH_DRIVEABLE( l_U27 ))
            {
                GET_NUMBER_OF_PASSENGERS( l_U27, ref l_U16 );
                if (l_U16 == 0)
                {
                    if (sub_1576( l_U27 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U27 ))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U27 );
                            SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U27, 0 );
                        }
                        l_U6 = 1;
                    }
                    else
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U27 );
                        l_U27 = nil;
                    }
                }
                else
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U27 );
                    l_U27 = nil;
                }
            }
        }
        break;
        case 1:
        if (IS_VEH_DRIVEABLE( l_U27 ))
        {
            GET_DRIVER_OF_CAR( l_U27, ref l_U26 );
            if (l_U26 != sub_236())
            {
                if (NOT (IS_CHAR_DEAD( l_U26 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U26 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U26, 0 );
                    l_U6 = 2;
                }
                else
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U27 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U26 );
                    if (NOT (IS_CHAR_INJURED( l_U25 )))
                    {
                        TASK_START_SCENARIO_IN_PLACE( l_U25, "Scenario_WaitingForTaxi", -1082130432 );
                    }
                    l_U26 = nil;
                    l_U27 = nil;
                    l_U6 = 0;
                }
            }
        }
        break;
        case 2:
        if ((HAVE_ANIMS_LOADED( "AMB@TAXI_HAIL_F" )) AND (HAVE_ANIMS_LOADED( "AMB@TAXI_HAIL_M" )))
        {
            if (IS_VEH_DRIVEABLE( l_U27 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U26 )))
                {
                    SET_TAXI_LIGHTS( l_U27, 1 );
                    TASK_CAR_DRIVE_TO_COORD( l_U26, l_U27, l_U8._fU0, l_U8._fU4, l_U8._fU8, 5.00000000, 0, -956048545, 0, 3.00000000, 15 );
                }
            }
            l_U6 = 3;
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U25 )))
        {
            if (IS_VEH_DRIVEABLE( l_U27 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U25, l_U27, 20.00000000, 20.00000000, 20.00000000, 0 ))
                {
                    if (sub_2443() == 1)
                    {
                        if (IS_CHAR_MALE( l_U25 ))
                        {
                            TASK_PLAY_ANIM( l_U25, "HAIL_LEFT", "AMB@TAXI_HAIL_M", 8.00000000, 0, 1, 1, 0, -2 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM( l_U25, "HAIL_LEFT", "AMB@TAXI_HAIL_F", 8.00000000, 0, 1, 1, 0, -2 );
                        }
                        l_U6 = 4;
                    }
                    else if (sub_2443() == 2)
                    {
                        if (IS_CHAR_MALE( l_U25 ))
                        {
                            TASK_PLAY_ANIM( l_U25, "HAIL_RIGHT", "AMB@TAXI_HAIL_M", 8.00000000, 0, 1, 1, 0, -2 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM( l_U25, "HAIL_RIGHT", "AMB@TAXI_HAIL_F", 8.00000000, 0, 1, 1, 0, -2 );
                        }
                        l_U6 = 4;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U25 )))
                {
                    TASK_START_SCENARIO_IN_PLACE( l_U25, "Scenario_WaitingForTaxi", -1082130432 );
                }
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U27 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U26 );
                l_U26 = nil;
                l_U27 = nil;
                l_U6 = 0;;
            }
        }
        break;
        case 4:
        if (IS_VEH_DRIVEABLE( l_U27 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U26 )))
            {
                if (LOCATE_CAR_2D( l_U27, l_U8._fU0, l_U8._fU4, 7.50000000, 7.50000000, 0 ))
                {
                    TASK_CAR_MISSION( l_U26, l_U27, 0, 5, 0.00000000, 0, 2, 20 );
                    l_U6 = 5;
                }
                if (NOT (LOCATE_CAR_2D( l_U27, l_U8._fU0, l_U8._fU4, 30.00000000, 30.00000000, 0 )))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U27 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U26 );
                    if (NOT (IS_CHAR_INJURED( l_U25 )))
                    {
                        TASK_START_SCENARIO_IN_PLACE( l_U25, "Scenario_WaitingForTaxi", -1082130432 );
                    }
                    l_U6 = 0;
                }
            }
        }
        break;
        case 5:
        if (IS_VEH_DRIVEABLE( l_U27 ))
        {
            GET_CAR_SPEED( l_U27, ref l_U17 );
            if (l_U17 < 2.00000000)
            {
                if (NOT (IS_CHAR_INJURED( l_U25 )))
                {
                    CLEAR_CHAR_TASKS( l_U25 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_ENTER_CAR_AS_PASSENGER( l_U25, l_U27, -2, 1 );
                    l_U5 = 4;
                }
            }
        }
        break;
    }
    return;
}

int sub_1576(unknown uParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_HEADING( uParam0, ref fVar3 );
        fVar4 = l_U15 - 90;
        fVar5 = l_U15 + 89;
        if ((fVar4 < 0) || (fVar5 > 360))
        {
            if (fVar5 > 360)
            {
                fVar5 -= 360;
                if (((fVar3 > fVar4) AND (fVar3 < l_U15)) || (((fVar3 < 360) AND (fVar3 > l_U15)) || ((fVar3 > 0) AND (fVar3 < fVar5))))
                {
                    l_U23 = 1;
                }
                else
                {
                    l_U23 = 0;
                }
            }
            if (fVar4 < 0)
            {
                fVar4 += 360;
                if (((fVar3 > l_U15) AND (fVar3 < fVar5)) || (((fVar3 < l_U15) AND (fVar3 > 0)) || ((fVar3 < 360) AND (fVar3 > fVar4))))
                {
                    l_U23 = 1;
                }
                else
                {
                    l_U23 = 0;
                }
            }
        }
        else if ((fVar3 < fVar5) AND (fVar3 > fVar4))
        {
            l_U23 = 1;
        }
        else
        {
            l_U23 = 0;
        }
        if (l_U23)
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                if ((LOCATE_CAR_2D( uParam0, l_U8._fU0, l_U8._fU4, 40.00000000, 40.00000000, 0 )) AND ((IS_CAR_PASSENGER_SEAT_FREE( uParam0, 0 )) AND ((IS_CAR_PASSENGER_SEAT_FREE( uParam0, 2 )) AND (IS_CAR_PASSENGER_SEAT_FREE( uParam0, 1 )))))
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

int sub_2443()
{
    float fVar2;

    if (IS_VEH_DRIVEABLE( l_U27 ))
    {
        GET_CAR_COORDINATES( l_U27, ref l_U12._fU0, ref l_U12._fU4, ref l_U12._fU8 );
        GET_HEADING_FROM_VECTOR_2D( l_U8._fU0 - l_U12._fU0, l_U8._fU4 - l_U12._fU4, ref fVar2 );
        if ((fVar2 < 180) AND (fVar2 > 0))
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    return 0;
}

void sub_3257(int iParam0)
{
    int iVar3;

    if ((IS_CHAR_IN_ANY_CAR( sub_236() )) || (IS_CHAR_GETTING_IN_TO_A_CAR( sub_236() )))
    {
        GET_CAR_CHAR_IS_USING( sub_236(), ref iVar3 );
        if (DOES_VEHICLE_EXIST( iVar3 ))
        {
            if (iVar3 == iParam0)
            {
                if (NOT (IS_CHAR_DEAD( l_U25 )))
                {
                    CLEAR_CHAR_TASKS( l_U25 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U25 );
                    l_U25 = nil;
                }
                l_U5 = 6;
            }
        }
    }
    return;
}

void sub_3510()
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U27 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U26 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U25 );
    l_U7 = 0;
    l_U6 = 0;
    l_U5 = 2;
    return;
}

void sub_3571()
{
    if (NOT (IS_CHAR_INJURED( l_U25 )))
    {
        SET_CHAR_KEEP_TASK( l_U25, 1 );
        TASK_COMBAT( l_U25, sub_236() );
    }
    if (NOT (IS_CHAR_INJURED( l_U26 )))
    {
        SET_CHAR_KEEP_TASK( l_U26, 1 );
        TASK_COMBAT( l_U26, sub_236() );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U27 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U26 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U25 );
    l_U27 = nil;
    l_U26 = nil;
    l_U25 = nil;
    l_U7 = 0;
    l_U6 = 0;
    l_U5 = 2;
    return;
}

