void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U100 = 0;
    l_U101 = 0;
    l_U102 = 0;
    l_U103 = 1;
    l_U104 = 0;
    l_U118 = 0;
    l_U121 = "amb@drugd_sell";
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_95();
    }
    WAIT( 0 );
    l_U105 = l_U122;
    if (DOES_CHAR_EXIST( l_U105 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U105 )))
        {
            if (IS_CHAR_USING_ANY_SCENARIO( l_U105 ))
            {
                if (IS_CHAR_USING_SCENARIO( l_U105, "Scenario_SellingDrugs" ))
                {
                    SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED( l_U105, 1 );
                    GET_CHAR_COORDINATES( l_U105, ref l_U110._fU0, ref l_U110._fU4, ref l_U110._fU8 );
                }
                else
                {
                    l_U103 = 0;
                }
            }
            else
            {
                l_U103 = 0;
            }
        }
        else
        {
            l_U103 = 0;
        }
    }
    else
    {
        l_U103 = 0;
    }
    while (l_U103)
    {
        WAIT( 0 );
        if (sub_424())
        {
            switch (l_U100)
            {
                case 0:
                sub_699();
                break;
                case 1:
                sub_774();
                break;
                default: break;
            }
        }
        else
        {
            l_U103 = 0;
        }
        sub_2758();
    }
    sub_95();
    return;
}

void sub_95()
{
    if (NOT (IS_CHAR_DEAD( l_U105 )))
    {
        CLEAR_CHAR_SECONDARY_TASK( l_U105 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U105 );
    l_U105 = nil;
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U106 );
    l_U106 = nil;
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U107 );
    REMOVE_ANIMS( l_U121 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_424()
{
    if (DOES_CHAR_EXIST( l_U105 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U105 )))
        {
            if ((NOT sub_481()) AND (NOT (IS_CHAR_IN_ANY_CAR( l_U105 ))))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_481()
{
    int Result;

    Result = 0;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM_min" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubBM2" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubHC2" )) >= 1)
    {
        Result = 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambNightclubM92" )) >= 1)
    {
        Result = 1;
    }
    return Result;
}

void sub_699()
{
    REQUEST_ANIMS( l_U121 );
    if (NOT (HAVE_ANIMS_LOADED( l_U121 )))
    {
        REQUEST_ANIMS( l_U121 );
    }
    else
    {
        l_U100 = 1;
    }
    return;
}

void sub_774()
{
    if ((NOT (l_U101 == 3)) AND (NOT (l_U101 == 2)))
    {
        if (IS_PED_IN_COMBAT( l_U105 ))
        {
            l_U101 = 2;
        }
    }
    switch (l_U101)
    {
        case 0:
        sub_872();
        break;
        case 1:
        sub_1504();
        break;
        case 2:
        l_U101 = 3;
        break;
        case 3: break;
    }
    return;
}

void sub_872()
{
    if (sub_881())
    {
        if (sub_1146())
        {
            l_U101 = 1;
            l_U102 = 0;
        }
    }
    return;
}

int sub_881()
{
    int iVar2;

    iVar2 = nil;
    if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_894() )))
    {
        if (NOT (IS_WANTED_LEVEL_GREATER( sub_948(), 0 )))
        {
            GET_CHAR_COORDINATES( l_U105, ref l_U113._fU0, ref l_U113._fU4, ref l_U113._fU8 );
            BEGIN_CHAR_SEARCH_CRITERIA();
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 26 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 27 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 28 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 29 );
            SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE( 30 );
            END_CHAR_SEARCH_CRITERIA();
            GET_CLOSEST_CHAR( l_U113._fU0, l_U113._fU4, l_U113._fU8, 10.00000000, 1, 0, ref iVar2 );
            if (iVar2 == nil)
            {
                return 1;
            }
        }
    }
    iVar2 = nil;
    return 0;
}

void sub_894()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_948()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_1146()
{
    GET_GAME_TIMER( ref l_U116 );
    l_U117 = l_U116 - l_U119;
    if (l_U117 >= 10000)
    {
        GET_CHAR_COORDINATES( l_U105, ref l_U113._fU0, ref l_U113._fU4, ref l_U113._fU8 );
        BEGIN_CHAR_SEARCH_CRITERIA();
        SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 26 );
        SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 27 );
        SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 28 );
        SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 29 );
        SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 30 );
        END_CHAR_SEARCH_CRITERIA();
        l_U106 = nil;
        GET_CLOSEST_CHAR( l_U113._fU0, l_U113._fU4, l_U113._fU8, 5.00000000, 1, 0, ref l_U106 );
        if (NOT (l_U106 == nil))
        {
            if (sub_1346( l_U106 ))
            {
                SET_CHAR_AS_MISSION_CHAR( l_U106 );
                SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U106, 0 );
                l_U104 = 0;
                return 1;
            }
            else
            {
                l_U106 = nil;
            }
        }
    }
    l_U106 = nil;
    return 0;
}

int sub_1346(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            uParam0 = nil;
            return 1;
        }
    }
    uParam0 = nil;
    return 0;
}

void sub_1504()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( l_U106 )))
    {
        switch (l_U102)
        {
            case 0:
            OPEN_SEQUENCE_TASK( ref l_U109 );
            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U106 );
            CLOSE_SEQUENCE_TASK( l_U109 );
            TASK_PERFORM_SEQUENCE( l_U105, l_U109 );
            CLEAR_SEQUENCE_TASK( l_U109 );
            SAY_AMBIENT_SPEECH( l_U105, "DRUGS_SELL", 1, 1, 0 );
            GENERATE_RANDOM_INT_IN_RANGE( 0, 101, ref iVar5 );
            if ((NOT l_U104) AND ((NOT (IS_PED_HOLDING_AN_OBJECT( l_U106 ))) AND (iVar5 < 75)))
            {
                l_U102 = 2;
            }
            else
            {
                l_U102 = 4;
            }
            break;
            case 2:
            GET_SCRIPT_TASK_STATUS( l_U105, 29, ref l_U120 );
            if (l_U120 == 7)
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U105, 0.00000000, 0.50000000, 0.00000000, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                OPEN_SEQUENCE_TASK( ref l_U109 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, uVar2._fU0, uVar2._fU4, uVar2._fU8, 2, 8000, 1.00000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U105 );
                CLOSE_SEQUENCE_TASK( l_U109 );
                TASK_PERFORM_SEQUENCE( l_U106, l_U109 );
                CLEAR_SEQUENCE_TASK( l_U109 );
                OPEN_SEQUENCE_TASK( ref l_U109 );
                TASK_LOOK_AT_CHAR( 0, l_U106, 999999, 0 );
                TASK_STAND_STILL( 0, -2 );
                CLOSE_SEQUENCE_TASK( l_U109 );
                TASK_PERFORM_SEQUENCE( l_U105, l_U109 );
                CLEAR_SEQUENCE_TASK( l_U109 );
                l_U102 = 1;
            }
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( l_U106, 29, ref l_U120 );
            if (l_U120 == 7)
            {
                if (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U106, l_U105, 2.00000000, 2.00000000, 2.00000000, 0 ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U109 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U105 );
                    if (HAVE_ANIMS_LOADED( l_U121 ))
                    {
                        TASK_PLAY_ANIM( 0, "buy_drugs", l_U121, 12.00000000, 0, 0, 0, 0, -1 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U109 );
                    TASK_PERFORM_SEQUENCE( l_U106, l_U109 );
                    CLEAR_SEQUENCE_TASK( l_U109 );
                    OPEN_SEQUENCE_TASK( ref l_U109 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U106 );
                    if (HAVE_ANIMS_LOADED( l_U121 ))
                    {
                        TASK_PLAY_ANIM( 0, "sell_drugs", l_U121, 12.00000000, 0, 0, 0, 0, -1 );
                    }
                    CLOSE_SEQUENCE_TASK( l_U109 );
                    TASK_PERFORM_SEQUENCE( l_U105, l_U109 );
                    CLEAR_SEQUENCE_TASK( l_U109 );
                    l_U102 = 3;
                }
                else
                {
                    l_U102 = 5;
                }
            }
            else if (NOT (LOCATE_CHAR_ON_FOOT_CHAR_3D( l_U106, l_U105, 5.00000000 + 2.00000000, 5.00000000 + 2.00000000, 10.00000000, 0 )))
            {
                l_U102 = 5;
            }
            break;
            case 3:
            GET_SCRIPT_TASK_STATUS( l_U106, 29, ref l_U120 );
            if (l_U120 == 7)
            {
                GET_SCRIPT_TASK_STATUS( l_U105, 29, ref l_U120 );
                if (l_U120 == 7)
                {
                    SAY_AMBIENT_SPEECH( l_U105, "DRUGS_SELL", 1, 1, 0 );
                    l_U102 = 5;
                }
            }
            break;
            case 4:
            if (NOT (IS_AMBIENT_SPEECH_PLAYING( l_U105 )))
            {
                SAY_AMBIENT_SPEECH( l_U106, "DRUGS_REJECT", 1, 1, 0 );
                l_U102 = 6;
            }
            break;
            case 5:
            OPEN_SEQUENCE_TASK( ref l_U109 );
            TASK_WANDER_STANDARD( 0 );
            CLOSE_SEQUENCE_TASK( l_U109 );
            TASK_PERFORM_SEQUENCE( l_U106, l_U109 );
            CLEAR_SEQUENCE_TASK( l_U109 );
            l_U102 = 6;
            break;
            case 6:
            sub_2621();
            GET_GAME_TIMER( ref l_U119 );
            break;
        }
    }
    else
    {
        sub_2621();
    }
    return;
}

void sub_2621()
{
    CLEAR_CHAR_TASKS( l_U105 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U106 );
    l_U106 = nil;
    l_U101 = 0;
    return;
}

void sub_2758()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        l_U103 = 0;
    }
    return;
}

