// Hailing taxis
// TODO Label later

void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U14 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_45();
    }
    while (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
    {
        WAIT( 0 );
        sub_89();
        if (IS_PLAYER_PLAYING( sub_170() ))
        {
            switch (l_U3)
            {
                case 0:
                GENERATE_RANDOM_INT_IN_RANGE( 0, 12, ref l_U22 );
                if (GET_MISSION_FLAG() == 0)
                {
                    if (l_U22 == 7)
                    {
                        l_U3 = 1;
                    }
                    else
                    {
                        sub_45();
                    }
                }
                else
                {
                    sub_45();
                }
                break;
                case 1:
                sub_631( l_U26 );
                l_U3 = 2;
                break;
                case 2:
                sub_872();
                break;
                case 3:
                sub_1396();
                sub_3241( l_U25 );
                break;
                case 4:
                sub_3241( l_U25 );
                if (IS_VEH_DRIVEABLE( l_U25 ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U24 )))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U23 )))
                        {
                            if (IS_CHAR_IN_CAR( l_U23, l_U25 ))
                            {
                                SET_TAXI_LIGHTS( l_U25, 0 );
                                SET_CHAR_KEEP_TASK( l_U24, 1 );
                                TASK_CAR_DRIVE_WANDER( l_U24, l_U25, 8, 6 );
                                l_U3 = 5;
                            }
                        }
                    }
                }
                break;
                case 5:
                sub_3494();
                break;
                case 6:
                sub_3555();
                break;
            }
        }
    }
    sub_45();
    return;
}

void sub_45()
{
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_89()
{
    if (DOES_CHAR_EXIST( l_U23 ))
    {
        if (IS_CHAR_DEAD( l_U23 ))
        {
            l_U3 = 6;
        }
        if (IS_CHAR_FATALLY_INJURED( l_U23 ))
        {
            l_U3 = 6;
        }
        if (IS_CHAR_INJURED( l_U23 ))
        {
            l_U3 = 6;
        }
        if (IS_PLAYER_TARGETTING_CHAR( sub_170(), l_U23 ))
        {
            l_U3 = 6;
        }
        if (IS_CHAR_SHOOTING_IN_AREA( sub_220(), l_U6._fU0 - 15, l_U6._fU4 - 15, l_U6._fU0 + 15, l_U6._fU4 + 15, 0 ))
        {
            l_U3 = 6;
        }
    }
    if (NOT (IS_CAR_DEAD( l_U25 )))
    {
        if (NOT (IS_VEH_DRIVEABLE( l_U25 )))
        {
            l_U3 = 6;
        }
    }
    if (DOES_CHAR_EXIST( l_U24 ))
    {
        if (IS_CHAR_DEAD( l_U24 ))
        {
            l_U3 = 6;
        }
        if (IS_CHAR_FATALLY_INJURED( l_U24 ))
        {
            l_U3 = 6;
        }
        if (IS_CHAR_INJURED( l_U24 ))
        {
            l_U3 = 6;
        }
        if (IS_CHAR_SHOOTING_IN_AREA( sub_220(), l_U6._fU0 - 15, l_U6._fU4 - 15, l_U6._fU0 + 15, l_U6._fU4 + 15, 0 ))
        {
            l_U3 = 6;
        }
    }
    return;
}

void sub_170()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_220()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_631(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19, unknown uParam20, unknown uParam21, unknown uParam22)
{
    l_U6._fU0 = uParam0._fU4[0]._fU0;
    l_U6._fU4 = uParam0._fU4[0]._fU4;
    l_U6._fU8 = uParam0._fU4[0]._fU8;
    l_U9 = uParam0._fU68[0];
    while (NOT (GET_CLOSEST_CAR_NODE_WITH_HEADING( l_U6._fU0, l_U6._fU4, l_U6._fU8, ref l_U16._fU0, ref l_U16._fU4, ref l_U16._fU8, ref l_U19 )))
    {
        WAIT( 0 );
    }
    sub_749();
    l_U13 = l_U19;
    l_U9 = l_U19 - 180;
    if (l_U9 < 0)
    {
        l_U9 += 360;
    }
    REQUEST_ANIMS( "AMB@TAXI_HAIL_M" );
    REQUEST_ANIMS( "AMB@TAXI_HAIL_F" );
    return;
}

void sub_749()
{
    return;
}

void sub_872()
{
    switch (l_U5)
    {
        case 0:
        if (l_U23 == nil)
        {
            GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U6._fU0, l_U6._fU4, l_U6._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U23 );
        }
        if (l_U23 != nil)
        {
            if (NOT (IS_CHAR_INJURED( l_U23 )))
            {
                if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U23 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U23 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U23, 0 );
                    l_U5 = 1;
                }
                else
                {
                    l_U23 = nil;
                }
            }
            else
            {
                l_U23 = nil;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U23 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U23, l_U6._fU0, l_U6._fU4, l_U6._fU8, 2, -1, 0.00000000 );
            l_U20 = 0;
            l_U5 = 2;
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U23 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U23, 27, ref l_U20 );
            if (l_U20 == 7)
            {
                l_U5 = 3;
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U23 )))
        {
            TASK_ACHIEVE_HEADING( l_U23, l_U9 );
            l_U20 = 0;
            l_U5 = 4;
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U23 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U23, 19, ref l_U20 );
            if (l_U20 == 7)
            {
                l_U5 = 5;
            }
        }
        break;
        case 5:
        if (NOT (IS_CHAR_INJURED( l_U23 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_2D( l_U23, l_U6._fU0, l_U6._fU4, 2.00000000, 2.00000000, 0 ))
            {
                TASK_START_SCENARIO_IN_PLACE( l_U23, "Scenario_WaitingForTaxi", -1082130432 );
                l_U3 = 3;
            }
        }
        break;
    }
    return;
}

void sub_1396()
{
    switch (l_U4)
    {
        case 0:
        if (l_U25 == nil)
        {
            GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( l_U6._fU0, l_U6._fU4, l_U6._fU8, 20.00000000, -956048545, 0, ref l_U25 );
        }
        if (l_U25 != nil)
        {
            if (IS_VEH_DRIVEABLE( l_U25 ))
            {
                GET_NUMBER_OF_PASSENGERS( l_U25, ref l_U14 );
                if (l_U14 == 0)
                {
                    if (sub_1560( l_U25 ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U25 ))
                        {
                            SET_CAR_AS_MISSION_CAR( l_U25 );
                            SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U25, 0 );
                        }
                        l_U4 = 1;
                    }
                    else
                    {
                        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U25 );
                        l_U25 = nil;
                    }
                }
                else
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U25 );
                    l_U25 = nil;
                }
            }
        }
        break;
        case 1:
        if (IS_VEH_DRIVEABLE( l_U25 ))
        {
            GET_DRIVER_OF_CAR( l_U25, ref l_U24 );
            if (l_U24 != sub_220())
            {
                if (NOT (IS_CHAR_DEAD( l_U24 )))
                {
                    SET_CHAR_AS_MISSION_CHAR( l_U24 );
                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U24, 0 );
                    l_U4 = 2;
                }
                else
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U25 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U24 );
                    if (NOT (IS_CHAR_INJURED( l_U23 )))
                    {
                        TASK_START_SCENARIO_IN_PLACE( l_U23, "Scenario_WaitingForTaxi", -1082130432 );
                    }
                    l_U24 = nil;
                    l_U25 = nil;
                    l_U4 = 0;
                }
            }
        }
        break;
        case 2:
        if ((HAVE_ANIMS_LOADED( "AMB@TAXI_HAIL_F" )) AND (HAVE_ANIMS_LOADED( "AMB@TAXI_HAIL_M" )))
        {
            if (IS_VEH_DRIVEABLE( l_U25 ))
            {
                if (NOT (IS_CHAR_INJURED( l_U24 )))
                {
                    SET_TAXI_LIGHTS( l_U25, 1 );
                    TASK_CAR_DRIVE_TO_COORD( l_U24, l_U25, l_U6._fU0, l_U6._fU4, l_U6._fU8, 5.00000000, 0, -956048545, 0, 3.00000000, 15 );
                }
            }
            l_U4 = 3;
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U23 )))
        {
            if (IS_VEH_DRIVEABLE( l_U25 ))
            {
                if (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U23, l_U25, 20.00000000, 20.00000000, 20.00000000, 0 ))
                {
                    if (sub_2427() == 1)
                    {
                        if (IS_CHAR_MALE( l_U23 ))
                        {
                            TASK_PLAY_ANIM( l_U23, "HAIL_LEFT", "AMB@TAXI_HAIL_M", 8.00000000, 0, 1, 1, 0, -2 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM( l_U23, "HAIL_LEFT", "AMB@TAXI_HAIL_F", 8.00000000, 0, 1, 1, 0, -2 );
                        }
                        l_U4 = 4;
                    }
                    else if (sub_2427() == 2)
                    {
                        if (IS_CHAR_MALE( l_U23 ))
                        {
                            TASK_PLAY_ANIM( l_U23, "HAIL_RIGHT", "AMB@TAXI_HAIL_M", 8.00000000, 0, 1, 1, 0, -2 );
                        }
                        else
                        {
                            TASK_PLAY_ANIM( l_U23, "HAIL_RIGHT", "AMB@TAXI_HAIL_F", 8.00000000, 0, 1, 1, 0, -2 );
                        }
                        l_U4 = 4;
                    }
                }
                else if (NOT (IS_CHAR_INJURED( l_U23 )))
                {
                    TASK_START_SCENARIO_IN_PLACE( l_U23, "Scenario_WaitingForTaxi", -1082130432 );
                }
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U25 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U24 );
                l_U24 = nil;
                l_U25 = nil;
                l_U4 = 0;;
            }
        }
        break;
        case 4:
        if (IS_VEH_DRIVEABLE( l_U25 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U24 )))
            {
                if (LOCATE_CAR_2D( l_U25, l_U6._fU0, l_U6._fU4, 7.50000000, 7.50000000, 0 ))
                {
                    TASK_CAR_MISSION( l_U24, l_U25, 0, 5, 0.00000000, 0, 2, 20 );
                    l_U4 = 5;
                }
                if (NOT (LOCATE_CAR_2D( l_U25, l_U6._fU0, l_U6._fU4, 30.00000000, 30.00000000, 0 )))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U25 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U24 );
                    if (NOT (IS_CHAR_INJURED( l_U23 )))
                    {
                        TASK_START_SCENARIO_IN_PLACE( l_U23, "Scenario_WaitingForTaxi", -1082130432 );
                    }
                    l_U4 = 0;
                }
            }
        }
        break;
        case 5:
        if (IS_VEH_DRIVEABLE( l_U25 ))
        {
            GET_CAR_SPEED( l_U25, ref l_U15 );
            if (l_U15 < 2.00000000)
            {
                if (NOT (IS_CHAR_INJURED( l_U23 )))
                {
                    CLEAR_CHAR_TASKS( l_U23 );
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    TASK_ENTER_CAR_AS_PASSENGER( l_U23, l_U25, -2, 1 );
                    l_U3 = 4;
                }
            }
        }
        break;
    }
    return;
}

int sub_1560(unknown uParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_HEADING( uParam0, ref fVar3 );
        fVar4 = l_U13 - 90;
        fVar5 = l_U13 + 89;
        if ((fVar4 < 0) || (fVar5 > 360))
        {
            if (fVar5 > 360)
            {
                fVar5 -= 360;
                if (((fVar3 > fVar4) AND (fVar3 < l_U13)) || (((fVar3 < 360) AND (fVar3 > l_U13)) || ((fVar3 > 0) AND (fVar3 < fVar5))))
                {
                    l_U21 = 1;
                }
                else
                {
                    l_U21 = 0;
                }
            }
            if (fVar4 < 0)
            {
                fVar4 += 360;
                if (((fVar3 > l_U13) AND (fVar3 < fVar5)) || (((fVar3 < l_U13) AND (fVar3 > 0)) || ((fVar3 < 360) AND (fVar3 > fVar4))))
                {
                    l_U21 = 1;
                }
                else
                {
                    l_U21 = 0;
                }
            }
        }
        else if ((fVar3 < fVar5) AND (fVar3 > fVar4))
        {
            l_U21 = 1;
        }
        else
        {
            l_U21 = 0;
        }
        if (l_U21)
        {
            if (IS_VEH_DRIVEABLE( uParam0 ))
            {
                if ((LOCATE_CAR_2D( uParam0, l_U6._fU0, l_U6._fU4, 40.00000000, 40.00000000, 0 )) AND ((IS_CAR_PASSENGER_SEAT_FREE( uParam0, 0 )) AND ((IS_CAR_PASSENGER_SEAT_FREE( uParam0, 2 )) AND (IS_CAR_PASSENGER_SEAT_FREE( uParam0, 1 )))))
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

int sub_2427()
{
    float fVar2;

    if (IS_VEH_DRIVEABLE( l_U25 ))
    {
        GET_CAR_COORDINATES( l_U25, ref l_U10._fU0, ref l_U10._fU4, ref l_U10._fU8 );
        GET_HEADING_FROM_VECTOR_2D( l_U6._fU0 - l_U10._fU0, l_U6._fU4 - l_U10._fU4, ref fVar2 );
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

void sub_3241(int iParam0)
{
    int iVar3;

    if ((IS_CHAR_IN_ANY_CAR( sub_220() )) || (IS_CHAR_GETTING_IN_TO_A_CAR( sub_220() )))
    {
        GET_CAR_CHAR_IS_USING( sub_220(), ref iVar3 );
        if (DOES_VEHICLE_EXIST( iVar3 ))
        {
            if (iVar3 == iParam0)
            {
                if (NOT (IS_CHAR_DEAD( l_U23 )))
                {
                    CLEAR_CHAR_TASKS( l_U23 );
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U23 );
                    l_U23 = nil;
                }
                l_U3 = 6;
            }
        }
    }
    return;
}

void sub_3494()
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U25 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U24 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U23 );
    l_U5 = 0;
    l_U4 = 0;
    l_U3 = 2;
    return;
}

void sub_3555()
{
    if (NOT (IS_CHAR_INJURED( l_U23 )))
    {
        SET_CHAR_KEEP_TASK( l_U23, 1 );
        TASK_COMBAT( l_U23, sub_220() );
    }
    if (NOT (IS_CHAR_INJURED( l_U24 )))
    {
        SET_CHAR_KEEP_TASK( l_U24, 1 );
        TASK_COMBAT( l_U24, sub_220() );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U25 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U24 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U23 );
    l_U25 = nil;
    l_U24 = nil;
    l_U23 = nil;
    l_U5 = 0;
    l_U4 = 0;
    l_U3 = 2;
    return;
}

