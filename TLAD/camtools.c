void main()
{
    l_U714 = 50.00000000;
    l_U715 = 50.00000000;
    l_U716 = 50.00000000;
    l_U717 = 0.00000000;
    l_U718 = 0.00000000;
    l_U719 = 0.00000000;
    l_U720 = 70.00000000;
    l_U721 = {50.00000000, 50.00000000, 50.00000000};
    l_U724 = {0.00000000, 0.00000000, 0.00000000};
    l_U727 = 70.00000000;
    l_U737 = 1;
    l_U738 = 0;
    l_U739 = 0;
    l_U741 = 0;
    l_U742 = 0;
    l_U743 = 0;
    l_U744 = 0;
    l_U745 = 0;
    l_U746 = 1;
    l_U747 = 0;
    l_U750 = 0;
    l_U751 = 0;
    l_U752 = 0;
    l_U753 = 0;
    l_U760 = 0.01000000;
    l_U761 = 0.01000000;
    l_U762 = 0.31000000;
    l_U763 = 0.31000000;
    l_U764 = 0.00000000;
    l_U765 = 0.00000000;
    l_U766 = 0.00000000;
    sub_285();
    sub_478();
    sub_623();
    while (true)
    {
        sub_729();
        if (l_U742)
        {
            sub_952();
            sub_1023();
        }
        else if (l_U758)
        {
            DELETE_WIDGET_GROUP( l_U767 );
            DELETE_WIDGET_GROUP( l_U768 );
            l_U758 = 0;
        }
        sub_1896();
        sub_7393();
        sub_8016();
        if ((l_U742) AND (l_U743))
        {
            sub_8192();
        }
        if (l_U747)
        {
            sub_8451();
            l_U747 = 0;
        }
        if (l_U748)
        {
            sub_8708();
            l_U748 = 0;
        }
        if (l_U752)
        {
            sub_871();
            l_U752 = 0;
        }
        if (l_U759)
        {
            BEGIN_CAM_COMMANDS( ref l_U738 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            DESTROY_VIEWPORT( l_U740 );
            DESTROY_ALL_CAMS();
            END_CAM_COMMANDS( ref l_U738 );
            DELETE_WIDGET_GROUP( l_U769 );
            DELETE_WIDGET_GROUP( l_U770 );
            if (l_U758)
            {
                DELETE_WIDGET_GROUP( l_U767 );
                DELETE_WIDGET_GROUP( l_U768 );
            }
            if (IS_PLAYER_PLAYING( sub_8041() ))
            {
                if (NOT (IS_PLAYER_CONTROL_ON( sub_8041() )))
                {
                    SET_PLAYER_CONTROL( sub_8041(), 1 );
                }
            }
            TERMINATE_THIS_SCRIPT();
        }
        WAIT( 0 );
    }
    return;
}

void sub_285()
{
    l_U769 = CREATE_WIDGET_GROUP( "ACTIVATE CAM TOOLS" );
    ADD_WIDGET_TOGGLE( "Activate Viewport", ref l_U741 );
    END_WIDGET_GROUP();
    l_U770 = CREATE_WIDGET_GROUP( "KILL CAM TOOLS (ADVISABLE BEFORE STARTING A SCRIPT)" );
    ADD_WIDGET_TOGGLE( "Kill This Script", ref l_U759 );
    END_WIDGET_GROUP();
    return;
}

void sub_478()
{
    BEGIN_CAM_COMMANDS( ref l_U738 );
    CREATE_VIEWPORT( ref l_U740 );
    SET_VIEWPORT( l_U740, l_U760, l_U761, l_U762, l_U763 );
    SET_VIEWPORT_PRIORITY( l_U740, 1000 );
    CREATE_CAM( 14, ref l_U754 );
    ATTACH_CAM_TO_VIEWPORT( l_U754, l_U740 );
    SET_CAM_ACTIVE( l_U754, 1 );
    END_CAM_COMMANDS( ref l_U738 );
    l_U739 = 1;
    return;
}

void sub_623()
{
    CREATE_WIDGET_GROUP( "SET CAM TOOL TO GO:" );
    ADD_WIDGET_TOGGLE( "Allow Cam Coords to be recorded", ref l_U733 );
    END_WIDGET_GROUP();
    return;
}

void sub_729()
{
    if ((NOT l_U742) AND (l_U741))
    {
        BEGIN_CAM_COMMANDS( ref l_U738 );
        ACTIVATE_VIEWPORT( l_U740, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 0 );
        END_CAM_COMMANDS( ref l_U738 );
        l_U742 = 1;
    }
    else if ((l_U742) AND (NOT l_U741))
    {
        BEGIN_CAM_COMMANDS( ref l_U738 );
        ACTIVATE_VIEWPORT( l_U740, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U738 );
        sub_871();
        l_U742 = 0;
    }
    return;
}

void sub_871()
{
    l_U760 = 0.01000000;
    l_U761 = 0.01000000;
    l_U762 = 0.31000000;
    l_U763 = 0.30000000;
    return;
}

void sub_952()
{
    BEGIN_CAM_COMMANDS( ref l_U738 );
    SET_VIEWPORT( l_U740, l_U760, l_U761, l_U762, l_U763 );
    END_CAM_COMMANDS( ref l_U738 );
    return;
}

void sub_1023()
{
    if (NOT l_U758)
    {
        l_U767 = CREATE_WIDGET_GROUP( "Viewport Manipulation Tool" );
        ADD_WIDGET_FLOAT_SLIDER( "Alter Viewport X Axis Pos", ref l_U760, 0.00000000, 1.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "Alter Viewport Y Axis Pos", ref l_U761, 0.00000000, 1.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "Alter Viewport Width", ref l_U762, 0.00000000, 1.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "Alter Viewport Height", ref l_U763, 0.00000000, 1.00000000, 0.01000000 );
        ADD_WIDGET_TOGGLE( "Alter Viewport Size with Sticks", ref l_U743 );
        ADD_WIDGET_TOGGLE( "Reset Viewport Size to Default", ref l_U752 );
        ADD_WIDGET_TOGGLE( "Output Viewport Dimensions to File", ref l_U744 );
        CREATE_WIDGET_GROUP( "Move Viewport to Fixed Pos" );
        ADD_WIDGET_SLIDER( "Pos", ref l_U746, 1, 4, 1 );
        ADD_WIDGET_TOGGLE( "Move into Fixed Pos", ref l_U747 );
        END_WIDGET_GROUP();
        END_WIDGET_GROUP();
        l_U768 = CREATE_WIDGET_GROUP( "Camera Offsets from Ped(points at ped)" );
        ADD_WIDGET_FLOAT_SLIDER( "Offset on X axis", ref l_U764, -10.00000000, 10.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "Offset on Y axis", ref l_U765, -10.00000000, 10.00000000, 0.01000000 );
        ADD_WIDGET_FLOAT_SLIDER( "Offset on Z axis", ref l_U766, -10.00000000, 10.00000000, 0.01000000 );
        ADD_WIDGET_TOGGLE( "Freeze Char Pos", ref l_U749 );
        ADD_WIDGET_TOGGLE( "Update Cam Pos", ref l_U748 );
        ADD_WIDGET_TOGGLE( "Write Cam Pos to File", ref l_U750 );
        END_WIDGET_GROUP();
        l_U758 = 1;
    }
    return;
}

void sub_1896()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (l_U733)
    {
        sub_1915();
        BEGIN_CAM_COMMANDS( ref l_U708 );
        if (NOT l_U707)
        {
            CREATE_CAM( 14, ref l_U709 );
            if (NOT (IS_CHAR_DEAD( sub_3011() )))
            {
                GET_CHAR_COORDINATES( sub_3011(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
                GET_CHAR_HEADING( sub_3011(), ref l_U713 );
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    SET_OBJECT_COLLISION( l_U706, 0 );
                    SET_OBJECT_VISIBLE( l_U706, 0 );
                    ATTACH_CAM_TO_OBJECT( l_U709, l_U706 );
                    SET_CAM_ATTACH_OFFSET( l_U709, 0.00000000, -3.00000000, 0.00000000 );
                    SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U709, 1 );
                    SET_CAM_INHERIT_ROLL_OBJECT( l_U709, l_U706 );
                    POINT_CAM_AT_OBJECT( l_U709, l_U706 );
                    SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U709, 1 );
                    FREEZE_CHAR_POSITION( sub_3011(), 1 );
                }
                else
                {
                    return;
                }
            }
            l_U721 = {uVar2};
            l_U714 = uVar2._fU0;
            l_U715 = uVar2._fU4;
            l_U716 = uVar2._fU8;
            SET_CAM_ROT( l_U709, 0.00000000, 0.00000000, 0.00000000 );
            GET_GAME_TIMER( ref l_U710 );
            l_U711 = l_U710;
            SET_CAM_ACTIVE( l_U709, 1 );
            SET_CAM_PROPAGATE( l_U709, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            l_U707 = 1;
        }
        else
        {
            GET_GAME_TIMER( ref l_U710 );
            sub_3412();
            sub_6618();
            if (l_U711 < l_U710)
            {
                sub_6750();
                l_U711 = l_U710 + 6000;
            }
        }
        END_CAM_COMMANDS( ref l_U708 );
    }
    else if (l_U707)
    {
        SET_CAM_ACTIVE( l_U709, 0 );
        SET_CAM_PROPAGATE( l_U709, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        DESTROY_ALL_CAMS();
        if (NOT (IS_CHAR_DEAD( sub_3011() )))
        {
            FREEZE_CHAR_POSITION( sub_3011(), 0 );
            SET_GAME_CAM_HEADING( 0.00000000 );
        }
        l_U714 = 50.00000000;
        l_U715 = 50.00000000;
        l_U716 = 50.00000000;
        l_U717 = 0.00000000;
        l_U718 = 0.00000000;
        l_U719 = 0.00000000;
        l_U734 = 0;
        l_U707 = 0;
    }
    l_U712 = 0;;
    return;
}

void sub_1915()
{
    DRAW_RECT( 0.23100000, 0.76800000, 0.33100000, 0.30900000, 0, 0, 0, 255 );
    SET_TEXT_SCALE( 0.30000000, 0.30000000 );
    DISPLAY_TEXT_WITH_3_NUMBERS( 0.09300000, 0.64800000, "CRE_TOOL_P", ROUND( l_U714 ), ROUND( l_U715 ), ROUND( l_U716 ) );
    SET_TEXT_SCALE( 0.30000000, 0.30000000 );
    DISPLAY_TEXT_WITH_3_NUMBERS( 0.09300000, 0.68100000, "CRE_TOOL_R", ROUND( l_U717 ), ROUND( l_U718 ), ROUND( l_U719 ) );
    switch (GET_MAP_AREA_FROM_COORDS( l_U714, l_U715, l_U716 ))
    {
        case 1:
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.71400000, "CRE_TOOL_A1" );
        break;
        case 0:
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.71400000, "CRE_TOOL_A2" );
        break;
        case 3:
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.71400000, "CRE_TOOL_A3" );
        break;
        case 2:
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.71400000, "CRE_TOOL_A4" );
        break;
    }
    switch (l_U0)
    {
        case 0:
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.74700000, "CRE_TOOL_S1" );
        break;
        case 1:
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.74700000, "CRE_TOOL_S2" );
        break;
        case 2:
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.74700000, "CRE_TOOL_S3" );
        break;
        case 3:
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.74700000, "CRE_TOOL_S4" );
        break;
    }
    if (l_U734)
    {
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.77000000, "CRE_TOOL_REC" );
    }
    switch (l_U736)
    {
        case 0:
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.80300000, "CRE_TOOL_SS1" );
        break;
        case 1:
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.80300000, "CRE_TOOL_SS2" );
        break;
        case 2:
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.80300000, "CRE_TOOL_SS3" );
        break;
        case 3:
        SET_TEXT_SCALE( 0.30000000, 0.30000000 );
        DISPLAY_TEXT( 0.09300000, 0.80300000, "CRE_TOOL_SS4" );
        break;
    }
    return;
}

void sub_3011()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3412()
{
    int I;
    unknown uVar3;
    unknown uVar4;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U729, ref l_U730, ref l_U731, ref l_U732 );
    if (DOES_CAM_EXIST( l_U709 ))
    {
        if (IS_CAM_ACTIVE( l_U709 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_3011() )))
            {
                SET_CHAR_HEADING( sub_3011(), l_U713 );
            }
            if ((NOT l_U728) AND (IS_BUTTON_PRESSED( 0, 10 )))
            {
                if (NOT l_U705)
                {
                    sub_3547( 10 );
                    l_U705 = 1;
                }
            }
            if ((NOT l_U728) AND (IS_BUTTON_PRESSED( 0, 11 )))
            {
                if (NOT l_U705)
                {
                    sub_3547( 11 );
                    l_U705 = 1;
                }
            }
            if ((NOT l_U728) AND (IS_BUTTON_PRESSED( 0, 9 )))
            {
                if (NOT l_U705)
                {
                    sub_3751();
                    l_U705 = 1;
                }
            }
            if (IS_BUTTON_PRESSED( 0, 4 ))
            {
                if (l_U720 > 0.00000000)
                {
                    if (NOT l_U735)
                    {
                        l_U720 += -0.75000000;
                    }
                    else
                    {
                        l_U720 += -0.35000000;
                    }
                    SET_CAM_FOV( l_U709, l_U720 );
                    l_U727 = l_U720;
                }
            }
            if (IS_BUTTON_PRESSED( 0, 6 ))
            {
                if (l_U720 < 130.00000000)
                {
                    if (NOT l_U735)
                    {
                        l_U720 += 0.75000000;
                    }
                    else
                    {
                        l_U720 += 0.35000000;
                    }
                    SET_CAM_FOV( l_U709, l_U720 );
                    l_U727 = l_U720;
                }
            }
            if ((NOT l_U705) AND (IS_BUTTON_PRESSED( 0, 8 )))
            {
                if (l_U734)
                {
                    l_U734 = 0;
                    l_U705 = 1;
                }
                else
                {
                    l_U734 = 1;
                    l_U705 = 1;
                }
            }
            if ((NOT (IS_BUTTON_PRESSED( 0, 9 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 8 ))) AND ((NOT (IS_BUTTON_PRESSED( 0, 11 ))) AND (NOT (IS_BUTTON_PRESSED( 0, 10 ))))))
            {
                l_U705 = 0;
            }
            if (l_U730 > 80)
            {
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    GET_OBJECT_HEADING( l_U706, ref uVar3 );
                    l_U714 += (sub_4205( l_U0, 0 )) * (SIN( uVar3 ));
                    l_U715 += (-sub_4205( l_U0, 0 )) * (COS( uVar3 ));
                    SET_OBJECT_COORDINATES( l_U706, l_U714, l_U715, l_U716 );
                }
            }
            else if (l_U730 < 65456)
            {
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    GET_OBJECT_HEADING( l_U706, ref uVar3 );
                    l_U714 -= (sub_4205( l_U0, 0 )) * (SIN( uVar3 ));
                    l_U715 += (sub_4205( l_U0, 0 )) * (COS( uVar3 ));
                    SET_OBJECT_COORDINATES( l_U706, l_U714, l_U715, l_U716 );
                }
            }
            if (l_U729 < 65456)
            {
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    GET_OBJECT_HEADING( l_U706, ref uVar3 );
                    l_U714 += (-sub_4205( l_U0, 0 )) * (COS( uVar3 ));
                    l_U715 += (-sub_4205( l_U0, 0 )) * (SIN( uVar3 ));
                    SET_OBJECT_COORDINATES( l_U706, l_U714, l_U715, l_U716 );
                }
            }
            else if (l_U729 > 80)
            {
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    GET_OBJECT_HEADING( l_U706, ref uVar3 );
                    l_U714 += (sub_4205( l_U0, 0 )) * (COS( uVar3 ));
                    l_U715 += (sub_4205( l_U0, 0 )) * (SIN( uVar3 ));
                    SET_OBJECT_COORDINATES( l_U706, l_U714, l_U715, l_U716 );
                }
            }
            if (IS_BUTTON_PRESSED( 0, 5 ))
            {
                l_U716 += sub_4205( l_U0, 0 );
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    SET_OBJECT_COORDINATES( l_U706, l_U714, l_U715, l_U716 );
                }
            }
            if (IS_BUTTON_PRESSED( 0, 7 ))
            {
                l_U716 -= sub_4205( l_U0, 0 );
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    SET_OBJECT_COORDINATES( l_U706, l_U714, l_U715, l_U716 );
                }
            }
            if (l_U731 > 80)
            {
                l_U719 -= sub_4205( l_U0, 0 );
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    SET_OBJECT_ROTATION( l_U706, l_U717, l_U718, l_U719 );
                }
            }
            else if (l_U731 < 65456)
            {
                l_U719 += sub_4205( l_U0, 0 );
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    SET_OBJECT_ROTATION( l_U706, l_U717, l_U718, l_U719 );
                }
            }
            if (l_U732 < 65456)
            {
                l_U717 -= sub_4205( l_U0, 0 );
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    SET_OBJECT_ROTATION( l_U706, l_U717, l_U718, l_U719 );
                }
            }
            else if (l_U732 > 80)
            {
                l_U717 += sub_4205( l_U0, 0 );
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    SET_OBJECT_ROTATION( l_U706, l_U717, l_U718, l_U719 );
                }
            }
            if (IS_BUTTON_PRESSED( 0, 15 ))
            {
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    SET_OBJECT_HEADING( l_U706, 0.00000000 );
                    SET_OBJECT_ROTATION( l_U706, l_U717, l_U718, l_U719 );
                    FREEZE_OBJECT_POSITION( l_U706, 1 );
                }
            }
            if (IS_BUTTON_PRESSED( 0, 16 ))
            {
                if (DOES_OBJECT_EXIST( l_U706 ))
                {
                    SET_OBJECT_HEADING( l_U706, 0.00000000 );
                    SET_OBJECT_ROTATION( l_U706, l_U717, l_U718, l_U719 );
                    FREEZE_OBJECT_POSITION( l_U706, 1 );
                }
            }
            if ((NOT l_U728) AND (IS_BUTTON_PRESSED( 0, 17 )))
            {
                l_U728 = 1;
                PRINT_NOW( "CAM_SAV", 5000, 1 );
                for ( I = 0; I <= (l_U712 - 1); I++ )
                {
                    SAVE_STRING_TO_DEBUG_FILE( "******Outputting a camera shot to file:*******" );
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    SAVE_STRING_TO_DEBUG_FILE( "******Shot Number:" );
                    SAVE_INT_TO_DEBUG_FILE( I );
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    SAVE_STRING_TO_DEBUG_FILE( "The Area of the map for this shot is:" );
                    uVar4 = GET_MAP_AREA_FROM_COORDS( l_U1[I] );
                    switch (uVar4)
                    {
                        case 0:
                        SAVE_STRING_TO_DEBUG_FILE( "BROOKLYN" );
                        break;
                        case 1:
                        SAVE_STRING_TO_DEBUG_FILE( "BRONX" );
                        break;
                        case 3:
                        SAVE_STRING_TO_DEBUG_FILE( "NEW JERSEY" );
                        break;
                        case 2:
                        SAVE_STRING_TO_DEBUG_FILE( "MANHATTAN" );
                        break;
                        default:
                        SAVE_STRING_TO_DEBUG_FILE( "SOMEWHERE NEAR THE SEA" );
                        break;
                    }
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    SAVE_STRING_TO_DEBUG_FILE( "CREATE_CAM(CAM_TYPE_SCRIPTED," );
                    SAVE_STRING_TO_DEBUG_FILE( "c_CreditCamera[" );
                    SAVE_INT_TO_DEBUG_FILE( I );
                    SAVE_STRING_TO_DEBUG_FILE( "]," );
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_POS(c_CreditCamera[" );
                    SAVE_INT_TO_DEBUG_FILE( I );
                    SAVE_STRING_TO_DEBUG_FILE( "]," );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U1[I]._fU0 );
                    SAVE_STRING_TO_DEBUG_FILE( "," );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U1[I]._fU4 );
                    SAVE_STRING_TO_DEBUG_FILE( "," );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U1[I]._fU8 );
                    SAVE_STRING_TO_DEBUG_FILE( ")" );
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_ROT(c_CreditCamera[" );
                    SAVE_INT_TO_DEBUG_FILE( I );
                    SAVE_STRING_TO_DEBUG_FILE( "]," );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U302[I]._fU0 );
                    SAVE_STRING_TO_DEBUG_FILE( "," );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U302[I]._fU4 );
                    SAVE_STRING_TO_DEBUG_FILE( "," );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U302[I]._fU8 );
                    SAVE_STRING_TO_DEBUG_FILE( ")" );
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_FOV(YOUR_CAM_NAME," );
                    SAVE_FLOAT_TO_DEBUG_FILE( l_U603[I] );
                    SAVE_NEWLINE_TO_DEBUG_FILE();
                }
                for ( I = 0; I <= (l_U712 - 1); I++ )
                {
                    l_U1[I] = {0.00000000, 0.00000000, 0.00000000};
                    l_U302[I] = {0.00000000, 0.00000000, 0.00000000};
                    l_U603[I] = 0.00000000;
                }
                l_U707 = 0;
                l_U734 = 0;
                l_U733 = 0;
                l_U712 = 0;
            }
            if (NOT (IS_BUTTON_PRESSED( 0, 17 )))
            {
                if (l_U728)
                {
                    l_U728 = 0;
                }
            }
        }
    }
    return;
}

void sub_3547(unknown uParam0)
{
    int iVar3;

    switch (uParam0)
    {
        case 10:
        if (l_U0 > 0)
        {
            iVar3 = l_U0;
            iVar3--;
            l_U0 = iVar3;
        }
        else
        {
            l_U0 = 3;
        }
        break;
        case 11:
        if (l_U0 < 3)
        {
            iVar3 = l_U0;
            iVar3++;
            l_U0 = iVar3;
        }
        else
        {
            l_U0 = 0;
        }
        break;
    }
    return;
}

void sub_3751()
{
    int iVar2;

    if (NOT l_U734)
    {
        if (l_U736 < 3)
        {
            iVar2 = l_U736;
            iVar2++;
            l_U736 = iVar2;
        }
        else
        {
            l_U736 = 0;
        }
    }
    return;
}

float sub_4205(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        switch (uParam1)
        {
            case 0: return 0.20000000;
            case 1: return 0.25000000;
        }
        break;
        case 1:
        switch (uParam1)
        {
            case 0: return 0.40000000;
            case 1: return 0.50000000;
        }
        break;
        case 2:
        switch (uParam1)
        {
            case 0: return 0.60000000;
            case 1: return 0.70000000;
        }
        break;
        case 3:
        switch (uParam1)
        {
            case 0: return 0.80000000;
            case 1:
            return 1.00000000;
            break;
        }
        break;
    }
    return 0.20000000;
}

void sub_6618()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (DOES_CAM_EXIST( l_U709 ))
    {
        GET_CAM_POS( l_U709, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
        if (NOT (IS_CHAR_DEAD( sub_3011() )))
        {
            SET_CHAR_COORDINATES( sub_3011(), uVar2._fU0, uVar2._fU4 - 5.00000000, uVar2._fU8 );
            FREEZE_CHAR_POSITION( sub_3011(), 1 );
        }
    }
    return;
}

void sub_6750()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (l_U734)
    {
        if (IS_CAM_ACTIVE( l_U709 ))
        {
            GET_CAM_POS( l_U709, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
            GET_CAM_ROT( l_U709, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_CAM_FOV( l_U709, ref uVar8 );
            PRINTSTRING( "The camera count is:" );
            PRINTINT( l_U712 );
            if (sub_6893( uVar2, uVar5, uVar8 ))
            {
                if (l_U712 < sub_7001())
                {
                    l_U1[l_U712] = {uVar2};
                    l_U302[l_U712] = {uVar5};
                    l_U603[l_U712] = uVar8;
                    l_U712++;
                }
                else
                {
                    PRINT_NOW( "CAM_OUT", 5000, 1 );
                }
            }
        }
    }
    return;
}

int sub_6893(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if ((VDIST( uParam0, l_U721 )) > 0.00000000)
    {
        l_U721 = {uParam0};
        return 1;
    }
    if ((VDIST( uParam3, l_U724 )) > 0.00000000)
    {
        l_U724 = {uParam3};
        return 1;
    }
    return 0;
}

int sub_7001()
{
    switch (l_U736)
    {
        case 0: return 20;
        case 1: return 40;
        case 2: return 60;
        case 3: return 80;
    }
    return 20;
}

void sub_7393()
{
    if ((NOT l_U745) AND (l_U744))
    {
        sub_7419();
    }
    else if ((l_U745) AND (NOT l_U744))
    {
        l_U745 = 0;
    }
    if ((NOT l_U751) AND (l_U750))
    {
        sub_7658();
    }
    else if ((l_U751) AND (NOT l_U750))
    {
        l_U751 = 0;
    }
    return;
}

void sub_7419()
{
    SAVE_STRING_TO_DEBUG_FILE( "VIEWPORT COORDINATES OUTPUT =>" );
    SAVE_STRING_TO_DEBUG_FILE( "SET_VIEWPORT( <<vID>>," );
    SAVE_FLOAT_TO_DEBUG_FILE( l_U760 );
    SAVE_STRING_TO_DEBUG_FILE( "," );
    SAVE_FLOAT_TO_DEBUG_FILE( l_U761 );
    SAVE_STRING_TO_DEBUG_FILE( "," );
    SAVE_FLOAT_TO_DEBUG_FILE( l_U762 );
    SAVE_STRING_TO_DEBUG_FILE( "," );
    SAVE_FLOAT_TO_DEBUG_FILE( l_U763 );
    SAVE_STRING_TO_DEBUG_FILE( ")" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    l_U745 = 1;
    return;
}

void sub_7658()
{
    SAVE_STRING_TO_DEBUG_FILE( "OFFSET CAMERA OUTPUT =>" );
    SAVE_STRING_TO_DEBUG_FILE( ";The Offset is<<" );
    SAVE_FLOAT_TO_DEBUG_FILE( l_U764 );
    SAVE_STRING_TO_DEBUG_FILE( "," );
    SAVE_FLOAT_TO_DEBUG_FILE( l_U765 );
    SAVE_STRING_TO_DEBUG_FILE( "," );
    SAVE_FLOAT_TO_DEBUG_FILE( l_U766 );
    SAVE_STRING_TO_DEBUG_FILE( ">>" );
    SAVE_STRING_TO_DEBUG_FILE( "The camera pos as an offset from the player is:" );
    SAVE_STRING_TO_DEBUG_FILE( "SET_CAM_POS( <<vID>>," );
    SAVE_FLOAT_TO_DEBUG_FILE( l_U755._fU0 );
    SAVE_STRING_TO_DEBUG_FILE( "," );
    SAVE_FLOAT_TO_DEBUG_FILE( l_U755._fU4 );
    SAVE_STRING_TO_DEBUG_FILE( "," );
    SAVE_FLOAT_TO_DEBUG_FILE( l_U755._fU8 );
    SAVE_STRING_TO_DEBUG_FILE( ")" );
    SAVE_NEWLINE_TO_DEBUG_FILE();
    l_U751 = 1;
    return;
}

void sub_8016()
{
    if ((l_U743) || (l_U749))
    {
        if (IS_PLAYER_PLAYING( sub_8041() ))
        {
            SET_PLAYER_CONTROL( sub_8041(), 0 );
            l_U753 = 1;
        }
    }
    else if ((l_U753) AND ((NOT l_U743) AND (NOT l_U749)))
    {
        if (IS_PLAYER_PLAYING( sub_8041() ))
        {
            SET_PLAYER_CONTROL( sub_8041(), 1 );
            l_U753 = 0;
        }
    }
    return;
}

void sub_8041()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_8192()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref iVar4, ref iVar5 );
    if (iVar2 < 0)
    {
        l_U760 -= 0.00100000;
    }
    else if (iVar2 > 0)
    {
        l_U760 += 0.00100000;
    }
    if (iVar3 > 0)
    {
        l_U761 += 0.00100000;
    }
    else if (iVar3 < 0)
    {
        l_U761 -= 0.00100000;
    }
    if (iVar4 < 0)
    {
        l_U762 -= 0.00100000;
    }
    else if (iVar4 > 0)
    {
        l_U762 += 0.00100000;
    }
    if (iVar5 > 0)
    {
        l_U763 += 0.00100000;
    }
    else if (iVar5 < 0)
    {
        l_U763 -= 0.00100000;
    }
    return;
}

void sub_8451()
{
    switch (l_U746)
    {
        case 1:
        l_U760 = 0.01000000;
        l_U761 = 0.01000000;
        l_U762 = 0.31000000;
        l_U763 = 0.31000000;
        break;
        case 2:
        l_U760 = 0.68000000;
        l_U761 = 0.01000000;
        l_U762 = 0.31000000;
        l_U763 = 0.31000000;
        break;
        case 3:
        l_U760 = 0.01000000;
        l_U761 = 0.68000000;
        l_U762 = 0.31000000;
        l_U763 = 0.31000000;
        break;
        case 4:
        l_U760 = 0.68000000;
        l_U761 = 0.68000000;
        l_U762 = 0.31000000;
        l_U763 = 0.31000000;
        break;
    }
    return;
}

void sub_8708()
{
    BEGIN_CAM_COMMANDS( ref l_U738 );
    if (NOT (IS_CHAR_DEAD( sub_3011() )))
    {
        GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3011(), l_U764, l_U765, l_U766, ref l_U755._fU0, ref l_U755._fU4, ref l_U755._fU8 );
        SET_CAM_POS( l_U754, l_U755._fU0, l_U755._fU4, l_U755._fU8 );
        POINT_CAM_AT_PED( l_U754, sub_3011() );
    }
    END_CAM_COMMANDS( ref l_U738 );
    return;
}

