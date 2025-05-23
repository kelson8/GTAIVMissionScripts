void main()
{
    // Some pickups
    ProtectedSet(l_U136, 200);
    ProtectedSet(l_U277, 200);
    ProtectedSet(l_U488, 200);
    
    // TODO What is this model? It's not a model from the model id list.
    l_U544 = -1497030044;

    // Unknown global, TODO Find usage and figure it out.
    g_U10 = 0;
    RequestAndStartScripts();

    // Seems to set something if GET_IS_HIDEF is true.
    sub_2114();

    // Debug function, unused.
    sub_8787();

    CreateInitialWeaponPickups();
    
    // I think this creates interior pickups, and objects.
    sub_15074();

    // Create pickups #2
    sub_18769();
    
    // Create pickups #3
    sub_28698();

    // Setting bits, unsure of what this is doing.
    sub_30878();

    // Seems to be getting some random numbers in one of the functions that it uses, unsure of purpose.
    // Also sets bits somewhere.
    sub_31553();

    // Create car generators, switch them either on or off.
    sub_33962();

    // Some extra game objects
    sub_38346();
    Setup_Game_Completion_Requirements();
    TERMINATE_THIS_SCRIPT();
    return;
}

// sub_47
// Request and start most scripts needed for SinglePlayer
void RequestAndStartScripts()
{
    REQUEST_MODEL( l_U544 );
    REQUEST_SCRIPT( "SPcellphone" );
    REQUEST_SCRIPT( "SPcellphoneDebug" );
    REQUEST_SCRIPT( "ambControlLoader" );
    REQUEST_SCRIPT( "ambDebug" );
    REQUEST_SCRIPT( "taxi_trigger" );
    REQUEST_SCRIPT( "stunt" );
    REQUEST_SCRIPT( "internet_dating" );
    REQUEST_SCRIPT( "emergencyCall" );
    REQUEST_SCRIPT( "speechControl" );
    REQUEST_SCRIPT( "MultiplayerTutorial" );
    REQUEST_SCRIPT( "independenceFM" );
    REQUEST_SCRIPT( "replayTutorial" );
    REQUEST_SCRIPT( "statTracker" );
    REQUEST_SCRIPT( "trainHelper" );
    REQUEST_SCRIPT( "happyTShirt" );
    REQUEST_SCRIPT( "stat_bridge" );
    REQUEST_SCRIPT( "storyTimer" );
    REQUEST_SCRIPT( "computerNEWS" );
    REQUEST_SCRIPT( "mpTutorialLauncher" );
    if ((NOT (# -NULL-0xc27bfa())) AND (NOT (# -NULL-0xc27c84())))
    {
        REQUEST_SCRIPT( "sixAxisTutLauncher" );
    }
    while ((NOT (HAS_SCRIPT_LOADED( "happyTShirt" ))) || ((NOT (HAS_SCRIPT_LOADED( "trainHelper" ))) || ((NOT (HAS_SCRIPT_LOADED( "mpTutorialLauncher" ))) || ((NOT (HAS_SCRIPT_LOADED( "replayTutorial" ))) || ((NOT (HAS_SCRIPT_LOADED( "independenceFM" ))) || ((NOT (HAS_SCRIPT_LOADED( "MultiplayerTutorial" ))) || ((NOT (HAS_SCRIPT_LOADED( "statTracker" ))) || ((NOT (HAS_SCRIPT_LOADED( "speechControl" ))) || ((NOT (HAS_SCRIPT_LOADED( "computerNEWS" ))) || ((NOT (HAS_SCRIPT_LOADED( "emergencyCall" ))) || ((NOT (HAS_SCRIPT_LOADED( "internet_dating" ))) || ((NOT (HAS_SCRIPT_LOADED( "stunt" ))) || ((NOT (HAS_SCRIPT_LOADED( "taxi_trigger" ))) || ((NOT (HAS_SCRIPT_LOADED( "ambDebug" ))) || ((NOT (HAS_SCRIPT_LOADED( "ambControlLoader" ))) || ((NOT (HAS_SCRIPT_LOADED( "SPcellphoneDebug" ))) || (NOT (HAS_SCRIPT_LOADED( "SPcellphone" )))))))))))))))))))
    {
        WAIT( 0 );
    }
    if ((NOT (# -NULL-0xc27bfa())) AND (NOT (# -NULL-0xc27c84())))
    {
        while (NOT (HAS_SCRIPT_LOADED( "sixAxisTutLauncher" )))
        {
            WAIT( 0 );
        }
    }
    while ((NOT (HAS_SCRIPT_LOADED( "storyTimer" ))) || (NOT (HAS_SCRIPT_LOADED( "stat_bridge" ))))
    {
        WAIT( 0 );
    }
    START_NEW_SCRIPT( "SPcellphone", 512 );
    START_NEW_SCRIPT( "MultiplayerTutorial", 512 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MultiplayerTutorial" );
    START_NEW_SCRIPT( "independenceFM", 512 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "independenceFM" );
    START_NEW_SCRIPT( "replayTutorial", 512 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "replayTutorial" );
    if (NOT IS_NETWORK_SESSION())
    {
        START_NEW_SCRIPT( "SPcellphoneDebug", 512 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneDebug" );
        START_NEW_SCRIPT( "ambControlLoader", 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambControlLoader" );
        START_NEW_SCRIPT( "ambDebug", 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "ambDebug" );
        START_NEW_SCRIPT( "taxi_trigger", 512 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "taxi_trigger" );
        START_NEW_SCRIPT( "stunt", 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "stunt" );
        START_NEW_SCRIPT( "trainHelper", 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "trainHelper" );
        START_NEW_SCRIPT( "internet_dating", 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "internet_dating" );
        START_NEW_SCRIPT( "statTracker", 512 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "statTracker" );
        START_NEW_SCRIPT( "happyTShirt", 512 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "happyTShirt" );
        START_NEW_SCRIPT( "stat_bridge", 512 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "stat_bridge" );
        START_NEW_SCRIPT( "storyTimer", 512 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "storyTimer" );
        START_NEW_SCRIPT( "emergencyCall", 512 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "emergencyCall" );
        START_NEW_SCRIPT( "computerNEWS", 512 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "computerNEWS" );
        START_NEW_SCRIPT( "speechControl", 128 );
        START_NEW_SCRIPT( "mpTutorialLauncher", 512 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "mpTutorialLauncher" );
        if ((NOT (# -NULL-0xc27bfa())) AND (NOT (# -NULL-0xc27c84())))
        {
            START_NEW_SCRIPT( "sixAxisTutLauncher", 512 );
            MARK_SCRIPT_AS_NO_LONGER_NEEDED( "sixAxisTutLauncher" );
        }
    }
    return;
}

void sub_2114()
{
    int I;

    g_U555 = 9;
    g_U91._fU0 = 1000;
    for ( I = 0; I <= (g_U15946 - 1); I++ )
    {
        g_U15946[I]._fU132._fU4 = -1;
    }

    g_U91._fU72 = -1;
    g_U91._fU68 = -1;

    sub_2206();
    sub_4766();

    g_U91._fU72 = -1;

    StrCopy( ref g_U15946[56]._fU132._fU8, "", 16 );
    g_U15946[56]._fU132._fU0 = 0;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        sub_8452( I );
    }

    g_U91._fU112 = 0;
    g_U91._fU412 = 0;

    for ( I = 0; I <= 4; I++ )
    {
        SET_BIT( ref g_U91._fU412, I );
    }
    g_U91._fU388 = 1;
    g_U91._fU396 = 0;
    g_U91._fU416 = 0;
    SET_BIT( ref g_U91._fU416, 0 );
    g_U480 = 0;
    sub_8637();
    g_U91._fU40 = 2;

    if (GET_IS_HIDEF())
    {
        g_U91._fU496 = 1;
        g_U91._fU500 = 1;
    }
    else
    {
        g_U91._fU496 = 0;
        g_U91._fU500 = 0;
    }

    g_U91._fU76 = -1;
    g_U91._fU524 = 1;
    g_U822 = 0;
    g_U823 = 1;
    g_U824 = 0;
    return;
}

void sub_2206()
{
    if (GET_CURRENT_LANGUAGE() == 5)
    {
        g_U15946[28]._fU132._fU4 = 10;
        g_U15946[19]._fU132._fU4 = 20;
        g_U15946[18]._fU132._fU4 = 30;
        g_U15946[24]._fU132._fU4 = 40;
        g_U15946[8]._fU132._fU4 = 50;
        g_U15946[1]._fU132._fU4 = 60;
        g_U15946[20]._fU132._fU4 = 70;
        g_U15946[16]._fU132._fU4 = 80;
        g_U15946[15]._fU132._fU4 = 90;
        g_U15946[46]._fU132._fU4 = 100;
        g_U15946[25]._fU132._fU4 = 110;
        g_U15946[27]._fU132._fU4 = 120;
        g_U15946[7]._fU132._fU4 = 130;
        g_U15946[30]._fU132._fU4 = 140;
        g_U15946[10]._fU132._fU4 = 150;
        g_U15946[29]._fU132._fU4 = 160;
        g_U15946[3]._fU132._fU4 = 170;
        g_U15946[2]._fU132._fU4 = 180;
        g_U15946[26]._fU132._fU4 = 190;
        g_U15946[5]._fU132._fU4 = 200;
        g_U15946[13]._fU132._fU4 = 210;
        g_U15946[22]._fU132._fU4 = 220;
        g_U15946[9]._fU132._fU4 = 230;
        g_U15946[0]._fU132._fU4 = 235;
        g_U15946[14]._fU132._fU4 = 240;
        g_U15946[37]._fU132._fU4 = 250;
        g_U15946[4]._fU132._fU4 = 260;
        g_U15946[17]._fU132._fU4 = 270;
        g_U15946[11]._fU132._fU4 = 280;
        g_U15946[36]._fU132._fU4 = 290;
        g_U15946[6]._fU132._fU4 = 300;
        g_U15946[35]._fU132._fU4 = 310;
        g_U15946[12]._fU132._fU4 = 320;
        g_U15946[33]._fU132._fU4 = 330;
        g_U15946[54]._fU132._fU4 = 340;
        g_U15946[31]._fU132._fU4 = 350;
        g_U15946[32]._fU132._fU4 = 360;
        g_U15946[21]._fU132._fU4 = 370;
    }
    else if (NOT IS_JAPANESE_VERSION())
    {
        switch (GET_CURRENT_LANGUAGE())
        {
            case 1:
            g_U15946[36]._fU132._fU4 = 201;
            g_U15946[17]._fU132._fU4 = 231;
            g_U15946[35]._fU132._fU4 = 11;
            g_U15946[27]._fU132._fU4 = 111;
            break;
            case 2:
            g_U15946[36]._fU132._fU4 = 101;
            g_U15946[17]._fU132._fU4 = 12;
            g_U15946[35]._fU132._fU4 = 11;
            g_U15946[27]._fU132._fU4 = 201;
            break;
            case 3:
            g_U15946[36]._fU132._fU4 = 61;
            g_U15946[17]._fU132._fU4 = 271;
            g_U15946[35]._fU132._fU4 = 11;
            g_U15946[27]._fU132._fU4 = 111;
            break;
            case 4:
            g_U15946[36]._fU132._fU4 = 261;
            g_U15946[17]._fU132._fU4 = 11;
            g_U15946[35]._fU132._fU4 = 0;
            g_U15946[27]._fU132._fU4 = 151;
            break;
            default:
            g_U15946[36]._fU132._fU4 = 31;
            g_U15946[17]._fU132._fU4 = 131;
            g_U15946[35]._fU132._fU4 = 191;
            g_U15946[27]._fU132._fU4 = 231;
            break;
        }
        g_U15946[28]._fU132._fU4 = 10;
        g_U15946[19]._fU132._fU4 = 20;
        g_U15946[18]._fU132._fU4 = 30;
        g_U15946[8]._fU132._fU4 = 40;
        g_U15946[24]._fU132._fU4 = 50;
        g_U15946[30]._fU132._fU4 = 60;
        g_U15946[16]._fU132._fU4 = 70;
        g_U15946[25]._fU132._fU4 = 80;
        g_U15946[7]._fU132._fU4 = 90;
        g_U15946[6]._fU132._fU4 = 100;
        g_U15946[4]._fU132._fU4 = 110;
        g_U15946[11]._fU132._fU4 = 120;
        g_U15946[37]._fU132._fU4 = 130;
        g_U15946[20]._fU132._fU4 = 152;
        g_U15946[15]._fU132._fU4 = 150;
        g_U15946[46]._fU132._fU4 = 160;
        g_U15946[22]._fU132._fU4 = 241;
        g_U15946[10]._fU132._fU4 = 180;
        g_U15946[29]._fU132._fU4 = 190;
        g_U15946[3]._fU132._fU4 = 200;
        g_U15946[26]._fU132._fU4 = 210;
        g_U15946[5]._fU132._fU4 = 220;
        g_U15946[2]._fU132._fU4 = 230;
        g_U15946[13]._fU132._fU4 = 240;
        g_U15946[9]._fU132._fU4 = 250;
        g_U15946[14]._fU132._fU4 = 260;
        g_U15946[0]._fU132._fU4 = 270;
        g_U15946[12]._fU132._fU4 = 280;
        g_U15946[1]._fU132._fU4 = 290;
        g_U15946[33]._fU132._fU4 = 300;
        g_U15946[54]._fU132._fU4 = 310;
        g_U15946[31]._fU132._fU4 = 320;
        g_U15946[32]._fU132._fU4 = 330;
        g_U15946[21]._fU132._fU4 = 340;
    }
    else
    {
        g_U15946[12]._fU132._fU4 = 10;
        g_U15946[21]._fU132._fU4 = 20;
        g_U15946[28]._fU132._fU4 = 30;
        g_U15946[6]._fU132._fU4 = 40;
        g_U15946[30]._fU132._fU4 = 50;
        g_U15946[29]._fU132._fU4 = 60;
        g_U15946[20]._fU132._fU4 = 70;
        g_U15946[10]._fU132._fU4 = 80;
        g_U15946[3]._fU132._fU4 = 90;
        g_U15946[46]._fU132._fU4 = 100;
        g_U15946[15]._fU132._fU4 = 110;
        g_U15946[33]._fU132._fU4 = 120;
        g_U15946[25]._fU132._fU4 = 130;
        g_U15946[16]._fU132._fU4 = 140;
        g_U15946[7]._fU132._fU4 = 150;
        g_U15946[18]._fU132._fU4 = 160;
        g_U15946[13]._fU132._fU4 = 170;
        g_U15946[4]._fU132._fU4 = 180;
        g_U15946[17]._fU132._fU4 = 190;
        g_U15946[1]._fU132._fU4 = 200;
        g_U15946[11]._fU132._fU4 = 210;
        g_U15946[8]._fU132._fU4 = 220;
        g_U15946[24]._fU132._fU4 = 230;
        g_U15946[9]._fU132._fU4 = 240;
        g_U15946[37]._fU132._fU4 = 250;
        g_U15946[22]._fU132._fU4 = 260;
        g_U15946[19]._fU132._fU4 = 270;
        g_U15946[5]._fU132._fU4 = 280;
        g_U15946[27]._fU132._fU4 = 290;
        g_U15946[26]._fU132._fU4 = 300;
        g_U15946[2]._fU132._fU4 = 310;
        g_U15946[14]._fU132._fU4 = 320;
        g_U15946[0]._fU132._fU4 = 330;
        g_U15946[36]._fU132._fU4 = 340;
        g_U15946[35]._fU132._fU4 = 350;
    }
    return;
}

void sub_4766()
{
    int I;
    int iVar3;
    int J;

    for ( I = 0; I <= (g_U15946 - 1); I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 100, 1000, ref g_U15946[I]._fU132._fU28 );
        g_U15946[I]._fU132._fU28 *= 1000;
        GENERATE_RANDOM_INT_IN_RANGE( 100, 200, ref iVar3 );
        g_U15946[I]._fU132._fU28 += iVar3;
    }
    StrCopy( ref g_U15946[0]._fU132._fU8, "F1", 16 );
    g_U15946[0]._fU132._fU0 = 0;
    g_U15946[0]._fU0 = 0;
    g_U15946[0]._fU168._fU4 = 1;
    g_U15946[0]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[1]._fU132._fU8, "C2", 16 );
    g_U15946[1]._fU132._fU0 = 0;
    g_U15946[1]._fU0 = 1;
    g_U15946[1]._fU168._fU4 = 1;
    g_U15946[1]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[2]._fU132._fU8, "G3", 16 );
    g_U15946[2]._fU132._fU0 = 0;
    g_U15946[2]._fU0 = 2;
    g_U15946[2]._fU168._fU4 = 1;
    g_U15946[2]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[3]._fU132._fU8, "F4", 16 );
    g_U15946[3]._fU132._fU0 = 0;
    g_U15946[3]._fU0 = 3;
    g_U15946[3]._fU168._fU4 = 1;
    g_U15946[3]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[4]._fU132._fU8, "C5", 16 );
    g_U15946[4]._fU132._fU0 = 0;
    g_U15946[4]._fU0 = 4;
    g_U15946[4]._fU168._fU4 = 1;
    g_U15946[4]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[5]._fU132._fU8, "C7", 16 );
    g_U15946[5]._fU132._fU0 = 0;
    g_U15946[5]._fU0 = 5;
    g_U15946[5]._fU168._fU4 = 1;
    g_U15946[5]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[6]._fU132._fU8, "C7b", 16 );
    g_U15946[6]._fU132._fU0 = 0;
    g_U15946[6]._fU0 = 6;
    g_U15946[6]._fU168._fU4 = 1;
    g_U15946[6]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[7]._fU132._fU8, "F8", 16 );
    g_U15946[7]._fU132._fU0 = 0;
    g_U15946[7]._fU0 = 7;
    g_U15946[7]._fU168._fU4 = 1;
    g_U15946[7]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[8]._fU132._fU8, "F9", 16 );
    g_U15946[8]._fU132._fU0 = 0;
    g_U15946[8]._fU0 = 8;
    g_U15946[8]._fU168._fU4 = 1;
    g_U15946[8]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[9]._fU132._fU8, "C10", 16 );
    g_U15946[9]._fU132._fU0 = 0;
    g_U15946[9]._fU0 = 9;
    g_U15946[9]._fU168._fU4 = 1;
    g_U15946[9]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[10]._fU132._fU8, "G11", 16 );
    g_U15946[10]._fU132._fU0 = 0;
    g_U15946[10]._fU0 = 10;
    g_U15946[10]._fU168._fU4 = 1;
    g_U15946[10]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[11]._fU132._fU8, "C12", 16 );
    g_U15946[11]._fU132._fU0 = 0;
    g_U15946[11]._fU0 = 11;
    g_U15946[11]._fU168._fU4 = 1;
    g_U15946[11]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[12]._fU132._fU8, "C13", 16 );
    g_U15946[12]._fU132._fU0 = 0;
    g_U15946[12]._fU0 = 12;
    g_U15946[12]._fU168._fU4 = 1;
    g_U15946[12]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[13]._fU132._fU8, "F15", 16 );
    g_U15946[13]._fU132._fU0 = 0;
    g_U15946[13]._fU0 = 13;
    g_U15946[13]._fU168._fU4 = 1;
    g_U15946[13]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[14]._fU132._fU8, "C16", 16 );
    g_U15946[14]._fU132._fU0 = 0;
    g_U15946[14]._fU0 = 14;
    g_U15946[14]._fU168._fU4 = 1;
    g_U15946[14]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[15]._fU132._fU8, "C18", 16 );
    g_U15946[15]._fU132._fU0 = 0;
    g_U15946[15]._fU0 = 15;
    g_U15946[15]._fU168._fU4 = 1;
    g_U15946[15]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[16]._fU132._fU8, "C19", 16 );
    g_U15946[16]._fU132._fU0 = 0;
    g_U15946[16]._fU0 = 16;
    g_U15946[16]._fU168._fU4 = 1;
    g_U15946[16]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[17]._fU132._fU8, "G20", 16 );
    g_U15946[17]._fU132._fU0 = 0;
    g_U15946[17]._fU0 = 17;
    g_U15946[17]._fU168._fU4 = 1;
    g_U15946[17]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[18]._fU132._fU8, "C21", 16 );
    g_U15946[18]._fU132._fU0 = 0;
    g_U15946[18]._fU0 = 18;
    g_U15946[18]._fU168._fU4 = 1;
    g_U15946[18]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[19]._fU132._fU8, "C22", 16 );
    g_U15946[19]._fU132._fU0 = 0;
    g_U15946[19]._fU0 = 19;
    g_U15946[19]._fU168._fU4 = 1;
    g_U15946[19]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[22]._fU132._fU8, "C24", 16 );
    g_U15946[22]._fU132._fU0 = 0;
    g_U15946[22]._fU0 = 22;
    g_U15946[22]._fU168._fU4 = 1;
    g_U15946[22]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[20]._fU132._fU8, "C25", 16 );
    g_U15946[20]._fU132._fU0 = 0;
    g_U15946[20]._fU0 = 20;
    g_U15946[20]._fU168._fU4 = 1;
    g_U15946[20]._fU8[0]._fU0[3] = 1;
    J = 0;
    if (g_U0)
    {
        for ( J = 0; J < 23; J++ )
        {
            g_U15946[J]._fU132._fU0 = 1;
        }
    }
    StrCopy( ref g_U15946[24]._fU132._fU8, "BU", 16 );
    g_U15946[24]._fU132._fU0 = 0;
    g_U15946[24]._fU0 = 24;
    g_U15946[24]._fU168._fU4 = 0;
    g_U15946[24]._fU8[0]._fU0[3] = 0;
    StrCopy( ref g_U15946[25]._fU132._fU8, "DI", 16 );
    g_U15946[25]._fU132._fU0 = 0;
    g_U15946[25]._fU0 = 25;
    g_U15946[25]._fU168._fU4 = 0;
    g_U15946[25]._fU8[0]._fU0[3] = 0;
    StrCopy( ref g_U15946[26]._fU132._fU8, "MA", 16 );
    g_U15946[26]._fU132._fU0 = 0;
    g_U15946[26]._fU0 = 26;
    g_U15946[26]._fU168._fU4 = 0;
    g_U15946[26]._fU8[0]._fU0[3] = 0;
    StrCopy( ref g_U15946[27]._fU132._fU8, "MD", 16 );
    g_U15946[27]._fU132._fU0 = 0;
    g_U15946[27]._fU0 = 27;
    g_U15946[27]._fU168._fU4 = 0;
    g_U15946[27]._fU8[0]._fU0[3] = 0;
    StrCopy( ref g_U15946[21]._fU132._fU8, "AA", 16 );
    g_U15946[21]._fU132._fU0 = 0;
    g_U15946[21]._fU0 = 21;
    g_U15946[21]._fU168._fU4 = 0;
    g_U15946[21]._fU8[0]._fU0[3] = 0;
    StrCopy( ref g_U15946[33]._fU132._fU8, "DM", 16 );
    g_U15946[33]._fU132._fU0 = 0;
    g_U15946[33]._fU0 = 33;
    g_U15946[33]._fU168._fU4 = 1;
    g_U15946[33]._fU8[0]._fU0[3] = 1;
    StrCopy( ref g_U15946[36]._fU132._fU8, "TH", 16 );
    g_U15946[36]._fU132._fU0 = 0;
    g_U15946[36]._fU0 = 36;
    StrCopy( ref g_U15946[35]._fU132._fU8, "LY", 16 );
    g_U15946[35]._fU132._fU0 = 0;
    g_U15946[35]._fU0 = 35;
    StrCopy( ref g_U15946[37]._fU132._fU8, "FT", 16 );
    g_U15946[37]._fU132._fU0 = 0;
    g_U15946[37]._fU0 = 37;
    StrCopy( ref g_U15946[46]._fU132._fU8, "RJ", 16 );
    g_U15946[46]._fU132._fU0 = 0;
    g_U15946[46]._fU0 = 46;
    StrCopy( ref g_U15946[28]._fU132._fU8, "GH", 16 );
    g_U15946[28]._fU132._fU0 = 0;
    g_U15946[28]._fU0 = 28;
    StrCopy( ref g_U15946[29]._fU132._fU8, "GE", 16 );
    g_U15946[29]._fU132._fU0 = 0;
    g_U15946[29]._fU0 = 29;
    StrCopy( ref g_U15946[30]._fU132._fU8, "GF", 16 );
    g_U15946[30]._fU132._fU0 = 0;
    g_U15946[30]._fU0 = 30;
    StrCopy( ref g_U15946[31]._fU132._fU8, "GL", 16 );
    g_U15946[31]._fU132._fU0 = 0;
    g_U15946[31]._fU0 = 31;
    StrCopy( ref g_U15946[32]._fU132._fU8, "GG", 16 );
    g_U15946[32]._fU132._fU0 = 0;
    g_U15946[32]._fU0 = 32;
    StrCopy( ref g_U15946[54]._fU132._fU8, "WH", 16 );
    g_U15946[54]._fU132._fU0 = 0;
    g_U15946[54]._fU0 = 54;
    g_U15946[38]._fU132._fU0 = 0;
    g_U15946[39]._fU132._fU0 = 0;
    g_U15946[40]._fU132._fU0 = 0;
    g_U15946[41]._fU132._fU0 = 0;
    g_U15946[42]._fU132._fU0 = 0;
    g_U15946[43]._fU132._fU0 = 0;
    g_U15946[44]._fU132._fU0 = 0;
    g_U15946[45]._fU132._fU0 = 0;
    g_U15946[47]._fU132._fU0 = 0;
    g_U15946[48]._fU132._fU0 = 0;
    g_U15946[49]._fU132._fU0 = 0;
    g_U15946[50]._fU132._fU0 = 0;
    g_U15946[51]._fU132._fU0 = 0;
    g_U15946[52]._fU132._fU0 = 0;
    g_U15946[53]._fU132._fU0 = 0;
    return;
}

void sub_8452(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

void sub_8637()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_8787()
{
    return;
}

// TODO Figure out what this is creating pickups for.
// Oh, these are weapon pickups, I figured it out from sub_8823, which I renamed to GetWeaponModel
// sub_8804
void CreateInitialWeaponPickups()
{
    // Create pickups
    CreatePickups1();
    CreatePickups2();
    CreatePickups3();
    CreatePickups4();
    CreatePickups5();
    return;
}

// sub_8813
void CreatePickups1()
{
    CREATE_PICKUP_ROTATE( GetWeaponModel( 1 ), 15, 0, 1309.50800000, 1674.35800000, 17.06000000, 15.84000000, 180.00000000, 0.00000000, ref l_U0[0] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 1 ), 15, 0, 460.40000000, 1242.54000000, 18.38000000, 15.84000000, 180.00000000, 31.68000000, ref l_U0[1] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 3 ), 15, 0, 664.62000000, 1522.04000000, 16.02000000, 90, 180, 144, ref l_U0[2] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 3 ), 15, 0, 917.24000000, 1536.78000000, 16.54000000, 90, 0, 0, ref l_U0[3] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, 1167.96000000, 1666.66000000, 17.60800000, 90.00000000, 0.00000000, 0.00000000, ref l_U0[4] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U0[4], "clammainroom" );

    CREATE_PICKUP_ROTATE( GetWeaponModel( 13 ), 15, 30, 698.47990000, 1453.68000000, 19.26000000, 270, -11.60000000, 90, ref l_U0[5] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 10 ), 15, 8, 893.08000000, 1975.04000000, 19.40000000, 90.72000000, 182.16000000, -70.56000000, ref l_U0[6] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, 636, 1612, 25.31200000, 90, 30, 30, ref l_U0[7] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 5 ), 15, 3, 1482.38000000, 1566.58000000, 0.68699990, 0.00000000, 0.00000000, 0.00000000, ref l_U0[8] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 14 ), 15, 30, 1213.97000000, 1398.38000000, 33.99000000, 217.44000000, 253.44000000, 308.88000000, ref l_U0[9] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 1 ), 15, 0, 738.94000000, 1930.88000000, 26.76000000, 15.84000000, 174.24000000, 213.84000000, ref l_U0[10] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, 565.94000000, 1401.24000000, 29.86900000, 89.00000000, 0.00000000, 55.44000000, ref l_U0[11] );

    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U0[11], "room_ten_topflr" );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 15 ), 15, 30, 1200.88300000, 1465.94400000, 15.73000000, 275.24000000, 0, 0, ref l_U0[12] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U0[12], "Factory_Room02" );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 11 ), 15, 8, 1199.30500000, 1694.62000000, 17.03000000, 90, 246.96000000, 144.72000000, ref l_U0[13] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U0[13], "clammainroom" );
    return;
}

// sub_8823
void GetWeaponModel(unknown uParam0)
{
    unknown Result;

    GET_WEAPONTYPE_MODEL( uParam0, ref Result );
    return Result;
}

// sub_9645
void CreatePickups2()
{
    CREATE_PICKUP_ROTATE( GetWeaponModel( 1 ), 15, 0, 1048.98000000, -546.66000000, 13.16000000, 43.20000000, 98.64000000, 7.92000000, ref l_U15[0] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 1 ), 15, 0, 1807.40000000, 847.62000000, 21, 0, 162, 87.12000000, ref l_U15[1] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 1 ), 15, 0, 959.68000000, -502.58000000, 14.26400000, 0, 92.60000000, -31.68000000, ref l_U15[2] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 3 ), 15, 0, 827.56000000, 39.02000000, 5.03300000, 91.24000000, -185.76000000, 134.64000000, ref l_U15[3] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 3 ), 15, 0, 927.02000000, 354.26000000, 33.20000000, -19.44000000, 162, 43.20000000, ref l_U15[4] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 3 ), 15, 0, 1393, 217, 25.92700000, 93.60000000, 0.00000000, 0.00000000, ref l_U15[5] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 3 ), 15, 0, 1183.92000000, -166.44000000, 26.91000000, 95.16000000, 14.16000000, 69.80000000, ref l_U15[6] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, 957, 65268, 36.92100000, 90, 0.00000000, 0.00000000, ref l_U15[7] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, 997.54000000, 205.90000000, 31.12000000, 87.30000000, 0.00000000, 0.00000000, ref l_U15[8] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, 914.80000000, -654.65990000, 14.98900000, 100.68000000, 0, 0, ref l_U15[9] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, 1780.92000000, 425.18000000, 26.98500000, 87, 0, 126.72000000, ref l_U15[10] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 9 ), 15, 9, 1968.10000000, 658, 32.16400000, 89.10000000, 0, 43.20000000, ref l_U15[11] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 12 ), 15, 50, 976.40000000, 715.21990000, 39.55500000, 74.88000000, -35.28000000, 198, ref l_U15[12] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 12 ), 15, 50, 1454.12000000, 37.54000000, 24.02000000, 87, 0, 0, ref l_U15[13] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 12 ), 15, 50, 1871.52000000, 104, 13.15000000, 87.04000000, 8.96000000, 0.00000000, ref l_U15[14] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 13 ), 15, 30, 1312.58000000, 54.58000000, 36.29000000, 90.72000000, 177.28000000, 11.52000000, ref l_U15[15] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 13 ), 15, 30, 2221.10000000, 336.34000000, 16.27000000, 271.72000000, 0, 0, ref l_U15[16] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 10 ), 15, 8, 1668.34800000, 1180.17000000, 0.87800000, 79.19999000, 241.20000000, 308.88000000, ref l_U15[17] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 11 ), 15, 8, 2648.81000000, 419, 5.24000000, 87.12000000, 253.44000000, 0, ref l_U15[18] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, 1489.06000000, 563.60000000, 28.86000000, 93, 30, 30, ref l_U15[19] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, 2122.20000000, -25.90000000, 4.81600000, 90, 30, 30, ref l_U15[20] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, 1078.34000000, 859.12000000, 31.58000000, 94.32000000, 30, 60, ref l_U15[21] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 5 ), 15, 3, 1141.96000000, -697.22000000, 15.44000000, 90, 0, 59.76000000, ref l_U15[22] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 5 ), 15, 3, 767.26000000, 456, 3.02000000, 0.00000000, 0.00000000, 0.00000000, ref l_U15[23] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 5 ), 15, 3, 1323.48000000, -415.98000000, 17.35000000, 79.19999000, 0, 0, ref l_U15[24] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 14 ), 15, 30, 1027.86000000, 591.92000000, 33.77000000, 90.72000000, -9.36000000, 82.80000000, ref l_U15[25] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 10 ), 15, 8, 2108.46000000, 722.06700000, 8.74600000, -91.40000000, 234, 40, ref l_U15[28] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 12 ), 15, 50, 430.47300000, 1063.32000000, 0.68200000, 87, 0, 60.00000000, ref l_U15[31] );
    return;
}

// sub_10999
void CreatePickups3()
{
    CREATE_PICKUP_ROTATE( GetWeaponModel( 1 ), 15, 0, 149.36000000, 997.48000000, 3.34300000, 0, 93.36000000, 48.96000000, ref l_U50[0] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 1 ), 15, 0, 468, 402, 7.41000000, 0, 93.16001000, -117.36000000, ref l_U50[1] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 3 ), 15, 0, -478.44000000, 796.76000000, 8.98800000, 90.72000000, 21.60000000, 225.36000000, ref l_U50[2] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 3 ), 15, 0, -235.78000000, 692.00000000, 2.44700000, 88.98001000, 9.36000000, 228.96000000, ref l_U50[3] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, -820.90010000, -4.12000000, 3.84500000, 87.30000000, 0, 0, ref l_U50[4] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, -183.00000000, 1080, 5.67700000, 87.30000000, -10.98000000, 0, ref l_U50[5] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, -75.80000000, 1574.20000000, 22.84000000, -68.36000000, 10.34000000, -0.77999990, ref l_U50[6] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 9 ), 15, 9, -235.70000000, -480.24000000, 4.19300000, 89.52000000, 0, 0, ref l_U50[7] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 9 ), 15, 9, -31.62000000, 70.52000000, 21.50700000, 89.52000000, 0.00000000, 179.28000000, ref l_U50[8] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 9 ), 15, 9, 592.66000000, 784.38000000, 13.28400000, 87.40000000, 0, 0, ref l_U50[9] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 12 ), 15, 50, 101.30000000, -610.80000000, 13.78700000, 88.33999000, 0.00000000, 0.00000000, ref l_U50[10] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 12 ), 15, 50, -93.78000000, 580.20000000, 15.33700000, 88.33999000, 0.00000000, 0.00000000, ref l_U50[11] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 13 ), 15, 30, -220.76000000, 1378.76000000, 22.12000000, 90, 180, 0, ref l_U50[12] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 13 ), 15, 30, -533.52000000, 1356.68000000, 20.14000000, 90, 180, 0, ref l_U50[13] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 14 ), 15, 30, 486.30000000, 65451, 8.74800000, 97.92000000, 286.56000000, 0, ref l_U50[14] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 14 ), 15, 30, -141.66400000, -861.10000000, 18.64900000, 90.72000000, -25.20000000, 179.28000000, ref l_U50[15] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 15 ), 15, 30, 180, 260, 25.74000000, 82.80000000, 5.76000000, 0, ref l_U50[16] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 15 ), 15, 30, 66.94000000, 42.26000000, 21.03000000, 51.84000000, 252, 13.68000000, ref l_U50[17] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 10 ), 15, 8, -118.34000000, 1151.64000000, -1.47000000, 90.00000000, 0.00000000, 51.84000000, ref l_U50[18] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U50[18], "subwayMloRoom01" );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 10 ), 15, 8, -637.43700000, 1137.80000000, 9.26500000, 85.51999000, 246.24000000, 16.56000000, ref l_U50[19] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 11 ), 15, 8, 106, 1135, 20.75500000, 97.92000000, 0, 0, ref l_U50[20] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 11 ), 15, 8, 167, 64621, 8.25500000, 102.24000000, 0, 48.24000000, ref l_U50[21] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 5 ), 15, 3, -415.36000000, 1842.22000000, 3.62000000, 0, 0, 0, ref l_U50[22] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 5 ), 15, 3, -723.66000000, 357, 9.57500000, 0, 0, 0, ref l_U50[23] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, 73, 65088, 19.72800000, 94.62001000, 30, 60, ref l_U50[24] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, 65051, 65323, 13.86000000, 94.62001000, 30, 60, ref l_U50[25] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 18 ), 15, 3, -194.66000000, 1866.16000000, 8.38500000, -86.40000000, 9.14000000, 5.76000000, ref l_U50[26] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 17 ), 15, 7, -221.84000000, 1735.42000000, 48.15900000, -9.36000000, -120.96000000, 0, ref l_U50[27] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 16 ), 15, 7, 162.44000000, 432.64000000, 31.94000000, 90.00000000, 0.00000000, 0.00000000, ref l_U50[28] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, -39.82000000, 111, 13.75500000, 94.62001000, 40.32000000, 0, ref l_U50[29] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, 65182, -2, 13.54500000, 88.50000000, 45, 0, ref l_U50[30] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, 65258, 294, 13.86900000, 94.62001000, 45.72000000, 59.76000000, ref l_U50[31] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, 65058, 27, 8.01700000, 94.62001000, 45.72000000, 133.20000000, ref l_U50[32] );
    return;
}

// sub_12687
void CreatePickups4()
{
    CREATE_PICKUP_ROTATE( GetWeaponModel( 1 ), 15, 0, -1629.32000000, 730.59500000, 27.97800000, 20.88000000, 151.92000000, -32.40000000, ref l_U84[0] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 3 ), 15, 0, -2018.00000000, 136.00000000, 11.26300000, 41.12000000, 0, 0, ref l_U84[2] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, -1553.40000000, 477.34000000, 25.34700000, 90, 0, -48.24000000, ref l_U84[3] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, -1265.34000000, 1693.98000000, 31.86500000, 89.08000000, -17.28000000, 0, ref l_U84[4] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, -665.46000000, 1489, 5.17500000, 96.36000000, -6.46000000, -5.76000000, ref l_U84[5] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, 64315, 1870, 10.52600000, 87, 0, 0, ref l_U84[6] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 9 ), 15, 9, -929.66000000, 652.53990000, 4.44200000, 88.82000000, 0, 0, ref l_U84[7] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 9 ), 15, 9, 64281, 65050, 22.72800000, 88.82000000, 0.00000000, 0.00000000, ref l_U84[8] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 12 ), 15, 50, -1019.50000000, 1675, 23.96000000, 82, 5.10000000, 20.16000000, ref l_U84[9] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 12 ), 15, 50, 64253, 710, 18.96200000, 87.92000000, 0.00000000, 0.00000000, ref l_U84[10] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 13 ), 15, 30, -1102.38000000, 414.32000000, 26.39200000, 90, 180, -40.32000000, ref l_U84[11] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 13 ), 15, 30, -1469.62000000, 64941, 64.34000000, 90, 180, 0, ref l_U84[12] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 13 ), 15, 30, -1223.42000000, 1313.68000000, 21.18800000, 90, 180.00000000, 0.00000000, ref l_U84[13] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 13 ), 15, 30, -1074.94000000, 1197.86000000, 16.92200000, 90, 180, 28.80000000, ref l_U84[14] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 15 ), 15, 30, -1525.90000000, 1391.64000000, 1.24000000, 0.00000000, 67.68000000, 0.00000000, ref l_U84[15] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 15 ), 15, 30, 63791, -62.20000000, 57.82000000, 97.92000000, 236.88000000, 86.40000000, ref l_U84[16] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 15 ), 15, 30, -1509.24000000, 183.88700000, 11.93200000, 86.40000000, 244.80000000, 94.32000000, ref l_U84[17] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 10 ), 15, 8, -1524.15000000, 1121.22000000, 25.52600000, 97.02000000, 179.62000000, 264.76000000, ref l_U84[18] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 11 ), 15, 8, -980.50000000, 1040.08000000, 33.36700000, 83.50000000, 0, 40.32000000, ref l_U84[19] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 11 ), 15, 8, -749.62000000, 1161.94000000, 0.54000000, 204.48000000, -60.48000000, -17.28000000, ref l_U84[20] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 11 ), 15, 8, -1585.61500000, -284.03500000, -3.57300000, 56.16000000, 239.04000000, 87.84000000, ref l_U84[21] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 5 ), 15, 3, -2236.62000000, 219.82400000, 11.26000000, -82.24000000, 5, 8.64000000, ref l_U84[22] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 5 ), 15, 3, -1642.20000000, 290.86000000, 22.27000000, 93.16001000, 0, -55.44000000, ref l_U84[23] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, -1200.78000000, 1058.68000000, 18.60500000, 90, 30, 30, ref l_U84[24] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, 64260, 4, 17.41000000, 90, 30, 0.00000000, ref l_U84[25] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 18 ), 15, 3, -1399.28000000, 986.14000000, 118.25500000, -89.28000000, 2.50000000, 139.14000000, ref l_U84[26] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 18 ), 15, 3, -2129.06000000, -446.74000000, 5.15000000, -89.72000000, -9.36000000, 139.14000000, ref l_U84[27] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 16 ), 15, 7, -1900.41500000, 259.26000000, 74.55200000, 51.12000000, -55.44000000, 188.64000000, ref l_U84[28] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 16 ), 15, 7, -1832.44000000, -590.18400000, 39.50000000, 24.48000000, -70.56000000, 108.72000000, ref l_U84[29] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 14 ), 15, 30, -1404.46000000, 547.15000000, 19.05000000, -51.12000000, 245.52000000, 105.12000000, ref l_U84[30] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 16 ), 15, 7, -1275.18000000, 4.53800000, 10.64500000, -86.40000000, -107.28000000, 271.44000000, ref l_U84[31] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U84[31], "Boat_house_room" );
    return;
}

// sub_14331
void CreatePickups5()
{
    CREATE_PICKUP_ROTATE( GetWeaponModel( 1 ), 15, 0, 654.75000000, 281, 35.11500000, 32.40000000, 178.14000000, 259.26000000, ref l_U121[0] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 1 ), 15, 0, 149, 1639, 25.88000000, 0, 93.36000000, 0, ref l_U121[1] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 3 ), 15, 0, 518, 709, 18.71800000, 87.48000000, -13.68000000, 82.08000000, ref l_U121[2] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 3 ), 15, 0, 94.82000000, 1715.30000000, 28.74700000, 89.28000000, 13.68000000, 0, ref l_U121[3] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, 651.78000000, 63.30000000, 9.17200000, 88.80000000, 0, 0, ref l_U121[4] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 7 ), 15, 17, 642.89000000, -408.03000000, 45.24100000, 89.04000000, 0, 128.88000000, ref l_U121[5] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 9 ), 15, 9, 890.90000000, 1404.32000000, 24.28800000, 87, 0, 0, ref l_U121[6] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 12 ), 15, 50, -807.52000000, -756.00000000, 4.26000000, 87.82000000, 0, 0, ref l_U121[7] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 12 ), 15, 50, -632.71990000, 663.30000000, -26.22000000, 92.98000000, 8.62000000, 0.00000000, ref l_U121[8] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U121[8], "GtaMloRoomTUN2" );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, -603.52000000, -794.20000000, 3.87300000, 90, 30, 0, ref l_U121[9] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 5 ), 15, 3, 552.62000000, 1121.36000000, 31.06500000, 0, 0, 0, ref l_U121[10] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 18 ), 15, 3, 274.48000000, -892.98000000, 3.94000000, 82.08000000, 1.70000000, 0, ref l_U121[11] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 11 ), 15, 8, 511.94300000, -47.18100000, 8.55000000, 65.51999000, 245.52000000, -7.20000000, ref l_U121[12] );
    CREATE_PICKUP_ROTATE( GetWeaponModel( 4 ), 15, 3, 657.46010000, 736.86000000, 14.12200000, 90, 35, 48.24000000, ref l_U121[13] );
    return;
}

// Possibly create object pickups? TODO Figure this out.
void sub_15074()
{
    sub_15083();
    sub_15498();
    sub_15992();
    sub_16755();
    sub_17592();
    sub_17864();
    return;
}

void sub_15083()
{
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 987.08000000, 1828.51200000, 19.24900000, 40.32000000, 0, 180, ref l_U137[1] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 388.18000000, 1911.60000000, 18.48800000, 90, 0, -33.84000000, ref l_U137[2] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 1383.95900000, 1701.16000000, 20.38000000, 0.02000000, 0, 90, ref l_U137[4] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 1193, 1442, 15.81400000, 90.00000000, 0, 51.12000000, ref l_U137[5] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U137[5], "Factory_room03" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 696.71700000, 1462.75000000, 15.14000000, 0.00000000, 0, 90, ref l_U137[10] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U137[10], "gtaMloRoom04" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 1173.88000000, 1669.57000000, 17.68700000, 90.00000000, 0, 90, ref l_U137[11] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U137[11], "clammainroom" );
    return;
}

void sub_15498()
{
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 897.30000000, -134.00000000, 5.00000000, 90, 0, 49.68000000, ref l_U150[0] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 1305.42000000, 677.47200000, 37.02000000, 0.00000000, 0.00000000, 0.00000000, ref l_U150[2] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 753, 65185, 16.55000000, 0, 0, 90, ref l_U150[4] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 850.06000000, 414.16000000, 10.55400000, 96.02000000, -0.38000000, 0, ref l_U150[7] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 1791.91500000, 199.18000000, 21, 0, 0, 65.64000000, ref l_U150[8] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 1849.10000000, 527.48000000, 29.44000000, 0, 0, 90, ref l_U150[10] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 694.36000000, -309.81000000, 9.97000000, 90.00000000, 0.00000000, 0.00000000, ref l_U150[11] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U150[11], "GtaMloRoom02" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 769.26400000, -66.35800000, 5.99600000, 0.00000000, 0.00000000, 15.34000000, ref l_U150[15] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U150[15], "nikwarehouse_room" );
    return;
}

void sub_15992()
{
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -425.44000000, 1300.24000000, 17.64000000, 0, 0, 0, ref l_U167[1] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 59.96000000, 194.54000000, 14.84000000, 0, 0, 0, ref l_U167[2] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -401.94000000, -990.56000000, 4.14000000, 0, 0, 90, ref l_U167[5] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -302.04000000, 1647.00000000, 15.50900000, 90, 0, 90, ref l_U167[6] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -423.41000000, 974.94000000, 10.44000000, 0, 0, 90, ref l_U167[7] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -10.96000000, -377.10000000, 11.18000000, 90, 0, 208.80000000, ref l_U167[9] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -9.37800000, 1313.98000000, 17.71400000, 86.82000000, -2, 90.00000000, ref l_U167[12] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 429.76000000, -501.12000000, 16.77000000, 90, 0, 57.60000000, ref l_U167[13] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -123.92000000, 473.20000000, 9.46500000, 90, 0, 48.96000000, ref l_U167[15] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 624.83400000, 806.93500000, 14.58100000, 0, 0, 90, ref l_U167[16] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 65420, 1325.26000000, 30.56000000, 0, 0, 0, ref l_U167[18] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -543.56900000, 1254, 89.84000000, 0.00000000, 0.00000000, 80.10000000, ref l_U167[29] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U167[29], "ProjectSG_MloRoom1" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 499.10000000, -56.50000000, 8.34300000, 90.00000000, 0.20000000, 311.56000000, ref l_U167[35] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 342.64000000, -223.02000000, 6, 0.00000000, 0, 90, ref l_U167[38] );
    return;
}

void sub_16755()
{
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -1583.07500000, 14.93000000, 10, 0.00000000, 0.00000000, 90.00000000, ref l_U207[1] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U207[1], "bada_room1" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -1083.57800000, 64946, 4.24000000, 0.00000000, 0.00000000, 90.00000000, ref l_U207[6] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -1079.22000000, 691.90010000, 7.59200000, 90, 0, 159.84000000, ref l_U207[8] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -1567.27000000, 941.01000000, 25.77500000, 90, 0, 77.76000000, ref l_U207[9] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -2073.94000000, -80.00000000, 5.81500000, 90, 61.20000000, 0, ref l_U207[10] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -954.50000000, 1449.92000000, 33.14000000, 0.00000000, 0.00000000, 0.00000000, ref l_U207[11] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 64043, 701.22000000, 22.51500000, 90, 0, 114.48000000, ref l_U207[12] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -1193.08000000, 13.87000000, 3.14000000, 0.00000000, 0.00000000, 0.00000000, ref l_U207[17] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -1232.21300000, 1089.02000000, 20.08000000, 0.00000000, 0.00000000, 45.00000000, ref l_U207[18] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U207[18], "Room_stairs" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -1261.83400000, 1894.56000000, 11.16000000, 0, 0, 90, ref l_U207[26] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U207[26], "CasinoStair" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -1967.99200000, -259.99800000, 14.41600000, 0, 0, 90, ref l_U207[27] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -1418.30000000, 593.79900000, 19.78000000, 0, 0, 150, ref l_U207[31] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -1430.10700000, -594.34200000, 3.20200000, 0, 0, 90, ref l_U207[33] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -921.70000000, 935.33800000, 48.59100000, 0, 0, 90, ref l_U207[35] );
    return;
}

void sub_17592()
{
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 89.12000000, 149.70500000, 14.76000000, 0, 0, 0, ref l_U267[3] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 1206.90000000, 201.09000000, 33.76000000, 0, 0, 0, ref l_U267[5] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U267[5], "gtaMloRoom06" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -1322.28000000, 1268.28000000, 23.66000000, 0, 0, 40, ref l_U267[6] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U267[6], "gta_MloRoom011" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -1513.96500000, 395.97600000, 20.72300000, 90, 0, 87.48000000, ref l_U267[8] );
    return;
}

void sub_17864()
{
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -46.48000000, -0.32800000, -1.40000000, 0, 0, 315, ref l_U244[2] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U244[2], "subwayMloRoom01" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -53.40500000, 675.13000000, -1.48000000, 0, 0, 90, ref l_U244[7] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U244[7], "subwayMloRoom01" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -138.93300000, 1136.02000000, -0.26000000, 0, 0, 90, ref l_U244[8] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U244[8], "subwayMloRoom01" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -355.44000000, 1076.17200000, -2.55700000, 90, 51.12000000, 33.84000000, ref l_U244[10] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U244[10], "gtamloRoom04" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -357.40600000, 1265.83000000, 17.39000000, 0, 0, 90, ref l_U244[11] );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -402.18000000, 1368.62000000, -5.24800000, 90, 0, 38.16000000, ref l_U244[12] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U244[12], "subwayMloRoom01" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -79.79000000, -487.48000000, 3.12000000, 0, 0, 90, ref l_U244[14] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U244[14], "subwayMloRoom02" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), -361.21000000, 695.62090000, -2.71200000, -33.84000000, 0, 0, ref l_U244[18] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U244[18], "subwayMloRoom01" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 86.16001000, -738.41000000, -12.38000000, 0, 0, 119.92000000, ref l_U244[19] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U244[19], "subwayMloRoom01" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 103.52000000, -264.82600000, 1.59000000, 0, 0, 0, ref l_U244[20] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U244[20], "GtaMloRoom01" );
    CREATE_PICKUP_ROTATE( 1069950328, 2, ProtectedGet(l_U136), 29.73000000, -101.71200000, -1.39000000, 0, 0, 150, ref l_U244[21] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U244[21], "GtaMloRoom79" );
    return;
}

void sub_18769()
{
    sub_18778();
    sub_19176();
    sub_20464();
    sub_21885();
    sub_23307();
    sub_23654();
    sub_24210();
    sub_25261();
    sub_27064();
    sub_28371();
    g_U64893 = 200;
    return;
}

void sub_18778()
{
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 746.96000000, 2096.22000000, 0.32600000, 0, 0, 0, ref l_U278[0] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 299.44000000, 1361.46000000, 8.38000000, 0, 0, 136.80000000, ref l_U278[1] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 968.92000000, 1629, 32.45000000, 0, 0, -4.54000000, ref l_U278[2] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1031.62000000, 1573, 9.12500000, 0, 0, 0, ref l_U278[3] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1507.46000000, 1822.24000000, 1.90000000, 0, 0, 0, ref l_U278[4] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 397.70000000, 1709.24000000, 18.43200000, 0, 0, 170, ref l_U278[5] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 512.38000000, 1246.44000000, 1.65500000, 0, 0, 228, ref l_U278[6] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1074.90000000, 1821.20000000, 13.32000000, 0, 0, -42.48000000, ref l_U278[7] );
    return;
}

void sub_19176()
{
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 932, -849.12000000, 0.54100000, 0, 0, 235, ref l_U287[0] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 860, 587, 9.19500000, 0, 0, 0, ref l_U287[1] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1148.74000000, 686.82000000, 39.80000000, 0, 0, 131.04000000, ref l_U287[2] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 893.50000000, 702, 18.97200000, 0, 0, 0, ref l_U287[3] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1609, 852, 14.85000000, 0, 0, 0, ref l_U287[4] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1320, 666, 50.55000000, 0, 0, 270, ref l_U287[5] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 795.65990000, 130.30000000, 11.11200000, 0, 0, 0, ref l_U287[6] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1411, 405.42000000, 35.12000000, 0, 0, 108, ref l_U287[7] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1886.12000000, 781.04000000, 22.33000000, 0, 0, 203.04000000, ref l_U287[8] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1153.08000000, -589.14000000, 39.51000000, 0, 0, 180, ref l_U287[9] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1006.10500000, 64881, 17.61300000, 0, 0, 0, ref l_U287[10] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 2303.47000000, 616.15000000, 16.02000000, 0, 0, -25.92000000, ref l_U287[11] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 2618.47500000, 416, 79.83500000, 0, 0, 0, ref l_U287[12] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 791.10000000, 65303, 21.07000000, 0, 0, 223.20000000, ref l_U287[13] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 2367.38000000, 368, 10.68000000, 0, 0, 30.24000000, ref l_U287[14] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 853.46000000, -176.96000000, 13.86000000, 0, 0, 0, ref l_U287[15] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1069.46000000, -170.66000000, 30.05200000, 0, 0, 0, ref l_U287[16] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 909.86000000, 941.18000000, 11.86000000, 0, 0, 0, ref l_U287[17] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1382.54000000, 532.00000000, 44.90800000, 0, 0, 0, ref l_U287[18] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1308, 65361, 27.52000000, 0, 0, 20, ref l_U287[19] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1513.12000000, -420.30000000, 32.50200000, 0, 0, -42.48000000, ref l_U287[20] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1384.90000000, -739.52000000, 9.41700000, 0, 0, 160, ref l_U287[21] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1162.44000000, 65078, 17.19500000, 0, 0, 90, ref l_U287[22] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1140.54000000, 234.40000000, 35.27600000, 0, 0, 90, ref l_U287[23] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1602.08000000, 175, 22.48000000, 0, 0, 0, ref l_U287[24] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1619.84000000, 443.09000000, 43.24700000, 0, 0, 140.56000000, ref l_U287[25] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 956.22000000, -292.42000000, 24.62800000, 0, 0, 130, ref l_U287[26] );
    return;
}

void sub_20464()
{
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -414.68000000, 1308, 93.90500000, 0, 0, 10, ref l_U315[0] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -441.32000000, 1288, 42.01500000, 0, 0, 50, ref l_U315[1] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 270.34000000, 31.24000000, 4.32500000, 0, 0, 119.76000000, ref l_U315[2] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 510.72000000, -51.88000000, 15.95800000, 0, 0, 190, ref l_U315[3] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 241.22000000, -417.16000000, 8.01500100, 0, 0, 250, ref l_U315[4] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 505, 220.10000000, 30.10000000, 0, 0, 240, ref l_U315[5] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -263.38000000, 710.10000000, 12.74000000, 0, 0, 100, ref l_U315[6] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -463.60000000, 7.32000000, 11.42000000, 0, 0, 124.56000000, ref l_U315[7] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -205.94000000, 1509.28000000, 26.80800000, 0, 0, 70, ref l_U315[8] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -27.92000000, 64582, 12.13000000, 0, 0, 55, ref l_U315[9] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 7.79000000, 411.90000000, 89.47000000, 0, 0, 30.96000000, ref l_U315[10] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 41, 109.88000000, 15.01500000, 0, 0, 340, ref l_U315[11] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 65238, -84.76000000, 335.23000000, 0, 0, 50, ref l_U315[12] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 451.50000000, 1112.56000000, 3.56500000, 0, 0, 223.20000000, ref l_U315[13] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -209.18000000, 1041.11000000, 10.96700000, 0, 0, 134.64000000, ref l_U315[14] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -680.34000000, 1166.44000000, 11.08000000, 0, 0, 70, ref l_U315[15] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -180.08000000, 210, 17.49000000, 0, 0, 176.40000000, ref l_U315[16] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 202, 266, 7.43000000, 0, 0, 50, ref l_U315[17] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 240, 65364, 3.98000000, 0, 0, 75, ref l_U315[18] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -454.60000000, -255.50000000, 6.91000000, 0, 0, 170, ref l_U315[19] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -319.98300000, -291.55500000, 13.75000000, 0, 0, -48.96000000, ref l_U315[20] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -503.98000000, 282.26000000, 19.73100000, 0, 0, 100, ref l_U315[21] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 145.10000000, 478.12000000, 18.85000000, 0, 0, 410, ref l_U315[22] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -249.48000000, 1771.16000000, 1.96000000, 0, 0, 50, ref l_U315[23] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -30.36000000, 1393.96000000, 30.12500000, 0, 0, 0, ref l_U315[24] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -407.96000000, -84.36000000, 14.30400000, 0, 0, 140, ref l_U315[25] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 114, 64574, 4.18000000, 0, 0, 20, ref l_U315[26] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -595.56000000, 846, 11.82500000, 0, 0, 250, ref l_U315[27] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -124.08000000, 15.92000000, 31.89500000, 0, 0, 254.40000000, ref l_U315[28] );
    return;
}

void sub_21885()
{
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -846.28000000, 826.28000000, 3.22000000, 0, 0, 170, ref l_U345[0] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1498.14000000, 1394, 21.78000000, 0, 0, 120, ref l_U345[1] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1257.24000000, 1076.86000000, 22.72500000, 0, 0, 94.32000000, ref l_U345[2] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1169.52000000, 1830.78000000, 4.08000000, 0, 0, 64.08000000, ref l_U345[3] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1246.10000000, 626.62000000, -1.97000000, 0, 0, 141.84000000, ref l_U345[4] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -856.04000000, -396.53000000, 8.48500000, 0, 0, 125.28000000, ref l_U345[5] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1651.24000000, 412, 46.34000000, 0, 0, 0, ref l_U345[6] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1648.84000000, 607, 23.69500000, 0, 0, 117.36000000, ref l_U345[7] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1072.14000000, 1572.54000000, 35.25800000, 0, 0, 20, ref l_U345[8] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -2017.24000000, -493.38000000, 6.27300000, 0, 0, 60, ref l_U345[9] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 63546, -121.80000000, 30.47700000, 0, 0, 211, ref l_U345[10] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 64212, 520, 21.68000000, 0, 0, 137.52000000, ref l_U345[11] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1031.76000000, 1189.26000000, 22.39400000, 0, 0, 50, ref l_U345[12] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1034.10000000, 65238, 11.78300000, 0, 0, 221.04000000, ref l_U345[13] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1599.36000000, 509.02000000, 31.04000000, 0, 0, 185, ref l_U345[14] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 64091, -540.52000000, 8.60000100, 0, 0, 90, ref l_U345[15] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 64502, 50, 9.46000000, 0, 0, 137.52000000, ref l_U345[16] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -913.48000000, 348.30000000, 4.79400000, 0, 0, 0, ref l_U345[17] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 63288, -21.34000000, 3.37000000, 0, 0, 310, ref l_U345[18] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1071.26000000, 1282.46000000, 38.98800000, 0, 0, 0, ref l_U345[19] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 63405, 16, 15.07000000, 0, 0, 129.60000000, ref l_U345[20] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 63743, 113, 17.90000000, 0, 0, 270, ref l_U345[21] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1435.54000000, -71.88000000, 33.42000000, 0, 0, 289.44000000, ref l_U345[22] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -983.02000000, 1031.92000000, 30.60000000, 0, 0, 90, ref l_U345[23] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1678.84000000, -486.32000000, 51.72800000, 0, 0, 246, ref l_U345[24] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 64812, 1247, 0.38200000, 0, 0, -52.56000000, ref l_U345[25] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1420.84000000, 886.82000000, 23.63800000, 0, 0, 90, ref l_U345[26] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1242.08000000, 1089.48000000, 24.88500000, 0, 0, 0, ref l_U345[27] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -2019.48000000, -405.73000000, 4.06300000, 0, 0, 330, ref l_U345[28] );
    return;
}

void sub_23307()
{
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 493.85000000, -389.98000000, 85.42700000, 0, 0, 0, ref l_U375[0] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 909.99000000, 1894.83000000, 37.11500000, 0, 0, 180, ref l_U375[1] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 344.64000000, 1010, 35.15000000, 0, 0, 0, ref l_U375[2] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 65167, 1279, 23.25500000, 0, 0, 218.24000000, ref l_U375[3] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -607.94000000, -739.68000000, 20.75600000, 0, 0, 270, ref l_U375[4] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1414, 1242, 1.45000000, 0, 0, 73.44000000, ref l_U375[5] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 279.64000000, 683.48000000, 4.34000000, 0, 0, 0, ref l_U375[6] );
    return;
}

void sub_23654()
{
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 390.23000000, 1656.38000000, 15.40000000, 0, 0, 339.84000000, ref l_U383[0] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 626.59000000, 1756.49000000, 39.38300000, 0, 0, 159.84000000, ref l_U383[1] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 410.42000000, 2053.21000000, 7.25200000, 0, 0, 219.60000000, ref l_U383[2] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1256.98000000, 1834.21000000, 10.13500000, 0, 0, 313.20000000, ref l_U383[3] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 807.54000000, 1805.71000000, 38.67000000, 0, 0, 119.52000000, ref l_U383[4] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 785.17000000, 1402.99000000, 15.52000000, 0, 0, 473.04000000, ref l_U383[5] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 482.58000000, 1495.37000000, 13.07000000, 0, 0, 79.92000000, ref l_U383[6] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 701.30000000, 1289.44000000, 10.25500000, 0, 0, 12.96000000, ref l_U383[7] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 610.22000000, 1868.56000000, 32.11000000, 0, 0, 226.80000000, ref l_U383[8] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1251.81000000, 1557.32000000, 20.80000000, 0, 0, 313.20000000, ref l_U383[9] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 482.58000000, 1496.73000000, 16.80600000, 0, 0, 12.96000000, ref l_U383[10] );
    return;
}

void sub_24210()
{
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1433.78000000, 206.45000000, 31.57500000, 0, 0, 226.80000000, ref l_U395[0] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1175.78000000, 439.37000000, 32.38500000, 0, 0, 206.64000000, ref l_U395[1] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1084.14000000, 38.68000000, 37.49300000, 0, 0, 146.16000000, ref l_U395[2] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1270.12000000, 772.34010000, 51.67300000, 0, 0, 313.20000000, ref l_U395[3] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 822.59000000, -585.99000000, 16.78500000, 0, 0, 146.16000000, ref l_U395[4] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1312.18000000, -508.95000000, 14.94000000, 0, 0, 308.88000000, ref l_U395[5] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1288.84000000, -316.48000000, 24.05000000, 0, 0, 173.52000000, ref l_U395[6] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 2317.83000000, 336.87000000, 6.49000000, 0, 0, 12.96000000, ref l_U395[7] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 724.28010000, -440.55000000, 2.26500000, 0, 0, 226.80000000, ref l_U395[8] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1489.13000000, 614.27500000, 29.55300000, 0, 0, 166.32000000, ref l_U395[9] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 948.05000000, 416.73000000, 17.08500000, 0, 0, 59.76000000, ref l_U395[10] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1303.61000000, 162.83000000, 33.09000000, 0, 0, 106.56000000, ref l_U395[11] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1328.84000000, -43.45000000, 27.30800000, 0, 0, 46.08000000, ref l_U395[12] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1169.19000000, 777.56000000, 37.79000000, 0, 0, 53.28000000, ref l_U395[13] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1254.60000000, 996.55000000, 12.74000000, 0, 0, 52.56000000, ref l_U395[14] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1118.95000000, 914.51000000, 32.21000000, 0, 0, 333, ref l_U395[15] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1271.25000000, 895.93000000, 30.77500000, 0, 0, -49.68000000, ref l_U395[16] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1095.84000000, 999.46010000, 15.35500000, 0, 0, 6.48000000, ref l_U395[17] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1748.98000000, 651.22000000, 33.47500000, 0, 0, 226.80000000, ref l_U395[18] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1823.34000000, 397.18000000, 32.03000000, 0, 0, 313.20000000, ref l_U395[19] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 1252.98000000, 994.53010000, 15.04700000, 0, 0, 17.90500000, ref l_U395[20] );
    return;
}

void sub_25261()
{
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -35.41000000, 721.84000000, 18.94700000, 0, 0, 266.40000000, ref l_U417[0] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -25.51000000, 840.46000000, 18.61200000, 0, 0, 239.76000000, ref l_U417[1] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -72.98000000, 942.98000000, 20.36500000, 0, 0, 26.64000000, ref l_U417[2] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 116.90000000, 917.86000000, 15.16200000, 0, 0, 159.84000000, ref l_U417[3] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -117.27000000, -706.50000000, 10.70000000, 0, 0, 66.96000000, ref l_U417[4] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -362.27000000, -676.65000000, 2.25200000, 0, 0, 0, ref l_U417[5] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -284.57000000, -391.71000000, 9, 0, 0, 139.68000000, ref l_U417[6] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 378.33000000, 123.22000000, 5.75700000, 0, 0, 53.28000000, ref l_U417[7] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 483.71000000, 100.54000000, 7.73800000, 0, 0, 46.80000000, ref l_U417[8] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 428.09000000, 238.91000000, 14.70000000, 0, 0, 100.08000000, ref l_U417[9] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 581.39000000, 727.90000000, 2.09800000, 0, 0, 120.24000000, ref l_U417[10] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -521.56000000, 643.94000000, 12.77000000, 0, 0, 73.44000000, ref l_U417[11] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -420.25000000, 435.71000000, 12.48000000, 0, 0, 86.40000000, ref l_U417[12] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -466.78000000, 1018.62000000, 11.87200000, 0, 0, 139.68000000, ref l_U417[13] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -427.26000000, 1551.23000000, 21.98000000, 0, 0, 152.64000000, ref l_U417[14] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -319.93000000, 1509.29000000, 19.06300000, 0, 0, 0, ref l_U417[15] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 156, 226.32000000, 21.02500000, 0, 0, 80, ref l_U417[16] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -207.06000000, 1233.33000000, 22.04000000, 0, 0, 49.68000000, ref l_U417[17] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -115.67000000, 429.15000000, 17.44000000, 0, 0, 166.32000000, ref l_U417[18] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -68.19000000, -91.27000000, 18.39800000, 0, 0, 0, ref l_U417[19] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -85.66000000, -341.33000000, 14.87000000, 0, 0, 153.36000000, ref l_U417[20] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -287.41000000, 236.85000000, 204.39200000, 0, 0, 0, ref l_U417[21] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 28.48000000, -599.05000000, 14.56800000, 0, 0, 93.60000000, ref l_U417[22] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 105.61000000, -759.86000000, 3.94500000, 0, 0, 120.24000000, ref l_U417[23] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 337.66000000, -640.09000000, 4.52800000, 0, 0, 120.24000000, ref l_U417[24] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -393.73000000, 873.82000000, 18.27500000, 0, 0, 0, ref l_U417[25] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -502.85000000, 1125.48000000, 11.90500000, 0, 0, 73.44000000, ref l_U417[26] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -609.62000000, 1397.30000000, 8.37000000, 0, 0, 226.80000000, ref l_U417[27] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -9.76000100, 1497.03000000, 18.86700000, 0, 0, 159.84000000, ref l_U417[28] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 141.23000000, 1303.44000000, 2.65200000, 0, 0, 16.56000000, ref l_U417[29] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -247.77000000, 243.06000000, 16.19500000, 0, 0, 116.64000000, ref l_U417[30] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -606.39500000, -748.90000000, 92.46000000, 0, 0, 0, ref l_U417[31] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -606.24000000, -748.39000000, 91.15000000, 0, 0, 90, ref l_U417[32] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -616.71000000, -752.78000000, 72.82000000, 0, 0, 253, ref l_U417[33] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -608.92000000, -751.21010000, 83.75000000, 0, 0, -6.48000000, ref l_U417[34] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -611.62000000, -753.64000000, 78.35800000, 0, 0, 180, ref l_U417[35] );
    return;
}

void sub_27064()
{
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1497.98000000, 581, 22.33500000, 0, 0, 106.56000000, ref l_U454[0] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -898.72000000, 767, 6.68000000, 0, 0, 40.32000000, ref l_U454[1] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1200.14000000, 988.80000000, 18.76000000, 0, 0, 46.80000000, ref l_U454[2] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1392.09000000, 995, 22.75500000, 0, 0, 66.96000000, ref l_U454[3] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1366.56000000, 282, 17.54000000, 0, 0, 33.12000000, ref l_U454[4] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1426.21000000, 405.17000000, 17.88600000, 0, 0, 173.52000000, ref l_U454[5] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1018.54000000, 939.05000000, 23.79000000, 0, 0, 153.36000000, ref l_U454[6] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -841.02000000, 1032, 15.94500000, 0, 0, 153.36000000, ref l_U454[7] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -929.21000000, 1340.54000000, 23.86500000, 0, 0, 0, ref l_U454[8] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1314.43000000, 1272.01000000, 22.19500000, 0, 0, 66.96000000, ref l_U454[9] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1222.36000000, 1457.84000000, 22.91000000, 0, 0, 73.44000000, ref l_U454[10] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1587.87000000, 26.40000000, 12.77000000, 0, 0, 153.36000000, ref l_U454[11] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1598.86000000, 148.34000000, 13.90000000, 0, 0, 86.40000000, ref l_U454[12] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1595.77000000, 842.06000000, 24.28000000, 0, 0, 206.64000000, ref l_U454[13] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1400.84000000, 1148.30000000, 18.77300000, 0, 0, 79.92000000, ref l_U454[14] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1261.51000000, -252.25000000, 2.06500000, 0, 0, 213.12000000, ref l_U454[15] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1703.18000000, -328.50000000, 1.95800000, 0, 0, 15, ref l_U454[16] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1372.72000000, 739.46010000, 18.67000000, 0, 0, 133.20000000, ref l_U454[17] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1366.66000000, 1525.61000000, 22.98300000, 0, 0, 66.96000000, ref l_U454[18] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1305.74000000, 1696.07000000, 32.45000000, 0, 0, 200.16000000, ref l_U454[19] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 64580, 1764.09000000, 18.31500000, 0, 0, 46.80000000, ref l_U454[20] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1184.84000000, 639.32000000, 8.12500000, 0, 0, 66.96000000, ref l_U454[21] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1262.66000000, 230.26000000, 4.15500000, 0, 0, 120.24000000, ref l_U454[22] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1995.41000000, 199.93000000, 15.84000000, 0, 0, 159.84000000, ref l_U454[23] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1768.12000000, 262.81000000, 21.91000000, 0, 0, 66.96000000, ref l_U454[24] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1259.91000000, -253.09000000, 4.27300000, 0, 0, 153.36000000, ref l_U454[25] );
    return;
}

void sub_28371()
{
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -668.63000000, 1154.48000000, 19.39000000, 0, 0, 246.96000000, ref l_U481[0] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), -1505.73000000, -152.50000000, 13.19000000, 0, 0, 133.20000000, ref l_U481[1] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 744.34000000, 606.49000000, 34.86000000, 0, 0, 173.52000000, ref l_U481[2] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 652, 242.72000000, 42.61500000, 0, 0, 139.68000000, ref l_U481[3] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 572.84000000, 1505.42000000, 22.15800000, 0, 0, 0, ref l_U481[4] );
    CREATE_PICKUP_ROTATE( -1735054613, 3, ProtectedGet(l_U277), 572.98000000, 1507, 22.15800000, 0, 0, 33.84000000, ref l_U481[5] );
    return;
}

void sub_28698()
{
    sub_28707();
    sub_28874();
    sub_29486();
    sub_30225();
    return;
}

void sub_28707()
{
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 792.36500000, 1316.74000000, 25.51500000, 269.70000000, 0, 20.16000000, ref l_U489[0] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 672.44000000, 1680.48000000, 30.86000000, 269.70000000, 0, 40.32000000, ref l_U489[1] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 253.16000000, 1722.58000000, 2, 253.90000000, 0, 0, ref l_U489[2] );
    return;
}

void sub_28874()
{
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 1106.12000000, 487.24000000, 41.56500000, 96.50000000, 0, 0, ref l_U494[0] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 1434.32000000, -287.14000000, 14.52200000, 269.70000000, 0, 0, ref l_U494[2] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 2233.53000000, 889.84010000, 4.60500000, 269.30000000, 0, 0, ref l_U494[3] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 944.15000000, -499.24000000, 23.18800000, 269.40000000, 0, 26.64000000, ref l_U494[5] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 1240.93000000, 373.16000000, 29.55000000, 269.30000000, 0, 53.28000000, ref l_U494[6] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 2102.68000000, 155.36000000, 6.85900000, 289.96000000, -4.94000000, 0, ref l_U494[7] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 1341.46000000, 1089.45000000, 1.28700000, 259.58000000, 5.10000000, 0, ref l_U494[8] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 1587.24000000, 789.53000000, 28.75800000, 268.52000000, 2.50000000, 0, ref l_U494[9] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 1943.80000000, 405.01000000, 24.55500000, 269.30000000, 0, 0, ref l_U494[10] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 1213.38000000, -14.96000000, 34.38500000, 269.86000000, 0, 46.80000000, ref l_U494[11] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 689.28010000, -306.94000000, 22.92500000, 270.54000000, 0, 120.24000000, ref l_U494[12] );
    ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME( l_U494[12], "cargbridgerm" );
    return;
}

void sub_29486()
{
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 65507, 64649, -0.36500000, 264.96000000, 0, 26.64000000, ref l_U508[0] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 444, 1059, 1.79700000, 269.30000000, 0, 66.96000000, ref l_U508[2] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 617.16700000, 718.34400000, 5.21300000, 282.42000000, 16.64000000, 133.20000000, ref l_U508[3] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 412.80000000, 360.56000000, 7.69200000, 269.76000000, 0, 73.44000000, ref l_U508[5] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 64.10000000, 606.20000000, 9.36500000, 267.66000000, 0, 0, ref l_U508[6] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -760.84010000, 452.68000000, 13.02000000, 269.30000000, 0, 40.32000000, ref l_U508[7] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -184.32800000, 587.23400000, 125.82000000, 270.28000000, 0, 0, ref l_U508[8] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -333.98000000, 1, 13.83700000, 269.30000000, 0, 0, ref l_U508[9] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 64928, -699.74000000, 12.15000000, 269.30000000, 0, 0, ref l_U508[10] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -577.47000000, 1544.16000000, 1.37000000, 269.30000000, 0, 259.92000000, ref l_U508[13] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 196.50000000, -525.33000000, 8.14999900, 269.30000000, 0, 113.04000000, ref l_U508[16] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -24.29000000, 1633.22000000, 6.47300000, 269.30000000, 0, 66.96000000, ref l_U508[17] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 104.23000000, 985.57000000, 13.78000000, 268.90000000, 2.60000000, 253.44000000, ref l_U508[18] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -328.25000000, 351.27000000, 17.64500000, 285.52000000, 0, 90, ref l_U508[19] );
    return;
}

void sub_30225()
{
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -1745.64000000, 306, 24.53000000, 269.30000000, 0, 166.32000000, ref l_U529[0] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -2032.02000000, -339.74000000, 3.58700000, 299.18000000, 0, 0, ref l_U529[2] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -1497.12000000, -277.73100000, 1.91800000, 269.30000000, 0, 313.20000000, ref l_U529[3] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -1865.76000000, -161.78000000, 2.91400000, 269.30000000, 0, 0, ref l_U529[4] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), 64572, 1895, 21.37500000, 0, 0, 273.60000000, ref l_U529[5] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -1424.31000000, 628.01000000, 35.08000000, 269.30000000, 0, 166.32000000, ref l_U529[6] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -1784.45000000, 666.98000000, 13.46900000, 258.08000000, -6.80000000, 73.44000000, ref l_U529[7] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -837.44000000, 1281.61000000, 18.71800000, 278.78000000, -8.08000000, 40.32000000, ref l_U529[8] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -1356.23900000, 1692.37000000, 32.23000000, 26.64000000, 0, 100.08000000, ref l_U529[9] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -1298.68000000, 943.94000000, 18.64500000, 269.30000000, 0, 66.96000000, ref l_U529[10] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -888.70000000, 625.51000000, 2.55000000, 0, 0, 0, ref l_U529[12] );
    CREATE_PICKUP_ROTATE( -1758615024, 2, ProtectedGet(l_U488), -1214.61000000, 531.44000000, 13.12300000, 269.30000000, 0, 73.44000000, ref l_U529[13] );
    return;
}

void sub_30878()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        sub_30903( I );
    }
    g_U965 = -1;
    g_U966 = -1;
    g_U946 = -1;
    g_U1434._fU64 = -1;
    for ( I = 0; I <= (g_U1452 - 1); I++ )
    {
        g_U1452[I] = 0;
    }
    SET_BIT( ref g_U1452[1], 21 );
    SET_BITS_IN_RANGE( ref g_U1452[1], 0, 8, 0 );
    SET_BITS_IN_RANGE( ref g_U1452[1], 22, 31, 1 );
    g_U1452[0] = 2;
    g_U1451 = 1;
    sub_31107();
    sub_31311();
    return;
}

void sub_30903(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

void sub_31107()
{
    int I;

    for ( I = 0; I <= (g_U1502 - 1); I++ )
    {
        g_U1502[I] = 0;
    }
    sub_31159( 1015, 2 );
    sub_31159( 1023, 2 );
    sub_31159( 2034, 2 );
    sub_31159( 4, 1 );
    sub_31159( 9, 3 );
    sub_31159( 1021, 2 );
    sub_31159( 1024, 2 );
    sub_31159( 1025, 3 );
    sub_31159( 2029, 1 );
    sub_31159( 3038, 2 );
    sub_31159( 4049, 1 );
    return;
}

void sub_31159(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_31311()
{
    int I;

    SET_BITS_IN_RANGE( ref g_U953, 0, 2, 7 );
    SET_BITS_IN_RANGE( ref g_U953, 3, 5, 7 );
    SET_BITS_IN_RANGE( ref g_U953, 6, 8, 7 );
    SET_BITS_IN_RANGE( ref g_U953, 9, 11, 7 );
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, 0 );
    g_U954 = 0;
    for ( I = 0; I <= (g_U955 - 1); I++ )
    {
        SET_BITS_IN_RANGE( ref g_U955[I], 0, 5, 63 );
        SET_BITS_IN_RANGE( ref g_U955[I], 6, 11, 63 );
        SET_BITS_IN_RANGE( ref g_U955[I], 12, 17, 63 );
        SET_BITS_IN_RANGE( ref g_U955[I], 18, 23, 63 );
        SET_BITS_IN_RANGE( ref g_U955[I], 24, 29, 63 );
    }
    g_U963 = 0;
    g_U964 = 0;
    return;
}

void sub_31553()
{
    unknown uVar2;

    sub_31562();
    return;
}

void sub_31562()
{
    sub_31571();
    sub_32525();
    sub_32668();
    sub_32725();
    sub_32824();
    sub_32883();
    sub_33064();
    sub_33373();
    return;
}

void sub_31571()
{
    sub_31591( 15, 0, 1, 2, ref g_U1548[0] );
    sub_31591( 15, 3, 16383, 16383, ref g_U1548[1] );
    sub_31591( 15, 4, 5, 6, ref g_U1548[2] );

    sub_31591( 15, 7, 16383, 16383, ref g_U1548[3] );
    sub_31591( 15, 8, 16383, 16383, ref g_U1548[4] );
    sub_31591( 15, 9, 16383, 16383, ref g_U1548[5] );

    sub_32369( ref g_U1548[0], 6 );
    sub_32369( ref g_U1548[1], 6 );
    sub_32369( ref g_U1548[2], 6 );
    sub_32369( ref g_U1548[3], 6 );
    sub_32369( ref g_U1548[4], 6 );
    sub_32369( ref g_U1548[5], 6 );

    g_U1615[0] = 0;
    g_U1615[1] = 0;
    g_U1615[2] = 0;
    g_U1615[3] = 0;
    g_U1615[4] = 0;
    g_U1615[5] = 0;
    return;
}

// Generate a random int, store to randomInt.
void sub_31591(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int randomInt;

    iParam4->_fU40 = -1;
    sub_31615( uParam0, 0, iParam4 + 0 );
    sub_31615( uParam1, 1, iParam4 + 0 );
    sub_31615( uParam2, 2, iParam4 + 0 );
    sub_31615( uParam3, 3, iParam4 + 0 );

    sub_31615( 0, 4, iParam4 + 0 );
    sub_31615( 1, 5, iParam4 + 0 );
    sub_31615( 65535, 6, iParam4 + 0 );
    sub_31615( 0, 12, iParam4 + 0 );
    sub_31615( 0, 11, iParam4 + 0 );
    sub_31615( 0, 14, iParam4 + 0 );
    sub_31615( 0, 13, iParam4 + 0 );

    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref randomInt );
    sub_31615( randomInt, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref randomInt );
    sub_31615( randomInt, 9, iParam4 + 0 );

    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

// I think I might have somewhat figured this out.
void sub_31615(int bitValue, int iBitSwitch, int iParam2)
{
    switch (iBitSwitch)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, bitValue );
        break;

        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, bitValue );
        break;

        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, bitValue );
        break;

        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, bitValue );
        break;

        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, bitValue );
        break;

        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, bitValue );
        break;

        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, bitValue );
        break;

        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, bitValue );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, bitValue );
        break;

        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, bitValue );
        break;

        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, bitValue );
        break;

        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, bitValue );
        break;

        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, bitValue );
        break;
    }
    return;
}

void sub_32369(int bitValue, unknown uParam1)
{
    sub_31615( uParam1, 5, bitValue + 0 );
    return;
}

void sub_32525()
{
    sub_31591( 16, 0, 16383, 16383, ref g_U1647[0] );
    sub_31591( 16, 1, 16383, 16383, ref g_U1647[1] );
    sub_31591( 16, 2, 16383, 16383, ref g_U1647[2] );
    sub_32369( ref g_U1647[0], 6 );
    sub_32369( ref g_U1647[1], 6 );
    sub_32369( ref g_U1647[2], 6 );
    g_U1681[0] = 0;
    g_U1681[1] = 0;
    g_U1681[2] = 0;
    return;
}

void sub_32668()
{
    sub_31591( 17, 0, 1, 16383, ref g_U1698[0] );
    sub_32369( ref g_U1698[0], 6 );
    g_U1710[0] = 0;
    return;
}

void sub_32725()
{
    sub_31591( 18, 0, 1, 16383, ref g_U1717[0] );
    sub_31591( 18, 2, 16383, 16383, ref g_U1717[1] );
    sub_32369( ref g_U1717[0], 6 );
    sub_32369( ref g_U1717[1], 6 );
    g_U1740[0] = 0;
    g_U1740[1] = 0;
    return;
}

void sub_32824()
{
    sub_31591( 19, 0, 16383, 16383, ref g_U1752[0] );
    sub_32369( ref g_U1752[0], 6 );
    g_U1764[0] = 0;
    return;
}

void sub_32883()
{
    sub_31591( 20, 0, 1, 16383, ref g_U1771[0] );
    sub_31591( 20, 2, 3, 16383, ref g_U1771[1] );
    sub_31591( 20, 4, 16383, 16383, ref g_U1771[2] );
    sub_31591( 20, 5, 16383, 16383, ref g_U1771[3] );
    sub_32369( ref g_U1771[0], 6 );
    sub_32369( ref g_U1771[1], 6 );
    sub_32369( ref g_U1771[2], 6 );
    sub_32369( ref g_U1771[3], 6 );
    g_U1816[0] = 0;
    g_U1816[1] = 0;
    g_U1816[2] = 0;
    g_U1816[3] = 0;
    return;
}

void sub_33064()
{
    sub_31591( 0, 0, 16383, 16383, ref g_U1838[0] );
    sub_31591( 0, 1, 16383, 16383, ref g_U1838[1] );
    sub_31591( 0, 2, 3, 16383, ref g_U1838[2] );
    sub_31591( 0, 4, 16383, 16383, ref g_U1838[3] );
    sub_31591( 0, 5, 16383, 16383, ref g_U1838[4] );
    sub_31591( 0, 6, 16383, 16383, ref g_U1838[5] );
    sub_31591( 0, 7, 16383, 16383, ref g_U1838[6] );
    sub_32369( ref g_U1838[0], 6 );
    sub_32369( ref g_U1838[1], 6 );
    sub_32369( ref g_U1838[2], 6 );
    sub_32369( ref g_U1838[3], 6 );
    sub_32369( ref g_U1838[4], 6 );
    sub_32369( ref g_U1838[5], 6 );
    sub_32369( ref g_U1838[6], 6 );
    g_U1916[0] = 0;
    g_U1916[1] = 0;
    g_U1916[2] = 0;
    g_U1916[3] = 0;
    g_U1916[4] = 0;
    g_U1916[5] = 0;
    g_U1916[6] = 0;
    return;
}

void sub_33373()
{
    sub_31591( 21, 0, 16383, 16383, ref g_U1953[0] );
    sub_31591( 22, 0, 1, 2, ref g_U1972[0] );
    sub_31591( 23, 0, 1, 2, ref g_U1991[0] );
    sub_31591( 24, 0, 16383, 16383, ref g_U2010[0] );
    sub_31591( 25, 0, 1, 16383, ref g_U2029[0] );
    sub_31591( 26, 0, 1, 2, ref g_U2048[0] );
    sub_31591( 27, 0, 1, 2, ref g_U2067[0] );
    sub_31591( 28, 0, 1, 2, ref g_U2086[0] );
    sub_31591( 29, 0, 1, 2, ref g_U2105[0] );
    sub_31591( 30, 0, 16383, 16383, ref g_U2124[0] );
    sub_31591( 31, 0, 16383, 16383, ref g_U2143[0] );
    sub_31591( 32, 0, 1, 2, ref g_U2162[0] );
    sub_31591( 33, 0, 1, 2, ref g_U2181[0] );
    sub_31591( 34, 0, 1, 2, ref g_U2200[0] );
    sub_32369( ref g_U1953[0], 7 );
    sub_32369( ref g_U1972[0], 7 );
    sub_32369( ref g_U1991[0], 7 );
    sub_32369( ref g_U2010[0], 7 );
    sub_32369( ref g_U2029[0], 7 );
    sub_32369( ref g_U2048[0], 7 );
    sub_32369( ref g_U2067[0], 7 );
    sub_32369( ref g_U2086[0], 7 );
    sub_32369( ref g_U2105[0], 7 );
    sub_32369( ref g_U2124[0], 7 );
    sub_32369( ref g_U2143[0], 7 );
    sub_32369( ref g_U2162[0], 7 );
    sub_32369( ref g_U2181[0], 7 );
    sub_32369( ref g_U2200[0], 7 );
    g_U1965[0] = 0;
    g_U1984[0] = 0;
    g_U2003[0] = 0;
    g_U2022[0] = 0;
    g_U2041[0] = 0;
    g_U2060[0] = 0;
    g_U2079[0] = 0;
    g_U2098[0] = 0;
    g_U2117[0] = 0;
    g_U2136[0] = 0;
    g_U2155[0] = 0;
    g_U2174[0] = 0;
    g_U2193[0] = 0;
    g_U2212[0] = 0;
    return;
}

void sub_33962()
{
    int I;

    InitialCarGenerators();
    for ( I = 0; I < 20; I++ )
    {
        CREATE_CAR_GENERATOR( g_U8708[I]._fU0._fU0, g_U8708[I]._fU0._fU4, g_U8708[I]._fU0._fU8, g_U8708[I]._fU12._fU0, g_U8708[I]._fU12._fU4, g_U8708[I]._fU24 + 2.00000000, g_U8708[I]._fU28, g_U8708[I]._fU32, g_U8708[I]._fU36, g_U8708[I]._fU40, g_U8708[I]._fU44, g_U8708[I]._fU48, g_U8708[I]._fU52, g_U8708[I]._fU56, ref g_U9029[I] );
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

// sub_33971
// Run the default vehicle generators.
void InitialCarGenerators()
{
    // uVar2 = Vector3 returnMin
    Vector3 returnMin;
    
    unknown uVar3;
    
    unknown uVar4;
    
    // uVar5 = Vector3 returnMax
    unknown returnMax;
    
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    // I think this is car generators, time to check it out.
    // Seems in use under void sub_33962();
    // I labled some of these
    g_U8708[0].modelHash = 837858166;
    GET_MODEL_DIMENSIONS( g_U8708[0].modelHash, ref returnMin, ref returnMax );

    // Heli pad #1
    g_U8708[0]._fU0 = {60.21300000, 1255.73000000, 29.99830000};
    g_U8708[0]._fU12 = {-5.00000000, -5.00000000, 0.00000000};
    g_U8708[0]._fU24 = 4;
    g_U8708[0]._fU32 = -1;
    g_U8708[0]._fU36 = -1;
    g_U8708[0]._fU40 = -1;
    g_U8708[0]._fU44 = -1;
    g_U8708[0]._fU48 = 1;
    g_U8708[0]._fU52 = 0;
    g_U8708[0]._fU56 = 0;
    g_U8708[0]._fU60 = 1;
    g_U8708[1].modelHash = 837858166;
    GET_MODEL_DIMENSIONS( g_U8708[1].modelHash, ref returnMin, ref returnMax );

     // Heli pad #2
    g_U8708[1]._fU0 = {196.54540000, -200.25470000, 55.30550000};
    g_U8708[1]._fU12 = {0.00000000, 7.50000000, 0.00000000};
    g_U8708[1]._fU24 = 4;
    g_U8708[1]._fU32 = -1;
    g_U8708[1]._fU36 = -1;
    g_U8708[1]._fU40 = -1;
    g_U8708[1]._fU44 = -1;
    g_U8708[1]._fU48 = 1;
    g_U8708[1]._fU52 = 0;
    g_U8708[1]._fU56 = 0;
    g_U8708[1]._fU60 = 1;
    g_U8708[2].modelHash = 837858166;
    GET_MODEL_DIMENSIONS( g_U8708[2].modelHash, ref returnMin, ref returnMax );

    // Heli pad #3 (Airport helipad #1)
    g_U8708[2]._fU0 = {2245.02400000, 758.38040000, 5.59830000};
    g_U8708[2]._fU12 = {-5.00000000, 5.00000000, 0.00000000};
    g_U8708[2]._fU24 = 4;
    g_U8708[2]._fU32 = -1;
    g_U8708[2]._fU36 = -1;
    g_U8708[2]._fU40 = -1;
    g_U8708[2]._fU44 = -1;
    g_U8708[2]._fU48 = 1;
    g_U8708[2]._fU52 = 0;
    g_U8708[2]._fU56 = 0;
    g_U8708[2]._fU60 = 1;
    g_U8708[3].modelHash = 290013743;
    GET_MODEL_DIMENSIONS( g_U8708[3].modelHash, ref returnMin, ref returnMax );

    // One of the piers
    g_U8708[3]._fU0 = {1396.57800000, -924.65840000, 0.12550000};
    g_U8708[3]._fU12 = {0.00000000, -7.50000000, 0.00000000};
    g_U8708[3]._fU24 = 4;
    g_U8708[3]._fU32 = -1;
    g_U8708[3]._fU36 = -1;
    g_U8708[3]._fU40 = -1;
    g_U8708[3]._fU44 = -1;
    g_U8708[3]._fU48 = 0;
    g_U8708[3]._fU52 = 0;
    g_U8708[3]._fU56 = 0;
    g_U8708[3]._fU60 = 1;
    g_U8708[4].modelHash = 1759673526;
    GET_MODEL_DIMENSIONS( g_U8708[4].modelHash, ref returnMin, ref returnMax );


    // Unknown
    g_U8708[4]._fU0 = {718.52780000, 462.59330000, -0.08350000};
    g_U8708[4]._fU12 = {-7.50000000, 0.00000000, 0.00000000};
    g_U8708[4]._fU24 = 4;
    g_U8708[4]._fU32 = -1;
    g_U8708[4]._fU36 = -1;
    g_U8708[4]._fU40 = -1;
    g_U8708[4]._fU44 = -1;
    g_U8708[4]._fU48 = 0;
    g_U8708[4]._fU52 = 0;
    g_U8708[4]._fU56 = 0;
    g_U8708[4]._fU60 = 1;
    g_U8708[5].modelHash = 1033245328;
    GET_MODEL_DIMENSIONS( g_U8708[5].modelHash, ref returnMin, ref returnMax );


    g_U8708[5]._fU0 = {385.93710000, 2092.04900000, 0.25000000};
    g_U8708[5]._fU12 = {0.00000000, 7.50000000, 0.00000000};
    g_U8708[5]._fU24 = 4;
    g_U8708[5]._fU32 = -1;
    g_U8708[5]._fU36 = -1;
    g_U8708[5]._fU40 = -1;
    g_U8708[5]._fU44 = -1;
    g_U8708[5]._fU48 = 0;
    g_U8708[5]._fU52 = 0;
    g_U8708[5]._fU56 = 0;
    g_U8708[5]._fU60 = 1;
    g_U8708[6].modelHash = -1660661558;
    GET_MODEL_DIMENSIONS( g_U8708[6].modelHash, ref returnMin, ref returnMax );


    g_U8708[6]._fU0 = {-708.92140000, 357.21180000, 3.07160000};
    g_U8708[6]._fU12 = {7.50000000, 0.00000000, 0.00000000};
    g_U8708[6]._fU24 = 4;
    g_U8708[6]._fU32 = -1;
    g_U8708[6]._fU36 = -1;
    g_U8708[6]._fU40 = -1;
    g_U8708[6]._fU44 = -1;
    g_U8708[6]._fU48 = 0;
    g_U8708[6]._fU52 = 0;
    g_U8708[6]._fU56 = 0;
    g_U8708[6]._fU60 = 1;
    g_U8708[7].modelHash = 290013743;
    GET_MODEL_DIMENSIONS( g_U8708[7].modelHash, ref returnMin, ref returnMax );


    g_U8708[7]._fU0 = {1766.65500000, -22.45820000, -6.86410000};
    g_U8708[7]._fU12 = {0.00000000, -7.50000000, 0.00000000};
    g_U8708[7]._fU24 = 4;
    g_U8708[7]._fU32 = -1;
    g_U8708[7]._fU36 = -1;
    g_U8708[7]._fU40 = -1;
    g_U8708[7]._fU44 = -1;
    g_U8708[7]._fU48 = 0;
    g_U8708[7]._fU52 = 0;
    g_U8708[7]._fU56 = 0;
    g_U8708[7]._fU60 = 1;
    g_U8708[8].modelHash = 290013743;
    GET_MODEL_DIMENSIONS( g_U8708[8].modelHash, ref returnMin, ref returnMax );


    g_U8708[8]._fU0 = {735.11220000, -561.98360000, -2.88010000};
    g_U8708[8]._fU12 = {7.50000000, 7.50000000, 0.00000000};
    g_U8708[8]._fU24 = 4;
    g_U8708[8]._fU32 = -1;
    g_U8708[8]._fU36 = -1;
    g_U8708[8]._fU40 = -1;
    g_U8708[8]._fU44 = -1;
    g_U8708[8]._fU48 = 0;
    g_U8708[8]._fU52 = 0;
    g_U8708[8]._fU56 = 0;
    g_U8708[8]._fU60 = 1;
    g_U8708[9].modelHash = 400514754;
    GET_MODEL_DIMENSIONS( g_U8708[9].modelHash, ref returnMin, ref returnMax );


    g_U8708[9]._fU0 = {408.34630000, 383.69590000, -4.84350000};
    g_U8708[9]._fU12 = {7.50000000, 0.00000000, 0.00000000};
    g_U8708[9]._fU24 = 4;
    g_U8708[9]._fU32 = -1;
    g_U8708[9]._fU36 = -1;
    g_U8708[9]._fU40 = -1;
    g_U8708[9]._fU44 = -1;
    g_U8708[9]._fU48 = 0;
    g_U8708[9]._fU52 = 0;
    g_U8708[9]._fU56 = 0;
    g_U8708[9]._fU60 = 1;
    g_U8708[10].modelHash = 1759673526;
    GET_MODEL_DIMENSIONS( g_U8708[10].modelHash, ref returnMin, ref returnMax );


    g_U8708[10]._fU0 = {1657.83600000, 1183.17600000, -4.48200000};
    g_U8708[10]._fU12 = {-7.50000000, 0.00000000, 0.00000000};
    g_U8708[10]._fU24 = 4;
    g_U8708[10]._fU32 = -1;
    g_U8708[10]._fU36 = -1;
    g_U8708[10]._fU40 = -1;
    g_U8708[10]._fU44 = -1;
    g_U8708[10]._fU48 = 0;
    g_U8708[10]._fU52 = 0;
    g_U8708[10]._fU56 = 0;
    g_U8708[10]._fU60 = 1;
    g_U8708[11].modelHash = 1033245328;
    GET_MODEL_DIMENSIONS( g_U8708[11].modelHash, ref returnMin, ref returnMax );


    g_U8708[11]._fU0 = {989.62990000, 1525.76900000, 0.39020000};
    g_U8708[11]._fU12 = {7.50000000, -7.50000000, 0.00000000};
    g_U8708[11]._fU24 = 4;
    g_U8708[11]._fU32 = -1;
    g_U8708[11]._fU36 = -1;
    g_U8708[11]._fU40 = -1;
    g_U8708[11]._fU44 = -1;
    g_U8708[11]._fU48 = 0;
    g_U8708[11]._fU52 = 0;
    g_U8708[11]._fU56 = 0;
    g_U8708[11]._fU60 = 1;
    g_U8708[12].modelHash = 290013743;
    GET_MODEL_DIMENSIONS( g_U8708[12].modelHash, ref returnMin, ref returnMax );


    g_U8708[12]._fU0 = {430.43210000, 1073.44400000, 0.00000000};
    g_U8708[12]._fU12 = {0.00000000, 7.50000000, 0.00000000};
    g_U8708[12]._fU24 = 4;
    g_U8708[12]._fU32 = -1;
    g_U8708[12]._fU36 = -1;
    g_U8708[12]._fU40 = -1;
    g_U8708[12]._fU44 = -1;
    g_U8708[12]._fU48 = 0;
    g_U8708[12]._fU52 = 0;
    g_U8708[12]._fU56 = 0;
    g_U8708[12]._fU60 = 1;
    g_U8708[13].modelHash = 1033245328;
    GET_MODEL_DIMENSIONS( g_U8708[13].modelHash, ref returnMin, ref returnMax );


    g_U8708[13]._fU0 = {246.68900000, 1564.80000000, 0.00000000};
    g_U8708[13]._fU12 = {0.00000000, -7.50000000, 0.00000000};
    g_U8708[13]._fU24 = 4;
    g_U8708[13]._fU32 = -1;
    g_U8708[13]._fU36 = -1;
    g_U8708[13]._fU40 = -1;
    g_U8708[13]._fU44 = -1;
    g_U8708[13]._fU48 = 0;
    g_U8708[13]._fU52 = 0;
    g_U8708[13]._fU56 = 0;
    g_U8708[13]._fU60 = 1;
    g_U8708[14].modelHash = 1759673526;
    GET_MODEL_DIMENSIONS( g_U8708[14].modelHash, ref returnMin, ref returnMax );


    g_U8708[14]._fU0 = {140.91370000, 1387.45900000, -1.11280000};
    g_U8708[14]._fU12 = {7.50000000, 7.50000000, 0.00000000};
    g_U8708[14]._fU24 = 4;
    g_U8708[14]._fU32 = -1;
    g_U8708[14]._fU36 = -1;
    g_U8708[14]._fU40 = -1;
    g_U8708[14]._fU44 = -1;
    g_U8708[14]._fU48 = 0;
    g_U8708[14]._fU52 = 0;
    g_U8708[14]._fU56 = 0;
    g_U8708[14]._fU60 = 1;
    g_U8708[15].modelHash = 290013743;
    GET_MODEL_DIMENSIONS( g_U8708[15].modelHash, ref returnMin, ref returnMax );


    g_U8708[15]._fU0 = {-670.80540000, 34.23220000, -7.04440000};
    g_U8708[15]._fU12 = {-7.50000000, 0.00000000, 0.00000000};
    g_U8708[15]._fU24 = 4;
    g_U8708[15]._fU32 = -1;
    g_U8708[15]._fU36 = -1;
    g_U8708[15]._fU40 = -1;
    g_U8708[15]._fU44 = -1;
    g_U8708[15]._fU48 = 0;
    g_U8708[15]._fU52 = 0;
    g_U8708[15]._fU56 = 0;
    g_U8708[15]._fU60 = 1;
    g_U8708[16].modelHash = 1033245328;
    GET_MODEL_DIMENSIONS( g_U8708[16].modelHash, ref returnMin, ref returnMax );


    g_U8708[16]._fU0 = {-269.61110000, -739.33670000, 0.00000000};
    g_U8708[16]._fU12 = {0.00000000, 7.50000000, 0.00000000};
    g_U8708[16]._fU24 = 4;
    g_U8708[16]._fU32 = -1;
    g_U8708[16]._fU36 = -1;
    g_U8708[16]._fU40 = -1;
    g_U8708[16]._fU44 = -1;
    g_U8708[16]._fU48 = 0;
    g_U8708[16]._fU52 = 0;
    g_U8708[16]._fU56 = 0;
    g_U8708[16]._fU60 = 1;
    g_U8708[17].modelHash = 290013743;
    GET_MODEL_DIMENSIONS( g_U8708[17].modelHash, ref returnMin, ref returnMax );


    g_U8708[17]._fU0 = {-582.30020000, 1555.16700000, -1.04980000};
    g_U8708[17]._fU12 = {0.00000000, 7.50000000, 0.00000000};
    g_U8708[17]._fU24 = 4;
    g_U8708[17]._fU32 = -1;
    g_U8708[17]._fU36 = -1;
    g_U8708[17]._fU40 = -1;
    g_U8708[17]._fU44 = -1;
    g_U8708[17]._fU48 = 0;
    g_U8708[17]._fU52 = 0;
    g_U8708[17]._fU56 = 0;
    g_U8708[17]._fU60 = 1;
    g_U8708[18].modelHash = -1660661558;

    GET_MODEL_DIMENSIONS( g_U8708[18].modelHash, ref returnMin, ref returnMax );

    // Helipad #3
    g_U8708[18]._fU0 = {-267.30890000, 215.39330000, 222.58760000};
    g_U8708[18]._fU12 = {0.00000000, 7.50000000, 0.00000000};
    g_U8708[18]._fU24 = 4;
    g_U8708[18]._fU32 = -1;
    g_U8708[18]._fU36 = -1;
    g_U8708[18]._fU40 = -1;
    g_U8708[18]._fU44 = -1;
    g_U8708[18]._fU48 = 0;
    g_U8708[18]._fU52 = 0;
    g_U8708[18]._fU56 = 0;
    g_U8708[18]._fU60 = 0;
    g_U8708[19].modelHash = 837858166;

    GET_MODEL_DIMENSIONS( g_U8708[19].modelHash, ref returnMin, ref returnMax );

    //
    g_U8708[19]._fU0 = {-268.30890000, 216.39330000, 222.58760000};
    g_U8708[19]._fU12 = {0.00000000, 7.50000000, 0.00000000};
    g_U8708[19]._fU24 = 4;
    g_U8708[19]._fU32 = -1;
    g_U8708[19]._fU36 = -1;
    g_U8708[19]._fU40 = -1;
    g_U8708[19]._fU44 = -1;
    g_U8708[19]._fU48 = 0;
    g_U8708[19]._fU52 = 0;
    g_U8708[19]._fU56 = 0;
    g_U8708[19]._fU60 = 1;
    return;
}

// Objects, here are a list of some of them:
// https://www.se7ensins.com/forums/threads/gtaiv-hash-code-list-object-hash-list.1204310/
void sub_38346()
{
    g_U9130[0]._fU0 = 0;
    // F_Y_PMANHAT_01
    g_U9130[0]._fU4 = 1670568326;
    // Unknown
    g_U9130[0]._fU8 = -1523915823;
    g_U9130[1]._fU0 = 0;
    // F_Y_STREET_34
    g_U9130[1]._fU4 = 1872110126;
    // Unknown
    g_U9130[1]._fU8 = -952185135;

    g_U9130[2]._fU0 = 0;
    // Unknown
    g_U9130[2]._fU4 = -1523915823;
    g_U9130[2]._fU8 = -1780385799;
    
    g_U9130[3]._fU0 = 0;
    // F_Y_STREET_34
    g_U9130[3]._fU4 = 1872110126;
    // F_Y_PMANHAT_01
    g_U9130[3]._fU8 = 1670568326;
    
    g_U9130[4]._fU0 = 0;
    
    // Unknown
    g_U9130[4]._fU4 = -952185135;
    // F_Y_PMANHAT_01
    g_U9130[4]._fU8 = 1670568326;
    
    g_U9130[5]._fU0 = 0;
    

    g_U9130[5]._fU4 = -1780385799;
    g_U9130[5]._fU8 = -1523915823;
    return;
}

// sub_38609 - Got name from debug string below
void Setup_Game_Completion_Requirements()
{
    int I;
    float fVar3;

    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        g_U32871[I]._fU8 = -1.00000000;
    }
    g_U32871[0]._fU8 = 60.00000000;
    g_U32871[1]._fU8 = 10.00000000;
    g_U32871[2]._fU8 = 5.00000000;
    g_U32871[3]._fU8 = 5.00000000;
    g_U32871[4]._fU8 = 5.00000000;
    g_U32871[5]._fU8 = 5.00000000;
    g_U32871[6]._fU8 = 5.00000000;
    g_U32871[7]._fU8 = 5.00000000;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU8 < 0.00000000)
        {
            SCRIPT_ASSERT( "Setup_Game_Completion_Requirements: A 100% Game Completion Category has not been filled" );
        }
    }
    fVar3 = 0.00000000;
    for ( I = 0; I < 8; I++ )
    {
        fVar3 += g_U32871[I]._fU8;
    }
    if (NOT (fVar3 == 100.00000000))
    {
        SCRIPT_ASSERT( "Setup_Game_Completion_Requirements: The total of all 100% Game Completion Categories does not add up to 100%" );
    }
    return;
}

