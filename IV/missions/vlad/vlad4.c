// kelson8 -
// I have renamed some variables in here and guessed what some of these functions do.
// Now it has IvanPed, and IvanCar variables
// These names are not original, just something that I came up with and guessed

// Original values (decompiled and renamed):
// Variables
// l_U2482 = IvanCar
// l_U2250 = IvanPed
// l_U2176 = MissionSwitch
// l_U2484 = RomanGarageBlip
// l_U2228 = IvanHealth

// l_U2234 = GetPlayerCar

// Functions:
// sub_7813 = SetIvanCarInvincible

// Mostly completed this function: sub_23877(int charHandle, int vehicleHandle)

// TODO Figure out what this value is: l_U2180
// Usage: 
//  l_U2180[MissionSwitch] == 0 - To check
//  l_U2180[MissionSwitch] = 1 - To set
//  l_U2180[MissionSwitch]++ - To increment

void main()
{
    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;

    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;

    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;

    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;

    l_U481 = 0;
    l_U482 = 0;
    l_U483 = 0;

    l_U484 = 0;
    l_U485 = 0;
    l_U486 = 1;

    l_U487 = 0;
    l_U488 = 0;
    l_U489 = 0;

    l_U490 = 1;
    l_U491 = 0;
    l_U492 = 0;

    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;

    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 0;

    l_U499 = 0;
    l_U500 = 1;
    l_U501 = 0;

    l_U502 = 0;
    l_U503 = 0;
    l_U504 = 0;

    l_U505 = 0;
    l_U506 = 0;
    l_U507 = 0;

    l_U508 = 1;
    l_U509 = 1;
    l_U510 = 0;

    l_U511 = 0;
    l_U512 = 0;
    l_U513 = 0;

    l_U514 = 0;
    l_U515 = 0;
    l_U516 = 0;

    l_U1119 = 90.00000000;
    l_U1120 = 5.00000000;
    l_U1121 = 25.00000000;

    l_U1122 = 15.00000000;
    l_U1123 = 2.00000000;
    l_U1124 = 4.00000000;

    l_U1125 = 0.50000000;
    l_U1126 = 120.00000000;
    l_U1127 = 0.00000000;

    l_U1128 = 0.00000000;
    l_U1130 = 1.00000000;
    l_U1131 = 0.00000000;

    l_U1132 = 1.00000000;
    l_U1133 = 10.00000000;
    l_U1134 = 30.00000000;

    l_U1136 = 1.00000000;
    l_U1138 = 1.00000000;
    l_U1139 = 5.00000000;

    l_U1140 = 1.00000000;
    l_U1141 = 1.00000000;
    l_U1146 = 0.30000000;

    l_U1147 = 0.50000000;
    l_U1148 = 50.00000000;
    l_U1350 = 0;

    l_U1351 = 0;
    l_U1352 = 0;
    l_U1353 = 0;

    l_U1354 = 1;
    l_U1355 = 0;
    l_U1356 = 0;

    l_U1357 = 0;
    l_U1358 = 0;
    CurrentPlaybackNumberForCar = -1;

    l_U1360 = 0;
    l_U1361 = 0;
    l_U1362 = 0;

    l_U1363 = 0;
    l_U1364 = 0;
    l_U1365 = 0;

    l_U1366 = 0;
    l_U2004 = 0;
    l_U2005 = 0;

    l_U2009 = {0.00000000, 0.00000000, 0.00000000};
    l_U2127 = {1.00000000, 1.00000000, 1.00000000};
    l_U2130 = {0.00000000, 1.00000000, 0.00000000};

    l_U2133 = {0.00000000, -1.00000000, 0.00000000};
    l_U2146 = 0;
    l_U2147 = 0;

    l_U2158 = 100.00000000;
    l_U2159 = 10.50000000;
    l_U2160 = 0.50000000;

    l_U2161 = 2.85000000;
    l_U2166 = 0;
    l_U2167 = 0;

    l_U2168 = 0;
    l_U2169 = 0;
    l_U2179 = 1;

    l_U2199 = 240.00000000;
    l_U2216 = 0;
    l_U2219 = 5250.75900000;

    l_U2220 = 4410;
    l_U2233 = 1.10000000;
    l_U2501 = {926.10860000, -489.92090000, 15.34530000};

    l_U2505 = 0.20000000;
    l_U2507 = {1175.03800000, -485.80260000, 33.20330000};

    // If the player has been wasted/busted
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_911();
        sub_3021();
    }
    else
    {
        sub_3302();
        l_U2179 = 1;
    }
    while (l_U2179)
    {
        // Switch for what part of the mission is going on.
        // l_U2176 = MissionSwitch
        switch (MissionSwitch)
        {
            case 0:
            // Start the cutscenes and setup some of the mission.
            sub_4651();
            break;
            case 1:
            // Set a blip to Roman's garage, and possibly some setup for Ivan
            sub_6797();
            break;
            case 2:
            // Happens after Niko goes to Roman's garage, setup chase sequence
            sub_21735();
            break;
            case 3:
            sub_45509();
            break;
            case 4:
            sub_45543();
            break;
            case 5:
            sub_66132();
            break;
            case 6:
            sub_70752();
            break;
            case 7:
            sub_74819();
            break;
            case 8:
            sub_76688();
            break;
        }
        if (l_U2177)
        {
            sub_50497();
        }
        else if (l_U2178)
        {
            sub_44274();
        }
        WAIT( 0 );
    }
    sub_3021();
    return;
}

void sub_911()
{
    sub_920();
    return;
}

void sub_920()
{
    int iVar2;

    iVar2 = 1;
    sub_934( iVar2 );
    sub_2110( iVar2 );
    return;
}

void sub_934(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_978();
        sub_1139();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            IncrementMissionFailedStat();
            sub_1286();
        }
    }
    sub_1362();
    sub_1463();
    uVar5 = sub_1576( uParam0 );
    sub_2017( uVar5, 0 );
    return;
}

void sub_978()
{
    sub_992( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        DecrementReplaysUsedStat();
    }
    return;
}

void sub_992(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

// Decrement the "replays used" stat by 1.
// sub_1092
void DecrementReplaysUsedStat()
{
    // TODO What is g_U0, seems to not be set anywhere, possibly debug function?
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_1139()
{
    sub_1148();
    return;
}

void sub_1148()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

// Incremement the "mission failed" stat
// sub_1247
void IncrementMissionFailedStat()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_1286()
{
    sub_1295();
    return;
}

// TODO What is this doing?
void sub_1295()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1362()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_1463()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1485();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1485()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1576(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1975( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1975(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_2017(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_2110(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_2119();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2894();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_2119()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_2157( 5, g_U569[I] )) == 1))
        {
            if ((sub_2157( 1, g_U569[I] )) != 0)
            {
                sub_2443( I );
            }
        }
    }
    if (NOT sub_2609())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_2157(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_2443(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2528( g_U569 - 1 );
    return;
}

void sub_2528(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2609()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_2157( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2894()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_3021()
{
    if (l_U2200)
    {
        ENABLE_CHASE_AUDIO( 0 );
    }
    if (l_U2148 > 0)
    {
        END_CAM_COMMANDS( ref l_U2148 );
    }
    ALLOW_EMERGENCY_SERVICES( 1 );
    UNREGISTER_SCRIPT_WITH_AUDIO();
    sub_3086();
    SET_WANTED_MULTIPLIER( 1.00000000 );
    DisplayHudAndRadar();
    return;
}

void sub_3086()
{
    if (l_U2169)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED KILL_CHASE_HINT_CAM()" );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
    }
    l_U2167 = 0;
    l_U2166 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

// Show the hud and radar
// sub_3249--
void DisplayHudAndRadar()
{
    DISPLAY_HUD( 1 );
    DISPLAY_RADAR( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

// I think this sets up the mission, TODO Figure this out
void sub_3302()
{
    // Set the player as on a mission
    SET_MISSION_FLAG( 1 );

    // Disable the emergency services
    ALLOW_EMERGENCY_SERVICES( 0 );

    ADD_SCENARIO_BLOCKING_AREA( 1153.80000000, -390.31980000, 19.61120000, 1190.00000000, -346.00000000, 50.00000000 );
    SET_PED_NON_CREATION_AREA( 1153.80000000, -390.31980000, 19.61120000, 1190.00000000, -346.00000000, 50.00000000 );
    SWITCH_PED_PATHS_OFF( 1153.80000000, -390.31980000, 19.61120000, 1190.00000000, -346.00000000, 50.00000000 );

    LOAD_ADDITIONAL_TEXT( "VLAD4", 0 );
    LOAD_ADDITIONAL_TEXT( "V4AUD", 6 );
    sub_3484( "V4AUD" );

    // l_U2156
    PlayerChar = CurrentPlayerChar();
    // l_U2157
    PlayerId = CurrentPlayerId();

    if (NOT (IS_CHAR_DEAD( PlayerChar )))
    {
        GET_PLAYER_GROUP( PlayerId, ref l_U2155 );
    }

    sub_3727( 0, PlayerChar, "NIKO", 0 );
    REGISTER_SCRIPT_WITH_AUDIO( 1 );

    # -sub_C1FFC0-0xc214c8( 2, ref l_U2487 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U2486 );

    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U2489 );
    LOAD_COMBAT_DECISION_MAKER( 0, ref l_U2488 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U2490 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U2491 );

    SET_DECISION_MAKER_ATTRIBUTE_CAN_CHANGE_TARGET( l_U2489, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U2490, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U2491, 1 );
    if (NOT (IS_CHAR_DEAD( PlayerChar )))
    {
        SET_PLAYER_CONTROL( PlayerId, 1 );
        SET_CHAR_COORDINATES( PlayerChar, l_U2501.x, l_U2501.y, l_U2501.z );
        SET_CHAR_HEADING( PlayerChar, 96.13350000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    SWITCH_ROADS_OFF( 824.13570000, -345.81040000, 10.01840000, 900.39770000, -232.65000000, 20.88940000 );

    // TODO Figure out what these coordinates are
    l_U2260[0]._fU4 = {1173.05300000, -379.92940000, 26.25120000};
    l_U2260[0]._fU28 = 358.65690000;
    l_U2260[0]._fU64 = 1;

    l_U2260[1]._fU4 = {1165.91000000, -366.12000000, 35.83030000};
    l_U2260[1]._fU28 = 241.93940000;
    l_U2260[1]._fU64 = 2;

    l_U2260[1]._fU32 = {1166.32000000, -365.00000000, 37.01000000};
    l_U2260[1]._fU44 = {1166.32000000, -370.01000000, 37.03000000};

    l_U2260[2]._fU4 = {1164.86300000, -362.01740000, 38.02080000};
    l_U2260[2]._fU28 = 211.68640000;
    l_U2260[2]._fU64 = 3;

    l_U2260[3]._fU4 = {1162.72800000, -374.73210000, 39.48670000};
    l_U2260[3]._fU28 = 294.86200000;
    l_U2260[3]._fU64 = 1;

    l_U2260[4]._fU4 = {1171.68000000, -371.62000000, 46.14000000};
    l_U2260[4]._fU28 = 272.94530000;
    l_U2260[4]._fU64 = 2;

    l_U2260[5]._fU4 = {1173.65000000, -373.52000000, 46.14000000};
    l_U2260[5]._fU28 = 272.94530000;
    l_U2260[5]._fU64 = 2;

    l_U2159 = 17.50000000;
    SUPPRESS_CAR_MODEL( -227741703 );
    l_U2200 = 1;
    return;
}

void sub_3484(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_3503();
    return;
}

void sub_3503()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

// Store the player char to the Result
// sub_3597
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

// sub_3643
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3727(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3811( "\n PED NUMBER ", uParam0 );
    sub_3851( " ADDED WITH VOICE ", uParam2 );
    return;
}

// Possible debug function, just returns without doing anything.
void sub_3811(unknown uParam0, unknown uParam1)
{
    return;
}

// Possible debug function, just returns without doing anything.
void sub_3851(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4651()
{
    int I;

    if (l_U2180[MissionSwitch] == 0)
    {
        if (g_U9893._fU24)
        {
            ENABLE_SCENE_STREAMING( 0 );

            CLEAR_AREA_OF_CHARS( 935.55990000, -493.18430000, 14.48470000, 20.00000000 );
            ADD_SCENARIO_BLOCKING_AREA( 930.55980000, -498.18430000, 19.48470000, 940.55990000, -487.18430000, 9.48470000 );
            SET_PED_NON_CREATION_AREA( 930.55980000, -498.18430000, 19.48470000, 940.55990000, -487.18430000, 9.48470000 );

            START_CUTSCENE_NOW( "Vla4_a" );
            sub_4821();

            // Wait on the cut scene to load
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }

            // Wait on the cutscene to finish
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }

            // Clear the cutscene
            CLEAR_NAMED_CUTSCENE( "Vla4_a" );
            
            // Clear the tasks for the player, set the player coordinates
            CLEAR_CHAR_TASKS( PlayerChar );
            SET_CHAR_COORDINATES( PlayerChar, 925.73300000, -489.96130000, 14.33450000 );
            
            // Unknown usage
            ENABLE_SCENE_STREAMING( 1 );
        }
        // Request car models
        sub_5292( 1166762483 );
        sub_5292( -227741703 );
        sub_5292( -276900515 );
        sub_5292( -2139064254 );
        sub_5292( -344943009 );

        // Request car recording
        sub_5387( 709 );
        sub_5387( 708 );

        sub_5459( "missvlad4" );
        
        // Set the player coordinates and heading
        SET_CHAR_COORDINATES( PlayerChar, 925.73300000, -489.96130000, 14.33450000 );
        SET_CHAR_HEADING( PlayerChar, 90.00000000 );
        
        // Load objects
        LOAD_ALL_OBJECTS_NOW();
        while ((NOT sub_5790()) || ((NOT sub_5703()) || (NOT sub_5601())))
        {
            WAIT( 0 );
        }

        SUPPRESS_CAR_MODEL( -227741703 );

        // Sequence task #1
        OPEN_SEQUENCE_TASK( ref l_U2497 );
        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1165.24100000, -401.20710000, 45.56450000, 4, 5000, 1.00000000 );
        TASK_JUMP( 0, 1 );
        TASK_PLAY_ANIM( 0, "EXHAUSTED_INTRO", "missVlad4", 8.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM( 0, "EXHAUSTED_LOOP", "missVlad4", 8.00000000, 1, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U2497 );

        // Sequence task #2
        OPEN_SEQUENCE_TASK( ref l_U2498 );
        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1165.24100000, -415.11720000, 39.44140000, 4, 5000, 1.00000000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1165.24100000, -419.73790000, 39.42640000, 4, 5000, 1.00000000 );
        TASK_JUMP( 0, 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD_NO_STOP( 0, 1169.49000000, -432.40110000, 34.45850000, 4, 5000, 1.00000000 );
        CLOSE_SEQUENCE_TASK( l_U2498 );

        // Sequence task #3
        OPEN_SEQUENCE_TASK( ref l_U2499 );
        TASK_CLIMB( 0, 1 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1166.91000000, -442.75850000, 34.45750000, 4, 5000, 0.50000000 );
        TASK_ACHIEVE_HEADING( 0, 180.00000000 );
        TASK_JUMP( 0, 1 );
        TASK_LOOK_AT_CHAR( 0, PlayerChar, 3000, 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1164.52600000, -476.36230000, 31.96200000, 3, 15000, 2.50000000 );
        CLOSE_SEQUENCE_TASK( l_U2499 );

        // Unsure of what these do
        TASK_FLUSH_ROUTE();
        TASK_EXTEND_ROUTE( 1170.10700000, -483.20070000, 32.96210000 );
        TASK_EXTEND_ROUTE( 1175.04600000, -483.79920000, 34.20380000 );

        // Sequence task #4
        OPEN_SEQUENCE_TASK( ref l_U2500 );
        TASK_FOLLOW_POINT_ROUTE( 0, 4, 0 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1175.03800000, -486.60300000, 34.20300000, 4, 4000, 0.50000000 );
        TASK_PLAY_ANIM_WITH_ADVANCED_FLAGS( 0, "RUN_FALL_OFF_ROOF", "missVlad4", 8.00000000, 0, 0, 0, 0, 1, 1, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U2500 );

        // Create Ivan's Compact Blista
        CREATE_CAR( -344943009, 920.70260000, -484.31230000, 14.83850000, ref l_U2483, 1 );
        CHANGE_CAR_COLOUR( l_U2483, 14, 1 );
        SET_VEHICLE_DIRT_LEVEL( l_U2483, 0.00000000 );
        
        for ( I = 1; I <= 9; I++ )
        {
            TURN_OFF_VEHICLE_EXTRA( l_U2483, I, 1 );
        }
        
        TURN_OFF_VEHICLE_EXTRA( l_U2483, 4, 0 );
        TURN_OFF_VEHICLE_EXTRA( l_U2483, 6, 0 );
        //
        
        // Force the weather to sunny
        FORCE_WEATHER_NOW( 1 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }

        LOAD_SCENE( 926.10860000, -489.92090000, 15.34530000 );
        
        // Fade the screen in
        DO_SCREEN_FADE_IN( 500 );
        l_U2180[MissionSwitch] = 1;
    }
    MissionSwitch++;
    return;
}

void sub_4821()
{
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref l_U2162 );
    if ((l_U2162 != nil) AND ((NOT (IS_CAR_DEAD( l_U2162 ))) AND (DOES_VEHICLE_EXIST( l_U2162 ))))
    {
        if (NOT (IS_CAR_A_MISSION_CAR( l_U2162 )))
        {
            SET_CAR_AS_MISSION_CAR( l_U2162 );
            l_U2165 = 1;
        }
        if (LOCATE_CAR_3D( l_U2162, 920.74210000, -493.26890000, 14.16250000, 15.00000000, 15.00000000, 15.00000000, 0 ))
        {
            if ((l_U2163 != nil) AND (l_U2163 != l_U2162))
            {
                if (DOES_VEHICLE_EXIST( l_U2163 ))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2163 );
                }
            }
            CLEAR_AREA( 920.74210000, -493.26890000, 14.16250000, 3.00000000, 1 );
            SET_CAR_HEADING( l_U2162, 359.88950000 );
            SET_CAR_COORDINATES( l_U2162, 920.74210000, -493.26890000, 14.16250000 );
            if (NOT (IS_THIS_MODEL_A_BOAT( l_U2164 )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U2162 );
            }
        }
        if (l_U2165 == 1)
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2162 );
            l_U2165 = 0;
        }
        l_U2163 = l_U2162;
    }
    return;
}

// Request models, and increment a value.
// TODO Figure out exact usage for this.
void sub_5292(unknown uParam0)
{
    REQUEST_MODEL( uParam0 );
    l_U2012[l_U2045] = uParam0;
    l_U2045++;
    return;
}

// Request car recording
void sub_5387(unknown uParam0)
{
    REQUEST_CAR_RECORDING( uParam0 );
    l_U2056[l_U2073] = uParam0;
    l_U2073++;
    return;
}

void sub_5459(unknown uParam0)
{
    PRINTSTRING( "Requesting :" );
    PRINTSTRING( uParam0 );
    PRINTNL();
    REQUEST_ANIMS( uParam0 );
    l_U2046[l_U2055] = uParam0;
    l_U2055++;
    return;
}

// Wait on some car models to load
// TODO Figure out what this is doing.
int sub_5601()
{
    int I;

    if (l_U2045 != 0)
    {
        for ( I = 0; I <= (l_U2045 - 1); I++ )
        {
            if (NOT (HAS_MODEL_LOADED( l_U2012[I] )))
            {
                PRINTINT( I );
                PRINTNL();
                return 0;
            }
        }
    }
    return 1;
}

// Wait on animations to load
int sub_5703()
{
    int I;

    if (l_U2055 != 0)
    {
        for ( I = 0; I <= (l_U2055 - 1); I++ )
        {
            if (NOT (HAVE_ANIMS_LOADED( l_U2046[I] )))
            {
                return 0;
            }
        }
    }
    return 1;
}

// Wait on car recording to load
int sub_5790()
{
    int I;

    if (l_U2073 != 0)
    {
        for ( I = 0; I <= (l_U2073 - 1); I++ )
        {
            if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U2056[I] )))
            {
                PRINTSTRING( "Waiting for recording " );
                PRINTINT( l_U2056[I] );
                PRINTNL();
                return 0;
            }
        }
    }
    return 1;
}

// Set a blip to Roman's garage, and possibly some setup for Ivan
void sub_6797()
{
    unknown uVar2;
    unknown uVar3;

    if (l_U2180[MissionSwitch] == 0)
    {
        // l_U2484 = RomanGarageBlip
        ADD_BLIP_FOR_COORD( 820.19050000, -264.48110000, 15.33780000, ref RomanGarageBlip );
        SET_ROUTE( RomanGarageBlip, 1 );
        // Go to Roman's garage
        PRINT_NOW( "VLA4A_01", 7500, 1 );
        l_U2180[MissionSwitch] = 1;
    }
    if ((l_U2091[0] == 0) AND (LOCATE_CHAR_ANY_MEANS_2D( PlayerChar, 820.19050000, -264.48110000, 165.00000000, 165.50000000, 0 )))
    {
        CREATE_CAR( -276900515, 824.66750000, -287.05510000, 14.75700000, ref l_U2235, 1 );
        SET_CAR_HEADING( l_U2235, 270.36360000 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -276900515 );

        // Ruiner
        // l_U2482 = IvanCar
        CREATE_CAR( -227741703, 815.70730000, -274.84000000, 13.00380000, ref IvanCar, 1 );
        SET_CAR_HEADING( IvanCar, 271.68200000 );
        SET_CAR_ON_GROUND_PROPERLY( IvanCar );
        SET_CAR_PROOFS( IvanCar, 0, 1, 1, 1, 1 );
        SET_CAR_ENGINE_ON( IvanCar, 1, 1 );
        CHANGE_CAR_COLOUR( IvanCar, 0, 89 );
        // l_U2250 = IvanPed
        CREATE_CHAR_INSIDE_CAR( IvanCar, 26, 1166762483, ref IvanPed );
        SET_CHAR_AS_ENEMY( IvanPed, 1 );
        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( IvanPed, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( IvanPed, 1 );

        SET_CHAR_NAME_DEBUG( IvanPed, "Ivan" );
        SET_CHAR_RELATIONSHIP_GROUP( IvanPed, 24 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( IvanPed, 0 );

        sub_3727( 1, IvanPed, "IVAN", 0 );
        SET_DONT_ACTIVATE_RAGDOLL_FROM_PLAYER_IMPACT( IvanPed, 1 );
        SET_WANTED_MULTIPLIER( 0.10000000 );

        ALLOW_TARGET_WHEN_INJURED( IvanPed, 1 );
        SET_CHAR_HEALTH( IvanPed, 375 );
        SET_CHAR_MAX_HEALTH( IvanPed, 375 );

        l_U2091[0] = 1;
    }

    // TODO Figure out what this part is doing.
    if ((l_U2091[3] == 0) AND (LOCATE_CHAR_ANY_MEANS_2D( PlayerChar, 836.96340000, -403.96730000, 40.00000000, 180.50000000, 0 )))
    {
        GET_RANDOM_CAR_MODEL_IN_MEMORY( 1, ref uVar3, ref uVar2 );

        CREATE_CAR( uVar3, 836.96340000, -403.96730000, 13.39220000, ref l_U2236[0], 1 );
        SET_CAR_HEADING( l_U2236[0], 359.12750000 );

        CREATE_CHAR_INSIDE_CAR( l_U2236[0], 4, -2139064254, ref l_U2239[0] );
        TASK_CAR_DRIVE_WANDER( l_U2239[0], l_U2236[0], 10.00000000, 1 );

        CREATE_CAR( uVar3, 831.30000000, -333.71830000, 15.50600000, ref l_U2236[1], 1 );
        SET_CAR_HEADING( l_U2236[1], 180.00000000 );
        CREATE_CHAR_INSIDE_CAR( l_U2236[1], 4, -2139064254, ref l_U2239[1] );
        TASK_CAR_DRIVE_WANDER( l_U2239[1], l_U2236[1], 10.00000000, 1 );
        l_U2091[3] = 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_2D( PlayerChar, 836.96340000, -403.96730000, 40.00000000, 180.50000000, 0 ))
    {
        FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( PlayerId, 2.50000000 );
    }
    if (IS_CHAR_IN_ANY_CAR( PlayerChar ))
    {
        if (l_U2091[2] == 0)
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( -344943009 );
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2483 );
            l_U2091[2] = 1;
        }

        // Get the player car, set as mission vehicle, and set it to havge strong axles.
        GET_CAR_CHAR_IS_USING( PlayerChar, ref GetPlayerCar );
        SET_CAR_AS_MISSION_CAR( GetPlayerCar );
        SET_VEH_HAS_STRONG_AXLES( GetPlayerCar, 1 );
    }
    SWITCH_ROADS_OFF( 804.11170000, -381.11840000, 1.00000000, 824.11170000, -301.11840000, 21.00000000 );
    SetIvanCarInvincible();

    if ((NOT (IS_CAR_DEAD( IvanCar ))) AND (l_U2091[0] == 1))
    {
        if ((HAS_CAR_BEEN_DAMAGED_BY_CHAR( IvanCar, PlayerChar )) || (((sub_8216( PlayerChar, IvanPed, 1 )) < 8.00000000) || ((LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 817.44650000, -294.02660000, 15.49630000, 2.50000000, 2.40000000, 1.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_2D( PlayerChar, 834.11170000, -340.11840000, 11.00000000, 20.00000000, 0 )))))
        {
            l_U2221 = 0;
            REMOVE_BLIP( RomanGarageBlip );
            if ((NOT (IS_CAR_DEAD( IvanCar ))) AND (NOT (IS_CHAR_DEAD( IvanPed ))))
            {
                ADD_BLIP_FOR_CHAR( IvanPed, ref l_U2485 );
                SET_BLIP_AS_FRIENDLY( l_U2485, 0 );
            }
            SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
            sub_8475();
            WAIT( 0 );
            if (NOT (IS_CAR_DEAD( IvanCar )))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2235 );
                ENABLE_CHASE_AUDIO( 1 );
                START_PLAYBACK_RECORDED_CAR( IvanCar, 708 );
            }
            CurrentPositionInRecording = 900.00000000;
            MissionSwitch++;
            sub_17418();
        }

        if (l_U2091[0] == 1)
        {
            if (((sub_17753( PlayerChar, 814.03540000, -269.81020000, 15.34270000 )) < 8.00000000) || ((LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 823.32060000, -274.76620000, 15.34690000, 1.50000000, 3.00000000, 3.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 814.99680000, -244.41490000, 15.18060000, 3.50000000, 12.00000000, 6.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 871.51570000, -287.71920000, 17.05500000, 23.00000000, 31.00000000, 20.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 850.26240000, -244.51680000, 15.79550000, 4.00000000, 12.00000000, 3.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_2D( PlayerChar, 811.08870000, -258.63010000, 3.50000000, 3.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_2D( PlayerChar, 820.64900000, -245.94270000, 3.00000000, 11.00000000, 0 ))))))))
            {
                l_U2221 = 1;
                REMOVE_BLIP( RomanGarageBlip );
                if ((NOT (IS_CAR_DEAD( IvanCar ))) AND (NOT (IS_CHAR_DEAD( IvanPed ))))
                {
                    ADD_BLIP_FOR_CHAR( IvanPed, ref l_U2485 );
                    SET_BLIP_AS_FRIENDLY( l_U2485, 0 );
                }
                SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                sub_17933();

                // Delete vehicles
                if (DOES_VEHICLE_EXIST( l_U2236[1] ))
                {
                    DELETE_CAR( ref l_U2236[0] );
                }
                if (DOES_VEHICLE_EXIST( l_U2236[1] ))
                {
                    DELETE_CAR( ref l_U2236[1] );
                }

                if (NOT (IS_CAR_DEAD( IvanCar )))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U2235 );
                    START_PLAYBACK_RECORDED_CAR( IvanCar, 709 );
                }
                MissionSwitch++;
                sub_17418();
            }
        }
    }
    return;
}

// Possibly get the health for Ivan's car
// Looks like it always repairs the car if it gets below 400 health.
// Also sets the engine health to 400, and the car proofs to all enabled.
// sub_7813 = SetIvanCarInvincible
void SetIvanCarInvincible()
{
    int carHealth;
    float engineHealth;

    if (DOES_VEHICLE_EXIST( IvanCar ))
    {
        if (NOT (IS_CAR_DEAD( IvanCar )))
        {
            GET_CAR_HEALTH( IvanCar, ref carHealth );
            engineHealth = GET_ENGINE_HEALTH( IvanCar );
            PRINTSTRING( "ivans car health: " );
            PRINTINT( sub_7917( IvanCar ) );
            PRINTNL();
            PRINTSTRING( "ivans car E health: " );
            PRINTFLOAT( engineHealth );
            PRINTNL();
            if (carHealth < 400)
            {
                SET_CAR_HEALTH( IvanCar, 400 );
                SET_ENGINE_HEALTH( IvanCar, 400.00000000 );
                SET_CAR_PROOFS( IvanCar, 1, 1, 1, 1, 1 );
            }
        }
    }
    return;
}

void sub_7917(unknown uParam0)
{
    int Result;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_HEALTH( uParam0, ref Result );
    }
    else
    {
        Result = 0;
    }
    return Result;
}

void sub_8216(unknown uParam0, unknown uParam1, int iParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if ((NOT (IS_CHAR_DEAD( uParam1 ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar5.x, ref uVar5.y, ref uVar5.z );
        GET_CHAR_COORDINATES( uParam1, ref uVar8.x, ref uVar8.y, ref uVar8.z );
        if (iParam2 == 0)
        {
            uVar5.z = 0.00000000;
            uVar8.z = 0.00000000;
        }
    }
    else
    {
        return -1.00000000;
    }
    return VDIST( uVar5, uVar8 );
}

// I think this is the full chase coordinates list.
void sub_8475()
{
    // l_U1488, l_U1699, and l_U1820 seems to be the chase coordinate list
    sub_8486( 0, 1 );
    l_U1488[0] = {893.37080000, -246.94610000, 18.44130000};

    l_U542[0] = 0.02810000;
    l_U613[0] = -0.00180000;
    l_U684[0] = -0.70500000;
    l_U755[0] = 0.70860000;
    l_U1149[0] = 675;
    l_U826[0] = 5399.00000000;
    l_U1367[0] = -956048545;
    
    l_U1488[1] = {914.95660000, -138.16400000, 25.82080000};
    l_U542[1] = 0.02730000;
    l_U613[1] = 0.02260000;
    l_U684[1] = -0.01400000;
    l_U755[1] = 0.99930000;
    l_U1149[1] = 676;
    l_U826[1] = 13902.00000000;
    l_U1367[1] = -956048545;
    
    l_U1488[2] = {899.84360000, -38.93710000, 26.89790000};
    l_U542[2] = -0.00150000;
    l_U613[2] = 0.00490000;
    l_U684[2] = 1.00000000;
    l_U755[2] = -0.00820000;
    l_U1149[2] = 677;
    l_U826[2] = 16234.00000000;
    l_U1367[2] = -956048545;
    
    l_U1488[3] = {899.80030000, -29.50000000, 26.92480000};
    l_U542[3] = -0.00960000;
    l_U613[3] = -0.00260000;
    l_U684[3] = 1.00000000;
    l_U755[3] = 0.00000000;
    l_U1149[3] = 678;
    l_U826[3] = 16747.00000000;
    l_U1367[3] = 1304597482;
    
    l_U1699[0] = {905.09890000, 3.99570000, 26.85940000};
    l_U955[0] = 0.00140000;
    l_U996[0] = -0.00000000;
    l_U1037[0] = -0.00710000;
    l_U1078[0] = 1.00000000;
    l_U1438[0] = -2077743597;
    
    l_U1699[1] = {905.06730000, 10.56110000, 26.81180000};
    l_U955[1] = 0.00420000;
    l_U996[1] = -0.00010000;
    l_U1037[1] = 0.00000000;
    l_U1078[1] = 1.00000000;
    l_U1438[1] = 1723137093;
    
    l_U1699[2] = {918.95970000, 50.37980000, 27.74690000};
    l_U955[2] = -0.02580000;
    l_U996[2] = -0.06750000;
    l_U1037[2] = 0.99740000;
    l_U1078[2] = 0.00240000;
    l_U1438[2] = -67282078;
    
    l_U1699[3] = {918.88850000, 74.52220000, 31.08470000};
    l_U955[3] = -0.02440000;
    l_U996[3] = -0.07140000;
    l_U1037[3] = 0.99690000;
    l_U1078[3] = 0.02040000;
    l_U1438[3] = -67282078;
    
    l_U1699[4] = {928.57470000, 65.49080000, 29.84290000};
    l_U955[4] = 0.07010000;
    l_U996[4] = 0.02730000;
    l_U1037[4] = -0.02360000;
    l_U1078[4] = 0.99690000;
    l_U1438[4] = -67282078;
    
    l_U1699[5] = {928.62850000, 55.21350000, 28.72770000};
    l_U955[5] = 0.06780000;
    l_U996[5] = 0.02500000;
    l_U1037[5] = 0.01190000;
    l_U1078[5] = 0.99730000;
    l_U1438[5] = -341892653;
    
    l_U1699[6] = {959.36570000, 62.15960000, 28.56700000};
    l_U955[6] = -0.01980000;
    l_U996[6] = -0.04110000;
    l_U1037[6] = 0.97080000;
    l_U1078[6] = 0.23530000;
    l_U1438[6] = 1723137093;
    
    l_U1699[7] = {977.78500000, 48.76920000, 28.24000000};
    l_U955[7] = 0.06430000;
    l_U996[7] = 0.00970000;
    l_U1037[7] = -0.22920000;
    l_U1078[7] = 0.97120000;
    l_U1438[7] = -341892653;
    
    l_U1488[0] = {831.67210000, -217.85480000, 12.77200000};
    l_U542[0] = 0.03410000;
    l_U613[0] = 0.06910000;
    l_U684[0] = 0.58850000;
    l_U755[0] = 0.80480000;
    l_U1149[0] = 675;
    l_U826[0] = 3561.00000000;
    l_U1367[0] = -276900515;
    
    l_U1488[1] = {808.56510000, -220.08910000, 14.27520000};
    l_U542[1] = -0.00040000;
    l_U613[1] = 0.00040000;
    l_U684[1] = 0.93980000;
    l_U755[1] = 0.34170000;
    l_U1149[1] = 676;
    l_U826[1] = 3948.00000000;
    l_U1367[1] = -276900515;
    
    l_U1488[2] = {803.98800000, -227.00010000, 14.17710000};
    l_U542[2] = -0.00750000;
    l_U613[2] = 0.00290000;
    l_U684[2] = 0.97700000;
    l_U755[2] = 0.21290000;
    l_U1149[2] = 677;
    l_U826[2] = 4146.00000000;
    l_U1367[2] = -2077743597;
    
    l_U1488[3] = {834.49130000, -218.93400000, 12.25380000};
    l_U542[3] = 0.03610000;
    l_U613[3] = 0.05850000;
    l_U684[3] = 0.58800000;
    l_U755[3] = 0.80590000;
    l_U1149[3] = 678;
    l_U826[3] = 5928.00000000;
    l_U1367[3] = -67282078;
    
    l_U1488[4] = {891.82070000, -241.55150000, 18.30730000};
    l_U542[4] = -0.00310000;
    l_U613[4] = -0.01610000;
    l_U684[4] = 0.70690000;
    l_U755[4] = 0.70710000;
    l_U1149[4] = 679;
    l_U826[4] = 6918.00000000;
    l_U1367[4] = -956048545;
    
    l_U1488[5] = {938.33670000, -215.49770000, 19.68180000};
    l_U542[5] = -0.02520000;
    l_U613[5] = -0.02840000;
    l_U684[5] = 0.78160000;
    l_U755[5] = 0.62260000;
    l_U1149[5] = 680;
    l_U826[5] = 11345.00000000;
    l_U1367[5] = -276900515;
    
    l_U1488[6] = {914.69690000, -130.70050000, 26.16360000};
    l_U542[6] = 0.02550000;
    l_U613[6] = 0.00800000;
    l_U684[6] = -0.00010000;
    l_U755[6] = 0.99960000;
    l_U1149[6] = 681;
    l_U826[6] = 17258.00000000;
    l_U1367[6] = 1304597482;
    
    l_U1488[7] = {909.30210000, -124.50230000, 26.30430000};
    l_U542[7] = -0.00830000;
    l_U613[7] = -0.02320000;
    l_U684[7] = 0.99970000;
    l_U755[7] = 0.00000000;
    l_U1149[7] = 682;
    l_U826[7] = 17413.00000000;
    l_U1367[7] = -67282078;
    
    l_U1488[8] = {899.78370000, -40.70360000, 26.83860000};
    l_U542[8] = 0.00900000;
    l_U613[8] = -0.01660000;
    l_U684[8] = 0.99980000;
    l_U755[8] = 0.01070000;
    l_U1149[8] = 683;
    l_U826[8] = 20318.00000000;
    l_U1367[8] = 1304597482;
    
    l_U1699[0] = {897.54110000, -10.72710000, 26.78600000};
    l_U955[0] = -0.01670000;
    l_U996[0] = 0.00170000;
    l_U1037[0] = 0.99990000;
    l_U1078[0] = 0.00240000;
    l_U1438[0] = -2077743597;
    
    l_U1699[1] = {888.25550000, 28.06360000, 26.87940000};
    l_U955[1] = -0.00710000;
    l_U996[1] = 0.00670000;
    l_U1037[1] = 0.70710000;
    l_U1078[1] = -0.70700000;
    l_U1438[1] = -956048545;
    
    l_U1699[2] = {909.69830000, 33.13270000, 26.84080000};
    l_U955[2] = 0.02380000;
    l_U996[2] = 0.01680000;
    l_U1037[2] = 0.71200000;
    l_U1078[2] = 0.70160000;
    l_U1438[2] = 1723137093;
    
    l_U1699[3] = {919.05260000, 74.52370000, 31.08370000};
    l_U955[3] = -0.02650000;
    l_U996[3] = -0.07060001;
    l_U1037[3] = 0.99710000;
    l_U1078[3] = -0.00990000;
    l_U1438[3] = 1723137093;
    
    l_U1488[9] = {925.99860000, 69.98730000, 30.48900000};
    l_U542[9] = 0.06950000;
    l_U613[9] = 0.00020000;
    l_U684[9] = -0.00080000;
    l_U755[9] = 0.99760000;
    l_U1149[9] = 684;
    l_U826[9] = 24502.00000000;
    l_U1367[9] = 1723137093;
    
    l_U1699[4] = {919.10410000, 61.50070000, 29.43160000};
    l_U955[4] = -0.02380000;
    l_U996[4] = -0.07070000;
    l_U1037[4] = 0.99680000;
    l_U1078[4] = 0.02950000;
    l_U1438[4] = 1304597482;
    
    l_U1699[5] = {959.36630000, 62.15930000, 28.66370000};
    l_U955[5] = -0.02060000;
    l_U996[5] = -0.04120000;
    l_U1037[5] = 0.97390010;
    l_U1078[5] = 0.22210000;
    l_U1438[5] = -2077743597;
    
    l_U1699[6] = {963.16890000, 70.46170000, 29.67200000};
    l_U955[6] = -0.02980000;
    l_U996[6] = -0.04000000;
    l_U1037[6] = 0.95910000;
    l_U1078[6] = 0.27870000;
    l_U1438[6] = 1304597482;
    
    l_U1699[7] = {994.03140000, 81.87060000, 31.17200000};
    l_U955[7] = 0.02680000;
    l_U996[7] = 0.01910000;
    l_U1037[7] = -0.25120000;
    l_U1078[7] = 0.96740000;
    l_U1438[7] = 1304597482;
    
    l_U1699[8] = {999.19750000, 90.46990000, 31.57990000};
    l_U955[8] = 0.02670000;
    l_U996[8] = 0.01850000;
    l_U1037[8] = -0.22690000;
    l_U1078[8] = 0.97340000;
    l_U1438[8] = 1304597482;
    
    l_U1699[9] = {1001.99800000, 134.96790000, 31.48820000};
    l_U955[9] = -0.02450000;
    l_U996[9] = 0.00860000;
    l_U1037[9] = 0.96620000;
    l_U1078[9] = 0.25640000;
    l_U1438[9] = 1723137093;
    
    l_U1699[10] = {1009.14000000, 145.73070000, 31.51670000};
    l_U955[10] = -0.02540000;
    l_U996[10] = 0.00680000;
    l_U1037[10] = 0.95750000;
    l_U1078[10] = 0.28730000;
    l_U1438[10] = -67282078;
    
    l_U1699[11] = {1087.16700000, 130.27900000, 33.76320000};
    l_U955[11] = -0.02570000;
    l_U996[11] = 0.01140000;
    l_U1037[11] = 0.99950000;
    l_U1078[11] = -0.01320000;
    l_U1438[11] = -341892653;
    
    l_U1488[10] = {1095.42200000, 112.58610000, 33.49640000};
    l_U542[10] = 0.00020000;
    l_U613[10] = 0.00540000;
    l_U684[10] = 1.00000000;
    l_U755[10] = 0.00080000;
    l_U1149[10] = 685;
    l_U826[10] = 35596.00000000;
    l_U1367[10] = 1723137093;
    
    l_U1488[11] = {1100.82900000, 114.45300000, 33.66810000};
    l_U542[11] = 0.00750000;
    l_U613[11] = -0.00060000;
    l_U684[11] = -0.00500000;
    l_U755[11] = 1.00000000;
    l_U1149[11] = 686;
    l_U826[11] = 35918.00000000;
    l_U1367[11] = 1304597482;
    
    l_U1699[12] = {1108.91400000, 143.69400000, 32.27880000};
    l_U955[12] = -0.04110000;
    l_U996[12] = 0.02600000;
    l_U1037[12] = 0.00660000;
    l_U1078[12] = 0.99880000;
    l_U1438[12] = -2077743597;
    
    l_U1488[12] = {1106.22500000, 128.79770000, 33.68540000};
    l_U542[12] = -0.00360000;
    l_U613[12] = 0.00960000;
    l_U684[12] = -0.00010000;
    l_U755[12] = 0.99990000;
    l_U1149[12] = 687;
    l_U826[12] = 37820.00000000;
    l_U1367[12] = -2077743597;
    
    l_U1488[13] = {1100.62100000, 101.68670000, 33.66890000};
    l_U542[13] = 0.00040000;
    l_U613[13] = -0.00260000;
    l_U684[13] = 0.00900000;
    l_U755[13] = 1.00000000;
    l_U1149[13] = 688;
    l_U826[13] = 39140.00000000;
    l_U1367[13] = 1723137093;
    
    l_U1488[14] = {1106.61000000, 85.66770000, 33.86320000};
    l_U542[14] = 0.00010000;
    l_U613[14] = 0.00700000;
    l_U684[14] = -0.48470000;
    l_U755[14] = 0.87460000;
    l_U1149[14] = 689;
    l_U826[14] = 40064.00000000;
    l_U1367[14] = -956048545;
    
    l_U1488[15] = {1095.17700000, 54.00560000, 33.52620000};
    l_U542[15] = -0.00010000;
    l_U613[15] = -0.00090000;
    l_U684[15] = 1.00000000;
    l_U755[15] = 0.00890000;
    l_U1149[15] = 690;
    l_U826[15] = 41759.00000000;
    l_U1367[15] = -2077743597;
    
    l_U1488[16] = {1109.32300000, -50.90110000, 35.54450000};
    l_U542[16] = -0.00790000;
    l_U613[16] = 0.01220000;
    l_U684[16] = 0.57780000;
    l_U755[16] = 0.81600000;
    l_U1149[16] = 691;
    l_U826[16] = 45073.00000000;
    l_U1367[16] = 1304597482;
    
    l_U1488[17] = {1090.51000000, -53.61090000, 35.37340000};
    l_U542[17] = -0.01370000;
    l_U613[17] = 0.00640000;
    l_U684[17] = 0.85960000;
    l_U755[17] = 0.51080000;
    l_U1149[17] = 692;
    l_U826[17] = 46070.00000000;
    l_U1367[17] = -67282078;
    
    l_U1488[18] = {1113.58900000, -96.64570000, 35.37210000};
    l_U542[18] = 0.01020000;
    l_U613[18] = 0.01350000;
    l_U684[18] = -0.57040000;
    l_U755[18] = 0.82120000;
    l_U1149[18] = 693;
    l_U826[18] = 47617.00000000;
    l_U1367[18] = 1723137093;
    
    l_U1488[19] = {1123.00000000, -167.07950000, 30.89410000};
    l_U542[19] = 0.11450000;
    l_U613[19] = 0.00420000;
    l_U684[19] = 0.03650000;
    l_U755[19] = 0.99270000;
    l_U1149[19] = 694;
    l_U826[19] = 51442.00000000;
    l_U1367[19] = 1304597482;
    
    l_U1699[13] = {1159.99000000, -147.12900000, 31.27730000};
    l_U955[13] = -0.02300000;
    l_U996[13] = 0.05040000;
    l_U1037[13] = -0.69800000;
    l_U1078[13] = 0.71400000;
    l_U1438[13] = -2077743597;
    
    l_U1699[14] = {1171.21000000, -147.32930000, 30.20140000};
    l_U955[14] = 0.02890000;
    l_U996[14] = -0.05450000;
    l_U1037[14] = 0.72330000;
    l_U1078[14] = -0.68780000;
    l_U1438[14] = -341892653;
    
    l_U1699[15] = {1192.00000000, -137.56340000, 27.81950000};
    l_U955[15] = 0.00920000;
    l_U996[15] = 0.04550000;
    l_U1037[15] = 0.70830000;
    l_U1078[15] = 0.70430000;
    l_U1438[15] = -2077743597;
    
    l_U1488[20] = {1152.96600000, -139.56110000, 31.85780000};
    l_U542[20] = 0.01970000;
    l_U613[20] = 0.05330000;
    l_U684[20] = 0.70710000;
    l_U755[20] = 0.70480000;
    l_U1149[20] = 695;
    l_U826[20] = 55099.00000000;
    l_U1367[20] = -67282078;
    
    l_U1699[16] = {1244.49300000, -215.48940000, 24.21080000};
    l_U955[16] = -0.02580000;
    l_U996[16] = 0.00620000;
    l_U1037[16] = 0.69810000;
    l_U1078[16] = 0.71550000;
    l_U1438[16] = 1304597482;
    
    l_U1699[17] = {1233.80400000, -215.47070000, 24.06380000};
    l_U955[17] = -0.02090000;
    l_U996[17] = 0.01900000;
    l_U1037[17] = 0.68100000;
    l_U1078[17] = 0.73180000;
    l_U1438[17] = 1304597482;
    
    l_U1699[18] = {1213.50900000, -180.72300000, 26.28210000};
    l_U955[18] = 0.04130000;
    l_U996[18] = 0.02160000;
    l_U1037[18] = 0.01800000;
    l_U1078[18] = 0.99870000;
    l_U1438[18] = -2077743597;
    
    l_U1488[21] = {1211.30200000, -226.07220000, 24.17020000};
    l_U542[21] = 0.00760000;
    l_U613[21] = -0.00000000;
    l_U684[21] = 0.00090000;
    l_U755[21] = 1.00000000;
    l_U1149[21] = 696;
    l_U826[21] = 61248.00000000;
    l_U1367[21] = 1304597482;
    
    l_U1488[22] = {1206.81100000, -204.59390000, 24.40320000};
    l_U542[22] = -0.00540000;
    l_U613[22] = -0.04200000;
    l_U684[22] = 0.99910000;
    l_U755[22] = -0.00570000;
    l_U1149[22] = 697;
    l_U826[22] = 61446.00000000;
    l_U1367[22] = -2077743597;
    
    l_U1699[19] = {1185.89000000, -225.23950000, 23.53170000};
    l_U955[19] = -0.02920000;
    l_U996[19] = -0.00360000;
    l_U1037[19] = 0.72430010;
    l_U1078[19] = -0.68880000;
    l_U1438[19] = 1723137093;
    
    l_U1699[20] = {1168.36000000, -215.50880000, 23.05530000};
    l_U955[20] = -0.03400000;
    l_U996[20] = -0.00250000;
    l_U1037[20] = 0.69470000;
    l_U1078[20] = 0.71850000;
    l_U1438[20] = -341892653;
    
    l_U1699[21] = {1157.93000000, -215.56490000, 22.23190000};
    l_U955[21] = -0.02670000;
    l_U996[21] = -0.00450000;
    l_U1037[21] = 0.70390000;
    l_U1078[21] = 0.70980000;
    l_U1438[21] = 1723137093;
    
    l_U1699[22] = {1191.84400000, -287.98050000, 21.02500000};
    l_U955[22] = -0.00810000;
    l_U996[22] = -0.00740000;
    l_U1037[22] = 0.71450000;
    l_U1078[22] = -0.69950000;
    l_U1438[22] = -67282078;
    
    l_U1699[23] = {1212.45000000, -309.41670000, 20.67230000};
    l_U955[23] = 0.01620000;
    l_U996[23] = 0.01590000;
    l_U1037[23] = -0.69990000;
    l_U1078[23] = 0.71380000;
    l_U1438[23] = 1723137093;
    
    l_U1699[24] = {1196.57700000, -347.65600000, 20.64810000};
    l_U955[24] = 0.02970000;
    l_U996[24] = 0.01980000;
    l_U1037[24] = 0.02340000;
    l_U1078[24] = 0.99910000;
    l_U1438[24] = -2077743597;
    
    l_U1488[23] = {1194.03100000, -401.87720000, 20.87240000};
    l_U542[23] = -0.00030000;
    l_U613[23] = 0.00020000;
    l_U684[23] = -0.00140000;
    l_U755[23] = 1.00000000;
    l_U1149[23] = 698;
    l_U826[23] = 73371.00000000;
    l_U1367[23] = -67282078;
    
    l_U1699[25] = {1196.73800000, -409.65700000, 20.01590000};
    l_U955[25] = 0.05510000;
    l_U996[25] = 0.03770000;
    l_U1037[25] = -0.00790000;
    l_U1078[25] = 0.99769990;
    l_U1438[25] = 1304597482;
    
    l_U1488[24] = {1194.83600000, -419.83980000, 18.60630000};
    l_U542[24] = 0.10570000;
    l_U613[24] = 0.00150000;
    l_U684[24] = -0.01440000;
    l_U755[24] = 0.99430000;
    l_U1149[24] = 699;
    l_U826[24] = 74549.00000000;
    l_U1367[24] = -67282078;
    
    l_U1699[26] = {1106.91700000, -411.14280000, 16.74500000};
    l_U955[26] = 0.04120000;
    l_U996[26] = -0.02100000;
    l_U1037[26] = 0.70010000;
    l_U1078[26] = 0.71250000;
    l_U1438[26] = -67282078;
    
    l_U1488[26] = {1099.68500000, -394.40640000, 17.16890000};
    l_U542[26] = -0.01170000;
    l_U613[26] = -0.00230000;
    l_U684[26] = -0.26900000;
    l_U755[26] = 0.96310000;
    l_U1149[26] = 701;
    l_U826[26] = 78166.00000000;
    l_U1367[26] = 1723137093;
    
    l_U1699[27] = {1109.79200000, -431.63050000, 13.35910000};
    l_U955[27] = 0.06979999;
    l_U996[27] = 0.02660000;
    l_U1037[27] = 0.69880000;
    l_U1078[27] = 0.71140000;
    l_U1438[27] = 1723137093;
    
    l_U1699[28] = {1161.80800000, -389.84290000, 20.95160000};
    l_U955[28] = -0.01640000;
    l_U996[28] = -0.01950000;
    l_U1037[28] = 0.99080000;
    l_U1078[28] = -0.13300000;
    l_U1438[28] = 850991848;
    
    l_U1820[0] = {1238.29300000, -301.03780000, 21.67350000};
    l_U901[0] = -0.04470000;
    l_U910[0] = -0.00900000;
    l_U919[0] = 0.71930000;
    l_U928[0] = 0.69320000;
    l_U1291[0] = 230;
    l_U937[0] = 68452.46000000;
    l_U946[0] = 0.50000000;
    l_U1479[0] = 1075851868;
    
    l_U1820[1] = {1193.75400000, -377.49190000, 21.14110000};
    l_U901[1] = -0.00720000;
    l_U910[1] = 0.00970000;
    l_U919[1] = -0.00400000;
    l_U928[1] = 0.99990000;
    l_U1291[1] = 229;
    l_U937[1] = 67452.46000000;
    l_U946[1] = 0.50000000;
    l_U1479[1] = 1353720154;
    
    l_U1820[2] = {1156.92500000, -336.21250000, 18.46480000};
    l_U901[2] = 0.05150000;
    l_U910[2] = -0.00900000;
    l_U919[2] = -0.68490000;
    l_U928[2] = 0.72670000;
    l_U1291[2] = 228;
    l_U937[2] = 66452.46000000;
    l_U946[2] = 0.50000000;
    l_U1479[2] = 2053223216;
    
    l_U1820[3] = {989.07390000, 100.81990000, 31.77880000};
    l_U901[3] = -0.00070000;
    l_U910[3] = -0.00150000;
    l_U919[3] = 0.96820000;
    l_U928[3] = 0.25030000;
    l_U1291[3] = 225;
    l_U937[3] = 27837.20000000;
    l_U946[3] = 1.00000000;
    l_U1479[3] = -2077743597;
    
    l_U1820[4] = {909.78090000, -158.61650000, 23.76920000};
    l_U901[4] = -0.01340000;
    l_U910[4] = -0.05560000;
    l_U919[4] = 0.99830000;
    l_U928[4] = -0.01360000;
    l_U1291[4] = 202;
    l_U937[4] = 13068.00000000;
    l_U946[4] = 1.00000000;
    l_U1479[4] = 2016857647;
    
    l_U1820[5] = {962.09750000, 0.49050000, 23.74230000};
    l_U901[5] = 0.02530000;
    l_U910[5] = 0.02950000;
    l_U919[5] = 0.38980000;
    l_U928[5] = 0.92010000;
    l_U1291[5] = 317;
    l_U937[5] = 24451.00000000;
    l_U946[5] = 1.00000000;
    l_U1479[5] = 2006667053;

    l_U1820[6] = {1110.61200000, -42.91210000, 36.19610000};
    l_U901[6] = -0.01170000;
    l_U910[6] = 0.01250000;
    l_U919[6] = 0.55100000;
    l_U928[6] = 0.83430000;
    l_U1291[6] = 377;
    l_U937[6] = 40928.00000000;
    l_U946[6] = 1.00000000;
    l_U1479[6] = -1099960214;
    return;
}

void sub_8486(boolean clearCurrentAreaOfCars, unknown uParam1)
{
    // Vector3? In use for getting the player coordinates.
    unknown uVar4;

    // These two aren't in use
    unknown uVar5;
    unknown uVar6;

    l_U500 = 1;
    l_U510 = 0;
    l_U1350 = 0;
    l_U1351 = 0;
    l_U1352 = 0;
    l_U1353 = 0;
    l_U1354 = 1;
    l_U1355 = 0;
    l_U1356 = 0;
    l_U1357 = 0;
    l_U1358 = 0;
    CurrentPlaybackNumberForCar = -1;
    l_U1360 = 0;
    l_U1361 = 0;
    l_U1362 = 0;
    l_U1363 = 0;
    CurrentPositionInRecording = 0.00000000;
    l_U513 = 0;

    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar4.x, ref uVar4.y, ref uVar4.z );
        l_U1851.x = uVar4.x - 100.00000000;
        l_U1851.y = uVar4.y - 100.00000000;
        l_U1851.z = uVar4.z - 100.00000000;
        l_U1854.x = uVar4.x + 100.00000000;
        l_U1854.y = uVar4.y + 100.00000000;
        l_U1854.z = uVar4.z + 100.00000000;
        SWITCH_ROADS_OFF( l_U1851.x, l_U1851.y, l_U1851.z, l_U1854.x, l_U1854.y, l_U1854.z );
        // bParam0
        if (clearCurrentAreaOfCars)
        {
            CLEAR_AREA_OF_CARS( uVar4.x, uVar4.y, uVar4.z, 500.00000000 );
        }
    }

    sub_8827();
    l_U512 = 0;
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        DONT_DISPATCH_COPS_FOR_PLAYER( CurrentPlayerId(), 1 );
        SET_CREATE_RANDOM_COPS( 0 );
    }
    sub_9005();
    return;
}

// Disable vehicles and some other stuff.
void sub_8827()
{
    ADD_SCENARIO_BLOCKING_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000 );
    SET_CAR_GENERATORS_ACTIVE_IN_AREA( -9999.90000000, -9999.90000000, -9999.90000000, 9999.90000000, 9999.90000000, 9999.90000000, 0 );
    OVERRIDE_NUMBER_OF_PARKED_CARS( 0 );
    SWITCH_GARBAGE_TRUCKS( 0 );
    ALLOW_EMERGENCY_SERVICES( 0 );
    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
    return;
}

void sub_9005()
{
    int I;

    for ( I = 0; I < 70; I++ )
    {
        l_U1863[I] = nil;
        l_U1488[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U542[I] = 0.00000000;
        l_U613[I] = 0.00000000;
        l_U684[I] = 0.00000000;
        l_U755[I] = 0.00000000;
        l_U1149[I] = 0;
        l_U826[I] = 0.00000000;
        l_U1220[I] = 0;
        l_U1367[I] = 0;
    }
    for ( I = 0; I < 8; I++ )
    {
        l_U1934[I] = nil;
    }
    l_U1358 = 0;
    l_U1350 = 0;
    l_U1351 = 0;
    for ( I = 0; I < 40; I++ )
    {
        l_U1943[I] = nil;
        l_U1699[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U955[I] = 0.00000000;
        l_U996[I] = 0.00000000;
        l_U1037[I] = 0.00000000;
        l_U1078[I] = 0.00000000;
        l_U1309[I] = 0;
        l_U1438[I] = 0;
    }
    for ( I = 0; I < 6; I++ )
    {
        l_U1993[I] = nil;
    }
    l_U1357 = 0;
    l_U1353 = 0;
    for ( I = 0; I < 8; I++ )
    {
        l_U1984[I] = nil;
        l_U1820[I] = {0.00000000, 0.00000000, 0.00000000};
        l_U901[I] = 0.00000000;
        l_U910[I] = 0.00000000;
        l_U919[I] = 0.00000000;
        l_U928[I] = 0.00000000;
        l_U1291[I] = 0;
        l_U937[I] = 0.00000000;
        l_U1300[I] = 0;
        l_U1479[I] = 0;
    }
    l_U1352 = 0;
    l_U1360 = 0;
    l_U1364 = 0;
    l_U1365 = 0;
    l_U1366 = 0;
    return;
}

void sub_17418()
{
    int I;

    for ( I = 0; I <= 31; I++ )
    {
        l_U2091[I] = 0;
    }
    return;
}

void sub_17753(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6.x, ref uVar6.y, ref uVar6.z );
    }
    else
    {
        return -1.00000000;
    }
    return VDIST( uVar6, uParam1 );
}

void sub_17933()
{
    sub_8486( 0, 1 );
    l_U1488[0] = {852.44250000, -356.08520000, 10.60720000};
    l_U542[0] = 0.09210000;
    l_U613[0] = -0.07200000;
    l_U684[0] = -0.61950000;
    l_U755[0] = 0.77630000;
    l_U1149[0] = 710;
    l_U826[0] = 2498.00000000;
    l_U1367[0] = -276900515;

    l_U1488[1] = {831.17500000, -398.30800000, 13.55870000};

    l_U542[1] = -0.01970000;
    l_U613[1] = -0.00910000;
    l_U684[1] = 0.99980000;
    l_U755[1] = 0.00230000;
    l_U1149[1] = 711;
    l_U826[1] = 7101.00000000;
    l_U1367[1] = -1097828879;
    l_U1699[0] = {838.84590000, -435.73800000, 13.67350000};

    l_U955[0] = -0.01900000;
    l_U996[0] = 0.03120000;
    l_U1037[0] = -0.02670000;
    l_U1078[0] = 0.99900000;
    l_U1438[0] = -1097828879;
    l_U1699[1] = {829.28730000, -442.73800000, 13.58090000};

    l_U955[1] = -0.03140000;
    l_U996[1] = -0.00820000;
    l_U1037[1] = 0.99950000;
    l_U1078[1] = 0.00520000;
    l_U1438[1] = -2124201592;
    l_U1699[2] = {808.72310000, -456.44090000, 12.17160000};

    l_U955[2] = -0.10200000;
    l_U996[2] = -0.03990000;
    l_U1037[2] = 0.70560000;
    l_U1078[2] = 0.70010000;
    l_U1438[2] = -1289722222;
    l_U1699[3] = {861.29690000, -456.47380000, 14.03450000};

    l_U955[3] = -0.02180000;
    l_U996[3] = -0.02200000;
    l_U1037[3] = 0.99950000;
    l_U1078[3] = -0.01110000;
    l_U1438[3] = -1289722222;
    l_U1488[2] = {836.70000000, -482.37500000, 13.52380000};

    l_U542[2] = -0.00000000;
    l_U613[2] = 0.00980000;
    l_U684[2] = -0.00000000;
    l_U755[2] = 1.00000000;
    l_U1149[2] = 712;
    l_U826[2] = 9914.00000000;
    l_U1367[2] = -2124201592;
    l_U1699[4] = {838.89920000, -490.35400000, 13.48080000};

    l_U955[4] = 0.00060000;
    l_U996[4] = 0.02600000;
    l_U1037[4] = 0.02330000;
    l_U1078[4] = 0.99940000;
    l_U1438[4] = -1097828879;
    l_U1488[3] = {836.64710000, -497.74090000, 13.78330000};

    l_U542[3] = -0.01040000;
    l_U613[3] = -0.00580000;
    l_U684[3] = 0.03320000;
    l_U755[3] = 0.99940000;
    l_U1149[3] = 713;
    l_U826[3] = 10710.00000000;
    l_U1367[3] = -310465116;
    l_U1699[5] = {903.26710000, -495.29800000, 14.57950000};

    l_U955[5] = -0.01580000;
    l_U996[5] = -0.00940000;
    l_U1037[5] = 0.99980000;
    l_U1078[5] = -0.00360000;
    l_U1438[5] = -67282078;
    l_U1488[4] = {914.69940000, -490.62490000, 15.02440000};

    l_U542[4] = 0.00950000;
    l_U613[4] = 0.00480000;
    l_U684[4] = 0.00000000;
    l_U755[4] = 0.99990000;
    l_U1149[4] = 714;
    l_U826[4] = 12847.00000000;
    l_U1367[4] = -1289722222;
    l_U1699[6] = {920.75240000, -447.01100000, 15.15280000};

    l_U955[6] = 0.01110000;
    l_U996[6] = 0.01830000;
    l_U1037[6] = 0.02210000;
    l_U1078[6] = 0.99950000;
    l_U1438[6] = -276900515;
    l_U1699[7] = {903.35280000, -416.63500000, 15.79280000};

    l_U955[7] = -0.01590000;
    l_U996[7] = -0.01050000;
    l_U1037[7] = 0.99970000;
    l_U1078[7] = -0.01300000;
    l_U1438[7] = -2124201592;
    l_U1699[8] = {920.72660000, -435.01900000, 15.26450000};

    l_U955[8] = 0.01110000;
    l_U996[8] = 0.01830000;
    l_U1037[8] = 0.02410000;
    l_U1078[8] = 0.99950000;
    l_U1438[8] = -67282078;
    l_U1699[9] = {903.05540000, -409.14800000, 15.80350000};

    l_U955[9] = -0.01590000;
    l_U996[9] = -0.01060000;
    l_U1037[9] = 0.99980000;
    l_U1078[9] = -0.00490000;
    l_U1438[9] = -67282078;
    l_U1699[10] = {920.82790000, -416.19400000, 16.00760000};

    l_U955[10] = 0.01120000;
    l_U996[10] = 0.01830000;
    l_U1037[10] = 0.02660000;
    l_U1078[10] = 0.99940000;
    l_U1438[10] = -310465116;
    l_U1699[11] = {965.56930000, -338.28810000, 18.84230000};

    l_U955[11] = -0.00000000;
    l_U996[11] = 0.00000000;
    l_U1037[11] = 0.72030000;
    l_U1078[11] = 0.69370000;
    l_U1438[11] = -1097828879;
    l_U1699[12] = {963.07510000, -364.32670000, 16.14940000};

    l_U955[12] = -0.00000000;
    l_U996[12] = 0.00000000;
    l_U1037[12] = 0.72390000;
    l_U1078[12] = 0.68990000;
    l_U1438[12] = -1097828879;
    l_U1488[5] = {951.09570000, -390.33870000, 15.89900000};

    l_U542[5] = -0.00840000;
    l_U613[5] = 0.02540000;
    l_U684[5] = 0.70230000;
    l_U755[5] = 0.71140000;
    l_U1149[5] = 715;
    l_U826[5] = 23934.00000000;
    l_U1367[5] = 1208856469;
    l_U1488[6] = {1011.19300000, -388.91590000, 12.41440000};

    l_U542[6] = 0.09190000;
    l_U613[6] = 0.09770000;
    l_U684[6] = 0.74470000;
    l_U755[6] = 0.65380000;
    l_U1149[6] = 716;
    l_U826[6] = 25013.00000000;
    l_U1367[6] = -1289722222;
    l_U1488[7] = {1094.81600000, -391.55990000, 17.24360000};

    l_U542[7] = -0.00600000;
    l_U613[7] = -0.00200000;
    l_U684[7] = 0.96000000;
    l_U755[7] = 0.28000000;
    l_U1149[7] = 717;
    l_U826[7] = 32140.00000000;
    l_U1367[7] = -2124201592;
    l_U1488[8] = {1116.69400000, -336.24630000, 17.40080000};

    l_U542[8] = -0.01820000;
    l_U613[8] = -0.01080000;
    l_U684[8] = 0.85620000;
    l_U755[8] = 0.51620000;
    l_U1149[8] = 718;
    l_U826[8] = 33327.00000000;
    l_U1367[8] = 1208856469;
    l_U1699[13] = {1130.75000000, -359.62500000, 18.73060000};

    l_U955[13] = -0.00780000;
    l_U996[13] = -0.00950000;
    l_U1037[13] = 0.00010000;
    l_U1078[13] = 0.99990000;
    l_U1438[13] = -1289722222;
    l_U1699[14] = {1131.92600000, -397.74820000, 19.00240000};

    l_U955[14] = -0.03220000;
    l_U996[14] = -0.00900000;
    l_U1037[14] = 0.99920000;
    l_U1078[14] = 0.02060000;
    l_U1438[14] = -682211828;
    l_U1488[9] = {1189.86300000, -421.11930000, 18.23400000};

    l_U542[9] = -0.00050000;
    l_U613[9] = -0.10870000;
    l_U684[9] = 0.99410000;
    l_U755[9] = 0.00410000;
    l_U1149[9] = 719;
    l_U826[9] = 37693.00000000;
    l_U1367[9] = -67282078;
    l_U1699[15] = {1196.76800000, -425.58800000, 17.42180000};

    l_U955[15] = 0.10020000;
    l_U996[15] = 0.03920000;
    l_U1037[15] = -0.01010000;
    l_U1078[15] = 0.99410000;
    l_U1438[15] = -682211828;
    l_U1699[16] = {1224.84000000, -365.39470000, 20.20240000};

    l_U955[16] = -0.01390000;
    l_U996[16] = 0.03940000;
    l_U1037[16] = 0.70660000;
    l_U1078[16] = 0.70640000;
    l_U1438[16] = -1097828879;
    l_U1488[10] = {1194.57800000, -353.62550000, 20.64710000};

    l_U542[10] = 0.00590000;
    l_U613[10] = 0.01240000;
    l_U684[10] = -0.00000000;
    l_U755[10] = 0.99990000;
    l_U1149[10] = 720;
    l_U826[10] = 40853.00000000;
    l_U1367[10] = -1097828879;
    l_U1488[11] = {1189.82200000, -359.47450000, 20.87210000};

    l_U542[11] = -0.01400000;
    l_U613[11] = 0.02970000;
    l_U684[11] = 0.99950000;
    l_U755[11] = -0.00130000;
    l_U1149[11] = 721;
    l_U826[11] = 41431.00000000;
    l_U1367[11] = -310465116;
    l_U1488[12] = {1177.67200000, -329.37000000, 20.95190000};

    l_U542[12] = -0.01600000;
    l_U613[12] = -0.02930000;
    l_U684[12] = 0.75300000;
    l_U755[12] = 0.65720000;
    l_U1149[12] = 722;
    l_U826[12] = 41827.00000000;
    l_U1367[12] = -682211828;
    l_U1488[13] = {1144.43100000, -330.92440000, 17.67250000};

    l_U542[13] = 0.00220000;
    l_U613[13] = 0.00840000;
    l_U684[13] = 0.71730000;
    l_U755[13] = 0.69670000;
    l_U1149[13] = 723;
    l_U826[13] = 42091.00000000;
    l_U1367[13] = 1208856469;
    l_U1488[14] = {1123.17800000, -334.79390000, 17.40960000};

    l_U542[14] = -0.02850000;
    l_U613[14] = -0.01330000;
    l_U684[14] = 0.82040000;
    l_U755[14] = 0.57090000;
    l_U1149[14] = 724;
    l_U826[14] = 42157.00000000;
    l_U1367[14] = -67282078;
    l_U1699[17] = {1183.44500000, -389.40390000, 20.45240000};

    l_U955[17] = -0.00110000;
    l_U996[17] = -0.00150000;
    l_U1037[17] = 0.99940000;
    l_U1078[17] = 0.03320000;
    l_U1438[17] = 850991848;
    l_U1820[0] = {992.62660000, -420.25490000, 15.61810000};

    l_U901[0] = -0.00670000;
    l_U910[0] = 0.01620000;
    l_U919[0] = 0.00250000;
    l_U928[0] = 0.99980000;
    l_U1291[0] = 227;
    l_U937[0] = 26129.46000000;
    l_U946[0] = 1.00000000;
    l_U1479[0] = 1353720154;
    l_U1820[1] = {1130.20000000, -332.36440000, 18.14070000};

    l_U901[1] = -0.02120000;
    l_U910[1] = 0.01010000;
    l_U919[1] = 0.77940000;
    l_U928[1] = 0.62610000;
    l_U1291[1] = 226;
    l_U937[1] = 24129.46000000;
    l_U946[1] = 1.00000000;
    l_U1479[1] = 2053223216;
    return;
}

// Happens after Niko goes to Roman's garage, setup chase sequence
void sub_21735()
{
    if (l_U2180[MissionSwitch] == 0)
    {
        STOP_PED_SPEAKING( PlayerChar, 0 );
        // Ivan is already making an escape. Chase him
        PRINT_NOW( "VLA4A_02", 7500, 1 );
        
        sub_17418();
        
        // Make the player not fly through the car windshield
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( PlayerChar, 0 );
        GET_GAME_TIMER( ref l_U2242 );
        
        SETTIMERA( 0 );
        l_U2180[MissionSwitch] = 1;
    }
    if ((l_U2091[1] == 0) AND ((TIMERA() > 7500) AND (NOT IS_MESSAGE_BEING_DISPLAYED())))
    {
        sub_21901( "V4_DEPOT", ref l_U2170, 8, 1 );
        l_U2091[1] = 1;
    }
    if ((l_U2210 == 0) AND ((l_U2091[1] == 1) AND (NOT (sub_22883( l_U2170 )))))
    {
        PRINT_HELP_FOREVER( "BRKCTRL" );
        GET_GAME_TIMER( ref l_U2206 );
        l_U2210 = 1;
    }
    GET_GAME_TIMER( ref l_U2205 );
    if ((l_U2210 == 1) AND (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BRKCTRL" )))
    {
        if ((l_U2205 - l_U2206) > 14000)
        {
            CLEAR_HELP();
        }
    }
    if (NOT (IS_CAR_DEAD( IvanCar )))
    {
        if (IS_CHAR_IN_CAR( PlayerChar, IvanCar ))
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref IvanCar );
        }
    }
    GET_GAME_TIMER( ref l_U2243 );
    if ((NOT (sub_22883( l_U2170 ))) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U2243 - l_U2242) > 22000)))
    {
        if ((sub_23278( 0, 10 )) > 5)
        {
            sub_21901( "V4_INCAR", ref l_U2170, 8, 1 );
        }
        else
        {
            sub_21901( "V4_CHASE3", ref l_U2170, 8, 1 );
        }
        GET_GAME_TIMER( ref l_U2242 );
    }
    SetIvanCarInvincible();
    if (NOT (IS_CAR_DEAD( IvanCar )))
    {
        if (l_U2199 < 310.00000000)
        {
            if (l_U2221 == 0)
            {
                sub_23474( IvanCar, PlayerChar, ref l_U2227, 27.00000000, 20.00000000, 40.00000000, 0.65000000, 1.60000000, 1065353216 );
            }
            else
            {
                sub_24509( IvanCar, PlayerChar, ref l_U2227, 27.00000000, 27.00000000, 40.00000000, 0.65000000, 1.60000000, 1065353216 );
            }
            if (((FIND_TIME_POSITION_IN_RECORDING( IvanCar )) >= 43849.22000000) AND (l_U2221 == 0))
            {
                sub_24509( IvanCar, PlayerChar, ref l_U2227, 38.00000000, 34.00000000, 55.00000000, 1.20000000, 1.80000000, 1065353216 );
            }
            if (((FIND_TIME_POSITION_IN_RECORDING( IvanCar )) >= 46849.22000000) AND (l_U2221 == 0))
            {
                sub_24509( IvanCar, PlayerChar, ref l_U2227, 38.00000000, 34.00000000, 55.00000000, 1.35000000, 1.80000000, 1065353216 );
            }
        }
        if ((((FIND_TIME_POSITION_IN_RECORDING( IvanCar )) >= 28207.79000000) AND (l_U2221 == 1)) || (((FIND_TIME_POSITION_IN_RECORDING( IvanCar )) >= 68166.00000000) AND (l_U2221 == 0)))
        {
            if (l_U2233 < 1.70000000)
            {
                l_U2233 *= 1.08000000;
            }
            l_U2199 = 315.00000000;
            sub_23474( IvanCar, PlayerChar, ref l_U2227, 50.00000000, 40.00000000, 50.00000000, l_U2233, 1.75000000, 1065353216 );
        }
        if ((sub_17753( PlayerChar, 814.03540000, -269.81020000, 15.34270000 )) < 30.00000000)
        {
            sub_23474( IvanCar, PlayerChar, ref l_U2227, 33.00000000, 27.00000000, 40.00000000, 1.45000000, 2.00000000, 1065353216 );
        }
        if (IS_CHAR_ON_FOOT( PlayerChar ))
        {
            l_U2227 = 1.00000000;
        }
        sub_27639( IvanCar, l_U2227 );
        sub_42893( ref IvanPed );
        if ((NOT (IS_CAR_ON_SCREEN( IvanCar ))) AND ((sub_8216( IvanPed, PlayerChar, 1 )) > l_U2199))
        {
            REMOVE_BLIP( l_U2485 );
            DELETE_CHAR( ref IvanPed );
            DELETE_CAR( ref IvanCar );
            PRINT_NOW( "VLALOST", 7500, 1 );
            sub_43688( 1, "V4_CALLF", "V4AUD", 0 );
            sub_44274();
        }
    }
    PRINTFLOAT( l_U2227 );
    PRINTNL();
    if (((NOT l_U2091[0]) == 0) AND (LOCATE_CHAR_ANY_MEANS_2D( PlayerChar, 1175.97000000, -378.41300000, 90.00000000, 90.00000000, 0 )))
    {
        sub_44664();
        CLEAR_AREA_OF_CHARS( 1176.69600000, -366.06850000, 31.90820000, 50.00000000 );
        if (DOES_VEHICLE_EXIST( l_U1943[17] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1943[17] )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U1943[17] );
            }
        }
        if (DOES_VEHICLE_EXIST( l_U1943[28] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1943[28] )))
            {
                SET_CAR_ON_GROUND_PROPERLY( l_U1943[28] );
            }
        }
        l_U2091[0] = 1;
    }
    if (DOES_VEHICLE_EXIST( IvanCar ))
    {
        if (NOT (IS_CAR_DEAD( IvanCar )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( IvanCar ))
            {
                if ((NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( IvanCar ))) || ((((FIND_TIME_POSITION_IN_RECORDING( IvanCar )) >= 44207.79000000) AND (l_U2221 == 1)) || (((FIND_TIME_POSITION_IN_RECORDING( IvanCar )) >= 79066.00000000) AND (l_U2221 == 0))))
                {
                    ENABLE_CHASE_AUDIO( 0 );
                    STOP_PLAYBACK_RECORDED_CAR( IvanCar );
                    sub_45143( 0 );
                    ADD_SCENARIO_BLOCKING_AREA( 1153.80000000, -390.31980000, 19.61120000, 1190.00000000, -346.00000000, 50.00000000 );
                    SET_PED_NON_CREATION_AREA( 1153.80000000, -390.31980000, 19.61120000, 1190.00000000, -346.00000000, 50.00000000 );
                    SWITCH_PED_PATHS_OFF( 1153.80000000, -390.31980000, 19.61120000, 1190.00000000, -346.00000000, 40.00000000 );
                    sub_3086();
                    SET_CAR_PROOFS( IvanCar, 0, 0, 0, 0, 0 );
                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( PlayerChar, 1 );
                    MissionSwitch++;
                }
            }
        }
    }
    return;
}

// uParam0 seems to be some type of chase sequence or something
// Values: V4_DEPOT, V4_INCAR, V4_CHASE3, V4_ONFOOT, V4_CHASE2
// V4_FIND, V4_CHASE, V4_CORNER, V4_HOLD, V4_HELP, V4_PUSH, 
// V4_FALLS, V4_LIVE
// uParam1 seems to be unknown for now
// uParam2 seem to mostly be 8 in the scripts, unknown usage
// uParam3 seem to mostly be 1 in the scripts, unknown usage
void sub_21901(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_21924( uParam0, ref l_U181.x, uParam1, uParam2, uParam3 );
}

void sub_21924(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_21978( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_21978(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_22000( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
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
            iParam1->z = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->z = 0;
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
    sub_22692( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_22000(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_22077( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_22077( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_22077( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

// Looks like it's some left over debug function in use within the scripts
// Does nothing here though.
void sub_22077(unknown uParam0)
{
    return;
}

void sub_22692(int iParam0, int iParam1)
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

int sub_22883(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_22077( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_22077( "\n speech is not playing" );
    }
    return 0;
}

void sub_23278(unknown uParam0, unknown uParam1)
{
    unknown Result;

    GENERATE_RANDOM_INT_IN_RANGE( uParam0, uParam1, ref Result );
    return Result;
}

void sub_23474(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, unknown uParam8)
{
    float fVar11;
    float fVar12;
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;

    fVar12 = sub_23487( uParam0, uParam1 );
    if (fVar12 < 0.00000000)
    {
        fVar12 *= -1.00000000;
    }
    fVar15 = fParam4 - fParam3;
    if (fVar15 > -0.10000000)
    {
        fVar15 = -0.10000000;
    }
    fVar16 = fParam5 - fParam3;
    if (fVar16 < 0.10000000)
    {
        fVar16 = 0.10000000;
    }
    fVar13 = fVar12;
    if (fVar13 < fParam4)
    {
        fVar13 = fParam4;
    }
    if (fVar13 > fParam5)
    {
        fVar13 = fParam5;
    }
    fVar11 = 0.00000000;
    if (DOES_CHAR_EXIST( uParam1 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (sub_23877( uParam1, uParam0 ))
            {
                if (IS_CHAR_IN_ANY_CAR( uParam1 ))
                {
                    fVar11 = fParam7;
                }
                else if (fVar12 < 50.00000000)
                {
                    fVar11 = uParam8;
                }
                else
                {
                    fVar11 = fParam7;
                }
            }
            else if (fVar13 < fParam3)
            {
                fVar11 = uParam8 + (((fVar13 - fParam3) / fVar15) * (fParam7 - uParam8));
            }
            else
            {
                fVar14 = uParam8 - (((fVar13 - fParam3) / fVar16) * (uParam8 - fParam6));
                if (fVar12 > 100.00000000)
                {
                    fVar11 = fVar14;
                }
                else if ((uParam2^) < fVar14)
                {
                    fVar11 = fVar14;
                }
                else
                {
                    fVar11 = (uParam2^);
                }
            }
        }
    }
    if (fVar11 < fParam6)
    {
        fVar11 = fParam6;
    }
    if (fVar11 > fParam7)
    {
        fVar11 = fParam7;
    }
    fVar14 = fVar11 - (uParam2^);
    (uParam2^) += fVar14 * 0.20000000;
    if ((uParam2^) < fParam6)
    {
        (uParam2^) = fParam6;
    }
    if ((uParam2^) > fParam7)
    {
        (uParam2^) = fParam7;
    }
    return;
}

// TODO Figure out what this is
// Check if the vehicle "uParam0" is driveable
// Checks if the char "uParam1" is not dead
// Returns this float value: return (VMAG( uVar7 )) * (SIN( fVar16 ));
float sub_23487(unknown uParam0, unknown uParam1)
{
    // Vector3
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
        GET_CAR_FORWARD_X( uParam0, ref uVar4.x );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4.y );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7.x, uVar7.y, uVar4.x, uVar4.y, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7.z = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

// Check if the char "charHandle" is not injured
// Checks if the vehicle "vehicleHandle" is driveable
// int sub_23877(unknown uParam0, unknown uParam1)
int sub_23877(int charHandle, int vehicleHandle)
{
    // vector vVar4;
    vector charCoordinates;

    // vector vVar7
    vector carCoordinates

    // vector vVar10;
    vector offsetVector;
    
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    float fVar19;

    if (NOT (IS_CHAR_INJURED( charHandle )))
    {
        if (NOT (IS_CAR_DEAD( vehicleHandle )))
        {
            if (IS_CHAR_IN_CAR( charHandle, vehicleHandle ))
            {
                return 0;
            }
        }
    }

    if (NOT (IS_CHAR_DEAD( charHandle )))
    {
        GET_CHAR_COORDINATES( charHandle, ref charCoordinates.x, ref charCoordinates.y, ref charCoordinates.z );
    }

    if (IS_VEH_DRIVEABLE( vehicleHandle ))
    {
        GET_CAR_COORDINATES( vehicleHandle, ref carCoordinates.x, ref carCoordinates.y, ref carCoordinates.z );
    }

    // TODO Find out what this is for
    uVar13 = {carCoordinates - charCoordinates};

    if (IS_VEH_DRIVEABLE( vehicleHandle ))
    {
        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( vehicleHandle, 0.00000000, 5.00000000, 0.00000000, ref offsetVector.x, ref offsetVector.y, ref offsetVector.z );
        uVar16 = {offsetVector - carCoordinates};
    }

    uVar13.z = 0.00000000;
    uVar16.z = 0.00000000;
    // Returns (uVar13->x * uVar16->x) + (uVar13->y * uVar16->y)) + (uVar13->z * uVar16->z
    fVar19 = sub_24098( ref uVar13, ref uVar16 );

    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

float sub_24098(int iParam0, int iParam1)
{
    return ((iParam0->x * iParam1->x) + (iParam0->y * iParam1->y)) + (iParam0->z * iParam1->z);
}

void sub_24509(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3, float fParam4, unknown uParam5, float fParam6, unknown uParam7, float fParam8)
{
    float fVar11;
    float fVar12;
    float fVar13;

    if (NOT (fParam4 < fParam3))
    {
        fParam4 = fParam3 - 0.10000000;
    }
    if (fParam6 > fParam8)
    {
        fParam8 = fParam6;
    }
    fVar11 = uParam7 / fParam8;
    fVar12 = fParam6 / fParam8;
    fVar13 = ((uParam5 - fParam3) * (1.00000000 / 0.40000000)) + fParam3;
    sub_24624( uParam0, uParam1, uParam2, fParam8, fParam4, fParam3, fVar13, fVar11, 1.00000000, fVar12, 1 );
    return;
}

void sub_24624(unknown uParam0, unknown uParam1, unknown uParam2, float fParam3, float fParam4, float fParam5, float fParam6, unknown uParam7, float fParam8, unknown uParam9, boolean bParam10)
{
    float fVar13;
    float fVar14;
    float fVar15;
    float fVar16;
    float fVar17;
    float fVar18;
    float fVar19;
    float fVar20;
    float fVar21;
    unknown uVar22;
    unknown uVar23;

    if (l_U513 == 0)
    {
        if ((uParam2^) < fParam3)
        {
            (uParam2^) = fParam3;
            l_U513 = 1;
        }
    }
    if (fParam4 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist cannot be less than zero." );
    }
    if (fParam4 >= fParam5)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( ", fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist must be less than fIdealDist" );
    }
    if (fParam4 >= fParam6)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist = " );
        PRINTFLOAT( fParam4 );
        PRINTSTRING( ", fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fMinDist must be less than fSlowDownDist" );
    }
    if (fParam5 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist cannot be less than zero." );
    }
    if (fParam5 >= fParam6)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist = " );
        PRINTFLOAT( fParam5 );
        PRINTSTRING( ", fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fIdealDist must be less than fSlowDownDist" );
    }
    if (fParam6 < 0.00000000)
    {
        PRINTSTRING( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fSlowDownDist = " );
        PRINTFLOAT( fParam6 );
        PRINTSTRING( "\n" );
        SCRIPT_ASSERT( "CALCULATE_NEW_PLAYBACK_SPEED_FROM_CHAR - fSlowDownDist cannot be less than zero." );
    }
    if (fParam8 < 0.00000000)
    {
        fParam8 = l_U1141;
    }
    fVar13 = fParam3 * uParam7;
    if (NOT (fVar13 > fParam3))
    {
        fVar13 = fParam3 + 0.10000000;
    }
    fVar18 = fParam3 * uParam9;
    fVar19 = ((fParam6 - fParam5) * 0.40000000) + fParam5;
    fVar15 = sub_23487( uParam0, uParam1 );
    if (fVar15 < 0.00000000)
    {
        fVar15 *= -1.00000000;
    }
    fVar16 = fVar15;
    if (fVar16 < fParam4)
    {
        fVar16 = fParam4;
    }
    if (fVar16 > fVar19)
    {
        fVar16 = fVar19;
    }
    fVar17 = fParam3;
    if (DOES_CHAR_EXIST( uParam1 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam1 )))
        {
            if (sub_23877( uParam1, uParam0 ))
            {
                if (IS_CHAR_IN_ANY_CAR( uParam1 ))
                {
                    fVar17 = fVar13;
                }
                else if (fVar15 < 50.00000000)
                {
                    fVar17 = fParam3;
                }
                else
                {
                    fVar17 = fVar13;
                }
            }
            else if (fVar15 < fParam5)
            {
                if ((sub_26160( uParam0, uParam1 )) < fParam5)
                {
                    fVar14 = sub_26293( uParam0, uParam1 );
                    fVar14 += -15.00000000;
                    if (fVar14 < 0.00000000)
                    {
                        fVar14 = 0.00000000;
                    }
                    if (fVar14 > 75.00000000)
                    {
                        fVar14 = 75.00000000;
                    }
                    fVar20 = (75.00000000 - fVar14) / 75.00000000;
                }
                else
                {
                    fVar20 = 1.00000000;
                }
                fVar17 = (((((fParam5 - fParam4) - (fVar16 - fParam4)) / (fParam5 - fParam4)) * (fVar13 - fParam3)) * fVar20) + fParam3;
            }
            else if (fVar15 > fParam6)
            {
                fVar17 = fVar18;
                l_U514 = 1;
            }
            else if (l_U514)
            {
                if (fVar15 < fVar19)
                {
                    fVar17 = fParam3;
                    l_U514 = 0;
                }
                else
                {
                    fVar17 = fVar18;
                }
            }
            else
            {
                fVar17 = fParam3;
            };;;;
        }
    }
    fVar14 = fVar17 - (uParam2^);
    if (fVar14 > 0.00000000)
    {
        GET_FRAME_TIME( ref fVar14 );
        fVar21 = (l_U1146 * fParam3) * fVar14;
        fVar14 = fVar17 - (uParam2^);
        if (fVar14 > fVar21)
        {
            fVar14 = fVar21;
        }
        (uParam2^) += fVar14;
    }
    else
    {
        GET_FRAME_TIME( ref fVar14 );
        fVar21 = (l_U1147 * fParam3) * fVar14;
        fVar14 = fVar17 - (uParam2^);
        if (fVar14 < (fVar21 * -1.00000000))
        {
            fVar14 = fVar21 * -1.00000000;
        }
        (uParam2^) += fVar14;
    }
    if (bParam10)
    {
        if (NOT (IS_CHAR_INJURED( uParam1 )))
        {
            if (IS_CHAR_IN_ANY_CAR( uParam1 ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar22 );
                if (DOES_VEHICLE_EXIST( uVar22 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar22 )))
                    {
                        GET_CAR_MODEL( uVar22, ref uVar23 );
                        if ((IS_THIS_MODEL_A_BIKE( uVar23 )) || (IS_THIS_MODEL_A_CAR( uVar23 )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar22 ))
                            {
                                fVar14 = fVar17;
                                if (fVar14 < fParam3)
                                {
                                    fVar14 = fParam3;
                                }
                                fVar14 -= fParam3;
                                fVar14 /= fVar13 - fParam3;
                                fVar14 *= fParam8;
                                fVar14 *= l_U1139 - l_U1140;
                                fVar14 += l_U1140;
                                l_U1138 = fVar14;
                                if (l_U1138 < l_U1140)
                                {
                                    l_U1138 = l_U1140;
                                }
                                if (l_U1138 > l_U1139)
                                {
                                    l_U1138 = l_U1139;
                                }
                                FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( CurrentPlayerId(), l_U1138 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_26160(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown Result;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    uVar10.z = 0.00000000;
    Result = VMAG( uVar10 );
    return Result;
}

void sub_26293(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    vector vVar10;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown Result;
    unknown uVar17;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_FORWARD_X( uParam0, ref uVar4.x );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4.y );
    }
    if (NOT (IS_CHAR_DEAD( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
        if (IS_CHAR_IN_ANY_CAR( uParam1 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar17 );
            GET_CAR_FORWARD_X( uVar17, ref uVar13.x );
            GET_CAR_FORWARD_Y( uVar17, ref uVar13.y );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( uParam1, 0.00000000, 5.00000000, 0.00000000, ref vVar10.x, ref vVar10.y, ref vVar10.z );
            uVar13 = {vVar10 - vVar7};
        }
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar4._fU0, uVar4._fU4, uVar13._fU0, uVar13._fU4, ref Result );
    return Result;
}

void sub_27639(unknown uParam0, float fParam1)
{
    unknown uVar4;
    float fVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int I;
    int iVar10;

    GET_FRAME_TIME( ref fVar5 );
    fVar5 *= 1000.00000000;
    l_U2006 += fVar5;
    l_U2007 += fVar5;
    l_U2008 += fVar5;
    l_U1137 = fParam1;
    if (NOT l_U503)
    {
        if (l_U502)
        {
            sub_8827();
            l_U512 = 0;
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar6.x, ref uVar6.y, ref uVar6.z );
                CLEAR_AREA( uVar6.x, uVar6.y, uVar6.z, 1000.00000000, 1 );
                PRINTSTRING( "UPDATE_UBER_PLAYBACK - called massive clear area! \n" );
            }
            l_U503 = 1;
        }
    }
    else if (NOT l_U502)
    {
        sub_27890();
        l_U512 = 1;
        l_U503 = 0;
    }
    if (l_U502)
    {
        fParam1 = 1.00000000;
    }
    if (NOT l_U493)
    {
        if (l_U484)
        {
            l_U1132 = 0.00000000;
        }
        else
        {
            l_U1132 = 1.00000000;
        }
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
                {
                    if (sub_23877( CurrentPlayerChar(), uParam0 ))
                    {
                        l_U501 = 1;
                    }
                    else
                    {
                        l_U501 = 0;
                    }
                }
                // l_U1129
                CurrentPositionInRecording = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                // l_U1359
                CurrentPlaybackNumberForCar = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                SET_PLAYBACK_SPEED( uParam0, (fParam1 * l_U1130) * l_U1132 );
                if (l_U488)
                {
                    # -NULL-0xbfc99f( uParam0, 1 );
                }
                else
                {
                    # -NULL-0xbfc99f( uParam0, 0 );
                }
                if (l_U500)
                {
                    if (l_U1135 > 1000.00000000)
                    {
                        sub_28329( uParam0, CurrentPositionInRecording );
                        sub_28934( uParam0, 100.00000000 );
                        for ( I = 0; I < 3; I++ )
                        {
                            fVar5 = TO_FLOAT( I );
                            fVar5 *= 2000.00000000;
                            fVar5 += CurrentPositionInRecording;
                            fVar5 += 4000.00000000;
                            sub_29160( uParam0, fVar5, l_U1134 );
                        }
                        l_U1135 = 0.00000000;
                    }
                    else
                    {
                        GET_FRAME_TIME( ref fVar5 );
                        fVar5 *= 1000.00000000;
                        l_U1135 += fVar5;
                    }
                }
            }
        }
        iVar10 = 0;
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                iVar10 = 1;
            }
        }
        if ((IS_SCREEN_FADED_OUT()) || (CurrentPositionInRecording == 0))
        {
            iVar10 = 1;
        }
        if ((NOT l_U515) AND (iVar10))
        {
            if (NOT l_U481)
            {
                sub_29792( uParam0, (fParam1 * l_U1130) * l_U1132 );
                sub_35712( ref uParam0 );
                sub_36276( ref uParam0 );
            }
            if (l_U486)
            {
                sub_36789( uParam0 );
            }
            if (NOT l_U481)
            {
                sub_37941( uParam0, (fParam1 * l_U1130) * l_U1132 );
            }
        }
        if (l_U495)
        {
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref l_U2000 );
                    GET_CAR_COORDINATES( l_U2000, ref l_U1845.x, ref l_U1845.y, ref l_U1845.z );
                    GET_VEHICLE_QUATERNION( l_U2000, ref l_U897, ref l_U898, ref l_U899, ref l_U900 );
                }
            }
            l_U495 = 0;
        }
        if (l_U494)
        {
            if (DOES_VEHICLE_EXIST( l_U2000 ))
            {
                sub_30635( l_U2001 );
                l_U2001 = l_U2000;
            }
            if (IS_VEH_DRIVEABLE( l_U2001 ))
            {
                SET_CAR_COORDINATES( l_U2001, l_U1845.x, l_U1845.y, l_U1845.z );
                SET_VEHICLE_QUATERNION( l_U2001, l_U897, l_U898, l_U899, l_U900 );
            }
            l_U1128 = l_U1131;
            l_U481 = 1;
            l_U494 = 0;
        }
        if (l_U481)
        {
            while (NOT (sub_41873( ref uParam0, l_U1128 )))
            {
                WAIT( 0 );
            }
            l_U484 = 1;
        }
    }
    return;
}

void sub_27890()
{
    FLUSH_SCENARIO_BLOCKING_AREAS();
    SET_ALL_CAR_GENERATORS_BACK_TO_ACTIVE();
    sub_27913();
    OVERRIDE_NUMBER_OF_PARKED_CARS( -1 );
    SWITCH_GARBAGE_TRUCKS( 1 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    return;
}

void sub_27913()
{
    int I;

    for ( I = 0; I < 20; I++ )
    {
        if (g_U8708[I]._fU60)
        {
            SWITCH_CAR_GENERATOR( g_U9029[I], 0 );
        }
        else
        {
            SWITCH_CAR_GENERATOR( g_U9029[I], 101 );
        }
    }
    return;
}

void sub_28329(unknown uParam0, unknown uParam1)
{
    int I;
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    vVar6 = {99999.90000000, 99999.90000000, 99999.90000000};
    vVar9 = {-99999.90000000, -99999.90000000, -99999.90000000};
    sub_28378();
    for ( I = 0; I < 15; I++ )
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
            {
                uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
                GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1 + ((TO_FLOAT( I - 1 )) * 2000), ref uVar12 );
                if (uVar12.x < vVar6.x)
                {
                    vVar6.x = uVar12.x;
                }
                if (uVar12.y < vVar6.y)
                {
                    vVar6.y = uVar12.y;
                }
                if (uVar12.z < vVar6.z)
                {
                    vVar6.z = uVar12.z;
                }
                if (uVar12.x > vVar9.x)
                {
                    vVar9.x = uVar12.x;
                }
                if (uVar12.y > vVar9.y)
                {
                    vVar9.y = uVar12.y;
                }
                if (uVar12.z > vVar9.z)
                {
                    vVar9.z = uVar12.z;
                }
            }
        }
    }
    vVar6 = {vVar6 + (vector( l_U1148 * -1.00000000, l_U1148 * -1.00000000, l_U1148 * -1.00000000))};
    vVar9 = {vVar9 + (vector( l_U1148, l_U1148, l_U1148))};
    l_U1857 = {vVar6};
    l_U1860 = {vVar9};
    SWITCH_ROADS_OFF( l_U1851.x, l_U1851.y, l_U1851.z, l_U1854.x, l_U1854.y, l_U1854.z );
    SWITCH_ROADS_OFF( l_U1857.x, l_U1857.y, l_U1857.z, l_U1860.x, l_U1860.y, l_U1860.z );
    return;
}

void sub_28378()
{
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U1857.x, l_U1857.y, l_U1857.z, l_U1860.x, l_U1860.y, l_U1860.z );
    SWITCH_ROADS_BACK_TO_ORIGINAL( l_U1851.x, l_U1851.y, l_U1851.z, l_U1854.x, l_U1854.y, l_U1854.z );
    return;
}

void sub_28934(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    if (NOT l_U503)
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                GET_CAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
                GET_CHAR_COORDINATES( CurrentPlayerChar(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
                uVar10 = {vVar4 - vVar7};
                if ((VMAG2( uVar10 )) > (uParam1 * uParam1))
                {
                    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
                }
                else
                {
                    SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
                }
            }
        }
    }
    return;
}

void sub_29160(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    vector vVar6;
    vector vVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
        {
            uVar5 = GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( uParam0 );
            GET_POSITION_OF_CAR_RECORDING_AT_TIME( uVar5, uParam1, ref vVar6 );
            GET_CAR_COORDINATES( uParam0, ref vVar9.x, ref vVar9.y, ref vVar9.z );
            uVar12 = {vVar9 - vVar6};
            fVar15 = VMAG( uVar12 );
            if (fVar15 > fParam2)
            {
                fVar15 = fParam2;
            }
            sub_29289( vVar6, fVar15 );
        }
    }
    return;
}

void sub_29289(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    boolean bVar6;
    unknown uVar7;

    if (NOT l_U503)
    {
        if (NOT (sub_29319( uParam0, uParam3, 150.00000000 )))
        {
            bVar6 = true;
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar7 );
                if (DOES_VEHICLE_EXIST( uVar7 ))
                {
                    if (NOT (IS_CAR_DEAD( uVar7 )))
                    {
                        if (LOCATE_CAR_3D( uVar7, uParam0.x, uParam0.y, uParam0.z, uParam3, uParam3, uParam3, 0 ))
                        {
                            bVar6 = false;
                        }
                    }
                }
            }
            if (bVar6)
            {
                CLEAR_AREA_OF_CARS( uParam0.x, uParam0.y, uParam0.z, uParam3 );
            }
        }
    }
    return;
}

int sub_29319(vector vParam0, unknown uParam3, float fParam4)
{
    unknown uVar7;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT IS_SCREEN_FADED_OUT())
    {
        if (NOT l_U503)
        {
            if (NOT l_U481)
            {
                GET_GAME_VIEWPORT_ID( ref uVar7 );
                if (CAM_IS_SPHERE_VISIBLE( uVar7, vParam0.x, vParam0.y, vParam0.z, uParam3 ))
                {
                    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
                    {
                        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref vVar8.x, ref vVar8.y, ref vVar8.z );
                        uVar11 = {vVar8 - vParam0};
                        if (((VMAG( uVar11 )) - uParam3) < fParam4)
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_29792(unknown uParam0, unknown uParam1)
{
    int I;
    int iVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;
    unknown uVar15;
    boolean bVar16;
    boolean bVar17;
    int iVar18;

    l_U1361 = 0;
    iVar5 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 70; I++ )
        {
            if (I < l_U1360)
            {
                I = l_U1360;
            }
            if (l_U1220[I] == 0)
            {
                if ((NOT (l_U1367[I] == 0)) AND ((l_U1149[I] < 3000) AND (l_U1149[I] > 0)))
                {
                    if (NOT l_U481)
                    {
                        if (CurrentPositionInRecording > (l_U826[I] - (7000.00000000 * uParam1)))
                        {
                            l_U1366++;
                            l_U1220[I]++;
                        }
                        else if (iVar5 > 3)
                        {
                            return;
                        }
                        else
                        {
                            iVar5++;
                        }
                    }
                    else
                    {
                        fVar14 = CurrentPositionInRecording - l_U826[I];
                        if (fVar14 >= 0.00000000)
                        {
                            if (fVar14 < (sub_30066( l_U1149[I] )))
                            {
                                l_U1366++;
                                l_U1220[I]++;
                            }
                            else
                            {
                                sub_30192( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    sub_30192( I, 1090519040 );
                }
            }
            if (l_U1220[I] == 1)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1149[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U1149[I] );
                }
                else if (l_U1367[I] == sub_30920())
                {
                    if (HAS_MODEL_LOADED( sub_30948() ))
                    {
                        l_U1220[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_30948() );
                    }
                }
                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                {
                    l_U1220[I]++;
                }
                else if (HAS_MODEL_LOADED( sub_31063() ))
                {
                    l_U1220[I]++;
                }
                else
                {
                    REQUEST_MODEL( sub_31063() );
                };;;;
            }
            if (l_U1220[I] == 2)
            {
                if (HAS_MODEL_LOADED( l_U1367[I] ))
                {
                    if (NOT (DOES_VEHICLE_EXIST( l_U1863[I] )))
                    {
                        bVar16 = false;
                        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                        {
                            bVar16 = true;
                        }
                        else if (HAS_MODEL_LOADED( sub_31063() ))
                        {
                            bVar16 = true;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_31063() );
                        }
                        if (bVar16)
                        {
                            bVar17 = false;
                            if ((NOT (sub_31306( l_U1488[I] ))) AND (NOT (sub_29319( l_U1488[I], 5.00000000, 1120403456 ))))
                            {
                                bVar17 = true;
                            }
                            if (l_U507)
                            {
                                bVar17 = true;
                            }
                            if (bVar17)
                            {
                                if (l_U500)
                                {
                                    sub_29289( l_U1488[I], l_U1134 );
                                }
                                CREATE_CAR( l_U1367[I], l_U1488[I].x, l_U1488[I].y, l_U1488[I].z, ref l_U1863[I], 1 );
                                if (l_U1367[I] == sub_30920())
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U1863[I], 6, sub_30948(), ref uVar6 );
                                    SET_CHAR_RELATIONSHIP_GROUP( uVar6, 23 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_30948() );
                                }
                                else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                {
                                    CREATE_RANDOM_CHAR_AS_DRIVER( l_U1863[I], ref uVar6 );
                                }
                                else
                                {
                                    CREATE_CHAR_INSIDE_CAR( l_U1863[I], 4, sub_31063(), ref uVar6 );
                                    SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar6 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_31063() );
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar6, 1 );
                                SET_VEHICLE_QUATERNION( l_U1863[I], l_U542[I], l_U613[I], l_U684[I], l_U755[I] );
                                FREEZE_CAR_POSITION( l_U1863[I], 1 );
                                SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U1863[I], 1 );
                                SET_CAR_COLLISION( l_U1863[I], 0 );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1367[I] );
                                sub_31830( l_U1863[I] );
                                GET_INTERIOR_FROM_CAR( l_U1863[I], ref iVar18 );
                                if (NOT (iVar18 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U1863[I] );
                                }
                                l_U1366--;
                                l_U1220[I]++;
                            }
                            else if (CurrentPositionInRecording > l_U826[I])
                            {
                                l_U1366--;
                                sub_30192( I, 1090519040 );
                            }
                        }
                    }
                }
                else
                {
                    REQUEST_MODEL( l_U1367[I] );
                }
            }
            if (l_U1220[I] == 3)
            {
                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1149[I] )))
                {
                    REQUEST_CAR_RECORDING( l_U1149[I] );
                }
                if (IS_VEH_DRIVEABLE( l_U1863[I] ))
                {
                    if (CurrentPositionInRecording > l_U826[I])
                    {
                        if (8 > l_U1350)
                        {
                            if (IS_VEH_DRIVEABLE( uParam0 ))
                            {
                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                {
                                    CurrentPositionInRecording = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                }
                            }
                            fVar14 = CurrentPositionInRecording - l_U826[I];
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1149[I] ))
                            {
                                if (fVar14 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1149[I] )))
                                {
                                    GET_CAR_COORDINATES( l_U1863[I], ref uVar8.x, ref uVar8.y, ref uVar8.z );
                                    GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U1149[I], fVar14, ref uVar11 );
                                    if ((sub_29319( uVar11, 5.00000000, 1120403456 )) AND (NOT (sub_29319( uVar8, 5.00000000, 1120403456 ))))
                                    {
                                        sub_30192( I, 1090519040 );
                                    }
                                    else if (sub_32419( ref l_U1863[I], l_U1149[I], fVar14, 1, 0, 0 ))
                                    {
                                        SET_CAR_COLLISION( l_U1863[I], 1 );
                                        SET_PLAYBACK_SPEED( l_U1863[I], uParam1 );
                                        sub_32785( ref l_U1863[I] );
                                        l_U1350++;
                                        l_U1220[I]++;
                                    }
                                }
                                else
                                {
                                    PRINTSTRING( "Traffic car removed from processing (check A) car = " );
                                    PRINTINT( I );
                                    PRINTSTRING( "/n" );
                                    sub_30192( I, 1090519040 );
                                }
                            }
                        }
                        else
                        {
                            PRINTSTRING( "Traffic car removed from processing (check B) car = " );
                            PRINTINT( I );
                            PRINTSTRING( "/n" );
                            sub_30192( I, 1090519040 );
                        }
                    }
                    else if ((NOT l_U516) AND (l_U501))
                    {
                        PRINTSTRING( "Traffic car removed from processing (check C) car = " );
                        PRINTINT( I );
                        PRINTSTRING( "/n" );
                        sub_30192( I, 1090519040 );
                    }
                }
                else
                {
                    PRINTSTRING( "Traffic car removed from processing (check D) car = " );
                    PRINTINT( I );
                    PRINTSTRING( "/n" );
                    sub_30192( I, 1090519040 );
                }
            }
            if (l_U1220[I] == 4)
            {
                if (IS_VEH_DRIVEABLE( l_U1863[I] ))
                {
                    SET_CAR_COLLISION( l_U1863[I], 1 );
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1863[I] ))
                    {
                        GET_DRIVER_OF_CAR( l_U1863[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
                                {
                                    if ((NOT l_U496) AND ((NOT l_U484) AND ((NOT l_U487) AND (IS_CHAR_TOUCHING_VEHICLE( CurrentPlayerChar(), l_U1863[I] )))))
                                    {
                                        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                                        {
                                            bVar16 = false;
                                            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar7 );
                                            if (NOT (sub_33643( l_U1863[I], uVar7 )))
                                            {
                                                bVar16 = true;
                                            }
                                            if (NOT bVar16)
                                            {
                                                if (sub_33805( uVar7, l_U1863[I] ))
                                                {
                                                    bVar16 = true;
                                                }
                                            }
                                            if (bVar16)
                                            {
                                                sub_34036( l_U1863[I] );
                                                l_U1220[I]++;
                                            }
                                        }
                                    }
                                    else if (sub_33805( l_U1863[I], uParam0 ))
                                    {
                                        SET_PLAYBACK_SPEED( l_U1863[I], uParam1 );
                                    }
                                    else if ((NOT l_U496) AND (sub_34163( uParam0, l_U1863[I] )))
                                    {
                                        sub_34036( l_U1863[I] );
                                        l_U1220[I]++;
                                    }
                                    else
                                    {
                                        SET_PLAYBACK_SPEED( l_U1863[I], uParam1 );
                                    }
                                    if (l_U489)
                                    {
                                        # -NULL-0xbfc99f( l_U1863[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U1863[I], 0 );
                                    }
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1863[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1863[I] );
                        }
                    }
                    else
                    {
                        l_U1220[I]++;
                    }
                }
                else
                {
                    l_U1220[I]++;
                }
            }
            if (l_U1220[I] == 5)
            {
                if (IS_VEH_DRIVEABLE( l_U1863[I] ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1863[I] )))
                    {
                        l_U1220[I]++;
                    }
                    else
                    {
                        GET_DRIVER_OF_CAR( l_U1863[I], ref uVar6 );
                        if (DOES_CHAR_EXIST( uVar6 ))
                        {
                            if (NOT (IS_CHAR_INJURED( uVar6 )))
                            {
                                SET_PLAYBACK_SPEED( l_U1863[I], uParam1 );
                                if (l_U489)
                                {
                                    # -NULL-0xbfc99f( l_U1863[I], 1 );
                                }
                                else
                                {
                                    # -NULL-0xbfc99f( l_U1863[I], 0 );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1863[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1863[I] );
                        }
                        if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1149[I] ))
                        {
                            if (CurrentPositionInRecording > (l_U826[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1149[I] ))))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1863[I] );
                            }
                        }
                        else
                        {
                            STOP_PLAYBACK_RECORDED_CAR( l_U1863[I] );
                        }
                    }
                }
                else
                {
                    l_U1220[I]++;
                }
            }
            if (l_U1220[I] == 6)
            {
                if (NOT (IS_CAR_DEAD( l_U1863[I] )))
                {
                    GET_CAR_SPEED( l_U1863[I], ref uVar15 );
                }
                sub_35276( ref l_U1863[I] );
                l_U1350--;
                sub_30192( I, uVar15 );
            }
            l_U1361++;
        }
    }
    else
    {
        sub_35435();
    }
    return;
}

void sub_30066(unknown uParam0)
{
    unknown Result;

    REQUEST_CAR_RECORDING( uParam0 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( uParam0 )))
    {
        WAIT( 0 );
    }
    Result = GET_TOTAL_DURATION_OF_CAR_RECORDING( uParam0 );
    REMOVE_CAR_RECORDING( uParam0 );
    return Result;
}

void sub_30192(int iParam0, float fParam1)
{
    int I;
    unknown uVar5;

    if (NOT (l_U1367[iParam0] == 0))
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1367[iParam0] );
    }
    if (DOES_VEHICLE_EXIST( l_U1863[iParam0] ))
    {
        if (IS_VEH_DRIVEABLE( l_U1863[iParam0] ))
        {
            GET_DRIVER_OF_CAR( l_U1863[iParam0], ref uVar5 );
            if (DOES_CHAR_EXIST( uVar5 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar5 )))
                {
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 0 );
                }
            }
        }
    }
    if (IS_VEH_DRIVEABLE( l_U1863[iParam0] ))
    {
        sub_30362( l_U1863[iParam0] );
        SET_CAR_COLLISION( l_U1863[iParam0], 1 );
        FREEZE_CAR_POSITION( l_U1863[iParam0], 0 );
    }
    if (NOT l_U485)
    {
        if (DOES_CHAR_EXIST( uVar5 ))
        {
            if (NOT (IS_CHAR_INJURED( uVar5 )))
            {
                if (fParam1 < 8.00000000)
                {
                    fParam1 = 8.00000000;
                }
                SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fParam1 );
            }
            sub_30601( uVar5 );
        }
        sub_30635( l_U1863[iParam0] );
    }
    else if (DOES_CHAR_EXIST( uVar5 ))
    {
        DELETE_CHAR( ref uVar5 );
    }
    if (DOES_VEHICLE_EXIST( l_U1863[iParam0] ))
    {
        DELETE_CAR( ref l_U1863[iParam0] );
    }
    if (iParam0 >= l_U1360)
    {
        for ( I = 0; I < 70; I++ )
        {
            if (NOT (l_U1220[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 69)
                    {
                        l_U1360 = iParam0 + 1;
                    }
                }
                I = 70;
            }
        }
    }
    l_U1220[iParam0] = 99;
    return;
}

void sub_30362(unknown uParam0)
{
    float fVar3;
    int iVar4;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_DRIVER_OF_CAR( uParam0, ref iVar4 );
        if (DOES_CHAR_EXIST( iVar4 ))
        {
            if (NOT (IS_CHAR_INJURED( iVar4 )))
            {
                if (NOT (iVar4 == CurrentPlayerChar()))
                {
                    GET_CAR_SPEED( uParam0, ref fVar3 );
                    if (fVar3 < 8.00000000)
                    {
                        fVar3 = 8.00000000;
                    }
                    TASK_CAR_MISSION( iVar4, uParam0, 0, 1, fVar3, 0, 5, 5 );
                }
            }
        }
    }
    return;
}

void sub_30601(unknown uParam0)
{
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_30635(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

int sub_30920()
{
    return 2046537925;
}

int sub_30948()
{
    return -183203150;
}

int sub_31063()
{
    return -2139064254;
}

int sub_31306(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U517[I] ))
        {
            if (LOCATE_CAR_3D( l_U517[I], uParam0.x, uParam0.y, uParam0.z, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_31830(unknown uParam0)
{
    unknown uVar3;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (IS_CAR_DEAD( uParam0 )))
        {
            GET_CAR_MODEL( uParam0, ref uVar3 );
            if ((IS_THIS_MODEL_A_BIKE( uVar3 )) || (IS_THIS_MODEL_A_CAR( uVar3 )))
            {
                return SET_CAR_ON_GROUND_PROPERLY( uParam0 );
            }
        }
    }
    return 0;
}

int sub_32419(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5)
{
    unknown uVar8;

    if ((iParam1 < 3000) AND (iParam1 > 0))
    {
        if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( iParam1 )))
        {
            REQUEST_CAR_RECORDING( iParam1 );
        }
        else if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) )))
            {
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                    return 1;
                }
            }
            else if ((GET_CURRENT_PLAYBACK_NUMBER_FOR_CAR( (uParam0^) )) == iParam1)
            {
                uVar8 = FIND_TIME_POSITION_IN_RECORDING( (uParam0^) );
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 - uVar8 );
                if (NOT bParam3)
                {
                    STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                    REQUEST_CAR_RECORDING( iParam1 );
                }
                return 1;
            }
            else
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FREEZE_CAR_POSITION( (uParam0^), 0 );
                if (bParam4)
                {
                    START_PLAYBACK_RECORDED_CAR_USING_AI( (uParam0^), iParam1 );
                }
                else
                {
                    START_PLAYBACK_RECORDED_CAR( (uParam0^), iParam1 );
                }
                SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( (uParam0^), uParam2 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_32785(unknown uParam0)
{
    int iVar3;

    if (l_U497)
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            iVar3 = sub_32819();
            if (NOT (iVar3 == -1))
            {
                l_U517[iVar3] = (uParam0^);
                if (IS_VEH_DRIVEABLE( l_U517[iVar3] ))
                {
                    ADD_BLIP_FOR_CAR( l_U517[iVar3], ref l_U526[iVar3] );
                }
            }
        }
    }
    return;
}

int sub_32819()
{
    int Result;

    for ( Result = 0; Result < 8; Result++ )
    {
        if (NOT (DOES_VEHICLE_EXIST( l_U517[Result] )))
        {
            return Result;
        }
    }
    return -1;
}

int sub_33643(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar4, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar7, 0 );
    }
    else
    {
        return 0;
    }
    uVar4.z = 0.00000000;
    uVar7.z = 0.00000000;
    fVar10 = sub_24098( ref uVar4, ref uVar7 );
    if (fVar10 < 0.00000000)
    {
        return 0;
    }
    return 1;
}

int sub_33805(unknown uParam0, unknown uParam1)
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
    uVar13.z = 0.00000000;
    uVar16.z = 0.00000000;
    fVar19 = sub_24098( ref uVar13, ref uVar16 );
    if (fVar19 < 0.00000000)
    {
        return 1;
    }
    return 0;
}

void sub_34036(unknown uParam0)
{
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        sub_30362( uParam0 );
        CHANGE_PLAYBACK_TO_USE_AI( uParam0 );
    }
    return;
}

int sub_34163(unknown uParam0, unknown uParam1)
{
    float fVar4;
    float fVar5;

    fVar4 = sub_34176( uParam0, uParam1 );
    fVar5 = sub_34400( uParam0, uParam1 );
    if (fVar4 > fVar5)
    {
        return 1;
    }
    return 0;
}

float sub_34176(unknown uParam0, unknown uParam1)
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
        GET_CAR_FORWARD_X( uParam0, ref uVar4.x );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4.y );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7.x, uVar7.y, uVar4.x, uVar4.y, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7.z = 0.00000000;
    return (VMAG( uVar7 )) * (SIN( fVar16 ));
}

float sub_34400(unknown uParam0, unknown uParam1)
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
        GET_CAR_FORWARD_X( uParam0, ref uVar4.x );
        GET_CAR_FORWARD_Y( uParam0, ref uVar4.y );
        GET_CAR_COORDINATES( uParam0, ref vVar10.x, ref vVar10.y, ref vVar10.z );
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_COORDINATES( uParam1, ref vVar13.x, ref vVar13.y, ref vVar13.z );
    }
    uVar7 = {vVar13 - vVar10};
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar7.x, uVar7.y, uVar4.x, uVar4.y, ref fVar16 );
    fVar16 += -90.00000000;
    if (fVar16 < 0.00000000)
    {
        fVar16 *= -1.00000000;
    }
    uVar7.z = 0.00000000;
    return (VMAG( uVar7 )) * (COS( fVar16 ));
}

void sub_35276(unknown uParam0)
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (l_U517[I] == (uParam0^))
        {
            l_U517[I] = nil;
            if (DOES_BLIP_EXIST( l_U526[I] ))
            {
                REMOVE_BLIP( l_U526[I] );
            }
            return;
        }
    }
    return;
}

void sub_35435()
{
    int I;

    for ( I = 0; I < 70; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1863[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1863[I] )))
            {
                SET_CAR_COLLISION( l_U1863[I], 1 );
            }
            if (IS_VEH_DRIVEABLE( l_U1863[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1863[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1863[I] );
                }
            }
            sub_30362( l_U1863[I] );
            sub_30635( l_U1863[I] );
        }
        l_U1220[I] = 0;
    }
    for ( I = 0; I < 70; I++ )
    {
        if (NOT (l_U1367[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1367[I] );
        }
    }
    l_U1360 = 0;
    l_U1350 = 0;
    return;
}

void sub_35712(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U1360 - 5;
    iVar5 = iVar4 + 15;
    if (l_U2006 > 4000.00000000)
    {
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar6 );
            }
            for ( I = 0; I < 70; I++ )
            {
                if (I < iVar4)
                {
                    I = iVar4;
                }
                if (DOES_VEHICLE_EXIST( l_U1863[I] ))
                {
                    if (IS_VEH_DRIVEABLE( l_U1863[I] ))
                    {
                        if ((sub_35881( l_U1863[I], uVar6 )) || (sub_35881( l_U1863[I], (uParam0^) )))
                        {
                            SOUND_CAR_HORN( l_U1863[I], 3000 );
                            l_U2006 = 0.00000000;
                        }
                    }
                }
                if (I >= iVar5)
                {
                    I = 70;
                }
            }
        }
    }
    return;
}

int sub_35881(unknown uParam0, unknown uParam1)
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

    if ((DOES_VEHICLE_EXIST( uParam1 )) AND (DOES_VEHICLE_EXIST( uParam0 )))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (NOT (sub_33643( uParam0, uParam1 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 25.00000000, 0.00000000, ref uVar4.x, ref uVar4.y, ref uVar4.z );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 20.00000000, 0.00000000, ref uVar7.x, ref uVar7.y, ref uVar7.z );
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uParam0, 0.00000000, 15.00000000, 0.00000000, ref uVar10.x, ref uVar10.y, ref uVar10.z );
                    if ((LOCATE_CAR_3D( uParam1, uVar4.x, uVar4.y, uVar4.z, 5.00000000, 5.00000000, 5.00000000, 0 )) || ((LOCATE_CAR_3D( uParam1, uVar4.x, uVar4.y, uVar4.z, 5.00000000, 5.00000000, 5.00000000, 0 )) || (LOCATE_CAR_3D( uParam1, uVar4.x, uVar4.y, uVar4.z, 5.00000000, 5.00000000, 5.00000000, 0 ))))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_36276(unknown uParam0)
{
    int I;
    int iVar4;
    int iVar5;
    unknown uVar6;

    iVar4 = l_U1360 - 5;
    iVar5 = iVar4 + 15;
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        switch (l_U2004)
        {
            case 0:
            if (l_U2007 > 3000.00000000)
            {
                if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar6 );
                }
                for ( I = 0; I < 70; I++ )
                {
                    if (I < iVar4)
                    {
                        I = iVar4;
                    }
                    if (DOES_VEHICLE_EXIST( l_U1863[I] ))
                    {
                        if (IS_VEH_DRIVEABLE( l_U1863[I] ))
                        {
                            if ((sub_35881( l_U1863[I], uVar6 )) || (sub_35881( l_U1863[I], (uParam0^) )))
                            {
                                l_U2003 = l_U1863[I];
                                l_U2007 = 0.00000000;
                                I = 70;
                                l_U2004++;
                            }
                        }
                    }
                    if (I >= iVar5)
                    {
                        I = 70;
                    }
                }
            }
            break;
            case 1:
            if (IS_VEH_DRIVEABLE( l_U2003 ))
            {
                if (l_U2007 < 1000.00000000)
                {
                    if (l_U2008 > 100.00000000)
                    {
                        if (NOT l_U2005)
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U2003, 2.00000000 );
                            l_U2005 = 1;
                        }
                        else
                        {
                            SET_CAR_LIGHT_MULTIPLIER( l_U2003, 1.00000000 );
                            l_U2005 = 0;
                        }
                        l_U2008 = 0.00000000;
                    }
                }
                else
                {
                    SET_CAR_LIGHT_MULTIPLIER( l_U2003, 1.00000000 );
                    l_U2004 = 0;
                    l_U2007 = 0.00000000;
                    l_U2005 = 0;
                }
            }
            else
            {
                l_U2004 = 0;
                l_U2007 = 0.00000000;
                l_U2005 = 0;
            }
            break;
        }
    }
    return;
}

void sub_36789(unknown uParam0)
{
    int I;
    int iVar4;

    l_U1363 = 0;
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 40; I++ )
        {
            if (I < l_U1362)
            {
                I = l_U1362;
            }
            if (l_U1309[I] == 0)
            {
                if (NOT (l_U1438[I] == 0))
                {
                    if (LOCATE_CAR_2D( uParam0, l_U1699[I].x, l_U1699[I].y, l_U1126, l_U1126, 0 ))
                    {
                        l_U1364++;
                        l_U1309[I]++;
                    }
                }
                else
                {
                    sub_36971( I );
                }
            }
            if (l_U1309[I] == 1)
            {
                if (6 > l_U1353)
                {
                    if (HAS_MODEL_LOADED( l_U1438[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U1943[I] )))
                        {
                            if ((l_U507) || ((l_U481) || (NOT (sub_29319( l_U1699[I], 5.00000000, 1120403456 )))))
                            {
                                if (l_U500)
                                {
                                    sub_29289( l_U1699[I], l_U1134 );
                                }
                                CREATE_CAR( l_U1438[I], l_U1699[I].x, l_U1699[I].y, l_U1699[I].z, ref l_U1943[I], 1 );
                                SET_VEHICLE_QUATERNION( l_U1943[I], l_U955[I], l_U996[I], l_U1037[I], l_U1078[I] );
                                MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1438[I] );
                                if (IS_CAR_MODEL( l_U1943[I], sub_30920() ))
                                {
                                    SWITCH_CAR_SIREN( l_U1943[I], 1 );
                                }
                                if (IS_CAR_MODEL( l_U1943[I], sub_37414() ))
                                {
                                    CHANGE_CAR_COLOUR( l_U1943[I], 0, 0 );
                                }
                                GET_INTERIOR_FROM_CAR( l_U1943[I], ref iVar4 );
                                if (NOT (iVar4 == nil))
                                {
                                    # -NULL-0xbfc5b5( l_U1943[I] );
                                }
                                l_U1364--;
                                l_U1353++;
                                l_U1309[I]++;
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U1438[I] );
                    }
                }
            }
            if (l_U1309[I] == 2)
            {
                if (NOT (sub_33805( l_U1943[I], uParam0 )))
                {
                    if (NOT l_U485)
                    {
                        sub_30635( l_U1943[I] );
                    }
                    else
                    {
                        DELETE_CAR( ref l_U1943[I] );
                    }
                    l_U1353--;
                    sub_36971( I );
                }
            }
            l_U1363++;
            if (l_U1363 >= 15)
            {
                return;
            }
        }
    }
    else
    {
        sub_37720();
    }
    return;
}

void sub_36971(int iParam0)
{
    int I;

    if (iParam0 >= l_U1362)
    {
        for ( I = 0; I < 40; I++ )
        {
            if (NOT (l_U1309[I] == 99))
            {
                if (iParam0 == I)
                {
                    if (iParam0 < 39)
                    {
                        l_U1362 = iParam0 + 1;
                    }
                }
                I = 40;
            }
        }
    }
    l_U1309[iParam0] = 99;
    return;
}

int sub_37414()
{
    return 1264341792;
}

void sub_37720()
{
    int I;

    for ( I = 0; I < 40; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1943[I] ))
        {
            if (NOT (IS_CAR_DEAD( l_U1943[I] )))
            {
                SET_CAR_COLLISION( l_U1943[I], 1 );
            }
            sub_30635( l_U1943[I] );
        }
    }
    for ( I = 0; I < 40; I++ )
    {
        if (NOT (l_U1438[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1438[I] );
        }
    }
    l_U1362 = 0;
    l_U1353 = 0;
    return;
}

void sub_37941(unknown uParam0, unknown uParam1)
{
    int I;
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
    boolean bVar15;
    int iVar16;
    int iVar17;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        for ( I = 0; I < 8; I++ )
        {
            if ((NOT (l_U1479[I] == 0)) AND ((l_U1291[I] < 3000) AND (l_U1291[I] > 0)))
            {
                if (l_U1300[I] == 0)
                {
                    if (NOT l_U481)
                    {
                        if (CurrentPositionInRecording > (l_U937[I] - (7000.00000000 * uParam1)))
                        {
                            l_U1300[I]++;
                            l_U1365++;
                        }
                    }
                    else
                    {
                        fVar13 = CurrentPositionInRecording - l_U937[I];
                        fVar13 *= l_U946[I];
                        if (fVar13 >= 0.00000000)
                        {
                            if (fVar13 < (sub_30066( l_U1291[I] )))
                            {
                                l_U1300[I]++;
                                l_U1365++;
                            }
                            else
                            {
                                l_U1300[I] = 99;
                            }
                        }
                    }
                }
                if (l_U1300[I] == 1)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1291[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U1291[I] );
                    }
                    else if (l_U1479[I] == sub_30920())
                    {
                        if (HAS_MODEL_LOADED( sub_30948() ))
                        {
                            l_U1300[I]++;
                        }
                        else
                        {
                            REQUEST_MODEL( sub_30948() );
                        }
                    }
                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                    {
                        l_U1300[I]++;
                    }
                    else if (HAS_MODEL_LOADED( sub_31063() ))
                    {
                        l_U1300[I]++;
                    }
                    else
                    {
                        REQUEST_MODEL( sub_31063() );
                    };;;;
                }
                if (l_U1300[I] == 2)
                {
                    if (HAS_MODEL_LOADED( l_U1479[I] ))
                    {
                        if (NOT (DOES_VEHICLE_EXIST( l_U1984[I] )))
                        {
                            bVar15 = false;
                            if (l_U1479[I] == sub_30920())
                            {
                                if (HAS_MODEL_LOADED( sub_30948() ))
                                {
                                    bVar15 = true;
                                }
                                else
                                {
                                    REQUEST_MODEL( sub_30948() );
                                }
                            }
                            else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                            {
                                bVar15 = true;
                            }
                            else if (HAS_MODEL_LOADED( sub_31063() ))
                            {
                                bVar15 = true;
                            }
                            else
                            {
                                REQUEST_MODEL( sub_31063() );
                            };;;
                            if (bVar15)
                            {
                                if ((l_U507) || (NOT (sub_29319( l_U1820[I], 5.00000000, 1120403456 ))))
                                {
                                    CREATE_CAR( l_U1479[I], l_U1820[I].x, l_U1820[I].y, l_U1820[I].z, ref l_U1984[I], 1 );
                                    if (l_U1479[I] == sub_30920())
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U1984[I], 6, sub_30948(), ref uVar5 );
                                        SET_CHAR_RELATIONSHIP_GROUP( uVar5, 23 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_30948() );
                                    }
                                    else if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                                    {
                                        CREATE_RANDOM_CHAR_AS_DRIVER( l_U1984[I], ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                    }
                                    else
                                    {
                                        CREATE_CHAR_INSIDE_CAR( l_U1984[I], 26, sub_31063(), ref uVar5 );
                                        SET_CHAR_RANDOM_COMPONENT_VARIATION( uVar5 );
                                        MARK_MODEL_AS_NO_LONGER_NEEDED( sub_31063() );
                                    }
                                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( uVar5, 1 );
                                    SET_CHAR_ONLY_DAMAGED_BY_PLAYER( uVar5, 1 );
                                    SET_CHAR_SUFFERS_CRITICAL_HITS( uVar5, 0 );
                                    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( uVar5, 0 );
                                    sub_30601( uVar5 );
                                    SET_VEHICLE_QUATERNION( l_U1984[I], l_U901[I], l_U910[I], l_U919[I], l_U928[I] );
                                    FREEZE_CAR_POSITION( l_U1984[I], 1 );
                                    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1479[I] );
                                    sub_31830( l_U1984[I] );
                                    GET_INTERIOR_FROM_CAR( l_U1984[I], ref iVar16 );
                                    if (NOT (iVar16 == nil))
                                    {
                                        # -NULL-0xbfc5b5( l_U1984[I] );
                                    }
                                    l_U1300[I]++;
                                    l_U1365--;
                                }
                            }
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( l_U1479[I] );
                    }
                }
                if (l_U1300[I] == 3)
                {
                    if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U1291[I] )))
                    {
                        REQUEST_CAR_RECORDING( l_U1291[I] );
                    }
                    if (IS_VEH_DRIVEABLE( l_U1984[I] ))
                    {
                        if (CurrentPositionInRecording > l_U937[I])
                        {
                            if (4 > l_U1352)
                            {
                                if (IS_VEH_DRIVEABLE( uParam0 ))
                                {
                                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( uParam0 ))
                                    {
                                        CurrentPositionInRecording = FIND_TIME_POSITION_IN_RECORDING( uParam0 );
                                    }
                                }
                                fVar13 = CurrentPositionInRecording - l_U937[I];
                                fVar13 *= l_U946[I];
                                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1291[I] ))
                                {
                                    if (fVar13 < (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1291[I] )))
                                    {
                                        GET_CAR_COORDINATES( l_U1984[I], ref uVar7.x, ref uVar7.y, ref uVar7.z );
                                        GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U1291[I], fVar13, ref uVar10 );
                                        if ((NOT l_U507) AND ((sub_29319( uVar10, 5.00000000, 1120403456 )) AND (NOT (sub_29319( uVar7, 5.00000000, 1120403456 )))))
                                        {
                                            l_U1352++;
                                            l_U1300[I]++;
                                        }
                                        else if (sub_32419( ref l_U1984[I], l_U1291[I], fVar13, 1, 0, 0 ))
                                        {
                                            SET_PLAYBACK_SPEED( l_U1984[I], uParam1 * l_U946[I] );
                                            if (IS_VEH_DRIVEABLE( l_U1984[I] ))
                                            {
                                                if (l_U1479[I] == sub_30920())
                                                {
                                                    SWITCH_CAR_SIREN( l_U1984[I], 1 );
                                                }
                                            }
                                            if (l_U498)
                                            {
                                                # -NULL-0xbfc99f( l_U1984[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U1984[I], 0 );
                                            }
                                            l_U1352++;
                                            l_U1300[I]++;
                                        }
                                    }
                                    else
                                    {
                                        l_U1352++;
                                        l_U1300[I]++;
                                    }
                                }
                            }
                            else
                            {
                                SCRIPT_ASSERT( "Too many set peice cars playing back at once" );
                                l_U1352++;
                                l_U1300[I]++;
                            }
                        }
                    }
                    else
                    {
                        l_U1352++;
                        l_U1300[I]++;
                    }
                }
                if (l_U1300[I] == 4)
                {
                    if (IS_VEH_DRIVEABLE( l_U1984[I] ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1984[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U1984[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
                                    {
                                        if ((NOT l_U484) AND ((NOT l_U487) AND (IS_CHAR_TOUCHING_VEHICLE( CurrentPlayerChar(), l_U1984[I] ))))
                                        {
                                            if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                                            {
                                                bVar15 = false;
                                                STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar6 );
                                                if (NOT (sub_40097( l_U1984[I], uVar6, 45.00000000 )))
                                                {
                                                    bVar15 = true;
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_33805( uVar6, l_U1984[I] ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    GET_CAR_SPEED( uVar6, ref fVar14 );
                                                    if (fVar14 < 1.00000000)
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (NOT bVar15)
                                                {
                                                    if (sub_40382( uVar6, l_U1984[I], 15.00000000 ))
                                                    {
                                                        bVar15 = true;
                                                    }
                                                }
                                                if (bVar15)
                                                {
                                                    sub_34036( l_U1984[I] );
                                                    l_U1300[I]++;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            SET_PLAYBACK_SPEED( l_U1984[I], uParam1 * l_U946[I] );
                                            if (l_U498)
                                            {
                                                # -NULL-0xbfc99f( l_U1984[I], 1 );
                                            }
                                            else
                                            {
                                                # -NULL-0xbfc99f( l_U1984[I], 0 );
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1984[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1984[I] );
                            }
                        }
                        else
                        {
                            l_U1300[I]++;
                        }
                    }
                    else
                    {
                        l_U1300[I]++;
                    }
                }
                if (l_U1300[I] == 5)
                {
                    if (IS_VEH_DRIVEABLE( l_U1984[I] ))
                    {
                        if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1984[I] )))
                        {
                            l_U1300[I]++;
                        }
                        else
                        {
                            GET_DRIVER_OF_CAR( l_U1984[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    SET_PLAYBACK_SPEED( l_U1984[I], uParam1 * l_U946[I] );
                                    if (l_U498)
                                    {
                                        # -NULL-0xbfc99f( l_U1984[I], 1 );
                                    }
                                    else
                                    {
                                        # -NULL-0xbfc99f( l_U1984[I], 0 );
                                    }
                                }
                                else
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1984[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1984[I] );
                            }
                            if (HAS_CAR_RECORDING_BEEN_LOADED( l_U1291[I] ))
                            {
                                if (CurrentPositionInRecording > (l_U937[I] + (GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U1291[I] ))))
                                {
                                    STOP_PLAYBACK_RECORDED_CAR( l_U1984[I] );
                                }
                            }
                            else
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U1984[I] );
                            }
                        }
                    }
                    else
                    {
                        l_U1300[I]++;
                    }
                }
                if (l_U1300[I] == 6)
                {
                    if (NOT (l_U1984[I] == l_U2002))
                    {
                        if (IS_VEH_DRIVEABLE( l_U1984[I] ))
                        {
                            GET_DRIVER_OF_CAR( l_U1984[I], ref uVar5 );
                            if (DOES_CHAR_EXIST( uVar5 ))
                            {
                                if (NOT (IS_CHAR_INJURED( uVar5 )))
                                {
                                    GET_SCRIPT_TASK_STATUS( uVar5, 29, ref iVar17 );
                                    if (iVar17 == 7)
                                    {
                                        GET_CAR_SPEED( l_U1984[I], ref fVar14 );
                                        if (fVar14 < 8.00000000)
                                        {
                                            fVar14 = 8.00000000;
                                        }
                                        SET_DRIVE_TASK_CRUISE_SPEED( uVar5, fVar14 );
                                    }
                                }
                            }
                        }
                        if (NOT l_U485)
                        {
                            sub_30635( l_U1984[I] );
                        }
                        else if (DOES_VEHICLE_EXIST( l_U1984[I] ))
                        {
                            DELETE_CAR( ref l_U1984[I] );
                        }
                    }
                    l_U1352--;
                    l_U1300[I] = 99;
                }
            }
        }
    }
    else
    {
        sub_41361();
    }
    return;
}

int sub_40097(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        GET_CAR_SPEED_VECTOR( uParam0, ref uVar5, 0 );
    }
    else
    {
        return 0;
    }
    if (IS_VEH_DRIVEABLE( uParam1 ))
    {
        GET_CAR_SPEED_VECTOR( uParam1, ref uVar8, 0 );
    }
    else
    {
        return 0;
    }
    uVar5.z = 0.00000000;
    uVar8.z = 0.00000000;
    fVar11 = sub_24098( ref uVar5, ref uVar8 );
    if (fVar11 < 0.00000000)
    {
        return 0;
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( uVar5.x, uVar5.y, uVar8.x, uVar8.y, ref fVar11 );
    if (NOT (fVar11 < fParam2))
    {
        return 0;
    }
    return 1;
}

int sub_40382(unknown uParam0, unknown uParam1, float fParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CAR_DEAD( uParam0 )))
    {
        GET_CAR_SPEED( uParam0, ref uVar5 );
    }
    if (NOT (IS_CAR_DEAD( uParam1 )))
    {
        GET_CAR_SPEED( uParam1, ref uVar6 );
    }
    if (((uVar5 - uVar6) < (fParam2 * -1.00000000)) || ((uVar5 - uVar6) > fParam2))
    {
        return 1;
    }
    return 0;
}

void sub_41361()
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1984[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1984[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1984[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1984[I] );
                }
            }
            sub_30362( l_U1984[I] );
            sub_30635( l_U1984[I] );
        }
        l_U1300[I] = 0;
    }
    for ( I = 0; I < 8; I++ )
    {
        if (NOT (l_U1479[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1479[I] );
        }
    }
    return;
}

int sub_41873(unknown uParam0, unknown uParam1)
{
    if (NOT l_U510)
    {
        l_U481 = 1;
        sub_41899();
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
            {
                STOP_PLAYBACK_RECORDED_CAR( (uParam0^) );
                FIX_CAR( (uParam0^) );
            }
            if (NOT (CurrentPlaybackNumberForCar == -1))
            {
                while (NOT (sub_32419( uParam0, CurrentPlaybackNumberForCar, uParam1, 1, 0, 0 )))
                {
                    WAIT( 0 );
                }
                if (NOT l_U492)
                {
                    l_U484 = 1;
                    l_U1132 = 0.00000000;
                    l_U1360 = 0;
                    l_U1362 = 0;
                    l_U1350 = 0;
                    l_U1352 = 0;
                    l_U1353 = 0;
                    l_U1364 = 0;
                    l_U1365 = 0;
                    l_U1366 = 0;
                }
            }
        }
        l_U510 = 1;
    }
    else if (IS_VEH_DRIVEABLE( (uParam0^) ))
    {
        if (IS_PLAYBACK_GOING_ON_FOR_CAR( (uParam0^) ))
        {
            SET_PLAYBACK_SPEED( (uParam0^), (1.00000000 * l_U1130) * l_U1132 );
            sub_32419( uParam0, CurrentPlaybackNumberForCar, uParam1, 1, 0, 0 );
        }
    }
    CurrentPositionInRecording = uParam1;
    sub_37941( (uParam0^), (1.00000000 * l_U1130) * l_U1132 );
    sub_29792( (uParam0^), (1.00000000 * l_U1130) * l_U1132 );
    if ((l_U1366 == 0) AND ((l_U1365 == 0) AND (l_U1364 == 0)))
    {
        l_U484 = 0;
        l_U481 = 0;
        l_U510 = 0;
        return 1;
    }
    return 0;
}

void sub_41899()
{
    sub_41908();
    sub_42124();
    sub_42272();
    return;
}

void sub_41908()
{
    int I;

    for ( I = 0; I < 70; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1863[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1863[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1863[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1863[I] );
                }
            }
            DELETE_CAR( ref l_U1863[I] );
        }
        l_U1220[I] = 0;
    }
    for ( I = 0; I < 70; I++ )
    {
        if (NOT (l_U1367[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1367[I] );
        }
    }
    l_U1360 = 0;
    l_U1350 = 0;
    return;
}

void sub_42124()
{
    int I;

    for ( I = 0; I < 40; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1943[I] ))
        {
            DELETE_CAR( ref l_U1943[I] );
        }
    }
    for ( I = 0; I < 40; I++ )
    {
        if (NOT (l_U1438[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1438[I] );
        }
    }
    l_U1362 = 0;
    l_U1353 = 0;
    return;
}

void sub_42272()
{
    int I;

    for ( I = 0; I < 8; I++ )
    {
        if (DOES_VEHICLE_EXIST( l_U1984[I] ))
        {
            if (IS_VEH_DRIVEABLE( l_U1984[I] ))
            {
                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U1984[I] ))
                {
                    STOP_PLAYBACK_RECORDED_CAR( l_U1984[I] );
                }
            }
            DELETE_CAR( ref l_U1984[I] );
        }
        l_U1300[I] = 0;
    }
    for ( I = 0; I < 8; I++ )
    {
        if (NOT (l_U1479[I] == 0))
        {
            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U1479[I] );
        }
    }
    return;
}

void sub_42893(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U2169)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U2167))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U2168 + 500))
        {
            l_U2167 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_43061()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U2169)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U2168 );
            l_U2167 = 1;
            l_U2166 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U2167) AND (NOT l_U2166))
        {
            if (l_U2169)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U2166 = 1;
        }
    }
    else if (l_U2166)
    {
        if (l_U2169)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U2166 = 0;
    };;;
    return;
}

int sub_43061()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_43688(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_43732( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_43732(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
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
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_44274()
{
    sub_44288( ref l_U2170, 0 );
    SET_PLAYER_MOOD_PISSED_OFF( CurrentPlayerId(), 150 );
    SAY_AMBIENT_SPEECH( PlayerChar, "MISSION_FAIL_RAGE", 0, 0, 0 );
    sub_44462();
    l_U2148 = 0;
    sub_3021();
    return;
}

void sub_44288(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->y == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_44462()
{
    sub_44471();
    return;
}

void sub_44471()
{
    int iVar2;

    iVar2 = 1;
    sub_44485( iVar2 );
    sub_2110( iVar2 );
    return;
}

void sub_44485(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( CurrentPlayerId(), 150 );
    CLEAR_HELP();
    sub_934( uParam0 );
    return;
}

void sub_44664()
{
    PLAY_SOUND_FROM_POSITION( -1, "V4_ROOFTOP_CHASE_CONSTRUCTION", 1170.00000000, -368.00000000, 26.00000000 );
    PLAY_SOUND_FROM_POSITION( -1, "V4_ROOFTOP_CHASE_CEMENT_MIXER", 1183.00000000, -379.00000000, 22.00000000 );
    PLAY_SOUND_FROM_POSITION( -1, "V4_ROOFTOP_CHASE_COMPRESSOR", 1165.00000000, -380.00000000, 22.00000000 );
    return;
}

void sub_45143(boolean bParam0)
{
    l_U513 = 0;
    sub_27890();
    l_U512 = 1;
    sub_28378();
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        FORCE_AIR_DRAG_MULT_FOR_PLAYERS_CAR( CurrentPlayerId(), 1.00000000 );
        DONT_DISPATCH_COPS_FOR_PLAYER( CurrentPlayerId(), 0 );
        SET_CREATE_RANDOM_COPS( 1 );
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_31063() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_37414() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_30920() );
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_30948() );
    if ((NOT bParam0) AND (NOT IS_SCREEN_FADED_OUT()))
    {
        sub_35435();
        sub_37720();
        sub_41361();
    }
    else
    {
        sub_41899();
        sub_9005();
    }
    return;
}

void sub_45509()
{
    MissionSwitch++;
    return;
}

void sub_45543()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;

    if (l_U2180[MissionSwitch] == 0)
    {
        ALLOW_EMERGENCY_SERVICES( 0 );
        if (DOES_VEHICLE_EXIST( l_U1984[1] ))
        {
            SOUND_CAR_HORN( l_U1984[1], 5000 );
        }
        if (DOES_VEHICLE_EXIST( l_U1984[2] ))
        {
            SOUND_CAR_HORN( l_U1984[2], 5000 );
        }
        if (DOES_VEHICLE_EXIST( l_U1984[0] ))
        {
            SOUND_CAR_HORN( l_U1984[0], 5000 );
        }
        if ((NOT (IS_CAR_DEAD( IvanCar ))) AND (NOT (IS_CHAR_DEAD( IvanPed ))))
        {
            if ((IS_CAR_ON_SCREEN( IvanCar )) AND (LOCATE_CHAR_ANY_MEANS_CAR_2D( PlayerChar, IvanCar, 35.00000000, 35.00000000, 0 )))
            {
                OPEN_SEQUENCE_TASK( ref uVar2 );
                TASK_LEAVE_ANY_CAR( 0 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1174.04800000, -378.45940000, 26.23970000, 3, 20000, 0.50000000 );
                TASK_TURN_CHAR_TO_FACE_CHAR( 0, PlayerChar );
                TASK_PLAY_ANIM( 0, "look_about", "missVlad4", 8.00000000, 1, 0, 0, 0, -1 );
                CLOSE_SEQUENCE_TASK( uVar2 );
                TASK_PERFORM_SEQUENCE( IvanPed, uVar2 );
                CLEAR_SEQUENCE_TASK( uVar2 );
            }
            else
            {
                WARP_CHAR_FROM_CAR_TO_COORD( IvanPed, 1174.04800000, -379.45940000, 26.23970000 );
                TASK_PLAY_ANIM( IvanPed, "look_about", "missVlad4", 8.00000000, 1, 0, 0, 0, -1 );
            }
        }
        if (NOT (IS_CAR_DEAD( IvanCar )))
        {
            SET_CAR_PROOFS( IvanCar, 0, 0, 0, 0, 0 );
            if ((sub_7917( IvanCar )) < 500)
            {
                SET_CAR_HEALTH( IvanCar, 500 );
            }
        }
        sub_17418();

        OPEN_SEQUENCE_TASK( ref l_U2492 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1173.55200000, -372.28360000, 26.27060000, 3, 8000, 0.50000000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1176.73700000, -366.86340000, 26.18130000, 3, 8000, 0.50000000 );
        CLOSE_SEQUENCE_TASK( l_U2492 );
        
        OPEN_SEQUENCE_TASK( ref l_U2493 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1176.32300000, -365.70360000, 32.91860000, 4, 5000, 0.50000000 );
        TASK_PLAY_ANIM( 0, "EXHAUSTED_INTRO", "missVlad4", 8.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM( 0, "EXHAUSTED_LOOP", "missVlad4", 8.00000000, 1, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U2493 );

        OPEN_SEQUENCE_TASK( ref l_U2494 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1165.13600000, -369.94100000, 33.09260000, 4, 5000, 0.50000000 );
        TASK_ACHIEVE_HEADING( 0, 0.00000000 );
        TASK_PLAY_ANIM( 0, "EXHAUSTED_INTRO", "missVlad4", 8.00000000, 0, 0, 0, 0, -1 );
        TASK_PLAY_ANIM( 0, "EXHAUSTED_LOOP", "missVlad4", 8.00000000, 1, 0, 0, 0, -1 );
        CLOSE_SEQUENCE_TASK( l_U2494 );

        OPEN_SEQUENCE_TASK( ref l_U2495 );
        TASK_PLAY_ANIM( 0, "EXHAUSTED_OUTRO", "missVlad4", 8.00000000, 0, 0, 0, 0, -1 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1165.75800000, -362.27010000, 39.02080000, 4, 5000, 0.50000000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1169.11800000, -374.56990000, 39.02080000, 4, 9000, 0.50000000 );
        CLOSE_SEQUENCE_TASK( l_U2495 );

        l_U2180[MissionSwitch] = 1;
    }
    if ((l_U2204 == 0) AND (LOCATE_CHAR_ANY_MEANS_2D( PlayerChar, 1175.13900000, -379.40640000, 48.00000000, 48.00000000, 0 )))
    {
        PRINT_NOW( "VLA4A_3B", 7500, 1 );
        GET_GAME_TIMER( ref l_U2242 );
        l_U2204 = 1;
    }
    GET_GAME_TIMER( ref l_U2243 );
    if ((l_U2214 == 1) AND ((IS_CHAR_ON_FOOT( PlayerChar )) AND (((sub_46763( PlayerChar )) > 0.50000000) AND ((l_U2204 == 1) AND ((NOT (sub_22883( l_U2170 ))) AND ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND ((l_U2243 - l_U2242) > 22000)))))))
    {
        sub_21901( "V4_ONFOOT", ref l_U2170, 8, 1 );
        GET_GAME_TIMER( ref l_U2242 );
    }
    if (NOT (IS_CHAR_DEAD( IvanPed )))
    {
        if ((IS_CHAR_IN_ANY_HELI( PlayerChar )) || ((IS_BULLET_IN_AREA( 1174.04800000, -379.45940000, 26.23970000, 5.00000000, 1 )) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( PlayerId, IvanPed )) || ((IS_PLAYER_FREE_AIMING_AT_CHAR( PlayerId, IvanPed )) || ((IS_PLAYER_TARGETTING_CHAR( PlayerId, IvanPed )) || (LOCATE_CHAR_ON_FOOT_2D( PlayerChar, 1175.13900000, -379.40640000, 15.00000000, 15.00000000, 0 )))))))
        {
            if (l_U2214 == 0)
            {
                if (NOT (IS_CHAR_INJURED( IvanPed )))
                {
                    PRINT_HELP_FOREVER( "VLA4H_01" );
                    SETTIMERB( 0 );
                    l_U2091[8] = 1;
                    HINT_CAM( 0.00000000, 0.00000000, 0.00000000, IvanPed, 0, 0, 3000 );
                    TASK_PERFORM_SEQUENCE( IvanPed, l_U2492 );
                    sub_21901( "V4_CHASE2", ref l_U2170, 8, 1 );
                }
                sub_45143( 0 );
                l_U2214 = 1;
            }
        }
        else if (l_U2214 == 0)
        {
            if ((IS_CHAR_PLAYING_ANIM( IvanPed, "missVlad4", "look_about" )) AND (LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1174.04800000, -379.45940000, 26.23970000, 1.50000000, 1.50000000, 1.50000000, 0 )))
            {
                sub_47305( IvanPed, PlayerChar );
            }
        }
    }
    if ((l_U2091[8] == 1) AND ((l_U2091[9] == 0) AND (TIMERB() > 4000)))
    {
        PRINT_HELP_FOREVER( "VLA4H_02" );
        SETTIMERB( 0 );
        l_U2091[9] = 1;
    }
    if ((l_U2091[13] == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1176.71700000, -366.90080000, 27.18590000, 1.00000000, 1.00000000, 1.00000000, 0 )))
    {
        PRINT_HELP_FOREVER( "VLA4H_05" );
        SETTIMERB( 0 );
        l_U2091[13] = 1;
    }
    if ((NOT (LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1175.68700000, -379.40220000, 21.52380000, 2.00000000, 2.00000000, 2.00000000, 0 ))) AND (((l_U2091[13] == 1) || (l_U2091[9] == 1)) AND ((l_U2091[10] == 0) AND (TIMERB() > 8500))))
    {
        CLEAR_HELP();
        if ((l_U2091[14] == 1) AND (l_U2091[9] == 1))
        {
            l_U2091[10] = 1;
        }
    }
    if ((NOT (sub_22883( l_U2170 ))) AND (((sub_8216( PlayerChar, IvanPed, 1 )) < 20.00000000) AND ((l_U2091[0] == 1) AND ((l_U2091[2] == 0) AND (TIMERA() > 5000)))))
    {
        sub_21901( "V4_FIND", ref l_U2170, 8, 1 );
        l_U2091[2] = 1;
    }
    if ((NOT (sub_22883( l_U2170 ))) AND (((sub_8216( PlayerChar, IvanPed, 1 )) < 20.00000000) AND ((l_U2091[0] == 1) AND ((l_U2091[3] == 0) AND (TIMERA() > 15000)))))
    {
        sub_21901( "V4_CHASE", ref l_U2170, 8, 1 );
        l_U2091[3] = 1;
    }
    if ((l_U2091[0] == 0) AND ((LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1175.76700000, -379.40220000, 24.91630000, 1.00000000, 1.00000000, 1.00000000, 0 )) || ((IS_CHAR_ON_FOOT( PlayerChar )) AND ((sub_47981( PlayerChar )) > 25.00000000))))
    {
        if (NOT (IS_CHAR_INJURED( IvanPed )))
        {
            TASK_PERFORM_SEQUENCE( IvanPed, l_U2493 );
        }
        SETTIMERA( 0 );
        l_U2091[0] = 1;
    }
    if (NOT (IS_CHAR_DEAD( IvanPed )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1173.11000000, -365.15580000, 33.02390000, 1.00000000, 10.00000000, 1.00000000, 0 ))
        {
            if (NOT (IS_CHAR_INJURED( IvanPed )))
            {
                if ((NOT (IS_CHAR_IN_ANY_HELI( PlayerChar ))) AND (NOT (IS_CHAR_ON_SCREEN( IvanPed ))))
                {
                    SET_CHAR_COORDINATES( IvanPed, 1165.25700000, -368.97960000, 34.74900000 );
                    SET_CHAR_HEADING( IvanPed, 0.00000000 );
                }
            }
        }
    }
    if ((l_U2091[4] == 0) AND ((((IS_CHAR_IN_ANY_HELI( PlayerChar )) || (IS_CHAR_ON_FOOT( PlayerChar ))) AND ((sub_47981( PlayerChar )) > 27.00000000)) || (LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1172.69400000, -375.99700000, 27.26980000, 2.50000000, 2.50000000, 1.00000000, 0 ))))
    {
        if (NOT (IS_CHAR_INJURED( IvanPed )))
        {
            TASK_PERFORM_SEQUENCE( IvanPed, l_U2494 );
        }
        l_U2091[4] = 1;
    }
    if ((l_U2091[1] == 0) AND ((l_U2091[5] == 0) AND ((IS_CHAR_IN_ANY_HELI( PlayerChar )) || (((sub_47981( PlayerChar )) > 33.50000000) || (LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1169.59100000, -366.86830000, 32.96820000, 10.50000000, 11.00000000, 1.00000000, 0 ))))))
    {
        if (NOT (IS_CHAR_INJURED( IvanPed )))
        {
            CLEAR_CHAR_TASKS( IvanPed );
            TASK_PERFORM_SEQUENCE( IvanPed, l_U2495 );
        }
        if (IS_CHAR_IN_ANY_HELI( PlayerChar ))
        {
            OPEN_SEQUENCE_TASK( ref l_U2496 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1167.12700000, -378.84950000, 40.46630000, 4, 15000, 0.50000000 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 1165.21000000, -379.25050000, 45.63030000, 4, 15000 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 1164.80300000, -390.96860000, 45.56450000, 4, 15000 );
            CLOSE_SEQUENCE_TASK( l_U2496 );
            TASK_PERFORM_SEQUENCE( IvanPed, l_U2496 );
        }
        l_U2091[5] = 1;
    }
    if (l_U2091[6] == 0)
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1163.18800000, -366.07840000, 39.02080000, 11.50000000, 5.50000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1168.76400000, -365.23640000, 39.02080000, 13.00000000, 5.50000000, 1.00000000, 0 )))
        {
            if ((l_U2091[1] == 0) AND (NOT (IS_CHAR_INJURED( IvanPed ))))
            {
                if (NOT (IS_CHAR_IN_ANY_HELI( PlayerChar )))
                {
                    SET_CHAR_COORDINATES( IvanPed, 1166.92500000, -379.04320000, 39.46630000 );
                    SET_CHAR_HEADING( IvanPed, 87.18530000 );
                }
                CLEAR_CHAR_TASKS_IMMEDIATELY( IvanPed );
                SET_CHAR_PROOFS( IvanPed, 0, 0, 0, 0, 0 );
                OPEN_SEQUENCE_TASK( ref l_U2496 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1165.21000000, -379.25050000, 45.63030000, 4, 9000, 0.50000000 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 1164.80300000, -390.96860000, 45.56450000, 4, 9000 );
                CLOSE_SEQUENCE_TASK( l_U2496 );
                TASK_PERFORM_SEQUENCE( IvanPed, l_U2496 );
                STOP_PED_SPEAKING( IvanPed, 1 );
            }
            l_U2091[6] = 1;
        }
    }
    sub_49155();
    uVar3 = {sub_49296( IvanPed )};
    if (NOT (IS_CHAR_DEAD( IvanPed )))
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1165.43000000, -367.36410000, 35.95900000, 1.00000000, 4.00000000, 4.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1176.71700000, -366.82090000, 29.89490000, 1.00000000, 1.00000000, 2.00000000, 0 )) || ((LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1172.75000000, -378.48780000, 27.24020000, 3.00000000, 3.50000000, 1.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1166.93700000, -379.03900000, 42.05800000, 1.00000000, 1.00000000, 4.50000000, 0 )))))
        {
            SET_CHAR_PROOFS( IvanPed, 1, 0, 0, 0, 0 );
            if (IS_BULLET_IN_AREA( uVar3.x, uVar3.y, uVar3.z, 1.00000000, 1 ))
            {
                iVar6 = sub_49643( IvanPed );
                iVar6 -= 3;
                if (iVar6 >= 0)
                {
                    SET_CHAR_HEALTH( IvanPed, iVar6 );
                }
            }
        }
        else
        {
            SET_CHAR_PROOFS( IvanPed, 0, 0, 0, 0, 0 );
        }
    }
    if (l_U2091[0] == 1)
    {
        if ((IS_BULLET_IN_AREA( 1164.80300000, -390.96860000, 45.56450000, 3.00000000, 1 )) || (LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1165.01000000, -390.35730000, 45.56450000, 1.50000000, 14.00000000, 5.50000000, 0 )))
        {
            if (l_U2091[1] == 0)
            {
                if (NOT (IS_CHAR_INJURED( IvanPed )))
                {
                    UNLOCK_RAGDOLL( IvanPed, 0 );
                    GET_GAME_TIMER( ref l_U2223 );
                    l_U2222 = 1;
                    STOP_PED_SPEAKING( IvanPed, 1 );
                    TASK_PERFORM_SEQUENCE( IvanPed, l_U2497 );
                    SETTIMERB( 0 );
                }
                l_U2091[1] = 1;
            }
        }
    }
    if ((sub_8216( IvanPed, PlayerChar, 1 )) > 180.00000000)
    {
        if (NOT (IS_CHAR_DEAD( IvanPed )))
        {
            if (NOT (IS_CHAR_ON_SCREEN( IvanPed )))
            {
                REMOVE_BLIP( l_U2485 );
                DELETE_CHAR( ref IvanPed );
                PRINT_NOW( "VLALOST", 7500, 1 );
                sub_43688( 1, "V4_CALLF", "V4AUD", 0 );
                sub_44274();
            }
        }
    }
    if (DOES_CHAR_EXIST( IvanPed ))
    {
        if (IS_CHAR_DEAD( IvanPed ))
        {
            if (DOES_BLIP_EXIST( l_U2485 ))
            {
                REMOVE_BLIP( l_U2485 );
            }
            sub_50156( 45 );
            sub_43688( 1, "V4_CALLK", "V4AUD", 0 );
            sub_50497();
        }
    }
    if ((l_U2091[11] == 0) AND ((NOT (IS_CHAR_DEAD( l_U2251[1] ))) AND ((NOT (IS_CHAR_DEAD( l_U2251[0] ))) AND ((sub_8216( l_U2251[0], PlayerChar, 1 )) < 5.00000000))))
    {
        TASK_LOOK_AT_CHAR( l_U2251[0], PlayerChar, 10000, 0 );
        TASK_LOOK_AT_CHAR( l_U2251[1], PlayerChar, 10000, 0 );
        OPEN_SEQUENCE_TASK( ref uVar7 );
        TASK_LOOK_AT_CHAR( 0, PlayerChar, 10000, 0 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, PlayerChar );
        CLOSE_SEQUENCE_TASK( uVar7 );
        TASK_PERFORM_SEQUENCE( l_U2251[0], uVar7 );
        SAY_AMBIENT_SPEECH( l_U2251[0], "SHOCKED", 0, 0, 0 );
        l_U2091[11] = 1;
    }
    if (NOT (IS_CHAR_INJURED( IvanPed )))
    {
        if ((LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1166.85800000, -377.36910000, 40.47110000, 1.00000000, 1.00000000, 1.00000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1165.15700000, -400.36430000, 45.56460000, 3.50000000, 3.50000000, 1.50000000, 0 )))
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
            CLEAR_CHAR_TASKS_IMMEDIATELY( PlayerChar );
            STOP_PED_SPEAKING( IvanPed, 1 );
            GET_GAME_TIMER( ref l_U2223 );
            l_U2222 = 1;
            CLEAR_CHAR_TASKS_IMMEDIATELY( IvanPed );
            SET_CHAR_COORDINATES_NO_OFFSET( IvanPed, 1165.08000000, -394.98420000, 45.56970000 );
            SET_CHAR_HEADING( IvanPed, 180.00000000 );
            TASK_PERFORM_SEQUENCE( IvanPed, l_U2497 );
            UNLOCK_RAGDOLL( IvanPed, 0 );
            SET_CHAR_PROOFS( IvanPed, 0, 0, 0, 0, 0 );
            MissionSwitch++;
        }
    }
    return;
}

void sub_46763(unknown uParam0)
{
    float Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref Result );
    }
    else
    {
        Result = 0.00000000;
    }
    return Result;
}

void sub_47305(unknown uParam0, unknown uParam1)
{
    vector vVar4;
    vector vVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    }
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        GET_CHAR_COORDINATES( uParam1, ref vVar7.x, ref vVar7.y, ref vVar7.z );
    }
    uVar10 = {vVar7 - vVar4};
    GET_HEADING_FROM_VECTOR_2D( uVar10.x, uVar10.y, ref uVar13 );
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_PED_RAGDOLL( uParam0 )))
        {
            SET_CHAR_HEADING( uParam0, uVar13 );
        }
    }
    return;
}

void sub_47981(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar3, ref uVar4, ref Result );
    }
    else if (DOES_CHAR_EXIST( uParam0 ))
    {
        N_1363505769( uParam0, ref uVar3, ref uVar4, ref Result );
    }
    return Result;
}

void sub_49155()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_DEAD( IvanPed )))
    {
        GET_CHAR_COORDINATES( PlayerChar, ref uVar3.x, ref uVar3.y, ref uVar3.z );
        GET_CHAR_COORDINATES( IvanPed, ref uVar6.x, ref uVar6.y, ref uVar6.z );
        fVar2 = VDIST( uVar3, uVar6 );
        if (fVar2 > 15.00000000)
        {
            MODIFY_CHAR_MOVE_STATE( IvanPed, 3 );
        }
        else
        {
            MODIFY_CHAR_MOVE_STATE( IvanPed, 4 );
        }
    }
    return;
}

void sub_49296(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref Result.x, ref Result.y, ref Result.z );
    }
    else if (DOES_CHAR_EXIST( uParam0 ))
    {
        N_1363505769( uParam0, ref Result.x, ref Result.y, ref Result.z );
    }
    return Result;
}

void sub_49643(unknown uParam0)
{
    int Result;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_HEALTH( uParam0, ref Result );
    }
    else
    {
        Result = 0;
    }
    return Result;
}

void sub_50156(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_50167( uParam0 );
    if (NOT g_U34048[uVar3]._fU0)
    {
        return;
    }
    g_U34048[uVar3]._fU0 = 0;
    sub_50352();
    return;
}

int sub_50167(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_50178( uParam0 )))
    {
        sub_1975( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_50178(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 38))
    {
        return 0;
    }
    iVar4 = 52;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

void sub_50352()
{
    g_U34175._fU16._fU0--;
    sub_50385();
    return;
}

void sub_50385()
{
    if (g_U0)
    {
        return;
    }
    if (g_U34175._fU16._fU4 < g_U34175._fU16._fU0)
    {
        return;
    }
    AWARD_ACHIEVEMENT( 36 );
    return;
}

void sub_50497()
{
    UNLOCK_MISSION_NEWS_STORY( 9 );
    sub_50515( 9 );
    sub_53707( 7, 1 );
    sub_53790( "PD_IVAN", "PD_BYTCHKOV", 1 );
    if (l_U2215 == 1)
    {
        TRIGGER_MISSION_COMPLETE_AUDIO( 57 );
    }
    else
    {
        TRIGGER_MISSION_COMPLETE_AUDIO( 63 );
    }
    CLEAR_WANTED_LEVEL( PlayerId );
    sub_54012();
    sub_3021();
    return;
}

void sub_50515(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_50602( iParam0 ))
    {
        sub_51652( iParam0 );
    }
    return;
}

int sub_50602(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_50659( ref uVar3, 1, 0, 0 );
    sub_51271( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_22077( "\n ----------------------------------------------------------------" );
    sub_3811( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_22077( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_50659(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_50712( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_50844( iParam0 + 0 );
    }
    return;
}

void sub_50712(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_50844( iParam0 + 0 );
    }
    return;
}

void sub_50844(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_50875( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_50875(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_51271(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_51652(unknown uParam0)
{
    int iVar3;
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

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_51863( 20, 6, 16383, 16383, ref uVar4 );
        sub_52539( ref uVar4, 7 );
        sub_52570( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_51863( 20, 7, 9, 16383, ref uVar4 );
        sub_52539( ref uVar4, 7 );
        sub_52570( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_51863(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->y0 = -1;
    sub_51887( uParam0, 0, iParam4 + 0 );
    sub_51887( uParam1, 1, iParam4 + 0 );
    sub_51887( uParam2, 2, iParam4 + 0 );
    sub_51887( uParam3, 3, iParam4 + 0 );
    sub_51887( 0, 4, iParam4 + 0 );
    sub_51887( 1, 5, iParam4 + 0 );
    sub_51887( 65535, 6, iParam4 + 0 );
    sub_51887( 0, 12, iParam4 + 0 );
    sub_51887( 0, 11, iParam4 + 0 );
    sub_51887( 0, 14, iParam4 + 0 );
    sub_51887( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_51887( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_51887( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_51887(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_52539(int iParam0, unknown uParam1)
{
    sub_51887( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_52570(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_52610())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_53297( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_53096( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_52610()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_52644( 5, g_U968[I] )) == 7)
        {
            sub_53096( I );
            return 1;
        }
    }
    return 0;
}

int sub_52644(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_53096(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_53169( 39 );
    return;
}

void sub_53169(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_53297(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_53358( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_53358(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_53707(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_53790(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = sub_53803( uParam0, uParam1 );
    if (iVar5 != -1)
    {
        g_U2273[iVar5]._fU192 = uParam2;
    }
    return;
}

int sub_53803(unknown uParam0, unknown uParam1)
{
    int Result;

    if ((DOES_TEXT_LABEL_EXIST( uParam1 )) AND (DOES_TEXT_LABEL_EXIST( uParam0 )))
    {
        for ( Result = 0; Result <= 99; Result++ )
        {
            if (COMPARE_STRING( ref g_U2273[Result]._fU16, uParam0 ))
            {
                if (COMPARE_STRING( ref g_U2273[Result]._fU0, uParam1 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

void sub_54012()
{
    sub_54021();
    return;
}

void sub_54021()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_54039();
    sub_54098( iVar2, iVar3, iVar4 );
    return;
}

// I think this raises the friend like value and trust value
void sub_54039()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        // In use here: sub_57324() and here: sub_57058()
        l_U475[I] = 4;
    }
    return;
}

void sub_54098(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 1;
    sub_54130( iVar5, uParam0, uParam1, uParam2, "Contact_2" );
    return;
}

void sub_54130(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_54226( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_54226( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_54226( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_54226( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_54226( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_54226( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_54803( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4) AND (NOT g_U10981[iParam0]._fU144._fU12))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_55200( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_55200( 0, 4 );
            }
        }
    }
    if (NOT (sub_55289( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( CurrentPlayerId(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( CurrentPlayerId() );
    }
    sub_2119();
    bVar27 = true;
    uVar28 = sub_54803( iParam0, iVar7 );
    uVar29 = sub_1576( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 6) || (iVar30 == 5))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_64665( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_65095();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_65180( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_65237( iParam0 );
                sub_65276( 0 );
                sub_2017( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_65384();
        }
    }
    if (bParam2)
    {
        sub_65095();
        sub_65472();
        sub_65276( 0 );
    }
    if (bParam3)
    {
        sub_65095();
        sub_65512();
        sub_65276( 0 );
        sub_2017( uVar29, 0 );
    }
    sub_1463();
    return;
}

void sub_54226(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_54803(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1975( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_55200(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_55289(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_55497( uParam1 );
        break;
        case 1:
        bVar8 = sub_57575( uParam1 );
        break;
        case 2:
        bVar8 = sub_57801( uParam1 );
        break;
        case 3:
        bVar8 = sub_57951( uParam1 );
        break;
        case 4:
        bVar8 = sub_58229( uParam1 );
        break;
        case 5:
        bVar8 = sub_58532( uParam1 );
        break;
        case 6:
        bVar8 = sub_58731( uParam1 );
        break;
        case 7:
        bVar8 = sub_58957( uParam1 );
        break;
        case 8:
        bVar8 = sub_59192( uParam1 );
        break;
        case 9:
        bVar8 = sub_59567( uParam1 );
        break;
        case 10:
        bVar8 = sub_59814( uParam1 );
        break;
        case 11:
        bVar8 = sub_59953( uParam1 );
        break;
        case 12:
        bVar8 = sub_60252( uParam1 );
        break;
        case 13:
        bVar8 = sub_60480( uParam1 );
        break;
        case 14:
        bVar8 = sub_60767( uParam1 );
        break;
        case 15:
        bVar8 = sub_61049( uParam1 );
        break;
        case 16:
        bVar8 = sub_61331( uParam1 );
        break;
        case 17:
        bVar8 = sub_61532( uParam1 );
        break;
        case 18:
        bVar8 = sub_61605( uParam1 );
        break;
        case 19:
        bVar8 = sub_61819( uParam1 );
        break;
        case 20:
        bVar8 = sub_62072( uParam1 );
        break;
        case 21:
        bVar8 = sub_62319( uParam1 );
        break;
        case 22:
        bVar8 = sub_62520( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_57180( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_54803( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_62843( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_55497(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_55776( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_55776( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_55776( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_55776( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_55776( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_55776( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_55776( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_55776( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_55776( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_55776( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_55776( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_55776( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_55776( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_55776( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_55776( iVar3, 0, sub_57058(), sub_57324(), 0, 0 );
        break;
        default:
        sub_57483( "Friend 1", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Friend 1", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_55776(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_55787( uParam1 );
    sub_55961( uParam0, 0, uParam2 );
    sub_55961( uParam0, 1, uParam3 );
    sub_55961( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_54039();
    return;
}

void sub_55787(unknown uParam0)
{
    ADD_SCORE( CurrentPlayerId(), uParam0 );
    Flow_Achievements_Increase_Cash_From_Missions( uParam0 );
    return;
}

// sub_55812
// Obtained name from debug line below
void Flow_Achievements_Increase_Cash_From_Missions(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1975( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_55961(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0].y0[iParam1] += iParam2;
    if (g_U10981[uParam0].y0[iParam1] < 0)
    {
        g_U10981[uParam0].y0[iParam1] = 0;
    }
    if (g_U10981[uParam0].y0[iParam1] > 100)
    {
        g_U10981[uParam0].y0[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_56118( uParam0 );
    }
    return;
}

void sub_56118(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0].y0[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 ))) || ((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 )))))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0].z)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7].z)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

int sub_57058()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_57180( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_57180(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_57324()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_57180( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

// Debug line, unused
void sub_57483(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_57575(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_55776( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_57483( "Contact 2", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 2", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57801(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_55776( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_57483( "Girl 3", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Girl 3", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57951(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_55776( iVar3, 0, sub_57058(), sub_57324(), 0, 0 );
        break;
        default:
        sub_57483( "Friend 4", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Friend 4", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58229(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_55776( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_55776( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_55776( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_55776( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_57483( "Contact 5", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 5", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58532(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_57483( "Contact 7", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 7", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58731(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_55776( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_57483( "Contact 7b", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 7b", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58957(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_55776( iVar3, 0, sub_57058(), sub_57324(), 0, 0 );
        break;
        default:
        sub_57483( "Friend 8", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Friend 8", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59192(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_55776( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_55776( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_55776( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_55776( iVar3, 0, sub_57058(), sub_57324(), 0, 0 );
        break;
        default:
        sub_57483( "Friend 9", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Friend 9", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59567(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_55776( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_55776( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_57483( "Contact 10", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_57483( "Contact 10", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59814(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_57483( "Girl 11", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Girl 11", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59953(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_55776( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_55776( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_55776( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_55776( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_55776( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_57483( "Contact 12", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 12", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60252(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_55776( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_57483( "Contact 13", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 13", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60480(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_55776( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_55776( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_55776( iVar3, 0, sub_57058(), sub_57324(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_57483( "Friend 15", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Friend 15", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60767(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_55776( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_55776( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_55776( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_57483( "Contact 16", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 16", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61049(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_55776( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_55776( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_55776( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_57483( "Contact 18", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 18", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61331(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_57483( "Contact 19", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 19", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61532(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_57483( "Girl 20", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61605(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_57483( "Contact 21", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 21", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_61819(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_55776( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_55776( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_57483( "Contact 22", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 22", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62072(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_55776( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_55776( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_55776( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_57483( "Contact 24", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 24", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62319(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_55776( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_55776( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_57483( "Contact 25", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_57483( "Contact 25", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_62520(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_55776( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_57483( "Girl 26", 1 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_57483( "Girl 26", 0 );
        sub_55776( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_62843(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_62891( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_63622( iParam1 );
    }
    return;
}

int sub_62891(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_63031( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_63031(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_63213( 0 );
    return;
}

void sub_63213(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_63468();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_63468()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_63622(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_63955( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_63955( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_63955( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_63955( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_63955( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_63955( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_63955( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_63955( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_63955( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_63955( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_63955( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_63955( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_63955( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_63955( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_63955( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_63955( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_63955( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_63955( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_63955( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_63955(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_64665(unknown uParam0, unknown uParam1)
{
    sub_64684( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_64684(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
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

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_65095()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

int sub_65180(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_65237(unknown uParam0)
{
    sub_1362();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_65276(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_65384()
{
    sub_65393();
    return;
}

void sub_65393()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_65472()
{
    sub_65393();
    return;
}

void sub_65512()
{
    sub_65393();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_66132()
{
    if (l_U2180[MissionSwitch] == 0)
    {
        sub_44288( ref l_U2170, 0 );
        sub_66170();
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_CAM_POS( l_U2149, 1167.47300000, -397.13220000, 46.00491000 );
        SET_CAM_ROT( l_U2149, -5.16061700, 0.00000000, 116.91080000 );
        SET_CAM_POS( l_U2151, 1167.97400000, -405.01250000, 46.00491000 );
        SET_CAM_ROT( l_U2151, -14.55713000, -0.00000000, 56.63562000 );
        SET_CAM_INTERP_STYLE_CORE( l_U2152, l_U2149, l_U2151, 4000, 0 );
        sub_66463( ref l_U2152, 1 );
        sub_66520( 1 );
        sub_17418();
        if (NOT (IS_CHAR_DEAD( IvanPed )))
        {
            POINT_CAM_AT_PED( l_U2154, IvanPed );
        }
        ADD_COVER_POINT( 1165.12000000, -461.01090000, 31.96240000, 0, 0.00000000, 2, 1, ref l_U2074[0] );
        if (NOT (IS_CHAR_DEAD( IvanPed )))
        {
            SET_COMBAT_DECISION_MAKER( IvanPed, l_U2490 );
        }
        l_U2180[MissionSwitch] = 1;
    }
    if ((l_U2180[MissionSwitch] == 1) AND (sub_66744()))
    {
        l_U2249 = 1;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1168.31500000, -431.89710000, 35.46350000, 4.00000000, 1.00000000, 2.00000000, 0 ))
    {
        if (l_U2207 == 0)
        {
            PRINT_HELP_FOREVER( "VLA4H_06" );
            l_U2207 = 1;
        }
    }
    else if (l_U2207 == 1)
    {
        CLEAR_HELP();
    }
    if (NOT (IS_CHAR_DEAD( IvanPed )))
    {
        if ((IS_CHAR_IN_AIR( IvanPed )) || (l_U2091[1] == 0))
        {
            CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( IvanPed );
        }
    }
    if (NOT (IS_CHAR_DEAD( IvanPed )))
    {
        if ((l_U2249 == 1) || (LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1169.59600000, -409.25850000, 40.53150000, 10.00000000, 8.00000000, 2.00000000, 0 )))
        {
            if (l_U2091[1] == 0)
            {
                if (l_U2249 == 0)
                {
                    SET_CAM_POS( l_U2154, 1163.72700000, -410.32350000, 39.65179000 );
                    SET_CAM_ROT( l_U2154, 16.59393000, 0.00000000, -31.48591000 );
                    sub_66463( ref l_U2154, 1 );
                    sub_66463( ref l_U2152, 1 );
                    SETTIMERB( 0 );
                    while (TIMERB() < 500)
                    {
                        if (NOT (IS_CHAR_DEAD( IvanPed )))
                        {
                            CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( IvanPed );
                        }
                        WAIT( 0 );
                    }
                }
                SETTIMERB( 0 );
                while (TIMERB() < 1000)
                {
                    if (NOT (IS_CHAR_DEAD( IvanPed )))
                    {
                        CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( IvanPed );
                    }
                    WAIT( 0 );
                }
                sub_66463( ref l_U2154, 0 );
                sub_66463( ref l_U2152, 0 );
                sub_66520( 0 );
                if (NOT (IS_CHAR_INJURED( IvanPed )))
                {
                    UNLOCK_RAGDOLL( IvanPed, 1 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( IvanPed );
                    SET_CHAR_COORDINATES( IvanPed, 1167.88900000, -432.41540000, 35.46350000 );
                    SET_CHAR_HEADING( IvanPed, 180.00000000 );
                    STOP_PED_SPEAKING( IvanPed, 1 );
                }
                l_U2091[1] = 1;
            }
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1165.11100000, -405.90770000, 44.66900000, 5.00000000, 4.30000000, 2.00000000, 0 ))
    {
        l_U2230 = 1;
        if (l_U2148 == 0)
        {
            BEGIN_CAM_COMMANDS( ref l_U2148 );
        }
        if (NOT (DOES_CAM_EXIST( l_U2154 )))
        {
            CREATE_CAM( 14, ref l_U2154 );
        }
        if (NOT (IS_CHAR_INJURED( IvanPed )))
        {
            TASK_PERFORM_SEQUENCE( IvanPed, l_U2499 );
            l_U2091[3] = 1;
        }
        STOP_PED_SPEAKING( IvanPed, 1 );
        SET_CAM_POS( l_U2154, 1173.16300000, -402.14500000, 48.61503000 );
        SET_CAM_POS( l_U2154, 1173.16300000, -402.14500000, 45.61503000 );
        SET_CAM_ROT( l_U2154, -22.00157000, 0.00000000, 88.77086000 );
        SET_CAM_FOV( l_U2154, 40.00000000 );
        POINT_CAM_AT_PED( l_U2154, PlayerChar );
        sub_66463( ref l_U2154, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    else if ((NOT (IS_CHAR_IN_AIR( PlayerChar ))) AND (l_U2230 == 1))
    {
        UNPOINT_CAM( l_U2154 );
        SET_CAM_FOV( l_U2154, 55.00000000 );
        sub_66463( ref l_U2154, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (l_U2148 == 1)
        {
            END_CAM_COMMANDS( ref l_U2148 );
        }
        l_U2230 = 0;
    }
    if (NOT (IS_CHAR_INJURED( IvanPed )))
    {
        if ((l_U2211 == 0) AND (LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1167.61500000, -434.40880000, 37.27490000, 7.00000000, 1.00000000, 1.00000000, 0 )))
        {
            UNLOCK_RAGDOLL( IvanPed, 0 );
            l_U2211 = 1;
        }
        if (((sub_47981( IvanPed )) < 33.20000000) AND ((NOT (IS_CHAR_IN_AIR( IvanPed ))) AND ((l_U2212 == 0) AND (l_U2211 == 1))))
        {
            UNLOCK_RAGDOLL( IvanPed, 1 );
            l_U2212 = 1;
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1168.61700000, -422.00020000, 39.95830000, 9.00000000, 1.00000000, 5.00000000, 0 ))
    {
        l_U2231 = 1;
        if (l_U2148 == 0)
        {
            BEGIN_CAM_COMMANDS( ref l_U2148 );
        }
        if (NOT (DOES_CAM_EXIST( l_U2154 )))
        {
            CREATE_CAM( 14, ref l_U2154 );
        }
        SET_CAM_POS( l_U2154, 1168.32700000, -420.90700000, 45.37014000 );
        SET_CAM_ROT( l_U2154, -87.40493000, 0.00000000, 179.15570000 );
        SET_CAM_FOV( l_U2154, 40.00000000 );
        POINT_CAM_AT_PED( l_U2154, PlayerChar );
        sub_66463( ref l_U2154, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    else if ((NOT (IS_CHAR_IN_AIR( PlayerChar ))) AND (l_U2231 == 1))
    {
        UNPOINT_CAM( l_U2154 );
        SET_CAM_FOV( l_U2154, 55.00000000 );
        sub_66463( ref l_U2154, 0 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (l_U2148 == 1)
        {
            END_CAM_COMMANDS( ref l_U2148 );
        }
        l_U2231 = 0;
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1167.78900000, -446.69920000, 35.04320000, 9.00000000, 1.00000000, 5.00000000, 0 ))
    {
        l_U2232 = 1;
        if (l_U2148 == 0)
        {
            BEGIN_CAM_COMMANDS( ref l_U2148 );
        }
        if (NOT (DOES_CAM_EXIST( l_U2154 )))
        {
            CREATE_CAM( 14, ref l_U2154 );
        }
        SET_CAM_POS( l_U2154, 1176.76500000, -446.33430000, 21.18246000 );
        SET_CAM_ROT( l_U2154, 63.77844000, -0.00000000, 88.78345000 );
        SET_CAM_FOV( l_U2154, 35.00000000 );
        POINT_CAM_AT_PED( l_U2154, PlayerChar );
        sub_66463( ref l_U2154, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    }
    else if ((NOT (IS_CHAR_IN_AIR( PlayerChar ))) AND (l_U2232 == 1))
    {
        if (NOT (IS_CHAR_INJURED( IvanPed )))
        {
            CLEAR_CHAR_TASKS( IvanPed );
            SET_CHAR_COORDINATES( IvanPed, 1164.66800000, -473.29370000, 33.53040000 );
            SET_CHAR_HEADING( IvanPed, 180.00000000 );
            UNLOCK_RAGDOLL( IvanPed, 1 );
            TASK_PERFORM_SEQUENCE( IvanPed, l_U2500 );
            sub_21901( "V4_CORNER", ref l_U2170, 8, 1 );
            l_U2208 = 1;
        }
        UNPOINT_CAM( l_U2154 );
        sub_66463( ref l_U2154, 0 );
        SET_CAM_FOV( l_U2154, 55.00000000 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (l_U2148 == 1)
        {
            END_CAM_COMMANDS( ref l_U2148 );
        }
        l_U2232 = 0;
    }
    if ((NOT (IS_CHAR_IN_AIR( PlayerChar ))) AND ((sub_47981( PlayerChar )) < 20.00000000))
    {
        sub_66463( ref l_U2154, 0 );
        SET_CAM_FOV( l_U2154, 55.00000000 );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        if (l_U2148 == 1)
        {
            END_CAM_COMMANDS( ref l_U2148 );
        }
        REMOVE_BLIP( l_U2485 );
        DELETE_CHAR( ref IvanPed );
        DELETE_CAR( ref IvanCar );
        PRINT_NOW( "VLALOST", 7500, 1 );
        WAIT( 7500 );
        sub_43688( 1, "V4_CALLF", "V4AUD", 0 );
        sub_44274();
    }
    if (NOT (IS_CHAR_DEAD( IvanPed )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1167.71500000, -433.85750000, 16.44330000, 12.00000000, 2.30000000, 17.00000000, 0 ))
        {
            SET_CHAR_COORDINATES( IvanPed, 1167.59000000, -435.93220000, 34.45880000 );
            SET_CHAR_HEADING( IvanPed, 229.73870000 );
        }
    }
    if (NOT (IS_CHAR_DEAD( IvanPed )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1169.48400000, -421.92650000, 24.79960000, 10.00000000, 1.00000000, 9.20000000, 0 ))
        {
            SET_CHAR_COORDINATES( IvanPed, 1165.89800000, -435.99320000, 34.45870000 );
            SET_CHAR_HEADING( IvanPed, 205.15150000 );
        }
    }
    if (NOT (IS_CHAR_DEAD( IvanPed )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1168.01200000, -446.48750000, 22.03780000, 10.00000000, 1.00000000, 9.50000000, 0 ))
        {
            SET_CHAR_COORDINATES( IvanPed, 1171.26300000, -461.38450000, 31.96240000 );
            SET_CHAR_HEADING( IvanPed, 157.00000000 );
        }
    }
    if (NOT (IS_CHAR_DEAD( IvanPed )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1168.13300000, -470.88960000, 20.80740000, 10.00000000, 6.20000000, 10.20000000, 0 ))
        {
            SET_CHAR_COORDINATES( IvanPed, 1163.48800000, -476.92280000, 31.96180000 );
            SET_CHAR_HEADING( IvanPed, 224.04350000 );
        }
    }
    if ((LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1164.14000000, -411.05220000, 40.53130000, 8.50000000, 8.50000000, 1.50000000, 0 )) || (LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1165.15700000, -400.36430000, 45.56460000, 10.50000000, 10.50000000, 1.50000000, 0 )))
    {
        if ((l_U2091[1] == 1) AND (l_U2091[0] == 0))
        {
            sub_21901( "V4_CHASE2", ref l_U2170, 8, 1 );
            PRINT_HELP_FOREVER( "VLA4H_04" );
            SETTIMERA( 0 );
            l_U2091[0] = 1;
        }
    }
    if ((TIMERA() > 7500) AND ((l_U2091[7] == 0) AND (l_U2091[0] == 1)))
    {
        CLEAR_HELP();
        l_U2091[7] = 1;
    }
    if (((sub_8216( PlayerChar, IvanPed, 1 )) < 20.00000000) AND ((l_U2091[3] == 0) AND ((l_U2091[0] == 1) AND (NOT (sub_69718( IvanPed, 29 ))))))
    {
        l_U2091[3] = 1;
    }
    if ((l_U2091[2] == 0) AND ((l_U2091[0] == 1) AND (NOT (sub_69718( IvanPed, 29 )))))
    {
        if (NOT (IS_CHAR_INJURED( IvanPed )))
        {
            TASK_PLAY_ANIM( IvanPed, "EXHAUSTED_INTRO", "missVlad4", 8.00000000, 0, 0, 0, 1, -1 );
        }
        l_U2091[2] = 1;
    }
    if ((l_U2208) || (l_U2091[5] == 1))
    {
        if (NOT (IS_CHAR_INJURED( IvanPed )))
        {
            if (IS_CHAR_PLAYING_ANIM( IvanPed, "missVlad4", "RUN_FALL_OFF_ROOF" ))
            {
                if (l_U2202 == 0)
                {
                    SAY_AMBIENT_SPEECH_WITH_VOICE( IvanPed, "PANIC", "PAIN_VOICE", 1, 1, 2 );
                    l_U2202 = 1;
                }
                FREEZE_CHAR_POSITION( IvanPed, 1 );
                SET_CHAR_COORDINATES_NO_OFFSET( IvanPed, 1175.03800000, -486.60300000, 34.20300000 );
                SET_CHAR_HEADING( IvanPed, 180.00000000 );
                CHANGE_BLIP_DISPLAY( l_U2485, 2 );
                l_U2209 = 1;
            }
            else
            {
                CHANGE_BLIP_DISPLAY( l_U2485, 4 );
            }
        }
    }
    sub_49155();
    if ((l_U2232 == 0) AND ((l_U2231 == 0) AND ((l_U2230 == 0) AND ((l_U2091[5] == 0) AND (DOES_CHAR_EXIST( IvanPed ))))))
    {
        if (IS_CHAR_DEAD( IvanPed ))
        {
            if (DOES_BLIP_EXIST( l_U2485 ))
            {
                REMOVE_BLIP( l_U2485 );
            }
            sub_50156( 45 );
            sub_43688( 1, "V4_CALLK", "V4AUD", 0 );
            sub_50497();
        }
    }
    if (IS_CHAR_PLAYING_ANIM( IvanPed, "missVlad4", "RUN_FALL_OFF_ROOF" ))
    {
        GET_CHAR_ANIM_CURRENT_TIME( IvanPed, "missVlad4", "RUN_FALL_OFF_ROOF", ref l_U2203 );
        l_U2201 = 1;
    }
    if ((l_U2209) AND (((l_U2208) || (l_U2091[5] == 1)) AND (l_U2203 >= 1.00000000)))
    {
        if ((l_U2091[6] == 0) AND (NOT (IS_CHAR_DEAD( IvanPed ))))
        {
            PRINT_NOW( "VLA4D_05", 7500, 1 );
            SET_CHAR_NEVER_TARGETTED( IvanPed, 0 );
            SET_CHAR_PROOFS( IvanPed, 0, 0, 0, 0, 0 );
            SET_CHAR_SUFFERS_CRITICAL_HITS( IvanPed, 0 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( IvanPed, "HANG_ON_LEDGE", "missVlad4", 1000.00000000, 1, 0, 0, 0, -1 );
            SET_CHAR_COORDINATES( IvanPed, 1175.03800000, -492.90300000, 33.20000000 );
            SET_CHAR_HEADING( IvanPed, 0.00000000 );
            FREEZE_CHAR_POSITION( IvanPed, 1 );
            CHANGE_BLIP_DISPLAY( l_U2485, 4 );
            SAY_AMBIENT_SPEECH( IvanPed, "PANIC", 0, 0, 0 );
            MissionSwitch++;
            l_U2091[6] = 1;
        }
    }
    return;
}

// Some type of camera setup
void sub_66170()
{
    if (NOT (DOES_CAM_EXIST( l_U2149 )))
    {
        CREATE_CAM( 14, ref l_U2149 );
    }
    if (NOT (DOES_CAM_EXIST( l_U2151 )))
    {
        CREATE_CAM( 14, ref l_U2151 );
    }
    if (NOT (DOES_CAM_EXIST( l_U2152 )))
    {
        CREATE_CAM( 3, ref l_U2152 );
    }
    if (NOT (DOES_CAM_EXIST( l_U2154 )))
    {
        CREATE_CAM( 14, ref l_U2154 );
    }
    return;
}

void sub_66463(unknown uParam0, unknown uParam1)
{
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_ACTIVE( (uParam0^), uParam1 );
        SET_CAM_PROPAGATE( (uParam0^), uParam1 );
    }
    return;
}

void sub_66520(boolean bParam0)
{
    if (bParam0)
    {
        BEGIN_CAM_COMMANDS( ref l_U2148 );
    }
    SET_USE_HIGHDOF( bParam0 );
    SET_WIDESCREEN_BORDERS( bParam0 );
    SET_PLAYER_CONTROL( PlayerId, NOT bParam0 );
    ACTIVATE_SCRIPTED_CAMS( bParam0, bParam0 );
    if (NOT bParam0)
    {
        END_CAM_COMMANDS( ref l_U2148 );
    }
    return;
}

int sub_66744()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_69718(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_SCRIPT_TASK_STATUS( uParam0, uParam1, ref iVar4 );
    }
    if (iVar4 != 7)
    {
        return 1;
        break;
    }
    return 0;
}

void sub_70752()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (l_U2180[MissionSwitch] == 0)
    {
        PRINT_HELP_FOREVER( "VLAFLASH" );
        SETTIMERA( 0 );
        if (NOT (IS_CHAR_DEAD( IvanPed )))
        {
            // l_U2228 = IvanHealth
            GET_CHAR_HEALTH( IvanPed, ref IvanHealth );
            SET_CHAR_NEVER_TARGETTED( IvanPed, 1 );
        }
        sub_17418();
        l_U2180[MissionSwitch] = 1;
    }
    if (NOT (IS_CHAR_DEAD( IvanPed )))
    {
        GET_CHAR_HEALTH( IvanPed, ref l_U2506 );
    }
    // Seems to be getting the blip and game timer, not sure for what though.
    if (sub_70913( ref l_U2485, ref l_U2229 ))
    {
        if (TIMERA() < 12500)
        {
            if (l_U2213 == 0)
            {
                // Choose Ivan's fate.
                PRINT_NOW( "VLA4D_05", 500, 1 );
                l_U2213 = 1;
            }
            else
            {
                PRINT_NOW( "VLA4D05b", 500, 1 );
                l_U2213 = 0;
            }
        }
    }
    if (LOCATE_CHAR_ANY_MEANS_3D( PlayerChar, 1175.21300000, -491.69920000, 34.20850000, 1.00000000, 1.50000000, 1.50000000, 0 ))
    {
        if ((TIMERA() > 9500) AND (l_U2091[0] == 0))
        {
            sub_21901( "V4_HOLD", ref l_U2170, 8, 1 );
            PRINT_HELP_FOREVER( "VLA4H_03" );
            l_U2091[0] = 1;
        }
        if ((NOT (IS_CHAR_IN_AIR( PlayerChar ))) AND ((l_U2091[1] == 0) AND (IS_CONTROL_JUST_PRESSED( 0, 23 ))))
        {
            CLEAR_HELP();
            if (NOT (IS_CHAR_DEAD( IvanPed )))
            {
                if (NOT (DOES_CAM_EXIST( l_U2154 )))
                {
                    CREATE_CAM( 14, ref l_U2154 );
                }
                SET_CAM_POS( l_U2154, 1177.99900000, -489.72750000, 34.86095000 );
                SET_CAM_ROT( l_U2154, -9.27794600, 0.00000000, 145.48410000 );
                SET_CAM_FOV( l_U2154, 45.00000000 );
                SET_CAM_NEAR_DOF( l_U2154, 1.00000000 );
                SET_CAM_FAR_DOF( l_U2154, 5.50000000 );
                sub_66463( ref l_U2154, 1 );
                sub_66520( 1 );
                SET_CHAR_COORDINATES( PlayerChar, 1175.03800000, -492.15000000, 33.25000000 );
                SET_CHAR_HEADING( PlayerChar, 180.00000000 );
                CLEAR_CHAR_TASKS( PlayerChar );
                FREEZE_CHAR_POSITION( PlayerChar, 1 );
            }
            sub_21901( "V4_HELP", ref l_U2170, 8, 1 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( PlayerChar, "LEDGE_HELP_UP", "missVlad4", 8.00000000, 0, 0, 0, 0, -1 );
            if (NOT (IS_CHAR_DEAD( IvanPed )))
            {
                SET_CHAR_COORDINATES( IvanPed, 1175.03800000, -492.80300000, 33.25000000 );
                TASK_PLAY_ANIM_NON_INTERRUPTABLE( IvanPed, "LEDGE_HELPED_UP", "missVlad4", 8.00000000, 0, 0, 0, 1, -1 );
            }
            else
            {
                DELETE_CHAR( ref IvanPed );
                CREATE_CHAR( 26, 1166762483, 1175.03800000, -492.80300000, 33.25000000, ref IvanPed, 1 );
                SET_CHAR_AS_ENEMY( IvanPed, 1 );
                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( IvanPed, 0 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( IvanPed, 1 );
            }
            while (l_U2248 < 0.75000000)
            {
                if (IS_CHAR_PLAYING_ANIM( PlayerChar, "missVlad4", "LEDGE_HELP_UP" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( PlayerChar, "missVlad4", "LEDGE_HELP_UP", ref l_U2248 );
                }
                WAIT( 0 );
            }
            MissionSwitch++;
            l_U2091[1] = 1;
        }
        if ((NOT (IS_CHAR_IN_AIR( PlayerChar ))) AND ((l_U2091[2] == 0) AND (IS_CONTROL_PRESSED( 0, 62 ))))
        {
            CLEAR_HELP();
            l_U2215 = 1;
            PRINTSTRING( "you kicked ivan off!" );
            PRINTNL();
            if (NOT (IS_CHAR_DEAD( IvanPed )))
            {
                if (NOT (DOES_CAM_EXIST( l_U2154 )))
                {
                    CREATE_CAM( 14, ref l_U2154 );
                }
                SET_CAM_POS( l_U2154, 1177.41600000, -494.35800000, 32.09663000 );
                SET_CAM_ROT( l_U2154, 23.81830000, -15.32264000, 54.93951000 );
                SET_CAM_FOV( l_U2154, 45.00000000 );
                SET_CAM_POS( l_U2154, 1176.12200000, -494.08730000, 29.60838000 );
                SET_CAM_ROT( l_U2154, 55.07161000, -13.60788000, 26.47294000 );
                SET_CAM_FOV( l_U2154, 39.90001000 );
                sub_66463( ref l_U2154, 1 );
                sub_66520( 1 );
                SET_CHAR_COORDINATES( PlayerChar, 1175.03800000, -492.25000000, 33.25000000 );
                SET_CHAR_HEADING( PlayerChar, 180.00000000 );
                CLEAR_CHAR_TASKS( PlayerChar );
                FREEZE_CHAR_POSITION( PlayerChar, 1 );
                TASK_LOOK_AT_CHAR( PlayerChar, IvanPed, 10000, 0 );
                TASK_PLAY_ANIM( PlayerChar, "look_down_loop", "missVlad4", 8.00000000, 1, 0, 0, 0, -1 );
            }
            sub_21901( "V4_PUSH", ref l_U2170, 8, 1 );
            while (sub_22883( l_U2170 ))
            {
                WAIT( 0 );
            }
            SET_CAM_POS( l_U2154, 1175.03800000, -495.90350000, 37.90384000 );
            SET_CAM_ROT( l_U2154, -61.45001000, -11.56608000, 60.85323000 );
            SET_CAM_POS( l_U2154, 1175.18200000, -496.08970000, 38.41183000 );
            SET_CAM_ROT( l_U2154, -65.10952000, 0.00000000, 37.75937000 );
            SET_CAM_FOV( l_U2154, 45.00000000 );
            TASK_PLAY_ANIM_NON_INTERRUPTABLE( PlayerChar, "LEDGE_STAMP", "missVlad4", 8.00000000, 0, 0, 0, 0, -1 );
            while (l_U2248 < 0.48000000)
            {
                if (IS_CHAR_PLAYING_ANIM( PlayerChar, "missVlad4", "LEDGE_STAMP" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( PlayerChar, "missVlad4", "LEDGE_STAMP", ref l_U2248 );
                }
                WAIT( 0 );
            }
            CLEAR_AREA( 1178.94300000, -497.50470000, 13.05022000, 20.00000000, 1 );
            SET_CAM_POS( l_U2154, 1178.94300000, -497.50470000, 13.05022000 );
            SET_CAM_ROT( l_U2154, 68.03238000, -0.00000000, 43.71684000 );
            SET_CAM_FOV( l_U2154, 45.00000000 );
            if (NOT (IS_CHAR_DEAD( IvanPed )))
            {
                FREEZE_CHAR_POSITION( IvanPed, 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( IvanPed );
                STOP_PED_SPEAKING( IvanPed, 1 );
            }
            WAIT( 0 );
            if (NOT (IS_CHAR_INJURED( IvanPed )))
            {
                UNLOCK_RAGDOLL( IvanPed, 1 );
                SWITCH_PED_TO_RAGDOLL( IvanPed, 0, 60000, 1, 1, 1, 0 );
                if (IS_PED_RAGDOLL( IvanPed ))
                {
                    CREATE_NM_MESSAGE( 1, 246 );
                    SEND_NM_MESSAGE( IvanPed );
                }
            }
            sub_50156( 45 );
            sub_21901( "V4_FALLS", ref l_U2170, 8, 1 );
            MissionSwitch = 8;
            SETTIMERA( 0 );
            while ((TIMERA() < 10000) AND ((sub_47981( IvanPed )) > 18.00000000))
            {
                if (NOT (IS_CHAR_DEAD( IvanPed )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1177.86500000, -493.22930000, 30.90230000, 2.00000000, 1.00000000, 2.50000000, 1 ))
                    {
                        APPLY_FORCE_TO_PED( IvanPed, 0, 0.10000000, 0.10000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 8, 1, 1, 1 );
                    }
                }
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( IvanPed )))
            {
                SET_PED_GENERATES_DEAD_BODY_EVENTS( IvanPed, 1 );
                REMOVE_CHAR_ELEGANTLY( ref IvanPed );
            }
            uVar2 = {sub_73234( IvanPed )};
            SET_CAM_POS( l_U2154, 1180.21900000, -495.97100000, 13.08902000 );
            SET_CAM_ROT( l_U2154, 12.45547000, -0.00000000, 81.64666000 );
            SET_CAM_FOV( l_U2154, 55.00000000 );
            while ((ABSF( uVar2.z )) > 0.50000000)
            {
                uVar2 = {sub_73234( IvanPed )};
                WAIT( 0 );
            }
            SET_CAM_COMPONENT_SHAKE( l_U2154, 0, 3, 1000, 0.00500000, 3.90000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2154, 1, 3, 1000, 0.00500000, 3.80000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2154, 3, 3, 1000, 0.00500000, 3.80000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2154, 4, 3, 1000, 0.00500000, 3.80000000, 0.00000000 );
            if (NOT (IS_CHAR_DEAD( IvanPed )))
            {
                ;
            }
            SET_CHAR_COORDINATES( PlayerChar, 1175.13200000, -491.08990000, 33.20360000 );
            SET_CHAR_HEADING( PlayerChar, 72.00740000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            WAIT( 3500 );
            FREEZE_CHAR_POSITION( PlayerChar, 0 );
            sub_66463( ref l_U2154, 0 );
            sub_66463( ref l_U2152, 0 );
            sub_66520( 0 );
            l_U2091[2] = 1;
        }
    }
    if (DOES_CHAR_EXIST( IvanPed ))
    {
        if ((IS_CHAR_ON_FIRE( IvanPed )) || (l_U2506 < IvanHealth))
        {
            PRINTSTRING( "you shot ivan!" );
            PRINTNL();
            l_U2215 = 1;
            FREEZE_CHAR_POSITION( IvanPed, 0 );
            UNLOCK_RAGDOLL( IvanPed, 1 );
            CLEAR_HELP();
            CLEAR_PRINTS();
            if (NOT (IS_CHAR_INJURED( IvanPed )))
            {
                SWITCH_PED_TO_RAGDOLL( IvanPed, 10000, 60000, 1, 1, 1, 0 );
            }
            if (NOT (IS_CHAR_INJURED( IvanPed )))
            {
                if (IS_PED_RAGDOLL( IvanPed ))
                {
                    CREATE_NM_MESSAGE( 1, 246 );
                    SEND_NM_MESSAGE( IvanPed );
                }
            }
            CLEAR_AREA( 1178.94300000, -497.50470000, 13.05022000, 20.00000000, 1 );
            SET_CAM_POS( l_U2154, 1178.94300000, -497.50470000, 13.05022000 );
            SET_CAM_ROT( l_U2154, 68.03238000, -0.00000000, 43.71684000 );
            SET_CAM_FOV( l_U2154, 45.00000000 );
            sub_66520( 1 );
            sub_66463( ref l_U2154, 1 );
            if (NOT (IS_CHAR_DEAD( IvanPed )))
            {
                FREEZE_CHAR_POSITION( IvanPed, 0 );
                CLEAR_CHAR_TASKS_IMMEDIATELY( IvanPed );
                STOP_PED_SPEAKING( IvanPed, 1 );
            }
            WAIT( 0 );
            if (NOT (IS_CHAR_INJURED( IvanPed )))
            {
                UNLOCK_RAGDOLL( IvanPed, 1 );
                SWITCH_PED_TO_RAGDOLL( IvanPed, 0, 60000, 1, 1, 1, 0 );
                if (IS_PED_RAGDOLL( IvanPed ))
                {
                    CREATE_NM_MESSAGE( 1, 246 );
                    SEND_NM_MESSAGE( IvanPed );
                }
            }
            sub_50156( 45 );
            sub_21901( "V4_FALLS", ref l_U2170, 8, 1 );
            MissionSwitch = 8;
            SETTIMERA( 0 );
            while ((TIMERA() < 10000) AND ((sub_47981( IvanPed )) > 18.00000000))
            {
                if (NOT (IS_CHAR_DEAD( IvanPed )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( IvanPed, 1177.86500000, -493.22930000, 30.90230000, 2.00000000, 1.00000000, 2.50000000, 1 ))
                    {
                        APPLY_FORCE_TO_PED( IvanPed, 0, 0.10000000, 0.10000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 8, 1, 1, 1 );
                    }
                }
                WAIT( 0 );
            }
            if (NOT (IS_CHAR_DEAD( IvanPed )))
            {
                SET_PED_GENERATES_DEAD_BODY_EVENTS( IvanPed, 1 );
                REMOVE_CHAR_ELEGANTLY( ref IvanPed );
            }
            uVar5 = {sub_73234( IvanPed )};
            SET_CAM_POS( l_U2154, 1180.21900000, -495.97100000, 13.08902000 );
            SET_CAM_ROT( l_U2154, 12.45547000, -0.00000000, 81.64666000 );
            SET_CAM_FOV( l_U2154, 55.00000000 );
            while ((ABSF( uVar5.z )) > 0.50000000)
            {
                uVar5 = {sub_73234( IvanPed )};
                WAIT( 0 );
            }
            SET_CAM_COMPONENT_SHAKE( l_U2154, 0, 3, 1000, 0.00500000, 3.90000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2154, 1, 3, 1000, 0.00500000, 3.80000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2154, 3, 3, 1000, 0.00500000, 3.80000000, 0.00000000 );
            SET_CAM_COMPONENT_SHAKE( l_U2154, 4, 3, 1000, 0.00500000, 3.80000000, 0.00000000 );
            if (NOT (IS_CHAR_DEAD( IvanPed )))
            {
                ;
            }
            SET_GAME_CAM_HEADING( 0.00000000 );
            WAIT( 3500 );
            FREEZE_CHAR_POSITION( PlayerChar, 0 );
            sub_66463( ref l_U2154, 0 );
            sub_66463( ref l_U2152, 0 );
            sub_66520( 0 );
            l_U2091[2] = 1;
            sub_21901( "V4_FALLS", ref l_U2170, 8, 1 );
            sub_50156( 45 );
            MissionSwitch = 8;
        }
    }
    return;
}

// Seems to be getting the blip and game timer, not sure for what though.
// uParam0 = MissionBlip
// uParam1 = GameTimer
int sub_70913(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    GET_GAME_TIMER( ref iVar4 );
    if ((iVar4 - (uParam1^)) > 500)
    {
        GET_BLIP_COLOUR( (uParam0^), ref iVar5 );
        if (iVar5 == 4)
        {
            CHANGE_BLIP_COLOUR( (uParam0^), 3 );
            GET_GAME_TIMER( uParam1 );
            return 1;
        }
        else
        {
            CHANGE_BLIP_COLOUR( (uParam0^), 1 );
            GET_GAME_TIMER( uParam1 );
            return 1;
        }
        break;
    }
    return 0;
}

void sub_73234(unknown uParam0)
{
    unknown Result;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_VELOCITY( uParam0, ref Result.x, ref Result.y, ref Result.z );
    }
    return Result;
}

void sub_74819()
{
    if (l_U2180[MissionSwitch] == 0)
    {
        sub_17418();
        CLEAR_HELP();
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        REQUEST_ANIMS( "gestures@niko" );
        while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
        {
            WAIT( 0 );
        }
        SET_CHAR_COORDINATES( PlayerChar, 1175.18600000, -489.19990000, 33.20350000 );
        SET_CHAR_HEADING( PlayerChar, 349.33930000 );
        if (NOT (IS_CHAR_DEAD( IvanPed )))
        {
            SET_CHAR_COORDINATES( IvanPed, 1175.24600000, -487.56990000, 33.20350000 );
            SET_CHAR_HEADING( IvanPed, 189.33930000 );
            FREEZE_CHAR_POSITION( IvanPed, 0 );
        }
        sub_66170();
        SET_CAM_POS( l_U2149, 1177.09000000, -487.87960000, 34.59583000 );
        SET_CAM_ROT( l_U2149, -1.57450700, 0.00000000, 107.10100000 );
        SET_CAM_FOV( l_U2149, 45.00000000 );
        SET_CAM_NEAR_DOF( l_U2149, 1.00000000 );
        SET_CAM_FAR_DOF( l_U2149, 5.50000000 );
        SET_CAM_POS( l_U2151, 1176.97800000, -489.27530000, 34.58771000 );
        SET_CAM_ROT( l_U2151, -5.01225200, -0.00000000, 71.57762000 );
        SET_CAM_FOV( l_U2151, 45.00000000 );
        SET_CAM_NEAR_DOF( l_U2151, 1.00000000 );
        SET_CAM_FAR_DOF( l_U2151, 5.50000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U2152, l_U2149, l_U2151, 14000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U2152, 3, 3, 1, 1 );
        FREEZE_CHAR_POSITION( PlayerChar, 0 );
        sub_66463( ref l_U2152, 1 );
        sub_66463( ref l_U2154, 0 );
        sub_66520( 1 );
        SETTIMERA( 0 );
        DO_SCREEN_FADE_IN( 500 );
        l_U2180[MissionSwitch] = 1;
    }
    if (l_U2091[0] == 0)
    {
        if (NOT (IS_CHAR_DEAD( IvanPed )))
        {
            TASK_LOOK_AT_CHAR( PlayerChar, IvanPed, 35000, 0 );
            TASK_LOOK_AT_CHAR( IvanPed, PlayerChar, 35000, 0 );
        }
        sub_21901( "V4_LIVE", ref l_U2170, 8, 1 );
        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        l_U2091[0] = 1;
    }
    if ((l_U2091[2] == 0) AND ((sub_75539( l_U2170 )) > 1))
    {
        SET_CAM_POS( l_U2149, 1176.10700000, -489.42870000, 34.46704000 );
        SET_CAM_ROT( l_U2149, 10.76760000, -0.00000100, 47.13906000 );
        SET_CAM_FOV( l_U2149, 45.00000000 );
        SET_CAM_NEAR_DOF( l_U2149, 1.00000000 );
        SET_CAM_FAR_DOF( l_U2149, 5.50000000 );
        SET_CAM_POS( l_U2151, 1176.03500000, -489.71640000, 34.42164000 );
        SET_CAM_ROT( l_U2151, 8.70495700, 0.00000000, 36.02367000 );
        SET_CAM_FOV( l_U2151, 49.00000000 );
        SET_CAM_NEAR_DOF( l_U2151, 1.00000000 );
        SET_CAM_FAR_DOF( l_U2151, 5.50000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U2152, l_U2149, l_U2151, 12000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U2152, 0, 0, 1, 1 );
        l_U2091[2] = 1;
    }
    if ((l_U2091[3] == 0) AND ((sub_75539( l_U2170 )) > 2))
    {
        SET_CAM_POS( l_U2149, 1176.24500000, -487.44420000, 34.55420000 );
        SET_CAM_ROT( l_U2149, 3.31917800, -0.00000000, 132.50980000 );
        SET_CAM_FOV( l_U2149, 45.00000000 );
        SET_CAM_POS( l_U2151, 1176.31300000, -487.76270000, 34.56694000 );
        SET_CAM_ROT( l_U2151, 3.31917800, 0.00000000, 117.95660000 );
        SET_CAM_FOV( l_U2151, 45.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U2152, l_U2149, l_U2151, 10000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U2152, 0, 0, 1, 1 );
        l_U2091[3] = 1;
    }
    if ((l_U2091[4] == 0) AND ((sub_75539( l_U2170 )) > 3))
    {
        SET_CAM_POS( l_U2149, 1176.61200000, -489.42890000, 34.56076000 );
        SET_CAM_ROT( l_U2149, -0.80636900, -1.37496300, 57.93001000 );
        SET_CAM_FOV( l_U2149, 45.00000000 );
        SET_CAM_POS( l_U2151, 1176.69300000, -489.94090000, 34.60133000 );
        SET_CAM_ROT( l_U2151, -4.47778400, -2.62757300, 49.86576000 );
        SET_CAM_FOV( l_U2151, 45.00000000 );
        SET_CAM_INTERP_STYLE_CORE( l_U2152, l_U2149, l_U2151, 14000, 0 );
        SET_CAM_INTERP_STYLE_DETAILED( l_U2152, 0, 0, 1, 1 );
        l_U2091[4] = 1;
    }
    if ((l_U2091[5] == 0) AND ((NOT (sub_22883( l_U2170 ))) AND (l_U2091[4] == 1)))
    {
        if (NOT (IS_CHAR_DEAD( IvanPed )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( IvanPed, 1165.12000000, -461.01090000, 31.96240000, 4, 5000, 0.50000000 );
        }
        SETTIMERA( 0 );
        l_U2091[5] = 1;
    }
    if (((IS_SCREEN_FADED_IN()) AND (sub_66744())) || ((TIMERA() > 2000) AND ((l_U2091[5] == 1) AND (l_U2091[1] == 0))))
    {
        DO_SCREEN_FADE_OUT( 500 );
        while (IS_SCREEN_FADING_OUT())
        {
            WAIT( 0 );
        }
        sub_44288( ref l_U2170, 0 );
        DELETE_CHAR( ref IvanPed );
        SET_CHAR_COORDINATES( PlayerChar, 1175.13200000, -491.08990000, 33.20360000 );
        SET_CHAR_HEADING( PlayerChar, 72.00740000 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        MissionSwitch++;
        sub_66463( ref l_U2154, 0 );
        sub_66463( ref l_U2152, 0 );
        sub_66520( 0 );
        DO_SCREEN_FADE_IN( 500 );
        l_U2091[1] = 1;
    }
    return;
}

void sub_75539(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_22883( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0.z;
        }
    }
    return Result;
}

void sub_76688()
{
    PRINTSTRING( "Ivans dead" );
    PRINTNL();
    REMOVE_BLIP( l_U2485 );
    if (l_U2215 == 1)
    {
        PRINTSTRING( "Killed" );
        sub_50156( 45 );
        sub_43688( 1, "V4_CALLK", "V4AUD", 0 );
    }
    else
    {
        PRINTSTRING( "Not Killed" );
        sub_43688( 1, "V4_CALLL", "V4AUD", 0 );
    }
    sub_50497();
    return;
}

