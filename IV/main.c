void main()
{
    int iVar2;
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 0;
    l_U40 = 150.00000000;
    l_U130 = 0;
    l_U131 = 150.00000000;
    l_U181 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    l_U496 = 0;
    l_U497 = 0;
    l_U498 = 0;

    PRINTSTRING( "--------------------------------------------\n" );
    PRINTSTRING( "CHOOSING PLAY MODE: " );
    PRINTSTRING( "RELEASE MODE" );
    PRINTNL();
    PRINTSTRING( "--------------------------------------------\n" );

    THIS_SCRIPT_SHOULD_BE_SAVED();
    THIS_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
    SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT( 1 );

    sub_319( 1 );
    sub_23792();
    sub_26049();
    sub_26946();
    sub_28101();
    sub_37408();
    sub_38321();
    sub_39321();
    g_U2226 = 0;
    g_U2232 = 1;
    g_U21 = 0;

    // Seems to be changed in main.c, packie3.c, gunlockup.c, gunlockupct.c, go_on_date.c, and faustin2.c, in use in taxi.c.
    // Seems to set chars to spawn in on gunlokcupct.c
    g_U64663 = 1;
    g_U9202 = 0;
    SET_NO_RESPRAYS( 0 );
    g_U15654[20] = 1;
    ProtectedSet(g_U9939, 6);
    SET_MAX_WANTED_LEVEL( ProtectedGet(g_U9939) );
    iVar2 = 0;
    ToggleRoads();
    sub_41751();
    iVar3 = -1;
    sub_43542( iVar3 );
    sub_43788();
    GET_GAME_TIMER( ref l_U495 );
    GET_GAME_TIMER( ref l_U496 );
    bVar4 = false;
    bVar4 = true;
    if (NOT bVar4)
    {
        sub_46929();
    }
    REQUEST_SCRIPT( "initial" );
    while (NOT (HAS_SCRIPT_LOADED( "initial" )))
    {
        WAIT( 0 );
    }

    uVar5 = START_NEW_SCRIPT( "initial", 1024 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "initial" );
    WAIT( 0 );
    while (IS_THREAD_ACTIVE( uVar5 ))
    {
        WAIT( 0 );
    }

    if (bVar4)
    {
        sub_47139();
    }

    while (NOT sub_47188())
    {
        WAIT( 0 );
    }

    FORCE_LOADING_SCREEN( 0 );
    while (true)
    {
        WAIT( 0 );
        GET_GAME_TIMER( ref l_U497 );
        sub_47308();
        sub_53166();
        sub_240550();
        sub_256525();
        sub_256856();
        sub_257140();
        sub_257489();
        sub_257602();
        sub_259217();
        sub_260590();
        sub_260690();
        sub_260801();
        sub_261054();
        if (l_U497 > l_U496)
        {
            l_U496 = l_U497 + 5000;
            sub_261143();
        }
        if (l_U494 == 0)
        {
            sub_261460();
            sub_261515();
            // Getting game timer?
            sub_261670();
            
            sub_264181();
            FlashMissionBlip();
            sub_264516();
        }

        sub_264693();

        // Contains apartment setup and a lot of other items.
        sub_265082();

        if (GET_GFWL_IS_RETURNING_TO_SINGLE_PLAYER())
        {
            SET_GFWL_IS_RETURNING_TO_SINGLE_PLAYER( 0 );
            if (GET_GFWL_HAS_SAFE_HOUSE())
            {
                NETWORK_STORE_SINGLE_PLAYER_GAME();
            }
        }
        else if ((NOT GET_GFWL_HAS_SAFE_HOUSE()) AND (g_U19 == 1))
        {
            PRINTSTRING( "\n [rw][gfwl]  \n" );
            SET_GFWL_HAS_SAFE_HOUSE( 1 );
        }
        if (g_U10)
        {
            g_U10 = 0;
            sub_272330();
        }
        if (g_U13)
        {
            g_U13 = 0;
            sub_272490();
        }
    }
    return;
}

// Seems to be the main reset to the game flow, judging by the "FLOW RESET" print string
void sub_319(unknown uParam0)
{
    PRINTSTRING( "********************************** FLOW RESET **********************************\n" );
    sub_421( uParam0 );
    sub_6493();
    sub_6569( uParam0 );

    // This seems to be multiplying the players current money by -1?
    sub_7183();

    // Does nothing
    sub_7316();

    // Set max wanted level to 6, and clear wanted level
    sub_7333();

    sub_7397();
    sub_7426();


    DisablePayNSprays();

    sub_7476();
    sub_14733();

    RemoveWeaponsFromPlayer();
    
    SetIslandsUnlockedStat();
    sub_15089();

    sub_15523();
    EnableSafehouses( uParam0 );
    sub_15753();
    sub_15826();

    sub_15847();
    sub_18198();
    sub_18257();
    sub_18312();
    SetRelationshipsForPeds();

    sub_18613();
    EnableMaxAmmoCap();

    sub_18659();
    ToggleRoads();
    Initialise_Help_Message_Conflicts();
    return;
}

void sub_421(unknown uParam0)
{
    sub_432( uParam0 );
    return;
}

void sub_432(unknown uParam0)
{
    sub_441();
    sub_1634( uParam0 );
    sub_2610();
    sub_2691();

    sub_2748();
    sub_2807();
    sub_2866();
    sub_2973();

    sub_3178();
    sub_3270();
    sub_5048();
    sub_5160();

    sub_5227();
    sub_5264();
    sub_5429();
    sub_5684();

    sub_5777();
    sub_5970();
    sub_6031();
    sub_6090();

    sub_6149();
    sub_6208();
    sub_6275();
    
    sub_6311();
    sub_6374();
    g_U34284 = -1;
    g_U10980 = 0;
    g_U26753 = 0;
    g_U10979 = 0;
    g_U10978 = 0;
    StrCopy( ref g_U9926, "", 16 );
    g_U9938 = 1;
    g_U9942 = 1;
    return;
}

void sub_441()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        sub_467( I );
    }
    return;
}

void sub_467(unknown uParam0)
{
    g_U10981[uParam0]._fU0 = 0;
    g_U10981[uParam0]._fU4 = 0;
    g_U10981[uParam0]._fU8 = 0;
    g_U10981[uParam0]._fU12 = 0;
    g_U10981[uParam0]._fU16 = -1;
    g_U10981[uParam0]._fU20 = -1;
    g_U10981[uParam0]._fU24 = -1;
    g_U10981[uParam0]._fU28 = 0;
    g_U10981[uParam0]._fU32 = 0;
    g_U10981[uParam0]._fU36 = 0;
    g_U10981[uParam0]._fU140 = 0;
    StrCopy( ref g_U10981[uParam0]._fU76, "MF14AUD", 16 );
    StrCopy( ref g_U10981[uParam0]._fU92, "PLACEHOLDER", 16 );
    g_U10981[uParam0]._fU108 = 0;
    g_U10981[uParam0]._fU112 = 0;
    g_U10981[uParam0]._fU116 = 0;
    g_U10981[uParam0]._fU120 = 0;
    sub_770( ref g_U10981[uParam0]._fU124 );
    sub_821( uParam0 );
    sub_967( uParam0 );
    sub_1456( uParam0 );
    return;
}

void sub_770(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_821(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 3;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U10981[uParam0]._fU40[I] = 50;
        g_U10981[uParam0]._fU56[I] = -1;
    }
    iVar5 = 5;
    for ( I = 0; I < iVar5; I++ )
    {
        ProtectedSet(g_U26747[I], 50);
    }
    g_U10981[uParam0]._fU72 = 1;
    return;
}

void sub_967(unknown uParam0)
{
    g_U10981[uParam0]._fU144._fU0 = 0;
    g_U10981[uParam0]._fU144._fU4 = 0;
    g_U10981[uParam0]._fU144._fU8 = 0;
    g_U10981[uParam0]._fU144._fU12 = 0;
    g_U10981[uParam0]._fU144._fU16 = 0;
    g_U10981[uParam0]._fU144._fU20 = 0;
    g_U10981[uParam0]._fU144._fU36 = 0;
    g_U10981[uParam0]._fU144._fU32 = 0;
    g_U10981[uParam0]._fU144._fU40 = 0;
    g_U10981[uParam0]._fU144._fU44 = 0;
    g_U10981[uParam0]._fU144._fU48 = 0;
    StrCopy( ref g_U10981[uParam0]._fU144._fU52, "", 32 );
    g_U10981[uParam0]._fU144._fU132 = 0;
    g_U10981[uParam0]._fU144._fU136 = -1;
    g_U10981[uParam0]._fU144._fU140 = -1;
    g_U10981[uParam0]._fU144._fU144 = -1;
    sub_1289( uParam0 );
    return;
}

void sub_1289(unknown uParam0)
{
    g_U10981[uParam0]._fU144._fU24 = 0;
    g_U10981[uParam0]._fU144._fU28 = 0;
    g_U10981[uParam0]._fU144._fU84 = 0;
    g_U10981[uParam0]._fU144._fU88 = 0;
    g_U10981[uParam0]._fU144._fU92 = nil;
    StrCopy( ref g_U10981[uParam0]._fU144._fU96, "", 32 );
    g_U10981[uParam0]._fU144._fU128 = 0;
    return;
}

void sub_1456(unknown uParam0)
{
    g_U10981[uParam0]._fU292._fU0 = 0;
    g_U10981[uParam0]._fU292._fU4 = 0;
    sub_770( ref g_U10981[uParam0]._fU292._fU8 );
    g_U10981[uParam0]._fU292._fU24 = 0;
    g_U10981[uParam0]._fU292._fU28 = {0.00000000, 0.00000000, 0.00000000};
    g_U10981[uParam0]._fU292._fU40 = 0.00000000;
    return;
}

void sub_1634(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        sub_1662( I, uParam0 );
        sub_1907( I, uParam0 );
        sub_2172( I );
        sub_2562( I );
    }
    return;
}

void sub_1662(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
        }
    }
    g_U13391[uParam0]._fU0._fU0 = 0;
    g_U13391[uParam0]._fU0._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU0._fU24, "", 32 );
    g_U13391[uParam0]._fU0._fU56 = 10;
    g_U13391[uParam0]._fU0._fU60 = nil;
    g_U13391[uParam0]._fU0._fU64 = nil;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U13391[uParam0]._fU0._fU72 = 1;
    g_U13391[uParam0]._fU0._fU76 = 0;
    return;
}

void sub_1907(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 ))
        {
            REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
        }
    }
    g_U13391[uParam0]._fU80._fU0 = 0;
    g_U13391[uParam0]._fU80._fU4 = -1;
    StrCopy( ref g_U13391[uParam0]._fU80._fU24, "", 32 );
    g_U13391[uParam0]._fU80._fU56 = 10;
    g_U13391[uParam0]._fU80._fU60 = nil;
    g_U13391[uParam0]._fU80._fU64 = nil;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U13391[uParam0]._fU80._fU72 = 1;
    g_U13391[uParam0]._fU80._fU76 = 0;
    return;
}

void sub_2172(unknown uParam0)
{
    g_U13391[uParam0]._fU160._fU0 = 0;
    g_U13391[uParam0]._fU160._fU4 = 0;
    g_U13391[uParam0]._fU160._fU8 = 0;
    StrCopy( ref g_U13391[uParam0]._fU160._fU12, "", 32 );
    StrCopy( ref g_U13391[uParam0]._fU160._fU44, "", 32 );
    g_U13391[uParam0]._fU160._fU76 = -1;
    g_U13391[uParam0]._fU160._fU80 = 0;
    g_U13391[uParam0]._fU160._fU84 = 0;
    g_U13391[uParam0]._fU160._fU88 = 0;
    g_U13391[uParam0]._fU160._fU92 = 0;
    g_U13391[uParam0]._fU160._fU96 = 0;
    g_U13391[uParam0]._fU160._fU100 = 0;
    g_U13391[uParam0]._fU160._fU104 = nil;
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    g_U13391[uParam0]._fU160._fU108._fU4 = 59;
    g_U13391[uParam0]._fU160._fU108._fU12 = 0;
    g_U13391[uParam0]._fU160._fU108._fU16 = 0;
    g_U13391[uParam0]._fU160._fU108._fU20 = 0;
    return;
}

void sub_2562(unknown uParam0)
{
    g_U13334[uParam0]._fU4 = 0;
    return;
}

void sub_2610()
{
    int I;

    I = 0;
    for ( I = 0; I < g_U32639; I++ )
    {
        g_U26758[I]._fU100 = 0;
        CLEAR_BIT( ref g_U26758[I]._fU108, 3 );
    }
    return;
}

void sub_2691()
{
    int I;

    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        g_U32871[I]._fU4 = 0;
    }
    return;
}

void sub_2748()
{
    int iVar2;
    int I;

    iVar2 = 48;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U15605[I] = 0;
    }
    return;
}

void sub_2807()
{
    int iVar2;
    int I;

    iVar2 = 76;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U15654[I] = 0;
    }
    return;
}

void sub_2866()
{
    int iVar2;
    int I;

    iVar2 = 13;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        g_U15807[I]._fU0 = 0;
        g_U15807[I]._fU4 = 0;
        g_U15807[I]._fU8 = 0;
        g_U15807[I]._fU12 = 0;
        g_U15807[I]._fU16 = 0;
    }
    return;
}

void sub_2973()
{
    int I;

    g_U63988._fU0 = 0;
    g_U63988._fU4 = 0;
    g_U63988._fU8 = 0;
    I = 0;
    for ( I = 0; I < 59; I++ )
    {
        g_U63988._fU12[I]._fU0 = 0;
        g_U63988._fU12[I]._fU4 = 0;
        g_U63988._fU12[I]._fU8 = 0;
        g_U63988._fU12[I]._fU12 = 57;
        g_U63988._fU12[I]._fU16 = 0;
        g_U63988._fU12[I]._fU20 = -1;
        g_U63988._fU12[I]._fU24 = 0;
        g_U63988._fU12[I]._fU28 = 7;
    }
    return;
}

void sub_3178()
{
    g_U15936._fU0 = 0;
    g_U15936._fU4 = 0;
    g_U15936._fU8 = 0;
    g_U15936._fU12 = 0;
    g_U15936._fU16 = 0;
    g_U15936._fU20 = 0;
    g_U15936._fU24 = -1;
    g_U15936._fU32 = nil;
    g_U15936._fU28 = 0;
    return;
}

void sub_3270()
{
    int iVar2;
    int I;
    int iVar4;

    iVar2 = 23;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        iVar4 = I;
        sub_3304( iVar4 );
    }
    g_U26439 = 0;
    return;
}

void sub_3304(unknown uParam0)
{
    int iVar3;
    int I;

    g_U22274[uParam0]._fU0 = 0;
    g_U22274[uParam0]._fU4 = 0;
    g_U22274[uParam0]._fU8 = 0;
    g_U22274[uParam0]._fU12 = 0;
    g_U22274[uParam0]._fU16 = 0;
    g_U22274[uParam0]._fU20 = 0;
    g_U22274[uParam0]._fU24 = 0;
    g_U22274[uParam0]._fU28 = 0;
    g_U22274[uParam0]._fU64 = 0;
    g_U22274[uParam0]._fU68 = 0;
    g_U22274[uParam0]._fU72 = 0;
    g_U22274[uParam0]._fU76 = 0;
    g_U22274[uParam0]._fU80 = 0;
    g_U22274[uParam0]._fU84 = 0;
    g_U22274[uParam0]._fU88 = 0;
    g_U22274[uParam0]._fU92 = 0;
    g_U22274[uParam0]._fU96 = 0;
    g_U22274[uParam0]._fU100 = -1;
    g_U22274[uParam0]._fU112 = -1;
    g_U22274[uParam0]._fU116 = -1;
    g_U22274[uParam0]._fU120 = -1;
    g_U22274[uParam0]._fU104 = 0;
    g_U22274[uParam0]._fU108 = 0;
    g_U22274[uParam0]._fU124 = -1;
    g_U22274[uParam0]._fU128 = -1;
    g_U22274[uParam0]._fU132 = -1;
    g_U22274[uParam0]._fU136 = 0;
    g_U22274[uParam0]._fU140 = 0;
    g_U22274[uParam0]._fU144 = 14;
    g_U22274[uParam0]._fU148 = 14;
    g_U22274[uParam0]._fU152 = 0;
    g_U22274[uParam0]._fU156 = 0;
    g_U22274[uParam0]._fU160 = 0;
    g_U22274[uParam0]._fU164 = 0;
    g_U22274[uParam0]._fU168 = 0;
    g_U22274[uParam0]._fU172 = 0;
    g_U22274[uParam0]._fU176 = 0;
    g_U22274[uParam0]._fU180 = 21;
    g_U22274[uParam0]._fU184 = 9;
    sub_770( ref g_U22274[uParam0]._fU32 );
    sub_770( ref g_U22274[uParam0]._fU48 );
    iVar3 = 14;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U22274[uParam0]._fU208[I]._fU0 = -1;
    }
    sub_4013( uParam0 );
    sub_4635( uParam0 );
    g_U22274[uParam0]._fU188._fU0._fU0 = -1;
    g_U22274[uParam0]._fU188._fU0._fU4 = -1;
    g_U22274[uParam0]._fU188._fU8._fU0 = -1;
    g_U22274[uParam0]._fU188._fU8._fU4 = -1;
    g_U22274[uParam0]._fU188._fU16 = 0;
    g_U22274[uParam0]._fU688._fU0 = 0;
    g_U22274[uParam0]._fU688._fU4 = 0;
    g_U22274[uParam0]._fU688._fU8 = 0;
    g_U22274[uParam0]._fU688._fU12 = 0;
    g_U22274[uParam0]._fU688._fU16 = 0;
    g_U22274[uParam0]._fU688._fU20 = 0;
    g_U22274[uParam0]._fU688._fU24 = -1;
    g_U22274[uParam0]._fU688._fU28 = -1;
    return;
}

void sub_4013(unknown uParam0)
{
    g_U22274[uParam0]._fU500._fU0 = 0;
    g_U22274[uParam0]._fU500._fU28 = 8;
    g_U22274[uParam0]._fU500._fU32 = 10;
    StrCopy( ref g_U22274[uParam0]._fU500._fU36, "", 16 );
    StrCopy( ref g_U22274[uParam0]._fU500._fU68, "", 16 );
    StrCopy( ref g_U22274[uParam0]._fU500._fU36, "", 16 );
    StrCopy( ref g_U22274[uParam0]._fU500._fU84, "", 16 );
    StrCopy( ref g_U22274[uParam0]._fU500._fU100, "", 16 );
    StrCopy( ref g_U22274[uParam0]._fU500._fU116, "", 16 );
    g_U22274[uParam0]._fU500._fU132 = 0;
    g_U22274[uParam0]._fU500._fU136 = -1;
    g_U22274[uParam0]._fU500._fU140 = -1;
    g_U22274[uParam0]._fU500._fU144 = -1;
    g_U22274[uParam0]._fU500._fU148 = -1;
    g_U22274[uParam0]._fU500._fU152 = -1;
    g_U22274[uParam0]._fU500._fU156 = -1;
    g_U22274[uParam0]._fU500._fU160 = 0;
    g_U22274[uParam0]._fU500._fU164 = 0;
    sub_4398( uParam0 );
    return;
}

void sub_4398(unknown uParam0)
{
    g_U22274[uParam0]._fU500._fU4 = 0;
    g_U22274[uParam0]._fU500._fU8 = 0;
    g_U22274[uParam0]._fU500._fU12 = 0;
    g_U22274[uParam0]._fU500._fU16 = 0;
    g_U22274[uParam0]._fU500._fU20 = 0;
    g_U22274[uParam0]._fU500._fU24 = 0;
    g_U22274[uParam0]._fU500._fU168 = 0;
    g_U22274[uParam0]._fU500._fU172 = 0;
    g_U22274[uParam0]._fU500._fU176 = 1;
    g_U22274[uParam0]._fU500._fU180 = nil;
    g_U22274[uParam0]._fU500._fU184 = nil;
    return;
}

void sub_4635(unknown uParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        g_U22274[uParam0]._fU268[I]._fU0 = 0;
        StrCopy( ref g_U22274[uParam0]._fU268[I]._fU4, "", 32 );
        g_U22274[uParam0]._fU268[I]._fU36 = 0;
        g_U22274[uParam0]._fU268[I]._fU40 = 0;
    }
    return;
}

void sub_5048()
{
    int I;

    for ( I = 0; I < 5; I++ )
    {
        g_U9943[I]._fU0 = 0;
        if (DOES_BLIP_EXIST( g_U9943[I]._fU32 ))
        {
            REMOVE_BLIP( g_U9943[I]._fU32 );
            g_U9943[I]._fU32 = nil;
        }
    }
    return;
}

void sub_5160()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 57;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U15946[I]._fU168._fU4 = 1;
    }
    return;
}

void sub_5227()
{
    g_U32896._fU0 = 1;
    g_U32896._fU4 = 1;
    return;
}

void sub_5264()
{
    int I;

    g_U32898._fU0 = 54;
    g_U32898._fU4 = 9;
    g_U32898._fU8 = 9;
    g_U32898._fU12 = 9;
    g_U32898._fU16 = 8;
    g_U32898._fU20 = 8;
    g_U32898._fU24 = 0;
    g_U32898._fU28 = 0;
    g_U32898._fU32 = 0;
    g_U32898._fU72 = 0;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        g_U32898._fU36[I] = 0;
    }
    return;
}

void sub_5429()
{
    int I;

    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        g_U34048[I]._fU0 = 1;
        g_U34048[I]._fU4 = 0;
        g_U34048[I]._fU28 = 0;
        g_U34048[I]._fU32 = 1;
        sub_770( ref g_U34048[I]._fU8 );
        g_U34048[I]._fU24 = 0;
    }
    sub_5553();
    sub_5635();
    return;
}

void sub_5553()
{
    if (g_U0)
    {
        g_U34175._fU0 = 0;
    }
    else
    {
        g_U34175._fU0 = 1;
    }
    g_U34175._fU4 = 0;
    g_U34175._fU8 = 54;
    g_U34175._fU12 = 0;
    return;
}

void sub_5635()
{
    g_U34175._fU16._fU0 = 14;
    g_U34175._fU16._fU4 = 0;
    return;
}

void sub_5684()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U32825[I]._fU0 = 57;
        StrCopy( ref g_U32825[I]._fU20, "", 16 );
        StrCopy( ref g_U32825[I]._fU4, "", 16 );
    }
    return;
}

void sub_5777()
{
    int iVar2;
    int J;
    int I;

    iVar2 = 2;
    J = 0;
    I = 0;
    for ( J = 0; J < 5; J++ )
    {
        for ( I = 0; I < 14; I++ )
        {
            g_U34181._fU0[J]._fU0[I] = 0;
        }
        g_U34181._fU0[J]._fU60 = 0;
        g_U34181._fU0[J]._fU64 = iVar2;
    }
    for ( I = 0; I < 14; I++ )
    {
        g_U34181._fU344[I] = 0;
    }
    g_U34181._fU404 = 0;
    g_U34181._fU408 = iVar2;
    return;
}

void sub_5970()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 57;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U64464[I] = 0;
    }
    return;
}

void sub_6031()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 57;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U26555[I] = 0;
    }
    return;
}

void sub_6090()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 57;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U26613[I] = 0;
    }
    return;
}

void sub_6149()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 57;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U26671[I] = 0;
    }
    return;
}

void sub_6208()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        g_U15874[I]._fU0 = 21;
        g_U15874[I]._fU4 = 0;
    }
    return;
}

void sub_6275()
{
    StrCopy( ref g_U15931._fU0, "", 16 );
    g_U15931._fU16 = 0;
    return;
}

void sub_6311()
{
    g_U9380._fU0 = 0;
    g_U9380._fU4 = 0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    g_U9385 = 0;
    return;
}

void sub_6374()
{
    g_U64542._fU0 = 57;
    g_U64542._fU4 = nil;
    g_U64542._fU8 = 28;
    return;
}

void sub_6493()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 57;
    for ( I = 0; I < iVar3; I++ )
    {
        g_U26440[I]._fU0 = 0;
        g_U26440[I]._fU4 = nil;
    }
    return;
}

void sub_6569(boolean bParam0)
{
    int I;

    if (bParam0)
    {
        g_U555 = 9;
    }
    if (NOT sub_6591())
    {
        sub_6685( g_U91._fU60 );
        while (NOT sub_6591())
        {
            WAIT( 0 );
        }
    }
    g_U91._fU40 = 0;
    I = 0;
    for ( I = 0; I < 57; I++ )
    {
        g_U15946[I]._fU132._fU0 = 0;
        g_U15946[I]._fU8[0]._fU0[3] = 0;
    }
    for ( I = 0; I < (g_U569 - 1); I++ )
    {
        sub_6990( I );
    }
    for ( I = 0; I <= 6; I++ )
    {
        g_U465[I]._fU0 = 0;
        g_U465[I]._fU4 = 0;
    }
    g_U26745 = 1;
    g_U26746 = 28;
    sub_7122();
    return;
}

void sub_6591()
{
    return sub_6602( 1, 1 );
}

int sub_6602(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((g_U555 != 9) AND (uParam1))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

void sub_6685(int iParam0)
{
    if (g_U91._fU60 == iParam0)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 6:
            case 7:
            case 8: break;
            default:
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
            if (IS_MOBILE_PHONE_CALL_ONGOING())
            {
                ABORT_SCRIPTED_CONVERSATION( 0 );
            }
            if ((g_U91._fU0 != 1001) AND (g_U91._fU0 != 1000))
            {
                g_U91._fU0 = 1010;
            }
            break;
        }
    }
    return;
}

void sub_6990(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

void sub_7122()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U10975[I] = 0;
    }
    return;
}

// This seems to be multiplying the players current money by -1?
void sub_7183()
{
    int iVar2;
    int iVar3;

    iVar2 = CurrentPlayerMoney();
    iVar3 = iVar2 * -1;
    AddMoneyToPlayer( iVar3 );
    return;
}

// sub_7192
void CurrentPlayerMoney()
{
    unknown Result;

    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        STORE_SCORE( CurrentPlayerId(), ref Result );
    }
    return Result;
}

// sub_7201
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

// sub_7277
// void AddMoneyToPlayer(unknown uParam0)
void AddMoneyToPlayer(float moneytoAdd)
{
    ADD_SCORE( CurrentPlayerId(), moneytoAdd );
    return;
}

void sub_7316()
{
    return;
}

// Set the players max wanted level to 6? And clears it
// g_U9939 seems to be a wanted level global
void sub_7333()
{
    ProtectedSet(g_U9939, 6);
    SET_MAX_WANTED_LEVEL( ProtectedGet(g_U9939) );
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        CLEAR_WANTED_LEVEL( CurrentPlayerId() );
    }
    return;
}

void sub_7397()
{
    g_U2226 = 1;
    g_U2232 = 0;
    return;
}

void sub_7426()
{
    g_U64663 = 0;
    return;
}

// sub_7451
void DisablePayNSprays()
{
    SET_NO_RESPRAYS( 1 );
    return;
}

void sub_7476()
{
    sub_7485();
    return;
}

void sub_7485()
{
    int I;

    sub_7494();
    sub_7603( 0, "PD_CADDY", "PD_MAXWELL", "PDB_ADDR_0", 569.57800000, 1501.85500000, 14.70980000, "PDB_ADDR_0", 569.57800000, 1501.85500000, 14.70980000, 2000, 24, 12 );
    sub_8962( 0, 1 );
    sub_7603( 1, "PD_CAUGHLIN", "PD_MAXWELL", "PDB_ADDR_0", 569.57800000, 1501.85500000, 14.70980000, "PDB_ADDR_0", 569.57800000, 1501.85500000, 14.70980000, 1400, 24, 12 );
    sub_7603( 2, "PD_PECINOVSKY", "PD_PRESTON", "PDB_ADDR_1", 1244.72900000, 1721.92300000, 16.64360000, "PDB_ADDR_1", 1244.72900000, 1721.92300000, 16.64360000, 800, 25, 10 );
    sub_7603( 3, "PD_RIVETTE", "PD_ANTONIO", "PDB_ADDR_2", 1309.43000000, -36.46970000, 27.24210000, "PDB_ADDR_2", 1309.43000000, -36.46970000, 27.24210000, 1300, 3, 14 );
    sub_7603( 4, "PD_TISDEL", "PD_FERNANDO", "PDB_ADDR_3", 1062.73200000, -549.96990000, 12.74630000, "PDB_ADDR_3", 1062.73200000, -549.96990000, 12.74630000, 1100, 51, 10 );
    sub_7603( 5, "PD_REKER", "PD_BERT", "PDB_ADDR_4", 1046.02200000, 501.62800000, 19.35550000, "PDB_ADDR_4", 1046.02200000, 501.62800000, 19.35550000, 400, 19, 6 );
    sub_7603( 6, "PD_GUZOWSKI", "PD_SCOTT", "PDB_ADDR_5", 926.51080000, 789.80470000, 13.48640000, "PDB_ADDR_5", 926.51080000, 789.80470000, 13.48640000, 1400, 32, 5 );
    sub_7603( 7, "PD_PAPARO", "PD_FREDDY", "PDB_ADDR_6", 1268.08200000, 1016.14800000, 12.39090000, "PDB_ADDR_6", 1268.08200000, 1016.14800000, 12.39090000, 300, 30, 3 );
    sub_7603( 8, "PD_STAVNES", "PD_RODRIGO", "PDB_ADDR_7", 1145.60500000, 842.30940000, 36.10790000, "PDB_ADDR_7", 1145.60500000, 842.30940000, 36.10790000, 1300, 44, 9 );
    sub_7603( 9, "PD_PICKREL", "PD_TYLER", "PDB_ADDR_8", 1455.84500000, 591.74300000, 28.21270000, "PDB_ADDR_8", 1455.84500000, 591.74300000, 28.21270000, 1100, 29, 18 );
    sub_7603( 10, "PD_GORALSKI", "PD_ALONSO", "PDB_ADDR_9", 2257.59400000, 172.61450000, 4.80810000, "PDB_ADDR_9", 2257.59400000, 172.61450000, 4.80810000, 600, 20, 2 );
    for ( I = 1; I <= 10; I++ )
    {
        sub_9956( I, 0 );
        sub_10081( I );
    }
    sub_7603( 11, "PD_KIKUCHI", "PD_SHON", "PDB_ADDR_10", -404.37920000, 1240.06200000, 21.98130000, "PDB_ADDR_10", -404.37920000, 1240.06200000, 21.98130000, 1400, 35, 12 );
    sub_7603( 12, "PD_FRIDDELL", "PD_LINO", "PDB_ADDR_11", -31.27570000, 772.40750000, 14.71810000, "PDB_ADDR_11", -31.27570000, 772.40750000, 14.71810000, 900, 39, 3 );
    sub_7603( 13, "PD_COVEY", "PD_DARREN", "PDB_ADDR_12", -578.02840000, 472.76290000, 12.78790000, "PDB_ADDR_12", -578.02840000, 472.76290000, 12.78790000, 500, 12, 15 );
    sub_7603( 14, "PD_BRODELL", "PD_LEO", "PDB_ADDR_13", -116.43880000, 1408.18000000, 20.41450000, "PDB_ADDR_13", -116.43880000, 1408.18000000, 20.41450000, 400, 17, 13 );
    sub_7603( 15, "PD_KAND", "PD_JIMMY", "PDB_ADDR_14", -121.25090000, 1511.42600000, 22.77980000, "PDB_ADDR_14", -121.25090000, 1511.42600000, 22.77980000, 1400, 23, 12 );
    sub_7603( 16, "PD_MAHONVIC", "PD_CHRISTOV", "PDB_ADDR_15", 356.55930000, -360.33170000, 10.36860000, "PDB_ADDR_15", 356.55930000, -360.33170000, 10.36860000, 300, 52, 19 );
    sub_7603( 17, "PD_NASHLY", "PD_SIMON", "PDB_ADDR_16", 374.80770000, -511.96440000, 9.87990000, "PDB_ADDR_16", 374.80770000, -511.96440000, 9.87990000, 1300, 48, 6 );
    sub_7603( 18, "PD_LAMORA", "PD_BARRY", "PDB_ADDR_17", 454.02260000, -23.81160000, 7.68750000, "PDB_ADDR_17", 454.02260000, -23.81160000, 7.68750000, 1100, 45, 9 );
    sub_7603( 19, "PD_HAIMO", "PD_JUAN", "PDB_ADDR_18", -291.16780000, 455.58250000, 14.34060000, "PDB_ADDR_18", -291.16780000, 455.58250000, 14.34060000, 600, 18, 11 );
    sub_7603( 20, "PD_FRANCOVIC", "PD_TOMMY", "PDB_ADDR_19", -399.09700000, -446.82610000, 3.87240000, "PDB_ADDR_19", -399.09700000, -446.82610000, 3.87240000, 1300, 14, 12 );
    for ( I = 11; I <= 20; I++ )
    {
        sub_9956( I, 0 );
        sub_10081( I );
    }
    sub_7603( 21, "PD_BOLDENOW", "PD_MARTY", "PDB_ADDR_20", -1357.36400000, 490.15100000, 13.61980000, "PDB_ADDR_20", -1357.36400000, 490.15100000, 13.61980000, 1400, 46, 12 );
    sub_7603( 22, "PD_BURDETT", "PD_KEENAN", "PDB_ADDR_21", -1042.38900000, 1415.25700000, 23.29390000, "PDB_ADDR_21", -1042.38900000, 1415.25700000, 23.29390000, 200, 31, 12 );
    sub_7603( 23, "PD_BACERRA", "PD_PHIL", "PDB_ADDR_22", -1059.33100000, 729.19140000, 3.81050000, "PDB_ADDR_22", -1059.33100000, 729.19140000, 3.81050000, 900, 100, 12 );
    sub_7603( 24, "PD_HATMAKER", "PD_DANNY", "PDB_ADDR_23", -1190.66600000, 565.23260000, 3.37280000, "PDB_ADDR_23", -1190.66600000, 565.23260000, 3.37280000, 500, 47, 12 );
    sub_7603( 25, "PD_ESKUCHEN", "PD_MERVIN", "PDB_ADDR_24", -1729.88600000, 462.99350000, 26.02680000, "PDB_ADDR_24", -1729.88600000, 462.99350000, 26.02680000, 400, 5, 12 );
    sub_7603( 26, "PD_KATSUDA", "PD_NOEL", "PDB_ADDR_25", -2182.11600000, -21.33610000, 5.68420000, "PDB_ADDR_25", -2182.11600000, -21.33610000, 5.68420000, 1400, 101, 12 );
    sub_7603( 27, "PD_HARRISON", "PD_FREDERICK", "PDB_ADDR_26", -1755.06400000, -236.55620000, 2.50140000, "PDB_ADDR_26", -1755.06400000, -236.55620000, 2.50140000, 300, 102, 12 );
    sub_7603( 28, "PD_MCENIRY", "PD_RODNEY", "PDB_ADDR_27", -1623.88200000, 726.51410000, 28.21120000, "PDB_ADDR_27", -1623.88200000, 726.51410000, 28.21120000, 1300, 49, 12 );
    sub_7603( 29, "PD_LUSHBAUGH", "PD_GLENN", "PDB_ADDR_28", -1447.36000000, 1105.43600000, 22.03850000, "PDB_ADDR_28", -1447.36000000, 1105.43600000, 22.03850000, 1100, 50, 12 );
    sub_7603( 30, "PD_SZERBIN", "PD_SERGI", "PDB_ADDR_29", -1116.76500000, 1186.25600000, 16.28170000, "PDB_ADDR_29", -1116.76500000, 1186.25600000, 16.28170000, 600, 16, 12 );
    for ( I = 21; I <= 30; I++ )
    {
        sub_9956( I, 0 );
        sub_10081( I );
    }
    sub_7603( 31, "PD_DIMAYEV", "PD_ADAM", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_CCS", 1148.05900000, 559.10720000, 29.25150000, 1600, 9, 15 );
    sub_7603( 32, "PD_RIVAS", "PD_LYLE", "PD_BK_HM_9", 881.32100000, -20.76920000, 28.42190000, "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, 400, 41, 4 );
    for ( I = 31; I <= 32; I++ )
    {
        sub_8962( I, 1 );
        sub_9956( I, 1 );
    }
    sub_7603( 33, "PD_SLIGO", "PD_BUCKY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", -1006.49700000, 1607.58800000, 23.60940000, 900, 40, 12 );
    sub_8962( 33, 1 );
    sub_9956( 33, 1 );
    sub_7603( 34, "PD_FAUSTIN", "PD_MIKHAIL", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2000, 2000, 12 );
    sub_7603( 35, "PD_RASCALOV", "PD_DIMITRI", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2100, 2001, 12 );
    sub_7603( 36, "PD_HUGHES", "PD_JACOB", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2200, 2002, 12 );
    sub_7603( 37, "PD_DAVIES", "PD_TEAFORE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2300, 2003, 12 );
    sub_7603( 38, "PD_ESCUELLA", "PD_MANNY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2400, 2004, 12 );
    sub_7603( 39, "PD_TORRES", "PD_ELIZABETA", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2500, 2005, 12 );
    sub_7603( 40, "PD_KIBBUTZ", "PD_BRUCIE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2600, 2006, 12 );
    sub_7603( 41, "PD_BOCCINO", "PD_RAY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1300, 2007, 12 );
    sub_7603( 42, "PD_PEGORINO", "PD_JIMMY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1300, 2008, 12 );
    sub_7603( 43, "PD_BELL", "PD_PHIL", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1300, 2009, 12 );
    sub_7603( 44, "PD_GLEBOV", "PD_VLAD", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2700, 2010, 12 );
    sub_7603( 45, "PD_STEWART", "PD_TREY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2800, 2011, 12 );
    sub_7603( 46, "PD_FORGE", "PD_DWAYNE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2900, 2012, 12 );
    sub_7603( 47, "PD_MCREARY", "PD_PACKIE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 200, 2013, 12 );
    sub_7603( 48, "PD_MCREARY", "PD_GERRY", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1300, 2014, 12 );
    sub_7603( 49, "PD_LOW", "PD_ED", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 3000, 2015, 12 );
    sub_7603( 50, "PD_LITTLE", "PD_CLARENCE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 2800, 2016, 12 );
    sub_7603( 51, "PD_ALLEN", "PD_MARNIE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 3100, 2017, 12 );
    sub_7603( 52, "PD_Bytchkov", "PD_IVAN", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 3200, 2018, 12 );
    sub_7603( 53, "PD_ANCELOTTI", "PD_GRACIE", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 1100, 2019, 12 );
    sub_7603( 54, "PD_RIVAS", "PD_TOM", "PD_H_BK_UN", 0.00000000, 0.00000000, 0.00000000, "PD_H_BK_BUG", 0.00000000, 0.00000000, 0.00000000, 3300, 2020, 12 );
    for ( I = 34; I <= 54; I++ )
    {
        sub_9956( I, 1 );
    }
    sub_14544( "PD_DWAYNE", "PD_FORGE", 1 );
    return;
}

void sub_7494()
{
    g_U2272 = 0;
    return;
}

void sub_7603(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    if (g_U2272 < 100)
    {
        StrCopy( ref g_U2273[uParam0]._fU0, uParam1, 16 );
        StrCopy( ref g_U2273[uParam0]._fU16, uParam2, 16 );
        StrCopy( ref g_U2273[uParam0]._fU32._fU0, uParam3, 16 );
        g_U2273[uParam0]._fU32._fU16 = {uParam4};
        StrCopy( ref g_U2273[uParam0]._fU60[0]._fU0, uParam7, 16 );
        g_U2273[uParam0]._fU60[0]._fU16 = {uParam8};
        g_U2273[uParam0]._fU148 = {sub_7750( uParam11 )};
        g_U2273[uParam0]._fU184 = uParam12;
        if (((uParam4._fU0 + uParam4._fU4) + uParam4._fU8) > 0.00000000)
        {
            g_U2273[uParam0]._fU220 = GET_MAP_AREA_FROM_COORDS( g_U2273[uParam0]._fU32._fU16 );
        }
        else
        {
            g_U2273[uParam0]._fU220 = GET_MAP_AREA_FROM_COORDS( g_U2273[uParam0]._fU60[0]._fU16 );
        }
        if (g_U2273[uParam0]._fU184 < 2000)
        {
            g_U2273[uParam0]._fU196 = uParam11;
        }
        else
        {
            g_U2273[uParam0]._fU196 = 2000;
        }
        g_U2273[uParam0]._fU224 = uParam13;
        g_U2272++;
    }
    else
    {
        SCRIPT_ASSERT( "MAX_SIZE_OF_DATABASE reached- increase it" );
    }
    return;
}

void sub_7750(unknown uParam0)
{
    char[32] Result;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref Result, "PD_CRM_ARMRO", 32 );
        break;
        case 200:
        StrCopy( ref Result, "PD_CRM_ARMRO", 32 );
        break;
        case 300:
        StrCopy( ref Result, "PD_CRM_GTA", 32 );
        break;
        case 400:
        StrCopy( ref Result, "PD_CRM_DRG", 32 );
        break;
        case 500:
        StrCopy( ref Result, "PD_CRM_AD", 32 );
        break;
        case 600:
        StrCopy( ref Result, "PD_CRM_PROS", 32 );
        break;
        case 700:
        StrCopy( ref Result, "PD_CRM_BA", 32 );
        break;
        case 800:
        StrCopy( ref Result, "PD_CRM_CCF", 32 );
        break;
        case 900:
        StrCopy( ref Result, "PD_CRM_HR", 32 );
        break;
        case 1000:
        StrCopy( ref Result, "PD_CRM_RBT", 32 );
        break;
        case 1100:
        StrCopy( ref Result, "PD_CRM_DWI", 32 );
        break;
        case 1200:
        StrCopy( ref Result, "PD_CRM_DTR", 32 );
        break;
        case 1300:
        StrCopy( ref Result, "PD_CRM_RACK", 32 );
        break;
        case 1400:
        StrCopy( ref Result, "PD_CRM_GRV", 32 );
        break;
        case 1500:
        StrCopy( ref Result, "PD_CRM_GDB", 32 );
        break;
        case 1600:
        StrCopy( ref Result, "PD_CRM_TER", 32 );
        break;
        case 2000:
        StrCopy( ref Result, "PD_CRM_EXT", 32 );
        break;
        case 2100:
        StrCopy( ref Result, "PD_CRM_ML", 32 );
        break;
        case 2200:
        StrCopy( ref Result, "PD_CRM_IFD", 32 );
        break;
        case 2300:
        StrCopy( ref Result, "PD_CRM_AM", 32 );
        break;
        case 2400:
        StrCopy( ref Result, "PD_CRM_DPO", 32 );
        break;
        case 2500:
        StrCopy( ref Result, "PD_CRM_DPO", 32 );
        break;
        case 2600:
        StrCopy( ref Result, "PD_CRM_STDI", 32 );
        break;
        case 2700:
        StrCopy( ref Result, "PD_CRM_RSG", 32 );
        break;
        case 2800:
        StrCopy( ref Result, "PD_CRM_PTD", 32 );
        break;
        case 2900:
        StrCopy( ref Result, "PD_CRM_COKE", 32 );
        break;
        case 3000:
        StrCopy( ref Result, "PD_CRM_IEX", 32 );
        break;
        case 3100:
        StrCopy( ref Result, "PD_CRM_PROST", 32 );
        break;
        case 3200:
        StrCopy( ref Result, "PD_CRM_GRA", 32 );
        break;
        case 3300:
        StrCopy( ref Result, "PD_CRM_SOL", 32 );
        break;
    }
    return Result;
}

void sub_8962(int iParam0, unknown uParam1)
{
    if (iParam0 < 100)
    {
        g_U2273[iParam0]._fU208 = uParam1;
    }
    return;
}

void sub_9956(int iParam0, unknown uParam1)
{
    if (iParam0 < 100)
    {
        g_U2273[iParam0]._fU216 = uParam1;
    }
    else
    {
        SCRIPT_ASSERT( "Prevented illegal index into dbase:index > MAX_SIZE_OF_DATABASE" );
    }
    return;
}

void sub_10081(unknown uParam0)
{
    g_U2273[uParam0]._fU228 = 1;
    return;
}

void sub_14544(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = sub_14557( uParam0, uParam1 );
    if (iVar5 != -1)
    {
        g_U2273[iVar5]._fU188 = uParam2;
    }
    return;
}

int sub_14557(unknown uParam0, unknown uParam1)
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

void sub_14733()
{
    sub_14742();
    return;
}

void sub_14742()
{
    int I;

    for ( I = 0; I <= (g_U1502 - 1); I++ )
    {
        g_U1502[I] = 0;
    }
    sub_14794( 1015, 2 );
    sub_14794( 1023, 2 );
    sub_14794( 2034, 2 );
    sub_14794( 4, 1 );
    sub_14794( 9, 3 );
    sub_14794( 1021, 2 );
    sub_14794( 1024, 2 );
    sub_14794( 1025, 3 );
    sub_14794( 2029, 1 );
    sub_14794( 3038, 2 );
    sub_14794( 4049, 1 );
    return;
}

void sub_14794(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

// sub_14954
void RemoveWeaponsFromPlayer()
{
    REMOVE_ALL_CHAR_WEAPONS( CurrentPlayerChar() );
    return;
}

// sub_14963
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

// sub_15019
void SetIslandsUnlockedStat()
{
    int I;
    int currentIslandUnlocked;

    I = 0;
    for ( I = 0; I < 4; I++ )
    {
        g_U9932[I]._fU0 = 0;
    }
    currentIslandUnlocked = 0;
    SET_INT_STAT( 363, currentIslandUnlocked );
    return;
}

void sub_15089()
{
    int I;

    I = 0;
    for ( I = 0; I < 15; I++ )
    {
        sub_15123( ref g_U9999[I]._fU20 );
    }
    for ( I = 0; I < 7; I++ )
    {
        sub_15123( ref g_U10090[I]._fU20 );
    }
    for ( I = 0; I < 59; I++ )
    {
        sub_15123( ref g_U10324[I]._fU32 );
        g_U10133._fU520[I] = 0;
    }
    for ( I = 0; I < 59; I++ )
    {
        sub_15123( ref g_U10856[I]._fU4 );
    }
    sub_15319();
    return;
}

// Remove blip if exists
// uParam0 = blipToRemove
void sub_15123(unknown blipToRemove)
{
    if (NOT (DOES_BLIP_EXIST( (blipToRemove^) )))
    {
        return;
    }
    REMOVE_BLIP( (blipToRemove^) );
    (blipToRemove^) = nil;
    return;
}

void sub_15319()
{
    int I;

    I = 0;
    for ( I = 0; I < 20; I++ )
    {
        g_U10133._fU0[I] = 0;
        g_U10133._fU84[I] = 0;
    }
    for ( I = 0; I < 27; I++ )
    {
        g_U10133._fU168[I] = 0;
    }
    for ( I = 0; I < 59; I++ )
    {
        g_U10133._fU280[I] = 0;
        g_U10133._fU520[I] = 0;
    }
    for ( I = 0; I < 59; I++ )
    {
        g_U10856[I]._fU0 = 0;
    }
    return;
}

void sub_15523()
{
    g_U9893._fU0 = 0;
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU24 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU40 = -1;
    g_U9893._fU44 = -1;
    g_U9893._fU48 = 0;
    sub_770( ref g_U9893._fU68 );
    return;
}

// sub_15669
// Enable safe houses
voidEnableSafehouses(boolean bParam0)
{
    int I;

    if (bParam0)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        ENABLE_SAVE_HOUSE( g_U9943[I]._fU4, 0 );
        g_U9943[I]._fU0 = 0;
    }
    return;
}

void sub_15753()
{
    g_U9914._fU0 = 0;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

void sub_15826()
{
    g_U21 = 0;
    return;
}

void sub_15847()
{
    sub_15856();
    sub_15873();
    sub_16224();
    sub_16528();
    sub_16875();
    sub_17204();
    sub_17607();
    sub_17901();
    return;
}

void sub_15856()
{
    return;
}

void sub_15873()
{
    int iVar2;
    int I;

    iVar2 = 5;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U64792[I]._fU8, -1);
    }
    g_U32871[1]._fU0 = 0;
    sub_15942( 0, 3, 1 );
    sub_15942( 1, 22, 1 );
    sub_15942( 2, 19, 1 );
    sub_15942( 3, 8, 1 );
    sub_15942( 4, -1, 1 );
    g_U32871[1]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U64792[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Procedurals: Not all procedural missions have details set up" );
        }
    }
    return;
}

void sub_15942(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U64792[uParam0]._fU0 = 0;
    g_U64792[uParam0]._fU4 = uParam1;
    ProtectedSet(g_U64792[uParam0]._fU8, iParam2);
    g_U32871[1]._fU0 += iParam2;
    return;
}

void sub_16224()
{
    int iVar2;
    int I;

    iVar2 = 4;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U64808[I]._fU8, -1);
    }
    g_U32871[2]._fU0 = 0;
    sub_16292( 0, 1 );
    sub_16292( 1, 1 );
    sub_16292( 2, 1 );
    sub_16292( 3, 1 );
    g_U32871[2]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U64808[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Games: Not all games have details set up" );
        }
    }
    return;
}

void sub_16292(unknown uParam0, int iParam1)
{
    g_U64808[uParam0]._fU0 = 0;
    ProtectedSet(g_U64808[uParam0]._fU8, iParam1);
    g_U32871[2]._fU0 += iParam1;
    return;
}

void sub_16528()
{
    int iVar2;
    int I;

    iVar2 = 3;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U64821[I]._fU8, -1);
    }
    g_U32871[3]._fU0 = 0;
    sub_16597( 0, 3, 1 );
    sub_16597( 1, 8, 1 );
    sub_16597( 2, 13, 1 );
    g_U32871[3]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U64821[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Friends: Not all friends have details set up" );
        }
    }
    return;
}

void sub_16597(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U64821[uParam0]._fU0 = 0;
    g_U64821[uParam0]._fU4 = uParam1;
    ProtectedSet(g_U64821[uParam0]._fU8, iParam2);
    ProtectedSet(g_U64831[uParam0]._fU0, 0);
    ProtectedSet(g_U64831[uParam0]._fU4, 0);
    g_U32871[3]._fU0 += iParam2;
    return;
}

void sub_16875()
{
    int iVar2;
    int I;

    iVar2 = 3;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U64838[I]._fU8, -1);
    }
    g_U32871[4]._fU0 = 0;
    sub_16944( 0, 3, 1 );
    sub_16944( 1, 8, 1 );
    sub_16944( 2, 13, 1 );
    g_U32871[4]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U64838[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Specials: Not all special missions have details set up" );
        }
    }
    return;
}

void sub_16944(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U64838[uParam0]._fU0 = 0;
    g_U64838[uParam0]._fU4 = uParam1;
    ProtectedSet(g_U64838[uParam0]._fU8, iParam2);
    g_U32871[4]._fU0 += iParam2;
    return;
}

void sub_17204()
{
    int iVar2;
    int I;

    iVar2 = 10;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U64848[I]._fU8, -1);
    }
    g_U32871[5]._fU0 = 0;
    sub_17275( 0, 38, 1 );
    sub_17275( 1, 39, 1 );
    sub_17275( 2, 41, 1 );
    sub_17275( 3, 42, 1 );
    sub_17275( 4, 43, 1 );
    sub_17275( 5, 44, 1 );
    sub_17275( 6, 47, 1 );
    sub_17275( 7, 49, 1 );
    sub_17275( 8, 50, 1 );
    sub_17275( 9, 51, 1 );
    g_U32871[5]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U64848[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_RandomChars: Not all randomchars have details set up" );
        }
    }
    return;
}

void sub_17275(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U64848[uParam0]._fU0 = 0;
    g_U64848[uParam0]._fU4 = uParam1;
    ProtectedSet(g_U64848[uParam0]._fU8, iParam2);
    g_U32871[5]._fU0 += iParam2;
    return;
}

void sub_17607()
{
    int iVar2;
    int I;

    iVar2 = 2;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U64879[I]._fU8, -1);
    }
    g_U32871[6]._fU0 = 0;
    sub_17675( 0, 1 );
    sub_17675( 1, 1 );
    g_U32871[6]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U64879[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Oddjobs: Not all oddjobs have details set up" );
        }
    }
    return;
}

void sub_17675(unknown uParam0, int iParam1)
{
    g_U64879[uParam0]._fU0 = 0;
    ProtectedSet(g_U64879[uParam0]._fU8, iParam1);
    g_U32871[6]._fU0 += iParam1;
    return;
}

void sub_17901()
{
    int iVar2;
    int I;

    iVar2 = 2;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        ProtectedSet(g_U64886[I]._fU8, -1);
    }
    g_U32871[7]._fU0 = 0;
    sub_17969( 0, 1 );
    sub_17969( 1, 1 );
    g_U32871[7]._fU4 = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if (ProtectedGet(g_U64879[I]._fU8) < 0)
        {
            SCRIPT_ASSERT( "Flow_Reset_Game_Completion_Misc: Not all miscs have details set up" );
        }
    }
    return;
}

void sub_17969(unknown uParam0, int iParam1)
{
    g_U64886[uParam0]._fU0 = 0;
    ProtectedSet(g_U64886[uParam0]._fU8, iParam1);
    g_U32871[7]._fU0 += iParam1;
    return;
}

void sub_18198()
{
    int I;

    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        g_U26729[I] = 0;
    }
    g_U26744 = 0;
    return;
}

void sub_18257()
{
    int I;

    I = 0;
    for ( I = 0; I < 20; I++ )
    {
        g_U9788[I]._fU0 = 0;
    }
    return;
}

void sub_18312()
{
    int I;

    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        g_U9731[I]._fU0 = 0;
    }
    return;
}

// sub_18367
void SetRelationshipsForPeds()
{
    SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( CurrentPlayerId(), 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 4, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 5, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 6, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 7, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 8, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 9, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 10, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 11, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 12, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 13, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 14, 0 );
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, 15, 0 );
    return;
}

void sub_18613()
{
    g_U19 = 0;
    return;
}

// sub_18634
void EnableMaxAmmoCap()
{
    ENABLE_MAX_AMMO_CAP( 1 );
    return;
}

void sub_18659()
{
    g_U9202 = 0;
    return;
}

// sub_18682
// Something to do with the bridges, possibly keeping the roads off for the peds and traffic until unlocked?
void ToggleRoads()
{
    int iVar2;

    PRINTSTRING( "********************* Update_Bridge_Control_Nodes: " );
    iVar2 = GET_INT_STAT( 363 );
    PRINTINT( iVar2 );
    PRINTNL();
    if (iVar2 < 2)
    {
        SWITCH_ROADS_OFF( 324.39880000, 1772.79600000, 15.90710000, 326.39880000, 1774.79600000, 17.90710000 );
        SWITCH_ROADS_OFF( 324.72270000, 1790.90300000, 15.89930000, 326.72270000, 1792.90400000, 17.89930000 );
        SWITCH_ROADS_OFF( -250.76720000, 1574.41900000, 18.46400000, -248.76720000, 1576.41900000, 20.46400000 );
        SWITCH_ROADS_OFF( -250.60630000, 1586.18200000, 18.47000000, -248.60630000, 1588.18100000, 20.47000000 );
        SWITCH_ROADS_OFF( 406.47790000, 1019.08100000, 24.99640000, 408.47790000, 1021.08100000, 26.99640000 );
        SWITCH_ROADS_OFF( 405.89090000, 1002.07600000, 24.99710000, 407.89090000, 1004.07600000, 26.99710000 );
        SWITCH_ROADS_OFF( 343.93100000, 1001.88300000, 24.99330000, 345.93100000, 1003.88300000, 26.99330000 );
        SWITCH_ROADS_OFF( 343.67410000, 1018.34300000, 24.99580000, 345.67410000, 1020.34300000, 26.99580000 );
        SWITCH_ROADS_OFF( 186.73660000, 1004.18200000, 12.76060000, 188.73660000, 1006.18200000, 14.76060000 );
        SWITCH_ROADS_OFF( 186.28080000, 1016.20300000, 12.76320000, 188.28080000, 1018.20300000, 14.76320000 );
        SWITCH_ROADS_OFF( 57.14420000, 1022.74300000, 12.75190000, 59.14420000, 1024.74300000, 14.75190000 );
        SWITCH_ROADS_OFF( 62.03510000, 998.48990000, 12.66320000, 64.03510000, 1000.49000000, 14.66320000 );
        SWITCH_ROADS_OFF( 534.53210000, 926.03400000, 18.82550000, 536.53210000, 928.03400000, 20.82550000 );
        SWITCH_ROADS_OFF( 566.84700000, 1052.62400000, 19.21830000, 568.84700000, 1054.62400000, 21.21830000 );
        SWITCH_ROADS_OFF( 563.93890000, 863.30440000, 18.94320000, 565.93890000, 865.30440000, 20.94320000 );
        SWITCH_ROADS_OFF( 536.49740000, 1063.32600000, 18.97530000, 538.49740000, 1065.32600000, 20.97530000 );
        SWITCH_ROADS_OFF( 359.15310000, 1001.01100000, 23.99710000, 363.15310000, 1005.01100000, 27.99710000 );
        SWITCH_ROADS_OFF( 359.10020000, 1017.73100000, 23.99310000, 363.10020000, 1021.73100000, 27.99310000 );
        SWITCH_ROADS_OFF( 922.86870000, 258.44850000, 41.74100000, 924.86870000, 260.44850000, 43.74100000 );
        SWITCH_ROADS_OFF( 933.13320000, 270.85210000, 42.65100000, 935.13320000, 272.85210000, 44.65100000 );
        SWITCH_ROADS_OFF( 58.32130000, 266.27880000, 13.16560000, 60.32130000, 268.27880000, 15.16560000 );
        SWITCH_ROADS_OFF( 58.14260000, 254.36340000, 13.15000000, 60.14260000, 256.36340000, 15.15000000 );
        SWITCH_ROADS_OFF( 918.49530000, 257.87200000, 41.46560000, 920.49530000, 259.87200000, 43.46560000 );
        SWITCH_ROADS_OFF( 1079.19200000, 295.22450000, 29.02650000, 1081.19200000, 297.22450000, 31.02650000 );
        SWITCH_ROADS_OFF( 1040.89700000, 211.86710000, 29.44070000, 1042.89700000, 213.86710000, 31.44070000 );
        SWITCH_ROADS_OFF( 1255.38000000, 276.22140000, 29.03830000, 1257.38000000, 278.22140000, 31.03830000 );
        SWITCH_ROADS_OFF( 1032.00000000, 256.56930000, 45.93090000, 1034.00000000, 258.56930000, 47.93090000 );
        SWITCH_ROADS_OFF( 939.21610000, 271.22920000, 43.16500000, 941.21610000, 273.22920000, 45.16500000 );
        SWITCH_ROADS_OFF( 1101.00000000, 244.00000000, 38.00000000, 1143.00000000, 264.00000000, 50.00000000 );
        SWITCH_ROADS_OFF( 1242.25000000, 283.72160000, 28.73480000, 1246.25000000, 287.72160000, 32.73480000 );
        SWITCH_ROADS_OFF( 1250.77600000, 286.31230000, 28.04450000, 1254.77600000, 290.31230000, 32.04400000 );
        SWITCH_ROADS_OFF( 948.19460000, 263.85660000, 29.14780000, 1243.50900000, 266.23130000, 46.85710000 );
        SWITCH_ROADS_OFF( 939.65500000, 252.25020000, 38.13980000, 1128.34700000, 261.73250000, 45.93600000 );
        SWITCH_ROADS_OFF( 1126.34700000, 259.73250000, 38.13980000, 1130.34700000, 264.73250000, 42.13980000 );
        SWITCH_ROADS_OFF( 1109.42600000, 236.33150000, 39.31710000, 1113.42600000, 240.33150000, 43.31710000 );
        SWITCH_ROADS_OFF( 1098.07900000, 235.76870000, 39.98480000, 1102.07900000, 239.76870000, 43.98480000 );
        SWITCH_ROADS_OFF( 893.42510000, -416.43870000, 35.29700000, 895.42520000, -414.43870000, 37.29700000 );
        SWITCH_ROADS_OFF( 904.72490000, -401.80910000, 35.51120000, 906.72490000, -399.80910000, 37.51120000 );
        SWITCH_ROADS_OFF( 151.26190000, -415.10430000, 12.79700000, 153.26190000, -413.10430000, 14.79700000 );
        SWITCH_ROADS_OFF( 151.23080000, -403.27040000, 12.80040000, 153.23080000, -401.27040000, 14.80040000 );
        SWITCH_ROADS_OFF( 893.43230000, -401.51340000, 35.29680000, 895.43230000, -399.51340000, 37.29680000 );
        SWITCH_ROADS_OFF( 893.53330000, -416.27660000, 35.29410000, 895.53330000, -414.27660000, 37.29410000 );
        SWITCH_ROADS_OFF( 169.19120000, -417.11330000, 12.80190000, 171.19120000, -415.11330000, 14.80190000 );
        SWITCH_ROADS_OFF( 163.61860000, -401.33510000, 12.78670000, 165.61860000, -399.33510000, 14.78670000 );
        SWITCH_ROADS_OFF( 1006.63300000, -371.51090000, 18.03860000, 1008.63300000, -369.51090000, 21.03860000 );
        SWITCH_ROADS_OFF( 1001.91700000, -372.50750000, 18.68050000, 1003.91700000, -370.50750000, 21.68050000 );
        SWITCH_ROADS_OFF( 1148.89400000, -311.50860000, 36.61330000, 1150.89400000, -309.50860000, 39.61330000 );
        SWITCH_ROADS_OFF( 1136.60200000, -318.01870000, 36.82210000, 1138.60200000, -316.01870000, 39.82210000 );
        SWITCH_ROADS_OFF( 864.84380000, -420.03660000, 34.97540000, 872.84380000, -412.03660000, 38.97540000 );
        SWITCH_ROADS_OFF( 1140.64300000, -332.68590000, 35.81390000, 1148.64300000, -324.68590000, 39.81390000 );
        SWITCH_ROADS_OFF( 1038.26800000, -424.72670000, 16.21770000, 1040.26800000, -422.72670000, 18.21770000 );
        SWITCH_ROADS_OFF( 904.73880000, -420.02700000, 35.35090000, 906.73880000, -418.02700000, 37.35090000 );
        SWITCH_ROADS_OFF( 939.65500000, 252.25020000, 38.13980000, 1128.34700000, 261.73250000, 45.93600000 );
    }
    if (iVar2 >= 2)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( 324.39880000, 1772.79600000, 15.90710000, 326.39880000, 1774.79600000, 17.90710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 324.72270000, 1790.90300000, 15.89930000, 326.72270000, 1792.90400000, 17.89930000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -250.76720000, 1574.41900000, 18.46400000, -248.76720000, 1576.41900000, 20.46400000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -250.60630000, 1586.18200000, 18.47000000, -248.60630000, 1588.18100000, 20.47000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 406.47790000, 1019.08100000, 24.99640000, 408.47790000, 1021.08100000, 26.99640000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 405.89090000, 1002.07600000, 24.99710000, 407.89090000, 1004.07600000, 26.99710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 343.93100000, 1001.88300000, 24.99330000, 345.93100000, 1003.88300000, 26.99330000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 343.67410000, 1018.34300000, 24.99580000, 345.67410000, 1020.34300000, 26.99580000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 186.73660000, 1004.18200000, 12.76060000, 188.73660000, 1006.18200000, 14.76060000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 186.28080000, 1016.20300000, 12.76320000, 188.28080000, 1018.20300000, 14.76320000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 57.14420000, 1022.74300000, 12.75190000, 59.14420000, 1024.74300000, 14.75190000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 62.03510000, 998.48990000, 12.66320000, 64.03510000, 1000.49000000, 14.66320000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 534.53210000, 926.03400000, 18.82550000, 536.53210000, 928.03400000, 20.82550000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 566.84700000, 1052.62400000, 19.21830000, 568.84700000, 1054.62400000, 21.21830000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 563.93890000, 863.30440000, 18.94320000, 565.93890000, 865.30440000, 20.94320000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 536.49740000, 1063.32600000, 18.97530000, 538.49740000, 1065.32600000, 20.97530000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 359.15310000, 1001.01100000, 23.99710000, 363.15310000, 1005.01100000, 27.99710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 359.10020000, 1017.73100000, 23.99310000, 363.10020000, 1021.73100000, 27.99310000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 922.86870000, 258.44850000, 41.74100000, 924.86870000, 260.44850000, 43.74100000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 933.13320000, 270.85210000, 42.65100000, 935.13320000, 272.85210000, 44.65100000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 58.32130000, 266.27880000, 13.16560000, 60.32130000, 268.27880000, 15.16560000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 58.14260000, 254.36340000, 13.15000000, 60.14260000, 256.36340000, 15.15000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 918.49530000, 257.87200000, 41.46560000, 920.49530000, 259.87200000, 43.46560000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1079.19200000, 295.22450000, 29.02650000, 1081.19200000, 297.22450000, 31.02650000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1040.89700000, 211.86710000, 29.44070000, 1042.89700000, 213.86710000, 31.44070000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1255.38000000, 276.22140000, 29.03830000, 1257.38000000, 278.22140000, 31.03830000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1032.00000000, 256.56930000, 45.93090000, 1034.00000000, 258.56930000, 47.93090000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 939.21610000, 271.22920000, 43.16500000, 941.21610000, 273.22920000, 45.16500000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1101.00000000, 244.00000000, 38.00000000, 1143.00000000, 264.00000000, 50.00000000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1242.25000000, 283.72160000, 28.73480000, 1246.25000000, 287.72160000, 32.73480000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1250.77600000, 286.31230000, 28.04450000, 1254.77600000, 290.31230000, 32.04400000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 948.19460000, 263.85660000, 29.14780000, 1243.50900000, 266.23130000, 46.85710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 939.65500000, 252.25020000, 38.13980000, 1128.34700000, 261.73250000, 45.93600000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1126.34700000, 259.73250000, 38.13980000, 1130.34700000, 264.73250000, 42.13980000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1109.42600000, 236.33150000, 39.31710000, 1113.42600000, 240.33150000, 43.31710000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1098.07900000, 235.76870000, 39.98480000, 1102.07900000, 239.76870000, 43.98480000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 893.42510000, -416.43870000, 35.29700000, 895.42520000, -414.43870000, 37.29700000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 904.72490000, -401.80910000, 35.51120000, 906.72490000, -399.80910000, 37.51120000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 151.26190000, -415.10430000, 12.79700000, 153.26190000, -413.10430000, 14.79700000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 151.23080000, -403.27040000, 12.80040000, 153.23080000, -401.27040000, 14.80040000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 893.43230000, -401.51340000, 35.29680000, 895.43230000, -399.51340000, 37.29680000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 893.53330000, -416.27660000, 35.29410000, 895.53330000, -414.27660000, 37.29410000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 169.19120000, -417.11330000, 12.80190000, 171.19120000, -415.11330000, 14.80190000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 163.61860000, -401.33510000, 12.78670000, 165.61860000, -399.33510000, 14.78670000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1006.63300000, -371.51090000, 18.03860000, 1008.63300000, -369.51090000, 21.03860000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1001.91700000, -372.50750000, 18.68050000, 1003.91700000, -370.50750000, 21.68050000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1148.89400000, -311.50860000, 36.61330000, 1150.89400000, -309.50860000, 39.61330000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1136.60200000, -318.01870000, 36.82210000, 1138.60200000, -316.01870000, 39.82210000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 864.84380000, -420.03660000, 34.97540000, 872.84380000, -412.03660000, 38.97540000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1140.64300000, -332.68590000, 35.81390000, 1148.64300000, -324.68590000, 39.81390000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 1038.26800000, -424.72670000, 16.21770000, 1040.26800000, -422.72670000, 18.21770000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( 904.73880000, -420.02700000, 35.35090000, 906.73880000, -418.02700000, 37.35090000 );
    }
    if (iVar2 < 3)
    {
        SWITCH_ROADS_OFF( -890.12730000, 1156.24800000, 16.00280000, -888.12730000, 1158.24800000, 18.00280000 );
        SWITCH_ROADS_OFF( -889.60250000, 1167.95800000, 16.00680000, -887.60250000, 1169.95800000, 18.00680000 );
        SWITCH_ROADS_OFF( -665.27510000, 1171.31700000, 17.47660000, -663.27510000, 1173.31700000, 19.47660000 );
        SWITCH_ROADS_OFF( -664.71560000, 1159.96800000, 17.57480000, -662.71560000, 1161.96800000, 19.57480000 );
        SWITCH_ROADS_OFF( -394.85170000, 331.01640000, 12.07200000, -392.85170000, 333.01640000, 14.07200000 );
        SWITCH_ROADS_OFF( -957.74520000, 778.29000000, 2.33160000, -955.74520000, 780.29000000, 4.33160000 );
        SWITCH_ROADS_OFF( -945.69610000, 774.68300000, 1.55730000, -943.69610000, 776.68300000, 3.55730000 );
        SWITCH_ROADS_OFF( -946.17150000, 780.39040000, 1.60940000, -944.17150000, 782.39030000, 3.60940000 );
    }
    if (iVar2 >= 3)
    {
        SWITCH_ROADS_BACK_TO_ORIGINAL( -890.12730000, 1156.24800000, 16.00280000, -888.12730000, 1158.24800000, 18.00280000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -889.60250000, 1167.95800000, 16.00680000, -887.60250000, 1169.95800000, 18.00680000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -665.27510000, 1171.31700000, 17.47660000, -663.27510000, 1173.31700000, 19.47660000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -664.71560000, 1159.96800000, 17.57480000, -662.71560000, 1161.96800000, 19.57480000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -394.85170000, 331.01640000, 12.07200000, -392.85170000, 333.01640000, 14.07200000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -957.74520000, 778.29000000, 2.33160000, -955.74520000, 780.29000000, 4.33160000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -945.69610000, 774.68300000, 1.55730000, -943.69610000, 776.68300000, 3.55730000 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( -946.17150000, 780.39040000, 1.60940000, -944.17150000, 782.39030000, 3.60940000 );
    }
    return;
}

// sub_23405
void Initialise_Help_Message_Conflicts()
{
    int I;

    for ( I = 0; I < 15; I++ )
    {
        g_U64522[I] = 0;
    }
    g_U64522[0] = 1;
    g_U64522[1] = 3;
    g_U64522[2] = 1;
    g_U64522[3] = 3;
    g_U64522[4] = 2;
    g_U64522[5] = 2;
    g_U64522[6] = 2;
    g_U64522[7] = 3;
    g_U64522[8] = 3;
    g_U64522[9] = 2;
    g_U64522[10] = 3;
    g_U64522[11] = 1;
    g_U64522[12] = 3;
    g_U64522[13] = 2;
    g_U64522[14] = 2;
    for ( I = 0; I < 15; I++ )
    {
        if (g_U64522[I] == 0)
        {
            SCRIPT_ASSERT( "Initialise_Help_Message_Conflicts: A help message hasn't been given a priority\n" );
        }
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

void sub_23792()
{
    sub_23801();
    sub_25489();
    sub_25681();
    return;
}

void sub_23801()
{
    sub_23830( 1, 816.17210000, -253.34820000, 14.31870000, 1, 1, 27 );
    sub_23830( 2, -278.66920000, -281.95890000, 14.59250000, 1, 1, 27 );
    sub_23830( 3, 921.33000000, -487.07450000, 14.25800000, 1, 1, 23 );
    sub_23830( 4, 920.71500000, 181.83220000, 32.58950000, 1, 1, 74 );
    sub_23830( 5, 1332.34700000, 115.41550000, 30.72910000, 1, 1, 26 );
    sub_23830( 6, 1329.14300000, -846.51870000, 7.11050000, 1, 1, 28 );
    sub_23830( 7, 896.08830000, -599.60100000, 12.94690000, 1, 1, 69 );
    sub_23830( 8, 959.07030000, -296.13080000, 18.68120000, 1, 1, 28 );
    sub_23830( 9, 988.65240000, -294.64220000, 20.38680000, 1, 1, 27 );
    sub_23830( 10, 413.15630000, 1474.32600000, 10.59750000, 1, 1, 25 );
    sub_23830( 11, 362.82160000, 1504.80200000, 15.97050000, 1, 1, 35 );
    sub_23830( 12, -118.02340000, 1495.18600000, 17.44240000, 1, 1, 34 );
    sub_23830( 13, 778.01490000, 123.60520000, 4.94060000, 1, 1, 32 );
    sub_23830( 14, 860.23820000, -124.14220000, 4.90950000, 1, 1, 32 );
    sub_23830( 15, -419.09420000, 1487.03600000, 17.85990000, 1, 1, 44 );
    sub_23830( 16, 1391.99500000, 613.65070000, 31.12450000, 1, 1, 41 );
    sub_23830( 17, -153.17070000, -899.03500000, 2.99620000, 1, 1, 39 );
    sub_23830( 18, -119.58560000, -1036.18200000, 4.11690000, 1, 1, 33 );
    sub_23830( 19, -406.63070000, 279.57920000, 12.10630000, 1, 1, 39 );
    sub_23830( 20, -581.48000000, -275.62000000, 5.77000000, 1, 1, 39 );
    sub_23830( 21, -64.73371000, 54.27560000, 13.76190000, 1, 1, 92 );
    sub_23830( 22, -64.73371000, 54.27560000, 13.76190000, 1, 1, 33 );
    sub_23830( 23, 1396.30000000, 621.86740000, 32.85120000, 1, 1, 42 );
    sub_23830( 24, -123.63790000, -256.57810000, 11.68540000, 1, 1, 45 );
    sub_23830( 25, 1361.65600000, 614.97130000, 34.14440000, 1, 1, 40 );
    sub_23830( 26, -1144.08900000, -374.65530000, 2.07190000, 1, 1, 40 );
    sub_23830( 27, 1396.30000000, 621.86740000, 32.85120000, 1, 1, 40 );
    sub_23830( 28, -1740.93900000, 246.12580000, 20.24810000, 1, 1, 38 );
    sub_23830( 29, -794.31650000, 905.73470000, 3.21730000, 1, 1, 38 );
    sub_23830( 30, -347.59480000, 1194.24600000, 14.16920000, 1, 1, g_U9386 );
    sub_23830( 31, -539.00100000, 820.66120000, 8.54619900, 1, 1, 31 );
    sub_23830( 32, 487.50430000, -499.13110000, 3.69220000, 1, 1, 31 );
    sub_23830( 33, -1130.45000000, 414.64110000, 3.50000000, 1, 1, 43 );
    sub_23830( 34, -1584.92200000, 26.57150000, 9.04669900, 1, 1, 43 );
    sub_23830( 35, -1397.89300000, 1460.94300000, 24.20460000, 1, 1, 37 );
    sub_23830( 36, -1584.92200000, 26.57150000, 9.04669900, 1, 1, 37 );
    sub_23830( 37, -1398.00500000, 1451.46900000, 24.13850000, 1, 1, 37 );
    sub_23830( 38, 1195.49200000, 196.25190000, 31.57350000, 1, 1, 36 );
    sub_23830( 39, 823.48660000, -557.17110000, 12.89180000, 1, 0, g_U9386 );
    sub_23830( 40, 931.57020000, 177.57920000, 35.72450000, 0, 0, 54 );
    sub_23830( 41, 1401.61100000, 612.52510000, 33.90620000, 0, 0, 54 );
    sub_23830( 42, 66.05620000, 141.17760000, 17.59640000, 0, 0, 54 );
    sub_23830( 43, -1669.71000000, 717.34600000, 32.71000000, 0, 0, g_U9386 );
    sub_23830( 44, 672.39440000, 1723.83000000, 38.89200000, 0, 0, g_U9386 );
    sub_23830( 45, 847.19510000, -253.45920000, 14.50000000, 1, 0, g_U9386 );
    sub_23830( 46, 871.71190000, -253.08280000, 16.35660000, 1, 0, g_U9386 );
    sub_23830( 47, 897.50570000, -254.79840000, 18.07630000, 1, 0, g_U9386 );
    sub_23830( 48, 854.38840000, -251.68860000, 14.74180000, 1, 0, g_U9386 );
    return;
}

void sub_23830(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (iParam0 > 49)
    {
        sub_23915( "Main_Missions: Store_Contact_Point(): Illegal Contact Point ID" );
    }
    if ((NOT (g_U9387[iParam0]._fU0._fU8 == 0.00000000)) || ((NOT (g_U9387[iParam0]._fU0._fU4 == 0.00000000)) || (NOT (g_U9387[iParam0]._fU0._fU0 == 0.00000000))))
    {
        sub_23915( "Main_Missions: Store_Contact_Point(): Contact Point ID already setup" );
    }
    g_U9387[iParam0]._fU0._fU0 = uParam1;
    g_U9387[iParam0]._fU0._fU4 = uParam2;
    g_U9387[iParam0]._fU0._fU8 = uParam3;
    g_U9387[iParam0]._fU12 = uParam6;
    g_U9387[iParam0]._fU16 = uParam4;
    g_U9387[iParam0]._fU20 = uParam5;
    g_U9387[iParam0]._fU24 = 0;
    return;
}

//? Debug assert? Does this even do anything in release?
void sub_23915(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_25489()
{
    int I;

    I = 0;
    for ( I = 0; I < 49; I++ )
    {
        if ((g_U9387[I]._fU0._fU8 == 0.00000000) AND ((g_U9387[I]._fU0._fU4 == 0.00000000) AND (g_U9387[I]._fU0._fU0 == 0.00000000)))
        {
            sub_23915( "Main_Missions: Check_Contact_Points(): Not all Contact Point IDs are set up" );
        }
    }
    return;
}

void sub_25681()
{
    int I;

    I = 0;
    for ( I = 0; I < 23; I++ )
    {
        g_U26415[I] = 6;
    }
    sub_25728( 0, 1 );
    sub_25728( 1, 3 );
    sub_25728( 2, 4 );
    sub_25728( 3, 5 );
    sub_25728( 4, 6 );
    sub_25728( 5, 10 );
    sub_25728( 6, 11 );
    sub_25728( 7, 12 );
    sub_25728( 8, 13 );
    sub_25728( 9, 15 );
    sub_25728( 10, 16 );
    sub_25728( 11, 19 );
    sub_25728( 12, 21 );
    sub_25728( 13, 23 );
    sub_25728( 14, 24 );
    sub_25728( 15, 25 );
    sub_25728( 16, 28 );
    sub_25728( 17, 30 );
    sub_25728( 18, 31 );
    sub_25728( 19, 33 );
    sub_25728( 22, 35 );
    sub_25728( 20, 38 );
    sub_25728( 21, 39 );
    for ( I = 0; I < 23; I++ )
    {
        if (g_U26415[I] == 6)
        {
            sub_23915( "Store_Default_Contact_Blips: default sprite blip not stored" );
        }
    }
    return;
}

void sub_25728(unknown uParam0, unknown uParam1)
{
    g_U26415[uParam0] = g_U9387[uParam1]._fU12;
    return;
}

void sub_26049()
{
    sub_26058();
    sub_26155();
    sub_26748();
    return;
}

void sub_26058()
{
    int I;

    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        g_U9731[I]._fU4 = {0.00000000, 0.00000000, 0.00000000};
        g_U9731[I]._fU16 = {0.00000000, 0.00000000, 0.00000000};
    }
    return;
}

void sub_26155()
{
    sub_26197( 0, 829.35960000, -263.90440000, 16.96100000, 823.00130000, -274.04860000, 14.34110000 );
    sub_26197( 1, 589.82640000, 1398.65100000, 12.38550000, 601.76820000, 1401.18400000, 12.10560000 );
    sub_26197( 2, 118.75630000, 852.77750000, 16.10500000, 112.36280000, 847.86680000, 13.71160000 );
    sub_26197( 3, 1324.43200000, 112.50400000, 33.97500000, 1334.08000000, 117.55510000, 30.88020000 );
    sub_26197( 4, -65.82900000, 1531.08900000, 19.70300000, -78.79060000, 1525.83300000, 17.49610000 );
    sub_26197( 5, 775.50700000, 121.79700000, 7.36300000, 780.74650000, 124.54190000, 4.99570000 );
    sub_26197( 6, 854.87930000, -110.73210000, 7.47800000, 863.24690000, -120.18290000, 4.98400000 );
    sub_26197( 7, 1401.53500000, 619.36000000, 34.72900000, 1392.95300000, 622.45180000, 33.70190000 );
    return;
}

void sub_26197(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    if (iParam0 > 8)
    {
        sub_23915( "Main_Missions: Store_Dropoff_Point(): Illegal Dropoff Point ID" );
    }
    if ((NOT (g_U9731[iParam0]._fU4._fU8 == 0.00000000)) || ((NOT (g_U9731[iParam0]._fU4._fU4 == 0.00000000)) || (NOT (g_U9731[iParam0]._fU4._fU0 == 0.00000000))))
    {
        sub_23915( "Main_Missions: Store_Dropoff_Point(): Dropoff Point ID already setup" );
    }
    g_U9731[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    g_U9731[iParam0]._fU16 = {uParam4, uParam5, uParam6};
    g_U9731[iParam0]._fU0 = 1;
    return;
}

void sub_26748()
{
    int I;

    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if ((g_U9731[I]._fU4._fU8 == 0.00000000) AND ((g_U9731[I]._fU4._fU4 == 0.00000000) AND (g_U9731[I]._fU4._fU0 == 0.00000000)))
        {
            sub_23915( "Main_Missions: Check_Dropoff_Points(): Not all Dropoff Point IDs are set up" );
        }
    }
    return;
}

void sub_26946()
{
    sub_26955();
    sub_27041();
    sub_27891();
    return;
}

void sub_26955()
{
    int I;

    I = 0;
    for ( I = 0; I < 20; I++ )
    {
        g_U9788[I]._fU4 = {0.00000000, 0.00000000, 0.00000000};
        g_U9788[I]._fU16 = 0.00000000;
    }
    return;
}

void sub_27041()
{
    sub_27072( 0, 822.26430000, -270.35130000, 14.59880000, 286.94060000 );
    sub_27072( 1, 1225.98800000, 77.23360000, 36.70140000, 12.57560000 );
    sub_27072( 2, 785.25020000, -548.60760000, 9.47300000, 152.98700000 );
    sub_27072( 3, 596.75570000, 1403.70600000, 9.96530000, 109.26010000 );
    sub_27072( 4, 110.79040000, 849.24680000, 13.70070000, 277.09720000 );
    sub_27072( 5, 1338.30900000, 118.53440000, 30.59620000, 184.68160000 );
    sub_27072( 6, 1039.80100000, 5.00650000, 28.64490000, 189.00930000 );
    sub_27072( 7, 129.03260000, -378.69960000, 13.75130000, 284.39590000 );
    sub_27072( 8, -128.14440000, 1431.05300000, 19.41450000, 195.97850000 );
    sub_27072( 9, -242.07630000, 1332.79700000, 24.15030000, 8.67910000 );
    sub_27072( 10, -273.45030000, 1275.43600000, 23.72660000, 238.74130000 );
    sub_27072( 11, 782.57040000, 117.61730000, 4.99380000, 119.48110000 );
    sub_27072( 12, 1199.75200000, -68.45230000, 30.21690000, 28.22570000 );
    sub_27072( 13, 31.70320000, 738.61920000, 13.66380000, 317.87610000 );
    sub_27072( 14, 20.99460000, -754.52070000, 3.95980000, 219.86410000 );
    sub_27072( 15, 862.74610000, -119.86860000, 4.97150000, 110.14870000 );
    sub_27072( 16, 1414.67900000, 620.71520000, 32.73230000, 104.55220000 );
    sub_27072( 17, 827.84180000, 1408.10600000, 13.22350000, 83.88659000 );
    sub_27072( 18, -221.21550000, 75.78620000, 13.75490000, 286.33360000 );
    sub_27072( 19, -1154.84900000, -367.85250000, 1.70810000, 95.56630000 );
    return;
}

void sub_27072(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (iParam0 > 20)
    {
        sub_23915( "Main_Missions: Store_Friend_Pickup_Point(): Illegal Friend Pickup Point ID" );
    }
    if ((NOT (g_U9788[iParam0]._fU4._fU8 == 0.00000000)) || ((NOT (g_U9788[iParam0]._fU4._fU4 == 0.00000000)) || (NOT (g_U9788[iParam0]._fU4._fU0 == 0.00000000))))
    {
        sub_23915( "Main_Missions: Store_Friend_Pickup_Point(): Friend Pickup Point ID already setup" );
    }
    g_U9788[iParam0]._fU4 = {uParam1, uParam2, uParam3};
    g_U9788[iParam0]._fU16 = uParam4;
    g_U9788[iParam0]._fU0 = 1;
    return;
}

void sub_27891()
{
    int I;

    I = 0;
    for ( I = 0; I < 20; I++ )
    {
        if ((g_U9788[I]._fU4._fU8 == 0.00000000) AND ((g_U9788[I]._fU4._fU4 == 0.00000000) AND (g_U9788[I]._fU4._fU0 == 0.00000000)))
        {
            sub_23915( "Main_Missions: Check_Friend_Pickup_Points(): Not all Friend Pickup Point IDs are set up" );
        }
    }
    return;
}

void sub_28101()
{
    sub_28110();
    sub_28380();
    sub_28447();
    sub_36549();
    sub_36896();
    return;
}

void sub_28110()
{
    int I;

    I = 0;
    for ( I = 0; I < 210; I++ )
    {
        g_U26758[I]._fU0 = -1;
        g_U26758[I]._fU4 = -1;
        g_U26758[I]._fU12 = 10;
        g_U26758[I]._fU16 = 52;
        StrCopy( ref g_U26758[I]._fU20, "", 16 );
        StrCopy( ref g_U26758[I]._fU36, "", 32 );
        sub_28230( ref g_U26758[I]._fU68 );
        sub_28230( ref g_U26758[I]._fU76 );
        StrCopy( ref g_U26758[I]._fU84, "", 16 );
        g_U26758[I]._fU108 = 0;
    }
    g_U32639 = 0;
    g_U32871[0]._fU0 = 0;
    for ( I = 0; I < 28; I++ )
    {
        g_U13334[I]._fU0 = 0;
    }
    return;
}

void sub_28230(int iParam0)
{
    iParam0->_fU0 = -1;
    iParam0->_fU4 = -1;
    return;
}

void sub_28380()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        g_U32640[I]._fU0 = -1;
        g_U32640[I]._fU4 = -1;
    }
    return;
}

void sub_28447()
{
    // This seems to be where all of the game scripts are loaded in at.
    sub_28480( 0, 0, 2, 51, "M_1", 1, 1, 0, "Roman1" );
    sub_28480( 0, 30, 5, 50, "F1BLIPS", 0, 0, 1, "RomanBLIPS" );
    sub_28480( 0, 1, 0, 1, "M_2", 2, 1, 1, "Roman2" );
    sub_28480( 0, 2, 0, 1, "M_3", 3, 1, 1, "Roman3" );
    sub_28480( 0, 3, 6, 50, "F1BLEED", 0, 0, 0, "Roman_BleedOutIntro" );
    sub_28480( 0, 4, 1, 50, "M_4", 4, 1, 1, "Roman4" );
    sub_28480( 0, 5, 0, 1, "M_5", 5, 1, 1, "Roman5" );
    sub_28480( 0, 6, 0, 1, "M_6", 6, 1, 1, "Roman6" );
    sub_28480( 0, 8, 0, 1, "M_7", 7, 1, 1, "Roman7" );
    sub_28480( 0, 7, 3, 50, "M_8", 8, 0, 0, "Roman8p" );
    sub_28480( 0, 9, 0, 1, "M_9", 9, 1, 1, "Roman9" );
    sub_28480( 0, 10, 1, 50, "M_11", 11, 1, 1, "Roman11" );
    sub_28480( 0, 11, 1, 50, "M_12", 12, 1, 1, "Roman12" );
    sub_28480( 0, 12, 1, 50, "M_13", 13, 1, 1, "Roman13" );
    sub_28480( 0, 13, 1, 50, "M_14", 14, 1, 1, "Roman14" );
    sub_28480( 0, 14, 0, 36, "F1CINT", 0, 0, 1, "FinaleINTROCUT" );
    sub_28480( 0, 37, 6, 50, "F1FIN1", 0, 0, 0, "FinaleAorB" );
    sub_28480( 0, 15, 1, 50, "M_91", 91, 51, 1, "Finale1a" );
    sub_28480( 0, 16, 1, 50, "M_92", 92, 61, 1, "Finale1b" );
    sub_28480( 0, 17, 6, 50, "F1FINTM", 0, 0, 0, "FinaleWedTxts" );
    sub_28480( 0, 18, 1, 50, "M_93", 93, 1, 0, "Finale1c" );
    sub_28480( 0, 19, 1, 50, "F1MF1d", 0, 0, 1, "Finale1d" );
    sub_28480( 0, 20, 1, 50, "F1MF2", 50094, 1, 1, "Finale2" );
    sub_28480( 0, 21, 1, 50, "ENDCRED", 0, 0, 1, "endcreditRoll" );
    sub_28480( 0, 22, 4, 50, "F1FDART", 0, 0, 0, "RomanDarts" );
    sub_28480( 0, 23, 4, 50, "F1FBARS", 0, 0, 0, "RomanDrink" );
    sub_28480( 0, 24, 4, 50, "F1FEAT", 0, 0, 0, "RomanEat" );
    sub_28480( 0, 25, 4, 50, "F1FPOOL", 0, 0, 0, "RomanPool" );
    sub_28480( 0, 26, 4, 50, "F1FSHOW", 0, 0, 0, "RomanShow" );
    sub_28480( 0, 27, 4, 50, "F1FSTRP", 0, 0, 0, "RomanStrip" );
    sub_28480( 0, 28, 4, 50, "F1FBOWL", 0, 0, 0, "RomanTenPin" );
    sub_28480( 0, 31, 5, 50, "F1TXT", 0, 0, 0, "txtmsgHelp" );
    sub_28480( 0, 32, 5, 50, "F1NEWS", 0, 0, 0, "endgameNews" );
    sub_28480( 0, 34, 5, 50, "F1DTHAR", 0, 0, 0, "deatharrestHelp" );
    sub_28480( 0, 35, 5, 50, "F1PROFL", 0, 0, 0, "phoneProfileHelp" );
    sub_28480( 0, 33, 5, 50, "F1R3RPT", 0, 0, 0, "Roman3TxtmsgRepeat" );
    sub_28480( 0, 36, 5, 50, "F1R4BLP", 0, 0, 0, "Roman_FakeBlip" );
    sub_28480( 0, 38, 1, 50, "F1DACTS", 0, 0, 0, "Pause" );
    sub_28480( 0, 39, 1, 50, "F1DSPEC", 0, 0, 0, "Pause" );
    sub_28480( 0, 40, 1, 50, "J08_JAM", 0, 0, 0, "Pause" );
    sub_28480( 1, 0, 0, 3, "M_15", 15, 1, 1, "vlad1" );
    sub_28480( 1, 1, 0, 3, "M_16", 16, 1, 1, "vlad2" );
    sub_28480( 1, 2, 0, 3, "M_17", 17, 1, 1, "vlad3" );
    sub_28480( 1, 3, 0, 3, "M_18", 18, 1, 1, "vlad4" );
    sub_28480( 1, 4, 5, 50, "C2PAD", 0, 0, 0, "phonepadHelp" );
    sub_28480( 1, 5, 5, 50, "F1JACK", 0, 0, 0, "CarFoodRunJack" );
    sub_28480( 1, 6, 5, 50, "F1MARK", 0, 0, 0, "RomanMARKER" );
    sub_28480( 1, 7, 5, 50, "F1DIVE", 0, 0, 0, "carDiveHelp" );
    sub_28480( 1, 8, 5, 50, "F1WANT", 0, 0, 0, "wantedHelp" );
    sub_28480( 1, 10, 5, 50, "F1HOTWR", 0, 0, 0, "hotwireHelp" );
    sub_28480( 1, 9, 5, 50, "F1AREST", 0, 0, 0, "arrestEscapeHelp" );
    sub_28480( 1, 11, 5, 50, "F1HBRK", 0, 0, 0, "handbrakeHelp" );
    sub_28480( 2, 0, 6, 50, "G3START", 0, 0, 0, "Michelle_IntroCalls" );
    sub_28480( 2, 1, 0, 4, "M_96", 96, 1, 1, "Michelle1" );
    sub_28480( 2, 2, 5, 50, "G3WAYPT", 0, 0, 0, "waypointHelp" );
    sub_28480( 3, 0, 0, 5, "M_19", 19, 1, 1, "jacob1" );
    sub_28480( 3, 1, 0, 5, "M_20", 20, 1, 1, "jacob2" );
    sub_28480( 3, 2, 3, 50, "M_21", 21, 0, 0, "jacob3p" );
    sub_28480( 3, 3, 4, 50, "F4FDART", 0, 0, 0, "JacobDarts" );
    sub_28480( 3, 4, 4, 50, "F4FBARS", 0, 0, 0, "JacobDrink" );
    sub_28480( 3, 5, 4, 50, "F4FEAT", 0, 0, 0, "JacobEat" );
    sub_28480( 3, 6, 4, 50, "F4FLIFT", 0, 0, 0, "JacobLift" );
    sub_28480( 3, 7, 4, 50, "F4FPOOL", 0, 0, 0, "JacobPool" );
    sub_28480( 3, 8, 4, 50, "F4FSHOW", 0, 0, 0, "JacobShow" );
    sub_28480( 3, 9, 4, 50, "F4FSTRP", 0, 0, 0, "JacobStrip" );
    sub_28480( 3, 11, 1, 50, "F4DACTS", 0, 0, 0, "Pause" );
    sub_28480( 3, 12, 1, 50, "F4DSPEC", 0, 0, 0, "Pause" );
    sub_28480( 3, 13, 1, 50, "J08_LAD", 0, 0, 0, "Pause" );
    sub_28480( 4, 0, 0, 9, "M_22", 22, 1, 1, "faustin1" );
    sub_28480( 4, 1, 0, 6, "M_23", 23, 1, 1, "faustin2" );
    sub_28480( 4, 2, 0, 8, "M_24", 24, 1, 1, "faustin3" );
    sub_28480( 4, 3, 0, 6, "M_25", 25, 1, 1, "faustin4" );
    sub_28480( 4, 4, 0, 6, "M_26", 26, 1, 1, "faustin5" );
    sub_28480( 4, 5, 0, 7, "M_27", 27, 1, 1, "faustin6" );
    sub_28480( 4, 6, 1, 50, "M_28", 28, 1, 1, "faustin7" );
    sub_28480( 5, 0, 0, 10, "M_29", 29, 1, 1, "Manny1" );
    sub_28480( 5, 1, 0, 10, "M_30", 30, 1, 1, "Manny2" );
    sub_28480( 5, 2, 0, 10, "M_31", 31, 1, 1, "Manny3" );
    sub_28480( 6, 0, 0, 11, "M_32", 32, 1, 1, "Elizabeta1" );
    sub_28480( 6, 1, 0, 11, "M_33", 33, 1, 1, "Elizabeta2" );
    sub_28480( 6, 2, 0, 11, "M_34", 34, 1, 1, "Elizabeta3" );
    sub_28480( 6, 3, 0, 11, "M_35", 35, 1, 1, "Elizabeta4" );
    sub_28480( 7, 0, 0, 12, "M_36", 36, 1, 1, "Dwayne1" );
    sub_28480( 7, 1, 0, 12, "M_37", 37, 1, 1, "Dwayne3" );
    sub_28480( 7, 2, 4, 50, "F8FBAR", 0, 0, 0, "DwayneDrink" );
    sub_28480( 7, 3, 4, 50, "F8FEAT", 0, 0, 0, "DwayneEat" );
    sub_28480( 7, 4, 4, 50, "F8FSHOW", 0, 0, 0, "DwayneShow" );
    sub_28480( 7, 5, 4, 50, "F8FSTRP", 0, 0, 0, "DwayneStrip" );
    sub_28480( 7, 6, 4, 50, "F8FBOWL", 0, 0, 0, "DwayneTenPin" );
    sub_28480( 7, 8, 1, 50, "F8DACTS", 0, 0, 0, "Pause" );
    sub_28480( 7, 9, 1, 50, "F8DSPEC", 0, 0, 0, "Pause" );
    sub_28480( 7, 10, 6, 50, "F8_CHER", 0, 0, 0, "DwayneCherise" );
    sub_28480( 7, 11, 5, 50, "F8EMAIL", 0, 0, 0, "DwayneEmail" );
    sub_28480( 8, 0, 0, 14, "M_38", 38, 1, 1, "Brucie1" );
    sub_28480( 8, 1, 0, 13, "M_39", 39, 1, 1, "Brucie2" );
    sub_28480( 8, 2, 0, 13, "M_40", 40, 0, 1, "Brucie3a" );
    sub_28480( 8, 3, 6, 50, "F9MEET", 0, 0, 0, "Brucie3_MeetGuy" );
    sub_28480( 8, 4, 1, 50, "M_41", 41, 1, 1, "Brucie3b" );
    sub_28480( 8, 5, 0, 14, "M_42", 42, 1, 1, "Brucie4" );
    sub_28480( 8, 6, 3, 50, "M_43", 43, 0, 1, "Brucie5p" );
    sub_28480( 8, 7, 4, 50, "F9FBOAT", 0, 0, 0, "BrucieBoat" );
    sub_28480( 8, 8, 4, 50, "F9FHELI", 0, 0, 0, "BrucieCopter" );
    sub_28480( 8, 9, 4, 50, "F9FBARS", 0, 0, 0, "BrucieDrink" );
    sub_28480( 8, 10, 4, 50, "F9FEAT", 0, 0, 0, "BrucieEat" );
    sub_28480( 8, 11, 4, 50, "F9FLIFT", 0, 0, 0, "BrucieLift" );
    sub_28480( 8, 12, 4, 50, "F9FSHOW", 0, 0, 0, "BrucieShow" );
    sub_28480( 8, 13, 4, 50, "F9FSTRP", 0, 0, 0, "BrucieStrip" );
    sub_28480( 8, 14, 4, 50, "F9FBOWL", 0, 0, 0, "BrucieTenPin" );
    sub_28480( 8, 16, 5, 50, "F9ORG", 0, 0, 0, "organiserHelp" );
    sub_28480( 8, 17, 6, 50, "F9STEVE", 0, 0, 0, "car_theft_texts" );
    sub_28480( 8, 18, 1, 50, "F9DACTS", 0, 0, 0, "Pause" );
    sub_28480( 8, 19, 1, 50, "F9DSPEC", 0, 0, 0, "Pause" );
    sub_28480( 8, 20, 1, 50, "F9DTOM", 0, 0, 0, "Pause" );
    sub_28480( 9, 1, 0, 15, "M_44", 44, 1, 1, "Playboy2" );
    sub_28480( 9, 0, 0, 15, "M_45", 45, 1, 1, "Playboy3" );
    sub_28480( 9, 2, 0, 15, "C10C_M4", 0, 0, 1, "PXDFcut" );
    sub_28480( 9, 3, 1, 50, "M_46", 46, 1, 1, "Playboy4" );
    sub_28480( 9, 4, 6, 50, "C10WEAP", 0, 0, 0, "LaterWeapons" );
    sub_28480( 11, 0, 0, 18, "M_47", 47, 1, 1, "Francis1" );
    sub_28480( 11, 1, 0, 19, "M_48", 48, 0, 1, "Francis2a" );
    sub_28480( 11, 2, 6, 50, "C12APP", 0, 0, 0, "Francis2_Appointment" );
    sub_28480( 11, 3, 1, 50, "M_49", 49, 1, 1, "Francis2b" );
    sub_28480( 11, 4, 0, 19, "M_50", 50, 1, 1, "Francis3" );
    sub_28480( 11, 5, 0, 17, "M_51", 51, 1, 1, "Francis4" );
    sub_28480( 11, 6, 0, 20, "M_52", 52, 1, 1, "Francis5" );
    sub_28480( 11, 7, 1, 50, "M_53", 53, 1, 1, "Francis6" );
    sub_28480( 11, 8, 1, 50, "C12DAPP", 0, 0, 0, "Pause" );
    sub_28480( 12, 0, 0, 22, "M_54", 54, 1, 1, "CIA1" );
    sub_28480( 12, 1, 0, 21, "M_55", 55, 1, 1, "CIA2" );
    sub_28480( 12, 2, 0, 21, "M_56", 56, 1, 1, "CIA3" );
    sub_28480( 12, 3, 1, 50, "M_57", 57, 1, 1, "CIA4" );
    sub_28480( 12, 4, 6, 50, "C13MAX", 0, 0, 0, "ciaWANTED" );
    sub_28480( 13, 0, 0, 23, "M_58", 58, 1, 1, "Packie1" );
    sub_28480( 13, 1, 0, 23, "M_59", 59, 1, 1, "Packie2" );
    sub_28480( 13, 2, 6, 50, "F15ASUT", 0, 0, 0, "PackieSUIT" );
    sub_28480( 13, 3, 1, 50, "M_60", 60, 1, 1, "Packie3" );
    sub_28480( 13, 4, 4, 50, "F15FDRT", 0, 0, 0, "PackieDarts" );
    sub_28480( 13, 5, 4, 50, "F15FBAR", 0, 0, 0, "PackieDrink" );
    sub_28480( 13, 6, 4, 50, "F15FPOL", 0, 0, 0, "PackiePool" );
    sub_28480( 13, 7, 4, 50, "F15SHOW", 0, 0, 0, "PackieShow" );
    sub_28480( 13, 8, 4, 50, "F15FSTP", 0, 0, 0, "PackieStrip" );
    sub_28480( 13, 9, 4, 50, "F15FBWL", 0, 0, 0, "PackieTenPin" );
    sub_28480( 13, 11, 1, 50, "F15DACT", 0, 0, 0, "Pause" );
    sub_28480( 13, 12, 1, 50, "F15DSPC", 0, 0, 0, "Pause" );
    sub_28480( 13, 13, 1, 50, "J08_HRB", 0, 0, 0, "Pause" );
    sub_28480( 14, 0, 0, 24, "M_61", 61, 1, 1, "Ray1" );
    sub_28480( 14, 1, 0, 24, "M_62", 62, 1, 1, "Ray2" );
    sub_28480( 14, 2, 0, 24, "M_63", 63, 1, 1, "Ray3" );
    sub_28480( 14, 3, 0, 24, "M_64", 64, 1, 1, "Ray4" );
    sub_28480( 14, 4, 0, 24, "M_65", 65, 1, 1, "Ray5" );
    sub_28480( 14, 5, 0, 24, "M_66", 66, 1, 1, "Ray6" );
    sub_28480( 15, 0, 0, 25, "M_67", 67, 1, 1, "Gerry1" );
    sub_28480( 15, 1, 0, 27, "M_68", 68, 1, 1, "Gerry2" );
    sub_28480( 15, 2, 0, 26, "M_69", 69, 0, 1, "Gerry3a" );
    sub_28480( 15, 3, 6, 50, "C18FONE", 0, 0, 0, "Gerry3_PhoneGirl" );
    sub_28480( 15, 4, 1, 50, "M_70", 70, 1, 1, "Gerry3b" );
    sub_28480( 15, 5, 6, 50, "C18A1", 0, 0, 1, "Gerry3c" );
    sub_28480( 15, 6, 0, 26, "M_71", 71, 1, 1, "Gerry4" );
    sub_28480( 15, 7, 0, 26, "M_72", 72, 1, 1, "Gerry5" );
    sub_28480( 15, 8, 1, 50, "C18DKID", 0, 0, 0, "Pause" );
    sub_28480( 16, 0, 0, 28, "M_73", 73, 1, 1, "Derrick1" );
    sub_28480( 16, 1, 0, 29, "M_74", 74, 1, 1, "Derrick2" );
    sub_28480( 16, 2, 0, 28, "M_75", 75, 1, 1, "Derrick3" );
    sub_34714( 18, 0, 0, 31, "M_76", 76, 1, 1, "Bernie1", 4, 0, 22, 0, "H_C21M_1" );
    sub_28480( 18, 1, 0, 31, "M_77", 77, 1, 1, "Bernie2" );
    sub_34714( 18, 2, 0, 32, "M_78", 78, 1, 1, "Bernie3", 5, 45, 18, 45, "H_C21M_3" );
    sub_28480( 18, 3, 6, 50, "C21CAR", 0, 0, 0, "BernieCAR" );
    sub_28480( 19, 0, 0, 34, "M_79", 79, 1, 1, "Bell2" );
    sub_28480( 19, 1, 3, 50, "M_80", 80, 0, 0, "Bell3p" );
    sub_28480( 19, 2, 0, 33, "M_81", 81, 1, 1, "Bell5" );
    sub_28480( 19, 3, 0, 33, "M_82", 82, 1, 1, "Bell6" );
    sub_28480( 19, 4, 0, 33, "M_83", 83, 1, 1, "Bell7" );
    sub_28480( 19, 5, 1, 50, "J08_ALD", 0, 0, 0, "Pause" );
    sub_28480( 20, 0, 6, 50, "C24ASUT", 0, 0, 0, "JimmySUIT" );
    sub_28480( 20, 1, 1, 50, "M_84", 84, 1, 1, "Jimmy1" );
    sub_28480( 20, 2, 0, 37, "M_85", 85, 1, 1, "Jimmy2" );
    sub_28480( 20, 3, 0, 35, "M_86", 86, 1, 1, "Jimmy3" );
    sub_28480( 20, 4, 0, 35, "C24C_M4", 0, 0, 1, "Jimmy4a" );
    sub_28480( 20, 5, 1, 50, "M_87", 87, 1, 1, "Jimmy4" );
    sub_28480( 21, 0, 0, 38, "M_88", 88, 1, 1, "gambetti1" );
    sub_28480( 21, 1, 0, 38, "M_89", 89, 1, 1, "gambetti2" );
    sub_28480( 21, 2, 0, 38, "M_90", 90, 1, 1, "gambetti3" );
    sub_28480( 22, 0, 3, 50, "M_10", 10, 0, 0, "Roman10p" );
    sub_28480( 24, 0, 1, 50, "DARTS", 0, 0, 0, "darts_trigger" );
    sub_28480( 24, 1, 1, 50, "RACES_B", 0, 0, 0, "Brucie5m" );
    sub_28480( 25, 0, 1, 50, "PUZZLE", 0, 0, 0, "puzzle" );
    sub_28480( 26, 0, 6, 50, "F1STAXI", 0, 0, 0, "roman_taxi" );
    sub_28480( 26, 1, 6, 50, "F4SGUNS", 0, 0, 0, "jacob_gun_car" );
    sub_28480( 26, 2, 6, 50, "F8SBAK", 0, 0, 0, "dwayne_backup" );
    sub_28480( 26, 3, 6, 50, "F9SHELI", 0, 0, 0, "Brucie_Heli" );
    sub_28480( 26, 4, 6, 50, "F15SBMB", 0, 0, 0, "Packie_Bomb" );
    sub_28480( 26, 5, 6, 50, "BUS1", 0, 0, 0, "BusRoute1" );
    sub_28480( 26, 6, 6, 50, "MPTUT", 0, 0, 0, "MultiTutorial" );
    sub_28480( 26, 7, 6, 50, "TRAIN", 0, 0, 0, "trainHelper" );
    sub_28480( 27, 0, 1, 50, "PHYTEST", 0, 0, 0, "physicsTestBed" );
    sub_28480( 27, 1, 1, 50, "D06_LIP", 0, 0, 0, "LipSyncDemo" );
    sub_28480( 27, 2, 1, 50, "D06_BLN", 0, 0, 0, "BlendDemo" );
    sub_28480( 27, 3, 1, 50, "DIRECT", 0, 0, 0, "direction_test" );
    sub_28480( 27, 4, 1, 50, "NATURAL", 0, 0, 0, "NatMotion" );
    sub_28480( 27, 5, 1, 50, "DEMO_RW", 0, 0, 0, "Trailer" );
    sub_28480( 27, 6, 1, 50, "TRAILNM", 0, 0, 0, "TrailerNM" );
    sub_28480( 27, 7, 1, 50, "HELINM", 0, 0, 0, "HeliNM" );
    sub_28480( 27, 8, 1, 50, "PETROL", 0, 0, 0, "TrailerExp" );
    sub_28480( 27, 9, 1, 50, "HEDLOOK", 0, 0, 0, "TrailerHeadLook" );
    sub_28480( 27, 10, 1, 50, "MAGDEMO", 0, 0, 0, "Mag" );
    sub_28480( 27, 11, 1, 50, "MELEE", 0, 0, 0, "Melee_Test" );
    sub_28480( 27, 12, 1, 50, "PS3TEST", 0, 0, 0, "ps3_test" );
    sub_28480( 27, 13, 1, 50, "CAR_AI", 0, 0, 0, "carAI" );
    return;
}

//-
// TODO Figure out what this is doing.
void sub_28480(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;

    uVar11 = sub_28491( uParam0 );
    sub_28704( uVar11, uParam0, uParam1, uParam2, uParam3, uParam4, uParam8, uParam5, uParam6, uParam7 );
    sub_29128();
    return;
}

void sub_28491(int iParam0)
{
    if (g_U32639 >= 210)
    {
        sub_23915( "Main_Missions: Begin_Trigger(): Need to increase MAX_MISSION_TRIGGERS" );
    }
    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_23915( "Main_Missions: Begin_Trigger(): StrandID out of range" );
    }
    return g_U32639;
}

void sub_28704(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, boolean bParam9)
{
    g_U26758[uParam0]._fU0 = uParam1;
    g_U26758[uParam0]._fU4 = uParam2;
    g_U26758[uParam0]._fU12 = iParam3;
    g_U26758[uParam0]._fU16 = uParam4;
    StrCopy( ref g_U26758[uParam0]._fU20, uParam5, 16 );
    StrCopy( ref g_U26758[uParam0]._fU36, uParam6, 32 );
    if ((iParam3 == 7) || ((iParam3 == 6) || ((iParam3 == 5) || ((iParam3 == 4) || ((iParam3 == 3) || ((iParam3 == 2) || (iParam3 == 1)))))))
    {
        g_U26758[uParam0]._fU16 = 50;
    }
    if (iParam3 == 2)
    {
        g_U26758[uParam0]._fU16 = 51;
    }
    if (bParam9)
    {
        SET_BIT( ref g_U26758[uParam0]._fU108, 2 );
    }
    g_U26758[uParam0]._fU8 = uParam7;
    g_U26758[uParam0]._fU100 = 0;
    sub_28933( uParam0, uParam1, uParam8 );
    return;
}

void sub_28933(int iParam0, int iParam1, int iParam2)
{
    int iVar5;
    boolean bVar6;

    if (iParam2 == 0)
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
    iVar5 = iParam2;
    bVar6 = true;
    if (iParam2 > 60)
    {
        iVar5 = iParam2 - 60;
        bVar6 = false;
    }
    else if (iParam2 > 50)
    {
        iVar5 = iParam2 - 50;
        bVar6 = true;
    }
    g_U26758[iParam0]._fU104 = iVar5;
    if (NOT bVar6)
    {
        return;
    }
    g_U32871[0]._fU0 += iVar5;
    g_U13334[iParam1]._fU0 += iVar5;
    return;
}

void sub_29128()
{
    g_U32639++;
    return;
}

void sub_34714(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13)
{
    unknown uVar16;

    if (NOT (iParam2 == 0))
    {
        sub_23915( "main_missions: Add_TimeTrig(): Timed Mission Triggers should be of time 'START_POINT'" );
        return;
    }
    uVar16 = sub_28491( uParam0 );
    sub_28704( uVar16, uParam0, uParam1, iParam2, uParam3, uParam4, uParam8, uParam5, uParam6, uParam7 );
    SET_BIT( ref g_U26758[uVar16]._fU108, 1 );
    g_U26758[uVar16]._fU68._fU0 = uParam9;
    g_U26758[uVar16]._fU68._fU4 = uParam10;
    g_U26758[uVar16]._fU76._fU0 = uParam11;
    g_U26758[uVar16]._fU76._fU4 = uParam12;
    StrCopy( ref g_U26758[uVar16]._fU84, uParam13, 16 );
    sub_29128();
    return;
}

void sub_36549()
{
    int iVar2;
    int iVar3;
    int I;

    iVar2 = -1;
    iVar3 = 0;
    I = 0;
    for ( I = 0; I < g_U32639; I++ )
    {
        if (NOT (g_U26758[I]._fU0 == iVar2))
        {
            if (NOT (iVar2 == -1))
            {
                g_U32640[iVar2]._fU4 = iVar3;
            }
            iVar2 = g_U26758[I]._fU0;
            if ((iVar2 >= 28) || (iVar2 < 0))
            {
                sub_23915( "Main_Missions: Generate_Triggers_Index(): Illegal Strand ID" );
            }
            if (NOT (g_U32640[iVar2]._fU0 == -1))
            {
                sub_23915( "Main_Missions: Generate_Triggers_Index(): More missions being recorded in an already recorded strand" );
            }
            g_U32640[iVar2]._fU0 = I;
        }
        iVar3 = I;
    }
    g_U32640[iVar2]._fU4 = iVar3;
    return;
}

void sub_36896()
{
    int iVar2;
    int iVar3;
    int J;
    int[48] iVar5;
    int I;
    int iVar55;

    iVar2 = 0;
    iVar3 = 0;
    J = 0;
    array(ref iVar5, 48);
    I = 0;
    iVar55 = 0;
    for ( iVar55 = 0; iVar55 < 28; iVar55++ )
    {
        iVar2 = g_U32640[iVar55]._fU0;
        if (NOT (iVar2 == -1))
        {
            iVar3 = g_U32640[iVar55]._fU4;
            if (((iVar3 - iVar2) + 1) >= 48)
            {
                sub_23915( "Main_Missions: Need to increase MAX_MISSIONS_IN_STRAND" );
            }
            I = 0;
            for ( I = 0; I < 48; I++ )
            {
                iVar5[I] = 0;
            }
            for ( J = iVar2; J <= iVar3; J++ )
            {
                if (iVar5[g_U26758[J]._fU4])
                {
                    while (true)
                    {
                        PRINTSTRING( "STRAND: " );
                        PRINTINT( g_U26758[J]._fU0 );
                        PRINTSTRING( "    MISSION: " );
                        PRINTINT( g_U26758[J]._fU4 );
                        PRINTNL();
                        PRINTSTRING( "Main_Missions: Duplicate Strand And Mission\n" );
                        PRINTSTRING( "*** SCRIPT HALTED ***\n" );
                        WAIT( 1000 );
                    }
                }
                iVar5[g_U26758[J]._fU4] = 1;
            }
        }
    }
    return;
}

void sub_37408()
{
    sub_37417();
    sub_37628( 0, 2046537925, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_37628( 1, 148777611, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_37628( 2, -350085182, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_37628( 3, -1627000575, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_37628( 4, -1900572838, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    sub_37628( 5, 1127131465, "policeTest", "R3H_COP", "R3_COP", 0, 1, 1 );
    return;
}

void sub_37417()
{
    int I;

    I = 0;
    for ( I = 0; I < 6; I++ )
    {
        CLEAR_TEXT_LABEL( ref g_U32697[I]._fU4 );
        CLEAR_TEXT_LABEL( ref g_U32697[I]._fU20 );
        g_U32697[I]._fU0 = -1;
        g_U32697[I]._fU36 = 0;
        StrCopy( ref g_U32697[I]._fU40, "", 32 );
        g_U32697[I]._fU72 = 0;
        g_U32697[I]._fU76 = 0;
        g_U32697[I]._fU80 = 0;
    }
    g_U32824 = 0;
    return;
}

void sub_37628(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;

    uVar10 = sub_37639( uParam0 );
    StrCopy( ref g_U32697[uVar10]._fU4, uParam3, 16 );
    StrCopy( ref g_U32697[uVar10]._fU20, uParam4, 16 );
    g_U32697[uVar10]._fU0 = uParam0;
    g_U32697[uVar10]._fU36 = uParam1;
    StrCopy( ref g_U32697[uVar10]._fU40, uParam2, 32 );
    g_U32697[uVar10]._fU72 = uParam5;
    g_U32697[uVar10]._fU76 = uParam6;
    g_U32697[uVar10]._fU80 = uParam7;
    sub_38042();
    return;
}

void sub_37639(int iParam0)
{
    int I;

    if (g_U32824 >= 6)
    {
        sub_23915( "Main_Missions: Begin_R3_Trigger(): Need to increase MAX_R3_MISSION_TRIGGERS" );
    }
    I = 0;
    for ( I = 0; I < g_U32824; I++ )
    {
        if (iParam0 == g_U32697[I]._fU0)
        {
            PRINTSTRING( "R3 MissionID: " );
            PRINTINT( iParam0 );
            PRINTNL();
            sub_23915( "Main_Missions: Begin_R3_Trigger(): Duplicate R3 Mission" );
        }
    }
    return g_U32824;
}

void sub_38042()
{
    g_U32824++;
    return;
}

void sub_38321()
{
    sub_38330();
    sub_38465();
    sub_39129();
    return;
}

void sub_38330()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        g_U9943[I]._fU8 = {0.00000000, 0.00000000, 0.00000000};
        g_U9943[I]._fU20 = {0.00000000, 0.00000000, 0.00000000};
        g_U9943[I]._fU32 = nil;
        g_U9943[I]._fU36 = g_U9386;
    }
    sub_5048();
    return;
}

void sub_38465()
{
    // This looks like safe house locations. 
    // TODO Can I load into these in GTA Connected?
    sub_38527( 0, 898.76680000, -504.96840000, 13.98010000, 892.43790000, -499.80470000, 18.40230000, 187.95490000, "shitholerm", 0, 29 );
    sub_38527( 1, 594.86690000, 1400.90400000, 9.95780000, 601.44580000, 1409.83600000, 16.53330000, 220.32190000, "bronxsaveroom01", 1, 29 );
    sub_38527( 2, 112.72460000, 847.03180000, 13.71100000, 99.21670000, 851.68190000, 44.04590000, 89.84290000, "loftrm1", 2, 29 );
    sub_38527( 3, -963.10500000, 896.90190000, 12.67660000, -969.67790000, 887.09020000, 18.00120000, 189.30490000, "JersSaveApt", 3, 29 );
    sub_38527( 4, -419.09420000, 1487.03600000, 17.85990000, -426.00580000, 1463.95000000, 37.96640000, 13.24910000, "PlayXroom", 2, 29 );
    return;
}

void sub_38527(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    unknown uVar13;

    if (iParam0 > 5)
    {
        sub_23915( "Main_Missions: Store_Save_House(): Illegal Save House ID" );
    }
    if ((NOT (g_U9943[iParam0]._fU8._fU8 == 0.00000000)) || ((NOT (g_U9943[iParam0]._fU8._fU4 == 0.00000000)) || (NOT (g_U9943[iParam0]._fU8._fU0 == 0.00000000))))
    {
        sub_23915( "Main_Missions: Store_Save_House(): Save House ID already setup" );
    }
    g_U9943[iParam0]._fU8 = {uParam1};
    g_U9943[iParam0]._fU20 = {uParam4};
    g_U9943[iParam0]._fU36 = uParam10;
    g_U9943[iParam0]._fU40 = uParam9;
    uVar13 = uParam9;
    g_U9943[iParam0]._fU4 = REGISTER_SAVE_HOUSE( uParam4._fU0, uParam4._fU4, uParam4._fU8, uParam7, uParam8, uVar13 );
    ENABLE_SAVE_HOUSE( g_U9943[iParam0]._fU4, 1 );
    g_U9943[iParam0]._fU0 = 1;
    return;
}

void sub_39129()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if ((g_U9943[I]._fU8._fU8 == 0.00000000) AND ((g_U9943[I]._fU8._fU4 == 0.00000000) AND (g_U9943[I]._fU8._fU0 == 0.00000000)))
        {
            sub_23915( "Main_Missions: Check_Save_Houses(): Not all Save House IDs are set up" );
        }
    }
    return;
}

void sub_39321()
{
    sub_39330();
    sub_39511();
    sub_41488();
    return;
}

void sub_39330()
{
    int I;

    I = 0;
    for ( I = 0; I < 59; I++ )
    {
        g_U10324[I]._fU0 = {0.00000000, 0.00000000, 0.00000000};
        g_U10324[I]._fU12 = 21;
        g_U10324[I]._fU16 = 28;
        g_U10324[I]._fU20 = g_U9386;
        g_U10324[I]._fU24 = 2;
        g_U10324[I]._fU28 = 5;
        g_U10324[I]._fU32 = nil;
        g_U10856[I]._fU0 = 0;
        g_U10856[I]._fU4 = nil;
    }
    sub_15319();
    return;
}

// TODO What are these, possibly stunt jumps?
void sub_39511()
{
    sub_39541( 0, 1190.67200000, 379.45310000, 23.00740000, 8, 11, 22, 2, 0 );
    sub_39541( 1, 1647.39700000, 236.60750000, 23.59730000, 8, 16, 21, 2, 0 );
    sub_39541( 2, 880.93240000, -480.30750000, 14.01390000, 8, 13, 57, 2, 0 );
    sub_39541( 3, 925.40010000, -490.20910000, 14.33960000, 5, 8, 47, 2, 0 );
    sub_39541( 4, 1150.79500000, 734.42770000, 34.39900000, 5, 6, 47, 2, 0 );
    sub_39541( 5, 977.02670000, -168.98600000, 23.02960000, 12, 19, 24, 2, 0 );
    sub_39541( 6, 900.15060000, -443.31660000, 14.80430000, 3, 2, 50, 2, 0 );
    sub_39541( 7, 1054.38200000, 86.56970000, 32.39870000, 19, 26, 59, 1, 0 );
    sub_39541( 8, 1198.96600000, -680.09220000, 15.43980000, 1, 0, 49, 2, 0 );
    sub_39541( 9, 1478.30500000, 54.44050000, 23.93220000, 14, 20, 46, 2, 0 );
    sub_39541( 10, 1152.67800000, 733.92750000, 34.39900000, 4, 5, 52, 2, 0 );
    sub_39541( 11, 957.92380000, -294.83490000, 18.58870000, 15, 22, 71, 2, 0 );
    sub_39541( 12, 1058.17900000, -287.15700000, 20.33040000, 16, 23, 75, 2, 0 );
    sub_39541( 13, 1513.46000000, 115.69420000, 22.25510000, 2, 1, 91, 2, 0 );
    sub_39541( 14, 1837.42600000, 360.37300000, 21.55200000, 2, 1, 91, 2, 0 );
    sub_39541( 15, 945.51960000, 104.60200000, 33.03960000, 7, 10, 61, 3, 0 );
    sub_39541( 16, 2366.86700000, 179.41770000, 4.80770000, 7, 10, 61, 3, 0 );
    sub_39541( 17, 441.43150000, 1517.63300000, 15.32880000, 8, 16, 21, 2, 1 );
    sub_39541( 18, 1099.12100000, 1596.28800000, 15.71550000, 8, 16, 21, 2, 1 );
    sub_39541( 19, 1130.43400000, 1723.71900000, 9.48690000, 7, 10, 61, 3, 1 );
    sub_39541( 20, 1202.20700000, 1709.83700000, 15.65890000, 17, 24, 66, 2, 1 );
    sub_39541( 21, 732.76150000, 1381.56700000, 13.24680000, 9, 17, 79, 2, 1 );
    sub_39541( 22, -139.73910000, 71.76300000, 13.75580000, 8, 11, 22, 2, 2 );
    sub_39541( 23, -617.71620000, 149.43770000, 3.94430000, 8, 16, 21, 2, 2 );
    sub_39541( 24, -174.20310000, 276.77800000, 13.81190000, 8, 16, 21, 2, 2 );
    sub_39541( 25, -429.96930000, 1183.50600000, 12.05250000, 8, 16, 21, 2, 2 );
    sub_39541( 26, -139.82790000, -277.88460000, 12.37300000, 8, 13, 57, 2, 2 );
    sub_39541( 27, -393.07460000, 245.13730000, 13.38720000, 8, 13, 57, 2, 2 );
    sub_39541( 28, 115.58140000, 640.82930000, 13.71190000, 8, 13, 57, 2, 2 );
    sub_39541( 29, 29.76350000, 980.44730000, 13.66180000, 8, 15, 57, 2, 2 );
    sub_39541( 30, -443.23690000, 458.09870000, 8.83620000, 5, 6, 47, 2, 2 );
    sub_39541( 31, 113.49810000, 554.75180000, 13.60160000, 5, 7, 47, 2, 2 );
    sub_39541( 32, -477.82480000, 1409.69200000, 15.47250000, 5, 9, 51, 2, 2 );
    sub_39541( 33, 366.79550000, -731.30110000, 3.69170000, 10, 18, 56, 2, 2 );
    sub_39541( 34, -341.48280000, 1392.46200000, 11.93880000, 12, 19, 24, 2, 2 );
    sub_39541( 35, 13.96100000, -657.06470000, 13.76190000, 3, 4, 50, 2, 2 );
    sub_39541( 36, 22.14700000, 811.58510000, 13.71190000, 3, 4, 50, 2, 2 );
    sub_39541( 37, -280.66780000, 1352.73500000, 24.62000000, 3, 3, 50, 2, 2 );
    sub_39541( 38, 65.94250000, -342.24410000, 13.76250000, 19, 26, 59, 1, 2 );
    sub_39541( 39, -571.26780000, 77.83100000, 3.81210000, 1, 0, 49, 2, 2 );
    sub_39541( 40, -348.70010000, 181.23150000, 13.76220000, 15, 21, 70, 2, 2 );
    sub_39541( 41, -307.26430000, 1549.11400000, 19.26490000, 16, 23, 75, 2, 2 );
    sub_39541( 42, -513.84290000, 376.23450000, 5.66430000, 16, 23, 75, 2, 2 );
    sub_39541( 43, -499.76900000, 486.28510000, 5.57620000, 2, 1, 91, 2, 2 );
    sub_39541( 44, -272.29180000, 1530.10400000, 19.26340000, 7, 10, 61, 3, 2 );
    sub_39541( 45, -378.19860000, 221.62780000, 13.68570000, 7, 10, 61, 3, 2 );
    sub_39541( 46, 289.40550000, -358.02360000, 3.80870000, 7, 10, 61, 3, 2 );
    sub_39541( 47, -1005.83300000, 1610.65200000, 23.01240000, 8, 16, 21, 2, 3 );
    sub_39541( 48, -1245.33600000, 1070.77600000, 18.77900000, 8, 14, 57, 2, 3 );
    sub_39541( 49, -1157.17400000, 1399.35800000, 23.45010000, 8, 13, 57, 2, 3 );
    sub_39541( 50, -1337.63000000, 307.87090000, 12.32560000, 19, 26, 59, 1, 3 );
    sub_39541( 51, -1147.97000000, 1176.36600000, 15.83930000, 16, 23, 75, 2, 3 );
    sub_39541( 52, -1300.05900000, 274.11460000, 9.79920000, 16, 23, 75, 2, 3 );
    sub_39541( 53, -1303.23800000, 1741.21400000, 26.82040000, 2, 1, 91, 2, 3 );
    sub_39541( 54, -1376.09100000, 38.03660000, 6.14100000, 2, 1, 91, 2, 3 );
    sub_39541( 55, -1572.53300000, 553.76720000, 24.44300000, 7, 10, 61, 3, 3 );
    sub_39541( 56, -2132.83400000, 165.60890000, 11.04480000, 7, 10, 61, 3, 3 );
    sub_39541( 57, -1582.84100000, 26.49770000, 9.04700000, 17, 25, 66, 2, 3 );
    sub_39541( 58, -1584.45600000, 465.82890000, 24.31230000, 12, 19, 24, 2, 3 );
    return;
}

void sub_39541(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if ((NOT (g_U10324[uParam0]._fU0._fU8 == 0.00000000)) || ((NOT (g_U10324[uParam0]._fU0._fU4 == 0.00000000)) || (NOT (g_U10324[uParam0]._fU0._fU0 == 0.00000000))))
    {
        sub_23915( "main_missions: Add_Map_Blip: Map Blip already setup" );
    }
    g_U10324[uParam0]._fU0 = {uParam1, uParam2, uParam3};
    g_U10324[uParam0]._fU12 = uParam4;
    g_U10324[uParam0]._fU16 = uParam5;
    g_U10324[uParam0]._fU20 = uParam6;
    g_U10324[uParam0]._fU24 = uParam7;
    g_U10324[uParam0]._fU28 = uParam8;
    g_U10324[uParam0]._fU32 = nil;
    return;
}

void sub_41488()
{
    int I;

    I = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((g_U10324[I]._fU0._fU8 == 0.00000000) AND ((g_U10324[I]._fU0._fU4 == 0.00000000) AND (g_U10324[I]._fU0._fU0 == 0.00000000)))
        {
            sub_23915( "Main_Missions: Check_Map_Blips(): Not all Map Blip IDs are set up" );
        }
    }
    return;
}

void sub_41751()
{
    sub_15319();
    sub_41765();
    return;
}

void sub_41765()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_41793( 13 );
        if ((g_U9932[g_U9999[I]._fU0]._fU0) AND (sub_41838( 13, iVar3 )))
        {
            sub_41939( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_15123( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_41793( 11 );
        if ((g_U9932[g_U10090[I]._fU0]._fU0) AND (sub_41838( 11, iVar3 )))
        {
            sub_41939( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_15123( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_42271( I );
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_41838( g_U10324[I]._fU12, iVar3 )))
        {
            sub_41939( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_42579( I );
        }
        else
        {
            sub_15123( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_42808();
    return;
}

int sub_41793(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_41838(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        return 1;
    }
    if (g_U10133._fU0[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_41939(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        if ((iParam4 == 1) || ((iParam4 == 4) || ((iParam4 == 3) || (iParam4 == 2))))
        {
            ADD_BLIP_FOR_COORD( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        else
        {
            ADD_BLIP_FOR_CONTACT( uParam1._fU0, uParam1._fU4, uParam1._fU8, uParam0 );
        }
        CHANGE_BLIP_SPRITE( (uParam0^), uParam5 );
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U4 );
        if (iParam4 == 3)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 3 );
        }
        if (iParam4 == 4)
        {
            CHANGE_BLIP_DISPLAY( (uParam0^), 5 );
        }
    }
    return;
}

int sub_42271(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_42313( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_41793( g_U10324[uParam0]._fU12 ))
    {
        return 1;
    }
    if (NOT g_U10978)
    {
        uVar3 = g_U10324[uParam0]._fU12;
        if (g_U10133._fU0[uVar3])
        {
            if (g_U10324[uParam0]._fU24 == 1)
            {
                if (g_U9937 == g_U10324[uParam0]._fU28)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_42313(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

// Change the clothes store blips
void sub_42579(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 ))
    {
        switch (uParam0)
        {
            case 6:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "BINCO" );
            break;
            case 37:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "ZIP" );
            break;
            case 36:
            case 35:
            CHANGE_BLIP_NAME_FROM_TEXT_FILE( g_U10324[uParam0]._fU32, "PERSEUS" );
            break;
        }
    }
    return;
}

void sub_42808()
{
    int I;
    boolean bVar3;
    int iVar4;
    boolean bVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    float fVar10;
    float fVar11;
    int iVar12;

    I = 0;
    bVar3 = sub_41793( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_42853( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_41793( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_42853( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_42271( I )))
        {
            iVar4++;
        }
    }
    bVar5 = false;
    if (iVar4 <= 3)
    {
        bVar5 = true;
    }
    for ( I = 0; I < 59; I++ )
    {
        bVar3 = sub_42271( I );
        if (bVar3)
        {
            if (NOT bVar5)
            {
                if (NOT (g_U9937 == g_U10324[I]._fU28))
                {
                    bVar3 = false;
                }
            }
        }
        sub_42853( g_U10324[I]._fU32, bVar3 );
    }
    bVar6 = false;
    for ( I = 0; I < 5; I++ )
    {
        bVar3 = false;
        if (g_U9943[I]._fU0)
        {
            if (g_U9937 == g_U9943[I]._fU40)
            {
                bVar3 = true;
                bVar6 = true;
            }
        }
        sub_42853( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
        {
            GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_43344( uVar7, g_U9943[I]._fU8 );
                    if (fVar11 < fVar10)
                    {
                        fVar10 = fVar11;
                        iVar12 = I;
                    }
                }
            }
        }
        if (NOT (iVar12 == -1))
        {
            for ( I = 0; I < 5; I++ )
            {
                bVar3 = false;
                if (iVar12 == I)
                {
                    bVar3 = true;
                }
                sub_42853( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

// Toggle blip as short range
void sub_42853(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 0 );
    }
    else
    {
        SET_BLIP_AS_SHORT_RANGE( uParam0, 1 );
    }
    return;
}

void sub_43344(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_43542(int iParam0)
{
    unknown uVar3;
    unknown uVar4;

    if (iParam0 == -1)
    {
        g_U9925 = 1;
        sub_43566();
        return;
    }
    if (g_U26758[iParam0]._fU8 == 0)
    {
        return;
    }
    sub_43625( iParam0 );
    uVar3 = g_U9925;
    uVar4 = g_U26758[iParam0]._fU100;
    SET_RICH_PRESENCE_TEMPLATESP1( uVar3, 1, uVar4 );
    return;
}

void sub_43566()
{
    unknown uVar2;

    uVar2 = g_U9925;
    SET_RICH_PRESENCE_TEMPLATESP2( uVar2 );
    return;
}

void sub_43625(unknown uParam0)
{
    g_U9925 = g_U26758[uParam0]._fU8;
    if (g_U9925 >= 50000)
    {
        g_U9925 = sub_43671( g_U9925 );
    }
    return;
}

void sub_43671(int Result)
{
    if (Result == 50094)
    {
        if (g_U15654[12])
        {
            return 95;
        }
        else
        {
            return 94;
        }
    }
    return Result;
}

void sub_43788()
{
    sub_43803( ref g_U8221._fU0 );
    sub_44933( ref g_U8221._fU4 );
    sub_45660( ref g_U8221._fU8 );
    sub_46261( ref g_U8221._fU12 );
    sub_46558( ref g_U8221._fU16 );
    g_U8221._fU20 = -1;
    g_U8221._fU24 = -1;
    g_U8229[g_U8221._fU0] = 1;
    g_U8275[g_U8221._fU4] = 1;
    g_U8302[g_U8221._fU8] = 1;
    if (g_U8221._fU12 >= 0)
    {
        g_U8323[g_U8221._fU12] = 1;
    }
    if (g_U8221._fU16 >= 0)
    {
        g_U8328[g_U8221._fU16] = 1;
    }
    return;
}

void sub_43803(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 1 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 1 );
    bVar8 = false;
    for ( I = 0; I < 45; I++ )
    {
        if (NOT bVar8)
        {
            sub_43873( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 45;
    }
    return;
}

void sub_43873(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 15:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 16:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 17:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 4:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 5:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 6:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 7:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 8:
        (uParam1^) = 3;
        (uParam2^) = 2;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 20:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 28:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 29:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 30:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 41:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 42:
        (uParam1^) = 8;
        (uParam2^) = 0;
        break;
        case 21:
        (uParam1^) = 9;
        (uParam2^) = 0;
        break;
        case 22:
        (uParam1^) = 9;
        (uParam2^) = 1;
        break;
        case 23:
        (uParam1^) = 9;
        (uParam2^) = 2;
        break;
        case 9:
        (uParam1^) = 10;
        (uParam2^) = 0;
        break;
        case 10:
        (uParam1^) = 10;
        (uParam2^) = 1;
        break;
        case 11:
        (uParam1^) = 10;
        (uParam2^) = 2;
        break;
        case 31:
        (uParam1^) = 11;
        (uParam2^) = 0;
        break;
        case 32:
        (uParam1^) = 11;
        (uParam2^) = 1;
        break;
        case 33:
        (uParam1^) = 11;
        (uParam2^) = 2;
        break;
        case 34:
        (uParam1^) = 12;
        (uParam2^) = 0;
        break;
        case 35:
        (uParam1^) = 12;
        (uParam2^) = 1;
        break;
        case 36:
        (uParam1^) = 12;
        (uParam2^) = 2;
        break;
        case 37:
        (uParam1^) = 12;
        (uParam2^) = 3;
        break;
        case 38:
        (uParam1^) = 13;
        (uParam2^) = 0;
        break;
        case 39:
        (uParam1^) = 13;
        (uParam2^) = 1;
        break;
        case 40:
        (uParam1^) = 13;
        (uParam2^) = 2;
        break;
        case 12:
        (uParam1^) = 14;
        (uParam2^) = 0;
        break;
        case 13:
        (uParam1^) = 14;
        (uParam2^) = 1;
        break;
        case 14:
        (uParam1^) = 14;
        (uParam2^) = 2;
        break;
        case 24:
        (uParam1^) = 15;
        (uParam2^) = 0;
        break;
        case 25:
        (uParam1^) = 15;
        (uParam2^) = 1;
        break;
        case 26:
        (uParam1^) = 15;
        (uParam2^) = 2;
        break;
        case 27:
        (uParam1^) = 15;
        (uParam2^) = 3;
        break;
        case 43:
        (uParam1^) = 16;
        (uParam2^) = 0;
        break;
        case 44:
        (uParam1^) = 16;
        (uParam2^) = 1;
        break;
        default:
          case 45:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_44933(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 2 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 2 );
    bVar8 = false;
    for ( I = 0; I < 26; I++ )
    {
        if (NOT bVar8)
        {
            sub_45001( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 26;
    }
    return;
}

void sub_45001(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 2:
        (uParam1^) = 0;
        (uParam2^) = 2;
        break;
        case 3:
        (uParam1^) = 0;
        (uParam2^) = 3;
        break;
        case 4:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 19:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 20:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 21:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 22:
        (uParam1^) = 2;
        (uParam2^) = 3;
        break;
        case 23:
        (uParam1^) = 2;
        (uParam2^) = 4;
        break;
        case 24:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 15:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 16:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 17:
        (uParam1^) = 4;
        (uParam2^) = 3;
        break;
        case 18:
        (uParam1^) = 4;
        (uParam2^) = 4;
        break;
        case 8:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 9:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 11:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 12:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 13:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 5:
        (uParam1^) = 7;
        (uParam2^) = 0;
        break;
        case 6:
        (uParam1^) = 7;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 7;
        (uParam2^) = 2;
        break;
        case 25:
        (uParam1^) = 7;
        (uParam2^) = 3;
        break;
        default:
          case 26:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_45660(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    boolean bVar8;

    iVar3 = GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 5 );
    iVar4 = GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 5 );
    bVar8 = false;
    for ( I = 0; I < 20; I++ )
    {
        if (NOT bVar8)
        {
            sub_45728( I, ref iVar6, ref iVar7 );
            if ((iVar7 == iVar4) AND (iVar6 == iVar3))
            {
                (uParam0^) = I;
                bVar8 = true;
            }
        }
    }
    if (NOT bVar8)
    {
        (uParam0^) = 20;
    }
    return;
}

void sub_45728(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam0)
    {
        case 0:
        (uParam1^) = 0;
        (uParam2^) = 0;
        break;
        case 1:
        (uParam1^) = 0;
        (uParam2^) = 1;
        break;
        case 7:
        (uParam1^) = 1;
        (uParam2^) = 0;
        break;
        case 8:
        (uParam1^) = 1;
        (uParam2^) = 1;
        break;
        case 9:
        (uParam1^) = 1;
        (uParam2^) = 2;
        break;
        case 13:
        (uParam1^) = 2;
        (uParam2^) = 0;
        break;
        case 14:
        (uParam1^) = 2;
        (uParam2^) = 1;
        break;
        case 15:
        (uParam1^) = 2;
        (uParam2^) = 2;
        break;
        case 2:
        (uParam1^) = 3;
        (uParam2^) = 0;
        break;
        case 3:
        (uParam1^) = 3;
        (uParam2^) = 1;
        break;
        case 10:
        (uParam1^) = 4;
        (uParam2^) = 0;
        break;
        case 11:
        (uParam1^) = 4;
        (uParam2^) = 1;
        break;
        case 12:
        (uParam1^) = 4;
        (uParam2^) = 2;
        break;
        case 16:
        (uParam1^) = 5;
        (uParam2^) = 0;
        break;
        case 17:
        (uParam1^) = 5;
        (uParam2^) = 1;
        break;
        case 18:
        (uParam1^) = 5;
        (uParam2^) = 2;
        break;
        case 4:
        (uParam1^) = 6;
        (uParam2^) = 0;
        break;
        case 5:
        (uParam1^) = 6;
        (uParam2^) = 1;
        break;
        case 6:
        (uParam1^) = 6;
        (uParam2^) = 2;
        break;
        case 19:
        (uParam1^) = 1;
        (uParam2^) = 3;
        break;
        default:
          case 20:
        (uParam1^) = 2147483647;
        (uParam2^) = 2147483647;
    }
    return;
}

void sub_46261(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;
    int iVar7;
    int iVar8;

    GET_CHAR_PROP_INDEX( CurrentPlayerChar(), 0, ref iVar3 );
    (uParam0^) = 4;
    bVar6 = false;
    for ( I = -1; I <= 4; I++ )
    {
        if (NOT bVar6)
        {
            sub_46314( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if ((uParam0^) == -1)
    {
        iVar7 = GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 8 );
        iVar8 = GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 8 );
        if ((iVar8 == 0) AND (iVar7 == 1))
        {
            (uParam0^) = 3;
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 4;
    }
    return;
}

void sub_46314(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        case 3:
        (uParam1^) = 99;
        break;
        default:
          case 4: (uParam1^) = 2147483647;
    }
    return;
}

void sub_46558(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;
    boolean bVar6;

    GET_CHAR_PROP_INDEX( CurrentPlayerChar(), 1, ref iVar3 );
    bVar6 = false;
    for ( I = -1; I <= 3; I++ )
    {
        if (NOT bVar6)
        {
            sub_46607( I, ref iVar5 );
            if (iVar3 == iVar5)
            {
                (uParam0^) = I;
                bVar6 = true;
            }
        }
    }
    if (NOT bVar6)
    {
        (uParam0^) = 3;
    }
    return;
}

void sub_46607(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case -1:
        (uParam1^) = -1;
        break;
        case 0:
        (uParam1^) = 0;
        break;
        case 1:
        (uParam1^) = 1;
        break;
        case 2:
        (uParam1^) = 2;
        break;
        default:
          case 3: (uParam1^) = 2147483647;
    }
    return;
}

void sub_46929()
{
    if (l_U493)
    {
        return;
    }
    DO_SCREEN_FADE_IN( 1000 );
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
    }
    l_U493 = 1;
    return;
}

void sub_47139()
{
    sub_319( 0 );
    g_U0 = 0;
    g_U10981[0]._fU0 = 1;
    SET_TIME_OF_DAY( 7, 0 );
    return;
}

void sub_47188()
{
    int Result;

    Result = 1;
    if (ProtectedGet(g_U9192) == -1)
    {
        Result = 0;
    }
    g_U9191 = 0;
    if (g_U64893 == -1)
    {
        Result = 0;
    }
    g_U64894 = 0;
    return Result;
}

void sub_47308()
{
    int iVar2;

    if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
    {
        sub_47329();
        sub_43566();
        g_U813 = 0;
        g_U9930 = 0;
        g_U9931 = -1;
        g_U944 = 0;
        g_U945 = 0;
        ToggleRoads();
        g_U9172 = 0;
        g_U9173 = 0;
        g_U9178 = nil;
        sub_51496();
        sub_51514( 1 );
        sub_51676();
        sub_52331();
        sub_6311();
        sub_52447();
        iVar2 = 1;
        sub_52551( iVar2 );
        sub_15753();
        g_U8670 = 0;
        g_U8671 = 0;
        g_U8673 = 0;
        g_U8674 = 0;
        g_U21 = 0;
        FORCE_LOADING_SCREEN( 0 );
        SUPPRESS_FADE_IN_AFTER_DEATH_ARREST( 0 );
        sub_52925();
        l_U498 = 0;
        sub_6374();
    }
    return;
}

void sub_47329()
{
    sub_47340( 0, 0 );
    sub_47340( 3, 3 );
    sub_47340( 7, 7 );
    sub_47340( 8, 8 );
    sub_47340( 13, 13 );
    return;
}

void sub_47340(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    boolean bVar5;

    if (NOT g_U22274[uParam1]._fU16)
    {
        return;
    }
    sub_47373( uParam0 );
    bVar4 = l_U497 > g_U22274[uParam1]._fU88;
    if (bVar4)
    {
        g_U22274[uParam1]._fU88 = l_U497 + 60000;
    }
    sub_51190( uParam1 );
    bVar5 = l_U497 > g_U22274[uParam1]._fU84;
    if (bVar5)
    {
        g_U22274[uParam1]._fU84 = l_U497 + 60000;
    }
    g_U15946[uParam1]._fU8[0]._fU0[2] = 0;
    return;
}

void sub_47373(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU80._fU0;
    iVar4 = 1;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU80._fU0 = 0;
        sub_47494( uParam0 );
        sub_1907( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_49956( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU80._fU0 = 6;
        sub_49956( uParam0, iVar4 );
        break;
        case 6:
        sub_49956( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_50169( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_23915( "Main_Missions: Cancel_Strand_Friend_Mission(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_47494(unknown uParam0)
{
    if ((NOT (g_U13391[uParam0]._fU80._fU0 == 1)) AND (NOT (g_U13391[uParam0]._fU80._fU0 == 0)))
    {
        sub_47551( uParam0 );
        sub_47697( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_47551( uParam0 );
        sub_47887( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 0)
    {
        sub_47697( uParam0 );
    }
    if ((NOT (g_U13391[uParam0]._fU0._fU0 == 1)) AND (NOT (g_U13391[uParam0]._fU0._fU0 == 0)))
    {
        sub_47551( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_49168( uParam0 );
        return;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_47551( uParam0 );
    }
    return;
}

void sub_47551(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU0._fU64 );
    g_U13391[uParam0]._fU0._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU0._fU68;
    g_U13391[uParam0]._fU0._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_47697(unknown uParam0)
{
    unknown uVar3;

    if (NOT (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 )))
    {
        return;
    }
    REMOVE_BLIP( g_U13391[uParam0]._fU80._fU64 );
    g_U13391[uParam0]._fU80._fU64 = nil;
    uVar3 = g_U13391[uParam0]._fU80._fU68;
    g_U13391[uParam0]._fU80._fU68 = 50;
    g_U9387[uVar3]._fU24 = 0;
    return;
}

void sub_47887(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_47697( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU80._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU80._fU4;
        iVar8 = sub_48070( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU80._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_23915( "Main_Missions: Add_Friend_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU80._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU80._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U5 );
        if ((NOT g_U13391[uParam0]._fU80._fU72) || (NOT g_U32896._fU4))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU80._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU80._fU76 = iVar12 + 10000;
        FLASH_BLIP( g_U13391[uParam0]._fU80._fU64, 1 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U6 );
        sub_48723( g_U13391[uParam0]._fU80._fU64, iVar9 );
        return;
    }
    return;
}

int sub_48070(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_23915( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_48723(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 1:
        sub_48815( ref uParam0, 827.41800000, -288.99640000, 14.75330000, 179.76500000 );
        break;
        case 17:
        sub_48815( ref uParam0, -150.38910000, -795.66570000, 4.20110000, 271.69380000 );
        break;
        case 18:
        sub_48815( ref uParam0, -160.31520000, -796.40800000, 5.20610000, 270.00000000 );
        break;
        case 24:
        sub_48815( ref uParam0, -126.75380000, -263.66190000, 11.56380000, 0.00000000 );
        break;
        case 29:
        sub_48815( ref uParam0, -905.43880000, 908.73140000, 12.59760000, 0.74970000 );
        break;
        case 32:
        sub_48815( ref uParam0, 341.41760000, -454.50700000, 3.60780000, 0.74970000 );
        break;
    }
    return;
}

void sub_48815(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_49168(unknown uParam0)
{
    vector vVar3;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    unknown uVar11;
    int iVar12;

    sub_47551( uParam0 );
    vVar3 = {0.00000000, 0.00000000, 0.00000000};
    uVar6 = g_U9386;
    iVar7 = -1;
    iVar8 = 0;
    iVar9 = 0;
    bVar10 = false;
    uVar11 = g_U13391[uParam0]._fU0._fU56;
    switch (uVar11)
    {
        case 0:
        case 8:
        iVar7 = g_U13391[uParam0]._fU0._fU4;
        iVar8 = sub_48070( uParam0, iVar7 );
        iVar9 = g_U26758[iVar8]._fU16;
        vVar3 = {g_U9387[iVar9]._fU0};
        uVar6 = g_U9387[iVar9]._fU12;
        bVar10 = true;
        g_U13391[uParam0]._fU0._fU68 = iVar9;
        g_U9387[iVar9]._fU24 = 1;
        break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7: break;
        default: sub_23915( "Main_Missions: Add_Primary_Contact_Point_Blip(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        ADD_BLIP_FOR_CONTACT( vVar3.x, vVar3.y, vVar3.z, ref g_U13391[uParam0]._fU0._fU64 );
        CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 2 );
        CHANGE_BLIP_SPRITE( g_U13391[uParam0]._fU0._fU64, uVar6 );
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U5 );
        if ((NOT g_U13391[uParam0]._fU0._fU72) || (NOT g_U32896._fU4))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[uParam0]._fU0._fU64, 0 );
        }
        iVar12 = 0;
        GET_GAME_TIMER( ref iVar12 );
        g_U13391[uParam0]._fU0._fU76 = iVar12 + 10000;
        CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U6 );
        if (l_U31)
        {
            FLASH_BLIP( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U31 = 0;
        }
        else
        {
            FLASH_BLIP_ALT( g_U13391[uParam0]._fU0._fU64, 1 );
            l_U31 = 1;
        }
        sub_48723( g_U13391[uParam0]._fU0._fU64, iVar9 );
        return;
    }
    return;
}

void sub_49956(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU80._fU24 )))
        {
            return;
        }
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU80._fU24 );
        sub_1907( uParam0, 0 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU0._fU24 )))
    {
        return;
    }
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU0._fU24 );
    sub_1662( uParam0, 0 );;
    sub_47494( uParam0 );
    return;
}

void sub_50169(int iParam0, boolean bParam1)
{
    boolean bVar4;
    int iVar5;

    bVar4 = true;
    if (bParam1)
    {
        if (g_U13391[iParam0]._fU80._fU60 != nil)
        {
            DESTROY_THREAD( g_U13391[iParam0]._fU80._fU60 );
        }
        sub_1907( iParam0, 0 );
        bVar4 = false;
    }
    else if (g_U13391[iParam0]._fU0._fU60 != nil)
    {
        DESTROY_THREAD( g_U13391[iParam0]._fU0._fU60 );
    }
    iVar5 = g_U13391[iParam0]._fU0._fU56;
    if ((iVar5 == 6) || (iVar5 == 5))
    {
        bVar4 = false;
    }
    if (bVar4)
    {
        g_U10981[iParam0]._fU28 = 1;
    }
    sub_1662( iParam0, 0 );
    if (bVar4)
    {
        sub_43566();
    }
    g_U10981[iParam0]._fU12 = 0;;
    if (iParam0 == 23)
    {
        sub_50406();
        return;
    }
    sub_47494( iParam0 );
    if (bVar4)
    {
        g_U10978 = 0;
    }
    if (bVar4)
    {
        sub_50954( iParam0 );
    }
    if (g_U2)
    {
        if (g_U3)
        {
            WAIT( 1500 );
            g_U4 = 1;
        }
    }
    return;
}

void sub_50406()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;

    bVar2 = false;
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            if (NOT (g_U15936._fU24 == -1))
            {
                uVar3 = g_U32697[g_U15936._fU24]._fU36;
                if (IS_CHAR_IN_MODEL( CurrentPlayerChar(), uVar3 ))
                {
                    bVar2 = true;
                }
            }
        }
    }
    uVar4 = g_U15936._fU24;
    sub_3178();
    if (bVar2)
    {
        g_U15936._fU8 = 1;
        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref g_U15936._fU32 );
        g_U15936._fU24 = uVar4;
    }
    l_U30 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( CurrentPlayerId(), 0 );
    sub_50584();
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
    }
    return;
}

void sub_50584()
{
    unknown uVar2;
    float fVar3;
    boolean bVar4;

    uVar2 = nil;
    fVar3 = 0.00000000;
    bVar4 = false;
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        return;
    }
    if (IS_CHAR_DEAD( CurrentPlayerChar() ))
    {
        l_U30 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( CurrentPlayerId(), 1 );
        return;
    }
    if (IS_CHAR_IN_ANY_POLICE_VEHICLE( CurrentPlayerChar() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref uVar2 );
        if ((NOT (IS_CHAR_IN_MODEL( CurrentPlayerChar(), -488123221 ))) AND (NOT (IS_CHAR_IN_MODEL( CurrentPlayerChar(), 837858166 ))))
        {
            GET_CAR_SPEED( uVar2, ref fVar3 );
            if (fVar3 < 0.40000000)
            {
                if (g_U15936._fU20)
                {
                    bVar4 = true;
                }
                else
                {
                    bVar4 = false;
                }
            }
            else
            {
                bVar4 = true;
            }
        }
        else
        {
            bVar4 = true;
        }
    }
    else
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        if (l_U30)
        {
            return;
        }
        l_U30 = 1;
        SET_PLAYER_CAN_DO_DRIVE_BY( CurrentPlayerId(), 1 );
    }
    else if (NOT l_U30)
    {
        return;
    }
    l_U30 = 0;
    SET_PLAYER_CAN_DO_DRIVE_BY( CurrentPlayerId(), 0 );;
    return;
}

void sub_50954(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_51190(unknown uParam0)
{
    g_U22274[uParam0]._fU16 = 0;
    g_U22274[uParam0]._fU20 = 0;
    g_U22274[uParam0]._fU24 = 0;
    g_U22274[uParam0]._fU28 = 0;
    g_U22274[uParam0]._fU12 = 0;
    sub_770( ref g_U22274[uParam0]._fU32 );
    sub_770( ref g_U22274[uParam0]._fU48 );
    return;
}

void sub_51496()
{
    return;
}

void sub_51514(boolean bParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (bParam0)
    {
        bVar3 = true;
    }
    else
    {
        bVar3 = true;
    }
    if (bVar3)
    {
        if ((NOT (g_U9173 == 0)) || (NOT (g_U9172 == 0)))
        {
            StrCopy( ref g_U9174, "", 16 );
            g_U9172 = 0;
            g_U9173 = 0;
            g_U9178 = nil;
            sub_51601();
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( CurrentPlayerId(), 1 );
            }
        }
    }
    return;
}

void sub_51601()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_51676()
{
    sub_51685();
    sub_770( ref g_U9893._fU68 );
    sub_51793();
    return;
}

void sub_51685()
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

void sub_51793()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_51831( 1, g_U569[I] )) == 0)
        {
            sub_52082( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_52203())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_51831(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_52082(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_6990( g_U569 - 1 );
    return;
}

int sub_52203()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_51831( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_52331()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_52353();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_52353()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_52447()
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

void sub_52551(boolean bParam0)
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
        sub_52806();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_52806()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_52925()
{
    int I;

    if (NOT g_U26753)
    {
        return;
    }
    g_U26753 = 0;
    I = 0;
    for ( I = 0; I < 23; I++ )
    {
        if (g_U22274[I]._fU500._fU0)
        {
            if (g_U22274[I]._fU500._fU4)
            {
                if ((g_U22274[I]._fU500._fU24) || ((g_U22274[I]._fU500._fU20) || (g_U22274[I]._fU500._fU16)))
                {
                    g_U22274[I]._fU500._fU24 = 1;
                    g_U22274[I]._fU500._fU184 = nil;
                    g_U22274[I]._fU500._fU8 = 1;
                }
            }
        }
    }
    return;
}

void sub_53166()
{
    if (g_U26754)
    {
        l_U494 = 0;
        return;
    }
    if (NOT (g_U26756 == g_U26755))
    {
        g_U26756 = g_U26755;
        g_U32896._fU4 = g_U26755;
    }
    if (NOT g_U26755)
    {
        return;
    }
    sub_53249();
    if (l_U494 >= 28)
    {
        l_U494 = 0;
        return;
    }
    switch (l_U494)
    {
        case 0:
        sub_54113();
        break;
        case 1:
        sub_211463();
        break;
        case 2:
        sub_212644();
        break;
        case 3:
        sub_213169();
        break;
        case 4:
        sub_214688();
        break;
        case 5:
        sub_216795();
        break;
        case 6:
        sub_217343();
        break;
        case 7:
        sub_218695();
        break;
        case 8:
        sub_220465();
        break;
        case 9:
        sub_223195();
        break;
        case 10:
        sub_225026();
        break;
        case 11:
        sub_225413();
        break;
        case 12:
        sub_229326();
        break;
        case 13:
        sub_230466();
        break;
        case 14:
        sub_232420();
        break;
        case 15:
        sub_233136();
        break;
        case 16:
        sub_234941();
        break;
        case 17:
        sub_235659();
        break;
        case 18:
        sub_236046();
        break;
        case 19:
        sub_237225();
        break;
        case 20:
        sub_238222();
        break;
        case 21:
        sub_239204();
        break;
        case 22:
        sub_239843();
        break;
        case 24:
        case 25:
        case 23:
        case 26:
        case 27: break;
        default: PRINTSTRING( "Main: Maintain_Strands: Unknown strand ID\n" );
    }
    l_U494++;
    return;
}

void sub_53249()
{
    sub_53259( 0 );
    sub_53259( 3 );
    sub_53259( 7 );
    sub_53259( 8 );
    sub_53259( 13 );
    return;
}

void sub_53259(unknown uParam0)
{
    if (NOT g_U10981[uParam0]._fU8)
    {
        return;
    }
    sub_53293( uParam0, 0 );
    return;
}

void sub_53293(unknown uParam0, boolean bParam1)
{
    int iVar4;
    boolean bVar5;
    unknown uVar6;
    char[16] cVar7;

    iVar4 = g_U10981[uParam0]._fU40[1];
    if (iVar4 == g_U10981[uParam0]._fU56[1])
    {
        return;
    }
    bVar5 = iVar4 > g_U10981[uParam0]._fU56[1];
    g_U10981[uParam0]._fU56[1] = iVar4;
    if (NOT g_U0)
    {
        uVar6 = TO_FLOAT( iVar4 );
        switch (uParam0)
        {
            case 0:
            sub_53464( 1 );
            SET_FLOAT_STAT( 1, uVar6 );
            break;
            case 3:
            sub_53464( 5 );
            SET_FLOAT_STAT( 5, uVar6 );
            break;
            case 7:
            sub_53464( 11 );
            SET_FLOAT_STAT( 11, uVar6 );
            break;
            case 8:
            sub_53464( 14 );
            SET_FLOAT_STAT( 14, uVar6 );
            break;
            case 13:
            sub_53464( 20 );
            SET_FLOAT_STAT( 20, uVar6 );
            break;
            default: return;
        }
    }
    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar7, "CONT_F1", 16 );
        break;
        case 3:
        StrCopy( ref cVar7, "CONT_F4", 16 );
        break;
        case 7:
        StrCopy( ref cVar7, "CONT_F8", 16 );
        break;
        case 8:
        StrCopy( ref cVar7, "CONT_F9", 16 );
        break;
        case 13:
        StrCopy( ref cVar7, "CONT_F15", 16 );
        break;
        default: return;
    }
    if ((g_U10981[uParam0]._fU72) AND (NOT bParam1))
    {
        if (bVar5)
        {
            SET_PHONE_HUD_ITEM( 8, ref cVar7, -1 );
        }
        else
        {
            SET_PHONE_HUD_ITEM( 9, ref cVar7, -1 );
        }
    }
    return;
}

void sub_53464(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_54113()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0;
    if (g_U10981[iVar2]._fU0)
    {
        sub_54146();
        g_U10981[iVar2]._fU0 = 0;
        sub_53293( iVar2, 1 );
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    sub_53293( iVar2, 0 );
    sub_73872( iVar2 );
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        if ((g_U15654[6]) AND (g_U10981[iVar2]._fU292._fU0))
        {
            if (g_U10981[iVar2]._fU292._fU4)
            {
                sub_770( ref g_U10981[iVar2]._fU292._fU8 );
            }
            if (g_U10981[iVar2]._fU292._fU24)
            {
                g_U10981[iVar2]._fU292._fU40 = 0.00000000;
            }
        }
        return;
    }
    sub_90924( iVar3, iVar2 );
    if (sub_107946( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_108339( iVar3, iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U34285 );
    return;
}

void sub_54146()
{
    sub_54157( 0, 0 );
    sub_54806();
    sub_72068();
    sub_72787();
    sub_73177();
    PRINTSTRING( "Friend 1 Activated\n" );
    return;
}

void sub_54157(unknown uParam0, unknown uParam1)
{
    g_U10981[uParam0]._fU8 = 1;
    sub_821( uParam0 );
    sub_54189( uParam0 );
    sub_54494( uParam0 );
    sub_54585( uParam1 );
    sub_3304( uParam1 );
    g_U10981[uParam0]._fU16 = 0;
    g_U15946[uParam1]._fU164._fU0 = 50;
    g_U10981[uParam0]._fU140 = 0;
    return;
}

void sub_54189(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = g_U13391[uParam0]._fU0._fU0;
    iVar4 = 0;
    switch (uVar3)
    {
        case 0: break;
        case 1:
        g_U13391[uParam0]._fU0._fU0 = 0;
        sub_47494( uParam0 );
        sub_1662( uParam0, 0 );
        break;
        case 2:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_49956( uParam0, iVar4 );
        break;
        case 3:
        g_U13391[uParam0]._fU0._fU0 = 6;
        sub_49956( uParam0, iVar4 );
        break;
        case 6:
        sub_49956( uParam0, iVar4 );
        break;
        case 4:
        case 5:
        sub_50169( uParam0, iVar4 );
        g_U4 = 0;
        break;
        default:
        sub_23915( "Main_Missions: Cancel_Strand(): Unknown Mission Status ID" );
        return;
    }
    return;
}

void sub_54494(unknown uParam0)
{
    g_U15436[uParam0]._fU0 = 0;
    g_U15436[uParam0]._fU4 = 0;
    g_U15436[uParam0]._fU8 = 0;
    g_U15436[uParam0]._fU12 = 0;
    g_U15436[uParam0]._fU16 = 0;
    g_U15436[uParam0]._fU20 = 0;
    return;
}

void sub_54585(unknown uParam0)
{
    int iVar3;
    int I;

    iVar3 = 2;
    g_U15946[uParam0]._fU4 = 0;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        sub_54631( uParam0, I );
    }
    g_U15946[uParam0]._fU164._fU0 = 50;
    return;
}

void sub_54631(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int I;

    iVar4 = 14;
    I = 0;
    for ( I = 0; I < iVar4; I++ )
    {
        g_U15946[uParam0]._fU8[uParam1]._fU0[I] = 0;
    }
    return;
}

void sub_54806()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;

    iVar2 = 1440;
    iVar3 = 1080;
    iVar4 = 720;
    iVar5 = 360;
    iVar6 = 120;
    iVar7 = 60;
    iVar8 = 0;
    iVar9 = 1;
    iVar10 = 2;
    iVar11 = 1;
    iVar12 = 2;
    iVar13 = 0;
    iVar14 = 1;
    iVar15 = 0;
    iVar16 = 364;
    PRINTSTRING( "START: FRIEND_1_SETUP_MISSION_FLOW\n" );
    sub_54939( ref g_U34285, ref iVar15, iVar16 );
    sub_55286( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_55286( ref g_U34285, ref iVar15, iVar16, 1 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 58 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 49 );
    sub_55543( ref g_U34285, ref iVar15, iVar16 );
    sub_55638( ref g_U34285, ref iVar15, iVar16, 11 );
    sub_55754( ref g_U34285, ref iVar15, iVar16, 1015 );
    sub_55864( ref g_U34285, ref iVar15, iVar16, 0, 70 );
    sub_55864( ref g_U34285, ref iVar15, iVar16, 1, 70 );
    sub_55998( ref g_U34285, ref iVar15, iVar16 );
    sub_56088( ref g_U34285, ref iVar15, iVar16, 1 );
    sub_56232( ref g_U34285, ref iVar15, iVar16, 1 );
    sub_56334( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_56442( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 0, iVar9 );
    sub_56669( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_56764( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_56870( ref g_U34285, ref iVar15, iVar16, 30 );
    sub_56987( ref g_U34285, ref iVar15, iVar16, "FCR11AU", "FCR_ANSPH" );
    sub_57123( ref g_U34285, ref iVar15, iVar16, 34 );
    sub_57224( ref g_U34285, ref iVar15, iVar16 );
    sub_56669( ref g_U34285, ref iVar15, iVar16, 1 );
    sub_57332( ref g_U34285, ref iVar15, iVar16 );
    sub_57123( ref g_U34285, ref iVar15, iVar16, 35 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 75 );
    sub_56334( ref g_U34285, ref iVar15, iVar16, 1 );
    sub_57476( ref g_U34285, ref iVar15, iVar16, 17000 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 19 );
    sub_55286( ref g_U34285, ref iVar15, iVar16, 1 );
    sub_57617( ref g_U34285, ref iVar15, iVar16 );
    sub_57706( ref g_U34285, ref iVar15, iVar16, 39 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 0, iVar8 );
    sub_57123( ref g_U34285, ref iVar15, iVar16, 31 );
    sub_57123( ref g_U34285, ref iVar15, iVar16, 33 );
    sub_57870( ref g_U34285, ref iVar15, iVar16, 10 );
    sub_58020( ref g_U34285, ref iVar15, iVar16, 10 );
    sub_58117( ref g_U34285, ref iVar15, iVar16, 0, 0 );
    sub_56669( ref g_U34285, ref iVar15, iVar16, 2 );
    sub_58250( ref g_U34285, ref iVar15, iVar16, 0, 0 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 34 );
    sub_58389( ref g_U34285, ref iVar15, iVar16, 3 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 57 );
    sub_58517( ref g_U34285, ref iVar15, iVar16 );
    sub_56232( ref g_U34285, ref iVar15, iVar16, 2 );
    sub_57123( ref g_U34285, ref iVar15, iVar16, 36 );
    sub_58642( ref g_U34285, ref iVar15, iVar16, 3 );
    sub_58755( ref g_U34285, ref iVar15, iVar16, 1, "F1_ALBS" );
    sub_58755( ref g_U34285, ref iVar15, iVar16, 6, "F1_STARTBLEED" );
    sub_58955( ref g_U34285, ref iVar15, iVar16, "WATCHTV" );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "F1_ALBS" );
    sub_58755( ref g_U34285, ref iVar15, iVar16, 2, "F1_1ST_CALL" );
    sub_59229( ref g_U34285, ref iVar15, iVar16, "R4_CTRAP", "R4AUD", 30000, 1, 45000 );
    sub_59456( ref g_U34285, ref iVar15, iVar16, "F1_STARTBLEED" );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "F1_1ST_CALL" );
    sub_59621( ref g_U34285, ref iVar15, iVar16, "R4_CALL1", "R4AUD", 60000, 1, 60000 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 2 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "F1_STARTBLEED" );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 3 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 1 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 5 );
    sub_59927( ref g_U34285, ref iVar15, iVar16, 6 );
    sub_60046( ref g_U34285, ref iVar15, iVar16, 4 );
    sub_60159( ref g_U34285, ref iVar15, iVar16, 4, "F1_ALBS" );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 8 );
    sub_57476( ref g_U34285, ref iVar15, iVar16, 120000 );
    sub_60323( ref g_U34285, ref iVar15, iVar16 );
    sub_60417( ref g_U34285, ref iVar15, iVar16, 4, 0 );
    sub_60542( ref g_U34285, ref iVar15, iVar16 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 1 );
    sub_60745( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_60857( ref g_U34285, ref iVar15, iVar16, 75, 36, 4, 1 );
    sub_61009( ref g_U34285, ref iVar15, iVar16, 6 );
    sub_61009( ref g_U34285, ref iVar15, iVar16, 7 );
    sub_61009( ref g_U34285, ref iVar15, iVar16, 8 );
    sub_61009( ref g_U34285, ref iVar15, iVar16, 11 );
    sub_61009( ref g_U34285, ref iVar15, iVar16, 12 );
    sub_61009( ref g_U34285, ref iVar15, iVar16, 13 );
    sub_61009( ref g_U34285, ref iVar15, iVar16, 5 );
    sub_61224( ref g_U34285, ref iVar15, iVar16, 90, 22, 32, 4 );
    sub_56669( ref g_U34285, ref iVar15, iVar16, 5 );
    sub_61395( ref g_U34285, ref iVar15, iVar16, 14 );
    sub_61501( ref g_U34285, ref iVar15, iVar16 );
    sub_58389( ref g_U34285, ref iVar15, iVar16, 16 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 3, iVar13 );
    sub_56669( ref g_U34285, ref iVar15, iVar16, 6 );
    sub_61650( ref g_U34285, ref iVar15, iVar16, 7, 100 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 62 );
    sub_56232( ref g_U34285, ref iVar15, iVar16, 3 );
    sub_56334( ref g_U34285, ref iVar15, iVar16, 2 );
    sub_61858( ref g_U34285, ref iVar15, iVar16, "POST_SIXAXIS" );
    sub_58955( ref g_U34285, ref iVar15, iVar16, "PS6AXIS" );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "POST_SIXAXIS" );
    sub_62061( ref g_U34285, ref iVar15, iVar16, "R8_SETUP", "Rp8AUD", 180000, 60000 );
    sub_62254( ref g_U34285, ref iVar15, iVar16, 7, 0, 10000 );
    sub_62392( ref g_U34285, ref iVar15, iVar16, 42, 0, 10, 360 );
    sub_58955( ref g_U34285, ref iVar15, iVar16, "PROCHLP" );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_62590( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_62714( ref g_U34285, ref iVar15, iVar16, 8, 1 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 23 );
    sub_62854( ref g_U34285, ref iVar15, iVar16, 9 );
    sub_62969( ref g_U34285, ref iVar15, iVar16, 1018 );
    sub_63080( ref g_U34285, ref iVar15, iVar16, 0, 1, 1, 1, 1, 1 );
    sub_63304( ref g_U34285, ref iVar15, iVar16, "KWIKCALL", 10000 );
    sub_62061( ref g_U34285, ref iVar15, iVar16, "MF3_ROM3", "MF3AUD", 60000, 60000 );
    sub_58117( ref g_U34285, ref iVar15, iVar16, 0, 1 );
    sub_56232( ref g_U34285, ref iVar15, iVar16, 4 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 2 );
    sub_63526( ref g_U34285, ref iVar15, iVar16, 0, 0, 14, 30000 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 0, iVar9 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 8, iVar11 );
    sub_56669( ref g_U34285, ref iVar15, iVar16, 9 );
    sub_56232( ref g_U34285, ref iVar15, iVar16, 8 );
    sub_63755( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 53 );
    sub_58389( ref g_U34285, ref iVar15, iVar16, 12 );
    sub_61395( ref g_U34285, ref iVar15, iVar16, 16 );
    sub_62061( ref g_U34285, ref iVar15, iVar16, "R10_SETUP", "Rp10AUD", 45000, 60000 );
    sub_56232( ref g_U34285, ref iVar15, iVar16, 22 );
    sub_61395( ref g_U34285, ref iVar15, iVar16, 17 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 2 );
    sub_63080( ref g_U34285, ref iVar15, iVar16, 0, 1, 1, 1, 1, 1 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 0, iVar8 );
    sub_58955( ref g_U34285, ref iVar15, iVar16, "ROMQUICK" );
    sub_59456( ref g_U34285, ref iVar15, iVar16, "F1_SORROW" );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "F1_SORROW_FAIL" );
    sub_64139( ref g_U34285, ref iVar15, iVar16, 35000 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "F1_SORROW" );
    sub_59229( ref g_U34285, ref iVar15, iVar16, "MF3_ROM2", "MF3AUD", 25000, 2, 60000 );
    sub_60046( ref g_U34285, ref iVar15, iVar16, 10 );
    sub_60159( ref g_U34285, ref iVar15, iVar16, 10, "F1_SORROW_FAIL" );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 33 );
    sub_64411( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_56764( ref g_U34285, ref iVar15, iVar16, 1 );
    sub_58955( ref g_U34285, ref iVar15, iVar16, "SH_BX" );
    sub_64560( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_64670( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_56334( ref g_U34285, ref iVar15, iVar16, 3 );
    sub_56442( ref g_U34285, ref iVar15, iVar16, 1 );
    sub_64815( ref g_U34285, ref iVar15, iVar16, 3 );
    sub_56232( ref g_U34285, ref iVar15, iVar16, 5 );
    sub_64943( ref g_U34285, ref iVar15, iVar16, 10, 180000, 300000 );
    sub_58755( ref g_U34285, ref iVar15, iVar16, 28, "F1_IGNORE_TXT" );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 29 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "F1_IGNORE_TXT" );
    sub_61395( ref g_U34285, ref iVar15, iVar16, 23 );
    sub_64139( ref g_U34285, ref iVar15, iVar16, 60000 );
    sub_65195( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_65302( ref g_U34285, ref iVar15, iVar16 );
    sub_65399( ref g_U34285, ref iVar15, iVar16, 7 );
    sub_65501( ref g_U34285, ref iVar15, iVar16, 4 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 4 );
    sub_64943( ref g_U34285, ref iVar15, iVar16, 7, 180000, 300000 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 3 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 5 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 6 );
    sub_65731( ref g_U34285, ref iVar15, iVar16, 7 );
    sub_65731( ref g_U34285, ref iVar15, iVar16, 10 );
    sub_65731( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_63080( ref g_U34285, ref iVar15, iVar16, 0, 1, 1, 1, 1, 1 );
    sub_65927( ref g_U34285, ref iVar15, iVar16, 26, "R12_CALL2", "R12AUD", 180000, 60000 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 35 );
    sub_66152( ref g_U34285, ref iVar15, iVar16, iVar3 );
    sub_56088( ref g_U34285, ref iVar15, iVar16, 5 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "F1_BRONX_FAIL" );
    sub_66361( ref g_U34285, ref iVar15, iVar16, 26, "R12_CALL3", "R12AUD", 180000, 3, 60000 );
    sub_60046( ref g_U34285, ref iVar15, iVar16, 11 );
    sub_60159( ref g_U34285, ref iVar15, iVar16, 11, "F1_BRONX_FAIL" );
    sub_59927( ref g_U34285, ref iVar15, iVar16, 35 );
    sub_59927( ref g_U34285, ref iVar15, iVar16, 34 );
    sub_63526( ref g_U34285, ref iVar15, iVar16, 1, 0, 12, 90000 );
    sub_66708( ref g_U34285, ref iVar15, iVar16, 0, 1, 10 );
    sub_66857( ref g_U34285, ref iVar15, iVar16, "MF3_ROM1", "MF3AUD", 60000 );
    sub_56764( ref g_U34285, ref iVar15, iVar16, 2 );
    sub_58955( ref g_U34285, ref iVar15, iVar16, "SH_MH" );
    sub_56334( ref g_U34285, ref iVar15, iVar16, 4 );
    sub_56442( ref g_U34285, ref iVar15, iVar16, 2 );
    sub_56334( ref g_U34285, ref iVar15, iVar16, 7 );
    sub_56334( ref g_U34285, ref iVar15, iVar16, 13 );
    sub_56334( ref g_U34285, ref iVar15, iVar16, 14 );
    sub_56334( ref g_U34285, ref iVar15, iVar16, 18 );
    sub_65195( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 34 );
    sub_67226( ref g_U34285, ref iVar15, iVar16, 25, "MF5_CBRONX", "MF10AUD", 60000 );
    sub_66152( ref g_U34285, ref iVar15, iVar16, iVar2 );
    sub_65501( ref g_U34285, ref iVar15, iVar16, 6 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 9 );
    sub_59456( ref g_U34285, ref iVar15, iVar16, "F1_WEEKEND" );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "F1_WEEKEND_FAIL" );
    sub_64139( ref g_U34285, ref iVar15, iVar16, 60000 );
    sub_62590( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "F1_WEEKEND" );
    sub_66361( ref g_U34285, ref iVar15, iVar16, 14, "R13_CALL1", "R13AUD", 60000, 4, 60000 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 0, iVar9 );
    sub_60046( ref g_U34285, ref iVar15, iVar16, 12 );
    sub_60159( ref g_U34285, ref iVar15, iVar16, 12, "F1_WEEKEND_FAIL" );
    sub_56232( ref g_U34285, ref iVar15, iVar16, 18 );
    sub_61395( ref g_U34285, ref iVar15, iVar16, 44 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 7 );
    sub_65501( ref g_U34285, ref iVar15, iVar16, 7 );
    sub_67226( ref g_U34285, ref iVar15, iVar16, 12, "MF2_CCIA1", "MF2AUD", 120000 );
    sub_66152( ref g_U34285, ref iVar15, iVar16, iVar5 );
    sub_67226( ref g_U34285, ref iVar15, iVar16, 26, "MF2_CMALL6", "MF2AUD", 120000 );
    sub_67889( ref g_U34285, ref iVar15, iVar16, 15, 4 );
    sub_66152( ref g_U34285, ref iVar15, iVar16, iVar5 );
    sub_66857( ref g_U34285, ref iVar15, iVar16, "MF3_ROM21", "MF4AUD", 120000 );
    sub_67889( ref g_U34285, ref iVar15, iVar16, 0, 3 );
    sub_66152( ref g_U34285, ref iVar15, iVar16, iVar5 );
    sub_68131( ref g_U34285, ref iVar15, iVar16, 26, "MF2AUD", "MF2_CMALL14" );
    sub_67226( ref g_U34285, ref iVar15, iVar16, 8, "MF5_CENGAG", "MF11AUD", 120000 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 8 );
    sub_65501( ref g_U34285, ref iVar15, iVar16, 9 );
    sub_58020( ref g_U34285, ref iVar15, iVar16, 55 );
    sub_65927( ref g_U34285, ref iVar15, iVar16, 10, "MF6_ENGAGE", "MF12AUD", 30000, 60000 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 11 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 12 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 13 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "F1_DARKO" );
    sub_62590( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_68558( ref g_U34285, ref iVar15, iVar16, 12, "MF2_CCIA3", "MF2AUD", 60000, 5, 60000 );
    sub_60046( ref g_U34285, ref iVar15, iVar16, 13 );
    sub_60159( ref g_U34285, ref iVar15, iVar16, 13, "F1_DARKO" );
    sub_61395( ref g_U34285, ref iVar15, iVar16, 40 );
    sub_59927( ref g_U34285, ref iVar15, iVar16, 50 );
    sub_59927( ref g_U34285, ref iVar15, iVar16, 37 );
    sub_61395( ref g_U34285, ref iVar15, iVar16, 28 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 10 );
    sub_60638( ref g_U34285, ref iVar15, iVar16, 7 );
    sub_65731( ref g_U34285, ref iVar15, iVar16, 5 );
    sub_63080( ref g_U34285, ref iVar15, iVar16, 0, 1, 1, 1, 1, 1 );
    sub_68977( ref g_U34285, ref iVar15, iVar16, 3 );
    sub_68977( ref g_U34285, ref iVar15, iVar16, 7 );
    sub_68977( ref g_U34285, ref iVar15, iVar16, 8 );
    sub_68977( ref g_U34285, ref iVar15, iVar16, 13 );
    sub_69156( ref g_U34285, ref iVar15, iVar16, 22, "MF4_JP3", "MF9AUD", 60000, 60000 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 51 );
    sub_56669( ref g_U34285, ref iVar15, iVar16, 14 );
    sub_59456( ref g_U34285, ref iVar15, iVar16, "FIN_CHOICE" );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "FIN_PART1" );
    sub_64139( ref g_U34285, ref iVar15, iVar16, 60000 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "FIN_CHOICE" );
    sub_58642( ref g_U34285, ref iVar15, iVar16, 37 );
    sub_58755( ref g_U34285, ref iVar15, iVar16, 12, "FIN_DO_1B" );
    sub_60046( ref g_U34285, ref iVar15, iVar16, 15 );
    sub_69587( ref g_U34285, ref iVar15, iVar16, 15, "FIN_PART1" );
    sub_65927( ref g_U34285, ref iVar15, iVar16, 22, "MF4_JP2", "MF9AUD", 30000, 60000 );
    sub_59456( ref g_U34285, ref iVar15, iVar16, "FIN_PART2_SEQ" );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "FIN_DO_1B" );
    sub_60046( ref g_U34285, ref iVar15, iVar16, 16 );
    sub_69587( ref g_U34285, ref iVar15, iVar16, 16, "FIN_PART1" );
    sub_69858( ref g_U34285, ref iVar15, iVar16, 25 );
    sub_69964( ref g_U34285, ref iVar15, iVar16, 1 );
    sub_70080( ref g_U34285, ref iVar15, iVar16, 3039 );
    sub_65927( ref g_U34285, ref iVar15, iVar16, 19, "MF5_BKDIM", "MF11AUD", 30000, 60000 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "FIN_PART2_SEQ" );
    sub_58642( ref g_U34285, ref iVar15, iVar16, 17 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 61 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 0, iVar10 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 3, iVar14 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 8, iVar12 );
    sub_60046( ref g_U34285, ref iVar15, iVar16, 18 );
    sub_69587( ref g_U34285, ref iVar15, iVar16, 18, "FIN_PART2_SEQ" );
    sub_56669( ref g_U34285, ref iVar15, iVar16, 19 );
    sub_69858( ref g_U34285, ref iVar15, iVar16, 19 );
    sub_58755( ref g_U34285, ref iVar15, iVar16, 12, "FIN_ROMAN_ALIVE" );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 11 );
    sub_55998( ref g_U34285, ref iVar15, iVar16 );
    sub_67889( ref g_U34285, ref iVar15, iVar16, 15, 5 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "FIN_ROMAN_ALIVE" );
    sub_58755( ref g_U34285, ref iVar15, iVar16, 12, "FIN_KATE_PB" );
    sub_59456( ref g_U34285, ref iVar15, iVar16, "FIN_FIRST_CALL" );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "FIN_KATE_PB" );
    sub_69858( ref g_U34285, ref iVar15, iVar16, 10 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 15 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "FIN_FIRST_CALL" );
    sub_63526( ref g_U34285, ref iVar15, iVar16, 5, 3, 12, 15000 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "FIN_FAIL_FIN2" );
    sub_58755( ref g_U34285, ref iVar15, iVar16, 12, "FIN_ROM_FIN2" );
    sub_66361( ref g_U34285, ref iVar15, iVar16, 3, "FIN1D_GOON", "FIN1DAU", 60000, 23, 60000 );
    sub_59456( ref g_U34285, ref iVar15, iVar16, "FIN_PART2" );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "FIN_ROM_FIN2" );
    sub_66361( ref g_U34285, ref iVar15, iVar16, 3, "FIN1C_GOON", "FIN1CAU", 60000, 23, 60000 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "FIN_PART2" );
    sub_60046( ref g_U34285, ref iVar15, iVar16, 20 );
    sub_69587( ref g_U34285, ref iVar15, iVar16, 20, "FIN_FAIL_FIN2" );
    sub_69858( ref g_U34285, ref iVar15, iVar16, 25 );
    sub_70080( ref g_U34285, ref iVar15, iVar16, 6 );
    sub_70080( ref g_U34285, ref iVar15, iVar16, 1020 );
    sub_70080( ref g_U34285, ref iVar15, iVar16, 3035 );
    sub_56669( ref g_U34285, ref iVar15, iVar16, 21 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 52 );
    sub_59927( ref g_U34285, ref iVar15, iVar16, 51 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 15 );
    sub_59927( ref g_U34285, ref iVar15, iVar16, 61 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 3, iVar13 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 8, iVar11 );
    sub_56554( ref g_U34285, ref iVar15, iVar16, 0, iVar8 );
    sub_64815( ref g_U34285, ref iVar15, iVar16, 3 );
    sub_64815( ref g_U34285, ref iVar15, iVar16, 7 );
    sub_64815( ref g_U34285, ref iVar15, iVar16, 8 );
    sub_64815( ref g_U34285, ref iVar15, iVar16, 13 );
    sub_57123( ref g_U34285, ref iVar15, iVar16, 32 );
    sub_58755( ref g_U34285, ref iVar15, iVar16, 12, "FIN_KEEP_ALIVE" );
    sub_59456( ref g_U34285, ref iVar15, iVar16, "FIN_TERMINATE" );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "FIN_KEEP_ALIVE" );
    sub_65195( ref g_U34285, ref iVar15, iVar16, 0 );
    sub_66857( ref g_U34285, ref iVar15, iVar16, "MF3_ROM23", "MF4AUD", 60000 );
    sub_69964( ref g_U34285, ref iVar15, iVar16, 1 );
    sub_70080( ref g_U34285, ref iVar15, iVar16, 3039 );
    sub_69858( ref g_U34285, ref iVar15, iVar16, 26 );
    sub_71572( ref g_U34285, ref iVar15, iVar16 );
    sub_59063( ref g_U34285, ref iVar15, iVar16, "FIN_TERMINATE" );
    sub_70080( ref g_U34285, ref iVar15, iVar16, 2 );
    sub_67889( ref g_U34285, ref iVar15, iVar16, 20, 2 );
    sub_67226( ref g_U34285, ref iVar15, iVar16, 26, "MF2_CMALL3", "MF2AUD", 60000 );
    sub_69858( ref g_U34285, ref iVar15, iVar16, 26 );
    sub_67226( ref g_U34285, ref iVar15, iVar16, 10, "MF6_RDEAD", "MF12AUD", 60000 );
    sub_55409( ref g_U34285, ref iVar15, iVar16, 37 );
    sub_71853( ref g_U34285, ref iVar15, iVar16 );
    sub_71946( ref g_U34285, ref iVar15, iVar16 );
    PRINTSTRING( "END: FRIEND_1_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_54939(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 0;
    sub_55197( uParam1 );
    sub_55249( "SET: GAME INITIAL SETUP\n" );
    return;
}

void sub_54953(int iParam0, int iParam1)
{
    if (iParam0 >= iParam1)
    {
        sub_55041( "Flow_Set_Seq_Begin(): Need to increase number of allowed sequences" );
    }
    return;
}

void sub_55041(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

void sub_55197(unknown uParam0)
{
    (uParam0^)++;
    return;
}

void sub_55249(unknown uParam0)
{
    return;
}

void sub_55286(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 74;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_MAP_AREA\n" );
    return;
}

void sub_55409(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 128;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: SET_MISSION_FLOW_FLAG TO TRUE\n" );
    return;
}

void sub_55543(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 100;
    sub_55197( uParam1 );
    sub_55249( "SET: DEACTIVATE_GANG_HASSLE\n" );
    return;
}

void sub_55638(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 90;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ARRESTED_ON_POLICE_COMPUTER\n" );
    return;
}

void sub_55754(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 94;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ARRESTED_ON_LCPD_WEB\n" );
    return;
}

void sub_55864(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 105;
    (uParam0^)[(uParam1^)]._fU4._fU12 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam4;
    sub_55197( uParam1 );
    sub_55249( "SET: SET_STAT_VALUE\n" );
    return;
}

void sub_55998(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 107;
    sub_55197( uParam1 );
    sub_55249( "SET: LIKE_MESSAGES_OFF\n" );
    return;
}

void sub_56088(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 113;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: SET_MISSIONS_LEVEL TO " );
    sub_56178( uParam3 );
    sub_56195();
    return;
}

void sub_56178(unknown uParam0)
{
    return;
}

void sub_56195()
{
    return;
}

void sub_56232(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 116;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_STRAND\n" );
    return;
}

void sub_56334(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 79;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_PICKUP_POINT\n" );
    return;
}

void sub_56442(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 81;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_DROPOFF_POINT\n" );
    return;
}

void sub_56554(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 127;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam4;
    sub_55197( uParam1 );
    sub_55249( "SET: CHANGE_CLOTHES\n" );
    return;
}

void sub_56669(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 1;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: DO MISSION\n" );
    return;
}

void sub_56764(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 77;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_SAVE_HOUSE\n" );
    return;
}

void sub_56870(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 11;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: HELP SCRIPT\n" );
    return;
}

void sub_56987(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 22;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    sub_55197( uParam1 );
    sub_55249( "SET: SET_ANSWER_PHONE: " );
    sub_55249( uParam4 );
    sub_56195();
    return;
}

void sub_57123(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 15;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: STANDALONE SCRIPT\n" );
    return;
}

void sub_57224(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 85;
    sub_55197( uParam1 );
    sub_55249( "SET: ALLOW_NETWORK_SAVES\n" );
    return;
}

void sub_57332(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 16;
    sub_55197( uParam1 );
    sub_55249( "SET: CREATE_CELLPHONE\n" );
    return;
}

void sub_57476(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 72;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ALLOW_HOSPITAL_PICKUP\n" );
    return;
}

void sub_57617(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 18;
    sub_55197( uParam1 );
    sub_55249( "SET: ADD_TO_PHONEBOOK\n" );
    return;
}

void sub_57706(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 125;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_RI_CHARACTER\n" );
    return;
}

void sub_57870(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 129;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: SET_MISSION_FLOW_FLAG TO TRUE IF THIS COMMAND BYPASSED IN DEBUG\n" );
    return;
}

void sub_58020(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 132;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: FLAG_WALL\n" );
    return;
}

void sub_58117(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 50;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_55197( uParam1 );
    sub_55249( "SET: CHAT_PHONECALL\n" );
    return;
}

void sub_58250(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 51;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_55197( uParam1 );
    sub_55249( "SET: KILL_CHAT_PHONECALL\n" );
    return;
}

void sub_58389(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 76;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_MAP_BLIP_GROUP\n" );
    return;
}

void sub_58517(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 106;
    sub_55197( uParam1 );
    sub_55249( "SET: LIKE_MESSAGES_ON\n" );
    return;
}

void sub_58642(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 12;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: OFF MISSION SCRIPT\n" );
    return;
}

void sub_58755(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 131;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    sub_55197( uParam1 );
    sub_55249( "SET: FLAG_CHECK_FAILGOTO (GOTO " );
    sub_55249( uParam4 );
    sub_55249( " ON FAIL)" );
    sub_56195();
    return;
}

void sub_58955(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 138;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    sub_55197( uParam1 );
    sub_55249( "SET: HELP_TEXT\n" );
    return;
}

void sub_59063(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 133;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    sub_55197( uParam1 );
    sub_55249( "SET: LABEL: " );
    sub_55249( uParam3 );
    sub_56195();
    return;
}

void sub_59229(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 34;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam7;
    sub_55197( uParam1 );
    sub_55249( "SET: PHONE_PLAYER_VECTOR_REPEAT_QUICK: [" );
    sub_55249( uParam4 );
    sub_55249( "] " );
    sub_55249( uParam3 );
    sub_56195();
    return;
}

void sub_59456(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 134;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    sub_55197( uParam1 );
    sub_55249( "SET: GOTO " );
    sub_55249( uParam3 );
    sub_56195();
    return;
}

void sub_59621(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 33;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam7;
    sub_55197( uParam1 );
    sub_55249( "SET: PHONE_PLAYER_VECTOR_REPEAT: [" );
    sub_55249( uParam4 );
    sub_55249( "] " );
    sub_55249( uParam3 );
    sub_56195();
    return;
}

void sub_59927(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 130;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: CLEAR_MISSION_FLOW_FLAG TO FALSE\n" );
    return;
}

void sub_60046(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 10;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: SETUP_MISSION_ONLY\n" );
    return;
}

void sub_60159(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 3;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    sub_55197( uParam1 );
    sub_55249( "SET: DO MISSION FAILGOTO PHONE\n" );
    return;
}

void sub_60323(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 99;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_GANG_HASSLE\n" );
    return;
}

void sub_60417(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 103;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_55197( uParam1 );
    sub_55249( "SET: GANG_RELATIONSHIP_DISLIKE\n" );
    return;
}

void sub_60542(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 73;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_BODY_SEARCHING\n" );
    return;
}

void sub_60638(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 120;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: SYNCHRONISATION_WALL\n" );
    return;
}

void sub_60745(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 63;
    (uParam0^)[(uParam1^)]._fU4._fU8 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ADD_SPECIAL_ACTION\n" );
    return;
}

void sub_60857(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 64;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU32 = uParam6;
    sub_55197( uParam1 );
    sub_55249( "SET: ALLOW_SPECIAL_ACTIONS\n" );
    return;
}

void sub_61009(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 60;
    (uParam0^)[(uParam1^)]._fU4._fU8 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ADD_FRIEND_ACTIVITY\n" );
    return;
}

void sub_61224(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 61;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU32 = uParam6;
    sub_55197( uParam1 );
    sub_55249( "SET: ALLOW_FRIEND_ACTIVITIES\n" );
    return;
}

void sub_61395(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 119;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: SEND_SYNCHRONISATION\n" );
    return;
}

void sub_61501(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 86;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_SPRAYSHOPS\n" );
    return;
}

void sub_61650(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    iVar7 = 0;
    GET_WEAPONTYPE_MODEL( uParam3, ref iVar7 );
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 126;
    (uParam0^)[(uParam1^)]._fU4._fU72 = iVar7;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_55197( uParam1 );
    sub_55249( "SET: GIVE_WEAPON\n" );
    return;
}

void sub_61858(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 137;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    sub_55197( uParam1 );
    sub_55249( "SET: IS_PS3_FAILGOTO " );
    sub_55249( uParam3 );
    sub_56195();
    return;
}

void sub_62061(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 30;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    sub_55197( uParam1 );
    sub_55249( "SET: PHONE_PLAYER_REPEAT_QUICK: [" );
    sub_55249( uParam4 );
    sub_55249( "] " );
    sub_55249( uParam3 );
    sub_56195();
    return;
}

void sub_62254(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 6;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam5;
    sub_55197( uParam1 );
    sub_55249( "SET: START PROC MISSION\n" );
    return;
}

void sub_62392(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, int iParam6)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 58;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = (iParam6 * 60) * 1000;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: PROC_REMINDER_TXTS\n" );
    return;
}

void sub_62590(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 67;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: CONTACT_ON_NEXT_MISSION: " );
    sub_56178( uParam3 );
    sub_56195();
    return;
}

void sub_62714(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 4;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam4;
    sub_55197( uParam1 );
    sub_55249( "SET: DO MISSION (KILL_STRAND)\n" );
    return;
}

void sub_62854(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 89;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: MISSING_ON_POLICE_COMPUTER\n" );
    return;
}

void sub_62969(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 93;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: MISSING_ON_LCPD_WEB\n" );
    return;
}

void sub_63080(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, boolean bParam4, boolean bParam5, boolean bParam6, boolean bParam7, boolean bParam8)
{
    int iVar11;

    iVar11 = 0;
    if (bParam4)
    {
        SET_BIT( ref iVar11, 1 );
    }
    if (bParam5)
    {
        SET_BIT( ref iVar11, 2 );
    }
    if (bParam6)
    {
        SET_BIT( ref iVar11, 3 );
    }
    if (bParam7)
    {
        SET_BIT( ref iVar11, 4 );
    }
    if (bParam8)
    {
        SET_BIT( ref iVar11, 5 );
    }
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 70;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = iVar11;
    sub_55197( uParam1 );
    sub_55249( "SET: PAUSE_STRAND_EXTRAS\n" );
    return;
}

void sub_63304(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 139;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam4;
    sub_55197( uParam1 );
    sub_55249( "SET: HELP_TEXT_TIMED\n" );
    return;
}

void sub_63526(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 55;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: TXTMSG_PLAYER_AMBIENT_WAIT\n" );
    return;
}

void sub_63755(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 57;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: KILL_TXTMSG\n" );
    return;
}

void sub_64139(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 123;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: REALTIME MSECS DELAY (" );
    sub_56178( uParam3 );
    sub_55249( ")" );
    sub_56195();
    return;
}

void sub_64411(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 78;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: DEACTIVATE_SAVE_HOUSE\n" );
    return;
}

void sub_64560(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 80;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: DEACTIVATE_PICKUP_POINT\n" );
    return;
}

void sub_64670(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 82;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: DEACTIVATE_DROPOFF_POINT\n" );
    return;
}

void sub_64815(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 69;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: UNPAUSE_STRAND\n" );
    return;
}

void sub_64943(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 48;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam5;
    sub_55197( uParam1 );
    sub_55249( "SET: AMBIENT_PHONECALL\n" );
    return;
}

void sub_65195(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 71;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: UNPAUSE_STRAND_EXTRAS\n" );
    return;
}

void sub_65302(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 66;
    sub_55197( uParam1 );
    sub_55249( "SET: DISALLOW_SPECIAL_ACTIONS\n" );
    return;
}

void sub_65399(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 8;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: QUIT PROC MISSION\n" );
    return;
}

void sub_65501(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 114;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: MISSIONS_LEVEL_WALL (LEVEL: " );
    sub_56178( uParam3 );
    sub_55249( ")" );
    sub_56195();
    return;
}

void sub_65731(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 49;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: KILL_AMBIENT_PHONECALL\n" );
    return;
}

void sub_65927(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 38;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam7;
    sub_55197( uParam1 );
    sub_55249( "SET: ONEOFF_PHONE_PLAYER_REPEAT [" );
    sub_55249( uParam5 );
    sub_55249( "] " );
    sub_55249( uParam4 );
    sub_56195();
    return;
}

void sub_66152(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 121;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: GAMETIME MINS DELAY (" );
    sub_56178( uParam3 );
    sub_55249( ")" );
    sub_56195();
    return;
}

void sub_66361(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 43;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam7;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam8;
    sub_55197( uParam1 );
    sub_55249( "SET: ONEOFF_PHONE_PLAYER_VECTOR_REPEAT_QUICK [" );
    sub_55249( uParam5 );
    sub_55249( "] " );
    sub_55249( uParam4 );
    sub_56195();
    return;
}

void sub_66708(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 108;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU12 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    sub_55197( uParam1 );
    sub_55249( "SET: STAT_BOOST\n" );
    return;
}

void sub_66857(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 26;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    sub_55197( uParam1 );
    sub_55249( "SET: PHONE_PLAYER: [" );
    sub_55249( uParam4 );
    sub_55249( "] " );
    sub_55249( uParam3 );
    sub_56195();
    return;
}

void sub_67226(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 36;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam6;
    sub_55197( uParam1 );
    sub_55249( "SET: ONEOFF_PHONE_PLAYER [" );
    sub_55249( uParam5 );
    sub_55249( "] " );
    sub_55249( uParam4 );
    sub_56195();
    return;
}

void sub_67889(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 59;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_AMBIENT_EMAIL\n" );
    return;
}

void sub_68131(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 23;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    sub_55197( uParam1 );
    sub_55249( "SET: SET_OTHER_ANSWER_PHONE: " );
    sub_55249( uParam5 );
    sub_56195();
    return;
}

void sub_68558(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 42;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam7;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam8;
    sub_55197( uParam1 );
    sub_55249( "SET: ONEOFF_PHONE_PLAYER_VECTOR_REPEAT [" );
    sub_55249( uParam5 );
    sub_55249( "] " );
    sub_55249( uParam4 );
    sub_56195();
    return;
}

void sub_68977(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 68;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: PAUSE_STRAND\n" );
    return;
}

void sub_69156(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 40;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam7;
    sub_55197( uParam1 );
    sub_55249( "SET: ONEOFF_PHONE_PLAYER_REPEAT QUICK [" );
    sub_55249( uParam5 );
    sub_55249( "] " );
    sub_55249( uParam4 );
    sub_56195();
    return;
}

void sub_69587(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 2;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    sub_55197( uParam1 );
    sub_55249( "SET: DO MISSION FAILGOTO\n" );
    return;
}

void sub_69858(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 20;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: REMOVE_FROM_PHONEBOOK\n" );
    return;
}

void sub_69964(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 88;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: DECEASED_ON_POLICE_COMPUTER\n" );
    return;
}

void sub_70080(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 92;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: DECEASED_ON_LCPD_WEB\n" );
    return;
}

void sub_71572(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 142;
    sub_55197( uParam1 );
    sub_55249( "SET: KEEP_STRAND_ACTIVE\n" );
    return;
}

void sub_71853(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 143;
    sub_55197( uParam1 );
    sub_55249( "SET: TERMINATE THIS STRAND\n" );
    return;
}

void sub_71946(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 146;
    sub_55197( uParam1 );
    sub_55249( "SET: END STRAND\n" );
    return;
}

void sub_72068()
{
    int iVar2;

    iVar2 = 0;
    sub_72084( iVar2, 6, 22 );
    sub_72084( iVar2, 7, 23 );
    sub_72084( iVar2, 8, 24 );
    sub_72084( iVar2, 11, 25 );
    sub_72084( iVar2, 12, 26 );
    sub_72084( iVar2, 13, 27 );
    sub_72084( iVar2, 5, 28 );
    sub_72439( iVar2, 48, 53, 28, 4, 15, 15 );
    sub_72650( iVar2, 14, 0, 5, 1 );
    return;
}

void sub_72084(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U22274[uParam0]._fU208[uParam1]._fU0 = uParam2;
    sub_72120( uParam0, uParam1 );
    return;
}

void sub_72120(unknown uParam0, unknown uParam1)
{
    int iVar4;
    unknown uVar5;

    iVar4 = 3;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        iVar4 = 0;
        break;
        case 7: return;
        case 8:
        iVar4 = 1;
        break;
        case 13:
        iVar4 = 2;
        break;
        default: return;
    }
    switch (uParam1)
    {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 11:
        case 12:
        case 13: break;
        case 10: return;
    }
    return;
    uVar5 = uParam1;
    SET_BIT( 1, uVar5 );
    return;
    break;
    2;
    1;
    ref g_U64831[iVar4]._fU0;
    1;
    ref g_U64831[iVar4]._fU0;
    break;
}

void sub_72439(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, int iParam4, unknown uParam5, unknown uParam6)
{
    int iVar9;

    g_U22274[uParam0]._fU104 = uParam1;
    g_U22274[uParam0]._fU108 = uParam2;
    g_U22274[uParam0]._fU136 = uParam5;
    g_U22274[uParam0]._fU160 = uParam6;
    g_U22274[uParam0]._fU124 = iParam3;
    g_U22274[uParam0]._fU128 = iParam3 + iParam4;
    if (g_U22274[uParam0]._fU132 == -1)
    {
        iVar9 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( g_U22274[uParam0]._fU124, g_U22274[uParam0]._fU128, ref iVar9 );
        g_U22274[uParam0]._fU132 = iVar9;
    }
    return;
}

void sub_72650(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    g_U22274[uParam0]._fU688._fU0 = 0;
    g_U22274[uParam0]._fU688._fU4 = 0;
    g_U22274[uParam0]._fU688._fU8 = uParam1;
    g_U22274[uParam0]._fU688._fU12 = uParam2;
    g_U22274[uParam0]._fU688._fU16 = uParam3;
    g_U22274[uParam0]._fU688._fU20 = uParam4;
    return;
}

void sub_72787()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0;
    sub_72820( iVar2, iVar3, 29, "roman_taxi" );
    sub_72904( iVar2, iVar3 );
    sub_72958( iVar2, iVar3, 0, 6, 0 );
    return;
}

void sub_72820(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    sub_72084( uParam0, iParam1, uParam2 );
    iVar6 = iParam1 - 0;
    StrCopy( ref g_U22274[uParam0]._fU268[iVar6]._fU4, uParam3, 32 );
    g_U22274[uParam0]._fU268[iVar6]._fU0 = 0;
    return;
}

void sub_72904(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 - 0;
    g_U22274[uParam0]._fU268[iVar4]._fU36 = 1;
    return;
}

void sub_72958(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
    int iVar7;

    if ((iParam4 == 0) AND ((iParam3 == 0) AND (iParam2 == 0)))
    {
        return;
    }
    iVar7 = iParam1 - 0;
    g_U22274[uParam0]._fU268[iVar7]._fU40 = 1;
    g_U22274[uParam0]._fU268[iVar7]._fU44._fU0._fU4 = 0;
    g_U22274[uParam0]._fU268[iVar7]._fU44._fU0._fU0 = iParam2;
    g_U22274[uParam0]._fU268[iVar7]._fU44._fU8._fU0 = iParam3;
    g_U22274[uParam0]._fU268[iVar7]._fU44._fU8._fU4 = iParam4;
    sub_770( ref g_U22274[uParam0]._fU268[iVar7]._fU60 );
    return;
}

void sub_73177()
{
    int iVar2;

    iVar2 = 0;
    sub_73200( iVar2, 40, 4, 44, 4, 5 );
    sub_73544( iVar2, "FCR22AU", "FCRC1AU" );
    sub_73644( iVar2, "FArmA_1", "FArmB_1", "FArmH", "ROMAN", 1 );
    return;
}

void sub_73200(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, unknown uParam5)
{
    int iVar8;

    g_U22274[uParam0]._fU500._fU136 = iParam1;
    g_U22274[uParam0]._fU500._fU140 = iParam1 + iParam2;
    if (g_U22274[uParam0]._fU500._fU144 == -1)
    {
        iVar8 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( g_U22274[uParam0]._fU500._fU136, g_U22274[uParam0]._fU500._fU140, ref iVar8 );
        g_U22274[uParam0]._fU500._fU144 = iVar8;
    }
    g_U22274[uParam0]._fU500._fU148 = iParam3;
    g_U22274[uParam0]._fU500._fU152 = iParam3 + iParam4;
    if (g_U22274[uParam0]._fU500._fU156 == -1)
    {
        GENERATE_RANDOM_INT_IN_RANGE( g_U22274[uParam0]._fU500._fU148, g_U22274[uParam0]._fU500._fU152, ref iVar8 );
        g_U22274[uParam0]._fU500._fU156 = iVar8;
    }
    g_U22274[uParam0]._fU500._fU160 = uParam5;
    return;
}

void sub_73544(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U22274[uParam0]._fU500._fU84, uParam1, 16 );
    StrCopy( ref g_U22274[uParam0]._fU500._fU100, uParam2, 16 );
    return;
}

void sub_73644(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    StrCopy( ref g_U22274[uParam0]._fU500._fU36, uParam1, 16 );
    StrCopy( ref g_U22274[uParam0]._fU500._fU68, uParam2, 16 );
    StrCopy( ref g_U22274[uParam0]._fU500._fU52, uParam3, 16 );
    StrCopy( ref g_U22274[uParam0]._fU500._fU116, uParam4, 16 );
    g_U22274[uParam0]._fU500._fU132 = uParam5;
    return;
}

void sub_73872(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = g_U10981[uParam0]._fU40[0];
    if (iVar3 == g_U10981[uParam0]._fU56[0])
    {
        return;
    }
    g_U10981[uParam0]._fU56[0] = iVar3;
    uVar4 = TO_FLOAT( iVar3 );
    switch (uParam0)
    {
        case 0:
        sub_53464( 2 );
        SET_FLOAT_STAT( 2, uVar4 );
        break;
        case 3:
        sub_53464( 6 );
        SET_FLOAT_STAT( 6, uVar4 );
        break;
        case 7:
        sub_53464( 12 );
        SET_FLOAT_STAT( 12, uVar4 );
        break;
        case 8:
        sub_53464( 15 );
        SET_FLOAT_STAT( 15, uVar4 );
        break;
        case 13:
        sub_53464( 21 );
        SET_FLOAT_STAT( 21, uVar4 );
        break;
        default: return;
    }
    return;
}

void sub_74139(unknown uParam0)
{
    return g_U22274[uParam0]._fU500._fU4;
}

void sub_74180(unknown uParam0)
{
    string sVar3;
    int iVar4;
    unknown uVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    float fVar14;

    sVar3 = "HospitalPickUp";
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    uVar5 = sub_74221( uParam0 );
    if (sub_74594( uVar5 ))
    {
        return;
    }
    if ((IS_THREAD_ACTIVE( g_U812 )) || (g_U10978))
    {
        if ((NOT g_U22274[uParam0]._fU500._fU20) AND (NOT g_U22274[uParam0]._fU500._fU16))
        {
            g_U22274[uParam0]._fU500._fU168 = iVar4 + (sub_80160( uParam0 ));
            return;
        }
    }
    if (g_U22274[uParam0]._fU500._fU24)
    {
        if (IS_THREAD_ACTIVE( g_U22274[uParam0]._fU500._fU180 ))
        {
            return;
        }
        if (g_U22274[uParam0]._fU500._fU180 != nil)
        {
            DESTROY_THREAD( g_U22274[uParam0]._fU500._fU180 );
            g_U22274[uParam0]._fU500._fU180 = nil;
        }
        bVar6 = g_U22274[uParam0]._fU500._fU8;
        uVar7 = g_U22274[uParam0]._fU500._fU184;
        sub_4398( uParam0 );
        if (bVar6)
        {
            sub_80467( uParam0 );
            g_U22274[uParam0]._fU500._fU184 = uVar7;
            return;
        }
        g_U10981[uVar5]._fU28 = 1;
        sub_80625( uParam0 );
        return;
    }
    if (g_U22274[uParam0]._fU500._fU20)
    {
        if (NOT (HAS_SCRIPT_LOADED( sVar3 )))
        {
            REQUEST_SCRIPT( sVar3 );
            return;
        }
        g_U22274[uParam0]._fU500._fU180 = START_NEW_SCRIPT_WITH_ARGS( sVar3, ref uParam0, 1, 1820 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( sVar3 );
        g_U22274[uParam0]._fU500._fU24 = 1;
        return;
    }
    if (g_U22274[uParam0]._fU500._fU16)
    {
        if (sub_80901())
        {
            sub_81004( uParam0 );
            return;
        }
        sub_81004( uParam0 );
        g_U22274[uParam0]._fU500._fU16 = 0;
        g_U22274[uParam0]._fU500._fU176 = 1;
        sub_52331();
        switch (sub_81198())
        {
            case 1:
            case 2:
            if (NOT (sub_81308( uParam0 )))
            {
                return;
            }
            g_U22274[uParam0]._fU500._fU168 = iVar4 + (sub_80160( uParam0 ));
            return;
            case 8:
            case 5:
            g_U22274[uParam0]._fU500._fU176 = 0;
            break;
            case 4: break;
        }
        REQUEST_SCRIPT( sVar3 );
        g_U22274[uParam0]._fU500._fU20 = 1;
        sub_84841( uParam0 );
        if (g_U22274[uParam0]._fU500._fU176)
        {
            sub_51676();
        }
        return;
    }
    if (g_U22274[uParam0]._fU500._fU12)
    {
        sub_4398( uParam0 );
        sub_80625( uParam0 );
        return;
    }
    if (g_U22274[uParam0]._fU500._fU168 < iVar4)
    {
        if ((sub_85730()) || ((sub_85695()) || ((sub_85644()) || (sub_85448()))))
        {
            g_U22274[uParam0]._fU500._fU168 = iVar4 + (sub_80160( uParam0 ));
            return;
        }
        if (sub_86171( 0 ))
        {
            g_U22274[uParam0]._fU500._fU168 = iVar4 + 10000;
            return;
        }
        if (NOT (g_U22274[uParam0]._fU500._fU184 == nil))
        {
            if (DOES_CHAR_EXIST( g_U22274[uParam0]._fU500._fU184 ))
            {
                if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
                {
                    N_1363505769( g_U22274[uParam0]._fU500._fU184, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
                    GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar11._fU0, ref uVar11._fU4, ref uVar11._fU8 );
                    fVar14 = 0.00000000;
                    GET_DISTANCE_BETWEEN_COORDS_3D( uVar8._fU0, uVar8._fU4, uVar8._fU8, uVar11._fU0, uVar11._fU4, uVar11._fU8, ref fVar14 );
                    if (fVar14 < 150.00000000)
                    {
                        g_U22274[uParam0]._fU500._fU168 = iVar4 + (sub_80160( uParam0 ));
                        return;
                    }
                }
            }
        }
        if (NOT g_U26753)
        {
            if (sub_86703( uParam0, uVar5 ))
            {
                g_U22274[uParam0]._fU500._fU16 = 1;
                return;
            }
        }
        g_U22274[uParam0]._fU500._fU168 = iVar4 + (sub_80160( uParam0 ));
        return;
    }
    return;
}

int sub_74221(unknown uParam0)
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
        case 22: return 20;
        case 20: return 21;
        case 21: return 22;
    }
    sub_23915( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

int sub_74594(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_74605( uParam0 );
    if (sub_75025( uVar3, 1 ))
    {
        sub_75373( ref g_U10981[uParam0]._fU92, ref g_U10981[uParam0]._fU76, 0 );
        sub_79389( ref g_U10981[uParam0]._fU92, ref g_U10981[uParam0]._fU76 );
        sub_79984( uVar3 );
        sub_52331();
        return 1;
    }
    return 0;
}

int sub_74605(unknown uParam0)
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
    sub_23915( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

int sub_75025(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_75108( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_75108( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U91._fU60 == iParam0) AND (g_U91._fU0 == 1005))
    {
        if (bParam1)
        {
            if ((NOT g_U91._fU372) AND (g_U91._fU508 >= 4))
            {
                return 1;
            }
        }
        else if (NOT g_U91._fU368)
        {
            return 1;
        }
    }
    return 0;
}

void sub_75108(unknown uParam0)
{
    return;
}

int sub_75373(unknown uParam0, unknown uParam1, boolean bParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam0, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    uVar23 = g_U91._fU60;
    if (NOT (COMPARE_STRING( uParam0, "PLACEHOLDER" )))
    {
        if (bParam2)
        {
            return sub_75481( uVar23, ref cVar5, uParam1, 0, ref uVar14, ref uVar14, "", 0, bParam2, 1, 1, 0, 0, 0 );
        }
        if ((NOT g_U91._fU368) == 1)
        {
            StrCopy( ref g_U91._fU224[0], uParam1, 16 );
            StrCopy( ref g_U91._fU224[1], uParam0, 16 );
            sub_77368( uVar23, ref g_U91._fU176 );
            g_U91._fU368 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_75481(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_75108( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_75108( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        sub_75108( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() ))) AND (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() )))
    {
        sub_75108( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_75108( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_75996()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((NOT bParam8) || (g_U91._fU372))
            {
                sub_75108( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 4) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 5))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT bParam11) AND (NOT sub_75996()))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_77368( uParam0, ref g_U91._fU176 );
    sub_78749( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_78989( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

int sub_75996()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_76053())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_76053()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        sub_75108( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_75108( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_75108( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_75108( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( CurrentPlayerId() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() )))
        {
            GET_SCRIPT_TASK_STATUS( CurrentPlayerChar(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_75108( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( CurrentPlayerChar() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_75108( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_75108( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( CurrentPlayerId() )))
    {
        sub_75108( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_77368(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_78749(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_78989(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_79389(unknown uParam0, unknown uParam1)
{
    if (COMPARE_STRING( uParam1, "MF8AUD" ))
    {
        if (COMPARE_STRING( uParam0, "MF4_FM8" ))
        {
            sub_79460( "WOMANS_VOICE" );
            return;
        }
    }
    if (COMPARE_STRING( uParam1, "MF2AUD" ))
    {
        if (COMPARE_STRING( uParam0, "MF2_CCIA4" ))
        {
            sub_79460( "WOMANS_VOICE" );
            return;
        }
    }
    if (COMPARE_STRING( uParam1, "MF14AUD" ))
    {
        if (COMPARE_STRING( uParam0, "MF6_GLSAP" ))
        {
            sub_79460( "RECEPTIONIST_F" );
            return;
        }
    }
    if (NOT (COMPARE_STRING( uParam1, "MF14AUD" )))
    {
        return;
    }

    // Looks like the different phones in use I think, like when Niko gets the phone upgraded.
    if ((COMPARE_STRING( uParam0, "MF6_BUN" )) || ((COMPARE_STRING( uParam0, "MF6_BOFF" )) || ((COMPARE_STRING( uParam0, "MF6_BNR" )) || (COMPARE_STRING( uParam0, "MF6_BMSG" )))))
    {
        sub_79460( "BADGER" );
        return;
    }
    if ((COMPARE_STRING( uParam0, "MF6_TUN" )) || ((COMPARE_STRING( uParam0, "MF6_TOFF" )) || ((COMPARE_STRING( uParam0, "MF6_TNR" )) || (COMPARE_STRING( uParam0, "MF6_TMSG" )))))
    {
        sub_79460( "TINKLE" );
        return;
    }
    if ((COMPARE_STRING( uParam0, "MF6_WUN" )) || ((COMPARE_STRING( uParam0, "MF6_WOFF" )) || ((COMPARE_STRING( uParam0, "MF6_WNR" )) || (COMPARE_STRING( uParam0, "MF6_WMSG" )))))
    {
        sub_79460( "WHIZ" );
        return;
    }
    return;
}

void sub_79460(unknown uParam0)
{
    StrCopy( ref g_U91._fU176, uParam0, 32 );
    return;
}

void sub_79984(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    iVar4 = 14;
    while (iVar3 < iVar4)
    {
        g_U15946[uParam0]._fU8[1]._fU0[iVar3] = 0;
        iVar3++;
    }
    g_U15946[uParam0]._fU4 = 0;
    return;
}

void sub_80160(unknown uParam0)
{
    int iVar3;
    int Result;

    iVar3 = 60000;
    if (g_U22274[uParam0]._fU500._fU164 < 60000)
    {
        iVar3 = 25000;
    }
    Result = g_U22274[uParam0]._fU500._fU164 / 10;
    if (Result < iVar3)
    {
        Result = iVar3;
    }
    return Result;
}

void sub_80467(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    g_U22274[uParam0]._fU500._fU4 = 1;
    g_U22274[uParam0]._fU500._fU168 = iVar3 + g_U22274[uParam0]._fU500._fU164;
    sub_55249( "CONTACT REHOSPITALISED\n" );
    return;
}

void sub_80625(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_74221( uParam0 );
    if (g_U13391[uVar3]._fU160._fU4)
    {
        return;
    }
    if (g_U13391[uVar3]._fU160._fU0)
    {
        if (g_U13391[uVar3]._fU160._fU8)
        {
            g_U15946[uParam0]._fU8[0]._fU0[3] = 1;
        }
        g_U13391[uVar3]._fU160._fU108._fU0 = 1;
    }
    return;
}

int sub_80901()
{
    if (g_U91._fU60 != -1)
    {
        if ((g_U15946[g_U91._fU60]._fU132._fU24 == 3) || (g_U15946[g_U91._fU60]._fU132._fU24 == 0))
        {
            return 1;
        }
    }
    return 0;
}

void sub_81004(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (NOT g_U15654[6])
        {
            return;
        }
        if (NOT (g_U91._fU0 == 1008))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HELP_YN" ))
            {
                CLEAR_HELP();
            }
            return;
        }
        if (g_U9199)
        {
            return;
        }
        PRINT_HELP( "HELP_YN" );
        g_U9199 = 1;
        break;
        default:
    }
    return;
}

int sub_81198()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_81308(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    g_U22274[uParam0]._fU500._fU172++;
    if (g_U22274[uParam0]._fU500._fU172 < 3)
    {
        return 1;
    }
    sub_4398( uParam0 );
    uVar3 = sub_74221( uParam0 );
    sub_81405( uVar3 );
    uVar4 = g_U22274[uParam0]._fU104;
    uVar5 = g_U22274[uParam0]._fU500._fU160;
    sub_82376( uVar4 );
    sub_82482( uVar4, uParam0, uVar5, 0 );
    return 0;
}

void sub_81405(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0:
        case 7:
        iVar3 = -10;
        break;
        case 3:
        iVar3 = -10;
        break;
        case 8:
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_23915( "Flow_Hospital_No_Pickup_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_81579( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_81579( uParam0, 0, iVar4 );
    return;
}

void sub_81579(unknown uParam0, int iParam1, int iParam2)
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
        sub_81736( uParam0 );
    }
    return;
}

void sub_81736(unknown uParam0)
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

void sub_82376(unknown uParam0)
{
    g_U63988._fU12[uParam0]._fU0 = 0;
    g_U63988._fU12[uParam0]._fU4 = 0;
    g_U63988._fU12[uParam0]._fU12 = 57;
    g_U63988._fU12[uParam0]._fU16 = 0;
    g_U63988._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_82482(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    Text_Player( uParam0, uParam1, uParam2, uParam3, iVar6 );
    return;
}

// sub_82504
void Text_Player(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_82616( uParam1, uParam2 );
        return;
    }
    if (g_U63988._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar8 = 0;
    GET_GAME_TIMER( ref iVar8 );
    g_U63988._fU12[iParam0]._fU0 = 1;
    g_U63988._fU12[iParam0]._fU4 = 0;
    g_U63988._fU12[iParam0]._fU8 = 0;
    g_U63988._fU12[iParam0]._fU12 = uParam1;
    g_U63988._fU12[iParam0]._fU16 = uParam2;
    g_U63988._fU12[iParam0]._fU20 = iVar8 + iParam3;
    g_U63988._fU12[iParam0]._fU28 = uParam4;
    sub_84550( iParam0, iParam3 );
    return;
}

void sub_82616(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    uVar11 = sub_82639( uParam0 );
    sub_83130( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_83474( ref uVar4, 1 );
    sub_83502( ref uVar4, 0 );
    sub_83530( ref uVar4, 2 );
    sub_83560( ref uVar4 );
    return;
}

int sub_82639(unknown uParam0)
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
        case 22: return 22;
        case 20: return 20;
        case 28: return 28;
        case 29: return 29;
        case 30: return 30;
        case 31: return 31;
        case 32: return 32;
        case 34: return 81;
        case 25: return 25;
    }
    sub_23915( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_83130(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_83152( uParam0, 0, iParam4 + 0 );
    sub_83152( uParam1, 1, iParam4 + 0 );
    sub_83152( uParam2, 2, iParam4 + 0 );
    sub_83152( uParam3, 3, iParam4 + 0 );
    sub_83152( 0, 4, iParam4 + 0 );
    sub_83152( 1, 5, iParam4 + 0 );
    sub_83152( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_83152(unknown uParam0, unknown uParam1, int iParam2)
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
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_83474(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_83502(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_83530(int iParam0, unknown uParam1)
{
    sub_83152( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_83560(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_83630())
        {
            sub_52082( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_83757( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_52082( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_51831( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_51831( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_83630()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_51831( 1, g_U569[I] )) != 0))
        {
            sub_52082( I );
            return 1;
        }
    }
    return 0;
}

int sub_83757(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_83822( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_83822(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_51831( 0, uParam0 );
        if (iVar14 == (sub_51831( 0, uParam6 )))
        {
            iVar15 = sub_51831( 3, uParam0 );
            if (iVar15 == (sub_51831( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_84550(unknown uParam0, int iParam1)
{
    g_U63988._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_84589( iParam1 ))
    {
        g_U63988._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_84589(int iParam0)
{
    int iVar3;

    iVar3 = sub_52353();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_84619();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

// Possibly something to do with money?
int sub_84619()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_84841(unknown uParam0)
{
    g_U22274[uParam0]._fU500._fU28 = sub_84850();
    g_U22274[uParam0]._fU500._fU32 = Find_Appropriate_Dropoff( uParam0 );
    return;
}

int sub_84850()
{
    int iVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    int Result;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    float fVar13;
    int I;

    iVar2 = GET_INT_STAT( 363 );
    iVar3 = 0;
    if (g_U9937 <= iVar2)
    {
        iVar3 = g_U9937;
    }
    fVar4 = 99999.90000000;
    fVar5 = 70.00000000;
    Result = -1;
    fVar13 = 0.00000000;
    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        I = 0;
        for ( I = 0; I < 7; I++ )
        {
            if (g_U10090[I]._fU0 == iVar3)
            {
                uVar10 = {g_U10090[I]._fU4};
                GET_DISTANCE_BETWEEN_COORDS_3D( uVar10._fU0, uVar10._fU4, uVar10._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref fVar13 );
                if ((fVar13 > fVar5) AND (fVar13 < fVar4))
                {
                    fVar4 = fVar13;
                    Result = I;
                }
            }
        }
        if (NOT (Result == -1))
        {
            return Result;
        }
    }
    return 0;
}

// sub_85133
int Find_Appropriate_Dropoff(unknown friendId)
{
    switch (friendId)
    {
        case 0:
        if (g_U9731[0]._fU0)
        {
            return 0;
        }
        if (g_U9731[1]._fU0)
        {
            return 1;
        }
        return 2;
        case 3: return 3;
        case 7: return 4;
        case 8: return 5;
        case 13: return 7;
    }
    SCRIPT_ASSERT( "Find_Appropriate_Dropoff: Unknown Friend ID for Dropoff" );
    return 10;
}

int sub_85448()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U15436[I]._fU8)
        {
            return 1;
        }
    }
    for ( I = 0; I < 23; I++ )
    {
        if (g_U22274[I]._fU68)
        {
            return 1;
        }
        if (g_U22274[I]._fU500._fU16)
        {
            return 1;
        }
    }
    for ( I = 0; I < 13; I++ )
    {
        if (g_U15807[I]._fU0)
        {
            if (g_U15807[I]._fU12)
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_85644()
{
    if ((g_U91._fU0 == 1008) || (g_U91._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

int sub_85695()
{
    if (g_U555 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_85730()
{
    int I;
    unknown uVar3;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (sub_85756( I ))
        {
            uVar3 = sub_74605( I );
            if (g_U22274[uVar3]._fU0)
            {
                if (NOT (g_U13391[I]._fU80._fU0 == 0))
                {
                    PRINTSTRING( ".....Check_If_Friend_Activity_Setup: " );
                    PRINTINT( I );
                    PRINTSTRING( " strand setup\n" );
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_85756(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22: return 1;
    }
    return 0;
}

int sub_86171(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_86191())
    {
        return 1;
    }
    if (sub_86226())
    {
        return 1;
    }
    if (NOT (iParam0 == 0))
    {
        if (NOT (sub_84589( iParam0 )))
        {
            iParam0 = 0;
        }
    }
    if (NOT (iParam0 == 0))
    {
        if (sub_86323( iParam0 ))
        {
            return 1;
        }
        return 0;
    }
    if (g_U63988._fU4 > iVar3)
    {
        return 1;
    }
    return 0;
}

void sub_86191()
{
    return g_U91._fU540;
}

int sub_86226()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (g_U63988._fU0 > iVar2)
    {
        return 1;
    }
    return 0;
}

int sub_86323(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 - g_U63988._fU8;
    if (iVar4 < iParam0)
    {
        return 1;
    }
    return 0;
}

int sub_86703(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_86716( uParam0, uParam1 );
    switch (uParam0)
    {
        case 0:
        if ((NOT g_U15654[7]) AND (g_U15654[6]))
        {
            g_U15654[7] = 1;
            return sub_86996( uParam0, "MF5AUD", "MF3_CNSAVE", "MF3_HOSPY", "MF3_HOSPNO", "HF1_HOS" );
        }
        else if (iVar4 == 0)
        {
            return sub_87823( uParam0, "FCR22AU", "FCR_GCHA", "FCR_GCHY", "FCR_GCHAC", "FCR_GCHN", "FCR_GCHRHI", "HF1_HOS" );
        }
        else if (iVar4 == 1)
        {
            return sub_87823( uParam0, "FCR22AU", "FCR_GCHA", "FCR_GCHY", "FCR_GCHAC", "FCR_GCHN", "FCR_GCHRM", "HF1_HOS" );
        }
        else
        {
            return sub_87823( uParam0, "FCR22AU", "FCR_GCHA", "FCR_GCHY", "FCR_GCHAC", "FCR_GCHN", "FCR_GCHLO", "HF1_HOS" );
        };;;
        break;
        case 3:
        if (iVar4 == 0)
        {
            return sub_87823( uParam0, "FCJCPAU", "FCJ_GCHA", "FCJ_GCHY", "FCJ_GCHACC", "FCJ_GCHN", "FCJ_GCHREJHI", "HF4_HOS" );
        }
        else if (iVar4 == 1)
        {
            return sub_87823( uParam0, "FCJCPAU", "FCJ_GCHA", "FCJ_GCHY", "FCJ_GCHACC", "FCJ_GCHN", "FCJ_GCHREJMD", "HF4_HOS" );
        }
        else
        {
            return sub_87823( uParam0, "FCJCPAU", "FCJ_GCHA", "FCJ_GCHY", "FCJ_GCHACC", "FCJ_GCHN", "FCJ_GCHREJLO", "HF4_HOS" );
        }
        break;
        case 7:
        if (iVar4 == 0)
        {
            return sub_87823( uParam0, "FCD2AU", "FCD2_HOSASK", "FCD2_HOSY", "FCD2_HOSACC", "FCD2_HOSNO", "FCD2_HOSRHI", "HF8_HOS" );
        }
        else if (iVar4 == 1)
        {
            return sub_87823( uParam0, "FCD2AU", "FCD2_HOSASK", "FCD2_HOSY", "FCD2_HOSACC", "FCD2_HOSNO", "FCD2_HOSRM", "HF8_HOS" );
        }
        else
        {
            return sub_87823( uParam0, "FCD2AU", "FCD2_HOSASK", "FCD2_HOSY", "FCD2_HOSACC", "FCD2_HOSNO", "FCD2_HOSRLO", "HF8_HOS" );
        }
        break;
        case 8:
        if (iVar4 == 0)
        {
            return sub_87823( uParam0, "FCB2aAU", "FCB2_GHOSPA", "FCB2_HOSPY", "FCB2_HACC", "FCB2_HNO", "FCB2_HREJN", "HF9_HOS" );
        }
        else if (iVar4 == 1)
        {
            return sub_87823( uParam0, "FCB2aAU", "FCB2_GHOSPA", "FCB2_HOSPY", "FCB2_HACC", "FCB2_HNO", "FCB2_HREJMD", "HF9_HOS" );
        }
        else
        {
            return sub_87823( uParam0, "FCB2aAU", "FCB2_GHOSPA", "FCB2_HOSPY", "FCB2_HACC", "FCB2_HNO", "FCB2_HREJLO", "HF9_HOS" );
        }
        break;
        case 13:
        if (iVar4 == 0)
        {
            return sub_87823( uParam0, "FCPSAUD", "FCP_GCHA", "FCP_GCHY", "FCP_GCHACC", "FCP_GCHN", "FCP_GCHREJHI", "HF15_HOS" );
        }
        else if (iVar4 == 1)
        {
            return sub_87823( uParam0, "FCPSAUD", "FCP_GCHA", "FCP_GCHY", "FCP_GCHACC", "FCP_GCHN", "FCP_GCHREJMD", "HF15_HOS" );
        }
        else
        {
            return sub_87823( uParam0, "FCPSAUD", "FCP_GCHA", "FCP_GCHY", "FCP_GCHACC", "FCP_GCHN", "FCP_GCJREJLO", "HF15_HOS" );
        }
        break;
    }
    sub_89522( uParam0, "PLACEHOLDER", "FCRDCAU", 10000, 0 );
    return 1;
}

int sub_86716(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    iVar4 = g_U10981[uParam1]._fU40[1];
    iVar5 = g_U10981[uParam1]._fU144._fU132;
    iVar6 = g_U22274[uParam0]._fU160;
    iVar7 = iVar5 - iVar6;
    iVar8 = iVar7 / 5;
    iVar9 = iVar5 - iVar8;
    if (iVar4 >= iVar9)
    {
        return 0;
    }
    iVar9 = iVar6 + iVar8;
    if (iVar4 >= iVar9)
    {
        return 1;
    }
    return 2;
}

int sub_86996(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_87007( uParam0 );
    sub_87183( ref l_U280[uVar8]._fU0, uParam2, "END" );
    if (sub_87546( uParam0, ref l_U280[uVar8]._fU0, uParam3, uParam4, uParam5, uParam1, 10000 ))
    {
        sub_52331();
        sub_87630( uParam0, 1 );
        return 1;
    }
    return 0;
}

int sub_87007(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 3: return 1;
        case 7: return 2;
        case 8: return 3;
        case 13: return 4;
    }
    sub_23915( "Get_Phonecall_Friend_From_Contact: Ujrecognised Friend ID" );
    return 5;
}

void sub_87183(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_87234( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_87234(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_87546(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[12] cVar9;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    char[12] cVar18;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;

    array(ref cVar9, 2);
    StrCopy( ref cVar9[0], uParam2, 16 );
    array(ref cVar18, 2);
    StrCopy( ref cVar18[0], uParam3, 16 );
    return sub_75481( uParam0, uParam1, uParam5, 1, ref cVar9, ref cVar18, uParam4, uParam6, 1, 0, 1, 0, 0, 0 );
}

void sub_87630(int iParam0, boolean bParam1)
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

int sub_87823(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;

    uVar10 = sub_87007( uParam0 );
    sub_87183( ref l_U280[uVar10]._fU0, uParam2, "END" );
    sub_87183( ref l_U280[uVar10]._fU84, uParam3, uParam4 );
    sub_87183( ref l_U280[uVar10]._fU120, uParam5, uParam6 );
    if (sub_87968( uParam0, ref l_U280[uVar10]._fU0, ref l_U280[uVar10]._fU84, ref l_U280[uVar10]._fU120, uParam7, uParam1, 10000 ))
    {
        sub_52331();
        sub_87630( uParam0, 1 );
        return 1;
    }
    return 0;
}

void sub_87968(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    return sub_75481( uParam0, uParam1, uParam5, 1, uParam2, uParam3, uParam4, uParam6, 1, 0, 1, 0, 0, 0 );
}

void sub_89522(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[12] cVar7;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown[2] uVar16;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;

    array(ref cVar7, 2);
    StrCopy( ref cVar7[0], uParam1, 16 );
    StrCopy( ref cVar7[1], "END", 16 );
    array(ref uVar16, 2);
    return sub_75481( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_89676(unknown uParam0)
{
    sub_89687( uParam0 );
    sub_90472( uParam0 );
    if (g_U10981[uParam0]._fU292._fU0)
    {
        sub_74594( uParam0 );
        return 1;
    }
    if (g_U10981[uParam0]._fU108)
    {
        sub_74594( uParam0 );
        return 1;
    }
    return 0;
}

void sub_89687(unknown uParam0)
{
    if (NOT g_U10981[uParam0]._fU292._fU4)
    {
        return;
    }
    sub_89724( uParam0 );
    if (NOT (sub_89959( g_U10981[uParam0]._fU292._fU8 )))
    {
        return;
    }
    g_U10981[uParam0]._fU292._fU4 = 0;
    sub_770( ref g_U10981[uParam0]._fU292._fU8 );
    sub_90254( uParam0 );
    return;
}

void sub_89724(unknown uParam0)
{
    unknown uVar3;

    if (g_U10981[uParam0]._fU292._fU0)
    {
        return;
    }
    if (g_U13391[uParam0]._fU80._fU0 == 1)
    {
        sub_47373( uParam0 );
    }
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        sub_54189( uParam0 );
    }
    uVar3 = sub_74605( uParam0 );
    if (g_U13391[uParam0]._fU160._fU0)
    {
        if (g_U13391[uParam0]._fU160._fU8)
        {
            g_U15946[uVar3]._fU8[0]._fU0[3] = 0;
        }
        g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    }
    g_U10981[uParam0]._fU292._fU0 = 1;
    return;
}

int sub_89959(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar6 == uParam0._fU0._fU0) AND (iVar7 == uParam0._fU0._fU4))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_90128( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_90128(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

void sub_90254(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U10981[uParam0]._fU292._fU0)
    {
        return;
    }
    if (g_U10981[uParam0]._fU292._fU4)
    {
        return;
    }
    if (g_U10981[uParam0]._fU292._fU24)
    {
        return;
    }
    if (g_U13391[uParam0]._fU160._fU0)
    {
        uVar3 = sub_74605( uParam0 );
        if (g_U13391[uParam0]._fU160._fU8)
        {
            g_U15946[uVar3]._fU8[0]._fU0[3] = 1;
        }
        g_U13391[uParam0]._fU160._fU108._fU0 = 1;
    }
    g_U10981[uParam0]._fU292._fU0 = 0;
    return;
}

void sub_90472(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT g_U10981[uParam0]._fU292._fU24)
    {
        return;
    }
    sub_89724( uParam0 );
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        return;
    }
    uVar3 = g_U10981[uParam0]._fU292._fU28._fU0;
    uVar4 = g_U10981[uParam0]._fU292._fU28._fU4;
    uVar5 = g_U10981[uParam0]._fU292._fU40;
    if (LOCATE_CHAR_ANY_MEANS_2D( CurrentPlayerChar(), uVar3, uVar4, uVar5, uVar5, 0 ))
    {
        return;
    }
    g_U10981[uParam0]._fU292._fU24 = 0;
    g_U10981[uParam0]._fU292._fU28 = {0.00000000, 0.00000000, 0.00000000};
    g_U10981[uParam0]._fU292._fU40 = 0.00000000;
    sub_90254( uParam0 );
    return;
}

void sub_90924(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    unknown uVar8;

    if (g_U10981[uParam1]._fU144._fU24)
    {
        if (sub_90957( uParam1 ))
        {
            return;
        }
        if (g_U10981[uParam1]._fU144._fU28)
        {
            g_U10981[uParam1]._fU144._fU84 = 0;
            g_U10981[uParam1]._fU144._fU28 = 0;
            return;
        }
    }
    if (g_U10981[uParam1]._fU144._fU84)
    {
        if (g_U10981[uParam1]._fU144._fU88)
        {
            if (IS_THREAD_ACTIVE( g_U10981[uParam1]._fU144._fU92 ))
            {
                sub_91226( uParam0, uParam1 );
                return;
            }
            if (g_U10981[uParam1]._fU144._fU92 != nil)
            {
                DESTROY_THREAD( g_U10981[uParam1]._fU144._fU92 );
            }
            uVar4 = g_U10981[uParam1]._fU144._fU128;
            sub_91738( uParam0, uVar4 );
            sub_1289( uParam1 );
            return;
        }
        REQUEST_SCRIPT( ref g_U10981[uParam1]._fU144._fU96 );
        if (NOT (HAS_SCRIPT_LOADED( ref g_U10981[uParam1]._fU144._fU96 )))
        {
            REQUEST_SCRIPT( ref g_U10981[uParam1]._fU144._fU96 );
            return;
        }
        g_U10981[uParam1]._fU144._fU92 = START_NEW_SCRIPT( ref g_U10981[uParam1]._fU144._fU96, 1828 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U10981[uParam1]._fU144._fU96 );
        g_U10981[uParam1]._fU144._fU88 = 1;
        g_U10981[uParam1]._fU28 = 1;
        return;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    iVar6 = 0;
    if (g_U10981[uParam1]._fU144._fU40)
    {
        if (sub_80901())
        {
            return;
        }
        sub_52331();
        switch (sub_81198())
        {
            case 1:
            case 2:
            g_U10981[uParam1]._fU144._fU40 = 0;
            g_U10981[uParam1]._fU144._fU12 = 0;
            g_U10981[uParam1]._fU144._fU16 = iVar5 + 60000;
            return;
        }
        if (sub_92915())
        {
            g_U10981[uParam1]._fU144._fU40 = 0;
            g_U10981[uParam1]._fU144._fU12 = 0;
            g_U10981[uParam1]._fU144._fU16 = iVar5 + 60000;
            return;
        }
        g_U10981[uParam1]._fU144._fU40 = 0;
        g_U10981[uParam1]._fU144._fU44 = 1;
        g_U10981[uParam1]._fU28 = 1;
        sub_87630( uParam0, 0 );
        Trigger_Additional_Code( 1, uParam0 );
        g_U10981[uParam1]._fU144._fU48 = 1;
        return;
    }
    if (g_U10981[uParam1]._fU144._fU48)
    {
        if (NOT g_U10978)
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                if (NOT sub_95498())
                {
                    PRINT_HELP( ref g_U10981[uParam1]._fU144._fU52 );
                    g_U10981[uParam1]._fU144._fU48 = 0;
                }
            }
        }
    }
    if (NOT g_U10981[uParam1]._fU144._fU0)
    {
        return;
    }
    if (g_U10981[uParam1]._fU144._fU32)
    {
        sub_91226( uParam0, uParam1 );
        return;
    }
    if (g_U13391[uParam1]._fU160._fU96)
    {
        if (sub_95672( uParam1 ))
        {
            sub_91226( uParam0, uParam1 );
            return;
        }
    }
    if (sub_95739( uParam0 ))
    {
        sub_91226( uParam0, uParam1 );
        return;
    }
    if (g_U15946[uParam0]._fU4)
    {
        sub_95834( uParam0, uParam1 );
        return;
    }
    iVar7 = g_U10981[uParam1]._fU40[1];
    if (g_U10981[uParam1]._fU144._fU20)
    {
        if (iVar7 < g_U10981[uParam1]._fU144._fU132)
        {
            g_U10981[uParam1]._fU144._fU20 = 0;
            sub_106308( uParam0 );
        }
    }
    else if ((sub_106438( uParam1 )) AND (iVar7 >= g_U10981[uParam1]._fU144._fU132))
    {
        if (NOT g_U10981[uParam1]._fU144._fU12)
        {
            if (g_U10981[uParam1]._fU144._fU16 > 0)
            {
                if (iVar5 > g_U10981[uParam1]._fU144._fU16)
                {
                    g_U10981[uParam1]._fU144._fU12 = 1;
                }
            }
        }
        if (g_U10981[uParam1]._fU144._fU12)
        {
            if (NOT g_U10981[uParam1]._fU144._fU44)
            {
                if (NOT (sub_106637( uParam1 )))
                {
                    g_U10981[uParam1]._fU144._fU12 = 0;
                    g_U10981[uParam1]._fU144._fU16 = iVar5 + 60000;
                    return;
                }
                if (NOT (sub_106929( uParam0 )))
                {
                    g_U10981[uParam1]._fU144._fU12 = 0;
                    g_U10981[uParam1]._fU144._fU16 = iVar5 + 60000;
                    return;
                }
                g_U10981[uParam1]._fU144._fU40 = 1;
                sub_107453( uParam1 );
                return;
            }
            iVar6 = g_U22274[uParam0]._fU104;
            uVar8 = g_U10981[uParam1]._fU144._fU144;
            sub_82376( iVar6 );
            Text_Player( iVar6, uParam0, uVar8, 0, 2 );
            return;
        }
    }
    else if (NOT g_U10981[uParam1]._fU144._fU12)
    {
        if (g_U10981[uParam1]._fU144._fU16 > 0)
        {
            g_U10981[uParam1]._fU144._fU16 = iVar5 + 60000;
        }
    };;;
    return;
}

int sub_90957(unknown uParam0)
{
    boolean bVar3;

    bVar3 = false;
    switch (sub_81198())
    {
        case 2:
        bVar3 = true;
        break;
        case 6:
        bVar3 = false;
        break;
        default: return 1;
    }
    g_U10981[uParam0]._fU144._fU24 = 0;
    if (NOT bVar3)
    {
        g_U10981[uParam0]._fU144._fU84 = 1;
    }
    return 0;
}

int sub_91226(unknown uParam0, unknown uParam1)
{
    if (g_U15946[uParam0]._fU4)
    {
        if (sub_91255( uParam0 ))
        {
            sub_91537( uParam1 );
            return 1;
        }
    }
    return 0;
}

int sub_91255(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 14;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        if (g_U15946[uParam0]._fU8[1]._fU0[I])
        {
            iVar5 = I;
            switch (iVar5)
            {
                case 0: return 1;
                case 1: return 0;
                case 2: return 0;
                case 4:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 5: return 0;
                case 3: return 0;
            }
        }
    }
    sub_55041( "Is_Cellphone_Special_Selected: Unknown activity" );
    return 0;
}

void sub_91537(unknown uParam0)
{
    unknown uVar3;

    sub_75373( ref g_U10981[uParam0]._fU92, ref g_U10981[uParam0]._fU76, 0 );
    sub_79389( ref g_U10981[uParam0]._fU92, ref g_U10981[uParam0]._fU76 );
    uVar3 = sub_74605( uParam0 );
    sub_79984( uVar3 );
    sub_52331();
    return;
}

void sub_91738(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    unknown uVar6;
    int iVar7;

    if (NOT g_U22274[uParam0]._fU268[uParam1]._fU0)
    {
        return;
    }
    if (NOT g_U22274[uParam0]._fU268[uParam1]._fU40)
    {
        return;
    }
    iVar4 = g_U22274[uParam0]._fU268[uParam1]._fU44._fU0._fU0;
    iVar5 = g_U22274[uParam0]._fU268[uParam1]._fU44._fU8._fU0;
    uVar6 = g_U22274[uParam0]._fU268[uParam1]._fU44._fU8._fU4;
    while (iVar4 > 0)
    {
        iVar4--;
        iVar5 += 24;
    }
    iVar7 = 0;
    sub_91953( ref g_U22274[uParam0]._fU268[uParam1]._fU60, iVar5, uVar6, iVar7 );
    return;
}

void sub_91953(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_92006( iParam0, uParam1, uParam2 );
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
        sub_92138( iParam0 + 0 );
    }
    return;
}

void sub_92006(int iParam0, int iParam1, int iParam2)
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
        sub_92138( iParam0 + 0 );
    }
    return;
}

void sub_92138(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_92169( iParam0->_fU4 )))
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

int sub_92169(unknown uParam0)
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

void sub_92915()
{
    return g_U91._fU504;
}

// sub_93077
void Trigger_Additional_Code(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    boolean bVar6;

    if (iParam0 == 7)
    {
        return;
    }
    iVar4 = 28;
    if (iParam1 < 23)
    {
        iVar4 = sub_74221( iParam1 );
    }
    iVar5 = 0;
    bVar6 = false;
    switch (iParam0)
    {
        case 0:
        sub_93192( 4, 1 );
        sub_93232( 36 );
        break;
        case 1:
        g_U10981[iVar4]._fU144._fU20 = 1;
        sub_93401( iParam1 );
        sub_93504( iParam1 );
        sub_93950( iParam1 );
        sub_94092( iVar4 );
        break;
        case 2:
        g_U10981[iVar4]._fU144._fU20 = 1;
        sub_93401( iParam1 );
        sub_93504( iParam1 );
        iVar5 = g_U10981[iVar4]._fU144._fU144;
        iVar5++;
        if (iVar5 >= g_U10981[iVar4]._fU144._fU140)
        {
            iVar5 = g_U10981[iVar4]._fU144._fU136;
        }
        g_U10981[iVar4]._fU144._fU144 = iVar5;
        break;
        case 3:
        bVar6 = false;
        if (NOT g_U22274[iParam1]._fU92)
        {
            g_U22274[iParam1]._fU92 = 1;
            bVar6 = true;
        }
        else if (NOT g_U22274[iParam1]._fU96)
        {
            g_U22274[iParam1]._fU96 = 1;
            bVar6 = true;
        }
        if (bVar6)
        {
            sub_94701( iVar4 );
        }
        break;
        case 4:
        sub_94918( iVar4 );
        sub_95119( iVar4 );
        break;
        case 5:
        sub_81405( iVar4 );
        break;
        case 6:
        PRINT_NOW( "GOROMAN", 6000, 1 );
        break;
        default: SCRIPT_ASSERT( "Trigger_Additional_Code: Unknown Code ID" );
    }
    return;
}

void sub_93192(unknown uParam0, unknown uParam1)
{
    g_U10133._fU168[uParam0] = uParam1;
    sub_41765();
    return;
}

void sub_93232(unknown uParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( g_U10324[uParam0]._fU32 )))
    {
        return;
    }
    if (NOT (g_U10133._fU520[uParam0] == 0))
    {
        return;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    g_U10133._fU520[uParam0] = iVar3 + 10000;
    FLASH_BLIP( g_U10324[uParam0]._fU32, 1 );
    CHANGE_BLIP_PRIORITY( g_U10324[uParam0]._fU32, l_U6 );
    return;
}

void sub_93401(unknown uParam0)
{
    int I;
    int iVar4;

    I = 0;
    iVar4 = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U22274[uParam0]._fU268[I]._fU0)
        {
            iVar4 = 0 + I;
            g_U15946[uParam0]._fU8[0]._fU0[iVar4] = 1;
        }
    }
    return;
}

void sub_93504(unknown uParam0)
{
    int I;

    I = 1;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U22274[uParam0]._fU268[I]._fU0)
        {
            if (g_U22274[uParam0]._fU268[I]._fU40)
            {
                sub_93604( ref g_U22274[uParam0]._fU268[I]._fU60 );
                sub_93700( ref g_U22274[uParam0]._fU268[I]._fU60, 0, 1 );
            }
        }
    }
    return;
}

void sub_93604(int iParam0)
{
    sub_93617( iParam0 + 0 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    return;
}

void sub_93617(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_93700(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 -= iParam2;
    ref iParam0->_fU8->_fU0 -= iParam1;
    while ((ref iParam0->_fU8->_fU4) < 0)
    {
        ref iParam0->_fU8->_fU4 += 60;
        ref iParam0->_fU8->_fU0--;
    }
    while ((ref iParam0->_fU8->_fU0) < 0)
    {
        ref iParam0->_fU8->_fU0 += 24;
        sub_93830( iParam0 + 0 );
    }
    return;
}

void sub_93830(int iParam0)
{
    iParam0->_fU0--;
    if (iParam0->_fU0 < 1)
    {
        iParam0->_fU4--;
        if (iParam0->_fU4 < 1)
        {
            iParam0->_fU4 = 12;
        }
        iParam0->_fU0 = sub_92169( iParam0->_fU4 );
    }
    return;
}

void sub_93950(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        AWARD_ACHIEVEMENT( 9 );
        break;
        case 3:
        AWARD_ACHIEVEMENT( 13 );
        break;
        case 7: break;
        case 8:
        AWARD_ACHIEVEMENT( 24 );
        break;
        case 13:
        AWARD_ACHIEVEMENT( 33 );
        break;
    }
    return;
}

void sub_94092(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (g_U0)
    {
        return;
    }
    iVar3 = 3;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        iVar3 = 0;
        break;
        case 7: return;
        case 8:
        iVar3 = 1;
        break;
        case 13:
        iVar3 = 2;
        break;
        default: return;
    }
    iVar4 = 0;
    if (NOT g_U64838[iVar3]._fU0)
    {
        iVar4 = ProtectedGet(g_U64838[iVar3]._fU8);
        if (iVar4 > 0)
        {
            sub_94246( 4, iVar4 );
            g_U64838[iVar3]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_94246(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_52551( 0 );
    return;
}

void sub_94701(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0:
        iVar3 = -5;
        break;
        case 7:
        iVar3 = -10;
        break;
        case 3:
        iVar3 = -10;
        break;
        case 8:
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_23915( "Flow_Friend_No_Contact_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_81579( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_81579( uParam0, 0, iVar4 );
    return;
}

void sub_94918(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        case 7:
        iVar3 = -5;
        break;
        case 8:
        iVar3 = -10;
        break;
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_23915( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_81579( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_81579( uParam0, 0, iVar4 );
    return;
}

void sub_95119(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0:
        iVar3 = -5;
        break;
        case 7:
        iVar3 = -10;
        break;
        case 3:
        iVar3 = -10;
        break;
        case 8:
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_23915( "Flow_Friend_No_Show_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_81579( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_81579( uParam0, 0, iVar4 );
    return;
}

int sub_95498()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_95672(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        case 8: return 1;
    }
    return 0;
}

int sub_95739(int iParam0)
{
    if (iParam0 == 57)
    {
        return 0;
    }
    if (NOT (g_U64542._fU0 == iParam0))
    {
        return 0;
    }
    return 1;
}

void sub_95834(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (sub_91255( uParam0 )))
    {
        return;
    }
    iVar4 = 0;
    iVar5 = 14;
    while (iVar4 < iVar5)
    {
        if (sub_95881( uParam0, uParam1, iVar4 ))
        {
            return;
        }
        iVar4++;
    }
    sub_55249( "Flow_Check_If_Player_Chose_Special_Activity: Failed to find a special action\n" );
    g_U15946[uParam0]._fU4 = 0;
    return;
}

int sub_95881(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;
    char[64] cVar6;
    boolean bVar22;
    boolean bVar23;
    int iVar24;

    if (NOT g_U15946[uParam0]._fU8[1]._fU0[iParam2])
    {
        return 0;
    }
    iVar5 = g_U22274[uParam0]._fU208[iParam2]._fU0;
    if (iVar5 == -1)
    {
        sub_55041( "Flow_Check_Special_Action_Selected: Trigger Info for Special Action not set up\n" );
        return 0;
    }
    if (g_U10981[uParam1]._fU144._fU36)
    {
        sub_91537( uParam1 );
        g_U15946[uParam0]._fU4 = 0;
        g_U15946[uParam0]._fU8[1]._fU0[iParam2] = 0;
        sub_96113();
        return 0;
    }
    StrCopy( ref cVar6, "", 64 );
    bVar22 = sub_96179( uParam0, iParam2, ref cVar6 );
    if (NOT bVar22)
    {
        sub_91537( uParam1 );
        g_U15946[uParam0]._fU4 = 0;
        g_U15946[uParam0]._fU8[1]._fU0[iParam2] = 0;
        sub_96113();
        return 0;
    }
    bVar23 = false;
    iVar24 = iParam2 - 0;
    if (g_U10978)
    {
        if (NOT g_U22274[uParam0]._fU268[iVar24]._fU36)
        {
            sub_91537( uParam1 );
            g_U15946[uParam0]._fU4 = 0;
            g_U15946[uParam0]._fU8[1]._fU0[iParam2] = 0;
            sub_96113();
            return 0;
        }
    }
    if (g_U22274[uParam0]._fU16)
    {
        sub_91537( uParam1 );
        g_U15946[uParam0]._fU4 = 0;
        g_U15946[uParam0]._fU8[1]._fU0[iParam2] = 0;
        sub_96113();
        return 0;
    }
    if (sub_104611( uParam1 ))
    {
        sub_91537( uParam1 );
        g_U15946[uParam0]._fU4 = 0;
        g_U15946[uParam0]._fU8[1]._fU0[iParam2] = 0;
        sub_96113();
        return 0;
    }
    if (NOT bVar23)
    {
        if (g_U22274[uParam0]._fU268[iVar24]._fU40)
        {
            if (NOT (sub_89959( g_U22274[uParam0]._fU268[iVar24]._fU60 )))
            {
                sub_104992( uParam0 );
                bVar23 = true;
            }
        }
    }
    g_U10981[uParam1]._fU144._fU28 = bVar23;
    if (NOT bVar23)
    {
        sub_105577( uParam0, ref cVar6 );
    }
    g_U10981[uParam1]._fU144._fU24 = 1;
    g_U15946[uParam0]._fU4 = 0;
    g_U15946[uParam0]._fU8[1]._fU0[iParam2] = 0;
    sub_105990( uParam0, uParam1, iParam2 );
    sub_96113();
    return 1;
}

void sub_96113()
{
    g_U811 = 0;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    return;
}

void sub_96179(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int Result;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    Result = 0;
    iVar6 = uParam1;
    switch (uParam0)
    {
        case 0:
        if (iVar6 == 0)
        {
            if (NOT g_U2226)
            {
                Result = 1;
            }
        }
        else
        {
            sub_23915( "Check_For_Area_Specific_Special_Ability_CallID: Unused Roman ability ID" );
        }
        break;
        case 3:
        if (iVar6 == 0)
        {
            if (sub_96365())
            {
                uVar7 = {sub_98026( -1 )};
                StrCopy( (uParam2^), sub_98180( uVar7 ), 64 );
                if (COMPARE_STRING( uParam2, "" ))
                {
                    StrCopy( (uParam2^), "FCJ_GENERIC", 64 );
                }
                Result = 1;
            }
            else
            {
                Result = 0;
            }
        }
        else
        {
            sub_23915( "Check_For_Area_Specific_Special_Ability_CallID: Unused Jacob ability ID" );
        }
        break;
        case 7:
        if (iVar6 == 0)
        {
            Result = 1;
        }
        else
        {
            sub_23915( "Check_For_Area_Specific_Special_Ability_CallID: Unused Dwayne ability ID" );
        }
        break;
        case 8:
        if (iVar6 == 0)
        {
            Result = 1;
        }
        else
        {
            sub_23915( "Check_For_Area_Specific_Special_Ability_CallID: Unused Dwayne ability ID" );
        }
        break;
        case 13:
        if (iVar6 == 0)
        {
            if (sub_100689())
            {
                uVar11 = {sub_101781( -1 )};
                StrCopy( (uParam2^), sub_101911( uVar11 ), 64 );
                if (COMPARE_STRING( uParam2, "" ))
                {
                    StrCopy( (uParam2^), "FCP_RANDOM", 64 );
                }
                Result = 1;
            }
            else
            {
                Result = 0;
            }
        }
        else
        {
            sub_23915( "Check_For_Area_Specific_Special_Ability_CallID: Unused Packie ability ID" );
        }
        break;
    }
    PRINTSTRING( "Area_Specific Function: " );
    PRINTSTRING( uParam2 );
    PRINTNL();
    return Result;
}

int sub_96365()
{
    int I;
    int iVar3;
    int J;
    int iVar5;
    int[5] iVar6;
    float[5] fVar12;
    int iVar18;
    float fVar19;
    vector vVar20;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    int iVar26;

    if (NOT l_U130)
    {
        sub_96385();
    }
    array(ref iVar6, 5);
    array(ref fVar12, 5);
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref vVar20.x, ref vVar20.y, ref vVar20.z );
        iVar26 = GET_MAP_AREA_FROM_COORDS( vVar20 );
    }
    else
    {
        return 0;
    }
    for ( I = 0; I < 5; I++ )
    {
        iVar6[I] = -1;
        fVar12[I] = 1E8;
    }
    iVar18 = -1;
    fVar19 = 1E8;
    for ( I = 0; I < 22; I++ )
    {
        if ((GET_MAP_AREA_FROM_COORDS( l_U41[I]._fU0 )) == iVar26)
        {
            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( l_U41[I]._fU0._fU0, l_U41[I]._fU0._fU4, l_U41[I]._fU0._fU8, 5.00000000, 5.00000000, 5.00000000 )))
            {
                uVar23 = {l_U41[I]._fU0 - vVar20};
                for ( iVar3 = 0; iVar3 < 5; iVar3++ )
                {
                    if ((VMAG( uVar23 )) < fVar12[iVar3])
                    {
                        for ( J = 0; J < 5; J++ )
                        {
                            iVar5 = 5 - (J + 1);
                            if ((iVar5 > 0) AND (iVar5 > iVar3))
                            {
                                iVar6[iVar5] = iVar6[iVar5 - 1];
                                fVar12[iVar5] = fVar12[iVar5 - 1];
                            }
                        }
                        iVar6[iVar3] = I;
                        fVar12[iVar3] = VMAG( uVar23 );
                        iVar3 = 5;
                    }
                }
            }
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (iVar6[I] == -1))
        {
            if (fVar12[I] > l_U40)
            {
                if (fVar12[I] < fVar19)
                {
                    iVar18 = iVar6[I];
                    fVar19 = fVar12[I];
                }
            }
        }
    }
    if (iVar18 == -1)
    {
        for ( I = 0; I < 5; I++ )
        {
            if (NOT (iVar6[I] == -1))
            {
                iVar18 = iVar6[I];
                fVar19 = fVar12[I];
            }
        }
    }
    if (NOT (iVar18 == -1))
    {
        g_U64918 = iVar18;
        return 1;
        break;
    }
    return 0;
}

void sub_96385()
{
    l_U41[0]._fU0 = {981.24620000, 677.71870000, 25.16520000};
    l_U41[0]._fU12 = 87.58470000;
    l_U41[1]._fU0 = {1193.90000000, 403.70000000, 23.67900000};
    l_U41[1]._fU12 = 180.00000000;
    l_U41[2]._fU0 = {1790.69900000, 524.48700000, 28.38270000};
    l_U41[2]._fU12 = 270.00000000;
    l_U41[3]._fU0 = {804.00000000, 301.20000000, 5.69210000};
    l_U41[3]._fU12 = 274.61480000;
    l_U41[4]._fU0 = {1225.97300000, 38.59800000, 35.53100000};
    l_U41[4]._fU12 = 180.67800000;
    l_U41[5]._fU0 = {802.12500000, -292.07300000, 15.00000000};
    l_U41[5]._fU12 = 90.00000000;
    l_U41[6]._fU0 = {1348.87900000, -114.44550000, 22.69970000};
    l_U41[6]._fU12 = 181.00000000;
    l_U41[7]._fU0 = {-399.40000000, 364.40000000, 15.00000000};
    l_U41[7]._fU12 = 0.00000000;
    l_U41[8]._fU0 = {-505.38070000, 912.21570000, 9.47690000};
    l_U41[8]._fU12 = 0.38190000;
    l_U41[9]._fU0 = {-414.51600000, 1400.21400000, 13.00000000};
    l_U41[9]._fU12 = 0.35210000;
    l_U41[10]._fU0 = {58.77590000, 420.75700000, 14.38820000};
    l_U41[10]._fU12 = 89.27000000;
    l_U41[10]._fU0 = {108.03780000, -294.22020000, 14.60940000};
    l_U41[10]._fU12 = 180.32660000;
    l_U41[10]._fU0 = {-423.25230000, -185.48700000, 10.13280000};
    l_U41[10]._fU12 = 3.02340000;
    l_U41[11]._fU0 = {442.95880000, 211.50000000, 8.32940000};
    l_U41[11]._fU12 = 269.28920000;
    l_U41[12]._fU0 = {941.47850000, 1815.17400000, 20.11440000};
    l_U41[12]._fU12 = 315.96110000;
    l_U41[13]._fU0 = {721.89440000, 1421.56900000, 13.28050000};
    l_U41[13]._fU12 = 270.55690000;
    l_U41[14]._fU0 = {661.19930000, 1003.47200000, 2.17850000};
    l_U41[14]._fU12 = 79.74240000;
    l_U41[15]._fU0 = {139.78970000, 989.38050000, 13.81190000};
    l_U41[15]._fU12 = 88.19730000;
    l_U41[16]._fU0 = {180.45650000, -251.98280000, 12.00170000};
    l_U41[16]._fU12 = 359.50900000;
    l_U41[17]._fU0 = {-1457.18400000, -473.49020000, 2.34640000};
    l_U41[17]._fU12 = 0.63190000;
    l_U41[18]._fU0 = {-1307.58700000, 194.70990000, 7.41500000};
    l_U41[18]._fU12 = 271.86490000;
    l_U41[19]._fU0 = {-1604.29800000, 581.67040000, 24.69900000};
    l_U41[19]._fU12 = 269.34070000;
    l_U41[20]._fU0 = {-1054.01000000, 923.32170000, 12.86440000};
    l_U41[20]._fU12 = 268.74620000;
    l_U41[21]._fU0 = {-1008.63300000, 1525.69100000, 22.44340000};
    l_U41[21]._fU12 = 54.87580000;
    l_U130 = 1;
    return;
}

void sub_98026(int iParam0)
{
    if (NOT l_U130)
    {
        sub_96385();
    }
    if (NOT (iParam0 == -1))
    {
        g_U64918 = iParam0;
    }
    else if ((g_U6) || (g_U5))
    {
        g_U64918 = 7;
    }
    else if (NOT sub_96365())
    {
        g_U64918 = 0;
    };;;
    if ((g_U64918 >= 22) || (g_U64918 < 0))
    {
        g_U64918 = 0;
    }
    return l_U41[g_U64918];
}

string sub_98180(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    uVar6 = GET_NAME_OF_ZONE( uParam0._fU0._fU0, uParam0._fU0._fU4, uParam0._fU0._fU8 );
    if (COMPARE_STRING( uVar6, "BEGGA" ))
    {
        return "FCJ_PC5";
    }
    if (COMPARE_STRING( uVar6, "BOULE" ))
    {
        return "FCJ_PC7";
    }
    if (COMPARE_STRING( uVar6, "LTBAY" ))
    {
        return "FCJ_PC27";
    }
    if (COMPARE_STRING( uVar6, "NRTGA" ))
    {
        return "FCJ_PC36";
    }
    if (COMPARE_STRING( uVar6, "FORSI" ))
    {
        return "FCJ_PC21";
    }
    if (COMPARE_STRING( uVar6, "INSTI" ))
    {
        return "FCJ_PC24";
    }
    if (COMPARE_STRING( uVar6, "STHBO" ))
    {
        return "FCJ_PC44";
    }
    if (COMPARE_STRING( uVar6, "CHAPO" ))
    {
        return "FCJ_PC10";
    }
    if (COMPARE_STRING( uVar6, "CHISL" ))
    {
        return "FCJ_PC9";
    }
    if (COMPARE_STRING( uVar6, "COISL" ))
    {
        return "FCJ_PC13";
    }
    if (COMPARE_STRING( uVar6, "STEIN" ))
    {
        return "FCJ_PC54";
    }
    if (COMPARE_STRING( uVar6, "EISLC" ))
    {
        return "FCJ_PC1";
    }
    if (COMPARE_STRING( uVar6, "MEADP" ))
    {
        return "FCJ_PC31";
    }
    if (COMPARE_STRING( uVar6, "MEADH" ))
    {
        return "FCJ_PC30";
    }
    if (COMPARE_STRING( uVar6, "CERHE" ))
    {
        return "FCJ_PC73";
    }
    if (COMPARE_STRING( uVar6, "WILLI" ))
    {
        return "FCJ_PC53";
    }
    if (COMPARE_STRING( uVar6, "SCHOL" ))
    {
        return "FCJ_PC43";
    }
    if (COMPARE_STRING( uVar6, "BEECW" ))
    {
        return "FCJ_PC5";
    }
    if (COMPARE_STRING( uVar6, "DOWTW" ))
    {
        return "FCJ_PC14";
    }
    if (COMPARE_STRING( uVar6, "FRANI" ))
    {
        return "FCJ_PC4";
    }
    if (COMPARE_STRING( uVar6, "SUTHS" ))
    {
        return "FCJ_PC45";
    }
    if (COMPARE_STRING( uVar6, "HOBEH" ))
    {
        return "FCJ_PC23";
    }
    if (COMPARE_STRING( uVar6, "FIISL" ))
    {
        return "FCJ_PC17";
    }
    if (COMPARE_STRING( uVar6, "FIREP" ))
    {
        return "FCJ_PC18";
    }
    if (COMPARE_STRING( uVar6, "OUTL" ))
    {
        return "FCJ_PC39";
    }
    if (COMPARE_STRING( uVar6, "OUTL" ))
    {
        return "FCJ_PC39";
    }
    if (COMPARE_STRING( uVar6, "CASGR" ))
    {
        return "FCJ_PC8";
    }
    if (COMPARE_STRING( uVar6, "THXCH" ))
    {
        return "FCJ_PC48";
    }
    if (COMPARE_STRING( uVar6, "CHITO" ))
    {
        return "FCJ_PC11";
    }
    if (COMPARE_STRING( uVar6, "LITAL" ))
    {
        return "FCJ_PC28";
    }
    if (COMPARE_STRING( uVar6, "FISSN" ))
    {
        return "FCJ_PC19";
    }
    if (COMPARE_STRING( uVar6, "FISSO" ))
    {
        return "FCJ_PC20";
    }
    if (COMPARE_STRING( uVar6, "CASGC" ))
    {
        return "FCJ_PC8";
    }
    if (COMPARE_STRING( uVar6, "SUFFO" ))
    {
        return "FCJ_PC47";
    }
    if (COMPARE_STRING( uVar6, "LOWEA" ))
    {
        return "FCJ_PC29";
    }
    if (COMPARE_STRING( uVar6, "EASON" ))
    {
        return "FCJ_PC16";
    }
    if (COMPARE_STRING( uVar6, "THTRI" ))
    {
        return "FCJ_PC49";
    }
    if (COMPARE_STRING( uVar6, "THPRES" ))
    {
        return "FCJ_PC41";
    }
    if (COMPARE_STRING( uVar6, "PUGAT" ))
    {
        return "FCJ_PC42";
    }
    if (COMPARE_STRING( uVar6, "STARJ" ))
    {
        return "FCJ_PC46";
    }
    if (COMPARE_STRING( uVar6, "HATGA" ))
    {
        return "FCJ_PC22";
    }
    if (COMPARE_STRING( uVar6, "MIDPE" ))
    {
        return "FCJ_PC33";
    }
    if (COMPARE_STRING( uVar6, "LANCA" ))
    {
        return "FCJ_PC25";
    }
    if (COMPARE_STRING( uVar6, "MIDPA" ))
    {
        return "FCJ_PC32";
    }
    if (COMPARE_STRING( uVar6, "VASIH" ))
    {
        return "FCJ_PC51";
    }
    if (COMPARE_STRING( uVar6, "MIDPW" ))
    {
        return "FCJ_PC34";
    }
    if (COMPARE_STRING( uVar6, "NOHOL" ))
    {
        return "FCJ_PC37";
    }
    if (COMPARE_STRING( uVar6, "EAHOL" ))
    {
        return "FCJ_PC15";
    }
    if (COMPARE_STRING( uVar6, "NORWO" ))
    {
        return "FCJ_PC38";
    }
    if (COMPARE_STRING( uVar6, "WESDY" ))
    {
        return "FCJ_PC52";
    }
    if (COMPARE_STRING( uVar6, "LEFWO" ))
    {
        return "FCJ_PC26";
    }
    if (COMPARE_STRING( uVar6, "BERCH" ))
    {
        return "FCJ_FC6";
    }
    if (COMPARE_STRING( uVar6, "NORMY" ))
    {
        return "FCJ_PC35";
    }
    if (COMPARE_STRING( uVar6, "ACTRR" ))
    {
        return "FCJ_PC2";
    }
    if (COMPARE_STRING( uVar6, "PORTU" ))
    {
        return "FCJ_PC40";
    }
    if (COMPARE_STRING( uVar6, "TUDOR" ))
    {
        return "FCJ_PC50";
    }
    if (COMPARE_STRING( uVar6, "ACTIP" ))
    {
        return "FCJ_PC3";
    }
    if (COMPARE_STRING( uVar6, "CITH" ))
    {
        return "FCJ_PC12";
    }
    if (COMPARE_STRING( uVar6, "AEROP" ))
    {
        return "FCJ_PC4";
    }
    return "";
}

int sub_100689()
{
    int I;
    int iVar3;
    int J;
    int iVar5;
    int[5] iVar6;
    float[5] fVar12;
    int iVar18;
    float fVar19;
    vector vVar20;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    int iVar26;

    if (NOT l_U181)
    {
        sub_100709();
    }
    array(ref iVar6, 5);
    array(ref fVar12, 5);
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref vVar20.x, ref vVar20.y, ref vVar20.z );
        iVar26 = GET_MAP_AREA_FROM_COORDS( vVar20 );
    }
    else
    {
        return 0;
    }
    for ( I = 0; I < 5; I++ )
    {
        iVar6[I] = -1;
        fVar12[I] = 1E8;
    }
    iVar18 = -1;
    fVar19 = 1E8;
    for ( I = 0; I < 16; I++ )
    {
        if ((GET_MAP_AREA_FROM_COORDS( l_U132[I]._fU0 )) == iVar26)
        {
            if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( l_U132[I]._fU0._fU0, l_U132[I]._fU0._fU4, l_U132[I]._fU0._fU8, 5.00000000, 5.00000000, 5.00000000 )))
            {
                uVar23 = {l_U132[I]._fU0 - vVar20};
                for ( iVar3 = 0; iVar3 < 5; iVar3++ )
                {
                    if ((VMAG( uVar23 )) < fVar12[iVar3])
                    {
                        for ( J = 0; J < 5; J++ )
                        {
                            iVar5 = 5 - (J + 1);
                            if ((iVar5 > 0) AND (iVar5 > iVar3))
                            {
                                iVar6[iVar5] = iVar6[iVar5 - 1];
                                fVar12[iVar5] = fVar12[iVar5 - 1];
                            }
                        }
                        iVar6[iVar3] = I;
                        fVar12[iVar3] = VMAG( uVar23 );
                        iVar3 = 5;
                    }
                }
            }
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (iVar6[I] == -1))
        {
            if (fVar12[I] > l_U131)
            {
                if (fVar12[I] < fVar19)
                {
                    iVar18 = iVar6[I];
                    fVar19 = fVar12[I];
                }
            }
        }
    }
    if (iVar18 == -1)
    {
        for ( I = 0; I < 5; I++ )
        {
            if (NOT (iVar6[I] == -1))
            {
                iVar18 = iVar6[I];
                fVar19 = fVar12[I];
            }
        }
    }
    if (NOT (iVar18 == -1))
    {
        g_U64919 = iVar18;
        return 1;
        break;
    }
    return 0;
}

void sub_100709()
{
    l_U132[0]._fU0 = {1220.64900000, 37.39700000, 34.55670000};
    l_U132[1]._fU0 = {1082.27800000, -231.10910000, 21.69380000};
    l_U132[2]._fU0 = {1086.80000000, 855.95480000, 31.68420000};
    l_U132[3]._fU0 = {1852.95700000, 528.88980000, 27.71360000};
    l_U132[4]._fU0 = {1313.92400000, 1733.78000000, 14.41560000};
    l_U132[5]._fU0 = {454.76400000, 1815.95900000, 21.62930000};
    l_U132[6]._fU0 = {-99.35060000, 1580.10600000, 17.53020000};
    l_U132[7]._fU0 = {-269.67870000, 1091.81300000, 7.59000000};
    l_U132[8]._fU0 = {-257.55070000, 603.82620000, 13.81520000};
    l_U132[9]._fU0 = {-490.96090000, -90.38910000, 6.84240000};
    l_U132[10]._fU0 = {112.68110000, -207.09040000, 13.91790000};
    l_U132[11]._fU0 = {-16.27910000, -907.56730000, 4.16440000};
    l_U132[12]._fU0 = {-1453.93800000, -250.30910000, 1.86880000};
    l_U132[13]._fU0 = {-1733.62400000, 361.21480000, 24.44370000};
    l_U132[14]._fU0 = {-1276.92300000, 826.39620000, 18.56500000};
    l_U132[15]._fU0 = {-1034.85300000, 1420.33700000, 24.66210000};
    l_U181 = 1;
    return;
}

void sub_101781(int iParam0)
{
    if (NOT l_U181)
    {
        sub_100709();
    }
    if (iParam0 == -1)
    {
        if (NOT sub_100689())
        {
            g_U64919 = 0;
        }
    }
    else
    {
        g_U64919 = iParam0;
    }
    if ((g_U64919 >= 16) || (g_U64919 < 0))
    {
        g_U64919 = 0;
    }
    return l_U132[g_U64919];
}

string sub_101911(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = GET_NAME_OF_ZONE( uParam0._fU0._fU0, uParam0._fU0._fU4, uParam0._fU0._fU8 );
    if (COMPARE_STRING( uVar5, "BOULE" ))
    {
        return "FCP_CRSPY55";
    }
    if (COMPARE_STRING( uVar5, "LTBAY" ))
    {
        return "FCP_CRSPY54";
    }
    if (COMPARE_STRING( uVar5, "NRTGA" ))
    {
        return "FCP_CRSPY56";
    }
    if (COMPARE_STRING( uVar5, "FORSI" ))
    {
        return "FCP_CRSPY52";
    }
    if (COMPARE_STRING( uVar5, "INSTI" ))
    {
        return "FCP_CRSPY53";
    }
    if (COMPARE_STRING( uVar5, "STHBO" ))
    {
        return "FCP_CRSPY51";
    }
    if (COMPARE_STRING( uVar5, "CHAPO" ))
    {
        return "FCP_CRSPY57";
    }
    if (COMPARE_STRING( uVar5, "CHISL" ))
    {
        return "FCP_CRSPY50";
    }
    if (COMPARE_STRING( uVar5, "COISL" ))
    {
        return "FCP_CRSPY34";
    }
    if (COMPARE_STRING( uVar5, "STEIN" ))
    {
        return "FCP_CRSPY1";
    }
    if (COMPARE_STRING( uVar5, "EISLC" ))
    {
        return "FCP_CRSPY3";
    }
    if (COMPARE_STRING( uVar5, "MEADP" ))
    {
        return "FCP_CRSPY2";
    }
    if (COMPARE_STRING( uVar5, "MEADH" ))
    {
        return "FCP_CRSPY4";
    }
    if (COMPARE_STRING( uVar5, "CERHE" ))
    {
        return "FCP_CRSPY6";
    }
    if (COMPARE_STRING( uVar5, "WILLI" ))
    {
        return "FCP_CRSPY5";
    }
    if (COMPARE_STRING( uVar5, "SCHOL" ))
    {
        return "FCP_CRSPY9";
    }
    if (COMPARE_STRING( uVar5, "BEECW" ))
    {
        return "FCP_CRSPY10";
    }
    if (COMPARE_STRING( uVar5, "DOWTW" ))
    {
        return "FCP_CRSPY8";
    }
    if (COMPARE_STRING( uVar5, "FRANI" ))
    {
        return "FCP_CRSPY7";
    }
    if (COMPARE_STRING( uVar5, "SUTHS" ))
    {
        return "FCP_CRSPY12";
    }
    if (COMPARE_STRING( uVar5, "HOBEH" ))
    {
        return "FCP_CRSPY13";
    }
    if (COMPARE_STRING( uVar5, "FIISL" ))
    {
        return "FCP_CRSPY15";
    }
    if (COMPARE_STRING( uVar5, "FIREP" ))
    {
        return "FCP_CRSPY14";
    }
    if (COMPARE_STRING( uVar5, "OUTL" ))
    {
        return "FCP_CRSPY11";
    }
    if (COMPARE_STRING( uVar5, "CASGR" ))
    {
        return "FCP_CRSPY23";
    }
    if (COMPARE_STRING( uVar5, "THXCH" ))
    {
        return "FCP_CRSPY24";
    }
    if (COMPARE_STRING( uVar5, "CHITO" ))
    {
        return "FCP_CRSPY28";
    }
    if (COMPARE_STRING( uVar5, "LITAL" ))
    {
        return "FCP_CRSPY30";
    }
    if (COMPARE_STRING( uVar5, "FISSN" ))
    {
        return "FCP_CRSPY26";
    }
    if (COMPARE_STRING( uVar5, "FISSO" ))
    {
        return "FCP_CRSPY25";
    }
    if (COMPARE_STRING( uVar5, "CASGC" ))
    {
        return "FCP_CRSPY23";
    }
    if (COMPARE_STRING( uVar5, "SUFFO" ))
    {
        return "FCP_CRSPY18";
    }
    if (COMPARE_STRING( uVar5, "LOWEA" ))
    {
        return "FCP_CRSPY27";
    }
    if (COMPARE_STRING( uVar5, "EASON" ))
    {
        return "FCP_CRSPY16";
    }
    if (COMPARE_STRING( uVar5, "THTRI" ))
    {
        return "FCP_CRSPY17";
    }
    if (COMPARE_STRING( uVar5, "THPRES" ))
    {
        return "FCP_CRSPY32";
    }
    if (COMPARE_STRING( uVar5, "PUGAT" ))
    {
        return "FCP_CRSPY31";
    }
    if (COMPARE_STRING( uVar5, "STARJ" ))
    {
        return "FCP_CRSPY38";
    }
    if (COMPARE_STRING( uVar5, "HATGA" ))
    {
        return "FCP_CRSPY33";
    }
    if (COMPARE_STRING( uVar5, "MIDPE" ))
    {
        return "FCP_CRSPY35";
    }
    if (COMPARE_STRING( uVar5, "LANCA" ))
    {
        return "FCP_CRSPY46";
    }
    if (COMPARE_STRING( uVar5, "MIDPA" ))
    {
        return "FCP_CRSPY37";
    }
    if (COMPARE_STRING( uVar5, "VASIH" ))
    {
        return "FCP_CRSPY47";
    }
    if (COMPARE_STRING( uVar5, "MIDPW" ))
    {
        return "FCP_CRSPY36";
    }
    if (COMPARE_STRING( uVar5, "NOHOL" ))
    {
        return "FCP_CRSPY44";
    }
    if (COMPARE_STRING( uVar5, "EAHOL" ))
    {
        return "FCP_CRSPY45";
    }
    if (COMPARE_STRING( uVar5, "NORWO" ))
    {
        return "FCP_CRSPY43";
    }
    if (COMPARE_STRING( uVar5, "WESDY" ))
    {
        return "FCP_CRSPY41";
    }
    if (COMPARE_STRING( uVar5, "LEFWO" ))
    {
        return "FCP_CRSPY42";
    }
    if (COMPARE_STRING( uVar5, "BERCH" ))
    {
        return "FCP_CRSPY19";
    }
    if (COMPARE_STRING( uVar5, "NORMY" ))
    {
        return "FCP_CRSPY39";
    }
    if (COMPARE_STRING( uVar5, "ACTRR" ))
    {
        return "FCP_CRSPY20";
    }
    if (COMPARE_STRING( uVar5, "PORTU" ))
    {
        return "FCP_CRSPY40";
    }
    if (COMPARE_STRING( uVar5, "TUDOR" ))
    {
        return "FCP_CRSPY21";
    }
    if (COMPARE_STRING( uVar5, "ACTIP" ))
    {
        return "FCP_CRSPY22";
    }
    if (COMPARE_STRING( uVar5, "CITH" ))
    {
        return "FCP_CRSPY29";
    }
    if (COMPARE_STRING( uVar5, "AEROP" ))
    {
        return "FCP_CRSPY7";
    }
    return "";
}

int sub_104611(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            if (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 2 ))
            {
                return 1;
            }
        }
        break;
        case 7:
        if (sub_104689())
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_104689()
{
    int I;
    unknown uVar3;

    if (g_U33837)
    {
        return 1;
    }
    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (sub_85756( I ))
        {
            uVar3 = sub_74605( I );
            if (g_U22274[uVar3]._fU0)
            {
                if (NOT (g_U13391[I]._fU80._fU0 == 0))
                {
                    if (g_U22274[uVar3]._fU20)
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_104992(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_105085( uParam0, "FCR22AU", "FCR_CRSP", "FCR_CRSPN" );
        return;
        case 3:
        sub_105085( uParam0, "FCJSAUD", "FCJ_CREQSP", "FCJ_CREQSPN" );
        return;
        case 7:
        sub_105085( uParam0, "FCD2AU", "FCD2_REQSP", "FCD2_REQSPNO" );
        return;
        case 8:
        sub_105085( uParam0, "FCB2aAU", "FCB2_REQSP", "FCB2_REQSPN" );
        return;
        case 13:
        sub_105085( uParam0, "FCPSAUD", "FCP_CREQSP", "FCP_CREQSPN" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_105085(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    uVar6 = sub_87007( uParam0 );
    sub_87183( ref l_U280[uVar6]._fU0, uParam2, uParam3 );
    sub_105139( ref l_U280[uVar6]._fU0, uParam1, 1 );
    sub_52331();
    sub_87630( uParam0, 1 );
    return;
}

int sub_105139(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown[2] uVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar5, 2);
    uVar14 = g_U91._fU60;
    if (bParam2)
    {
        return sub_75481( uVar14, uParam0, uParam1, 0, ref uVar5, ref uVar5, "", 0, bParam2, 1, 1, 0, 0, 0 );
    }
    if (NOT g_U91._fU368)
    {
        StrCopy( ref g_U91._fU224[0], uParam1, 16 );
        g_U91._fU224[1] = {(uParam0^)[0]};
        sub_77368( uVar14, ref g_U91._fU176 );
        g_U91._fU368 = 1;
        return 1;
    }
    return 0;
}

void sub_105577(unknown uParam0, unknown uParam1)
{
    PRINTSTRING( "Accepted by phonecall: " );
    PRINTSTRING( uParam1 );
    PRINTNL();
    switch (uParam0)
    {
        case 0:
        sub_105085( uParam0, "FCR22AU", "FCR_CRSP", "FCR_CRSPY" );
        return;
        case 3:
        sub_105085( uParam0, "FCJSAUD", "FCJ_CREQSP", uParam1 );
        return;
        case 7:
        sub_105085( uParam0, "FCD2AU", "FCD2_REQSP", "FCD2_REQSPY" );
        return;
        case 8:
        sub_105085( uParam0, "FCB2aAU", "FCB2_REQSP", "FCB2_REQSPY" );
        return;
        case 13:
        sub_105085( uParam0, "FCPSAUD", "FCP_CREQSP", uParam1 );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_105990(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;

    iVar5 = iParam2 - 0;
    g_U10981[uParam1]._fU144._fU96 = {g_U22274[uParam0]._fU268[iVar5]._fU4};
    g_U10981[uParam1]._fU144._fU128 = iVar5;
    return;
}

void sub_106308(unknown uParam0)
{
    int I;
    int iVar4;

    I = 0;
    iVar4 = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (g_U22274[uParam0]._fU268[I]._fU0)
        {
            iVar4 = 0 + I;
            g_U15946[uParam0]._fU8[0]._fU0[iVar4] = 0;
        }
    }
    return;
}

int sub_106438(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U2226)
        {
            return 0;
        }
        break;
        default:
    }
    return 1;
}

int sub_106637(unknown uParam0)
{
    unknown uVar3;

    if (g_U10978)
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        return 0;
    }
    if (NOT (g_U13391[uParam0]._fU80._fU0 == 0))
    {
        return 0;
    }
    if ((sub_85695()) || ((sub_86171( 0 )) || ((sub_85448()) || ((sub_85644()) || ((IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )) || (IS_THREAD_ACTIVE( g_U812 )))))))
    {
        return 0;
    }
    uVar3 = sub_74605( uParam0 );
    if ((sub_95739( uVar3 )) || (NOT (sub_106785( uVar3, 30000 ))))
    {
        return 0;
    }
    return 1;
}

boolean sub_106785(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (iParam0 < 57))
    {
        return 1;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    iVar5 = g_U26671[iParam0] + iParam1;
    return iVar5 < iVar4;
}

int sub_106929(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return sub_107022( uParam0, "FCR22AU", "FCR_GCSP", "FCR_GCSPE" );
        case 3: return sub_107022( uParam0, "FCJSAUD", "FCJ_GCSP", "FCJ_GCSPE" );
        case 7: return sub_107022( uParam0, "FCD2AU", "FCD2_SPEC", "FCD2_SPEND" );
        case 8: return sub_107022( uParam0, "FCB2aAU", "FCB2_SP", "FCB2_SPEND" );
        case 13: return sub_107022( uParam0, "FCPSAUD", "FCP_GCSPC", "FCP_GCSPE" );
    }
    sub_89522( uParam0, "PLACEHOLDER", "FCRDCAU", 10000, 0 );
    return 1;
}

int sub_107022(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    uVar6 = sub_87007( uParam0 );
    sub_87183( ref l_U280[uVar6]._fU0, uParam2, uParam3 );
    if (sub_107080( uParam0, ref l_U280[uVar6]._fU0, uParam1, 10000 ))
    {
        sub_52331();
        sub_87630( uParam0, 1 );
        return 1;
    }
    return 0;
}

void sub_107080(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown[2] uVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref uVar6, 2);
    return sub_75481( uParam0, uParam1, uParam2, 0, ref uVar6, ref uVar6, "", uParam3, 1, 0, 1, 0, 0, 0 );
}

void sub_107453(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        StrCopy( ref g_U10981[uParam0]._fU144._fU52, "ROM_SP", 32 );
        break;
        case 3:
        StrCopy( ref g_U10981[uParam0]._fU144._fU52, "JCB_SP", 32 );
        break;
        case 7:
        StrCopy( ref g_U10981[uParam0]._fU144._fU52, "DWN_SP", 32 );
        break;
        case 8:
        StrCopy( ref g_U10981[uParam0]._fU144._fU52, "BRC_SP", 32 );
        break;
        case 13:
        StrCopy( ref g_U10981[uParam0]._fU144._fU52, "PAC_SP", 32 );
        break;
        default:
        PRINTSTRING( "STRAND: " );
        PRINTINT( uParam0 );
        PRINTNL();
        SCRIPT_ASSERT( "Fill_Special_Ability_Intro_Help_Text: Unexpected strand ID" );
    }
    return;
}

int sub_107946(unknown uParam0, unknown uParam1)
{
    if (NOT g_U13391[uParam1]._fU160._fU96)
    {
        return 0;
    }
    sub_107988( uParam0, uParam1 );
    return 1;
}

int sub_107988(unknown uParam0, unknown uParam1)
{
    if (g_U15946[uParam0]._fU4)
    {
        if (sub_108017( uParam0 ))
        {
            sub_91537( uParam1 );
            return 1;
        }
    }
    return 0;
}

int sub_108017(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 14;
    I = 0;
    for ( I = 0; I < iVar3; I++ )
    {
        if (g_U15946[uParam0]._fU8[1]._fU0[I])
        {
            iVar5 = I;
            switch (iVar5)
            {
                case 4:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 5: return 1;
                case 3: return 0;
                case 0:
                case 1:
                case 2: return 0;
            }
        }
    }
    sub_55041( "Is_Cellphone_Friend_Activity_Selected: Unknown activity" );
    return 0;
}

void sub_108339(unknown uParam0, unknown uParam1)
{
    if (NOT g_U22274[uParam0]._fU0)
    {
        g_U10981[uParam1]._fU28 = 0;
        sub_108385( uParam0, uParam1 );
        return 0;
    }
    if (g_U10981[uParam1]._fU28)
    {
        sub_108841( uParam0 );
        g_U10981[uParam1]._fU28 = 0;
    }
    if (g_U22274[uParam0]._fU176)
    {
        if (sub_109663( uParam0 ))
        {
            g_U22274[uParam0]._fU176 = 0;
        }
    }
    if (g_U22274[uParam0]._fU68)
    {
        return sub_109952( uParam0, uParam1 );
    }
    if (g_U22274[uParam0]._fU16)
    {
        return sub_112080( uParam0, uParam1 );
    }
    if (g_U15946[uParam0]._fU4)
    {
        return sub_120164( uParam0, uParam1 );
    }
    if (sub_118795( uParam0 ))
    {
        sub_108917( uParam0 );
        sub_109211( uParam0 );
        sub_119213( uParam0 );
    }
    return sub_147479( uParam0, uParam1 );
}

void sub_108385(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT g_U15946[uParam0]._fU4)
    {
        return;
    }
    if (NOT (sub_108017( uParam0 )))
    {
        return;
    }
    sub_75373( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76, 0 );
    sub_79389( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76 );
    sub_52331();
    iVar4 = 0;
    iVar5 = 14;
    while (iVar4 < iVar5)
    {
        if (sub_108523( iVar4 ))
        {
            if (g_U15946[uParam0]._fU8[1]._fU0[iVar4])
            {
                g_U15946[uParam0]._fU8[1]._fU0[iVar4] = 0;
            }
        }
        iVar4++;
    }
    g_U15946[uParam0]._fU4 = 0;
    return;
}

int sub_108523(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 4:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 5: return 1;
        case 3: return 0;
        case 0:
        case 1:
        case 2: return 0;
    }
    sub_55041( "Is_This_A_Friend_Activity: Unknown activity" );
    return 0;
}

void sub_108841(unknown uParam0)
{
    unknown uVar3;

    g_U22274[uParam0]._fU92 = 0;
    g_U22274[uParam0]._fU96 = 0;
    sub_108884( uParam0 );
    uVar3 = g_U22274[uParam0]._fU108;
    sub_109477( uVar3 );
    return;
}

void sub_108884(unknown uParam0)
{
    if (NOT g_U22274[uParam0]._fU0)
    {
        return;
    }
    sub_108917( uParam0 );
    sub_109211( uParam0 );
    return;
}

void sub_108917(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = 1;
    iVar4 = 1;
    sub_108934( ref iVar3, ref iVar4 );
    g_U22274[uParam0]._fU80 = (g_U22274[uParam0]._fU72 * iVar3) / iVar4;
    if (g_U15654[52])
    {
        g_U22274[uParam0]._fU80 *= 2;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U22274[uParam0]._fU88 = iVar5 + g_U22274[uParam0]._fU80;
    return;
}

void sub_108934(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 1;
    iVar5 = 1;
    switch (g_U26439)
    {
        case 1:
        iVar4 = 1;
        iVar5 = 1;
        break;
        case 2:
        iVar4 = 3;
        iVar5 = 2;
        break;
        case 3:
        iVar4 = 2;
        iVar5 = 1;
        break;
        case 4:
        iVar4 = 5;
        iVar5 = 2;
        break;
        case 5:
        iVar4 = 3;
        iVar5 = 1;
        break;
    }
    (uParam0^) = iVar4;
    (uParam1^) = iVar5;
    return;
}

void sub_109211(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (g_U0)
    {
        g_U22274[uParam0]._fU8 = 1;
        g_U22274[uParam0]._fU168 = 0;
    }
    else if (NOT g_U22274[uParam0]._fU8)
    {
        g_U22274[uParam0]._fU84 = (iVar3 + 240000) + (sub_109303( uParam0 ));
        return;
    }
    iVar4 = 1;
    iVar5 = 1;
    sub_108934( ref iVar4, ref iVar5 );
    iVar6 = (g_U22274[uParam0]._fU76 * iVar4) / iVar5;
    if (g_U15654[52])
    {
        iVar6 *= 2;
    }
    g_U22274[uParam0]._fU84 = iVar3 + iVar6;
    return;
}

int sub_109303(unknown uParam0)
{
    switch (uParam0)
    {
        case 13: return 60000;
    }
    return 0;
}

void sub_109477(int iParam0)
{
    int iVar3;

    iVar3 = 59;
    if (iParam0 >= iVar3)
    {
        SCRIPT_ASSERT( "Kill_Txtmsg: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        return;
    }
    sub_82376( iParam0 );
    g_U63988._fU12[iParam0]._fU4 = 1;
    return;
}

int sub_109663(unknown uParam0)
{
    unknown uVar3;

    if (sub_95498())
    {
        return 0;
    }
    uVar3 = sub_74221( uParam0 );
    sub_109697( uVar3 );
    return 1;
}

void sub_109697(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        case 7:
        iVar3 = -1;
        break;
        case 8:
        iVar3 = -3;
        break;
        case 13:
        iVar3 = -3;
        break;
        default:
        sub_23915( "Flow_Friend_Asleep_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_81579( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_81579( uParam0, 0, iVar4 );
    return;
}

int sub_109952(unknown uParam0, unknown uParam1)
{
    int iVar4;

    if (sub_80901())
    {
        return 1;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15946[uParam0]._fU8[0]._fU0[10] = 0;
    switch (sub_81198())
    {
        case 1:
        case 2:
        sub_110062( uParam0 );
        g_U22274[uParam0]._fU68 = 0;
        g_U22274[uParam0]._fU100 = -1;
        if (NOT g_U22274[uParam0]._fU8)
        {
            sub_110236( uParam0 );
        }
        g_U10980 = 0;
        sub_110406( uParam1 );
        return 0;
        case 8:
        if (NOT g_U22274[uParam0]._fU8)
        {
            g_U22274[uParam0]._fU8 = 1;
            g_U22274[uParam0]._fU168 = 0;
            sub_110669( uParam0, 0 );
        }
        sub_109211( uParam0 );
        g_U22274[uParam0]._fU68 = 0;
        g_U22274[uParam0]._fU100 = -1;
        g_U10980 = 0;
        sub_111053( uParam1 );
        sub_111262( uParam0 );
        return 0;
        case 5:
        case 4: return 1;
    }
    g_U10980 = 0;
    sub_111449( uParam1, g_U22274[uParam0]._fU100 );
    g_U22274[uParam0]._fU68 = 0;
    g_U22274[uParam0]._fU16 = 1;
    g_U10981[uParam1]._fU28 = 1;
    g_U22274[uParam0]._fU20 = 0;
    g_U22274[uParam0]._fU12 = 0;
    sub_111817( uParam0 );
    g_U22274[uParam0]._fU100 = -1;
    g_U22274[uParam0]._fU84 = 0;
    g_U15436[uParam0]._fU16 = 1;
    g_U15946[uParam0]._fU8[0]._fU0[2] = 1;
    g_U22274[uParam0]._fU8 = 1;
    if (g_U22274[uParam0]._fU168 > 0)
    {
        sub_110669( uParam0, 1 );
    }
    g_U22274[uParam0]._fU168 = 0;
    sub_111262( uParam0 );
    return 1;
}

void sub_110062(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = g_U22274[uParam0]._fU80;
    iVar4 = iVar4 / 12;
    if (iVar4 < 60000)
    {
        iVar4 = 60000;
    }
    if (NOT g_U22274[uParam0]._fU8)
    {
        iVar4 = 60000;
    }
    iVar4 += iVar3;
    g_U22274[uParam0]._fU84 = iVar4;
    return;
}

void sub_110236(unknown uParam0)
{
    int iVar3;
    int I;

    if (g_U22274[uParam0]._fU8)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        if (sub_108523( I ))
        {
            if (IS_BIT_SET( g_U22274[uParam0]._fU168, I ))
            {
                iVar3 = I;
                if (iVar3 == 10)
                {
                    g_U22274[uParam0]._fU140 = 0;
                }
                else
                {
                    g_U15946[uParam0]._fU8[0]._fU0[iVar3] = 0;
                }
            }
        }
    }
    return;
}

void sub_110406(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0:
        iVar3 = -3;
        break;
        case 3:
        iVar3 = -5;
        break;
        case 7:
        iVar3 = -10;
        break;
        case 8:
        case 13:
        iVar3 = -5;
        break;
        default:
        sub_23915( "Flow_Player_Said_No_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_81579( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_81579( uParam0, 0, iVar4 );
    return;
}

void sub_110669(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        switch (uParam0)
        {
            case 0:
            PRINT_HELP( "H_PAL_RY" );
            return;
            case 3:
            PRINT_HELP( "H_PAL_JY" );
            return;
            case 7:
            PRINT_HELP( "H_PAL_DY" );
            return;
            case 8:
            PRINT_HELP( "H_PAL_BY" );
            return;
            case 13:
            PRINT_HELP( "H_PAL_PY" );
            return;
        }
    }
    else
    {
        switch (uParam0)
        {
            case 0:
            PRINT_HELP( "H_PAL_RN" );
            return;
            case 3:
            PRINT_HELP( "H_PAL_JN" );
            return;
            case 7:
            PRINT_HELP( "H_PAL_DN" );
            return;
            case 8:
            PRINT_HELP( "H_PAL_BN" );
            return;
            case 13:
            PRINT_HELP( "H_PAL_PN" );
            return;
        }
    }
    return;
}

void sub_111053(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0:
        iVar3 = -3;
        break;
        case 3:
        iVar3 = -5;
        break;
        case 7:
        iVar3 = -10;
        break;
        case 8:
        case 13:
        iVar3 = -5;
        break;
        default:
        sub_23915( "Flow_Player_Said_No_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_81579( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_81579( uParam0, 0, iVar4 );
    return;
}

void sub_111262(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 + 60000;
    I = 0;
    for ( I = 0; I < 23; I++ )
    {
        if ((NOT g_U22274[I]._fU16) AND (g_U22274[I]._fU0))
        {
            if (g_U22274[I]._fU84 < iVar4)
            {
                g_U22274[I]._fU84 += 60000;
            }
        }
    }
    return;
}

void sub_111449(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (g_U13391[uParam0]._fU80._fU0 == 0))
    {
        sub_23915( "Main_Missions: Setup_Friend_Mission(): Attempting to setup a friend mission after strand already setup" );
        return;
    }
    sub_1907( uParam0, 0 );
    uVar4 = sub_48070( uParam0, uParam1 );
    g_U13391[uParam0]._fU80._fU0 = 1;
    g_U13391[uParam0]._fU80._fU4 = uParam1;
    g_U13391[uParam0]._fU80._fU56 = g_U26758[uVar4]._fU12;
    g_U13391[uParam0]._fU80._fU24 = {g_U26758[uVar4]._fU36};
    g_U10981[uParam0]._fU24 = -1;
    sub_47494( uParam0 );
    return;
}

void sub_111817(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    sub_91953( ref g_U22274[uParam0]._fU32, 1, 30, iVar3 );
    g_U22274[uParam0]._fU48 = {g_U22274[uParam0]._fU32};
    sub_92006( ref g_U22274[uParam0]._fU48, 1, 30 );
    return;
}

int sub_112080(unknown uParam0, unknown uParam1)
{
    if (g_U13391[uParam1]._fU80._fU0 == 0)
    {
        sub_51190( uParam0 );
        sub_108841( uParam0 );
        return 0;
    }
    if (sub_112135( uParam0, uParam1 ))
    {
        if (g_U22274[uParam0]._fU12)
        {
            sub_118584( uParam1 );
        }
        sub_47373( uParam1 );
        if (sub_118795( uParam0 ))
        {
            sub_108884( uParam0 );
            sub_119213( uParam0 );
        }
        else
        {
            sub_109211( uParam0 );
        }
        sub_51190( uParam0 );
        return 0;
    }
    if ((NOT g_U22274[uParam0]._fU20) || (g_U13391[uParam1]._fU80._fU0 == 1))
    {
        if (sub_89959( g_U22274[uParam0]._fU48 ))
        {
            if (NOT g_U22274[uParam0]._fU24)
            {
                sub_119485( uParam0 );
                sub_47373( uParam1 );
                if (sub_118795( uParam0 ))
                {
                    sub_108884( uParam0 );
                    sub_119213( uParam0 );
                }
                else
                {
                    sub_119798( uParam0 );
                }
                sub_51190( uParam0 );
                g_U15946[uParam0]._fU8[0]._fU0[2] = 0;
                return 0;
            }
        }
        if (NOT g_U22274[uParam0]._fU28)
        {
            if (sub_89959( g_U22274[uParam0]._fU32 ))
            {
                sub_119929( uParam0 );
            }
        }
    }
    if (g_U22274[uParam0]._fU20)
    {
        sub_74594( uParam1 );
    }
    else
    {
        sub_107988( uParam0, uParam1 );
    }
    if (g_U22274[uParam0]._fU20)
    {
        if (sub_120038())
        {
            sub_120095();
        }
    }
    return 1;
}

int sub_112135(unknown uParam0, unknown uParam1)
{
    if (NOT g_U15946[uParam0]._fU4)
    {
        return 0;
    }
    if (NOT g_U15946[uParam0]._fU8[1]._fU0[2])
    {
        return 0;
    }
    if ((g_U22274[uParam0]._fU24) || (g_U22274[uParam0]._fU20))
    {
        sub_91537( uParam1 );
        return 0;
    }
    sub_112245( uParam0, uParam1 );
    sub_96113();
    g_U15946[uParam0]._fU4 = 0;
    g_U15946[uParam0]._fU8[1]._fU0[2] = 0;
    g_U15946[uParam0]._fU8[0]._fU0[2] = 0;
    return 1;
}

void sub_112245(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = g_U22274[uParam0]._fU144;
    switch (uVar4)
    {
        case 4:
        sub_112364( uParam0, uParam1 );
        break;
        case 5:
        sub_112605( uParam0, uParam1 );
        break;
        case 6:
        sub_113319( uParam0, uParam1 );
        break;
        case 7:
        sub_113864( uParam0, uParam1 );
        break;
        case 8:
        sub_114746( uParam0, uParam1 );
        break;
        case 9:
        sub_115472( uParam0, uParam1 );
        break;
        case 10:
        sub_115710( uParam0, uParam1 );
        break;
        case 11:
        sub_116104( uParam0, uParam1 );
        break;
        case 12:
        sub_116649( uParam0, uParam1 );
        break;
        case 13:
        sub_117537( uParam0, uParam1 );
        break;
        default: sub_23915( "FA_Player_Phones_Cancel_Activity: Unknown Activity" );
    }
    return;
}

void sub_112364(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_86716( uParam0, uParam1 );
    switch (uParam0)
    {
        case 8:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CBTC", "FCB2_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CBTC", "FCB2_CMLK" );
        }
        else
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CBTC", "FCB2_CLOLK" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_112605(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_86716( uParam0, uParam1 );
    switch (uParam0)
    {
        case 0:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CBC", "FCR_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CBC", "FCR_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CBC", "FCR_CLOLK" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCD2AU", "FCD2_BOWLC", "FCD2_CHLK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCD2AU", "FCD2_BOWLC", "FCD2_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCD2AU", "FCD2_BOWLC", "FCD2_CLOLK" );
        }
        return;
        case 8:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CBC", "FCB2_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CBC", "FCB2_CMLK" );
        }
        else
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CBC", "FCB2_CLOLK" );
        }
        return;
        case 13:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CBC", "FCP_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CBC", "FCP_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CBC", "FCP_CLOLK" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_113319(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_86716( uParam0, uParam1 );
    switch (uParam0)
    {
        case 0:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CDC", "FCR_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CDC", "FCR_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CDC", "FCR_CLOLK" );
        }
        return;
        case 3:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CDC", "FCJ_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CDC", "FCJ_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CDC", "FCJ_CLOLK" );
        }
        return;
        case 13:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CDC", "FCP_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CDC", "FCP_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CDC", "FCP_CLOLK" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_113864(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_86716( uParam0, uParam1 );
    switch (uParam0)
    {
        case 0:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CDRC", "FCR_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CDRC", "FCR_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CDRC", "FCR_CLOLK" );
        }
        return;
        case 3:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CDRC", "FCJ_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CDRC", "FCJ_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CDRC", "FCJ_CLOLK" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCD2AU", "FCD2_CDRNKC", "FCD2_CHLK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCD2AU", "FCD2_CDRNKC", "FCD2_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCD2AU", "FCD2_CDRNKC", "FCD2_CLOLK" );
        }
        return;
        case 8:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CDC", "FCB2_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CDC", "FCB2_CMLK" );
        }
        else
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CDC", "FCB2_CLOLK" );
        }
        return;
        case 13:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CDRC", "FCP_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CDRC", "FCP_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CDRC", "FCP_CLOLK" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_114746(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_86716( uParam0, uParam1 );
    switch (uParam0)
    {
        case 0:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CEATC", "FCR_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CEATC", "FCR_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CEATC", "FCR_CLOLK" );
        }
        return;
        case 3:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CEATC", "FCJ_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CEATC", "FCJ_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CEATC", "FCJ_CLOLK" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCD2AU", "FCD2_CEATC", "FCD2_CHLK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCD2AU", "FCD2_CEATC", "FCD2_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCD2AU", "FCD2_CEATC", "FCD2_CLOLK" );
        }
        return;
        case 8:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CEC", "FCB2_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CEC", "FCB2_CMLK" );
        }
        else
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CEC", "FCB2_CLOLK" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_115472(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_86716( uParam0, uParam1 );
    switch (uParam0)
    {
        case 8:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CHC", "FCB2_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CHC", "FCB2_CMLK" );
        }
        else
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CHC", "FCB2_CLOLK" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_115710(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_86716( uParam0, uParam1 );
    switch (uParam0)
    {
        case 3:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CLC", "FCJ_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CLC", "FCJ_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CLC", "FCJ_CLOLK" );
        }
        return;
        case 8:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CLC", "FCB2_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CLC", "FCB2_CMLK" );
        }
        else
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CLC", "FCB2_CLOLK" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_116104(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_86716( uParam0, uParam1 );
    switch (uParam0)
    {
        case 0:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CPC", "FCR_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CPC", "FCR_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CPC", "FCR_CLOLK" );
        }
        return;
        case 3:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CPC", "FCJ_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CPC", "FCJ_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CPC", "FCJ_CLOLK" );
        }
        return;
        case 13:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CPC", "FCP_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CPC", "FCP_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CPC", "FCP_CLOLK" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_116649(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_86716( uParam0, uParam1 );
    switch (uParam0)
    {
        case 0:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CSHC", "FCR_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CSHC", "FCR_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CSHC", "FCR_CLOLK" );
        }
        return;
        case 3:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CSHC", "FCJ_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CSHC", "FCJ_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CSHC", "FCJ_CLOLK" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCD2AU", "PLACEHOLDER", "FCD2_CHLK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCD2AU", "PLACEHOLDER", "FCD2_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCD2AU", "PLACEHOLDER", "FCD2_CLOLK" );
        }
        return;
        case 8:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_PCSHC", "FCB2_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_PCSHC", "FCB2_CMLK" );
        }
        else
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_PCSHC", "FCB2_CLOLK" );
        }
        return;
        case 13:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CSHC", "FCP_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CSHC", "FCP_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CSHC", "FCP_CLOLK" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_117537(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_86716( uParam0, uParam1 );
    switch (uParam0)
    {
        case 0:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CSTC", "FCR_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CSTC", "FCR_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCR22AU", "FCR_CSTC", "FCR_CLOLK" );
        }
        return;
        case 3:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CSTC", "FCJ_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CSTC", "FCJ_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCJPCAU", "FCJ_CSTC", "FCJ_CLOLK" );
        }
        return;
        case 7:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCD2AU", "FCD2_CSTRPC", "FCD2_CHLK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCD2AU", "FCD2_CSTRPC", "FCD2_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCD2AU", "FCD2_CSTRPC", "FCD2_CLOLK" );
        }
        return;
        case 8:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CSTRC", "FCB2_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CSTRC", "FCB2_CMLK" );
        }
        else
        {
            sub_105085( uParam0, "FCB2aAU", "FCB2_CSTRC", "FCB2_CLOLK" );
        }
        return;
        case 13:
        if (iVar4 == 0)
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CSTC", "FCP_CHILK" );
        }
        else if (iVar4 == 1)
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CSTC", "FCP_CMDLK" );
        }
        else
        {
            sub_105085( uParam0, "FCPCPAU", "FCP_CSTC", "FCP_CLOLK" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_118584(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0:
        iVar3 = -1;
        break;
        case 3:
        iVar3 = -1;
        break;
        case 7:
        iVar3 = -1;
        break;
        case 8:
        case 13:
        iVar3 = -1;
        break;
        default:
        sub_23915( "Flow_Player_Cancelled_Activity_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_81579( uParam0, 1, iVar3 );
    return;
}

void sub_118795(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    boolean Result;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    uVar4 = sub_74221( uParam0 );
    if ((g_U10981[uVar4]._fU144._fU36) || (g_U22274[uParam0]._fU4))
    {
        sub_108917( uParam0 );
        return 0;
    }
    Result = iVar3 > g_U22274[uParam0]._fU88;
    if (sub_118895( uParam0 ))
    {
        sub_108917( uParam0 );
        return 0;
    }
    if (Result)
    {
        if ((NOT (g_U13391[uVar4]._fU0._fU0 == 1)) AND (NOT (g_U13391[uVar4]._fU0._fU0 == 0)))
        {
            g_U22274[uParam0]._fU88 = iVar3 + 60000;
            Result = false;
        }
    }
    if (Result)
    {
        if (g_U13391[uVar4]._fU160._fU96)
        {
            g_U22274[uParam0]._fU88 = iVar3 + 60000;
            Result = false;
        }
    }
    if (Result)
    {
        if ((g_U22274[uParam0]._fU164) || (g_U10981[uVar4]._fU40[1] < g_U22274[uParam0]._fU160))
        {
            g_U22274[uParam0]._fU88 = iVar3 + 60000;
            Result = false;
        }
    }
    return Result;
}

int sub_118895(unknown uParam0)
{
    switch (uParam0)
    {
        case 7:
        if (g_U15654[40])
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

void sub_119213(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar3 = g_U22274[uParam0]._fU108;
    uVar4 = sub_119241( uParam0 );
    sub_82376( uVar3 );
    Text_Player( uVar3, uParam0, uVar4, 5000, 3 );
    return;
}

void sub_119241(unknown uParam0)
{
    unknown Result;
    int iVar4;

    Result = g_U22274[uParam0]._fU132;
    iVar4 = Result;
    iVar4++;
    if (iVar4 >= g_U22274[uParam0]._fU128)
    {
        iVar4 = g_U22274[uParam0]._fU124;
    }
    g_U22274[uParam0]._fU132 = iVar4;
    return Result;
}

void sub_119485(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    sub_770( ref g_U22274[uParam0]._fU48 );
    uVar3 = g_U22274[uParam0]._fU104;
    uVar4 = sub_119532( uParam0 );
    sub_82376( uVar3 );
    Text_Player( uVar3, uParam0, uVar4, 5000, 4 );
    iVar5 = 300000;
    if (g_U0)
    {
        iVar5 = 30000;
    }
    iVar6 = 60000;
    if (g_U0)
    {
        iVar6 = 20000;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    g_U22274[uParam0]._fU152 = iVar7 + iVar5;
    g_U22274[uParam0]._fU156 = iVar7 + iVar6;
    return;
}

void sub_119532(unknown uParam0)
{
    unknown Result;
    int iVar4;

    Result = g_U22274[uParam0]._fU120;
    iVar4 = Result;
    iVar4++;
    if (iVar4 >= g_U22274[uParam0]._fU116)
    {
        iVar4 = g_U22274[uParam0]._fU112;
    }
    g_U22274[uParam0]._fU120 = iVar4;
    return Result;
}

void sub_119798(unknown uParam0)
{
    g_U22274[uParam0]._fU84 = g_U22274[uParam0]._fU88 + 10000;
    return;
}

void sub_119929(unknown uParam0)
{
    sub_770( ref g_U22274[uParam0]._fU32 );
    g_U22274[uParam0]._fU28 = 1;
    return;
}

int sub_120038()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_120095()
{
    if (sub_120038())
    {
        g_U64921 = 1;
    }
    return;
}

int sub_120164(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (sub_108017( uParam0 )))
    {
        return 0;
    }
    iVar4 = 0;
    iVar5 = 14;
    while (iVar4 < iVar5)
    {
        if (sub_120212( uParam0, uParam1, iVar4 ))
        {
            return 1;
        }
        iVar4++;
    }
    PRINTSTRING( "Flow_Maintain_Friend_Player_Chose_Activity: Failed to find a friend-selected activity\n" );
    return 0;
}

int sub_120212(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    boolean bVar6;

    if (NOT g_U15946[uParam0]._fU8[1]._fU0[uParam2])
    {
        return 0;
    }
    if (g_U22274[uParam0]._fU208[uParam2]._fU0 == -1)
    {
        sub_55041( "Flow_Check_Friend_Activity_Selected: Trigger Info for Friend Activity not set up\n" );
        return 0;
    }
    if (g_U22274[uParam0]._fU64 == 0)
    {
        if (NOT (g_U13391[uParam1]._fU80._fU0 == 0))
        {
            g_U15946[uParam0]._fU8[1]._fU0[uParam2] = 0;
            g_U15946[uParam0]._fU4 = 0;
            return 1;
        }
        if (sub_120468( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (sub_120660( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (sub_120853( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (sub_121041( uParam0, uParam1, uParam2 ))
        {
            return 0;
        }
        if (sub_121205( uParam0, uParam1, uParam2 ))
        {
            return 1;
        }
        if (NOT g_U22274[uParam0]._fU164)
        {
            if (sub_124712( uParam0, uParam1, uParam2 ))
            {
                return 1;
            }
            if (sub_124904( uParam0, uParam1, uParam2 ))
            {
                return 1;
            }
            if (sub_128357( uParam0, uParam1, uParam2 ))
            {
                return 1;
            }
        }
        sub_47373( uParam1 );
        g_U22274[uParam0]._fU64 = 1;
        g_U10980 = 1;
        uVar5 = uParam2;
        g_U22274[uParam0]._fU144 = uVar5;
        if (g_U22274[uParam0]._fU164)
        {
            sub_134881( uParam0, uParam2 );
            g_U22274[uParam0]._fU164 = 0;
            if (g_U10981[uParam1]._fU40[1] < g_U22274[uParam0]._fU160)
            {
                g_U10981[uParam1]._fU40[1] = g_U22274[uParam0]._fU160;
            }
        }
        else
        {
            sub_137997( uParam0, uParam2 );
        }
        sub_96113();
        return 1;
    }
    bVar6 = false;
    switch (sub_81198())
    {
        case 6:
        bVar6 = false;
        break;
        case 2:
        bVar6 = true;
        break;
        default: return 1;
    }
    g_U10980 = 0;
    g_U15946[uParam0]._fU8[1]._fU0[uParam2] = 0;
    g_U15946[uParam0]._fU4 = 0;
    g_U22274[uParam0]._fU64 = 0;
    g_U22274[uParam0]._fU20 = 0;
    g_U15436[uParam1]._fU16 = 1;
    if (bVar6)
    {
        return 1;
    }
    sub_146998( uParam1, g_U22274[uParam0]._fU208[uParam2]._fU0 );
    g_U22274[uParam0]._fU16 = 1;
    g_U22274[uParam0]._fU12 = 1;
    g_U10981[uParam1]._fU28 = 1;
    sub_111817( uParam0 );
    g_U15946[uParam0]._fU8[0]._fU0[2] = 1;
    sub_147097( uParam1 );
    return 1;
}

int sub_120468(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        return 0;
    }
    if (g_U22274[uParam0]._fU4)
    {
        sub_75373( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76, 0 );
        sub_79389( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76 );
        sub_52331();
        g_U15946[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U15946[uParam0]._fU4 = 0;
        sub_96113();
        return 1;
    }
    return 0;
}

int sub_120660(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        return 0;
    }
    if (NOT g_U22274[uParam0]._fU8)
    {
        sub_75373( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76, 0 );
        sub_79389( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76 );
        sub_52331();
        g_U15946[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U15946[uParam0]._fU4 = 0;
        sub_96113();
        return 1;
    }
    return 0;
}

int sub_120853(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_95672( uParam1 ))
    {
        if (g_U10981[uParam1]._fU144._fU84)
        {
            sub_75373( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76, 0 );
            sub_79389( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76 );
            sub_52331();
            g_U15946[uParam0]._fU8[1]._fU0[uParam2] = 0;
            g_U15946[uParam0]._fU4 = 0;
            sub_96113();
            return 1;
        }
    }
    return 0;
}

int sub_121041(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_95739( uParam0 ))
    {
        sub_75373( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76, 0 );
        sub_79389( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76 );
        sub_52331();
        g_U15946[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U15946[uParam0]._fU4 = 0;
        sub_96113();
        return 1;
    }
    return 0;
}

int sub_121205(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    boolean bVar7;

    iVar5 = 600000;
    if (g_U0)
    {
        iVar5 = 30000;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    bVar7 = false;
    if (g_U22274[uParam0]._fU164)
    {
        if (g_U22274[uParam0]._fU156 < iVar6)
        {
            return 0;
        }
        sub_75373( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76, 0 );
        sub_79389( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76 );
        sub_52331();
        bVar7 = true;
    }
    if (NOT bVar7)
    {
        if (g_U10981[uParam1]._fU40[1] < g_U22274[uParam0]._fU160)
        {
            sub_121422( uParam0, uParam2 );
            g_U22274[uParam0]._fU156 = iVar6 + iVar5;
            g_U22274[uParam0]._fU164 = 1;
            bVar7 = true;
        }
    }
    if (bVar7)
    {
        g_U15946[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U15946[uParam0]._fU4 = 0;
        sub_96113();
        return 1;
    }
    return 0;
}

void sub_121422(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 4:
        sub_121518( uParam0 );
        break;
        case 5:
        sub_121791( uParam0 );
        break;
        case 6:
        sub_122147( uParam0 );
        break;
        case 7:
        sub_122427( uParam0 );
        break;
        case 8:
        sub_122859( uParam0 );
        break;
        case 9:
        sub_123217( uParam0 );
        break;
        case 11:
        sub_123356( uParam0 );
        break;
        case 12:
        sub_123636( uParam0 );
        break;
        case 13:
        sub_124069( uParam0 );
        break;
        default: sub_23915( "FA_Player_Phones_Do_Activity_No_Low_Like: Unknown Activity" );
    }
    return;
}

void sub_121518(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CBOAT", "FCB_CLIKN", "FCB_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_121603(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;

    uVar8 = sub_87007( uParam0 );
    sub_121643( ref l_U280[uVar8]._fU0, uParam2, uParam3, uParam4, uParam5 );
    sub_105139( ref l_U280[uVar8]._fU0, uParam1, 1 );
    sub_52331();
    sub_87630( uParam0, 1 );
    return;
}

void sub_121643(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_87234( uParam0, uParam1, uParam2, uParam3, uParam4, "END", "END", "END", "END" );
    return;
}

void sub_121791(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_CB", "FCR_CLN", "FCR_PCREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CBOWL", "FCD_LIKENO", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_BOWL", "FCB_CLIKN", "FCB_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CB", "FCP_CLKNO", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_122147(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCD", "FCR_CLN", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CD", "FCJ_CLKN", "FCJ_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CD", "FCP_CLKNO", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_122427(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCDR", "FCR_CLN", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CDR", "FCJ_CLKN", "FCJ_CREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CDRINK", "FCD_LIKENO", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CDR", "FCB_CLIKN", "FCB_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CDR", "FCP_CLKNO", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_122859(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCE", "FCR_CLN", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CEAT", "FCJ_CLKN", "FCJ_CREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CEAT", "FCD_LIKENO", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CEAT", "FCB_CLIKN", "FCB_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_123217(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CHELI", "FCB_CLIKN", "FCB_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_123356(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCP", "FCR_CLN", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CP", "FCJ_CLKN", "FCJ_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CP", "FCP_CLKNO", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_123636(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCSH", "FCR_CLN", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CSH", "FCJ_CLKN", "FCJ_CREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "PLACEHOLDER", "FCD_LIKENO", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSH", "FCB_CLIKN", "FCB_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CSH", "FCP_CLKNO", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_124069(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCST", "FCR_CLN", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CST", "FCJ_CLKN", "FCJ_CREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CSTRP", "FCD_LIKENO", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSTRIP", "FCB_CLIKN", "FCB_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CST", "FCP_CLKNO", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

int sub_124712(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        return 0;
    }
    if (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 ))
    {
        sub_75373( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76, 0 );
        sub_79389( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76 );
        sub_52331();
        g_U15946[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U15946[uParam0]._fU4 = 0;
        sub_96113();
        return 1;
    }
    return 0;
}

int sub_124904(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (sub_124915( uParam0 ))
    {
        if (g_U22274[uParam0]._fU188._fU16)
        {
            sub_75373( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76, 0 );
            sub_79389( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76 );
            sub_52331();
        }
        else
        {
            sub_125725( uParam0, uParam2 );
            g_U22274[uParam0]._fU176 = 1;
            g_U22274[uParam0]._fU188._fU16 = 1;
        }
        g_U15946[uParam0]._fU8[1]._fU0[uParam2] = 0;
        g_U15946[uParam0]._fU4 = 0;
        sub_96113();
        return 1;
    }
    g_U22274[uParam0]._fU188._fU16 = 0;
    return 0;
}

int sub_124915(unknown uParam0)
{
    if (g_U22274[uParam0]._fU188._fU0._fU0 == -1)
    {
        return 0;
    }
    if (NOT (sub_124990( g_U22274[uParam0]._fU188._fU0, g_U22274[uParam0]._fU188._fU8 )))
    {
        return 0;
    }
    return 1;
}

int sub_124990(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    boolean bVar8;

    if ((uParam0._fU0 >= 24) || (uParam0._fU0 < 0))
    {
        sub_23915( "KM_Is_Now_Time_Between_Start_End_Times: Start Hours Error" );
        return 0;
    }
    if ((uParam0._fU4 >= 60) || (uParam0._fU4 < 0))
    {
        sub_23915( "KM_Is_Now_Time_Between_Start_End_Times: Start Minutes Error" );
        return 0;
    }
    if ((uParam2._fU0 >= 24) || (uParam2._fU0 < 0))
    {
        sub_23915( "KM_Is_Now_Time_Between_Start_End_Times: End Hours Error" );
        return 0;
    }
    if ((uParam2._fU4 >= 60) || (uParam2._fU4 < 0))
    {
        sub_23915( "KM_Is_Now_Time_Between_Start_End_Times: End Minutes Error" );
        return 0;
    }
    GET_TIME_OF_DAY( ref uVar6._fU0, ref uVar6._fU4 );
    bVar8 = sub_125370( uParam2, uParam0 );
    if (NOT bVar8)
    {
        if (sub_125370( uVar6, uParam0 ))
        {
            return 0;
        }
        if (sub_125370( uParam2, uVar6 ))
        {
            return 0;
        }
        return 1;
    }
    if (sub_125494( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_125370( uParam0, uVar6 ))
    {
        return 1;
    }
    if (sub_125370( uVar6, uParam2 ))
    {
        return 1;
    }
    return 0;
}

boolean sub_125370(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (uParam0._fU0 > uParam2._fU0)
    {
        return 0;
    }
    if (uParam0._fU0 < uParam2._fU0)
    {
        return 1;
    }
    return uParam0._fU4 < uParam2._fU4;
}

boolean sub_125494(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (uParam0._fU0 == uParam2._fU0))
    {
        return 0;
    }
    return uParam0._fU4 == uParam2._fU4;
}

void sub_125725(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 4:
        sub_125821( uParam0 );
        break;
        case 5:
        sub_125961( uParam0 );
        break;
        case 6:
        sub_126247( uParam0 );
        break;
        case 7:
        sub_126453( uParam0 );
        break;
        case 8:
        sub_126812( uParam0 );
        break;
        case 9:
        sub_127099( uParam0 );
        break;
        case 11:
        sub_127239( uParam0 );
        break;
        case 12:
        sub_127445( uParam0 );
        break;
        case 13:
        sub_127805( uParam0 );
        break;
        default: sub_23915( "FA_Player_Phones_Do_Activity_Sleeping: Unknown Activity" );
    }
    return;
}

void sub_125821(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CBOAT", "FCB_SLPREP", "FCB_CSLP" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_125961(unknown uParam0)
{
    switch (uParam0)
    {
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CBOWL", "FCD_SLEEP", "FCD_CSLEEP" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_BOWL", "FCB_SLPREP", "FCB_CSLP" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CB", "FCP_CSLRP", "FCP_CSL" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_126247(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CD", "FCJ_CSLR", "FCJ_CSL" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CD", "FCP_CSLRP", "FCP_CSL" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_126453(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CDR", "FCJ_CSLR", "FCJ_CSL" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CDRINK", "FCD_SLEEP", "FCD_CSLEEP" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CDR", "FCB_SLPREP", "FCB_CSLP" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CDR", "FCP_CSLRP", "FCP_CSL" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_126812(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CEAT", "FCJ_CSLR", "FCJ_CSL" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CEAT", "FCD_SLEEP", "FCD_CSLEEP" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CEAT", "FCB_SLPREP", "FCB_CSLP" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_127099(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CHELI", "FCB_SLPREP", "FCB_CSLP" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_127239(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CP", "FCJ_CSLR", "FCJ_CSL" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CP", "FCP_CSLRP", "FCP_CSL" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_127445(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CSH", "FCJ_CSLR", "FCJ_CSL" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "PLACEHOLDER", "FCD_SLEEP", "FCD_CSLEEP" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSH", "FCB_SLPREP", "FCB_CSLP" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CSH", "FCP_CSLRP", "FCP_CSL" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_127805(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CST", "FCJ_CSLR", "FCJ_CSL" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CSTRP", "FCD_SLEEP", "FCD_CSLEEP" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSTRIP", "FCB_SLPREP", "FCB_CSLP" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CST", "FCP_CSLRP", "FCP_CSL" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

int sub_128357(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;
    int iVar6;
    boolean bVar7;
    int iVar8;
    boolean bVar9;
    int iVar10;

    if (g_U0)
    {
        return 0;
    }
    iVar5 = 120000;
    if (g_U0)
    {
        iVar5 = 20000;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    bVar7 = false;
    if (g_U22274[uParam0]._fU156 > iVar6)
    {
        sub_75373( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76, 0 );
        sub_79389( ref g_U10981[uParam1]._fU92, ref g_U10981[uParam1]._fU76 );
        sub_52331();
        bVar7 = true;
    }
    if (NOT bVar7)
    {
        iVar8 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar8 );
        bVar9 = iVar8 < 50;
        iVar10 = g_U22274[uParam0]._fU148;
        if ((NOT g_U22274[uParam0]._fU92) AND ((bVar9) AND (iVar10 == iParam2)))
        {
            sub_128600( uParam0, iParam2 );
            g_U22274[uParam0]._fU156 = iVar6 + iVar5;
            bVar7 = true;
        }
    }
    if (NOT bVar7)
    {
        if (g_U22274[uParam0]._fU152 > iVar6)
        {
            sub_131684( uParam0, iParam2 );
            g_U22274[uParam0]._fU156 = iVar6 + iVar5;
            bVar7 = true;
        }
    }
    if (bVar7)
    {
        g_U15946[uParam0]._fU8[1]._fU0[iParam2] = 0;
        g_U15946[uParam0]._fU4 = 0;
        sub_96113();
        return 1;
    }
    return 0;
}

void sub_128600(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 4:
        sub_128696( uParam0 );
        break;
        case 5:
        sub_128834( uParam0 );
        break;
        case 6:
        sub_129191( uParam0 );
        break;
        case 7:
        sub_129471( uParam0 );
        break;
        case 8:
        sub_129904( uParam0 );
        break;
        case 9:
        sub_130265( uParam0 );
        break;
        case 11:
        sub_130403( uParam0 );
        break;
        case 12:
        sub_130683( uParam0 );
        break;
        case 13:
        sub_131120( uParam0 );
        break;
        default: sub_23915( "FA_Player_Phones_Do_Activity_No_Same: Unknown Activity" );
    }
    return;
}

void sub_128696(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CBOAT", "FCB_CBNR", "FCB_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_128834(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_CB", "FCR_CBNR", "FCR_PCREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CBOWL", "FCD_BOWLNR", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_BOWL", "FCB_BOWLNR", "FCB_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CB", "FCP_CBNR", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_129191(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCD", "FCR_CDNR", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CD", "FCJ_CDNR", "FCJ_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CD", "FCP_CDNR", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_129471(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCDR", "FCR_DRNR", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CDR", "FCJ_CDRNR", "FCJ_CREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CDRINK", "FCD_DRNKNR", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CDR", "FCB_CDNR", "FCB_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CDR", "FCP_CDRNR", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_129904(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCE", "FCR_CENR", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CEAT", "FCJ_EATNG", "FCJ_CREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CEAT", "FCD_EATNOR", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CEAT", "FCB_CEATNR", "FCB_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_130265(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CHELI", "FCB_CHNR", "FCB_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_130403(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCP", "FCR_CPNR", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CP", "FCJ_CPNR", "FCJ_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CP", "FCP_CPNR", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_130683(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCSH", "FCR_CSHNR", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CSH", "FCJ_CSHNR", "FCJ_CREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "PLACEHOLDER", "PLACEHOLDER", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSH", "FCB_CSHNR", "FCB_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CSH", "FCP_CSHNR", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_131120(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCST", "FCR_CSTNR", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CST", "FCJ_CSTNR", "FCJ_CREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CSTRP", "FCD_STRPNOR", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSTRIP", "FCB_CSTNR", "FCB_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CST", "FCP_CSTNR", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_131684(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 4:
        sub_131780( uParam0 );
        break;
        case 5:
        sub_131918( uParam0 );
        break;
        case 6:
        sub_132274( uParam0 );
        break;
        case 7:
        sub_132554( uParam0 );
        break;
        case 8:
        sub_132986( uParam0 );
        break;
        case 9:
        sub_133348( uParam0 );
        break;
        case 11:
        sub_133486( uParam0 );
        break;
        case 12:
        sub_133766( uParam0 );
        break;
        case 13:
        sub_134203( uParam0 );
        break;
        default: sub_23915( "FA_Player_Phones_Do_Activity_No_General: Unknown Activity" );
    }
    return;
}

void sub_131780(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CBOAT", "FCB_CBNG", "FCB_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_131918(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_CB", "FCR_CBNG", "FCR_PCREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CBOWL", "FCD_BOWLNG", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_BOWL", "FCB_BOWLN", "FCB_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CB", "FCP_CBNG", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_132274(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCD", "FCR_CDNG", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CD", "FCJ_CDNG", "FCJ_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CD", "FCP_CDNG", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_132554(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCDR", "FCR_CRNG", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CDR", "FCJ_CDRNG", "FCJ_CREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CDRINK", "FCD_DRNKNG", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CDR", "FCB_CDN", "FCB_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CDR", "FCP_CDRNG", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_132986(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCE", "FCR_CENG", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CEAT", "FCJ_CEATNG", "FCJ_CREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CEAT", "FCD_EATNOG", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CEAT", "FCB_CEATNG", "FCB_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_133348(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CHELI", "FCB_CHNG", "FCB_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_133486(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCP", "FCR_CPNG", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CP", "FCJ_CPNG", "FCJ_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CP", "FCP_CPNG", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_133766(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCSH", "FCR_CSHNG", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CSH", "FCJ_CSHNG", "FCJ_CREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "PLACEHOLDER", "PLACEHOLDER", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSH", "FCB_CSHNG", "FCB_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CSH", "FCP_CSHNG", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_134203(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCST", "FCR_CSTNG", "FCR_PCREJ" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CST", "FCJ_CSTNG", "FCJ_CREJ" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CSTRP", "FCD_STRPNOG", "FCD_CREJ" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSTRIP", "FCB_CSTRNG", "FCB_CREJ" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CST", "FCP_CSTNG", "FCP_CREJ" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_134881(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 4:
        sub_134977( uParam0 );
        break;
        case 5:
        sub_135115( uParam0 );
        break;
        case 6:
        sub_135471( uParam0 );
        break;
        case 7:
        sub_135750( uParam0 );
        break;
        case 8:
        sub_136182( uParam0 );
        break;
        case 9:
        sub_136541( uParam0 );
        break;
        case 11:
        sub_136679( uParam0 );
        break;
        case 12:
        sub_136958( uParam0 );
        break;
        case 13:
        sub_137391( uParam0 );
        break;
        default: sub_23915( "FA_Player_Phones_Do_Activity_Yes_Like_Again: Unknown Activity" );
    }
    return;
}

void sub_134977(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CBOAT", "FCB_CLIKY", "FCB_ACC" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_135115(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_CB", "FCR_CLY", "FCR_PCACC" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CBOWL", "FCD_LIKEYES", "FCD_CACCP" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_BOWL", "FCB_CLIKY", "FCB_ACC" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CB", "FCP_CLKY", "FCP_CACC" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_135471(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCD", "FCR_CLY", "FCR_PCACC" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CD", "FCJ_CLKY", "FCJ_CACC" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CD", "FCP_CLKY", "FCP_CACC" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_135750(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCDR", "FCR_CLY", "FCR_PCACC" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CDR", "FCJ_CLKY", "FCJ_CACC" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CDRINK", "FCD_LIKEYES", "FCD_CACCP" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CDR", "FCB_CLIKY", "FCB_ACC" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CDR", "FCP_CLKY", "FCP_CACC" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_136182(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCE", "FCR_CLY", "FCR_PCACC" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CEAT", "FCJ_CLKY", "FCJ_CACC" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CEAT", "FCD_LIKEYES", "FCD_CACCP" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CEAT", "FCB_CLIKY", "FCB_ACC" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_136541(unknown uParam0)
{
    switch (uParam0)
    {
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CHELI", "FCB_CLIKY", "FCB_ACC" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_136679(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCP", "FCR_CLY", "FCR_PCACC" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CP", "FCJ_CLKY", "FCJ_CACC" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CP", "FCP_CLKY", "FCP_CACC" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_136958(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCSH", "FCR_CLY", "FCR_PCACC" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CSH", "FCJ_CLKY", "FCJ_CACC" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "PLACEHOLDER", "FCD_LIKEYES", "FCD_CACCP" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSH", "FCB_CLIKY", "FCB_ACC" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CSH", "FCP_CLKY", "FCP_CACC" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_137391(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCST", "FCR_CLY", "FCR_PCACC" );
        return;
        case 3:
        sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CST", "FCJ_CLKY", "FCJ_CACC" );
        return;
        case 7:
        sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CSTRP", "FCD_LIKEYES", "FCD_CACCP" );
        return;
        case 8:
        sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSTRIP", "FCB_CLIKY", "FCB_ACC" );
        return;
        case 13:
        sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CST", "FCP_CLKY", "FCP_CACC" );
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_137997(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 4:
        sub_138093( uParam0 );
        break;
        case 5:
        sub_138569( uParam0 );
        break;
        case 6:
        sub_139647( uParam0 );
        break;
        case 7:
        sub_140471( uParam0 );
        break;
        case 8:
        sub_141806( uParam0 );
        break;
        case 9:
        sub_142896( uParam0 );
        break;
        case 11:
        sub_143237( uParam0 );
        break;
        case 12:
        sub_144061( uParam0 );
        break;
        case 13:
        sub_145408( uParam0 );
        break;
        default: sub_23915( "FA_Player_Phones_Do_Activity_Yes: Unknown Activity" );
    }
    return;
}

void sub_138093(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U22274[uParam0]._fU92;
    bVar4 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CBOAT", "FCB_VIRATE", "FCB_CBTY", "FCB_ACC" );
            }
            else
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CBOAT", "FCB_IRATE", "FCB_CBTY", "FCB_ACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CBOAT", "FCB_CBTY", "FCB_ACC" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_138237(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    unknown uVar9;

    uVar9 = sub_87007( uParam0 );
    sub_138279( ref l_U280[uVar9]._fU0, uParam2, uParam3, uParam4, uParam5, uParam6 );
    sub_105139( ref l_U280[uVar9]._fU0, uParam1, 1 );
    sub_52331();
    sub_87630( uParam0, 1 );
    return;
}

void sub_138279(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_87234( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, "END", "END", "END" );
    return;
}

void sub_138569(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U22274[uParam0]._fU92;
    bVar4 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_CB", "FCR_CVIRATE", "FCR_CBY", "FCR_PCACC" );
            }
            else
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_CB", "FCR_CIRATE", "FCR_CBY", "FCR_PCACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_CB", "FCR_CBY", "FCR_PCACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCDAUD", "FCD_GREET", "FCD_CBOWL", "FCD_VIRATE", "FCD_BOWLY", "FCD_CACCP" );
            }
            else
            {
                sub_138237( uParam0, "FCDAUD", "FCD_GREET", "FCD_CBOWL", "FCD_CIRATE", "FCD_BOWLY", "FCD_CACCP" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CBOWL", "FCD_BOWLY", "FCD_CACCP" );
        }
        return;
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_BOWL", "FCB_VIRATE", "FCB_BOWLY", "FCB_ACC" );
            }
            else
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_BOWL", "FCB_IRATE", "FCB_BOWLY", "FCB_ACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_BOWL", "FCB_BOWLY", "FCB_ACC" );
        }
        return;
        case 13:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CB", "FCP_CVIRATE", "FCP_CBY", "FCP_CACC" );
            }
            else
            {
                sub_138237( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CB", "FCP_CIRATE", "FCP_CBY", "FCP_CACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CB", "FCP_CBY", "FCP_CACC" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_139647(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U22274[uParam0]._fU92;
    bVar4 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCD", "FCR_CVIRATE", "FCR_CDY", "FCR_PCACC" );
            }
            else
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCD", "FCR_CIRATE", "FCR_CDY", "FCR_PCACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCD", "FCR_CDY", "FCR_PCACC" );
        }
        return;
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CD", "FCJ_CVIRATE", "FCJ_CDY", "FCJ_CACC" );
            }
            else
            {
                sub_138237( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CD", "FCJ_CIRATE", "FCJ_CDY", "FCJ_CACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CD", "FCJ_CDY", "FCJ_CACC" );
        }
        return;
        case 13:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CD", "FCP_CVIRATE", "FCP_CDY", "FCP_CACC" );
            }
            else
            {
                sub_138237( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CD", "FCP_CIRATE", "FCP_CDY", "FCP_CACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CD", "FCP_CDY", "FCP_CACC" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_140471(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U22274[uParam0]._fU92;
    bVar4 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCDR", "FCR_CVIRATE", "FCR_CDRY", "FCR_PCACC" );
            }
            else
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCDR", "FCR_CIRATE", "FCR_CDRY", "FCR_PCACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCDR", "FCR_CDRY", "FCR_PCACC" );
        }
        return;
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CDR", "FCJ_CVIRATE", "FCJ_CDRY", "FCJ_CACC" );
            }
            else
            {
                sub_138237( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CDR", "FCJ_CIRATE", "FCJ_CDRY", "FCJ_CACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CDR", "FCJ_CDRY", "FCJ_CACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCDAUD", "FCD_GREET", "FCD_CDRINK", "FCD_VIRATE", "FCD_DRNKY", "FCD_CACCP" );
            }
            else
            {
                sub_138237( uParam0, "FCDAUD", "FCD_GREET", "FCD_CDRINK", "FCD_CIRATE", "FCD_DRNKY", "FCD_CACCP" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CDRINK", "FCD_DRNKY", "FCD_CACCP" );
        }
        return;
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CDR", "FCB_VIRATE", "FCB_CDY", "FCB_ACC" );
            }
            else
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CDR", "FCB_IRATE", "FCB_CDY", "FCB_ACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CDR", "FCB_CDY", "FCB_ACC" );
        }
        return;
        case 13:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CDR", "FCP_CVIRATE", "FCP_CDRY", "FCP_CACC" );
            }
            else
            {
                sub_138237( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CDR", "FCP_CIRATE", "FCP_CDRY", "FCP_CACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CDR", "FCP_CDRY", "FCP_CACC" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_141806(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U22274[uParam0]._fU92;
    bVar4 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCE", "FCR_CVIRATE", "FCR_CEY", "FCR_PCACC" );
            }
            else
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCE", "FCR_CIRATE", "FCR_CEY", "FCR_PCACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCE", "FCR_CEY", "FCR_PCACC" );
        }
        return;
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CEAT", "FCJ_CVIRATE", "FCJ_CEATY", "FCJ_CACC" );
            }
            else
            {
                sub_138237( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CEAT", "FCJ_CIRATE", "FCJ_CEATY", "FCJ_CACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CEAT", "FCJ_CEATY", "FCJ_CACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCDAUD", "FCD_GREET", "FCD_CEAT", "FCD_VIRATE", "FCD_EATY", "FCD_CACCP" );
            }
            else
            {
                sub_138237( uParam0, "FCDAUD", "FCD_GREET", "FCD_CEAT", "FCD_CIRATE", "FCD_EATY", "FCD_CACCP" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CEAT", "FCD_EATY", "FCD_CACCP" );
        }
        return;
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CEAT", "FCB_VIRATE", "FCB_CEATY", "FCB_ACC" );
            }
            else
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CEAT", "FCB_IRATE", "FCB_CEATY", "FCB_ACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CEAT", "FCB_CEATY", "FCB_ACC" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_142896(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U22274[uParam0]._fU92;
    bVar4 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CHELI", "FCB_VIRATE", "FCB_CHY", "FCB_ACC" );
            }
            else
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CHELI", "FCB_IRATE", "FCB_CHY", "FCB_ACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CHELI", "FCB_CHY", "FCB_ACC" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_143237(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U22274[uParam0]._fU92;
    bVar4 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCP", "FCR_CVIRATE", "FCR_CPY", "FCR_PCACC" );
            }
            else
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCP", "FCR_CIRATE", "FCR_CPY", "FCR_PCACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCP", "FCR_CPY", "FCR_PCACC" );
        }
        return;
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CP", "FCJ_CVIRATE", "FCJ_CPY", "FCJ_CACC" );
            }
            else
            {
                sub_138237( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CP", "FCJ_CIRATE", "FCJ_CPY", "FCJ_CACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CP", "FCJ_CPY", "FCJ_CACC" );
        }
        return;
        case 13:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CP", "FCP_CVIRATE", "FCP_CPY", "FCP_CACC" );
            }
            else
            {
                sub_138237( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CP", "FCP_CIRATE", "FCP_CPY", "FCP_CACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CP", "FCP_CPY", "FCP_CACC" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_144061(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U22274[uParam0]._fU92;
    bVar4 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCSH", "FCR_CVIRATE", "FCR_CSHY", "FCR_PCACC" );
            }
            else
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCSH", "FCR_CIRATE", "FCR_CSHY", "FCR_PCACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCSH", "FCR_CSHY", "FCR_PCACC" );
        }
        return;
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CSH", "FCJ_CVIRATE", "FCJ_CSHY", "FCJ_CACC" );
            }
            else
            {
                sub_138237( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CSH", "FCJ_CIRATE", "FCJ_CSHY", "FCJ_CACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CSH", "FCJ_CSHY", "FCJ_CACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCDAUD", "FCD_GREET", "PLACEHOLDER", "FCD_VIRATE", "PLACEHOLDER", "FCD_CACCP" );
            }
            else
            {
                sub_138237( uParam0, "FCDAUD", "FCD_GREET", "PLACEHOLDER", "FCD_CIRATE", "PLACEHOLDER", "FCD_CACCP" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCDAUD", "FCD_GREET", "PLACEHOLDER", "PLACEHOLDER", "FCD_CACCP" );
        }
        return;
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSH", "FCB_VIRATE", "FCB_CSHY", "FCB_ACC" );
            }
            else
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSH", "FCB_IRATE", "FCB_CSHY", "FCB_ACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSH", "FCB_CSHY", "FCB_ACC" );
        }
        return;
        case 13:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CSH", "FCP_CVIRATE", "FCP_CSHY", "FCP_CACC" );
            }
            else
            {
                sub_138237( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CSH", "FCP_CIRATE", "FCP_CSHY", "FCP_CACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CSH", "FCP_CSHY", "FCP_CACC" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_145408(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;

    bVar3 = g_U22274[uParam0]._fU92;
    bVar4 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCST", "FCR_CVIRATE", "FCR_CSTY", "FCR_PCACC" );
            }
            else
            {
                sub_138237( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCST", "FCR_CIRATE", "FCR_CSTY", "FCR_PCACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCR11AU", "FCR_GREET", "FCR_PCST", "FCR_CSTY", "FCR_PCACC" );
        }
        return;
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CST", "FCJ_CVIRATE", "FCJ_CSTY", "FCJ_CACC" );
            }
            else
            {
                sub_138237( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CST", "FCJ_CIRATE", "FCJ_CSTY", "FCJ_CACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCJPCAU", "FCJ_CGREET", "FCJ_CST", "FCJ_CSTY", "FCJ_CACC" );
        }
        return;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCDAUD", "FCD_GREET", "FCD_CSTRP", "FCD_VIRATE", "FCD_STRPY", "FCD_CACCP" );
            }
            else
            {
                sub_138237( uParam0, "FCDAUD", "FCD_GREET", "FCD_CSTRP", "FCD_CIRATE", "FCD_STRPY", "FCD_CACCP" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCDAUD", "FCD_GREET", "FCD_CSTRP", "FCD_STRPY", "FCD_CACCP" );
        }
        return;
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSTRIP", "FCB_VIRATE", "FCB_CSTRY", "FCB_ACC" );
            }
            else
            {
                sub_138237( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSTRIP", "FCB_IRATE", "FCB_CSTRY", "FCB_ACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCBPCAU", "FCB_GREET", "FCB_CSTRIP", "FCB_CSTRY", "FCB_ACC" );
        }
        return;
        case 13:
        if (bVar3)
        {
            if (bVar4)
            {
                sub_138237( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CST", "FCP_CVIRATE", "FCP_CSTY", "FCP_CACC" );
            }
            else
            {
                sub_138237( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CST", "FCP_CIRATE", "FCP_CSTY", "FCP_CACC" );
            }
        }
        else
        {
            sub_121603( uParam0, "FCPPCAU", "FCP_GREET", "FCP_CST", "FCP_CSTY", "FCP_CACC" );
        }
        return;
    }
    sub_75373( "PLACEHOLDER", "FCRDCAU", 1 );
    return;
}

void sub_146998(unknown uParam0, unknown uParam1)
{
    sub_111449( uParam0, uParam1 );
    return;
}

void sub_147097(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0:
        iVar3 = 1;
        break;
        case 3:
        iVar3 = 1;
        break;
        case 7:
        iVar3 = 1;
        break;
        case 8:
        case 13:
        iVar3 = 1;
        break;
        default:
        sub_23915( "Flow_Player_Phoned_To_Start_Activity_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_81579( uParam0, 1, iVar3 );
    return;
}

int sub_147479(unknown uParam0, unknown uParam1)
{
    int iVar4;
    boolean bVar5;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    if (g_U22274[uParam0]._fU84 < iVar4)
    {
        if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
        {
            sub_147542( uParam0 );
            return 0;
        }
        if (sub_147598( uParam0 ))
        {
            sub_147542( uParam0 );
            return 0;
        }
        if (g_U22274[uParam0]._fU4)
        {
            sub_147542( uParam0 );
            return 0;
        }
        if ((sub_85695()) || ((sub_86171( 0 )) || ((sub_85448()) || ((sub_85644()) || ((IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )) || ((IS_THREAD_ACTIVE( g_U812 )) || ((g_U10978) || ((sub_124915( uParam0 )) || (NOT (g_U13391[uParam1]._fU80._fU0 == 0))))))))))
        {
            sub_147542( uParam0 );
            return 0;
        }
        if ((sub_95739( uParam0 )) || (NOT (sub_106785( uParam0, 30000 ))))
        {
            sub_147542( uParam0 );
            return 0;
        }
        if (sub_95672( uParam1 ))
        {
            if (g_U10981[uParam1]._fU144._fU84)
            {
                sub_147542( uParam0 );
                return 0;
            }
        }
        bVar5 = g_U10981[uParam1]._fU40[1] < g_U22274[uParam0]._fU160;
        if ((NOT g_U22274[uParam0]._fU8) AND (bVar5))
        {
            g_U10981[uParam1]._fU40[1] = g_U22274[uParam0]._fU160;
            g_U10981[uParam1]._fU56[1] = g_U22274[uParam0]._fU160;
            bVar5 = false;
        }
        if (bVar5)
        {
            sub_147542( uParam0 );
            return 0;
        }
        sub_47373( uParam1 );
        if (sub_148039( uParam0 ))
        {
            return 1;
        }
        g_U15946[uParam0]._fU8[0]._fU0[10] = 0;
        sub_147542( uParam0 );
        return 0;
    }
    return 0;
}

void sub_147542(unknown uParam0)
{
    int iVar3;

    sub_110062( uParam0 );
    g_U15946[uParam0]._fU4 = 0;
    iVar3 = 1;
    sub_54631( uParam0, iVar3 );
    return;
}

int sub_147598(unknown uParam0)
{
    switch (uParam0)
    {
        case 7:
        if (g_U15654[40])
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

int sub_148039(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;
    int iVar6;
    int iVar7;
    string sVar8;
    int iVar9;
    boolean bVar10;
    int iVar11;

    if (NOT g_U22274[uParam0]._fU8)
    {
        sub_148069( uParam0 );
    }
    if (g_U22274[uParam0]._fU140)
    {
        if (sub_148232( uParam0 ))
        {
            g_U15946[uParam0]._fU8[0]._fU0[10] = 1;
        }
    }
    iVar3 = g_U22274[uParam0]._fU148;
    iVar4 = 14;
    if (NOT (iVar3 == 14))
    {
        if ((NOT g_U22274[uParam0]._fU92) AND (g_U15946[uParam0]._fU8[0]._fU0[iVar3]))
        {
            g_U15946[uParam0]._fU8[0]._fU0[iVar3] = 0;
            iVar4 = iVar3;
        }
    }
    I = 0;
    iVar6 = 0;
    iVar7 = 14;
    for ( I = 0; I < iVar7; I++ )
    {
        if (sub_108523( I ))
        {
            if (g_U15946[uParam0]._fU8[0]._fU0[I])
            {
                iVar6++;
            }
        }
    }
    if (iVar6 == 0)
    {
        if (NOT (iVar4 == 14))
        {
            g_U15946[uParam0]._fU8[0]._fU0[iVar4] = 1;
        }
        return 0;
    }
    I = sub_153032( uParam0 );
    if (NOT (iVar4 == 14))
    {
        g_U15946[uParam0]._fU8[0]._fU0[iVar4] = 1;
    }
    if (I == 14)
    {
        return 0;
    }
    g_U22274[uParam0]._fU100 = g_U22274[uParam0]._fU208[I]._fU0;
    sVar8 = "";
    iVar9 = I;
    bVar10 = false;
    switch (iVar9)
    {
        case 10:
        sVar8 = sub_153763( uParam0 );
        if (NOT (COMPARE_STRING( sVar8, "ERROR" )))
        {
            bVar10 = sub_155962( uParam0, sVar8 );
        }
        break;
        default: bVar10 = sub_156946( uParam0, I );
    }
    if (bVar10)
    {
        g_U22274[uParam0]._fU68 = 1;
        g_U10980 = 1;
        iVar11 = I;
        g_U22274[uParam0]._fU144 = iVar11;
        return 1;
    }
    g_U22274[uParam0]._fU100 = -1;
    return 0;
}

void sub_148069(unknown uParam0)
{
    int iVar3;
    int I;

    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        if (sub_108523( I ))
        {
            if (IS_BIT_SET( g_U22274[uParam0]._fU168, I ))
            {
                iVar3 = I;
                if (iVar3 == 10)
                {
                    g_U22274[uParam0]._fU140 = 1;
                }
                else
                {
                    g_U15946[uParam0]._fU8[0]._fU0[iVar3] = 1;
                }
            }
        }
    }
    return;
}

int sub_148232(unknown uParam0)
{
    switch (uParam0)
    {
        case 3: return sub_148266();
        case 8: return sub_150457();
    }
    sub_23915( "Setup_Lift_Details: Illegal Contact ID for Lift" );
    return 0;
}

int sub_148266()
{
    unknown[15] uVar2;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    int I;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    int iVar142;
    float fVar143;
    boolean bVar144;
    boolean bVar145;
    int iVar146;
    boolean bVar147;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    unknown uVar151;
    unknown uVar152;
    unknown uVar153;
    float fVar154;
    int iVar155;

    if (NOT (g_U9937 == 0))
    {
        return 0;
    }
    if (IS_CHAR_DEAD( CurrentPlayerChar() ))
    {
        return 0;
    }
    array(ref uVar2, 15);
    uVar2[0]._fU0 = {g_U9731[3]._fU4};
    uVar2[0]._fU12 = {g_U9788[5]._fU4};
    uVar2[0]._fU24 = g_U9788[5]._fU16;
    uVar2[0]._fU28 = 0;
    uVar2[1]._fU0 = {1106.28300000, 690.48790000, 38.12300000};
    uVar2[1]._fU12 = {1102.78800000, 690.23540000, 35.83630000};
    uVar2[1]._fU24 = 270.00000000;
    uVar2[1]._fU28 = 1;
    uVar2[2]._fU0 = {1411.84100000, 702.07660000, 34.04000000};
    uVar2[2]._fU12 = {1415.17600000, 702.49770000, 31.66460000};
    uVar2[2]._fU24 = 90.00000000;
    uVar2[2]._fU28 = 2;
    uVar2[3]._fU0 = {1269.08400000, 595.08190000, 39.77700000};
    uVar2[3]._fU12 = {1272.47700000, 595.51040000, 37.44920000};
    uVar2[3]._fU24 = 90.00000000;
    uVar2[3]._fU28 = 3;
    uVar2[4]._fU0 = {1622.59600000, 668.37820000, 29.62100000};
    uVar2[4]._fU12 = {1622.57600000, 672.48060000, 27.46100000};
    uVar2[4]._fU24 = 180.00000000;
    uVar2[4]._fU28 = 4;
    uVar2[5]._fU0 = {1775.16400000, 348.18700000, 23.41000000};
    uVar2[5]._fU12 = {1775.08700000, 345.39370000, 21.03020000};
    uVar2[5]._fU24 = 0.00000000;
    uVar2[5]._fU28 = 5;
    uVar2[6]._fU0 = {1376.83700000, 417.72670000, 24.80500000};
    uVar2[6]._fU12 = {1379.96000000, 418.39240000, 22.50350000};
    uVar2[6]._fU24 = 90.00000000;
    uVar2[6]._fU28 = 6;
    uVar2[7]._fU0 = {2314.09400000, 547.68950000, 7.35200000};
    uVar2[7]._fU12 = {2316.99900000, 549.90840000, 4.77300000};
    uVar2[7]._fU24 = 157.00000000;
    uVar2[7]._fU28 = 7;
    uVar2[8]._fU0 = {1109.25400000, 118.55400000, 35.56700000};
    uVar2[8]._fU12 = {1113.78500000, 118.70350000, 33.21270000};
    uVar2[8]._fU24 = 90.00000000;
    uVar2[8]._fU28 = 8;
    uVar2[9]._fU0 = {1468.14000000, 80.17100000, 26.44900000};
    uVar2[9]._fU12 = {1468.25000000, 83.77820000, 24.11600000};
    uVar2[9]._fU24 = 180.00000000;
    uVar2[9]._fU28 = 10;
    uVar2[10]._fU0 = {1130.49200000, -169.28000000, 32.07700000};
    uVar2[10]._fU12 = {1134.12200000, -169.36630000, 29.76800000};
    uVar2[10]._fU24 = 90.00000000;
    uVar2[10]._fU28 = 11;
    uVar2[11]._fU0 = {1203.86700000, -239.00810000, 25.75300000};
    uVar2[11]._fU12 = {1199.90800000, -238.96490000, 23.44910000};
    uVar2[11]._fU24 = 270.00000000;
    uVar2[11]._fU28 = 12;
    uVar2[12]._fU0 = {1011.47700000, -573.74400000, 15.60300000};
    uVar2[12]._fU12 = {1011.65900000, -577.80740000, 13.26490000};
    uVar2[12]._fU24 = 0.00000000;
    uVar2[12]._fU28 = 13;
    uVar2[13]._fU0 = {1294.58300000, -430.03940000, 17.34300000};
    uVar2[13]._fU12 = {1300.05100000, -429.10370000, 15.03590000};
    uVar2[13]._fU24 = 90.00000000;
    uVar2[13]._fU28 = 14;
    uVar2[14]._fU0 = {1092.89100000, -643.58190000, 14.79900000};
    uVar2[14]._fU12 = {1096.89600000, -642.90580000, 12.45180000};
    uVar2[14]._fU24 = 90.00000000;
    uVar2[14]._fU28 = 15;
    I = 0;
    for ( I = 0; I < 15; I++ )
    {
        uVar2[I]._fU32 = 0;
    }
    GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar139._fU0, ref uVar139._fU4, ref uVar139._fU8 );
    iVar142 = 0;
    fVar143 = 0.00000000;
    for ( I = 0; I < 15; I++ )
    {
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar139._fU0, uVar139._fU4, uVar139._fU8, uVar2[I]._fU0._fU0, uVar2[I]._fU0._fU4, uVar2[I]._fU0._fU8, ref fVar143 );
        if ((fVar143 >= 200.00000000) AND (fVar143 < 1000.00000000))
        {
            uVar2[I]._fU32 = 1;
            iVar142++;
        }
    }
    if (iVar142 == 0)
    {
        return 0;
    }
    bVar144 = uVar2[0]._fU32;
    bVar145 = false;
    iVar146 = 0;
    if (bVar144)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar146 );
        if (iVar146 < 33)
        {
            bVar145 = true;
        }
    }
    if ((iVar142 == 1) AND ((bVar144) AND (NOT bVar145)))
    {
        bVar145 = true;
    }
    bVar147 = true;
    if (bVar145)
    {
        g_U64782._fU0 = {uVar2[0]._fU12};
        g_U64782._fU12 = uVar2[0]._fU24;
        g_U64782._fU16 = 0;
    }
    else if (bVar144)
    {
        iVar142--;
        uVar2[0]._fU32 = 0;
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar142, ref iVar146 );
    bVar147 = true;
    for ( I = 0; I < 15; I++ )
    {
        if (bVar147)
        {
            if (uVar2[I]._fU32)
            {
                if (iVar146 == 0)
                {
                    g_U64782._fU0 = {uVar2[I]._fU12};
                    g_U64782._fU12 = uVar2[I]._fU24;
                    g_U64782._fU16 = uVar2[I]._fU28;
                    bVar147 = false;
                }
                else
                {
                    iVar146--;
                }
            }
        }
    }
    uVar148 = {g_U64782._fU0};
    fVar154 = 0.00000000;
    iVar155 = 0;
    for ( I = 0; I < 15; I++ )
    {
        uVar2[I]._fU32 = 0;
        uVar151 = {uVar2[I]._fU0};
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar148._fU0, uVar148._fU4, uVar148._fU8, uVar151._fU0, uVar151._fU4, uVar151._fU8, ref fVar154 );
        if (fVar154 < 500.00000000)
        {
            uVar2[I]._fU32 = 1;
        }
        else
        {
            iVar155++;
        }
    }
    if (iVar155 == 0)
    {
        for ( I = 0; I < 15; I++ )
        {
            uVar2[I]._fU32 = 0;
            if (g_U64782._fU16 == uVar2[I]._fU28)
            {
                uVar2[I]._fU32 = 1;
            }
        }
        iVar155 = 14;
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar155, ref iVar146 );
    bVar147 = true;
    for ( I = 0; I < 15; I++ )
    {
        if (bVar147)
        {
            if (NOT uVar2[I]._fU32)
            {
                if (iVar146 == 0)
                {
                    g_U64782._fU20 = {uVar2[I]._fU0};
                    g_U64782._fU32 = uVar2[I]._fU28;
                    bVar147 = false;
                }
                else
                {
                    iVar146--;
                }
            }
        }
    }
    return 1;
}

int sub_150457()
{
    unknown[16] uVar2;
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
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    unknown uVar61;
    unknown uVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    unknown uVar67;
    unknown uVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    unknown uVar76;
    unknown uVar77;
    unknown uVar78;
    unknown uVar79;
    unknown uVar80;
    unknown uVar81;
    unknown uVar82;
    unknown uVar83;
    unknown uVar84;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    unknown uVar90;
    unknown uVar91;
    unknown uVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    unknown uVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    unknown uVar102;
    unknown uVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;
    unknown uVar107;
    unknown uVar108;
    unknown uVar109;
    unknown uVar110;
    unknown uVar111;
    unknown uVar112;
    unknown uVar113;
    unknown uVar114;
    unknown uVar115;
    unknown uVar116;
    unknown uVar117;
    unknown uVar118;
    unknown uVar119;
    unknown uVar120;
    unknown uVar121;
    unknown uVar122;
    unknown uVar123;
    unknown uVar124;
    unknown uVar125;
    unknown uVar126;
    unknown uVar127;
    unknown uVar128;
    unknown uVar129;
    unknown uVar130;
    unknown uVar131;
    unknown uVar132;
    unknown uVar133;
    unknown uVar134;
    unknown uVar135;
    unknown uVar136;
    unknown uVar137;
    unknown uVar138;
    unknown uVar139;
    unknown uVar140;
    unknown uVar141;
    unknown uVar142;
    unknown uVar143;
    unknown uVar144;
    unknown uVar145;
    unknown uVar146;
    int I;
    unknown uVar148;
    unknown uVar149;
    unknown uVar150;
    int iVar151;
    float fVar152;
    boolean bVar153;
    boolean bVar154;
    int iVar155;
    boolean bVar156;
    unknown uVar157;
    unknown uVar158;
    unknown uVar159;
    unknown uVar160;
    unknown uVar161;
    unknown uVar162;
    float fVar163;
    int iVar164;

    if (NOT (g_U9937 == 0))
    {
        return 0;
    }
    if (IS_CHAR_DEAD( CurrentPlayerChar() ))
    {
        return 0;
    }
    array(ref uVar2, 16);
    uVar2[0]._fU0 = {g_U9731[5]._fU4};
    uVar2[0]._fU12 = {g_U9788[11]._fU4};
    uVar2[0]._fU24 = g_U9788[11]._fU16;
    uVar2[0]._fU28 = 0;
    uVar2[1]._fU0 = {1106.28300000, 690.48790000, 38.12300000};
    uVar2[1]._fU12 = {1102.78800000, 690.23540000, 35.83630000};
    uVar2[1]._fU24 = 270.00000000;
    uVar2[1]._fU28 = 1;
    uVar2[2]._fU0 = {1411.84100000, 702.07660000, 34.04000000};
    uVar2[2]._fU12 = {1415.17600000, 702.49770000, 31.66460000};
    uVar2[2]._fU24 = 90.00000000;
    uVar2[2]._fU28 = 2;
    uVar2[3]._fU0 = {1269.08400000, 595.08190000, 39.77700000};
    uVar2[3]._fU12 = {1272.47700000, 595.51040000, 37.44920000};
    uVar2[3]._fU24 = 90.00000000;
    uVar2[3]._fU28 = 3;
    uVar2[4]._fU0 = {1622.59600000, 668.37820000, 29.62100000};
    uVar2[4]._fU12 = {1622.57600000, 672.48060000, 27.46100000};
    uVar2[4]._fU24 = 180.00000000;
    uVar2[4]._fU28 = 4;
    uVar2[5]._fU0 = {1775.16400000, 348.18700000, 23.41000000};
    uVar2[5]._fU12 = {1775.08700000, 345.39370000, 21.03020000};
    uVar2[5]._fU24 = 0.00000000;
    uVar2[5]._fU28 = 5;
    uVar2[6]._fU0 = {1376.83700000, 417.72670000, 24.80500000};
    uVar2[6]._fU12 = {1379.96000000, 418.39240000, 22.50350000};
    uVar2[6]._fU24 = 90.00000000;
    uVar2[6]._fU28 = 6;
    uVar2[7]._fU0 = {2314.09400000, 547.68950000, 7.35200000};
    uVar2[7]._fU12 = {2316.99900000, 549.90840000, 4.77300000};
    uVar2[7]._fU24 = 157.00000000;
    uVar2[7]._fU28 = 7;
    uVar2[8]._fU0 = {1109.25400000, 118.55400000, 35.56700000};
    uVar2[8]._fU12 = {1113.78500000, 118.70350000, 33.21270000};
    uVar2[8]._fU24 = 90.00000000;
    uVar2[8]._fU28 = 8;
    uVar2[9]._fU0 = {1271.21600000, 73.67900000, 39.93600000};
    uVar2[9]._fU12 = {1274.24800000, 73.84100000, 37.62180000};
    uVar2[9]._fU24 = 90.00000000;
    uVar2[9]._fU28 = 9;
    uVar2[10]._fU0 = {1468.14000000, 80.17100000, 26.44900000};
    uVar2[10]._fU12 = {1468.25000000, 83.77820000, 24.11600000};
    uVar2[10]._fU24 = 180.00000000;
    uVar2[10]._fU28 = 10;
    uVar2[11]._fU0 = {1130.49200000, -169.28000000, 32.07700000};
    uVar2[11]._fU12 = {1134.12200000, -169.36630000, 29.76800000};
    uVar2[11]._fU24 = 90.00000000;
    uVar2[11]._fU28 = 11;
    uVar2[12]._fU0 = {1203.86700000, -239.00810000, 25.75300000};
    uVar2[12]._fU12 = {1199.90800000, -238.96490000, 23.44910000};
    uVar2[12]._fU24 = 270.00000000;
    uVar2[12]._fU28 = 12;
    uVar2[13]._fU0 = {1011.47700000, -573.74400000, 15.60300000};
    uVar2[13]._fU12 = {1011.65900000, -577.80740000, 13.26490000};
    uVar2[13]._fU24 = 0.00000000;
    uVar2[13]._fU28 = 13;
    uVar2[14]._fU0 = {1294.58300000, -430.03940000, 17.34300000};
    uVar2[14]._fU12 = {1300.05100000, -429.10370000, 15.03590000};
    uVar2[14]._fU24 = 90.00000000;
    uVar2[14]._fU28 = 14;
    uVar2[15]._fU0 = {1092.89100000, -643.58190000, 14.79900000};
    uVar2[15]._fU12 = {1096.89600000, -642.90580000, 12.45180000};
    uVar2[15]._fU24 = 90.00000000;
    uVar2[15]._fU28 = 15;
    I = 0;
    for ( I = 0; I < 16; I++ )
    {
        uVar2[I]._fU32 = 0;
    }
    GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar148._fU0, ref uVar148._fU4, ref uVar148._fU8 );
    iVar151 = 0;
    fVar152 = 0.00000000;
    for ( I = 0; I < 16; I++ )
    {
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar148._fU0, uVar148._fU4, uVar148._fU8, uVar2[I]._fU0._fU0, uVar2[I]._fU0._fU4, uVar2[I]._fU0._fU8, ref fVar152 );
        if ((fVar152 >= 200.00000000) AND (fVar152 < 1000.00000000))
        {
            uVar2[I]._fU32 = 1;
            iVar151++;
        }
    }
    if (iVar151 == 0)
    {
        return 0;
    }
    bVar153 = uVar2[0]._fU32;
    bVar154 = false;
    iVar155 = 0;
    if (bVar153)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 100, ref iVar155 );
        if (iVar155 < 33)
        {
            bVar154 = true;
        }
    }
    if ((iVar151 == 1) AND ((bVar153) AND (NOT bVar154)))
    {
        bVar154 = true;
    }
    bVar156 = true;
    if (bVar154)
    {
        g_U64773._fU0 = {uVar2[0]._fU12};
        g_U64773._fU12 = uVar2[0]._fU24;
        g_U64773._fU16 = 0;
    }
    else if (bVar153)
    {
        iVar151--;
        uVar2[0]._fU32 = 0;
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar151, ref iVar155 );
    bVar156 = true;
    for ( I = 0; I < 16; I++ )
    {
        if (bVar156)
        {
            if (uVar2[I]._fU32)
            {
                if (iVar155 == 0)
                {
                    g_U64773._fU0 = {uVar2[I]._fU12};
                    g_U64773._fU12 = uVar2[I]._fU24;
                    g_U64773._fU16 = uVar2[I]._fU28;
                    bVar156 = false;
                }
                else
                {
                    iVar155--;
                }
            }
        }
    }
    uVar157 = {g_U64773._fU0};
    fVar163 = 0.00000000;
    iVar164 = 0;
    for ( I = 0; I < 16; I++ )
    {
        uVar2[I]._fU32 = 0;
        uVar160 = {uVar2[I]._fU0};
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar157._fU0, uVar157._fU4, uVar157._fU8, uVar160._fU0, uVar160._fU4, uVar160._fU8, ref fVar163 );
        if (fVar163 < 500.00000000)
        {
            uVar2[I]._fU32 = 1;
        }
        else
        {
            iVar164++;
        }
    }
    if (iVar164 == 0)
    {
        for ( I = 0; I < 16; I++ )
        {
            uVar2[I]._fU32 = 0;
            if (g_U64773._fU16 == uVar2[I]._fU28)
            {
                uVar2[I]._fU32 = 1;
            }
        }
        iVar164 = 15;
    }
    GENERATE_RANDOM_INT_IN_RANGE( 0, iVar164, ref iVar155 );
    bVar156 = true;
    for ( I = 0; I < 16; I++ )
    {
        if (bVar156)
        {
            if (NOT uVar2[I]._fU32)
            {
                if (iVar155 == 0)
                {
                    g_U64773._fU20 = {uVar2[I]._fU0};
                    g_U64773._fU32 = uVar2[I]._fU28;
                    bVar156 = false;
                }
                else
                {
                    iVar155--;
                }
            }
        }
    }
    return 1;
}

void sub_153032(unknown uParam0)
{
    int Result;
    int iVar4;
    boolean bVar5;

    Result = 0;
    iVar4 = 14;
    if (sub_153050( uParam0, ref iVar4 ))
    {
        Result = iVar4;
        return Result;
    }
    bVar5 = g_U26729[0] == 0;
    sub_153216();
    if (bVar5)
    {
        sub_153537();
    }
    if (sub_153050( uParam0, ref iVar4 ))
    {
        Result = iVar4;
        return Result;
    }
    Result = 14;
    return Result;
}

int sub_153050(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int I;

    iVar4 = 14;
    iVar5 = 0;
    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        iVar4 = g_U26729[I];
        iVar5 = iVar4;
        if (NOT (iVar4 == 14))
        {
            if (sub_108523( iVar5 ))
            {
                if (g_U15946[uParam0]._fU8[0]._fU0[iVar5])
                {
                    g_U26729[I] = 14;
                    (uParam1^) = iVar4;
                    g_U26744 = iVar4;
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_153216()
{
    int[14] iVar2;
    int iVar17;
    int I;
    int iVar19;
    int iVar20;
    int iVar21;
    int J;

    array(ref iVar2, 14);
    iVar17 = 0;
    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, 99999, ref iVar17 );
        iVar2[I] = iVar17;
    }
    iVar19 = 14;
    iVar20 = 99999;
    iVar21 = 0;
    J = 0;
    for ( J = 0; J < 14; J++ )
    {
        iVar20 = 99999;
        iVar21 = 0;
        for ( I = 0; I < 14; I++ )
        {
            if (iVar2[I] < 99999)
            {
                if (iVar2[I] < iVar20)
                {
                    iVar20 = iVar2[I];
                    iVar21 = I;
                }
            }
        }
        if (NOT (sub_108523( iVar21 )))
        {
            g_U26729[J] = 14;
        }
        else
        {
            iVar19 = iVar21;
            if (iVar19 == g_U26744)
            {
                g_U26729[J] = 14;
                g_U26744 = 0;
            }
            else
            {
                g_U26729[J] = iVar19;
            }
        }
        iVar2[iVar21] = 100000;
    }
    return;
}

void sub_153537()
{
    int I;

    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        if (g_U26729[I] == 5)
        {
            g_U26729[I] = 14;
            return;
        }
    }
    return;
}

string sub_153763(unknown uParam0)
{
    switch (uParam0)
    {
        case 3: return sub_153797();
        case 8: return sub_154729();
    }
    sub_23915( "Choose_Lift_Pickup_Phonecall: Illegal Contact ID for Lift" );
    SCRIPT_ASSERT( "Choose_Lift_Pickup_Phonecall: Unknown error" );
    return "ERROR";
}

string sub_153797()
{
    unknown uVar2;

    uVar2 = g_U64782._fU16;
    switch (uVar2)
    {
        case 0:
        PRINTSTRING( "JACOB: CID_HOME\n" );
        return "FCJ_PC64";
        case 1:
        PRINTSTRING( "JACOB: CID_STEINWAY\n" );
        return "FCJ_PC71";
        case 2:
        PRINTSTRING( "JACOB: CID_MEADOWS_PARK\n" );
        return "FCJ_PC67";
        case 3:
        PRINTSTRING( "JACOB: CID_EAST_ISLAND_CITY\n" );
        return "FCJ_PC61";
        case 4:
        PRINTSTRING( "JACOB: CID_MEADOW_HILLS\n" );
        return "FCJ_PC66";
        case 5:
        PRINTSTRING( "JACOB: CID_WILLIS\n" );
        return "FCJ_PC72";
        case 6:
        PRINTSTRING( "JACOB: CID_CERVESA_HEIGHTS\n" );
        return "FCJ_PC58";
        case 7:
        PRINTSTRING( "JACOB: CID_AIRPORT\n" );
        return "FCJ_PC55";
        case 8:
        PRINTSTRING( "JACOB: CID_DOWNTOWN\n" );
        return "FCJ_PC59";
        case 10:
        PRINTSTRING( "JACOB: CID_BEECHWOOD_CITY\n" );
        return "FCJ_PC56";
        case 11:
        PRINTSTRING( "JACOB: CID_OUTLOOK_PARK\n" );
        return "FCJ_PC68";
        case 12:
        PRINTSTRING( "JACOB: CID_SOUTH_SLOPES\n" );
        return "FCJ_PC70";
        case 13:
        PRINTSTRING( "JACOB: CID_HOVE_BEACH\n" );
        return "FCJ_PC65";
        case 14:
        PRINTSTRING( "JACOB: CID_FIREFLY_PROJECTS\n" );
        return "FCJ_PC63";
        case 15:
        PRINTSTRING( "JACOB: CID_FIREFLY_ISLAND\n" );
        return "FCJ_PC62";
    }
    SCRIPT_ASSERT( "Choose_Jacob_Lift_Pickup_Phonecall: Unknown area" );
    return "ERROR";
}

string sub_154729()
{
    unknown uVar2;

    uVar2 = g_U64773._fU16;
    switch (uVar2)
    {
        case 0:
        PRINTSTRING( "BRUCIE: CID_HOME\n" );
        return "FCB2_LHOME";
        case 1:
        PRINTSTRING( "BRUCIE: CID_STEINWAY\n" );
        return "FCB2_LSTEIN";
        case 2:
        PRINTSTRING( "BRUCIE: CID_MEADOWS_PARK\n" );
        return "FCB2_LMEDPK";
        case 3:
        PRINTSTRING( "BRUCIE: CID_EAST_ISLAND_CITY - no speech recorded\n" );
        return "ERROR";
        case 4:
        PRINTSTRING( "BRUCIE: CID_MEADOW_HILLS - no speech recorded\n" );
        return "ERROR";
        case 5:
        PRINTSTRING( "BRUCIE: CID_WILLIS\n" );
        return "FCB2_LWLLS";
        case 6:
        PRINTSTRING( "BRUCIE: CID_CERVESA_HEIGHTS\n" );
        return "FCB2_LCERV";
        case 7:
        PRINTSTRING( "BRUCIE: CID_AIRPORT\n" );
        return "FCB2_LAIRPT";
        case 8:
        PRINTSTRING( "BRUCIE: CID_DOWNTOWN\n" );
        return "FCB2_LDNTN";
        case 9:
        PRINTSTRING( "BRUCIE: CID_SCHOTTLER\n" );
        return "FCB2_LSHOT";
        case 10:
        PRINTSTRING( "BRUCIE: CID_BEECHWOOD_CITY\n" );
        return "FCB2_LBCHW";
        case 11:
        PRINTSTRING( "BRUCIE: CID_OUTLOOK_PARK\n" );
        return "FCB2_LOTLK";
        case 12:
        PRINTSTRING( "BRUCIE: CID_SOUTH_SLOPES\n" );
        return "FCB2_LSSLOP";
        case 13:
        PRINTSTRING( "BRUCIE: CID_HOVE_BEACH\n" );
        return "FCB2_HOVE";
        case 14:
        PRINTSTRING( "BRUCIE: CID_FIREFLY_PROJECTS\n" );
        return "FCB2_LFFP";
        case 15:
        PRINTSTRING( "BRUCIE: CID_FIREFLY_ISLAND\n" );
        return "FCB2_LFFI";
    }
    SCRIPT_ASSERT( "Choose_Brucie_Lift_Pickup_Phonecall: Unknown area" );
    return "ERROR";
}

void sub_155962(unknown uParam0, unknown uParam1)
{
    return sub_155975( uParam0, uParam1 );
}

void sub_155975(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    boolean bVar5;

    bVar4 = g_U22274[uParam0]._fU92;
    bVar5 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 8:
        if (bVar4)
        {
            if (bVar5)
            {
                return sub_156141( uParam0, "FCBCPAU", "FCB_GVIRATE", uParam1, "FCB2_GCLY", "FCB_GACC", "FCB2_GCLN", "FCB_GREJ", "HF_LIFT" );
            }
            else
            {
                return sub_156141( uParam0, "FCBCPAU", "FCB_GIRATE", uParam1, "FCB2_GCLY", "FCB_GACC", "FCB2_GCLN", "FCB_GREJ", "HF_LIFT" );
            }
        }
        else
        {
            return sub_156141( uParam0, "FCBCPAU", "FCB_GGREET", uParam1, "FCB2_GCLY", "FCB_GACC", "FCB2_GCLN", "FCB_GREJ", "HF_LIFT" );
        }
        break;
        case 3:
        if (bVar4)
        {
            if (bVar5)
            {
                return sub_156141( uParam0, "FCJCPAU", "FCJ_GCVIRATE", uParam1, "FCJ_GCLY", "FCJ_GCACC", "FCJ_GCLN", "FCJ_GCREJ", "HF_LIFT" );
            }
            else
            {
                return sub_156141( uParam0, "FCJCPAU", "FCJ_GCIRATE", uParam1, "FCJ_GCLY", "FCJ_GCACC", "FCJ_GCLN", "FCJ_GCREJ", "HF_LIFT" );
            }
        }
        else
        {
            return sub_156141( uParam0, "FCJCPAU", "FCJ_GCG", uParam1, "FCJ_GCLY", "FCJ_GCACC", "FCJ_GCLN", "FCJ_GCREJ", "HF_LIFT" );
        }
        break;
    }
    return sub_87823( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_LIFT" );
}

int sub_156141(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    unknown uVar11;

    uVar11 = sub_87007( uParam0 );
    sub_87183( ref l_U280[uVar11]._fU0, uParam2, uParam3 );
    sub_87183( ref l_U280[uVar11]._fU84, uParam4, uParam5 );
    sub_87183( ref l_U280[uVar11]._fU120, uParam6, uParam7 );
    if (sub_87968( uParam0, ref l_U280[uVar11]._fU0, ref l_U280[uVar11]._fU84, ref l_U280[uVar11]._fU120, uParam8, uParam1, 10000 ))
    {
        sub_52331();
        sub_87630( uParam0, 1 );
        return 1;
    }
    return 0;
}

int sub_156946(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    switch (uVar4)
    {
        case 4: return sub_157050( uParam0 );
        case 5: return sub_157652( uParam0 );
        case 6: return sub_159545( uParam0 );
        case 7: return sub_161002( uParam0 );
        case 8: return sub_163363( uParam0 );
        case 9: return sub_165304( uParam0 );
        case 11: return sub_165915( uParam0 );
        case 12: return sub_167372( uParam0 );
        case 13: return sub_169778( uParam0 );
        case 10:
        sub_23915( "FA_Friend_Phones_Do_Activity: LIFT should not be handled by this routine" );
        break;
        default: sub_23915( "FA_Friend_Phones_Do_Activity: Unknown Activity" );
    }
    return 0;
}

void sub_157050(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U22274[uParam0]._fU8;
    bVar4 = g_U22274[uParam0]._fU92;
    bVar5 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GVIRATE", "FCB_GCB", "FCB_GCBY", "FCB_GACC", "FCB_GCBN", "FCB_GREJ", "HF_BOAT" );
                }
                else
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GIRATE", "FCB_GCB", "FCB_GCBY", "FCB_GACC", "FCB_GCBN", "FCB_GREJ", "HF_BOAT" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCBCPAU", "FCB_GGREET", "FCB_GCB", "FCB_GCBY", "FCB_GACC", "FCB_GCBN", "FCB_GREJ", "HF_BOAT" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCBCPAU", "FCB_GCBF", "FCB_GCBY", "FCB_GACC", "FCB_GCBN", "FCB_GREJ", "HF_BOAT" );
        }
        break;
        default:
    }
    return sub_87823( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_PIN" );
}

void sub_157652(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U22274[uParam0]._fU8;
    bVar4 = g_U22274[uParam0]._fU92;
    bVar5 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GVIRATE", "FCR_GB", "FCR_GBY", "FCR_GACC", "FCR_GBN", "FCR_GREJ", "HF_PIN" );
                }
                else
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GIRATE", "FCR_GB", "FCR_GBY", "FCR_GACC", "FCR_GBN", "FCR_GREJ", "HF_PIN" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCR12AU", "FCR_GGREET", "FCR_GB", "FCR_GBY", "FCR_GACC", "FCR_GBN", "FCR_GREJ", "HF_PIN" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCR12AU", "FCR_GBF", "FCR_GBY", "FCR_GACC", "FCR_GBN", "FCR_GREJ", "HF_PIN" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCDAUD", "FCD_CVIREATE", "FCD_GCBOWL", "FCD_GCBOWLY", "FCD_GCACCP", "FCD_BOWLN", "FCD_GCREJ", "HF_PIN" );
                }
                else
                {
                    return sub_156141( uParam0, "FCDAUD", "FCD_GCIRATE", "FCD_GCBOWL", "FCD_GCBOWLY", "FCD_GCACCP", "FCD_BOWLN", "FCD_GCREJ", "HF_PIN" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCDAUD", "FCD_CGREET", "FCD_GCBOWL", "FCD_GCBOWLY", "FCD_GCACCP", "FCD_BOWLN", "FCD_GCREJ", "HF_PIN" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCDAUD", "FCD_CBOWLF", "FCD_GCBOWLY", "FCD_GCACCP", "FCD_BOWLN", "FCD_GCREJ", "HF_PIN" );
        }
        break;
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GVIRATE", "FCB_GBOWL", "FCB_GBY", "FCB_GACC", "FCB_GBN", "FCB_GREJ", "HF_PIN" );
                }
                else
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GIRATE", "FCB_GBOWL", "FCB_GBY", "FCB_GACC", "FCB_GBN", "FCB_GREJ", "HF_PIN" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCBCPAU", "FCB_GGREET", "FCB_GBOWL", "FCB_GBY", "FCB_GACC", "FCB_GBN", "FCB_GREJ", "HF_PIN" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCBCPAU", "FCB_GBF", "FCB_GBY", "FCB_GACC", "FCB_GBN", "FCB_GREJ", "HF_PIN" );
        }
        break;
        case 13:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCPCPAU", "FCP_GCVIRA", "FCP_GCB", "FCP_GCBY", "FCP_GCACC", "FCP_GCBN", "FCP_GCREJ", "HF_PIN" );
                }
                else
                {
                    return sub_156141( uParam0, "FCPCPAU", "FCP_GCIRA", "FCP_GCB", "FCP_GCBY", "FCP_GCACC", "FCP_GCBN", "FCP_GCREJ", "HF_PIN" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCPCPAU", "FCP_GCGREET", "FCP_GCB", "FCP_GCBY", "FCP_GCACC", "FCP_GCBN", "FCP_GCREJ", "HF_PIN" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCPCPAU", "FCP_GCBF", "FCP_GCBY", "FCP_GCACC", "FCP_GCBN", "FCP_GCREJ", "HF_PIN" );
        }
        break;
    }
    return sub_87823( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_PIN" );
}

void sub_159545(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U22274[uParam0]._fU8;
    bVar4 = g_U22274[uParam0]._fU92;
    bVar5 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GVIRATE", "FCR_GD", "FCR_GDY", "FCR_GACC", "FCR_GDN", "FCR_GREJ", "HF_DART" );
                }
                else
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GIRATE", "FCR_GD", "FCR_GDY", "FCR_GACC", "FCR_GDN", "FCR_GREJ", "HF_DART" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCR12AU", "FCR_GGREET", "FCR_GD", "FCR_GDY", "FCR_GACC", "FCR_GDN", "FCR_GREJ", "HF_DART" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCR12AU", "FCR_GDF", "FCR_GDY", "FCR_GACC", "FCR_GDN", "FCR_GREJ", "HF_DART" );
        }
        break;
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCJCPAU", "FCJ_GCVIRATE", "FCJ_GCD", "FCJ_GCDY", "FCJ_GCACC", "FCJ_GCDN", "FCJ_GCREJ", "HF_DART" );
                }
                else
                {
                    return sub_156141( uParam0, "FCJCPAU", "FCJ_GCIRATE", "FCJ_GCD", "FCJ_GCDY", "FCJ_GCACC", "FCJ_GCDN", "FCJ_GCREJ", "HF_DART" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCJCPAU", "FCJ_GCG", "FCJ_GCD", "FCJ_GCDY", "FCJ_GCACC", "FCJ_GCDN", "FCJ_GCREJ", "HF_DART" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCJCPAU", "FCJ_GCDF", "FCJ_GCDY", "FCJ_GCACC", "FCJ_GCDN", "FCJ_GCREJ", "HF_DART" );
        }
        break;
        case 13:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCPCPAU", "FCP_GCVIRA", "FCP_GCD", "FCP_GCDY", "FCP_GCACC", "FCP_GCDN", "FCP_GCREJ", "HF_DART" );
                }
                else
                {
                    return sub_156141( uParam0, "FCPCPAU", "FCP_GCIRA", "FCP_GCD", "FCP_GCDY", "FCP_GCACC", "FCP_GCDN", "FCP_GCREJ", "HF_DART" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCPCPAU", "FCP_GCGREET", "FCP_GCD", "FCP_GCDY", "FCP_GCACC", "FCP_GCDN", "FCP_GCREJ", "HF_DART" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCPCPAU", "FCP_GCDF", "FCP_GCDY", "FCP_GCACC", "FCP_GCDN", "FCP_GCREJ", "HF_DART" );
        }
        break;
    }
    return sub_87823( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_DART" );
}

void sub_161002(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U22274[uParam0]._fU8;
    bVar4 = g_U22274[uParam0]._fU92;
    bVar5 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GVIRATE", "FCR_GDR", "FCR_GDRY", "FCR_GACC", "FCR_GDRN", "FCR_GREJ", "HF_BAR" );
                }
                else
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GIRATE", "FCR_GDR", "FCR_GDRY", "FCR_GACC", "FCR_GDRN", "FCR_GREJ", "HF_BAR" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCR12AU", "FCR_GGREET", "FCR_GDR", "FCR_GDRY", "FCR_GACC", "FCR_GDRN", "FCR_GREJ", "HF_BAR" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCR12AU", "FCR_CDRF", "FCR_GDRY", "FCR_GACC", "FCR_GDRN", "FCR_GREJ", "HF_BAR" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCDAUD", "FCD_CVIREATE", "FCD_CDRNK3", "FCD_DRNKY2", "FCD_GCACCP", "FCD_DRNKNO", "FCD_GCREJ", "HF_BAR" );
                }
                else
                {
                    return sub_156141( uParam0, "FCDAUD", "FCD_GCIRATE", "FCD_CDRNK3", "FCD_DRNKY2", "FCD_GCACCP", "FCD_DRNKNO", "FCD_GCREJ", "HF_BAR" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCDAUD", "FCD_CGREET", "FCD_CDRNK3", "FCD_DRNKY2", "FCD_GCACCP", "FCD_DRNKNO", "FCD_GCREJ", "HF_BAR" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCDAUD", "FCD_CDRNK2", "FCD_DRNKY2", "FCD_GCACCP", "FCD_DRNKNO", "FCD_GCREJ", "HF_BAR" );
        }
        break;
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCJCPAU", "FCJ_GCVIRATE", "FCJ_GCDR", "FCJ_GCDRY", "FCJ_GCACC", "FCJ_GCDRN", "FCJ_GCREJ", "HF_BAR" );
                }
                else
                {
                    return sub_156141( uParam0, "FCJCPAU", "FCJ_GCIRATE", "FCJ_GCDR", "FCJ_GCDRY", "FCJ_GCACC", "FCJ_GCDRN", "FCJ_GCREJ", "HF_BAR" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCJCPAU", "FCJ_GCG", "FCJ_GCDR", "FCJ_GCDRY", "FCJ_GCACC", "FCJ_GCDRN", "FCJ_GCREJ", "HF_BAR" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCJCPAU", "FCJ_GCDRF", "FCJ_GCDRY", "FCJ_GCACC", "FCJ_GCDRN", "FCJ_GCREJ", "HF_BAR" );
        }
        break;
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GVIRATE", "FCB_GDR", "FCB_GDRY", "FCB_GACC", "FCB_GDRN", "FCB_GREJ", "HF_BAR" );
                }
                else
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GIRATE", "FCB_GDR", "FCB_GDRY", "FCB_GACC", "FCB_GDRN", "FCB_GREJ", "HF_BAR" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCBCPAU", "FCB_GGREET", "FCB_GDR", "FCB_GDRY", "FCB_GACC", "FCB_GDRN", "FCB_GREJ", "HF_BAR" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCBCPAU", "FCB_GDRF", "FCB_GDRY", "FCB_GACC", "FCB_GDRN", "FCB_GREJ", "HF_BAR" );
        }
        break;
        case 13:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCPCPAU", "FCP_GCVIRA", "FCP_GCDR", "FCP_GCDRY", "FCP_GCACC", "FCP_GCDRN", "FCP_GCREJ", "HF_BAR" );
                }
                else
                {
                    return sub_156141( uParam0, "FCPCPAU", "FCP_GCIRA", "FCP_GCDR", "FCP_GCDRY", "FCP_GCACC", "FCP_GCDRN", "FCP_GCREJ", "HF_BAR" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCPCPAU", "FCP_GCGREET", "FCP_GCDR", "FCP_GCDRY", "FCP_GCACC", "FCP_GCDRN", "FCP_GCREJ", "HF_BAR" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCPCPAU", "FCP_GCDRF", "FCP_GCDRY", "FCP_GCACC", "FCP_GCDRN", "FCP_GCREJ", "HF_BAR" );
        }
        break;
    }
    return sub_87823( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_BAR" );
}

void sub_163363(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U22274[uParam0]._fU8;
    bVar4 = g_U22274[uParam0]._fU92;
    bVar5 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GVIRATE", "FCR_GEAT", "FCR_GEATY", "FCR_GACC", "FCR_GEATN", "FCR_GREJ", "HF_EAT" );
                }
                else
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GIRATE", "FCR_GEAT", "FCR_GEATY", "FCR_GACC", "FCR_GEATN", "FCR_GREJ", "HF_EAT" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCR12AU", "FCR_GGREET", "FCR_GEAT", "FCR_GEATY", "FCR_GACC", "FCR_GEATN", "FCR_GREJ", "HF_EAT" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCR12AU", "FCR_GEATF", "FCR_GEATY", "FCR_GACC", "FCR_GEATN", "FCR_GREJ", "HF_EAT" );
        }
        break;
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCJCPAU", "FCJ_GCVIRATE", "FCJ_GCEAT", "FCJ_GCEATY", "FCJ_GCACC", "FCJ_GCEATN", "FCJ_GCREJ", "HF_EAT" );
                }
                else
                {
                    return sub_156141( uParam0, "FCJCPAU", "FCJ_GCIRATE", "FCJ_GCEAT", "FCJ_GCEATY", "FCJ_GCACC", "FCJ_GCEATN", "FCJ_GCREJ", "HF_EAT" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCJCPAU", "FCJ_GCG", "FCJ_GCEAT", "FCJ_GCEATY", "FCJ_GCACC", "FCJ_GCEATN", "FCJ_GCREJ", "HF_EAT" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCJCPAU", "FCJ_GCEATF", "FCJ_GCEATY", "FCJ_GCACC", "FCJ_GCEATN", "FCJ_GCREJ", "HF_EAT" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCDAUD", "FCD_CVIREATE", "FCD_GCEAT", "FCD_GCEATY", "FCD_GCACCP", "FCD_GCEATNO", "FCD_GCREJ", "HF_EAT" );
                }
                else
                {
                    return sub_156141( uParam0, "FCDAUD", "FCD_GCIRATE", "FCD_GCEAT", "FCD_GCEATY", "FCD_GCACCP", "FCD_GCEATNO", "FCD_GCREJ", "HF_EAT" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCDAUD", "FCD_CGREET", "FCD_GCEAT", "FCD_GCEATY", "FCD_GCACCP", "FCD_GCEATNO", "FCD_GCREJ", "HF_EAT" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCDAUD", "FCD_GCEATF", "FCD_GCEATY", "FCD_GCACCP", "FCD_GCEATNO", "FCD_GCREJ", "HF_EAT" );
        }
        break;
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GVIRATE", "FCB_GEAT", "FCB_GEY", "FCB_GACC", "FCB_GEN", "FCB_GREJ", "HF_EAT" );
                }
                else
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GIRATE", "FCB_GEAT", "FCB_GEY", "FCB_GACC", "FCB_GEN", "FCB_GREJ", "HF_EAT" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCBCPAU", "FCB_GGREET", "FCB_GEAT", "FCB_GEY", "FCB_GACC", "FCB_GEN", "FCB_GREJ", "HF_EAT" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCBCPAU", "FCB_GEATF", "FCB_GEY", "FCB_GACC", "FCB_GEN", "FCB_GREJ", "HF_EAT" );
        }
        break;
    }
    return sub_87823( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_EAT" );
}

void sub_165304(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U22274[uParam0]._fU8;
    bVar4 = g_U22274[uParam0]._fU92;
    bVar5 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GVIRATE", "FCB2_CHELI", "FCB2_CHY", "FCB_GACC", "FCB2_CHN", "FCB_GREJ", "HF_HELI" );
                }
                else
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GIRATE", "FCB2_CHELI", "FCB2_CHY", "FCB_GACC", "FCB2_CHN", "FCB_GREJ", "HF_HELI" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCBCPAU", "FCB_GGREET", "FCB2_CHELI", "FCB2_CHY", "FCB_GACC", "FCB2_CHN", "FCB_GREJ", "HF_HELI" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCBCPAU", "FCB_GHF", "FCB2_CHY", "FCB_GACC", "FCB2_CHN", "FCB_GREJ", "HF_HELI" );
        }
        break;
        default:
    }
    return sub_87823( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_HELI" );
}

void sub_165915(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U22274[uParam0]._fU8;
    bVar4 = g_U22274[uParam0]._fU92;
    bVar5 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GVIRATE", "FCR_GP", "FCR_GPY", "FCR_GACC", "FCR_GPN", "FCR_GREJ", "HF_POOL" );
                }
                else
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GIRATE", "FCR_GP", "FCR_GPY", "FCR_GACC", "FCR_GPN", "FCR_GREJ", "HF_POOL" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCR12AU", "FCR_GGREET", "FCR_GP", "FCR_GPY", "FCR_GACC", "FCR_GPN", "FCR_GREJ", "HF_POOL" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCR12AU", "FCR_GPF", "FCR_GPY", "FCR_GACC", "FCR_GPN", "FCR_GREJ", "HF_POOL" );
        }
        break;
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCJCPAU", "FCJ_GCVIRATE", "FCJ_GCP", "FCJ_GCPY", "FCJ_GCACC", "FCJ_GCPN", "FCJ_GCREJ", "HF_POOL" );
                }
                else
                {
                    return sub_156141( uParam0, "FCJCPAU", "FCJ_GCIRATE", "FCJ_GCP", "FCJ_GCPY", "FCJ_GCACC", "FCJ_GCPN", "FCJ_GCREJ", "HF_POOL" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCJCPAU", "FCJ_GCG", "FCJ_GCP", "FCJ_GCPY", "FCJ_GCACC", "FCJ_GCPN", "FCJ_GCREJ", "HF_POOL" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCJCPAU", "FCJ_GCPF", "FCJ_GCPY", "FCJ_GCACC", "FCJ_GCPN", "FCJ_GCREJ", "HF_POOL" );
        }
        break;
        case 13:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCPCPAU", "FCP_GCVIRA", "FCP_GCP", "FCP_GCPY", "FCP_GCACC", "FCP_GCPN", "FCP_GCREJ", "HF_POOL" );
                }
                else
                {
                    return sub_156141( uParam0, "FCPCPAU", "FCP_GCIRA", "FCP_GCP", "FCP_GCPY", "FCP_GCACC", "FCP_GCPN", "FCP_GCREJ", "HF_POOL" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCPCPAU", "FCP_GCGREET", "FCP_GCP", "FCP_GCPY", "FCP_GCACC", "FCP_GCPN", "FCP_GCREJ", "HF_POOL" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCPCPAU", "FCP_GCPF", "FCP_GCPY", "FCP_GCACC", "FCP_GCPN", "FCP_GCREJ", "HF_POOL" );
        }
        break;
    }
    return sub_87823( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_POOL" );
}

void sub_167372(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U22274[uParam0]._fU8;
    bVar4 = g_U22274[uParam0]._fU92;
    bVar5 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GVIRATE", "FCR_CSH", "FCR_PCSHY", "FCR_GACC", "FCR_CSHN", "FCR_GREJ", "HF_SHOW" );
                }
                else
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GIRATE", "FCR_CSH", "FCR_PCSHY", "FCR_GACC", "FCR_CSHN", "FCR_GREJ", "HF_SHOW" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCR12AU", "FCR_GGREET", "FCR_CSH", "FCR_PCSHY", "FCR_GACC", "FCR_CSHN", "FCR_GREJ", "HF_SHOW" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCR12AU", "FCR_CSHF", "FCR_PCSHY", "FCR_GACC", "FCR_CSHN", "FCR_GREJ", "HF_SHOW" );
        }
        break;
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCJCPAU", "FCJ_GCVIRATE", "FCJ_GCSH", "FCJ_GCSHY", "FCJ_GCACC", "FCJ_GCSHN", "FCJ_GCREJ", "HF_SHOW" );
                }
                else
                {
                    return sub_156141( uParam0, "FCJCPAU", "FCJ_GCIRATE", "FCJ_GCSH", "FCJ_GCSHY", "FCJ_GCACC", "FCJ_GCSHN", "FCJ_GCREJ", "HF_SHOW" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCJCPAU", "FCJ_GCG", "FCJ_GCSH", "FCJ_GCSHY", "FCJ_GCACC", "FCJ_GCSHN", "FCJ_GCREJ", "HF_SHOW" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCJCPAU", "FCJ_GCSHF", "FCJ_GCSHY", "FCJ_GCACC", "FCJ_GCSHN", "FCJ_GCREJ", "HF_SHOW" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCDAUD", "FCD_CVIREATE", "PLACEHOLDER", "PLACEHOLDER", "FCD_GCACCP", "PLACEHOLDER", "FCD_GCREJ", "HF_SHOW" );
                }
                else
                {
                    return sub_156141( uParam0, "FCDAUD", "FCD_GCIRATE", "PLACEHOLDER", "PLACEHOLDER", "FCD_GCACCP", "PLACEHOLDER", "FCD_GCREJ", "HF_SHOW" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCDAUD", "FCD_CGREET", "PLACEHOLDER", "PLACEHOLDER", "FCD_GCACCP", "PLACEHOLDER", "FCD_GCREJ", "HF_SHOW" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCDAUD", "PLACEHOLDER", "PLACEHOLDER", "FCD_GCACCP", "PLACEHOLDER", "FCD_GCREJ", "HF_SHOW" );
        }
        break;
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GVIRATE", "FCB_PCSH", "FCB_PCSHY", "FCB_GACC", "FCB_PCSHN", "FCB_GREJ", "HF_SHOW" );
                }
                else
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GIRATE", "FCB_PCSH", "FCB_PCSHY", "FCB_GACC", "FCB_PCSHN", "FCB_GREJ", "HF_SHOW" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCBCPAU", "FCB_GGREET", "FCB_PCSH", "FCB_PCSHY", "FCB_GACC", "FCB_PCSHN", "FCB_GREJ", "HF_SHOW" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCBCPAU", "FCB_GCSHF", "FCB_PCSHY", "FCB_GACC", "FCB_PCSHN", "FCB_GREJ", "HF_SHOW" );
        }
        break;
        case 13:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCPCPAU", "FCP_GCVIRA", "FCP_GCSH", "FCP_GCSHY", "FCP_GCACC", "FCP_CSHN", "FCP_GCREJ", "HF_SHOW" );
                }
                else
                {
                    return sub_156141( uParam0, "FCPCPAU", "FCP_GCIRA", "FCP_GCSH", "FCP_GCSHY", "FCP_GCACC", "FCP_CSHN", "FCP_GCREJ", "HF_SHOW" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCPCPAU", "FCP_GCGREET", "FCP_GCSH", "FCP_GCSHY", "FCP_GCACC", "FCP_CSHN", "FCP_GCREJ", "HF_SHOW" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCPCPAU", "FCP_GCSHF", "FCP_GCSHY", "FCP_GCACC", "FCP_CSHN", "FCP_GCREJ", "HF_SHOW" );
        }
        break;
    }
    return sub_87823( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_SHOW" );
}

void sub_169778(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    boolean bVar5;

    bVar3 = g_U22274[uParam0]._fU8;
    bVar4 = g_U22274[uParam0]._fU92;
    bVar5 = g_U22274[uParam0]._fU96;
    switch (uParam0)
    {
        case 0:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GVIRATE", "FCR_CST", "FCR_PCSTY", "FCR_GACC", "FCR_CSTN", "FCR_GREJ", "HF_STRP" );
                }
                else
                {
                    return sub_156141( uParam0, "FCR12AU", "FCR_GIRATE", "FCR_CST", "FCR_PCSTY", "FCR_GACC", "FCR_CSTN", "FCR_GREJ", "HF_STRP" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCR12AU", "FCR_GGREET", "FCR_CST", "FCR_PCSTY", "FCR_GACC", "FCR_CSTN", "FCR_GREJ", "HF_STRP" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCR12AU", "FCR_GSTF", "FCR_PCSTY", "FCR_GACC", "FCR_CSTN", "FCR_GREJ", "HF_STRP" );
        }
        break;
        case 3:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCJCPAU", "FCJ_GCVIRATE", "FCJ_GCST", "FCJ_GCSTY", "FCJ_GCACC", "FCJ_CSTN", "FCJ_GCREJ", "HF_STRP" );
                }
                else
                {
                    return sub_156141( uParam0, "FCJCPAU", "FCJ_GCIRATE", "FCJ_GCST", "FCJ_GCSTY", "FCJ_GCACC", "FCJ_CSTN", "FCJ_GCREJ", "HF_STRP" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCJCPAU", "FCJ_GCG", "FCJ_GCST", "FCJ_GCSTY", "FCJ_GCACC", "FCJ_CSTN", "FCJ_GCREJ", "HF_STRP" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCJCPAU", "FCJ_GCSTF", "FCJ_GCSTY", "FCJ_GCACC", "FCJ_CSTN", "FCJ_GCREJ", "HF_STRP" );
        }
        break;
        case 7:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCDAUD", "FCD_CVIREATE", "FCD_STRPYES", "FCD_STRPY2", "FCD_GCACCP", "FCD_STRPNO", "FCD_GCREJ", "HF_STRP" );
                }
                else
                {
                    return sub_156141( uParam0, "FCDAUD", "FCD_GCIRATE", "FCD_STRPYES", "FCD_STRPY2", "FCD_GCACCP", "FCD_STRPNO", "FCD_GCREJ", "HF_STRP" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCDAUD", "FCD_CGREET", "FCD_STRPYES", "FCD_STRPY2", "FCD_GCACCP", "FCD_STRPNO", "FCD_GCREJ", "HF_STRP" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCDAUD", "FCD_STRP1", "FCD_STRPY2", "FCD_GCACCP", "FCD_STRPNO", "FCD_GCREJ", "HF_STRP" );
        }
        break;
        case 8:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GVIRATE", "FCB_GCSTR", "FCB_GCSTY", "FCB_GACC", "FCB_CSTRN", "FCB_GREJ", "HF_STRP" );
                }
                else
                {
                    return sub_156141( uParam0, "FCBCPAU", "FCB_GIRATE", "FCB_GCSTR", "FCB_GCSTY", "FCB_GACC", "FCB_CSTRN", "FCB_GREJ", "HF_STRP" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCBCPAU", "FCB_GGREET", "FCB_GCSTR", "FCB_GCSTY", "FCB_GACC", "FCB_CSTRN", "FCB_GREJ", "HF_STRP" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCBCPAU", "FCB_GSTRF", "FCB_GCSTY", "FCB_GACC", "FCB_CSTRN", "FCB_GREJ", "HF_STRP" );
        }
        break;
        case 13:
        if (bVar3)
        {
            if (bVar4)
            {
                if (bVar5)
                {
                    return sub_156141( uParam0, "FCPCPAU", "FCP_GCVIRA", "FCP_GCST", "FCP_GCSTY", "FCP_GCACC", "FCP_GCSTN", "FCP_GCREJ", "HF_STRP" );
                }
                else
                {
                    return sub_156141( uParam0, "FCPCPAU", "FCP_GCIRA", "FCP_GCST", "FCP_GCSTY", "FCP_GCACC", "FCP_GCSTN", "FCP_GCREJ", "HF_STRP" );
                }
            }
            else
            {
                return sub_156141( uParam0, "FCPCPAU", "FCP_GCGREET", "FCP_GCST", "FCP_GCSTY", "FCP_GCACC", "FCP_GCSTN", "FCP_GCREJ", "HF_STRP" );
            }
        }
        else
        {
            return sub_87823( uParam0, "FCPCPAU", "FCP_GCSTF", "FCP_GCSTY", "FCP_GCACC", "FCP_GCSTN", "FCP_GCREJ", "HF_STRP" );
        }
        break;
    }
    return sub_87823( uParam0, "FCRDCAU", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "PLACEHOLDER", "HF_STRP" );
}

// I think this runs a lot of game functions
// uses sub_173764 a lot
void sub_172485(unknown uParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;
    boolean bVar6;
    int iVar7;
    unknown uVar8;
    int iVar9;
    int iVar10;
    boolean bVar11;

    bVar5 = true;
    bVar6 = false;
    iVar7 = 0;
    iVar9 = 26;
    iVar10 = 77;
    bVar11 = true;
    while (bVar5)
    {
        bVar5 = false;
        bVar6 = false;
        iVar7 = g_U10981[uParam1]._fU16;
        uVar8 = (uParam2^)[iVar7]._fU0;
        switch (uVar8)
        {
            case 0:
            sub_173764( "GAME INITIAL SETUP" );
            sub_173781();
            bVar6 = true;
            break;
            case 1:
            case 4:
            case 5:
            sub_173764( "DO MISSION [KILL STRAND [OR]]" );
            if (sub_175218( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 2:
            sub_173764( "DO MISSION FAILGOTO" );
            bVar11 = true;
            if (sub_176015( uParam1, (uParam2^)[iVar7]._fU4._fU0, ref bVar11 ))
            {
                if (bVar11)
                {
                    bVar6 = true;
                }
                else
                {
                    sub_176229( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                }
            }
            break;
            case 3:
            if (g_U10981[uParam1]._fU36)
            {
                sub_173764( "DO MISSION FAILGOTO PHONE - JUMP TO PHONECALL" );
                sub_176229( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                bVar5 = true;
            }
            else
            {
                bVar11 = true;
                if (sub_176015( uParam1, (uParam2^)[iVar7]._fU4._fU0, ref bVar11 ))
                {
                    if (bVar11)
                    {
                        bVar6 = true;
                    }
                    else
                    {
                        sub_176229( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                    }
                }
            }
            break;
            case 6:
            sub_173764( "START PROC MISSION" );
            if (sub_176884( uParam0, uParam1, (uParam2^)[iVar7]._fU4._fU0, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 1 ))
            {
                bVar6 = true;
            }
            break;
            case 7:
            sub_173764( "START PROC MISSION NOJOB" );
            if (sub_176884( uParam0, uParam1, (uParam2^)[iVar7]._fU4._fU0, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 0 ))
            {
                bVar6 = true;
            }
            break;
            case 8:
            sub_173764( "QUIT PROC MISSION" );
            if (sub_177647( uParam0, uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 9:
            sub_173764( "DO MISSION RECURRING" );
            if (sub_175218( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                ;
            }
            break;
            case 10:
            sub_173764( "SETUP_MISSION_ONLY" );
            if (sub_178221( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 11:
            sub_173764( "HELP SCRIPT" );
            if (sub_175218( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 12:
            sub_173764( "OFF MISSION SCRIPT" );
            if (sub_175218( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 13:
            sub_173764( "SETUP_OFF_MISSION_ONLY" );
            if (sub_178221( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
            }
            break;
            case 14:
            sub_173764( "OFF MISSION SCRIPT FAILGOTO" );
            bVar11 = true;
            if (sub_176015( uParam1, (uParam2^)[iVar7]._fU4._fU0, ref bVar11 ))
            {
                if (bVar11)
                {
                    bVar6 = true;
                }
                else
                {
                    sub_176229( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
                }
            }
            break;
            case 15:
            sub_173764( "STANDALONE SCRIPT" );
            if (sub_178629( uParam1, (uParam2^)[iVar7]._fU4._fU0 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 16:
            sub_173764( "CREATE_CELLPHONE" );
            sub_179227();
            bVar6 = true;
            bVar5 = true;
            break;
            case 17:
            sub_173764( "CREATE_CAMERA_CELLPHONE" );
            sub_179301();
            bVar6 = true;
            bVar5 = true;
            break;
            case 18:
            sub_173764( "ADD_TO_PHONEBOOK" );
            sub_179403( uParam0 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 19:
            sub_173764( "ADD_OTHER_TO_PHONEBOOK" );
            sub_179403( (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 20:
            sub_173764( "REMOVE_FROM_PHONEBOOK" );
            sub_179664( (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 21:
            sub_173764( "ADD_SILENTLY_TO_PHONEBOOK" );
            sub_179754( (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 22:
            sub_173764( "SET_ANSWER_PHONE" );
            sub_179850( uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 23:
            sub_173764( "SET_OTHER_ANSWER_PHONE" );
            sub_179979( (uParam2^)[iVar7]._fU4._fU4, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 24:
            sub_173764( "PLAYER_TO_PHONE_FOR_JOB" );
            if (sub_180343( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56 ))
            {
                bVar6 = true;
            }
            break;
            case 25:
            sub_173764( "FORCE_PLAYER_PHONECALL" );
            if (sub_180917( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 26:
            sub_173764( "PHONE_PLAYER" );
            if (sub_181795( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 27:
            sub_173764( "PHONE_PLAYER_QUICK" );
            if (sub_181795( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 28:
            sub_173764( "PHONE_PLAYER_FLAGCHECK" );
            if (sub_181795( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, (uParam2^)[iVar7]._fU4._fU24, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 29:
            sub_173764( "PHONE_PLAYER_REPEAT" );
            if (sub_181795( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 30:
            sub_173764( "PHONE_PLAYER_REPEAT_QUICK" );
            if (sub_181795( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 31:
            sub_173764( "PHONE_PLAYER_VECTOR" );
            if (sub_181795( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 32:
            sub_173764( "PHONE_PLAYER_VECTOR_QUICK" );
            if (sub_181795( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 300000, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 33:
            sub_173764( "PHONE_PLAYER_VECTOR_REPEAT" );
            if (sub_181795( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 34:
            sub_173764( "PHONE_PLAYER_VECTOR_REPEAT_QUICK" );
            if (sub_181795( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 35:
            sub_173764( "PHONE_PLAYER_TIME_REPEAT" );
            if (sub_181840( uParam0, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar9, (uParam2^)[iVar7]._fU4._fU32, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 36:
            sub_173764( "ONEOFF PHONE_PLAYER" );
            if (sub_181795( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 37:
            sub_173764( "ONEOFF PHONE_PLAYER_QUICK" );
            if (sub_181795( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, 300000, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 38:
            sub_173764( "ONEOFF PHONE_PLAYER_REPEAT" );
            if (sub_181795( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 39:
            sub_173764( "ONEOFF PHONE_PLAYER_REPEAT_FLAGCHECK" );
            if (sub_181795( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 40:
            sub_173764( "ONEOFF PHONE_PLAYER_REPEAT_QUICK" );
            if (sub_181795( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, iVar9, (uParam2^)[iVar7]._fU4._fU24, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 41:
            sub_173764( "ONEOFF PHONE_PLAYER VECTOR" );
            if (sub_181795( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 42:
            sub_173764( "ONEOFF PHONE_PLAYER VECTOR REPEAT" );
            if (sub_181795( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 43:
            sub_173764( "ONEOFF PHONE_PLAYER VECTOR REPEAT QUICK" );
            if (sub_181795( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 44:
            sub_173764( "ONEOFF PHONE_PLAYER TIME" );
            if (sub_181840( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, iVar9, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 45:
            sub_173764( "ONEOFF PHONE_PLAYER TIME VECTOR" );
            if (sub_181840( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32, 300000, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;
            case 46:
            sub_173764( "ONEOFF PHONE_PLAYER TIME VECTOR REPEAT" );
            if (sub_181840( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32, (uParam2^)[iVar7]._fU4._fU36, iVar10, 0, 0 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;

            case 47:
            sub_173764( "ONEOFF PHONE_PLAYER TIME VECTOR REPEAT QUICK" );
            if (sub_181840( (uParam2^)[iVar7]._fU4._fU4, uParam1, ref (uParam2^)[iVar7]._fU4._fU40, ref (uParam2^)[iVar7]._fU4._fU56, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32, (uParam2^)[iVar7]._fU4._fU36, iVar10, 0, 1 ))
            {
                bVar6 = true;
            }
            g_U10981[uParam1]._fU36 = 0;
            break;

            case 48:
            sub_173764( "AMBIENT PHONECALL" );
            sub_188709( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 49:
            sub_173764( "KILL AMBIENT PHONECALL" );
            if (sub_188854( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;

            case 50:
            sub_173764( "CHAT PHONECALL" );
            sub_188994( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 51:
            sub_173764( "KILL CHAT PHONECALL" );
            sub_189139( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 52:
            sub_173764( "END OF MISSION PHONECALL WALL" );
            if (NOT sub_189276())
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;

            case 53:
            sub_173764( "TXTMSG PLAYER AMBIENT" );
            sub_82482( (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 54:
            sub_173764( "TXTMSG PLAYER AMBIENT CODE" );
            Text_Player( (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU32 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 55:
            sub_173764( "TXTMSG PLAYER AMBIENT WAIT" );
            if (sub_189596( (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
            }
            break;

            case 56:
            sub_173764( "TXTMSG PLAYER AMBIENT WAIT CODE" );
            if (sub_189618( (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU32 ))
            {
                bVar6 = true;
            }
            break;

            case 57:
            sub_173764( "KILL TXTMSG" );
            sub_109477( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 58:
            sub_173764( "PROC_REMINDER_TXTS" );
            sub_190101( uParam1, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 59:
            sub_173764( "ACTIVATE AMBIENT EMAIL" );
            sub_190360( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 60:
            sub_173764( "ADD_FRIEND_ACTIVITY" );
            sub_190812( uParam0, (uParam2^)[iVar7]._fU4._fU8 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 61:
            sub_173764( "ALLOW_FRIEND_ACTIVITIES" );
            sub_190990( uParam0, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 62:
            sub_173764( "DISALLOW_FRIEND_ACTIVITIES" );
            sub_191557( uParam0 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 63:
            sub_173764( "ADD_SPECIAL_ACTION" );
            sub_191672( uParam0, (uParam2^)[iVar7]._fU4._fU8 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 64:
            sub_173764( "ALLOW_SPECIAL_ACTIONS" );
            sub_191805( uParam1, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24, (uParam2^)[iVar7]._fU4._fU28, (uParam2^)[iVar7]._fU4._fU32 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 65:
            sub_173764( "REALLOW_SPECIAL_ACTIONS" );
            sub_192099( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 66:
            sub_173764( "DISALLOW_SPECIAL_ACTIONS" );
            sub_192179( uParam1 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 67:
            sub_173764( "CONTACT_ON_NEXT_MISSION" );
            sub_192287( uParam1, (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 70:
            sub_173764( "PAUSE_STRAND_EXTRAS" );
            if (sub_192391( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;

            case 71:
            sub_173764( "UNPAUSE_STRAND_EXTRAS" );
            sub_193232( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 68:
            sub_173764( "PAUSE_STRAND" );
            if (sub_193699( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;

            case 69:
            sub_173764( "UNPAUSE_STRAND" );
            sub_193849( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 72:
            sub_173764( "ALLOW_HOSPITAL_PICKUP" );
            sub_193942( uParam0, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 73:
            sub_173764( "ACTIVATE_BODY_SEARCHING" );
            sub_194040();
            bVar6 = true;
            bVar5 = true;
            break;

            case 74:
            sub_173764( "ACTIVATE_MAP_AREA" );
            sub_194104( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 75:
            sub_173764( "MAP_AREA_WALL" );
            if (sub_194488( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;

            case 76:
            sub_173764( "ACTIVATE_MAP_BLIP_GROUP" );
            sub_194571( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 77:
            sub_173764( "ACTIVATE_SAVE_HOUSE" );
            sub_194677( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 78:
            sub_173764( "DEACTIVATE_SAVE_HOUSE" );
            sub_195201( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 79:
            sub_173764( "ACTIVATE_PICKUP_POINT" );
            sub_195575( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 80:
            sub_173764( "DEACTIVATE_PICKUP_POINT" );
            sub_195657( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 81:
            sub_173764( "ACTIVATE_DROPOFF_POINT" );
            sub_195738( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 82:
            sub_173764( "DEACTIVATE_DROPOFF_POINT" );
            sub_195821( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 83:
            sub_173764( "ACTIVATE_HAIL_TAXI" );
            sub_195887();
            bVar6 = true;
            bVar5 = true;
            break;

            case 84:
            sub_173764( "UNLOCK_GUNSHOP" );
            sub_195949();
            bVar6 = true;
            bVar5 = true;
            break;

            case 85:
            sub_173764( "ALLOW_NETWORK_SAVES" );
            sub_196012();
            bVar6 = true;
            bVar5 = true;
            break;

            case 86:
            sub_173764( "ACTIVATE_SPRAYSHOPS" );
            sub_196071();
            bVar6 = true;
            bVar5 = true;
            break;

            case 87:
            sub_173764( "ACTIVATE_CARGEN" );
            sub_196141( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 88:
            sub_173764( "DECEASED_ON_POLICE_COMPUTER" );
            sub_196280( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 89:
            sub_173764( "MISSING_ON_POLICE_COMPUTER" );
            sub_197311( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 90:
            sub_173764( "ARRESTED_ON_POLICE_COMPUTER" );
            sub_198352( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 91:
            sub_173764( "ALIVE_ON_POLICE_COMPUTER" );
            sub_199341( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 92:
            sub_173764( "DECEASED_ON_LCPD_WEB" );
            sub_200488( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 93:
            sub_173764( "MISSING_ON_LCPD_WEB" );
            sub_200566( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 94:
            sub_173764( "ARRESTED_ON_LCPD_WEB" );
            sub_200645( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 95:
            sub_173764( "ALIVE_ON_LCPD_WEB" );
            sub_200721( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 96:
            sub_173764( "ADD_DATE_TO_WEBSITE" );
            sub_200799( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;

            case 97:
            sub_173764( "UNLOCK_NEWS_BLOCK" );
            sub_200907( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            
            case 98:
            sub_173764( "UNLOCK_RADIO_STORY" );
            sub_203584( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 99:
            sub_173764( "ACTIVATE_GANG_HASSLE" );
            sub_203649();
            bVar6 = true;
            bVar5 = true;
            break;
            case 100:
            sub_173764( "DEACTIVATE_GANG_HASSLE" );
            sub_203720();
            bVar6 = true;
            bVar5 = true;
            break;
            case 101:
            sub_173764( "GANG_RELATIONSHIP_LIKE" );
            sub_203813( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 102:
            sub_173764( "GANG_RELATIONSHIP_NEUTRAL" );
            sub_203924( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 103:
            sub_173764( "GANG_RELATIONSHIP_DISLIKE" );
            sub_204035( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 104:
            sub_173764( "GANG_RELATIONSHIP_HATE" );
            sub_204143( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 105:
            sub_173764( "SET_STAT_VALUE" );
            sub_204245( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 108:
            sub_173764( "STAT_BOOST" );
            sub_204366( (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 106:
            sub_173764( "LIKE_MESSAGES_ON" );
            sub_204441( uParam1, 1 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 107:
            sub_173764( "LIKE_MESSAGES_OFF" );
            sub_204441( uParam1, 0 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 109:
            sub_173764( "STAT_WALL" );
            if (sub_204571( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 110:
            sub_173764( "STAT_WALL_AND" );
            if ((sub_204571( uParam1, (uParam2^)[iVar7]._fU4._fU16, (uParam2^)[iVar7]._fU4._fU24 )) AND (sub_204571( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 )))
            {
                bVar6 = true;
            }
            break;
            case 111:
            sub_173764( "STAT_WALL_OR" );
            if ((sub_204571( uParam1, (uParam2^)[iVar7]._fU4._fU16, (uParam2^)[iVar7]._fU4._fU24 )) || (sub_204571( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 )))
            {
                bVar6 = true;
            }
            break;
            case 112:
            sub_173764( "STAT_CHECK (FAIL GOTO)" );
            if (sub_204571( uParam1, (uParam2^)[iVar7]._fU4._fU12, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            else
            {
                sub_176229( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 113:
            sub_173764( "SET_MISSIONS_LEVEL" );
            sub_205129( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 114:
            sub_173764( "MISSIONS_LEVEL_WALL" );
            if (sub_205222( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 115:
            sub_173764( "MISSIONS_LEVEL_CHECK (FAIL GOTO)" );
            if (sub_205222( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            else
            {
                sub_176229( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 116:
            sub_173764( "ACTIVATE_STRAND" );
            g_U10981[(uParam2^)[iVar7]._fU4._fU20]._fU0 = 1;
            bVar6 = true;
            break;
            case 117:
            sub_173764( "STRAND_ACTIVATED_CHECK (PASS GOTO)" );
            if (sub_205474( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                sub_176229( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            else
            {
                bVar6 = true;
            }
            break;
            case 118:
            sub_173764( "STRAND_DEACTIVATION_WALL" );
            if (sub_205599( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 119:
            sub_173764( "SEND_SYNCHRONISATION" );
            sub_205715( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            break;
            case 120:
            sub_173764( "SYNCHRONISATION_WALL" );
            if (sub_205900( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 121:
            sub_173764( "GAMETIME MINS DELAY" );
            if (sub_206040( uParam1, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 122:
            sub_173764( "GAMETIME WALL" );
            if (sub_206312( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
            }
            break;
            case 123:
            sub_173764( "REALTIME_MSECS_DELAY" );
            if (sub_206430( uParam1, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 124:
            sub_173764( "DISTANCE WALL" );
            if (sub_183076( (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
            }
            break;
            case 125:
            sub_173764( "SYNCHRONISATION_WALL" );
            sub_206661( (uParam2^)[iVar7]._fU4._fU4 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 126:
            sub_173764( "GIVE_WEAPON" );
            if (sub_206994( (uParam2^)[iVar7]._fU4._fU72, (uParam2^)[iVar7]._fU4._fU20, (uParam2^)[iVar7]._fU4._fU24 ))
            {
                bVar6 = true;
            }
            break;
            case 127:
            sub_173764( "CHANGE CLOTHES" );
            sub_207176( (uParam2^)[iVar7]._fU4._fU4, (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 128:
            sub_173764( "SET_MISSION_FLOW_FLAG" );
            sub_207327( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 129:
            sub_173764( "SET_MISSION_FLOW_FLAG_DEBUG" );
            bVar6 = true;
            bVar5 = true;
            break;
            case 130:
            sub_173764( "CLEAR_MISSION_FLOW_FLAG" );
            sub_207457( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 132:
            sub_173764( "FLAG_WALL" );
            if (sub_207527( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            break;
            case 131:
            sub_173764( "FLAG_CHECK_FAILGOTO" );
            if (sub_207527( (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
            }
            else
            {
                sub_176229( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 133:
            sub_173764( "LABEL" );
            bVar6 = true;
            bVar5 = true;
            break;
            case 134:
            sub_173764( "GOTO" );
            sub_176229( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            bVar5 = true;
            break;
            case 135:
            sub_173764( "GOSUB" );
            sub_207746( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            bVar5 = true;
            break;
            case 136:
            sub_173764( "GOSUB RETURN" );
            sub_207907( uParam1 );
            bVar6 = true;
            break;
            case 137:
            sub_173764( "IS_PS3_FAILGOTO" );
            if (sub_208081())
            {
                bVar6 = true;
                bVar5 = true;
            }
            else
            {
                sub_176229( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 138:
            sub_173764( "HELP_TEXT" );
            if (sub_208196( (uParam2^)[iVar7]._fU4._fU40 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 139:
            sub_173764( "HELP_TEXT_TIMED" );
            if (sub_208209( (uParam2^)[iVar7]._fU4._fU40, (uParam2^)[iVar7]._fU4._fU20 ))
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 140:
            sub_173764( "PRINT_NOW" );
            PRINT_NOW( ref (uParam2^)[iVar7]._fU4._fU40, (uParam2^)[iVar7]._fU4._fU20, 1 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 141:
            sub_173764( "KILL STRAND" );
            sub_208569( (uParam2^)[iVar7]._fU4._fU20 );
            bVar6 = true;
            bVar5 = true;
            break;
            case 142:
            sub_173764( "KEEP STRAND ACTIVE" );
            break;
            case 143:
            sub_173764( "TERMINATE THIS STRAND" );
            sub_208569( uParam1 );
            break;
            case 144:
            if (g_U10981[uParam1]._fU32)
            {
                if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
                {
                    CLEAR_WANTED_LEVEL( CurrentPlayerId() );
                }
                sub_173764( "START SHOWCASE FAILGOTO" );
                bVar6 = true;
                bVar5 = true;
            }
            else
            {
                sub_176229( uParam1, uParam2, ref (uParam2^)[iVar7]._fU4._fU40 );
            }
            break;
            case 145:
            if (g_U10981[uParam1]._fU32)
            {
                sub_173764( "END SHOWCASE" );
            }
            else
            {
                bVar6 = true;
                bVar5 = true;
            }
            break;
            case 146:
            sub_173764( "END STRAND" );
            sub_55041( "END_STRAND: SHOULD NEVER REACH HERE - ADD 'TERMINATE THIS STRAND' COMMAND" );
            break;
            default: sub_55041( "Flow_Maintain_Mission_Flow(): Unknown mission FLOW_SEQ... ID" );
        }
        if (bVar6)
        {
            sub_173764( "************************ NEXT SEQUENCE *************************\n" );
            g_U10981[uParam1]._fU16++;
        }
    }
    if ((NOT g_U15436[uParam1]._fU20) AND ((NOT (sub_182171( uParam0 ))) AND (sub_75025( uParam0, 1 ))))
    {
        if (sub_209788( uParam1, uParam0 ))
        {
            return;
        }
    }
    if (NOT g_U15946[uParam0]._fU4)
    {
        sub_74594( uParam1 );
    }
    return;
}

void sub_173764(unknown uParam0)
{
    return;
}

void sub_173781()
{
    int iVar2;
    int iVar3;
    int iVar4;

    sub_173790();
    sub_173856();
    iVar2 = 1;
    sub_52551( iVar2 );
    CLEAR_WANTED_LEVEL( CurrentPlayerId() );
    SET_TIME_OF_DAY( 7, 0 );
    g_U15945 = -1;
    g_U9193 = 0;
    g_U9194 = 0;
    g_U9195 = 0;
    g_U9196 = 0;
    g_U9197 = 0;
    g_U9198 = 0;
    sub_174740();
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 1 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 1, 0, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 2 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 2, 0, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 5 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 5, 0, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 4 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 4, 0, 0 );
        }
        if ((NOT ((GET_CHAR_TEXTURE_VARIATION( CurrentPlayerChar(), 3 )) == 0)) || (NOT ((GET_CHAR_DRAWABLE_VARIATION( CurrentPlayerChar(), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( CurrentPlayerChar(), 3, 0, 0 );
        }
        iVar3 = -1;
        GET_CHAR_PROP_INDEX( CurrentPlayerChar(), 0, ref iVar3 );
        if (NOT (iVar3 == -1))
        {
            CLEAR_CHAR_PROP( CurrentPlayerChar(), 0 );
        }
        iVar4 = -1;
        GET_CHAR_PROP_INDEX( CurrentPlayerChar(), 0, ref iVar4 );
        if (NOT (iVar4 == -1))
        {
            CLEAR_CHAR_PROP( CurrentPlayerChar(), 1 );
        }
    }
    sub_43788();
    return;
}

void sub_173790()
{
    int iVar2;

    IS_CHAR_DEAD( CurrentPlayerChar() );
    iVar2 = 0;
    STORE_SCORE( CurrentPlayerId(), ref iVar2 );
    iVar2 *= -1;
    ADD_SCORE( CurrentPlayerId(), iVar2 );
    return;
}

void sub_173856()
{
    int I;

    I = 0;
    for ( I = 0; I < 25; I++ )
    {
        g_U15731[I]._fU0 = 10000.00000000 + 100.00000000;
    }
    g_U15731[0] = {812.05550000, -258.58310000, 14.33770000};
    g_U15731[1] = {1237.31400000, -504.41570000, 13.16580000};
    g_U15731[2] = {903.18280000, 587.76840000, 21.26680000};
    g_U15731[3] = {1205.31600000, 1453.86400000, 15.73660000};
    g_U15731[4] = {114.23390000, 836.53710000, 13.73100000};
    g_U15731[5] = {1048.76400000, -578.01350000, 12.95700000};
    g_U15731[6] = {g_U9387[3]._fU0};
    g_U15731[7] = {965.02090000, -319.00810000, 20.76660000};
    g_U15731[8] = {g_U9387[6]._fU0};
    g_U15731[9] = {956.72090000, -266.94460000, 17.12400000};
    g_U15731[10] = {734.05400000, -77.50879000, 4.81860000};
    g_U15731[11] = {-406.63070000, 279.57920000, 12.10630000};
    g_U15731[12] = {-272.88470000, -281.84560000, 13.34560000};
    g_U15731[13] = {-118.02340000, 1495.18600000, 17.44240000};
    g_U15731[14] = {-419.09420000, 1487.03600000, 17.85990000};
    g_U15731[15] = {-126.06160000, 1501.11500000, 23.28000000};
    g_U15731[16] = {-421.84950000, 1483.59600000, 20.10000000};
    g_U15731[17] = {-503.29260000, 1731.17600000, 7.60000000};
    g_U15731[18] = {-123.63790000, -256.57810000, 11.68540000};
    g_U15731[19] = {-1004.85500000, 1224.36200000, 27.41760000};
    g_U15731[20] = {-792.35100000, 905.17060000, 3.21560000};
    g_U15731[21] = {-490.47880000, 805.95840000, 8.82510000};
    g_U15731[22] = {-1397.89300000, 1460.94300000, 24.20460000};
    g_U15731[23] = {-1343.77400000, 792.13130000, 18.43570000};
    g_U15731[24] = {-272.34280000, 1507.39800000, 19.41880000};
    for ( I = 0; I < 25; I++ )
    {
        if (g_U15731[I]._fU0 > 10000.00000000)
        {
            sub_23915( "Flow_Reset: Setup_Mission_Flow_Vectors: Not all vectors have been given a value" );
        }
    }
    return;
}

void sub_174740()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 1800000;
    g_U9379 = iVar2 + iVar3;
    return;
}

int sub_175218(unknown uParam0, int iParam1)
{
    if (g_U10981[uParam0]._fU24 == iParam1)
    {
        g_U10981[uParam0]._fU24 = -1;
        sub_175264( uParam0 );
        if (g_U9914._fU0)
        {
            g_U9914._fU8 = 0;
        }
        sub_55249( "mission has been passed\n" );
        return 1;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_175492( uParam0, iParam1 );
        return 0;
    }
    if (g_U13391[uParam0]._fU0._fU4 == iParam1)
    {
        return 0;
    }
    return 0;
}

void sub_175264(int iParam0)
{
    if (NOT (g_U26746 == iParam0))
    {
        PRINTSTRING( "------------> KEITH: Skip_Phonecall_Mission_Pass() but wrong strand. Perhaps an error?" );
        return;
    }
    g_U10981[iParam0]._fU140 = 0;
    return;
}

void sub_175492(unknown uParam0, unknown uParam1)
{
    sub_175505( uParam0, uParam1 );
    return;
}

void sub_175505(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (g_U13391[uParam0]._fU0._fU0 == 0))
    {
        sub_23915( "Main_Missions: Setup_Mission(): Attempting to setup a mission after strand already setup" );
        return;
    }
    sub_1662( uParam0, 0 );
    uVar4 = sub_48070( uParam0, uParam1 );
    g_U13391[uParam0]._fU0._fU0 = 1;
    g_U13391[uParam0]._fU0._fU4 = uParam1;
    g_U13391[uParam0]._fU0._fU56 = g_U26758[uVar4]._fU12;
    StrCopy( ref g_U13391[uParam0]._fU0._fU8, 4, sub_175718( uVar4 ), 8);
    g_U13391[uParam0]._fU0._fU24 = {g_U26758[uVar4]._fU36};
    g_U10981[uParam0]._fU24 = -1;
    sub_47494( uParam0 );
    return;
}

void sub_175718(unknown uParam0)
{
    char[32] Result;

    if (COMPARE_STRING( ref g_U26758[uParam0]._fU36, "Finale2" ))
    {
        if (g_U15654[12])
        {
            StrCopy( ref Result, "M_95", 32 );
        }
        else
        {
            StrCopy( ref Result, "M_94", 32 );
        }
        return Result;
    }
    StrCopy( ref Result, 8, g_U26758[uParam0]._fU20, 4);
    return Result;
}

int sub_176015(unknown uParam0, int iParam1, unknown uParam2)
{
    if (g_U10981[uParam0]._fU24 == iParam1)
    {
        g_U10981[uParam0]._fU24 = -1;
        sub_175264( uParam0 );
        (uParam2^) = 1;
        if (g_U9914._fU0)
        {
            g_U9914._fU8 = 0;
        }
        sub_55249( "mission has been passed\n" );
        return 1;
    }
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        (uParam2^) = 0;
        return 1;
    }
    if (g_U13391[uParam0]._fU0._fU4 == iParam1)
    {
        return 0;
    }
    return 0;
}

void sub_176229(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;

    iVar5 = 0;
    iVar6 = 146;
    sub_55249( "Flow Goto or Gosub Label: " );
    sub_55249( uParam2 );
    sub_56195();
    while (true)
    {
        iVar6 = (uParam1^)[iVar5]._fU0;
        if (iVar6 == 146)
        {
            PRINTSTRING( "STRAND: " );
            PRINTINT( uParam0 );
            PRINTSTRING( "   LABEL: " );
            PRINTSTRING( uParam2 );
            PRINTNL();
            sub_55041( "Flow_Goto_Label: Failed to find label\n" );
            return;
        }
        if (iVar6 == 133)
        {
            sub_55249( "Found a label: " );
            sub_55249( ref (uParam1^)[iVar5]._fU4._fU40 );
            sub_56195();
            if (COMPARE_STRING( ref (uParam1^)[iVar5]._fU4._fU40, uParam2 ))
            {
                sub_55249( "Found correct label so continue mission flow here\n" );
                g_U10981[uParam0]._fU16 = iVar5;
                return;
            }
            sub_55249( "Wrong label, keep trying\n" );
        }
        iVar5++;
    }
    return;
}

int sub_176884(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    if (NOT g_U13391[uParam1]._fU160._fU0)
    {
        sub_176928( uParam0, uParam1, uParam2, uParam4, iParam3, uParam5 );
        return 0;
    }
    if (NOT g_U13391[uParam1]._fU160._fU80)
    {
        return 0;
    }
    if (g_U13391[uParam1]._fU160._fU84 >= iParam3)
    {
        g_U13391[uParam1]._fU160._fU92 = 1;
        return 1;
    }
    return 0;
}

void sub_176928(unknown uParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    int iVar9;

    uVar8 = sub_48070( uParam1, uParam2 );
    if (g_U13391[uParam1]._fU160._fU0)
    {
        sub_23915( "Main_Missions: Prepare_And_Setup_Proc_Mission(): Proc Mission already required on this strand." );
    }
    g_U13391[uParam1]._fU160._fU0 = 1;
    g_U13391[uParam1]._fU160._fU8 = uParam5;
    g_U13391[uParam1]._fU160._fU12 = {g_U26758[uVar8]._fU36};
    StrCopy( ref g_U13391[uParam1]._fU160._fU44, 8, g_U26758[uVar8]._fU20, 4);
    g_U13391[uParam1]._fU160._fU76 = uParam2;
    g_U13391[uParam1]._fU160._fU80 = 0;
    g_U13391[uParam1]._fU160._fU92 = 0;
    g_U13391[uParam1]._fU160._fU84 = 0;
    g_U13391[uParam1]._fU160._fU88 = uParam4;
    g_U15946[uParam0]._fU168._fU4 = 1;
    g_U13391[uParam1]._fU160._fU108._fU0 = 1;
    if ((NOT g_U13391[uParam1]._fU160._fU4) AND (uParam5))
    {
        g_U15946[uParam0]._fU8[0]._fU0[3] = 1;
    }
    iVar9 = 0;
    GET_GAME_TIMER( ref iVar9 );
    g_U13391[uParam1]._fU160._fU100 = iVar9 + iParam3;
    return;
}

int sub_177647(unknown uParam0, unknown uParam1, int iParam2)
{
    if (NOT g_U13391[uParam1]._fU160._fU0)
    {
        return 1;
    }
    if (NOT g_U13391[uParam1]._fU160._fU80)
    {
        return 0;
    }
    if (NOT (g_U13391[uParam1]._fU160._fU76 == iParam2))
    {
        sub_177805( "Flow_Quit_Mission_Proc: Attempt to quit different Proc Mission" );
        return 1;
    }
    if (g_U13391[uParam1]._fU160._fU96)
    {
        return 0;
    }
    if (NOT (IS_THREAD_ACTIVE( g_U13391[uParam1]._fU160._fU104 )))
    {
        return 1;
    }
    DESTROY_THREAD( g_U13391[uParam1]._fU160._fU104 );
    g_U13391[uParam1]._fU160._fU108._fU0 = 0;
    if (g_U13391[uParam1]._fU160._fU8)
    {
        g_U15946[uParam0]._fU8[0]._fU0[3] = 0;
    }
    return 1;
}

void sub_177805(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_178221(unknown uParam0, int iParam1)
{
    if (g_U13391[uParam0]._fU0._fU0 == 0)
    {
        sub_175492( uParam0, iParam1 );
        return 1;
    }
    if (g_U13391[uParam0]._fU0._fU4 == iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_178629(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int iVar5;

    uVar4 = sub_48070( uParam0, uParam1 );
    REQUEST_SCRIPT( ref g_U26758[uVar4]._fU36 );
    if (NOT (HAS_SCRIPT_LOADED( ref g_U26758[uVar4]._fU36 )))
    {
        REQUEST_SCRIPT( ref g_U26758[uVar4]._fU36 );
        return 0;
    }
    iVar5 = 1024;
    if (sub_178725( uParam0, uParam1 ))
    {
        iVar5 = 512;
    }
    if (sub_178813( uParam0, uParam1 ))
    {
        iVar5 = 128;
    }
    START_NEW_SCRIPT( ref g_U26758[uVar4]._fU36, iVar5 );
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U26758[uVar4]._fU36 );
    return 1;
}

int sub_178725(int iParam0, int iParam1)
{
    if ((iParam1 == 33) AND (iParam0 == 0))
    {
        return 1;
    }
    if ((iParam1 == 4) AND (iParam0 == 12))
    {
        return 1;
    }
    if ((iParam1 == 10) AND (iParam0 == 7))
    {
        return 1;
    }
    return 0;
}

int sub_178813(int iParam0, int iParam1)
{
    if ((iParam1 == 6) AND (iParam0 == 1))
    {
        return 1;
    }
    if ((iParam1 == 7) AND (iParam0 == 1))
    {
        return 1;
    }
    if ((iParam1 == 5) AND (iParam0 == 1))
    {
        return 1;
    }
    if ((iParam1 == 31) AND (iParam0 == 0))
    {
        return 1;
    }
    if ((iParam1 == 8) AND (iParam0 == 1))
    {
        return 1;
    }
    if ((iParam1 == 32) AND (iParam0 == 0))
    {
        return 1;
    }
    if ((iParam1 == 9) AND (iParam0 == 1))
    {
        return 1;
    }
    if ((iParam1 == 10) AND (iParam0 == 1))
    {
        return 1;
    }
    if ((iParam1 == 34) AND (iParam0 == 0))
    {
        return 1;
    }
    if ((iParam1 == 11) AND (iParam0 == 1))
    {
        return 1;
    }
    if ((iParam1 == 35) AND (iParam0 == 0))
    {
        return 1;
    }
    if ((iParam1 == 36) AND (iParam0 == 0))
    {
        return 1;
    }
    if ((iParam1 == 2) AND (iParam0 == 2))
    {
        return 1;
    }
    if ((iParam1 == 11) AND (iParam0 == 7))
    {
        return 1;
    }
    if ((iParam1 == 16) AND (iParam0 == 8))
    {
        return 1;
    }
    if ((iParam1 == 4) AND (iParam0 == 1))
    {
        return 1;
    }
    return 0;
}

void sub_179227()
{
    sub_51601();
    g_U91._fU40 = 1;
    return;
}

void sub_179301()
{
    g_U91._fU40 = 2;
    if (IS_BIT_SET( g_U91._fU412, 25 ))
    {
        SET_BIT( ref g_U91._fU412, 26 );
    }
    return;
}

void sub_179403(unknown uParam0)
{
    sub_179414( uParam0 );
    return;
}

void sub_179414(unknown uParam0)
{
    char[16] cVar3;

    if (NOT g_U15946[uParam0]._fU132._fU0)
    {
        if (g_U91._fU0 == 1012)
        {
            g_U91._fU92 = 1;
        }
        g_U15946[uParam0]._fU132._fU0 = 1;
        StrCopy( ref cVar3, "CONT_", 16 );
        ConcatString(ref cVar3, ref g_U15946[uParam0]._fU132._fU8, 16);
        SET_PHONE_HUD_ITEM( 2, ref cVar3, -1 );
        g_U91._fU520 = 0;
    }
    return;
}

void sub_179664(unknown uParam0)
{
    g_U15946[uParam0]._fU132._fU0 = 0;
    return;
}

void sub_179754(unknown uParam0)
{
    g_U15946[uParam0]._fU132._fU0 = 1;
    return;
}

void sub_179850(unknown uParam0, unknown uParam1, unknown uParam2)
{
    StrCopy( ref g_U10981[uParam0]._fU76, uParam1, 16 );
    StrCopy( ref g_U10981[uParam0]._fU92, uParam2, 16 );
    return;
}

void sub_179979(int iParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int I;

    iVar5 = -1;
    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (g_U32825[I]._fU0 == iParam0)
        {
            StrCopy( ref g_U32825[I]._fU4, uParam1, 16 );
            StrCopy( ref g_U32825[I]._fU20, uParam2, 16 );
            return;
        }
        if (g_U32825[I]._fU0 == 57)
        {
            if (iVar5 == -1)
            {
                iVar5 = I;
            }
        }
    }
    if (iVar5 == -1)
    {
        sub_55041( "Flow_Perform_Set_Other_Answer_Phone: need to increase MAX_NON_STRAND_ANSWER_PHONE_MESSAGES" );
        return;
    }
    g_U32825[iVar5]._fU0 = iParam0;
    StrCopy( ref g_U32825[iVar5]._fU4, uParam1, 16 );
    StrCopy( ref g_U32825[iVar5]._fU20, uParam2, 16 );
    return;
}

int sub_180343(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    SCRIPT_ASSERT( "Flow_Await_Mission_Phone_Call: Function unused so not maintained - Tell Keith" );
    if (g_U15436[uParam1]._fU0 == 0)
    {
        g_U15436[uParam1]._fU0 = 1;
        g_U15436[uParam1]._fU8 = 0;
        g_U15946[uParam0]._fU8[0]._fU0[3] = 1;
        sub_55249( "SET UP CONTROL VARIABLES - SO JOB ADDED\n" );
        return 0;
    }
    if (g_U15436[uParam1]._fU8 == 0)
    {
        if (g_U15946[uParam0]._fU4)
        {
            if (sub_180593( uParam0 ))
            {
                g_U15436[uParam1]._fU8 = 1;
                sub_55249( "Answer Cellphone\n" );
                sub_75373( uParam2, uParam3, 1 );
                sub_52331();
                sub_96113();
                return 0;
            }
        }
        return 0;
    }
    if (NOT (sub_81198() == 6))
    {
        return 0;
    }
    sub_55249( "Call ended\n" );
    sub_54494( uParam1 );
    g_U15946[uParam0]._fU8[0]._fU0[3] = 0;
    g_U15946[uParam0]._fU8[1]._fU0[3] = 0;
    g_U15946[uParam0]._fU4 = 0;
    g_U10981[uParam1]._fU28 = 1;
    return 1;
}

void sub_180593(unknown uParam0)
{
    return g_U15946[uParam0]._fU8[1]._fU0[3];
}

int sub_180917(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    if (g_U15436[iParam1]._fU4 == 0)
    {
        sub_55249( "Initialise Control Values\n" );
        g_U15436[iParam1]._fU4 = 1;
        g_U15436[iParam1]._fU8 = 0;
        g_U15436[iParam1]._fU12 = iVar7 + iParam4;
        return 0;
    }
    if (NOT g_U15436[iParam1]._fU8)
    {
        if (g_U15436[iParam1]._fU16)
        {
            g_U15436[iParam1]._fU16 = 0;
            g_U15436[iParam1]._fU12 = iVar7 + 30000;
            g_U15436[iParam1]._fU4 = 1;
            return 0;
        }
        if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
        {
            sub_181136( iParam1, 300000 );
            return 0;
        }
        if ((sub_86171( 0 )) || ((sub_85448()) || ((sub_85644()) || ((IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )) || ((IS_THREAD_ACTIVE( g_U812 )) || (g_U10978))))))
        {
            sub_181136( iParam1, 300000 );
            return 0;
        }
        if ((sub_95739( uParam0 )) || (NOT (sub_106785( uParam0, 30000 ))))
        {
            sub_181136( iParam1, 300000 );
            return 0;
        }
        if (g_U9893._fU12)
        {
            if (NOT (iParam1 == g_U9893._fU40))
            {
                sub_181136( iParam1, 300000 );
                g_U15436[iParam1]._fU4 = 1;
                return 0;
            }
            sub_54494( iParam1 );
            return 1;
        }
        if (iVar7 > g_U15436[iParam1]._fU12)
        {
            sub_55249( "Making Call\n" );
            if (sub_181472( uParam0, uParam2, uParam3 ))
            {
                sub_55249( "Call Setup Success\n" );
                g_U15436[iParam1]._fU8 = 1;
                sub_52331();
            }
            else
            {
                sub_55249( "Call Setup Failure - try again later\n" );
                sub_181136( iParam1, 300000 );
            }
        }
        return 0;
    }
    if (sub_80901())
    {
        return 0;
    }
    sub_54494( iParam1 );
    g_U10981[iParam1]._fU28 = 1;
    sub_87630( uParam0, 0 );
    return 1;
}

void sub_181136(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    iVar5 = 18000;
    iVar6 = 30000;
    if (iParam1 <= 60000)
    {
        iVar5 = 8000;
        iVar6 = 12000;
    }
    iVar7 = g_U15436[uParam0]._fU12 - iVar4;
    if (iVar7 > iVar5)
    {
        return;
    }
    g_U15436[uParam0]._fU12 = iVar4 + iVar6;
    return;
}

void sub_181472(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_75481( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

void sub_181795(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int iVar12;
    int iVar13;

    iVar12 = -1;
    iVar13 = -1;
    return sub_181840( uParam0, uParam1, uParam2, uParam3, uParam4, iVar12, iVar13, uParam5, uParam6, uParam7, uParam8, uParam9 );
}

int sub_181840(int iParam0, int iParam1, unknown uParam2, unknown uParam3, int iParam4, int iParam5, unknown uParam6, unknown uParam7, int iParam8, unknown uParam9, boolean bParam10, boolean bParam11)
{
    int iVar14;
    boolean bVar15;
    boolean bVar16;
    boolean bVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    boolean bVar21;

    iVar14 = 0;
    GET_GAME_TIMER( ref iVar14 );
    if (g_U15436[iParam1]._fU4 == 0)
    {
        sub_55249( "Initialise Control Values\n" );
        g_U15436[iParam1]._fU4 = 1;
        g_U15436[iParam1]._fU8 = 0;
        bVar15 = false;
        if (g_U15436[iParam1]._fU12 == -1)
        {
            bVar15 = true;
        }
        bVar16 = false;
        if (g_U15436[iParam1]._fU12 == -2)
        {
            bVar16 = true;
        }
        g_U15436[iParam1]._fU12 = iVar14;
        if (NOT g_U10981[iParam1]._fU36)
        {
            if (bVar15)
            {
                g_U15436[iParam1]._fU12 += iParam8;
            }
            else if (bVar16)
            {
                g_U15436[iParam1]._fU12 += 30000;
            }
            else
            {
                g_U15436[iParam1]._fU12 += iParam4;
            }
        }
        return 0;
    }
    if (NOT g_U15436[iParam1]._fU8)
    {
        bVar17 = false;
        if (bParam11)
        {
            if ((NOT (sub_182171( iParam0 ))) AND (sub_75025( iParam0, 1 )))
            {
                bVar17 = true;
            }
        }
        if (g_U15436[iParam1]._fU16)
        {
            g_U15436[iParam1]._fU16 = 0;
            g_U15436[iParam1]._fU12 = iVar14 + 30000;
            g_U15436[iParam1]._fU4 = 1;
            return 0;
        }
        if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
        {
            sub_181136( iParam1, iParam8 );
            return 0;
        }
        iVar18 = 0;
        if (iParam0 < 23)
        {
            if (g_U22274[iParam0]._fU16)
            {
                iVar18 = 1;
            }
        }
        if ((g_U9371) || ((sub_85695()) || ((g_U33837) || ((iVar18) || ((sub_85448()) || ((IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )) || ((IS_THREAD_ACTIVE( g_U812 )) || (g_U10978))))))))
        {
            sub_181136( iParam1, iParam8 );
            return 0;
        }
        if (NOT bVar17)
        {
            if ((sub_85644()) || (sub_86171( iParam4 )))
            {
                sub_181136( iParam1, iParam8 );
                return 0;
            }
        }
        if (g_U9893._fU12)
        {
            if (NOT (iParam1 == g_U9893._fU40))
            {
                sub_181136( iParam1, iParam8 );
                return 0;
            }
            sub_54494( iParam1 );
            if (NOT (iParam5 == -1))
            {
                if (NOT (sub_182581( iParam5, uParam6 )))
                {
                    SET_TIME_OF_DAY( iParam5, 0 );
                }
            }
            return 1;
        }
        if ((bVar17) || (iVar14 > g_U15436[iParam1]._fU12))
        {
            iVar19 = 1;
            if (bVar17)
            {
                if (sub_182758( uParam2, uParam3 ))
                {
                    iVar19 = 0;
                }
            }
            if ((iVar19) AND (NOT (iParam5 == -1)))
            {
                if (NOT (sub_182581( iParam5, uParam6 )))
                {
                    sub_181136( iParam1, iParam8 );
                    return 0;
                }
            }
            if (sub_182876( uParam7 ))
            {
                sub_181136( iParam1, iParam8 );
                return 0;
            }
            if (sub_183498( iParam1 ))
            {
                sub_181136( iParam1, iParam8 );
                return 0;
            }
            if ((IS_AUTO_SAVE_IN_PROGRESS()) || (g_U9914._fU0))
            {
                sub_183750( iParam1 );
                return 0;
            }
            if (sub_183843())
            {
                sub_181136( iParam1, iParam8 );
                return 0;
            }
            if (sub_184492())
            {
                sub_181136( iParam1, iParam8 );
                return 0;
            }
            iVar20 = uParam9;
            if (NOT (iVar20 == 77))
            {
                if (NOT g_U15654[iVar20])
                {
                    if (bParam10)
                    {
                        sub_181136( iParam1, iParam8 );
                        return 0;
                    }
                    sub_54494( iParam1 );
                    return 1;
                }
            }
            if (NOT bVar17)
            {
                if (NOT (sub_106785( iParam0, 30000 )))
                {
                    sub_181136( iParam1, iParam8 );
                    return 0;
                }
            }
            if (sub_95739( iParam0 ))
            {
                sub_181136( iParam1, iParam8 );
                return 0;
            }
            if (sub_184889( iParam1 ))
            {
                sub_181136( iParam1, iParam8 );
                return 0;
            }
            sub_55249( "Making Call\n" );
            bVar21 = false;
            if (bVar17)
            {
                bVar21 = sub_185018( uParam2, uParam3 );
            }
            else
            {
                bVar21 = sub_89522( iParam0, uParam2, uParam3, 10000, 0 );
            }
            if (bVar21)
            {
                sub_55249( "Call Setup Success\n" );
                g_U15436[iParam1]._fU8 = 1;
                g_U26757 = iVar14 + 2000;
                if (iParam8 <= 60000)
                {
                    CLEAR_ADDITIONAL_TEXT( 0, 1 );
                    CLEAR_ADDITIONAL_TEXT( 6, 1 );
                }
                if (bVar17)
                {
                    g_U15436[iParam1]._fU20 = 1;
                }
            }
            else
            {
                sub_55249( "Call Setup Failure - try again later\n" );
                sub_181136( iParam1, iParam8 );
            }
        }
        return 0;
    }
    if (sub_80901())
    {
        g_U26757 = iVar14 + 2000;
        if (g_U10978)
        {
            sub_185356();
        }
        return 0;
    }
    sub_52331();
    switch (sub_81198())
    {
        case 1:
        case 2:
        sub_54494( iParam1 );
        g_U15436[iParam1]._fU12 = -1;
        return 0;
    }
    if (sub_92915())
    {
        sub_54494( iParam1 );
        g_U15436[iParam1]._fU12 = -2;
        return 0;
    }
    if ((g_U9893._fU12) || (g_U10978))
    {
        sub_54494( iParam1 );
        g_U15436[iParam1]._fU12 = -2;
        return 0;
    }
    sub_54494( iParam1 );
    sub_87630( iParam0, 0 );
    g_U10981[iParam1]._fU28 = 1;
    g_U26757 = iVar14 + 2000;
    return 1;
}

void sub_182171(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = uParam0;
    iVar4 = iVar3 / 32;
    iVar5 = iVar3 mod 32;
    if (iVar4 > 2)
    {
        return 0;
    }
    if (iVar5 > 32)
    {
        return 0;
    }
    return IS_BIT_SET( g_U10975[iVar4], iVar5 );
}

int sub_182581(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 0;
    iVar5 = 0;
    GET_TIME_OF_DAY( ref iVar4, ref iVar5 );
    if (iParam1 == iParam0)
    {
        return 1;
    }
    if (iParam1 > iParam0)
    {
        if (iVar4 < iParam0)
        {
            return 0;
        }
        if (iVar4 >= iParam1)
        {
            return 0;
        }
        return 1;
    }
    if (iVar4 >= iParam0)
    {
        return 1;
    }
    if (iVar4 < iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_182758(unknown uParam0, unknown uParam1)
{
    if ((COMPARE_STRING( uParam0, "F7_TRIG" )) AND (COMPARE_STRING( uParam1, "F7AUD" )))
    {
        return 1;
    }
    return 0;
}

int sub_182876(int iParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    boolean bVar6;

    iVar3 = 26;
    if (iParam0 == iVar3)
    {
        return 0;
    }
    if (IS_CHAR_DEAD( CurrentPlayerChar() ))
    {
        return 1;
    }
    bVar4 = IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() );
    iVar5 = 0;
    if (bVar4)
    {
        iVar5 = sub_182949( iParam0 );
    }
    else
    {
        iVar5 = sub_183014( iParam0 );
    }
    bVar6 = sub_183076( iParam0, iVar5 );
    if (bVar6)
    {
        return 0;
    }
    return 1;
}

void sub_182949(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar6 = uParam0;
    switch (uVar6)
    {
        case 10: return 95;
    }
    return CEIL( 300.00000000 );
}

void sub_183014(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar6 = uParam0;
    switch (uVar6)
    {
        case 10: return 95;
    }
    return CEIL( 150.00000000 );
}

boolean sub_183076(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int Result;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    int iVar12;

    if (IS_CHAR_DEAD( CurrentPlayerChar() ))
    {
        return 0;
    }
    GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar4._fU0, ref uVar4._fU4, ref uVar4._fU8 );
    Result = 0;
    if (sub_183136( uVar4, uParam0, ref Result ))
    {
        return Result;
    }
    uVar8 = {g_U15731[uParam0]};
    fVar11 = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar4._fU0, uVar4._fU4, uVar4._fU8, uVar8._fU0, uVar8._fU4, uVar8._fU8, ref fVar11 );
    iVar12 = CEIL( fVar11 );
    return iVar12 > iParam1;
}

int sub_183136(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    uVar10 = uParam3;
    (uParam4^) = 1;
    switch (uVar10)
    {
        case 24:
        if ((sub_43344( uParam0, g_U15731[15] )) < 100.00000000)
        {
            PRINTSTRING( "-----------------------> Beside Dwayne\n" );
            (uParam4^) = 0;
            return 1;
        }
        if ((sub_43344( uParam0, g_U15731[16] )) < 100.00000000)
        {
            PRINTSTRING( "-----------------------> Beside Playboy\n" );
            (uParam4^) = 0;
            return 1;
        }
        (uParam4^) = 1;
        return 1;
    }
    return 0;
}

int sub_183498(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    if (g_U10981[uParam0]._fU116 == 0)
    {
        return 0;
    }
    iVar3 = 0;
    I = 0;
    for ( I = 0; I < 23; I++ )
    {
        if (IS_BIT_SET( g_U10981[uParam0]._fU116, I ))
        {
            iVar5 = I;
            iVar3 = sub_74221( iVar5 );
            if (sub_95672( iVar3 ))
            {
                if (g_U10981[iVar3]._fU144._fU84)
                {
                    return 1;
                }
            }
            if (NOT (g_U13391[iVar3]._fU80._fU0 == 0))
            {
                return 1;
            }
            if (g_U10981[uParam0]._fU116 == I)
            {
                return 0;
            }
        }
    }
    return 0;
}

void sub_183750(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = g_U15436[uParam0]._fU12 - iVar3;
    if (iVar4 > 18000)
    {
        return;
    }
    iVar5 = 18000;
    g_U15436[uParam0]._fU12 += 5000;
    return;
}

int sub_183843()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BADMAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "BRIAN_3" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CHERISE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "CLARENCE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "EDDIE1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "EDDIE2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "GRACIE" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "HOSSAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ILYENA" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "IVAN_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_1_MISSION" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "JEFF_3" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MARNIE1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MARNIE2" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "MEL" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PATHOS1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "PATHOS1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "SARA_1" )) > 0)
    {
        return 1;
    }
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "SARA2" )) > 0)
    {
        return 1;
    }
    return 0;
}

int sub_184492()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    bVar2 = IS_CHAR_DEAD( CurrentPlayerChar() );
    if (NOT bVar2)
    {
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    }
    fVar9 = 0.00000000;
    if (NOT bVar2)
    {
        if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambCabaret" )) > 0)
        {
            uVar6 = {g_U10324[11]._fU0};
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar3._fU0, uVar3._fU4, uVar3._fU8, uVar6._fU0, uVar6._fU4, uVar6._fU8, ref fVar9 );
            if (fVar9 < 200.00000000)
            {
                PRINTSTRING( "Check_For_Other_Specific_Restrictions: ambCabaret script exists\n" );
                return 1;
            }
        }
    }
    return 0;
}

int sub_184889(int iParam0)
{
    if (iParam0 == 28)
    {
        return 0;
    }
    if (g_U64542._fU4 == nil)
    {
        return 0;
    }
    if (NOT (iParam0 == g_U64542._fU8))
    {
        return 0;
    }
    return 1;
}

void sub_185018(unknown uParam0, unknown uParam1)
{
    if ((COMPARE_STRING( uParam0, "MF6_JWORK2" )) AND (COMPARE_STRING( uParam1, "MF13AUD" )))
    {
        return sub_75373( "MF6_JWORK", "MF13AUD", 1 );
    }
    return sub_75373( uParam0, uParam1, 1 );
}

void sub_185356()
{
    if ((g_U8394 == 4) || (g_U555 == 1))
    {
        if (g_U91._fU60 != -1)
        {
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U91._fU376 = 0;
        g_U91._fU100 = 1;
    }
    return;
}

void sub_188709(unknown uParam0, int iParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    g_U15807[uParam0]._fU0 = 1;
    g_U15807[uParam0]._fU4 = iVar5 + iParam1;
    g_U15807[uParam0]._fU8 = uParam2;
    g_U15807[uParam0]._fU12 = 0;
    g_U15807[uParam0]._fU16 = 0;
    return;
}

int sub_188854(unknown uParam0)
{
    if (NOT g_U15807[uParam0]._fU0)
    {
        return 1;
    }
    if (g_U15807[uParam0]._fU12)
    {
        return 0;
    }
    g_U15807[uParam0]._fU0 = 0;
    g_U15807[uParam0]._fU16 = 1;
    return 1;
}

void sub_188994(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    sub_189011( uParam0, uVar4 );
    return;
}

void sub_189011(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

void sub_189139(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    sub_189156( uParam0, uVar4 );
    return;
}

void sub_189156(unknown uParam0, int iParam1)
{
    if (NOT (g_U15874[uParam0]._fU0 == iParam1))
    {
        return;
    }
    g_U15874[uParam0]._fU0 = 21;
    g_U15874[uParam0]._fU4 = 0;
    return;
}

void sub_189276()
{
    return IS_THREAD_ACTIVE( g_U812 );
}

void sub_189596(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    return sub_189618( uParam0, uParam1, uParam2, uParam3, iVar6 );
}

int sub_189618(int iParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player_Wait: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_82616( uParam1, uParam2 );
        return 1;
    }
    if (sub_189746( iParam0 ))
    {
        return 1;
    }
    if (NOT g_U63988._fU12[iParam0]._fU0)
    {
        Text_Player( iParam0, uParam1, uParam2, uParam3, uParam4 );
        g_U63988._fU12[iParam0]._fU8 = 1;
    }
    return 0;
}

void sub_189746(unknown uParam0)
{
    return g_U63988._fU12[uParam0]._fU4;
}

void sub_190101(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    g_U13391[uParam0]._fU160._fU108._fU4 = uParam1;
    g_U13391[uParam0]._fU160._fU108._fU8 = uParam2;
    g_U13391[uParam0]._fU160._fU108._fU12 = uParam3;
    g_U13391[uParam0]._fU160._fU108._fU16 = uParam4;
    if (g_U13391[uParam0]._fU160._fU108._fU20 > 0)
    {
        return;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    g_U13391[uParam0]._fU160._fU108._fU20 = iVar7 + g_U13391[uParam0]._fU160._fU108._fU16;
    return;
}

void sub_190360(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam0;
    switch (uVar4)
    {
        case 15:
        sub_190416( uParam1 );
        break;
        case 16:
        sub_190482( uParam1 );
        break;
        case 20:
        sub_190548( uParam1 );
        break;
        case 0:
        sub_190614( uParam1 );
        break;
        default: SCRIPT_ASSERT( "Flow_Perform_Activate_Ambient_Email: Unknown Ambient Email Sender" );
    }
    return;
}

void sub_190416(unknown uParam0)
{
    if (g_U1615[uParam0] == 0)
    {
        sub_91953( ref g_U1622[uParam0], 24, 0, 0 );
        g_U1615[uParam0] = 1;
    }
    return;
}

void sub_190482(unknown uParam0)
{
    if (g_U1681[uParam0] == 0)
    {
        sub_91953( ref g_U1685[uParam0], 4, 0, 0 );
        g_U1681[uParam0] = 1;
    }
    return;
}

void sub_190548(unknown uParam0)
{
    if (g_U1816[uParam0] == 0)
    {
        sub_91953( ref g_U1821[uParam0], 4, 0, 0 );
        g_U1816[uParam0] = 1;
    }
    return;
}

void sub_190614(unknown uParam0)
{
    if (g_U1916[uParam0] == 0)
    {
        sub_91953( ref g_U1924[uParam0], 4, 0, 0 );
        g_U1916[uParam0] = 1;
    }
    return;
}

void sub_190812(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U22274[uParam0]._fU8)
    {
        g_U15946[uParam0]._fU8[0]._fU0[uParam1] = 1;
        return;
    }
    uVar4 = uParam1;
    SET_BIT( ref g_U22274[uParam0]._fU168, uVar4 );
    return;
}

void sub_190990(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
    int iVar7;

    if (g_U22274[uParam0]._fU0)
    {
        return;
    }
    g_U26439++;
    g_U22274[uParam0]._fU0 = 1;
    g_U22274[uParam0]._fU72 = (iParam1 * 60) * 1000;
    g_U22274[uParam0]._fU76 = (iParam2 * 60) * 1000;
    g_U22274[uParam0]._fU112 = iParam3;
    g_U22274[uParam0]._fU116 = iParam3 + iParam4;
    if (g_U22274[uParam0]._fU120 == -1)
    {
        iVar7 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( g_U22274[uParam0]._fU112, g_U22274[uParam0]._fU116, ref iVar7 );
        g_U22274[uParam0]._fU120 = iVar7;
    }
    sub_191215( uParam0 );
    sub_191280( uParam0 );
    return;
}

void sub_191215(unknown uParam0)
{
    g_U22274[uParam0]._fU92 = 0;
    g_U22274[uParam0]._fU96 = 0;
    sub_51190( uParam0 );
    sub_108884( uParam0 );
    return;
}

void sub_191280(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 1 );
        return;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 2 );
        return;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 3 );
        return;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 4 );
        return;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 5 );
        return;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    return;
}

void sub_191557(unknown uParam0)
{
    if (NOT g_U22274[uParam0]._fU0)
    {
        return;
    }
    g_U22274[uParam0]._fU0 = 0;
    g_U26439--;
    return;
}

void sub_191672(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = iParam1 - 0;
    g_U22274[uParam0]._fU268[iVar4]._fU0 = 1;
    return;
}

void sub_191805(unknown uParam0, unknown uParam1, int iParam2, int iParam3, unknown uParam4)
{
    int iVar7;

    sub_967( uParam0 );
    g_U10981[uParam0]._fU144._fU0 = 1;
    g_U10981[uParam0]._fU144._fU20 = 0;
    g_U10981[uParam0]._fU144._fU132 = uParam1;
    g_U10981[uParam0]._fU144._fU136 = iParam2;
    g_U10981[uParam0]._fU144._fU140 = iParam2 + iParam3;
    g_U10981[uParam0]._fU144._fU4 = uParam4;
    if (g_U10981[uParam0]._fU144._fU144 == -1)
    {
        iVar7 = 0;
        GENERATE_RANDOM_INT_IN_RANGE( g_U10981[uParam0]._fU144._fU136, g_U10981[uParam0]._fU144._fU140, ref iVar7 );
        g_U10981[uParam0]._fU144._fU144 = iVar7;
    }
    return;
}

void sub_192099(unknown uParam0)
{
    g_U10981[uParam0]._fU144._fU0 = 1;
    return;
}

void sub_192179(unknown uParam0)
{
    g_U10981[uParam0]._fU144._fU0 = 0;
    g_U10981[uParam0]._fU144._fU20 = 0;
    return;
}

void sub_192287(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = uParam1;
    SET_BIT( ref g_U10981[uParam0]._fU116, uVar4 );
    return;
}

void sub_192391(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int Result;

    Result = 1;
    if (IS_BIT_SET( uParam1, 1 ))
    {
        if (NOT (sub_192420( uParam0 )))
        {
            Result = 0;
        }
    }
    if (IS_BIT_SET( uParam1, 3 ))
    {
        if (NOT (sub_192611( uParam0 )))
        {
            Result = 0;
        }
    }
    if (IS_BIT_SET( uParam1, 2 ))
    {
        if (NOT (sub_192743( uParam0 )))
        {
            Result = 0;
        }
        if (NOT (sub_192846( uParam0 )))
        {
            Result = 0;
        }
    }
    uVar4 = sub_74605( uParam0 );
    if (IS_BIT_SET( uParam1, 4 ))
    {
        if (NOT (sub_193058( uVar4 )))
        {
            Result = 0;
        }
    }
    if (IS_BIT_SET( uParam1, 5 ))
    {
        if (NOT (sub_193112( uVar4 )))
        {
            Result = 0;
        }
    }
    g_U10981[uParam0]._fU112 = uParam1;
    return Result;
}

int sub_192420(unknown uParam0)
{
    unknown uVar3;

    if (g_U13391[uParam0]._fU160._fU96)
    {
        return 0;
    }
    if (g_U13391[uParam0]._fU160._fU4)
    {
        return 1;
    }
    uVar3 = sub_74605( uParam0 );
    if (g_U13391[uParam0]._fU160._fU8)
    {
        g_U15946[uVar3]._fU8[0]._fU0[3] = 0;
    }
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    g_U13391[uParam0]._fU160._fU4 = 1;
    return 1;
}

int sub_192611(unknown uParam0)
{
    if (g_U10981[uParam0]._fU144._fU32)
    {
        return 1;
    }
    if (sub_95672( uParam0 ))
    {
        if (g_U10981[uParam0]._fU144._fU84)
        {
            return 0;
        }
    }
    g_U10981[uParam0]._fU144._fU32 = 1;
    return 1;
}

int sub_192743(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_74605( uParam0 );
    if (g_U22274[uVar3]._fU4)
    {
        return 1;
    }
    if (NOT (g_U13391[uParam0]._fU80._fU0 == 0))
    {
        return 0;
    }
    g_U22274[uVar3]._fU4 = 1;
    return 1;
}

int sub_192846(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_74605( uParam0 );
    if (NOT g_U22274[uVar3]._fU500._fU0)
    {
        return 1;
    }
    if (NOT g_U22274[uVar3]._fU500._fU4)
    {
        return 1;
    }
    if (g_U22274[uVar3]._fU500._fU24)
    {
        return 0;
    }
    if (g_U22274[uVar3]._fU500._fU16)
    {
        return 0;
    }
    if (g_U22274[uVar3]._fU500._fU20)
    {
        return 0;
    }
    g_U22274[uVar3]._fU500._fU12 = 1;
    return 0;
}

int sub_193058(unknown uParam0)
{
    g_U26555[uParam0] = 1;
    return 1;
}

int sub_193112(unknown uParam0)
{
    g_U26613[uParam0] = 1;
    return 1;
}

void sub_193232(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    uVar4 = g_U10981[uParam0]._fU112;
    if (IS_BIT_SET( uVar4, 1 ))
    {
        sub_193275( uParam0 );
    }
    if (IS_BIT_SET( uVar4, 3 ))
    {
        sub_193428( uParam0 );
    }
    if (IS_BIT_SET( uVar4, 2 ))
    {
        sub_193482( uParam0 );
    }
    uVar3 = sub_74605( uParam0 );
    if (IS_BIT_SET( uVar4, 4 ))
    {
        sub_193548( uVar3 );
    }
    if (IS_BIT_SET( uVar4, 5 ))
    {
        sub_193592( uVar3 );
    }
    g_U10981[uParam0]._fU112 = 0;
    g_U10981[uParam0]._fU28 = 1;
    return;
}

void sub_193275(unknown uParam0)
{
    unknown uVar3;

    g_U13391[uParam0]._fU160._fU4 = 0;
    g_U13391[uParam0]._fU160._fU108._fU0 = 1;
    if (NOT g_U13391[uParam0]._fU160._fU0)
    {
        return;
    }
    uVar3 = sub_74605( uParam0 );
    if (g_U13391[uParam0]._fU160._fU8)
    {
        g_U15946[uVar3]._fU8[0]._fU0[3] = 1;
    }
    return;
}

void sub_193428(unknown uParam0)
{
    g_U10981[uParam0]._fU144._fU32 = 0;
    return;
}

void sub_193482(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_74605( uParam0 );
    g_U22274[uVar3]._fU4 = 0;
    return;
}

void sub_193548(unknown uParam0)
{
    g_U26555[uParam0] = 0;
    return;
}

void sub_193592(unknown uParam0)
{
    g_U26613[uParam0] = 0;
    return;
}

int sub_193699(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    SET_BIT( ref iVar3, 1 );
    SET_BIT( ref iVar3, 2 );
    SET_BIT( ref iVar3, 3 );
    SET_BIT( ref iVar3, 4 );
    SET_BIT( ref iVar3, 5 );
    if (NOT (sub_192391( uParam0, iVar3 )))
    {
        return 0;
    }
    g_U10981[uParam0]._fU108 = 1;
    return 1;
}

void sub_193849(unknown uParam0)
{
    sub_193232( uParam0 );
    g_U10981[uParam0]._fU108 = 0;
    return;
}

void sub_193942(unknown uParam0, unknown uParam1)
{
    g_U22274[uParam0]._fU500._fU0 = 1;
    g_U22274[uParam0]._fU500._fU164 = uParam1;
    return;
}

void sub_194040()
{
    return;
}

void sub_194104(unknown uParam0)
{
    g_U9932[uParam0]._fU0 = 1;
    SET_INT_STAT( 363, uParam0 );
    sub_194139( uParam0 );
    sub_194189();
    sub_41765();
    ToggleRoads();
    sub_194245();
    return;
}

void sub_194139(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = uParam0;
    if (iVar3 == 3)
    {
        AWARD_ACHIEVEMENT( 27 );
    }
    return;
}

void sub_194189()
{
    int iVar2;

    if (g_U0)
    {
        return;
    }
    iVar2 = GET_INT_STAT( 363 );
    iVar2++;
    return;
}

void sub_194245()
{
    unknown uVar2;
    unknown uVar3;

    uVar2 = GET_INT_STAT( 363 );
    uVar3 = uVar2;
    switch (uVar3)
    {
        case 0:
        case 1:
        if (NOT g_U15654[19])
        {
            ProtectedSet(g_U9939, 2);
        }
        else
        {
            ProtectedSet(g_U9939, 4);
        }
        break;
        case 2:
        ProtectedSet(g_U9939, 5);
        break;
        case 3:
        ProtectedSet(g_U9939, 6);
        break;
        default: SCRIPT_ASSERT( "Update_Max_Wanted_Level_For_Game: Unknown Map Area" );
    }
    return;
}

void sub_194488(unknown uParam0)
{
    return g_U9932[uParam0]._fU0;
}

void sub_194571(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_194586( uVar3 );
    return;
}

void sub_194586(unknown uParam0)
{
    g_U10133._fU0[uParam0] = 1;
    sub_41765();
    return;
}

void sub_194677(unknown uParam0)
{
    g_U9943[uParam0]._fU0 = 1;
    if (NOT (DOES_BLIP_EXIST( g_U9943[uParam0]._fU32 )))
    {
        ADD_BLIP_FOR_CONTACT( g_U9943[uParam0]._fU8._fU0, g_U9943[uParam0]._fU8._fU4, g_U9943[uParam0]._fU8._fU8, ref g_U9943[uParam0]._fU32 );
        CHANGE_BLIP_DISPLAY( g_U9943[uParam0]._fU32, 2 );
        CHANGE_BLIP_SPRITE( g_U9943[uParam0]._fU32, g_U9943[uParam0]._fU36 );
        CHANGE_BLIP_PRIORITY( g_U9943[uParam0]._fU32, 0 );
        ENABLE_SAVE_HOUSE( g_U9943[uParam0]._fU4, 1 );
        if (NOT g_U32896._fU4)
        {
            CHANGE_BLIP_DISPLAY( g_U9943[uParam0]._fU32, 0 );
        }
        sub_56195();
        sub_55249( "**********************************\n" );
        sub_55249( "*                                *\n" );
        sub_55249( "*       ADD SAVE HOUSE BLIP      *\n" );
        sub_55249( "*                                *\n" );
        sub_55249( "**********************************\n" );
        sub_56195();
    }
    sub_41765();
    return;
}

void sub_195201(unknown uParam0)
{
    g_U9943[uParam0]._fU0 = 0;
    ENABLE_SAVE_HOUSE( g_U9943[uParam0]._fU4, 0 );
    if (DOES_BLIP_EXIST( g_U9943[uParam0]._fU32 ))
    {
        REMOVE_BLIP( g_U9943[uParam0]._fU32 );
        sub_56195();
        sub_55249( "**********************************\n" );
        sub_55249( "*                                *\n" );
        sub_55249( "*     REMOVE SAVE HOUSE BLIP     *\n" );
        sub_55249( "*                                *\n" );
        sub_55249( "**********************************\n" );
        sub_56195();
    }
    sub_41765();
    return;
}

void sub_195575(unknown uParam0)
{
    g_U9788[uParam0]._fU0 = 1;
    return;
}

void sub_195657(unknown uParam0)
{
    g_U9788[uParam0]._fU0 = 0;
    return;
}

void sub_195738(unknown uParam0)
{
    g_U9731[uParam0]._fU0 = 1;
    return;
}

void sub_195821(unknown uParam0)
{
    g_U9731[uParam0]._fU0 = 0;
    return;
}

void sub_195887()
{
    g_U2226 = 0;
    g_U2232 = 1;
    return;
}

void sub_195949()
{
    g_U64663 = 1;
    return;
}

void sub_196012()
{
    g_U19 = 1;
    return;
}

void sub_196071()
{
    SET_NO_RESPRAYS( 0 );
    return;
}

void sub_196141(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_196156( uVar3 );
    return;
}

void sub_196156(int iParam0)
{
    if (iParam0 < 20)
    {
        SWITCH_CAR_GENERATOR( g_U9029[iParam0], 101 );
        g_U8708[iParam0]._fU60 = 0;
    }
    return;
}

void sub_196280(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_196295( uVar3 );
    return;
}

void sub_196295(unknown uParam0)
{
    char[16] cVar3;
    char[16] cVar7;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar3, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar7, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar3, "PD_DMITIRI", 16 );
        StrCopy( ref cVar7, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar3, "PD_JACOB", 16 );
        StrCopy( ref cVar7, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar3, "PD_TEAFORE", 16 );
        StrCopy( ref cVar7, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar3, "PD_MANNY", 16 );
        StrCopy( ref cVar7, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar3, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar7, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar3, "PD_BRUCIE", 16 );
        StrCopy( ref cVar7, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar3, "PD_RAY", 16 );
        StrCopy( ref cVar7, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar3, "PD_PHIL", 16 );
        StrCopy( ref cVar7, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar3, "PD_VLAD", 16 );
        StrCopy( ref cVar7, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar3, "PD_TREY", 16 );
        StrCopy( ref cVar7, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar3, "PD_DWAYNE", 16 );
        StrCopy( ref cVar7, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar3, "PD_PACKIE", 16 );
        StrCopy( ref cVar7, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar3, "PD_GERRY", 16 );
        StrCopy( ref cVar7, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar3, "PD_ED", 16 );
        StrCopy( ref cVar7, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar3, "PD_CLARENCE", 16 );
        StrCopy( ref cVar7, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar3, "PD_MARNIE", 16 );
        StrCopy( ref cVar7, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar3, "PD_IVAN", 16 );
        StrCopy( ref cVar7, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar3, "PD_GRACIE", 16 );
        StrCopy( ref cVar7, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar3, "PD_TOM", 16 );
        StrCopy( ref cVar7, "PD_RIVAS", 16 );
        break;
    }
    sub_197170( ref cVar3, ref cVar7 );
    return;
}

void sub_197170(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_14557( uParam0, uParam1 );
    if (iVar4 != -1)
    {
        g_U2273[iVar4]._fU180 = 1;
        g_U2273[iVar4]._fU212 = 1;
    }
    return;
}

void sub_197311(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_197327( uVar3, 1 );
    return;
}

void sub_197327(unknown uParam0, unknown uParam1)
{
    char[16] cVar4;
    char[16] cVar8;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar4, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar8, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar4, "PD_DMITIRI", 16 );
        StrCopy( ref cVar8, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar4, "PD_JACOB", 16 );
        StrCopy( ref cVar8, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar4, "PD_TEAFORE", 16 );
        StrCopy( ref cVar8, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar4, "PD_MANNY", 16 );
        StrCopy( ref cVar8, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar8, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "PD_BRUCIE", 16 );
        StrCopy( ref cVar8, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "PD_RAY", 16 );
        StrCopy( ref cVar8, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "PD_PHIL", 16 );
        StrCopy( ref cVar8, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "PD_VLAD", 16 );
        StrCopy( ref cVar8, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "PD_TREY", 16 );
        StrCopy( ref cVar8, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "PD_DWAYNE", 16 );
        StrCopy( ref cVar8, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "PD_PACKIE", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "PD_GERRY", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "PD_ED", 16 );
        StrCopy( ref cVar8, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "PD_CLARENCE", 16 );
        StrCopy( ref cVar8, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "PD_MARNIE", 16 );
        StrCopy( ref cVar8, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "PD_IVAN", 16 );
        StrCopy( ref cVar8, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "PD_GRACIE", 16 );
        StrCopy( ref cVar8, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "PD_TOM", 16 );
        StrCopy( ref cVar8, "PD_RIVAS", 16 );
        break;
    }
    sub_198225( ref cVar4, ref cVar8, uParam1 );
    return;
}

void sub_198225(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = sub_14557( uParam0, uParam1 );
    if (iVar5 != -1)
    {
        g_U2273[iVar5]._fU192 = uParam2;
    }
    return;
}

void sub_198352(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_198368( uVar3, 1 );
    return;
}

void sub_198368(unknown uParam0, unknown uParam1)
{
    char[16] cVar4;
    char[16] cVar8;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar4, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar8, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar4, "PD_DMITIRI", 16 );
        StrCopy( ref cVar8, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar4, "PD_JACOB", 16 );
        StrCopy( ref cVar8, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar4, "PD_TEAFORE", 16 );
        StrCopy( ref cVar8, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar4, "PD_MANNY", 16 );
        StrCopy( ref cVar8, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar8, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "PD_BRUCIE", 16 );
        StrCopy( ref cVar8, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "PD_RAY", 16 );
        StrCopy( ref cVar8, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "PD_PHIL", 16 );
        StrCopy( ref cVar8, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "PD_VLAD", 16 );
        StrCopy( ref cVar8, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "PD_TREY", 16 );
        StrCopy( ref cVar8, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "PD_DWAYNE", 16 );
        StrCopy( ref cVar8, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "PD_PACKIE", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "PD_GERRY", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "PD_ED", 16 );
        StrCopy( ref cVar8, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "PD_CLARENCE", 16 );
        StrCopy( ref cVar8, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "PD_MARNIE", 16 );
        StrCopy( ref cVar8, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "PD_IVAN", 16 );
        StrCopy( ref cVar8, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "PD_GRACIE", 16 );
        StrCopy( ref cVar8, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "PD_TOM", 16 );
        StrCopy( ref cVar8, "PD_RIVAS", 16 );
        break;
    }
    sub_14544( ref cVar4, ref cVar8, uParam1 );
    return;
}

void sub_199341(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_199357( uVar3, 1 );
    sub_198368( uVar3, 0 );
    sub_197327( uVar3, 0 );
    return;
}

void sub_199357(unknown uParam0, boolean bParam1)
{
    char[16] cVar4;
    char[16] cVar8;

    switch (uParam0)
    {
        case 0:
        StrCopy( ref cVar4, "PD_MIKHAIL", 16 );
        StrCopy( ref cVar8, "PD_FAUSTIN", 16 );
        break;
        case 1:
        StrCopy( ref cVar4, "PD_DMITIRI", 16 );
        StrCopy( ref cVar8, "PD_RASCALOV", 16 );
        break;
        case 2:
        StrCopy( ref cVar4, "PD_JACOB", 16 );
        StrCopy( ref cVar8, "PD_HUGHES", 16 );
        break;
        case 3:
        StrCopy( ref cVar4, "PD_TEAFORE", 16 );
        StrCopy( ref cVar8, "PD_DAVIES", 16 );
        break;
        case 4:
        StrCopy( ref cVar4, "PD_MANNY", 16 );
        StrCopy( ref cVar8, "PD_ESCUELLA", 16 );
        break;
        case 5:
        StrCopy( ref cVar4, "PD_ELIZABETA", 16 );
        StrCopy( ref cVar8, "PD_TORRES", 16 );
        break;
        case 6:
        StrCopy( ref cVar4, "PD_BRUCIE", 16 );
        StrCopy( ref cVar8, "PD_CHALMERS", 16 );
        break;
        case 7:
        StrCopy( ref cVar4, "PD_RAY", 16 );
        StrCopy( ref cVar8, "PD_BOCCINO", 16 );
        break;
        case 8:
        StrCopy( ref cVar4, "PD_PHIL", 16 );
        StrCopy( ref cVar8, "PD_BELL", 16 );
        break;
        case 9:
        StrCopy( ref cVar4, "PD_VLAD", 16 );
        StrCopy( ref cVar8, "PD_GLEBOV", 16 );
        break;
        case 10:
        StrCopy( ref cVar4, "PD_TREY", 16 );
        StrCopy( ref cVar8, "PD_STEWART", 16 );
        break;
        case 11:
        StrCopy( ref cVar4, "PD_DWAYNE", 16 );
        StrCopy( ref cVar8, "PD_FORGE", 16 );
        break;
        case 12:
        StrCopy( ref cVar4, "PD_PACKIE", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 13:
        StrCopy( ref cVar4, "PD_GERRY", 16 );
        StrCopy( ref cVar8, "PD_MCREARY", 16 );
        break;
        case 14:
        StrCopy( ref cVar4, "PD_ED", 16 );
        StrCopy( ref cVar8, "PD_LOW", 16 );
        break;
        case 15:
        StrCopy( ref cVar4, "PD_CLARENCE", 16 );
        StrCopy( ref cVar8, "PD_LITTLE", 16 );
        break;
        case 16:
        StrCopy( ref cVar4, "PD_MARNIE", 16 );
        StrCopy( ref cVar8, "PD_ALLEN", 16 );
        break;
        case 17:
        StrCopy( ref cVar4, "PD_IVAN", 16 );
        StrCopy( ref cVar8, "PD_Bytchkov", 16 );
        break;
        case 18:
        StrCopy( ref cVar4, "PD_GRACIE", 16 );
        StrCopy( ref cVar8, "PD_ANCELLOTI", 16 );
        break;
        case 19:
        StrCopy( ref cVar4, "PD_TOM", 16 );
        StrCopy( ref cVar8, "PD_RIVAS", 16 );
        break;
    }
    if (bParam1)
    {
        sub_200261( ref cVar4, ref cVar8, 0 );
    }
    else
    {
        sub_200261( ref cVar4, ref cVar8, 1 );
    }
    return;
}

void sub_200261(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    if ((DOES_TEXT_LABEL_EXIST( uParam1 )) AND (DOES_TEXT_LABEL_EXIST( uParam0 )))
    {
        for ( I = 0; I <= 99; I++ )
        {
            if ((COMPARE_STRING( ref g_U2273[I]._fU0, uParam1 )) AND (COMPARE_STRING( ref g_U2273[I]._fU16, uParam0 )))
            {
                g_U2273[I]._fU208 = uParam2;
            }
        }
    }
    return;
}

void sub_200488(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_14794( uVar3, 3 );
    return;
}

void sub_200566(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_14794( uVar3, 1 );
    return;
}

void sub_200645(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_14794( uVar3, 2 );
    return;
}

void sub_200721(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_14794( uVar3, 0 );
    return;
}

void sub_200799(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_200815( uVar3, 1 );
    return;
}

void sub_200815(int iParam0, unknown uParam1)
{
    if (iParam0 <= 2)
    {
        g_U1426[iParam0] = uParam1;
    }
    return;
}

void sub_200907(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    sub_200922( uVar3 );
    return;
}

void sub_200922(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_201009( iParam0 ))
    {
        sub_201475( iParam0 );
    }
    return;
}

int sub_201009(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 21 )) || (IS_BIT_SET( g_U1452[uParam0], 20 )))
    {
        return 0;
    }
    sub_91953( ref uVar3, 1, 0, 0 );
    sub_201082( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_75108( "\n ----------------------------------------------------------------" );
    sub_201368( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_75108( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_201082(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_201368(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_201475(unknown uParam0)
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
        sub_201686( 20, 6, 16383, 16383, ref uVar4 );
        sub_202362( ref uVar4, 7 );
        sub_202393( ref uVar4, 0 );
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
        sub_201686( 20, 7, 9, 16383, ref uVar4 );
        sub_202362( ref uVar4, 7 );
        sub_202393( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_201686(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_201710( uParam0, 0, iParam4 + 0 );
    sub_201710( uParam1, 1, iParam4 + 0 );
    sub_201710( uParam2, 2, iParam4 + 0 );
    sub_201710( uParam3, 3, iParam4 + 0 );
    sub_201710( 0, 4, iParam4 + 0 );
    sub_201710( 1, 5, iParam4 + 0 );
    sub_201710( 65535, 6, iParam4 + 0 );
    sub_201710( 0, 12, iParam4 + 0 );
    sub_201710( 0, 11, iParam4 + 0 );
    sub_201710( 0, 14, iParam4 + 0 );
    sub_201710( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_201710( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_201710( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_201710(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_202362(int iParam0, unknown uParam1)
{
    sub_201710( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_202393(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_202433())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_203120( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_202919( iVar5 );
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

int sub_202433()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_202467( 5, g_U968[I] )) == 7)
        {
            sub_202919( I );
            return 1;
        }
    }
    return 0;
}

int sub_202467(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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

void sub_202919(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_202992( 39 );
    return;
}

void sub_202992(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_203120(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_203181( uParam0, g_U968[Result] ))
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

int sub_203181(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[1] == uParam10._fU0[1]) AND (uParam0._fU0[0] == uParam10._fU0[0]))
    {
        return 1;
    }
    return 0;
}

void sub_203584(unknown uParam0)
{
    UNLOCK_MISSION_NEWS_STORY( uParam0 );
    return;
}

void sub_203649()
{
    SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( CurrentPlayerId(), 1 );
    return;
}

void sub_203720()
{
    SET_PLAYER_CAN_BE_HASSLED_BY_GANGS( CurrentPlayerId(), 0 );
    return;
}

void sub_203813(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = uParam0;
    uVar5 = uParam1;
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 1, uVar4, uVar5 );
    return;
}

void sub_203924(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = uParam0;
    uVar5 = uParam1;
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 2, uVar4, uVar5 );
    return;
}

void sub_204035(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = uParam0;
    uVar5 = uParam1;
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 3, uVar4, uVar5 );
    return;
}

void sub_204143(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    uVar4 = uParam0;
    uVar5 = uParam1;
    ALLOW_GANG_RELATIONSHIPS_TO_BE_CHANGED_BY_NEXT_COMMAND( 1 );
    SET_RELATIONSHIP( 5, uVar4, uVar5 );
    return;
}

void sub_204245(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U10981[uParam0]._fU40[uParam1] = uParam2;
    g_U10981[uParam0]._fU56[uParam1] = uParam2;
    return;
}

void sub_204366(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    uVar5 = sub_74221( uParam0 );
    sub_81579( uVar5, uParam1, uParam2 );
    return;
}

void sub_204441(unknown uParam0, unknown uParam1)
{
    g_U10981[uParam0]._fU72 = uParam1;
    return;
}

int sub_204571(unknown uParam0, int iParam1, int iParam2)
{
    if (iParam1 > 3)
    {
        if (ProtectedGet(g_U26747[iParam1]) >= iParam2)
        {
            return 1;
        }
    }
    else if (g_U10981[uParam0]._fU40[iParam1] >= iParam2)
    {
        return 1;
    }
    if (IS_KEYBOARD_KEY_PRESSED( 25 ))
    {
        sub_55249( "*************** DEBUG: STAT SET TO REQUIRED TARGET ******************\n" );
        if (iParam1 > 3)
        {
            ProtectedSet(g_U26747[iParam1], iParam2);
        }
        else
        {
            g_U10981[uParam0]._fU40[iParam1] = iParam2;
        }
        return 1;
    }
    return 0;
}

void sub_205129(int iParam0)
{
    if (g_U34284 >= iParam0)
    {
        return;
    }
    g_U34284 = iParam0;
    return;
}

int sub_205222(int iParam0)
{
    if (g_U34284 >= iParam0)
    {
        return 1;
    }
    return 0;
}

int sub_205474(unknown uParam0)
{
    if (NOT (g_U10981[uParam0]._fU16 == -1))
    {
        return 1;
    }
    return 0;
}

int sub_205599(unknown uParam0)
{
    if (g_U10981[uParam0]._fU16 == -1)
    {
        return 0;
    }
    if (g_U10981[uParam0]._fU8)
    {
        return 0;
    }
    return 1;
}

void sub_205715(unknown uParam0)
{
    if (g_U15605[uParam0])
    {
        sub_55041( "Flow_Set_Sync: Synchronisation flag already set" );
        return;
    }
    sub_55249( "Sending Synchronisation signal\n" );
    g_U15605[uParam0] = 1;
    return;
}

int sub_205900(unknown uParam0)
{
    if (NOT g_U15605[uParam0])
    {
        return 0;
    }
    sub_55249( "Received Synchronisation signal\n" );
    g_U15605[uParam0] = 0;
    return 1;
}

int sub_206040(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_206063( ref g_U10981[uParam0]._fU124 )))
    {
        if (g_U0)
        {
            sub_91953( ref g_U10981[uParam0]._fU124, 0, 2, 0 );
        }
        else
        {
            sub_91953( ref g_U10981[uParam0]._fU124, 0, uParam1, 0 );
        }
        return 0;
    }
    if (NOT (sub_89959( g_U10981[uParam0]._fU124 )))
    {
        return 0;
    }
    sub_770( ref g_U10981[uParam0]._fU124 );
    return 1;
}

int sub_206063(int iParam0)
{
    if (((ref iParam0->_fU8->_fU4) == -1) AND (((ref iParam0->_fU8->_fU0) == -1) AND (((ref iParam0->_fU0->_fU0) == -1) AND ((ref iParam0->_fU0->_fU4) == -1))))
    {
        return 0;
    }
    return 1;
}

void sub_206312(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (g_U10978)
    {
        return 0;
    }
    uVar4._fU0 = uParam0;
    uVar4._fU4 = 0;
    uVar6._fU0 = uParam1;
    uVar6._fU4 = 0;
    return sub_124990( uVar4, uVar6 );
}

int sub_206430(unknown uParam0, int iParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    if (g_U10981[uParam0]._fU120 == 0)
    {
        g_U10981[uParam0]._fU120 = iVar4 + iParam1;
        return 0;
    }
    if (iVar4 < g_U10981[uParam0]._fU120)
    {
        return 0;
    }
    g_U10981[uParam0]._fU120 = 0;
    return 1;
}

void sub_206661(unknown uParam0)
{
    sub_206672( uParam0 );
    return;
}

void sub_206672(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_206683( uParam0 );
    if (NOT g_U34048[uVar3]._fU0)
    {
        return;
    }
    g_U34048[uVar3]._fU4 = 1;
    g_U34048[uVar3]._fU28 = 1;
    sub_93604( ref g_U34048[uVar3]._fU8 );
    g_U34048[uVar3]._fU24 = 1;
    return;
}

int sub_206683(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_206694( uParam0 )))
    {
        sub_23915( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 38;
}

int sub_206694(unknown uParam0)
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

int sub_206994(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        return 1;
    }
    if (HAS_CHAR_GOT_WEAPON( CurrentPlayerChar(), uParam1 ))
    {
        return 1;
    }
    REQUEST_MODEL( uParam0 );
    if (NOT (HAS_MODEL_LOADED( uParam0 )))
    {
        REQUEST_MODEL( uParam0 );
        return 0;
    }
    GIVE_WEAPON_TO_CHAR( CurrentPlayerChar(), uParam1, uParam2, 0 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( uParam0 );
    return 1;
}

void sub_207176(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 3;
    if (iParam1 >= iVar4)
    {
        sub_23915( "Flow_Change_Clothes: Clothes set out of range" );
    }
    iVar5 = iParam1;
    g_U64464[uParam0] = iVar5;
    return;
}

void sub_207327(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    g_U15654[uVar3] = 1;
    return;
}

void sub_207457(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    g_U15654[uVar3] = 0;
    return;
}

void sub_207527(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    return g_U15654[uVar3];
}

void sub_207746(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (g_U10981[uParam0]._fU20 == -1))
    {
        sub_55041( "Flow_Gosub_Label: Nested GOSUBs are not allowed." );
    }
    g_U10981[uParam0]._fU20 = g_U10981[uParam0]._fU16;
    sub_176229( uParam0, uParam1, uParam2 );
    return;
}

void sub_207907(unknown uParam0)
{
    if (g_U10981[uParam0]._fU20 == -1)
    {
        sub_55041( "Flow_Return_From_Gosub: There is no Sequence to return to." );
    }
    g_U10981[uParam0]._fU16 = g_U10981[uParam0]._fU20;
    g_U10981[uParam0]._fU20 = -1;
    return;
}

int sub_208081()
{
    if ((# -NULL-0xc27bfa()) || (# -NULL-0xc27c84()))
    {
        return 0;
    }
    return 1;
}

void sub_208196(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_208209( uParam0, -1 );
}

int sub_208209(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    if (g_U10978)
    {
        return 0;
    }
    if (IS_HELP_MESSAGE_BEING_DISPLAYED())
    {
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U812 ))
    {
        return 0;
    }
    if (sub_95498())
    {
        return 0;
    }
    if ((IS_AUTO_SAVE_IN_PROGRESS()) || ((g_U9914._fU4) || (g_U9914._fU0)))
    {
        return 0;
    }
    if (iParam4 == -1)
    {
        PRINT_HELP( ref uParam0 );
        return 1;
    }
    iVar7 = 0;
    GET_GAME_TIMER( ref iVar7 );
    PRINT_HELP_FOREVER( ref uParam0 );
    g_U15931._fU0 = {uParam0};
    g_U15931._fU16 = iVar7 + iParam4;
    return 1;
}

void sub_208569(unknown uParam0)
{
    unknown uVar3;

    g_U10981[uParam0]._fU4 = 1;
    uVar3 = sub_74605( uParam0 );
    sub_191557( uVar3 );
    sub_55249( "****** STRAND DEACTIVATING *******\n" );
    sub_208653( uParam0 );
    g_U15946[uVar3]._fU132._fU0 = 0;
    return;
}

void sub_208653(unknown uParam0)
{
    boolean bVar3;
    unknown uVar4;

    if (NOT g_U10981[uParam0]._fU8)
    {
        return;
    }
    if (NOT g_U10981[uParam0]._fU4)
    {
        return;
    }
    bVar3 = false;
    uVar4 = sub_74605( uParam0 );
    if ((g_U13391[uParam0]._fU80._fU0 == 1) || (g_U13391[uParam0]._fU80._fU0 == 0))
    {
        sub_47373( uParam0 );
        g_U22274[uVar4]._fU0 = 0;
    }
    else
    {
        bVar3 = true;
    }
    g_U10981[uParam0]._fU144._fU0 = 0;
    if (g_U13391[uParam0]._fU160._fU0)
    {
        if (g_U13391[uParam0]._fU160._fU80)
        {
            if (NOT g_U13391[uParam0]._fU160._fU96)
            {
                sub_208882( uParam0 );
            }
            else
            {
                bVar3 = true;
            }
        }
        else
        {
            bVar3 = true;
        }
    }
    if ((g_U13391[uParam0]._fU0._fU0 == 1) || (g_U13391[uParam0]._fU0._fU0 == 0))
    {
        sub_54189( uParam0 );
    }
    else
    {
        bVar3 = true;
    }
    if (bVar3)
    {
        return;
    }
    g_U10981[uParam0]._fU8 = 0;
    return;
}

void sub_208882(unknown uParam0)
{
    unknown uVar3;

    if (NOT g_U13391[uParam0]._fU160._fU0)
    {
        return;
    }
    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        g_U13391[uParam0]._fU160._fU0 = 0;
        return;
    }
    uVar3 = sub_74605( uParam0 );
    DESTROY_THREAD( g_U13391[uParam0]._fU160._fU104 );
    g_U13391[uParam0]._fU160._fU108._fU0 = 0;
    sub_2172( uParam0 );
    if (g_U13391[uParam0]._fU160._fU8)
    {
        g_U15946[uVar3]._fU8[0]._fU0[3] = 0;
    }
    return;
}

int sub_209788(unknown uParam0, int iParam1)
{
    int iVar4;

    if (g_U15874[uParam0]._fU0 == 21)
    {
        return 0;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    if (g_U15874[uParam0]._fU4 < iVar4)
    {
        g_U15874[uParam0]._fU0 = 21;
        g_U15874[uParam0]._fU4 = 0;
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        return 0;
    }
    if (iParam1 < 23)
    {
        if (g_U22274[iParam1]._fU16)
        {
            return 0;
        }
    }
    if (g_U33837)
    {
        return 0;
    }
    if ((sub_85695()) || ((sub_85448()) || ((NOT IS_SCREEN_FADED_IN()) || ((IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )) || (IS_THREAD_ACTIVE( g_U812 ))))))
    {
        return 0;
    }
    if (g_U9893._fU12)
    {
        return 0;
    }
    if (sub_95672( uParam0 ))
    {
        if (g_U10981[uParam0]._fU144._fU84)
        {
            return 0;
        }
    }
    if (sub_210074( uParam0 ))
    {
        return 0;
    }
    if (NOT g_U15946[iParam1]._fU132._fU0)
    {
        return 0;
    }
    if (g_U26555[iParam1])
    {
        return 0;
    }
    if (sub_95739( iParam1 ))
    {
        return 0;
    }
    if (NOT (sub_210460( uParam0 )))
    {
        return 0;
    }
    g_U15874[uParam0]._fU0 = 21;
    g_U15874[uParam0]._fU4 = 0;
    sub_52331();
    sub_87630( iParam1, 1 );
    g_U10981[uParam0]._fU28 = 1;
    return 1;
}

int sub_210074(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int iVar10;
    unknown uVar11;
    int iVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    float fVar16;

    if (IS_CHAR_DEAD( CurrentPlayerChar() ))
    {
        return 1;
    }
    iVar3 = -1;
    iVar4 = 0;
    iVar5 = 0;
    bVar6 = false;
    if (g_U13391[uParam0]._fU0._fU0 == 1)
    {
        iVar3 = g_U13391[uParam0]._fU0._fU4;
        iVar4 = sub_48070( uParam0, iVar3 );
        iVar5 = g_U26758[iVar4]._fU16;
        iVar10 = 49;
        if (iVar5 < iVar10)
        {
            uVar7 = {g_U9387[iVar5]._fU0};
            bVar6 = true;
        }
    }
    if (NOT bVar6)
    {
        uVar11 = sub_74605( uParam0 );
        iVar12 = g_U22274[uVar11]._fU180;
        if (NOT (iVar12 == 21))
        {
            uVar7 = {g_U9788[iVar12]._fU4};
            bVar6 = true;
        }
    }
    if (NOT bVar6)
    {
        return 0;
    }
    GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar13._fU0, ref uVar13._fU4, ref uVar13._fU8 );
    fVar16 = 0.00000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uVar13._fU0, uVar13._fU4, uVar13._fU8, uVar7._fU0, uVar7._fU4, uVar7._fU8, ref fVar16 );
    if (fVar16 < 200.00000000)
    {
        return 1;
    }
    return 0;
}

int sub_210460(unknown uParam0)
{
    unknown uVar3;

    uVar3 = g_U15874[uParam0]._fU0;
    switch (uVar3)
    {
        case 0: return sub_75373( "MF3_R2TEXT", "MF5AUD", 1 );
        case 1: return sub_75373( "MF3_ROM25", "MF4AUD", 1 );
        case 2: return sub_75373( "MF3_ROM26", "MF4AUD", 1 );
        case 3: return sub_75373( "MF3_ROM27", "MF4AUD", 1 );
        case 4: return sub_75373( "MF3_ROM28", "MF4AUD", 1 );
        case 5: return sub_75373( "MF3_ROM29", "MF4AUD", 1 );
        case 6: return sub_75373( "MF3_ROM30", "MF4AUD", 1 );
        case 7: return sub_75373( "MF3_ROM31", "MF5AUD", 1 );
        case 8: return sub_75373( "MF3_ROM32", "MF5AUD", 1 );
        case 9: return sub_75373( "MF3_ROM33", "MF5AUD", 1 );
        case 10: return sub_75373( "MF3_ROM34", "MF5AUD", 1 );
        case 11: return sub_75373( "MF3_ROM35", "MF5AUD", 1 );
        case 12: return sub_75373( "MF3_ROM36", "MF5AUD", 1 );
        case 13: return sub_75373( "MF3_ROM37", "MF5AUD", 1 );
        case 14: return sub_75373( "MF3_ROM38", "MF5AUD", 1 );
        case 15: return sub_75373( "MF3_ROM39", "MF5AUD", 1 );
        case 16: return sub_75373( "MF3_ROM40", "MF5AUD", 1 );
        case 17: return sub_75373( "MF3_ROM41", "MF5AUD", 1 );
        case 18: return sub_75373( "MF3_ROM42", "MF5AUD", 1 );
        case 19: return sub_75373( "MF3_ROM43", "MF5AUD", 1 );
    }
    SCRIPT_ASSERT( "Make_Chat_Phonecall: Chat Phonecall ID doesn't have details set up" );
    return 0;
}

void sub_211463()
{
    int iVar2;
    int iVar3;

    iVar2 = 1;
    iVar3 = 1;
    if (g_U10981[iVar2]._fU0)
    {
        sub_211496();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U41566 );
    return;
}

void sub_211496()
{
    sub_54157( 1, 1 );
    sub_211512();
    PRINTSTRING( "Contact_2 Activated\n" );
    return;
}

void sub_211512()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 36;
    PRINTSTRING( "START: CONTACT_2_SETUP_MISSION_FLOW\n" );
    sub_57123( ref g_U41566, ref iVar2, iVar3, 5 );
    sub_57123( ref g_U41566, ref iVar2, iVar3, 6 );
    sub_57123( ref g_U41566, ref iVar2, iVar3, 7 );
    sub_57123( ref g_U41566, ref iVar2, iVar3, 8 );
    sub_57123( ref g_U41566, ref iVar2, iVar3, 9 );
    sub_57123( ref g_U41566, ref iVar2, iVar3, 10 );
    sub_57123( ref g_U41566, ref iVar2, iVar3, 11 );
    sub_60638( ref g_U41566, ref iVar2, iVar3, 14 );
    sub_56088( ref g_U41566, ref iVar2, iVar3, 1 );
    sub_211748( ref g_U41566, ref iVar2, iVar3, "MF4_CVLA3", "MF9AUD", 22000, 60000 );
    sub_56987( ref g_U41566, ref iVar2, iVar3, "MF9AUD", "MF4_CVLA5" );
    sub_57617( ref g_U41566, ref iVar2, iVar3 );
    sub_56669( ref g_U41566, ref iVar2, iVar3, 0 );
    sub_61650( ref g_U41566, ref iVar2, iVar3, 1, 1 );
    sub_64943( ref g_U41566, ref iVar2, iVar3, 1, 30000, 60000 );
    sub_212031( ref g_U41566, ref iVar2, iVar3 );
    sub_63526( ref g_U41566, ref iVar2, iVar3, 2, 1, 1, 10000 );
    sub_56669( ref g_U41566, ref iVar2, iVar3, 1 );
    sub_56088( ref g_U41566, ref iVar2, iVar3, 2 );
    sub_56669( ref g_U41566, ref iVar2, iVar3, 2 );
    sub_58389( ref g_U41566, ref iVar2, iVar3, 2 );
    sub_57123( ref g_U41566, ref iVar2, iVar3, 4 );
    sub_58755( ref g_U41566, ref iVar2, iVar3, 22, "CAR_NO_GOOD" );
    sub_64943( ref g_U41566, ref iVar2, iVar3, 2, 120000, 180000 );
    sub_59456( ref g_U41566, ref iVar2, iVar3, "START_V4" );
    sub_59063( ref g_U41566, ref iVar2, iVar3, "CAR_NO_GOOD" );
    sub_64943( ref g_U41566, ref iVar2, iVar3, 3, 120000, 180000 );
    sub_59063( ref g_U41566, ref iVar2, iVar3, "START_V4" );
    sub_56669( ref g_U41566, ref iVar2, iVar3, 3 );
    sub_65731( ref g_U41566, ref iVar2, iVar3, 2 );
    sub_65731( ref g_U41566, ref iVar2, iVar3, 3 );
    sub_61395( ref g_U41566, ref iVar2, iVar3, 0 );
    sub_71572( ref g_U41566, ref iVar2, iVar3 );
    sub_71946( ref g_U41566, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_2_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_211748(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 29;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    sub_55197( uParam1 );
    sub_55249( "SET: PHONE_PLAYER_REPEAT: [" );
    sub_55249( uParam4 );
    sub_55249( "] " );
    sub_55249( uParam3 );
    sub_56195();
    return;
}

void sub_212031(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 83;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_HAIL_TAXI\n" );
    return;
}

void sub_212644()
{
    int iVar2;
    int iVar3;

    iVar2 = 2;
    iVar3 = 2;
    if (g_U10981[iVar2]._fU0)
    {
        sub_212677();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U42287 );
    return;
}

void sub_212677()
{
    sub_54157( 2, 2 );
    sub_212693();
    PRINTSTRING( "Girl_3 Activated\n" );
    return;
}

void sub_212693()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 16;
    PRINTSTRING( "START: GIRL_3_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U42287, ref iVar2, iVar3, 1 );
    sub_56987( ref g_U42287, ref iVar2, iVar3, "GCM1AUD", "GCM_ANSPH" );
    sub_57617( ref g_U42287, ref iVar2, iVar3 );
    sub_57123( ref g_U42287, ref iVar2, iVar3, 2 );
    sub_58642( ref g_U42287, ref iVar2, iVar3, 0 );
    sub_55409( ref g_U42287, ref iVar2, iVar3, 0 );
    sub_58020( ref g_U42287, ref iVar2, iVar3, 3 );
    sub_56669( ref g_U42287, ref iVar2, iVar3, 1 );
    sub_61395( ref g_U42287, ref iVar2, iVar3, 1 );
    sub_55409( ref g_U42287, ref iVar2, iVar3, 4 );
    sub_55409( ref g_U42287, ref iVar2, iVar3, 38 );
    sub_61395( ref g_U42287, ref iVar2, iVar3, 18 );
    sub_71572( ref g_U42287, ref iVar2, iVar3 );
    sub_71946( ref g_U42287, ref iVar2, iVar3 );
    PRINTSTRING( "END: GIRL_3_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_213169()
{
    int iVar2;
    int iVar3;

    iVar2 = 3;
    iVar3 = 3;
    if (g_U10981[iVar2]._fU0)
    {
        sub_213202();
        g_U10981[iVar2]._fU0 = 0;
        sub_53293( iVar2, 1 );
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    sub_53293( iVar2, 0 );
    sub_73872( iVar2 );
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_90924( iVar3, iVar2 );
    if (sub_107946( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_108339( iVar3, iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U42608 );
    return;
}

void sub_213202()
{
    sub_54157( 3, 3 );
    sub_213218();
    sub_214089();
    sub_214307();
    sub_214377();
    PRINTSTRING( "Friend_4 Activated\n" );
    return;
}

void sub_213218()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 80;
    PRINTSTRING( "START: FRIEND_4_SETUP_MISSION_FLOW\n" );
    sub_56987( ref g_U42608, ref iVar2, iVar3, "FCJPCAU", "FCJ_ANSPH" );
    sub_57617( ref g_U42608, ref iVar2, iVar3 );
    sub_56334( ref g_U42608, ref iVar2, iVar3, 5 );
    sub_56442( ref g_U42608, ref iVar2, iVar3, 3 );
    sub_56334( ref g_U42608, ref iVar2, iVar3, 6 );
    sub_62061( ref g_U42608, ref iVar2, iVar3, "MF6_JWORK2", "MF13AUD", 50000, 60000 );
    sub_57476( ref g_U42608, ref iVar2, iVar3, 120000 );
    sub_56669( ref g_U42608, ref iVar2, iVar3, 0 );
    sub_58117( ref g_U42608, ref iVar2, iVar3, 0, 2 );
    sub_55409( ref g_U42608, ref iVar2, iVar3, 64 );
    sub_65501( ref g_U42608, ref iVar2, iVar3, 2 );
    sub_55409( ref g_U42608, ref iVar2, iVar3, 31 );
    sub_60638( ref g_U42608, ref iVar2, iVar3, 15 );
    sub_56669( ref g_U42608, ref iVar2, iVar3, 1 );
    sub_61395( ref g_U42608, ref iVar2, iVar3, 19 );
    sub_213575( ref g_U42608, ref iVar2, iVar3, 11, 0 );
    sub_60745( ref g_U42608, ref iVar2, iVar3, 0 );
    sub_60857( ref g_U42608, ref iVar2, iVar3, 75, 16, 4, 2 );
    sub_61009( ref g_U42608, ref iVar2, iVar3, 6 );
    sub_61009( ref g_U42608, ref iVar2, iVar3, 7 );
    sub_61009( ref g_U42608, ref iVar2, iVar3, 8 );
    sub_61009( ref g_U42608, ref iVar2, iVar3, 10 );
    sub_61009( ref g_U42608, ref iVar2, iVar3, 11 );
    sub_61009( ref g_U42608, ref iVar2, iVar3, 12 );
    sub_61009( ref g_U42608, ref iVar2, iVar3, 13 );
    sub_61224( ref g_U42608, ref iVar2, iVar3, 105, 29, 20, 4 );
    sub_57706( ref g_U42608, ref iVar2, iVar3, 38 );
    sub_62061( ref g_U42608, ref iVar2, iVar3, "LJp3_JSETUP", "LJP3AUD", 60000, 60000 );
    sub_62254( ref g_U42608, ref iVar2, iVar3, 2, 0, 10000 );
    sub_62392( ref g_U42608, ref iVar2, iVar3, 43, 3, 13, 420 );
    sub_58955( ref g_U42608, ref iVar2, iVar3, "JCBPROC" );
    sub_58020( ref g_U42608, ref iVar2, iVar3, 52 );
    sub_66708( ref g_U42608, ref iVar2, iVar3, 3, 1, 6 );
    sub_71572( ref g_U42608, ref iVar2, iVar3 );
    sub_71946( ref g_U42608, ref iVar2, iVar3 );
    PRINTSTRING( "END: FRIEND_4_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_213575(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 101;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_55197( uParam1 );
    sub_55249( "SET: GANG_RELATIONSHIP_LIKE\n" );
    return;
}

void sub_214089()
{
    int iVar2;

    iVar2 = 3;
    sub_72084( iVar2, 6, 3 );
    sub_72084( iVar2, 7, 4 );
    sub_72084( iVar2, 8, 5 );
    sub_72084( iVar2, 10, 6 );
    sub_72084( iVar2, 11, 7 );
    sub_72084( iVar2, 12, 8 );
    sub_72084( iVar2, 13, 9 );
    sub_214170( iVar2, 4, 0, 13, 0 );
    sub_72439( iVar2, 49, 54, 24, 4, 10, 30 );
    sub_72650( iVar2, 14, 0, 4, 1 );
    return;
}

void sub_214170(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    g_U22274[uParam0]._fU188._fU0._fU0 = uParam1;
    g_U22274[uParam0]._fU188._fU0._fU4 = uParam2;
    g_U22274[uParam0]._fU188._fU8._fU0 = uParam3;
    g_U22274[uParam0]._fU188._fU8._fU4 = uParam4;
    return;
}

void sub_214307()
{
    int iVar2;
    int iVar3;

    iVar2 = 3;
    iVar3 = 0;
    sub_72820( iVar2, iVar3, 10, "jacob_gun_car" );
    sub_72904( iVar2, iVar3 );
    sub_72958( iVar2, iVar3, 0, 6, 0 );
    return;
}

void sub_214377()
{
    int iVar2;

    iVar2 = 3;
    sub_73200( iVar2, 32, 4, 28, 4, 4 );
    sub_73544( iVar2, "FCJAAUD", "FCJ2AU" );
    sub_73644( iVar2, "FAljA_1", "FAljB_1", "FAljH", "JACOB", 1 );
    return;
}

void sub_214688()
{
    int iVar2;
    int iVar3;

    iVar2 = 4;
    iVar3 = 4;
    if (g_U10981[iVar2]._fU0)
    {
        sub_214721();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U44209 );
    return;
}

void sub_214721()
{
    sub_54157( 4, 4 );
    sub_214737();
    PRINTSTRING( "Contact_5 Activated\n" );
    return;
}

void sub_214737()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 60;
    PRINTSTRING( "START: CONTACT_5_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U44209, ref iVar2, iVar3, 2 );
    sub_68131( ref g_U44209, ref iVar2, iVar3, 25, "MF10AUD", "MF5_ANSPH" );
    sub_56669( ref g_U44209, ref iVar2, iVar3, 0 );
    sub_55409( ref g_U44209, ref iVar2, iVar3, 25 );
    sub_58250( ref g_U44209, ref iVar2, iVar3, 0, 1 );
    sub_214908( ref g_U44209, ref iVar2, iVar3, 25 );
    sub_56987( ref g_U44209, ref iVar2, iVar3, "MF13AUD", "MF6_ANSPH" );
    sub_57617( ref g_U44209, ref iVar2, iVar3 );
    sub_55409( ref g_U44209, ref iVar2, iVar3, 20 );
    sub_69156( ref g_U44209, ref iVar2, iVar3, 0, "MF3_ROM15", "MF3AUD", 22000, 60000 );
    sub_56669( ref g_U44209, ref iVar2, iVar3, 1 );
    sub_65195( ref g_U44209, ref iVar2, iVar3, 0 );
    sub_213575( ref g_U44209, ref iVar2, iVar3, 8, 0 );
    sub_213575( ref g_U44209, ref iVar2, iVar3, 9, 0 );
    sub_55409( ref g_U44209, ref iVar2, iVar3, 18 );
    sub_55409( ref g_U44209, ref iVar2, iVar3, 66 );
    sub_55409( ref g_U44209, ref iVar2, iVar3, 60 );
    sub_58389( ref g_U44209, ref iVar2, iVar3, 19 );
    sub_215250( ref g_U44209, ref iVar2, iVar3 );
    sub_58755( ref g_U44209, ref iVar2, iVar3, 31, "C5_SKIPTXT" );
    sub_215368( ref g_U44209, ref iVar2, iVar3, 6, 3, 11, 6000 );
    sub_59063( ref g_U44209, ref iVar2, iVar3, "C5_SKIPTXT" );
    sub_61395( ref g_U44209, ref iVar2, iVar3, 15 );
    sub_56669( ref g_U44209, ref iVar2, iVar3, 2 );
    sub_61395( ref g_U44209, ref iVar2, iVar3, 2 );
    sub_56669( ref g_U44209, ref iVar2, iVar3, 3 );
    sub_60638( ref g_U44209, ref iVar2, iVar3, 16 );
    sub_56669( ref g_U44209, ref iVar2, iVar3, 4 );
    sub_60638( ref g_U44209, ref iVar2, iVar3, 17 );
    sub_69156( ref g_U44209, ref iVar2, iVar3, 0, "MF3_ROM4", "MF3AUD", 27000, 60000 );
    sub_61395( ref g_U44209, ref iVar2, iVar3, 24 );
    sub_215368( ref g_U44209, ref iVar2, iVar3, 4, 25, 5, 10000 );
    sub_56669( ref g_U44209, ref iVar2, iVar3, 5 );
    sub_63755( ref g_U44209, ref iVar2, iVar3, 4 );
    sub_55409( ref g_U44209, ref iVar2, iVar3, 26 );
    sub_69964( ref g_U44209, ref iVar2, iVar3, 0 );
    sub_70080( ref g_U44209, ref iVar2, iVar3, 1013 );
    sub_55409( ref g_U44209, ref iVar2, iVar3, 72 );
    sub_56088( ref g_U44209, ref iVar2, iVar3, 3 );
    sub_60638( ref g_U44209, ref iVar2, iVar3, 19 );
    sub_68977( ref g_U44209, ref iVar2, iVar3, 3 );
    sub_60638( ref g_U44209, ref iVar2, iVar3, 18 );
    sub_215883( ref g_U44209, ref iVar2, iVar3, 9, 150 );
    sub_58955( ref g_U44209, ref iVar2, iVar3, "DIMKWIK" );
    sub_59063( ref g_U44209, ref iVar2, iVar3, "C5_MEET" );
    sub_216074( ref g_U44209, ref iVar2, iVar3, 25, "F7_TRIG", "F7AUD", 60000, 18, 6, 10, 60000 );
    sub_60046( ref g_U44209, ref iVar2, iVar3, 6 );
    sub_60159( ref g_U44209, ref iVar2, iVar3, 6, "C5_MEET" );
    sub_56987( ref g_U44209, ref iVar2, iVar3, "MF1AUD", "MF2_MKF1" );
    sub_60417( ref g_U44209, ref iVar2, iVar3, 8, 0 );
    sub_60417( ref g_U44209, ref iVar2, iVar3, 9, 0 );
    sub_61395( ref g_U44209, ref iVar2, iVar3, 2 );
    sub_63526( ref g_U44209, ref iVar2, iVar3, 7, 3, 8, 50000 );
    sub_66708( ref g_U44209, ref iVar2, iVar3, 3, 1, 10 );
    sub_66152( ref g_U44209, ref iVar2, iVar3, 10080 );
    sub_71853( ref g_U44209, ref iVar2, iVar3 );
    sub_71946( ref g_U44209, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_5_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_214908(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 21;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ADD_SILENTLY_TO_PHONEBOOK\n" );
    return;
}

void sub_215250(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 84;
    sub_55197( uParam1 );
    sub_55249( "SET: UNLOCK_GUNSHOP\n" );
    return;
}

void sub_215368(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 53;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: TXTMSG_PLAYER_AMBIENT\n" );
    return;
}

void sub_215883(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 124;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_55197( uParam1 );
    sub_55249( "SET: DISTANCE_WALL\n" );
    return;
}

void sub_216074(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 47;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam7;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam8;
    (uParam0^)[(uParam1^)]._fU4._fU32 = uParam9;
    (uParam0^)[(uParam1^)]._fU4._fU36 = uParam10;
    sub_55197( uParam1 );
    sub_55249( "SET: ONEOFF_PHONE_PLAYER_TIME_VECTOR_REPEAT_QUICK [" );
    sub_55249( uParam5 );
    sub_55249( "] " );
    sub_55249( uParam4 );
    sub_55249( "  (between " );
    sub_56178( uParam7 );
    sub_55249( ".00 and " );
    sub_56178( uParam8 );
    sub_55249( ".00)" );
    sub_56195();
    return;
}

void sub_216795()
{
    int iVar2;
    int iVar3;

    iVar2 = 5;
    iVar3 = 5;
    if (g_U10981[iVar2]._fU0)
    {
        sub_216828();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U45410 );
    return;
}

void sub_216828()
{
    sub_54157( 5, 5 );
    sub_216844();
    PRINTSTRING( "Contact_7 Activated\n" );
    return;
}

void sub_216844()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 20;
    PRINTSTRING( "START: CONTACT_7_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U45410, ref iVar2, iVar3, 3 );
    sub_56669( ref g_U45410, ref iVar2, iVar3, 0 );
    sub_56987( ref g_U45410, ref iVar2, iVar3, "MF6AUD", "MF3_CMAN2" );
    sub_57617( ref g_U45410, ref iVar2, iVar3 );
    sub_57706( ref g_U45410, ref iVar2, iVar3, 49 );
    sub_56669( ref g_U45410, ref iVar2, iVar3, 1 );
    sub_56232( ref g_U45410, ref iVar2, iVar3, 6 );
    sub_60638( ref g_U45410, ref iVar2, iVar3, 20 );
    sub_56088( ref g_U45410, ref iVar2, iVar3, 4 );
    sub_60638( ref g_U45410, ref iVar2, iVar3, 21 );
    sub_56669( ref g_U45410, ref iVar2, iVar3, 2 );
    sub_56232( ref g_U45410, ref iVar2, iVar3, 11 );
    sub_61395( ref g_U45410, ref iVar2, iVar3, 22 );
    sub_71572( ref g_U45410, ref iVar2, iVar3 );
    sub_71946( ref g_U45410, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_7_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_217343()
{
    int iVar2;
    int iVar3;

    iVar2 = 6;
    iVar3 = 6;
    if (g_U10981[iVar2]._fU0)
    {
        sub_217376();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U45811 );
    return;
}

void sub_217376()
{
    sub_54157( 6, 6 );
    sub_217392();
    PRINTSTRING( "Contact_7b Activated\n" );
    return;
}

void sub_217392()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 52;
    PRINTSTRING( "START: CONTACT_7b_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U45811, ref iVar2, iVar3, 3 );
    sub_214908( ref g_U45811, ref iVar2, iVar3, 26 );
    sub_68131( ref g_U45811, ref iVar2, iVar3, 26, "MF2AUD", "MF2_CMALL13" );
    sub_58020( ref g_U45811, ref iVar2, iVar3, 34 );
    sub_69156( ref g_U45811, ref iVar2, iVar3, 26, "MF2_CMALL4", "MF2AUD", 30000, 60000 );
    sub_56669( ref g_U45811, ref iVar2, iVar3, 0 );
    sub_64943( ref g_U45811, ref iVar2, iVar3, 0, 60000, 300000 );
    sub_64943( ref g_U45811, ref iVar2, iVar3, 4, 180000, 300000 );
    sub_64943( ref g_U45811, ref iVar2, iVar3, 6, 240000, 300000 );
    sub_55409( ref g_U45811, ref iVar2, iVar3, 67 );
    sub_55409( ref g_U45811, ref iVar2, iVar3, 70 );
    sub_56987( ref g_U45811, ref iVar2, iVar3, "MF1AUD", "MF2_CELIZ3" );
    sub_57617( ref g_U45811, ref iVar2, iVar3 );
    sub_56088( ref g_U45811, ref iVar2, iVar3, 4 );
    sub_56669( ref g_U45811, ref iVar2, iVar3, 1 );
    sub_55409( ref g_U45811, ref iVar2, iVar3, 65 );
    sub_217817( ref g_U45811, ref iVar2, iVar3, 5 );
    sub_56232( ref g_U45811, ref iVar2, iVar3, 9 );
    sub_61395( ref g_U45811, ref iVar2, iVar3, 20 );
    sub_60638( ref g_U45811, ref iVar2, iVar3, 22 );
    sub_64139( ref g_U45811, ref iVar2, iVar3, 140000 );
    sub_68977( ref g_U45811, ref iVar2, iVar3, 3 );
    sub_62061( ref g_U45811, ref iVar2, iVar3, "MF2_CELZ1", "MF1AUD", 60000, 60000 );
    sub_65731( ref g_U45811, ref iVar2, iVar3, 6 );
    sub_56669( ref g_U45811, ref iVar2, iVar3, 2 );
    sub_65731( ref g_U45811, ref iVar2, iVar3, 4 );
    sub_64815( ref g_U45811, ref iVar2, iVar3, 3 );
    sub_56232( ref g_U45811, ref iVar2, iVar3, 12 );
    sub_59927( ref g_U45811, ref iVar2, iVar3, 38 );
    sub_58020( ref g_U45811, ref iVar2, iVar3, 34 );
    sub_64943( ref g_U45811, ref iVar2, iVar3, 5, 120000, 60000 );
    sub_62714( ref g_U45811, ref iVar2, iVar3, 3, 5 );
    sub_62854( ref g_U45811, ref iVar2, iVar3, 4 );
    sub_62969( ref g_U45811, ref iVar2, iVar3, 12 );
    sub_55638( ref g_U45811, ref iVar2, iVar3, 5 );
    sub_55754( ref g_U45811, ref iVar2, iVar3, 3048 );
    sub_56232( ref g_U45811, ref iVar2, iVar3, 13 );
    sub_61395( ref g_U45811, ref iVar2, iVar3, 3 );
    sub_58117( ref g_U45811, ref iVar2, iVar3, 0, 5 );
    sub_66152( ref g_U45811, ref iVar2, iVar3, 720 );
    sub_56987( ref g_U45811, ref iVar2, iVar3, "MF1AUD", "MF2_CELIZ4" );
    sub_66152( ref g_U45811, ref iVar2, iVar3, 180 );
    sub_58020( ref g_U45811, ref iVar2, iVar3, 34 );
    sub_67226( ref g_U45811, ref iVar2, iVar3, 26, "MF2_CMALL5", "MF2AUD", 60000 );
    sub_56987( ref g_U45811, ref iVar2, iVar3, "MF1AUD", "MF2_CELIZ4" );
    sub_66152( ref g_U45811, ref iVar2, iVar3, 10080 );
    sub_71853( ref g_U45811, ref iVar2, iVar3 );
    sub_71946( ref g_U45811, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_7b_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_217817(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 87;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ACTIVATE_CARGEN\n" );
    return;
}

void sub_218695()
{
    int iVar2;
    int iVar3;

    iVar2 = 7;
    iVar3 = 7;
    if (g_U10981[iVar2]._fU0)
    {
        sub_218728();
        g_U10981[iVar2]._fU0 = 0;
        sub_53293( iVar2, 1 );
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    sub_53293( iVar2, 0 );
    sub_73872( iVar2 );
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_90924( iVar3, iVar2 );
    if (sub_108339( iVar3, iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U46852 );
    return;
}

void sub_218728()
{
    sub_54157( 7, 7 );
    sub_218744();
    sub_220008();
    sub_220103();
    sub_220173();
    PRINTSTRING( "Friend_8 Activated\n" );
    return;
}

void sub_218744()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 5760;
    iVar3 = 14400;
    iVar4 = 0;
    iVar5 = 108;
    sub_55249( "START: FRIEND_8_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U46852, ref iVar4, iVar5, 3 );
    sub_69156( ref g_U46852, ref iVar4, iVar5, 9, "MF3_CPBX10", "MF6AUD", 50000, 60000 );
    sub_56987( ref g_U46852, ref iVar4, iVar5, "MF7AUD", "MF3_DWAF1" );
    sub_57617( ref g_U46852, ref iVar4, iVar5 );
    sub_56088( ref g_U46852, ref iVar4, iVar5, 4 );
    sub_56334( ref g_U46852, ref iVar4, iVar5, 8 );
    sub_56442( ref g_U46852, ref iVar4, iVar5, 4 );
    sub_56334( ref g_U46852, ref iVar4, iVar5, 9 );
    sub_56334( ref g_U46852, ref iVar4, iVar5, 10 );
    sub_56669( ref g_U46852, ref iVar4, iVar5, 0 );
    sub_58755( ref g_U46852, ref iVar4, iVar5, 41, "D1_CHER_ALIVE" );
    sub_70080( ref g_U46852, ref iVar4, iVar5, 1019 );
    sub_59063( ref g_U46852, ref iVar4, iVar5, "D1_CHER_ALIVE" );
    sub_56669( ref g_U46852, ref iVar4, iVar5, 1 );
    sub_66152( ref g_U46852, ref iVar4, iVar5, 60 );
    sub_67226( ref g_U46852, ref iVar4, iVar5, 9, "MF3_CPBX6", "MF6AUD", 60000 );
    sub_56987( ref g_U46852, ref iVar4, iVar5, "MF7AUD", "MF3_DWAF2" );
    sub_58755( ref g_U46852, ref iVar4, iVar5, 41, "F8_AFTER_CALL" );
    sub_211748( ref g_U46852, ref iVar4, iVar5, "MF3_DW4", "MF7AUD", 300000, 60000 );
    sub_59063( ref g_U46852, ref iVar4, iVar5, "F8_AFTER_CALL" );
    sub_61395( ref g_U46852, ref iVar4, iVar5, 25 );
    sub_219334( ref g_U46852, ref iVar4, iVar5, 9 );
    sub_69964( ref g_U46852, ref iVar4, iVar5, 10 );
    sub_58117( ref g_U46852, ref iVar4, iVar5, 0, 7 );
    sub_57476( ref g_U46852, ref iVar4, iVar5, 120000 );
    sub_57123( ref g_U46852, ref iVar4, iVar5, 11 );
    sub_61009( ref g_U46852, ref iVar4, iVar5, 7 );
    sub_61009( ref g_U46852, ref iVar4, iVar5, 8 );
    sub_61009( ref g_U46852, ref iVar4, iVar5, 13 );
    sub_61009( ref g_U46852, ref iVar4, iVar5, 5 );
    sub_61224( ref g_U46852, ref iVar4, iVar5, 110, 30, 9, 4 );
    sub_60745( ref g_U46852, ref iVar4, iVar5, 0 );
    sub_60857( ref g_U46852, ref iVar4, iVar5, 75, 13, 4, 2 );
    sub_64139( ref g_U46852, ref iVar4, iVar5, 50000 );
    sub_56764( ref g_U46852, ref iVar4, iVar5, 4 );
    sub_58955( ref g_U46852, ref iVar4, iVar5, "SH_PX" );
    sub_58755( ref g_U46852, ref iVar4, iVar5, 41, "F8_ADD_CHERISE" );
    sub_59456( ref g_U46852, ref iVar4, iVar5, "F8_AFTER_CHER" );
    sub_59063( ref g_U46852, ref iVar4, iVar5, "F8_ADD_CHERISE" );
    sub_57706( ref g_U46852, ref iVar4, iVar5, 40 );
    sub_57123( ref g_U46852, ref iVar4, iVar5, 10 );
    sub_59063( ref g_U46852, ref iVar4, iVar5, "F8_AFTER_CHER" );
    sub_66152( ref g_U46852, ref iVar4, iVar5, iVar3 );
    sub_66857( ref g_U46852, ref iVar4, iVar5, "MF3_DW3", "MF7AUD", 60000 );
    sub_66152( ref g_U46852, ref iVar4, iVar5, iVar2 );
    sub_56987( ref g_U46852, ref iVar4, iVar5, "MF7AUD", "MF3_DWAF3" );
    sub_71572( ref g_U46852, ref iVar4, iVar5 );
    sub_71946( ref g_U46852, ref iVar4, iVar5 );
    sub_55249( "END: FRIEND_8_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_219334(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 118;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: STRAND_DEACTIVATION_WALL\n" );
    return;
}

void sub_220008()
{
    int iVar2;

    iVar2 = 7;
    sub_72084( iVar2, 7, 2 );
    sub_72084( iVar2, 8, 3 );
    sub_72084( iVar2, 13, 5 );
    sub_72084( iVar2, 5, 6 );
    sub_214170( iVar2, 3, 0, 11, 0 );
    sub_72439( iVar2, 50, 55, 17, 4, 7, 30 );
    sub_72650( iVar2, 11, 0, 6, 1 );
    return;
}

void sub_220103()
{
    int iVar2;
    int iVar3;

    iVar2 = 7;
    iVar3 = 0;
    sub_72820( iVar2, iVar3, 7, "dwayne_backup" );
    sub_72904( iVar2, iVar3 );
    sub_72958( iVar2, iVar3, 0, 6, 0 );
    return;
}

void sub_220173()
{
    int iVar2;

    iVar2 = 7;
    sub_73200( iVar2, 3, 4, 21, 4, 2 );
    sub_73544( iVar2, "FCD2AU", "FCD3AU" );
    sub_73644( iVar2, "FAdwA_1", "FAdwB_1", "FAdwH", "DWAYNE", 1 );
    return;
}

void sub_220465()
{
    int iVar2;
    int iVar3;

    iVar2 = 8;
    iVar3 = 8;
    if (g_U10981[iVar2]._fU0)
    {
        sub_220498();
        g_U10981[iVar2]._fU0 = 0;
        sub_53293( iVar2, 1 );
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    sub_53293( iVar2, 0 );
    sub_73872( iVar2 );
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_90924( iVar3, iVar2 );
    if (sub_107946( iVar3, iVar2 ))
    {
        return;
    }
    if (sub_108339( iVar3, iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U49013 );
    return;
}

void sub_220498()
{
    sub_54157( 8, 8 );
    sub_220514();
    sub_222679();
    sub_222814();
    sub_222882();
    PRINTSTRING( "Friend_9 Activated\n" );
    return;
}

void sub_220514()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    iVar3 = 1;
    iVar4 = 0;
    iVar5 = 132;
    PRINTSTRING( "START: FRIEND_9_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U49013, ref iVar4, iVar5, 3 );
    sub_56987( ref g_U49013, ref iVar4, iVar5, "FCBPCAU", "FCB_ANSPH" );
    sub_57617( ref g_U49013, ref iVar4, iVar5 );
    sub_55409( ref g_U49013, ref iVar4, iVar5, 54 );
    sub_56334( ref g_U49013, ref iVar4, iVar5, 11 );
    sub_56334( ref g_U49013, ref iVar4, iVar5, 12 );
    sub_56442( ref g_U49013, ref iVar4, iVar5, 5 );
    sub_56442( ref g_U49013, ref iVar4, iVar5, 6 );
    sub_60638( ref g_U49013, ref iVar4, iVar5, 24 );
    sub_57476( ref g_U49013, ref iVar4, iVar5, 120000 );
    sub_56554( ref g_U49013, ref iVar4, iVar5, 8, iVar3 );
    sub_56669( ref g_U49013, ref iVar4, iVar5, 0 );
    sub_215368( ref g_U49013, ref iVar4, iVar5, 12, 8, 52, 10000 );
    sub_215368( ref g_U49013, ref iVar4, iVar5, 13, 8, 53, 120000 );
    sub_56554( ref g_U49013, ref iVar4, iVar5, 8, iVar2 );
    sub_56669( ref g_U49013, ref iVar4, iVar5, 1 );
    sub_63755( ref g_U49013, ref iVar4, iVar5, 12 );
    sub_55409( ref g_U49013, ref iVar4, iVar5, 28 );
    sub_60638( ref g_U49013, ref iVar4, iVar5, 23 );
    sub_58755( ref g_U49013, ref iVar4, iVar5, 29, "F9_IGNORE_TXT" );
    sub_63526( ref g_U49013, ref iVar4, iVar5, 11, 8, 22, 15000 );
    sub_59063( ref g_U49013, ref iVar4, iVar5, "F9_IGNORE_TXT" );
    sub_56088( ref g_U49013, ref iVar4, iVar5, 4 );
    sub_61395( ref g_U49013, ref iVar4, iVar5, 4 );
    sub_56554( ref g_U49013, ref iVar4, iVar5, 8, iVar2 );
    sub_57123( ref g_U49013, ref iVar4, iVar5, 16 );
    sub_56669( ref g_U49013, ref iVar4, iVar5, 2 );
    sub_61395( ref g_U49013, ref iVar4, iVar5, 21 );
    sub_61395( ref g_U49013, ref iVar4, iVar5, 5 );
    sub_59456( ref g_U49013, ref iVar4, iVar5, "F9_CLOSET" );
    sub_59063( ref g_U49013, ref iVar4, iVar5, "F9_CLOSET_FAIL" );
    sub_66152( ref g_U49013, ref iVar4, iVar5, 6 );
    sub_59063( ref g_U49013, ref iVar4, iVar5, "F9_CLOSET" );
    sub_221209( ref g_U49013, ref iVar4, iVar5, 3 );
    sub_221331( ref g_U49013, ref iVar4, iVar5, 3, "F9_CLOSET_FAIL" );
    sub_60046( ref g_U49013, ref iVar4, iVar5, 4 );
    sub_69587( ref g_U49013, ref iVar4, iVar5, 4, "F9_CLOSET_FAIL" );
    sub_215368( ref g_U49013, ref iVar4, iVar5, 37, 8, 50, 150000 );
    sub_55409( ref g_U49013, ref iVar4, iVar5, 56 );
    sub_221548( ref g_U49013, ref iVar4, iVar5, 2 );
    sub_56554( ref g_U49013, ref iVar4, iVar5, 8, iVar3 );
    sub_62590( ref g_U49013, ref iVar4, iVar5, 8 );
    sub_56669( ref g_U49013, ref iVar4, iVar5, 5 );
    sub_61009( ref g_U49013, ref iVar4, iVar5, 7 );
    sub_61009( ref g_U49013, ref iVar4, iVar5, 8 );
    sub_61009( ref g_U49013, ref iVar4, iVar5, 10 );
    sub_61009( ref g_U49013, ref iVar4, iVar5, 12 );
    sub_61009( ref g_U49013, ref iVar4, iVar5, 13 );
    sub_61009( ref g_U49013, ref iVar4, iVar5, 5 );
    sub_61224( ref g_U49013, ref iVar4, iVar5, 100, 28, 29, 4 );
    sub_60745( ref g_U49013, ref iVar4, iVar5, 0 );
    sub_60857( ref g_U49013, ref iVar4, iVar5, 75, 33, 4, 2 );
    sub_221872( ref g_U49013, ref iVar4, iVar5, "BRp5_SETUP", "BRp5AU", 500000 );
    sub_62254( ref g_U49013, ref iVar4, iVar5, 6, 0, 10000 );
    sub_62392( ref g_U49013, ref iVar4, iVar5, 46, 8, 20, 360 );
    sub_58955( ref g_U49013, ref iVar4, iVar5, "BRCRACE" );
    sub_222103( ref g_U49013, ref iVar4, iVar5, 2 );
    sub_61009( ref g_U49013, ref iVar4, iVar5, 4 );
    sub_61009( ref g_U49013, ref iVar4, iVar5, 9 );
    sub_58020( ref g_U49013, ref iVar4, iVar5, 36 );
    sub_66857( ref g_U49013, ref iVar4, iVar5, "MF5_CSTEVIE", "MF11AUD", 500000 );
    sub_66152( ref g_U49013, ref iVar4, iVar5, 50 );
    sub_57123( ref g_U49013, ref iVar4, iVar5, 17 );
    sub_58020( ref g_U49013, ref iVar4, iVar5, 52 );
    sub_58755( ref g_U49013, ref iVar4, iVar5, 11, "AFTER_CALL" );
    sub_222395( ref g_U49013, ref iVar4, iVar5, 8, "MF5_CRDIE", "MF11AUD", 600000 );
    sub_59063( ref g_U49013, ref iVar4, iVar5, "AFTER_CALL" );
    sub_71572( ref g_U49013, ref iVar4, iVar5 );
    sub_71946( ref g_U49013, ref iVar4, iVar5 );
    PRINTSTRING( "END: FRIEND_9_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_221209(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 13;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: SETUP_OFF_MISSION_ONLY\n" );
    return;
}

void sub_221331(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 14;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    sub_55197( uParam1 );
    sub_55249( "SET: OFF MISSION SCRIPT FAILGOTO\n" );
    return;
}

void sub_221548(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 96;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ADD_DATE_TO_WEBSITE\n" );
    return;
}

void sub_221872(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 27;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    sub_55197( uParam1 );
    sub_55249( "SET: PHONE_PLAYER QUICK: [" );
    sub_55249( uParam4 );
    sub_55249( "] " );
    sub_55249( uParam3 );
    sub_56195();
    return;
}

void sub_222103(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 75;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: MAP_AREA_WALL\n" );
    return;
}

void sub_222395(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 37;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam6;
    sub_55197( uParam1 );
    sub_55249( "SET: ONEOFF_PHONE_PLAYER_QUICK [" );
    sub_55249( uParam5 );
    sub_55249( "] " );
    sub_55249( uParam4 );
    sub_56195();
    return;
}

void sub_222679()
{
    int iVar2;

    iVar2 = 8;
    sub_72084( iVar2, 4, 7 );
    sub_72084( iVar2, 9, 8 );
    sub_72084( iVar2, 7, 9 );
    sub_72084( iVar2, 8, 10 );
    sub_72084( iVar2, 10, 11 );
    sub_72084( iVar2, 12, 12 );
    sub_72084( iVar2, 13, 13 );
    sub_72084( iVar2, 5, 14 );
    sub_214170( iVar2, 1, 0, 7, 0 );
    sub_72439( iVar2, 51, 56, 37, 4, 17, 40 );
    sub_72650( iVar2, 12, 0, 4, 1 );
    return;
}

void sub_222814()
{
    int iVar2;
    int iVar3;

    iVar2 = 8;
    iVar3 = 0;
    sub_72820( iVar2, iVar3, 15, "brucie_heli" );
    sub_72904( iVar2, iVar3 );
    sub_72958( iVar2, iVar3, 0, 6, 0 );
    return;
}

void sub_222882()
{
    int iVar2;

    iVar2 = 8;
    sub_73200( iVar2, 45, 4, 41, 4, 3 );
    sub_73544( iVar2, "FCB2AU", "FCB3AU" );
    sub_73644( iVar2, "FAbrA_1", "FAbrB_1", "FAbrH", "BRUCIE", 1 );
    return;
}

void sub_223195()
{
    int iVar2;
    int iVar3;

    iVar2 = 9;
    iVar3 = 9;
    if (g_U10981[iVar2]._fU0)
    {
        sub_223228();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U51654 );
    return;
}

void sub_223228()
{
    sub_54157( 9, 9 );
    sub_223244();
    PRINTSTRING( "Contact_10 Activated\n" );
    return;
}

void sub_223244()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 64;
    PRINTSTRING( "START: CONTACT_10_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U51654, ref iVar2, iVar3, 3 );
    sub_56987( ref g_U51654, ref iVar2, iVar3, "MF6AUD", "MF3_CPBX7" );
    sub_57617( ref g_U51654, ref iVar2, iVar3 );
    sub_59927( ref g_U51654, ref iVar2, iVar3, 58 );
    sub_55286( ref g_U51654, ref iVar2, iVar3, 2 );
    sub_221548( ref g_U51654, ref iVar2, iVar3, 1 );
    sub_221548( ref g_U51654, ref iVar2, iVar3, 0 );
    sub_217817( ref g_U51654, ref iVar2, iVar3, 4 );
    sub_65927( ref g_U51654, ref iVar2, iVar3, 0, "MF3_ROM12", "MF3AUD", 10000, 60000 );
    sub_223503( ref g_U51654, ref iVar2, iVar3, 0 );
    sub_63526( ref g_U51654, ref iVar2, iVar3, 14, 9, 4, 30000 );
    sub_57123( ref g_U51654, ref iVar2, iVar3, 4 );
    sub_56088( ref g_U51654, ref iVar2, iVar3, 4 );
    sub_56669( ref g_U51654, ref iVar2, iVar3, 0 );
    sub_55409( ref g_U51654, ref iVar2, iVar3, 68 );
    sub_55409( ref g_U51654, ref iVar2, iVar3, 71 );
    sub_223710( ref g_U51654, ref iVar2, iVar3, 11 );
    sub_223821( ref g_U51654, ref iVar2, iVar3, 1015 );
    sub_56232( ref g_U51654, ref iVar2, iVar3, 7 );
    sub_217817( ref g_U51654, ref iVar2, iVar3, 8 );
    sub_217817( ref g_U51654, ref iVar2, iVar3, 9 );
    sub_217817( ref g_U51654, ref iVar2, iVar3, 10 );
    sub_217817( ref g_U51654, ref iVar2, iVar3, 11 );
    sub_217817( ref g_U51654, ref iVar2, iVar3, 12 );
    sub_217817( ref g_U51654, ref iVar2, iVar3, 13 );
    sub_217817( ref g_U51654, ref iVar2, iVar3, 14 );
    sub_56669( ref g_U51654, ref iVar2, iVar3, 1 );
    sub_224057( ref g_U51654, ref iVar2, iVar3 );
    sub_55409( ref g_U51654, ref iVar2, iVar3, 44 );
    sub_61395( ref g_U51654, ref iVar2, iVar3, 29 );
    sub_61395( ref g_U51654, ref iVar2, iVar3, 6 );
    sub_61395( ref g_U51654, ref iVar2, iVar3, 34 );
    sub_60638( ref g_U51654, ref iVar2, iVar3, 25 );
    sub_211748( ref g_U51654, ref iVar2, iVar3, "MF3_CPBX5", "MF6AUD", 450000, 60000 );
    sub_56669( ref g_U51654, ref iVar2, iVar3, 2 );
    sub_222395( ref g_U51654, ref iVar2, iVar3, 7, "PXDF_CALL1", "PXDFAUD", 600000 );
    sub_59063( ref g_U51654, ref iVar2, iVar3, "C10_KILL" );
    sub_59229( ref g_U51654, ref iVar2, iVar3, "MF3_CPBX9", "MF6AUD", 600000, 24, 100000 );
    sub_60046( ref g_U51654, ref iVar2, iVar3, 3 );
    sub_60159( ref g_U51654, ref iVar2, iVar3, 3, "C10_KILL" );
    sub_58755( ref g_U51654, ref iVar2, iVar3, 39, "C10_PBX_LIVES" );
    sub_59456( ref g_U51654, ref iVar2, iVar3, "C10_TERMINATE" );
    sub_59063( ref g_U51654, ref iVar2, iVar3, "C10_PBX_LIVES" );
    sub_69964( ref g_U51654, ref iVar2, iVar3, 11 );
    sub_70080( ref g_U51654, ref iVar2, iVar3, 1015 );
    sub_58117( ref g_U51654, ref iVar2, iVar3, 0, 6 );
    sub_58755( ref g_U51654, ref iVar2, iVar3, 41, "C10_ADD_CHERISE" );
    sub_59456( ref g_U51654, ref iVar2, iVar3, "C10_AFTER_CHER" );
    sub_59063( ref g_U51654, ref iVar2, iVar3, "C10_ADD_CHERISE" );
    sub_57706( ref g_U51654, ref iVar2, iVar3, 40 );
    sub_59063( ref g_U51654, ref iVar2, iVar3, "C10_AFTER_CHER" );
    sub_56987( ref g_U51654, ref iVar2, iVar3, "MF6AUD", "MF3_CPBX8" );
    sub_66152( ref g_U51654, ref iVar2, iVar3, 10080 );
    sub_59063( ref g_U51654, ref iVar2, iVar3, "C10_TERMINATE" );
    sub_71853( ref g_U51654, ref iVar2, iVar3 );
    sub_71946( ref g_U51654, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_10_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_223503(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 65;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: REALLOW_SPECIAL_ACTIONS\n" );
    return;
}

void sub_223710(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 91;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ALIVE_ON_POLICE_COMPUTER\n" );
    return;
}

void sub_223821(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 95;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ALIVE_ON_LCPD_WEB\n" );
    return;
}

void sub_224057(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 17;
    sub_55197( uParam1 );
    sub_55249( "SET: CREATE_CAMERA_CELLPHONE\n" );
    return;
}

void sub_225026()
{
    int iVar2;
    int iVar3;

    iVar2 = 10;
    iVar3 = 10;
    if (g_U10981[iVar2]._fU0)
    {
        sub_225059();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U52935 );
    return;
}

void sub_225059()
{
    sub_54157( 10, 10 );
    sub_225075();
    PRINTSTRING( "Girl_11 Activated\n" );
    return;
}

void sub_225075()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 12;
    sub_55249( "START: GIRL_11_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U52935, ref iVar2, iVar3, 5 );
    sub_56987( ref g_U52935, ref iVar2, iVar3, "APAUD", "PLACEHOLDER" );
    sub_57617( ref g_U52935, ref iVar2, iVar3 );
    sub_71572( ref g_U52935, ref iVar2, iVar3 );
    sub_71946( ref g_U52935, ref iVar2, iVar3 );
    sub_55249( "END: GIRL_11_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_225413()
{
    int iVar2;
    int iVar3;

    iVar2 = 11;
    iVar3 = 11;
    if (g_U10981[iVar2]._fU0)
    {
        sub_225446();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_228000();
    if (sub_107946( iVar3, iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U53176 );
    return;
}

void sub_225446()
{
    sub_54157( 11, 11 );
    sub_225462();
    sub_225544();
    PRINTSTRING( "Contact_12 Activated\n" );
    return;
}

void sub_225462()
{
    g_U64895._fU0 = 0;
    g_U64895._fU4 = 0;
    g_U64895._fU8 = 0;
    g_U64895._fU12 = 0;
    g_U64895._fU32 = 0;
    sub_770( ref g_U64895._fU16 );
    return;
}

void sub_225544()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    iVar2 = 0;
    iVar3 = 104;
    iVar4 = 0;
    iVar5 = 1;
    iVar6 = 0;
    iVar7 = 1;
    PRINTSTRING( "START: CONTACT_12_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U53176, ref iVar2, iVar3, 4 );
    sub_215368( ref g_U53176, ref iVar2, iVar3, 10, 8, 18, 240000 );
    sub_63526( ref g_U53176, ref iVar2, iVar3, 34, 34, 1, 27000 );
    sub_57706( ref g_U53176, ref iVar2, iVar3, 46 );
    sub_68131( ref g_U53176, ref iVar2, iVar3, 46, "MF14AUD", "MF6_TOFF" );
    sub_57706( ref g_U53176, ref iVar2, iVar3, 43 );
    sub_57706( ref g_U53176, ref iVar2, iVar3, 44 );
    sub_57706( ref g_U53176, ref iVar2, iVar3, 50 );
    sub_57706( ref g_U53176, ref iVar2, iVar3, 51 );
    sub_56987( ref g_U53176, ref iVar2, iVar3, "MF8AUD", "MF4_FMAF" );
    sub_56669( ref g_U53176, ref iVar2, iVar3, 0 );
    sub_61395( ref g_U53176, ref iVar2, iVar3, 30 );
    sub_57617( ref g_U53176, ref iVar2, iVar3 );
    sub_215368( ref g_U53176, ref iVar2, iVar3, 15, 11, 11, 10000 );
    sub_56669( ref g_U53176, ref iVar2, iVar3, 1 );
    sub_68131( ref g_U53176, ref iVar2, iVar3, 35, "MF14AUD", "MF6_GLSAP" );
    sub_66152( ref g_U53176, ref iVar2, iVar3, 6 );
    sub_59063( ref g_U53176, ref iVar2, iVar3, "C12_APP" );
    sub_221209( ref g_U53176, ref iVar2, iVar3, 2 );
    sub_221331( ref g_U53176, ref iVar2, iVar3, 2, "C12_APP" );
    sub_60046( ref g_U53176, ref iVar2, iVar3, 3 );
    sub_69587( ref g_U53176, ref iVar2, iVar3, 3, "C12_APP" );
    sub_56669( ref g_U53176, ref iVar2, iVar3, 4 );
    sub_58755( ref g_U53176, ref iVar2, iVar3, 43, "C12_CLAR_ALIVE" );
    sub_69964( ref g_U53176, ref iVar2, iVar3, 15 );
    sub_70080( ref g_U53176, ref iVar2, iVar3, 2027 );
    sub_59063( ref g_U53176, ref iVar2, iVar3, "C12_CLAR_ALIVE" );
    sub_56669( ref g_U53176, ref iVar2, iVar3, 5 );
    sub_60638( ref g_U53176, ref iVar2, iVar3, 26 );
    sub_60638( ref g_U53176, ref iVar2, iVar3, 27 );
    sub_56088( ref g_U53176, ref iVar2, iVar3, 7 );
    sub_63526( ref g_U53176, ref iVar2, iVar3, 16, 11, 8, 30000 );
    sub_56669( ref g_U53176, ref iVar2, iVar3, 6 );
    sub_59927( ref g_U53176, ref iVar2, iVar3, 37 );
    sub_58755( ref g_U53176, ref iVar2, iVar3, 43, "C12_ADD_CLAR" );
    sub_59456( ref g_U53176, ref iVar2, iVar3, "C12_AFTER_CLAR" );
    sub_59063( ref g_U53176, ref iVar2, iVar3, "C12_ADD_CLAR" );
    sub_57706( ref g_U53176, ref iVar2, iVar3, 48 );
    sub_59063( ref g_U53176, ref iVar2, iVar3, "C12_AFTER_CLAR" );
    sub_58755( ref g_U53176, ref iVar2, iVar3, 13, "C12_CLR_WANTED" );
    sub_59456( ref g_U53176, ref iVar2, iVar3, "C12_FUNERAL_SEQ" );
    sub_59063( ref g_U53176, ref iVar2, iVar3, "C12_CLR_WANTED" );
    sub_63526( ref g_U53176, ref iVar2, iVar3, 17, 11, 10, 60000 );
    sub_55409( ref g_U53176, ref iVar2, iVar3, 14 );
    sub_70080( ref g_U53176, ref iVar2, iVar3, 2031 );
    sub_226599( ref g_U53176, ref iVar2, iVar3, 19, 0 );
    sub_59063( ref g_U53176, ref iVar2, iVar3, "C12_FUNERAL_SEQ" );
    sub_56554( ref g_U53176, ref iVar2, iVar3, 13, iVar4 );
    sub_56554( ref g_U53176, ref iVar2, iVar3, 16, iVar6 );
    sub_58755( ref g_U53176, ref iVar2, iVar3, 13, "C12_BURY_DM" );
    sub_226842( ref g_U53176, ref iVar2, iVar3, 13, "MF6_PFDEAD", "MF14AUD", 60000, 6, 19, 12, 120000 );
    sub_59456( ref g_U53176, ref iVar2, iVar3, "C12_DO_FUNERAL" );
    sub_59063( ref g_U53176, ref iVar2, iVar3, "C12_BURY_DM" );
    sub_226842( ref g_U53176, ref iVar2, iVar3, 13, "MF6_PDDEAD", "MF14AUD", 60000, 6, 19, 12, 120000 );
    sub_59063( ref g_U53176, ref iVar2, iVar3, "C12_DO_FUNERAL" );
    sub_56554( ref g_U53176, ref iVar2, iVar3, 13, iVar5 );
    sub_56554( ref g_U53176, ref iVar2, iVar3, 16, iVar7 );
    sub_60046( ref g_U53176, ref iVar2, iVar3, 7 );
    sub_60159( ref g_U53176, ref iVar2, iVar3, 7, "C12_FUNERAL_SEQ" );
    sub_56554( ref g_U53176, ref iVar2, iVar3, 13, iVar4 );
    sub_56554( ref g_U53176, ref iVar2, iVar3, 16, iVar6 );
    sub_61395( ref g_U53176, ref iVar2, iVar3, 35 );
    sub_61395( ref g_U53176, ref iVar2, iVar3, 37 );
    sub_55638( ref g_U53176, ref iVar2, iVar3, 13 );
    sub_55754( ref g_U53176, ref iVar2, iVar3, 2030 );
    sub_63526( ref g_U53176, ref iVar2, iVar3, 22, 13, 10, 110000 );
    sub_66708( ref g_U53176, ref iVar2, iVar3, 13, 1, 10 );
    sub_55409( ref g_U53176, ref iVar2, iVar3, 55 );
    sub_58755( ref g_U53176, ref iVar2, iVar3, 13, "C12_NOT_DEAD" );
    sub_66152( ref g_U53176, ref iVar2, iVar3, 1440 );
    sub_55409( ref g_U53176, ref iVar2, iVar3, 37 );
    sub_56987( ref g_U53176, ref iVar2, iVar3, "MF8AUD", "MF4_FM8" );
    sub_66152( ref g_U53176, ref iVar2, iVar3, 20160 );
    sub_55409( ref g_U53176, ref iVar2, iVar3, 15 );
    sub_59456( ref g_U53176, ref iVar2, iVar3, "C12_TERMINATE" );
    sub_59063( ref g_U53176, ref iVar2, iVar3, "C12_NOT_DEAD" );
    sub_66152( ref g_U53176, ref iVar2, iVar3, 1440 );
    sub_55409( ref g_U53176, ref iVar2, iVar3, 37 );
    sub_59063( ref g_U53176, ref iVar2, iVar3, "C12_TERMINATE" );
    sub_58020( ref g_U53176, ref iVar2, iVar3, 15 );
    sub_71853( ref g_U53176, ref iVar2, iVar3 );
    sub_71946( ref g_U53176, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_12_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_226599(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 122;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam4;
    sub_55197( uParam1 );
    sub_55249( "SET: GAMETIME_WALL\n" );
    return;
}

void sub_226842(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 46;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam7;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam8;
    (uParam0^)[(uParam1^)]._fU4._fU32 = uParam9;
    (uParam0^)[(uParam1^)]._fU4._fU36 = uParam10;
    sub_55197( uParam1 );
    sub_55249( "SET: ONEOFF_PHONE_PLAYER_TIME_VECTOR_REPEAT [" );
    sub_55249( uParam5 );
    sub_55249( "] " );
    sub_55249( uParam4 );
    sub_55249( "  (between " );
    sub_56178( uParam7 );
    sub_55249( ".00 and " );
    sub_56178( uParam8 );
    sub_55249( ".00)" );
    sub_56195();
    return;
}

void sub_228000()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    boolean bVar6;

    iVar2 = 11;
    iVar3 = 11;
    iVar4 = 0;
    if (NOT g_U15654[14])
    {
        return;
    }
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    if (NOT g_U64895._fU0)
    {
        sub_225462();
        g_U64895._fU0 = 1;
        g_U64895._fU32 = iVar5;
        sub_93604( ref g_U64895._fU16 );
        g_U15946[iVar3]._fU8[0]._fU0[iVar4] = 1;
    }
    if (g_U64895._fU8)
    {
        if (g_U15946[iVar3]._fU4)
        {
            if (g_U15946[iVar3]._fU8[1]._fU0[iVar4])
            {
                g_U15946[iVar3]._fU4 = 0;
                g_U15946[iVar3]._fU8[1]._fU0[iVar4] = 0;
                sub_75373( ref g_U10981[iVar2]._fU92, ref g_U10981[iVar2]._fU76, 0 );
                sub_79389( ref g_U10981[iVar2]._fU92, ref g_U10981[iVar2]._fU76 );
            }
        }
        if (iVar5 > g_U64895._fU32)
        {
            g_U64895._fU8 = 0;
            if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
            {
                sub_91953( ref g_U64895._fU16, 0, 30, 0 );
                return;
            }
            if (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 ))
            {
                CLEAR_WANTED_LEVEL( CurrentPlayerId() );
                sub_91953( ref g_U64895._fU16, 24, 0, 0 );
                return;
            }
            sub_91953( ref g_U64895._fU16, 0, 30, 0 );
            return;
        }
    }
    if (g_U64895._fU4)
    {
        if (sub_80901())
        {
            return;
        }
        g_U64895._fU4 = 0;
        if (NOT (sub_81198() == 6))
        {
            sub_91953( ref g_U64895._fU16, 0, 30, 0 );
            return;
        }
        g_U64895._fU8 = 1;
        g_U64895._fU32 = iVar5 + 5000;
        return;
    }
    bVar6 = false;
    if (g_U15946[iVar3]._fU4)
    {
        if (g_U15946[iVar3]._fU8[1]._fU0[iVar4])
        {
            bVar6 = true;
        }
    }
    if (NOT bVar6)
    {
        return;
    }
    g_U15946[iVar3]._fU4 = 0;
    g_U15946[iVar3]._fU8[1]._fU0[iVar4] = 0;
    if (NOT (sub_89959( g_U64895._fU16 )))
    {
        sub_75373( ref g_U10981[iVar2]._fU92, ref g_U10981[iVar2]._fU76, 0 );
        sub_79389( ref g_U10981[iVar2]._fU92, ref g_U10981[iVar2]._fU76 );
        return;
    }
    if (g_U10978)
    {
        sub_75373( ref g_U10981[iVar2]._fU92, ref g_U10981[iVar2]._fU76, 0 );
        sub_79389( ref g_U10981[iVar2]._fU92, ref g_U10981[iVar2]._fU76 );
        sub_91953( ref g_U64895._fU16, 0, 30, 0 );
        return;
    }
    if (g_U64895._fU12)
    {
        sub_75373( ref g_U10981[iVar2]._fU92, ref g_U10981[iVar2]._fU76, 0 );
        sub_79389( ref g_U10981[iVar2]._fU92, ref g_U10981[iVar2]._fU76 );
        sub_91953( ref g_U64895._fU16, 0, 30, 0 );
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        sub_75373( ref g_U10981[iVar2]._fU92, ref g_U10981[iVar2]._fU76, 0 );
        sub_79389( ref g_U10981[iVar2]._fU92, ref g_U10981[iVar2]._fU76 );
        sub_91953( ref g_U64895._fU16, 0, 30, 0 );
        return;
    }
    if (NOT (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )))
    {
        sub_75373( ref g_U10981[iVar2]._fU92, ref g_U10981[iVar2]._fU76, 0 );
        sub_79389( ref g_U10981[iVar2]._fU92, ref g_U10981[iVar2]._fU76 );
        sub_91953( ref g_U64895._fU16, 0, 30, 0 );
        return;
    }
    if (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 3 ))
    {
        sub_229160( "MF4_FM2", "MF4_FM4" );
        sub_91953( ref g_U64895._fU16, 0, 30, 0 );
        return;
    }
    sub_229160( "MF4_FM2", "MF4_FM3" );
    g_U64895._fU4 = 1;
    return;
}

void sub_229160(unknown uParam0, unknown uParam1)
{
    char[16] cVar4;

    StrCopy( ref cVar4, "MF8AUD", 16 );
    sub_87183( ref l_U482, uParam0, uParam1 );
    sub_105139( ref l_U482, ref cVar4, 1 );
    sub_52331();
    return;
}

void sub_229326()
{
    int iVar2;
    int iVar3;

    iVar2 = 12;
    iVar3 = 12;
    if (g_U10981[iVar2]._fU0)
    {
        sub_229359();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    if (sub_107946( iVar3, iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U55257 );
    return;
}

void sub_229359()
{
    sub_54157( 12, 12 );
    sub_229375();
    PRINTSTRING( "Contact_13 Activated\n" );
    return;
}

void sub_229375()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 40;
    PRINTSTRING( "START: CONTACT_13_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U55257, ref iVar2, iVar3, 4 );
    sub_60638( ref g_U55257, ref iVar2, iVar3, 29 );
    sub_65927( ref g_U55257, ref iVar2, iVar3, 2, "MF6_MCIA", "MF13AUD", 40000, 60000 );
    sub_56987( ref g_U55257, ref iVar2, iVar3, "MF2AUD", "MF2_CCIA4" );
    sub_56669( ref g_U55257, ref iVar2, iVar3, 0 );
    sub_57617( ref g_U55257, ref iVar2, iVar3 );
    sub_61395( ref g_U55257, ref iVar2, iVar3, 7 );
    sub_57123( ref g_U55257, ref iVar2, iVar3, 4 );
    sub_56669( ref g_U55257, ref iVar2, iVar3, 1 );
    sub_61395( ref g_U55257, ref iVar2, iVar3, 45 );
    sub_65501( ref g_U55257, ref iVar2, iVar3, 5 );
    sub_56669( ref g_U55257, ref iVar2, iVar3, 2 );
    sub_66152( ref g_U55257, ref iVar2, iVar3, 600 );
    sub_59063( ref g_U55257, ref iVar2, iVar3, "C13_CHOP_FAIL" );
    sub_62590( ref g_U55257, ref iVar2, iVar3, 3 );
    sub_59621( ref g_U55257, ref iVar2, iVar3, "C4_CALL1", "C4AUD", 180000, 17, 60000 );
    sub_60046( ref g_U55257, ref iVar2, iVar3, 3 );
    sub_60159( ref g_U55257, ref iVar2, iVar3, 3, "C13_CHOP_FAIL" );
    sub_229833( ref g_U55257, ref iVar2, iVar3, 2 );
    sub_58755( ref g_U55257, ref iVar2, iVar3, 46, "C13_MAV_FLAG" );
    sub_217817( ref g_U55257, ref iVar2, iVar3, 6 );
    sub_59063( ref g_U55257, ref iVar2, iVar3, "C13_MAV_FLAG" );
    sub_55409( ref g_U55257, ref iVar2, iVar3, 46 );
    sub_61395( ref g_U55257, ref iVar2, iVar3, 8 );
    sub_63526( ref g_U55257, ref iVar2, iVar3, 8, 3, 9, 60000 );
    sub_66708( ref g_U55257, ref iVar2, iVar3, 3, 1, 10 );
    sub_60638( ref g_U55257, ref iVar2, iVar3, 28 );
    sub_58755( ref g_U55257, ref iVar2, iVar3, 32, "C13_NOTDEAD" );
    sub_67889( ref g_U55257, ref iVar2, iVar3, 16, 1 );
    sub_59456( ref g_U55257, ref iVar2, iVar3, "C13_TERMINATE" );
    sub_59063( ref g_U55257, ref iVar2, iVar3, "C13_NOTDEAD" );
    sub_67889( ref g_U55257, ref iVar2, iVar3, 16, 2 );
    sub_59063( ref g_U55257, ref iVar2, iVar3, "C13_TERMINATE" );
    sub_61395( ref g_U55257, ref iVar2, iVar3, 7 );
    sub_71853( ref g_U55257, ref iVar2, iVar3 );
    sub_71946( ref g_U55257, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_13_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_229833(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 141;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: KILL_STRAND\n" );
    return;
}

void sub_230466()
{
    int iVar2;
    int iVar3;

    iVar2 = 13;
    iVar3 = 13;
    if (g_U10981[iVar2]._fU0)
    {
        sub_230499();
        g_U10981[iVar2]._fU0 = 0;
        sub_53293( iVar2, 1 );
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    sub_53293( iVar2, 0 );
    sub_73872( iVar2 );
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_90924( iVar3, iVar2 );
    if (sub_108339( iVar3, iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U56058 );
    return;
}

void sub_230499()
{
    sub_54157( 13, 13 );
    sub_230515();
    sub_231934();
    sub_232047();
    sub_232115();
    PRINTSTRING( "Friend_15 Activated\n" );
    return;
}

void sub_230515()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    iVar2 = 0;
    iVar3 = 1;
    iVar4 = 0;
    iVar5 = 1;
    iVar6 = 0;
    iVar7 = 108;
    PRINTSTRING( "START: FRIEND_15_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U56058, ref iVar6, iVar7, 5 );
    sub_60638( ref g_U56058, ref iVar6, iVar7, 30 );
    sub_56334( ref g_U56058, ref iVar6, iVar7, 16 );
    sub_56334( ref g_U56058, ref iVar6, iVar7, 17 );
    sub_56442( ref g_U56058, ref iVar6, iVar7, 7 );
    sub_211748( ref g_U56058, ref iVar6, iVar7, "MF6_PWORK", "MF14AUD", 60000, 50000 );
    sub_56987( ref g_U56058, ref iVar6, iVar7, "FCPPCAU", "FCP_ANSPH" );
    sub_57617( ref g_U56058, ref iVar6, iVar7 );
    sub_57476( ref g_U56058, ref iVar6, iVar7, 120000 );
    sub_62590( ref g_U56058, ref iVar6, iVar7, 13 );
    sub_56669( ref g_U56058, ref iVar6, iVar7, 0 );
    sub_215368( ref g_U56058, ref iVar6, iVar7, 38, 13, 36, 150000 );
    sub_64943( ref g_U56058, ref iVar6, iVar7, 8, 180000, 300000 );
    sub_56669( ref g_U56058, ref iVar6, iVar7, 1 );
    sub_62061( ref g_U56058, ref iVar6, iVar7, "MF6_PSISb", "MF14AUD", 30000, 60000 );
    sub_55409( ref g_U56058, ref iVar6, iVar7, 37 );
    sub_230947( ref g_U56058, ref iVar6, iVar7, 10 );
    sub_65731( ref g_U56058, ref iVar6, iVar7, 8 );
    sub_56232( ref g_U56058, ref iVar6, iVar7, 14 );
    sub_231088( ref g_U56058, ref iVar6, iVar7, 18, 13, 7, 20000, 0 );
    sub_56088( ref g_U56058, ref iVar6, iVar7, 6 );
    sub_59063( ref g_U56058, ref iVar6, iVar7, "F15_SUIT" );
    sub_56554( ref g_U56058, ref iVar6, iVar7, 13, iVar2 );
    sub_56554( ref g_U56058, ref iVar6, iVar7, 16, iVar4 );
    sub_58642( ref g_U56058, ref iVar6, iVar7, 2 );
    sub_56554( ref g_U56058, ref iVar6, iVar7, 13, iVar3 );
    sub_56554( ref g_U56058, ref iVar6, iVar7, 16, iVar5 );
    sub_60046( ref g_U56058, ref iVar6, iVar7, 3 );
    sub_69587( ref g_U56058, ref iVar6, iVar7, 3, "F15_SUIT" );
    sub_63755( ref g_U56058, ref iVar6, iVar7, 18 );
    sub_213575( ref g_U56058, ref iVar6, iVar7, 10, 0 );
    sub_55409( ref g_U56058, ref iVar6, iVar7, 69 );
    sub_56554( ref g_U56058, ref iVar6, iVar7, 13, iVar2 );
    sub_56554( ref g_U56058, ref iVar6, iVar7, 16, iVar4 );
    sub_58117( ref g_U56058, ref iVar6, iVar7, 0, 8 );
    sub_61395( ref g_U56058, ref iVar6, iVar7, 33 );
    sub_56232( ref g_U56058, ref iVar6, iVar7, 15 );
    sub_61009( ref g_U56058, ref iVar6, iVar7, 6 );
    sub_61009( ref g_U56058, ref iVar6, iVar7, 7 );
    sub_61009( ref g_U56058, ref iVar6, iVar7, 11 );
    sub_61009( ref g_U56058, ref iVar6, iVar7, 12 );
    sub_61009( ref g_U56058, ref iVar6, iVar7, 13 );
    sub_61009( ref g_U56058, ref iVar6, iVar7, 5 );
    sub_61224( ref g_U56058, ref iVar6, iVar7, 120, 34, 16, 4 );
    sub_60745( ref g_U56058, ref iVar6, iVar7, 0 );
    sub_60857( ref g_U56058, ref iVar6, iVar7, 75, 20, 4, 2 );
    sub_58020( ref g_U56058, ref iVar6, iVar7, 52 );
    sub_58755( ref g_U56058, ref iVar6, iVar7, 11, "MAKE_CALL" );
    sub_59456( ref g_U56058, ref iVar6, iVar7, "AFTER_CALL" );
    sub_59063( ref g_U56058, ref iVar6, iVar7, "MAKE_CALL" );
    sub_222395( ref g_U56058, ref iVar6, iVar7, 13, "MF6_PKATE", "MF14AUD", 600000 );
    sub_59063( ref g_U56058, ref iVar6, iVar7, "AFTER_CALL" );
    sub_71572( ref g_U56058, ref iVar6, iVar7 );
    sub_71946( ref g_U56058, ref iVar6, iVar7 );
    PRINTSTRING( "END: FRIEND_15_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_230947(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 19;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: ADD_OTHER_TO_PHONEBOOK\n" );
    return;
}

void sub_231088(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 54;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU32 = uParam7;
    sub_55197( uParam1 );
    sub_55249( "SET: TXTMSG_PLAYER_AMBIENT_CODE\n" );
    return;
}

void sub_231934()
{
    int iVar2;

    iVar2 = 13;
    sub_72084( iVar2, 6, 4 );
    sub_72084( iVar2, 7, 5 );
    sub_72084( iVar2, 11, 6 );
    sub_72084( iVar2, 12, 7 );
    sub_72084( iVar2, 13, 8 );
    sub_72084( iVar2, 5, 9 );
    sub_214170( iVar2, 6, 0, 15, 0 );
    sub_72439( iVar2, 52, 57, 24, 4, 12, 30 );
    sub_72650( iVar2, 13, 0, 6, 1 );
    return;
}

void sub_232047()
{
    int iVar2;
    int iVar3;

    iVar2 = 13;
    iVar3 = 0;
    sub_72820( iVar2, iVar3, 10, "Packie_Bomb" );
    sub_72904( iVar2, iVar3 );
    sub_72958( iVar2, iVar3, 0, 6, 0 );
    return;
}

void sub_232115()
{
    int iVar2;

    iVar2 = 13;
    sub_73200( iVar2, 32, 4, 28, 4, 2 );
    sub_73544( iVar2, "FCPAAUD", "FCPC1AU" );
    sub_73644( iVar2, "FApkA_1", "FApkB_1", "FApkH", "PACKIE_MCREARY", 1 );
    return;
}

void sub_232420()
{
    int iVar2;
    int iVar3;

    iVar2 = 14;
    iVar3 = 14;
    if (g_U10981[iVar2]._fU0)
    {
        sub_232453();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U58219 );
    return;
}

void sub_232453()
{
    sub_54157( 14, 14 );
    sub_232469();
    PRINTSTRING( "Contact_16 Activated\n" );
    return;
}

void sub_232469()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 36;
    PRINTSTRING( "START: CONTACT_16_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U58219, ref iVar2, iVar3, 5 );
    sub_211748( ref g_U58219, ref iVar2, iVar3, "MF3_RB1", "MF7AUD", 60000, 60000 );
    sub_56987( ref g_U58219, ref iVar2, iVar3, "MF14AUD", "MF6_BOFF" );
    sub_57617( ref g_U58219, ref iVar2, iVar3 );
    sub_56669( ref g_U58219, ref iVar2, iVar3, 0 );
    sub_61395( ref g_U58219, ref iVar2, iVar3, 38 );
    sub_60638( ref g_U58219, ref iVar2, iVar3, 33 );
    sub_56088( ref g_U58219, ref iVar2, iVar3, 6 );
    sub_56669( ref g_U58219, ref iVar2, iVar3, 1 );
    sub_56669( ref g_U58219, ref iVar2, iVar3, 2 );
    sub_56669( ref g_U58219, ref iVar2, iVar3, 3 );
    sub_58117( ref g_U58219, ref iVar2, iVar3, 0, 9 );
    sub_55409( ref g_U58219, ref iVar2, iVar3, 63 );
    sub_56669( ref g_U58219, ref iVar2, iVar3, 4 );
    sub_61395( ref g_U58219, ref iVar2, iVar3, 9 );
    sub_56088( ref g_U58219, ref iVar2, iVar3, 7 );
    sub_56669( ref g_U58219, ref iVar2, iVar3, 5 );
    sub_60417( ref g_U58219, ref iVar2, iVar3, 6, 0 );
    sub_61395( ref g_U58219, ref iVar2, iVar3, 36 );
    sub_63526( ref g_U58219, ref iVar2, iVar3, 28, 14, 2, 50000 );
    sub_56232( ref g_U58219, ref iVar2, iVar3, 19 );
    sub_71572( ref g_U58219, ref iVar2, iVar3 );
    sub_71946( ref g_U58219, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_16_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_233136()
{
    int iVar2;
    int iVar3;

    iVar2 = 15;
    iVar3 = 15;
    if (g_U10981[iVar2]._fU0)
    {
        sub_233169();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U58940 );
    return;
}

void sub_233169()
{
    sub_54157( 15, 15 );
    sub_233185();
    PRINTSTRING( "Contact_18 Activated\n" );
    return;
}

void sub_233185()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 4320;
    iVar3 = 0;
    iVar4 = 88;
    PRINTSTRING( "START: CONTACT_18_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U58940, ref iVar3, iVar4, 6 );
    sub_55286( ref g_U58940, ref iVar3, iVar4, 3 );
    sub_56232( ref g_U58940, ref iVar3, iVar4, 16 );
    sub_211748( ref g_U58940, ref iVar3, iVar4, "MF4_JP5", "MF8AUD", 60000, 60000 );
    sub_56987( ref g_U58940, ref iVar3, iVar4, "MF8AUD", "MF4_JP4" );
    sub_57617( ref g_U58940, ref iVar3, iVar4 );
    sub_217817( ref g_U58940, ref iVar3, iVar4, 15 );
    sub_217817( ref g_U58940, ref iVar3, iVar4, 16 );
    sub_217817( ref g_U58940, ref iVar3, iVar4, 17 );
    sub_56669( ref g_U58940, ref iVar3, iVar4, 0 );
    sub_56669( ref g_U58940, ref iVar3, iVar4, 1 );
    sub_61395( ref g_U58940, ref iVar3, iVar4, 26 );
    sub_56088( ref g_U58940, ref iVar3, iVar4, 7 );
    sub_60638( ref g_U58940, ref iVar3, iVar4, 35 );
    sub_69858( ref g_U58940, ref iVar3, iVar4, 15 );
    sub_211748( ref g_U58940, ref iVar3, iVar4, "MF4_JP7", "MF8AUD", 60000, 60000 );
    sub_56669( ref g_U58940, ref iVar3, iVar4, 2 );
    sub_59456( ref g_U58940, ref iVar3, iVar4, "C18_PHONE" );
    sub_59063( ref g_U58940, ref iVar3, iVar4, "C18b_FAIL" );
    sub_66152( ref g_U58940, ref iVar3, iVar4, 2 );
    sub_59063( ref g_U58940, ref iVar3, iVar4, "C18_PHONE" );
    sub_58642( ref g_U58940, ref iVar3, iVar4, 3 );
    sub_60046( ref g_U58940, ref iVar3, iVar4, 4 );
    sub_69587( ref g_U58940, ref iVar3, iVar4, 4, "C18b_FAIL" );
    sub_58117( ref g_U58940, ref iVar3, iVar4, 0, 10 );
    sub_56334( ref g_U58940, ref iVar3, iVar4, 19 );
    sub_60638( ref g_U58940, ref iVar3, iVar4, 34 );
    sub_60638( ref g_U58940, ref iVar3, iVar4, 36 );
    sub_68558( ref g_U58940, ref iVar3, iVar4, 13, "GM3_BCALL", "GM3CAUD", 200000, 19, 180000 );
    sub_59456( ref g_U58940, ref iVar3, iVar4, "C18_PHOTO" );
    sub_59063( ref g_U58940, ref iVar3, iVar4, "C18_PHOTO_FAIL" );
    sub_66152( ref g_U58940, ref iVar3, iVar4, 6 );
    sub_233928( ref g_U58940, ref iVar3, iVar4 );
    sub_59063( ref g_U58940, ref iVar3, iVar4, "C18_PHOTO" );
    sub_221209( ref g_U58940, ref iVar3, iVar4, 5 );
    sub_221331( ref g_U58940, ref iVar3, iVar4, 5, "C18_PHOTO_FAIL" );
    sub_66152( ref g_U58940, ref iVar3, iVar4, 60 );
    sub_58755( ref g_U58940, ref iVar3, iVar4, 48, "RAY_CALLS" );
    sub_59456( ref g_U58940, ref iVar3, iVar4, "AFTER_RAY_CALL" );
    sub_59063( ref g_U58940, ref iVar3, iVar4, "RAY_CALLS" );
    sub_234236( ref g_U58940, ref iVar3, iVar4, 14, "MF3_RB5", "MF7AUD", 60000, 60000, 49 );
    sub_59063( ref g_U58940, ref iVar3, iVar4, "AFTER_RAY_CALL" );
    sub_66152( ref g_U58940, ref iVar3, iVar4, 60 );
    sub_63526( ref g_U58940, ref iVar3, iVar4, 19, 13, 8, 30000 );
    sub_68977( ref g_U58940, ref iVar3, iVar4, 13 );
    sub_56669( ref g_U58940, ref iVar3, iVar4, 6 );
    sub_56669( ref g_U58940, ref iVar3, iVar4, 7 );
    sub_58117( ref g_U58940, ref iVar3, iVar4, 0, 19 );
    sub_55409( ref g_U58940, ref iVar3, iVar4, 45 );
    sub_61395( ref g_U58940, ref iVar3, iVar4, 10 );
    sub_64943( ref g_U58940, ref iVar3, iVar4, 11, 180000, 300000 );
    sub_63526( ref g_U58940, ref iVar3, iVar4, 21, 13, 11, 50000 );
    sub_66708( ref g_U58940, ref iVar3, iVar4, 13, 1, 8 );
    sub_64815( ref g_U58940, ref iVar3, iVar4, 13 );
    sub_66152( ref g_U58940, ref iVar3, iVar4, iVar2 );
    sub_57706( ref g_U58940, ref iVar3, iVar4, 42 );
    sub_71853( ref g_U58940, ref iVar3, iVar4 );
    sub_71946( ref g_U58940, ref iVar3, iVar4 );
    PRINTSTRING( "END: CONTACT_18_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_233928(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 52;
    sub_55197( uParam1 );
    sub_55249( "SET: END_OF_MISSION_PHONECALL_WALL\n" );
    return;
}

void sub_234236(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 39;
    (uParam0^)[(uParam1^)]._fU4._fU4 = uParam3;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam4, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam5, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam7;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam8;
    sub_55197( uParam1 );
    sub_55249( "SET: ONEOFF_PHONE_PLAYER_REPEAT [" );
    sub_55249( uParam5 );
    sub_55249( "] " );
    sub_55249( uParam4 );
    sub_56195();
    return;
}

void sub_234941()
{
    int iVar2;
    int iVar3;

    iVar2 = 16;
    iVar3 = 16;
    if (g_U10981[iVar2]._fU0)
    {
        sub_234974();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U60701 );
    return;
}

void sub_234974()
{
    sub_54157( 16, 16 );
    sub_234990();
    PRINTSTRING( "Contact_19 Activated\n" );
    return;
}

void sub_234990()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 28;
    PRINTSTRING( "START: CONTACT_19_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U60701, ref iVar2, iVar3, 6 );
    sub_57706( ref g_U60701, ref iVar2, iVar3, 45 );
    sub_57706( ref g_U60701, ref iVar2, iVar3, 41 );
    sub_57706( ref g_U60701, ref iVar2, iVar3, 47 );
    sub_69156( ref g_U60701, ref iVar2, iVar3, 13, "MF6_PDERRIKb", "MF14AUD", 60000, 60000 );
    sub_56987( ref g_U60701, ref iVar2, iVar3, "MF14AUD", "MF6_WUN" );
    sub_57617( ref g_U60701, ref iVar2, iVar3 );
    sub_56669( ref g_U60701, ref iVar2, iVar3, 0 );
    sub_60638( ref g_U60701, ref iVar2, iVar3, 38 );
    sub_63526( ref g_U60701, ref iVar2, iVar3, 29, 14, 8, 30000 );
    sub_56764( ref g_U60701, ref iVar2, iVar3, 3 );
    sub_58955( ref g_U60701, ref iVar2, iVar3, "SH_NJ" );
    sub_55409( ref g_U60701, ref iVar2, iVar3, 36 );
    sub_56669( ref g_U60701, ref iVar2, iVar3, 1 );
    sub_61395( ref g_U60701, ref iVar2, iVar3, 47 );
    sub_55409( ref g_U60701, ref iVar2, iVar3, 73 );
    sub_56669( ref g_U60701, ref iVar2, iVar3, 2 );
    sub_61395( ref g_U60701, ref iVar2, iVar3, 27 );
    sub_60638( ref g_U60701, ref iVar2, iVar3, 37 );
    sub_60638( ref g_U60701, ref iVar2, iVar3, 39 );
    sub_71853( ref g_U60701, ref iVar2, iVar3 );
    sub_71946( ref g_U60701, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_19_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_235659()
{
    int iVar2;
    int iVar3;

    iVar2 = 17;
    iVar3 = 17;
    if (g_U10981[iVar2]._fU0)
    {
        sub_235692();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U61262 );
    return;
}

void sub_235692()
{
    sub_54157( 17, 17 );
    sub_235708();
    PRINTSTRING( "Girl_20 Activated\n" );
    return;
}

void sub_235708()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 8;
    sub_55249( "START: GIRL_20_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U61262, ref iVar2, iVar3, 7 );
    sub_56987( ref g_U61262, ref iVar2, iVar3, "APAUD", "PLACEHOLDER" );
    sub_57617( ref g_U61262, ref iVar2, iVar3 );
    sub_71853( ref g_U61262, ref iVar2, iVar3 );
    sub_71946( ref g_U61262, ref iVar2, iVar3 );
    sub_55249( "END: GIRL_20_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_236046()
{
    int iVar2;
    int iVar3;

    iVar2 = 18;
    iVar3 = 18;
    if (g_U10981[iVar2]._fU0)
    {
        sub_236079();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U61423 );
    return;
}

void sub_236079()
{
    sub_54157( 18, 18 );
    sub_236095();
    PRINTSTRING( "Contact_21 Activated\n" );
    return;
}

void sub_236095()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 28;
    PRINTSTRING( "START: CONTACT_21_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U61423, ref iVar2, iVar3, 6 );
    sub_55409( ref g_U61423, ref iVar2, iVar3, 50 );
    sub_236230( ref g_U61423, ref iVar2, iVar3, "MF2_CBC1", "MF1AUD", 60000, 4, 19, 60000 );
    sub_56987( ref g_U61423, ref iVar2, iVar3, "MF14AUD", "MF6_TMSG" );
    sub_57617( ref g_U61423, ref iVar2, iVar3 );
    sub_61395( ref g_U61423, ref iVar2, iVar3, 42 );
    sub_56669( ref g_U61423, ref iVar2, iVar3, 0 );
    sub_56669( ref g_U61423, ref iVar2, iVar3, 1 );
    sub_64943( ref g_U61423, ref iVar2, iVar3, 9, 180000, 300000 );
    sub_56088( ref g_U61423, ref iVar2, iVar3, 7 );
    sub_226599( ref g_U61423, ref iVar2, iVar3, 6, 16 );
    sub_63526( ref g_U61423, ref iVar2, iVar3, 31, 18, 1, 50000 );
    sub_56669( ref g_U61423, ref iVar2, iVar3, 2 );
    sub_66152( ref g_U61423, ref iVar2, iVar3, 360 );
    sub_236741( ref g_U61423, ref iVar2, iVar3, "MF2_CBC5", "MF1AUD", 120000, 21 );
    sub_61395( ref g_U61423, ref iVar2, iVar3, 11 );
    sub_58642( ref g_U61423, ref iVar2, iVar3, 3 );
    sub_60638( ref g_U61423, ref iVar2, iVar3, 40 );
    sub_65731( ref g_U61423, ref iVar2, iVar3, 9 );
    sub_64139( ref g_U61423, ref iVar2, iVar3, 600000 );
    sub_71853( ref g_U61423, ref iVar2, iVar3 );
    sub_71946( ref g_U61423, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_21_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_236230(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 35;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    (uParam0^)[(uParam1^)]._fU4._fU28 = uParam7;
    (uParam0^)[(uParam1^)]._fU4._fU32 = uParam8;
    sub_55197( uParam1 );
    sub_55249( "SET: PHONE_PLAYER_TIME_REPEAT: [" );
    sub_55249( uParam4 );
    sub_55249( "] " );
    sub_55249( uParam3 );
    sub_55249( "  (between " );
    sub_56178( uParam6 );
    sub_55249( ".00 and " );
    sub_56178( uParam7 );
    sub_55249( ".00)" );
    sub_56195();
    return;
}

void sub_236741(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 32;
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU40, uParam3, 16 );
    StrCopy( ref (uParam0^)[(uParam1^)]._fU4._fU56, uParam4, 16 );
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam5;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam6;
    sub_55197( uParam1 );
    sub_55249( "SET: PHONE_PLAYER_VECTOR_QUICK: [" );
    sub_55249( uParam4 );
    sub_55249( "] " );
    sub_55249( uParam3 );
    sub_56195();
    return;
}

void sub_237225()
{
    int iVar2;
    int iVar3;

    iVar2 = 19;
    iVar3 = 19;
    if (g_U10981[iVar2]._fU0)
    {
        sub_237258();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    if (sub_107946( iVar3, iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U61984 );
    return;
}

void sub_237258()
{
    sub_54157( 19, 19 );
    sub_237274();
    PRINTSTRING( "Contact_22 Activated\n" );
    return;
}

void sub_237274()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 28;
    PRINTSTRING( "START: CONTACT_22_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U61984, ref iVar2, iVar3, 8 );
    sub_56987( ref g_U61984, ref iVar2, iVar3, "MF11AUD", "MF5_BANS" );
    sub_57617( ref g_U61984, ref iVar2, iVar3 );
    sub_56669( ref g_U61984, ref iVar2, iVar3, 3 );
    sub_58117( ref g_U61984, ref iVar2, iVar3, 0, 11 );
    sub_68131( ref g_U61984, ref iVar2, iVar3, 17, "MF14AUD", "MF6_TUN" );
    sub_237480( ref g_U61984, ref iVar2, iVar3, 1, 0, 10000 );
    sub_62392( ref g_U61984, ref iVar2, iVar3, 47, 34, 2, 300 );
    sub_62061( ref g_U61984, ref iVar2, iVar3, "MF5_BJPWRKb", "MF11AUD", 60000, 60000 );
    sub_56232( ref g_U61984, ref iVar2, iVar3, 20 );
    sub_60638( ref g_U61984, ref iVar2, iVar3, 41 );
    sub_56088( ref g_U61984, ref iVar2, iVar3, 9 );
    sub_56669( ref g_U61984, ref iVar2, iVar3, 0 );
    sub_58755( ref g_U61984, ref iVar2, iVar3, 46, "C22_MAV_FLAG" );
    sub_217817( ref g_U61984, ref iVar2, iVar3, 6 );
    sub_59063( ref g_U61984, ref iVar2, iVar3, "C22_MAV_FLAG" );
    sub_55409( ref g_U61984, ref iVar2, iVar3, 46 );
    sub_61395( ref g_U61984, ref iVar2, iVar3, 43 );
    sub_56669( ref g_U61984, ref iVar2, iVar3, 2 );
    sub_56669( ref g_U61984, ref iVar2, iVar3, 4 );
    sub_60638( ref g_U61984, ref iVar2, iVar3, 41 );
    sub_61395( ref g_U61984, ref iVar2, iVar3, 43 );
    sub_58020( ref g_U61984, ref iVar2, iVar3, 59 );
    sub_64139( ref g_U61984, ref iVar2, iVar3, 600000 );
    sub_69858( ref g_U61984, ref iVar2, iVar3, 17 );
    sub_58020( ref g_U61984, ref iVar2, iVar3, 52 );
    sub_71853( ref g_U61984, ref iVar2, iVar3 );
    sub_71946( ref g_U61984, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_22_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_237480(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 7;
    (uParam0^)[(uParam1^)]._fU4._fU0 = uParam3;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam4;
    (uParam0^)[(uParam1^)]._fU4._fU24 = uParam5;
    sub_55197( uParam1 );
    sub_55249( "SET: START PROC MISSION NOJOB\n" );
    return;
}

void sub_238222()
{
    int iVar2;
    int iVar3;

    iVar2 = 20;
    iVar3 = 22;
    if (g_U10981[iVar2]._fU0)
    {
        sub_238255();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U62545 );
    return;
}

void sub_238255()
{
    sub_54157( 20, 22 );
    sub_238271();
    PRINTSTRING( "Contact_24 Activated\n" );
    return;
}

void sub_238271()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 40;
    PRINTSTRING( "START: CONTACT_24_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U62545, ref iVar2, iVar3, 8 );
    sub_56987( ref g_U62545, ref iVar2, iVar3, "MF9AUD", "MF4_JPAF" );
    sub_57617( ref g_U62545, ref iVar2, iVar3 );
    sub_59063( ref g_U62545, ref iVar2, iVar3, "C24_SUIT" );
    sub_58642( ref g_U62545, ref iVar2, iVar3, 0 );
    sub_60046( ref g_U62545, ref iVar2, iVar3, 1 );
    sub_69587( ref g_U62545, ref iVar2, iVar3, 1, "C24_SUIT" );
    sub_58117( ref g_U62545, ref iVar2, iVar3, 0, 12 );
    sub_64943( ref g_U62545, ref iVar2, iVar3, 12, 180000, 363000 );
    sub_63526( ref g_U62545, ref iVar2, iVar3, 33, 22, 1, 40000 );
    sub_56669( ref g_U62545, ref iVar2, iVar3, 2 );
    sub_56232( ref g_U62545, ref iVar2, iVar3, 21 );
    sub_61395( ref g_U62545, ref iVar2, iVar3, 41 );
    sub_56088( ref g_U62545, ref iVar2, iVar3, 9 );
    sub_60638( ref g_U62545, ref iVar2, iVar3, 43 );
    sub_56669( ref g_U62545, ref iVar2, iVar3, 3 );
    sub_61395( ref g_U62545, ref iVar2, iVar3, 41 );
    sub_60638( ref g_U62545, ref iVar2, iVar3, 43 );
    sub_60638( ref g_U62545, ref iVar2, iVar3, 42 );
    sub_65731( ref g_U62545, ref iVar2, iVar3, 12 );
    sub_63526( ref g_U62545, ref iVar2, iVar3, 23, 14, 5, 50000 );
    sub_56669( ref g_U62545, ref iVar2, iVar3, 4 );
    sub_59063( ref g_U62545, ref iVar2, iVar3, "C24_KILL" );
    sub_211748( ref g_U62545, ref iVar2, iVar3, "J4_CINTRO", "J4AUD", 60000, 60000 );
    sub_60046( ref g_U62545, ref iVar2, iVar3, 5 );
    sub_60159( ref g_U62545, ref iVar2, iVar3, 5, "C24_KILL" );
    sub_69964( ref g_U62545, ref iVar2, iVar3, 7 );
    sub_70080( ref g_U62545, ref iVar2, iVar3, 51 );
    sub_55409( ref g_U62545, ref iVar2, iVar3, 48 );
    sub_59927( ref g_U62545, ref iVar2, iVar3, 49 );
    sub_58117( ref g_U62545, ref iVar2, iVar3, 0, 14 );
    sub_229833( ref g_U62545, ref iVar2, iVar3, 14 );
    sub_61395( ref g_U62545, ref iVar2, iVar3, 12 );
    sub_58020( ref g_U62545, ref iVar2, iVar3, 52 );
    sub_71853( ref g_U62545, ref iVar2, iVar3 );
    sub_71946( ref g_U62545, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_24_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_239204()
{
    int iVar2;
    int iVar3;

    iVar2 = 21;
    iVar3 = 20;
    if (g_U10981[iVar2]._fU0)
    {
        sub_239237();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_74139( iVar3 ))
    {
        sub_74180( iVar3 );
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U63346 );
    return;
}

void sub_239237()
{
    sub_54157( 21, 20 );
    sub_239253();
    PRINTSTRING( "Contact_25 Activated\n" );
    return;
}

void sub_239253()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 20;
    PRINTSTRING( "START: CONTACT_25_SETUP_MISSION_FLOW\n" );
    sub_56088( ref g_U63346, ref iVar2, iVar3, 9 );
    sub_60638( ref g_U63346, ref iVar2, iVar3, 45 );
    sub_60638( ref g_U63346, ref iVar2, iVar3, 44 );
    sub_65927( ref g_U63346, ref iVar2, iVar3, 12, "MF2_CCIA2", "MF2AUD", 60000, 60000 );
    sub_56987( ref g_U63346, ref iVar2, iVar3, "MF14AUD", "MF6_BNR" );
    sub_57617( ref g_U63346, ref iVar2, iVar3 );
    sub_56669( ref g_U63346, ref iVar2, iVar3, 0 );
    sub_58117( ref g_U63346, ref iVar2, iVar3, 0, 13 );
    sub_60638( ref g_U63346, ref iVar2, iVar3, 47 );
    sub_56669( ref g_U63346, ref iVar2, iVar3, 1 );
    sub_60417( ref g_U63346, ref iVar2, iVar3, 13, 0 );
    sub_61395( ref g_U63346, ref iVar2, iVar3, 39 );
    sub_56669( ref g_U63346, ref iVar2, iVar3, 2 );
    sub_58250( ref g_U63346, ref iVar2, iVar3, 0, 13 );
    sub_61395( ref g_U63346, ref iVar2, iVar3, 13 );
    sub_64139( ref g_U63346, ref iVar2, iVar3, 600000 );
    sub_71853( ref g_U63346, ref iVar2, iVar3 );
    sub_71946( ref g_U63346, ref iVar2, iVar3 );
    PRINTSTRING( "END: CONTACT_25_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_239843()
{
    int iVar2;
    int iVar3;

    iVar2 = 22;
    iVar3 = 21;
    if (g_U10981[iVar2]._fU0)
    {
        sub_239876();
        g_U10981[iVar2]._fU0 = 0;
        return;
    }
    if (NOT g_U10981[iVar2]._fU8)
    {
        return;
    }
    if (sub_89676( iVar2 ))
    {
        return;
    }
    sub_172485( iVar3, iVar2, ref g_U63747 );
    return;
}

void sub_239876()
{
    sub_54157( 22, 21 );
    sub_239892();
    PRINTSTRING( "Girl_26 (Exotic Exports) Activated\n" );
    return;
}

void sub_239892()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 12;
    PRINTSTRING( "START: GIRL_26_SETUP_MISSION_FLOW\n" );
    sub_237480( ref g_U63747, ref iVar2, iVar3, 0, 0, 10000 );
    sub_62392( ref g_U63747, ref iVar2, iVar3, 44, 0, 22, 420 );
    sub_58955( ref g_U63747, ref iVar2, iVar3, "BRCPROC" );
    sub_240026( ref g_U63747, ref iVar2, iVar3, 14 );
    sub_240128( ref g_U63747, ref iVar2, iVar3, 14 );
    sub_58020( ref g_U63747, ref iVar2, iVar3, 54 );
    sub_62392( ref g_U63747, ref iVar2, iVar3, 45, 8, 19, 420 );
    sub_71572( ref g_U63747, ref iVar2, iVar3 );
    sub_71946( ref g_U63747, ref iVar2, iVar3 );
    PRINTSTRING( "END: GIRL_26_SETUP_MISSION_FLOW\n" );
    return;
}

void sub_240026(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 97;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: UNLOCK_NEWS_BLOCK\n" );
    return;
}

void sub_240128(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_54953( (uParam1^), uParam2 );
    (uParam0^)[(uParam1^)]._fU0 = 98;
    (uParam0^)[(uParam1^)]._fU4._fU20 = uParam3;
    sub_55197( uParam1 );
    sub_55249( "SET: UNLOCK_RADIO_STORY\n" );
    return;
}

void sub_240550()
{
    int iVar2;
    int I;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    sub_240559();
    iVar6 = 1;
    for ( I = 0; I < 28; I++ )
    {
        sub_208653( I );
        sub_241111( I );
        sub_242945( I );
        iVar2 = g_U13391[I]._fU80._fU0;
        iVar6 = 1;
        if (iVar2 == 0)
        {
            iVar2 = g_U13391[I]._fU0._fU0;
            iVar6 = 0;
        }
        switch (iVar2)
        {
            case 0:
            sub_243449( I );
            break;
            case 1:
            sub_245354( I, iVar6 );
            break;
            case 2:
            uVar4 = sub_48070( I, g_U13391[I]._fU0._fU4 );
            uVar5 = g_U26758[uVar4]._fU16;
            sub_250262( I, uVar5, iVar6 );
            if (l_U8 == 7)
            {
                g_U13391[I]._fU0._fU0 = 3;
                l_U8 = 0;
                CLEAR_HELP();
            }
            break;
            case 3:
            sub_254509( I, iVar6 );
            break;
            case 4:
            sub_256272( I, iVar6 );
            break;
            case 5:
            sub_50169( I, iVar6 );
            break;
            case 6:
            sub_49956( I, iVar6 );
            break;
            default:
            sub_23915( "Main_Missions: Maintain_Missions(): Unknown Mission Status ID" );
            return;
        }
    }
    return;
}

void sub_240559()
{
    if (g_U32896._fU4 == g_U32896._fU0)
    {
        return;
    }
    g_U32896._fU0 = g_U32896._fU4;
    if (NOT g_U32896._fU0)
    {
        sub_240628();
        return;
    }
    sub_240855();
    return;
}

void sub_240628()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (DOES_BLIP_EXIST( g_U13391[I]._fU0._fU64 ))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[I]._fU0._fU64, 0 );
        }
        if (DOES_BLIP_EXIST( g_U13391[I]._fU80._fU64 ))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[I]._fU80._fU64, 0 );
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (DOES_BLIP_EXIST( g_U9943[I]._fU32 ))
        {
            CHANGE_BLIP_DISPLAY( g_U9943[I]._fU32, 0 );
        }
    }
    return;
}

void sub_240855()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (DOES_BLIP_EXIST( g_U13391[I]._fU0._fU64 ))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[I]._fU0._fU64, 2 );
        }
        if (DOES_BLIP_EXIST( g_U13391[I]._fU80._fU64 ))
        {
            CHANGE_BLIP_DISPLAY( g_U13391[I]._fU80._fU64, 2 );
        }
    }
    for ( I = 0; I < 5; I++ )
    {
        if (DOES_BLIP_EXIST( g_U9943[I]._fU32 ))
        {
            CHANGE_BLIP_DISPLAY( g_U9943[I]._fU32, 2 );
        }
    }
    return;
}

void sub_241111(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int iVar5;

    if (NOT g_U13391[uParam0]._fU160._fU0)
    {
        return;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        REQUEST_SCRIPT( ref g_U13391[uParam0]._fU160._fU12 );
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[uParam0]._fU160._fU12 )))
        {
            REQUEST_SCRIPT( ref g_U13391[uParam0]._fU160._fU12 );
            return;
        }
        g_U13391[uParam0]._fU160._fU80 = 1;
        g_U13391[uParam0]._fU160._fU104 = START_NEW_SCRIPT( ref g_U13391[uParam0]._fU160._fU12, 1536 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[uParam0]._fU160._fU12 );
        if (g_U15945 < 0)
        {
            g_U15945 = iVar3 + 10800000;
        }
        return;
    }
    if (NOT (IS_THREAD_ACTIVE( g_U13391[uParam0]._fU160._fU104 )))
    {
        if (NOT g_U13391[uParam0]._fU160._fU92)
        {
            if (NOT (g_U13391[uParam0]._fU160._fU88 == -1))
            {
                g_U13391[uParam0]._fU160._fU84 = g_U13391[uParam0]._fU160._fU88;
                return;
            }
        }
        g_U10981[uParam0]._fU24 = -1;
        sub_2172( uParam0 );
        g_U13391[uParam0]._fU160._fU108._fU20 = -1;
        return;
    }
    if (g_U13391[uParam0]._fU160._fU108._fU20 == 0)
    {
        if (NOT (g_U13391[uParam0]._fU160._fU108._fU16 == 0))
        {
            g_U13391[uParam0]._fU160._fU108._fU20 = iVar3 + g_U13391[uParam0]._fU160._fU108._fU16;
        }
        return;
    }
    if (g_U15654[52])
    {
        return;
    }
    if (g_U13391[uParam0]._fU160._fU96)
    {
        sub_241699( 180000 );
        g_U13391[uParam0]._fU160._fU108._fU20 = iVar3 + g_U13391[uParam0]._fU160._fU108._fU16;
        return;
    }
    if (g_U10978)
    {
        sub_241699( 180000 );
        return;
    }
    iVar4 = 0;
    iVar5 = 0;
    if (g_U15945 < iVar3)
    {
        iVar5 = sub_241844();
        if (iVar5 <= 1)
        {
            iVar4 = sub_241927();
            if (iVar4 == -1)
            {
                sub_241699( 180000 );
            }
            else
            {
                sub_242140( iVar4 );
                g_U15945 = iVar3 + 10800000;
                g_U13391[iVar4]._fU160._fU108._fU20 = iVar3 + g_U13391[iVar4]._fU160._fU108._fU16;
                sub_242555( iVar4 );
            }
        }
        else
        {
            sub_241699( 3600000 );
        }
        return;
    }
    if (g_U13391[uParam0]._fU160._fU108._fU20 < iVar3)
    {
        if (g_U13391[uParam0]._fU160._fU108._fU0)
        {
            sub_242140( uParam0 );
            g_U13391[uParam0]._fU160._fU108._fU20 = iVar3 + g_U13391[uParam0]._fU160._fU108._fU16;
            sub_242555( uParam0 );
            sub_241699( 300000 );
        }
        else
        {
            g_U13391[uParam0]._fU160._fU108._fU20 = iVar3 + 300000;
        }
        return;
    }
    return;
}

void sub_241699(int iParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = iVar3 + iParam0;
    if (iVar4 > g_U15945)
    {
        g_U15945 = iVar4;
    }
    return;
}

void sub_241844()
{
    int Result;
    int I;

    Result = 0;
    I = 0;
    for ( I = 0; I < 49; I++ )
    {
        if (g_U9387[I]._fU24)
        {
            Result++;
        }
    }
    return Result;
}

void sub_241927()
{
    int I;
    int iVar3;
    int Result;
    int iVar5;
    int iVar6;

    I = 0;
    iVar3 = 2147483647;
    Result = -1;
    iVar5 = 0;
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    for ( I = 0; I < 28; I++ )
    {
        if (g_U13391[I]._fU160._fU0)
        {
            if (g_U13391[I]._fU160._fU80)
            {
                if (g_U13391[I]._fU160._fU108._fU0)
                {
                    iVar5 = g_U13391[I]._fU160._fU108._fU20 - iVar6;
                    if (iVar5 < iVar3)
                    {
                        iVar3 = iVar5;
                        Result = I;
                    }
                }
            }
        }
    }
    return Result;
}

void sub_242140(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    int iVar6;

    if (NOT g_U13391[uParam0]._fU160._fU0)
    {
        return;
    }
    if (NOT g_U13391[uParam0]._fU160._fU80)
    {
        return;
    }
    if (g_U13391[uParam0]._fU160._fU108._fU16 == 0)
    {
        SCRIPT_ASSERT( "Send_Proc_Reminder: defaultTime for Proc Reminder is 0. Need to set up Proc reminder details using mission flow command" );
        return;
    }
    if (NOT g_U13391[uParam0]._fU160._fU108._fU0)
    {
        return;
    }
    uVar3 = g_U13391[uParam0]._fU160._fU108._fU4;
    uVar4 = g_U13391[uParam0]._fU160._fU108._fU8;
    uVar5 = g_U13391[uParam0]._fU160._fU108._fU12;
    iVar6 = 5000;
    sub_82376( uVar3 );
    sub_82482( uVar3, uVar4, uVar5, iVar6 );
    return;
}

void sub_242555(int iParam0)
{
    int I;
    int iVar4;
    int iVar5;

    I = 0;
    iVar4 = 0;
    iVar5 = 0;
    GET_GAME_TIMER( ref iVar5 );
    for ( I = 0; I < 28; I++ )
    {
        if (NOT (I == iParam0))
        {
            if (g_U13391[I]._fU160._fU0)
            {
                if (g_U13391[I]._fU160._fU80)
                {
                    iVar4 = g_U13391[I]._fU160._fU108._fU20 - iVar5;
                    if (iVar4 < 300000)
                    {
                        g_U13391[I]._fU160._fU108._fU20 += 300000;
                    }
                }
            }
        }
    }
    return;
}

void sub_242945(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU80._fU64 ))
    {
        if (NOT (g_U13391[uParam0]._fU80._fU76 == 0))
        {
            if (g_U13391[uParam0]._fU80._fU76 < iVar3)
            {
                FLASH_BLIP( g_U13391[uParam0]._fU80._fU64, 0 );
                CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU80._fU64, l_U5 );
                g_U13391[uParam0]._fU80._fU76 = 0;
            }
        }
    }
    else
    {
        g_U13391[uParam0]._fU80._fU76 = 0;
    }
    if (DOES_BLIP_EXIST( g_U13391[uParam0]._fU0._fU64 ))
    {
        if (NOT (g_U13391[uParam0]._fU0._fU76 == 0))
        {
            if (g_U13391[uParam0]._fU0._fU76 < iVar3)
            {
                FLASH_BLIP( g_U13391[uParam0]._fU0._fU64, 0 );
                CHANGE_BLIP_PRIORITY( g_U13391[uParam0]._fU0._fU64, l_U5 );
                g_U13391[uParam0]._fU0._fU76 = 0;
            }
        }
    }
    else
    {
        g_U13391[uParam0]._fU0._fU76 = 0;
    }
    return;
}

void sub_243449(int iParam0)
{
    if (iParam0 != 23)
    {
        return;
    }
    sub_50584();
    if (g_U13391[iParam0]._fU0._fU0 != 0)
    {
        return;
    }
    sub_243500();
    return;
}

void sub_243500()
{
    int iVar2;
    boolean bVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (g_U15936._fU16)
    {
        if (sub_243532())
        {
            if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
            {
                g_U15936._fU16 = 0;
                return;
            }
            if (NOT (IS_PLAYER_CONTROL_ON( CurrentPlayerId() )))
            {
                g_U15936._fU16 = 0;
                return;
            }
            if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() )))
            {
                g_U15936._fU16 = 0;
                g_U15936._fU8 = 0;
                return;
            }
            if ((IS_SCREEN_FADING_IN()) || ((IS_SCREEN_FADING_OUT()) || (IS_SCREEN_FADED_OUT())))
            {
                g_U15936._fU16 = 0;
                return;
            }
            if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
            {
                if (IS_CHAR_SHOOTING( CurrentPlayerChar() ))
                {
                    g_U15936._fU16 = 0;
                }
            }
            if (iVar2 > g_U15936._fU28)
            {
                g_U15936._fU20 = 1;
            }
            return;
        }
        bVar3 = g_U15936._fU20;
        g_U15936._fU16 = 0;
        g_U15936._fU20 = 0;
        g_U15936._fU28 = 0;
        if (bVar3)
        {
            return;
        }
        if (IS_BUTTON_PRESSED( 0, 15 ))
        {
            return;
        }
        if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
        {
            if (IS_CHAR_SHOOTING( CurrentPlayerChar() ))
            {
                return;
            }
        }
        if (g_U15936._fU4)
        {
            sub_243913();
            g_U15936._fU4 = 0;
        }
        if (sub_244002())
        {
            REQUEST_SCRIPT( ref g_U13391[23]._fU0._fU24 );
            g_U13391[23]._fU0._fU0 = 3;
            g_U8219 = 0;
        }
        return;
    }
    if (NOT sub_243532())
    {
        g_U15936._fU20 = 0;
        g_U15936._fU28 = 0;
    }
    if (NOT g_U15936._fU8)
    {
        g_U15936._fU24 = -1;
    }
    g_U15936._fU0 = 0;
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        g_U15936._fU0 = 1;
    }
    else if (NOT (IS_PLAYER_CONTROL_ON( CurrentPlayerId() )))
    {
        g_U15936._fU0 = 1;
    }
    if ((IS_SCREEN_FADING_IN()) || ((IS_SCREEN_FADING_OUT()) || (IS_SCREEN_FADED_OUT())))
    {
        g_U15936._fU0 = 1;
    }
    if (NOT g_U15936._fU0)
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() )))
        {
            g_U15936._fU0 = 1;
            g_U15936._fU8 = 0;
        }
    }
    if (NOT g_U15936._fU0)
    {
        if (g_U15936._fU4)
        {
            if (NOT (sub_244130( g_U15936._fU24 )))
            {
                g_U15936._fU0 = 1;
            }
        }
    }
    if (g_U15936._fU0)
    {
        if (g_U15936._fU4)
        {
            sub_243913();
            g_U15936._fU4 = 0;
        }
        return;
    }
    if (NOT g_U15936._fU8)
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            g_U15936._fU12 = 0;
            sub_244946();
            if (g_U15936._fU12)
            {
                g_U15936._fU8 = 1;
                g_U15936._fU4 = 1;
            }
            else
            {
                return;
            }
        }
        else
        {
            return;
        }
    }
    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        if (NOT (IS_CHAR_SHOOTING( CurrentPlayerChar() )))
        {
            if ((NOT IS_SCREEN_FADING_IN()) AND ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT())))
            {
                if (sub_245225())
                {
                    if (NOT (IS_BUTTON_PRESSED( 0, 15 )))
                    {
                        g_U15936._fU16 = 1;
                        g_U15936._fU28 = iVar2 + 200;
                    }
                }
            }
        }
    }
    return;
}

int sub_243532()
{
    if (((IS_CONTROL_PRESSED( 2, 23 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_BUTTON_PRESSED( 0, 4 )) AND (IS_USING_CONTROLLER())))
    {
        return 1;
    }
    return 0;
}

void sub_243913()
{
    int I;

    I = 0;
    for ( I = 0; I < g_U32824; I++ )
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U32697[I]._fU4 ))
        {
            CLEAR_HELP();
            return;
        }
    }
    return;
}

int sub_244002()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        return 0;
    }
    for ( I = 0; I < g_U32824; I++ )
    {
        iVar3 = g_U32697[I]._fU36;
        if (IS_CHAR_IN_MODEL( CurrentPlayerChar(), iVar3 ))
        {
            if (sub_244093( I ))
            {
                g_U13391[23]._fU0._fU24 = {g_U32697[I]._fU40};
                return 1;
            }
            return 0;
        }
    }
    return 0;
}

int sub_244093(unknown uParam0)
{
    if (NOT (IS_VEH_DRIVEABLE( g_U15936._fU32 )))
    {
        return 0;
    }
    if (NOT (sub_244130( uParam0 )))
    {
        return 0;
    }
    if (sub_244457())
    {
        sub_6591();
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_244130(unknown uParam0)
{
    float fVar3;
    float fVar4;

    if (g_U32697[uParam0]._fU72)
    {
        if (g_U10978)
        {
            PRINT_NOW( "R3_NMIS", 5000, 1 );
            return 0;
        }
        CLEAR_THIS_PRINT( "R3_NMIS" );
    }
    if (NOT (IS_VEH_DRIVEABLE( g_U15936._fU32 )))
    {
        return 0;
    }
    if (NOT ((GET_ENGINE_HEALTH( g_U15936._fU32 )) > 0.00000000))
    {
        return 0;
    }
    if (g_U32697[uParam0]._fU80)
    {
        GET_CAR_UPRIGHT_VALUE( g_U15936._fU32, ref fVar3 );
        if ((fVar3 > 1.01100000) || (fVar3 < 0.95000000))
        {
            return 0;
        }
    }
    if (NOT (IS_VEHICLE_ON_ALL_WHEELS( g_U15936._fU32 )))
    {
        return 0;
    }
    if (g_U32697[uParam0]._fU76)
    {
        GET_CAR_SPEED( g_U15936._fU32, ref fVar4 );
        if (fVar4 > 0.40000000)
        {
            return 0;
        }
    }
    if (g_U9890 == 1)
    {
        return 0;
    }
    if (g_U33837)
    {
        return 0;
    }
    return 1;
}

void sub_244457()
{
    return sub_6602( 0, 0 );
}

void sub_244946()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < g_U32824; I++ )
    {
        iVar3 = g_U32697[I]._fU36;
        if (IS_CHAR_IN_MODEL( CurrentPlayerChar(), iVar3 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( CurrentPlayerChar(), ref g_U15936._fU32 );
            if (sub_244130( I ))
            {
                if (NOT g_U15936._fU8)
                {
                    PRINT_HELP( ref g_U32697[I]._fU4 );
                }
                g_U15936._fU12 = 1;
                g_U15936._fU24 = I;
            }
            return;
        }
    }
    return;
}

int sub_245225()
{
    if (((IS_CONTROL_JUST_PRESSED( 2, 23 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_BUTTON_JUST_PRESSED( 0, 4 )) AND (IS_USING_CONTROLLER())))
    {
        return 1;
    }
    return 0;
}

void sub_245354(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    boolean bVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;
    boolean bVar10;

    sub_245367( uParam0, bParam1 );
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        return;
    }
    if (g_U10978)
    {
        return;
    }
    if (bParam1)
    {
        iVar4 = g_U13391[uParam0]._fU80._fU56;
    }
    else
    {
        iVar4 = g_U13391[uParam0]._fU0._fU56;
    }
    if (iVar4 == 0)
    {
        iVar5 = -1;
        bVar6 = true;
        if (bParam1)
        {
            iVar5 = g_U13391[uParam0]._fU80._fU4;
            bVar6 = g_U13391[uParam0]._fU80._fU72;
        }
        else
        {
            iVar5 = g_U13391[uParam0]._fU0._fU4;
            bVar6 = g_U13391[uParam0]._fU0._fU72;
        }
        if (bVar6)
        {
            uVar7 = sub_48070( uParam0, iVar5 );
            uVar8 = g_U26758[uVar7]._fU16;
            fVar9 = g_U9387[uVar8]._fU0._fU8 + 2.00000000;
            LOCATE_CHAR_ON_FOOT_3D( CurrentPlayerChar(), g_U9387[uVar8]._fU0._fU0, g_U9387[uVar8]._fU0._fU4, fVar9, 1.60000000, 1.60000000, 2.00000000, 1 );
        }
    }
    if (g_U10980)
    {
        return;
    }
    if ((sub_85695()) || (sub_85644()))
    {
        return;
    }
    if (NOT g_U26755)
    {
        return;
    }
    if (NOT (CAN_PLAYER_START_MISSION( CurrentPlayerId() )))
    {
        return;
    }
    if ((IS_AUTO_SAVE_IN_PROGRESS()) || (g_U9914._fU0))
    {
        return;
    }
    bVar10 = false;
    switch (iVar4)
    {
        case 0:
        bVar10 = sub_245867( uParam0, bParam1 );
        break;
        case 1:
        case 2:
        case 4:
        sub_247959( uParam0 );
        if (NOT bParam1)
        {
            g_U10981[uParam0]._fU28 = 1;
        }
        case 3:
        case 7:
        case 5:
        case 6:
        if (iVar4 == 2)
        {
            bVar10 = sub_248339( uParam0, bParam1, iVar4, 1 );
        }
        else
        {
            bVar10 = sub_248339( uParam0, bParam1, iVar4, 0 );
        }
        break;
        case 8:
        bVar10 = sub_245867( uParam0, bParam1 );
        break;
        default: sub_23915( "Main_Missions: Check_For_Mission_Start(): Unknown or illegal startType" );
    }
    if (bVar10)
    {
        switch (iVar4)
        {
            case 0:
            case 1:
            case 2:
            case 4:
            case 3:
            case 7:
            sub_51676();
            break;
        }
        switch (iVar4)
        {
            case 0:
            case 1:
            case 2:
            if (NOT bParam1)
            {
                g_U9893._fU40 = uParam0;
                g_U9893._fU44 = g_U13391[uParam0]._fU0._fU4;
                g_U9893._fU52 = {g_U13391[uParam0]._fU0._fU8};
                sub_93604( ref g_U9893._fU68 );
            }
            break;
        }
        switch (iVar4)
        {
            case 0:
            case 1:
            case 2:
            if (NOT bParam1)
            {
                sub_96113();
            }
            break;
        }
        switch (iVar4)
        {
            case 0:
            case 1:
            case 2:
            if (NOT bParam1)
            {
                sub_249632( uParam0 );
            }
            break;
        }
    }
    return;
}

void sub_245367(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_245867(int iParam0, boolean bParam1)
{
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    boolean bVar7;
    int iVar8;
    boolean bVar9;

    if (NOT sub_245876())
    {
        return 0;
    }
    iVar4 = -1;
    if (bParam1)
    {
        iVar4 = g_U13391[iParam0]._fU80._fU4;
    }
    else
    {
        iVar4 = g_U13391[iParam0]._fU0._fU4;
    }
    uVar5 = sub_48070( iParam0, iVar4 );
    uVar6 = g_U26758[uVar5]._fU16;
    bVar7 = false;
    if (g_U9387[uVar6]._fU16)
    {
        if (LOCATE_CHAR_ON_FOOT_3D( CurrentPlayerChar(), g_U9387[uVar6]._fU0._fU0, g_U9387[uVar6]._fU0._fU4, g_U9387[uVar6]._fU0._fU8, 1.60000000, 1.60000000, 2.00000000, 0 ))
        {
            bVar7 = true;
        }
    }
    iVar8 = 0;
    if (NOT bVar7)
    {
        if (g_U9387[uVar6]._fU20)
        {
            if (LOCATE_CHAR_IN_CAR_3D( CurrentPlayerChar(), g_U9387[uVar6]._fU0._fU0, g_U9387[uVar6]._fU0._fU4, g_U9387[uVar6]._fU0._fU8, 2.50000000, 2.50000000, 2.00000000, 0 ))
            {
                bVar7 = true;
            }
        }
    }
    if (NOT bVar7)
    {
        return 0;
    }
    bVar9 = false;
    if (g_U9893._fU12)
    {
        if (g_U9893._fU40 == iParam0)
        {
            if (NOT g_U9893._fU20)
            {
                return 0;
            }
            bVar9 = true;
        }
    }
    if (NOT bVar9)
    {
        if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
        {
            return 0;
        }
    }
    if ((NOT bVar9) AND (NOT bParam1))
    {
        if (NOT (sub_246316( 1, 1 )))
        {
            return 0;
        }
    }
    if (NOT bVar9)
    {
        g_U9893._fU24 = 1;
    }
    else
    {
        g_U9893._fU24 = 0;
    }
    if (IS_BIT_SET( g_U26758[uVar5]._fU108, 1 ))
    {
        if (NOT (sub_124990( g_U26758[uVar5]._fU68, g_U26758[uVar5]._fU76 )))
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U26758[uVar5]._fU84 )))
            {
                PRINT_HELP( ref g_U26758[uVar5]._fU84 );
            }
            return 0;
        }
        else if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U26758[uVar5]._fU84 ))
        {
            CLEAR_HELP();
        }
    }
    if (NOT bVar9)
    {
        if (NOT (sub_246801( iParam0 )))
        {
            return 0;
        }
    }
    if (bParam1)
    {
        REQUEST_SCRIPT( ref g_U13391[iParam0]._fU80._fU24 );
        g_U13391[iParam0]._fU80._fU0 = 3;
    }
    else
    {
        REQUEST_SCRIPT( ref g_U13391[iParam0]._fU0._fU24 );
        if (NOT bVar9)
        {
            sub_247786();
            g_U13391[iParam0]._fU0._fU0 = 2;
        }
        else
        {
            g_U13391[iParam0]._fU0._fU0 = 3;
            sub_247844();
        }
        CLEAR_WANTED_LEVEL( CurrentPlayerId() );
    }
    sub_47494( iParam0 );
    sub_247959( iParam0 );
    if (bParam1)
    {
        g_U10981[iParam0]._fU28 = 1;
    }
    return 1;
}

int sub_245876()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

int sub_246316(boolean bParam0, boolean bParam1)
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

int sub_246801(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    iVar3 = 0;
    I = 0;
    iVar5 = 10;
    for ( I = 0; I < 28; I++ )
    {
        iVar3 = g_U13391[I]._fU0._fU0;
        if ((iVar3 == 5) || ((iVar3 == 4) || ((iVar3 == 3) || (iVar3 == 2))))
        {
            iVar5 = g_U13391[I]._fU0._fU56;
            if ((iVar5 == 1) || ((iVar5 == 0) || (iVar5 == 2)))
            {
                PRINTSTRING( "------> EXTRA SECURITY CHECK: Not on mission but another strand's Story Mission is activating\n" );
                PRINTSTRING( "            (this strand: " );
                PRINTINT( uParam0 );
                PRINTSTRING( "    strand already activating: " );
                PRINTINT( I );
                PRINTSTRING( ")\n" );
                PRINTSTRING( "             (other strand statusID: " );
                switch (iVar3)
                {
                    case 2:
                    PRINTSTRING( "MISSION_ARRIVAL_CUTSCENE)\n" );
                    break;
                    case 3:
                    PRINTSTRING( "MISSION_STARTING)\n" );
                    break;
                    case 4:
                    PRINTSTRING( "MISSION_ACTIVE)\n" );
                    break;
                    case 5:
                    PRINTSTRING( "MISSION_END)\n" );
                    break;
                }
                PRINTSTRING( "             (other strand startType: " );
                switch (iVar5)
                {
                    case 2:
                    PRINTSTRING( "START_NOW_FADE)\n" );
                    break;
                    case 0:
                    PRINTSTRING( "START_POINT)\n" );
                    break;
                    case 1:
                    PRINTSTRING( "START_NOW)\n" );
                    break;
                }
                PRINTSTRING( "             (mission ID: " );
                PRINTINT( g_U13391[I]._fU0._fU4 );
                PRINTSTRING( " - " );
                PRINTSTRING( ref g_U13391[I]._fU0._fU24 );
                PRINTSTRING( ")\n" );
                PRINTSTRING( "             (" );
                PRINTSTRING( ref g_U13391[I]._fU0._fU8 );
                PRINTSTRING( ")\n" );
                return 0;
            }
        }
    }
    return 1;
}

void sub_247786()
{
    l_U8 = 0;
    return;
}

void sub_247844()
{
    int iVar2;

    if (IS_CHAR_DEAD( CurrentPlayerChar() ))
    {
        return;
    }
    iVar2 = 0;
    GET_CHAR_HEALTH( CurrentPlayerChar(), ref iVar2 );
    if (iVar2 >= 150)
    {
        return;
    }
    SET_CHAR_HEALTH( CurrentPlayerChar(), 150 );
    RESET_VISIBLE_PED_DAMAGE( CurrentPlayerChar() );
    return;
}

void sub_247959(unknown uParam0)
{
    int iVar3;

    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22: break;
        default: return;
    }
    iVar3 = sub_74605( uParam0 );
    if (iVar3 == 57)
    {
        return;
    }
    sub_248196( iVar3, uParam0 );
    return;
}

void sub_248196(unknown uParam0, unknown uParam1)
{
    g_U15946[uParam0]._fU164._fU0 = g_U10981[uParam1]._fU40[1];
    return;
}

int sub_248339(int iParam0, boolean bParam1, unknown uParam2, boolean bParam3)
{
    boolean bVar6;

    if (bParam1)
    {
        if (NOT (g_U13391[iParam0]._fU80._fU0 == 1))
        {
            sub_23915( "Main_Missions: Immediately_Start_Mission(): Attempting to Immediately Start friend mission but status is not Check For Start" );
            return 0;
        }
    }
    else if (NOT (g_U13391[iParam0]._fU0._fU0 == 1))
    {
        sub_23915( "Main_Missions: Immediately_Start_Mission(): Attempting to Immediately Start primary mission but status is not Check For Start" );
        return 0;
    }
    if (g_U10978)
    {
        sub_23915( "MAIN_MISSIONS: IMMEDIATE_START_MISSION but player already on a mission" );
        return 0;
    }
    if ((bParam3) AND (NOT bParam1))
    {
        if (NOT (sub_246316( 1, 1 )))
        {
            return 0;
        }
    }
    bVar6 = false;
    if ((g_U9893._fU20) AND ((g_U9893._fU40 == iParam0) AND (g_U9893._fU12)))
    {
        bVar6 = true;
    }
    if (NOT bVar6)
    {
        if (NOT (sub_246801( iParam0 )))
        {
            return 0;
        }
    }
    if (bVar6)
    {
        g_U9893._fU24 = 0;
        SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
        sub_247844();
        if (g_U9893._fU36)
        {
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    else
    {
        g_U9893._fU24 = 1;
    }
    if (bParam1)
    {
        REQUEST_SCRIPT( ref g_U13391[iParam0]._fU80._fU24 );
        g_U13391[iParam0]._fU80._fU0 = 3;
    }
    else
    {
        REQUEST_SCRIPT( ref g_U13391[iParam0]._fU0._fU24 );
        switch (uParam2)
        {
            case 1:
            case 2:
            if (sub_249036( iParam0 ))
            {
                PRINT_BIG( ref g_U13391[iParam0]._fU0._fU8, 6000, 2 );
            }
            break;
        }
        if (bParam3)
        {
            g_U13391[iParam0]._fU0._fU0 = 2;
        }
        else
        {
            g_U13391[iParam0]._fU0._fU0 = 3;
        }
    }
    sub_47494( iParam0 );
    return 1;
}

int sub_249036(unknown uParam0)
{
    if ((COMPARE_STRING( ref g_U13391[uParam0]._fU0._fU8, "F1MF1d" )) || (COMPARE_STRING( ref g_U13391[uParam0]._fU0._fU8, "ENDCRED" )))
    {
        return 0;
    }
    return 1;
}

void sub_249632(unknown uParam0)
{
    int iVar3;
    int I;
    int iVar5;

    if (g_U10981[uParam0]._fU116 == 0)
    {
        return;
    }
    iVar3 = 0;
    I = 0;
    for ( I = 0; I < 23; I++ )
    {
        if (IS_BIT_SET( g_U10981[uParam0]._fU116, I ))
        {
            iVar5 = I;
            iVar3 = sub_74221( iVar5 );
            if (sub_95672( iVar3 ))
            {
                if (g_U10981[iVar3]._fU144._fU84)
                {
                    sub_249764( iVar5 );
                }
            }
            g_U10981[iVar3]._fU144._fU36 = 1;
            if (g_U10981[uParam0]._fU116 == I)
            {
                return;
            }
        }
    }
    return;
}

void sub_249764(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_249822();
        break;
        case 3:
        sub_249906();
        break;
        case 7:
        sub_120095();
        break;
        case 8:
        sub_250003();
        break;
        case 13:
        sub_250043();
        break;
    }
    return;
}

void sub_249822()
{
    if (IsRomanTaxiRunning())
    {
        g_U64926 = 1;
    }
    return;
}

// sub_249831
int IsRomanTaxiRunning()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "roman_taxi" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_249906()
{
    if (IsJacobGunCarRunning())
    {
        g_U64925 = 1;
    }
    return;
}

// sub_249915
int IsJacobGunCarRunning()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "jacob_gun_car" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_250003()
{
    if (IsRomanTaxiRunning())
    {
        g_U64927 = 1;
    }
    return;
}

void sub_250043()
{
    if (sub_250052())
    {
        g_U64924 = 1;
    }
    return;
}

int sub_250052()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "packie_bomb" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_250262(unknown uParam0, int iParam1, boolean bParam2)
{
    if (bParam2)
    {
        return;
    }
    l_U25 = uParam0;
    if (NOT (l_U8 == 0))
    {
        sub_250297();
        return;
    }
    CLEAR_HELP();
    if (iParam1 == 51)
    {
        sub_251763();
        return;
    }
    g_U9200 = 0;
    switch (uParam0)
    {
        case 0:
        if (sub_252083( iParam1 ))
        {
            return;
        }
        break;
        case 1:
        if (sub_253120( iParam1 ))
        {
            return;
        }
        break;
        case 3:
        if (sub_253203( iParam1 ))
        {
            return;
        }
        break;
        case 4:
        if (sub_253269( iParam1 ))
        {
            return;
        }
        break;
        case 5:
        if (sub_253359( iParam1 ))
        {
            return;
        }
        break;
        case 6:
        if (sub_253425( iParam1 ))
        {
            return;
        }
        break;
        case 7:
        if (sub_253491( iParam1 ))
        {
            return;
        }
        break;
        case 8:
        if (sub_253557( iParam1 ))
        {
            return;
        }
        break;
        case 9:
        if (sub_253631( iParam1 ))
        {
            return;
        }
        break;
        case 11:
        if (sub_253697( iParam1 ))
        {
            return;
        }
        break;
        case 12:
        if (sub_253787( iParam1 ))
        {
            return;
        }
        break;
        case 13:
        if (sub_253861( iParam1 ))
        {
            return;
        }
        break;
        case 14:
        if (sub_253927( iParam1 ))
        {
            return;
        }
        break;
        case 15:
        if (sub_253993( iParam1 ))
        {
            return;
        }
        break;
        case 16:
        if (sub_254075( iParam1 ))
        {
            return;
        }
        break;
        case 18:
        if (sub_254149( iParam1 ))
        {
            return;
        }
        break;
        case 19:
        if (sub_254223( iParam1 ))
        {
            return;
        }
        break;
        case 20:
        if (sub_254297( iParam1 ))
        {
            return;
        }
        break;
        case 21:
        if (sub_254379( iParam1 ))
        {
            return;
        }
        break;
        default:
        sub_252953();
        return;
    }
    l_U8 = 7;
    return;
}

void sub_250297()
{
    int iVar2;
    int iVar3;
    float fVar4;
    int iVar5;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    fVar4 = 0.00000000;
    iVar5 = 0;
    switch (l_U8)
    {
        case 1:
        if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
        {
            GET_CHAR_SPEED( CurrentPlayerChar(), ref fVar4 );
            if (NOT l_U23)
            {
                if (fVar4 < 1.00000000)
                {
                    l_U23 = 1;
                }
            }
            else if ((fVar4 < 1.80000000) AND (fVar4 > 1.40000000))
            {
                iVar5 = 1;
            }
        }
        if ((iVar5) || (iVar2 > l_U22))
        {
            SET_WIDESCREEN_BORDERS( 1 );
            CREATE_CAM( 14, ref l_U26 );
            SET_CAM_POS( l_U26, l_U15._fU0, l_U15._fU4, l_U15._fU8 );
            SET_CAM_ROT( l_U26, l_U18._fU0, l_U18._fU4, l_U18._fU8 );
            SET_CAM_FOV( l_U26, l_U21 );
            CREATE_CAM( 14, ref l_U27 );
            SET_CAM_POS( l_U27, l_U15._fU0, l_U15._fU4, l_U15._fU8 );
            SET_CAM_ROT( l_U27, l_U18._fU0, l_U18._fU4, l_U18._fU8 );
            SET_CAM_FOV( l_U27, l_U21 - 3.00000000 );
            CREATE_CAM( 3, ref l_U28 );
            SET_INTERP_FROM_GAME_TO_SCRIPT( 0, 0 );
            SET_CAM_INTERP_STYLE_CORE( l_U28, l_U26, l_U27, 3500, 0 );
            if (IS_AREA_OCCUPIED( l_U15._fU0 - 2.00000000, l_U15._fU4 - 2.00000000, l_U15._fU8 - 2.00000000, l_U15._fU0 + 2.00000000, l_U15._fU4 + 2.00000000, l_U15._fU8 + 2.00000000, 0, 1, 0, 0, 0 ))
            {
                l_U9 = GET_CLOSEST_CAR( l_U15, 8.00000000, 0, 255 );
                if (DOES_VEHICLE_EXIST( l_U9 ))
                {
                    if (NOT (IS_CAR_DEAD( l_U9 )))
                    {
                        SET_CAR_VISIBLE( l_U9, 0 );
                    }
                }
            }
            SET_CAM_ACTIVE( l_U28, 1 );
            SET_CAM_PROPAGATE( l_U28, 1 );
            ACTIVATE_SCRIPTED_CAMS( 1, 1 );
            if (l_U24 == 0)
            {
                l_U22 = iVar2 + 1000;
            }
            else
            {
                l_U22 = iVar2 + 700;
            }
            l_U8 = 2;
        }
        break;
        case 2:
        if (iVar2 > l_U22)
        {
            DO_SCREEN_FADE_OUT( 500 );
            sub_250930();
            l_U22 = (iVar2 + 500) + 500;
            l_U8 = 3;
        }
        break;
        case 3:
        l_U29 = 0;
        if (IS_SCREEN_FADED_OUT())
        {
            l_U29 = 1;
        }
        if (NOT l_U29)
        {
            if (iVar2 > l_U22)
            {
                if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
                {
                    DO_SCREEN_FADE_OUT( 200 );
                    l_U22 = iVar2 + 500;
                }
            }
        }
        if (l_U29)
        {
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                CLEAR_CHAR_TASKS( CurrentPlayerChar() );
            }
            if (DOES_VEHICLE_EXIST( l_U9 ))
            {
                if (NOT (IS_CAR_DEAD( l_U9 )))
                {
                    SET_CAR_VISIBLE( l_U9, 1 );
                }
            }
            SET_WIDESCREEN_BORDERS( 0 );
            DESTROY_CAM( l_U26 );
            DESTROY_CAM( l_U27 );
            DESTROY_CAM( l_U28 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            END_CAM_COMMANDS( ref iVar3 );
            l_U8 = 4;
            sub_251231();
            sub_51601();
        }
        break;
        case 4:
        if (g_U9200)
        {
            l_U22 = iVar2 + 2000;
        }
        l_U8 = 7;
        break;
        case 5:
        if (g_U9200)
        {
            if ((iVar2 > l_U22) || (g_U9201))
            {
                g_U9200 = 0;
                g_U9201 = 0;
                l_U8 = 7;
            }
        }
        else
        {
            l_U8 = 7;
        }
        break;
        case 6:
        l_U29 = 0;
        if (IS_SCREEN_FADED_OUT())
        {
            l_U29 = 1;
        }
        if (NOT l_U29)
        {
            if (iVar2 > l_U22)
            {
                if ((NOT IS_SCREEN_FADING_OUT()) AND (NOT IS_SCREEN_FADED_OUT()))
                {
                    DO_SCREEN_FADE_OUT( 200 );
                    l_U22 = iVar2 + 500;
                }
            }
        }
        if (l_U29)
        {
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( CurrentPlayerChar() );
                }
                else
                {
                    SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( CurrentPlayerChar() );
                }
            }
            if (DOES_VEHICLE_EXIST( l_U9 ))
            {
                if (NOT (IS_CAR_DEAD( l_U9 )))
                {
                    SET_CAR_VISIBLE( l_U9, 1 );
                }
            }
            SET_WIDESCREEN_BORDERS( 0 );
            l_U8 = 4;
            sub_51601();
            if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
            {
                if (IS_CHAR_ON_FIRE( CurrentPlayerChar() ))
                {
                    EXTINGUISH_CHAR_FIRE( CurrentPlayerChar() );
                }
                SET_CHAR_PROOFS( CurrentPlayerChar(), 0, 0, 0, 0, 0 );
            }
            sub_251231();
        }
        break;
    }
    return;
}

void sub_250930()
{
    if (NOT (sub_249036( l_U25 )))
    {
        return;
    }
    PRINT_BIG( ref g_U13391[l_U25]._fU0._fU8, 30000, 2 );
    return;
}

void sub_251231()
{
    if (g_U64542._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U64542._fU4 )))
    {
        return;
    }
    DELETE_CHAR( ref g_U64542._fU4 );
    g_U64542._fU0 = 57;
    g_U64542._fU4 = nil;
    g_U64542._fU8 = 28;
    return;
}

void sub_251763()
{
    int iVar2;

    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        l_U8 = 7;
        return;
    }
    if ((NOT IS_SCREEN_FADED_OUT()) AND (NOT IS_SCREEN_FADING_OUT()))
    {
        DO_SCREEN_FADE_OUT( 500 );
    }
    sub_250930();
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U22 = (iVar2 + 500) + 500;
    l_U8 = 6;
    sub_6591();
    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        SET_CHAR_PROOFS( CurrentPlayerChar(), 1, 1, 1, 1, 1 );
    }
    return;
}

int sub_252083(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 36:
        sub_252127( uParam0 );
        return 1;
        case 2:
        sub_252953();
        return 1;
    }
    sub_253079();
    return 0;
}

void sub_252127(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
        {
            SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
        }
    }
    switch (uParam0)
    {
        case 1:
        sub_251763();
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 815.00000000, -259.00000000, 16.00000000, 1.50000000, 693041505 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 693041505, 815, 65277, 16, 0, -0.75000000 );
        }
        l_U24 = 1;
        break;
        case 3:
        sub_251763();
        if (DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS( 928, 65047, 16, 1.50000000, 387699963 ))
        {
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( 387699963, 928, 65047, 16, 0, 0.00000000 );
        }
        break;
        case 5:
        sub_251763();
        break;
        case 6:
        sub_251763();
        break;
        case 8:
        sub_251763();
        break;
        case 7:
        sub_251763();
        break;
        case 9:
        sub_251763();
        break;
        case 10:
        sub_251763();
        break;
        case 11:
        sub_251763();
        break;
        case 12:
        sub_251763();
        break;
        case 13:
        sub_251763();
        break;
        case 14:
        sub_251763();
        g_U9200 = 1;
        break;
        case 15:
        sub_251763();
        break;
        case 17:
        sub_251763();
        break;
        case 18:
        sub_251763();
        break;
        case 19:
        sub_251763();
        break;
        case 20:
        sub_251763();
        break;
        case 22:
        sub_251763();
        break;
        case 21:
        sub_251763();
        break;
        case 23:
        sub_251763();
        break;
        case 24:
        sub_251763();
        break;
        case 25:
        sub_251763();
        break;
        case 26:
        sub_251763();
        break;
        case 27:
        sub_251763();
        break;
        case 28:
        sub_251763();
        break;
        case 29:
        sub_251763();
        break;
        case 31:
        sub_251763();
        break;
        case 32:
        sub_251763();
        break;
        case 33:
        sub_251763();
        break;
        case 34:
        sub_251763();
        break;
        case 35:
        sub_251763();
        break;
        case 36:
        sub_251763();
        break;
        case 37:
        sub_251763();
        break;
        case 38:
        sub_251763();
        break;
    }
    return;
}

void sub_252953()
{
    int iVar2;

    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        l_U8 = 7;
        g_U9200 = 0;
        return;
    }
    SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
    CLEAR_CHAR_TASKS( CurrentPlayerChar() );
    DO_SCREEN_FADE_OUT( 500 );
    sub_250930();
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    l_U22 = (iVar2 + 500) + 500;
    l_U8 = 6;
    sub_6591();
    return;
}

void sub_253079()
{
    return;
}

int sub_253120(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_252127( uParam0 );
        return 1;
        case 18:
        sub_252953();
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_253203(unknown uParam0)
{
    switch (uParam0)
    {
        case 5:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_253269(unknown uParam0)
{
    switch (uParam0)
    {
        case 6:
        case 8:
        case 7:
        case 9:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_253359(unknown uParam0)
{
    switch (uParam0)
    {
        case 10:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_253425(unknown uParam0)
{
    switch (uParam0)
    {
        case 11:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_253491(unknown uParam0)
{
    switch (uParam0)
    {
        case 12:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_253557(unknown uParam0)
{
    switch (uParam0)
    {
        case 13:
        case 14:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_253631(unknown uParam0)
{
    switch (uParam0)
    {
        case 15:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_253697(unknown uParam0)
{
    switch (uParam0)
    {
        case 17:
        case 18:
        case 19:
        case 20:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_253787(unknown uParam0)
{
    switch (uParam0)
    {
        case 21:
        case 22:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_253861(unknown uParam0)
{
    switch (uParam0)
    {
        case 23:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_253927(unknown uParam0)
{
    switch (uParam0)
    {
        case 24:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_253993(unknown uParam0)
{
    switch (uParam0)
    {
        case 25:
        case 26:
        case 27:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_254075(unknown uParam0)
{
    switch (uParam0)
    {
        case 28:
        case 29:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_254149(unknown uParam0)
{
    switch (uParam0)
    {
        case 31:
        case 32:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_254223(unknown uParam0)
{
    switch (uParam0)
    {
        case 34:
        case 33:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_254297(unknown uParam0)
{
    switch (uParam0)
    {
        case 35:
        case 36:
        case 37:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

int sub_254379(unknown uParam0)
{
    switch (uParam0)
    {
        case 38:
        sub_252127( uParam0 );
        return 1;
    }
    sub_253079();
    return 0;
}

void sub_254509(int iParam0, boolean bParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;
    boolean bVar7;
    unknown uVar8;

    iVar4 = 10;
    if (bParam1)
    {
        iVar4 = g_U13391[iParam0]._fU80._fU56;
    }
    else
    {
        iVar4 = g_U13391[iParam0]._fU0._fU56;
    }
    bVar5 = false;
    if ((NOT (iParam0 == 23)) AND ((NOT (iVar4 == 5)) AND ((NOT (iVar4 == 6)) AND ((NOT (iVar4 == 4)) AND (NOT (iVar4 == 3))))))
    {
        bVar5 = true;
    }
    iVar6 = 8192;
    bVar7 = true;
    if (bParam1)
    {
        if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[iParam0]._fU80._fU24 )))
        {
            REQUEST_SCRIPT( ref g_U13391[iParam0]._fU80._fU24 );
            return;
        }
        iVar6 = 1820;
        if (iVar4 == 8)
        {
            g_U13391[iParam0]._fU80._fU60 = START_NEW_SCRIPT_WITH_ARGS( ref g_U13391[iParam0]._fU80._fU24, ref iParam0, 1, iVar6 );
        }
        else
        {
            g_U13391[iParam0]._fU80._fU60 = START_NEW_SCRIPT( ref g_U13391[iParam0]._fU80._fU24, iVar6 );
        }
        g_U13391[iParam0]._fU80._fU0 = 4;
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[iParam0]._fU80._fU24 );
    }
    else if (NOT (HAS_SCRIPT_LOADED( ref g_U13391[iParam0]._fU0._fU24 )))
    {
        REQUEST_SCRIPT( ref g_U13391[iParam0]._fU0._fU24 );
        return;
    }
    if ((iVar4 == 5) || ((iVar4 == 7) || (iVar4 == 6)))
    {
        iVar6 = 1024;
        bVar7 = false;
    }
    if (iParam0 == 23)
    {
        iVar6 = 1024;
        bVar7 = false;
    }
    if (sub_254951( iParam0, g_U13391[iParam0]._fU0._fU4, ref iVar6 ))
    {
        bVar7 = false;
    }
    if (sub_178725( iParam0, g_U13391[iParam0]._fU0._fU4 ))
    {
        iVar6 = 512;
        bVar7 = false;
    }
    if (sub_178813( iParam0, g_U13391[iParam0]._fU0._fU4 ))
    {
        iVar6 = 128;
        bVar7 = false;
    }
    if (sub_255088( iParam0, g_U13391[iParam0]._fU0._fU4 ))
    {
        iVar6 = 1828;
        bVar7 = false;
    }
    if (bVar7)
    {
        if (bVar5)
        {
            if (g_U10978)
            {
                g_U13391[iParam0]._fU0._fU0 = 6;
                PRINTNL();
                PRINTSTRING( "++++++++++++++++++++++++++++++++++++++\n" );
                PRINTSTRING( "Tried to launch another mission while on-mission. Brute Force Cancellation. (strand: " );
                PRINTINT( iParam0 );
                PRINTSTRING( ")\n" );
                PRINTSTRING( "++++++++++++++++++++++++++++++++++++++\n" );
                PRINTNL();
                return;
            }
        }
    }
    if (iVar4 == 8)
    {
        g_U13391[iParam0]._fU0._fU60 = START_NEW_SCRIPT_WITH_ARGS( ref g_U13391[iParam0]._fU0._fU24, ref iParam0, 1, iVar6 );
        PRINT_BIG( "pholder", 5000, 2 );
    }
    else
    {
        g_U13391[iParam0]._fU0._fU60 = START_NEW_SCRIPT( ref g_U13391[iParam0]._fU0._fU24, iVar6 );
        if (sub_85756( iParam0 ))
        {
            if ((NOT (iVar4 == 6)) AND (NOT (iVar4 == 5)))
            {
                g_U9921 = {g_U13391[iParam0]._fU0._fU8};
                uVar8 = sub_48070( iParam0, g_U13391[iParam0]._fU0._fU4 );
                sub_255675( uVar8 );
                g_U9930 = g_U26758[uVar8]._fU100;
                sub_43542( uVar8 );
                g_U9931 = uVar8;
                sub_255799( iParam0 );
                if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
                {
                    STOP_PED_SPEAKING( CurrentPlayerChar(), 1 );
                }
                if (iVar4 == 0)
                {
                    CLEAR_ADDITIONAL_TEXT( 0, 1 );
                    CLEAR_ADDITIONAL_TEXT( 6, 1 );
                }
            }
            g_U10981[iParam0]._fU12 = 0;
        }
    }
    g_U13391[iParam0]._fU0._fU0 = 4;
    MARK_SCRIPT_AS_NO_LONGER_NEEDED( ref g_U13391[iParam0]._fU0._fU24 );;
    if (bVar5)
    {
        g_U10978 = 1;
        CANCEL_OVERRIDE_RESTART();
        sub_51514( 1 );
        CLEAR_BRIEF();
    }
    if ((NOT (iParam0 == 23)) AND ((NOT (iVar4 == 4)) AND (NOT (iVar4 == 3))))
    {
        sub_256177( iParam0 );
    }
    return;
}

int sub_254951(int iParam0, int iParam1, unknown uParam2)
{
    if ((iParam1 == 1) AND (iParam0 == 2))
    {
        (uParam2^) = 1820;
        return 1;
    }
    return 0;
}

int sub_255088(int iParam0, int iParam1)
{
    if ((iParam1 == 0) AND (iParam0 == 26))
    {
        return 1;
    }
    if ((iParam1 == 1) AND (iParam0 == 26))
    {
        return 1;
    }
    if ((iParam1 == 2) AND (iParam0 == 26))
    {
        return 1;
    }
    if ((iParam1 == 3) AND (iParam0 == 26))
    {
        return 1;
    }
    if ((iParam1 == 4) AND (iParam0 == 26))
    {
        return 1;
    }
    return 0;
}

void sub_255675(int iParam0)
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
    iVar3++;
    g_U26758[iParam0]._fU100 = iVar3;
    INCREMENT_INT_STAT_NO_MESSAGE( 255, 1 );
    return;
}

void sub_255799(unknown uParam0)
{
    if (COMPARE_STRING( ref g_U13391[uParam0]._fU0._fU24, "Pause" ))
    {
        return;
    }
    sub_255861( g_U13391[uParam0]._fU0._fU8 );
    return;
}

void sub_255861(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (NOT (COMPARE_STRING( ref g_U9926, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up" );
        return;
    }
    g_U9926 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U9926 );
    return;
}

void sub_256177(unknown uParam0)
{
    g_U26746 = uParam0;
    if (g_U0)
    {
        g_U26745 = 1;
        return;
    }
    if (g_U10981[uParam0]._fU140 == 1)
    {
        g_U26745 = 0;
        return;
    }
    g_U26745 = 1;
    return;
}

void sub_256272(unknown uParam0, boolean bParam1)
{
    if (bParam1)
    {
        if (IS_THREAD_ACTIVE( g_U13391[uParam0]._fU80._fU60 ))
        {
            return;
        }
        g_U13391[uParam0]._fU80._fU0 = 5;
    }
    else if (IS_THREAD_ACTIVE( g_U13391[uParam0]._fU0._fU60 ))
    {
        return;
    }
    g_U13391[uParam0]._fU0._fU0 = 5;;
    return;
}

void sub_256525()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT g_U15654[19])
    {
        if (iVar2 > g_U9379)
        {
            g_U15654[19] = 1;
            sub_194245();
        }
    }
    if (g_U9940)
    {
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            if (iVar2 > g_U9941)
            {
                if (NOT (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )))
                {
                    g_U9940 = 0;
                }
            }
            return;
        }
        g_U9940 = 0;
    }
    if (NOT g_U9942)
    {
        return;
    }
    iVar3 = 0;
    if ((NOT (GET_TIME_SINCE_LAST_ARREST() == -1)) AND (GET_TIME_SINCE_LAST_ARREST() < 3000))
    {
        iVar3 = 1;
    }
    iVar4 = 0;
    if ((NOT (GET_TIME_SINCE_LAST_DEATH() == -1)) AND (GET_TIME_SINCE_LAST_DEATH() < 3000))
    {
        iVar4 = 1;
    }
    if ((iVar4) || (iVar3))
    {
        sub_194245();
    }
    iVar5 = 0;
    GET_MAX_WANTED_LEVEL( ref iVar5 );
    if (NOT (iVar5 == ProtectedGet(g_U9939)))
    {
        SET_MAX_WANTED_LEVEL( ProtectedGet(g_U9939) );
    }
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), ProtectedGet(g_U9939) ))
        {
            ALTER_WANTED_LEVEL( CurrentPlayerId(), ProtectedGet(g_U9939) );
        }
    }
    return;
}

void sub_256856()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int iVar7;

    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        return;
    }
    GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    iVar5 = GET_MAP_AREA_FROM_COORDS( uVar2 );
    iVar6 = 0;
    if (l_U497 > l_U495)
    {
        l_U495 = l_U497 + 1000;
        iVar6 = GET_INT_STAT( 363 );
        if ((g_U9938) AND ((NOT (iVar5 >= 4)) AND (iVar5 > iVar6)))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 5 )))
            {
                SET_MAX_WANTED_LEVEL( 6 );
                ALTER_WANTED_LEVEL( CurrentPlayerId(), 6 );
                APPLY_WANTED_LEVEL_CHANGE_NOW( CurrentPlayerId() );
                g_U9940 = 1;
                iVar7 = 0;
                GET_GAME_TIMER( ref iVar7 );
                g_U9941 = iVar7 + 30000;
            }
        }
    }
    if (iVar5 == g_U9937)
    {
        return;
    }
    g_U9937 = iVar5;
    sub_42808();
    if (NOT g_U10978)
    {
        if ((NOT (g_U9937 == 4)) AND (NOT (g_U9937 == 5)))
        {
            sub_43566();
        }
    }
    return;
}

void sub_257140()
{
    int iVar2;

    if (NOT g_U9380._fU0)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (IS_CHAR_DEAD( CurrentPlayerChar() ))
    {
        sub_6311();
        return;
    }
    if (IS_CHAR_SHOOTING( CurrentPlayerChar() ))
    {
        if (NOT g_U9380._fU4)
        {
            if ((g_U9380._fU12 > iVar2) || (g_U9380._fU12 == 0))
            {
                g_U9380._fU8 = 1;
            }
            else
            {
                sub_6311();
                return;
            }
        }
    }
    if (g_U9380._fU12 == 0)
    {
        if (g_U10978)
        {
            return;
        }
        if (g_U9380._fU4)
        {
            g_U9380._fU12 = iVar2;
            g_U9380._fU16 = iVar2 + 12000;
            g_U9380._fU8 = 1;
        }
        else
        {
            g_U9380._fU12 = iVar2 + 2000;
            g_U9380._fU16 = iVar2 + 5000;
        }
        START_FIRING_AMNESTY();
        return;
    }
    if (iVar2 > g_U9380._fU16)
    {
        sub_6311();
        return;
    }
    if (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 ))
    {
        if (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 1 ))
        {
            sub_6311();
            return;
        }
        if (g_U9380._fU8)
        {
            CLEAR_WANTED_LEVEL( CurrentPlayerId() );
            return;
        }
    }
    return;
}

void sub_257489()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 57;
    for ( I = 0; I < iVar3; I++ )
    {
        if (g_U26440[I]._fU0)
        {
            if (IS_CHAR_DEAD( g_U26440[I]._fU4 ))
            {
                g_U26440[I]._fU0 = 0;
                g_U26440[I]._fU4 = nil;
            }
        }
    }
    return;
}

void sub_257602()
{
    int iVar2;
    int iVar3;
    int I;
    int iVar5;
    int iVar6;

    sub_257611();
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 2147483647;
    I = 0;
    for ( I = 0; I < 59; I++ )
    {
        if (g_U63988._fU12[I]._fU0)
        {
            iVar6 = g_U63988._fU12[I]._fU12;
            if ((NOT (iVar6 == 34)) AND (NOT g_U15946[iVar6]._fU132._fU0))
            {
                sub_109477( I );
            }
            else
            {
                iVar5 = g_U63988._fU12[I]._fU20 - iVar2;
                if (iVar5 < iVar3)
                {
                    iVar3 = iVar5;
                }
            }
        }
    }
    if (iVar3 > 0)
    {
        return;
    }
    for ( I = 0; I < 59; I++ )
    {
        if (g_U63988._fU12[I]._fU0)
        {
            iVar5 = g_U63988._fU12[I]._fU20 - iVar2;
            if (iVar5 == iVar3)
            {
                if (sub_258147( g_U63988._fU12[I]._fU24 ))
                {
                    if ((NOT (sub_95739( g_U63988._fU12[I]._fU12 ))) AND (sub_106785( g_U63988._fU12[I]._fU12, 30000 )))
                    {
                        if ((NOT (sub_258467( I ))) AND (NOT (sub_258397( I ))))
                        {
                            sub_82616( g_U63988._fU12[I]._fU12, g_U63988._fU12[I]._fU16 );
                            g_U63988._fU12[I]._fU4 = 1;
                            g_U63988._fU12[I]._fU0 = 0;
                            sub_52331();
                            sub_87630( g_U63988._fU12[I]._fU12, 0 );
                            Trigger_Additional_Code( g_U63988._fU12[I]._fU28, g_U63988._fU12[I]._fU12 );
                        }
                    }
                }
            }
            if ((NOT g_U63988._fU12[I]._fU4) AND (iVar5 <= 0))
            {
                g_U63988._fU12[I]._fU20 = (iVar2 + 15000) + iVar5;
            }
        }
    }
    return;
}

void sub_257611()
{
    if (g_U10978)
    {
        sub_257630();
    }
    if (IS_THREAD_ACTIVE( g_U812 ))
    {
        sub_257724();
    }
    if (sub_86191())
    {
        sub_52331();
    }
    if (sub_95498())
    {
        sub_257813();
    }
    return;
}

void sub_257630()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_84619();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

void sub_257724()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + 5000;
    if (iVar3 > g_U63988._fU0)
    {
        g_U63988._fU0 = iVar3;
    }
    return;
}

void sub_257813()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + 10000;
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_258147(unknown uParam0)
{
    int iVar3;

    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    if ((NOT g_U9893._fU8) AND (g_U9893._fU4))
    {
        return 0;
    }
    if (g_U91._fU104)
    {
        return 0;
    }
    if (sub_95498())
    {
        return 0;
    }
    if (sub_85448())
    {
        return 0;
    }
    if (sub_258263())
    {
        return 0;
    }
    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_86171( uParam0 ))
    {
        return 0;
    }
    return 1;
}

int sub_258263()
{
    if (g_U9078)
    {
        return 1;
    }
    return 0;
}

void sub_258397(unknown uParam0)
{
    unknown uVar3;

    if (g_U63988._fU12[uParam0]._fU8)
    {
        return 0;
    }
    uVar3 = g_U63988._fU12[uParam0]._fU12;
    return g_U26613[uVar3];
}

void sub_258467(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown Result;

    if (sub_258478( uParam0 ))
    {
        return 0;
    }
    iVar3 = g_U63988._fU12[uParam0]._fU12;
    bVar4 = iVar3 < 23;
    if (bVar4)
    {
        if (g_U22274[iVar3]._fU500._fU4)
        {
            return 1;
        }
        if (sub_124915( iVar3 ))
        {
            return 1;
        }
        if (g_U22274[iVar3]._fU16)
        {
            return 1;
        }
        if (g_U33837)
        {
            return 1;
        }
    }
    bVar5 = false;
    Result = sub_258646( uParam0, ref bVar5 );
    if (bVar5)
    {
        sub_109477( uParam0 );
    }
    return Result;
}

int sub_258478(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 5: return 1;
    }
    return 0;
}

int sub_258646(unknown uParam0, unknown uParam1)
{
    int iVar4;

    (uParam1^) = 0;
    iVar4 = uParam0;
    if (iVar4 == 42)
    {
        if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
        {
            if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
            {
                if ((IS_CHAR_IN_MODEL( CurrentPlayerChar(), -276900515 )) || (IS_CHAR_IN_MODEL( CurrentPlayerChar(), -1932515764 )))
                {
                    (uParam1^) = 1;
                    return 1;
                }
            }
        }
        if (NOT g_U13391[0]._fU160._fU108._fU0)
        {
            (uParam1^) = 1;
            return 1;
        }
    }
    if (iVar4 == 43)
    {
        if (NOT g_U13391[3]._fU160._fU108._fU0)
        {
            (uParam1^) = 1;
            return 1;
        }
    }
    if ((iVar4 == 45) || (iVar4 == 44))
    {
        if (NOT g_U13391[22]._fU160._fU108._fU0)
        {
            (uParam1^) = 1;
            return 1;
        }
    }
    if (iVar4 == 46)
    {
        if (NOT g_U13391[8]._fU160._fU108._fU0)
        {
            (uParam1^) = 1;
            return 1;
        }
    }
    if (iVar4 == 47)
    {
        if (NOT g_U13391[19]._fU160._fU108._fU0)
        {
            (uParam1^) = 1;
            return 1;
        }
    }
    return 0;
}

void sub_259217()
{
    int iVar2;
    boolean bVar3;
    int iVar4;

    iVar2 = 59;
    bVar3 = true;
    while (bVar3)
    {
        if (l_U39 >= iVar2)
        {
            l_U39 = 0;
        }
        switch (g_U10324[l_U39]._fU12)
        {
            case 1:
            case 2:
            case 3:
            case 4:
            case 8:
            case 12:
            case 14:
            case 15:
            case 16:
            case 17:
            bVar3 = false;
            break;
            case 5:
            if (NOT (sub_259382( l_U39 )))
            {
                bVar3 = false;
            }
            break;
        }
        if (NOT bVar3)
        {
            if (g_U10856[l_U39]._fU0)
            {
                if (DOES_BLIP_EXIST( g_U10856[l_U39]._fU4 ))
                {
                    if ((sub_259520( l_U39 )) || (DOES_BLIP_EXIST( g_U10324[l_U39]._fU32 )))
                    {
                        REMOVE_BLIP( g_U10856[l_U39]._fU4 );
                        g_U10856[l_U39]._fU4 = nil;
                    }
                }
                else if ((NOT (sub_259722( l_U39 ))) AND ((NOT (sub_259520( l_U39 ))) AND (NOT (DOES_BLIP_EXIST( g_U10324[l_U39]._fU32 )))))
                {
                    if (NOT g_U10978)
                    {
                        sub_41939( ref g_U10856[l_U39]._fU4, g_U10324[l_U39]._fU0, g_U10324[l_U39]._fU24, g_U10324[l_U39]._fU20 );
                        SET_BLIP_AS_SHORT_RANGE( g_U10856[l_U39]._fU4, 1 );
                        sub_42579( l_U39 );
                    }
                }
            }
            else if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
            {
                if (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), g_U10324[l_U39]._fU0._fU0, g_U10324[l_U39]._fU0._fU4, g_U10324[l_U39]._fU0._fU8, 15.00000000, 15.00000000, 7.00000000, 0 ))
                {
                    GET_INTERIOR_FROM_CHAR( CurrentPlayerChar(), ref iVar4 );
                    if ((sub_260106( l_U39 )) || (NOT (iVar4 == nil)))
                    {
                        if (sub_260452( l_U39 ))
                        {
                            g_U10856[l_U39]._fU0 = 1;
                        }
                    }
                }
            }
        }
        l_U39++;
    }
    return;
}

int sub_259382(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 4: return 1;
    }
    return 0;
}

int sub_259520(unknown uParam0)
{
    unknown uVar3;

    uVar3 = uParam0;
    switch (uVar3)
    {
        case 4:
        if (DOES_BLIP_EXIST( g_U10324[10]._fU32 ))
        {
            return 1;
        }
        break;
        case 10:
        if (DOES_BLIP_EXIST( g_U10324[4]._fU32 ))
        {
            return 1;
        }
        break;
    }
    return 0;
}

int sub_259722(int iParam0)
{
    boolean bVar3;
    int iVar4;
    unknown uVar5;

    bVar3 = false;
    iVar4 = 0;
    switch (g_U10324[iParam0]._fU12)
    {
        case 8:
        bVar3 = true;
        break;
        case 5: return 1;
    }
    return 0;
    if (bVar3)
    {
        uVar5 = g_U10324[iParam0]._fU16;
        switch (uVar5)
        {
            case 16:
            case 11: return 0;
        }
        if ((iParam0 == 29) || (iParam0 == 2))
        {
            return 0;
        }
        return 1;
    }
    return 0;
}

int sub_260106(unknown uParam0)
{
    unknown uVar3;
    boolean bVar4;
    int iVar5;
    boolean bVar6;
    boolean bVar7;
    int iVar8;
    float fVar9;

    uVar3 = uParam0;
    bVar4 = false;
    iVar5 = 0;
    bVar6 = false;
    bVar7 = false;
    iVar8 = g_U10324[uParam0]._fU12;
    if ((iVar8 == 2) || (iVar8 == 16))
    {
        bVar4 = true;
        bVar6 = true;
        bVar7 = false;
    }
    switch (uVar3)
    {
        case 40:
        case 3:
        bVar4 = true;
        iVar5 = 1;
        bVar7 = true;
        break;
    }
    if (NOT bVar4)
    {
        return 0;
    }
    if ((bVar6) || (iVar5))
    {
        fVar9 = 2.50000000;
        if (bVar6)
        {
            fVar9 = 5.00000000;
        }
        if (LOCATE_CHAR_ON_FOOT_3D( CurrentPlayerChar(), g_U10324[uParam0]._fU0._fU0, g_U10324[uParam0]._fU0._fU4, g_U10324[uParam0]._fU0._fU8, fVar9, fVar9, 5.00000000, 0 ))
        {
            return 1;
        }
        if (bVar7)
        {
            return 0;
        }
        fVar9 = 4.00000000;
        if (bVar6)
        {
            fVar9 = 10.00000000;
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( CurrentPlayerChar(), g_U10324[uParam0]._fU0._fU0, g_U10324[uParam0]._fU0._fU4, g_U10324[uParam0]._fU0._fU8, fVar9, fVar9, 5.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_260452(unknown uParam0)
{
    unknown uVar3;
    int iVar4;

    uVar3 = uParam0;
    iVar4 = g_U10324[uParam0]._fU12;
    if (iVar4 == 16)
    {
        if (IS_PAY_N_SPRAY_ACTIVE())
        {
            return 1;
        }
        return 0;
    }
    if (iVar4 == 19)
    {
        if (g_U64663)
        {
            return 1;
        }
        return 0;
    }
    return 1;
}

void sub_260590()
{
    int iVar2;

    if (g_U15931._fU16 == 0)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U15931._fU16)
    {
        return;
    }
    g_U15931._fU16 = 0;
    if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( ref g_U15931._fU0 )))
    {
        return;
    }
    CLEAR_HELP();
    return;
}

void sub_260690()
{
    boolean bVar2;
    int iVar3;
    int iVar4;

    bVar2 = false;
    iVar3 = GET_TIME_SINCE_LAST_DEATH();
    if (NOT (iVar3 == -1))
    {
        if (iVar3 < 7000)
        {
            bVar2 = true;
        }
    }
    iVar4 = GET_TIME_SINCE_LAST_ARREST();
    if (NOT bVar2)
    {
        if (NOT (iVar4 == -1))
        {
            if (iVar4 < 7000)
            {
                bVar2 = true;
            }
        }
    }
    if (bVar2)
    {
        sub_52331();
        sub_96113();
    }
    return;
}

void sub_260801()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;

    if (g_U64542._fU4 == nil)
    {
        return;
    }
    if (g_U10978)
    {
        sub_6374();
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U64542._fU4 )))
    {
        sub_6374();
        return;
    }
    if (IS_CHAR_DEAD( CurrentPlayerChar() ))
    {
        return;
    }
    GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    if (IS_CHAR_INJURED( g_U64542._fU4 ))
    {
        N_1363505769( g_U64542._fU4, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( g_U64542._fU4, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    }
    fVar8 = sub_43344( uVar2, uVar5 );
    if (fVar8 <= 75.00000000)
    {
        return;
    }
    DELETE_CHAR( ref g_U64542._fU4 );
    sub_6374();
    return;
}

void sub_261054()
{
    if (g_U10978 == g_U10133._fU760)
    {
        return;
    }
    g_U10133._fU760 = g_U10978;
    sub_41765();
    return;
}

void sub_261143()
{
    int iVar2;
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar2 = GET_INT_STAT( 270 );
    if (NOT g_U9191)
    {
        if (iVar2 >= ProtectedGet(g_U9192))
        {
            sub_261200( 0 );
            g_U9191 = 1;
        }
    }
    iVar3 = GET_INT_STAT( 361 );
    if (NOT g_U64894)
    {
        if (iVar3 >= g_U64893)
        {
            sub_261200( 1 );
            g_U64894 = 1;
            sub_261359();
        }
    }
    return;
}

void sub_261200(unknown uParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    iVar3 = 0;
    if (NOT g_U64886[uParam0]._fU0)
    {
        iVar3 = ProtectedGet(g_U64886[uParam0]._fU8);
        if (iVar3 > 0)
        {
            sub_94246( 7, iVar3 );
            g_U64886[uParam0]._fU0 = 1;
            return;
        }
    }
    return;
}

void sub_261359()
{
    sub_261369( 18 );
    sub_196156( 19 );
    return;
}

void sub_261369(int iParam0)
{
    if (iParam0 < 20)
    {
        SWITCH_CAR_GENERATOR( g_U9029[iParam0], 0 );
        g_U8708[iParam0]._fU60 = 1;
    }
    return;
}

void sub_261460()
{
    if (NOT (g_U9178 == nil))
    {
        if (NOT (IS_THREAD_ACTIVE( g_U9178 )))
        {
            sub_51514( 0 );
        }
    }
    return;
}

void sub_261515()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        if (NOT (g_U32825[I]._fU0 == 57))
        {
            if (sub_75025( g_U32825[I]._fU0, 1 ))
            {
                sub_75373( ref g_U32825[I]._fU20, ref g_U32825[I]._fU4, 0 );
                sub_79389( ref g_U32825[I]._fU20, ref g_U32825[I]._fU4 );
                sub_52331();
            }
        }
    }
    return;
}

void sub_261670()
{
    int I;

    I = 0;
    for ( I = 0; I < 13; I++ )
    {
        // Seems to be getting the game timer
        sub_261696( I );
    }
    return;
}

// Seems to be getting the game timer
void sub_261696(unknown uParam0)
{
    int currentGameTimer;
    int iVar4;

    currentGameTimer = 0;
    GET_GAME_TIMER( ref currentGameTimer );
    iVar4 = 0;

    if (NOT g_U15807[uParam0]._fU0)
    {
        return;
    }

    if (g_U15807[uParam0]._fU12)
    {
        if (sub_80901())
        {
            return;
        }
        switch (sub_81198())
        {
            case 1:
            case 2:
            g_U15807[uParam0]._fU12 = 0;
            sub_261810( uParam0 );
            g_U15807[uParam0]._fU4 = g_U15807[uParam0]._fU8 + currentGameTimer;
            return;
        }
        g_U15807[uParam0]._fU12 = 0;
        g_U15807[uParam0]._fU0 = 0;
        g_U15807[uParam0]._fU16 = 1;
        sub_261810( uParam0 );
        sub_52331();
        sub_87630( g_U15873._fU0, 0 );
        return;
    }

    if (g_U10978)
    {
        iVar4 = g_U15807[uParam0]._fU4 - currentGameTimer;
        if (iVar4 < 20000)
        {
            g_U15807[uParam0]._fU4 = 30000 + currentGameTimer;
        }
        return;
    }

    if (g_U15807[uParam0]._fU4 > currentGameTimer)
    {
        return;
    }

    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        g_U15807[uParam0]._fU4 = 30000 + currentGameTimer;
        return;
    }

    if ((sub_85695()) || ((sub_86171( 0 )) || ((sub_85448()) || ((sub_85644()) || ((IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 )) || (IS_THREAD_ACTIVE( g_U812 )))))))
    {
        g_U15807[uParam0]._fU4 = 30000 + currentGameTimer;
        return;
    }

    if (sub_262225( uParam0 ))
    {
        g_U15807[uParam0]._fU4 = 30000 + currentGameTimer;
        return;
    }

    if (sub_262333( uParam0, ref g_U15873._fU0 ))
    {
        g_U15807[uParam0]._fU12 = 1;
        sub_52331();
        return;
    }

    g_U15807[uParam0]._fU4 = 30000 + currentGameTimer;
    return;
}

void sub_261810(int iParam0)
{
    int iVar3;
    int iVar4;
    int I;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    iVar4 = 0;
    I = 0;
    for ( I = 0; I < 13; I++ )
    {
        if (g_U15807[I]._fU0)
        {
            if (NOT (I == iParam0))
            {
                iVar4 = g_U15807[I]._fU4 - iVar3;
                if (iVar4 < 7000)
                {
                    g_U15807[I]._fU4 = iVar3 + 30000;
                }
            }
        }
    }
    return;
}

int sub_262225(int iParam0)
{
    int I;

    I = 0;
    for ( I = 0; I < 13; I++ )
    {
        if (NOT (I == iParam0))
        {
            if (g_U15807[I]._fU12)
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_262333(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    int Result;

    uVar4 = uParam0;
    Result = 0;
    switch (uVar4)
    {
        case 0:
        (uParam1^) = 0;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT (sub_262595( uParam0, (uParam1^) ))) AND ((NOT (sub_262488( (uParam1^) ))) AND ((NOT (sub_210074( 0 ))) AND (NOT g_U26555[(uParam1^)]))))))
        {
            Result = sub_89522( (uParam1^), "MF3_ROM11", "MF3AUD", 10000, 0 );
        }
        break;
        case 1:
        (uParam1^) = 0;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT (sub_262595( uParam0, (uParam1^) ))) AND ((NOT (sub_262488( (uParam1^) ))) AND ((NOT (sub_210074( 0 ))) AND (NOT g_U26555[(uParam1^)]))))))
        {
            Result = sub_89522( (uParam1^), "MF3_ROM5", "MF3AUD", 10000, 0 );
        }
        break;
        case 2:
        (uParam1^) = 1;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT (sub_262595( uParam0, (uParam1^) ))) AND ((NOT (sub_262488( (uParam1^) ))) AND ((NOT (sub_210074( 1 ))) AND (NOT g_U26555[(uParam1^)]))))))
        {
            Result = sub_89522( (uParam1^), "MF4_CVLA1", "MF9AUD", 10000, 0 );
        }
        break;
        case 3:
        (uParam1^) = 1;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT (sub_262595( uParam0, (uParam1^) ))) AND ((NOT (sub_262488( (uParam1^) ))) AND ((NOT (sub_210074( 1 ))) AND (NOT g_U26555[(uParam1^)]))))))
        {
            Result = sub_89522( (uParam1^), "MF4_CVLA2", "MF9AUD", 10000, 0 );
        }
        break;
        case 4:
        (uParam1^) = 2;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT (sub_262595( uParam0, (uParam1^) ))) AND ((NOT (sub_262488( (uParam1^) ))) AND (NOT g_U26555[(uParam1^)])))))
        {
            Result = sub_89522( (uParam1^), "MF6_MELIZA", "MF13AUD", 10000, 0 );
        }
        break;
        case 5:
        (uParam1^) = 26;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT g_U15654[35]) AND (NOT (sub_262595( uParam0, (uParam1^) ))))))
        {
            Result = sub_89522( (uParam1^), "MF2_CMALL7", "MF2AUD", 10000, 0 );
        }
        break;
        case 6:
        (uParam1^) = 3;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT (sub_262595( uParam0, (uParam1^) ))) AND ((NOT (sub_262488( (uParam1^) ))) AND (NOT g_U26555[(uParam1^)])))))
        {
            Result = sub_89522( (uParam1^), "MF6_JELIZ", "MF13AUD", 10000, 0 );
        }
        break;
        case 10:
        (uParam1^) = 25;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT (sub_262595( uParam0, (uParam1^) ))) AND ((NOT (sub_262488( (uParam1^) ))) AND (NOT g_U26555[(uParam1^)])))))
        {
            Result = sub_89522( (uParam1^), "MF5_DOCKS", "MF10AUD", 10000, 0 );
        }
        break;
        case 11:
        (uParam1^) = 25;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT (sub_262595( uParam0, (uParam1^) ))) AND ((NOT (sub_262488( (uParam1^) ))) AND (NOT g_U26555[(uParam1^)])))))
        {
            Result = sub_89522( (uParam1^), "MF5_HAND", "MF10AUD", 10000, 0 );
        }
        break;
        case 7:
        (uParam1^) = 8;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT (sub_262595( uParam0, (uParam1^) ))) AND ((NOT (sub_262488( (uParam1^) ))) AND ((NOT (sub_210074( 8 ))) AND (NOT g_U26555[(uParam1^)]))))))
        {
            Result = sub_89522( (uParam1^), "MF5_CGAMBL", "MF11AUD", 10000, 0 );
        }
        break;
        case 8:
        (uParam1^) = 11;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT (sub_262595( uParam0, (uParam1^) ))) AND ((NOT (sub_262488( (uParam1^) ))) AND ((NOT (sub_210074( 11 ))) AND (NOT g_U26555[(uParam1^)]))))))
        {
            Result = sub_89522( (uParam1^), "MF4_FM5", "MF8AUD", 10000, 0 );
        }
        break;
        case 9:
        (uParam1^) = 25;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT (sub_262595( uParam0, (uParam1^) ))) AND ((NOT (sub_262488( (uParam1^) ))) AND (NOT g_U26555[(uParam1^)])))))
        {
            Result = sub_89522( (uParam1^), "MF5_CCHASE", "MF10AUD", 10000, 0 );
        }
        break;
        case 12:
        (uParam1^) = 14;
        if ((sub_106785( (uParam1^), 30000 )) AND ((NOT (sub_95739( (uParam1^) ))) AND ((NOT (sub_262595( uParam0, (uParam1^) ))) AND ((NOT (sub_262488( (uParam1^) ))) AND ((NOT (sub_210074( 14 ))) AND (NOT g_U26555[(uParam1^)]))))))
        {
            Result = sub_89522( (uParam1^), "MF3_RB2", "MF7AUD", 10000, 0 );
        }
        break;
        default: sub_23915( "Flow_Make_Ambient_Phonecall: Unknown ambient phone call ID" );
    }
    return Result;
}

int sub_262488(int iParam0)
{
    if (iParam0 < 23)
    {
        if (g_U22274[iParam0]._fU16)
        {
            return 1;
        }
    }
    if (g_U33837)
    {
        return 1;
    }
    if (iParam0 < 23)
    {
        if (g_U22274[iParam0]._fU500._fU4)
        {
            return 1;
        }
    }
    return 0;
}

int sub_262595(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = false;
    if (NOT g_U15946[uParam1]._fU132._fU0)
    {
        bVar4 = true;
    }
    if (bVar4)
    {
        g_U15807[uParam0]._fU0 = 0;
        g_U15807[uParam0]._fU16 = 1;
        return 1;
    }
    return 0;
}

void sub_264181()
{
    int I;

    if (NOT g_U34175._fU0)
    {
        return;
    }
    I = 0;
    for ( I = 0; I < 14; I++ )
    {
        if (g_U34048[I]._fU0)
        {
            if (g_U34048[I]._fU4)
            {
                if (NOT g_U34048[I]._fU24)
                {
                    if (sub_89959( g_U34048[I]._fU8 ))
                    {
                        g_U34048[I]._fU24 = 1;
                    }
                }
            }
        }
    }
    return;
}

// sub_264335
// Flash blip
void FlashMissionBlip()
{
    int currentGameTimer;
    int I;

    currentGameTimer = 0;
    GET_GAME_TIMER( ref currentGameTimer );
    I = 0;
    for ( I = 0; I < 59; I++ )
    {
        if (DOES_BLIP_EXIST( g_U10324[I]._fU32 ))
        {
            if (NOT (g_U10133._fU520[I] == 0))
            {
                if (g_U10133._fU520[I] < currentGameTimer)
                {
                    FLASH_BLIP( g_U10324[I]._fU32, 0 );
                    g_U10133._fU520[I] = 0;
                    CHANGE_BLIP_PRIORITY( g_U10324[I]._fU32, l_U4 );
                }
            }
        }
    }
    return;
}

void sub_264516()
{
    int J;
    int I;

    if (sub_95498())
    {
        l_U498 = l_U497 + 60000;
        return;
    }
    if (l_U498 == 0)
    {
        return;
    }
    if (l_U497 < l_U498)
    {
        return;
    }
    J = 0;
    for ( J = 0; J < 57; J++ )
    {
        g_U15946[J]._fU4 = 0;
        I = 0;
        for ( I = 0; I < 14; I++ )
        {
            g_U15946[J]._fU8[1]._fU0[I] = 0;
        }
    }
    l_U498 = 0;
    return;
}

// Trigger mission complete audio
// Set player control to enabled
void sub_264693()
{
    if (CAN_START_MISSION_PASSED_TUNE())
    {
        if (NOT (g_U21 == 0))
        {
            TRIGGER_MISSION_COMPLETE_AUDIO( g_U21 );
        }
        g_U21 = 0;
    }
    if (IS_AUTO_SAVE_IN_PROGRESS())
    {
        return;
    }
    if (g_U9914._fU4)
    {
        g_U9914._fU4 = 0;
        Trigger_Additional_Code( g_U9914._fU24, 57 );
        g_U9914._fU24 = 7;
        if (g_U9914._fU16)
        {
            g_U9914._fU16 = 0;
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
            }
        }
        return;
    }
    if (NOT g_U9914._fU0)
    {
        return;
    }
    if (g_U10978)
    {
        if (g_U9914._fU12)
        {
            sub_15753();
            return;
        }
        return;
    }
    g_U9914._fU12 = 1;
    if (GET_MISSION_FLAG())
    {
        return;
    }
    if (sub_95498())
    {
        return;
    }
    if (NOT IS_SCREEN_FADED_IN())
    {
        if (NOT g_U9914._fU20)
        {
            return;
        }
        else if (IS_SCREEN_FADING_OUT())
        {
            return;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
    {
        return;
    }
    if (g_U9914._fU8)
    {
        return;
    }
    if (IS_FRONTEND_FADING())
    {
        return;
    }
    g_U9914._fU0 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU20 = 0;
    DO_AUTO_SAVE();
    g_U9914._fU4 = 1;
    return;
}

void sub_265082()
{
    int iVar2;
    string sVar3;
    boolean bVar4;
    boolean bVar5;
    boolean bVar6;
    boolean bVar7;
    boolean bVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    replayHelpScript = "replayHelp";
    if (g_U9893._fU20)
    {
        if (g_U9893._fU32)
        {
            SET_GAME_CAM_HEADING( 0.00000000 );
            g_U9893._fU32 = 0;
        }
        g_U10981[g_U9893._fU40]._fU120 = 0;
        return;
    }
    if (NOT g_U9893._fU4)
    {
        return;
    }
    if (NOT g_U9893._fU12)
    {
        if (g_U9893._fU8)
        {
            return;
        }
        bVar4 = false;
        if (g_U9893._fU48 == 0)
        {
            bVar4 = true;
        }
        if (NOT bVar4)
        {
            if (iVar2 > g_U9893._fU48)
            {
                bVar4 = true;
            }
        }

        bVar5 = false;
        if ((NOT (GET_TIME_SINCE_LAST_ARREST() == -1)) AND (GET_TIME_SINCE_LAST_ARREST() < 10000))
        {
            bVar5 = true;
        }

        bVar6 = false;
        if ((NOT (GET_TIME_SINCE_LAST_DEATH() == -1)) AND (GET_TIME_SINCE_LAST_DEATH() < 10000))
        {
            bVar6 = true;
        }

        bVar7 = false;

        if (NOT (IS_PLAYER_PLAYING( CurrentPlayerId() )))
        {
            if ((NOT bVar6) AND (NOT bVar5))
            {
                bVar7 = true;
            }
        }

        bVar8 = false;

        if (NOT IS_SCREEN_FADED_IN())
        {
            bVar8 = true;
        }

        if ((bVar4) AND ((NOT sub_258263()) AND ((NOT sub_95498()) AND ((NOT bVar8) AND ((NOT bVar7) AND (NOT g_U10978))))))
        {
            if (g_U9893._fU48 == 0)
            {
                g_U9893._fU48 = iVar2 + 500;
                return;
            }

            if (NOT g_U9893._fU0)
            {
                if (NOT (HAS_SCRIPT_LOADED( replayHelpScript )))
                {
                    REQUEST_SCRIPT( replayHelpScript );
                }
                else
                {
                    START_NEW_SCRIPT( replayHelpScript, 1024 );
                    MARK_SCRIPT_AS_NO_LONGER_NEEDED( replayHelpScript );
                    g_U9893._fU0 = 1;
                }
            }
            if (g_U9893._fU0)
            {
                uVar9 = sub_265563();
                uVar10 = sub_82639( uVar9 );
                sub_265797( uVar10 );
                g_U9893._fU8 = 1;
                sub_266185();
            }
        }
        return;
    }
    if (NOT sub_245876())
    {
        return;
    }
    if (NOT g_U9893._fU16)
    {
        if (NOT IS_SCREEN_FADED_IN())
        {
            return;
        }
        if (g_U10978)
        {
            sub_23915( "main.sc - Replay requested when 'on mission' - this shouldn't happen" );
            g_U9893._fU12 = 0;
            return;
        }
        SET_TEXT_DRAW_BEFORE_FADE( 0 );
        PRINT_BIG( ref g_U9893._fU52, 5000, 2 );
        SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
        DO_SCREEN_FADE_OUT( 500 );
        g_U9893._fU36 = 1;
        g_U9893._fU16 = 1;
    }
    if (g_U9893._fU16)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            return;
        }
    }
    CLEAR_WANTED_LEVEL( CurrentPlayerId() );
    CLEAR_CHAR_TASKS_IMMEDIATELY( CurrentPlayerChar() );
    sub_120095();
    uVar11 = sub_48070( g_U9893._fU40, g_U9893._fU44 );
    uVar12 = g_U26758[uVar11]._fU12;
    uVar13 = uVar12;
    iVar14 = 0;
    sub_266568();
    switch (uVar13)
    {
        case 0:
        if (NOT sub_267353())
        {
            return;
        }

        iVar14 = g_U26758[uVar11]._fU16;
        uVar15 = {g_U9387[iVar14]._fU0};

        WarpPlayerToCoords( uVar15._fU0, uVar15._fU4, uVar15._fU8, 0.00000000 );
        CLEAR_AREA_OF_CHARS( uVar15._fU0, uVar15._fU4, uVar15._fU8, 100.00000000 );

        g_U9893._fU20 = 1;
        break;
        case 1:
        if (NOT sub_270384())
        {
            return;
        }
        sub_270540();
        g_U9893._fU20 = 1;
        break;
        default:
        DO_SCREEN_FADE_IN( 500 );
        SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
        sub_23915( "main.sc - Replay requested on script that doesn't start at a start_point" );
        return;
    }
    if (g_U9893._fU20)
    {
        sub_272127();
        CLEAR_ADDITIONAL_TEXT( 0, 1 );
        CLEAR_ADDITIONAL_TEXT( 6, 1 );
        CLEAR_HELP();
        CLEAR_PRINTS();
        g_U9893._fU32 = 1;
        sub_251231();
    }
    return;
}

void sub_265563()
{
    int Result;

    Result = sub_265572();
    if (NOT (Result == 57))
    {
        return Result;
    }
    return sub_74605( g_U9893._fU40 );
}

int sub_265572()
{
    switch (g_U9893._fU40)
    {
        case 0:
        if (g_U9893._fU44 == 20)
        {
            return 3;
        }
        if (g_U9893._fU44 == 15)
        {
            return 22;
        }
        break;
        case 4:
        if ((g_U9893._fU44 == 5) || (g_U9893._fU44 == 6))
        {
            return 25;
        }
        break;
        case 11:
        if (g_U9893._fU44 == 7)
        {
            return 13;
        }
        break;
    }
    return 57;
}

void sub_265797(unknown uParam0)
{
    int I;
    int iVar4;
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
    unknown uVar15;

    array(ref uVar9._fU0._fU0, 3);
    ref uVar9._fU0;
    ref uVar9;
    sub_83130( uParam0, 0, 0, 0, ref uVar9 );
    iVar4 = sub_83757( uVar9._fU0 );
    if (iVar4 != -1)
    {
        SCRIPT_ASSERT( "REPLAY MESSAGE ALREADY EXISTS" );
        sub_52082( iVar4 );
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_83630())
        {
            sub_52082( 0 );
        }
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {uVar9._fU0};
            I = g_U569;
            uVar5 = {g_U9921};
            ConcatString(ref uVar5, "a", 16);
            SET_PHONE_HUD_ITEM( 5, ref uVar5, -1 );
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U91._fU0 == 1000)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U810 = 1;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return;
}

void sub_266185()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + 25000;
    if (iVar3 > g_U63988._fU0)
    {
        g_U63988._fU0 = iVar3;
    }
    return;
}

void sub_266568()
{
    sub_266577();
    if (NOT (sub_206063( ref g_U9893._fU68 )))
    {
        sub_23915( "Replay_Set_Day_And_Time: Date and Time of replay hasn't been set" );
        return;
    }
    sub_266764( ref g_U9893._fU68 );
    return;
}

void sub_266577()
{
    switch (g_U9893._fU40)
    {
        case 0: if (g_U9893._fU44 == 18)
        {
            g_U9893._fU68._fU8._fU0 = 10;
            g_U9893._fU68._fU8._fU4 = 0;
        }
    }
    return;
}

void sub_266764(int iParam0)
{
    if (NOT (sub_206063( iParam0 )))
    {
        return;
    }
    if (NOT (sub_89959( (iParam0^) )))
    {
        return;
    }
    while (NOT (sub_266811( iParam0 + 0 )))
    {
        SET_TIME_ONE_DAY_BACK();
    }
    if ((NOT (sub_266989( iParam0->_fU8 ))) AND (NOT (sub_266911( iParam0->_fU8 ))))
    {
        SET_TIME_ONE_DAY_BACK();
    }
    if (NOT (sub_266989( iParam0->_fU8 )))
    {
        FORWARD_TO_TIME_OF_DAY( ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4 );
    }
    if (NOT (sub_267084( iParam0 )))
    {
        sub_23915( "KM_Rewind_GameDateTime_To_DateTime: Game DateTime should now match required DateTime - it doesn't" );
    }
    return;
}

void sub_266811(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;

    sub_93617( ref uVar3 );
    return sub_266829( uParam0, ref uVar3 );
}

int sub_266829(int iParam0, int iParam1)
{
    if ((iParam0->_fU0 == iParam1->_fU0) AND (iParam0->_fU4 == iParam1->_fU4))
    {
        return 1;
    }
    return 0;
}

int sub_266911(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    GET_TIME_OF_DAY( ref uVar4._fU0, ref uVar4._fU4 );
    if (sub_125370( uParam0, uVar4 ))
    {
        return 0;
    }
    if (sub_125494( uParam0, uVar4 ))
    {
        return 0;
    }
    return 1;
}

void sub_266989(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;

    GET_TIME_OF_DAY( ref uVar4._fU0, ref uVar4._fU4 );
    return sub_125494( uVar4, uParam0 );
}

void sub_267084(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    sub_93604( ref uVar3 );
    return sub_267102( uParam0, ref uVar3 );
}

int sub_267102(int iParam0, int iParam1)
{
    if (((ref iParam0->_fU8->_fU4) == (ref iParam1->_fU8->_fU4)) AND (((ref iParam0->_fU8->_fU0) == (ref iParam1->_fU8->_fU0)) AND (((ref iParam0->_fU0->_fU0) == (ref iParam1->_fU0->_fU0)) AND ((ref iParam0->_fU0->_fU4) == (ref iParam1->_fU0->_fU4)))))
    {
        return 1;
    }
    return 0;
}

int sub_267353()
{
    if (g_U9893._fU44 == g_U13391[g_U9893._fU40]._fU0._fU4)
    {
        return 1;
    }
    Advance_Sequence_To_The_Replay_Mission_Gather_Sequence_Variables();
    return 0;
}


// sub_267403 
// Found name in debug line
void Advance_Sequence_To_The_Replay_Mission_Gather_Sequence_Variables()
{
    switch (g_U9893._fU40)
    {
        case 0:
        Advance_Sequence_To_The_Replay_Mission( ref g_U34285 );
        break;
        case 1:
        Advance_Sequence_To_The_Replay_Mission( ref g_U41566 );
        break;
        case 2:
        Advance_Sequence_To_The_Replay_Mission( ref g_U42287 );
        break;
        case 3:
        Advance_Sequence_To_The_Replay_Mission( ref g_U42608 );
        break;
        case 4:
        Advance_Sequence_To_The_Replay_Mission( ref g_U44209 );
        break;
        case 5:
        Advance_Sequence_To_The_Replay_Mission( ref g_U45410 );
        break;
        case 6:
        Advance_Sequence_To_The_Replay_Mission( ref g_U45811 );
        break;
        case 7:
        Advance_Sequence_To_The_Replay_Mission( ref g_U46852 );
        break;
        case 8:
        Advance_Sequence_To_The_Replay_Mission( ref g_U49013 );
        break;
        case 9:
        Advance_Sequence_To_The_Replay_Mission( ref g_U51654 );
        break;
        case 10:
        Advance_Sequence_To_The_Replay_Mission( ref g_U52935 );
        break;
        case 11:
        Advance_Sequence_To_The_Replay_Mission( ref g_U53176 );
        break;
        case 12:
        Advance_Sequence_To_The_Replay_Mission( ref g_U55257 );
        break;
        case 13:
        Advance_Sequence_To_The_Replay_Mission( ref g_U56058 );
        break;
        case 14:
        Advance_Sequence_To_The_Replay_Mission( ref g_U58219 );
        break;
        case 15:
        Advance_Sequence_To_The_Replay_Mission( ref g_U58940 );
        break;
        case 16:
        Advance_Sequence_To_The_Replay_Mission( ref g_U60701 );
        break;
        case 17:
        Advance_Sequence_To_The_Replay_Mission( ref g_U61262 );
        break;
        case 18:
        Advance_Sequence_To_The_Replay_Mission( ref g_U61423 );
        break;
        case 19:
        Advance_Sequence_To_The_Replay_Mission( ref g_U61984 );
        break;
        case 20:
        Advance_Sequence_To_The_Replay_Mission( ref g_U62545 );
        break;
        case 21:
        Advance_Sequence_To_The_Replay_Mission( ref g_U63346 );
        break;
        case 22:
        Advance_Sequence_To_The_Replay_Mission( ref g_U63747 );
        break;
        default: sub_23915( "Advance_Sequence_To_The_Replay_Mission_Gather_Sequence_Variables(): Illegal strand" );
    }
    return;
}


// sub_267618
// Seems to be setting a lot of globals in sub_267403, found name in debug line
void Advance_Sequence_To_The_Replay_Mission(unknown uParam0)
{
    boolean bVar3;
    boolean bVar4;
    int iVar5;
    unknown uVar6;

    bVar3 = true;
    bVar4 = false;
    iVar5 = g_U10981[g_U9893._fU40]._fU16;
    while (bVar3)
    {
        uVar6 = (uParam0^)[iVar5]._fU0;
        switch (uVar6)
        {
            case 10:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 9:
            if ((uParam0^)[iVar5]._fU4._fU0 == g_U9893._fU44)
            {
                bVar3 = false;
                bVar4 = true;
            }
            break;
            case 0:
            case 6:
            case 7:
            case 8:
            case 11:
            case 14:
            case 13:
            case 12:
            case 15:
            case 16:
            case 17:
            case 18:
            case 19:
            case 20:
            case 21:
            case 22:
            case 23:
            case 24:
            case 26:
            case 27:
            case 28:
            case 29:
            case 30:
            case 31:
            case 32:
            case 33:
            case 34:
            case 35:
            case 36:
            case 37:
            case 38:
            case 39:
            case 40:
            case 41:
            case 42:
            case 43:
            case 44:
            case 45:
            case 46:
            case 47:
            case 48:
            case 49:
            case 50:
            case 51:
            case 52:
            case 53:
            case 54:
            case 55:
            case 56:
            case 57:
            case 58:
            case 59:
            case 60:
            case 61:
            case 62:
            case 63:
            case 64:
            case 65:
            case 66:
            case 67:
            case 72:
            case 73:
            case 74:
            case 75:
            case 76:
            case 77:
            case 78:
            case 79:
            case 80:
            case 81:
            case 82:
            case 83:
            case 84:
            case 85:
            case 86:
            case 87:
            case 88:
            case 89:
            case 90:
            case 91:
            case 92:
            case 93:
            case 94:
            case 95:
            case 96:
            case 97:
            case 98:
            case 99:
            case 100:
            case 101:
            case 102:
            case 103:
            case 104:
            case 105:
            case 106:
            case 107:
            case 108:
            case 109:
            case 110:
            case 111:
            case 112:
            case 113:
            case 114:
            case 115:
            case 116:
            case 117:
            case 118:
            case 119:
            case 120:
            case 121:
            case 122:
            case 123:
            case 124:
            case 125:
            case 126:
            case 25:
            case 128:
            case 129:
            case 130:
            case 131:
            case 132:
            case 127:
            case 68:
            case 69:
            case 70:
            case 71:
            case 134:
            case 133:
            case 135:
            case 136:
            case 137:
            case 138:
            case 139:
            case 140:
            case 141:
            case 144: break;
            case 142:
            case 143:
            case 145:
            case 146:
            sub_23915( "replay.sch: Advance_Sequence_To_The_Replay_Mission() - hit an end of strand command" );
            bVar3 = false;
            break;
            default:
            sub_23915( "replay.sch: Advance_Sequence_To_The_Replay_Mission() - unrecognised command" );
            bVar3 = false;
        }
        if (bVar3)
        {
            iVar5++;
        }
    }
    if (bVar4)
    {
        g_U10981[g_U9893._fU40]._fU16 = iVar5;
        return;
    }
    sub_23915( "replay.sch: Advance_Sequence_To_The_Replay_Mission() - found an error" );
    return;
}


// sub_269745
void WarpPlayerToCoords(float posX, float posY, float posZ, float heading)
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (NOT (sub_269777( posX, posY, posZ )))
        {
            if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( CurrentPlayerChar(), posX, posY, posZ );
            }
            else
            {
                SET_CHAR_COORDINATES( CurrentPlayerChar(), posX, posY, posZ );
            }
        }
        SET_CHAR_HEADING( CurrentPlayerChar(), heading );
        SET_GAME_CAM_HEADING( 0.00000000 );
    }
    return;
}

// I think these are the apartment locations
int sub_269777(float posX, float posY, float posZ)
{
    LOAD_SCENE( posX, posY, posZ );
    if (sub_269829( posX, posY, posZ, g_U9943[0]._fU20, "shitholerm" ))
    {
        return 1;
    }
    if (sub_269829( posX, posY, posZ, g_U9943[1]._fU20, "bronxsaveroom01" ))
    {
        return 1;
    }
    if (sub_269829( posX, posY, posZ, g_U9943[2]._fU20, "loftrm1" ))
    {
        return 1;
    }
    if (sub_269829( posX, posY, posZ, g_U9943[3]._fU20, "JersSaveApt" ))
    {
        return 1;
    }
    if (sub_269829( posX, posY, posZ, g_U9943[4]._fU20, "PlayXroom" ))
    {
        return 1;
    }
    return 0;
}

int sub_269829(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    unknown uVar9;
    unknown uVar10;

    if (NOT (sub_269844( uParam0, uParam3 )))
    {
        return 0;
    }
    uVar9 = GET_HASH_KEY( uParam6 );
    GET_INTERIOR_AT_COORDS( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref uVar10 );
    LOAD_SCENE_FOR_ROOM_BY_KEY( uVar10, uVar9 );
    if (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() ))
    {
        WARP_CHAR_FROM_CAR_TO_COORD( CurrentPlayerChar(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    else
    {
        SET_CHAR_COORDINATES( CurrentPlayerChar(), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
    }
    SET_ROOM_FOR_CHAR_BY_KEY( CurrentPlayerChar(), uVar9 );
    return 1;
}

int sub_269844(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((uParam0._fU8 == uParam3._fU8) AND ((uParam0._fU4 == uParam3._fU4) AND (uParam0._fU0 == uParam3._fU0)))
    {
        return 1;
    }
    return 0;
}

int sub_270384()
{
    if (g_U13391[g_U9893._fU40]._fU0._fU0 == 0)
    {
        Advance_Sequence_To_The_Replay_Mission_Gather_Sequence_Variables();
        return 1;
    }
    if (NOT (g_U13391[g_U9893._fU40]._fU0._fU0 == 1))
    {
        g_U9893._fU28 = 1;
        Advance_Sequence_To_The_Replay_Mission_Gather_Sequence_Variables();
    }
    if (g_U13391[g_U9893._fU40]._fU0._fU0 == 1)
    {
        sub_54189( g_U9893._fU40 );
        Advance_Sequence_To_The_Replay_Mission_Gather_Sequence_Variables();
    }
    return 0;
}

void sub_270540()
{
    vector vVar2;
    float fVar5;
    boolean bVar6;

    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    fVar5 = 0.00000000;
    bVar6 = false;
    switch (g_U9893._fU40)
    {
        case 0:
        if (g_U9893._fU44 == 4)
        {
            vVar2 = {1183.19200000, -401.76640000, 20.42920000};
            fVar5 = 191.45180000;
            bVar6 = true;
        }
        if (g_U9893._fU44 == 10)
        {
            vVar2 = {902.83920000, 560.21730000, 21.26770000};
            fVar5 = 0.00000000;
            bVar6 = true;
        }
        if (g_U9893._fU44 == 11)
        {
            vVar2 = {1252.69900000, 1488.80800000, 15.72340000};
            fVar5 = 210.65460000;
            bVar6 = true;
        }
        if (g_U9893._fU44 == 12)
        {
            vVar2 = {132.04900000, 1023.75900000, 13.70620000};
            fVar5 = 179.58600000;
            bVar6 = true;
        }
        if (g_U9893._fU44 == 13)
        {
            vVar2 = {927.18790000, -577.12080000, 13.16350000};
            fVar5 = 323.40440000;
            bVar6 = true;
        }
        if (g_U9893._fU44 == 15)
        {
            vVar2 = {-1948.92800000, -28.05410000, 5.41490000};
            fVar5 = 19.67170000;
            bVar6 = true;
            g_U9893._fU36 = 0;
        }
        if (g_U9893._fU44 == 16)
        {
            vVar2 = {830.58970000, -162.71080000, 5.01550000};
            fVar5 = 161.32930000;
            bVar6 = true;
            g_U9893._fU36 = 0;
        }
        if (g_U9893._fU44 == 18)
        {
            if (g_U15654[12])
            {
                vVar2 = {-291.37820000, -242.00710000, 13.16720000};
                fVar5 = 259.76850000;
            }
            else
            {
                vVar2 = {1397.26300000, 752.38490000, 27.50380000};
                fVar5 = 181.40990000;
            }
            bVar6 = true;
        }
        if (g_U9893._fU44 == 20)
        {
            if (NOT g_U64974)
            {
                vVar2 = {-1332.92700000, 829.02950000, 18.56470000};
                fVar5 = 177.58650000;
                bVar6 = true;
            }
            else
            {
                vVar2 = {-1065.35000000, 1830.61700000, 7.19520000};
                fVar5 = 0.00000000;
                bVar6 = true;
                g_U9893._fU36 = 0;
            }
        }
        break;
        case 4:
        if (g_U9893._fU44 == 6)
        {
            vVar2 = {817.19420000, -253.11770000, 14.33900000};
            fVar5 = 357.62660000;
            bVar6 = true;
        }
        break;
        case 8:
        if (g_U9893._fU44 == 4)
        {
            vVar2 = {922.60240000, -458.80940000, 15.40800000};
            fVar5 = 130.60000000;
            bVar6 = true;
        }
        break;
        case 9:
        if (g_U9893._fU44 == 3)
        {
            vVar2 = {-272.34280000, 1507.39800000, 19.41880000};
            fVar5 = 191.93550000;
            bVar6 = true;
        }
        break;
        case 11:
        if (g_U9893._fU44 == 3)
        {
            vVar2 = {-15.10290000, -486.15990000, 13.76120000};
            fVar5 = 186.54480000;
            bVar6 = true;
        }
        if (g_U9893._fU44 == 7)
        {
            vVar2 = {-188.90880000, -67.56750000, 13.75990000};
            fVar5 = 120.00000000;
            bVar6 = true;
        }
        break;
        case 12:
        if (g_U9893._fU44 == 3)
        {
            vVar2 = {-331.15050000, 1739.99200000, 11.99690000};
            fVar5 = 70.00000000;
            bVar6 = true;
            CLEAR_AREA( -506.42000000, 1733.59000000, 8.91000000, 100.00000000, 1 );
        }
        break;
        case 13:
        if (g_U9893._fU44 == 3)
        {
            vVar2 = {g_U9387[23]._fU0};
            fVar5 = 120.99220000;
            bVar6 = true;
            g_U9893._fU36 = 0;
        }
        break;
        case 15:
        if (g_U9893._fU44 == 4)
        {
            vVar2 = {-1574.09600000, 220.88130000, 11.92550000};
            fVar5 = 0.00000000;
            bVar6 = true;
        }
        if (g_U9893._fU44 == 6)
        {
            vVar2 = {-1149.24800000, -372.53660000, 2.01170000};
            fVar5 = 277.56360000;
            bVar6 = true;
        }
        if (g_U9893._fU44 == 7)
        {
            vVar2 = {-322.31700000, 1554.06700000, 20.41460000};
            fVar5 = 20.00000000;
            bVar6 = true;
        }
        break;
        case 20:
        if (g_U9893._fU44 == 1)
        {
            vVar2 = {g_U9387[35]._fU0};
            fVar5 = 0.00000000;
            bVar6 = true;
            g_U9893._fU36 = 0;
        }
        if (g_U9893._fU44 == 5)
        {
            vVar2 = {-185.44280000, 1409.90800000, 19.38940000};
            fVar5 = 260.00000000;
            bVar6 = true;
            CLEAR_AREA( -38.63550000, 1335.04200000, 19.34770000, 50.00000000, 1 );
        }
        break;
        default: sub_23915( "Unknown Strand for Replay Warp" );
    }
    if (bVar6)
    {
        WarpPlayerToCoords( vVar2.x, vVar2.y, vVar2.z, fVar5 );
        CLEAR_AREA_OF_CHARS( vVar2.x, vVar2.y, vVar2.z, 100.00000000 );
        return;
    }
    sub_23915( "Unknown mission for strand for Replay Warp" );
    return;
}

void sub_272127()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 256, 1 );
    return;
}

int sub_272330()
{
    PRINTSTRING( "Just entered Start_A_Network_Game_From_Single_Player\n" );
    FAKE_DEATHARREST();
    WAIT( 0 );
    WAIT( 0 );
    if (g_U19)
    {
        if (NOT NETWORK_STORE_SINGLE_PLAYER_GAME())
        {
            return 0;
        }
    }
    SHUTDOWN_AND_LAUNCH_NETWORK_GAME( g_U15 );
    WAIT( 0 );
    return 1;
}

int sub_272490()
{
    PRINTSTRING( "Just entered Start_A_Replay_From_Single_Player\n" );
    FAKE_DEATHARREST();
    WAIT( 0 );
    WAIT( 0 );
    ACTIVATE_REPLAY_MENU();
    if (g_U19)
    {
        NETWORK_STORE_SINGLE_PLAYER_GAME();
    }
    return 0;
}

