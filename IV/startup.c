void main()
{

    Player currentPlayer;
    string scriptToStart;

    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U32 = -1;
    l_U33 = 1;
    l_U34 = 0;
    g_U0 = 0;
    g_U1 = 0;
    g_U2 = 0;
    g_U3 = 0;
    g_U4 = 0;
    g_U5 = 0;
    g_U6 = 0;
    g_U7 = 0;
    g_U9 = -1;
    g_U10 = 0;
    g_U11 = 0;
    g_U12 = 0;
    g_U13 = 0;
    g_U14 = -1;
    g_U15 = 0;
    g_U16 = 0;
    g_U17 = 0;
    g_U18 = -1;
    g_U19 = 0;
    g_U20 = 1;
    g_U21 = 0;
    g_U89 = 0;
    g_U90 = 0;
    g_U2219 = 0;
    g_U2222 = 6;
    g_U2271 = 0;
    g_U8082 = 0;
    g_U8084 = 0;
    g_U8207 = 0;
    g_U8208 = 0;
    g_U8210 = 0;
    g_U8217 = 0;
    g_U8219 = 0;
    g_U8220 = 6;
    g_U8228 = 0;
    g_U8353 = 0;
    g_U8354 = 0;
    g_U8355 = 0;
    g_U8356 = 0;
    g_U8357 = 0;
    g_U8358 = 0;
    g_U8359 = 0;
    g_U8360 = 0;
    g_U8361 = 1;
    g_U8362 = 0;
    g_U8363 = 0;
    g_U8364 = 0;
    g_U8365 = 0;
    g_U8366 = 0;
    g_U8367 = 0;
    g_U8368 = 0;
    g_U8369 = 0;
    g_U8370 = 0;
    g_U8378 = 0;
    g_U8379 = -1;

    // g_U8380, g_U8384, and g_U8388 seems to be a string in use within binco_brook_s.c, modo_manhat_5.c, and perseus_manhat_8.c.
    // I think these are the help texts for the shops, 
    // Seems to set to values like this: HELP_BOUGHT_L_F = ~s~Pants bought for free
    StrCopy( ref g_U8380, "blank", 16 );
    StrCopy( ref g_U8384, "blank", 16 );
    StrCopy( ref g_U8388, "blank", 16 );

    g_U8666 = 0;
    g_U8667 = 0;
    g_U8668 = 0;
    g_U8669 = 0;
    g_U8670 = 0;
    g_U8671 = 0;
    g_U8672 = 0;
    g_U8673 = 0;
    g_U8674 = 0;
    g_U8697 = 0;
    g_U8698 = 0;
    g_U8699 = 0;
    g_U8700 = 0;
    g_U8701 = 0;
    ProtectedSet(g_U8702, 0);
    g_U8703 = 0;
    ProtectedSet(g_U8704, 0);
    g_U8705 = 0;
    g_U8706 = 0;
    g_U8707 = 0;
    g_U9050 = 0;
    g_U9051 = 0;
    
    // Cable car global
    g_U9052 = 0;

    g_U9053 = 1;
    g_U9054 = 0;
    g_U9055 = 0;
    g_U9056 = 0;
    g_U9057 = 1;
    g_U9058 = 0;
    g_U9059 = 0;
    g_U9060 = 0;
    g_U9061 = 0;
    g_U9062 = 0;
    g_U9063 = 0;
    g_U9064 = 0;
    g_U9065 = 0;
    g_U9066 = 0;
    g_U9067 = 0;
    g_U9068 = 0;
    g_U9069 = 0;
    g_U9070 = 0;
    g_U9071 = 0;
    g_U9072 = 0.00000000;
    g_U9076 = 0;
    g_U9077 = 1;
    g_U9078 = 0;
    g_U9079 = 0;
    g_U9080 = 0;
    g_U9081 = 0;
    g_U9082 = 0;
    g_U9083 = 0;
    g_U9084 = 0;
    g_U9086 = 0;
    g_U9149 = 0;
    g_U9150 = 0;
    g_U9151 = 0;
    g_U9152 = 1;
    g_U9153 = 0;
    g_U9160 = -1;
    g_U9163 = 0;
    g_U9170 = 0;
    g_U9171 = 0;
    g_U9172 = 0;
    g_U9173 = 0;
    g_U9191 = 0;
    ProtectedSet(g_U9192, -1);
    g_U9193 = 0;
    g_U9194 = 0;
    g_U9195 = 0;
    g_U9196 = 0;
    g_U9197 = 0;
    g_U9198 = 0;
    g_U9199 = 0;
    g_U9200 = 0;
    g_U9201 = 0;
    g_U9202 = 0;
    g_U9203 = 0;
    g_U9204 = 0;
    g_U9205 = 0;
    g_U9206 = 0;
    g_U9207 = 0;
    g_U9208 = 1;
    g_U9209 = 1;
    g_U9210 = 0;
    g_U9211 = 0;
    g_U9212 = 1;
    g_U9213 = -1;
    g_U9221 = -1;
    g_U9227 = 0;
    g_U9228 = 0;
    g_U9229 = 0;
    g_U9330 = 0;
    g_U9333 = 0;
    g_U9334 = 0;
    g_U9335 = 0;
    g_U9336 = 1;
    g_U9337 = 0;
    g_U9338 = 0;
    g_U9339 = 0;
    g_U9341 = 0;
    g_U9342 = 0;
    g_U9343 = 0;
    g_U9344 = 0;
    g_U9345 = 0;
    g_U9346 = 1;
    g_U9347 = 1;
    g_U9348 = 0;
    g_U9362 = -1;
    g_U9363 = 0;
    g_U9364 = 0;
    g_U9365 = 1;
    g_U9366 = 0;
    g_U9367 = 0;
    g_U9368 = 0;
    g_U9369 = 0;
    g_U9370 = 8;
    g_U9371 = 0;
    g_U9372 = 0;
    g_U9373 = 0;
    g_U9374 = 0;
    g_U9375 = 0;
    g_U9376 = 1;
    g_U9377 = 0;
    g_U9378 = 0;
    g_U9379 = 0;
    g_U9385 = 0;
    g_U9386 = 1;
    g_U9938 = 1;
    ProtectedSet(g_U9939, 6);
    g_U9940 = 0;
    g_U9941 = 0;
    g_U9942 = 1;
    g_U10978 = 0;
    g_U10979 = 0;
    g_U10980 = 0;
    g_U26745 = 1;
    g_U26753 = 0;
    g_U26754 = 0;
    g_U26755 = 1;
    g_U26756 = 1;
    g_U26757 = 0;
    g_U32917 = 12;
    g_U32926 = 2;
    g_U32927 = 54;
    g_U32976 = 0;
    g_U33837 = 0;
    g_U33838 = 0;
    g_U33839 = 0;
    g_U33840 = 0;
    g_U33841 = 0;
    g_U33848 = 0;
    g_U33849 = 0;
    g_U33850 = 0;
    g_U33851 = 0;
    g_U33852 = 0;
    g_U34284 = -1;
    g_U64545 = 0;
    g_U64559 = 0;
    g_U64560 = 0;
    g_U64561 = 0;
    g_U64562 = 0;
    g_U64563 = 0;
    g_U64564 = 0;
    g_U64565 = 0;
    g_U64566 = 0;
    g_U64567 = 0;
    g_U64568 = 0;
    g_U64569 = 0;
    g_U64570 = 0;
    g_U64571 = 0;
    g_U64572 = 0;
    g_U64573 = 0;
    g_U64574 = 0;
    g_U64575 = 1;
    g_U64576 = 0;
    g_U64577 = 0;
    g_U64578 = 0;
    g_U64579 = 0;
    g_U64623 = 0;
    g_U64624 = 0;
    g_U64625 = 0;
    g_U64641 = 0;
    g_U64642 = 0;

    g_U64643 = 1;
    g_U64644 = 0;


    g_U64664 = 50;
    g_U64665 = 70;
    g_U64666 = 50;
    g_U64667 = 30;
    g_U64668 = 50;
    g_U64669 = 30;
    g_U64670 = 30;
    g_U64671 = 30;
    g_U64672 = 30;
    g_U64673 = 50;
    g_U64678 = 0;

    g_U64686 = 0;
    g_U64687 = 0;
    g_U64688 = 0;
    g_U64689 = 0;
    g_U64692 = 0;
    g_U64715 = 0;
    g_U64716 = 0;

    g_U64717 = 0;
    g_U64718 = 0;
    g_U64719 = 0;
    g_U64720 = 0;
    g_U64721 = 0;
    g_U64722 = 0;
    g_U64723 = 0;
    g_U64724 = 0;
    g_U64725 = 0;
    g_U64727 = 0;
    g_U64728 = 0;
    g_U64729 = 0;
    g_U64730 = 0;

    g_U64731 = 0;
    g_U64732 = 0;
    g_U64733 = 0;
    g_U64734 = 0;
    g_U64735 = 0;
    g_U64736 = 0;
    g_U64737 = 0;
    g_U64738 = 0;
    g_U64739 = 0;
    g_U64740 = 0;
    g_U64741 = 0;

    g_U64742 = 0;
    g_U64743 = 0;
    g_U64744 = 0;
    g_U64745 = 0;
    g_U64746 = 0;
    g_U64747 = 0;
    g_U64748 = 0;
    g_U64749 = 0;
    g_U64750 = 0;
    g_U64751 = 0;
    g_U64752 = 0;

    g_U64753 = 0;
    g_U64754 = 0;
    g_U64755 = 0;
    g_U64756 = 0;
    g_U64757 = 0;
    g_U64760 = 1;
    g_U64762 = 0;
    g_U64763 = 0;

    ProtectedSet(g_U64791, 0);

    g_U64893 = -1;
    g_U64894 = 0;
    g_U64904 = 0;
    g_U64905 = 0;

    g_U64918 = -1;
    g_U64919 = -1;
    g_U64920 = -1;

    g_U64921 = 0;
    g_U64924 = 0;
    g_U64925 = 0;

    g_U64926 = 0;
    g_U64927 = 0;
    g_U64930 = 0;
    g_U64940 = 0;
    g_U64941 = 0;
    g_U64942 = 0;
    g_U64943 = 0;
    g_U64944 = 0;
    g_U64945 = 0;
    g_U64946 = 0;
    g_U64947 = 0;

    g_U64948 = 0;
    g_U64949 = 0;
    g_U64950 = 0;
    g_U64951 = 0;
    g_U64952 = 0;
    g_U64953 = 0;
    g_U64954 = 0;
    g_U64955 = 0;
    g_U64956 = 0;
    g_U64957 = 0;
    g_U64960 = 0;
    g_U64961 = 0;

    g_U64962 = 0;
    g_U64963 = 0;
    g_U64964 = 0;
    g_U64965 = 0;
    g_U64966 = 0;
    g_U64968 = 0;
    g_U64969 = 0;
    g_U64970 = 0;
    g_U64971 = 0;
    g_U64972 = 0;
    g_U64973 = 0;
    g_U64974 = 0;

    g_U64975 = 0;
    g_U64976 = 0;
    g_U64977 = 0;
    g_U64978 = 0;
    g_U64979 = 0;
    g_U64980 = 0;
    g_U64981 = 0;
    g_U64982 = 0;
    g_U64983 = 0;

    g_U64993 = 70;
    g_U64994 = 30;
    g_U64995 = 50;
    g_U64996 = 30;
    g_U64997 = 50;
    g_U64998 = 30;
    g_U64999 = 30;
    g_U65000 = 30;
    g_U65001 = 30;
    g_U65002 = 30;

    g_U65003 = 0;
    g_U65004 = 0;
    g_U65005 = 0;
    g_U65006 = 0;
    g_U65007 = 0;
    g_U65008 = 0;
    g_U65009 = 0;
    g_U65010 = 0;
    g_U65011 = 0;

    // Vector globals, possibly offets?
    g_U65012 = {-3.00000000, -3.00000000, 5.00000000};
    g_U65015 = {3.00000000, -3.00000000, -5.00000000};

    g_U65018 = 0;
    g_U65019 = 0;
    g_U65020 = 0;
    g_U65021 = 0;
    g_U65022 = 0;
    g_U65023 = 0;
    g_U65024 = 0;
    g_U65025 = 0;
    g_U65026 = 0;
    g_U65027 = 0;
    g_U65028 = 0;
    g_U65029 = 0;
    g_U65030 = 0;
    g_U65031 = 0;
    g_U65032 = 0;
    g_U65033 = 0;
    g_U65034 = 96;
    g_U65035 = 0;
    g_U65040 = 0;
    g_U65041 = 0;

    // If the session is a network session, create the player in a random location
    // Setup player for network, set their control and other stuff for network game.
    if (IS_NETWORK_SESSION())
    {
        CREATE_PLAYER( 0, -2000.00000000 + (GetRandomFloatWithRange( -0.25000000, 0.25000000 )), -2000.00000000 + (GetRandomFloatWithRange( -0.25000000, 0.25000000 )), 240.00000000 + (GetRandomFloatWithRange( -0.25000000, 0.25000000 )), ref currentPlayer );
        SetupPlayerForNetwork( GET_PLAYER_ID(), 0 );
    }

    else
    {
        // Reset some globals
        sub_3384();

        // I think g_U9386 is set to 1 in startup.c (this file), it seems to be set to the value "uVar6" in other files
        // Seems to be something to do with the "Store_Contact_Point" function.
        sub_3559( 0, 756.77450000, -214.40330000, 4.82230000, 0, 0, g_U9386 );

        // Create the player
        CreateAndSetPlayerCoords( currentPlayer );
        // Disable player control
        SET_PLAYER_CONTROL( currentPlayer, 0 );
        
        g_U9937 = 0;
        Setup_Initial_Restart_Positions();
        // Setup the scripts and script objects.
        AllocateAndRegisterScriptObjects();
    }

    // Setup zones
    SetPopulationTypes();
    SetZonesScumminess();

    StrCopy( ref g_U9921, "ERROR", 16 );
    StrCopy( ref g_U9926, "", 16 );

    g_U9930 = 0;
    g_U9931 = -1;

    DEBUG_OFF();
    WAIT( 0 );

    // If not running a network session, run regular main.
    scriptToStart = "main";

    // If running a network session, run network_main
    if (IS_NETWORK_SESSION())
    {
        scriptToStart = "network_main";
    }

    // Request the script, wait on it, start it and mark as no longer needed.
    REQUEST_SCRIPT( scriptToStart );
    while (NOT (HAS_SCRIPT_LOADED( scriptToStart )))
    {
        WAIT( 0 );
    }
    START_NEW_SCRIPT( scriptToStart, 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( scriptToStart );
    return;
}

// sub_2931
void GetRandomFloatWithRange(float value1, float Result)
{
    GENERATE_RANDOM_FLOAT_IN_RANGE( value1, Result, ref Result );
    return Result;
}

// sub_3024
// Set player control for network
// playerControl seems to run setControl on the SET_PLAYER_CONTROL_FOR_NETWORK native.
// Going to rename this to SetupPlayerForNetwork, seems like it's what it is.
void SetupPlayerForNetwork(Player currentPlayer, boolean playerControl)
{
    SET_PLAYER_CONTROL_FOR_NETWORK( CurrentPlayerId( currentPlayer ), playerControl, 0 );

    if (playerControl)
    {
        if (NOT (IS_CHAR_VISIBLE( GetCharFromValue( currentPlayer ) )))
        {
            SET_CHAR_VISIBLE( GetCharFromValue( currentPlayer ), 1 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( GetCharFromValue( currentPlayer ) )))
        {
            SET_CHAR_COLLISION( GetCharFromValue( currentPlayer ), 1 );
        }
        FREEZE_CHAR_POSITION( GetCharFromValue( currentPlayer ), 0 );
        SET_CHAR_NEVER_TARGETTED( GetCharFromValue( currentPlayer ), 0 );
        SET_PLAYER_INVINCIBLE( CurrentPlayerId( currentPlayer ), 0 );
    }

    else if (IS_CHAR_VISIBLE( GetCharFromValue( currentPlayer ) ))
    {
        SET_CHAR_VISIBLE( GetCharFromValue( currentPlayer ), 0 );
    }

    SET_CHAR_COLLISION( GetCharFromValue( currentPlayer ), 0 );
    FREEZE_CHAR_POSITION( GetCharFromValue( currentPlayer ), 1 );
    SET_CHAR_NEVER_TARGETTED( GetCharFromValue( currentPlayer ), 1 );
    SET_PLAYER_INVINCIBLE( CurrentPlayerId( currentPlayer ), 1 );
    REMOVE_PTFX_FROM_PED( GetCharFromValue( currentPlayer ) );

    if (NOT (IS_CHAR_FATALLY_INJURED( GetCharFromValue( currentPlayer ) )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( GetCharFromValue( currentPlayer ) );
    }
    return;
}

// sub_3035
void CurrentPlayerId(unknown uParam0)
{
    return CONVERT_INT_TO_PLAYERINDEX( uParam0 );
}

// sub_3080
void GetCharFromValue(int playerChar)
{
    int Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( playerChar ), ref Result );
    return Result;
}

// Rest some globals
void sub_3384()
{
    int I;

    I = 0;
    for ( I = 0; I < 49; I++ )
    {
        g_U9387[I]._fU0._fU0 = 0.00000000;
        g_U9387[I]._fU0._fU4 = 0.00000000;
        g_U9387[I]._fU0._fU8 = 0.00000000;
        g_U9387[I]._fU12 = g_U9386;
        g_U9387[I]._fU16 = 0;
        g_U9387[I]._fU20 = 0;
        g_U9387[I]._fU24 = 0;
    }
    return;
}

// Possibly: Store_Contact_Point
void sub_3559(int iParam0, float posX, float posY, float posZ, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (iParam0 > 49)
    {
        sub_3644( "Main_Missions: Store_Contact_Point(): Illegal Contact Point ID" );
    }
    if ((NOT (g_U9387[iParam0]._fU0._fU8 == 0.00000000)) || ((NOT (g_U9387[iParam0]._fU0._fU4 == 0.00000000)) || (NOT (g_U9387[iParam0]._fU0._fU0 == 0.00000000))))
    {
        sub_3644( "Main_Missions: Store_Contact_Point(): Contact Point ID already setup" );
    }
    g_U9387[iParam0]._fU0._fU0 = posX;
    g_U9387[iParam0]._fU0._fU4 = posY;
    g_U9387[iParam0]._fU0._fU8 = posZ;
    g_U9387[iParam0]._fU12 = uParam6;
    g_U9387[iParam0]._fU16 = uParam4;
    g_U9387[iParam0]._fU20 = uParam5;
    g_U9387[iParam0]._fU24 = 0;
    return;
}

void sub_3644(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

// Create player, set their coordinates to something set in this global: g_U9387
// sub_3919
void CreateAndSetPlayerCoords(Player playerToCreate)
{
    Vector3 playerCoords;
    // Unused
    unknown uVar4;
    unknown uVar5;

    float playerHeading;

    playerCoords = {g_U9387[0]._fU0};
    playerHeading = 93.53270000;

    // This seems to only be set to 1 by this in main.c: sub_196012
    // May be g_allow_net_saves?
    g_U19 = 0;
    CREATE_PLAYER( 0, playerCoords.x, playerCoords.y, playerCoords.z, ref playerToCreate );
    SET_CHAR_COORDINATES( CurrentPlayerChar(), playerCoords.x, playerCoords.y, playerCoords.z );
    SET_CHAR_HEADING( CurrentPlayerChar(), playerHeading );
    return;
}

// Why is there two of these?
// Oh, sub_3080 takes a parameter for the Char.
// sub_3974
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

// sub_4072 - Obtained name from debug string below.
void Setup_Initial_Restart_Positions()
{
    int I;

    I = 0;
    for ( I = 0; I < 15; I++ )
    {
        g_U9999[I]._fU0 = 5;
        g_U9999[I]._fU4 = {0.00000000, 0.00000000, 0.00000000};
        g_U9999[I]._fU16 = 0.00000000;
    }

    SetPoliceRespawns( 0, 0, 1232.57200000, -89.69760000, 27.02420000, 270.80440000 );
    SetPoliceRespawns( 1, 0, 896.84080000, -355.56640000, 16.63910000, 317.92790000 );
    SetPoliceRespawns( 2, 0, 1232.19200000, 517.28770000, 27.57370000, 176.10820000 );
    SetPoliceRespawns( 3, 0, 2172.29900000, 449.18780000, 5.08020000, 271.42560000 );
    SetPoliceRespawns( 4, 1, 991.06670000, 1877.50400000, 22.89280000, 25.88270000 );
    SetPoliceRespawns( 5, 1, 435.26210000, 1594.44800000, 15.33110000, 9.17450000 );
    SetPoliceRespawns( 6, 2, 85.57061000, 1189.12600000, 13.75600000, 203.16790000 );
    SetPoliceRespawns( 7, 2, -416.83880000, 1102.39600000, 10.72210000, 201.71590000 );
    SetPoliceRespawns( 8, 2, 48.41780000, 679.95230000, 13.66270000, 88.55010000 );
    SetPoliceRespawns( 9, 2, -416.18250000, 278.27630000, 10.95020000, 200.56330000 );
    SetPoliceRespawns( 10, 2, 224.55200000, -215.17490000, 9.73680000, 205.17850000 );
    SetPoliceRespawns( 11, 2, -378.14180000, -263.86910000, 10.04100000, 245.03360000 );
    SetPoliceRespawns( 12, 3, -924.12320000, 1265.74300000, 23.57260000, 137.19690000 );
    SetPoliceRespawns( 13, 3, -1716.64400000, 276.68920000, 21.20240000, 250.00490000 );
    SetPoliceRespawns( 14, 3, -1223.23600000, -233.32100000, 2.03350000, 308.33580000 );

    // I guess in the original scripts, it requires 15 police stations.
    for ( I = 0; I < 15; I++ )
    {
        if (g_U9999[I]._fU0 == 5)
        {
            sub_3644( "startup: Setup_Initial_Restart_Positions: Police Restart not setup" );
        }
    }

    for ( I = 0; I < 7; I++ )
    {
        g_U10090[I]._fU0 = 5;
        g_U10090[I]._fU4 = {0.00000000, 0.00000000, 0.00000000};
        g_U10090[I]._fU16 = 0.00000000;
    }

    SetHospitalRespawns( 0, 0, 1190.96500000, 201.09010000, 31.59560000, 148.37250000 );
    SetHospitalRespawns( 1, 0, 1242.93900000, 497.13550000, 27.41460000, 28.45530000 );
    SetHospitalRespawns( 2, 1, 975.74330000, 1822.26000000, 19.09530000, 87.84350000 );
    SetHospitalRespawns( 3, 2, -391.22820000, 1280.00800000, 22.05360000, 225.15350000 );
    SetHospitalRespawns( 4, 2, 94.86770000, 147.33100000, 13.77200000, 185.87280000 );
    SetHospitalRespawns( 5, 3, -1306.34600000, 1286.18800000, 20.77930000, 312.24850000 );
    SetHospitalRespawns( 6, 3, -1512.16900000, 400.12190000, 18.67960000, 315.57750000 );

    // I guess in the original scripts, it requires 7 hospitals.
    for ( I = 0; I < 7; I++ )
    {
        if (g_U10090[I]._fU0 == 5)
        {
            sub_3644( "startup: Setup_Initial_Restart_Positions: Hospital Restart not setup" );
        }
    }
    return;
}

// sub_4185
void SetPoliceRespawns(unknown uParam0, unknown uParam1, float posX, float posY, float posZ, float posHeading)
{
    unknown policeStationId;

    g_U9999[uParam0]._fU0 = uParam1;
    g_U9999[uParam0]._fU4 = {posX, posY, posZ};
    g_U9999[uParam0]._fU16 = posHeading;
    policeStationId = uParam1;
    ADD_POLICE_RESTART( posX, posY, posZ, posHeading, policeStationId );
    return;
}

// sub_4872
// void SetHospitalRespawns(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
void SetHospitalRespawns(unknown uParam0, unknown uParam1, float posX, float posY, float posZ, float posHeading)
{
    unknown hospitalId;

    g_U10090[uParam0]._fU0 = uParam1;
    g_U10090[uParam0]._fU4 = {posX, posY, posZ};
    g_U10090[uParam0]._fU16 = posHeading;
    hospitalId = uParam1;
    ADD_HOSPITAL_RESTART( posX, posY, posZ, posHeading, hospitalId );
    return;
}

// sub_5246
void AllocateAndRegisterScriptObjects()
{
    // Allocate scripts to objects
    ALLOCATE_SCRIPT_TO_OBJECT( "puzzle_launcher", 691499124, 100, 10.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "puzzle_launcher", -386570734, 100, 10.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "bowl_trigger", 1071999466, 100, 25.00000000, -1 );

    ALLOCATE_SCRIPT_TO_OBJECT( "darts_launcher", 33267265, 100, 50.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "ATMobj", 943099328, 100, 30.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "ATMobj", 1646518682, 100, 30.00000000, -1 );

    ALLOCATE_SCRIPT_TO_OBJECT( "ATMobj", -1707894766, 100, 30.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "CarWash", -582605513, 100, 50.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "ambBarrier", 21350196, 100, 100.00000000, -1 );

    ALLOCATE_SCRIPT_TO_OBJECT( "till", -1321409645, 100, 100.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "vendor", 526100790, 100, 80.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "vendor", 1914818237, 100, 80.00000000, -1 );

    ALLOCATE_SCRIPT_TO_OBJECT( "vendor", 1139438163, 100, 80.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "burgerVendor", 381327348, 100, 80.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "nutVendor", 1179300952, 100, 80.00000000, -1 );

    ALLOCATE_SCRIPT_TO_OBJECT( "magVendor", -2047685421, 100, 80.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "magVendor", -1654925163, 100, 80.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "telescope", -1028473, 100, 2.00000000, -1 );

    ALLOCATE_SCRIPT_TO_OBJECT( "sprunk", -2033273140, 100, 50.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "sprunk", -1702863313, 100, 50.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "computerStreamed", -1699088948, 100, 3.00000000, -1 );

    ALLOCATE_SCRIPT_TO_OBJECT( "computerStreamed", -1185959097, 100, 3.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "computerStreamed", -805425417, 100, 5.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "pool_table", -1693860173, 100, 50.00000000, -1 );

    ALLOCATE_SCRIPT_TO_OBJECT( "pool_table", 1823613694, 100, 50.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "pool_table", -1570172664, 100, 50.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "ambTV", -1618524073, 100, 80.00000000, -1 );

    ALLOCATE_SCRIPT_TO_OBJECT( "ambTV", -1058927856, 100, 80.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "ambTV", 1243139908, 100, 80.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "ambTV", 900769396, 100, 80.00000000, -1 );

    ALLOCATE_SCRIPT_TO_OBJECT( "ambTV", -1336305346, 100, 80.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "ambClubLights", 1005973733, 100, 50.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "ambClubLights", 1781111577, 100, 50.00000000, -1 );
    ALLOCATE_SCRIPT_TO_OBJECT( "ambClubLights", -21824081, 100, 50.00000000, -1 );

    sub_6386();
    // Register script brains for objects
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambATMQ", 50.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "EmpireTelescope", 80.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "EmpireDown", 80.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambTaxiHail", 50.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "copbootsearch", 80.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambgerry3doorlock", 5.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambSaveBed", 50.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambWardrobe", 25.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambnightclubext", 100.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "gunLockup", 95.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "gunLockupCT", 150.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambBar", 100.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "TollBooth", 200.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambBridgePatrol", 200.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambTunnelCops", 200.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambHotel", 50.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "foodServer", 80.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambInternetCafe", 50.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambCabaret", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambCargoHoldDoors", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambJerseyDocksGates", 100.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambBouncer", 150.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambStripClub", 60.00000000 );
    ALLOCATE_SCRIPT_TO_OBJECT( "ambPoleDancer", -132862690, 100, 50.00000000, -1 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambComedyClub", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambHomelandCordon", 200.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambChurchDoors", 100.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambLiftDoors", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambToiletDoors", 25.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambJimsLocks", 100.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambtaxdpt", 50.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambPolRdBlk", 200.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Ambblkhawk", 200.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambhelicopter", 200.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Manhat_heli_tours", 200.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "binco_brook_s", 75.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "perseus_manhat_8", 75.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "modo_manhat_5", 75.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "AmbWindowLift", 200.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "bowling_lane", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambAirpotarea", 200.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambUNarea", 200.00000000 );

    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ambShowroom", 75.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "cablecars", 75.00000000 );
    ALLOCATE_SCRIPT_TO_RANDOM_PED( "garbage_trucks", 1136499716, 100, 0 );

    ALLOCATE_SCRIPT_TO_RANDOM_PED( "ambbeggar", -1080673049, 100, 1 );
    ALLOCATE_SCRIPT_TO_RANDOM_PED( "ambbeggar", -1827421800, 100, 1 );
    ALLOCATE_SCRIPT_TO_RANDOM_PED( "ambbeggar", -142386662, 100, 1 );

    ALLOCATE_SCRIPT_TO_RANDOM_PED( "ambpimpnpros", 552542187, 100, 1 );
    ALLOCATE_SCRIPT_TO_RANDOM_PED( "ambpimpnpros", 996267216, 100, 1 );
    ALLOCATE_SCRIPT_TO_RANDOM_PED( "ambdealer", 1448755353, 100, 1 );

    ALLOCATE_SCRIPT_TO_RANDOM_PED( "ambpreacher", 495499562, 100, 1 );
    ALLOCATE_SCRIPT_TO_RANDOM_PED( "ambpreacher", 379171768, 100, 1 );
    ALLOCATE_SCRIPT_TO_RANDOM_PED( "ambbusker", -1188246269, 100, 1 );

    // Unknown usage for these below
    StrCopy( ref g_U8675[0], "BED", 4 );
    ProtectedSet(g_U8686[0], 10950);
    StrCopy( ref g_U8675[1], "LIJ", 4 );
    ProtectedSet(g_U8686[1], 10900);
    StrCopy( ref g_U8675[2], "TIT", 4 );
    ProtectedSet(g_U8686[2], 9990);
    StrCopy( ref g_U8675[3], "DVA", 4 );
    ProtectedSet(g_U8686[3], 7240);
    StrCopy( ref g_U8675[4], "DAV", 4 );
    ProtectedSet(g_U8686[4], 7070);
    StrCopy( ref g_U8675[5], "ASS", 4 );
    ProtectedSet(g_U8686[5], 5650);
    StrCopy( ref g_U8675[6], "COQ", 4 );
    ProtectedSet(g_U8686[6], 5090);
    StrCopy( ref g_U8675[7], "COK", 4 );
    ProtectedSet(g_U8686[7], 3420);
    StrCopy( ref g_U8675[8], "COC", 4 );
    ProtectedSet(g_U8686[8], 3150);
    StrCopy( ref g_U8675[9], "HOT", 4 );
    ProtectedSet(g_U8686[9], 3100);
    return;
}

void sub_6386()
{
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "brian_1", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "brian_2", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "brian_3", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "jeff_1", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "jeff_3", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "ivan_1", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "hossan_1", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "badman_1", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Sara_1", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "clarence", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Gracie", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Ilyena", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Marnie1", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Marnie2", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Eddie1", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Eddie2", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Mel", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Pathos1", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Pathos2", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Cherise", 100.00000000 );
    REGISTER_WORLD_POINT_SCRIPT_BRAIN( "Sara2", 100.00000000 );
    return;
}

// sub_8623
void SetPopulationTypes()
{
    SET_ZONE_POPULATION_TYPE( "Zact1", 0 );
    SET_ZONE_POPULATION_TYPE( "Zact2", 0 );
    SET_ZONE_POPULATION_TYPE( "Zacti", 1 );
    SET_ZONE_POPULATION_TYPE( "Zacti1", 1 );
    SET_ZONE_POPULATION_TYPE( "ZAIRPT1", 2 );
    SET_ZONE_POPULATION_TYPE( "ZAIRPT2", 2 );
    SET_ZONE_POPULATION_TYPE( "ZAIRPT3", 2 );
    SET_ZONE_POPULATION_TYPE( "Zald1", 3 );
    SET_ZONE_POPULATION_TYPE( "Zald2", 3 );
    SET_ZONE_POPULATION_TYPE( "Zald3", 3 );
    SET_ZONE_POPULATION_TYPE( "Zald4", 3 );
    SET_ZONE_POPULATION_TYPE( "ZBEG1", 4 );
    SET_ZONE_POPULATION_TYPE( "ZBEG2", 4 );
    SET_ZONE_POPULATION_TYPE( "ZBECCT1", 5 );
    SET_ZONE_POPULATION_TYPE( "ZBECCT2", 69 );
    SET_ZONE_POPULATION_TYPE( "ZBECCT3", 69 );
    SET_ZONE_POPULATION_TYPE( "ZBECCT4", 5 );
    SET_ZONE_POPULATION_TYPE( "ZBECCT5", 5 );
    SET_ZONE_POPULATION_TYPE( "Zberc", 6 );
    SET_ZONE_POPULATION_TYPE( "Zberc1", 6 );
    SET_ZONE_POPULATION_TYPE( "ZBOAB1", 7 );
    SET_ZONE_POPULATION_TYPE( "ZBOAB2", 7 );
    SET_ZONE_POPULATION_TYPE( "ZBOAB3", 7 );
    SET_ZONE_POPULATION_TYPE( "ZBOAB4", 7 );
    SET_ZONE_POPULATION_TYPE( "ZBOAB5", 7 );
    SET_ZONE_POPULATION_TYPE( "ZBOAB6", 7 );
    SET_ZONE_POPULATION_TYPE( "ZBOULE1", 8 );
    SET_ZONE_POPULATION_TYPE( "ZBOULE2", 8 );
    SET_ZONE_POPULATION_TYPE( "ZBOULE3", 8 );
    SET_ZONE_POPULATION_TYPE( "ZBOULE4", 8 );
    SET_ZONE_POPULATION_TYPE( "ZCERV1", 9 );
    SET_ZONE_POPULATION_TYPE( "ZCERV2", 9 );
    SET_ZONE_POPULATION_TYPE( "ZCERV3", 9 );
    SET_ZONE_POPULATION_TYPE( "ZCERV4", 9 );
    SET_ZONE_POPULATION_TYPE( "Zcgar1", 10 );
    SET_ZONE_POPULATION_TYPE( "Zcgar2", 10 );
    SET_ZONE_POPULATION_TYPE( "Zcgar3", 10 );
    SET_ZONE_POPULATION_TYPE( "Zcgar4", 67 );
    SET_ZONE_POPULATION_TYPE( "Zcgci1", 11 );
    SET_ZONE_POPULATION_TYPE( "Zcgci2", 11 );
    SET_ZONE_POPULATION_TYPE( "Zcgci3", 11 );
    SET_ZONE_POPULATION_TYPE( "Zcgci4", 11 );
    SET_ZONE_POPULATION_TYPE( "ZCHASE1", 12 );
    SET_ZONE_POPULATION_TYPE( "ZCHASE2", 12 );
    SET_ZONE_POPULATION_TYPE( "Zchin", 13 );
    SET_ZONE_POPULATION_TYPE( "Zchisl1", 14 );
    SET_ZONE_POPULATION_TYPE( "Zchisl2", 14 );
    SET_ZONE_POPULATION_TYPE( "ZCity1", 15 );
    SET_ZONE_POPULATION_TYPE( "ZCity2", 15 );
    SET_ZONE_POPULATION_TYPE( "Zcois1", 16 );
    SET_ZONE_POPULATION_TYPE( "Zcois3", 16 );
    SET_ZONE_POPULATION_TYPE( "Zcois4", 16 );
    SET_ZONE_POPULATION_TYPE( "Zcois5", 16 );
    SET_ZONE_POPULATION_TYPE( "Zcois8", 16 );
    SET_ZONE_POPULATION_TYPE( "ZDOWNT", 17 );
    SET_ZONE_POPULATION_TYPE( "Zeast", 18 );
    SET_ZONE_POPULATION_TYPE( "ZEHOK1", 19 );
    SET_ZONE_POPULATION_TYPE( "ZEHOK2", 19 );
    SET_ZONE_POPULATION_TYPE( "ZEHOK3", 19 );
    SET_ZONE_POPULATION_TYPE( "ZEHOK4", 19 );
    SET_ZONE_POPULATION_TYPE( "ZEHOK5", 19 );
    SET_ZONE_POPULATION_TYPE( "ZEHOK6", 19 );
    SET_ZONE_POPULATION_TYPE( "ZEHOK7", 19 );
    SET_ZONE_POPULATION_TYPE( "ZEHOK8", 19 );
    SET_ZONE_POPULATION_TYPE( "ZEHOK9", 19 );
    SET_ZONE_POPULATION_TYPE( "ZEHOK10", 19 );
    SET_ZONE_POPULATION_TYPE( "Zehol1", 20 );
    SET_ZONE_POPULATION_TYPE( "Zehol2", 20 );
    SET_ZONE_POPULATION_TYPE( "ZESTCT1", 21 );
    SET_ZONE_POPULATION_TYPE( "ZESTCT2", 21 );
    SET_ZONE_POPULATION_TYPE( "ZESTCT3", 21 );
    SET_ZONE_POPULATION_TYPE( "ZESTCT4", 21 );
    SET_ZONE_POPULATION_TYPE( "ZESTCT5", 21 );
    SET_ZONE_POPULATION_TYPE( "ZESTCT6", 21 );
    SET_ZONE_POPULATION_TYPE( "ZESTCT7", 21 );
    SET_ZONE_POPULATION_TYPE( "ZESTCT8", 21 );
    SET_ZONE_POPULATION_TYPE( "ZESTCT9", 21 );
    SET_ZONE_POPULATION_TYPE( "Zexc1", 22 );
    SET_ZONE_POPULATION_TYPE( "Zexc2", 22 );
    SET_ZONE_POPULATION_TYPE( "Zexc3", 22 );
    SET_ZONE_POPULATION_TYPE( "Zexc4", 22 );
    SET_ZONE_POPULATION_TYPE( "ZFIEPR1", 24 );
    SET_ZONE_POPULATION_TYPE( "ZFIEPR2", 24 );
    SET_ZONE_POPULATION_TYPE( "ZFIEPR3", 24 );
    SET_ZONE_POPULATION_TYPE( "ZFIEPR4", 24 );
    SET_ZONE_POPULATION_TYPE( "ZFIEPR5", 24 );
    SET_ZONE_POPULATION_TYPE( "ZFIEPR6", 24 );
    SET_ZONE_POPULATION_TYPE( "Zfisn", 25 );
    SET_ZONE_POPULATION_TYPE( "zfiss1", 26 );
    SET_ZONE_POPULATION_TYPE( "zfiss2", 26 );
    SET_ZONE_POPULATION_TYPE( "zfiss3", 26 );
    SET_ZONE_POPULATION_TYPE( "zfiss4", 26 );
    SET_ZONE_POPULATION_TYPE( "zfiss5", 26 );
    SET_ZONE_POPULATION_TYPE( "Zfort", 27 );
    SET_ZONE_POPULATION_TYPE( "ZFRIS1", 23 );
    SET_ZONE_POPULATION_TYPE( "ZFRIS2", 23 );
    SET_ZONE_POPULATION_TYPE( "ZHap1", 29 );
    SET_ZONE_POPULATION_TYPE( "ZHap2", 29 );
    SET_ZONE_POPULATION_TYPE( "ZHap3", 29 );
    SET_ZONE_POPULATION_TYPE( "Zhat", 30 );
    SET_ZONE_POPULATION_TYPE( "ZHOVEB1", 31 );
    SET_ZONE_POPULATION_TYPE( "ZHOVEB2", 31 );
    SET_ZONE_POPULATION_TYPE( "ZHOVEB3", 31 );
    SET_ZONE_POPULATION_TYPE( "ZINDUS1", 32 );
    SET_ZONE_POPULATION_TYPE( "ZINDUS2", 32 );
    SET_ZONE_POPULATION_TYPE( "ZINDUS3", 32 );
    SET_ZONE_POPULATION_TYPE( "ZINDUS4", 32 );
    SET_ZONE_POPULATION_TYPE( "ZINDUS5", 32 );
    SET_ZONE_POPULATION_TYPE( "ZINDUS6", 32 );
    SET_ZONE_POPULATION_TYPE( "Zital", 33 );
    SET_ZONE_POPULATION_TYPE( "Zlanc1", 34 );
    SET_ZONE_POPULATION_TYPE( "Zlanc2", 34 );
    SET_ZONE_POPULATION_TYPE( "Zlance", 35 );
    SET_ZONE_POPULATION_TYPE( "ZLBAY1", 36 );
    SET_ZONE_POPULATION_TYPE( "ZLBAY2", 36 );
    SET_ZONE_POPULATION_TYPE( "ZLBAY3", 36 );
    SET_ZONE_POPULATION_TYPE( "ZLBAY4", 36 );
    SET_ZONE_POPULATION_TYPE( "ZLBAY5", 36 );
    SET_ZONE_POPULATION_TYPE( "Zleft1", 37 );
    SET_ZONE_POPULATION_TYPE( "Zleft2", 37 );
    SET_ZONE_POPULATION_TYPE( "Zlowe1", 38 );
    SET_ZONE_POPULATION_TYPE( "Zlowe2", 38 );
    SET_ZONE_POPULATION_TYPE( "Zmdw1", 39 );
    SET_ZONE_POPULATION_TYPE( "Zmdw2", 39 );
    SET_ZONE_POPULATION_TYPE( "Zmdw3", 39 );
    SET_ZONE_POPULATION_TYPE( "Zmeat", 42 );
    SET_ZONE_POPULATION_TYPE( "ZMHILLS", 41 );
    SET_ZONE_POPULATION_TYPE( "Zmide", 43 );
    SET_ZONE_POPULATION_TYPE( "Zmidpa", 44 );
    SET_ZONE_POPULATION_TYPE( "ZMPARK1", 40 );
    SET_ZONE_POPULATION_TYPE( "ZMPARK2", 40 );
    SET_ZONE_POPULATION_TYPE( "ZMPARK3", 40 );
    SET_ZONE_POPULATION_TYPE( "ZMPARK4", 40 );
    SET_ZONE_POPULATION_TYPE( "Znhol1", 45 );
    SET_ZONE_POPULATION_TYPE( "Znhol2", 45 );
    SET_ZONE_POPULATION_TYPE( "Znorm", 47 );
    SET_ZONE_POPULATION_TYPE( "Znort1", 48 );
    SET_ZONE_POPULATION_TYPE( "Znort2", 68 );
    SET_ZONE_POPULATION_TYPE( "Znort3", 68 );
    SET_ZONE_POPULATION_TYPE( "Znort4", 68 );
    SET_ZONE_POPULATION_TYPE( "Znort5", 68 );
    SET_ZONE_POPULATION_TYPE( "ZNRDNS1", 46 );
    SET_ZONE_POPULATION_TYPE( "ZNRDNS2", 46 );
    SET_ZONE_POPULATION_TYPE( "ZNRDNS3", 46 );
    SET_ZONE_POPULATION_TYPE( "ZNRDNS4", 46 );
    SET_ZONE_POPULATION_TYPE( "ZNRDNS5", 46 );
    SET_ZONE_POPULATION_TYPE( "ZNRDNS6", 46 );
    SET_ZONE_POPULATION_TYPE( "ZNRDNS7", 46 );
    SET_ZONE_POPULATION_TYPE( "ZOUTLO", 49 );
    SET_ZONE_POPULATION_TYPE( "Zport", 50 );
    SET_ZONE_POPULATION_TYPE( "Zport1", 50 );
    SET_ZONE_POPULATION_TYPE( "Zpres", 51 );
    SET_ZONE_POPULATION_TYPE( "Zpurg1", 52 );
    SET_ZONE_POPULATION_TYPE( "Zpurg2", 52 );
    SET_ZONE_POPULATION_TYPE( "Zpurg3", 52 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL1", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL2", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL3", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL4", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL5", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL6", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL7", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL8", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL9", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL10", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL11", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL12", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL13", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL14", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL15", 53 );
    SET_ZONE_POPULATION_TYPE( "ZRHIL16", 53 );
    SET_ZONE_POPULATION_TYPE( "ZSHTLER", 55 );
    SET_ZONE_POPULATION_TYPE( "ZSLOPES", 56 );
    SET_ZONE_POPULATION_TYPE( "ZSOHAN1", 54 );
    SET_ZONE_POPULATION_TYPE( "ZSOHAN2", 54 );
    SET_ZONE_POPULATION_TYPE( "Zstar", 57 );
    SET_ZONE_POPULATION_TYPE( "ZSTEI1", 58 );
    SET_ZONE_POPULATION_TYPE( "ZSTEI2", 58 );
    SET_ZONE_POPULATION_TYPE( "ZSTEI3", 58 );
    SET_ZONE_POPULATION_TYPE( "ZSTEI4", 58 );
    SET_ZONE_POPULATION_TYPE( "ZSTEI5", 58 );
    SET_ZONE_POPULATION_TYPE( "ZSTEI6", 58 );
    SET_ZONE_POPULATION_TYPE( "ZSTEI7", 58 );
    SET_ZONE_POPULATION_TYPE( "ZSTEI8", 58 );
    SET_ZONE_POPULATION_TYPE( "ZSTEI9", 58 );
    SET_ZONE_POPULATION_TYPE( "ZSTEI10", 58 );
    SET_ZONE_POPULATION_TYPE( "ZSTEI11", 58 );
    SET_ZONE_POPULATION_TYPE( "Zsuff1", 59 );
    SET_ZONE_POPULATION_TYPE( "Zsuff2", 59 );
    SET_ZONE_POPULATION_TYPE( "Ztri", 60 );
    SET_ZONE_POPULATION_TYPE( "Ztudo1", 61 );
    SET_ZONE_POPULATION_TYPE( "Ztudo2", 61 );
    SET_ZONE_POPULATION_TYPE( "Zvarh", 62 );
    SET_ZONE_POPULATION_TYPE( "Zwest1", 63 );
    SET_ZONE_POPULATION_TYPE( "Zwest2", 63 );
    SET_ZONE_POPULATION_TYPE( "Zwestm", 64 );
    SET_ZONE_POPULATION_TYPE( "ZWILIS1", 65 );
    SET_ZONE_POPULATION_TYPE( "ZAIRU0", 66 );
    SET_ZONE_POPULATION_TYPE( "ZAIRU1", 66 );
    SET_ZONE_POPULATION_TYPE( "ZAIRU2", 66 );
    SET_ZONE_POPULATION_TYPE( "ZAIRU3", 66 );
    SET_ZONE_POPULATION_TYPE( "ZAIRU4", 66 );
    SET_ZONE_POPULATION_TYPE( "ZAIRU5", 66 );
    SET_ZONE_POPULATION_TYPE( "ZAIRU6", 66 );
    SET_ZONE_POPULATION_TYPE( "ZAIRU7", 66 );
    SET_ZONE_POPULATION_TYPE( "ZAIRU8", 66 );
    SET_ZONE_POPULATION_TYPE( "ZAIRU9", 66 );
    return;
}

// sub_12404
void SetZonesScumminess()
{
    SET_ZONE_SCUMMINESS( "Zact1", 4 );
    SET_ZONE_SCUMMINESS( "Zact2", 4 );
    SET_ZONE_SCUMMINESS( "Zacti", 5 );
    SET_ZONE_SCUMMINESS( "Zacti1", 5 );
    SET_ZONE_SCUMMINESS( "ZAIRPT1", 3 );
    SET_ZONE_SCUMMINESS( "ZAIRPT2", 3 );
    SET_ZONE_SCUMMINESS( "ZAIRPT3", 3 );
    SET_ZONE_SCUMMINESS( "Zald1", 3 );
    SET_ZONE_SCUMMINESS( "Zald2", 3 );
    SET_ZONE_SCUMMINESS( "Zald3", 3 );
    SET_ZONE_SCUMMINESS( "Zald4", 3 );
    SET_ZONE_SCUMMINESS( "ZBEG1", 0 );
    SET_ZONE_SCUMMINESS( "ZBEG2", 0 );
    SET_ZONE_SCUMMINESS( "ZBECCT1", 3 );
    SET_ZONE_SCUMMINESS( "ZBECCT2", 3 );
    SET_ZONE_SCUMMINESS( "ZBECCT3", 3 );
    SET_ZONE_SCUMMINESS( "ZBECCT4", 3 );
    SET_ZONE_SCUMMINESS( "ZBECCT5", 3 );
    SET_ZONE_SCUMMINESS( "Zberc", 1 );
    SET_ZONE_SCUMMINESS( "Zberc1", 1 );
    SET_ZONE_SCUMMINESS( "ZBOAB1", 3 );
    SET_ZONE_SCUMMINESS( "ZBOAB2", 3 );
    SET_ZONE_SCUMMINESS( "ZBOAB3", 3 );
    SET_ZONE_SCUMMINESS( "ZBOAB4", 3 );
    SET_ZONE_SCUMMINESS( "ZBOAB5", 3 );
    SET_ZONE_SCUMMINESS( "ZBOAB6", 3 );
    SET_ZONE_SCUMMINESS( "ZBOULE1", 4 );
    SET_ZONE_SCUMMINESS( "ZBOULE2", 4 );
    SET_ZONE_SCUMMINESS( "ZBOULE3", 4 );
    SET_ZONE_SCUMMINESS( "ZBOULE4", 4 );
    SET_ZONE_SCUMMINESS( "ZCERV1", 3 );
    SET_ZONE_SCUMMINESS( "ZCERV2", 3 );
    SET_ZONE_SCUMMINESS( "ZCERV3", 3 );
    SET_ZONE_SCUMMINESS( "ZCERV4", 3 );
    SET_ZONE_SCUMMINESS( "Zcgar1", 0 );
    SET_ZONE_SCUMMINESS( "Zcgar2", 0 );
    SET_ZONE_SCUMMINESS( "Zcgar3", 0 );
    SET_ZONE_SCUMMINESS( "Zcgar4", 0 );
    SET_ZONE_SCUMMINESS( "Zcgci1", 0 );
    SET_ZONE_SCUMMINESS( "Zcgci2", 0 );
    SET_ZONE_SCUMMINESS( "Zcgci3", 0 );
    SET_ZONE_SCUMMINESS( "Zcgci4", 0 );
    SET_ZONE_SCUMMINESS( "ZCHASE1", 5 );
    SET_ZONE_SCUMMINESS( "ZCHASE2", 5 );
    SET_ZONE_SCUMMINESS( "Zchin", 3 );
    SET_ZONE_SCUMMINESS( "Zchisl1", 4 );
    SET_ZONE_SCUMMINESS( "Zchisl2", 4 );
    SET_ZONE_SCUMMINESS( "ZCity1", 0 );
    SET_ZONE_SCUMMINESS( "ZCity2", 0 );
    SET_ZONE_SCUMMINESS( "Zcois1", 4 );
    SET_ZONE_SCUMMINESS( "Zcois3", 4 );
    SET_ZONE_SCUMMINESS( "Zcois4", 4 );
    SET_ZONE_SCUMMINESS( "Zcois5", 4 );
    SET_ZONE_SCUMMINESS( "Zcois8", 4 );
    SET_ZONE_SCUMMINESS( "ZDOWNT", 3 );
    SET_ZONE_SCUMMINESS( "Zeast", 2 );
    SET_ZONE_SCUMMINESS( "ZEHOK1", 2 );
    SET_ZONE_SCUMMINESS( "ZEHOK2", 2 );
    SET_ZONE_SCUMMINESS( "ZEHOK3", 2 );
    SET_ZONE_SCUMMINESS( "ZEHOK4", 2 );
    SET_ZONE_SCUMMINESS( "ZEHOK5", 2 );
    SET_ZONE_SCUMMINESS( "ZEHOK6", 2 );
    SET_ZONE_SCUMMINESS( "ZEHOK7", 2 );
    SET_ZONE_SCUMMINESS( "ZEHOK8", 2 );
    SET_ZONE_SCUMMINESS( "ZEHOK9", 2 );
    SET_ZONE_SCUMMINESS( "ZEHOK10", 2 );
    SET_ZONE_SCUMMINESS( "Zehol1", 5 );
    SET_ZONE_SCUMMINESS( "Zehol2", 5 );
    SET_ZONE_SCUMMINESS( "ZESTCT1", 3 );
    SET_ZONE_SCUMMINESS( "ZESTCT2", 3 );
    SET_ZONE_SCUMMINESS( "ZESTCT3", 3 );
    SET_ZONE_SCUMMINESS( "ZESTCT4", 3 );
    SET_ZONE_SCUMMINESS( "ZESTCT5", 3 );
    SET_ZONE_SCUMMINESS( "ZESTCT6", 3 );
    SET_ZONE_SCUMMINESS( "ZESTCT7", 3 );
    SET_ZONE_SCUMMINESS( "ZESTCT8", 3 );
    SET_ZONE_SCUMMINESS( "ZESTCT9", 3 );
    SET_ZONE_SCUMMINESS( "Zexc1", 0 );
    SET_ZONE_SCUMMINESS( "Zexc2", 0 );
    SET_ZONE_SCUMMINESS( "Zexc3", 0 );
    SET_ZONE_SCUMMINESS( "Zexc4", 0 );
    SET_ZONE_SCUMMINESS( "ZFIEPR1", 5 );
    SET_ZONE_SCUMMINESS( "ZFIEPR2", 5 );
    SET_ZONE_SCUMMINESS( "ZFIEPR3", 5 );
    SET_ZONE_SCUMMINESS( "ZFIEPR4", 5 );
    SET_ZONE_SCUMMINESS( "ZFIEPR5", 5 );
    SET_ZONE_SCUMMINESS( "ZFIEPR6", 5 );
    SET_ZONE_SCUMMINESS( "Zfisn", 2 );
    SET_ZONE_SCUMMINESS( "zfiss1", 2 );
    SET_ZONE_SCUMMINESS( "zfiss2", 2 );
    SET_ZONE_SCUMMINESS( "zfiss3", 2 );
    SET_ZONE_SCUMMINESS( "zfiss4", 2 );
    SET_ZONE_SCUMMINESS( "zfiss5", 2 );
    SET_ZONE_SCUMMINESS( "Zfort", 4 );
    SET_ZONE_SCUMMINESS( "ZFRIS1", 4 );
    SET_ZONE_SCUMMINESS( "ZFRIS2", 4 );
    SET_ZONE_SCUMMINESS( "ZHap1", 1 );
    SET_ZONE_SCUMMINESS( "ZHap2", 1 );
    SET_ZONE_SCUMMINESS( "ZHap3", 1 );
    SET_ZONE_SCUMMINESS( "Zhat", 1 );
    SET_ZONE_SCUMMINESS( "ZHOVEB1", 3 );
    SET_ZONE_SCUMMINESS( "ZHOVEB2", 3 );
    SET_ZONE_SCUMMINESS( "ZHOVEB3", 3 );
    SET_ZONE_SCUMMINESS( "ZINDUS1", 5 );
    SET_ZONE_SCUMMINESS( "ZINDUS2", 5 );
    SET_ZONE_SCUMMINESS( "ZINDUS3", 5 );
    SET_ZONE_SCUMMINESS( "ZINDUS4", 5 );
    SET_ZONE_SCUMMINESS( "ZINDUS5", 5 );
    SET_ZONE_SCUMMINESS( "ZINDUS6", 5 );
    SET_ZONE_SCUMMINESS( "Zital", 3 );
    SET_ZONE_SCUMMINESS( "Zlanc1", 1 );
    SET_ZONE_SCUMMINESS( "Zlanc2", 1 );
    SET_ZONE_SCUMMINESS( "Zlance", 1 );
    SET_ZONE_SCUMMINESS( "ZLBAY1", 4 );
    SET_ZONE_SCUMMINESS( "ZLBAY2", 4 );
    SET_ZONE_SCUMMINESS( "ZLBAY3", 4 );
    SET_ZONE_SCUMMINESS( "ZLBAY4", 4 );
    SET_ZONE_SCUMMINESS( "ZLBAY5", 4 );
    SET_ZONE_SCUMMINESS( "Zleft1", 1 );
    SET_ZONE_SCUMMINESS( "Zleft2", 1 );
    SET_ZONE_SCUMMINESS( "Zlowe1", 3 );
    SET_ZONE_SCUMMINESS( "Zlowe2", 3 );
    SET_ZONE_SCUMMINESS( "Zmdw1", 1 );
    SET_ZONE_SCUMMINESS( "Zmdw2", 1 );
    SET_ZONE_SCUMMINESS( "Zmdw3", 1 );
    SET_ZONE_SCUMMINESS( "Zmeat", 2 );
    SET_ZONE_SCUMMINESS( "ZMHILLS", 2 );
    SET_ZONE_SCUMMINESS( "Zmide", 1 );
    SET_ZONE_SCUMMINESS( "Zmidpa", 1 );
    SET_ZONE_SCUMMINESS( "ZMPARK1", 2 );
    SET_ZONE_SCUMMINESS( "ZMPARK2", 2 );
    SET_ZONE_SCUMMINESS( "ZMPARK3", 2 );
    SET_ZONE_SCUMMINESS( "ZMPARK4", 2 );
    SET_ZONE_SCUMMINESS( "Znhol1", 4 );
    SET_ZONE_SCUMMINESS( "Znhol2", 4 );
    SET_ZONE_SCUMMINESS( "Znorm", 2 );
    SET_ZONE_SCUMMINESS( "Znort1", 5 );
    SET_ZONE_SCUMMINESS( "Znort2", 5 );
    SET_ZONE_SCUMMINESS( "Znort3", 5 );
    SET_ZONE_SCUMMINESS( "Znort4", 5 );
    SET_ZONE_SCUMMINESS( "Znort5", 5 );
    SET_ZONE_SCUMMINESS( "ZNRDNS1", 2 );
    SET_ZONE_SCUMMINESS( "ZNRDNS2", 2 );
    SET_ZONE_SCUMMINESS( "ZNRDNS3", 2 );
    SET_ZONE_SCUMMINESS( "ZNRDNS4", 2 );
    SET_ZONE_SCUMMINESS( "ZNRDNS5", 2 );
    SET_ZONE_SCUMMINESS( "ZNRDNS6", 2 );
    SET_ZONE_SCUMMINESS( "ZNRDNS7", 2 );
    SET_ZONE_SCUMMINESS( "ZOUTLO", 3 );
    SET_ZONE_SCUMMINESS( "Zport", 4 );
    SET_ZONE_SCUMMINESS( "Zport1", 4 );
    SET_ZONE_SCUMMINESS( "Zpres", 3 );
    SET_ZONE_SCUMMINESS( "Zpurg1", 2 );
    SET_ZONE_SCUMMINESS( "Zpurg2", 2 );
    SET_ZONE_SCUMMINESS( "Zpurg3", 2 );
    SET_ZONE_SCUMMINESS( "ZRHIL1", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL2", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL3", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL4", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL5", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL6", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL7", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL8", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL9", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL10", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL11", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL12", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL13", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL14", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL15", 1 );
    SET_ZONE_SCUMMINESS( "ZRHIL16", 1 );
    SET_ZONE_SCUMMINESS( "ZSHTLER", 4 );
    SET_ZONE_SCUMMINESS( "ZSLOPES", 1 );
    SET_ZONE_SCUMMINESS( "ZSOHAN1", 5 );
    SET_ZONE_SCUMMINESS( "ZSOHAN1", 5 );
    SET_ZONE_SCUMMINESS( "Zstar", 2 );
    SET_ZONE_SCUMMINESS( "ZSTEI1", 3 );
    SET_ZONE_SCUMMINESS( "ZSTEI2", 3 );
    SET_ZONE_SCUMMINESS( "ZSTEI3", 3 );
    SET_ZONE_SCUMMINESS( "ZSTEI4", 3 );
    SET_ZONE_SCUMMINESS( "ZSTEI5", 3 );
    SET_ZONE_SCUMMINESS( "ZSTEI6", 3 );
    SET_ZONE_SCUMMINESS( "ZSTEI7", 3 );
    SET_ZONE_SCUMMINESS( "ZSTEI8", 3 );
    SET_ZONE_SCUMMINESS( "ZSTEI9", 3 );
    SET_ZONE_SCUMMINESS( "ZSTEI10", 3 );
    SET_ZONE_SCUMMINESS( "ZSTEI11", 3 );
    SET_ZONE_SCUMMINESS( "Zsuff1", 2 );
    SET_ZONE_SCUMMINESS( "Zsuff1", 2 );
    SET_ZONE_SCUMMINESS( "Ztri", 1 );
    SET_ZONE_SCUMMINESS( "Ztudo1", 3 );
    SET_ZONE_SCUMMINESS( "Ztudo2", 3 );
    SET_ZONE_SCUMMINESS( "Zvarh", 4 );
    SET_ZONE_SCUMMINESS( "Zwest1", 0 );
    SET_ZONE_SCUMMINESS( "Zwest2", 0 );
    SET_ZONE_SCUMMINESS( "Zwestm", 1 );
    SET_ZONE_SCUMMINESS( "ZWILIS1", 2 );
    SET_ZONE_SCUMMINESS( "ZAIRU0", 3 );
    SET_ZONE_SCUMMINESS( "ZAIRU1", 3 );
    SET_ZONE_SCUMMINESS( "ZAIRU2", 3 );
    SET_ZONE_SCUMMINESS( "ZAIRU3", 3 );
    SET_ZONE_SCUMMINESS( "ZAIRU4", 3 );
    SET_ZONE_SCUMMINESS( "ZAIRU5", 3 );
    SET_ZONE_SCUMMINESS( "ZAIRU6", 3 );
    SET_ZONE_SCUMMINESS( "ZAIRU7", 3 );
    SET_ZONE_SCUMMINESS( "ZAIRU8", 3 );
    SET_ZONE_SCUMMINESS( "ZAIRU9", 3 );
    return;
}

