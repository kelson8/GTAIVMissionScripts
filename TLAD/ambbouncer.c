void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U115 = 0;
    l_U116 = 0;
    l_U129 = {1186.98000000, 1700.00900000, 16.72000000};
    l_U132 = {1159.76000000, 1685.49000000, 16.78000000};
    l_U135 = {1202.73300000, 1713.70200000, 15.66150000};
    l_U138 = {-1575.97400000, 19.67334000, 9.01099900};
    l_U141 = {-1555.46800000, 9.48290000, 9.01099900};
    l_U144 = {-1588.32000000, 27.50130000, 9.04660000};
    l_U148 = 0;
    l_U149 = 0;
    l_U150 = 0;
    l_U151 = 0;
    l_U168 = "clammainroom";
    l_U169 = "clampalbkrm";
    l_U170 = "clamfronrm";
    l_U171 = "clamchangeroom";
    l_U176 = 0;
    l_U177 = 0;
    l_U178 = 0;
    l_U179 = 0;
    l_U180 = 0;
    l_U181 = 0;
    l_U117 = {l_U184._fU4[0]};
    l_U120 = l_U184._fU68[0];
    sub_342( "" );
    sub_499( 0, sub_448(), "JOHNNY", 0 );
    sub_644();
    if (g_U12303)
    {
        l_U182 = 1;
    }
    else
    {
        l_U182 = 2;
    }
    while (true)
    {
        WAIT( 0 );
        if ((g_U10461) AND (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()))
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambBouncer" )) < 4)
            {
                if (NOT (IS_CHAR_INJURED( sub_448() )))
                {
                    if (IS_WANTED_LEVEL_GREATER( sub_1877(), 0 ))
                    {
                        l_U182 = 1;
                    }
                }
                switch (l_U115)
                {
                    case 0:
                    if (sub_1963())
                    {
                        if (sub_2043())
                        {
                            l_U115 = 1;
                        }
                    }
                    break;
                    case 1:
                    if (IS_PLAYER_PLAYING( sub_1877() ))
                    {
                        if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_1877() ))
                        {
                            if (l_U177)
                            {
                                sub_2462();
                            }
                            else
                            {
                                sub_4789();
                            }
                        }
                    }
                    break;
                    case 2: break;
                }
            }
            else
            {
                sub_6776();
            }
        }
        else
        {
            sub_6776();
        }
    }
    return;
}

void sub_342(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_359();
    return;
}

void sub_359()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U2._fU16[I]._fU0 = nil;
        StrCopy( ref l_U2._fU16[I]._fU4, "", 32 );
        l_U2._fU344[I] = 0;
    }
    return;
}

void sub_448()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_499(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_579( "\n PED NUMBER ", uParam0 );
    sub_619( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_579(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_619(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_644()
{
    l_U124 = 999.00000000;
    l_U124 = VDIST( l_U117, l_U129 );
    if (l_U124 < 2.00000000)
    {
        l_U126 = 676448572;
        l_U147 = 1;
        sub_719();
        sub_1194();
    }
    l_U124 = VDIST( l_U117, l_U132 );
    if (l_U124 < 2.00000000)
    {
        l_U126 = 676448572;
        l_U147 = 1;
        sub_719();
        sub_1194();
    }
    l_U124 = VDIST( l_U117, l_U135 );
    if (l_U124 < 2.00000000)
    {
        l_U126 = 676448572;
        l_U147 = 1;
        l_U177 = 1;
        sub_719();
        sub_1194();
    }
    l_U124 = VDIST( l_U117, l_U138 );
    if (l_U124 < 2.00000000)
    {
        l_U126 = -1780698891;
        l_U147 = 2;
        l_U181 = 1;
        sub_719();
        sub_1194();
    }
    l_U124 = VDIST( l_U117, l_U141 );
    if (l_U124 < 2.00000000)
    {
        l_U126 = -1780698891;
        l_U147 = 2;
        sub_719();
        sub_1194();
    }
    l_U124 = VDIST( l_U117, l_U144 );
    if (l_U124 < 2.00000000)
    {
        l_U126 = -1780698891;
        l_U147 = 2;
        l_U177 = 1;
        sub_719();
        sub_1194();
    }
    return;
}

void sub_719()
{
    if (l_U126 == -1780698891)
    {
        l_U156 = "BO1_AGGNO";
        l_U157 = "BO1_ARMEJ";
        l_U158 = "BO1_DISNO";
        l_U159 = "BO1_NEGYES";
        l_U160 = "BO1_POLITE";
        l_U161 = "BO1_POSYES";
        StrCopy( ref l_U172, "BOUNCER_1", 16 );
        l_U183 = 1;
    }
    else if (l_U126 == 897868981)
    {
        l_U156 = "BO1_AGGNO2";
        l_U157 = "BO1_ARMEJ2";
        l_U158 = "BO1_DISNO2";
        l_U159 = "BO1_NEGYES2";
        l_U160 = "BO1_POLITE2";
        l_U161 = "BO1_POSYES2";
        StrCopy( ref l_U172, "BOUNCER_2", 16 );
        l_U183 = 2;
    }
    else if (l_U126 == 676448572)
    {
        l_U156 = "BO1_AGGNO3";
        l_U157 = "BO1_ARMEJ3";
        l_U158 = "BO1_DISSNO3";
        l_U159 = "BO1_NEGYES3";
        l_U160 = "BO1_POLITE3";
        l_U161 = "BO1_POSYES3";
        StrCopy( ref l_U172, "BOUNCER_3", 16 );
        l_U183 = 3;
    };;;
    return;
}

void sub_1194()
{
    if (l_U147 == 1)
    {
        l_U168 = "clammainroom";
        l_U169 = "clampalbkrm";
        l_U170 = "clamfronrm";
        l_U171 = "clamchangeroom";
    }
    else if (l_U147 == 2)
    {
        l_U168 = "Bada_room1";
        l_U169 = "Bada-Private";
        l_U170 = "Bada_room2";
        l_U171 = "Bada_room1a";
    }
    else if (l_U147 == 2)
    {
        l_U177 = 1;
    };;;
    return;
}

void sub_1877()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_1963()
{
    if (l_U147 > 0)
    {
        GET_WEAPONTYPE_MODEL( 7, ref l_U128 );
        REQUEST_MODEL( l_U126 );
        if (HAS_MODEL_LOADED( l_U126 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_2043()
{
    if (IS_CHAR_DEAD( l_U125 ))
    {
        COPY_COMBAT_DECISION_MAKER( 65568, ref l_U152 );
        CREATE_CHAR( 4, l_U126, l_U117._fU0, l_U117._fU4, l_U117._fU8, ref l_U125, 1 );
        SET_CHAR_RELATIONSHIP( l_U125, 1, 0 );
        SET_CHAR_RELATIONSHIP( l_U125, 1, 4 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U125, 4 );
        SET_COMBAT_DECISION_MAKER( l_U125, l_U152 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U125 );
        SET_CURRENT_CHAR_WEAPON( l_U125, 0, 0 );
        if (NOT l_U177)
        {
            if (l_U181)
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U125, l_U171 );
            }
            else
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U125, l_U168 );
            }
        }
        SET_CHAR_HEADING( l_U125, l_U120 );
        TASK_START_SCENARIO_IN_PLACE( l_U125, "Scenario_Bouncer", -1082130432 );
        sub_499( l_U183, l_U125, ref l_U172, 0 );
        sub_2345( ref l_U172 );
        sub_2345( "\n" );
        SET_CHAR_ACCURACY( l_U125, 20 );
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_2345(unknown uParam0)
{
    return;
}

void sub_2462()
{
    if (NOT (IS_CHAR_INJURED( l_U125 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_448() )))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_1877(), 0 )))
            {
                if (NOT g_U10441)
                {
                    if (NOT l_U180)
                    {
                        if (NOT l_U178)
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U125, sub_448(), 10.00000000, 10.00000000, 3.00000000, 0 ))
                            {
                                if (NOT g_U10442)
                                {
                                    PRINT_HELP_FOREVER( "STR_WEA" );
                                    g_U10442 = 1;
                                }
                            }
                            else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "STR_WEA" ))
                            {
                                CLEAR_HELP();
                            }
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U125, sub_448(), 3.00000000, 3.00000000, 3.00000000, 0 ))
                            {
                                if ((IS_WANTED_LEVEL_GREATER( sub_1877(), 0 )) || ((IS_CHAR_ON_ANY_BIKE( sub_448() )) || (IS_CHAR_ARMED( sub_448(), 7 ))))
                                {
                                    if (sub_2840( sub_2748(), ref l_U162, l_U182, 1 ))
                                    {
                                        TASK_LOOK_AT_CHAR( l_U125, sub_448(), -2, 1 );
                                        l_U178 = 1;
                                    }
                                }
                                else if (NOT l_U179)
                                {
                                    if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_1877() ))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( sub_448() ))
                                        {
                                            TASK_LOOK_AT_CHAR( l_U125, sub_448(), -2, 1 );
                                            l_U179 = 1;
                                        }
                                        else if (sub_2840( sub_3898(), ref l_U162, l_U182, 1 ))
                                        {
                                            TASK_LOOK_AT_CHAR( l_U125, sub_448(), -2, 1 );
                                            l_U179 = 1;
                                        }
                                    }
                                    else
                                    {
                                        TASK_LOOK_AT_CHAR( l_U125, sub_448(), -2, 1 );
                                        l_U179 = 1;
                                    }
                                }
                            }
                        }
                        else if (sub_4034())
                        {
                            if (IS_CHAR_ARMED( sub_448(), 7 ))
                            {
                                l_U180 = 1;
                                g_U10441 = 1;
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "STR_WEA" ))
                                {
                                    CLEAR_HELP();
                                }
                                sub_4240();
                            }
                        }
                        else if (NOT (IS_CHAR_ARMED( sub_448(), 7 )))
                        {
                            l_U178 = 0;
                        };;;
                    }
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U125, sub_448(), 20.00000000, 20.00000000, 20.00000000, 0 ))
                    {
                        if (IS_PLAYER_TARGETTING_CHAR( sub_1877(), l_U125 ))
                        {
                            g_U10441 = 1;
                        }
                        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_1877(), l_U125 ))
                        {
                            g_U10441 = 1;
                        }
                        if ((g_U12303 == 0) AND (IS_CHAR_SHOOTING( sub_448() )))
                        {
                            g_U10441 = 1;
                        }
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U125, sub_448(), 0 ))
                        {
                            g_U10441 = 1;
                        }
                    }
                }
                else
                {
                    sub_4240();
                }
            }
            else if (l_U180)
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U125, sub_448(), 10.00000000, 10.00000000, 3.00000000, 0 ))
                {
                    sub_4240();
                    g_U10441 = 1;
                }
            }
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U125 )))
    {
        g_U10441 = 1;
        SET_CHAR_HEALTH( l_U125, 0 );
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "STR_WEA" ))
    {
        CLEAR_HELP();
    }
    return;
}

void sub_2748()
{
    unknown Result;
    int iVar3;

    iVar3 = sub_2759( 0, 2 );
    if (iVar3 == 0)
    {
        Result = l_U158;
    }
    else
    {
        Result = l_U156;
    }
    return Result;
}

void sub_2759(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_2840(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_2861( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_2861(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_2915( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_2915(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_2937( iParam1 )))
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
    for ( I = 0; I <= (g_U9051 - 1); I++ )
    {
        StrCopy( ref g_U9051[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U9051[I] = {(uParam0^)[I]};
    }
    g_U9045 = {(iParam1^)};
    sub_3613( ref g_U8947, ref l_U2 );
    StrCopy( ref g_U8947._fU0, uParam7, 16 );
    g_U8947._fU388 = uParam8;
    g_U8946 = 1;
    return 1;
}

int sub_2937(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_2345( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U559[1] ))
    {
        switch (g_U94._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_2345( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8946)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8944 > iParam0->_fU0)
        {
            sub_2345( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8944 = iParam0->_fU0;
    g_U8945++;
    if (g_U8945 > 100000)
    {
        g_U8945 = 1;
    }
    iParam0->_fU4 = g_U8945;
    return 1;
}

void sub_3613(int iParam0, int iParam1)
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

void sub_3898()
{
    unknown Result;
    int iVar3;

    iVar3 = sub_2759( 0, 2 );
    if (iVar3 == 0)
    {
        Result = l_U161;
    }
    else
    {
        Result = l_U159;
    }
    return Result;
}

int sub_4034()
{
    int iVar2;

    if (l_U147 > 0)
    {
        if (NOT (IS_CHAR_DEAD( sub_448() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_448(), ref iVar2 );
            if ((iVar2 == (GET_HASH_KEY( l_U171 ))) || ((iVar2 == (GET_HASH_KEY( l_U170 ))) || ((iVar2 == (GET_HASH_KEY( l_U169 ))) || (iVar2 == (GET_HASH_KEY( l_U168 ))))))
            {
                return 1;
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_4240()
{
    if (NOT (IS_CHAR_INJURED( l_U125 )))
    {
        if (NOT (IS_CHAR_INJURED( sub_448() )))
        {
            GET_SCRIPT_TASK_STATUS( l_U125, 91, ref l_U154 );
            if (l_U154 == 7)
            {
                SET_CHAR_RELATIONSHIP( l_U125, 5, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U125, 0 );
                if (IS_CHAR_SHOOTING( sub_448() ))
                {
                    GIVE_WEAPON_TO_CHAR( l_U125, 7, 60, 1 );
                    SET_CURRENT_CHAR_WEAPON( l_U125, 7, 0 );
                }
                TASK_COMBAT( l_U125, sub_448() );
                if (sub_2840( l_U157, ref l_U162, l_U182, 1 ))
                {
                    ;
                }
                l_U149 = 1;
            }
        }
    }
    return;
}

void sub_4789()
{
    if (sub_4034())
    {
        if (g_U10441)
        {
            if (NOT (IS_CHAR_INJURED( l_U125 )))
            {
                if (IS_PLAYER_TARGETTING_CHAR( sub_1877(), l_U125 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U125, 7, ref l_U154 );
                    if (l_U154 == 7)
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U125 );
                        TASK_HANDS_UP( l_U125, 10000 );
                    }
                }
                else
                {
                    sub_4919();
                }
            }
        }
        else if (sub_5039())
        {
            if (NOT (IS_CHAR_INJURED( sub_448() )))
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_448(), 1198.26100000, 1695.99500000, 16.72170000, 3.00000000, 3.00000000, 3.50000000, 0 )))
                {
                    if (IS_CHAR_ARMED( sub_448(), 7 ))
                    {
                        g_U10440 = 1;
                    }
                    if (IS_CHAR_IN_MELEE_COMBAT( sub_448() ))
                    {
                        g_U10440 = 1;
                    }
                }
                if (sub_5268())
                {
                    g_U10440 = 1;
                }
            }
        }
        sub_5360();
        if (NOT (IS_CHAR_INJURED( sub_448() )))
        {
            if (IS_CHAR_SHOOTING( sub_448() ))
            {
                g_U10441 = 1;
                sub_4240();
            }
            if (IS_CHAR_IN_ANY_CAR( sub_448() ))
            {
                g_U10441 = 1;
                sub_4240();
            }
            if (NOT (IS_CHAR_INJURED( l_U125 )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U125, sub_448(), 0 ))
                {
                    g_U10441 = 1;
                    sub_4240();
                }
            }
        }
    }
    else if (g_U10441)
    {
        if (NOT (IS_CHAR_INJURED( l_U125 )))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( l_U125, l_U117._fU0, l_U117._fU4, l_U117._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U125, 114, ref l_U154 );
                if (l_U154 == 7)
                {
                    TASK_START_SCENARIO_IN_PLACE( l_U125, "Scenario_Bouncer", -1082130432 );
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U125, 29, ref l_U154 );
                if (l_U154 == 7)
                {
                    CLEAR_CHAR_TASKS( l_U125 );
                    SET_CHAR_RELATIONSHIP( l_U125, 1, 0 );
                    OPEN_SEQUENCE_TASK( ref l_U155 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U117._fU0, l_U117._fU4, l_U117._fU8, 2, -2, 2.00000000 );
                    TASK_ACHIEVE_HEADING( 0, l_U120 );
                    CLOSE_SEQUENCE_TASK( l_U155 );
                    TASK_PERFORM_SEQUENCE( l_U125, l_U155 );
                    CLEAR_SEQUENCE_TASK( l_U155 );
                }
            }
        }
    }
    return;
}

void sub_4919()
{
    int iVar2;

    GET_SCRIPT_TASK_STATUS( l_U125, 91, ref l_U154 );
    if (l_U154 == 1)
    {
        GET_CURRENT_CHAR_WEAPON( l_U125, ref iVar2 );
        if (iVar2 == 0)
        {
            if (IS_CHAR_SHOOTING( sub_448() ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U125 );
                sub_4240();
            }
        }
    }
    else
    {
        sub_4240();
    }
    return;
}

int sub_5039()
{
    int iVar2;

    if (l_U147 > 0)
    {
        if (NOT (IS_CHAR_DEAD( sub_448() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_448(), ref iVar2 );
            if ((iVar2 == (GET_HASH_KEY( l_U171 ))) || (iVar2 == (GET_HASH_KEY( l_U168 ))))
            {
                return 1;
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_5268()
{
    switch (g_U94._fU0)
    {
        case 1021:
        case 1022:
        case 1023:
        case 1024:
        case 1025:
        return 1;
        break;
    }
    return 0;
}

void sub_5360()
{
    if (NOT (IS_CHAR_INJURED( l_U125 )))
    {
        if (g_U10440 == 0)
        {
            l_U116 = 0;
        }
        switch (l_U116)
        {
            case 0:
            if (LOCATE_CHAR_ON_FOOT_3D( l_U125, l_U117._fU0, l_U117._fU4, l_U117._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U125, 114, ref l_U154 );
                if (l_U154 == 7)
                {
                    TASK_START_SCENARIO_IN_PLACE( l_U125, "Scenario_Bouncer", -1082130432 );
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U125, 29, ref l_U154 );
                if (l_U154 == 7)
                {
                    OPEN_SEQUENCE_TASK( ref l_U155 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U117._fU0, l_U117._fU4, l_U117._fU8, 2, -2, 2.00000000 );
                    TASK_ACHIEVE_HEADING( 0, l_U120 );
                    CLOSE_SEQUENCE_TASK( l_U155 );
                    TASK_PERFORM_SEQUENCE( l_U125, l_U155 );
                    CLEAR_SEQUENCE_TASK( l_U155 );
                }
            }
            if (g_U10440)
            {
                if (l_U149)
                {
                    g_U10441 = 1;
                }
                else
                {
                    l_U116 = 1;
                }
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( sub_448() )))
            {
                GET_CHAR_COORDINATES( sub_448(), ref l_U121._fU0, ref l_U121._fU4, ref l_U121._fU8 );
                if (LOCATE_CHAR_ON_FOOT_3D( l_U125, l_U121._fU0, l_U121._fU4, l_U121._fU8, 1.50000000, 1.50000000, 1.50000000, 0 ))
                {
                    CLEAR_CHAR_TASKS( l_U125 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U125, sub_448() );
                    if (l_U149)
                    {
                        l_U116 = 2;
                    }
                    else if (sub_2840( l_U160, ref l_U162, l_U182, 1 ))
                    {
                        l_U116 = 2;
                        SETTIMERA( 0 );
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U125, 29, ref l_U154 );
                    if (l_U154 == 7)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U155 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U121._fU0, l_U121._fU4, l_U121._fU8, 2, -2, 2.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_448() );
                        CLOSE_SEQUENCE_TASK( l_U155 );
                        TASK_PERFORM_SEQUENCE( l_U125, l_U155 );
                        CLEAR_SEQUENCE_TASK( l_U155 );
                    }
                }
            }
            break;
            case 2:
            if (NOT (sub_6076( l_U162 )))
            {
                if (TIMERA() > 10000)
                {
                    if (l_U149)
                    {
                        g_U10441 = 1;
                    }
                    else
                    {
                        g_U10440 = 0;
                        l_U149 = 1;
                        l_U116 = 0;
                    }
                }
            }
            break;
        }
    }
    return;
}

int sub_6076(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8946 == 2) || ((g_U8946 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8945)
        {
            return 1;
        }
        else
        {
            sub_2345( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_2345( "\n speech is not playing" );
    }
    return 0;
}

void sub_6776()
{
    if (DOES_DECISION_MAKER_EXIST( l_U127 ))
    {
        REMOVE_DECISION_MAKER( l_U127 );
    }
    if (NOT (IS_CHAR_DEAD( l_U125 )))
    {
        if (NOT (IS_CHAR_ON_SCREEN( l_U125 )))
        {
            DELETE_CHAR( ref l_U125 );
        }
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambBouncer" )) == 1)
    {
        g_U10441 = 0;
        g_U10440 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

