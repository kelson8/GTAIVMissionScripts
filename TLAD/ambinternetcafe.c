void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U100 = 0;
    l_U101 = 0;
    l_U104 = 212900845;
    l_U105 = {972.31460000, -174.62050000, 23.19370000};
    l_U108 = 23.47290000;
    l_U109 = 0;
    l_U110 = 0;
    l_U111 = 0;
    l_U119 = 1;
    l_U129 = {973.84080000, -170.07320000, 24.19370000};
    l_U135 = {-421.03140000, 1472.14300000, 19.16340000};
    l_U138 = {1026.54800000, -322.49570000, 19.21690000};
    l_U141 = {-602.77380000, -784.43550000, 3.83910000};
    l_U144 = {1466.75000000, 57.65930000, 24.18560000};
    l_U147 = {-166.28640000, 594.37370000, 13.70960000};
    l_U150 = {-233.77820000, 51.47020000, 14.70810000};
    l_U153 = {15.72910000, 981.71850000, 14.64890000};
    GET_INTERIOR_AT_COORDS( l_U156._fU4[0]._fU0, l_U156._fU4[0]._fU4, l_U156._fU4[0]._fU8, ref l_U102 );
    l_U105 = {l_U156._fU4[0]};
    l_U108 = l_U156._fU68[0];
    FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( l_U105, 25.00000000, 10 );
    l_U117 = VDIST( l_U105, l_U135 );
    if (l_U117 < 5.00000000)
    {
        l_U129 = {-422.41650000, 1476.23000000, 20.16000000};
        l_U115 = 150.00000000;
        l_U116 = 330.00000000;
        l_U104 = -1870989171;
        l_U120 = 4;
        l_U118 = 1;
        l_U114 = "GTAMLOROOM04";
    }
    l_U117 = VDIST( l_U105, l_U138 );
    if (l_U117 < 5.00000000)
    {
        l_U129 = {1015.30400000, -325.01080000, 20.22190000};
        l_U115 = 280.00000000;
        l_U116 = 100.00000000;
        l_U104 = 189853472;
        l_U120 = 5;
        l_U118 = 1;
        l_U114 = "LAUNDRY_17x6_Room01";
    }
    l_U117 = VDIST( l_U105, l_U141 );
    if (l_U117 < 5.00000000)
    {
        l_U129 = {-608.10930000, -791.44670000, 4.84410000};
        l_U115 = 350.00000000;
        l_U116 = 170.00000000;
        l_U104 = -1870989171;
        l_U120 = 4;
        l_U118 = 1;
        l_U114 = "GTAMLOROOMSTAT";
    }
    l_U117 = VDIST( l_U105, l_U144 );
    if (l_U117 < 5.00000000)
    {
        l_U129 = {1473.54500000, 54.86470000, 25.19060000};
        l_U115 = 80.00000000;
        l_U116 = 260.00000000;
        l_U104 = 1117105909;
        l_U120 = 4;
        l_U118 = 1;
        l_U119 = 1;
        l_U114 = "gta_mloroom01";
    }
    l_U117 = VDIST( l_U105, l_U147 );
    if (l_U117 < 5.00000000)
    {
        l_U129 = {-166.65390000, 600.93760000, 14.71450000};
        l_U115 = 180.00000000;
        l_U116 = 0.00000000;
        l_U104 = 22944263;
        l_U120 = 4;
        l_U118 = 1;
        l_U114 = "MloRoom_Ritz_Main";
    }
    l_U117 = VDIST( l_U105, l_U150 );
    if (l_U117 < 5.00000000)
    {
        l_U129 = {-235.20340000, 41.77200000, 14.71210000};
        l_U115 = 0.00000000;
        l_U116 = 180.00000000;
        l_U104 = 24233425;
        l_U120 = 5;
        l_U118 = 1;
        l_U119 = 1;
        l_U114 = "GTAMloRoom01";
    }
    l_U117 = VDIST( l_U105, l_U153 );
    if (l_U117 < 5.00000000)
    {
        l_U129 = {25.29410000, 980.59710000, 14.65290000};
        l_U115 = 90.00000000;
        l_U116 = 270.00000000;
        l_U104 = 24233425;
        l_U120 = 5;
        l_U118 = 1;
        l_U119 = 1;
        l_U114 = "GTAMloRoom01";
    }
    if (NOT l_U118)
    {
        l_U121 = GET_MAP_AREA_FROM_COORDS( l_U105 );
        if (l_U121 == 0)
        {
            l_U104 = -786449781;
            l_U129 = {973.84080000, -170.07320000, 24.19370000};
            l_U115 = 90.00000000;
            l_U116 = 270.00000000;
        }
        else if (l_U121 == 2)
        {
            if (l_U105._fU4 > 0.00000000)
            {
                l_U115 = 270.00000000;
                l_U116 = 90.00000000;
                l_U129 = {-338.22380000, 1392.81300000, 12.91310000};
            }
            else
            {
                l_U115 = 180.00000000;
                l_U116 = 0.00000000;
                l_U129 = {50.28200000, -176.88900000, 13.53040000};
            }
            l_U104 = -786449781;
        }
        else if (l_U121 == 3)
        {
            l_U115 = 240.00000000;
            l_U116 = 60.00000000;
            l_U129 = {-1580.96600000, 463.96410000, 24.44380000};
            l_U104 = -786449781;
        };;;
        l_U114 = "GTA_MLOROOM02";
    }
    if (g_U12303)
    {
        l_U128 = 1;
    }
    else
    {
        l_U128 = 3;
    }
    while (true)
    {
        WAIT( 0 );
        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
        {
            if (sub_1648())
            {
                if (NOT g_U10446)
                {
                    switch (l_U100)
                    {
                        case 0:
                        if (l_U101 == 1)
                        {
                            if (l_U109)
                            {
                                CREATE_CHAR( 5, l_U104, l_U105._fU0, l_U105._fU4, l_U105._fU8, ref l_U103, 1 );
                            }
                            else
                            {
                                CREATE_CHAR( l_U120, l_U104, l_U105._fU0, l_U105._fU4, l_U105._fU8, ref l_U103, 1 );
                            }
                            SET_ROOM_FOR_CHAR_BY_NAME( l_U103, l_U114 );
                            SET_CHAR_HEADING( l_U103, l_U108 );
                            TASK_START_SCENARIO_IN_PLACE( l_U103, "Scenario_Standing", -1082130432 );
                            SET_CHAR_WILL_COWER_INSTEAD_OF_FLEEING( l_U103, 1 );
                            if (l_U109)
                            {
                                REGISTER_SCRIPT_WITH_AUDIO( 0 );
                                sub_1940( "TWAT" );
                                sub_2095( 0, sub_2046(), "NIKO", 0 );
                                sub_2095( 1, l_U103, "TWAT_WORKER", 0 );
                                SET_AMBIENT_VOICE_NAME( l_U103, "TWAT_WORKER" );
                                sub_2292();
                            }
                            l_U100 = 1;
                        }
                        else
                        {
                            sub_2824();
                        }
                        break;
                        case 1:
                        if (l_U109)
                        {
                            if (l_U133 != g_U10445)
                            {
                                ;
                            }
                        }
                        else
                        {
                            sub_2929();
                        }
                        break;
                        case 2: break;
                    }
                }
                else
                {
                    sub_4490();
                }
            }
            else
            {
                sub_4490();
            }
        }
        else
        {
            sub_4490();
        }
    }
    return;
}

void sub_1648()
{
    int Result;

    Result = 1;
    return Result;
}

void sub_1940(unknown uParam0)
{
    StrCopy( ref l_U2._fU0, uParam0, 16 );
    sub_1957();
    return;
}

void sub_1957()
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

void sub_2046()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2095(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U2._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U2._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2175( "\n PED NUMBER ", uParam0 );
    sub_2215( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2175(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2215(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2292()
{
    switch (g_U10444)
    {
        case 0:
        l_U112 = "TWAT_GREET1";
        l_U113 = "TWAT_BYE1";
        break;
        case 1:
        l_U112 = "TWAT_GREET2";
        l_U113 = "TWAT_BYE2";
        break;
        case 2:
        l_U112 = "TWAT_GREET3";
        l_U113 = "TWAT_BYE3";
        break;
        case 3:
        l_U112 = "TWAT_GREET4";
        l_U113 = "TWAT_BYE4";
        break;
        case 4:
        l_U112 = "TWAT_GREET5";
        l_U113 = "TWAT_BYE5";
        break;
        case 5:
        l_U112 = "TWAT_GREET6";
        l_U113 = "TWAT_BYE6";
        break;
        case 6:
        l_U112 = "TWAT_GREET7";
        l_U113 = "TWAT_BYE7";
        break;
        case 7:
        l_U112 = "TWAT_GREET8";
        l_U113 = "TWAT_BYE8";
        break;
        case 8:
        l_U112 = "TWAT_GREET9";
        l_U113 = "TWAT_BYE9";
        break;
        case 9:
        l_U112 = "TWAT_GREET10";
        l_U113 = "TWAT_BYE10";
        break;
    }
    return;
}

void sub_2824()
{
    REQUEST_MODEL( l_U104 );
    if (HAS_MODEL_LOADED( l_U104 ))
    {
        l_U101 = 1;
    }
    else
    {
        REQUEST_MODEL( l_U104 );
    }
    return;
}

void sub_2929()
{
    if (NOT (IS_CHAR_DEAD( sub_2046() )))
    {
        if (l_U111)
        {
            if (NOT sub_2966())
            {
                l_U111 = 0;
                l_U110 = 0;
            }
        }
        else if (NOT (IS_CHAR_INJURED( l_U103 )))
        {
            if ((NOT (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_3118(), l_U103 ))) AND (NOT (IS_PLAYER_TARGETTING_CHAR( sub_3118(), l_U103 ))))
            {
                GET_SCRIPT_TASK_STATUS( l_U103, 7, ref l_U132 );
                if (l_U132 == 7)
                {
                    if (sub_3215())
                    {
                        if (l_U110)
                        {
                            if (sub_3371( l_U116, 90.00000000 ))
                            {
                                TASK_START_SCENARIO_IN_PLACE( l_U103, "Scenario_Standing", -1082130432 );
                                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3118() ))
                                {
                                    if (l_U118)
                                    {
                                        if (l_U119)
                                        {
                                            if (IS_CHAR_MODEL( l_U103, 24233425 ))
                                            {
                                                SAY_AMBIENT_SPEECH( l_U103, "THANKS", 1, 1, 2 );
                                            }
                                            else
                                            {
                                                SAY_AMBIENT_SPEECH( l_U103, "GENERIC_BYE", 1, 1, 2 );
                                            }
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( l_U103, "GENERIC_BYE", 1, 0, 0 );
                                        }
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH( l_U103, "TWAT_BYE", 1, 0, 0 );
                                    }
                                }
                                l_U111 = 1;
                            }
                        }
                        else if (sub_2966())
                        {
                            if (sub_3371( l_U115, 90.00000000 ))
                            {
                                TASK_LOOK_AT_CHAR( l_U103, sub_2046(), -2, 1 );
                                if (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3118() ))
                                {
                                    if (l_U118)
                                    {
                                        if (l_U119)
                                        {
                                            SAY_AMBIENT_SPEECH( l_U103, "GENERIC_HI", 1, 1, 2 );
                                        }
                                        else
                                        {
                                            SAY_AMBIENT_SPEECH( l_U103, "GENERIC_HI", 1, 0, 0 );
                                        }
                                    }
                                    else
                                    {
                                        SAY_AMBIENT_SPEECH( l_U103, "TWAT_HI", 1, 0, 0 );
                                    }
                                }
                                l_U110 = 1;
                            }
                        }
                    }
                    else if (sub_2966())
                    {
                        sub_3316( "isPlayerInCafe()\n" );
                        if (IS_CHAR_MODEL( l_U103, 189853472 ))
                        {
                            sub_3316( "IF IS_CHAR_MODEL(counterPed, F_O_PEASTEURO_02)\n" );
                            if (g_U10504)
                            {
                                if (l_U119)
                                {
                                    SAY_AMBIENT_SPEECH( l_U103, "GET_OUT", 1, 1, 2 );
                                }
                                else
                                {
                                    SAY_AMBIENT_SPEECH( l_U103, "GET_OUT", 1, 0, 0 );
                                }
                                TASK_HANDS_UP( l_U103, 30000 );
                                sub_3316( "TASK_HANDS_UP(counterPed, 100000)\n" );
                            }
                        }
                    }
                }
                else
                {
                    sub_3316( "TASK_HANDS_UP(counterPed, 100000) = PERFORMING_TASK\n" );
                }
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( l_U103, 7, ref l_U132 );
                if (l_U132 == 7)
                {
                    if (l_U119)
                    {
                        SAY_AMBIENT_SPEECH( l_U103, "GET_OUT", 1, 1, 2 );
                    }
                    else
                    {
                        SAY_AMBIENT_SPEECH( l_U103, "GET_OUT", 1, 0, 0 );
                    }
                    sub_3316( "SAY_AMBIENT_SPEECH (counterPed, TRUE)\n" );
                    TASK_HANDS_UP( l_U103, 30000 );
                    l_U111 = 1;
                }
            }
        }
        else
        {
            l_U111 = 1;
        }
    }
    return;
}

int sub_2966()
{
    int iVar2;
    int iVar3;
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( sub_2046() )))
    {
        GET_KEY_FOR_CHAR_IN_ROOM( sub_2046(), ref iVar2 );
        if (iVar2 == (GET_HASH_KEY( l_U114 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar4 );
            GET_KEY_FOR_VIEWPORT_IN_ROOM( uVar4, ref iVar3 );
            if (iVar3 == (GET_HASH_KEY( l_U114 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_3118()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_3215()
{
    if (NOT (IS_CHAR_INJURED( sub_2046() )))
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_2046(), l_U129._fU0, l_U129._fU4, l_U129._fU8, 1.00000000, 1.00000000, 2.00000000, 0 ))
        {
            sub_3316( "isPlayerAtDoor()\n" );
            return 1;
        }
    }
    return 0;
}

void sub_3316(unknown uParam0)
{
    return;
}

int sub_3371(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;
    float fVar6;

    if (NOT (IS_CHAR_DEAD( sub_2046() )))
    {
        GET_CHAR_HEADING( sub_2046(), ref fVar4 );
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

void sub_4490()
{
    g_U10446 = 0;
    UNREGISTER_SCRIPT_WITH_AUDIO();
    TERMINATE_THIS_SCRIPT();
    return;
}

