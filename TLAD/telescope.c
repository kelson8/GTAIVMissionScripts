void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0.40000000;
    l_U7 = 0;
    l_U8 = 0;
    l_U10 = 0;
    l_U14 = 0;
    l_U16 = 0;
    l_U17 = 0;
    l_U28 = 0;
    l_U37 = "AMB@TELESCOPE_PLAYER";
    l_U38 = "LOOK_INTRO";
    l_U57 = 0.50000000;
    l_U65 = 0;
    l_U69 = 180;
    l_U72 = 0.00000000;
    l_U73 = {0.00000000, 0.00000000, 0.00000000};
    l_U84 = "BINOCULARS_MECHANISM";
    l_U85 = "BINOCULARS_SQUEAK";
    l_U86 = "BINOCULARS_ZOOM";
    l_U87 = "BINOCULARS_CLUNK";
    l_U88 = 0;
    l_U89 = 0;
    l_U90 = 0;
    l_U91 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_299();
    }
    sub_1315( l_U104 );
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_753() ))
        {
            if (DOES_OBJECT_EXIST( l_U104 ))
            {
                if (IS_OBJECT_UPRIGHT( l_U104, 15 ))
                {
                    if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U104 ))
                    {
                        switch (l_U16)
                        {
                            case 0:
                            ALLOW_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND( 1 );
                            if (GET_CLOSEST_CHAR( l_U33._fU0, l_U33._fU4, l_U33._fU8, 1.50000000, 1, 1, ref l_U62 ))
                            {
                                sub_299();
                            }
                            if (HAVE_ANIMS_LOADED( l_U37 ))
                            {
                                if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_753() ))
                                {
                                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_1148(), l_U33._fU0, l_U33._fU4, l_U33._fU8, 0.60000000, 0.60000000, 1.50000000, 0 ))
                                    {
                                        STORE_WANTED_LEVEL( sub_753(), ref l_U56 );
                                        if (IS_CHAR_ON_FOOT( sub_1148() ))
                                        {
                                            if (l_U56 == 0)
                                            {
                                                sub_1496();
                                                if (sub_1900( 2, 0 ))
                                                {
                                                    if (sub_2190( 2, l_U39, 0 ))
                                                    {
                                                        if (IS_SCORE_GREATER( sub_753(), 1 ))
                                                        {
                                                            if (IS_PLAYER_PLAYING( sub_753() ))
                                                            {
                                                                sub_2835( 0 );
                                                            }
                                                            REMOVE_PED_HELMET( sub_1148(), 1 );
                                                            INCREMENT_INT_STAT_NO_MESSAGE( 105, 1 );
                                                            sub_2921( l_U104 );
                                                            l_U16 = 1;
                                                        }
                                                        else
                                                        {
                                                            sub_3676( "FAIL_TRAN", 3000, 0 );
                                                        }
                                                    }
                                                }
                                                else
                                                {
                                                    sub_483( 2, "Tele_act" );
                                                    sub_483( 2, "Tele_instruc" );
                                                    sub_483( 2, "Tele_otheway" );
                                                    sub_483( 2, "ClasTele_act" );
                                                    sub_483( 2, "Clas_instruc" );
                                                    sub_483( 2, "Clas_otheway" );
                                                }
                                            }
                                            else
                                            {
                                                sub_483( 2, "Tele_act" );
                                                sub_483( 2, "Tele_instruc" );
                                                sub_483( 2, "Tele_otheway" );
                                                sub_483( 2, "ClasTele_act" );
                                                sub_483( 2, "Clas_instruc" );
                                                sub_483( 2, "Clas_otheway" );
                                            }
                                        }
                                        else
                                        {
                                            sub_483( 2, "Tele_act" );
                                            sub_483( 2, "Tele_instruc" );
                                            sub_483( 2, "Tele_otheway" );
                                            sub_483( 2, "ClasTele_act" );
                                            sub_483( 2, "Clas_instruc" );
                                            sub_483( 2, "Clas_otheway" );
                                        }
                                    }
                                    else
                                    {
                                        sub_483( 2, "Tele_act" );
                                        sub_483( 2, "Tele_instruc" );
                                        sub_483( 2, "Tele_otheway" );
                                        sub_483( 2, "ClasTele_act" );
                                        sub_483( 2, "Clas_instruc" );
                                        sub_483( 2, "Clas_otheway" );
                                    }
                                }
                                else
                                {
                                    sub_483( 2, "Tele_act" );
                                    sub_483( 2, "Tele_instruc" );
                                    sub_483( 2, "Tele_otheway" );
                                    sub_483( 2, "ClasTele_act" );
                                    sub_483( 2, "Clas_instruc" );
                                    sub_483( 2, "Clas_otheway" );
                                }
                            }
                            else
                            {
                                sub_483( 2, "Tele_act" );
                                sub_483( 2, "Tele_instruc" );
                                sub_483( 2, "Tele_otheway" );
                                sub_483( 2, "ClasTele_act" );
                                sub_483( 2, "Clas_instruc" );
                                sub_483( 2, "Clas_otheway" );
                            }
                            break;
                            case 1:
                            sub_4505( l_U104 );
                            break;
                            case 2:
                            sub_5746();
                            g_U9548 = 1;
                            if (l_U65 == 1)
                            {
                                PRINT_HELP_FOREVER( "Tele_otheway" );
                            }
                            else
                            {
                                PRINT_HELP_FOREVER( "Tele_instruc" );
                            }
                            GET_GAME_TIMER( ref l_U23 );
                            l_U24 = l_U23 - l_U22;
                            sub_5608();
                            if (l_U24 > 500)
                            {
                                if ((sub_8350()) || (l_U24 > 100000))
                                {
                                    l_U16 = 3;
                                }
                            }
                            break;
                            case 3:
                            sub_5608();
                            if (NOT sub_8350())
                            {
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                sub_1269( ref l_U100 );
                                l_U16 = 4;
                            }
                            break;
                            case 4:
                            if (NOT sub_8350())
                            {
                                sub_8455();
                                GET_GAME_TIMER( ref l_U26 );
                                l_U27 = l_U26 - l_U25;
                                INCREMENT_INT_STAT_NO_MESSAGE( 310, 1 );
                                sub_319( "Tele_instruc" );
                                sub_319( "Tele_otheway" );
                                sub_319( "Clas_instruc" );
                                sub_319( "Clas_otheway" );
                                sub_483( 2, "Tele_act" );
                                sub_483( 2, "Tele_instruc" );
                                sub_483( 2, "Tele_otheway" );
                                sub_483( 2, "ClasTele_act" );
                                sub_483( 2, "Clas_instruc" );
                                sub_483( 2, "Clas_otheway" );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1148() );
                                if (IS_THIS_A_MINIGAME_SCRIPT())
                                {
                                    SET_MINIGAME_IN_PROGRESS( 0 );
                                }
                                if (DOES_CAM_EXIST( l_U101 ))
                                {
                                    DESTROY_CAM( l_U101 );
                                }
                                if (DOES_CAM_EXIST( l_U102 ))
                                {
                                    DESTROY_CAM( l_U102 );
                                }
                                if (DOES_CAM_EXIST( l_U103 ))
                                {
                                    DESTROY_CAM( l_U103 );
                                }
                                g_U9548 = 0;
                                sub_2835( 1 );
                                GET_GAME_TIMER( ref l_U22 );
                                sub_8920();
                                l_U16 = 5;
                            }
                            break;
                            case 5:
                            GET_GAME_TIMER( ref l_U23 );
                            l_U24 = l_U23 - l_U22;
                            if (l_U24 > 1000)
                            {
                                l_U16 = 0;
                            }
                            break;
                            case 6: break;
                            case 7: break;
                            case 8: break;
                        }
                    }
                    else if ((l_U16 == 1) || (l_U16 == 2))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1148() );
                        sub_2835( 1 );
                        if (IS_THIS_A_MINIGAME_SCRIPT())
                        {
                            SET_MINIGAME_IN_PROGRESS( 0 );
                        }
                        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        sub_8920();
                    }
                    sub_299();;
                }
                else if ((l_U16 == 1) || (l_U16 == 2))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1148() );
                    sub_2835( 1 );
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                    sub_8920();
                    if (IS_THIS_A_MINIGAME_SCRIPT())
                    {
                        SET_MINIGAME_IN_PROGRESS( 0 );
                    }
                }
                sub_299();;
            }
            else
            {
                sub_299();
            }
        }
        else
        {
            sub_299();
        }
    }
    return;
}

void sub_299()
{
    sub_319( "Tele_act" );
    sub_319( "Tele_instruc" );
    sub_319( "Tele_otheway" );
    sub_319( "ClasTele_act" );
    sub_319( "Clas_instruc" );
    sub_319( "Clas_otheway" );
    sub_483( 2, "Tele_act" );
    sub_483( 2, "Tele_instruc" );
    sub_483( 2, "Tele_otheway" );
    sub_483( 2, "ClasTele_act" );
    sub_483( 2, "Clas_instruc" );
    sub_483( 2, "Clas_otheway" );
    g_U9548 = 0;
    if (DOES_CAM_EXIST( l_U101 ))
    {
        DESTROY_CAM( l_U101 );
    }
    if (DOES_CAM_EXIST( l_U102 ))
    {
        DESTROY_CAM( l_U102 );
    }
    if (DOES_CAM_EXIST( l_U103 ))
    {
        DESTROY_CAM( l_U103 );
    }
    if ((l_U16 == 2) || (l_U17 == 4))
    {
        sub_1054( 0 );
        sub_1269( ref l_U100 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_319(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_483(int iParam0, string sParam1)
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
        if (COMPARE_STRING( sParam1, ref g_U10470 ))
        {
            if ((l_U5) AND (g_U10468 == iParam0))
            {
                StrCopy( ref g_U10470, "", 16 );
                g_U10468 = 0;
                g_U10469 = 0;
                g_U10474 = nil;
                l_U5 = 0;
                if (l_U3)
                {
                    sub_704();
                    l_U3 = 0;
                }
            }
            if (l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_753(), 1 );
                l_U4 = 0;
            }
            if (l_U2)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U2 = 0;
            }
        }
    }
    return;
}

void sub_704()
{
    g_U94._fU100 = 0;
    g_U94._fU104 = 0;
    return;
}

void sub_753()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_1054(boolean bParam0)
{
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    if (IS_PLAYER_PLAYING( sub_753() ))
    {
        SET_PLAYER_CONTROL( sub_753(), NOT bParam0 );
    }
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    SET_EVERYONE_IGNORE_PLAYER( sub_753(), bParam0 );
    ALLOW_EMERGENCY_SERVICES( NOT bParam0 );
    if (NOT (IS_CHAR_DEAD( sub_1148() )))
    {
        CLEAR_CHAR_TASKS( sub_1148() );
    }
    if (bParam0)
    {
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1148(), 1 );
    }
    else
    {
        sub_704();
        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_1148(), 0 );
    }
    return;
}

void sub_1148()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_1269(unknown uParam0)
{
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_1315(unknown uParam0)
{
    REQUEST_ANIMS( l_U37 );
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U29._fU0, ref l_U29._fU4, ref l_U29._fU8 );
        GET_OBJECT_HEADING( uParam0, ref l_U32 );
        l_U32 -= 180;
        if (l_U32 < 0)
        {
            l_U32 += 360;
        }
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 0.60000000, 0.00000000, ref l_U33._fU0, ref l_U33._fU4, ref l_U33._fU8 );
        l_U36 = l_U32;
        sub_1479();
        sub_1496();
    }
    return;
}

void sub_1479()
{
    return;
}

void sub_1496()
{
    l_U39 = "Tele_act";
    return;
}

int sub_1900(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_753() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((iParam0 == 5) || (IS_PLAYER_CONTROL_ON( sub_753() )))
            {
                if (((g_U10499) AND (uParam1)) || ((iParam0 == 4) || ((iParam0 == 5) || (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_753() )))))
                {
                    if (NOT sub_1996())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_1148() )) == nil)
                        {
                            if (g_U10468 <= iParam0)
                            {
                                if (g_U10469 == 0)
                                {
                                    if (sub_2081())
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

int sub_1996()
{
    if (g_U558 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_2081()
{
    return sub_2092( 0, 0 );
}

int sub_2092(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U94._fU104 = 1;
    }
    if ((g_U558 != 9) AND (uParam1))
    {
        g_U94._fU100 = 1;
    }
    return 1;
}

int sub_2190(unknown uParam0, string sParam1, unknown uParam2)
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
    if (sub_1900( uParam0, uParam2 ))
    {
        if ((IS_CONTROL_PRESSED( 2, 23 )) || ((IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())))
        {
            if (NOT l_U4)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_753(), 0 );
                l_U4 = 1;
            }
            g_U10468 = uParam0;
            l_U5 = 1;
            StrCopy( ref g_U10470, sParam1, 16 );
            g_U10474 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_2465();
                l_U3 = 1;
                g_U10469 = 6;
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
                g_U10469 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U2 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U2)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U2 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_2465()
{
    return sub_2092( 1, 1 );
}

void sub_2835(int iParam0)
{
    if (iParam0 == 0)
    {
        SET_PLAYER_CONTROL( sub_753(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( sub_753(), 1 );
    }
    return;
}

void sub_2921(unknown uParam0)
{
    GET_OBJECT_HEADING( uParam0, ref l_U32 );
    l_U32 -= 180;
    if (l_U32 < 0)
    {
        l_U32 += 360;
    }
    GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 0.60000000, 0.00000000, ref l_U33._fU0, ref l_U33._fU4, ref l_U33._fU8 );
    l_U36 = l_U32;
    l_U73 = {l_U33._fU0, l_U33._fU4, l_U33._fU8};
    if (NOT (DOES_CAM_EXIST( l_U102 )))
    {
        CREATE_CAM( 14, ref l_U102 );
        if (DOES_CAM_EXIST( l_U102 ))
        {
            ATTACH_CAM_TO_OBJECT( l_U102, uParam0 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U102, 1 );
            SET_CAM_ATTACH_OFFSET( l_U102, 0.00000000, -1.50000000, 1.62000000 );
            SET_CAM_ROT( l_U102, 0.00000000, 0.00000000, l_U32 );
            GET_CAM_ROT( l_U102, ref l_U59._fU0, ref l_U59._fU4, ref l_U59._fU8 );
            DESTROY_CAM( l_U102 );
        }
    }
    else
    {
        DESTROY_CAM( l_U102 );
        CREATE_CAM( 14, ref l_U102 );
        if (DOES_CAM_EXIST( l_U102 ))
        {
            ATTACH_CAM_TO_OBJECT( l_U102, uParam0 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U102, 1 );
            SET_CAM_ATTACH_OFFSET( l_U102, 0.00000000, -1.50000000, 1.62000000 );
            SET_CAM_ROT( l_U102, 0.00000000, 0.00000000, l_U32 );
            GET_CAM_ROT( l_U102, ref l_U59._fU0, ref l_U59._fU4, ref l_U59._fU8 );
            DESTROY_CAM( l_U102 );
        }
    }
    l_U32 = sub_3413( l_U59._fU8 );
    l_U70 = l_U32 + 56;
    l_U71 = l_U32 - 56;
    l_U72 = l_U32;
    l_U45 = FLOOR( l_U70 );
    l_U46 = FLOOR( l_U71 );
    l_U47 = 50;
    l_U48 = 65486;
    l_U49 = 1.00000000;
    l_U50 = 2.50000000;
    l_U51 = 0.75000000;
    l_U54 = 70;
    l_U55 = 20;
    l_U52 = l_U50 / l_U54;
    l_U53 = l_U49 / l_U54;
    return;
}

float sub_3413(float fParam0)
{
    if ((fParam0 < 0) AND (fParam0 >= 65356))
    {
        return fParam0 + 720;
        break;
    }
    return fParam0 + 360;
}

int sub_3676(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

void sub_4505(unknown uParam0)
{
    switch (l_U17)
    {
        case 0:
        REGISTER_SCRIPT_WITH_AUDIO( 0 );
        GET_GAME_TIMER( ref l_U25 );
        if (NOT IS_THIS_A_MINIGAME_SCRIPT())
        {
            SET_MINIGAME_IN_PROGRESS( 1 );
        }
        while (NOT (REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT/BINOCULARS" )))
        {
            WAIT( 0 );
        }
        sub_4656();
        sub_4744();
        SET_CURRENT_CHAR_WEAPON( sub_1148(), 0, 1 );
        TASK_CHAR_SLIDE_TO_COORD( sub_1148(), l_U33._fU0, l_U33._fU4, l_U33._fU8, l_U32, 1.00000000 );
        l_U76 = GET_SOUND_ID();
        l_U77 = GET_SOUND_ID();
        l_U79 = GET_SOUND_ID();
        l_U78 = GET_SOUND_ID();
        PLAY_SOUND_FROM_POSITION( l_U77, l_U85, l_U73 );
        PLAY_SOUND_FROM_POSITION( l_U76, l_U84, l_U73 );
        PLAY_SOUND_FROM_POSITION( l_U78, l_U86, l_U73 );
        l_U17 = 1;
        break;
        case 1:
        if (sub_5042())
        {
            l_U17 = 0;
            l_U16 = 4;
            break;
        }
        else
        {
            GET_SCRIPT_TASK_STATUS( sub_1148(), 68, ref l_U40 );
            if (l_U40 == 7)
            {
                l_U17 = 2;
            }
        }
        break;
        case 2:
        TASK_PLAY_ANIM( sub_1148(), l_U38, l_U37, 8.00000000, 0, 0, 0, 0, -2 );
        l_U40 = 0;
        GET_GAME_TIMER( ref l_U22 );
        l_U17 = 3;
        break;
        case 3:
        GET_SCRIPT_TASK_STATUS( sub_1148(), 80, ref l_U40 );
        if (l_U40 == 7)
        {
            l_U17 = 4;
        }
        break;
        case 4:
        sub_5371( ref l_U100 );
        CREATE_CAM( 14, ref l_U101 );
        CREATE_CAM( 14, ref l_U102 );
        if (DOES_CAM_EXIST( l_U101 ))
        {
            ATTACH_CAM_TO_OBJECT( l_U101, uParam0 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U101, 1 );
            SET_CAM_ATTACH_OFFSET( l_U101, 0.00000000, -0.50000000, 1.62000000 );
            SET_CAM_ROT( l_U101, 0.00000000, 0.00000000, l_U32 );
            SET_CAM_ACTIVE( l_U101, 1 );
            SET_CAM_PROPAGATE( l_U101, 1 );
            GET_CAM_FOV( l_U101, ref l_U44 );
            GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
        }
        ADD_SCORE( sub_753(), -1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        sub_5608();
        GET_GAME_TIMER( ref l_U22 );
        l_U17 = 0;
        l_U16 = 2;
        break;
    }
    return;
}

void sub_4656()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 1 );
    l_U67 = LOAD_TXD( "binoculars" );
    l_U68 = GET_TEXTURE( l_U67, "binoculars" );
    DISPLAY_RADAR( 0 );
    return;
}

void sub_4744()
{
    if (NOT (IS_CHAR_DEAD( sub_1148() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_1148(), ref l_U14 );
        if (l_U14 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_1148(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_1148(), 0, 1 );
        }
        if (l_U14 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_1148(), 0, 1 );
        }
    }
    return;
}

int sub_5042()
{
    if ((sub_5090()) || ((IS_BUTTON_PRESSED( 0, 16 )) || ((IS_BUTTON_PRESSED( 0, 15 )) || ((IS_BUTTON_PRESSED( 0, 14 )) || (IS_BUTTON_PRESSED( 0, 17 ))))))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_1148() );
        SET_PLAYER_CONTROL( sub_753(), 1 );
        return 1;
    }
    return 0;
}

int sub_5090()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 < 65436) || (iVar2 > 100))
    {
        return 1;
    }
    if ((iVar3 < 65436) || (iVar3 > 100))
    {
        return 1;
    }
    return 0;
}

void sub_5371(unknown uParam0)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    return;
}

void sub_5608()
{
    float fVar2;

    if (l_U68 != nil)
    {
        fVar2 = 1.00000000;
        if (NOT GET_IS_WIDESCREEN())
        {
            fVar2 = 1.33000000;
        }
        DRAW_SPRITE( l_U68, 0.50000000, 0.50000000, fVar2, 1.00000000, 0.00000000, 255, 255, 255, 255 );
    }
    return;
}

void sub_5746()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    float fVar7;

    uVar2 = l_U50;
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref l_U18, ref l_U19, ref l_U20, ref l_U21 );
    if ((l_U19 == 0) AND (l_U18 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref l_U18, ref l_U19 );
    }
    if ((l_U21 == 0) AND (l_U20 == 0))
    {
        GET_MOUSE_INPUT( ref l_U20, ref l_U21 );
        if ((l_U21 != 0) || (l_U20 != 0))
        {
            fVar7 = 0.00000000 + ((4.00000000 - 0.00000000) * GET_MOUSE_SENSITIVITY());
            l_U50 += fVar7;
        }
    }
    uVar3 = l_U18;
    uVar4 = l_U19;
    uVar5 = l_U20;
    uVar6 = l_U21;
    if ((IS_USING_CONTROLLER()) AND (((IS_SNIPER_INVERTED()) AND (# -NULL-0xc27bfa())) || (((GET_PROFILE_SETTING( 4 )) == 1) AND (NOT (# -NULL-0xc27bfa())))))
    {
        l_U65 = 0;
        l_U18 = uVar3;
        l_U19 = uVar4;
        l_U20 = uVar5;
        l_U21 = uVar6;
    }
    else
    {
        l_U65 = 1;
        l_U18 = uVar5;
        l_U19 = uVar6;
        l_U20 = uVar3;
        l_U21 = uVar4;
    }
    if (IS_LOOK_INVERTED())
    {
        l_U28 = 0;
    }
    else
    {
        l_U28 = 1;
    }
    SET_CAM_MOTION_BLUR( l_U101, 0.10000000 );
    l_U80 = 0.00000000;
    l_U81 = 0.00000000;
    l_U82 = 0.00000000;
    if ((l_U19 <= 128) AND (l_U19 > 100))
    {
        if (l_U28)
        {
            if (DOES_CAM_EXIST( l_U101 ))
            {
                GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
                if (l_U41 > l_U48)
                {
                    l_U81 = 1.00000000;
                    SET_CAM_ROT( l_U101, l_U41 - l_U50, l_U42, l_U43 );
                    l_U88 = 1;
                }
                else if (l_U88 == 1)
                {
                    PLAY_SOUND_FROM_POSITION( l_U79, l_U87, l_U73 );
                    l_U88 = 0;
                }
            }
        }
        else if (DOES_CAM_EXIST( l_U101 ))
        {
            GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
            if (l_U41 < l_U47)
            {
                l_U81 = 1.00000000;
                SET_CAM_ROT( l_U101, l_U41 + l_U50, l_U42, l_U43 );
                l_U88 = 1;
            }
            else if (l_U88 == 1)
            {
                PLAY_SOUND_FROM_POSITION( l_U79, l_U87, l_U73 );
                l_U88 = 0;
            }
        }
    }
    if ((l_U19 >= 65408) AND (l_U19 < 65436))
    {
        if (l_U28)
        {
            if (DOES_CAM_EXIST( l_U101 ))
            {
                GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
                if (l_U41 < l_U47)
                {
                    l_U81 = 1.00000000;
                    SET_CAM_ROT( l_U101, l_U41 + l_U50, l_U42, l_U43 );
                    l_U89 = 1;
                }
                else if (l_U89 == 1)
                {
                    PLAY_SOUND_FROM_POSITION( l_U79, l_U87, l_U73 );
                    l_U89 = 0;
                }
            }
        }
        else if (DOES_CAM_EXIST( l_U101 ))
        {
            GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
            if (l_U41 > l_U48)
            {
                l_U81 = 1.00000000;
                SET_CAM_ROT( l_U101, l_U41 - l_U50, l_U42, l_U43 );
                l_U89 = 1;
            }
            else if (l_U89 == 1)
            {
                PLAY_SOUND_FROM_POSITION( l_U79, l_U87, l_U73 );
                l_U89 = 0;
            }
        }
    }
    if ((l_U19 <= 100) AND (l_U19 > 10))
    {
        if (l_U28)
        {
            if (DOES_CAM_EXIST( l_U101 ))
            {
                GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
                if (l_U41 > l_U48)
                {
                    l_U81 = 0.50000000;
                    SET_CAM_ROT( l_U101, l_U41 - l_U49, l_U42, l_U43 );
                }
            }
        }
        else if (DOES_CAM_EXIST( l_U101 ))
        {
            GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
            if (l_U41 < l_U47)
            {
                l_U81 = 0.50000000;
                SET_CAM_ROT( l_U101, l_U41 + l_U49, l_U42, l_U43 );
            }
        }
    }
    if ((l_U19 >= 65436) AND (l_U19 < -10))
    {
        if (l_U28)
        {
            if (DOES_CAM_EXIST( l_U101 ))
            {
                GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
                if (l_U41 < l_U47)
                {
                    l_U81 = 0.50000000;
                    SET_CAM_ROT( l_U101, l_U41 + l_U49, l_U42, l_U43 );
                }
            }
        }
        else if (DOES_CAM_EXIST( l_U101 ))
        {
            GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
            if (l_U41 > l_U48)
            {
                l_U81 = 0.50000000;
                SET_CAM_ROT( l_U101, l_U41 - l_U49, l_U42, l_U43 );
            }
        }
    }
    if ((l_U18 <= 128) AND (l_U18 > 100))
    {
        if (DOES_CAM_EXIST( l_U101 ))
        {
            GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
            if (l_U72 > l_U46)
            {
                l_U80 = 1.00000000;
                SET_CAM_ROT( l_U101, l_U41, l_U42, l_U43 - l_U50 );
                l_U72 -= l_U50;
                l_U90 = 1;
            }
            else if (l_U90 == 1)
            {
                PLAY_SOUND_FROM_POSITION( l_U79, l_U87, l_U73 );
                l_U90 = 0;
            }
        }
    }
    if ((l_U18 >= 65408) AND (l_U18 < 65436))
    {
        if (DOES_CAM_EXIST( l_U101 ))
        {
            GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
            if (l_U72 < l_U45)
            {
                l_U80 = 1.00000000;
                SET_CAM_ROT( l_U101, l_U41, l_U42, l_U43 + l_U50 );
                l_U72 += l_U50;
                l_U91 = 1;
            }
            else if (l_U91 == 1)
            {
                PLAY_SOUND_FROM_POSITION( l_U79, l_U87, l_U73 );
                l_U91 = 0;
            }
        }
    }
    if ((l_U18 <= 100) AND (l_U18 > 10))
    {
        if (DOES_CAM_EXIST( l_U101 ))
        {
            GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
            if (l_U72 > l_U46)
            {
                l_U80 = 0.50000000;
                SET_CAM_ROT( l_U101, l_U41, l_U42, l_U43 - l_U49 );
                l_U72 -= l_U49;
            }
        }
    }
    if ((l_U18 >= 65436) AND (l_U18 < -10))
    {
        if (DOES_CAM_EXIST( l_U101 ))
        {
            GET_CAM_ROT( l_U101, ref l_U41, ref l_U42, ref l_U43 );
            if (l_U72 < l_U45)
            {
                l_U80 = 0.50000000;
                SET_CAM_ROT( l_U101, l_U41, l_U42, l_U43 + l_U49 );
                l_U72 += l_U49;
            }
        }
    }
    l_U82 = l_U80 + l_U81;
    SET_VARIABLE_ON_SOUND( l_U77, "SqueakSpeed", l_U82 );
    l_U83 = 0.00000000;
    if ((l_U21 <= 128) AND (l_U21 > 10))
    {
        if (DOES_CAM_EXIST( l_U101 ))
        {
            GET_CAM_FOV( l_U101, ref l_U44 );
            if (l_U44 < l_U54)
            {
                SET_CAM_FOV( l_U101, l_U44 + l_U51 );
                l_U83 = 0.50000000;
            }
        }
    }
    if ((l_U21 >= 65408) AND (l_U21 < -10))
    {
        if (DOES_CAM_EXIST( l_U101 ))
        {
            GET_CAM_FOV( l_U101, ref l_U44 );
            if (l_U44 > l_U55)
            {
                SET_CAM_FOV( l_U101, l_U44 - l_U51 );
                l_U83 = 1.00000000;
            }
        }
    }
    SET_VARIABLE_ON_SOUND( l_U78, "ZoomSpeed", l_U83 );
    if ((l_U44 <= l_U54) AND (l_U44 > 0))
    {
        l_U50 = l_U44 * l_U52;
        l_U49 = l_U44 * l_U53;
    }
    l_U50 = uVar2;
    return;
}

int sub_8350()
{
    if (IS_CONTROL_PRESSED( 2, 23 ))
    {
        return 1;
    }
    return 0;
}

void sub_8455()
{
    if (NOT (IS_CHAR_DEAD( sub_1148() )))
    {
        if (l_U14 != 0)
        {
            if (l_U14 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_1148(), l_U14, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_1148(), 46 );
            }
        }
    }
    return;
}

void sub_8920()
{
    SET_SPRITES_DRAW_BEFORE_FADE( 0 );
    RELEASE_TEXTURE( l_U68 );
    REMOVE_TXD( l_U67 );
    STOP_SOUND( l_U77 );
    RELEASE_SOUND_ID( l_U77 );
    STOP_SOUND( l_U76 );
    RELEASE_SOUND_ID( l_U76 );
    STOP_SOUND( l_U79 );
    RELEASE_SOUND_ID( l_U79 );
    STOP_SOUND( l_U78 );
    RELEASE_SOUND_ID( l_U78 );
    REQUEST_AMBIENT_AUDIO_BANK( "SCRIPT_AMBIENT/BINOCULARS" );
    AMBIENT_AUDIO_BANK_NO_LONGER_NEEDED();
    UNREGISTER_SCRIPT_WITH_AUDIO();
    DISPLAY_RADAR( 1 );
    return;
}

