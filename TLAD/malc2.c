void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U6 = 0;
    l_U7 = 0;
    l_U8 = 0;
    l_U9 = 0;
    l_U10 = 0;
    l_U12 = -1;
    l_U124 = 15.00000000;
    l_U125 = 35.00000000;
    l_U126 = 16.00000000;
    l_U127 = 0.00000000;
    l_U133 = 1000.00000000;
    l_U134 = 7500.00000000;
    l_U143 = 1;
    l_U144 = 30.00000000;
    l_U145 = 30.00000000;
    l_U146 = 2.00000000;
    l_U156 = 0.00000000;
    l_U157 = 0.00000000;
    l_U169 = 1;
    l_U170 = 0;
    l_U171 = -1;
    l_U172 = 1;
    l_U173 = -1;
    l_U174 = -1;
    l_U175 = 15.00000000;
    l_U202 = 0;
    l_U203 = -1949702649;
    l_U204 = 2075870698;
    l_U209 = 0.12000000;
    l_U242 = 180.00000000;
    l_U243 = 15;
    l_U244 = 2;
    l_U245 = 7.50000000;
    l_U246 = 0;
    l_U247 = 0;
    l_U248 = 0;
    l_U249 = -1;
    REGISTER_SCRIPT_WITH_AUDIO( 0 );
    if (sub_333( l_U243, l_U244 ))
    {
        l_U216._fU16 = {l_U250._fU4[0]};
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "malcRace" )) < 1)
        {
            if (IS_PLAYER_PLAYING( sub_1074() ))
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_1074(), 0 )))
                {
                    if (HAS_DEATHARREST_EXECUTED())
                    {
                        sub_1148();
                    }
                    while (true)
                    {
                        WAIT( 0 );
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (NOT l_U248)
                            {
                                if (g_U12303)
                                {
                                    sub_1148();
                                }
                            }
                            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1074(), 0 )))
                            {
                                switch (l_U246)
                                {
                                    case 0:
                                    if (sub_1396())
                                    {
                                        l_U246 = 1;
                                    }
                                    break;
                                    case 1:
                                    if (sub_6127())
                                    {
                                        sub_6599();
                                    }
                                    sub_6621();
                                    break;
                                }
                            }
                            else
                            {
                                sub_1148();
                            }
                        }
                        else
                        {
                            sub_1148();
                        }
                    }
                }
                else
                {
                    TERMINATE_THIS_SCRIPT();
                }
            }
            else
            {
                TERMINATE_THIS_SCRIPT();
            }
        }
        else
        {
            TERMINATE_THIS_SCRIPT();
        }
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_333(unknown uParam0, unknown uParam1)
{
    if (sub_342())
    {
        return 0;
    }
    return sub_389( uParam0, uParam1 );
}

int sub_342()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_389(unknown uParam0, int iParam1)
{
    unknown uVar4;

    uVar4 = sub_400( uParam0 );
    if (NOT g_U27953._fU0)
    {
        return 0;
    }
    if (g_U12303)
    {
        return 0;
    }
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U27892[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U27892[uVar4]._fU4)
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10959._fU0, 2 ))
    {
        return 0;
    }
    if (NOT g_U27892[uVar4]._fU24)
    {
        if (sub_702( g_U27892[uVar4]._fU8 ))
        {
            g_U27892[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U27892[uVar4]._fU24)
    {
        return 0;
    }
    if (g_U27892[uVar4]._fU28 == iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_400(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_411( uParam0 )))
    {
        sub_516( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 13;
}

int sub_411(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 13))
    {
        return 0;
    }
    iVar4 = 16;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_516(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

int sub_702(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar6 == uParam0._fU0._fU0) AND (iVar7 == uParam0._fU0._fU4))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_871( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_871(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_1074()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1148()
{
    UNREGISTER_SCRIPT_WITH_AUDIO();
    if ((NOT (IS_CHAR_INJURED( sub_1179() ))) AND (NOT (IS_CHAR_INJURED( l_U216._fU0 ))))
    {
        TASK_FLEE_CHAR_ANY_MEANS( l_U216._fU0, sub_1179(), 250.00000000, -1, 0, 0, 0, 25.00000000 );
        SET_CHAR_KEEP_TASK( l_U216._fU0, 1 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1179()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1396()
{
    unknown uVar2;

    if (sub_1405())
    {
        sub_2154( l_U216._fU16, l_U242, sub_1448( l_U243 ), sub_1778( l_U243 ), ref l_U216, 1 );
        sub_5143( ref l_U216, ref l_U216._fU0, ref l_U216._fU4 );
        ADD_BLIP_FOR_CHAR( l_U216._fU0, ref l_U216._fU100 );
        CHANGE_BLIP_SPRITE( l_U216._fU100, 63 );
        CHANGE_BLIP_DISPLAY( l_U216._fU100, 2 );
        SET_BLIP_AS_FRIENDLY( l_U216._fU100, 1 );
        sub_5516( 15, l_U244 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U216._fU0, 1 );
        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U216._fU4, 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U216._fU0, 1 );
        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U216._fU0, 0 );
        SET_CAR_CAN_BE_VISIBLY_DAMAGED( l_U216._fU4, 0 );
        SET_CHAR_DROWNS_IN_WATER( l_U216._fU0, 0 );
        SET_CHAR_DROWNS_IN_SINKING_VEHICLE( l_U216._fU0, 0 );
        SET_PED_DIES_WHEN_INJURED( l_U216._fU0, 1 );
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U216._fU4, -0.50000000, 0.00000000, 0.00000000, ref l_U216._fU16._fU0, ref l_U216._fU16._fU4, ref l_U216._fU16._fU8 );
        WARP_CHAR_FROM_CAR_TO_COORD( l_U216._fU0, l_U216._fU16._fU0, l_U216._fU16._fU4, l_U216._fU16._fU8 );
        SET_CAR_ON_GROUND_PROPERLY( l_U216._fU4 );
        SET_CHAR_HEADING( l_U216._fU0, 90.00000000 );
        TASK_START_SCENARIO_IN_PLACE( l_U216._fU0, "Scenario_ServiceWorker", -1082130432 );
        TASK_PLAY_ANIM_NON_INTERRUPTABLE( l_U216._fU0, "Work_A", "AMB@SERVICE_IDLES_B", 4.00000000, 1, 0, 0, 0, -1 );
        CREATE_CAR( -114291515, -318.26690000, 1609.58800000, 19.27540000, ref uVar2, 1 );
        SET_CAR_AS_MISSION_CAR( uVar2 );
        SET_CAR_HEADING( uVar2, 222.15700000 );
        SET_CAR_IN_CUTSCENE( uVar2, 1 );
        sub_5990();
        return 1;
    }
    return 0;
}

int sub_1405()
{
    REQUEST_ANIMS( "AMB@SERVICE_IDLES_B" );
    REQUEST_MODEL( sub_1448( l_U243 ) );
    REQUEST_MODEL( sub_1778( l_U243 ) );
    REQUEST_MODEL( -114291515 );
    if ((HAVE_ANIMS_LOADED( "AMB@SERVICE_IDLES_B" )) AND ((HAS_MODEL_LOADED( -114291515 )) AND ((HAS_MODEL_LOADED( sub_1778( l_U243 ) )) AND (HAS_MODEL_LOADED( sub_1448( l_U243 ) )))))
    {
        return 1;
    }
    return 0;
}

int sub_1448(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -451718857;
        case 1: return 870892404;
        case 2: return -411638179;
        case 3: return -727962858;
        case 4: return -900623157;
        case 5: return 954215094;
        case 6: return 1728056212;
        case 7: return 1825562762;
        case 8: return -411638179;
        case 16: return 170756246;
        case 17: return -73790512;
        case 13: return 349841464;
        case 15: return -239294183;
    }
    sub_516( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

int sub_1778(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -359167535;
        case 1: return -570033273;
        case 6: return -408052231;
        case 7: return -408052231;
        case 13: return -408052231;
        case 16: return -408052231;
        case 17: return -255678177;
        case 15: return -1759858085;
    }
    SCRIPT_ASSERT( "Return_Contact_Vehicle_Model: Unknown Contact ID\n" );
    return -570033273;
}

void sub_2154(vector vParam0, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6, boolean bParam7)
{
    unknown uVar10;

    sub_2188( vParam0 + (vector( 0.00000000, 0.00000000, 2.00000000)), uParam3, uParam4, iParam6 );
    uVar10 = sub_3613( vParam0, uParam3, uParam5 );
    WARP_CHAR_INTO_CAR( iParam6->_fU0, uVar10 );
    GIVE_PED_HELMET_WITH_OPTS( iParam6->_fU0, 1 );
    iParam6->_fU4 = uVar10;
    if (NOT bParam7)
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar10 );
    }
    return;
}

void sub_2188(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    CREATE_CHAR( sub_2786( sub_2198( ref uParam4 ) ), uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, iParam5 + 0, 1 );
    SET_CHAR_HEADING( iParam5->_fU0, uParam3 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( iParam5->_fU0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam5->_fU0, 1 );
    sub_2914( iParam5 );
    return;
}

void sub_2198(unknown uParam0)
{
    int Result;

    Result = 0;
    switch ((uParam0^))
    {
        case -159126838:
        case 301427732:
        case -570033273:
        case -408052231:
        case 584879743:
        case 802082487:
        case -359167535:
        case 1439613707:
        case 1737188996:
        case -411638179:
        case -2130437771:
        case -1832534792:
        case -1670328242:
        case 188410296:
        case 1414790133:
        case 630267504:
        case 1719115836:
        case 1914397972:
        case -2138439183:
        case 1215631816:
        case 1706970202:
        case 717510247:
        case 965080042:
        case 693982133:
        case 454735664:
        case 1409362172:
        case 767450539:
        case 1686719296:
        case 1917871822:
        case 422524045:
        Result = 1;
        break;
        case -571009320:
        case 2006142190:
        case -1606187161:
        case -77769032:
        case -618617997:
        case 977480632:
        case -1159156463:
        case 479817841:
        case 226415164:
        case 15972646:
        case -2107556865:
        case -150646512:
        case 690697563:
        case -504027408:
        Result = 2;
        break;
        case -114291515:
        case -891462355:
        case -1670998136:
        case -1759858085:
        case 1265391242:
        case -255678177:
        case 236691815:
        case 1590280898:
        Result = 3;
        break;
    }
    if (Result == 0)
    {
        if (((uParam0^) == (sub_1448( 16 ))) || (((uParam0^) == (sub_1448( 13 ))) || (((uParam0^) == (sub_1448( 7 ))) || (((uParam0^) == (sub_1448( 6 ))) || (((uParam0^) == (sub_1448( 1 ))) || ((uParam0^) == (sub_1448( 0 ))))))))
        {
            Result = 1;
        }
        else if (((uParam0^) == (sub_1448( 17 ))) || ((uParam0^) == (sub_1448( 15 ))))
        {
            Result = 3;
        }
    }
    return Result;
}

int sub_2786(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 9;
        break;
        case 2:
        return 8;
        break;
    }
    return 25;
}

void sub_2914(int iParam0)
{
    int iVar3;

    SET_CHAR_WILL_DO_DRIVEBYS( iParam0->_fU0, 1 );
    ENABLE_PED_HELMET( iParam0->_fU0, 0 );
    iVar3 = sub_2953( iParam0 + 0 );
    if (iVar3 == 1)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 0, 0 );
        SET_CHAR_NEVER_TARGETTED( iParam0->_fU0, 1 );
    }
    else if (iVar3 == 3)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, 0 );
        SET_CHAR_RELATIONSHIP( iParam0->_fU0, 1, 0 );
    }
    else if (iVar3 == 2)
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_3123( iVar3 ) );
        SET_CHAR_AS_ENEMY( iParam0->_fU0, 1 );
    }
    else
    {
        SET_CHAR_RELATIONSHIP_GROUP( iParam0->_fU0, sub_3123( iVar3 ) );
    };;;
    SET_CHAR_PROOFS( iParam0->_fU0, 0, 0, 0, 1, 0 );
    SET_CHAR_WILL_USE_CARS_IN_COMBAT( iParam0->_fU0, 1 );
    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( iParam0->_fU0, 0 );
    SET_PED_FALL_OFF_BIKES_WHEN_SHOT( iParam0->_fU0, 0 );
    iParam0->_fU8 = nil;
    iParam0->_fU12 = nil;
    iParam0->_fU92 = 0;
    iParam0->_fU16 = {0, 0, 0};
    iParam0->_fU28 = 18.00000000;
    iParam0->_fU32 = 0;
    iParam0->_fU36 = 4;
    iParam0->_fU40 = 2;
    iParam0->_fU88 = 12;
    iParam0->_fU96 = 5;
    if (iVar3 == 1)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ability_backup" )) == 0)
        {
            sub_3410( iParam0 );
        }
        else if ((NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_1448( 7 ) ))) AND (NOT (IS_CHAR_MODEL( iParam0->_fU0, sub_1448( 6 ) ))))
        {
            sub_3410( iParam0 );
        }
    }
    return;
}

void sub_2953(unknown uParam0)
{
    unknown uVar3;
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_INJURED( (uParam0^) )))
    {
        GET_CHAR_MODEL( (uParam0^), ref uVar3 );
        Result = sub_2198( ref uVar3 );
    }
    return Result;
}

int sub_3123(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        return 6;
        break;
        case 2:
        return 5;
        break;
    }
    return 22;
}

void sub_3410(int iParam0)
{
    if (l_U143)
    {
        ADD_BLIP_FOR_CHAR( iParam0->_fU0, iParam0 + 100 );
        SET_BLIP_AS_FRIENDLY( iParam0->_fU100, 1 );
        CHANGE_BLIP_PRIORITY( iParam0->_fU100, 0 );
        SET_BLIP_AS_SHORT_RANGE( iParam0->_fU100, 1 );
        CHANGE_BLIP_SCALE( iParam0->_fU100, 0.50000000 );
        CHANGE_BLIP_DISPLAY( iParam0->_fU100, 5 );
    }
    return;
}

void sub_3613(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown Result;

    CREATE_CAR( uParam4, uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result, 1 );
    SET_CAR_HEADING( Result, uParam3 );
    sub_3661( Result, uParam4, 9 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( Result, 1 );
    SET_BLIP_THROTTLE_RANDOMLY( Result, 1 );
    VEHICLE_CAN_BE_TARGETTED_BY_HS_MISSILE( Result, 0 );
    return Result;
}

void sub_3661(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case -159126838:
        CHANGE_CAR_COLOUR( uParam0, 106, 106 );
        SET_EXTRA_CAR_COLOURS( uParam0, 127, 0 );
        break;
        case 301427732:
        CHANGE_CAR_COLOUR( uParam0, 69, 112 );
        SET_EXTRA_CAR_COLOURS( uParam0, 112, 0 );
        break;
        case -570033273:
        if (iParam2 == 1)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 0, 0 );
            SET_EXTRA_CAR_COLOURS( uParam0, 4, 35 );
        }
        break;
        case -408052231:
        switch (iParam2)
        {
            case 6:
            case 13:
            case 16:
            case 7:
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            if (iParam2 == 6)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 78, 37 );
                SET_EXTRA_CAR_COLOURS( uParam0, 81, 1 );
            }
            else if (iParam2 == 13)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 37, 90 );
                SET_EXTRA_CAR_COLOURS( uParam0, 129, 1 );
            }
            else if (iParam2 == 16)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 0 );
                CHANGE_CAR_COLOUR( uParam0, 69, 88 );
                SET_EXTRA_CAR_COLOURS( uParam0, 125, 1 );
            }
            else if (iParam2 == 7)
            {
                TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 0 );
                TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 0 );
                CHANGE_CAR_COLOUR( uParam0, 70, 78 );
                SET_EXTRA_CAR_COLOURS( uParam0, 1, 1 );
            }
            else
            {
                SCRIPT_ASSERT( "Set_Gang_Bike_Colours: DIABOLUS - missing bike extras and colours for contact" );
            };;;;
            break;
        }
        break;
        case 584879743:
        CHANGE_CAR_COLOUR( uParam0, 78, 66 );
        SET_EXTRA_CAR_COLOURS( uParam0, 90, 0 );
        break;
        case 802082487: break;
        case -359167535:
        CHANGE_CAR_COLOUR( uParam0, 1, 90 );
        SET_EXTRA_CAR_COLOURS( uParam0, 95, 0 );
        break;
        case -571009320:
        CHANGE_CAR_COLOUR( uParam0, 112, 74 );
        SET_EXTRA_CAR_COLOURS( uParam0, 4, 0 );
        break;
        case 2006142190:
        CHANGE_CAR_COLOUR( uParam0, 132, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 131, 0 );
        break;
        case -1606187161:
        CHANGE_CAR_COLOUR( uParam0, 85, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 82, 0 );
        break;
        case -618617997:
        CHANGE_CAR_COLOUR( uParam0, 33, 0 );
        SET_EXTRA_CAR_COLOURS( uParam0, 5, 0 );
        break;
        case -77769032: break;
        case -1670998136: break;
        case -1759858085:
        if (iParam2 == 15)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 132, 1 );
            SET_EXTRA_CAR_COLOURS( uParam0, 112, 112 );
        }
        break;
        case 1265391242: break;
        case -255678177:
        if (iParam2 == 17)
        {
            TURN_OFF_VEHICLE_EXTRA( uParam0, 1, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 2, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 3, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 4, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 5, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 6, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 7, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 8, 1 );
            TURN_OFF_VEHICLE_EXTRA( uParam0, 9, 1 );
            CHANGE_CAR_COLOUR( uParam0, 112, 112 );
            SET_EXTRA_CAR_COLOURS( uParam0, 1, 112 );
        }
        break;
        case -114291515: break;
        case -891462355: break;
    }
    return;
}

void sub_5143(int iParam0, unknown uParam1, unknown uParam2)
{
    (uParam1^) = iParam0->_fU0;
    (uParam2^) = iParam0->_fU4;
    iParam0->_fU36 = 0;
    if (NOT (IS_CHAR_INJURED( iParam0->_fU0 )))
    {
        REMOVE_CHAR_FROM_GROUP( iParam0->_fU0 );
        if (IS_VEH_DRIVEABLE( sub_5208( iParam0 ) ))
        {
            SET_DRIVE_TASK_CRUISE_SPEED( iParam0->_fU0, iParam0->_fU28 );
        }
        if (iParam0->_fU0 == g_U11197)
        {
            g_U11197 = nil;
        }
        if (iParam0->_fU0 == g_U11198)
        {
            g_U11198 = nil;
        }
        if ((iParam0->_fU0 != g_U11081[1]) AND (iParam0->_fU0 != g_U11081[0]))
        {
            g_U11114 = 1;
        }
        TASK_STAND_STILL( iParam0->_fU0, -2 );
    }
    return;
}

void sub_5208(int iParam0)
{
    unknown Result;
    int iVar4;

    if (IS_CHAR_IN_ANY_CAR( iParam0->_fU0 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0->_fU0, ref Result );
        if (IS_VEH_DRIVEABLE( Result ))
        {
            GET_DRIVER_OF_CAR( Result, ref iVar4 );
            if (iVar4 == iParam0->_fU0)
            {
                return Result;
            }
        }
    }
    return nil;
}

void sub_5516(unknown uParam0, int iParam1)
{
    unknown uVar4;

    uVar4 = sub_400( uParam0 );
    if (NOT (g_U27892[uVar4]._fU28 == iParam1))
    {
        return;
    }
    g_U27892[uVar4]._fU76 = 1;
    return;
}

void sub_5990()
{
    if (NOT (IS_CHAR_INJURED( l_U216._fU0 )))
    {
        if (l_U249 == -1)
        {
            l_U249 = GET_SOUND_ID();
            PLAY_SOUND_FROM_PED( l_U249, "MALC_WORKING_ON_BIKE_LOOP", l_U216._fU0 );
        }
    }
    return;
}

int sub_6127()
{
    if (NOT (IS_CHAR_INJURED( l_U216._fU0 )))
    {
        if (HAS_CHAR_SPOTTED_CHAR( l_U216._fU0, sub_1179() ))
        {
            if (IS_CHAR_ARMED( sub_1179(), 7 ))
            {
                if (IS_PLAYER_TARGETTING_CHAR( sub_1074(), l_U216._fU0 ))
                {
                    return 1;
                }
                if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1074(), l_U216._fU0 ))
                {
                    return 1;
                }
                if (IS_CHAR_SHOOTING( sub_1179() ))
                {
                    return 1;
                }
            }
        }
    }
    if (NOT (sub_6292( l_U216._fU4, l_U242, 5.00000000 )))
    {
        PRINTSTRING( "IF NOT isCarHeadingAcceptable(malcBuddy.veh, malcHeading, 5.0) \n" );
        return 1;
    }
    if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U216._fU0, sub_1179(), 0 ))
    {
        return 1;
    }
    return 0;
}

int sub_6292(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;
    float fVar6;
    float fVar7;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_HEADING( uParam0, ref fVar5 );
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
            if ((fVar5 > fVar7) AND (fVar5 < fVar6))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((fVar5 > fVar7) || (fVar5 < fVar6))
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

void sub_6599()
{
    sub_1148();
    return;
}

void sub_6621()
{
    int I;
    vector[2] vVar3;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown[2] uVar10;

    array(ref vVar3, 2);
    array(ref uVar10, 2);
    switch (l_U247)
    {
        case 0:
        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_1179(), l_U216._fU0, l_U245, l_U245, l_U245, 0 ))
        {
            if (sub_6709( 1, 1 ))
            {
                sub_6999();
                l_U247 = 1;
            }
        }
        break;
        case 1:
        CLEAR_PRINTS();
        sub_7095( 0 );
        SET_PLAYER_CONTROL( sub_1074(), 0 );
        SET_MISSION_FLAG( 1 );
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        if (NOT (IS_CHAR_INJURED( l_U216._fU0 )))
        {
            DELETE_CHAR( ref l_U216._fU0 );
        }
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( 0.00000000, 0.00000000, 0.50000000, l_U216._fU0, 0, 0, 0 );
        }
        vVar3[0] = {-321.31040000, 1607.82100000, 20.28150000};
        vVar3[1] = {-315.36610000, 1611.21700000, 20.27950000};
        for ( I = 0; I < 2; I++ )
        {
            GET_RANDOM_CAR_IN_SPHERE_NO_SAVE( vVar3[I]._fU0, vVar3[I]._fU4, vVar3[I]._fU8, 2.00000000, 0, 0, ref uVar10[I] );
            if (IS_VEH_DRIVEABLE( uVar10[I] ))
            {
                SET_CAR_AS_MISSION_CAR( uVar10[I] );
                SET_CAR_IN_CUTSCENE( uVar10[I], 1 );
            }
        }
        CLEAR_AREA( l_U216._fU16._fU0, l_U216._fU16._fU4, l_U216._fU16._fU8, 100.00000000, 1 );
        LOAD_ADDITIONAL_TEXT( "MALC2AU", 6 );
        CLEAR_NAMED_CUTSCENE( "RP03_ML" );
        START_CUTSCENE_NOW( "RP03_ML" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_WANTED_LEVEL( sub_1074() );
        REQUEST_SCRIPT( "malcRace" );
        while (NOT (HAS_SCRIPT_LOADED( "malcRace" )))
        {
            REQUEST_SCRIPT( "malcRace" );
            WAIT( 0 );
        }
        START_NEW_SCRIPT( "malcRace", 8192 );
        sub_1148();
        break;
    }
    return;
}

int sub_6709(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_1179() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1179(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_1179() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1179(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_1179()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_1179() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_1179() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_1074() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_1074() )))
    {
        return 0;
    }
    return 1;
}

void sub_6999()
{
    if (l_U249 != -1)
    {
        if (NOT (HAS_SOUND_FINISHED( l_U249 )))
        {
            STOP_SOUND( l_U249 );
        }
        RELEASE_SOUND_ID( l_U249 );
        l_U249 = -1;
    }
    return;
}

void sub_7095(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8944 <= 8) AND (g_U8944 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

