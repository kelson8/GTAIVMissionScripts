void main()
{
    boolean bVar2;

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
    l_U501 = 35;
    l_U521 = 80;
    l_U525 = 4;
    l_U534 = 0;
    l_U535 = 0;
    l_U536 = 1;
    l_U537 = 0;
    l_U538 = 0;
    l_U546 = 0;
    StrCopy( ref l_U547, "", 16 );
    l_U551 = 0;
    l_U553 = 0;
    l_U557 = 0;
    l_U558 = 0;
    l_U559 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U502 = 35;
    l_U503 = 11;

    // TODO Figure out these coordinates and label this.
    l_U522 = {80.30060000, -677.84530000, 15.76750000};

    l_U530 = 0;
    l_U531 = 0;
    l_U551 = 0;
    l_U552 = 0;
    l_U553 = 0;
    bVar2 = true;
    while (bVar2)
    {
        if (ALLOW_ONE_TIME_ONLY_COMMANDS_TO_RUN())
        {
            RunDebugCommands();
        }
        if (l_U559 == 0)
        {
            sub_890();
        }
        WAIT( 0 );
        bVar2 = sub_1169();
    }
    sub_3689();
    sub_4564( "FRANCIS2 APPOINTMENT (help script): should never reach ENDSCRIPT" );
    return;
}

// I labeled this debug item, not sure what it was originally named.
// sub_265
void RunDebugCommands()
{
    // l_U491 = quitCallFrancisPass
    quitCallFrancisPass = 0;
    // l_U492 = busyOnMission
    busyOnMission = 0;

    // Warp to Lawyers Office
    // l_U493 = warpToLawyersOffice
    warpToLawyersOffice = 0;

    // Warp to Clothes shop
    // l_U494 = warpToClothesShop
    warpToLawyersOffice = 0;
    
    // l_U495 = givePlayerSuit
    givePlayerSuit = 0;

    // l_U496 = advancedTimeToBlipOn
    advancedTimeToBlipOn = 0;
    // l_U497 = advancedTimeToAppointment
    advancedTimeToAppointment = 0;

    // l_U498 = advancedTimeToFailure
    advancedTimeToFailure = 0;

    l_U490 = CREATE_WIDGET_GROUP( "Francis2 - Appointment" );
    ADD_WIDGET_TOGGLE( "Quit? (calls Francis_Pass)", ref quitCallFrancisPass );
    ADD_WIDGET_TOGGLE( "Busy? (as if onMission)", ref busyOnMission );
    ADD_WIDGET_TOGGLE( "Give player suit?", ref givePlayerSuit );

    ADD_WIDGET_TOGGLE( "Warp to Lawyers Office", ref warpToLawyersOffice );
    ADD_WIDGET_TOGGLE( "Warp to Clothes Shop", ref warpToLawyersOffice );

    ADD_WIDGET_READ_ONLY( "Blip On (hours)", ref l_U508._fU8._fU0 );
    ADD_WIDGET_READ_ONLY( "Blip On (mins)", ref l_U508._fU8._fU4 );

    ADD_WIDGET_TOGGLE( "Advance Time To Blip On", ref advancedTimeToBlipOn );

    ADD_WIDGET_READ_ONLY( "Appointment (hours)", ref l_U504._fU8._fU0 );
    ADD_WIDGET_READ_ONLY( "Appointment (mins)", ref l_U504._fU8._fU4 );
    ADD_WIDGET_TOGGLE( "Advance Time To Appointment", ref advancedTimeToAppointment );

    ADD_WIDGET_READ_ONLY( "Fail (hours)", ref l_U516._fU8._fU0 );
    ADD_WIDGET_READ_ONLY( "Fail (mins)", ref l_U516._fU8._fU4 );

    ADD_WIDGET_TOGGLE( "Advance Time To Failure", ref advancedTimeToFailure );
    END_WIDGET_GROUP();
    return;
}

void sub_890()
{
    unknown uVar2;

    if (NOT (IS_CHAR_DEAD( sub_899() )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_899(), l_U522._fU0, l_U522._fU4, 100.00000000, 100.00000000, 0 )))
        {
            PRINTSTRING( "\n  -----> LOCK DOORS <-----\n\n" );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -134192122, 79, 64857, 15, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -602166187, 76, 64857, 15, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 80, 64824, 5, 1, 0.00000000 );
            SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 71, 64822, 5, 1, 0.00000000 );
            l_U559 = 1;
        }
    }
    return;
}

void sub_899()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1169()
{
    if (g_U9893._fU28)
    {
        if (g_U9893._fU40 == 11)
        {
            sub_1206();
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3622() )))
    {
        return 1;
    }
    sub_3670();
    switch (l_U530)
    {
        case 0:
        sub_18039();
        break;
        case 1:
        sub_26523();
        break;
        case 2:
        sub_27137();
        break;
        case 3:
        sub_27502();
        break;
        case 4:
        sub_29277();
        break;
        case 5:
        sub_29817();
        break;
        case 6: return 0;
    }
    if (l_U551)
    {
        sub_31057();
    }
    if (l_U553)
    {
        sub_31654();
    }
    return 1;
}

void sub_1206()
{
    int iVar2;
    unknown uVar3;

    DELETE_WIDGET_GROUP( l_U490 );
    sub_1233( l_U525, 0 );
    REMOVE_BLIP( l_U520 );
    sub_3090( 6, ref iVar2, ref uVar3 );
    if (NOT (iVar2 == 8))
    {
        sub_3350( iVar2, uVar3, 6 );
    }
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 80, 64824, 5, 0, 0.00000000 );
    SET_STATE_OF_CLOSEST_DOOR_OF_TYPE( -160085103, 71, 64822, 5, 0, 0.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_1233(unknown uParam0, unknown uParam1)
{
    g_U10133._fU168[uParam0] = uParam1;
    sub_1257();
    return;
}

void sub_1257()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_1285( 13 );
        if ((g_U9932[g_U9999[I]._fU0]._fU0) AND (sub_1330( 13, iVar3 )))
        {
            sub_1431( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_1615( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_1285( 11 );
        if ((g_U9932[g_U10090[I]._fU0]._fU0) AND (sub_1330( 11, iVar3 )))
        {
            sub_1431( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_1615( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_1809( I );
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_1330( g_U10324[I]._fU12, iVar3 )))
        {
            sub_1431( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_2117( I );
        }
        else
        {
            sub_1615( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_2346();
    return;
}

int sub_1285(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_1330(unknown uParam0, boolean bParam1)
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

void sub_1431(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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

void sub_1615(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_1809(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_1851( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_1285( g_U10324[uParam0]._fU12 ))
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

int sub_1851(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_2117(unknown uParam0)
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

void sub_2346()
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
    bVar3 = sub_1285( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_2391( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_1285( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_2391( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_1809( I )))
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
        bVar3 = sub_1809( I );
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
        sub_2391( g_U10324[I]._fU32, bVar3 );
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
        sub_2391( g_U9943[I]._fU32, bVar3 );
    }
    fVar10 = 99999.90000000;
    fVar11 = 0.00000000;
    iVar12 = -1;
    if (NOT bVar6)
    {
        if (NOT (IS_CHAR_DEAD( sub_899() )))
        {
            GET_CHAR_COORDINATES( sub_899(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
            for ( I = 0; I < 5; I++ )
            {
                if (g_U9943[I]._fU0)
                {
                    fVar11 = sub_2882( uVar7, g_U9943[I]._fU8 );
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
                sub_2391( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_2391(unknown uParam0, boolean bParam1)
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

void sub_2882(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_3090(int iParam0, unknown uParam1, unknown uParam2)
{
    int J;
    int I;

    for ( J = 0; J <= (7 - 1); J++ )
    {
        for ( I = 0; I <= 3; I++ )
        {
            if ((sub_3129( J, I )) == iParam0)
            {
                (uParam1^) = J;
                (uParam2^) = I;
                return;
            }
        }
    }
    (uParam1^) = 8;
    return;
}

int sub_3129(unknown uParam0, unknown uParam1)
{
    switch (uParam1)
    {
        case 0: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 0, 15 );
        case 1: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU0, 16, 31 );
        case 2: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 0, 15 );
        case 3: return GET_BITS_IN_RANGE( g_U465[uParam0]._fU4, 16, 31 );
    }
    return -1;
}

void sub_3350(unknown uParam0, unknown uParam1, int iParam2)
{
    if ((sub_3129( uParam0, uParam1 )) == iParam2)
    {
        sub_3381( uParam0, uParam1, 0 );
    }
    return;
}

void sub_3381(unknown uParam0, unknown uParam1, unknown uParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU0, 0, 15, uParam2 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU0, 16, 31, uParam2 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU4, 0, 15, uParam2 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref g_U465[uParam0]._fU4, 16, 31, uParam2 );
        break;
    }
    return;
}

void sub_3622()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3670()
{
    if (quitCallFrancisPass)
    {
        sub_3689();
    }
    if (givePlayerSuit)
    {
        if (IS_PLAYER_PLAYING( sub_3622() ))
        {
            SET_CHAR_COMPONENT_VARIATION( sub_899(), 1, 5, 0 );
            SET_CHAR_COMPONENT_VARIATION( sub_899(), 2, 2, 0 );
            SET_CHAR_COMPONENT_VARIATION( sub_899(), 5, 2, 0 );
            SET_CHAR_COMPONENT_VARIATION( sub_899(), 4, 0, 0 );
            SET_CHAR_PROP_INDEX( sub_899(), 0, -1 );
            SET_CHAR_PROP_INDEX( sub_899(), 1, -1 );
            givePlayerSuit = 0;
        }
    }

    if (warpToLawyersOffice)
    {
        if (IS_PLAYER_PLAYING( sub_3622() ))
        {
            LOAD_SCENE( l_U522._fU0, l_U522._fU4, l_U522._fU8 );
            if (IS_CHAR_IN_ANY_CAR( sub_899() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_899(), l_U522._fU0, l_U522._fU4, l_U522._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_899(), l_U522._fU0, l_U522._fU4, l_U522._fU8 );
            }
            SET_CHAR_HEADING( sub_899(), 180.00000000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            warpToLawyersOffice = 0;
        }
    }

    if (warpToLawyersOffice)
    {
        if (IS_PLAYER_PLAYING( sub_3622() ))
        {
            LOAD_SCENE( g_U10324[l_U501]._fU0._fU0, g_U10324[l_U501]._fU0._fU4, g_U10324[l_U501]._fU0._fU8 );
            if (IS_CHAR_IN_ANY_CAR( sub_899() ))
            {
                WARP_CHAR_FROM_CAR_TO_COORD( sub_899(), g_U10324[l_U501]._fU0._fU0, g_U10324[l_U501]._fU0._fU4, g_U10324[l_U501]._fU0._fU8 );
            }
            else
            {
                SET_CHAR_COORDINATES( sub_899(), g_U10324[l_U501]._fU0._fU0, g_U10324[l_U501]._fU0._fU4, g_U10324[l_U501]._fU0._fU8 );
            }
            SET_CHAR_HEADING( sub_899(), 115.00000000 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            warpToLawyersOffice = 0;
        }
    }

    if (advancedTimeToBlipOn)
    {
        sub_17225( ref l_U508 );
        advancedTimeToBlipOn = 0;
    }

    if (advancedTimeToAppointment)
    {
        sub_17225( ref l_U504 );
        advancedTimeToAppointment = 0;
    }

    if (advancedTimeToFailure)
    {
        sub_17225( ref l_U516 );
        advancedTimeToFailure = 0;
    }

    return;
}

void sub_3689()
{
    sub_3698();
    SET_PLAYER_CONTROL( sub_3622(), 0 );
    DO_SCREEN_FADE_OUT( 500 );
    sub_1206();
    return;
}

void sub_3698()
{
    sub_3707();
    return;
}

void sub_3707()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_3725();
    sub_3784( iVar2, iVar3, iVar4 );
    return;
}

void sub_3725()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_3784(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 11;
    sub_3817( iVar5, uParam0, uParam1, uParam2, "Contact_12" );
    return;
}

void sub_3817(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_3913( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_3913( ref cVar9 );
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
            sub_3913( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_3913( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_3913( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_3913( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_4490( iParam0, iVar7 );;;
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
                sub_4908( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_4908( 0, 4 );
            }
        }
    }
    if (NOT (sub_4997( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iVar7 == 12) AND (iParam0 == 0))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_3622(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_3622() );
    }
    sub_14229();
    bVar27 = true;
    uVar28 = sub_4490( iParam0, iVar7 );
    uVar29 = sub_14871( iParam0 );
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
                sub_15402( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((g_U10978) AND (NOT bVar27))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_15832();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_15917( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_15974( iParam0 );
                sub_16109( 0 );
                sub_16190( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_16295();
        }
    }
    if (bParam2)
    {
        sub_15832();
        sub_16383();
        sub_16109( 0 );
    }
    if (bParam3)
    {
        sub_15832();
        sub_16423();
        sub_16109( 0 );
        sub_16190( uVar29, 0 );
    }
    sub_16474();
    return;
}

void sub_3913(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_4490(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 >= 28) || (iParam0 < 0))
    {
        sub_4564( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_4564(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_4908(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_4997(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_5205( uParam1 );
        break;
        case 1:
        bVar8 = sub_7283( uParam1 );
        break;
        case 2:
        bVar8 = sub_7509( uParam1 );
        break;
        case 3:
        bVar8 = sub_7659( uParam1 );
        break;
        case 4:
        bVar8 = sub_7937( uParam1 );
        break;
        case 5:
        bVar8 = sub_8240( uParam1 );
        break;
        case 6:
        bVar8 = sub_8439( uParam1 );
        break;
        case 7:
        bVar8 = sub_8665( uParam1 );
        break;
        case 8:
        bVar8 = sub_8900( uParam1 );
        break;
        case 9:
        bVar8 = sub_9275( uParam1 );
        break;
        case 10:
        bVar8 = sub_9522( uParam1 );
        break;
        case 11:
        bVar8 = sub_9661( uParam1 );
        break;
        case 12:
        bVar8 = sub_9960( uParam1 );
        break;
        case 13:
        bVar8 = sub_10188( uParam1 );
        break;
        case 14:
        bVar8 = sub_10475( uParam1 );
        break;
        case 15:
        bVar8 = sub_10757( uParam1 );
        break;
        case 16:
        bVar8 = sub_11039( uParam1 );
        break;
        case 17:
        bVar8 = sub_11240( uParam1 );
        break;
        case 18:
        bVar8 = sub_11313( uParam1 );
        break;
        case 19:
        bVar8 = sub_11527( uParam1 );
        break;
        case 20:
        bVar8 = sub_11780( uParam1 );
        break;
        case 21:
        bVar8 = sub_12027( uParam1 );
        break;
        case 22:
        bVar8 = sub_12228( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_6888( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_4490( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 6)) AND (NOT (iVar10 == 5)))
        {
            sub_12551( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_5205(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_5484( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_5484( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_5484( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_5484( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_5484( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_5484( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_5484( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_5484( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_5484( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_5484( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_5484( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_5484( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_5484( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_5484( iVar3, 0, 3, 1, 0, 0 );
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
        sub_5484( iVar3, 0, sub_6766(), sub_7032(), 0, 0 );
        break;
        default:
        sub_7191( "Friend 1", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Friend 1", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_5484(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_5495( uParam1 );
    sub_5669( uParam0, 0, uParam2 );
    sub_5669( uParam0, 1, uParam3 );
    sub_5669( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_3725();
    return;
}

void sub_5495(unknown uParam0)
{
    ADD_SCORE( sub_3622(), uParam0 );
    sub_5520( uParam0 );
    return;
}

void sub_5520(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_4564( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_5669(unknown uParam0, int iParam1, int iParam2)
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
        sub_5826( uParam0 );
    }
    return;
}

void sub_5826(unknown uParam0)
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

int sub_6766()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6888( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_6888(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_7032()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_6888( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_7191(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_7283(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5484( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_7191( "Contact 2", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 2", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7509(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5484( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_7191( "Girl 3", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Girl 3", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7659(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_5484( iVar3, 0, sub_6766(), sub_7032(), 0, 0 );
        break;
        default:
        sub_7191( "Friend 4", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Friend 4", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_7937(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5484( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5484( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5484( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5484( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_7191( "Contact 5", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 5", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8240(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_7191( "Contact 7", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 7", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8439(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5484( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_7191( "Contact 7b", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 7b", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8665(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_5484( iVar3, 0, sub_6766(), sub_7032(), 0, 0 );
        break;
        default:
        sub_7191( "Friend 8", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Friend 8", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_8900(unknown uParam0)
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
        sub_5484( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_5484( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_5484( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_5484( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_5484( iVar3, 0, sub_6766(), sub_7032(), 0, 0 );
        break;
        default:
        sub_7191( "Friend 9", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Friend 9", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9275(unknown uParam0)
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
        sub_5484( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_5484( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_5484( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_7191( "Contact 10", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_7191( "Contact 10", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9522(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_7191( "Girl 11", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Girl 11", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9661(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5484( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5484( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5484( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5484( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_5484( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_7191( "Contact 12", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 12", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_9960(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5484( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_7191( "Contact 13", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 13", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10188(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_5484( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_5484( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_5484( iVar3, 0, sub_6766(), sub_7032(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_7191( "Friend 15", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Friend 15", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10475(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5484( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5484( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5484( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_7191( "Contact 16", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 16", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_10757(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5484( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_5484( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_5484( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_7191( "Contact 18", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 18", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11039(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_7191( "Contact 19", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 19", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11240(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_7191( "Girl 20", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11313(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_7191( "Contact 21", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 21", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11527(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5484( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_5484( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_7191( "Contact 22", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 22", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_11780(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_5484( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_5484( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_5484( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_7191( "Contact 24", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 24", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12027(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_5484( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_5484( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_5484( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_7191( "Contact 25", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_7191( "Contact 25", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_12228(unknown uParam0)
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
        sub_5484( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_7191( "Girl 26", 1 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_7191( "Girl 26", 0 );
        sub_5484( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_12551(int iParam0, int iParam1)
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
    if (sub_12599( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_13330( iParam1 );
    }
    return;
}

int sub_12599(int iParam0, int iParam1)
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
            sub_12739( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_12739(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_12921( 0 );
    return;
}

void sub_12921(boolean bParam0)
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
        sub_13176();
    }
    if ((NOT (# -NULL-0xc27c84())) AND ((NOT bParam0) AND (bVar7)))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_13176()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_13330(int iParam0)
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
        sub_13663( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_13663( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_13663( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_13663( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_13663( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_13663( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_13663( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_13663( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_13663( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_13663( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_13663( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_13663( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_13663( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_13663( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_13663( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_13663( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_13663( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_13663( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_13663( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_13663(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_14229()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_14267( 5, g_U569[I] )) == 1))
        {
            if ((sub_14267( 1, g_U569[I] )) != 0)
            {
                sub_14553( I );
            }
        }
    }
    if (NOT sub_14719())
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

int sub_14267(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_14553(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_14638( g_U569 - 1 );
    return;
}

void sub_14638(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_14719()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_14267( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_14871(unknown uParam0)
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
    sub_4564( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_15402(unknown uParam0, unknown uParam1)
{
    sub_15421( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_15421(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_15832()
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

int sub_15917(int iParam0, int iParam1)
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

void sub_15974(unknown uParam0)
{
    sub_15983();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_15983()
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

void sub_16109(unknown uParam0)
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

void sub_16190(int iParam0, boolean bParam1)
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

void sub_16295()
{
    sub_16304();
    return;
}

void sub_16304()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_16383()
{
    sub_16304();
    return;
}

void sub_16423()
{
    sub_16304();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_16474()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_16496();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_16496()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

void sub_17225(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar3 = {(uParam0^)};
    sub_17244( ref uVar3, 0, 2 );
    sub_17604( ref uVar3 );
    return;
}

void sub_17244(int iParam0, int iParam1, int iParam2)
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
        sub_17374( iParam0 + 0 );
    }
    return;
}

void sub_17374(int iParam0)
{
    iParam0->_fU0--;
    if (iParam0->_fU0 < 1)
    {
        iParam0->_fU4--;
        if (iParam0->_fU4 < 1)
        {
            iParam0->_fU4 = 12;
        }
        iParam0->_fU0 = sub_17442( iParam0->_fU4 );
    }
    return;
}

int sub_17442(unknown uParam0)
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

void sub_17604(int iParam0)
{
    if (sub_17617( (iParam0^) ))
    {
        return;
    }
    FORWARD_TO_TIME_OF_DAY( ref iParam0->_fU8->_fU0, ref iParam0->_fU8->_fU4 );
    return;
}

int sub_17617(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    // _fU8._fU4 seems to be something to do with the time here?
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
    if (sub_17786( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_17786(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_18039()
{
    if (l_U531 == 0)
    {
        l_U531++;
    }
    if (l_U531 == 1)
    {
        sub_18091( ref l_U526, 0, 15, 0 );
        if (NOT sub_18562())
        {
            SETTIMERA( 0 );
            l_U531++;
            return;
        }
        l_U531 += 2;
    }
    if (l_U531 == 2)
    {
        if (TIMERA() > 10000)
        {
            if (sub_18690())
            {
                l_U531++;
            }
            else
            {
                SETTIMERA( 0 );
            }
        }
    }
    if (l_U531 == 3)
    {
        if (sub_17617( l_U526 ))
        {
            if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambInternetCafe" )) > 0) || ((sub_20664()) || ((sub_20322( 0 )) || ((sub_20286()) || ((g_U33837) || ((sub_20081()) || ((IS_WANTED_LEVEL_GREATER( sub_3622(), 0 )) || ((IS_THREAD_ACTIVE( g_U812 )) || (g_U10978)))))))))
            {
                l_U531 = 1;
            }
            else if (NOT sub_18562())
            {
                l_U531 = 1;
                return;
            }
            if (NOT sub_20779())
            {
                l_U531 = 1;
                return;
            }
            sub_21591();
            if (sub_21648( l_U502, ref l_U547, "FM2AUD", 10000, 0 ))
            {
                l_U531++;
                return;
            }
        }
    }
    if (l_U531 == 4)
    {
        if (NOT sub_25550())
        {
            sub_16474();
            l_U531++;
        }
    }
    if (l_U531 == 5)
    {
        switch (sub_25681())
        {
            case 1:
            case 2:
            l_U531 = 1;
            return;
        }
        l_U531++;
    }
    if (l_U531 == 6)
    {
        if (NOT (sub_25809( 6, l_U532, l_U533 )))
        {
            sub_26078( 12, 6, l_U534, l_U535, l_U536, l_U537 );
        }
        sub_26225();
        l_U531 = 99;
    }
    if (l_U531 == 99)
    {
        l_U531 = 0;
        l_U530 = 1;
    }
    return;
}

void sub_18091(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_18144( iParam0, uParam1, uParam2 );
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
        sub_18276( iParam0 + 0 );
    }
    return;
}

void sub_18144(int iParam0, int iParam1, int iParam2)
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
        sub_18276( iParam0 + 0 );
    }
    return;
}

void sub_18276(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_17442( iParam0->_fU4 )))
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

int sub_18562()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    iVar3 = 0;
    GET_TIME_OF_DAY( ref iVar2, ref iVar3 );
    if (iVar2 < 9)
    {
        return 0;
    }
    if (iVar2 >= 23)
    {
        return 0;
    }
    return 1;
}

int sub_18690()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;

    if (l_U558)
    {
        return 1;
    }
    if (sub_18562())
    {
        return 1;
    }
    if ((sub_18732()) || (g_U10978))
    {
        return 0;
    }
    array(ref uVar2._fU0._fU0, 3);
    ref uVar2._fU0;
    ref uVar2;
    iVar9 = 35;
    sub_18805( iVar9, 3, 16383, 16383, ref uVar2 );
    sub_19149( ref uVar2, 1 );
    sub_19177( ref uVar2, 0 );
    sub_19204( ref uVar2 );
    l_U558 = 1;
    return 1;
}

int sub_18732()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_18805(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_18827( uParam0, 0, iParam4 + 0 );
    sub_18827( uParam1, 1, iParam4 + 0 );
    sub_18827( uParam2, 2, iParam4 + 0 );
    sub_18827( uParam3, 3, iParam4 + 0 );
    sub_18827( 0, 4, iParam4 + 0 );
    sub_18827( 1, 5, iParam4 + 0 );
    sub_18827( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_18827(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_19149(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_19177(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

int sub_19204(int iParam0)
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
        if (NOT sub_19274())
        {
            sub_14553( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_19401( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_14553( iVar9 );
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
                ConcatString(ref cVar5, sub_14267( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_14267( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_19274()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((g_U569[I]._fU20) AND ((sub_14267( 1, g_U569[I] )) != 0))
        {
            sub_14553( I );
            return 1;
        }
    }
    return 0;
}

int sub_19401(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_19466( uParam0, g_U569[Result] ))
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

int sub_19466(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[2] == uParam6._fU0[2]) AND (uParam0._fU0[0] == uParam6._fU0[0]))
    {
        iVar14 = sub_14267( 0, uParam0 );
        if (iVar14 == (sub_14267( 0, uParam6 )))
        {
            iVar15 = sub_14267( 3, uParam0 );
            if (iVar15 == (sub_14267( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_20081()
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

int sub_20286()
{
    if (g_U555 == 2)
    {
        return 1;
    }
    return 0;
}

int sub_20322(int iParam0)
{
    int iVar3;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (sub_20342())
    {
        return 1;
    }
    if (sub_20377())
    {
        return 1;
    }
    if (NOT (iParam0 == 0))
    {
        if (NOT (sub_20448( iParam0 )))
        {
            iParam0 = 0;
        }
    }
    if (NOT (iParam0 == 0))
    {
        if (sub_20563( iParam0 ))
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

void sub_20342()
{
    return g_U91._fU540;
}

int sub_20377()
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

int sub_20448(int iParam0)
{
    int iVar3;

    iVar3 = sub_16496();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_20478();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_20478()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_20563(int iParam0)
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

int sub_20664()
{
    if ((g_U91._fU0 == 1008) || (g_U91._fU0 == 1007))
    {
        return 1;
    }
    return 0;
}

void sub_20779()
{
    sub_20818( 12, 6, l_U534, l_U535, l_U536, l_U537, ref l_U532, ref l_U533 );
    return sub_21481( l_U532 );
}

void sub_20818(unknown uParam0, unknown uParam1, boolean bParam2, boolean bParam3, boolean bParam4, boolean bParam5, unknown uParam6, unknown uParam7)
{
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    int iVar14;

    sub_20831( ref uVar10, ref uVar11 );
    uVar12 = uVar10;
    uVar13 = uVar11;
    iVar14 = 1;
    sub_20959( ref uVar12, ref uVar13, uParam0 );
    while (true)
    {
        iVar14 = 1;
        (uParam6^) = uVar12;
        (uParam7^) = uVar13;
        if (((uParam7^) == 0) AND (NOT bParam2))
        {
            iVar14 = 0;
        }
        if (((uParam7^) == 1) AND (NOT bParam3))
        {
            iVar14 = 0;
        }
        if (((uParam7^) == 2) AND (NOT bParam4))
        {
            iVar14 = 0;
        }
        if (((uParam7^) == 3) AND (NOT bParam5))
        {
            iVar14 = 0;
        }
        if ((iVar14) AND (sub_21404( (uParam6^), (uParam7^) )))
        {
            return;
        }
        sub_21080( ref uVar12, ref uVar13 );
    }
    return;
}

void sub_20831(unknown uParam0, unknown uParam1)
{
    (uParam0^) = GET_CURRENT_DAY_OF_WEEK();
    (uParam1^) = sub_20850();
    return;
}

int sub_20850()
{
    int iVar2;

    iVar2 = GET_HOURS_OF_DAY();
    if (iVar2 < 8)
    {
        return 0;
    }
    else if (iVar2 < 12)
    {
        return 1;
    }
    else if (iVar2 < 18)
    {
        return 2;
    };;;
    return 3;
}

void sub_20959(unknown uParam0, unknown uParam1, int iParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    if (iParam2 > 23)
    {
        sub_4564( "Brucie3_MeetGuy: Find_Next_Free_Timeslot_Minimum_Hours_Away: Min Hours must be less than 24" );
    }
    sub_21080( uParam0, uParam1 );
    iVar5 = sub_21152( (uParam1^) );
    iVar6 = GET_CURRENT_DAY_OF_WEEK();
    iVar7 = GET_HOURS_OF_DAY();
    if (NOT (iVar6 == (uParam0^)))
    {
        iVar5 += 24;
    }
    iVar8 = iVar5 - iVar7;
    if (iVar8 < iParam2)
    {
        sub_21080( uParam0, uParam1 );
    }
    return;
}

void sub_21080(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = 4;
    iVar5 = 7;
    (uParam1^)++;
    if ((uParam1^) == iVar4)
    {
        (uParam1^) = 0;
        (uParam0^)++;
        if ((uParam0^) == iVar5)
        {
            (uParam0^) = 0;
        }
    }
    return;
}

int sub_21152(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return 0;
        break;
        case 1:
        return 8;
        break;
        case 2:
        return 12;
        break;
    }
    return 18;
}

int sub_21404(unknown uParam0, unknown uParam1)
{
    if ((sub_3129( uParam0, uParam1 )) == 0)
    {
        return 1;
    }
    return 0;
}

boolean sub_21481(unknown uParam0)
{
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;

    iVar3 = 7;
    iVar4 = uParam0;
    if (iVar4 >= iVar3)
    {
        return 0;
    }
    sub_20831( ref uVar5, ref uVar6 );
    iVar7 = uVar5;
    if (iVar7 >= iVar3)
    {
        return 0;
    }
    iVar7++;
    if (iVar7 >= iVar3)
    {
        iVar7 = 0;
    }
    return iVar7 == iVar4;
}

void sub_21591()
{
    StrCopy( ref l_U547, "FM2_CALL2", 16 );
    return;
}

void sub_21648(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_21708( uParam0, ref cVar7, uParam2, 0, ref uVar16, ref uVar16, "", uParam3, 1, 0, 1, 0, 0, uParam4 );
}

int sub_21708(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_21778( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_21778( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3622() )))
    {
        sub_21778( "\n player is not playing" );
        return 0;
    }
    if ((NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_899() ))) AND (IS_CHAR_IN_ANY_CAR( sub_899() )))
    {
        sub_21778( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_21778( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT bParam11) AND (NOT sub_22235()))
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
                sub_21778( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
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
        if ((NOT bParam11) AND (NOT sub_22235()))
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
    sub_23607( uParam0, ref g_U91._fU176 );
    sub_24988( ref g_U91._fU160 );
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
        sub_25228( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
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

void sub_21778(unknown uParam0)
{
    return;
}

int sub_22235()
{
    if ((g_U91._fU52) || (g_U91._fU48))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_22292())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_22292()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_3622() )))
    {
        sub_21778( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_21778( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_21778( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU104) || (g_U91._fU100))
    {
        sub_21778( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_3622() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_899() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_899(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_21778( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_899() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_21778( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((NOT bVar2) AND (CODE_WANTS_MOBILE_PHONE_REMOVED()))
    {
        sub_21778( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_3622() )))
    {
        sub_21778( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_23607(int iParam0, unknown uParam1)
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

void sub_24988(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_25228(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_25550()
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

int sub_25681()
{
    if (g_U91._fU60 != -1)
    {
        return g_U15946[g_U91._fU60]._fU132._fU24;
    }
    return 6;
}

int sub_25809(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_25820( uParam0 );
    if (NOT (sub_25875( uParam1, uParam2, uParam0 )))
    {
        return 0;
    }
    return 1;
}

void sub_25820(unknown uParam0)
{
    int iVar3;
    unknown uVar4;

    sub_3090( uParam0, ref iVar3, ref uVar4 );
    if (iVar3 == 8)
    {
        return;
    }
    sub_3350( iVar3, uVar4, uParam0 );
    return;
}

int sub_25875(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[16] cVar5;
    unknown uVar9;

    StrCopy( ref cVar5, "DOW_SHORT_DAY_", 16 );
    ConcatString(ref cVar5, uParam0, 16);
    uVar9 = sub_21152( uParam1 );
    sub_25952( "\n time for appointment is ,", uVar9 );
    if ((sub_3129( uParam0, uParam1 )) == 0)
    {
        sub_3381( uParam0, uParam1, uParam2 );
        g_U91._fU520 = 0;
        SET_PHONE_HUD_ITEM( 4, ref cVar5, uVar9 );
        return 1;
    }
    return 0;
}

void sub_25952(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_26078(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;

    sub_20818( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, ref uVar8, ref uVar9 );
    sub_25820( uParam1 );
    if (NOT (sub_25875( uVar8, uVar9, uParam1 )))
    {
        sub_4564( "KM_Generate_Appointment: Found appointment but failed to 'make appointment'" );
    }
    return;
}

void sub_26225()
{
    sub_26239( 6, ref l_U504 );
    l_U508 = {l_U504};
    sub_17244( ref l_U508, 3, 1 );
    l_U512 = {l_U504};
    sub_17244( ref l_U512, 0, 55 );
    l_U516 = {l_U504};
    sub_18144( ref l_U516, 3, 0 );
    return;
}

void sub_26239(unknown uParam0, int iParam1)
{
    unknown uVar4;
    unknown uVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    unknown uVar9;
    unknown uVar10;

    sub_3090( uParam0, ref uVar4, ref uVar5 );
    iVar6 = uVar4;
    uVar7 = sub_21152( uVar5 );
    iVar8 = GET_CURRENT_DAY_OF_WEEK();
    sub_26282( ref uVar9 );
    if (iVar6 < iVar8)
    {
        iVar6 += 7;
    }
    while (iVar8 < iVar6)
    {
        sub_18276( ref uVar9 );
        iVar8++;
    }
    iParam1->_fU0 = {uVar9};
    ref iParam1->_fU8->_fU0 = uVar7;
    ref iParam1->_fU8->_fU4 = 0;
    return;
}

void sub_26282(int iParam0)
{
    GET_CURRENT_DATE( iParam0 + 0, iParam0 + 4 );
    return;
}

void sub_26523()
{
    boolean bVar2;

    if (l_U531 == 0)
    {
        sub_18091( ref l_U526, 0, 1, 0 );
        l_U531 = 2;
    }
    if (l_U531 == 1)
    {
        sub_18091( ref l_U526, 0, 15, 0 );
        l_U531++;
    }
    bVar2 = false;
    if (l_U531 == 2)
    {
        if (sub_17617( l_U526 ))
        {
            if ((NOT (GET_TIME_SINCE_LAST_DEATH() == -1)) AND (GET_TIME_SINCE_LAST_DEATH() < 10000))
            {
                bVar2 = true;
            }
            if (NOT bVar2)
            {
                if ((NOT (GET_TIME_SINCE_LAST_ARREST() == -1)) AND (GET_TIME_SINCE_LAST_ARREST() < 10000))
                {
                    bVar2 = true;
                }
            }
            if (bVar2)
            {
                l_U531 = 1;
                return;
            }
            if (((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "ambInternetCafe" )) > 0) || ((sub_20664()) || ((sub_20286()) || ((g_U33837) || ((sub_20081()) || ((IS_WANTED_LEVEL_GREATER( sub_3622(), 0 )) || ((IS_THREAD_ACTIVE( g_U812 )) || (g_U10978))))))))
            {
                l_U531 = 1;
            }
            else if (sub_26841( l_U503, "FM2_CALL3", "FM2AUD" ))
            {
                l_U531++;
                return;
            }
        }
    }
    if (l_U531 == 3)
    {
        if (NOT sub_25550())
        {
            sub_16474();
            l_U531++;
        }
    }
    if (l_U531 == 4)
    {
        switch (sub_25681())
        {
            case 1:
            case 2:
            l_U531 = 1;
            return;
        }
        if (sub_27021())
        {
            l_U531 = 1;
            return;
        }
        l_U551 = 1;
        l_U553 = 1;
        l_U552 = 0;
        sub_16190( l_U503, 0 );
        l_U531 = 99;
    }
    if (l_U531 == 99)
    {
        l_U531 = 0;
        l_U530 = 2;
    }
    return;
}

void sub_26841(unknown uParam0, unknown uParam1, unknown uParam2)
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
    return sub_21708( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

void sub_27021()
{
    return g_U91._fU504;
}

void sub_27137()
{
    if (l_U531 == 0)
    {
        l_U531++;
    }
    if (l_U531 == 1)
    {
        if (sub_17617( l_U508 ))
        {
            l_U531++;
        }
    }
    if (l_U531 == 2)
    {
        if ((g_U9893._fU12) || (g_U10978))
        {
            sub_18091( ref l_U508, 0, 15, 0 );
            l_U531 = 0;
            return;
        }
        if (NOT (sub_17617( l_U516 )))
        {
            ADD_BLIP_FOR_CONTACT( l_U522._fU0, l_U522._fU4, l_U522._fU8, ref l_U520 );
            CHANGE_BLIP_SPRITE( l_U520, l_U521 );
            CHANGE_BLIP_DISPLAY( l_U520, 2 );
            sub_27365( ref l_U520, 74.92730000, -641.31370000, 12.00050000, 276.21410000 );
            if (g_U64977 < 2)
            {
                PRINT_HELP( "FM_ICON_01" );
            }
        }
        l_U531 = 99;
    }
    if (l_U531 == 99)
    {
        l_U531 = 0;
        l_U530 = 3;
    }
    return;
}

void sub_27365(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_27502()
{
    if (l_U531 == 0)
    {
        l_U531++;
    }
    if (NOT g_U10978)
    {
        if (LOCATE_CHAR_ON_FOOT_3D( sub_899(), l_U522._fU0, l_U522._fU4, l_U522._fU8, 1.00000000, 1.00000000, 2.00000000, 1 ))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_3622(), 0 ))
            {
                if (l_U500 == 0)
                {
                    PRINT_HELP_FOREVER( "FM_CLOTHES_05" );
                    l_U500 = 1;
                    SETTIMERA( 0 );
                }
            }
            else if (sub_27672())
            {
                CLEAR_HELP();
                if (sub_28251())
                {
                    l_U531 = 99;
                }
            }
            else if ((l_U500 == 0) AND ((NOT sub_27772()) AND (NOT sub_27681())))
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_03" );
                l_U500 = 1;
                SETTIMERA( 0 );
            }
            else if ((l_U500 == 0) AND (NOT sub_27681()))
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_01" );
                l_U500 = 1;
                SETTIMERA( 0 );
            }
            else if ((l_U500 == 0) AND (NOT sub_27772()))
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_02" );
                l_U500 = 1;
                SETTIMERA( 0 );
            }
            else if ((l_U500 == 0) AND (NOT sub_27860()))
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_04" );
                l_U500 = 1;
                SETTIMERA( 0 );
            }
            else if ((l_U500 == 0) AND (NOT sub_28012()))
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_06" );
                l_U500 = 1;
                SETTIMERA( 0 );
            }
            else if (l_U500 == 0)
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_03" );
                l_U500 = 1;
                SETTIMERA( 0 );
            };;;;;;;;
        }
    }
    if ((l_U500 == 1) AND (TIMERA() > 7000))
    {
        CLEAR_HELP();
        l_U500 = 0;
    }
    if ((busyOnMission) || (g_U10978))
    {
        if (sub_17617( l_U504 ))
        {
            l_U531 = 0;
            l_U530 = 5;
            busyOnMission = 0;
            return;
        }
    }
    if (l_U531 == 1)
    {
        if (sub_17617( l_U516 ))
        {
            l_U531 = 0;
            l_U530 = 4;
            busyOnMission = 0;
            return;
        }
    }
    if (l_U531 == 99)
    {
        l_U551 = 0;
        l_U531 = 0;
        l_U530 = 6;
        sub_28964();
    }
    return;
}

int sub_27672()
{
    if (NOT sub_27681())
    {
        return 0;
    }
    if (NOT sub_27772())
    {
        return 0;
    }
    if (NOT sub_27860())
    {
        return 0;
    }
    if (l_U551 == 0)
    {
        if (NOT sub_28012())
        {
            return 0;
        }
    }
    return 1;
}

int sub_27681()
{
    int iVar2;
    int iVar3;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_899(), 1 );
    if (NOT ((iVar2 == 12) || (iVar2 == 5)))
    {
        return 0;
    }
    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_899(), 2 );
    if (NOT (iVar3 == 2))
    {
        return 0;
    }
    return 1;
}

int sub_27772()
{
    int iVar2;
    int iVar3;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_899(), 5 );
    iVar3 = GET_CHAR_TEXTURE_VARIATION( sub_899(), 5 );
    if ((NOT (((iVar3 == 2) || (iVar3 == 1)) AND (iVar2 == 5))) AND (NOT (iVar2 == 2)))
    {
        return 0;
    }
    return 1;
}

int sub_27860()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = GET_CHAR_DRAWABLE_VARIATION( sub_899(), 3 );
    if (NOT (iVar2 == 0))
    {
        return 0;
    }
    iVar3 = GET_CHAR_DRAWABLE_VARIATION( sub_899(), 8 );
    if (NOT (iVar3 == 0))
    {
        return 0;
    }
    GET_CHAR_PROP_INDEX( sub_899(), 0, ref iVar4 );
    if (iVar4 > -1)
    {
        return 0;
    }
    GET_CHAR_PROP_INDEX( sub_899(), 1, ref iVar4 );
    if (iVar4 > 0)
    {
        return 0;
    }
    return 1;
}

int sub_28012()
{
    if ((HAS_CHAR_GOT_WEAPON( sub_899(), 4 )) || ((HAS_CHAR_GOT_WEAPON( sub_899(), 5 )) || ((HAS_CHAR_GOT_WEAPON( sub_899(), 18 )) || ((HAS_CHAR_GOT_WEAPON( sub_899(), 17 )) || ((HAS_CHAR_GOT_WEAPON( sub_899(), 16 )) || ((HAS_CHAR_GOT_WEAPON( sub_899(), 15 )) || ((HAS_CHAR_GOT_WEAPON( sub_899(), 14 )) || ((HAS_CHAR_GOT_WEAPON( sub_899(), 13 )) || ((HAS_CHAR_GOT_WEAPON( sub_899(), 12 )) || ((HAS_CHAR_GOT_WEAPON( sub_899(), 11 )) || ((HAS_CHAR_GOT_WEAPON( sub_899(), 10 )) || ((HAS_CHAR_GOT_WEAPON( sub_899(), 9 )) || (HAS_CHAR_GOT_WEAPON( sub_899(), 7 ))))))))))))))
    {
        return 1;
    }
    return 0;
}

int sub_28251()
{
    int iVar2;

    if (NOT (IS_PLAYER_PLAYING( sub_3622() )))
    {
        return 0;
    }
    if (g_U10978)
    {
        return 0;
    }
    if (g_U9893._fU12)
    {
        return 0;
    }
    if (g_U10980)
    {
        return 0;
    }
    if (sub_20664())
    {
        return 0;
    }
    if (NOT g_U26755)
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3622() )))
    {
        return 0;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U26757)
    {
        return 0;
    }
    return 1;
}

void sub_28964()
{
    sub_28973();
    sub_29076( ref g_U9893._fU68 );
    sub_29125();
    return;
}

void sub_28973()
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

void sub_29076(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_29125()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_14267( 1, g_U569[I] )) == 0)
        {
            sub_14553( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_14719())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

void sub_29277()
{
    boolean bVar2;
    boolean bVar3;
    int iVar4;

    if (l_U531 == 0)
    {
        REMOVE_BLIP( l_U520 );
        sub_18091( ref l_U526, 0, 5, 0 );
        l_U531++;
    }
    bVar2 = false;
    bVar3 = false;
    if (l_U531 == 1)
    {
        if (sub_17617( l_U526 ))
        {
            bVar2 = false;
            bVar3 = false;
            if (NOT (IS_CHAR_DEAD( sub_899() )))
            {
                GET_INTERIOR_FROM_CHAR( sub_899(), ref iVar4 );
                bVar2 = iVar4 == nil;
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_3622(), 0 )))
                {
                    bVar3 = true;
                }
            }
            if ((sub_20664()) || ((sub_20286()) || ((g_U33837) || ((sub_20081()) || ((IS_THREAD_ACTIVE( g_U812 )) || ((NOT bVar3) || ((NOT bVar2) || (g_U10978))))))))
            {
                l_U531 = 0;
                l_U530 = 4;
                return;
            }
            else if (sub_21648( l_U503, "MF4_FM1", "MF8AUD", 10000, 0 ))
            {
                l_U531++;
                return;
            }
            else
            {
                l_U531 = 0;
                l_U530 = 4;
                return;
            }
        }
    }
    if (l_U531 == 2)
    {
        if (NOT sub_25550())
        {
            sub_16474();
            l_U531++;
        }
    }
    if (l_U531 == 3)
    {
        switch (sub_25681())
        {
            case 1:
            case 2:
            l_U531 = 0;
            l_U530 = 4;
            return;
        }
        g_U64977++;
        if (g_U64977 > 2)
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_3622(), 150 );
            SAY_AMBIENT_SPEECH( sub_899(), "MISSION_FAIL_RAGE", 1, 1, 0 );
        }
        sub_16190( l_U503, 0 );
        l_U531 = 99;
    }
    if (l_U531 == 99)
    {
        l_U531 = 0;
        l_U530 = 5;
    }
    return;
}

void sub_29817()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    int iVar11;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U531 == 0)
    {
        REMOVE_BLIP( l_U520 );
        l_U538 = iVar2 + 10000;
        l_U531++;
    }
    if (l_U531 == 1)
    {
        if ((NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_899(), l_U522._fU0, l_U522._fU4, 140.00000000, 140.00000000, 0 ))) AND ((iVar2 > l_U538) AND (NOT g_U10978)))
        {
            l_U531++;
        }
    }
    iVar3 = 35;
    if (l_U531 == 2)
    {
        if (sub_29984())
        {
            l_U531 = 4;
        }
        else
        {
            array(ref uVar4._fU0._fU0, 3);
            ref uVar4._fU0;
            ref uVar4;
            sub_18805( iVar3, 1, 16383, 16383, ref uVar4 );
            sub_19149( ref uVar4, 1 );
            sub_19177( ref uVar4, 0 );
            sub_19204( ref uVar4 );
            l_U538 = iVar2 + 10000;
            l_U531++;
        }
    }
    if (l_U531 == 3)
    {
        if (iVar2 > l_U538)
        {
            if (g_U10978)
            {
                l_U538 = iVar2 + 10000;
                return;
            }
            if (NOT sub_29984())
            {
                l_U538 = iVar2 + 10000;
                return;
            }
            l_U531++;
        }
    }
    if (l_U531 == 4)
    {
        sub_18805( iVar3, l_U546, 16383, 16383, ref l_U539 );
        sub_19149( ref l_U539, 1 );
        sub_19177( ref l_U539, 0 );
        sub_19204( ref l_U539 );
        l_U538 = iVar2 + 10000;
        l_U531++;
    }
    if (l_U531 == 5)
    {
        if (((sub_30518( ref l_U539 )) == 3) || (iVar2 > l_U538))
        {
            iVar11 = sub_30651( l_U532, l_U533 );
            if (iVar11 > 16)
            {
                sub_26078( 12, 6, l_U534, l_U535, l_U536, l_U537 );
            }
            else if (NOT (sub_25809( 6, l_U532, l_U533 )))
            {
                sub_26078( 12, 6, l_U534, l_U535, l_U536, l_U537 );
            }
            sub_26225();
            l_U531 = 99;
        }
    }
    if (l_U531 == 99)
    {
        l_U553 = 1;
        l_U531 = 0;
        l_U530 = 2;
    }
    return;
}

int sub_29984()
{
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar2 = 0;
    iVar3 = 1;
    iVar4 = 1;
    iVar5 = 1;
    sub_20818( 3, 6, iVar2, iVar3, iVar4, iVar5, ref l_U532, ref l_U533 );
    iVar6 = GET_CURRENT_DAY_OF_WEEK();
    iVar7 = l_U532;
    if (iVar7 < iVar6)
    {
        iVar6 -= 7;
    }
    iVar8 = 0;
    while (NOT (iVar6 == iVar7))
    {
        iVar8++;
        iVar6++;
        if (iVar8 > 1)
        {
            return 0;
        }
    }
    if (iVar8 == 0)
    {
        l_U546 = 4;
    }
    else if (iVar8 == 1)
    {
        switch (l_U533)
        {
            case 0:
            case 1:
            l_U546 = 5;
            break;
            case 2:
            l_U546 = 2;
            break;
            case 3:
            l_U546 = 6;
            break;
        }
    }
    else
    {
        return 0;
    }
    return 1;
}

int sub_30518(int iParam0)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_19466( iParam0->_fU0, g_U569[I] ))
            {
                iParam0->_fU24 = I;
                return sub_14267( 4, g_U569[I] );
            }
        }
        iParam0->_fU24 = -2;
    }
    return 6;
}

int sub_30651(int iParam0, int iParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int Result;

    if (iParam0 >= 7)
    {
        return 999;
    }
    if (iParam1 >= 4)
    {
        return 999;
    }
    sub_20831( ref iVar4, ref iVar5 );
    iVar6 = iVar4;
    iVar7 = iVar5;
    sub_30707( ref iVar6, ref iVar7 );
    Result = 0;
    while (true)
    {
        if ((iVar7 == iVar5) AND (iVar6 == iVar4))
        {
            return Result;
        }
        if ((iVar7 == iParam1) AND (iVar6 == iParam0))
        {
            return Result;
        }
        sub_30707( ref iVar6, ref iVar7 );
        Result++;
    }
    return 999;
}

void sub_30707(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if ((uParam0^) >= 7)
    {
        return;
    }
    if ((uParam1^) >= 4)
    {
        return;
    }
    iVar4 = (uParam1^);
    iVar4++;
    if (iVar4 >= 4)
    {
        iVar5 = (uParam0^);
        iVar5++;
        if (iVar5 >= 7)
        {
            iVar5 = 0;
        }
        (uParam0^) = iVar5;
        iVar4 = 0;
    }
    (uParam1^) = iVar4;
    return;
}

void sub_31057()
{
    int iVar2;

    if (l_U552 == 0)
    {
        if (sub_27672())
        {
            l_U552 = 99;
        }
        else if (NOT g_U10978)
        {
            sub_1233( l_U525, 1 );
            sub_31126( 35 );
            l_U552++;
        }
    }
    if (l_U552 == 1)
    {
        if (sub_27672())
        {
            sub_1233( l_U525, 0 );
            l_U552 = 99;
        }
    }
    iVar2 = 0;
    GET_KEY_FOR_CHAR_IN_ROOM( sub_899(), ref iVar2 );
    if (iVar2 == -17186734)
    {
        l_U499 = 1;
    }
    if (l_U499 == 1)
    {
        if (iVar2 == 0)
        {
            if (sub_27672())
            {
                ;
            }
            else if (NOT sub_27860())
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_04" );
                SETTIMERA( 0 );
            }
            else if (sub_27772())
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_01" );
                SETTIMERA( 0 );
            }
            else if (sub_27681())
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_02" );
                SETTIMERA( 0 );
            }
            else
            {
                PRINT_HELP_FOREVER( "FM_CLOTHES_03" );
                SETTIMERA( 0 );
            };;;;
            l_U499 = 0;
            l_U557 = 0;
        }
    }
    if (NOT l_U557)
    {
        if (TIMERA() > 7000)
        {
            CLEAR_HELP();
            l_U557 = 1;
        }
    }
    if (l_U552 == 99)
    {
        l_U551 = 0;
    }
    return;
}

void sub_31126(unknown uParam0)
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

void sub_31654()
{
    int iVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    int iVar10;

    if (NOT (sub_17617( l_U512 )))
    {
        return;
    }
    if (sub_27672())
    {
        l_U553 = 0;
        return;
    }
    if (g_U10978)
    {
        return;
    }
    if (sub_17617( l_U504 ))
    {
        return;
    }
    iVar2 = 6;
    if (sub_27681())
    {
        iVar2 = 5;
    }
    if (sub_27772())
    {
        iVar2 = 1;
    }
    array(ref uVar3._fU0._fU0, 3);
    ref uVar3._fU0;
    ref uVar3;
    iVar10 = 11;
    sub_18805( iVar10, iVar2, 16383, 16383, ref uVar3 );
    sub_19149( ref uVar3, 1 );
    sub_19177( ref uVar3, 0 );
    sub_19204( ref uVar3 );
    sub_31126( 35 );
    l_U553 = 0;
    return;
}

