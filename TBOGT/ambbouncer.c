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
    l_U160 = {-400.35190000, 396.46010000, 13.40960000};
    l_U173 = {-475.99560000, 1407.84500000, 14.49530000};
    l_U177 = 0;
    l_U178 = 0;
    l_U179 = 0;
    l_U180 = 0;
    l_U197 = "clammainroom";
    l_U198 = "clampalbkrm";
    l_U199 = "clamfronrm";
    l_U200 = "clamchangeroom";
    l_U205 = 0;
    l_U206 = 0;
    l_U207 = 0;
    l_U208 = 0;
    l_U209 = 0;
    l_U210 = 0;
    l_U213 = 4;
    l_U117 = {l_U214._fU4[0]};
    l_U120 = l_U214._fU68[0];
    l_U147[0] = {-384.43380000, 409.40460000, 4.66930000};
    l_U147[1] = {-403.43730000, 409.71060000, 4.66930000};
    l_U147[2] = {-404.89910000, 430.64470000, 5.16940000};
    l_U147[3] = {-383.88510000, 430.05550000, 5.16940000};
    l_U163[0] = {-507.75130000, 1379.07300000, 12.47120000};
    l_U163[1] = {-529.58400000, 1395.25000000, 12.97110000};
    l_U163[2] = {-491.91250000, 1394.51600000, 14.47120000};
    sub_567( "" );
    sub_722( 0, sub_673(), "LUIS", 0 );
    sub_867();
    if (g_U12379)
    {
        l_U211 = 1;
    }
    else
    {
        l_U211 = 2;
    }
    while (true)
    {
        WAIT( 0 );
        if ((g_U10526) AND (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()))
        {
            if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambBouncer" )) < l_U213)
            {
                if (NOT (IS_CHAR_INJURED( sub_673() )))
                {
                    if (IS_WANTED_LEVEL_GREATER( sub_2882(), 0 ))
                    {
                        l_U211 = 1;
                    }
                }
                switch (l_U115)
                {
                    case 0:
                    if (sub_2968())
                    {
                        if (sub_3048())
                        {
                            l_U115 = 1;
                        }
                    }
                    break;
                    case 1:
                    if (IS_PLAYER_PLAYING( sub_2882() ))
                    {
                        if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2882() ))
                        {
                            if (l_U206)
                            {
                                sub_3467();
                            }
                            else
                            {
                                sub_5794();
                            }
                        }
                    }
                    break;
                    case 2: break;
                }
            }
            else
            {
                sub_7781();
            }
        }
        else
        {
            sub_7781();
        }
    }
    return;
}

void sub_567(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_584();
    return;
}

void sub_584()
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

void sub_673()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_722(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_802( "\n PED NUMBER ", uParam0 );
    sub_842( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_802(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_842(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_867()
{
    if ((VDIST( l_U117, l_U129 )) < 2.00000000)
    {
        l_U126 = 676448572;
        l_U176 = 1;
        sub_922();
        sub_1553();
    }
    if ((VDIST( l_U117, l_U132 )) < 2.00000000)
    {
        l_U126 = 676448572;
        l_U176 = 1;
        sub_922();
        sub_1553();
    }
    if ((VDIST( l_U117, l_U135 )) < 2.00000000)
    {
        l_U126 = 676448572;
        l_U176 = 1;
        l_U206 = 1;
        sub_922();
        sub_1553();
    }
    if ((VDIST( l_U117, l_U138 )) < 2.00000000)
    {
        l_U126 = -1780698891;
        l_U176 = 2;
        l_U210 = 1;
        sub_922();
        sub_1553();
    }
    if ((VDIST( l_U117, l_U141 )) < 2.00000000)
    {
        l_U126 = -1780698891;
        l_U176 = 2;
        sub_922();
        sub_1553();
    }
    if ((VDIST( l_U117, l_U144 )) < 2.00000000)
    {
        l_U126 = -1780698891;
        l_U176 = 2;
        l_U206 = 1;
        sub_922();
        sub_1553();
    }
    if (((VDIST( l_U117, l_U147[3] )) < 2.00000000) || (((VDIST( l_U117, l_U147[2] )) < 2.00000000) || (((VDIST( l_U117, l_U147[1] )) < 2.00000000) || ((VDIST( l_U117, l_U147[0] )) < 2.00000000))))
    {
        l_U126 = 897868981;
        l_U176 = 3;
        sub_922();
        sub_1553();
        if (((VDIST( l_U117, l_U147[3] )) < 2.00000000) || ((VDIST( l_U117, l_U147[2] )) < 2.00000000))
        {
            l_U210 = 1;
        }
    }
    if ((VDIST( l_U117, l_U160 )) < 2.00000000)
    {
        l_U126 = 1756785265;
        l_U176 = 3;
        l_U206 = 1;
        sub_922();
        sub_1553();
    }
    if (((VDIST( l_U117, l_U163[2] )) < 2.00000000) || (((VDIST( l_U117, l_U163[1] )) < 2.00000000) || ((VDIST( l_U117, l_U163[0] )) < 2.00000000)))
    {
        l_U126 = 676448572;
        l_U176 = 4;
        sub_922();
        sub_1553();
        if ((VDIST( l_U117, l_U163[2] )) < 2.00000000)
        {
            l_U210 = 1;
        }
    }
    if ((VDIST( l_U117, l_U173 )) < 2.00000000)
    {
        l_U126 = 676448572;
        l_U176 = 4;
        l_U206 = 1;
        sub_922();
        sub_1553();
    }
    return;
}

void sub_922()
{
    if (l_U126 == -1780698891)
    {
        l_U185 = "BO1_AGGNO";
        l_U186 = "BO1_ARMEJ";
        l_U187 = "BO1_DISNO";
        l_U188 = "BO1_NEGYES";
        l_U189 = "BO1_POLITE";
        l_U190 = "BO1_POSYES";
        StrCopy( ref l_U201, "BOUNCER_1", 16 );
        l_U212 = 1;
    }
    else if (l_U126 == 897868981)
    {
        l_U185 = "BO1_AGGNO2";
        l_U186 = "BO1_ARMEJ2";
        l_U187 = "BO1_DISNO2";
        l_U188 = "BO1_NEGYES2";
        l_U189 = "BO1_POLITE2";
        l_U190 = "BO1_POSYES2";
        StrCopy( ref l_U201, "BOUNCER_2", 16 );
        l_U212 = 2;
    }
    else if (l_U126 == 676448572)
    {
        l_U185 = "BO1_AGGNO3";
        l_U186 = "BO1_ARMEJ3";
        l_U187 = "BO1_DISSNO3";
        l_U188 = "BO1_NEGYES3";
        l_U189 = "BO1_POLITE3";
        l_U190 = "BO1_POSYES3";
        StrCopy( ref l_U201, "BOUNCER_3", 16 );
        l_U212 = 3;
    }
    else if (l_U126 == 1756785265)
    {
        l_U185 = "BO1_AGGNO2";
        l_U186 = "BO1_ARMEJ2";
        l_U187 = "BO1_DISNO2";
        l_U188 = "BO1_NEGYES2";
        l_U189 = "BO1_POLITE2";
        l_U190 = "BO1_POSYES2";
        StrCopy( ref l_U201, "BOUNCER_2", 16 );
        l_U212 = 2;
    };;;;
    return;
}

void sub_1553()
{
    if (l_U176 == 1)
    {
        l_U197 = "clammainroom";
        l_U198 = "clampalbkrm";
        l_U199 = "clamfronrm";
        l_U200 = "clamchangeroom";
    }
    else if (l_U176 == 2)
    {
        l_U197 = "Bada_room1";
        l_U198 = "Bada-Private";
        l_U199 = "Bada_room2";
        l_U200 = "Bada_room1a";
    }
    else if (l_U176 == 3)
    {
        l_U197 = "gayclubroom";
        l_U198 = "gaydanceflr";
        l_U199 = "gayclubstrs";
        l_U200 = "gaydanceflr";
        l_U213 = 6;
    }
    else if (l_U176 == 4)
    {
        l_U197 = "Night_Dance";
        l_U198 = "Night_Lobby";
        l_U199 = "Night_Dance";
        l_U200 = "Night_Lobby";
        l_U213 = 5;
    }
    else if (l_U176 == 5)
    {
        l_U206 = 1;
    };;;;;
    return;
}

void sub_2882()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_2968()
{
    if (l_U176 > 0)
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

int sub_3048()
{
    if (IS_CHAR_DEAD( l_U125 ))
    {
        COPY_COMBAT_DECISION_MAKER( 65568, ref l_U181 );
        CREATE_CHAR( 4, l_U126, l_U117._fU0, l_U117._fU4, l_U117._fU8, ref l_U125, 1 );
        SET_CHAR_RELATIONSHIP( l_U125, 1, 0 );
        SET_CHAR_RELATIONSHIP( l_U125, 1, 4 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U125, 4 );
        SET_COMBAT_DECISION_MAKER( l_U125, l_U181 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U125 );
        SET_CURRENT_CHAR_WEAPON( l_U125, 0, 0 );
        if (NOT l_U206)
        {
            if (l_U210)
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U125, l_U200 );
            }
            else
            {
                SET_ROOM_FOR_CHAR_BY_NAME( l_U125, l_U197 );
            }
        }
        SET_CHAR_HEADING( l_U125, l_U120 );
        TASK_START_SCENARIO_IN_PLACE( l_U125, "Scenario_Bouncer", -1082130432 );
        sub_722( l_U212, l_U125, ref l_U201, 0 );
        sub_3350( ref l_U201 );
        sub_3350( "\n" );
        SET_CHAR_ACCURACY( l_U125, 20 );
    }
    else
    {
        return 1;
    }
    return 0;
}

void sub_3350(unknown uParam0)
{
    return;
}

void sub_3467()
{
    if (NOT (IS_CHAR_INJURED( l_U125 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_673() )))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_2882(), 0 )))
            {
                if (NOT g_U10504)
                {
                    if (NOT l_U209)
                    {
                        if (NOT l_U207)
                        {
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U125, sub_673(), 10.00000000, 10.00000000, 3.00000000, 0 ))
                            {
                                if (NOT g_U10505)
                                {
                                    PRINT_HELP_FOREVER( "STR_WEA" );
                                    g_U10505 = 1;
                                }
                            }
                            else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "STR_WEA" ))
                            {
                                CLEAR_HELP();
                            }
                            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U125, sub_673(), 3.00000000, 3.00000000, 3.00000000, 0 ))
                            {
                                if ((IS_WANTED_LEVEL_GREATER( sub_2882(), 0 )) || ((IS_CHAR_ON_ANY_BIKE( sub_673() )) || (IS_CHAR_ARMED( sub_673(), 7 ))))
                                {
                                    if (sub_3845( sub_3753(), ref l_U191, l_U211, 1 ))
                                    {
                                        TASK_LOOK_AT_CHAR( l_U125, sub_673(), -2, 1 );
                                        l_U207 = 1;
                                    }
                                }
                                else if (NOT l_U208)
                                {
                                    if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_2882() ))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( sub_673() ))
                                        {
                                            TASK_LOOK_AT_CHAR( l_U125, sub_673(), -2, 1 );
                                            l_U208 = 1;
                                        }
                                        else if (sub_3845( sub_4903(), ref l_U191, l_U211, 1 ))
                                        {
                                            TASK_LOOK_AT_CHAR( l_U125, sub_673(), -2, 1 );
                                            l_U208 = 1;
                                        }
                                    }
                                    else
                                    {
                                        TASK_LOOK_AT_CHAR( l_U125, sub_673(), -2, 1 );
                                        l_U208 = 1;
                                    }
                                }
                            }
                        }
                        else if (sub_5039())
                        {
                            if (IS_CHAR_ARMED( sub_673(), 7 ))
                            {
                                l_U209 = 1;
                                g_U10504 = 1;
                                if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "STR_WEA" ))
                                {
                                    CLEAR_HELP();
                                }
                                sub_5245();
                            }
                        }
                        else if (NOT (IS_CHAR_ARMED( sub_673(), 7 )))
                        {
                            l_U207 = 0;
                        };;;
                    }
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U125, sub_673(), 20.00000000, 20.00000000, 20.00000000, 0 ))
                    {
                        if (IS_PLAYER_TARGETTING_CHAR( sub_2882(), l_U125 ))
                        {
                            g_U10504 = 1;
                        }
                        if (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2882(), l_U125 ))
                        {
                            g_U10504 = 1;
                        }
                        if ((g_U12379 == 0) AND (IS_CHAR_SHOOTING( sub_673() )))
                        {
                            g_U10504 = 1;
                        }
                        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U125, sub_673(), 0 ))
                        {
                            g_U10504 = 1;
                        }
                    }
                }
                else
                {
                    sub_5245();
                }
            }
            else if (l_U209)
            {
                if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U125, sub_673(), 10.00000000, 10.00000000, 3.00000000, 0 ))
                {
                    sub_5245();
                    g_U10504 = 1;
                }
            }
        }
    }
    else if (NOT (IS_CHAR_DEAD( l_U125 )))
    {
        g_U10504 = 1;
        SET_CHAR_HEALTH( l_U125, 0 );
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "STR_WEA" ))
    {
        CLEAR_HELP();
    }
    return;
}

void sub_3753()
{
    unknown Result;
    int iVar3;

    iVar3 = sub_3764( 0, 2 );
    if (iVar3 == 0)
    {
        Result = l_U187;
    }
    else
    {
        Result = l_U185;
    }
    return Result;
}

void sub_3764(unknown uParam0, unknown Result)
{
    GENERATE_RANDOM_INT_IN_RANGE( uParam0, Result, ref Result );
    return Result;
}

void sub_3845(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_3866( uParam0, ref l_U2._fU0, uParam1, uParam2, uParam3 );
}

void sub_3866(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_3920( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_3920(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_3942( iParam1 )))
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
    sub_4618( ref g_U8868, ref l_U2 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_3942(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_3350( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_3350( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_3350( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_4618(int iParam0, int iParam1)
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

void sub_4903()
{
    unknown Result;
    int iVar3;

    iVar3 = sub_3764( 0, 2 );
    if (iVar3 == 0)
    {
        Result = l_U190;
    }
    else
    {
        Result = l_U188;
    }
    return Result;
}

int sub_5039()
{
    int iVar2;

    if (l_U176 > 0)
    {
        if (NOT (IS_CHAR_DEAD( sub_673() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_673(), ref iVar2 );
            if ((iVar2 == (GET_HASH_KEY( l_U200 ))) || ((iVar2 == (GET_HASH_KEY( l_U199 ))) || ((iVar2 == (GET_HASH_KEY( l_U198 ))) || (iVar2 == (GET_HASH_KEY( l_U197 ))))))
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

void sub_5245()
{
    if (NOT (IS_CHAR_INJURED( l_U125 )))
    {
        if (NOT (IS_CHAR_INJURED( sub_673() )))
        {
            GET_SCRIPT_TASK_STATUS( l_U125, 91, ref l_U183 );
            if (l_U183 == 7)
            {
                SET_CHAR_RELATIONSHIP( l_U125, 5, 0 );
                SET_CHAR_NEVER_TARGETTED( l_U125, 0 );
                if (IS_CHAR_SHOOTING( sub_673() ))
                {
                    GIVE_WEAPON_TO_CHAR( l_U125, 7, 60, 1 );
                    SET_CURRENT_CHAR_WEAPON( l_U125, 7, 0 );
                }
                TASK_COMBAT( l_U125, sub_673() );
                if (sub_3845( l_U186, ref l_U191, l_U211, 1 ))
                {
                    ;
                }
                l_U178 = 1;
            }
        }
    }
    return;
}

void sub_5794()
{
    if (sub_5039())
    {
        if (g_U10504)
        {
            if (NOT (IS_CHAR_INJURED( l_U125 )))
            {
                if (IS_PLAYER_TARGETTING_CHAR( sub_2882(), l_U125 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U125, 7, ref l_U183 );
                    if (l_U183 == 7)
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U125 );
                        TASK_HANDS_UP( l_U125, 10000 );
                    }
                }
                else
                {
                    sub_5924();
                }
            }
        }
        else if (sub_6044())
        {
            if (NOT (IS_CHAR_INJURED( sub_673() )))
            {
                if (NOT (LOCATE_CHAR_ON_FOOT_3D( sub_673(), 1198.26100000, 1695.99500000, 16.72170000, 3.00000000, 3.00000000, 3.50000000, 0 )))
                {
                    if (IS_CHAR_ARMED( sub_673(), 7 ))
                    {
                        g_U10503 = 1;
                    }
                    if (IS_CHAR_IN_MELEE_COMBAT( sub_673() ))
                    {
                        g_U10503 = 1;
                    }
                }
                if (sub_6273())
                {
                    g_U10503 = 1;
                }
            }
        }
        sub_6365();
        if (NOT (IS_CHAR_INJURED( sub_673() )))
        {
            if (IS_CHAR_SHOOTING( sub_673() ))
            {
                g_U10504 = 1;
                sub_5245();
            }
            if (IS_CHAR_IN_ANY_CAR( sub_673() ))
            {
                g_U10504 = 1;
                sub_5245();
            }
            if (NOT (IS_CHAR_INJURED( l_U125 )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U125, sub_673(), 0 ))
                {
                    g_U10504 = 1;
                    sub_5245();
                }
            }
        }
    }
    else if (g_U10504)
    {
        if (NOT (IS_CHAR_INJURED( l_U125 )))
        {
            if (LOCATE_CHAR_ON_FOOT_3D( l_U125, l_U117._fU0, l_U117._fU4, l_U117._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U125, 114, ref l_U183 );
                if (l_U183 == 7)
                {
                    TASK_START_SCENARIO_IN_PLACE( l_U125, "Scenario_Bouncer", -1082130432 );
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U125, 29, ref l_U183 );
                if (l_U183 == 7)
                {
                    CLEAR_CHAR_TASKS( l_U125 );
                    SET_CHAR_RELATIONSHIP( l_U125, 1, 0 );
                    OPEN_SEQUENCE_TASK( ref l_U184 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U117._fU0, l_U117._fU4, l_U117._fU8, 2, -2, 2.00000000 );
                    TASK_ACHIEVE_HEADING( 0, l_U120 );
                    CLOSE_SEQUENCE_TASK( l_U184 );
                    TASK_PERFORM_SEQUENCE( l_U125, l_U184 );
                    CLEAR_SEQUENCE_TASK( l_U184 );
                }
            }
        }
    }
    return;
}

void sub_5924()
{
    int iVar2;

    GET_SCRIPT_TASK_STATUS( l_U125, 91, ref l_U183 );
    if (l_U183 == 1)
    {
        GET_CURRENT_CHAR_WEAPON( l_U125, ref iVar2 );
        if (iVar2 == 0)
        {
            if (IS_CHAR_SHOOTING( sub_673() ))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U125 );
                sub_5245();
            }
        }
    }
    else
    {
        sub_5245();
    }
    return;
}

int sub_6044()
{
    int iVar2;

    if (l_U176 > 0)
    {
        if (NOT (IS_CHAR_DEAD( sub_673() )))
        {
            GET_KEY_FOR_CHAR_IN_ROOM( sub_673(), ref iVar2 );
            if ((iVar2 == (GET_HASH_KEY( l_U200 ))) || (iVar2 == (GET_HASH_KEY( l_U197 ))))
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

int sub_6273()
{
    switch (g_U95._fU0)
    {
        case 1022:
        case 1023:
        case 1024:
        case 1025:
        case 1026:
        return 1;
        break;
    }
    return 0;
}

void sub_6365()
{
    if (NOT (IS_CHAR_INJURED( l_U125 )))
    {
        if (g_U10503 == 0)
        {
            l_U116 = 0;
        }
        switch (l_U116)
        {
            case 0:
            if (LOCATE_CHAR_ON_FOOT_3D( l_U125, l_U117._fU0, l_U117._fU4, l_U117._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U125, 114, ref l_U183 );
                if (l_U183 == 7)
                {
                    TASK_START_SCENARIO_IN_PLACE( l_U125, "Scenario_Bouncer", -1082130432 );
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U125, 29, ref l_U183 );
                if (l_U183 == 7)
                {
                    OPEN_SEQUENCE_TASK( ref l_U184 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U117._fU0, l_U117._fU4, l_U117._fU8, 2, -2, 2.00000000 );
                    TASK_ACHIEVE_HEADING( 0, l_U120 );
                    CLOSE_SEQUENCE_TASK( l_U184 );
                    TASK_PERFORM_SEQUENCE( l_U125, l_U184 );
                    CLEAR_SEQUENCE_TASK( l_U184 );
                }
            }
            if (g_U10503)
            {
                if (l_U178)
                {
                    g_U10504 = 1;
                }
                else
                {
                    l_U116 = 1;
                }
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( sub_673() )))
            {
                GET_CHAR_COORDINATES( sub_673(), ref l_U121._fU0, ref l_U121._fU4, ref l_U121._fU8 );
                if (LOCATE_CHAR_ON_FOOT_3D( l_U125, l_U121._fU0, l_U121._fU4, l_U121._fU8, 1.50000000, 1.50000000, 1.50000000, 0 ))
                {
                    CLEAR_CHAR_TASKS( l_U125 );
                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U125, sub_673() );
                    if (l_U178)
                    {
                        l_U116 = 2;
                    }
                    else if (sub_3845( l_U189, ref l_U191, l_U211, 1 ))
                    {
                        l_U116 = 2;
                        SETTIMERA( 0 );
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U125, 29, ref l_U183 );
                    if (l_U183 == 7)
                    {
                        OPEN_SEQUENCE_TASK( ref l_U184 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U121._fU0, l_U121._fU4, l_U121._fU8, 2, -2, 2.00000000 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_673() );
                        CLOSE_SEQUENCE_TASK( l_U184 );
                        TASK_PERFORM_SEQUENCE( l_U125, l_U184 );
                        CLEAR_SEQUENCE_TASK( l_U184 );
                    }
                }
            }
            break;
            case 2:
            if (NOT (sub_7081( l_U191 )))
            {
                if (TIMERA() > 10000)
                {
                    if (l_U178)
                    {
                        g_U10504 = 1;
                    }
                    else
                    {
                        g_U10503 = 0;
                        l_U178 = 1;
                        l_U116 = 0;
                    }
                }
            }
            break;
        }
    }
    return;
}

int sub_7081(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8867 == 2) || ((g_U8867 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_3350( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_3350( "\n speech is not playing" );
    }
    return 0;
}

void sub_7781()
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
        g_U10504 = 0;
        g_U10503 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

