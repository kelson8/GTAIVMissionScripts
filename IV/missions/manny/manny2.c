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
    l_U486 = 0;
    l_U487 = 2;
    l_U488 = 1;
    l_U489 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 0;
    l_U499 = 0;
    l_U500 = 0;
    l_U501 = 0;
    l_U502 = 0;
    l_U503 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U506 = 0;
    l_U507 = 1;
    l_U508 = 0;
    l_U509 = 0;
    l_U535 = {711.43300000, 1503.35300000, 14.03730000};
    l_U543 = 35;
    l_U544 = 20;
    l_U546 = 0;
    l_U547 = 0;
    l_U565 = 0;
    l_U566 = 0;
    l_U567 = 0;
    l_U568 = 616;
    StrCopy( ref l_U578, "INTDRV_H", 16 );
    StrCopy( ref l_U582, "INTDRV_HB1", 16 );
    l_U586 = "missmanny2";
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_388();
        sub_2498();
    }
    SET_MISSION_FLAG( 1 );
    WAIT( 0 );
    while (l_U488)
    {
        WAIT( 0 );
        switch (l_U485)
        {
            case 0:
            sub_3282();
            break;
            case 1:
            sub_3669();
            break;
            case 2:
            sub_4564();
            break;
            case 3:
            sub_10755();
            break;
            case 4:
            sub_11651();
            sub_12837();
            break;
            case 5:
            sub_15332();
            sub_12837();
            break;
            case 6:
            sub_18646();
            sub_12837();
            break;
            case 7:
            sub_19270();
            sub_12837();
            break;
            case 8:
            sub_12837();
            break;
            case 9:
            sub_19800();
            break;
            case 10:
            GET_GAME_TIMER( ref l_U551 );
            l_U552 = l_U551 - l_U548;
            if (l_U552 > 3000)
            {
                sub_20555();
            }
            if (NOT l_U503)
            {
                if (IS_CAR_DEAD( l_U519 ))
                {
                    GET_CURRENT_BASIC_POLICE_CAR_MODEL( ref l_U577 );
                    REQUEST_MODEL( l_U577 );
                    if (CREATE_EMERGENCY_SERVICES_CAR_THEN_WALK( l_U577, l_U532._fU0, l_U532._fU4, l_U532._fU8 ))
                    {
                        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U577 );
                        l_U503 = 1;
                    }
                }
            }
            break;
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4042(), 714.86290000, 1508.26800000, 19.61490000, 100.00000000, 100.00000000, 50.00000000, 0 ))
        {
            if (NOT l_U508)
            {
                SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
                SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
                l_U508 = 1;
            }
        }
        else if (l_U508)
        {
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
            l_U508 = 0;
        }
        sub_33801();
    }
    sub_2498();
    return;
}

void sub_388()
{
    sub_397();
    return;
}

void sub_397()
{
    int iVar2;

    iVar2 = 5;
    sub_411( iVar2 );
    sub_1587( iVar2 );
    return;
}

void sub_411(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_455();
        sub_616();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_724();
            sub_763();
        }
    }
    sub_839();
    sub_940();
    uVar5 = sub_1053( uParam0 );
    sub_1494( uVar5, 0 );
    return;
}

void sub_455()
{
    sub_469( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_569();
    }
    return;
}

void sub_469(int iParam0)
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

void sub_569()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_616()
{
    sub_625();
    return;
}

void sub_625()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_724()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_763()
{
    sub_772();
    return;
}

void sub_772()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_839()
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

void sub_940()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_962();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_962()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1053(unknown uParam0)
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
    sub_1452( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1452(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1494(int iParam0, boolean bParam1)
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

void sub_1587(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1596();
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
        sub_2371();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1596()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1634( 5, g_U569[I] )) == 1))
        {
            if ((sub_1634( 1, g_U569[I] )) != 0)
            {
                sub_1920( I );
            }
        }
    }
    if (NOT sub_2086())
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

int sub_1634(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1920(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2005( g_U569 - 1 );
    return;
}

void sub_2005(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2086()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1634( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2371()
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

void sub_2498()
{
    for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
    {
        REMOVE_BLIP( l_U523[l_U545] );
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U510[l_U545] );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U515 );
    REMOVE_BLIP( l_U523[l_U565] );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U518 );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U516 );
    REMOVE_BLIP( l_U523[l_U566] );
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U517 );
    REMOVE_BLIP( l_U523[l_U567] );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U519 );
    REMOVE_BLIP( l_U521 );
    REMOVE_BLIP( l_U522 );
    CLEAR_SEQUENCE_TASK( l_U538 );
    REMOVE_DECISION_MAKER( l_U541 );
    REMOVE_DECISION_MAKER( l_U540 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U569 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U570[0] );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U575 );
    SWITCH_ROADS_BACK_TO_ORIGINAL( 556.81840000, 1353.27900000, 19.46380000, 612.19890000, 1458.15100000, 13.17390000 );
    SWITCH_PED_ROADS_BACK_TO_ORIGINAL( 362.96530000, 1624.79100000, 13.38700000, 414.70400000, 1664.20000000, 18.00000000 );
    REMOVE_ANIMS( l_U586 );
    REMOVE_CAR_RECORDING( l_U568 );
    sub_2892();
    sub_3043();
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    SET_CREATE_RANDOM_COPS( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2892()
{
    if (l_U484)
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
    l_U482 = 0;
    l_U481 = 0;
    SET_CINEMATIC_BUTTON_ENABLED( 1 );
    return;
}

void sub_3043()
{
    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    return;
}

void sub_3282()
{
    LOAD_ADDITIONAL_TEXT( "INDRVBY", 0 );
    LOAD_ADDITIONAL_TEXT( "M2AUD", 6 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U541 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U540 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U540, 2 );
    l_U529 = {702.89610000, 1504.17700000, 13.83730000};
    l_U546 = 4;
    l_U569 = -1150599089;
    l_U570[0] = 2104499156;
    l_U575 = -196312163;
    l_U576 = 7;
    sub_3437( "manny2" );
    SWITCH_ROADS_OFF( 556.81840000, 1353.27900000, 19.46380000, 612.19890000, 1458.15100000, 13.17390000 );
    l_U486 = 0;
    l_U485 = 1;
    return;
}

void sub_3437(unknown uParam0)
{
    string sVar3;

    if (IS_THREAD_ACTIVE( g_U9240 ))
    {
        DESTROY_THREAD( g_U9240 );
    }
    StrCopy( ref g_U9232, uParam0, 32 );
    sVar3 = "text_link_mission";
    if (IS_NETWORK_SESSION())
    {
        sVar3 = "txtlnkmiss_net";
    }
    while (NOT (HAS_SCRIPT_LOADED( sVar3 )))
    {
        REQUEST_SCRIPT( sVar3 );
        WAIT( 0 );
    }
    g_U9240 = START_NEW_SCRIPT( sVar3, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
    return;
}

void sub_3669()
{
    unknown uVar2;
    unknown uVar3;

    switch (l_U486)
    {
        case 0:
        GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
        if (IS_VEH_DRIVEABLE( uVar2 ))
        {
            if (LOCATE_CAR_3D( uVar2, 407.58800000, 1472.60600000, 10.59860000, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                SET_CAR_COORDINATES( uVar2, 429.54410000, 1481.78500000, 11.71550000 );
                SET_CAR_HEADING( uVar2, 207.00000000 );
                GET_CAR_MODEL( uVar2, ref uVar3 );
                if ((IS_THIS_MODEL_A_CAR( uVar3 )) || (IS_THIS_MODEL_A_BIKE( uVar3 )))
                {
                    SET_CAR_ON_GROUND_PROPERLY( uVar2 );
                }
            }
        }
        if (g_U9893._fU24)
        {
            ENABLE_SCENE_STREAMING( 0 );
            START_CUTSCENE_NOW( "EM_2" );
            while (NOT HAS_CUTSCENE_LOADED())
            {
                WAIT( 0 );
            }
            while (NOT HAS_CUTSCENE_FINISHED())
            {
                WAIT( 0 );
            }
            CLEAR_NAMED_CUTSCENE( "EM_2" );
            l_U486 = 6;
        }
        else
        {
            l_U486 = 7;
        }
        break;
        case 6:
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        ENABLE_SCENE_STREAMING( 1 );
        l_U486 = 7;
        break;
        case 7:
        if (g_U9893._fU24)
        {
            ;
        }
        SET_CHAR_COORDINATES( sub_4042(), 412.93780000, 1475.77300000, 10.61260000 );
        SET_CHAR_HEADING( sub_4042(), 276.14790000 );
        sub_4122();
        SUPPRESS_CAR_MODEL( l_U569 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        LOAD_SCENE( 412.93780000, 1475.77300000, 10.61260000 );
        DO_SCREEN_FADE_IN( 500 );
        while (IS_SCREEN_FADING())
        {
            WAIT( 0 );
        }
        SET_PLAYER_CONTROL( sub_4426(), 1 );
        CLEAR_PRINTS();
        PRINT( "INTDRV_07", 7500, 3 );
        l_U485 = 2;
        ADD_BLIP_FOR_COORD( l_U529._fU0, l_U529._fU4, l_U529._fU8, ref l_U521 );
        SET_ROUTE( l_U521, 1 );
        break;
    }
    return;
}

void sub_4042()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4122()
{
    REQUEST_MODEL( l_U575 );
    LOAD_ALL_OBJECTS_NOW();
    while (NOT (HAS_MODEL_LOADED( l_U575 )))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( l_U569 );
    LOAD_ALL_OBJECTS_NOW();
    while (NOT (HAS_MODEL_LOADED( l_U569 )))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( l_U570[0] );
    LOAD_ALL_OBJECTS_NOW();
    while (NOT (HAS_MODEL_LOADED( l_U570[0] )))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( l_U586 );
    LOAD_ALL_OBJECTS_NOW();
    while (NOT (HAVE_ANIMS_LOADED( l_U586 )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_4426()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4564()
{
    int iVar2;
    boolean bVar3;
    boolean bVar4;

    if (NOT l_U494)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4042(), 699.05340000, 1497.87200000, 14.73135000, 22.00005000, 20.10004000, 2.60000000, 0 ))
        {
            if (NOT (sub_4637( sub_4042() )))
            {
                if (NOT (IS_CHAR_INJURED( l_U515 )))
                {
                    l_U494 = 1;
                }
                else if (NOT (IS_CHAR_INJURED( l_U516 )))
                {
                    l_U494 = 1;
                }
                else if (NOT (IS_CHAR_INJURED( l_U517 )))
                {
                    l_U494 = 1;
                };;;
                if (NOT l_U494)
                {
                    for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                        {
                            l_U545 = l_U546;
                            l_U494 = 1;
                        }
                    }
                }
            }
        }
    }
    if (NOT l_U489)
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_4042(), l_U529._fU0, l_U529._fU4, l_U529._fU8, 60.00000000, 60.00000000, 20.00000000, 0 ))
        {
            REMOVE_BLIP( l_U521 );
            sub_5152();
            l_U489 = 1;
        }
    }
    else
    {
        bVar3 = false;
        for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U510[l_U545] )))
            {
                if (NOT l_U493)
                {
                    if ((IS_CHAR_RESPONDING_TO_EVENT( l_U510[l_U545], 15 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U510[l_U545], sub_4042(), 0 )))
                    {
                        l_U493 = 1;
                    }
                    else if (IS_PLAYER_TARGETTING_CHAR( sub_4426(), l_U510[l_U545] ))
                    {
                        GET_CURRENT_CHAR_WEAPON( sub_4042(), ref iVar2 );
                        if (NOT (iVar2 == 0))
                        {
                            bVar3 = true;
                        }
                    }
                    if (NOT l_U493)
                    {
                        if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U510[l_U545], sub_4042(), 20.00000000, 20.00000000, 5.00000000, 0 ))
                        {
                            if (IS_CHAR_SHOOTING( sub_4042() ))
                            {
                                l_U493 = 1;
                            }
                        }
                    }
                    if (l_U493)
                    {
                        l_U545 = l_U546;
                    }
                }
            }
            else
            {
                l_U493 = 1;
                l_U545 = l_U546;
            }
        }
        if (NOT l_U493)
        {
            if (NOT (IS_CHAR_DEAD( l_U515 )))
            {
                if ((IS_CHAR_RESPONDING_TO_EVENT( l_U515, 15 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U515, sub_4042(), 0 )))
                {
                    l_U493 = 1;
                }
                else if (IS_PLAYER_TARGETTING_CHAR( sub_4426(), l_U515 ))
                {
                    GET_CURRENT_CHAR_WEAPON( sub_4042(), ref iVar2 );
                    if (NOT (iVar2 == 0))
                    {
                        bVar3 = true;
                    }
                }
                if (NOT l_U493)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U515, sub_4042(), 20.00000000, 20.00000000, 5.00000000, 0 ))
                    {
                        if (IS_CHAR_SHOOTING( sub_4042() ))
                        {
                            l_U493 = 1;
                        }
                    }
                }
            }
            else
            {
                l_U493 = 1;
            }
            if (NOT (IS_CHAR_DEAD( l_U516 )))
            {
                if ((IS_CHAR_RESPONDING_TO_EVENT( l_U516, 15 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U516, sub_4042(), 0 )))
                {
                    l_U493 = 1;
                }
                else if (IS_PLAYER_TARGETTING_CHAR( sub_4426(), l_U516 ))
                {
                    GET_CURRENT_CHAR_WEAPON( sub_4042(), ref iVar2 );
                    if (NOT (iVar2 == 0))
                    {
                        bVar3 = true;
                    }
                }
                if (NOT l_U493)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U516, sub_4042(), 20.00000000, 20.00000000, 5.00000000, 0 ))
                    {
                        if (IS_CHAR_SHOOTING( sub_4042() ))
                        {
                            l_U493 = 1;
                        }
                    }
                }
            }
            else
            {
                l_U493 = 1;
            }
            if (NOT (IS_CHAR_DEAD( l_U517 )))
            {
                if ((IS_CHAR_RESPONDING_TO_EVENT( l_U517, 15 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U517, sub_4042(), 0 )))
                {
                    l_U493 = 1;
                }
                else if (IS_PLAYER_TARGETTING_CHAR( sub_4426(), l_U517 ))
                {
                    GET_CURRENT_CHAR_WEAPON( sub_4042(), ref iVar2 );
                    if (NOT (iVar2 == 0))
                    {
                        bVar3 = true;
                    }
                }
                if (NOT l_U493)
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U517, sub_4042(), 20.00000000, 20.00000000, 5.00000000, 0 ))
                    {
                        if (IS_CHAR_SHOOTING( sub_4042() ))
                        {
                            l_U493 = 1;
                        }
                    }
                }
            }
            else
            {
                l_U493 = 1;
            }
        }
        if (bVar3)
        {
            if (NOT l_U500)
            {
                l_U500 = 1;
                GET_GAME_TIMER( ref l_U548 );
            }
            else
            {
                GET_GAME_TIMER( ref l_U551 );
                l_U552 = l_U551 - l_U548;
                if (l_U552 >= 1000)
                {
                    l_U493 = 1;
                }
            }
        }
        else
        {
            l_U500 = 0;
        }
        if (NOT l_U493)
        {
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4042(), 706.03340000, 1500.79500000, 14.59310000, 9.20000000, 3.50000000, 2.00000000, 0 ))
            {
                if (NOT l_U502)
                {
                    for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                        {
                            TASK_LOOK_AT_CHAR( l_U510[l_U545], sub_4042(), 999999, 0 );
                            SET_CURRENT_CHAR_WEAPON( l_U510[l_U545], l_U576, 0 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U515 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U515, sub_4042(), 999999, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U515, l_U576, 0 );
                        TASK_AIM_GUN_AT_CHAR( l_U515, sub_4042(), 999999 );
                        SAY_AMBIENT_SPEECH( l_U515, "GANG_ASK_PLAYER_LEAVE", 1, 0, 0 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U516 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U516, sub_4042(), 999999, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U516, l_U576, 0 );
                        TASK_AIM_GUN_AT_CHAR( l_U516, sub_4042(), 999999 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U517 )))
                    {
                        TASK_LOOK_AT_CHAR( l_U517, sub_4042(), 999999, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U517, 12, 0 );
                        TASK_AIM_GUN_AT_CHAR( l_U517, sub_4042(), 999999 );
                    }
                    l_U502 = 1;
                }
            }
            else if (l_U502)
            {
                for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                    {
                        ;
                    }
                }
                if (NOT (IS_CHAR_INJURED( l_U515 )))
                {
                    TASK_SWAP_WEAPON( l_U515, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U515, 0, 0 );
                    TASK_START_SCENARIO_IN_PLACE( l_U515, "Scenario_SmokingOutsideOffice", -1082130432 );
                }
                if (NOT (IS_CHAR_INJURED( l_U516 )))
                {
                    TASK_SWAP_WEAPON( l_U516, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U516, 0, 0 );
                    TASK_START_SCENARIO_IN_PLACE( l_U516, "Scenario_Bouncer", -1082130432 );
                }
                if (NOT (IS_CHAR_INJURED( l_U517 )))
                {
                    TASK_SWAP_WEAPON( l_U517, 0 );
                    SET_CURRENT_CHAR_WEAPON( l_U517, 0, 0 );
                    TASK_START_SCENARIO_IN_PLACE( l_U517, "Scenario_Bouncer", -1082130432 );
                }
                l_U502 = 0;
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_4042(), 706.28340000, 1501.94600000, 14.59310000, 8.20000000, 2.00000000, 2.00000000, 0 ))
            {
                l_U493 = 1;
            }
        }
        if (NOT l_U493)
        {
            if (IS_VEH_DRIVEABLE( l_U519 ))
            {
                if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U519, sub_4042() ))
                {
                    l_U493 = 1;
                }
            }
            else
            {
                l_U493 = 1;
            }
        }
        if (l_U493)
        {
            bVar4 = false;
            for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                {
                    SET_CHAR_RELATIONSHIP( l_U510[l_U545], 5, 0 );
                    bVar4 = true;
                }
            }
            if (NOT bVar4)
            {
                if (NOT (IS_CHAR_INJURED( l_U515 )))
                {
                    SET_CHAR_RELATIONSHIP( l_U515, 5, 0 );
                }
                else if (NOT (IS_CHAR_INJURED( l_U516 )))
                {
                    SET_CHAR_RELATIONSHIP( l_U516, 5, 0 );
                }
                else if (NOT (IS_CHAR_INJURED( l_U517 )))
                {
                    SET_CHAR_RELATIONSHIP( l_U517, 5, 0 );
                };;;
            }
            if (NOT (IS_CAR_DEAD( l_U519 )))
            {
                LOCK_CAR_DOORS( l_U519, 1 );
            }
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_4042(), 0 );
            l_U485 = 3;
            l_U500 = 0;
        }
        if (NOT l_U491)
        {
            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4042() ))
            {
                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                {
                    sub_9971( ref l_U578, 1, 7500 );
                    if (sub_10416() == 0)
                    {
                        GIVE_WEAPON_TO_CHAR( sub_4042(), 7, 20, 0 );
                        SET_CURRENT_CHAR_WEAPON( sub_4042(), 7, 1 );
                    }
                    l_U491 = 1;
                }
            }
        }
        else if (NOT l_U492)
        {
            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4042() ))
            {
                if ((NOT sub_10665()) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                {
                    if (sub_10416() > 1)
                    {
                        PRINT_HELP( ref l_U582 );
                        l_U492 = 1;
                    }
                }
            }
        }
    }
    return;
}

int sub_4637(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_4701( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_4701(int iParam0)
{
    if ((iParam0 == g_U2239) || ((IS_CAR_MODEL( iParam0, 1208856469 )) || ((IS_CAR_MODEL( iParam0, 1884962369 )) || (IS_CAR_MODEL( iParam0, -956048545 )))))
    {
        return 1;
    }
    return 0;
}

void sub_5152()
{
    vector[5] vVar2;
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
    float[5] fVar18;

    array(ref vVar2, 5);
    array(ref fVar18, 5);
    CREATE_CAR( l_U569, l_U535._fU0, l_U535._fU4, l_U535._fU8, ref l_U519, 1 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U519, 1 );
    CHANGE_CAR_COLOUR( l_U519, 34, 34 );
    SET_EXTRA_CAR_COLOURS( l_U519, 28, 89 );
    SET_CAR_HEADING( l_U519, 190.00000000 );
    GET_CAR_HEALTH( l_U519, ref l_U562 );
    LOCK_CAR_DOORS( l_U519, 3 );
    TURN_OFF_VEHICLE_EXTRA( l_U519, 5, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U519, 6, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U519, 7, 0 );
    TURN_OFF_VEHICLE_EXTRA( l_U519, 8, 0 );
    vVar2[0] = {712.94310000, 1504.11600000, 13.83730000};
    fVar18[0] = 21.60000000;
    vVar2[1] = {712.73460000, 1503.75400000, 13.83730000};
    fVar18[1] = 90.00000000;
    vVar2[2] = {699.25270000, 1500.70000000, 13.75590000};
    fVar18[2] = 228.67360000;
    vVar2[3] = {700.19090000, 1499.21000000, 13.74060000};
    fVar18[3] = 28.00000000;
    vVar2[4] = {709.72210000, 1502.72800000, 13.83770000};
    fVar18[4] = 305.00000000;
    l_U546 = 2;
    l_U565 = 2;
    l_U566 = 3;
    l_U567 = 4;
    for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U547 );
        l_U547 = 0;
        CREATE_CHAR( 26, l_U570[l_U547], vVar2[l_U545]._fU0, vVar2[l_U545]._fU4, vVar2[l_U545]._fU8, ref l_U510[l_U545], 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U510[l_U545] );
        SET_CHAR_HEADING( l_U510[l_U545], fVar18[l_U545] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U510[l_U545], 24 );
        SET_CHAR_DECISION_MAKER( l_U510[l_U545], l_U541 );
        SET_COMBAT_DECISION_MAKER( l_U510[l_U545], l_U540 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U510[l_U545], 1 );
        SET_CHAR_RELATIONSHIP( l_U510[l_U545], 1, 24 );
        GET_CHAR_HEALTH( l_U510[l_U545], ref l_U553[l_U545] );
        ADD_BLIP_FOR_CHAR( l_U510[l_U545], ref l_U523[l_U545] );
        GIVE_WEAPON_TO_CHAR( l_U510[l_U545], l_U576, 30000, 0 );
        switch (l_U545)
        {
            case 0:
            WARP_CHAR_INTO_CAR( l_U510[l_U545], l_U519 );
            ALWAYS_USE_HEAD_ON_HORN_ANIM_WHEN_DEAD_IN_CAR( l_U510[l_U545], 1 );
            SET_CHAR_NAME_DEBUG( l_U510[l_U545], "GANG 0" );
            break;
            case 1:
            WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U510[l_U545], l_U519, 0 );
            SET_CHAR_NAME_DEBUG( l_U510[l_U545], "GANG 1" );
            if (NOT (IS_CHAR_INJURED( l_U510[0] )))
            {
                TASK_LOOK_AT_CHAR( l_U510[0], l_U510[l_U545], 999999, 0 );
                TASK_LOOK_AT_CHAR( l_U510[l_U545], l_U510[0], 999999, 0 );
            }
            break;
            case 2:
            SET_CHAR_NAME_DEBUG( l_U510[l_U545], "GANG 2" );
            TASK_START_SCENARIO_IN_PLACE( l_U510[l_U545], "Scenario_SmokingOutsideOffice", -1082130432 );
            break;
            case 3:
            SET_CHAR_NAME_DEBUG( l_U510[l_U545], "GANG 3" );
            TASK_START_SCENARIO_IN_PLACE( l_U510[l_U545], "Scenario_SmokingOutsideOffice", -1082130432 );
            break;
        }
        SET_CHAR_IS_TARGET_PRIORITY( l_U510[l_U545], 1 );
        SET_CHAR_AS_ENEMY( l_U510[l_U545], 1 );
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref l_U547 );
    l_U547 = 0;
    CREATE_CHAR( 26, l_U570[l_U547], vVar2[l_U565]._fU0, vVar2[l_U565]._fU4, vVar2[l_U565]._fU8, ref l_U515, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U515 );
    SET_CHAR_HEADING( l_U515, fVar18[l_U565] );
    SET_CHAR_RELATIONSHIP_GROUP( l_U515, 24 );
    GIVE_WEAPON_TO_CHAR( l_U515, l_U576, 30000, 0 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U515, 1 );
    SET_CHAR_DECISION_MAKER( l_U515, l_U541 );
    SET_COMBAT_DECISION_MAKER( l_U515, l_U540 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U515, 1 );
    SET_CHAR_RELATIONSHIP( l_U515, 1, 24 );
    GET_CHAR_HEALTH( l_U515, ref l_U553[l_U565] );
    ADD_BLIP_FOR_CHAR( l_U515, ref l_U523[l_U565] );
    SET_CHAR_AS_ENEMY( l_U515, 1 );
    OPEN_SEQUENCE_TASK( ref l_U538 );
    TASK_PLAY_ANIM( 0, "smoke_light_up", l_U586, 12.00000000, 0, 0, 0, 0, -1 );
    TASK_PLAY_ANIM( 0, "smoke_stand_a", l_U586, 12.00000000, 0, 0, 0, 0, -1 );
    TASK_PLAY_ANIM( 0, "smoke_stand_b", l_U586, 12.00000000, 0, 0, 0, 0, -1 );
    TASK_PLAY_ANIM( 0, "smoke_stand_a", l_U586, 12.00000000, 0, 0, 0, 0, -1 );
    TASK_PLAY_ANIM( 0, "smoke_stub_out", l_U586, 12.00000000, 0, 0, 0, 0, -1 );
    TASK_STAND_STILL( 0, 3000 );
    SET_SEQUENCE_TO_REPEAT( l_U538, 1 );
    CLOSE_SEQUENCE_TASK( l_U538 );
    TASK_PERFORM_SEQUENCE( l_U515, l_U538 );
    CLEAR_SEQUENCE_TASK( l_U538 );
    CREATE_CHAR( 26, l_U570[l_U547], vVar2[l_U566]._fU0, vVar2[l_U566]._fU4, vVar2[l_U566]._fU8, ref l_U516, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U516 );
    SET_CHAR_HEADING( l_U516, fVar18[l_U566] );
    SET_CHAR_RELATIONSHIP_GROUP( l_U516, 24 );
    GIVE_WEAPON_TO_CHAR( l_U516, l_U576, 30000, 0 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U516, 1 );
    SET_CHAR_DECISION_MAKER( l_U516, l_U541 );
    SET_COMBAT_DECISION_MAKER( l_U516, l_U540 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U516, 1 );
    SET_CHAR_RELATIONSHIP( l_U516, 1, 24 );
    GET_CHAR_HEALTH( l_U516, ref l_U553[l_U566] );
    ADD_BLIP_FOR_CHAR( l_U516, ref l_U523[l_U566] );
    TASK_START_SCENARIO_IN_PLACE( l_U516, "Scenario_Bouncer", -1082130432 );
    SET_CHAR_NAME_DEBUG( l_U516, "shooterped2" );
    SET_CHAR_AS_ENEMY( l_U516, 1 );
    CREATE_CHAR( 26, l_U570[l_U547], vVar2[l_U567]._fU0, vVar2[l_U567]._fU4, vVar2[l_U567]._fU8, ref l_U517, 1 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U517 );
    SET_CHAR_HEADING( l_U517, fVar18[l_U567] );
    SET_CHAR_RELATIONSHIP_GROUP( l_U517, 24 );
    GIVE_WEAPON_TO_CHAR( l_U517, 12, 30000, 0 );
    SET_CHAR_ACCURACY( l_U517, 12 );
    SET_CHAR_IS_TARGET_PRIORITY( l_U517, 1 );
    SET_CHAR_DECISION_MAKER( l_U517, l_U541 );
    SET_COMBAT_DECISION_MAKER( l_U517, l_U540 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U517, 1 );
    SET_CHAR_RELATIONSHIP( l_U517, 1, 24 );
    GET_CHAR_HEALTH( l_U517, ref l_U553[l_U567] );
    ADD_BLIP_FOR_CHAR( l_U517, ref l_U523[l_U567] );
    TASK_START_SCENARIO_IN_PLACE( l_U517, "Scenario_Bouncer", -1082130432 );
    SET_CHAR_NAME_DEBUG( l_U517, "shooterped2" );
    SET_CHAR_AS_ENEMY( l_U517, 1 );
    SET_WANTED_MULTIPLIER( 0.20000000 );
    CLEAR_AREA_OF_COPS( 711.43300000, 1503.35300000, 14.03730000, 20.00000000 );
    SET_CREATE_RANDOM_COPS( 0 );
    CLEAR_PRINTS();
    PRINT( "INTDRV_08", 7500, 1 );
    l_U504 = 1;
    return;
}

void sub_9971(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_9991( 1, "", -1, uParam0, uParam1, uParam2 );
    return;
}

void sub_9991(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if ((iParam0 == 2) || (I == iParam0))
        {
            sub_10033( I );
            sub_10150( uParam5, I );
            switch (I)
            {
                case 0:
                StrCopy( ref g_U9241._fU28[0], uParam1, 16 );
                g_U9241._fU100[0] = uParam2;
                break;
                case 1:
                StrCopy( ref g_U9241._fU28[1], uParam3, 16 );
                g_U9241._fU100[1] = uParam4;
                break;
            }
            g_U9241._fU112[I] = 0;
            if (iParam0 == 2)
            {
                g_U9241._fU148[I] = 3;
            }
            else
            {
                g_U9241._fU148[I] = 1;
            }
            g_U9241._fU136[I] = -1;
            g_U9241._fU124[I] = 0;
        }
    }
    return;
}

void sub_10033(int iParam0)
{
    if (iParam0 == 0)
    {
        CLEAR_THIS_PRINT( ref g_U9241._fU64[0] );
    }
    else
    {
        sub_10085( ref g_U9241._fU64[1] );
    }
    return;
}

void sub_10085(unknown uParam0)
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

void sub_10150(int iParam0, unknown uParam1)
{
    if (iParam0 == -1)
    {
        g_U9241._fU16[uParam1] = 6000;
    }
    else
    {
        g_U9241._fU16[uParam1] = iParam0;
    }
    return;
}

void sub_10416()
{
    int Result;

    Result = 0;
    if (HAS_CHAR_GOT_WEAPON( sub_4042(), 7 ))
    {
        Result++;
    }
    if (HAS_CHAR_GOT_WEAPON( sub_4042(), 9 ))
    {
        Result++;
    }
    if (HAS_CHAR_GOT_WEAPON( sub_4042(), 12 ))
    {
        Result++;
    }
    if (HAS_CHAR_GOT_WEAPON( sub_4042(), 13 ))
    {
        Result++;
    }
    if (HAS_CHAR_GOT_WEAPON( sub_4042(), 5 ))
    {
        Result++;
    }
    if (HAS_CHAR_GOT_WEAPON( sub_4042(), 4 ))
    {
        Result++;
    }
    return Result;
}

int sub_10665()
{
    if (g_U9241._fU148[1] == 0)
    {
        return 0;
    }
    return 1;
}

void sub_10755()
{
    int iVar2;
    int iVar3;

    iVar2 = -1;
    iVar3 = nil;
    if (IS_VEH_DRIVEABLE( l_U519 ))
    {
        for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
        {
            if (NOT (IS_CHAR_DEAD( l_U510[l_U545] )))
            {
                if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                {
                    CLEAR_CHAR_TASKS( l_U510[l_U545] );
                    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U510[l_U545], 1 );
                    if (iVar2 == -1)
                    {
                        if (NOT (IS_CHAR_IN_CAR( l_U510[l_U545], l_U519 )))
                        {
                            TASK_ENTER_CAR_AS_DRIVER( l_U510[l_U545], l_U519, -1 );
                            l_U564 = l_U545;
                            SET_CHAR_NAME_DEBUG( l_U510[l_U545], "FIRST DRIVER" );
                        }
                        else
                        {
                            iVar3 = nil;
                            GET_DRIVER_OF_CAR( l_U519, ref iVar3 );
                            if (NOT (iVar3 == l_U510[l_U545]))
                            {
                                TASK_ENTER_CAR_AS_DRIVER( l_U510[l_U545], l_U519, -1 );
                                l_U564 = l_U545;
                                SET_CHAR_NAME_DEBUG( l_U510[l_U545], "FIRST DRIVER" );
                            }
                        }
                    }
                    else if (NOT (IS_CHAR_IN_CAR( l_U510[l_U545], l_U519 )))
                    {
                        TASK_ENTER_CAR_AS_PASSENGER( l_U510[l_U545], l_U519, -1, iVar2 );
                    }
                    iVar2++;
                }
                else
                {
                    REMOVE_BLIP( l_U523[l_U545] );
                }
            }
            else
            {
                REMOVE_BLIP( l_U523[l_U545] );
            }
        }
        l_U485 = 4;
    }
    else
    {
        l_U485 = 8;
    }
    if (NOT (IS_CHAR_INJURED( l_U515 )))
    {
        CLEAR_CHAR_TASKS( l_U515 );
        GIVE_WEAPON_TO_CHAR( l_U515, l_U576, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U515, l_U576, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U515, 0 );
        TASK_COMBAT( l_U515, sub_4042() );
    }
    else
    {
        REMOVE_BLIP( l_U523[l_U565] );
    }
    if (NOT (IS_CHAR_INJURED( l_U516 )))
    {
        CLEAR_CHAR_TASKS( l_U516 );
        GIVE_WEAPON_TO_CHAR( l_U516, l_U576, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U516, l_U576, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U516, 0 );
        TASK_COMBAT( l_U516, sub_4042() );
    }
    else
    {
        REMOVE_BLIP( l_U523[l_U566] );
    }
    if (NOT (IS_CHAR_INJURED( l_U517 )))
    {
        CLEAR_CHAR_TASKS( l_U517 );
        GIVE_WEAPON_TO_CHAR( l_U517, l_U576, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U517, l_U576, 0 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U517, 0 );
        TASK_COMBAT( l_U517, sub_4042() );
    }
    else
    {
        REMOVE_BLIP( l_U523[l_U567] );
    }
    return;
}

void sub_11651()
{
    int iVar2;
    int I;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    iVar2 = 0;
    iVar4 = nil;
    if (IS_VEH_DRIVEABLE( l_U519 ))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_4042(), l_U519 )))
        {
            for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                {
                    if (l_U545 == l_U564)
                    {
                        GET_SCRIPT_TASK_STATUS( l_U510[l_U545], 12, ref l_U539 );
                        if (l_U539 == 7)
                        {
                            if (IS_CHAR_IN_CAR( l_U510[l_U545], l_U519 ))
                            {
                                GET_DRIVER_OF_CAR( l_U519, ref iVar4 );
                                if (NOT (iVar4 == l_U510[l_U545]))
                                {
                                    CLEAR_CHAR_TASKS( l_U510[l_U545] );
                                    TASK_ENTER_CAR_AS_DRIVER( l_U510[l_U545], l_U519, -1 );
                                }
                                else
                                {
                                    iVar2++;
                                }
                            }
                            else
                            {
                                CLEAR_CHAR_TASKS( l_U510[l_U545] );
                                TASK_ENTER_CAR_AS_DRIVER( l_U510[l_U545], l_U519, -1 );
                            }
                        }
                    }
                    else if (IS_CHAR_IN_CAR( l_U510[l_U545], l_U519 ))
                    {
                        iVar2++;
                    }
                }
                else
                {
                    REMOVE_BLIP( l_U523[l_U545] );
                    iVar2++;
                    if (l_U545 == l_U564)
                    {
                        for ( I = 0; I < l_U546; I++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U510[I] )))
                            {
                                CLEAR_CHAR_TASKS( l_U510[I] );
                                TASK_ENTER_CAR_AS_DRIVER( l_U510[I], l_U519, -1 );
                                SET_CHAR_NAME_DEBUG( l_U510[I], "NEW DRIVER" );
                                l_U564 = I;
                                I = l_U546;
                            }
                        }
                    }
                }
            }
            if (iVar2 == l_U546)
            {
                for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                    {
                        GIVE_WEAPON_TO_CHAR( l_U510[l_U545], l_U576, 30000, 0 );
                        SET_CURRENT_CHAR_WEAPON( l_U510[l_U545], l_U576, 0 );
                        SET_CHAR_ACCURACY( l_U510[l_U545], 20 );
                        if (NOT (l_U545 == l_U564))
                        {
                            TASK_DRIVE_BY( l_U510[l_U545], sub_4042(), 0, 0.00000000, 2.00000000, 0.00000000, 25.00000000, 4, 1, 5 );
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U559 );
                            l_U542 = l_U544 + ((l_U543 - l_U544) / 2.00000000);
                            REQUEST_CAR_RECORDING( l_U568 );
                            while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U568 )))
                            {
                                WAIT( 0 );
                            }
                            l_U499 = 0;
                            if (IS_VEH_DRIVEABLE( l_U519 ))
                            {
                                GET_CAR_COORDINATES( l_U519, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
                                if ((VDIST( uVar5, l_U535 )) >= 1.00000000)
                                {
                                    l_U499 = 0;
                                }
                                else
                                {
                                    l_U499 = 1;
                                }
                            }
                            if (IS_VEH_DRIVEABLE( l_U519 ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                                {
                                    if (IS_CHAR_IN_CAR( l_U510[l_U545], l_U519 ))
                                    {
                                        GET_DRIVER_OF_CAR( l_U519, ref iVar4 );
                                        if (iVar4 == l_U510[l_U545])
                                        {
                                            if (l_U499)
                                            {
                                                START_PLAYBACK_RECORDED_CAR( l_U519, l_U568 );
                                            }
                                            CLEAR_PRINTS();
                                            PRINT( "INTDRV_10", 7500, 1 );
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U519 ))
                {
                    GET_CAR_HEALTH( l_U519, ref l_U562 );
                }
                else
                {
                    l_U485 = 8;
                }
                l_U485 = 5;
            }
        }
        else
        {
            l_U485 = 8;
        }
    }
    else
    {
        l_U485 = 8;
    }
    return;
}

void sub_12837()
{
    int iVar2;
    int iVar3;
    string[7] sVar4;
    int iVar12;

    iVar2 = 0;
    for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
    {
        if ((IS_CHAR_INJURED( l_U510[l_U545] )) || (IS_CHAR_DEAD( l_U510[l_U545] )))
        {
            REMOVE_BLIP( l_U523[l_U545] );
            iVar2++;
        }
        else if (l_U485 == 8)
        {
            GET_SCRIPT_TASK_STATUS( l_U510[l_U545], 29, ref l_U539 );
            if (l_U539 == 7)
            {
                CLEAR_CHAR_TASKS( l_U510[l_U545] );
                OPEN_SEQUENCE_TASK( ref l_U538 );
                TASK_COMBAT( 0, sub_4042() );
                CLOSE_SEQUENCE_TASK( l_U538 );
                TASK_PERFORM_SEQUENCE( l_U510[l_U545], l_U538 );
                CLEAR_SEQUENCE_TASK( l_U538 );
            }
        }
        if (l_U507)
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_4042(), l_U510[l_U545], 15.00000000, 15.00000000, 5.00000000, 0 ))
            {
                iVar3 = 0;
                array(ref sVar4, 7);
                sVar4[0] = "FIGHT";
                sVar4[1] = "VEHICLE_ATTACKED";
                if (IS_CHAR_IN_ANY_CAR( l_U510[l_U545] ))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar3 );
                }
                else
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 1, ref iVar3 );
                }
                SAY_AMBIENT_SPEECH( l_U510[l_U545], sVar4[iVar3], 1, 0, 0 );
                GET_GAME_TIMER( ref l_U561 );
                l_U507 = 0;
            }
        }
        else
        {
            GET_GAME_TIMER( ref l_U551 );
            iVar12 = 15000;
            if ((l_U551 - l_U561) > iVar12)
            {
                l_U507 = 1;
            }
        }
    }
    if (l_U505)
    {
        if (NOT (IS_CHAR_INJURED( l_U510[l_U564] )))
        {
            if (NOT (IS_CAR_DEAD( l_U519 )))
            {
                if (NOT (IS_CHAR_IN_CAR( l_U510[l_U564], l_U519 )))
                {
                    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U510[l_U564], 1 );
                    l_U505 = 0;
                }
            }
            else
            {
                SET_CHAR_SUFFERS_CRITICAL_HITS( l_U510[l_U564], 1 );
                l_U505 = 0;
            }
        }
    }
    if ((IS_CHAR_DEAD( l_U515 )) || (IS_CHAR_INJURED( l_U515 )))
    {
        REMOVE_BLIP( l_U523[l_U565] );
        iVar2++;
    }
    else if (l_U485 > 3)
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U515, sub_4042(), 0 ))
        {
            if (NOT l_U495)
            {
                l_U495 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( l_U515, 91, ref l_U539 );
        if (l_U539 == 7)
        {
            CLEAR_CHAR_TASKS( l_U515 );
            TASK_COMBAT( l_U515, sub_4042() );
        }
    }
    if ((IS_CHAR_DEAD( l_U516 )) || (IS_CHAR_INJURED( l_U516 )))
    {
        REMOVE_BLIP( l_U523[l_U566] );
        iVar2++;
    }
    else if (l_U485 > 3)
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U516, sub_4042(), 0 ))
        {
            if (NOT l_U496)
            {
                l_U496 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( l_U516, 91, ref l_U539 );
        if (l_U539 == 7)
        {
            CLEAR_CHAR_TASKS( l_U516 );
            TASK_COMBAT( l_U516, sub_4042() );
        }
    }
    if ((IS_CHAR_DEAD( l_U517 )) || (IS_CHAR_INJURED( l_U517 )))
    {
        REMOVE_BLIP( l_U523[l_U567] );
        iVar2++;
    }
    else if (l_U485 > 3)
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U517, sub_4042(), 0 ))
        {
            if (NOT l_U497)
            {
                l_U497 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( l_U517, 91, ref l_U539 );
        if (l_U539 == 7)
        {
            CLEAR_CHAR_TASKS( l_U517 );
            TASK_COMBAT( l_U517, sub_4042() );
        }
    }
    if (NOT (IS_CAR_DEAD( l_U519 )))
    {
        GET_CAR_COORDINATES( l_U519, ref l_U532._fU0, ref l_U532._fU4, ref l_U532._fU8 );
    }
    if (l_U504)
    {
        if ((IS_CHAR_INJURED( l_U517 )) AND ((IS_CHAR_INJURED( l_U516 )) AND (IS_CHAR_INJURED( l_U515 ))))
        {
            SET_CREATE_RANDOM_COPS( 1 );
            l_U504 = 0;
        }
    }
    if (iVar2 == (l_U546 + 3))
    {
        sub_14128();
    }
    else if (sub_14167())
    {
        sub_14980();
    }
    return;
}

void sub_14128()
{
    GET_GAME_TIMER( ref l_U548 );
    l_U485 = 10;
    return;
}

int sub_14167()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;
    int iVar9;

    iVar9 = 0;
    GET_CHAR_COORDINATES( sub_4042(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
        {
            GET_CHAR_COORDINATES( l_U510[l_U545], ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            fVar8 = VDIST( uVar2, uVar5 );
            if (fVar8 > 250.00000000)
            {
                if (IS_CHAR_IN_ANY_CAR( l_U510[l_U545] ))
                {
                    l_U487 = 0;
                }
                else
                {
                    l_U487 = 2;
                }
                iVar9 = 1;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U515 )))
    {
        GET_CHAR_COORDINATES( l_U515, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        fVar8 = VDIST( uVar2, uVar5 );
        if (fVar8 > 250.00000000)
        {
            l_U487 = 1;
            iVar9 = 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U516 )))
    {
        GET_CHAR_COORDINATES( l_U516, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        fVar8 = VDIST( uVar2, uVar5 );
        if (fVar8 > 250.00000000)
        {
            l_U487 = 1;
            iVar9 = 1;
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U517 )))
    {
        GET_CHAR_COORDINATES( l_U517, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        fVar8 = VDIST( uVar2, uVar5 );
        if (fVar8 > 250.00000000)
        {
            l_U487 = 1;
            iVar9 = 1;
        }
    }
    if (iVar9 == 1)
    {
        if (NOT l_U501)
        {
            GET_GAME_TIMER( ref l_U560 );
            l_U501 = 1;
        }
        else
        {
            GET_GAME_TIMER( ref l_U551 );
            l_U552 = l_U551 - l_U560;
            if (l_U552 > 5000)
            {
                return 1;
            }
        }
    }
    else
    {
        l_U501 = 0;
    }
    if (sub_4637( sub_4042() ))
    {
        if (IS_SCREEN_FADED_OUT())
        {
            l_U509 = 1;
        }
        if (l_U509)
        {
            if (IS_SCREEN_FADING_IN())
            {
                sub_14759();
                l_U487 = 2;
                return 1;
            }
        }
    }
    return 0;
}

void sub_14759()
{
    int I;

    for ( I = 0; I < l_U546; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U510[I] )))
        {
            DELETE_CHAR( ref l_U510[I] );
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U515 )))
    {
        DELETE_CHAR( ref l_U515 );
    }
    if (NOT (IS_CHAR_INJURED( l_U516 )))
    {
        DELETE_CHAR( ref l_U516 );
    }
    if (NOT (IS_CHAR_INJURED( l_U517 )))
    {
        DELETE_CHAR( ref l_U517 );
    }
    if (NOT (IS_VEH_DRIVEABLE( l_U519 )))
    {
        DELETE_CAR( ref l_U519 );
    }
    return;
}

void sub_14980()
{
    for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
    {
        REMOVE_BLIP( l_U523[l_U545] );
    }
    REMOVE_BLIP( l_U521 );
    REMOVE_BLIP( l_U522 );
    GET_GAME_TIMER( ref l_U548 );
    CLEAR_PRINTS();
    if (l_U487 == 0)
    {
        PRINT( "INTDRV_F1", 7500, 1 );
    }
    else if (l_U487 == 1)
    {
        PRINT( "INTDRV_F2", 7500, 1 );
    }
    else
    {
        PRINT( "INTDRV_F3", 7500, 1 );
    }
    sub_15192();
    l_U485 = 9;
    return;
}

void sub_15192()
{
    sub_15201();
    return;
}

void sub_15201()
{
    int iVar2;

    iVar2 = 5;
    sub_15215( iVar2 );
    sub_1587( iVar2 );
    return;
}

void sub_15215(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_4426(), 150 );
    CLEAR_HELP();
    sub_411( uParam0 );
    return;
}

void sub_15332()
{
    unknown uVar2;
    int iVar3;

    if (IS_VEH_DRIVEABLE( l_U519 ))
    {
        if (NOT (IS_CHAR_INJURED( l_U510[l_U564] )))
        {
            if (IS_CHAR_IN_CAR( l_U510[l_U564], l_U519 ))
            {
                for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                    {
                        if (NOT (l_U545 == l_U564))
                        {
                            if (IS_CHAR_IN_CAR( l_U510[l_U545], l_U519 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U510[l_U545], 52, ref l_U539 );
                                if (l_U539 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U510[l_U545] );
                                    TASK_DRIVE_BY( l_U510[l_U545], sub_4042(), 0, 0.00000000, 2.00000000, 0.00000000, 25.00000000, 4, 1, 5 );
                                }
                            }
                            else
                            {
                                GET_SCRIPT_TASK_STATUS( l_U510[l_U545], 91, ref l_U539 );
                                if (l_U539 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U510[l_U545] );
                                    TASK_COMBAT( l_U510[l_U545], sub_4042() );
                                }
                            }
                        }
                        else if (NOT l_U498)
                        {
                            if ((NOT l_U499) || (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U519 ))))
                            {
                                OPEN_SEQUENCE_TASK( ref l_U538 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U519, 798.31090000, 1361.32000000, 13.19520000, l_U542, 0, 0, 2, -1, -1 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U519, 777.54520000, 1552.93000000, 19.17300000, l_U542, 0, 0, 2, -1, -1 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U519, 897.36600000, 1759.60300000, 15.80410000, l_U542, 0, 0, 2, -1, -1 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U519, 1143.06600000, 1915.23100000, 12.72550000, l_U542, 0, 0, 2, -1, -1 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U519, 1466.12700000, 1662.27900000, 14.15300000, l_U542, 0, 0, 2, -1, -1 );
                                TASK_CAR_DRIVE_TO_COORD( 0, l_U519, 1073.76300000, 1808.02700000, 12.70160000, l_U542, 0, 0, 2, -1, -1 );
                                CLOSE_SEQUENCE_TASK( l_U538 );
                                TASK_PERFORM_SEQUENCE( l_U510[l_U545], l_U538 );
                                CLEAR_SEQUENCE_TASK( l_U538 );
                                l_U498 = 1;
                            }
                        }
                    }
                    else
                    {
                        REMOVE_BLIP( l_U523[l_U545] );
                    }
                }
                if (NOT l_U506)
                {
                    if (NOT l_U505)
                    {
                        if (HAS_CAR_BEEN_DAMAGED_BY_CHAR( l_U519, sub_4042() ))
                        {
                            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U510[l_U564], 0 );
                            GET_GAME_TIMER( ref l_U549 );
                            l_U505 = 1;
                        }
                    }
                    else
                    {
                        GET_GAME_TIMER( ref l_U551 );
                        l_U552 = l_U551 - l_U549;
                        if (l_U552 >= 20000)
                        {
                            SET_CHAR_SUFFERS_CRITICAL_HITS( l_U510[l_U564], 1 );
                            l_U506 = 1;
                        }
                    }
                }
            }
            else
            {
                l_U485 = 8;
            }
        }
        else
        {
            l_U485 = 8;
        }
    }
    else
    {
        l_U485 = 8;
    }
    if (NOT (l_U485 == 8))
    {
        if (IS_VEH_DRIVEABLE( l_U519 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U510[l_U564] )))
            {
                if (IS_CHAR_IN_CAR( l_U510[l_U564], l_U519 ))
                {
                    if (l_U498)
                    {
                        sub_16357();
                        if (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_4042(), l_U519, 70.00000000, 70.00000000, 20.00000000, 0 ))
                        {
                            if (IS_CAR_ON_SCREEN( l_U519 ))
                            {
                                ;
                            }
                            GET_GAME_TIMER( ref l_U551 );
                            l_U552 = l_U551 - l_U559;
                            if (l_U552 > 1000)
                            {
                                if (l_U542 < l_U543)
                                {
                                    l_U542 += 1.00000000;
                                    GET_SCRIPT_TASK_STATUS( l_U510[l_U564], 29, ref l_U539 );
                                    if (l_U539 == 1)
                                    {
                                        GET_SEQUENCE_PROGRESS( l_U510[l_U564], ref uVar2 );
                                        GET_DRIVER_OF_CAR( l_U519, ref iVar3 );
                                        if (iVar3 == l_U510[l_U564])
                                        {
                                            SET_DRIVE_TASK_CRUISE_SPEED( l_U510[l_U564], l_U542 );
                                        }
                                        else
                                        {
                                            l_U485 = 8;
                                        }
                                    }
                                }
                                GET_GAME_TIMER( ref l_U559 );
                            }
                        }
                        else
                        {
                            GET_GAME_TIMER( ref l_U551 );
                            l_U552 = l_U551 - l_U559;
                            if (l_U552 > 1000)
                            {
                                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_4042(), l_U519, 80.00000000, 80.00000000, 10.00000000, 0 )))
                                {
                                    if (l_U542 > l_U544)
                                    {
                                        l_U542 -= 1.00000000;
                                        GET_SCRIPT_TASK_STATUS( l_U510[l_U564], 29, ref l_U539 );
                                        if (l_U539 == 1)
                                        {
                                            GET_SEQUENCE_PROGRESS( l_U510[l_U564], ref uVar2 );
                                            GET_DRIVER_OF_CAR( l_U519, ref iVar3 );
                                            if (iVar3 == l_U510[l_U564])
                                            {
                                                SET_DRIVE_TASK_CRUISE_SPEED( l_U510[l_U564], l_U542 );
                                            }
                                            else
                                            {
                                                l_U485 = 8;
                                            }
                                        }
                                    }
                                }
                                GET_GAME_TIMER( ref l_U559 );
                            }
                        }
                    }
                    else
                    {
                        GET_DRIVER_OF_CAR( l_U519, ref iVar3 );
                        if (NOT (iVar3 == l_U510[l_U564]))
                        {
                            l_U485 = 8;
                        }
                    }
                    if (NOT l_U490)
                    {
                        GET_CAR_HEALTH( l_U519, ref l_U563 );
                        if ((sub_17917()) || ((CHECK_STUCK_TIMER( l_U519, 2, 30000 )) || ((CHECK_STUCK_TIMER( l_U519, 0, 5000 )) || ((CHECK_STUCK_TIMER( l_U519, 1, 40000 )) || (l_U563 == 0)))))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U510[l_U564] )))
                            {
                                TASK_CAR_MISSION( l_U510[l_U564], l_U519, 0, 5, 0.50000000, 0, 3, 3 );
                                SET_CHAR_ACCURACY( l_U510[l_U564], 40 );
                            }
                            l_U490 = 1;
                            l_U485 = 7;
                        }
                        else if (l_U563 < 300)
                        {
                            l_U543 = 25;
                        }
                    }
                }
            }
        }
    }
    if (l_U485 == 8)
    {
        sub_2892();
        if (NOT (IS_CAR_DEAD( l_U519 )))
        {
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U519 ))
            {
                STOP_PLAYBACK_RECORDED_CAR( l_U519 );
            }
        }
        for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
        {
            if ((NOT (IS_CHAR_INJURED( l_U510[l_U545] ))) AND (NOT (IS_CHAR_DEAD( l_U510[l_U545] ))))
            {
                CLEAR_CHAR_TASKS( l_U510[l_U545] );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U510[l_U545], 0 );
                SET_CHAR_ACCURACY( l_U510[l_U545], 40 );
                TASK_COMBAT( l_U510[l_U545], sub_4042() );
            }
        }
    }
    if (NOT l_U491)
    {
        if (l_U498)
        {
            if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4042() ))
            {
                if (NOT l_U500)
                {
                    GET_GAME_TIMER( ref l_U548 );
                    l_U500 = 1;
                }
                else
                {
                    GET_GAME_TIMER( ref l_U551 );
                    l_U552 = l_U551 - l_U548;
                    if (l_U552 >= 2000)
                    {
                        if (NOT IS_MESSAGE_BEING_DISPLAYED())
                        {
                            sub_9971( ref l_U578, 1, 7500 );
                            l_U491 = 1;
                        }
                    }
                }
            }
            else if (l_U500)
            {
                l_U500 = 0;
            }
        }
    }
    else if (NOT l_U492)
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_4042() ))
        {
            if ((NOT sub_10665()) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                if (sub_10416() > 1)
                {
                    PRINT_HELP( ref l_U582 );
                    l_U492 = 1;
                }
            }
        }
    }
    return;
}

void sub_16357()
{
    sub_16377( ref l_U510[l_U564] );
    if (NOT (IS_CHAR_INJURED( l_U510[l_U564] )))
    {
        if (IS_VEH_DRIVEABLE( l_U519 ))
        {
            if (IS_CHAR_IN_CAR( l_U510[l_U564], l_U519 ))
            {
                GET_SCRIPT_TASK_STATUS( l_U510[l_U564], 29, ref l_U539 );
                if (l_U539 == 7)
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( l_U510[l_U564], 1067.93600000, 1808.48500000, 12.22970000, 20.00000000, 20.00000000, 3.00000000, 0 ))
                    {
                        TASK_CAR_MISSION( l_U510[l_U564], l_U519, 0, 5, 0.50000000, 0, 3, 3 );
                        l_U485 = 6;
                        sub_2892();
                    }
                }
            }
        }
    }
    return;
}

void sub_16377(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (l_U484)
    {
        PRINTNL();
        PRINTSTRING( "**** CALLED CONTROL_CHASE_HINT_CAM()" );
    }
    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref iVar3 );
    if ((IS_HINT_RUNNING()) AND (l_U482))
    {
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        if (iVar4 > (l_U483 + 500))
        {
            l_U482 = 0;
        }
    }
    if ((iVar3 != 4) AND ((NOT sub_16545()) AND ((NOT (IS_CHAR_DEAD( (uParam0^) ))) AND ((IS_CHAR_IN_ANY_CAR( sub_4042() )) AND (IS_CONTROL_PRESSED( 0, 51 ))))))
    {
        if ((IS_CHAR_IN_ANY_CAR( (uParam0^) )) AND (NOT IS_HINT_RUNNING()))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** LAUNCHING THE HINT_CAM" );
            }
            SET_CINEMATIC_BUTTON_ENABLED( 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 999999 );
            SET_HINT_TIMES( 500, 0, 0 );
            SET_HINT_FOV( 45.00000000 );
            GET_GAME_TIMER( ref l_U483 );
            l_U482 = 1;
            l_U481 = 0;
        }
    }
    else if (IS_HINT_RUNNING())
    {
        if ((NOT l_U482) AND (NOT l_U481))
        {
            if (l_U484)
            {
                PRINTNL();
                PRINTSTRING( "**** INTERP HINT_CAM BACK" );
            }
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, 0, 0, 0, 0 );
            HINT_CAM( 0.00000000, 0.00000000, 0.00000000, (uParam0^), 0, 0, 500 );
            SET_HINT_TIMES( 0, 0, 500 );
            SET_HINT_FOV( 45.00000000 );
            l_U481 = 1;
        }
    }
    else if (l_U481)
    {
        if (l_U484)
        {
            PRINTNL();
            PRINTSTRING( "**** DONE INTERP, RESETTING HINT_CAM VARIABLES" );
        }
        SET_CINEMATIC_BUTTON_ENABLED( 1 );
        SET_HINT_TIMES_DEFAULT();
        SET_HINT_FOV( -1 );
        l_U481 = 0;
    };;;
    return;
}

int sub_16545()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_17917()
{
    float fVar2;

    GET_CAR_UPRIGHT_VALUE( l_U519, ref fVar2 );
    if (fVar2 < 0.25000000)
    {
        GET_GAME_TIMER( ref l_U551 );
        l_U552 = l_U551 - l_U550;
        if (l_U552 > 7000)
        {
            return 1;
        }
    }
    else
    {
        GET_GAME_TIMER( ref l_U550 );
    }
    return 0;
}

void sub_18646()
{
    int I;
    float fVar3;

    if (NOT (IS_CHAR_INJURED( l_U510[l_U564] )))
    {
        GET_SCRIPT_TASK_STATUS( l_U510[l_U564], 49, ref l_U539 );
        if ((fVar3 <= 2.00000000) || (l_U539 == 7))
        {
            for ( I = 0; I < l_U546; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U510[I] )))
                {
                    OPEN_SEQUENCE_TASK( ref l_U538 );
                    if (IS_CHAR_IN_ANY_CAR( l_U510[I] ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1017.19100000, 1850.57500000, 15.83130000, 3, -1, 2.00000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1014.42500000, 1872.27900000, 19.08000000, 3, -1, 2.00000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1050.27200000, 1874.27100000, 19.11430000, 3, -1, 2.00000000 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1067.64900000, 1855.17200000, 19.08660000, 3, -1, 2.00000000 );
                    CLOSE_SEQUENCE_TASK( l_U538 );
                    TASK_PERFORM_SEQUENCE( l_U510[I], l_U538 );
                    CLEAR_SEQUENCE_TASK( l_U538 );
                }
            }
            l_U485 = 8;
        }
    }
    else
    {
        for ( I = 0; I < l_U546; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U510[I] )))
            {
                OPEN_SEQUENCE_TASK( ref l_U538 );
                if (IS_CHAR_IN_ANY_CAR( l_U510[I] ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1017.19100000, 1850.57500000, 15.83130000, 3, -1, 2.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1014.42500000, 1872.27900000, 19.08000000, 3, -1, 2.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1050.27200000, 1874.27100000, 19.11430000, 3, -1, 2.00000000 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1067.64900000, 1855.17200000, 19.08660000, 3, -1, 2.00000000 );
                CLOSE_SEQUENCE_TASK( l_U538 );
                TASK_PERFORM_SEQUENCE( l_U510[I], l_U538 );
                CLEAR_SEQUENCE_TASK( l_U538 );
            }
        }
        l_U485 = 8;
    }
    return;
}

void sub_19270()
{
    float fVar2;

    if (IS_VEH_DRIVEABLE( l_U519 ))
    {
        GET_CAR_SPEED( l_U519, ref fVar2 );
    }
    if (NOT (IS_CHAR_INJURED( l_U510[l_U564] )))
    {
        GET_SCRIPT_TASK_STATUS( l_U510[l_U564], 49, ref l_U539 );
        if ((fVar2 <= 2.00000000) || (l_U539 == 7))
        {
            for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                {
                    CLEAR_CHAR_TASKS( l_U510[l_U545] );
                    OPEN_SEQUENCE_TASK( ref l_U538 );
                    if (IS_CHAR_IN_ANY_CAR( l_U510[l_U545] ))
                    {
                        TASK_LEAVE_ANY_CAR( 0 );
                    }
                    TASK_COMBAT( 0, sub_4042() );
                    CLOSE_SEQUENCE_TASK( l_U538 );
                    TASK_PERFORM_SEQUENCE( l_U510[l_U545], l_U538 );
                    CLEAR_SEQUENCE_TASK( l_U538 );
                }
            }
            l_U485 = 8;
        }
    }
    else
    {
        for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
            {
                CLEAR_CHAR_TASKS( l_U510[l_U545] );
                OPEN_SEQUENCE_TASK( ref l_U538 );
                if (IS_CHAR_IN_ANY_CAR( l_U510[l_U545] ))
                {
                    TASK_LEAVE_ANY_CAR( 0 );
                }
                TASK_COMBAT( 0, sub_4042() );
                CLOSE_SEQUENCE_TASK( l_U538 );
                TASK_PERFORM_SEQUENCE( l_U510[l_U545], l_U538 );
                CLEAR_SEQUENCE_TASK( l_U538 );
            }
        }
        l_U485 = 8;
    }
    return;
}

void sub_19800()
{
    sub_19830( 5, "M2_CFAIL", "M2AUD", 0 );
    if (g_U9930 > 1)
    {
        if (IS_PLAYER_PLAYING( sub_4426() ))
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_4426(), 150 );
            SAY_AMBIENT_SPEECH( sub_4042(), "MISSION_FAIL_RAGE", 0, 0, 0 );
        }
    }
    l_U488 = 0;
    return;
}

void sub_19830(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    sub_19874( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_19874(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
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

void sub_20555()
{
    sub_20564();
    sub_32155( 32 );
    sub_19830( 5, "M2_CPASS", "M2AUD", 0 );
    TRIGGER_MISSION_COMPLETE_AUDIO( 52 );
    l_U488 = 0;
    return;
}

void sub_20564()
{
    sub_20573();
    return;
}

void sub_20573()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_20591();
    sub_20650( iVar2, iVar3, iVar4 );
    return;
}

void sub_20591()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_20650(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 5;
    sub_20682( iVar5, uParam0, uParam1, uParam2, "Contact_7" );
    return;
}

void sub_20682(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_20778( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_20778( ref cVar9 );
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
            sub_20778( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_20778( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_20778( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_20778( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_21355( iParam0, iVar7 );;;
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
                sub_21752( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_21752( 0, 4 );
            }
        }
    }
    if (NOT (sub_21841( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_4426(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_4426() );
    }
    sub_1596();
    bVar27 = true;
    uVar28 = sub_21355( iParam0, iVar7 );
    uVar29 = sub_1053( iParam0 );
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
                sub_31217( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_31647();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_31732( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_31789( iParam0 );
                sub_31828( 0 );
                sub_1494( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_31936();
        }
    }
    if (bParam2)
    {
        sub_31647();
        sub_32024();
        sub_31828( 0 );
    }
    if (bParam3)
    {
        sub_31647();
        sub_32064();
        sub_31828( 0 );
        sub_1494( uVar29, 0 );
    }
    sub_940();
    return;
}

void sub_20778(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_21355(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1452( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_21752(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_21841(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_22049( uParam1 );
        break;
        case 1:
        bVar8 = sub_24127( uParam1 );
        break;
        case 2:
        bVar8 = sub_24353( uParam1 );
        break;
        case 3:
        bVar8 = sub_24503( uParam1 );
        break;
        case 4:
        bVar8 = sub_24781( uParam1 );
        break;
        case 5:
        bVar8 = sub_25084( uParam1 );
        break;
        case 6:
        bVar8 = sub_25283( uParam1 );
        break;
        case 7:
        bVar8 = sub_25509( uParam1 );
        break;
        case 8:
        bVar8 = sub_25744( uParam1 );
        break;
        case 9:
        bVar8 = sub_26119( uParam1 );
        break;
        case 10:
        bVar8 = sub_26366( uParam1 );
        break;
        case 11:
        bVar8 = sub_26505( uParam1 );
        break;
        case 12:
        bVar8 = sub_26804( uParam1 );
        break;
        case 13:
        bVar8 = sub_27032( uParam1 );
        break;
        case 14:
        bVar8 = sub_27319( uParam1 );
        break;
        case 15:
        bVar8 = sub_27601( uParam1 );
        break;
        case 16:
        bVar8 = sub_27883( uParam1 );
        break;
        case 17:
        bVar8 = sub_28084( uParam1 );
        break;
        case 18:
        bVar8 = sub_28157( uParam1 );
        break;
        case 19:
        bVar8 = sub_28371( uParam1 );
        break;
        case 20:
        bVar8 = sub_28624( uParam1 );
        break;
        case 21:
        bVar8 = sub_28871( uParam1 );
        break;
        case 22:
        bVar8 = sub_29072( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_23732( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_21355( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_29395( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_22049(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_22328( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_22328( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_22328( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_22328( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_22328( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_22328( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_22328( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_22328( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_22328( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_22328( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_22328( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_22328( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_22328( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_22328( iVar3, 0, 3, 1, 0, 0 );
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
        sub_22328( iVar3, 0, sub_23610(), sub_23876(), 0, 0 );
        break;
        default:
        sub_24035( "Friend 1", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Friend 1", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_22328(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_22339( uParam1 );
    sub_22513( uParam0, 0, uParam2 );
    sub_22513( uParam0, 1, uParam3 );
    sub_22513( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_20591();
    return;
}

void sub_22339(unknown uParam0)
{
    ADD_SCORE( sub_4426(), uParam0 );
    sub_22364( uParam0 );
    return;
}

void sub_22364(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1452( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_22513(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_22670( uParam0 );
    }
    return;
}

void sub_22670(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
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
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
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

int sub_23610()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_23732( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_23732(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_23876()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_23732( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_24035(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_24127(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22328( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_24035( "Contact 2", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 2", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24353(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_22328( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_24035( "Girl 3", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Girl 3", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24503(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_22328( iVar3, 0, sub_23610(), sub_23876(), 0, 0 );
        break;
        default:
        sub_24035( "Friend 4", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Friend 4", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_24781(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22328( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_22328( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_22328( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_22328( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_24035( "Contact 5", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 5", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25084(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_24035( "Contact 7", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 7", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25283(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22328( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_24035( "Contact 7b", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 7b", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25509(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_22328( iVar3, 0, sub_23610(), sub_23876(), 0, 0 );
        break;
        default:
        sub_24035( "Friend 8", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Friend 8", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25744(unknown uParam0)
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
        sub_22328( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_22328( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_22328( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_22328( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_22328( iVar3, 0, sub_23610(), sub_23876(), 0, 0 );
        break;
        default:
        sub_24035( "Friend 9", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Friend 9", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26119(unknown uParam0)
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
        sub_22328( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_22328( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_22328( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_24035( "Contact 10", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_24035( "Contact 10", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26366(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_24035( "Girl 11", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Girl 11", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26505(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22328( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_22328( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_22328( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_22328( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_22328( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_24035( "Contact 12", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 12", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26804(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22328( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_24035( "Contact 13", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 13", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27032(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_22328( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_22328( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_22328( iVar3, 0, sub_23610(), sub_23876(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_24035( "Friend 15", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Friend 15", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27319(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22328( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_22328( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_22328( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_24035( "Contact 16", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 16", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27601(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_22328( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_22328( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_22328( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_24035( "Contact 18", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 18", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27883(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_24035( "Contact 19", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 19", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28084(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_24035( "Girl 20", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28157(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_24035( "Contact 21", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 21", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28371(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22328( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_22328( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_24035( "Contact 22", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 22", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28624(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_22328( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_22328( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_22328( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_24035( "Contact 24", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 24", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28871(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_22328( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_22328( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_22328( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_24035( "Contact 25", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_24035( "Contact 25", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29072(unknown uParam0)
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
        sub_22328( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_24035( "Girl 26", 1 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_24035( "Girl 26", 0 );
        sub_22328( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_29395(int iParam0, int iParam1)
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
    if (sub_29443( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_30174( iParam1 );
    }
    return;
}

int sub_29443(int iParam0, int iParam1)
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
            sub_29583( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_29583(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_29765( 0 );
    return;
}

void sub_29765(boolean bParam0)
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
        sub_30020();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_30020()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_30174(int iParam0)
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
        sub_30507( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_30507( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_30507( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_30507( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_30507( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_30507( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_30507( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_30507( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_30507( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_30507( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_30507( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_30507( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_30507( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_30507( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_30507( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_30507( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_30507( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_30507( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_30507( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_30507(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_31217(unknown uParam0, unknown uParam1)
{
    sub_31236( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_31236(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_31647()
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

int sub_31732(int iParam0, int iParam1)
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

void sub_31789(unknown uParam0)
{
    sub_839();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_31828(unknown uParam0)
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

void sub_31936()
{
    sub_31945();
    return;
}

void sub_31945()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_32024()
{
    sub_31945();
    return;
}

void sub_32064()
{
    sub_31945();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_32155(unknown uParam0)
{
    switch (uParam0)
    {
        case 21:
        if (g_U1965[0] == 0)
        {
            sub_32310( ref g_U1967[0], 4, 0, 0 );
            g_U1965[0] = 1;
        }
        break;
        case 22:
        if (g_U1984[0] == 0)
        {
            sub_32310( ref g_U1986[0], 4, 0, 0 );
            g_U1984[0] = 1;
        }
        break;
        case 23:
        if (g_U2003[0] == 0)
        {
            sub_32310( ref g_U2005[0], 4, 0, 0 );
            g_U2003[0] = 1;
        }
        break;
        case 24:
        if (g_U2022[0] == 0)
        {
            sub_32310( ref g_U2024[0], 4, 0, 0 );
            g_U2022[0] = 1;
        }
        break;
        case 25:
        if (g_U2041[0] == 0)
        {
            sub_32310( ref g_U2043[0], 4, 0, 0 );
            g_U2041[0] = 1;
        }
        break;
        case 26:
        if (g_U2060[0] == 0)
        {
            sub_32310( ref g_U2062[0], 4, 0, 0 );
            g_U2060[0] = 1;
        }
        break;
        case 27:
        if (g_U2079[0] == 0)
        {
            sub_32310( ref g_U2081[0], 4, 0, 0 );
            g_U2079[0] = 1;
        }
        break;
        case 28:
        if (g_U2098[0] == 0)
        {
            sub_32310( ref g_U2100[0], 4, 0, 0 );
            g_U2098[0] = 1;
        }
        break;
        case 29:
        if (g_U2117[0] == 0)
        {
            sub_32310( ref g_U2119[0], 4, 0, 0 );
            g_U2117[0] = 1;
        }
        break;
        case 30:
        if (g_U2136[0] == 0)
        {
            sub_32310( ref g_U2138[0], 4, 0, 0 );
            g_U2136[0] = 1;
        }
        break;
        case 31:
        if (g_U2155[0] == 0)
        {
            sub_32310( ref g_U2157[0], 4, 0, 0 );
            g_U2155[0] = 1;
        }
        break;
        case 32:
        if (g_U2174[0] == 0)
        {
            sub_32310( ref g_U2176[0], 4, 0, 0 );
            g_U2174[0] = 1;
        }
        break;
        case 33:
        if (g_U2193[0] == 0)
        {
            sub_32310( ref g_U2195[0], 4, 0, 0 );
            g_U2193[0] = 1;
        }
        break;
        case 34:
        if (g_U2212[0] == 0)
        {
            sub_32310( ref g_U2214[0], 4, 0, 0 );
            g_U2212[0] = 1;
        }
        break;
    }
    return;
}

void sub_32310(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_32363( iParam0, uParam1, uParam2 );
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
        sub_32495( iParam0 + 0 );
    }
    return;
}

void sub_32363(int iParam0, int iParam1, int iParam2)
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
        sub_32495( iParam0 + 0 );
    }
    return;
}

void sub_32495(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_32526( iParam0->_fU4 )))
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

int sub_32526(unknown uParam0)
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

void sub_33801()
{
    if (IS_KEYBOARD_KEY_PRESSED( 31 ))
    {
        sub_14128();
    }
    if (IS_KEYBOARD_KEY_PRESSED( 33 ))
    {
        sub_14980();
    }
    if (IS_KEYBOARD_KEY_PRESSED( 36 ))
    {
        while (IS_KEYBOARD_KEY_PRESSED( 36 ))
        {
            WAIT( 0 );
        }
        switch (l_U485)
        {
            case 2:
            if (NOT (IS_CHAR_IN_ANY_CAR( sub_4042() )))
            {
                if (NOT (IS_VEH_DRIVEABLE( l_U520 )))
                {
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U520 );
                    CREATE_CAR( l_U569, 647.52250000, 1496.72100000, 17.12900000, ref l_U520, 1 );
                    SET_CAR_HEADING( l_U520, 222.74460000 );
                    WARP_CHAR_INTO_CAR( sub_4042(), l_U520 );
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U520 );
                }
                else
                {
                    WARP_CHAR_INTO_CAR( sub_4042(), l_U520 );
                }
            }
            else
            {
                SET_CHAR_COORDINATES( sub_4042(), 647.52250000, 1496.72100000, 17.12900000 );
                SET_CHAR_HEADING( sub_4042(), 222.74460000 );
            }
            break;
            case 3: break;
            case 4:
            for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                {
                    EXPLODE_CHAR_HEAD( l_U510[l_U545] );
                }
            }
            break;
            case 5:
            for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                {
                    EXPLODE_CHAR_HEAD( l_U510[l_U545] );
                }
            }
            break;
            case 8:
            for ( l_U545 = 0; l_U545 < l_U546; l_U545++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U510[l_U545] )))
                {
                    EXPLODE_CHAR_HEAD( l_U510[l_U545] );
                }
            }
            break;
        }
    }
    return;
}

