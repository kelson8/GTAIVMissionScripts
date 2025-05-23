void main()
{
    l_U23 = 5000;
    l_U24 = 0;
    l_U25 = 1;
    l_U26 = 1;
    l_U27 = 1;
    l_U28 = 1;
    sub_35();
    while (sub_2397())
    {
        WAIT( 0 );
    }
    sub_9394();
    return;
}

void sub_35()
{
    l_U29[0] = 55.00000000;
    l_U29[1] = 55.00000000;
    BEGIN_CAM_COMMANDS( ref l_U22 );
    l_U32 = CREATE_WIDGET_GROUP( "Interp Camera Editor" );
    ADD_WIDGET_TOGGLE( "Quit Interp camera editor", ref l_U0 );
    ADD_WIDGET_TOGGLE( "Run Interp cam", ref l_U1 );
    CREATE_WIDGET_GROUP( "Command Parameters" );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "LINEAR" );
    ADD_TO_WIDGET_COMBO( "SIN_ACCEL_DECEL" );
    ADD_TO_WIDGET_COMBO( "ACCEL" );
    ADD_TO_WIDGET_COMBO( "DECEL" );
    ADD_TO_WIDGET_COMBO( "CUSTOM" );
    FINISH_WIDGET_COMBO( "graphTypePos", ref l_U26 );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "LINEAR" );
    ADD_TO_WIDGET_COMBO( "SIN_ACCEL_DECEL" );
    ADD_TO_WIDGET_COMBO( "ACCEL" );
    ADD_TO_WIDGET_COMBO( "DECEL" );
    ADD_TO_WIDGET_COMBO( "CUSTOM" );
    FINISH_WIDGET_COMBO( "graphTypeRot", ref l_U25 );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "FREEZE" );
    ADD_TO_WIDGET_COMBO( "RUN" );
    ADD_TO_WIDGET_COMBO( "PREDICT" );
    FINISH_WIDGET_COMBO( "srcState", ref l_U27 );
    START_NEW_WIDGET_COMBO();
    ADD_TO_WIDGET_COMBO( "FREEZE" );
    ADD_TO_WIDGET_COMBO( "RUN" );
    ADD_TO_WIDGET_COMBO( "PREDICT" );
    FINISH_WIDGET_COMBO( "dstState", ref l_U28 );
    ADD_WIDGET_SLIDER( "Duration", ref l_U23, 0, 9999999, 1000 );
    ADD_WIDGET_SLIDER( "Delay", ref l_U24, 0, 9999999, 1000 );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "Start Camera" );
    ADD_WIDGET_FLOAT_SLIDER( "world position.x", ref l_U37[0]._fU0, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world position.y", ref l_U37[0]._fU4, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world position.z", ref l_U37[0]._fU8, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world rotation.x", ref l_U44[0]._fU0, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world rotation.y", ref l_U44[0]._fU4, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world rotation.z", ref l_U44[0]._fU8, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset position.x", ref l_U51[0]._fU0, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset position.y", ref l_U51[0]._fU4, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset position.z", ref l_U51[0]._fU8, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset look at.x", ref l_U58[0]._fU0, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset look at.y", ref l_U58[0]._fU4, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset look at.z", ref l_U58[0]._fU8, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fov", ref l_U29[0], -179.00000000, 179.00000000, 1.00000000 );
    ADD_WIDGET_TOGGLE( "grab coords from debug cam (in debug cam mode!)", ref l_U7[0] );
    ADD_WIDGET_TOGGLE( "view camera at these coords", ref l_U10[0] );
    ADD_WIDGET_TOGGLE( "Coords are relative to player", ref l_U13[0] );
    END_WIDGET_GROUP();
    CREATE_WIDGET_GROUP( "End Camera" );
    ADD_WIDGET_FLOAT_SLIDER( "world position.x", ref l_U37[1]._fU0, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world position.y", ref l_U37[1]._fU4, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world position.z", ref l_U37[1]._fU8, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world rotation.x", ref l_U44[1]._fU0, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world rotation.y", ref l_U44[1]._fU4, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "world rotation.z", ref l_U44[1]._fU8, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset position.x", ref l_U51[1]._fU0, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset position.y", ref l_U51[1]._fU4, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset position.z", ref l_U51[1]._fU8, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset look at.x", ref l_U58[1]._fU0, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset look at.y", ref l_U58[1]._fU4, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "offset look at.z", ref l_U58[1]._fU8, -99999.90000000, 99999.90000000, 0.10000000 );
    ADD_WIDGET_FLOAT_SLIDER( "fov", ref l_U29[1], -179.00000000, 179.00000000, 1.00000000 );
    ADD_WIDGET_TOGGLE( "grab coords from debug cam (in debug cam mode!)", ref l_U7[1] );
    ADD_WIDGET_TOGGLE( "view camera at these coords", ref l_U10[1] );
    ADD_WIDGET_TOGGLE( "Coords are relative to player", ref l_U13[1] );
    END_WIDGET_GROUP();
    ADD_WIDGET_TOGGLE( "Output script to temp_debug.txt", ref l_U4 );
    END_WIDGET_GROUP();
    return;
}

int sub_2397()
{
    if (NOT l_U0)
    {
        if (l_U4)
        {
            sub_2423();
            l_U4 = 0;
        }
        if (NOT l_U2)
        {
            sub_6672( 0 );
            sub_6672( 1 );
            if (l_U1 == 1)
            {
                sub_7171();
                DEBUG_OFF();
                l_U2 = 1;
                l_U5 = 0;
            }
        }
        else if (NOT l_U5)
        {
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            CREATE_CAM( 14, ref l_U16[0] );
            if (NOT l_U13[0])
            {
                SET_CAM_POS( l_U16[0], l_U37[0]._fU0, l_U37[0]._fU4, l_U37[0]._fU8 );
                SET_CAM_ROT( l_U16[0], l_U44[0]._fU0, l_U44[0]._fU4, l_U44[0]._fU8 );
            }
            else if (IS_PLAYER_PLAYING( sub_8424() ))
            {
                ATTACH_CAM_TO_PED( l_U16[0], sub_6946() );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U16[0], 1 );
                POINT_CAM_AT_PED( l_U16[0], sub_6946() );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U16[0], 1 );
            }
            SET_CAM_FOV( l_U16[0], l_U29[0] );
            SET_CAM_ACTIVE( l_U16[0], 1 );
            SET_CAM_PROPAGATE( l_U16[0], 0 );
            CREATE_CAM( 14, ref l_U16[1] );
            if (NOT l_U13[1])
            {
                SET_CAM_POS( l_U16[1], l_U37[1]._fU0, l_U37[1]._fU4, l_U37[1]._fU8 );
                SET_CAM_ROT( l_U16[1], l_U44[1]._fU0, l_U44[1]._fU4, l_U44[1]._fU8 );
            }
            else if (IS_PLAYER_PLAYING( sub_8424() ))
            {
                ATTACH_CAM_TO_PED( l_U16[1], sub_6946() );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U16[1], 1 );
                POINT_CAM_AT_PED( l_U16[1], sub_6946() );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U16[1], 1 );
            }
            SET_CAM_FOV( l_U16[1], l_U29[1] );
            SET_CAM_ACTIVE( l_U16[1], 1 );
            SET_CAM_PROPAGATE( l_U16[1], 0 );
            CREATE_CAM( 3, ref l_U19 );
            switch (l_U26)
            {
                case 0:
                l_U33 = 0;
                break;
                case 1:
                l_U33 = 1;
                break;
                case 2:
                l_U33 = 2;
                break;
                case 3:
                l_U33 = 3;
                break;
                case 4:
                l_U33 = 4;
                break;
            }
            switch (l_U25)
            {
                case 0:
                l_U34 = 0;
                break;
                case 1:
                l_U34 = 1;
                break;
                case 2:
                l_U34 = 2;
                break;
                case 3:
                l_U34 = 3;
                break;
                case 4:
                l_U34 = 4;
                break;
            }
            switch (l_U27)
            {
                case 0:
                l_U35 = 0;
                break;
                case 1:
                l_U35 = 1;
                break;
                case 2:
                l_U35 = 2;
                break;
            }
            switch (l_U28)
            {
                case 0:
                l_U36 = 0;
                break;
                case 1:
                l_U36 = 1;
                break;
                case 2:
                l_U36 = 2;
                break;
            }
            SET_CAM_INTERP_STYLE_DETAILED( l_U19, l_U33, l_U34, l_U35, l_U36 );
            SET_CAM_INTERP_STYLE_CORE( l_U19, l_U16[0], l_U16[1], l_U23, l_U24 );
            SET_CAM_ACTIVE( l_U19, 1 );
            SET_CAM_PROPAGATE( l_U19, 1 );
            l_U5 = 1;
        }
        else if (DOES_CAM_EXIST( l_U19 ))
        {
            if (NOT (IS_SPECIFIC_CAM_INTERPOLATING( l_U19 )))
            {
                DESTROY_CAM( l_U19 );
                DESTROY_CAM( l_U16[0] );
                DESTROY_CAM( l_U16[1] );
                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            }
        }
        else
        {
            l_U5 = 0;
            l_U2 = 0;
            l_U1 = 0;
        };;;
    }
    else
    {
        return 0;
    }
    return 1;
}

void sub_2423()
{
    char[16] cVar2;
    int iVar6;

    StrCopy( ref cVar2, "      ", 16 );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "// ********************************************************************************************\n" );
    SAVE_STRING_TO_DEBUG_FILE( "//	INTERP CAMERA - Procedure that will run a interp camera (generated by interp_cam_editor)  \n" );
    SAVE_STRING_TO_DEBUG_FILE( "// ********************************************************************************************\n" );
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( "CAMERA_INDEX start_cam \n" );
    SAVE_STRING_TO_DEBUG_FILE( "CAMERA_INDEX end_cam \n" );
    SAVE_STRING_TO_DEBUG_FILE( "CAMERA_INDEX interp_cam \n" );
    iVar6 = 0;
    if ((l_U13[1]) || (l_U13[0]))
    {
        iVar6 = 1;
    }
    if (iVar6 == 0)
    {
        SAVE_STRING_TO_DEBUG_FILE( "PROC RUN_INTERP_CAM()\n" );
    }
    else
    {
        SAVE_STRING_TO_DEBUG_FILE( "PROC RUN_INTERP_CAM_RELATIVE_TO_CHAR(PED_INDEX &TargetChar)\n" );
    }
    SAVE_STRING_TO_DEBUG_FILE( "\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "ACTIVATE_SCRIPTED_CAMS(TRUE, TRUE)\n\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "// start cam \n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "CREATE_CAM (CAM_TYPE_SCRIPTED, cam_id[0]) \n" );
    if (NOT l_U13[0])
    {
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_POS(start_cam, " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U37[0]._fU0 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U37[0]._fU4 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U37[0]._fU8 );
        SAVE_STRING_TO_DEBUG_FILE( ")\n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ROT(start_cam, " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U44[0]._fU0 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U44[0]._fU4 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U44[0]._fU8 );
        SAVE_STRING_TO_DEBUG_FILE( ")\n" );
    }
    else
    {
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "IF NOT IS_CHAR_DEAD(TargetChar)\n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "ATTACH_CAM_TO_PED(start_cam, TargetChar) \n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ATTACH_OFFSET(start_cam, " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U51[0]._fU0 );
        SAVE_STRING_TO_DEBUG_FILE( "," );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U51[0]._fU4 );
        SAVE_STRING_TO_DEBUG_FILE( "," );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U51[0]._fU8 );
        SAVE_STRING_TO_DEBUG_FILE( ")\n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ATTACH_OFFSET_IS_RELATIVE(start_cam, TRUE) \n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "POINT_CAM_AT_PED(start_cam, TargetChar) \n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_POINT_OFFSET(start_cam, " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U58[0]._fU0 );
        SAVE_STRING_TO_DEBUG_FILE( "," );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U58[0]._fU4 );
        SAVE_STRING_TO_DEBUG_FILE( "," );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U58[0]._fU8 );
        SAVE_STRING_TO_DEBUG_FILE( ")\n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_POINT_OFFSET_IS_RELATIVE(start_cam, TRUE) \n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "ENDIF\n" );
    }
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_FOV(start_cam, " );
    SAVE_FLOAT_TO_DEBUG_FILE( l_U29[0] );
    SAVE_STRING_TO_DEBUG_FILE( ")\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ACTIVE(start_cam, TRUE) \n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_PROPAGATE(start_cam, FALSE) \n" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "// end cam \n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "CREATE_CAM (CAM_TYPE_SCRIPTED, end_cam) \n" );
    if (NOT l_U13[0])
    {
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_POS(end_cam, " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U37[1]._fU0 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U37[1]._fU4 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U37[1]._fU8 );
        SAVE_STRING_TO_DEBUG_FILE( ")\n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ROT(end_cam, " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U44[1]._fU0 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U44[1]._fU4 );
        SAVE_STRING_TO_DEBUG_FILE( ", " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U44[1]._fU8 );
        SAVE_STRING_TO_DEBUG_FILE( ")\n" );
    }
    else
    {
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "IF NOT IS_CHAR_DEAD(TargetChar)\n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "ATTACH_CAM_TO_PED(end_cam, TargetChar) \n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ATTACH_OFFSET(end_cam, " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U51[1]._fU0 );
        SAVE_STRING_TO_DEBUG_FILE( "," );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U51[1]._fU4 );
        SAVE_STRING_TO_DEBUG_FILE( "," );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U51[1]._fU8 );
        SAVE_STRING_TO_DEBUG_FILE( ")\n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ATTACH_OFFSET_IS_RELATIVE(end_cam, TRUE) \n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "POINT_CAM_AT_PED(end_cam, TargetChar) \n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_POINT_OFFSET(end_cam, " );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U58[1]._fU0 );
        SAVE_STRING_TO_DEBUG_FILE( "," );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U58[1]._fU4 );
        SAVE_STRING_TO_DEBUG_FILE( "," );
        SAVE_FLOAT_TO_DEBUG_FILE( l_U58[1]._fU8 );
        SAVE_STRING_TO_DEBUG_FILE( ")\n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_POINT_OFFSET_IS_RELATIVE(end_cam, TRUE) \n" );
        SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
        SAVE_STRING_TO_DEBUG_FILE( "ENDIF\n" );
    }
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_FOV(end_cam, " );
    SAVE_FLOAT_TO_DEBUG_FILE( l_U29[1] );
    SAVE_STRING_TO_DEBUG_FILE( ")\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ACTIVE(end_cam, TRUE) \n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_PROPAGATE(end_cam, FALSE) \n" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "// interp cam \n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "CREATE_CAM (CAM_TYPE_INTERPOLATION, interp_cam) \n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_INTERP_STYLE_DETAILED(interp_cam, " );
    switch (l_U25)
    {
        case 0:
        SAVE_STRING_TO_DEBUG_FILE( "GRAPH_TYPE_LINEAR, " );
        break;
        case 1:
        SAVE_STRING_TO_DEBUG_FILE( "GRAPH_TYPE_SIN_ACCEL_DECEL, " );
        break;
        case 2:
        SAVE_STRING_TO_DEBUG_FILE( "GRAPH_TYPE_ACCEL, " );
        break;
        case 3:
        SAVE_STRING_TO_DEBUG_FILE( "GRAPH_TYPE_DECEL, " );
        break;
        case 4:
        SAVE_STRING_TO_DEBUG_FILE( "GRAPH_TYPE_CUSTOM, " );
        break;
    }
    switch (l_U26)
    {
        case 0:
        SAVE_STRING_TO_DEBUG_FILE( "GRAPH_TYPE_LINEAR, " );
        break;
        case 1:
        SAVE_STRING_TO_DEBUG_FILE( "GRAPH_TYPE_SIN_ACCEL_DECEL, " );
        break;
        case 2:
        SAVE_STRING_TO_DEBUG_FILE( "GRAPH_TYPE_ACCEL, " );
        break;
        case 3:
        SAVE_STRING_TO_DEBUG_FILE( "GRAPH_TYPE_DECEL, " );
        break;
        case 4:
        SAVE_STRING_TO_DEBUG_FILE( "GRAPH_TYPE_CUSTOM, " );
        break;
    }
    switch (l_U27)
    {
        case 0:
        SAVE_STRING_TO_DEBUG_FILE( "CAM_INTERP_SET_CAMERA_FREEZE, " );
        break;
        case 1:
        SAVE_STRING_TO_DEBUG_FILE( "CAM_INTERP_SET_CAMERA_RUN, " );
        break;
        case 2:
        SAVE_STRING_TO_DEBUG_FILE( "CAM_INTERP_SET_CAMERA_PREDICT, " );
        break;
    }
    switch (l_U28)
    {
        case 0:
        SAVE_STRING_TO_DEBUG_FILE( "CAM_INTERP_SET_CAMERA_FREEZE) \n" );
        break;
        case 1:
        SAVE_STRING_TO_DEBUG_FILE( "CAM_INTERP_SET_CAMERA_RUN) \n" );
        break;
        case 2:
        SAVE_STRING_TO_DEBUG_FILE( "CAM_INTERP_SET_CAMERA_PREDICT) \n" );
        break;
    }
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_INTERP_STYLE_CORE(interp_cam, start_cam, end_cam, " );
    SAVE_INT_TO_DEBUG_FILE( l_U23 );
    SAVE_STRING_TO_DEBUG_FILE( ", " );
    SAVE_INT_TO_DEBUG_FILE( l_U24 );
    SAVE_STRING_TO_DEBUG_FILE( ") \n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ACTIVE(interp_cam, TRUE)\n" );
    SAVE_STRING_TO_DEBUG_FILE( ref cVar2 );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_PROPAGATE(interp_cam, TRUE)\n\n" );
    SAVE_STRING_TO_DEBUG_FILE( "ENDPROC\n" );
    return;
}

void sub_6672(unknown uParam0)
{
    int iVar3;
    int I;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    iVar3 = 0;
    for ( I = 0; I < 2; I++ )
    {
        if (l_U7[I] == 0)
        {
            if (l_U10[I] == 1)
            {
                iVar3 = 1;
                I = 2;
            }
        }
    }
    if (l_U7[uParam0] == 0)
    {
        if (l_U10[uParam0] == 1)
        {
            if (l_U6 == 0)
            {
                CREATE_CAM( 14, ref l_U20 );
                SET_CAM_ACTIVE( l_U20, 1 );
                SET_CAM_PROPAGATE( l_U20, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                l_U6 = 1;
            }
            if (l_U13[uParam0] == 0)
            {
                SET_CAM_POS( l_U20, l_U37[uParam0]._fU0, l_U37[uParam0]._fU4, l_U37[uParam0]._fU8 );
                SET_CAM_ROT( l_U20, l_U44[uParam0]._fU0, l_U44[uParam0]._fU4, l_U44[uParam0]._fU8 );
                SET_CAM_FOV( l_U20, l_U29[uParam0] );
            }
            else if (NOT (IS_CHAR_DEAD( sub_6946() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_6946(), l_U51[uParam0]._fU0, l_U51[uParam0]._fU4, l_U51[uParam0]._fU8, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                SET_CAM_POS( l_U20, uVar5._fU0, uVar5._fU4, uVar5._fU8 );
                POINT_CAM_AT_PED( l_U20, sub_6946() );
                SET_CAM_POINT_OFFSET( l_U20, l_U58[uParam0]._fU0, l_U58[uParam0]._fU4, l_U58[uParam0]._fU8 );
                SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U20, 1 );
                SET_CAM_FOV( l_U20, l_U29[uParam0] );
            }
        }
    }
    if (iVar3 == 0)
    {
        sub_7171();
    }
    if (l_U7[uParam0] == 1)
    {
        if (l_U13[uParam0] == 0)
        {
            GET_DEBUG_CAM( ref l_U21 );
            if (NOT (l_U21 == nil))
            {
                GET_CAM_POS( l_U21, ref l_U37[uParam0]._fU0, ref l_U37[uParam0]._fU4, ref l_U37[uParam0]._fU8 );
                GET_CAM_ROT( l_U21, ref l_U44[uParam0]._fU0, ref l_U44[uParam0]._fU4, ref l_U44[uParam0]._fU8 );
                GET_CAM_FOV( l_U21, ref l_U29[uParam0] );
            }
        }
        else
        {
            GET_DEBUG_CAM( ref l_U21 );
            if (NOT (l_U21 == nil))
            {
                sub_7466( sub_6946(), ref l_U51[uParam0], ref l_U58[uParam0] );
                GET_CAM_FOV( l_U21, ref l_U29[uParam0] );
            }
        }
        l_U7[uParam0] = 0;
    }
    return;
}

void sub_6946()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_7171()
{
    int I;

    if (l_U6 == 1)
    {
        SET_CAM_ACTIVE( l_U20, 0 );
        SET_CAM_PROPAGATE( l_U20, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_CAM( l_U20 );
        l_U6 = 0;
        for ( I = 0; I < 2; I++ )
        {
            l_U10[I] = 0;
        }
    }
    return;
}

void sub_7466(unknown uParam0, int iParam1, int iParam2)
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

    GET_CAM_POS( l_U21, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
        GET_CHAR_HEADING( uParam0, ref uVar23 );
    }
    vVar14.x = uVar5._fU0 - uVar11._fU0;
    vVar14.y = uVar5._fU4 - uVar11._fU4;
    vVar14.z = uVar5._fU8 - uVar11._fU8;
    uVar17._fU0 = 0.00000000;
    uVar17._fU4 = 0.00000000;
    uVar17._fU8 = uVar23 * -1.00000000;
    sub_7627( ref vVar14, uVar17 );
    iParam1->_fU0 = vVar14.x;
    iParam1->_fU4 = vVar14.y;
    iParam1->_fU8 = vVar14.z;
    GET_CAM_ROT( l_U21, ref uVar20._fU0, ref uVar20._fU4, ref uVar20._fU8 );
    vVar14 = {0.00000000, 1.00000000, 0.00000000};
    uVar17._fU0 = uVar20._fU0;
    uVar17._fU4 = uVar20._fU4;
    uVar17._fU8 = uVar20._fU8;
    sub_7627( ref vVar14, uVar17 );
    uVar8._fU0 = uVar5._fU0 + vVar14.x;
    uVar8._fU4 = uVar5._fU4 + vVar14.y;
    uVar8._fU8 = uVar5._fU8 + vVar14.z;
    iParam2->_fU0 = uVar8._fU0 - uVar11._fU0;
    iParam2->_fU4 = uVar8._fU4 - uVar11._fU4;
    iParam2->_fU8 = uVar8._fU8 - uVar11._fU8;
    uVar17._fU0 = 0.00000000;
    uVar17._fU4 = 0.00000000;
    uVar17._fU8 = uVar23 * -1.00000000;
    sub_7627( iParam2, uVar17 );
    return;
}

void sub_7627(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    uVar6 = COS( sub_7640( uParam1._fU0 ) );
    uVar7 = SIN( sub_7640( uParam1._fU0 ) );
    uVar8._fU4 = (iParam0->_fU4 * uVar6) - (iParam0->_fU8 * uVar7);
    uVar8._fU8 = (iParam0->_fU4 * uVar7) + (iParam0->_fU8 * uVar6);
    iParam0->_fU4 = uVar8._fU4;
    iParam0->_fU8 = uVar8._fU8;
    uVar6 = COS( sub_7640( uParam1._fU4 ) );
    uVar7 = SIN( sub_7640( uParam1._fU4 ) );
    uVar8._fU8 = (iParam0->_fU8 * uVar6) - (iParam0->_fU0 * uVar7);
    uVar8._fU0 = (iParam0->_fU8 * uVar7) + (iParam0->_fU0 * uVar6);
    iParam0->_fU8 = uVar8._fU8;
    iParam0->_fU0 = uVar8._fU0;
    uVar6 = COS( sub_7640( uParam1._fU8 ) );
    uVar7 = SIN( sub_7640( uParam1._fU8 ) );
    uVar8._fU0 = (iParam0->_fU0 * uVar6) - (iParam0->_fU4 * uVar7);
    uVar8._fU4 = (iParam0->_fU0 * uVar7) + (iParam0->_fU4 * uVar6);
    iParam0->_fU0 = uVar8._fU0;
    iParam0->_fU4 = uVar8._fU4;
    return;
}

void sub_7640(unknown Result)
{
    return Result;
}

void sub_8424()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_9394()
{
    END_CAM_COMMANDS( ref l_U22 );
    DELETE_WIDGET_GROUP( l_U32 );
    return;
}

