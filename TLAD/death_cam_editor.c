void main()
{
    l_U1 = 0;
    l_U2 = 0;
    l_U3 = 0;
    l_U4 = 0;
    l_U5 = 0;
    l_U6 = 0;
    l_U7 = 0;
    l_U8 = 0;
    l_U9 = 0;
    l_U16 = 0;
    l_U27 = CREATE_WIDGET_GROUP( "Death cam" );
    ADD_WIDGET_TOGGLE( "terminate script", ref l_U25 );
    ADD_WIDGET_TOGGLE( "restart", ref l_U26 );
    END_WIDGET_GROUP();
    l_U28._fU0 = 5;
    l_U28._fU4 = 5000;
    l_U28._fU8 = 1;
    l_U28._fU12 = 1;
    l_U28._fU16 = 0;
    l_U28._fU24[0]._fU32 = {0.70000000, 2.35300000, -0.62710000};
    l_U28._fU24[0]._fU44 = {-0.37500000, 0.00000000, -0.05000000};
    l_U28._fU24[0]._fU20._fU4 = 0.00000000;
    l_U28._fU24[0]._fU56 = 55.00000000;
    l_U28._fU24[0]._fU76 = 1;
    l_U28._fU24[0]._fU80 = 1;
    l_U28._fU24[1]._fU32 = {1.10000000, 4.37500000, -0.60000000};
    l_U28._fU24[1]._fU44 = {0.00000000, 1.12500000, -0.72500000};
    l_U28._fU24[1]._fU20._fU4 = 0.00000000;
    l_U28._fU24[1]._fU56 = 55.00000000;
    l_U28._fU24[1]._fU76 = 1;
    l_U28._fU24[1]._fU80 = 1;
    l_U28._fU24[2]._fU32 = {-2.10000000, 3.42500000, 0.87500000};
    l_U28._fU24[2]._fU44 = {0.00000000, 1.60000000, -0.67500000};
    l_U28._fU24[2]._fU20._fU4 = 0.00000000;
    l_U28._fU24[2]._fU56 = 55.00000000;
    l_U28._fU24[2]._fU76 = 1;
    l_U28._fU24[2]._fU80 = 1;
    l_U28._fU24[3]._fU32 = {-2.85000000, -1.67500000, 7.80000000};
    l_U28._fU24[3]._fU44 = {0.00000000, 2.17500000, 0.00000000};
    l_U28._fU24[3]._fU20._fU4 = 0.00000000;
    l_U28._fU24[3]._fU56 = 55.00000000;
    l_U28._fU24[3]._fU76 = 1;
    l_U28._fU24[3]._fU80 = 1;
    l_U28._fU24[4]._fU32 = {5.95000000, -4.02500000, 11.10000000};
    l_U28._fU24[4]._fU44 = {0.00000000, 0.00000000, 0.00000000};
    l_U28._fU24[4]._fU20._fU4 = 0.00000000;
    l_U28._fU24[4]._fU56 = 55.00000000;
    l_U28._fU24[4]._fU76 = 1;
    l_U28._fU24[4]._fU80 = 1;
    sub_758( ref l_U28, 0, 0, 1120403456 );
    l_U419 = 0;
    while (l_U25 == 0)
    {
        switch (l_U419)
        {
            case 0:
            l_U26 = 0;
            sub_2967( 0, 0, 1120403456 );
            if (NOT (IS_CHAR_DEAD( sub_809() )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_809() );
                TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( sub_809(), "death", "ped", 4.00000000, 0, 0, 0, 0, 1, 0, 0, -1 );
            }
            SET_TIME_SCALE( 0.50000000 );
            SET_INTERP_FROM_SCRIPT_TO_GAME( 1, 3000 );
            l_U419++;
            break;
            default:
        }
        if ((l_U26 == 0) AND (l_U419 > 0))
        {
            sub_3201( ref l_U28, 0 );
        }
        if (l_U26 == 1)
        {
            l_U419 = 0;
            l_U26 = 0;
        }
        WAIT( 0 );
    }
    sub_17619( ref l_U28 );
    SET_TIME_SCALE( 1.00000000 );
    DELETE_WIDGET_GROUP( l_U27 );
    return;
}

void sub_758(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;

    PRINTSTRING( "INITIALISE_SPLINE_CAM - called \n" );
    l_U21 = sub_809();
    l_U22 = sub_809();
    sub_863( ref l_U12 );
    sub_900( iParam0 );
    if (iParam0->_fU12 == 1)
    {
        sub_2967( uParam1, uParam2, uParam3 );
    }
    l_U1 = 0;
    return;
}

void sub_809()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_863(unknown uParam0)
{
    if (NOT l_U10)
    {
        BEGIN_CAM_COMMANDS( uParam0 );
    }
    return;
}

void sub_900(int iParam0)
{
    PRINTSTRING( "INITIALISE_SPLINE_CAM_WIDGET - called \n" );
    if (iParam0->_fU16 == 0)
    {
        l_U0 = CREATE_WIDGET_GROUP( "Spline Camera Editor" );
        ADD_WIDGET_TOGGLE( "Quit Spline camera editor", ref l_U1 );
        ADD_WIDGET_TOGGLE( "Run spline cam", ref l_U4 );
        ADD_WIDGET_TOGGLE( "Show spline path", ref l_U6 );
        ADD_WIDGET_SLIDER( "Duration of spline", iParam0 + 4, 0, 9999999, 1000 );
        START_NEW_WIDGET_COMBO();
        ADD_TO_WIDGET_COMBO( "LINEAR" );
        ADD_TO_WIDGET_COMBO( "SIN_ACCEL_DECEL" );
        ADD_TO_WIDGET_COMBO( "ACCEL" );
        ADD_TO_WIDGET_COMBO( "DECEL" );
        FINISH_WIDGET_COMBO( "Speed graph", iParam0 + 8 );
        ADD_WIDGET_TOGGLE( "speed is constant", iParam0 + 20 );
        ADD_WIDGET_TOGGLE( "Add new camera node", ref l_U3 );
        ADD_WIDGET_TOGGLE( "Output script to temp_debug.txt", ref l_U8 );
        ADD_WIDGET_TOGGLE( "Output advanced script (data structures)", ref l_U7 );
        ADD_WIDGET_TOGGLE( "Load Example Spline", ref l_U9 );
        ADD_WIDGET_SLIDER( "Smoothing - start camera", ref l_U23, 0, 16, 1 );
        ADD_WIDGET_SLIDER( "Smoothing - end camera", ref l_U24, 0, 16, 1 );
        ADD_WIDGET_TOGGLE( "bApplySplineSmoothing", ref l_U17 );
        END_WIDGET_GROUP();
    }
    sub_1557( iParam0 );
    return;
}

void sub_1557(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    PRINTSTRING( "LOAD_SPLINE_CAM - called \n" );
    if (iParam0->_fU4 == 0)
    {
        iParam0->_fU4 = 5000;
    }
    if (iParam0->_fU16 == 0)
    {
        sub_1636( iParam0 );
    }
    return;
}

void sub_1636(int iParam0)
{
    int I;

    PRINTSTRING( "RECREATE_CAMERA_NODE_WIDGETS - called \n" );
    for ( I = 0; I < 16; I++ )
    {
        if (DOES_WIDGET_GROUP_EXIST( iParam0->_fU24[I]._fU4 ))
        {
            DELETE_WIDGET_GROUP( iParam0->_fU24[I]._fU4 );
            iParam0->_fU24[I]._fU4 = nil;
        }
    }
    for ( I = 0; I < 16; I++ )
    {
        if (iParam0->_fU24[I]._fU88 == 1)
        {
            sub_1813( ref iParam0->_fU24[I], I );
        }
    }
    return;
}

void sub_1813(int iParam0, unknown uParam1)
{
    char[16] cVar4;

    PRINTSTRING( "ADD_CAM_WIDGET - called \n" );
    StrCopy( ref cVar4, "node no ", 16 );
    ConcatString(ref cVar4, uParam1, 16);
    iParam0->_fU4 = CREATE_WIDGET_GROUP( ref cVar4 );
    ADD_WIDGET_FLOAT_SLIDER( "world position.x", (iParam0 + 8) + 0, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world position.y", (iParam0 + 8) + 4, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world position.z", (iParam0 + 8) + 8, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world rotation.x", (iParam0 + 20) + 0, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world rotation.y", (iParam0 + 20) + 4, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world rotation.z", (iParam0 + 20) + 8, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset position.x", (iParam0 + 32) + 0, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset position.y", (iParam0 + 32) + 4, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset position.z", (iParam0 + 32) + 8, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset look at.x", (iParam0 + 44) + 0, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset look at.y", (iParam0 + 44) + 4, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset look at.z", (iParam0 + 44) + 8, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fov", iParam0 + 56, -179.00000000, 179.00000000, 1.00000000 );
    ADD_WIDGET_TOGGLE( "grab coords from debug cam (in debug cam mode!)", iParam0 + 60 );
    ADD_WIDGET_TOGGLE( "view camera at these coords", iParam0 + 64 );
    ADD_WIDGET_TOGGLE( "move this cam up a position", iParam0 + 68 );
    ADD_WIDGET_TOGGLE( "move this cam down a position", iParam0 + 72 );
    ADD_WIDGET_TOGGLE( "Position is relative to player", iParam0 + 76 );
    ADD_WIDGET_TOGGLE( "Look-At is relative to player", iParam0 + 80 );
    ADD_WIDGET_TOGGLE( "Duplicate this camera", iParam0 + 92 );
    ADD_WIDGET_TOGGLE( "uncheck to remove", iParam0 + 88 );
    END_WIDGET_GROUP();
    iParam0->_fU84 = 1;
    return;
}

void sub_2967(unknown uParam0, unknown uParam1, unknown uParam2)
{
    l_U18 = uParam0;
    l_U4 = 1;
    l_U5 = 0;
    l_U11 = uParam1;
    l_U19 = uParam2;
    return;
}

int sub_3201(int iParam0, unknown uParam1)
{
    int I;
    int J;

    if (l_U1 == 0)
    {
        if (l_U2 == 0)
        {
            if (l_U6 == 1)
            {
                sub_3242( iParam0 );
            }
            if (l_U7 == 1)
            {
                sub_5128( iParam0 );
                l_U7 = 0;
            }
            if (l_U8 == 1)
            {
                sub_7598( iParam0 );
                l_U8 = 0;
            }
            if (l_U5 == 0)
            {
                if (l_U17)
                {
                    sub_11038( iParam0, l_U23, l_U24 );
                    l_U17 = 0;
                }
                if (l_U9)
                {
                    iParam0->_fU0 = 4;
                    iParam0->_fU4 = 5000;
                    iParam0->_fU8 = 0;
                    iParam0->_fU12 = 1;
                    iParam0->_fU16 = 0;
                    iParam0->_fU20 = 0;
                    iParam0->_fU24[0]._fU32 = {-0.42460000, -0.72850000, 0.73340000};
                    iParam0->_fU24[0]._fU44 = {0.02950000, 0.13560000, 0.51640000};
                    iParam0->_fU24[0]._fU20._fU4 = 0.00000000;
                    iParam0->_fU24[0]._fU56 = 55.00000000;
                    iParam0->_fU24[0]._fU76 = 1;
                    iParam0->_fU24[0]._fU80 = 1;
                    iParam0->_fU24[0]._fU88 = 1;
                    iParam0->_fU24[1]._fU32 = {0.74010000, -0.56110000, 0.62570000};
                    iParam0->_fU24[1]._fU44 = {-0.04110000, 0.05900000, 0.55290000};
                    iParam0->_fU24[1]._fU20._fU4 = 0.00000000;
                    iParam0->_fU24[1]._fU56 = 55.00000000;
                    iParam0->_fU24[1]._fU76 = 1;
                    iParam0->_fU24[1]._fU80 = 1;
                    iParam0->_fU24[1]._fU88 = 1;
                    iParam0->_fU24[2]._fU32 = {0.59140000, 0.85320000, 0.47720000};
                    iParam0->_fU24[2]._fU44 = {0.02450000, 0.03140000, 0.42050000};
                    iParam0->_fU24[2]._fU20._fU4 = 0.00000000;
                    iParam0->_fU24[2]._fU56 = 55.00000000;
                    iParam0->_fU24[2]._fU76 = 1;
                    iParam0->_fU24[2]._fU80 = 1;
                    iParam0->_fU24[2]._fU88 = 1;
                    iParam0->_fU24[3]._fU32 = {-0.78730000, 0.54190000, 0.61010000};
                    iParam0->_fU24[3]._fU44 = {0.02350000, -0.03250000, 0.49710000};
                    iParam0->_fU24[3]._fU20._fU4 = 0.00000000;
                    iParam0->_fU24[3]._fU56 = 55.00000000;
                    iParam0->_fU24[3]._fU76 = 1;
                    iParam0->_fU24[3]._fU80 = 1;
                    iParam0->_fU24[3]._fU88 = 1;
                    sub_1557( iParam0 );
                    l_U9 = 0;
                }
                for ( I = 0; I < 16; I++ )
                {
                    if (iParam0->_fU24[I]._fU88 == 1)
                    {
                        if (iParam0->_fU24[I]._fU68 == 1)
                        {
                            if (I > 0)
                            {
                                iParam0->_fU24[I]._fU68 = 0;
                                sub_12713( iParam0, I );
                                PRINTSTRING( "*** MOVED CAMERA UP ***" );
                                sub_1636( iParam0 );
                            }
                            else
                            {
                                SCRIPT_ASSERT( "this is already the first camera node!!" );
                                PRINTSTRING( "*** SPLINE PLAYER - this is already the first camera node!! ***\n" );
                                iParam0->_fU24[I]._fU68 = 0;
                            }
                        }
                        if (iParam0->_fU24[I]._fU72 == 1)
                        {
                            if (I < 15)
                            {
                                iParam0->_fU24[I]._fU72 = 0;
                                sub_13052( iParam0, I );
                                PRINTSTRING( "*** MOVED CAMERA DOWN ***" );
                                sub_1636( iParam0 );
                            }
                            else
                            {
                                SCRIPT_ASSERT( "this is already the last camera node!" );
                                PRINTSTRING( "*** SPLINE PLAYER - this is already the last camera node!! ***\n" );
                                iParam0->_fU24[I]._fU72 = 0;
                            }
                        }
                    }
                }
                if (l_U3 == 1)
                {
                    sub_13309( iParam0 );
                    l_U3 = 0;
                }
                for ( I = 0; I < 16; I++ )
                {
                    if (iParam0->_fU24[I]._fU92 == 1)
                    {
                        sub_13663( iParam0, ref iParam0->_fU24[I] );
                        iParam0->_fU24[I]._fU92 = 0;
                    }
                }
                for ( I = 0; I < 16; I++ )
                {
                    if (iParam0->_fU24[I]._fU88 == 1)
                    {
                        sub_13953( iParam0, I );
                    }
                    else if (iParam0->_fU24[I]._fU84 == 1)
                    {
                        PRINTSTRING( "PROCESS_SPLINE_CAM - removing camera node " );
                        PRINTINT( I );
                        PRINTSTRING( "\n" );
                        PRINTSTRING( "PROCESS_SPLINE_CAM - deleting widget group \n" );
                        DELETE_WIDGET_GROUP( iParam0->_fU24[I]._fU4 );
                        iParam0->_fU24[I]._fU4 = nil;
                        iParam0->_fU24[I]._fU84 = 0;
                        iParam0->_fU0--;
                        for ( J = I + 1; J < 16; J++ )
                        {
                            if (iParam0->_fU24[J]._fU88 == 1)
                            {
                                sub_12713( iParam0, J );
                            }
                        }
                        sub_1636( iParam0 );
                    }
                }
                if (l_U4 == 1)
                {
                    sub_14798( iParam0 );
                    DEBUG_OFF();
                    if (sub_16043( iParam0, l_U18, l_U11, l_U19 ))
                    {
                        l_U5 = 1;
                    }
                    else
                    {
                        l_U4 = 0;
                    }
                }
            }
            else if (DOES_CAM_EXIST( l_U13 ))
            {
                if (l_U4 == 1)
                {
                    if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U13 )))
                    {
                        SET_CAM_ACTIVE( l_U13, 0 );
                        SET_CAM_PROPAGATE( l_U13, 0 );
                        DESTROY_ALL_CAMS();
                        sub_14118( 0, 0 );
                        l_U4 = 0;
                        l_U5 = 0;
                        l_U18 = 0.00000000;
                        if (iParam0->_fU16 == 1)
                        {
                            l_U2 = 1;
                        }
                    }
                }
                else
                {
                    SET_CAM_ACTIVE( l_U13, 0 );
                    SET_CAM_PROPAGATE( l_U13, 0 );
                    DESTROY_ALL_CAMS();
                    sub_14118( 0, 0 );
                    l_U18 = 0.00000000;
                    l_U4 = 0;
                    l_U5 = 0;
                }
            }
            else
            {
                DESTROY_ALL_CAMS();
                sub_14118( 0, 0 );
                l_U18 = 0.00000000;
                l_U4 = 0;
                l_U5 = 0;
            }
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    return 1;
}

void sub_3242(int iParam0)
{
    int I;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    for ( I = 0; I < 16; I++ )
    {
        iVar4 = I + 1;
        if (iParam0->_fU24[I]._fU88)
        {
            sub_3295( ref iParam0->_fU24[I] );
        }
        if (iVar4 < 16)
        {
            if (iParam0->_fU24[iVar4]._fU88 == 1)
            {
                if (iParam0->_fU24[I]._fU76)
                {
                    if (DOES_OBJECT_EXIST( l_U20 ))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U20, iParam0->_fU24[I]._fU32._fU0, iParam0->_fU24[I]._fU32._fU4, iParam0->_fU24[I]._fU32._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U21 )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U21 )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U21, iParam0->_fU24[I]._fU32._fU0, iParam0->_fU24[I]._fU32._fU4, iParam0->_fU24[I]._fU32._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                        }
                        else
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U21, ref uVar11 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, iParam0->_fU24[I]._fU32._fU0, iParam0->_fU24[I]._fU32._fU4, iParam0->_fU24[I]._fU32._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                        }
                    }
                }
                else
                {
                    uVar5 = {iParam0->_fU24[I]._fU8};
                }
                if (iParam0->_fU24[iVar4]._fU76)
                {
                    if (DOES_OBJECT_EXIST( l_U20 ))
                    {
                        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U20, iParam0->_fU24[iVar4]._fU32._fU0, iParam0->_fU24[iVar4]._fU32._fU4, iParam0->_fU24[iVar4]._fU32._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U22 )))
                    {
                        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U22 )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U22, iParam0->_fU24[iVar4]._fU32._fU0, iParam0->_fU24[iVar4]._fU32._fU4, iParam0->_fU24[iVar4]._fU32._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                        }
                        else
                        {
                            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U22, ref uVar11 );
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, iParam0->_fU24[iVar4]._fU32._fU0, iParam0->_fU24[iVar4]._fU32._fU4, iParam0->_fU24[iVar4]._fU32._fU8, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                        }
                    }
                }
                else
                {
                    uVar8 = {iParam0->_fU24[iVar4]._fU8};
                }
                LINE( uVar5._fU0, uVar5._fU4, uVar5._fU8, uVar8._fU0, uVar8._fU4, uVar8._fU8 );
            }
        }
    }
    sub_4938();
    return;
}

void sub_3295(int iParam0)
{
    vector vVar3;
    vector vVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    vVar3 = {0.00000000, 0.50000000, 0.00000000};
    if (NOT iParam0->_fU76)
    {
        vVar6 = {iParam0->_fU8};
    }
    else if (DOES_OBJECT_EXIST( l_U20 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U20, ref iParam0->_fU32->_fU0, ref iParam0->_fU32->_fU4, ref iParam0->_fU32->_fU8, ref vVar6.x, ref vVar6.y, ref vVar6.z );
    }
    else if (NOT (IS_CHAR_DEAD( l_U21 )))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U21 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U21, ref iParam0->_fU32->_fU0, ref iParam0->_fU32->_fU4, ref iParam0->_fU32->_fU8, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U21, ref uVar12 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar12, ref iParam0->_fU32->_fU0, ref iParam0->_fU32->_fU4, ref iParam0->_fU32->_fU8, ref vVar6.x, ref vVar6.y, ref vVar6.z );
        }
    }
    DRAW_DEBUG_SPHERE( vVar6.x, vVar6.y, vVar6.z, 0.05000000 );;
    DRAW_DEBUG_SPHERE( vVar6.x, vVar6.y, vVar6.z, 0.10000000 );
    if (NOT iParam0->_fU80)
    {
        sub_3624( ref vVar3, iParam0->_fU20 );
        uVar9 = {vVar6 + vVar3};
    }
    else if (DOES_OBJECT_EXIST( l_U20 ))
    {
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U20, ref iParam0->_fU44->_fU0, ref iParam0->_fU44->_fU4, ref iParam0->_fU44->_fU8, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
    }
    else if (NOT (IS_CHAR_DEAD( l_U22 )))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U22 )))
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U22, ref iParam0->_fU44->_fU0, ref iParam0->_fU44->_fU4, ref iParam0->_fU44->_fU8, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U22, ref uVar12 );
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar12, ref iParam0->_fU44->_fU0, ref iParam0->_fU44->_fU4, ref iParam0->_fU44->_fU8, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
        }
    }
    DRAW_DEBUG_SPHERE( uVar9._fU0, uVar9._fU4, uVar9._fU8, 0.05000000 );;
    LINE( vVar6.x, vVar6.y, vVar6.z, uVar9._fU0, uVar9._fU4, uVar9._fU8 );
    return;
}

void sub_3624(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    uVar6 = COS( sub_3637( uParam1._fU0 ) );
    uVar7 = SIN( sub_3637( uParam1._fU0 ) );
    uVar8._fU4 = (iParam0->_fU4 * uVar6) - (iParam0->_fU8 * uVar7);
    uVar8._fU8 = (iParam0->_fU4 * uVar7) + (iParam0->_fU8 * uVar6);
    iParam0->_fU4 = uVar8._fU4;
    iParam0->_fU8 = uVar8._fU8;
    uVar6 = COS( sub_3637( uParam1._fU4 ) );
    uVar7 = SIN( sub_3637( uParam1._fU4 ) );
    uVar8._fU8 = (iParam0->_fU8 * uVar6) - (iParam0->_fU0 * uVar7);
    uVar8._fU0 = (iParam0->_fU8 * uVar7) + (iParam0->_fU0 * uVar6);
    iParam0->_fU8 = uVar8._fU8;
    iParam0->_fU0 = uVar8._fU0;
    uVar6 = COS( sub_3637( uParam1._fU8 ) );
    uVar7 = SIN( sub_3637( uParam1._fU8 ) );
    uVar8._fU0 = (iParam0->_fU0 * uVar6) - (iParam0->_fU4 * uVar7);
    uVar8._fU4 = (iParam0->_fU0 * uVar7) + (iParam0->_fU4 * uVar6);
    iParam0->_fU0 = uVar8._fU0;
    iParam0->_fU4 = uVar8._fU4;
    return;
}

void sub_3637(unknown Result)
{
    return Result;
}

void sub_4938()
{
    vector vVar2;
    vector vVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar2 = {0.00000000, 0.75000000, 0.00000000};
    if (DOES_CAM_EXIST( l_U13 ))
    {
        GET_CAM_POS( l_U13, ref vVar5.x, ref vVar5.y, ref vVar5.z );
        GET_CAM_ROT( l_U13, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
        sub_3624( ref vVar2, uVar11 );
        DRAW_DEBUG_SPHERE( vVar5.x, vVar5.y, vVar5.z, 0.25000000 );
        uVar8 = {vVar5 + vVar2};
        LINE( vVar5.x, vVar5.y, vVar5.z, uVar8._fU0, uVar8._fU4, uVar8._fU8 );
    }
    return;
}

void sub_5128(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;

    StrCopy( ref cVar5, "", 16 );
    OPEN_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "// ************************************************************************************\n" );
    SAVE_STRING_TO_DEBUG_FILE( "//	SPLINE CAMERA - cut and paste the following into a script						  \n" );
    SAVE_STRING_TO_DEBUG_FILE( "// ************************************************************************************\n" );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "// *** make sure the script you are pasting this into has the following USING files	***\n" );
    SAVE_STRING_TO_DEBUG_FILE( "// USING 'spline_camera_player.sch'													   \n" );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "SPLINE_CAM_DETAILS thisSplineCam\n" );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "// general details" );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "thisSplineCam.iCurrentNumberOfCameraNodes = " );
    SAVE_INT_TO_DEBUG_FILE( iParam0->_fU0 );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "thisSplineCam.spline_time = " );
    SAVE_INT_TO_DEBUG_FILE( iParam0->_fU4 );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "thisSplineCam.spline_graph = " );
    SAVE_INT_TO_DEBUG_FILE( iParam0->_fU8 );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "thisSplineCam.bPlayImmediately = TRUE \n" );
    SAVE_STRING_TO_DEBUG_FILE( "thisSplineCam.bFinishScriptWhenDone = TRUE // set to FALSE to keep open and create widgets for editing. \n" );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "// details for each camera node\n" );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    for ( I = 0; I < 16; I++ )
    {
        if (iParam0->_fU24[I]._fU88 == 1)
        {
            StrCopy( ref cVar5, "", 16 );
            ConcatString(ref cVar5, iVar4, 16);
            SAVE_STRING_TO_DEBUG_FILE( "// camera node " );
            SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
            SAVE_NEWLINE_TO_DEBUG_FILE();
            SAVE_STRING_TO_DEBUG_FILE( " thisSplineCam.Cams[" );
            SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
            SAVE_STRING_TO_DEBUG_FILE( "].bIsActive = TRUE\n" );
            if (iParam0->_fU24[I]._fU76 == 0)
            {
                SAVE_STRING_TO_DEBUG_FILE( " thisSplineCam.Cams[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "].pos = << " );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU8._fU0 );
                SAVE_STRING_TO_DEBUG_FILE( "," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU8._fU4 );
                SAVE_STRING_TO_DEBUG_FILE( "," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU8._fU8 );
                SAVE_STRING_TO_DEBUG_FILE( ">>\n" );
            }
            else
            {
                SAVE_STRING_TO_DEBUG_FILE( " thisSplineCam.Cams[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "].posAsOffset = << " );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU32._fU0 );
                SAVE_STRING_TO_DEBUG_FILE( "," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU32._fU4 );
                SAVE_STRING_TO_DEBUG_FILE( "," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU32._fU8 );
                SAVE_STRING_TO_DEBUG_FILE( ">>\n" );
                SAVE_STRING_TO_DEBUG_FILE( " thisSplineCam.Cams[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "].bPosRelativeToPlayer = TRUE \n" );
            }
            if (iParam0->_fU24[I]._fU80 == 0)
            {
                SAVE_STRING_TO_DEBUG_FILE( " thisSplineCam.Cams[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "].rot = << " );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU20._fU0 );
                SAVE_STRING_TO_DEBUG_FILE( "," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU20._fU4 );
                SAVE_STRING_TO_DEBUG_FILE( "," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU20._fU8 );
                SAVE_STRING_TO_DEBUG_FILE( ">>\n" );
            }
            else
            {
                SAVE_STRING_TO_DEBUG_FILE( " thisSplineCam.Cams[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "].lookatAsOffset = << " );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU44._fU0 );
                SAVE_STRING_TO_DEBUG_FILE( "," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU44._fU4 );
                SAVE_STRING_TO_DEBUG_FILE( "," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU44._fU8 );
                SAVE_STRING_TO_DEBUG_FILE( ">>\n" );
                SAVE_STRING_TO_DEBUG_FILE( " thisSplineCam.Cams[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "].bLookRelativeToPlayer = TRUE \n" );
            }
            SAVE_STRING_TO_DEBUG_FILE( " thisSplineCam.Cams[" );
            SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
            SAVE_STRING_TO_DEBUG_FILE( "].fov = " );
            SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU56 );
            SAVE_NEWLINE_TO_DEBUG_FILE();
            iVar4++;
        }
    }
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "// using the camera - call the following \n" );
    SAVE_STRING_TO_DEBUG_FILE( "INITIALISE_SPLINE_CAM(thisSplineCam)\n" );
    SAVE_STRING_TO_DEBUG_FILE( "WHILE PROCESS_SPLINE_CAM(thisSplineCam) // PROCESS_SPLINE_CAM (to be called every frame) returns false when finished\n" );
    SAVE_STRING_TO_DEBUG_FILE( "    WAIT(0)\n" );
    SAVE_STRING_TO_DEBUG_FILE( "ENDWHILE\n" );
    SAVE_STRING_TO_DEBUG_FILE( "CLEANUP_SPLINE_CAM(thisSplineCam)\n" );
    CLOSE_DEBUG_FILE();
    return;
}

void sub_7598(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    char[16] cVar9;
    int iVar13;

    StrCopy( ref cVar5, "", 16 );
    StrCopy( ref cVar9, "      ", 16 );
    OPEN_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "// ********************************************************************************************\n" );
    SAVE_STRING_TO_DEBUG_FILE( "//	SPLINE CAMERA - Procedure that will run a spline camera (generated by spline_cam_editor)  \n" );
    SAVE_STRING_TO_DEBUG_FILE( "// ********************************************************************************************\n" );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "CAMERA_INDEX spline_cam \n" );
    SAVE_STRING_TO_DEBUG_FILE( "CAMERA_INDEX spline_cam_node[" );
    StrCopy( ref cVar5, "", 16 );
    ConcatString(ref cVar5, iParam0->_fU0, 16);
    SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
    SAVE_STRING_TO_DEBUG_FILE( "] \n" );
    iVar13 = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (iParam0->_fU24[I]._fU88 == 1)
        {
            if ((iParam0->_fU24[I]._fU80 == 1) || (iParam0->_fU24[I]._fU76 == 1))
            {
                iVar13 = 1;
            }
        }
    }
    if (iVar13 == 0)
    {
        SAVE_STRING_TO_DEBUG_FILE( "PROC RUN_SPLINE_CAM()\n" );
    }
    else
    {
        SAVE_STRING_TO_DEBUG_FILE( "PROC RUN_SPLINE_CAM_ON_CHAR(PED_INDEX &TargetChar)\n" );
    }
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
    SAVE_STRING_TO_DEBUG_FILE( "SPLINE_ACTIVATE_SCRIPTED_CAMS(TRUE, TRUE)\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
    SAVE_STRING_TO_DEBUG_FILE( "// set up each camera node \n\n" );
    iVar4 = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (iParam0->_fU24[I]._fU88 == 1)
        {
            StrCopy( ref cVar5, "", 16 );
            ConcatString(ref cVar5, iVar4, 16);
            SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
            SAVE_STRING_TO_DEBUG_FILE( "// node " );
            SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
            SAVE_STRING_TO_DEBUG_FILE( "\n" );
            SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
            SAVE_STRING_TO_DEBUG_FILE( "CREATE_CAM (CAM_TYPE_SCRIPTED, spline_cam_node[" );
            SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
            SAVE_STRING_TO_DEBUG_FILE( "])\n" );
            if (iParam0->_fU24[I]._fU76 == 0)
            {
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_POS(spline_cam_node[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "], " );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU8._fU0 );
                SAVE_STRING_TO_DEBUG_FILE( ", " );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU8._fU4 );
                SAVE_STRING_TO_DEBUG_FILE( ", " );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU8._fU8 );
                SAVE_STRING_TO_DEBUG_FILE( ")\n" );
            }
            else
            {
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "IF NOT IS_CHAR_DEAD(TargetChar)\n" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "ATTACH_CAM_TO_PED(spline_cam_node[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "], TargetChar)\n" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ATTACH_OFFSET(spline_cam_node[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "]," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU32._fU0 );
                SAVE_STRING_TO_DEBUG_FILE( "," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU32._fU4 );
                SAVE_STRING_TO_DEBUG_FILE( "," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU32._fU8 );
                SAVE_STRING_TO_DEBUG_FILE( ")\n" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ATTACH_OFFSET_IS_RELATIVE(spline_cam_node[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "], TRUE)\n" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "ENDIF\n" );
            }
            if (iParam0->_fU24[I]._fU80 == 0)
            {
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ROT(spline_cam_node[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "], " );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU20._fU0 );
                SAVE_STRING_TO_DEBUG_FILE( ", " );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU20._fU4 );
                SAVE_STRING_TO_DEBUG_FILE( ", " );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU20._fU8 );
                SAVE_STRING_TO_DEBUG_FILE( ")\n" );
            }
            else
            {
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "IF NOT IS_CHAR_DEAD(TargetChar)\n" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "ATTACH_CAM_TO_PED(spline_cam_node[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "], TargetChar)\n" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "POINT_CAM_AT_PED(spline_cam_node[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "], TargetChar)\n" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_POINT_OFFSET(spline_cam_node[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "]," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU44._fU0 );
                SAVE_STRING_TO_DEBUG_FILE( "," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU44._fU4 );
                SAVE_STRING_TO_DEBUG_FILE( "," );
                SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU44._fU8 );
                SAVE_STRING_TO_DEBUG_FILE( ")\n" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_POINT_OFFSET_IS_RELATIVE(spline_cam_node[" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
                SAVE_STRING_TO_DEBUG_FILE( "], TRUE)\n" );
                SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
                SAVE_STRING_TO_DEBUG_FILE( "ENDIF\n" );
            }
            SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
            SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_FOV(spline_cam_node[" );
            SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
            SAVE_STRING_TO_DEBUG_FILE( "], " );
            SAVE_FLOAT_TO_DEBUG_FILE( iParam0->_fU24[I]._fU56 );
            SAVE_STRING_TO_DEBUG_FILE( ")\n" );
            SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
            SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ACTIVE(spline_cam_node[" );
            SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
            SAVE_STRING_TO_DEBUG_FILE( "], TRUE)\n\n" );
            iVar4++;
        }
    }
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
    SAVE_STRING_TO_DEBUG_FILE( "// set up the main spline camera \n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
    SAVE_STRING_TO_DEBUG_FILE( "CREATE_CAM (CAM_TYPE_SPLINE, spline_cam)\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_SPLINE_DURATION(spline_cam, " );
    StrCopy( ref cVar5, "", 16 );
    ConcatString(ref cVar5, iParam0->_fU4, 16);
    SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
    SAVE_STRING_TO_DEBUG_FILE( ")\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_SPLINE_SPEED_GRAPH(spline_cam, " );
    StrCopy( ref cVar5, "", 16 );
    ConcatString(ref cVar5, iParam0->_fU8, 16);
    SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
    SAVE_STRING_TO_DEBUG_FILE( ")\n" );
    if (iParam0->_fU20)
    {
        SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_SPLINE_SPEED_CONSTANT(spline_cam, TRUE)\n" );
    }
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
    SAVE_STRING_TO_DEBUG_FILE( "// assign all nodes to spline cam \n" );
    iVar4 = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (iParam0->_fU24[I]._fU88 == 1)
        {
            StrCopy( ref cVar5, "", 16 );
            ConcatString(ref cVar5, iVar4, 16);
            SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
            SAVE_STRING_TO_DEBUG_FILE( "ADD_CAM_SPLINE_NODE(spline_cam, spline_cam_node[" );
            SAVE_STRING_TO_DEBUG_FILE( ref cVar5 );
            SAVE_STRING_TO_DEBUG_FILE( "])\n" );
            iVar4++;
        }
    }
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
    SAVE_STRING_TO_DEBUG_FILE( "// activate the new spline cam \n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ACTIVE(spline_cam,  TRUE)\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar9 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_PROPAGATE(spline_cam, TRUE)\n" );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "ENDPROC\n" );
    CLOSE_DEBUG_FILE();
    return;
}

void sub_11038(int iParam0, int iParam1, int iParam2)
{
    int iVar5;
    int I;
    vector vVar7;
    vector vVar10;
    vector vVar13;
    vector vVar16;
    float fVar19;

    if ((NOT (iParam0->_fU24[iParam1]._fU80 == iParam0->_fU24[iParam2]._fU80)) || (NOT (iParam0->_fU24[iParam1]._fU76 == iParam0->_fU24[iParam2]._fU76)))
    {
        SCRIPT_ASSERT( "2 smoothing camera must have same relative position / look at type \n" );
    }
    else
    {
        iVar5 = iParam2 - iParam1;
        iVar5 += -1;
        if (iVar5 > 0)
        {
            vVar7 = {iParam0->_fU24[iParam2]._fU8 - iParam0->_fU24[iParam1]._fU8};
            vVar10 = {iParam0->_fU24[iParam2]._fU20 - iParam0->_fU24[iParam1]._fU20};
            vVar13 = {iParam0->_fU24[iParam2]._fU32 - iParam0->_fU24[iParam1]._fU32};
            vVar16 = {iParam0->_fU24[iParam2]._fU44 - iParam0->_fU24[iParam1]._fU44};
            fVar19 = iParam0->_fU24[iParam2]._fU56 - iParam0->_fU24[iParam1]._fU56;
            if (vVar10.x > 180.00000000)
            {
                vVar10.x += -360.00000000;
            }
            if (vVar10.x < -180.00000000)
            {
                vVar10.x += 360.00000000;
            }
            if (vVar10.y > 180.00000000)
            {
                vVar10.y += -360.00000000;
            }
            if (vVar10.y < -180.00000000)
            {
                vVar10.y += 360.00000000;
            }
            if (vVar10.z > 180.00000000)
            {
                vVar10.z += -360.00000000;
            }
            if (vVar10.z < -180.00000000)
            {
                vVar10.z += 360.00000000;
            }
            vVar7 = {vVar7 / (TO_FLOAT( iVar5 + 1 ))};
            vVar10 = {vVar10 / (TO_FLOAT( iVar5 + 1 ))};
            vVar13 = {vVar13 / (TO_FLOAT( iVar5 + 1 ))};
            vVar16 = {vVar16 / (TO_FLOAT( iVar5 + 1 ))};
            fVar19 /= TO_FLOAT( iVar5 + 1 );
            for ( I = 0; I < iVar5; I++ )
            {
                iParam0->_fU24[iParam1 + (I + 1)]._fU8 = {iParam0->_fU24[iParam1]._fU8 + (vVar7 * (TO_FLOAT( I + 1 )))};
                iParam0->_fU24[iParam1 + (I + 1)]._fU20 = {iParam0->_fU24[iParam1]._fU20 + (vVar10 * (TO_FLOAT( I + 1 )))};
                iParam0->_fU24[iParam1 + (I + 1)]._fU32 = {iParam0->_fU24[iParam1]._fU32 + (vVar13 * (TO_FLOAT( I + 1 )))};
                iParam0->_fU24[iParam1 + (I + 1)]._fU44 = {iParam0->_fU24[iParam1]._fU44 + (vVar16 * (TO_FLOAT( I + 1 )))};
                iParam0->_fU24[iParam1 + (I + 1)]._fU56 = iParam0->_fU24[iParam1]._fU56 + (fVar19 * (TO_FLOAT( I + 1 )));
                iParam0->_fU24[iParam1 + (I + 1)]._fU76 = iParam0->_fU24[iParam1]._fU76;
                iParam0->_fU24[iParam1 + (I + 1)]._fU80 = iParam0->_fU24[iParam1]._fU80;
            }
            PRINTSTRING( "SMOOTH_CAMERAS_BETWEEN_NODES - Applied \n" );
        }
    }
    return;
}

void sub_12713(int iParam0, int iParam1)
{
    int iVar4;

    if (iParam1 > 0)
    {
        iVar4 = iParam1 - 1;
        sub_12753( ref iParam0->_fU24[iParam1], ref iParam0->_fU24[iVar4] );
    }
    return;
}

void sub_12753(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
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
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;

    sub_12765( uParam0, ref uVar4 );
    sub_12765( uParam1, uParam0 );
    sub_12765( ref uVar4, uParam1 );
    return;
}

void sub_12765(unknown uParam0, unknown uParam1)
{
    (uParam1^) = {(uParam0^)};
    return;
}

void sub_13052(int iParam0, int iParam1)
{
    int iVar4;

    if (iParam1 < 15)
    {
        iVar4 = iParam1 + 1;
        sub_12753( ref iParam0->_fU24[iVar4], ref iParam0->_fU24[iParam1] );
    }
    return;
}

int sub_13309(int iParam0)
{
    int Result;
    int I;

    PRINTSTRING( "ADD_CAM_NODE - called \n" );
    Result = -1;
    for ( I = 0; I < 16; I++ )
    {
        if (iParam0->_fU24[I]._fU88 == 0)
        {
            Result = I;
            I = 16;
        }
    }
    if ((Result < 16) AND (Result > -1))
    {
        if (iParam0->_fU16 == 0)
        {
            sub_1813( ref iParam0->_fU24[Result], Result );
        }
        if (iParam0->_fU24[Result]._fU56 == 0.00000000)
        {
            iParam0->_fU24[Result]._fU56 = 55.00000000;
        }
        iParam0->_fU24[Result]._fU88 = 1;
        PRINTSTRING( "ADD_CAM_NODE - bIsActive set to true for cam " );
        PRINTINT( Result );
        PRINTSTRING( "\n" );
        iParam0->_fU24[Result]._fU84 = 1;
        iParam0->_fU0++;
        return Result;
    }
    return -1;
}

int sub_13663(int iParam0, int iParam1)
{
    int Result;

    PRINTSTRING( "ADD_DUPLICATE_CAM_NODE - called \n" );
    Result = -1;
    Result = sub_13309( iParam0 );
    if (NOT (Result == -1))
    {
        iParam0->_fU24[Result]._fU8 = {iParam1->_fU8};
        iParam0->_fU24[Result]._fU20 = {iParam1->_fU20};
        iParam0->_fU24[Result]._fU32 = {iParam1->_fU32};
        iParam0->_fU24[Result]._fU44 = {iParam1->_fU44};
        iParam0->_fU24[Result]._fU56 = iParam1->_fU56;
        iParam0->_fU24[Result]._fU76 = iParam1->_fU76;
        iParam0->_fU24[Result]._fU80 = iParam1->_fU80;
        return Result;
    }
    return -1;
}

void sub_13953(int iParam0, unknown uParam1)
{
    int iVar4;
    int I;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;

    iVar4 = 0;
    for ( I = 0; I < 16; I++ )
    {
        if (iParam0->_fU24[I]._fU60 == 0)
        {
            if (iParam0->_fU24[I]._fU64 == 1)
            {
                iVar4 = 1;
                I = 16;
            }
        }
    }
    if (iParam0->_fU24[uParam1]._fU60 == 0)
    {
        if (iParam0->_fU24[uParam1]._fU64 == 1)
        {
            if (l_U16 == 0)
            {
                CREATE_CAM( 14, ref l_U15 );
                SET_CAM_ACTIVE( l_U15, 1 );
                SET_CAM_PROPAGATE( l_U15, 1 );
                sub_14118( 1, 1 );
                l_U16 = 1;
            }
            if (iParam0->_fU24[uParam1]._fU76 == 0)
            {
                SET_CAM_POS( l_U15, iParam0->_fU24[uParam1]._fU8._fU0, iParam0->_fU24[uParam1]._fU8._fU4, iParam0->_fU24[uParam1]._fU8._fU8 );
            }
            else if (DOES_OBJECT_EXIST( l_U20 ))
            {
                GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( l_U20, iParam0->_fU24[uParam1]._fU32._fU0, iParam0->_fU24[uParam1]._fU32._fU4, iParam0->_fU24[uParam1]._fU32._fU8, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
            }
            else if (NOT (IS_CHAR_DEAD( l_U21 )))
            {
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U21 )))
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( l_U21, iParam0->_fU24[uParam1]._fU32._fU0, iParam0->_fU24[uParam1]._fU32._fU4, iParam0->_fU24[uParam1]._fU32._fU8, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                }
                else
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U21, ref uVar9 );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar9, iParam0->_fU24[uParam1]._fU32._fU0, iParam0->_fU24[uParam1]._fU32._fU4, iParam0->_fU24[uParam1]._fU32._fU8, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
                }
            }
            SET_CAM_POS( l_U15, uVar6._fU0, uVar6._fU4, uVar6._fU8 );;
            if (iParam0->_fU24[uParam1]._fU80 == 0)
            {
                SET_CAM_ROT( l_U15, iParam0->_fU24[uParam1]._fU20._fU0, iParam0->_fU24[uParam1]._fU20._fU4, iParam0->_fU24[uParam1]._fU20._fU8 );
            }
            else if (DOES_OBJECT_EXIST( l_U20 ))
            {
                POINT_CAM_AT_OBJECT( l_U15, l_U20 );
            }
            else if (NOT (IS_CHAR_DEAD( l_U22 )))
            {
                if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U22 )))
                {
                    POINT_CAM_AT_PED( l_U15, l_U22 );
                }
                else
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U22, ref uVar9 );
                    POINT_CAM_AT_VEHICLE( l_U15, uVar9 );
                }
            }
            SET_CAM_POINT_OFFSET( l_U15, iParam0->_fU24[uParam1]._fU44._fU0, iParam0->_fU24[uParam1]._fU44._fU4, iParam0->_fU24[uParam1]._fU44._fU8 );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U15, 1 );;
            SET_CAM_FOV( l_U15, iParam0->_fU24[uParam1]._fU56 );
        }
    }
    if (iVar4 == 0)
    {
        sub_14798( iParam0 );
    }
    if (iParam0->_fU24[uParam1]._fU60 == 1)
    {
        GET_DEBUG_CAM( ref l_U14 );
        if (NOT (l_U14 == nil))
        {
            if (iParam0->_fU24[uParam1]._fU76 == 0)
            {
                GET_CAM_POS( l_U14, ref iParam0->_fU24[uParam1]._fU8._fU0, ref iParam0->_fU24[uParam1]._fU8._fU4, ref iParam0->_fU24[uParam1]._fU8._fU8 );
            }
            else
            {
                sub_15048( l_U21, ref iParam0->_fU24[uParam1]._fU32, ref uVar6 );
            }
            if (iParam0->_fU24[uParam1]._fU80 == 0)
            {
                GET_CAM_ROT( l_U14, ref iParam0->_fU24[uParam1]._fU20._fU0, ref iParam0->_fU24[uParam1]._fU20._fU4, ref iParam0->_fU24[uParam1]._fU20._fU8 );
            }
            else
            {
                sub_15048( l_U22, ref uVar6, ref iParam0->_fU24[uParam1]._fU44 );
            }
            GET_CAM_FOV( l_U14, ref iParam0->_fU24[uParam1]._fU56 );
        }
        iParam0->_fU24[uParam1]._fU60 = 0;
    }
    return;
}

void sub_14118(unknown uParam0, unknown uParam1)
{
    if (NOT l_U10)
    {
        ACTIVATE_SCRIPTED_CAMS( uParam0, uParam1 );
    }
    return;
}

void sub_14798(int iParam0)
{
    int I;

    if (l_U16 == 1)
    {
        if (DOES_CAM_EXIST( l_U15 ))
        {
            SET_CAM_ACTIVE( l_U15, 0 );
            SET_CAM_PROPAGATE( l_U15, 0 );
            sub_14118( 0, 0 );
            DESTROY_CAM( l_U15 );
        }
        l_U16 = 0;
        for ( I = 0; I < 16; I++ )
        {
            iParam0->_fU24[I]._fU64 = 0;
        }
    }
    return;
}

void sub_15048(unknown uParam0, int iParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    vector vVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;

    GET_CAM_POS( l_U14, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    if (DOES_OBJECT_EXIST( l_U20 ))
    {
        GET_OBJECT_COORDINATES( l_U20, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
        GET_OBJECT_HEADING( l_U20, ref uVar24 );
    }
    else if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar23 );
            GET_CAR_COORDINATES( uVar23, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
            GET_CAR_HEADING( uVar23, ref uVar24 );
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
            GET_CHAR_HEADING( uParam0, ref uVar24 );
        }
    }
    vVar14.x = uVar5._fU0 - uVar11._fU0;
    vVar14.y = uVar5._fU4 - uVar11._fU4;
    vVar14.z = uVar5._fU8 - uVar11._fU8;
    uVar17._fU0 = 0.00000000;
    uVar17._fU4 = 0.00000000;
    uVar17._fU8 = uVar24 * -1.00000000;
    sub_3624( ref vVar14, uVar17 );
    iParam1->_fU0 = vVar14.x;
    iParam1->_fU4 = vVar14.y;
    iParam1->_fU8 = vVar14.z;
    GET_CAM_ROT( l_U14, ref uVar20._fU0, ref uVar20._fU4, ref uVar20._fU8 );
    vVar14 = {0.00000000, 1.00000000, 0.00000000};
    uVar17._fU0 = uVar20._fU0;
    uVar17._fU4 = uVar20._fU4;
    uVar17._fU8 = uVar20._fU8;
    sub_3624( ref vVar14, uVar17 );
    uVar8._fU0 = uVar5._fU0 + vVar14.x;
    uVar8._fU4 = uVar5._fU4 + vVar14.y;
    uVar8._fU8 = uVar5._fU8 + vVar14.z;
    iParam2->_fU0 = uVar8._fU0 - uVar11._fU0;
    iParam2->_fU4 = uVar8._fU4 - uVar11._fU4;
    iParam2->_fU8 = uVar8._fU8 - uVar11._fU8;
    uVar17._fU0 = 0.00000000;
    uVar17._fU4 = 0.00000000;
    uVar17._fU8 = uVar24 * -1.00000000;
    sub_3624( iParam2, uVar17 );
    return;
}

int sub_16043(int iParam0, unknown uParam1, boolean bParam2, unknown uParam3)
{
    int I;
    int iVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (iParam0->_fU4 == 0)
    {
        SCRIPT_ASSERT( "SPLINE CAM NEEDS A TIME GREATER THAN ZERO!" );
        PRINTSTRING( "**** SPLINE CAM NEEDS A TIME GREATER THAN ZERO! ***** \n" );
        return 0;
    }
    PRINTSTRING( "Number of camera nodes = " );
    PRINTINT( iParam0->_fU0 );
    PRINTSTRING( "\n" );
    if (iParam0->_fU0 >= 4)
    {
        sub_14118( 1, 1 );
        for ( I = 0; I < 16; I++ )
        {
            if (iParam0->_fU24[I]._fU88 == 1)
            {
                if (NOT (DOES_CAM_EXIST( iParam0->_fU24[I]._fU0 )))
                {
                    sub_16331( ref iParam0->_fU24[I], 14, bParam2, uParam3 );
                }
                else
                {
                    SET_CAM_ACTIVE( iParam0->_fU24[I]._fU0, 1 );
                    SET_CAM_PROPAGATE( iParam0->_fU24[I]._fU0, 0 );
                }
                iVar7++;
            }
        }
        CREATE_CAM( 25, ref l_U13 );
        SET_CAM_POS( l_U13, iParam0->_fU24[0]._fU8._fU0, iParam0->_fU24[0]._fU8._fU4, iParam0->_fU24[0]._fU8._fU8 );
        SET_CAM_ROT( l_U13, iParam0->_fU24[0]._fU20._fU0, iParam0->_fU24[0]._fU20._fU4, iParam0->_fU24[0]._fU20._fU8 );
        if (bParam2)
        {
            SET_CAM_FAR_CLIP( l_U13, uParam3 );
        }
        SET_CAM_SPLINE_DURATION( l_U13, iParam0->_fU4 );
        SET_CAM_SPLINE_SPEED_GRAPH( l_U13, iParam0->_fU8 );
        SET_CAM_SPLINE_SPEED_CONSTANT( l_U13, iParam0->_fU20 );
        for ( I = 0; I < 16; I++ )
        {
            if (iParam0->_fU24[I]._fU88 == 1)
            {
                ADD_CAM_SPLINE_NODE( l_U13, iParam0->_fU24[I]._fU0 );
            }
        }
        SET_CAM_ACTIVE( l_U13, 1 );
        SET_CAM_PROPAGATE( l_U13, 1 );
        SET_CAM_SPLINE_PROGRESS( l_U13, uParam1 );
        return 1;
        break;
    }
    SCRIPT_ASSERT( "CAN'T START A SPLINE CAM WITH LESS THAN 4 CAMERA NODES!" );
    PRINTSTRING( "**** CAN'T START A SPLINE CAM WITH LESS THAN 4 CAMERA NODES!! ***** \n" );
    return 0;
}

void sub_16331(int iParam0, unknown uParam1, boolean bParam2, unknown uParam3)
{
    unknown uVar6;

    CREATE_CAM( uParam1, iParam0 + 0 );
    if (iParam0->_fU76 == 0)
    {
        SET_CAM_POS( iParam0->_fU0, ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4, ref iParam0->_fU8->_fU8 );
    }
    else if (DOES_OBJECT_EXIST( l_U20 ))
    {
        ATTACH_CAM_TO_OBJECT( iParam0->_fU0, l_U20 );
    }
    else if (NOT (IS_CHAR_DEAD( l_U21 )))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U21 )))
        {
            ATTACH_CAM_TO_PED( iParam0->_fU0, l_U21 );
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U21, ref uVar6 );
            ATTACH_CAM_TO_VEHICLE( iParam0->_fU0, uVar6 );
        }
    }
    SET_CAM_ATTACH_OFFSET( iParam0->_fU0, ref iParam0->_fU32->_fU0, ref iParam0->_fU32->_fU4, ref iParam0->_fU32->_fU8 );
    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( iParam0->_fU0, 1 );;
    if (iParam0->_fU80 == 0)
    {
        SET_CAM_ROT( iParam0->_fU0, ref iParam0->_fU20->_fU0, ref iParam0->_fU20->_fU4, ref iParam0->_fU20->_fU8 );
    }
    else if (DOES_OBJECT_EXIST( l_U20 ))
    {
        POINT_CAM_AT_OBJECT( iParam0->_fU0, l_U20 );
    }
    else if (NOT (IS_CHAR_DEAD( l_U22 )))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( l_U22 )))
        {
            POINT_CAM_AT_PED( iParam0->_fU0, l_U22 );
        }
        else
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U22, ref uVar6 );
            POINT_CAM_AT_VEHICLE( iParam0->_fU0, uVar6 );
        }
    }
    SET_CAM_POINT_OFFSET( iParam0->_fU0, ref iParam0->_fU44->_fU0, ref iParam0->_fU44->_fU4, ref iParam0->_fU44->_fU8 );
    SET_CAM_POINT_OFFSET_IS_RELATIVE( iParam0->_fU0, 1 );;
    if (bParam2)
    {
        SET_CAM_FAR_CLIP( iParam0->_fU0, uParam3 );
    }
    SET_CAM_FOV( iParam0->_fU0, iParam0->_fU56 );
    SET_CAM_ACTIVE( iParam0->_fU0, 1 );
    return;
}

void sub_17619(int iParam0)
{
    int I;

    sub_17630( iParam0 );
    for ( I = 0; I < 16; I++ )
    {
        if (DOES_CAM_EXIST( iParam0->_fU24[I]._fU0 ))
        {
            DESTROY_CAM( iParam0->_fU24[I]._fU0 );
        }
    }
    if (DOES_CAM_EXIST( l_U13 ))
    {
        DESTROY_CAM( l_U13 );
    }
    if (DOES_CAM_EXIST( l_U14 ))
    {
        DESTROY_CAM( l_U14 );
    }
    if (DOES_CAM_EXIST( l_U15 ))
    {
        DESTROY_CAM( l_U15 );
    }
    sub_18103( ref l_U12 );
    for ( I = 0; I < 16; I++ )
    {
        if (DOES_WIDGET_GROUP_EXIST( iParam0->_fU24[I]._fU4 ))
        {
            DELETE_WIDGET_GROUP( iParam0->_fU24[I]._fU4 );
            iParam0->_fU24[I]._fU4 = nil;
        }
    }
    if (DOES_WIDGET_GROUP_EXIST( l_U0 ))
    {
        DELETE_WIDGET_GROUP( l_U0 );
        l_U0 = nil;
    }
    return;
}

void sub_17630(int iParam0)
{
    int I;

    iParam0->_fU0 = 0;
    iParam0->_fU4 = 0;
    iParam0->_fU8 = 0;
    iParam0->_fU12 = 0;
    iParam0->_fU16 = 0;
    iParam0->_fU20 = 0;
    for ( I = 0; I < 16; I++ )
    {
        iParam0->_fU24[I]._fU8 = {0.00000000, 0.00000000, 0.00000000};
        iParam0->_fU24[I]._fU20 = {0.00000000, 0.00000000, 0.00000000};
        iParam0->_fU24[I]._fU32 = {0.00000000, 0.00000000, 0.00000000};
        iParam0->_fU24[I]._fU44 = {0.00000000, 0.00000000, 0.00000000};
        iParam0->_fU24[I]._fU56 = 45.00000000;
        iParam0->_fU24[I]._fU60 = 0;
        iParam0->_fU24[I]._fU64 = 0;
        iParam0->_fU24[I]._fU68 = 0;
        iParam0->_fU24[I]._fU72 = 0;
        iParam0->_fU24[I]._fU76 = 0;
        iParam0->_fU24[I]._fU80 = 0;
        iParam0->_fU24[I]._fU84 = 0;
        iParam0->_fU24[I]._fU88 = 0;
        iParam0->_fU24[I]._fU92 = 0;
    }
    return;
}

void sub_18103(unknown uParam0)
{
    if (NOT l_U10)
    {
        END_CAM_COMMANDS( uParam0 );
    }
    return;
}

