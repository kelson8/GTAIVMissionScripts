void main()
{
    unknown uVar2;
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
    float fVar13;
    float fVar14;
    unknown uVar15;
    vector vVar16;
    vector vVar19;
    vector vVar22;
    unknown uVar25;
    unknown uVar26;
    float fVar27;

    l_U0 = 0;
    l_U1 = 0;
    l_U2 = 0;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 0;
    l_U7 = 0;
    l_U8 = 0;
    l_U9 = 1;
    l_U10 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U13 = 0;
    l_U14 = 0;
    l_U15 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U18 = 0;
    l_U19 = 1;
    l_U20 = 0;
    l_U21 = 0;
    l_U22 = 0;
    l_U23 = 0;
    l_U24 = 0;
    l_U25 = 0;
    l_U26 = 0;
    l_U27 = 1;
    l_U28 = 1;
    l_U29 = 0;
    l_U30 = 0;
    l_U31 = 0;
    l_U32 = 0;
    l_U33 = 0;
    l_U34 = 0;
    l_U35 = 0;
    l_U76 = 90.00000000;
    l_U77 = 5.00000000;
    l_U78 = 25.00000000;
    l_U79 = 15.00000000;
    l_U80 = 2.00000000;
    l_U81 = 4.00000000;
    l_U82 = 0.50000000;
    l_U83 = 120.00000000;
    l_U84 = 0.00000000;
    l_U85 = 0.00000000;
    l_U87 = 1.00000000;
    l_U88 = 0.00000000;
    l_U89 = 1.00000000;
    l_U90 = 10.00000000;
    l_U91 = 30.00000000;
    l_U93 = 1.00000000;
    l_U95 = 1.00000000;
    l_U96 = 5.00000000;
    l_U97 = 1.00000000;
    l_U98 = 1.00000000;
    l_U103 = 0.30000000;
    l_U104 = 0.50000000;
    l_U105 = 50.00000000;
    l_U116 = 0;
    l_U117 = 0;
    l_U118 = 0;
    l_U119 = 0;
    l_U120 = 1;
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 0;
    l_U124 = 0;
    l_U125 = -1;
    l_U126 = 0;
    l_U127 = 0;
    l_U128 = 0;
    l_U129 = 0;
    l_U130 = 0;
    l_U131 = 0;
    l_U132 = 0;
    l_U183 = 0;
    l_U184 = 0;
    l_U206 = 5.00000000;
    l_U207 = 0.00000000;
    l_U208 = 0.00000000;
    l_U209 = 2.00000000;
    while (true)
    {
        switch (l_U188)
        {
            case 0:
            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
            CLEAR_WANTED_LEVEL( sub_611() );
            OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
            l_U189 = 1;
            l_U190 = 1;
            l_U191 = 0;
            l_U192 = 1;
            l_U193 = 0;
            l_U194 = 1;
            l_U196 = 0;
            l_U197 = 0;
            l_U195 = 1;
            l_U198 = 0;
            l_U199 = 0;
            CREATE_WIDGET_GROUP( "Recording Re-Recorder" );
            ADD_WIDGET_SLIDER( "Old Recording Number", ref l_U189, 1, 3000, 1 );
            ADD_WIDGET_SLIDER( "New Recording Number", ref l_U190, 1, 3000, 1 );
            l_U214 = ADD_TEXT_WIDGET( "Car Model" );
            ADD_WIDGET_TOGGLE( "Load the above and goto start", ref l_U191 );
            ADD_WIDGET_TOGGLE( "Free car from start position", ref l_U201 );
            ADD_WIDGET_TOGGLE( "Show Recording Path", ref l_U192 );
            ADD_WIDGET_TOGGLE( "Show Ghost Car", ref l_U193 );
            ADD_WIDGET_TOGGLE( "Start Recording when accelerator is pressed?", ref l_U194 );
            ADD_WIDGET_TOGGLE( "New Car drives with AI", ref l_U196 );
            ADD_WIDGET_TOGGLE( "New Car drives with original recording", ref l_U197 );
            ADD_WIDGET_TOGGLE( "Stop Recording when A is pressed", ref l_U195 );
            ADD_WIDGET_TOGGLE( "Record New Car", ref l_U198 );
            ADD_WIDGET_TOGGLE( "Show Original Recording", ref l_U202 );
            ADD_WIDGET_TOGGLE( "bStopRecordingWhenOriginalStops", ref l_U203 );
            END_WIDGET_GROUP();
            SET_CONTENTS_OF_TEXT_WIDGET( l_U214, "ADMIRAL" );
            l_U188 = 1;
            break;
            case 1:
            if (l_U202)
            {
                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U189 ))
                {
                    l_U193 = 0;
                    if (DOES_VEHICLE_EXIST( l_U213 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U213 )))
                        {
                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U213 ))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U213 );
                            }
                            START_PLAYBACK_RECORDED_CAR( l_U213, l_U189 );
                        }
                    }
                    l_U202 = 0;
                }
                else
                {
                    l_U191 = 1;
                }
            }
            if (l_U191)
            {
                l_U188 = 2;
                break;
            }
            if (DOES_VEHICLE_EXIST( l_U212 ))
            {
                if (NOT (IS_CAR_DEAD( l_U212 )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U212 ))
                    {
                        if (l_U192)
                        {
                            # -NULL-0xbfc99f( l_U212, 1 );
                        }
                        else
                        {
                            # -NULL-0xbfc99f( l_U212, 0 );
                        }
                    }
                }
            }
            if (DOES_VEHICLE_EXIST( l_U212 ))
            {
                if (NOT (IS_CAR_DEAD( l_U212 )))
                {
                    SET_CAR_VISIBLE( l_U212, l_U193 );
                }
            }
            if (DOES_CHAR_EXIST( l_U211 ))
            {
                if (NOT (IS_CHAR_DEAD( l_U211 )))
                {
                    SET_CHAR_VISIBLE( l_U211, l_U193 );
                }
            }
            if (l_U194)
            {
                if ((NOT l_U197) AND (NOT l_U196))
                {
                    if (IS_BUTTON_PRESSED( 0, 7 ))
                    {
                        l_U198 = 1;
                    }
                }
            }
            if (l_U201)
            {
                if (DOES_VEHICLE_EXIST( l_U213 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U213 )))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U213 ))
                        {
                            GET_CAR_SPEED( l_U213, ref l_U205 );
                            PRINTSTRING( "car speed = " );
                            PRINTFLOAT( l_U205 );
                            PRINTSTRING( "\n" );
                            STOP_PLAYBACK_RECORDED_CAR( l_U213 );
                            FREEZE_CAR_POSITION( l_U213, 1 );
                            SET_CAR_FORWARD_SPEED( l_U213, 0.00000000 );
                            FREEZE_CAR_POSITION( l_U213, 0 );
                            APPLY_FORCE_TO_CAR( l_U213, 0, 0.00000000, 0.00000000, -10.00000000, 0.00000000, 0.00000000, 0.00000000, 0, 0, 1, 1 );
                            l_U201 = 0;
                        }
                    }
                }
            }
            if ((NOT l_U199) AND (l_U198))
            {
                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U189 ))
                {
                    if (DOES_VEHICLE_EXIST( l_U212 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U212 )))
                        {
                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U212 ))
                            {
                                UNPAUSE_PLAYBACK_RECORDED_CAR( l_U212 );
                            }
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U213 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U213 )))
                        {
                            if ((NOT l_U197) AND (NOT l_U196))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U213 ))
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U213 );
                                }
                            }
                            else if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U213 ))
                            {
                                UNPAUSE_PLAYBACK_RECORDED_CAR( l_U213 );
                                if (l_U196)
                                {
                                    CHANGE_PLAYBACK_TO_USE_AI( l_U213 );
                                }
                            }
                            else
                            {
                                START_PLAYBACK_RECORDED_CAR_USING_AI( l_U213, l_U189 );
                            }
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U213 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U213 )))
                        {
                            SET_CAR_FORWARD_SPEED( l_U213, l_U205 );
                        }
                    }
                    if (DOES_VEHICLE_EXIST( l_U213 ))
                    {
                        if (NOT (IS_CAR_DEAD( l_U213 )))
                        {
                            # -NULL-0xbfcb5b( l_U213, l_U190 );
                            PRINT_NOW( "REC_STARTED", 3000, 1 );
                        }
                    }
                    l_U199 = 1;
                }
                else
                {
                    l_U191 = 1;
                }
            }
            if ((l_U199) AND (l_U198))
            {
                if (l_U196)
                {
                    if (IS_PLAYER_PLAYING( sub_611() ))
                    {
                        if ((DOES_VEHICLE_EXIST( l_U213 )) AND (DOES_VEHICLE_EXIST( l_U212 )))
                        {
                            if ((NOT (IS_CAR_DEAD( l_U213 ))) AND (NOT (IS_CAR_DEAD( l_U212 ))))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U212 ))
                                {
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U213, 0.00000000, 0.00000000, 0.00000000, ref vVar16.x, ref vVar16.y, ref vVar16.z );
                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U212, 0.00000000, 0.00000000, 0.00000000, ref vVar19.x, ref vVar19.y, ref vVar19.z );
                                    vVar22 = {vVar19 - vVar16};
                                    vVar22 = {vVar22 * l_U207};
                                    vVar22.z = 0.00000000;
                                    APPLY_FORCE_TO_CAR( l_U213, 0, vVar22.x, vVar22.y, vVar22.z, 0.00000000, 0.00000000, 0.00000000, 0, 0, 1, 1 );
                                    GET_CAR_HEADING( l_U212, ref uVar26 );
                                    GET_CAR_HEADING( l_U213, ref uVar25 );
                                    fVar27 = uVar26 - uVar25;
                                    if (fVar27 > 180.00000000)
                                    {
                                        fVar27 += -360.00000000;
                                    }
                                    if (fVar27 < -180.00000000)
                                    {
                                        fVar27 += 360.00000000;
                                    }
                                    if (fVar27 > 10.00000000)
                                    {
                                        fVar27 = 10.00000000;
                                    }
                                    if (fVar27 < -10.00000000)
                                    {
                                        fVar27 = -10.00000000;
                                    }
                                    fVar13 = fVar27 / 10.00000000;
                                    fVar13 *= l_U208;
                                    APPLY_FORCE_TO_CAR( l_U213, 0, fVar13, 0.00000000, 0.00000000, 0.00000000, l_U206, 0.00000000, 0, 1, 1, 1 );
                                    fVar14 = sub_2893( l_U212, l_U213 );
                                    GET_CAR_SPEED( l_U212, ref uVar15 );
                                    if (NOT (sub_3138( l_U212, l_U213 )))
                                    {
                                        fVar14 *= -1.00000000;
                                    }
                                    if (fVar14 > 3.00000000)
                                    {
                                        fVar14 = 3.00000000;
                                    }
                                    if (fVar14 < -3.00000000)
                                    {
                                        fVar14 = -3.00000000;
                                    }
                                    fVar13 = fVar14 / 3.00000000;
                                    fVar13 *= l_U209;
                                    SET_DRIVE_TASK_CRUISE_SPEED( sub_3479(), fVar13 * uVar15 );
                                }
                                else
                                {
                                    l_U198 = 0;
                                }
                            }
                        }
                    }
                }
            }
            if ((l_U199) AND (l_U198))
            {
                if (l_U203)
                {
                    if (NOT (IS_CAR_DEAD( l_U212 )))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U212 )))
                        {
                            l_U198 = 0;
                        }
                    }
                }
            }
            if ((l_U199) AND (l_U198))
            {
                if ((l_U197) || (l_U196))
                {
                    if (l_U194)
                    {
                        if (DOES_VEHICLE_EXIST( l_U213 ))
                        {
                            if (NOT (IS_CAR_DEAD( l_U213 )))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U213 ))
                                {
                                    if (IS_BUTTON_PRESSED( 0, 7 ))
                                    {
                                        STOP_PLAYBACK_RECORDED_CAR( l_U213 );
                                        PRINT_NOW( "REC_HIJACKED", 3000, 1 );
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (NOT l_U200)
            {
                if ((l_U199) AND (l_U198))
                {
                    if (l_U197)
                    {
                        if (l_U196)
                        {
                            if (DOES_VEHICLE_EXIST( l_U213 ))
                            {
                                if (NOT (IS_CAR_DEAD( l_U213 )))
                                {
                                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U213 ))
                                    {
                                        CHANGE_PLAYBACK_TO_USE_AI( l_U213 );
                                        l_U200 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( l_U213 ))
            {
                if (NOT (IS_CAR_DEAD( l_U213 )))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U213 )))
                    {
                        l_U200 = 0;
                    }
                }
                else
                {
                    l_U200 = 0;
                }
            }
            else
            {
                l_U200 = 0;
            }
            if (DOES_VEHICLE_EXIST( l_U213 ))
            {
                if (NOT (IS_CAR_DEAD( l_U213 )))
                {
                    if (# -NULL-0xbfc08d( l_U213 ))
                    {
                        if (l_U195)
                        {
                            if (IS_BUTTON_PRESSED( 0, 16 ))
                            {
                                l_U198 = 0;
                            }
                        }
                        if (NOT l_U198)
                        {
                            # -NULL-0xbfbbdd( l_U213 );
                            PRINT_NOW( "REC_STOPPED", 3000, 1 );
                            l_U199 = 0;
                        }
                    }
                }
            }
            break;
            case 2:
            if (IS_PLAYER_PLAYING( sub_611() ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3479() );
            }
            # -NULL-0xbfc0f9();
            if (DOES_VEHICLE_EXIST( l_U212 ))
            {
                if (NOT (IS_CAR_DEAD( l_U212 )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U212 ))
                    {
                        STOP_PLAYBACK_RECORDED_CAR( l_U212 );
                    }
                }
                if (DOES_CHAR_EXIST( l_U211 ))
                {
                    DELETE_CHAR( ref l_U211 );
                }
                DELETE_CAR( ref l_U212 );
            }
            if (DOES_VEHICLE_EXIST( l_U213 ))
            {
                if (NOT (IS_CAR_DEAD( l_U213 )))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U213 ))
                    {
                        STOP_PLAYBACK_RECORDED_CAR( l_U213 );
                    }
                }
                DELETE_CAR( ref l_U213 );
            }
            l_U210 = GET_HASH_KEY( GET_CONTENTS_OF_TEXT_WIDGET( l_U214 ) );
            if (NOT (IS_MODEL_IN_CDIMAGE( l_U210 )))
            {
                SCRIPT_ASSERT( "Invalid Model Name" );
                l_U191 = 0;
                l_U188 = 1;
                break;
            }
            if ((NOT (l_U190 <= 3000)) AND (NOT (l_U190 > 0)))
            {
                SCRIPT_ASSERT( "Invalid New Car Recording Number" );
                l_U191 = 0;
                l_U188 = 1;
                break;
            }
            if ((NOT (l_U189 < 3000)) AND (NOT (l_U189 > 0)))
            {
                SCRIPT_ASSERT( "Invalid Old Car Recording Number" );
                l_U191 = 0;
                l_U188 = 1;
                break;
            }
            REQUEST_CAR_RECORDING( l_U189 );
            REQUEST_MODEL( l_U210 );
            REQUEST_MODEL( sub_4594() );
            while ((NOT (HAS_MODEL_LOADED( sub_4594() ))) || ((NOT (HAS_MODEL_LOADED( l_U210 ))) || (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U189 )))))
            {
                WAIT( 0 );
            }
            GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U189, 0.00000000, ref uVar2 );
            CREATE_CAR( l_U210, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U212, 1 );
            SET_VEHICLE_ALPHA( l_U212, 64 );
            SET_CAR_COLLISION( l_U212, 0 );
            CREATE_CHAR_INSIDE_CAR( l_U212, 4, sub_4594(), ref l_U211 );
            SET_CHAR_COLLISION( l_U211, 0 );
            SET_PED_ALPHA( l_U211, 64 );
            SET_CAR_VISIBLE( l_U212, 0 );
            SET_CHAR_VISIBLE( l_U211, 0 );
            l_U193 = 0;
            CREATE_CAR( l_U210, uVar2._fU0, uVar2._fU4, uVar2._fU8, ref l_U213, 1 );
            if (IS_PLAYER_PLAYING( sub_611() ))
            {
                WARP_CHAR_INTO_CAR( sub_3479(), l_U213 );
            }
            while ((NOT (sub_4912( l_U213, l_U189 ))) || (NOT (sub_4912( l_U212, l_U189 ))))
            {
                WAIT( 0 );
            }
            l_U200 = 0;
            l_U198 = 0;
            l_U199 = 0;
            l_U191 = 0;
            l_U188 = 1;
            if (l_U204)
            {
                l_U193 = 1;
                l_U201 = 1;
                l_U192 = 1;
                l_U194 = 1;
                l_U195 = 1;
                l_U196 = 0;
                l_U203 = 1;
                l_U204 = 0;
            }
            break;
        }
        WAIT( 0 );
    }
    return;
}

void sub_611()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

float sub_2893(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    vector vVar10;
    vector vVar13;
    float fVar16;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4._fU0 );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4._fU4 );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7._fU0, uVar7._fU4, uVar4._fU0, uVar4._fU4, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7._fU8 = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

int sub_3138(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar13 = {vVar7 - vVar4};
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
        uVar16 = {vVar10 - vVar7};
    }
    uVar13._fU8 = 0.00000000;
    uVar16._fU8 = 0.00000000;
    fVar19 = sub_3308( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

float sub_3308(int iParam0, int iParam1)
{
    return ((iParam0->_fU0 * iParam1->_fU0) + (iParam0->_fU4 * iParam1->_fU4)) + (iParam0->_fU8 * iParam1->_fU8);
}

void sub_3479()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_4594()
{
    return -2139064254;
}

int sub_4912(unknown uParam0, int iParam1)
{
    unknown uVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 )))
        {
            START_PLAYBACK_RECORDED_CAR( uParam0, iParam1 );
        }
        else if ((GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 )) == iParam1)
        {
            uVar4 = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( uParam0, 0.00000000 - uVar4 );
            PAUSE_PLAYBACK_RECORDED_CAR( uParam0 );
            return 1;
        }
    }
    return 0;
}

