void main()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U109 = 25;
    PRINTSTRING( "ABILITY VEHICLE SCRIPT STARTED \n" );
    if (HAS_DEATHARREST_EXECUTED())
    {
        PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 1 \n" );
        sub_129();
    }
    if (NOT (IS_MODEL_IN_CDIMAGE( g_U11196 )))
    {
        SCRIPT_ASSERT( "g_VehicleModel does not exist on cd image!" );
        PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 2 \n" );
        sub_129();
    }
    else if (NOT (IS_THIS_MODEL_A_VEHICLE( g_U11196 )))
    {
        SCRIPT_ASSERT( "g_VehicleModel is not a valid car model!" );
        PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 3 \n" );
        sub_129();
    }
    CREATE_WIDGET_GROUP( "Delivered Vehicle" );
    ADD_WIDGET_SLIDER( "iState", ref l_U108, 0, 99, 1 );
    ADD_WIDGET_TOGGLE( "bCarDelivered", ref l_U101 );
    END_WIDGET_GROUP();
    while (IS_PLAYER_PLAYING( sub_1094() ))
    {
        switch (l_U108)
        {
            case 0:
            REQUEST_MODEL( sub_139( 7 ) );
            REQUEST_MODEL( 52357603 );
            REQUEST_MODEL( g_U11196 );
            REQUEST_MODEL( -789894171 );
            if ((HAS_MODEL_LOADED( -789894171 )) AND ((HAS_MODEL_LOADED( g_U11196 )) AND ((HAS_MODEL_LOADED( 52357603 )) AND (HAS_MODEL_LOADED( sub_139( 7 ) )))))
            {
                sub_1296( 1 );
            }
            sub_1350( "E2FHAU", 6 );
            break;
            case 1:
            bVar2 = false;
            if (sub_1507( ref uVar3, ref uVar6, ref l_U109 ))
            {
                bVar2 = true;
            }
            else if (l_U109 > 500)
            {
                if (l_U106 > 0.00000000)
                {
                    uVar3 = {l_U113};
                    uVar6 = l_U105;
                    bVar2 = true;
                }
                else
                {
                    PRINT( "E2VD_TOOFAR", 7500, 1 );
                    sub_129();
                }
            }
            if (bVar2)
            {
                CREATE_CAR( g_U11196, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U125[0], 1 );
                SET_CAR_HEADING( l_U125[0], uVar6 );
                sub_2498( l_U125[0], 2000 );
                sub_2592( 7, ref l_U110[0], l_U125[0] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U110[0], 1 );
                ADD_BLIP_FOR_CHAR( l_U110[0], ref l_U104 );
                CHANGE_BLIP_SPRITE( l_U104, 98 );
                sub_3707( l_U104 );
                GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U125[0], 0.00000000, -4.00000000, 0.00000000, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
                CREATE_CAR( -789894171, uVar3._fU0, uVar3._fU4, uVar3._fU8, ref l_U125[1], 1 );
                if (NOT (IS_CAR_DEAD( l_U125[1] )))
                {
                    SET_CAN_BURST_CAR_TYRES( l_U125[1], 0 );
                    CREATE_CHAR_INSIDE_CAR( l_U125[1], 26, 52357603, ref l_U110[1] );
                }
                if ((NOT (IS_CHAR_INJURED( l_U110[1] ))) AND (IS_VEH_DRIVEABLE( l_U125[1] )))
                {
                    sub_2498( l_U125[1], 2000 );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U110[1], 1 );
                    LOCK_CAR_DOORS( l_U125[1], 3 );
                }
                sub_1296( 2 );
            }
            break;
            case 2:
            if (NOT sub_3980())
            {
                if (NOT (IS_CHAR_INJURED( l_U110[1] )))
                {
                    if ((IS_VEH_DRIVEABLE( l_U125[1] )) AND (IS_VEH_DRIVEABLE( l_U125[0] )))
                    {
                        GET_SCRIPT_TASK_STATUS( l_U110[1], 49, ref l_U129 );
                        if (l_U129 == 7)
                        {
                            TASK_CAR_MISSION( l_U110[1], l_U125[1], l_U125[0], 12, 13.50000000, 2, 0, 0 );
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U110[0] )))
            {
                if (IS_VEH_DRIVEABLE( l_U125[0] ))
                {
                    OPEN_SEQUENCE_TASK( ref l_U128 );
                    TASK_CAR_MISSION( 0, l_U125[0], 0, 21, 12.00000000, 0, 3, 3 );
                    TASK_CAR_TEMP_ACTION( 0, l_U125[0], 6, 1000 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    CLOSE_SEQUENCE_TASK( l_U128 );
                    TASK_PERFORM_SEQUENCE( l_U110[0], l_U128 );
                    CLEAR_SEQUENCE_TASK( l_U128 );
                }
            }
            if (NOT (IS_CHAR_INJURED( l_U110[1] )))
            {
                CLEAR_CHAR_TASKS( l_U110[1] );
            }
            l_U101 = 0;
            SETTIMERA( 0 );
            sub_1296( 3 );;
            break;
            case 3:
            if (NOT l_U101)
            {
                if (NOT (IS_CHAR_INJURED( l_U110[0] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U125[0] ))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U110[0], l_U125[0] )))
                        {
                            if (DOES_BLIP_EXIST( l_U104 ))
                            {
                                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U104 );
                            }
                            if ((NOT g_U12379) AND (NOT (DOES_BLIP_EXIST( l_U103 ))))
                            {
                                if (IS_VEH_DRIVEABLE( l_U125[0] ))
                                {
                                    ADD_BLIP_FOR_CAR( l_U125[0], ref l_U103 );
                                    SET_BLIP_AS_FRIENDLY( l_U103, 1 );
                                    sub_3707( l_U103 );
                                }
                            }
                            if (NOT l_U102)
                            {
                                if ((NOT (IS_CHAR_INJURED( l_U110[0] ))) AND (NOT (IS_CHAR_INJURED( sub_1571() ))))
                                {
                                    if ((sub_5368( sub_1571(), l_U110[0], 1 )) < 30.00000000)
                                    {
                                        sub_5522( 0, sub_1571(), "LUIS", 0 );
                                        sub_5522( 2, l_U110[0], "HENRIQUE", 0 );
                                        sub_5719( ref l_U136, "E2FH_SPA", "E2FH_THX" );
                                        sub_6066( ref l_U136, ref l_U130, 7, 0 );
                                    }
                                }
                                l_U102 = 1;
                            }
                            l_U101 = 1;
                        }
                        else if ((IS_VEH_DRIVEABLE( l_U125[0] )) AND (NOT (IS_CHAR_INJURED( l_U110[0] ))))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U110[0], 49, ref l_U129 );
                            if ((IS_CHAR_SITTING_IN_CAR( l_U110[0], l_U125[0] )) AND (l_U129 == 7))
                            {
                                TASK_LEAVE_CAR( l_U110[0], l_U125[0] );
                            }
                        }
                    }
                    if (IS_VEH_DRIVEABLE( l_U125[1] ))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_CAR( l_U110[0], l_U125[1] )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U110[0], 29, ref l_U129 );
                            if (l_U129 == 7)
                            {
                                OPEN_SEQUENCE_TASK( ref l_U128 );
                                if (IS_CHAR_IN_ANY_CAR( l_U110[0] ))
                                {
                                    TASK_LEAVE_ANY_CAR( 0 );
                                }
                                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U110[0], l_U125[1], 20.00000000, 20.00000000, 5.00000000, 0 )))
                                {
                                    TASK_GOTO_CAR( 0, l_U125[1], 9999999, 10.00000000 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U125[1], -2, 0 );
                                CLOSE_SEQUENCE_TASK( l_U128 );
                                TASK_PERFORM_SEQUENCE( l_U110[0], l_U128 );
                                CLEAR_SEQUENCE_TASK( l_U128 );
                            }
                        }
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U110[1] )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U110[0] )))
                    {
                        if (IS_VEH_DRIVEABLE( l_U125[1] ))
                        {
                            if (IS_CHAR_IN_CAR( l_U110[1], l_U125[1] ))
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U110[1], l_U110[0], 20.00000000, 20.00000000, 5.00000000, 0 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( l_U110[1], 49, ref l_U129 );
                                    if (l_U129 == 7)
                                    {
                                        TASK_CAR_MISSION_PED_TARGET( l_U110[1], l_U125[1], l_U110[0], 4, 15.00000000, 2, 10, 10 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U110[0] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U110[1] )))
                {
                    if (IS_VEH_DRIVEABLE( l_U125[1] ))
                    {
                        if ((NOT (IS_CHAR_SITTING_IN_CAR( l_U110[0], l_U125[1] ))) AND (IS_CHAR_SITTING_IN_CAR( l_U110[1], l_U125[1] )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U110[0], 29, ref l_U129 );
                            if (l_U129 == 7)
                            {
                                OPEN_SEQUENCE_TASK( ref l_U128 );
                                TASK_GOTO_CAR( 0, l_U125[1], 9999999, 10.00000000 );
                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U125[1], -2, 0 );
                                CLOSE_SEQUENCE_TASK( l_U128 );
                                TASK_PERFORM_SEQUENCE( l_U110[0], l_U128 );
                                CLEAR_SEQUENCE_TASK( l_U128 );
                            }
                        }
                    }
                    if (IS_VEH_DRIVEABLE( l_U125[1] ))
                    {
                        if ((IS_CHAR_SITTING_IN_CAR( l_U110[1], l_U125[1] )) AND (IS_CHAR_SITTING_IN_CAR( l_U110[0], l_U125[1] )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U110[1], 16, ref l_U129 );
                            if (l_U129 == 7)
                            {
                                TASK_CAR_DRIVE_WANDER( l_U110[1], l_U125[1], 25.00000000, 2 );
                                sub_1296( 5 );
                            }
                        }
                    }
                }
            }
            if (IS_VEH_DRIVEABLE( l_U125[0] ))
            {
                if (IS_CHAR_IN_CAR( sub_1571(), l_U125[0] ))
                {
                    if (DOES_BLIP_EXIST( l_U103 ))
                    {
                        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U103 );
                    }
                }
            }
            if (g_U12379)
            {
                if (DOES_BLIP_EXIST( l_U103 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U103 );
                }
            }
            break;
            case 5:
            if (NOT g_U12379)
            {
                if (IS_VEH_DRIVEABLE( l_U125[0] ))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_1571(), l_U125[0], 150.00000000, 150.00000000, 150.00000000, 0 ))
                    {
                        if ((TIMERA() > 7000) AND (IS_CHAR_IN_CAR( sub_1571(), l_U125[0] )))
                        {
                            PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 4 \n" );
                            sub_129();
                        }
                    }
                    else
                    {
                        PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 5 \n" );
                        sub_129();
                    }
                }
                else
                {
                    PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 6 \n" );
                    sub_129();
                }
            }
            else
            {
                PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 7 \n" );
                sub_129();
            }
            if (IS_CHAR_INJURED( l_U110[1] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U110[0] )))
                {
                    if (NOT l_U145)
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U110[0] );
                        l_U145 = 1;
                    }
                }
            }
            break;
        }
        if ((NOT (l_U108 < 2)) AND (NOT (l_U108 == 5)))
        {
            if ((NOT (IS_VEH_DRIVEABLE( l_U125[1] ))) || ((NOT (IS_VEH_DRIVEABLE( l_U125[0] ))) || ((IS_CHAR_INJURED( l_U110[1] )) || (IS_CHAR_INJURED( l_U110[0] )))))
            {
                PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 8 \n" );
                sub_129();
            }
        }
        if (l_U108 >= 3)
        {
            if ((IS_VEH_DRIVEABLE( l_U125[0] )) AND (NOT (IS_CHAR_INJURED( sub_1571() ))))
            {
                GET_CHAR_COORDINATES( sub_1571(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                GET_CAR_COORDINATES( l_U125[0], ref uVar10._fU0, ref uVar10._fU4, ref uVar10._fU8 );
                l_U107 = VDIST( uVar7, uVar10 );
                if (l_U107 > 600.00000000)
                {
                    PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 9 \n" );
                    sub_129();
                }
                if (TIMERA() > 60000)
                {
                    PRINTSTRING( "ABILITY VEHICLE SCRIPT CLEANUP 9 \n" );
                    sub_129();
                }
            }
        }
        if (NOT l_U100)
        {
            WAIT( 0 );
        }
        else
        {
            l_U100 = 0;
        }
    }
    sub_129();
    return;
}

void sub_129()
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_139( 7 ) );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 52357603 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( g_U11196 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -789894171 );
    if (DOES_BLIP_EXIST( l_U103 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U103 );
    }
    if (DOES_BLIP_EXIST( l_U104 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U104 );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U110[0] );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U110[1] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U125[0] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U125[1] );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_139(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -274568867;
        case 1: return 1662225612;
        case 2: return -448171135;
        case 3: return 1370299619;
        case 4: return -773750838;
        case 5: return 243666427;
        case 6: return -913924918;
        case 7: return 1905515841;
        case 9:
        SCRIPT_ASSERT( "Attempt to Return the model for the Reserve Strand 1 Character" );
        return 0;
        case 30: return -1949352469;
        case 31: return -401698464;
        case 32: return -487173849;
        case 33: return -407067034;
        case 13: return 714517099;
        case 14: return 653404222;
        case 15: return 1798610950;
    }
    sub_554( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_554(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1094()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1296(int iParam0)
{
    if (NOT (iParam0 == l_U108))
    {
        l_U108 = iParam0;
        l_U100 = 1;
    }
    return;
}

void sub_1350(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_1386())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_1386()
{
    int I;

    for ( I = 0; I <= (14 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_1507(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 10; I++ )
    {
        if ((uParam2^) == 25)
        {
            if (sub_1545( uParam0, uParam1, (uParam2^) ))
            {
                return 1;
            }
        }
        else if (sub_1545( uParam0, uParam1, -1 ))
        {
            return 1;
        }
        (uParam2^)++;
    }
    return 0;
}

int sub_1545(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    unknown uVar15;
    unknown uVar16;

    if (IS_PLAYER_PLAYING( sub_1094() ))
    {
        GET_CHAR_COORDINATES( sub_1571(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if (IS_CHAR_IN_WATER( sub_1571() ))
        {
            uVar5._fU8 = 1.00000000;
        }
    }
    uVar16 = GET_MAP_AREA_FROM_COORDS( uVar5 );
    if (NOT (iParam2 == -1))
    {
        GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, iParam2, uVar16, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11, ref uVar15 );
    }
    else
    {
        GET_NEXT_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar16, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8, ref uVar11 );
    }
    GET_DISTANCE_BETWEEN_COORDS_2D( uVar5._fU0, uVar5._fU4, uVar8._fU0, uVar8._fU4, ref fVar12 );
    fVar14 = 1.00000000;
    if (NOT (sub_1802( uVar5, uVar8 )))
    {
        fVar14 *= 0.00000000;
    }
    fVar13 = uVar5._fU8 - uVar8._fU8;
    if (fVar13 < 0.00000000)
    {
        fVar13 *= -1.00000000;
    }
    if (NOT (fVar13 < 4.00000000))
    {
        if (fVar13 > 20.00000000)
        {
            fVar13 = 20.00000000;
        }
        fVar14 *= (20.00000000 - fVar13) / 20.00000000;
    }
    if (fVar12 < 100.00000000)
    {
        fVar14 *= fVar12 / 100.00000000;
    }
    if (sub_2034( uVar8._fU0, uVar8._fU4, uVar8._fU8, 5.00000000, 1128792064 ))
    {
        fVar14 *= 0.00000000;
    }
    if (fVar14 >= 1.00000000)
    {
        (uParam0^) = {uVar8};
        (uParam1^) = uVar11;
        return 1;
    }
    if (fVar14 > 0.00000000)
    {
        if (fVar14 > l_U106)
        {
            l_U113 = {uVar8};
            l_U105 = uVar11;
            l_U106 = fVar14;
        }
    }
    return 0;
}

void sub_1571()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1802(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = GET_MAP_AREA_FROM_COORDS( uParam0 );
    iVar9 = GET_MAP_AREA_FROM_COORDS( uParam3 );
    if (iVar8 == iVar9)
    {
        return 1;
    }
    return 0;
}

int sub_2034(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    GET_GAME_VIEWPORT_ID( ref uVar7 );
    if (CAM_IS_SPHERE_VISIBLE( uVar7, uParam0, uParam1, uParam2, uParam3 ))
    {
        if (IS_PLAYER_PLAYING( sub_1094() ))
        {
            GET_CHAR_COORDINATES( sub_1571(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {(vector( uParam0, uParam1, uParam2)) - vVar8};
            if ((VMAG( uVar11 )) < fParam4)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_2498(unknown uParam0, unknown uParam1)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        SET_CAR_HEALTH( uParam0, uParam1 );
        SET_ENGINE_HEALTH( uParam0, TO_FLOAT( uParam1 ) );
        SET_PETROL_TANK_HEALTH( uParam0, TO_FLOAT( uParam1 ) );
    }
    return;
}

void sub_2592(unknown uParam0, unknown uParam1, unknown uParam2)
{
    CREATE_CHAR_INSIDE_CAR( uParam2, sub_2605( uParam0 ), sub_139( uParam0 ), uParam1 );
    sub_2644( uParam0, (uParam1^) );
    sub_2666( uParam0, (uParam1^) );
    return;
}

int sub_2605(unknown uParam0)
{
    return 25;
}

void sub_2644(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2666(unknown uParam0, unknown uParam1)
{
    sub_2678( ref uParam1, uParam0 );
    return;
}

void sub_2678(unknown uParam0, int iParam1)
{
    sub_2689( uParam0 );
    if (iParam1 == 37)
    {
        sub_2791( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_3375( (uParam0^), iParam1, g_U42825[iParam1] );
    }
    return;
}

void sub_2689(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_2791(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 1, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_3375(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        sub_2791( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 1:
        sub_2791( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 31:
        sub_2791( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
        return;
        case 7:
        sub_2791( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_2791( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_3707(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

int sub_3980()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_DEAD( l_U110[0] )))
    {
        if (IS_VEH_DRIVEABLE( l_U125[0] ))
        {
            if (IS_PLAYER_PLAYING( sub_1094() ))
            {
                bVar2 = true;
                if (IS_CHAR_IN_ANY_CAR( sub_1571() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1571(), ref uVar3 );
                    if (IS_VEH_DRIVEABLE( uVar3 ))
                    {
                        GET_CAR_MODEL( uVar3, ref uVar4 );
                        if ((NOT (IS_THIS_MODEL_A_HELI( uVar4 ))) AND ((NOT (IS_THIS_MODEL_A_PLANE( uVar4 ))) AND (NOT (IS_THIS_MODEL_A_BOAT( uVar4 )))))
                        {
                            if (NOT (sub_4143( uVar3 )))
                            {
                                bVar2 = false;
                            }
                        }
                    }
                }
                if (bVar2)
                {
                    GET_CHAR_COORDINATES( sub_1571(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                    l_U116 = {sub_4248()};
                    l_U119 = {l_U122 - l_U116};
                    if ((VMAG( l_U119 )) > 1.00000000)
                    {
                        l_U122 = {l_U116};
                        TASK_CAR_DRIVE_TO_COORD( l_U110[0], l_U125[0], l_U122._fU0, l_U122._fU4, l_U122._fU8, 12.00000000, 0, 0, 2, 10.00000000, -1 );
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U110[0], 15, ref l_U129 );
                        if (l_U129 == 7)
                        {
                            return 1;
                        }
                        else
                        {
                            GET_CHAR_COORDINATES( sub_1571(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                            if ((LOCATE_CAR_3D( l_U125[0], uVar5._fU0, uVar5._fU4, uVar5._fU8, 15.00000000, 15.00000000, 2.00000000, 0 )) || (LOCATE_CAR_3D( l_U125[0], l_U122._fU0, l_U122._fU4, l_U122._fU8, 15.00000000, 15.00000000, 4.00000000, 0 )))
                            {
                                CLEAR_CHAR_TASKS( l_U110[0] );
                                return 1;
                            }
                        }
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U110[0], 49, ref l_U129 );
                    if (l_U129 == 7)
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_1571(), ref uVar8 );
                        TASK_CAR_MISSION( l_U110[0], l_U125[0], uVar8, 12, 15.00000000, 2, 10, 5 );
                    }
                }
            }
        }
    }
    return 0;
}

int sub_4143(unknown uParam0)
{
    float fVar3;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED( uParam0, ref fVar3 );
        if (fVar3 < 0.30000000)
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

void sub_4248()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown Result;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (IS_PLAYER_PLAYING( sub_1094() ))
    {
        GET_CHAR_COORDINATES( sub_1571(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        uVar10 = GET_MAP_AREA_FROM_COORDS( uVar2 );
    }
    GET_NTH_CLOSEST_CAR_NODE_WITH_HEADING_ON_ISLAND( uVar2._fU0, uVar2._fU4, uVar2._fU8, 1, uVar10, ref Result._fU0, ref Result._fU4, ref Result._fU8, ref uVar8, ref uVar9 );
    return Result;
}

void sub_5368(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_5381( uParam0, uParam2 ), sub_5381( uParam1, uParam2 ) );
}

void sub_5381(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_5522(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_5602( "\n PED NUMBER ", uParam0 );
    sub_5642( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_5602(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5642(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5719(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_5770( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_5770(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_6066(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_6087( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_6087(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_6114( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_6114(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_6136( iParam1 )))
    {
        return 0;
    }
    l_U2._fU384 = 0;
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_6824( ref g_U8868, ref l_U2 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_6136(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_6213( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_6213( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_6213( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_6213(unknown uParam0)
{
    return;
}

void sub_6824(int iParam0, int iParam1)
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

