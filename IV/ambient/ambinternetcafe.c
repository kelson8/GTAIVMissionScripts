void main()
{
    l_U98 = 0;
    l_U99 = 0;
    l_U102 = 212900845;
    l_U103 = {972.31460000, -174.62050000, 23.19370000};
    l_U106 = 23.47290000;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U117 = 1;
    l_U127 = {973.84080000, -170.07320000, 24.19370000};
    l_U133 = {-421.03140000, 1472.14300000, 19.16340000};
    l_U136 = {1026.54800000, -322.49570000, 19.21690000};
    l_U139 = {-602.77380000, -784.43550000, 3.83910000};
    l_U142 = {1466.75000000, 57.65930000, 24.18560000};
    l_U145 = {-166.28640000, 594.37370000, 13.70960000};
    l_U148 = {-233.77820000, 51.47020000, 14.70810000};
    l_U151 = {15.72910000, 981.71850000, 14.64890000};
    GET_INTERIOR_AT_COORDS( l_U154._fU4[0]._fU0, l_U154._fU4[0]._fU4, l_U154._fU4[0]._fU8, ref l_U100 );
    l_U103 = {l_U154._fU4[0]};
    l_U106 = l_U154._fU68[0];
    FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( l_U103, 25.00000000, 10 );
    l_U115 = VDIST( l_U103, l_U133 );
    if (l_U115 < 5.00000000)
    {
        l_U127 = {-422.41650000, 1476.23000000, 20.16000000};
        l_U113 = 150.00000000;
        l_U114 = 330.00000000;
        l_U102 = -1870989171;
        l_U118 = 4;
        l_U116 = 1;
        l_U112 = "GTAMLOROOM04";
    }
    l_U115 = VDIST( l_U103, l_U136 );
    if (l_U115 < 5.00000000)
    {
        l_U127 = {1015.30400000, -325.01080000, 20.22190000};
        l_U113 = 280.00000000;
        l_U114 = 100.00000000;
        l_U102 = 189853472;
        l_U118 = 5;
        l_U116 = 1;
        l_U112 = "LAUNDRY_17x6_Room01";
    }
    l_U115 = VDIST( l_U103, l_U139 );
    if (l_U115 < 5.00000000)
    {
        l_U127 = {-608.10930000, -791.44670000, 4.84410000};
        l_U113 = 350.00000000;
        l_U114 = 170.00000000;
        l_U102 = -1870989171;
        l_U118 = 4;
        l_U116 = 1;
        l_U112 = "GTAMLOROOMSTAT";
    }
    l_U115 = VDIST( l_U103, l_U142 );
    if (l_U115 < 5.00000000)
    {
        l_U127 = {1473.54500000, 54.86470000, 25.19060000};
        l_U113 = 80.00000000;
        l_U114 = 260.00000000;
        l_U102 = 1117105909;
        l_U118 = 4;
        l_U116 = 1;
        l_U117 = 1;
        l_U112 = "gta_mloroom01";
    }
    l_U115 = VDIST( l_U103, l_U145 );
    if (l_U115 < 5.00000000)
    {
        l_U127 = {-166.65390000, 600.93760000, 14.71450000};
        l_U113 = 180.00000000;
        l_U114 = 0.00000000;
        l_U102 = 22944263;
        l_U118 = 4;
        l_U116 = 1;
        l_U112 = "MloRoom_Ritz_Main";
    }
    l_U115 = VDIST( l_U103, l_U148 );
    if (l_U115 < 5.00000000)
    {
        l_U127 = {-235.20340000, 41.77200000, 14.71210000};
        l_U113 = 0.00000000;
        l_U114 = 180.00000000;
        l_U102 = 24233425;
        l_U118 = 5;
        l_U116 = 1;
        l_U117 = 1;
        l_U112 = "GTAMloRoom01";
    }
    l_U115 = VDIST( l_U103, l_U151 );
    if (l_U115 < 5.00000000)
    {
        l_U127 = {25.29410000, 980.59710000, 14.65290000};
        l_U113 = 90.00000000;
        l_U114 = 270.00000000;
        l_U102 = 24233425;
        l_U118 = 5;
        l_U116 = 1;
        l_U117 = 1;
        l_U112 = "GTAMloRoom01";
    }
    if (NOT l_U116)
    {
        l_U119 = GET_MAP_AREA_FROM_COORDS( l_U103 );
        if (l_U119 == 0)
        {
            if (g_U15654[53])
            {
                l_U107 = 1;
                l_U102 = 212900845;
                GET_CURRENT_DATE( ref l_U131, ref l_U132 );
            }
            else
            {
                l_U102 = -786449781;
            }
            l_U127 = {973.84080000, -170.07320000, 24.19370000};
            l_U113 = 90.00000000;
            l_U114 = 270.00000000;
        }
        else if (l_U119 == 2)
        {
            if (l_U103._fU4 > 0.00000000)
            {
                l_U113 = 270.00000000;
                l_U114 = 90.00000000;
                l_U127 = {-338.22380000, 1392.81300000, 12.91310000};
            }
            else
            {
                l_U113 = 180.00000000;
                l_U114 = 0.00000000;
                l_U127 = {50.28200000, -176.88900000, 13.53040000};
            }
            l_U102 = -786449781;
        }
        else if (l_U119 == 3)
        {
            l_U113 = 240.00000000;
            l_U114 = 60.00000000;
            l_U127 = {-1580.96600000, 463.96410000, 24.44380000};
            l_U102 = -786449781;
        };;;
        l_U112 = "GTA_MLOROOM02";
    }
    if (g_U10978)
    {
        l_U126 = 1;
    }
    else
    {
        l_U126 = 3;
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (sub_1683())
            {
                if (NOT g_U9163)
                {
                    switch (l_U98)
                    {
                        case 0:
                        if (l_U99 == 1)
                        {
                            if (l_U107)
                            {
                                CREATE_CHAR( 5, l_U102, l_U103._fU0, l_U103._fU4, l_U103._fU8, ref l_U101, 1 );
                            }
                            else
                            {
                                CREATE_CHAR( l_U118, l_U102, l_U103._fU0, l_U103._fU4, l_U103._fU8, ref l_U101, 1 );
                            }
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U101, l_U112 );
                            SET_CHAR_HEADING( l_U101, l_U106 );
                            TASK_START_SCENARIO_IN_PLACE( l_U101, "Scenario_Standing", -1082130432 );
                            SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U101, 1 );
                            if (l_U107)
                            {
                                REGISTER_SCRIPT_WITH_AUDIO( 0 );
                                sub_2001( "TWAT" );
                                sub_2156( 0, sub_2107(), "NIKO", 0 );
                                sub_2156( 1, l_U101, "TWAT_WORKER", 0 );
                                SET_AMBIENT_VOICE_NAME( l_U101, "TWAT_WORKER" );
                                sub_2353();
                            }
                            l_U98 = 1;
                        }
                        else
                        {
                            sub_2885();
                        }
                        break;
                        case 1:
                        if (l_U107)
                        {
                            if (l_U131 != g_U9162)
                            {
                                if (g_U15654[53])
                                {
                                    sub_3000();
                                }
                            }
                        }
                        else
                        {
                            sub_5315();
                        }
                        break;
                        case 2: break;
                    }
                }
                else
                {
                    sub_6436();
                }
            }
            else
            {
                sub_6436();
            }
        }
        else
        {
            sub_6436();
        }
    }
    return;
}

void sub_1683()
{
    int Result;

    Result = 1;
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "Roman9" )) >= 1)
    {
        Result = 0;
    }
    return Result;
}

void sub_2001(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_2018();
    return;
}

void sub_2018()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_2107()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2156(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2236( "\n PED NUMBER ", uParam0 );
    sub_2276( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2236(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2276(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2353()
{
    switch (g_U9161)
    {
        case 0:
        l_U110 = "TWAT_GREET1";
        l_U111 = "TWAT_BYE1";
        break;
        case 1:
        l_U110 = "TWAT_GREET2";
        l_U111 = "TWAT_BYE2";
        break;
        case 2:
        l_U110 = "TWAT_GREET3";
        l_U111 = "TWAT_BYE3";
        break;
        case 3:
        l_U110 = "TWAT_GREET4";
        l_U111 = "TWAT_BYE4";
        break;
        case 4:
        l_U110 = "TWAT_GREET5";
        l_U111 = "TWAT_BYE5";
        break;
        case 5:
        l_U110 = "TWAT_GREET6";
        l_U111 = "TWAT_BYE6";
        break;
        case 6:
        l_U110 = "TWAT_GREET7";
        l_U111 = "TWAT_BYE7";
        break;
        case 7:
        l_U110 = "TWAT_GREET8";
        l_U111 = "TWAT_BYE8";
        break;
        case 8:
        l_U110 = "TWAT_GREET9";
        l_U111 = "TWAT_BYE9";
        break;
        case 9:
        l_U110 = "TWAT_GREET10";
        l_U111 = "TWAT_BYE10";
        break;
    }
    return;
}

void sub_2885()
{
    REQUEST_MODEL( l_U102 );
    if (HAS_MODEL_LOADED( l_U102 ))
    {
        l_U99 = 1;
    }
    else
    {
        REQUEST_MODEL( l_U102 );
    }
    return;
}

void sub_3000()
{
    if (NOT (IS_CHAR_DEAD( sub_2107() )))
    {
        if (l_U109)
        {
            if (NOT sub_3037())
            {
                l_U108 = 0;
            }
            if (NOT (IS_CHAR_INJURED( l_U101 )))
            {
                if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U101, sub_2107(), 0 ))
                {
                    GET_SCRIPT_TASK_STATUS( l_U101, 25, ref l_U130 );
                    if (l_U130 == 7)
                    {
                        TASK_SMART_FLEE_CHAR( l_U101, sub_2107(), 100.00000000, 30000 );
                    }
                }
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U101 )))
        {
            if ((NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U101, sub_2107(), 0 ))) AND ((NOT (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3278(), l_U101 ))) AND (NOT (IS_PLAYER_TARGETTING_CHAR( sub_3278(), l_U101 )))))
            {
                if (NOT (sub_3372( l_U120 )))
                {
                    if (sub_3552())
                    {
                        if (l_U108)
                        {
                            if (sub_3696( l_U114, 90.00000000 ))
                            {
                                if (sub_3903( l_U111, ref l_U120, l_U126, 1 ))
                                {
                                    TASK_START_SCENARIO_IN_PLACE( l_U101, "Scenario_Standing", -1082130432 );
                                    sub_3484( "PLAY_SINGLE_SPEECH(sLeaving\n" );
                                    if (g_U9161 < 9)
                                    {
                                        g_U9161++;
                                    }
                                    g_U9162 = l_U131;
                                    l_U109 = 1;
                                }
                            }
                        }
                        else if (sub_3037())
                        {
                            if (sub_3696( l_U113, 90.00000000 ))
                            {
                                if (sub_3903( l_U110, ref l_U120, l_U126, 1 ))
                                {
                                    sub_3484( "PLAY_SINGLE_SPEECH(sEntering\n" );
                                    TASK_LOOK_AT_CHAR( l_U101, sub_2107(), -2, 1 );
                                    l_U108 = 1;
                                }
                            }
                        }
                    }
                }
                else if (NOT sub_3037())
                {
                    if (l_U108)
                    {
                        sub_5122( ref l_U120, 1 );
                    }
                }
            }
            else
            {
                l_U109 = 1;
                SET_CHAR_RELATIONSHIP( l_U101, 2, 0 );
                sub_5122( ref l_U120, 0 );
            }
        }
        else
        {
            l_U109 = 1;
            sub_5122( ref l_U120, 0 );
        }
    }
    return;
}

int sub_3037()
{
    int iVar2;
    int iVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( sub_2107() )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_2107(), ref iVar2 );
        if (iVar2 == (GET_HASH_KEY( l_U112 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar4 );
            GET_KEY_FOR_VIEWPORT_IN_ROOM( uVar4, ref iVar3 );
            if (iVar3 == (GET_HASH_KEY( l_U112 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_3278()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_3372(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_3484( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_3484( "\n speech is not playing" );
    }
    return 0;
}

void sub_3484(unknown uParam0)
{
    return;
}

int sub_3552()
{
    if (NOT (IS_CHAR_INJURED( sub_2107() )))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_2107(), l_U127._fU0, l_U127._fU4, l_U127._fU8, 1.00000000, 1.00000000, 2.00000000, 0 ))
        {
            sub_3484( "isPlayerAtDoor()\n" );
            return 1;
        }
    }
    return 0;
}

int sub_3696(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;

    if (NOT (IS_CHAR_DEAD( sub_2107() )))
    {
        GET_CHAR_HEADING( sub_2107(), ref fVar4 );
        fVar6 = uParam0 - uParam1;
        if (fVar6 < 0.00000000)
        {
            fVar6 += 360.00000000;
        }
        fVar5 = uParam0 + uParam1;
        if (fVar5 >= 360.00000000)
        {
            fVar5 -= 360.00000000;
        }
        if (fVar5 > fVar6)
        {
            if ((fVar4 > fVar6) AND (fVar4 < fVar5))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if ((fVar4 > fVar6) || (fVar4 < fVar5))
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

void sub_3903(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_3924( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_3924(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_3978( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_3978(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_4000( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
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
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_4676( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_4000(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_3484( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_3484( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_3484( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_4676(int iParam0, int iParam1)
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

void sub_5122(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_5315()
{
    if (NOT (IS_CHAR_DEAD( sub_2107() )))
    {
        if (l_U109)
        {
            if (NOT sub_3037())
            {
                l_U109 = 0;
                l_U108 = 0;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U101 )))
        {
            if ((NOT (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3278(), l_U101 ))) AND (NOT (IS_PLAYER_TARGETTING_CHAR( sub_3278(), l_U101 ))))
            {
                GET_SCRIPT_TASK_STATUS( l_U101, 7, ref l_U130 );
                if (l_U130 == 7)
                {
                    if (sub_3552())
                    {
                        if (l_U108)
                        {
                            if (sub_3696( l_U114, 90.00000000 ))
                            {
                                TASK_START_SCENARIO_IN_PLACE( l_U101, "Scenario_Standing", -1082130432 );
                                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3278() ))
                                {
                                    if (l_U116)
                                    {
                                        if (l_U117)
                                        {
                                            if (IS_CHAR_MODEL( l_U101, 24233425 ))
                                            {
                                                SAY_AMBIENT_SPEECH( l_U101, "THANKS", 1, 1, 2 );
                                            }
                                            else
                                            {
                                                SAY_AMBIENT_SPEECH( l_U101, "GENERIC_BYE", 1, 1, 2 );
                                            }
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( l_U101, "GENERIC_BYE", 1, 0, 0 );
                                        }
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH( l_U101, "TWAT_BYE", 1, 0, 0 );
                                    }
                                }
                                l_U109 = 1;
                            }
                        }
                        else if (sub_3037())
                        {
                            if (sub_3696( l_U113, 90.00000000 ))
                            {
                                TASK_LOOK_AT_CHAR( l_U101, sub_2107(), -2, 1 );
                                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3278() ))
                                {
                                    if (l_U116)
                                    {
                                        if (l_U117)
                                        {
                                            SAY_AMBIENT_SPEECH( l_U101, "GENERIC_HI", 1, 1, 2 );
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( l_U101, "GENERIC_HI", 1, 0, 0 );
                                        }
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH( l_U101, "TWAT_HI", 1, 0, 0 );
                                    }
                                }
                                l_U108 = 1;
                            }
                        }
                    }
                    else if (sub_3037())
                    {
                        sub_3484( "isPlayerInCafe()\n" );
                        if (IS_CHAR_MODEL( l_U101, 189853472 ))
                        {
                            sub_3484( "IF IS_CHAR_MODEL(counterPed, F_O_PEASTEURO_02)\n" );
                            if (g_U9207)
                            {
                                if (l_U117)
                                {
                                    SAY_AMBIENT_SPEECH( l_U101, "GET_OUT", 1, 1, 2 );
                                }
                                else
                                {
                                    SAY_AMBIENT_SPEECH( l_U101, "GET_OUT", 1, 0, 0 );
                                }
                                TASK_HANDS_UP( l_U101, 30000 );
                                sub_3484( "TASK_HANDS_UP(counterPed, 100000)\n" );
                            }
                        }
                    }
                }
                else
                {
                    sub_3484( "TASK_HANDS_UP(counterPed, 100000) = PERFORMING_TASK\n" );
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U101, 7, ref l_U130 );
                if (l_U130 == 7)
                {
                    if (l_U117)
                    {
                        SAY_AMBIENT_SPEECH( l_U101, "GET_OUT", 1, 1, 2 );
                    }
                    else
                    {
                        SAY_AMBIENT_SPEECH( l_U101, "GET_OUT", 1, 0, 0 );
                    }
                    sub_3484( "SAY_AMBIENT_SPEECH (counterPed, TRUE)\n" );
                    TASK_HANDS_UP( l_U101, 30000 );
                    l_U109 = 1;
                }
            }
        }
        else
        {
            l_U109 = 1;
        }
    }
    return;
}

void sub_6436()
{
    g_U9163 = 0;
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

