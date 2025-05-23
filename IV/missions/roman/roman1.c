void main()
{
    l_U0 = -1;
    l_U12 = 0;
    l_U13 = 1;

    l_U14 = 3;
    l_U16 = 0;
    l_U33 = -1;

    l_U37 = 0;
    l_U38 = 1;
    l_U39 = 1;

    l_U47 = 150.00000000;
    l_U137 = 0;
    l_U138 = 150.00000000;

    l_U188 = 0;
    l_U489 = 0;
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
    
    // Seems to be mobile radio station flag
    // l_U508 = mobileRadioStationFlag
    mobileRadioStationFlag = 0;
    l_U509 = 0;

    l_U510 = 0;

    l_U511 = {903.04500000, -504.24800000, 16.35800000};
    l_U514 = {765.15260000, -178.91510000, 4.90710000};
    l_U517 = {768.52840000, -247.59770000, 4.81640000};
    l_U520 = {896.00000000, -504.00000000, 15.00000000};

    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_276();
        sub_2386();
    }

    SET_MISSION_FLAG( 1 );
    WAIT( 0 );

    FREEZE_RADIO_STATION( "VLADIVOSTOK" );
    FORCE_RADIO_TRACK( "VLADIVOSTOK", "RADIO_STATION_VLADIVOSTOK_INTRO_TRACK", 2, 9 );
    FORCE_INITIAL_PLAYER_STATION( "VLADIVOSTOK" );

    DESTROY_ALL_CAMS();
    CLEAR_AREA( 756.77450000, -214.40330000, 4.50000000, 2000.00000000, 1 );

    SET_NO_RESPRAYS( 1 );

    l_U503 = 1;
    SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 1 );
    SWITCH_GARBAGE_TRUCKS( 0 );

    if (DOES_VEHICLE_EXIST( romansCar ))
    {
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( CurrentPlayerChar(), 758.47020000, -216.85040000, 4.81880000 );
        }
        else
        {
            SET_CHAR_COORDINATES( CurrentPlayerChar(), 758.47020000, -216.85040000, 4.81880000 );
        }
        DELETE_CAR( ref romansCar );
    }

    if (DOES_CHAR_EXIST( l_U524 ))
    {
        DELETE_CHAR( ref l_U524 );
    }

    LOAD_ADDITIONAL_TEXT( "ROMAN1", 0 );
    LOAD_ADDITIONAL_TEXT( "R1AUD", 6 );

    sub_3979( "R1AUD" );
    sub_4106( 0, CurrentPlayerChar(), "NIKO", 0 );

    // Setup the player
    SET_CHAR_COORDINATES_NO_OFFSET( CurrentPlayerChar(), 758.47020000, -216.85040000, 4.81880000 );
    REMOVE_ALL_CHAR_WEAPONS( CurrentPlayerChar() );
    SET_CHAR_HEALTH( CurrentPlayerChar(), 200 );
    ADD_ARMOUR_TO_CHAR( CurrentPlayerChar(), 0 );
    STORE_SCORE( CurrentPlayerId(), ref l_U493 );

    l_U493 *= -1;
    ADD_SCORE( CurrentPlayerId(), l_U493 );
    CLEAR_WANTED_LEVEL( CurrentPlayerId() );
    //

    // Override the players restart
    if (NOT g_U0)
    {
        OVERRIDE_NEXT_RESTART( 758.47020000, -216.85040000, 4.81880000, 0.00000000 );
    }

    SET_PLAYER_MOOD_NORMAL( CurrentPlayerId() );

    SET_WANTED_MULTIPLIER( 0.10000000 );
    SET_TIME_OF_DAY( 5, 15 );

    FORCE_WEATHER_NOW( 0 );
    REQUEST_IPL( "Shipintro" );

    LOAD_ALL_OBJECTS_NOW();
    CLEAR_PRINTS();

    sub_4491();

    while (true)
    {
        WAIT( 0 );
        if (l_U489 == 1)
        {
            sub_7365();
        }
        switch (l_U489)
        {
            case 1:
            sub_9759();
            break;
            case 2:
            sub_12597();
            break;
        }
        if (l_U506 == 1)
        {
            if (NOT sub_7374())
            {
                sub_10014( 1 );
            }
            if (NOT sub_9778())
            {
                sub_10014( 2 );
            }
        }
    }
    return;
}

void sub_276()
{
    sub_285();
    return;
}

void sub_285()
{
    int iVar2;

    iVar2 = 0;
    sub_299( iVar2 );
    sub_1475( iVar2 );
    return;
}

void sub_299(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_343();
        sub_504();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_612();
            sub_651();
        }
    }
    sub_727();
    sub_828();
    uVar5 = sub_941( uParam0 );
    sub_1382( uVar5, 0 );
    return;
}

void sub_343()
{
    sub_357( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_457();
    }
    return;
}

void sub_357(int iParam0)
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

void sub_457()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_504()
{
    sub_513();
    return;
}

void sub_513()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_612()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_651()
{
    sub_660();
    return;
}

void sub_660()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_727()
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

void sub_828()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_850();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_850()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_941(unknown uParam0)
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
    sub_1340( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1340(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1382(int iParam0, boolean bParam1)
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

void sub_1475(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1484();
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
        sub_2259();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1484()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_1522( 5, g_U569[I] )) == 1))
        {
            if ((sub_1522( 1, g_U569[I] )) != 0)
            {
                sub_1808( I );
            }
        }
    }
    if (NOT sub_1974())
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

int sub_1522(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1808(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_1893( g_U569 - 1 );
    return;
}

void sub_1893(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_1974()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1522( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2259()
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

void sub_2386()
{
    if (DOES_BLIP_EXIST( l_U526 ))
    {
        SET_ROUTE( l_U526, 0 );
    }
    else
    {
        SET_ROUTE( l_U526, 0 );
    }
    SWITCH_GARBAGE_TRUCKS( 1 );
    ENABLE_SCENE_STREAMING( 1 );
    sub_2464( ref l_U531, 1 );
    sub_2464( ref l_U537, 1 );
    REMOVE_BLIP( l_U527 );
    REMOVE_BLIP( l_U526 );
    sub_2623( 0 );
    if (NOT g_U0)
    {
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
            SET_PLAYER_CONTROL_ON_IN_MISSION_CLEANUP( 0 );
        }
    }
    else
    {
        SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 0 );
    }
    SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( CurrentPlayerChar(), 1 );
    sub_3462( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2464(int iParam0, unknown uParam1)
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

void sub_2623(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_2634( uParam0 ) );
    return;
}

// TODO Label these ped hashes later
int sub_2634(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            // Roman 2
            return 558221221;
        }
        // Roman 1
        return -1992728631;
        
        // Vlad
        case 1: return 896408642;
        
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            // Lil Jacob 2
            return -1275031987;
        }
        // Lil Jacob 1
        return 1487004273;

        case 4: return 57218969;
        
        case 5: return 1445589009;
        
        case 6: return 155063868;
        
        case 7: return -617264103;
        
        case 8: return -1729980128;
        
        case 9: return 1794146792;
        
        case 11: return 1710545037;
        
        case 12: return -1775659292;
        
        case 13: return 1690783035;
        
        case 14: return 954215094;
        
        case 15: return 809067472;
        
        case 16: return 1169442297;
        
        case 17: return 1872110126;
        
        case 18: return 1500493064;
        
        case 19: return -1826458934;
        
        case 22: return -366421228;
        
        case 20: return -379234846;
        
        case 24: return 237511807;
        
        case 25: return 237497537;
        
        case 26: return -1040287406;
        
        case 27: return -357652594;
        
        case 52: return 2129490787;
        
        case 53: return 386513184;
        
        case 2: return -1080659212;
        
        case 10: return -773750838;
        
        case 28: return -1788328884;
        
        case 29: return 1056837725;
        
        case 30: return -292713088;
        
        case 31:
        
        case 32: return -292713088;
    }
    sub_1340( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

// sub_3335
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}


// sub_3412
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_3462(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 <= 8) AND (g_U8392 >= 4))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_3979(unknown uParam0)
{
    StrCopy( ref l_U189._fU0, uParam0, 16 );
    sub_3998();
    return;
}

void sub_3998()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U189._fU16[I]._fU0 = nil;
        StrCopy( ref l_U189._fU16[I]._fU4, "", 32 );
        l_U189._fU344[I] = 0;
    }
    return;
}

void sub_4106(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U189._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U189._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4190( "\n PED NUMBER ", uParam0 );
    sub_4230( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4190(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4230(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4491()
{
    vector vVar2;

    if (NOT g_U64715)
    {
        SET_CUTSCENE_EXTRA_ROOM_POS( 65195, 64043, 24 );
        WAIT( 0 );
        START_CUTSCENE_NOW( "intro" );
        vVar2 = {766.17150000, -199.59580000, 4.95820000};
        FORCE_SPAWN_SCENARIO_PEDS_IN_AREA( vVar2, 30, 6 );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        SET_PED_NON_REMOVAL_AREA( l_U514, l_U517 );
        CLEAR_AREA( 756.77450000, -214.40330000, 4.50000000, 2000.00000000, 1 );
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
            SET_TIME_OF_DAY( 5, 15 );
            if (NOT mobileRadioStationFlag)
            {
                if (GET_CUTSCENE_AUDIO_TIME_MS() >= 124500)
                {
                    // TODO Look into this
                    // Possibly a way to set a mobile radio station
                    RETUNE_RADIO_TO_STATION_NAME( "VLADIVOSTOK" );
                    SET_MOBILE_PHONE_RADIO_STATE( 1 );
                    mobileRadioStationFlag = 1;
                }
            }
            if (NOT l_U509)
            {
                if (GET_CUTSCENE_AUDIO_TIME_MS() >= 144500)
                {
                    UNFREEZE_RADIO_STATION( "VLADIVOSTOK" );
                    l_U509 = 1;
                }
            }
            if (NOT l_U510)
            {
                if (5 == GET_CUTSCENE_SECTION_PLAYING())
                {
                    if ((sub_4847( 0 )) AND (HAS_MODEL_LOADED( -1932515764 )))
                    {
                        if (GET_CUTSCENE_TIME() >= 30000)
                        {
                            sub_4900();
                            l_U510 = 1;
                        }
                    }
                    else
                    {
                        REQUEST_MODEL( -1932515764 );
                        sub_7038( 0 );
                    }
                }
            }
        }
        CLEAR_NAMED_CUTSCENE( "Vla3_a" );
        g_U64715 = 1;
    }
    if ((IS_SCREEN_FADING_OUT()) || (IS_SCREEN_FADED_OUT()))
    {
        REQUEST_MODEL( -1932515764 );
        sub_7038( 0 );
        LOAD_ALL_OBJECTS_NOW();
        while ((NOT (sub_4847( 0 ))) || (NOT (HAS_MODEL_LOADED( -1932515764 ))))
        {
            WAIT( 0 );
        }
        sub_4900();
        UNFREEZE_RADIO_STATION( "VLADIVOSTOK" );
        SKIP_RADIO_FORWARD();
        LOAD_SCENE( 756.77450000, -214.40330000, 5.82230000 );
        DO_SCREEN_FADE_IN( 1000 );
    }
    l_U504 = 0;
    SETTIMERA( 0 );
    SETTIMERB( 0 );
    l_U489 = 1;
    l_U490 = 0;
    RELEASE_WEATHER();
    SET_TIME_OF_DAY( 4, 30 );
    SET_FOLLOW_VEHICLE_CAM_SUBMODE( 2 );
    SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
    SET_CAM_BEHIND_PED( CurrentPlayerChar() );
    return;
}

void sub_4847(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_2634( uParam0 ) );
}

void sub_4900()
{
    if (NOT l_U506)
    {
        CLEAR_PED_NON_REMOVAL_AREA();
        REMOVE_IPL( "Shipintro" );
        PICKUPS_PASS_TIME( 9999999 );

        // Create romans taxi
        CREATE_CAR( -1932515764, 757.03310000, -215.88500000, 4.61910000, ref romansCar, 1 );
        SET_VEHICLE_ALPHA( romansCar, 255 );

        // Set the car color
        CHANGE_CAR_COLOUR( romansCar, 0, 1 );
        SET_EXTRA_CAR_COLOURS( romansCar, 1, 0 );
        
        // Set the car to be strong
        SET_CAR_STRONG( romansCar, 1 );
        SET_VEH_HAS_STRONG_AXLES( romansCar, 1 );

        SET_VEHICLE_DIRT_LEVEL( romansCar, 15.90000000 );
        
        // Set car colors
        CHANGE_CAR_COLOUR( romansCar, 0, 0 );
        SET_EXTRA_CAR_COLOURS( romansCar, 1, 0 );
        
        ADD_UPSIDEDOWN_CAR_CHECK( romansCar );

        // Set the heading, engine on, and on ground properly.
        SET_CAR_HEADING( romansCar, 338.00000000 );
        SET_CAR_ENGINE_ON( romansCar, 1, 1 );
        SET_CAR_ON_GROUND_PROPERLY( romansCar );

        SUPPRESS_CAR_MODEL( -1932515764 );

        // Warp the player into the car
        WARP_CHAR_INTO_CAR( CurrentPlayerChar(), romansCar );
        FORCE_CAR_LIGHTS( romansCar, 2 );
        //

        sub_5229( 0, ref l_U524, 769.38710000, -259.33010000, 4.58130000, 329.54000000 );
        SET_CHAR_STAY_IN_CAR_WHEN_JACKED( l_U524, 1 );
        sub_4106( 1, l_U524, "ROMAN", 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U524, 23 );
        SET_RELATIONSHIP( 0, 23, 0 );
        SET_ROMANS_MOOD( 3 );
        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U524, romansCar, 0 );
        SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U524, 0 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( CurrentPlayerChar(), 0 );
        SET_CHAR_SUFFERS_CRITICAL_HITS( l_U524, 1 );
        l_U506 = 1;
    }
    return;
}

// I think this is creating Roman for the first mission.
void sub_5229(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_2634( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    
    // This is setting a couple values, and running sub_5291
    sub_5279( uParam0, (uParam1^) );
    return;
}

void sub_5279(unknown uParam0, unknown uParam1)
{
    sub_5291( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

// Make Roman not be able to be hit with critical hits.
// Disable being dragged out of the vehicle, disabled targeting Roman, set the max time in water and underwater.
// Also run a couple other tasks.
void sub_5291(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_5385( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_5929( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

// I think this is setting the clothes for Roman or something, unsure of it.
void sub_5385(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_5929(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_5385( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_5385( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_5385( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_5385( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_5385( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_5385( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_5385( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_5385( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_5385( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_5385( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_5385( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_5385( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_5385( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_7038(unknown uParam0)
{
    REQUEST_MODEL( sub_2634( uParam0 ) );
    return;
}

void sub_7365()
{
    if (sub_7374())
    {
        if (IS_VEH_DRIVEABLE( romansCar ))
        {
            if (IS_CHAR_SITTING_IN_CAR( CurrentPlayerChar(), romansCar ))
            {
                if (l_U499 == 0)
                {
                    REMOVE_BLIP( l_U527 );
                    REMOVE_BLIP( l_U526 );
                    l_U511._fU8 -= 2;
                    ADD_BLIP_FOR_COORD( l_U511._fU0, l_U511._fU4, l_U511._fU8, ref l_U526 );
                    l_U511._fU8 += 2;
                    SET_ROUTE( l_U526, 1 );
                    if (NOT l_U503)
                    {
                        if (sub_7620( l_U537 ))
                        {
                            sub_2464( ref l_U537, 1 );
                        }
                        sub_7823( "R1_GO", ref l_U555, 6, 1 );
                    }
                    SETTIMERB( 0 );
                    l_U500 = 0;
                    l_U507 = 1;
                    l_U499 = 1;
                }
                if (l_U497)
                {
                    if (NOT sub_8814())
                    {
                        if (TIMERB() > 200)
                        {
                            if (NOT l_U503)
                            {
                                PRINT_NOW( "GODTEXT2", 7500, 1 );
                                SETTIMERB( 0 );
                                l_U503 = 1;
                            }
                            else if (TIMERB() > 3000)
                            {
                                sub_8946( "R1_B1AV1B", ref l_U531, 6, 1 );
                                l_U497 = 0;
                            }
                        }
                    }
                }
            }
            else if (l_U499 == 1)
            {
                l_U497 = 1;
                if (sub_7620( l_U531 ))
                {
                    sub_9108( ref l_U531 );
                }
                if (sub_7620( l_U549 ))
                {
                    sub_2464( ref l_U549, 1 );
                }
                SET_ROUTE( l_U526, 0 );
                CLEAR_PRINTS();
                REMOVE_BLIP( l_U527 );
                REMOVE_BLIP( l_U526 );
                ADD_BLIP_FOR_CAR( romansCar, ref l_U527 );
                SET_BLIP_AS_FRIENDLY( l_U527, 1 );
                sub_7823( "R1_BACK", ref l_U537, 6, 1 );
                l_U507 = 0;
                l_U499 = 0;
                l_U503 = 0;
                SETTIMERB( 0 );
            }
            else if (NOT (sub_7620( l_U537 )))
            {
                if (TIMERB() > 500)
                {
                    if (l_U500 == 0)
                    {
                        PRINT_NOW( "GODTEXT3", 7500, 1 );
                        SETTIMERB( 0 );
                        l_U500 = 1;
                    }
                }
            };;;
        }
    }
    return;
}

int sub_7374()
{
    if (DOES_CHAR_EXIST( l_U524 ))
    {
        if (IS_CHAR_INJURED( l_U524 ))
        {
            return 0;
        }
        else
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_7620(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_7732( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_7732( "\n speech is not playing" );
    }
    return 0;
}

void sub_7732(unknown uParam0)
{
    return;
}

void sub_7823(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_7846( uParam0, ref l_U189._fU0, uParam1, uParam2, uParam3 );
}

void sub_7846(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_7900( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_7900(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7922( iParam1 )))
    {
        return 0;
    }
    l_U189._fU384 = 0;
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
    sub_8602( ref g_U8395, ref l_U189 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_7922(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_7732( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_7732( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_7732( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_8602(int iParam0, int iParam1)
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

void sub_8814()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_8946(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_8969( uParam0, ref l_U189._fU0, uParam1, uParam2, uParam3 );
}

int sub_8969(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_7900( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_9108(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_7732( "\n already paused" );
    }
    else if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 1 )) + 1;
            sub_7732( "\n CONVERSATION PAUSED AT LINE " );
            sub_9248( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_7732( "\n NOT pausing the line as scripted and global speech id dont match" );
        }
    }
    else
    {
        sub_7732( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_7732( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_9248(unknown uParam0)
{
    return;
}

void sub_9759()
{
    if (sub_7374())
    {
        if (sub_9778())
        {
            if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), l_U511._fU0, l_U511._fU4, l_U511._fU8, 2.50000000, 2.50000000, 2.50000000, l_U507 ))
            {
                if ((sub_10458( 1, 1 )) AND ((IS_CHAR_SITTING_IN_CAR( CurrentPlayerChar(), romansCar )) AND (IS_CHAR_SITTING_IN_CAR( l_U524, romansCar ))))
                {
                    STOP_PED_SPEAKING( l_U524, 1 );
                    SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
                    l_U489 = 2;
                }
            }
            else if (NOT l_U501)
            {
                if ((IS_CHAR_SITTING_IN_CAR( l_U524, romansCar )) AND (IS_CHAR_SITTING_IN_CAR( CurrentPlayerChar(), romansCar )))
                {
                    if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), 814.30760000, -258.47090000, 22.06340000, 30.00000000, 20.00000000, 10.00000000, 0 ))
                    {
                        if (NOT l_U504)
                        {
                            if (sub_7620( l_U531 ))
                            {
                                sub_9108( ref l_U531 );
                                l_U504 = 1;
                            }
                        }
                        else if (NOT sub_8814())
                        {
                            sub_7823( "R1_DEPOT", ref l_U543, 6, 1 );
                            l_U501 = 1;
                            SETTIMERB( 0 );
                        }
                    }
                    else if (l_U504)
                    {
                        if (NOT sub_8814())
                        {
                            sub_8946( "R1_B1AV1B", ref l_U531, 6, 1 );
                            l_U504 = 0;
                        }
                    }
                }
            }
            else if (NOT l_U502)
            {
                if ((IS_CHAR_SITTING_IN_CAR( l_U524, romansCar )) AND (IS_CHAR_SITTING_IN_CAR( CurrentPlayerChar(), romansCar )))
                {
                    if (TIMERB() > 7500)
                    {
                        if (NOT sub_8814())
                        {
                            sub_8946( "R1_B1AV1B", ref l_U531, 6, 1 );
                            l_U502 = 1;
                        }
                    }
                }
            }
            if (sub_9778())
            {
                if ((IS_CHAR_SITTING_IN_CAR( l_U524, romansCar )) AND (IS_CHAR_SITTING_IN_CAR( CurrentPlayerChar(), romansCar )))
                {
                    if (l_U491 > 0)
                    {
                        switch (l_U491)
                        {
                            case 1:
                            if (TIMERA() >= 500)
                            {
                                if ((TIMERB() > 500) AND (NOT sub_8814()))
                                {
                                    PRINT_NOW( "GODTEXT2", 7500, 1 );
                                    SETTIMERA( 0 );
                                    l_U491 = 2;
                                }
                            }
                            break;
                            case 2:
                            if (TIMERA() >= 3000)
                            {
                                PRINT_HELP( "HELP4" );
                                SETTIMERA( 0 );
                                l_U491 = 3;
                            }
                            break;
                            case 3:
                            if (TIMERA() >= 9000)
                            {
                                PRINT_HELP( "HELP1" );
                                SETTIMERA( 0 );
                                l_U491 = 4;
                            }
                            break;
                            case 4:
                            if (TIMERA() >= 9000)
                            {
                                FLASH_ROUTE( 1 );
                                PRINT_HELP( "HELP6" );
                                l_U491 = 5;
                                SETTIMERA( 0 );
                            }
                            break;
                            case 5:
                            if (TIMERA() >= 9000)
                            {
                                FLASH_ROUTE( 0 );
                                PRINT_HELP( "HELP2" );
                                if (DOES_BLIP_EXIST( l_U526 ))
                                {
                                    FLASH_BLIP( l_U526, 1 );
                                }
                                l_U491 = 6;
                                SETTIMERA( 0 );
                            }
                            break;
                            case 6:
                            if (TIMERA() >= 9000)
                            {
                                PRINT_HELP( "HELP5" );
                                g_U15654[9] = 1;
                                if (DOES_BLIP_EXIST( l_U526 ))
                                {
                                    FLASH_BLIP( l_U526, 0 );
                                }
                                l_U491 = 7;
                                SETTIMERA( 0 );
                            }
                            break;
                            case 7:
                            if (TIMERA() >= 9000)
                            {
                                PRINT_HELP( "DIPPED" );
                                l_U491 = 8;
                                SETTIMERA( 0 );
                            }
                            break;
                        }
                        if (NOT l_U505)
                        {
                            if (l_U491 > 3)
                            {
                                if ((IS_CHAR_SITTING_IN_CAR( l_U524, romansCar )) AND (IS_CHAR_SITTING_IN_CAR( CurrentPlayerChar(), romansCar )))
                                {
                                    if (NOT (sub_7620( l_U531 )))
                                    {
                                        if (sub_7823( "R1_B1AV1B", ref l_U531, 6, 1 ))
                                        {
                                            l_U505 = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                    else if (l_U491 == 0)
                    {
                        if (TIMERA() >= 1700)
                        {
                            if (sub_7823( "R1_DIR", ref l_U549, 6, 1 ))
                            {
                                SETTIMERA( 0 );
                                SETTIMERB( 0 );
                                REQUEST_MODEL( 727183653 );
                                l_U491 = 1;
                            }
                        }
                    }
                }
            }
            if (NOT (l_U489 >= 2))
            {
                if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U520._fU0, l_U520._fU4, l_U520._fU8, 1.50000000, -2113580896 ))
                {
                    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -2113580896, l_U520, 1, 0.00000000 );
                }
            }
            else if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( l_U520._fU0, l_U520._fU4, l_U520._fU8, 1.50000000, -2113580896 ))
            {
                SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -2113580896, l_U520, 0, 0.00000000 );
            }
        }
    }
    return;
}

int sub_9778()
{
    if (IS_VEH_DRIVEABLE( romansCar ))
    {
        if (l_U490 == 0)
        {
            if (sub_9821( romansCar ))
            {
                sub_10014( 4 );
            }
            if (NOT (CHECK_STUCK_TIMER( romansCar, 3, 60000 )))
            {
                if (NOT (CHECK_STUCK_TIMER( romansCar, 2, 30000 )))
                {
                    if (NOT (CHECK_STUCK_TIMER( romansCar, 1, 40000 )))
                    {
                        if (NOT (CHECK_STUCK_TIMER( romansCar, 0, 5000 )))
                        {
                            return 1;
                        }
                    }
                }
            }
            sub_10014( 3 );
        }
        else
        {
            return 1;
        }
    }
    else
    {
        sub_10014( 2 );
    }
    return 0;
}

int sub_9821(unknown uParam0)
{
    int iVar3;

    if (g_U9079 == 0)
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            if (NOT (IS_CHAR_IN_CAR( CurrentPlayerChar(), uParam0 )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( CurrentPlayerChar(), uParam0, 100.00000000, 100.00000000, 0 )))
                {
                    return 1;
                }
                if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_2D( CurrentPlayerChar(), uParam0, 50.00000000, 50.00000000, 0 )))
                {
                    GET_GAME_TIMER( ref iVar3 );
                    if ((iVar3 - l_U15) >= 180000)
                    {
                        return 1;
                    }
                }
                else
                {
                    GET_GAME_TIMER( ref l_U15 );
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U15 );
            }
        }
    }
    return 0;
}

void sub_10014(unknown uParam0)
{
    sub_10023();
    switch (uParam0)
    {
        case 0:
        SCRIPT_ASSERT( "ErrorString" );
        break;
        case 1:
        PRINT_NOW( "FAIL1", 7000, 1 );
        break;
        case 2:
        PRINT_NOW( "FAIL2", 7000, 1 );
        break;
        case 3:
        PRINT_NOW( "FAIL3", 7000, 1 );
        break;
        case 4:
        PRINT_NOW( "FAIL4", 7000, 1 );
        break;
    }
    CLEAR_CHAR_TASKS( CurrentPlayerChar() );
    WAIT( 2000 );
    if (NOT (IS_PLAYER_CONTROL_ON( CurrentPlayerId() )))
    {
        DESTROY_ALL_CAMS();
        g_U8219 = 1;
        sub_10360();
        DISPLAY_RADAR( 1 );
        SET_CAM_BEHIND_PED( CurrentPlayerChar() );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_CHAR_VISIBLE( CurrentPlayerChar(), 1 );
    }
    if (NOT g_U0)
    {
        while (NOT (sub_10458( 1, 0 )))
        {
            WAIT( 0 );
        }
        while ((IS_SCREEN_FADING_IN()) || ((IS_SCREEN_FADING_OUT()) || (IS_SCREEN_FADED_OUT())))
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_OUT_UNHACKED( 1000 );
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        if (DOES_CHAR_EXIST( l_U524 ))
        {
            DELETE_CHAR( ref l_U524 );
        }
        if (DOES_VEHICLE_EXIST( romansCar ))
        {
            if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( CurrentPlayerChar(), 759.56220000, -214.32310000, 5.41910000 );
            }
            else
            {
                SET_CHAR_COORDINATES( CurrentPlayerChar(), 759.56220000, -214.32310000, 5.41910000 );
            }
            DELETE_CAR( ref romansCar );
        }
    }
    sub_2386();
    return;
}

void sub_10023()
{
    sub_10032();
    return;
}

void sub_10032()
{
    int iVar2;

    iVar2 = 0;
    sub_10046( iVar2 );
    sub_1475( iVar2 );
    return;
}

void sub_10046(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( CurrentPlayerId(), 150 );
    CLEAR_HELP();
    sub_299( uParam0 );
    return;
}

void sub_10360()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

int sub_10458(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 > 1.01100000) || (fVar6 < 0.95000000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == CurrentPlayerChar()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( CurrentPlayerId() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( CurrentPlayerId() )))
    {
        return 0;
    }
    return 1;
}

void sub_12597()
{
    if ((l_U494 <= 5) AND (l_U494 > 2))
    {
        if (sub_12626())
        {
            SETTIMERB( 9999 );
            l_U494 = 6;
            l_U498 = 1;
        }
    }
    switch (l_U494)
    {
        case 0:
        sub_2464( ref l_U531, 1 );
        sub_2464( ref l_U537, 1 );
        REMOVE_BLIP( l_U526 );
        BEGIN_CAM_COMMANDS( ref l_U492 );
        SET_WIDESCREEN_BORDERS( 1 );
        CREATE_CAM( 14, ref l_U528 );
        SET_CAM_POS( l_U528, 919.41660000, -485.70490000, 20.74032000 );
        SET_CAM_ROT( l_U528, -7.28648300, -0.00000000, 132.86570000 );
        SET_CAM_FOV( l_U528, 35.00000000 );
        CREATE_CAM( 14, ref l_U529 );
        SET_CAM_POS( l_U529, 919.84830000, -485.30470000, 16.13782000 );
        SET_CAM_ROT( l_U529, 3.14134800, -0.00000000, 132.86570000 );
        SET_CAM_FOV( l_U529, 35.00000000 );
        SET_CAM_ACTIVE( l_U529, 1 );
        SET_CAM_PROPAGATE( l_U529, 1 );
        CREATE_CAM( 3, ref l_U530 );
        SET_CAM_ACTIVE( l_U530, 1 );
        SET_CAM_PROPAGATE( l_U530, 1 );
        SET_CAM_PROPAGATE( l_U528, 1 );
        SET_CAM_ACTIVE( l_U528, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SET_CAM_INTERP_STYLE_CORE( l_U530, l_U528, l_U529, 20000, 0 );
        SETTIMERA( 0 );
        CLEAR_AREA( l_U511._fU0, l_U511._fU4, l_U511._fU8, 3.00000000, 1 );
        l_U494++;
        break;
        case 1:
        if (NOT sub_8814())
        {
            l_U489 = 2;
            SETTIMERA( 0 );
            SETTIMERB( 0 );
            l_U494++;
        }
        break;
        case 2:
        if (TIMERB() >= 500)
        {
            if (IS_VEH_DRIVEABLE( romansCar ))
            {
                SET_CAR_ENGINE_ON( romansCar, 0, 0 );
            }
            l_U498 = 0;
            SETTIMERB( 0 );
            l_U494++;
        }
        break;
        case 3:
        sub_13378( "R1_SAFE", 1, 0, ref l_U531, 6, 1 );
        SETTIMERB( 0 );
        SETTIMERA( 0 );
        l_U494++;
        break;
        case 4:
        if ((TIMERB() >= 400) AND (NOT (sub_7620( l_U531 ))))
        {
            if (IS_VEH_DRIVEABLE( romansCar ))
            {
                TASK_EVERYONE_LEAVE_CAR( romansCar );
            }
            SETTIMERB( 0 );
            l_U494++;
        }
        break;
        case 5:
        if (TIMERB() >= 1000)
        {
            SETTIMERB( 0 );
            l_U494++;
        }
        break;
        case 6:
        if (TIMERB() >= 500)
        {
            if (l_U498 == 0)
            {
                DO_SCREEN_FADE_OUT_UNHACKED( 1000 );
            }
            else
            {
                DO_SCREEN_FADE_OUT( 500 );
            }
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            SETTIMERB( 0 );
            l_U494++;
        }
        break;
        case 7:
        if (NOT l_U498)
        {
            INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
        }
        if (DOES_CAM_EXIST( l_U530 ))
        {
            SET_CAM_PROPAGATE( l_U530, 0 );
            SET_CAM_ACTIVE( l_U530, 0 );
            DESTROY_CAM( l_U530 );
        }
        if (DOES_CAM_EXIST( l_U528 ))
        {
            SET_CAM_PROPAGATE( l_U528, 0 );
            SET_CAM_ACTIVE( l_U528, 0 );
            DESTROY_CAM( l_U528 );
        }
        if (DOES_CAM_EXIST( l_U529 ))
        {
            SET_CAM_PROPAGATE( l_U529, 0 );
            SET_CAM_ACTIVE( l_U529, 0 );
            DESTROY_CAM( l_U529 );
        }
        sub_2464( ref l_U531, 0 );
        sub_2464( ref l_U537, 0 );
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            WARP_CHAR_FROM_CAR_TO_COORD( CurrentPlayerChar(), 891.41390000, -499.37750000, 18.41600000 );
        }
        else
        {
            SET_CHAR_COORDINATES( CurrentPlayerChar(), 891.41390000, -499.37750000, 18.41600000 );
        }
        SET_CHAR_HEADING( CurrentPlayerChar(), 65.00000000 );
        SET_ROOM_FOR_CHAR_BY_NAME( CurrentPlayerChar(), "shitholerm" );
        if (DOES_OBJECT_EXIST( l_U523 ))
        {
            DETACH_OBJECT( l_U523, 0 );
            DELETE_OBJECT( ref l_U523 );
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1992728631 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( -1932515764 );
        DELETE_CAR( ref romansCar );
        DELETE_CHAR( ref l_U524 );
        SET_CAM_FOV( l_U530, 55.00000000 );
        ENABLE_SCENE_STREAMING( 0 );
        GET_TIME_OF_DAY( ref l_U495, ref l_U496 );
        SET_TIME_OF_DAY( 5, 0 );
        LOAD_ADDITIONAL_TEXT( "R1AUD", 6 );
        START_CUTSCENE_NOW( "Rom1_b" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "Rom1_b" );
        ENABLE_SCENE_STREAMING( 1 );
        SET_WIDESCREEN_BORDERS( 0 );
        SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
        CLEAR_CHAR_TASKS( CurrentPlayerChar() );
        DESTROY_ALL_CAMS();
        SET_CAM_BEHIND_PED( CurrentPlayerChar() );
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        END_CAM_COMMANDS( ref l_U492 );
        SET_CHAR_VISIBLE( CurrentPlayerChar(), 1 );
        if (l_U495 < 6)
        {
            SET_TIME_OF_DAY( 6, 0 );
        }
        else
        {
            SET_TIME_OF_DAY( l_U495, l_U496 );
        }
        while (NOT IS_SCREEN_FADED_OUT())
        {
            WAIT( 0 );
        }
        DO_SCREEN_FADE_IN( 1000 );
        sub_14481();
        l_U494++;
        break;
    }
    return;
}

int sub_12626()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_JUST_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_JUST_PRESSED( 2, 77 )) || (IS_CONTROL_JUST_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_13378(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_13405( uParam0, ref l_U189._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_13405(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_7900( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_14481()
{
    sub_14490();
    CLEAR_WANTED_LEVEL( CurrentPlayerId() );
    if (DOES_VEHICLE_EXIST( romansCar ))
    {
        DELETE_CAR( ref romansCar );
    }
    if (DOES_CHAR_EXIST( l_U524 ))
    {
        DELETE_CHAR( ref l_U524 );
    }
    if (NOT g_U0)
    {
        CANCEL_OVERRIDE_RESTART();
    }
    UNLOCK_MISSION_NEWS_STORY( 1 );
    SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 0 );
    AWARD_ACHIEVEMENT( 1 );
    g_U21 = 52;
    sub_2386();
    return;
}

void sub_14490()
{
    sub_14499();
    return;
}

void sub_14499()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_14517();
    sub_14576( iVar2, iVar3, iVar4 );
    return;
}

void sub_14517()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U483[I] = 4;
    }
    return;
}

void sub_14576(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    sub_14607( iVar5, uParam0, uParam1, uParam2, "Friend_1" );
    return;
}

void sub_14607(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_14703( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_14703( ref cVar9 );
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
            sub_14703( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_14703( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_14703( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_14703( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_15280( iParam0, iVar7 );;;
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
                sub_15677( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_15677( 0, 4 );
            }
        }
    }
    if (NOT (sub_15766( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
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
    sub_1484();
    bVar27 = true;
    uVar28 = sub_15280( iParam0, iVar7 );
    uVar29 = sub_941( iParam0 );
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
                sub_25142( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_25572();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_25657( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_25714( iParam0 );
                sub_25753( 0 );
                sub_1382( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_25861();
        }
    }
    if (bParam2)
    {
        sub_25572();
        sub_25949();
        sub_25753( 0 );
    }
    if (bParam3)
    {
        sub_25572();
        sub_25989();
        sub_25753( 0 );
        sub_1382( uVar29, 0 );
    }
    sub_828();
    return;
}

void sub_14703(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_15280(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_1340( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_15677(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_15766(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_15974( uParam1 );
        break;
        case 1:
        bVar8 = sub_18052( uParam1 );
        break;
        case 2:
        bVar8 = sub_18278( uParam1 );
        break;
        case 3:
        bVar8 = sub_18428( uParam1 );
        break;
        case 4:
        bVar8 = sub_18706( uParam1 );
        break;
        case 5:
        bVar8 = sub_19009( uParam1 );
        break;
        case 6:
        bVar8 = sub_19208( uParam1 );
        break;
        case 7:
        bVar8 = sub_19434( uParam1 );
        break;
        case 8:
        bVar8 = sub_19669( uParam1 );
        break;
        case 9:
        bVar8 = sub_20044( uParam1 );
        break;
        case 10:
        bVar8 = sub_20291( uParam1 );
        break;
        case 11:
        bVar8 = sub_20430( uParam1 );
        break;
        case 12:
        bVar8 = sub_20729( uParam1 );
        break;
        case 13:
        bVar8 = sub_20957( uParam1 );
        break;
        case 14:
        bVar8 = sub_21244( uParam1 );
        break;
        case 15:
        bVar8 = sub_21526( uParam1 );
        break;
        case 16:
        bVar8 = sub_21808( uParam1 );
        break;
        case 17:
        bVar8 = sub_22009( uParam1 );
        break;
        case 18:
        bVar8 = sub_22082( uParam1 );
        break;
        case 19:
        bVar8 = sub_22296( uParam1 );
        break;
        case 20:
        bVar8 = sub_22549( uParam1 );
        break;
        case 21:
        bVar8 = sub_22796( uParam1 );
        break;
        case 22:
        bVar8 = sub_22997( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_17657( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_15280( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_23320( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_15974(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_16253( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_16253( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_16253( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_16253( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_16253( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_16253( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_16253( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_16253( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_16253( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_16253( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_16253( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_16253( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_16253( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_16253( iVar3, 0, 3, 1, 0, 0 );
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
        sub_16253( iVar3, 0, sub_17535(), sub_17801(), 0, 0 );
        break;
        default:
        sub_17960( "Friend 1", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Friend 1", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_16253(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_16264( uParam1 );
    sub_16438( uParam0, 0, uParam2 );
    sub_16438( uParam0, 1, uParam3 );
    sub_16438( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_14517();
    return;
}

void sub_16264(unknown uParam0)
{
    ADD_SCORE( CurrentPlayerId(), uParam0 );
    sub_16289( uParam0 );
    return;
}

void sub_16289(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1340( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_16438(unknown uParam0, int iParam1, int iParam2)
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
        sub_16595( uParam0 );
    }
    return;
}

void sub_16595(unknown uParam0)
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

int sub_17535()
{
    switch (l_U483[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_17657( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_17657(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_17801()
{
    switch (l_U483[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_17657( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_17960(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_18052(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16253( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_17960( "Contact 2", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 2", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18278(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_16253( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_17960( "Girl 3", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Girl 3", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18428(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_16253( iVar3, 0, sub_17535(), sub_17801(), 0, 0 );
        break;
        default:
        sub_17960( "Friend 4", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Friend 4", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_18706(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16253( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_16253( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_16253( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_16253( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_17960( "Contact 5", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 5", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19009(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_17960( "Contact 7", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 7", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19208(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16253( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_17960( "Contact 7b", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 7b", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19434(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_16253( iVar3, 0, sub_17535(), sub_17801(), 0, 0 );
        break;
        default:
        sub_17960( "Friend 8", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Friend 8", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_19669(unknown uParam0)
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
        sub_16253( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_16253( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_16253( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_16253( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_16253( iVar3, 0, sub_17535(), sub_17801(), 0, 0 );
        break;
        default:
        sub_17960( "Friend 9", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Friend 9", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20044(unknown uParam0)
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
        sub_16253( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_16253( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_16253( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_17960( "Contact 10", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_17960( "Contact 10", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20291(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_17960( "Girl 11", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Girl 11", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20430(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16253( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_16253( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_16253( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_16253( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_16253( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_17960( "Contact 12", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 12", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20729(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16253( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_17960( "Contact 13", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 13", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_20957(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_16253( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_16253( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_16253( iVar3, 0, sub_17535(), sub_17801(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_17960( "Friend 15", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Friend 15", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21244(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16253( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_16253( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_16253( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_17960( "Contact 16", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 16", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21526(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_16253( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_16253( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_16253( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_17960( "Contact 18", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 18", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_21808(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_17960( "Contact 19", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 19", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22009(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_17960( "Girl 20", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22082(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_17960( "Contact 21", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 21", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22296(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16253( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_16253( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_17960( "Contact 22", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 22", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22549(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_16253( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_16253( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_16253( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_17960( "Contact 24", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 24", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22796(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_16253( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_16253( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_16253( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_17960( "Contact 25", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_17960( "Contact 25", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_22997(unknown uParam0)
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
        sub_16253( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_17960( "Girl 26", 1 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_17960( "Girl 26", 0 );
        sub_16253( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_23320(int iParam0, int iParam1)
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
    if (sub_23368( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_24099( iParam1 );
    }
    return;
}

int sub_23368(int iParam0, int iParam1)
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
            sub_23508( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_23508(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_23690( 0 );
    return;
}

void sub_23690(boolean bParam0)
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
        sub_23945();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_23945()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_24099(int iParam0)
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
        sub_24432( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_24432( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_24432( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_24432( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_24432( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_24432( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_24432( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_24432( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_24432( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_24432( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_24432( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_24432( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_24432( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_24432( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_24432( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_24432( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_24432( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_24432( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_24432( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_24432(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_25142(unknown uParam0, unknown uParam1)
{
    sub_25161( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_25161(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_25572()
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

int sub_25657(int iParam0, int iParam1)
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

void sub_25714(unknown uParam0)
{
    sub_727();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_25753(unknown uParam0)
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

void sub_25861()
{
    sub_25870();
    return;
}

void sub_25870()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_25949()
{
    sub_25870();
    return;
}

void sub_25989()
{
    sub_25870();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

