void main()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    float fVar8;

    l_U98 = 0;
    l_U99 = 1;
    l_U100 = 3;
    ProtectedSet(l_U102, 150);
    l_U103 = 0;
    l_U104 = 0;
    l_U111 = 1;
    l_U115 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U162 = 0;
    l_U163 = 1;

    // Models
    l_U164 = 2027357303;
    l_U165 = -778316080;
    l_U166 = -1464712858;

    l_U329 = 2;
    l_U341 = 0;
    l_U348 = 5;
    l_U349 = 60;

    l_U350 = 60000.00000000;
    l_U351 = 60000.00000000;
    l_U352 = 245.00000000;

    // Animation
    l_U423 = "missheli_tour";
    
    l_U436 = 0;
    l_U437 = 0;
    WAIT( 0 );
    uVar2 = {l_U438._fU4[0]};
    sub_224();

    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
        {
            GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_DISTANCE_BETWEEN_COORDS_3D( uVar2._fU0, uVar2._fU4, uVar2._fU8, uVar5._fU0, uVar5._fU4, uVar5._fU8, ref fVar8 );
            if (fVar8 > 75.00000000)
            {
                if (sub_1405())
                {
                    sub_1522();
                }
                else
                {
                    l_U111 = 0;
                }
            }
            else
            {
                l_U111 = 0;
            }
        }
    }

    if (l_U111)
    {
        sub_1637( 10 );
    }

    while (l_U111)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
            {
                if (sub_1405())
                {
                    if ((l_U103 < 8) AND (l_U103 > 1))
                    {
                        sub_3561();
                    }
                    switch (l_U103)
                    {
                        case 0:
                        sub_11577();
                        break;
                        case 1:
                        sub_11718();
                        break;
                        case 2:
                        sub_12907();
                        break;
                        case 3:
                        sub_16977();
                        break;
                        case 4:
                        REQUEST_CAR_RECORDING( l_U333 );
                        if (HAS_CAR_RECORDING_BEEN_LOADED( l_U333 ))
                        {
                            if (IS_VEH_DRIVEABLE( l_U207 ))
                            {
                                CLOSE_ALL_CAR_DOORS( l_U207 );
                                SET_CAR_ENGINE_ON( l_U207, 1, 0 );
                                FREEZE_CAR_POSITION( l_U207, 0 );
                                START_PLAYBACK_RECORDED_CAR( l_U207, l_U333 );
                                l_U103 = 5;
                            }
                            else if (l_U162)
                            {
                                SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
                                SET_PLAYER_CAN_DO_DRIVE_BY( CurrentPlayerId(), 1 );
                                sub_18579();
                                l_U162 = 0;
                            }
                        }
                        break;
                        case 5:
                        sub_19527();
                        break;
                        case 6:
                        sub_25867();
                        break;
                        case 7:
                        sub_26649();
                        break;
                        case 8:
                        sub_26752();
                        break;
                        case 9:
                        sub_26774();
                        break;
                        default: break;
                    }
                }
                else
                {
                    l_U111 = 0;
                }
            }
            else
            {
                l_U111 = 0;
            }
        }
        else
        {
            l_U111 = 0;
        }
        sub_26834();
    }
    sub_26856();
    return;
}

// Seem to be a lot of the coords and headings for these.
void sub_224()
{
    l_U217[0] = {345.68060000, -717.56760000, 4.19180000};
    l_U233[0] = 327.00000000;

    l_U217[1] = {366.79550000, -731.30110000, 4.15270000};
    l_U233[1] = 327.00000000;

    l_U217[2] = {389.55100000, -744.59860000, 4.19190000};
    l_U233[2] = 327.00000000;

    l_U217[3] = {387.11090000, -703.74890000, 4.19190000};
    l_U233[3] = 327.00000000;

    l_U217[4] = {401.05450000, -678.90960000, 4.19190000};
    l_U233[4] = 327.00000000;

    l_U239[0] = {336.26040000, -700.87640000, 4.69180000};
    l_U255[0] = 28.36760000;

    l_U239[1] = {349.66240000, -701.66820000, 3.69210000};
    l_U255[1] = 146.18140000;

    l_U239[2] = {370.29630000, -712.47020000, 3.69210000};
    l_U255[2] = 139.14320000;

    l_U239[3] = {389.43380000, -726.55320000, 3.69190000};
    l_U255[3] = 80.68730000;

    l_U239[4] = {410.95940000, -682.81460000, 3.69200000};
    l_U255[4] = 123.49320000;

    l_U261[0] = {334.94290000, -698.08830000, 3.69190000};
    l_U271[0] = 243.55540000;

    l_U261[1] = {333.54860000, -697.44460000, 3.69190000};
    l_U271[1] = 235.12950000;

    l_U261[2] = {332.39820000, -696.61680000, 3.69190000};
    l_U271[2] = 246.77140000;

    l_U279[0] = {345.78330000, -703.75600000, 4.69190000};
    l_U279[1] = {360.03200000, -712.45720000, 4.69190000};
    l_U279[2] = {378.68210000, -721.63060000, 4.69190000};
    l_U279[3] = {385.66610000, -726.54310000, 4.69190000};
    l_U279[4] = {393.45010000, -711.33580000, 4.69190000};
    l_U279[5] = {407.10180000, -686.68010000, 4.69200000};

    l_U275 = {311.65440000, -685.56080000, 3.67770000};
    l_U278 = 242.72750000;

    l_U316 = {0.45000000, 1.75000000, 0.80000000};
    l_U319 = {0.90000000, -0.10300000, 0.05000000};

    l_U334[0] = 610;
    l_U334[1] = 611;
    l_U334[2] = 612;
    l_U334[3] = 613;
    l_U334[4] = 614;
    l_U333 = 610;

    sub_1015();

    l_U340 = 999999;
    return;
}

// Generate a random number between 0 and I think the max is 5.
void sub_1015()
{
    int[5] iVar2;
    int I;
    int maxRandomNumber;
    int randomNumber;
    int J;

    array(ref iVar2, 5);
    maxRandomNumber = 5;
    for ( I = 0; I < 5; I++ )
    {
        l_U156[I] = 0;
        iVar2[I] = I;
    }
    for ( I = 0; I < 3; I++ )
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, maxRandomNumber, ref randomNumber );
        l_U156[iVar2[randomNumber]] = 1;
        if (I == 0)
        {
            l_U341 = iVar2[randomNumber];
        }
        for ( J = randomNumber; J < (maxRandomNumber - 1); J++ )
        {
            iVar2[J] = iVar2[J + 1];
        }
        maxRandomNumber--;
    }
    return;
}

// sub_1240
void CurrentPlayerId()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

// sub_1283
void CurrentPlayerChar()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1405()
{
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        if (g_U9932[2]._fU0)
        {
            if ((l_U103 == 5) || (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()))
            {
                if (sub_1466())
                {
                    if (NOT g_U10978)
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

void sub_1466()
{
    int Result;

    Result = 1;
    return Result;
}

// Request models, animation, and text
void sub_1522()
{
    // Animations
    REQUEST_MODEL( l_U164 );
    REQUEST_MODEL( l_U165 );
    REQUEST_MODEL( l_U166 );

    REQUEST_ANIMS( l_U423 );
    LOAD_ADDITIONAL_TEXT( "HT1AUD", 7 );
    return;
}

void sub_1637(unknown uParam0)
{
    g_U10133._fU0[uParam0] = 1;
    sub_1658();
    return;
}

void sub_1658()
{
    int I;
    int iVar3;

    I = 0;
    iVar3 = 0;
    for ( I = 0; I < 15; I++ )
    {
        iVar3 = sub_1686( 13 );
        if ((g_U9932[g_U9999[I]._fU0]._fU0) AND (sub_1731( 13, iVar3 )))
        {
            sub_1832( ref g_U9999[I]._fU20, g_U9999[I]._fU4, 4, 60 );
        }
        else
        {
            sub_2018( ref g_U9999[I]._fU20 );
        }
    }
    for ( I = 0; I < 7; I++ )
    {
        iVar3 = sub_1686( 11 );
        if ((g_U9932[g_U10090[I]._fU0]._fU0) AND (sub_1731( 11, iVar3 )))
        {
            sub_1832( ref g_U10090[I]._fU20, g_U10090[I]._fU4, 4, 62 );
        }
        else
        {
            sub_2018( ref g_U10090[I]._fU20 );
        }
    }
    for ( I = 0; I < 59; I++ )
    {
        iVar3 = sub_2212( I );
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_1731( g_U10324[I]._fU12, iVar3 )))
        {
            sub_1832( ref g_U10324[I]._fU32, g_U10324[I]._fU0, g_U10324[I]._fU24, g_U10324[I]._fU20 );
            sub_2520( I );
        }
        else
        {
            sub_2018( ref g_U10324[I]._fU32 );
            g_U10133._fU520[I] = 0;
        }
    }
    sub_2749();
    return;
}

int sub_1686(unknown uParam0)
{
    if (g_U10133._fU84[uParam0])
    {
        return 1;
    }
    return 0;
}

int sub_1731(unknown uParam0, boolean bParam1)
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

void sub_1832(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4, unknown uParam5)
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
        CHANGE_BLIP_PRIORITY( (uParam0^), l_U98 );
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

void sub_2018(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_2212(unknown uParam0)
{
    unknown uVar3;

    if (g_U10133._fU280[uParam0])
    {
        return 1;
    }
    if (sub_2254( g_U10324[uParam0]._fU16 ))
    {
        return 1;
    }
    if (sub_1686( g_U10324[uParam0]._fU12 ))
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

int sub_2254(unknown uParam0)
{
    if (g_U10133._fU168[uParam0])
    {
        return 1;
    }
    return 0;
}

void sub_2520(unknown uParam0)
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

void sub_2749()
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
    bVar3 = sub_1686( 13 );
    for ( I = 0; I < 15; I++ )
    {
        sub_2794( g_U9999[I]._fU20, bVar3 );
    }
    bVar3 = sub_1686( 11 );
    for ( I = 0; I < 7; I++ )
    {
        sub_2794( g_U10090[I]._fU20, bVar3 );
    }
    iVar4 = 0;
    for ( I = 0; I < 59; I++ )
    {
        if ((g_U9932[g_U10324[I]._fU28]._fU0) AND (sub_2212( I )))
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
        bVar3 = sub_2212( I );
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
        sub_2794( g_U10324[I]._fU32, bVar3 );
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
        sub_2794( g_U9943[I]._fU32, bVar3 );
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
                    fVar11 = sub_3285( uVar7, g_U9943[I]._fU8 );
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
                sub_2794( g_U9943[I]._fU32, bVar3 );
            }
        }
    }
    return;
}

void sub_2794(unknown uParam0, boolean bParam1)
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

void sub_3285(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_3561()
{
    int J;
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
    boolean bVar13;
    string sVar14;
    unknown uVar15;
    string sVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    float fVar20;

    GET_GAME_VIEWPORT_ID( ref uVar15 );
    l_U332 = 0;
    for ( l_U330 = 0; l_U330 < 5; l_U330++ )
    {
        if (NOT (l_U330 == l_U341))
        {
            bVar13 = false;
            if (l_U103 > 2)
            {
                if (l_U330 == l_U340)
                {
                    bVar13 = true;
                }
            }
            if (NOT bVar13)
            {
                if (IS_VEH_DRIVEABLE( l_U208[l_U330] ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U167[l_U330] )))
                    {
                        if (IS_CHAR_SITTING_IN_CAR( l_U167[l_U330], l_U208[l_U330] ))
                        {
                            switch (l_U105[l_U330])
                            {
                                case 0:
                                l_U332 = 0;
                                iVar4 = 0;
                                while (l_U332 < 3)
                                {
                                    if (NOT l_U130[l_U330][l_U332])
                                    {
                                        for ( J = 0; J < 3; J++ )
                                        {
                                            if (l_U151[J])
                                            {
                                                if (NOT (IS_CHAR_INJURED( l_U194[J] )))
                                                {
                                                    l_U173[l_U330][l_U332] = l_U194[J];
                                                    if (l_U330 == 0)
                                                    {
                                                        sVar16 = "passenger 0";
                                                    }
                                                    if (l_U330 == 1)
                                                    {
                                                        sVar16 = "passenger 1";
                                                    }
                                                    if (l_U330 == 2)
                                                    {
                                                        sVar16 = "passenger 2";
                                                    }
                                                    if (l_U330 == 3)
                                                    {
                                                        sVar16 = "passenger 3";
                                                    }
                                                    if (l_U330 == 4)
                                                    {
                                                        sVar16 = "passenger 4";
                                                    }
                                                    if (l_U330 == 5)
                                                    {
                                                        sVar16 = "passenger 5";
                                                    }
                                                    SET_CHAR_NAME_DEBUG( l_U173[l_U330][l_U332], sVar16 );
                                                    TASK_FLUSH_ROUTE();
                                                    for ( I = 0; I <= (l_U330 + 1); I++ )
                                                    {
                                                        TASK_EXTEND_ROUTE( l_U279[I]._fU0, l_U279[I]._fU4, l_U279[I]._fU8 );
                                                    }
                                                    CLEAR_CHAR_TASKS( l_U173[l_U330][l_U332] );
                                                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U208[l_U330], 2.50000000, 0.00000000, 0.00000000, ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
                                                    TASK_EXTEND_ROUTE( uVar7._fU0, uVar7._fU4, uVar7._fU8 );
                                                    OPEN_SEQUENCE_TASK( ref l_U205 );
                                                    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                                                    TASK_ENTER_CAR_AS_PASSENGER( 0, l_U208[l_U330], -1, l_U332 );
                                                    CLOSE_SEQUENCE_TASK( l_U205 );
                                                    TASK_PERFORM_SEQUENCE( l_U173[l_U330][l_U332], l_U205 );
                                                    CLEAR_SEQUENCE_TASK( l_U205 );
                                                    l_U130[l_U330][l_U332] = 1;
                                                    l_U151[J] = 0;
                                                    J = 99999;
                                                }
                                            }
                                        }
                                    }
                                    else if (NOT (IS_CHAR_INJURED( l_U173[l_U330][l_U332] )))
                                    {
                                        GET_SCRIPT_TASK_STATUS( l_U173[l_U330][l_U332], 29, ref l_U206 );
                                        if (l_U206 == 7)
                                        {
                                            if (IS_CHAR_IN_CAR( l_U173[l_U330][l_U332], l_U208[l_U330] ))
                                            {
                                                iVar4++;
                                            }
                                            else
                                            {
                                                CLEAR_CHAR_TASKS( l_U173[l_U330][l_U332] );
                                                TASK_FLUSH_ROUTE();
                                                for ( J = 0; J <= (l_U330 + 1); J++ )
                                                {
                                                    TASK_EXTEND_ROUTE( l_U279[J]._fU0, l_U279[J]._fU4, l_U279[J]._fU8 );
                                                }
                                                OPEN_SEQUENCE_TASK( ref l_U205 );
                                                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                                                TASK_ENTER_CAR_AS_PASSENGER( 0, l_U208[l_U330], -1, l_U332 );
                                                CLOSE_SEQUENCE_TASK( l_U205 );
                                                TASK_PERFORM_SEQUENCE( l_U173[l_U330][l_U332], l_U205 );
                                                CLEAR_SEQUENCE_TASK( l_U205 );
                                            }
                                        }
                                        else
                                        {
                                            for ( J = 0; J < 5; J++ )
                                            {
                                                if (NOT (IS_CHAR_INJURED( l_U198[J] )))
                                                {
                                                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U173[l_U330][l_U332], l_U198[J], 3.50000000, 3.50000000, 2.00000000, 0 ))
                                                    {
                                                        GET_SCRIPT_TASK_STATUS( l_U198[J], 80, ref l_U206 );
                                                        if (l_U206 == 7)
                                                        {
                                                            if (J == 0)
                                                            {
                                                                sVar14 = "indicate_right_a";
                                                            }
                                                            else if (J < 3)
                                                            {
                                                                sVar14 = "indicate_left_a";
                                                            }
                                                            else if (J > 3)
                                                            {
                                                                sVar14 = "indicate_right_a";
                                                            }
                                                            else if (l_U330 == 2)
                                                            {
                                                                sVar14 = "indicate_left_a";
                                                            }
                                                            else
                                                            {
                                                                sVar14 = "indicate_right_a";
                                                            };;;;
                                                            CLEAR_CHAR_TASKS( l_U198[J] );
                                                            TASK_PLAY_ANIM( l_U198[J], sVar14, l_U423, 12.00000000, 0, 0, 0, 0, -1 );
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U173[l_U330][l_U332] );
                                        l_U130[l_U330][l_U332] = 0;
                                    }
                                    l_U332++;
                                }
                                if (iVar4 == 3)
                                {
                                    l_U105[l_U330] = 1;
                                }
                                break;
                                case 1:
                                REQUEST_CAR_RECORDING( l_U334[l_U330] );
                                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U334[l_U330] ))
                                {
                                    CLOSE_ALL_CAR_DOORS( l_U208[l_U330] );
                                    FREEZE_CAR_POSITION( l_U208[l_U330], 0 );
                                    SET_CAR_ENGINE_ON( l_U208[l_U330], 1, 0 );
                                    GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U334[l_U330], l_U351, ref uVar10 );
                                    if (uVar10._fU8 > l_U349)
                                    {
                                        uVar10._fU8 = l_U349 - 5.00000000;
                                    }
                                    OPEN_SEQUENCE_TASK( ref l_U205 );
                                    TASK_HELI_MISSION( 0, l_U208[l_U330], 0, 0, uVar10._fU0, uVar10._fU4, uVar10._fU8, 4, 20.00000000, 10, -1, l_U349, l_U348 );
                                    CLOSE_SEQUENCE_TASK( l_U205 );
                                    TASK_PERFORM_SEQUENCE( l_U167[l_U330], l_U205 );
                                    CLEAR_SEQUENCE_TASK( l_U205 );
                                    l_U105[l_U330] = 2;
                                    l_U424[l_U330] = 0;
                                }
                                break;
                                case 2:
                                if (HAS_CAR_RECORDING_BEEN_LOADED( l_U334[l_U330] ))
                                {
                                    GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U334[l_U330], l_U351, ref uVar10 );
                                    if (uVar10._fU8 > l_U349)
                                    {
                                        uVar10._fU8 = l_U349 - 5.00000000;
                                    }
                                    GET_SCRIPT_TASK_STATUS( l_U167[l_U330], 29, ref l_U206 );
                                    if ((sub_5695( l_U208[l_U330], l_U330 )) || (l_U206 == 7))
                                    {
                                        if ((sub_5695( l_U208[l_U330], l_U330 )) || (LOCATE_CAR_3D( l_U208[l_U330], uVar10._fU0, uVar10._fU4, uVar10._fU8, 15.00000000, 15.00000000, 15.00000000, 0 )))
                                        {
                                            if (sub_5695( l_U208[l_U330], l_U330 ))
                                            {
                                                CLEAR_CHAR_TASKS( l_U167[l_U330] );
                                                if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U208[l_U330] ))
                                                {
                                                    STOP_PLAYBACK_RECORDED_CAR( l_U208[l_U330] );
                                                }
                                                FREEZE_CAR_POSITION( l_U208[l_U330], 1 );
                                                for ( l_U332 = 0; l_U332 < 3; l_U332++ )
                                                {
                                                    if (NOT (IS_CHAR_DEAD( l_U173[l_U330][l_U332] )))
                                                    {
                                                        SET_CHAR_VISIBLE( l_U173[l_U330][l_U332], 0 );
                                                    }
                                                }
                                                SET_CHAR_VISIBLE( l_U167[l_U330], 0 );
                                                SET_CAR_VISIBLE( l_U208[l_U330], 0 );
                                                SET_CAR_ENGINE_ON( l_U208[l_U330], 0, 1 );
                                                SET_CAR_COLLISION( l_U208[l_U330], 0 );
                                                GET_GAME_TIMER( ref l_U342[l_U330] );
                                                l_U105[l_U330] = 3;
                                            }
                                        }
                                        else if (NOT (sub_5695( l_U208[l_U330], l_U330 )))
                                        {
                                            OPEN_SEQUENCE_TASK( ref l_U205 );
                                            TASK_HELI_MISSION( 0, l_U208[l_U330], 0, 0, uVar10._fU0, uVar10._fU4, uVar10._fU8, 4, 20.00000000, 10, -1, l_U349, l_U348 );
                                            CLOSE_SEQUENCE_TASK( l_U205 );
                                            TASK_PERFORM_SEQUENCE( l_U167[l_U330], l_U205 );
                                            CLEAR_SEQUENCE_TASK( l_U205 );
                                        }
                                    }
                                }
                                else
                                {
                                    REQUEST_CAR_RECORDING( l_U334[l_U330] );
                                }
                                break;
                                case 3:
                                if (NOT (HAS_CAR_RECORDING_BEEN_LOADED( l_U334[l_U330] )))
                                {
                                    REQUEST_CAR_RECORDING( l_U334[l_U330] );
                                }
                                else
                                {
                                    uVar6 = GET_TOTAL_DURATION_OF_CAR_RECORDING( l_U334[l_U330] );
                                    GET_GAME_TIMER( ref l_U419 );
                                    l_U420 = l_U419 - l_U342[l_U330];
                                    if (l_U420 >= (uVar6 - l_U350))
                                    {
                                        REQUEST_CAR_RECORDING( l_U334[l_U330] );
                                        if (HAS_CAR_RECORDING_BEEN_LOADED( l_U334[l_U330] ))
                                        {
                                            GET_POSITION_OF_CAR_RECORDING_AT_TIME( l_U334[l_U330], uVar6 - l_U350, ref uVar10 );
                                            if (NOT (CAM_IS_SPHERE_VISIBLE( uVar15, uVar10._fU0, uVar10._fU4, uVar10._fU8, 4.00000000 )))
                                            {
                                                if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U208[l_U330] )))
                                                {
                                                    SET_CAR_COORDINATES( l_U208[l_U330], uVar10._fU0, uVar10._fU4, uVar10._fU8 );
                                                    SET_CAR_ENGINE_ON( l_U208[l_U330], 1, 1 );
                                                    SET_HELI_BLADES_FULL_SPEED( l_U208[l_U330] );
                                                    START_PLAYBACK_RECORDED_CAR( l_U208[l_U330], l_U334[l_U330] );
                                                    FREEZE_CAR_POSITION( l_U208[l_U330], 0 );
                                                    SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U208[l_U330], uVar6 - l_U350 );
                                                }
                                                else
                                                {
                                                    for ( l_U332 = 0; l_U332 < 3; l_U332++ )
                                                    {
                                                        if (NOT (IS_CHAR_DEAD( l_U173[l_U330][l_U332] )))
                                                        {
                                                            SET_CHAR_VISIBLE( l_U173[l_U330][l_U332], 1 );
                                                        }
                                                    }
                                                    SET_CHAR_VISIBLE( l_U167[l_U330], 1 );
                                                    SET_CAR_VISIBLE( l_U208[l_U330], 1 );
                                                    SET_CAR_ENGINE_ON( l_U208[l_U330], 1, 1 );
                                                    SET_HELI_BLADES_FULL_SPEED( l_U208[l_U330] );
                                                    SET_CAR_COLLISION( l_U208[l_U330], 1 );
                                                    l_U105[l_U330] = 4;
                                                }
                                            }
                                        }
                                    }
                                }
                                break;
                                case 4:
                                if ((LOCATE_CAR_3D( l_U208[l_U330], l_U217[l_U330]._fU0, l_U217[l_U330]._fU4, l_U217[l_U330]._fU8, 5.00000000, 5.00000000, 5.00000000, 0 )) || (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U208[l_U330] ))))
                                {
                                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U208[l_U330] )))
                                    {
                                        l_U105[l_U330] = 5;
                                        TASK_HELI_MISSION( l_U167[l_U330], l_U208[l_U330], 0, 0, l_U217[l_U330]._fU0, l_U217[l_U330]._fU4, l_U217[l_U330]._fU8, 19, 50, 5, -1, l_U349, l_U348 );
                                    }
                                    else if ((FIND_TIME_POSITION_IN_RECORDING( l_U208[l_U330] )) > 10000)
                                    {
                                        STOP_PLAYBACK_RECORDED_CAR( l_U208[l_U330] );
                                    }
                                }
                                break;
                                case 5:
                                GET_SCRIPT_TASK_STATUS( l_U167[l_U330], 49, ref l_U206 );
                                if (l_U206 == 7)
                                {
                                    SET_CAR_ENGINE_ON( l_U208[l_U330], 0, 0 );
                                    if (IS_VEH_DRIVEABLE( l_U208[l_U330] ))
                                    {
                                        FREEZE_CAR_POSITION( l_U208[l_U330], 0 );
                                    }
                                    TASK_FLUSH_ROUTE();
                                    for ( I = l_U330; I >= 0; I-- )
                                    {
                                        TASK_EXTEND_ROUTE( l_U279[I]._fU0, l_U279[I]._fU4, l_U279[I]._fU8 );
                                    }
                                    for ( l_U332 = 0; l_U332 < 3; l_U332++ )
                                    {
                                        if (NOT (IS_CHAR_INJURED( l_U173[l_U330][l_U332] )))
                                        {
                                            GENERATE_RANDOM_INT_IN_RANGE( 500, 3000, ref uVar5 );
                                            CLEAR_CHAR_TASKS( l_U173[l_U330][l_U332] );
                                            OPEN_SEQUENCE_TASK( ref l_U205 );
                                            TASK_PAUSE( 0, uVar5 );
                                            if (IS_CHAR_IN_ANY_CAR( l_U173[l_U330][l_U332] ))
                                            {
                                                TASK_LEAVE_ANY_CAR( 0 );
                                            }
                                            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 330.90300000, -723.28050000, 3.69200000, 2, -1, 2.00000000 );
                                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 299.57320000, -704.44290000, 3.68960000, 2, -1, 2.00000000 );
                                            CLOSE_SEQUENCE_TASK( l_U205 );
                                            TASK_PERFORM_SEQUENCE( l_U173[l_U330][l_U332], l_U205 );
                                            CLEAR_SEQUENCE_TASK( l_U205 );
                                            SET_CHAR_KEEP_TASK( l_U173[l_U330][l_U332], 1 );
                                        }
                                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U173[l_U330][l_U332] );
                                        l_U130[l_U330][l_U332] = 0;
                                    }
                                    l_U118[l_U330] = 0;
                                    l_U105[l_U330] = 6;
                                }
                                break;
                                case 6:
                                l_U105[l_U330] = 0;
                                break;
                            }
                        }
                        else
                        {
                            l_U332 = 0;
                            iVar4 = 0;
                            while (l_U332 < 3)
                            {
                                if (l_U130[l_U330][l_U332])
                                {
                                    if (NOT (IS_CHAR_INJURED( l_U173[l_U330][l_U332] )))
                                    {
                                        CLEAR_CHAR_TASKS( l_U173[l_U330][l_U332] );
                                        OPEN_SEQUENCE_TASK( ref l_U205 );
                                        if (IS_CHAR_IN_ANY_CAR( l_U173[l_U330][l_U332] ))
                                        {
                                            TASK_LEAVE_ANY_CAR( 0 );
                                        }
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 330.90300000, -723.28050000, 3.69200000, 2, -1, 2.00000000 );
                                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 299.57320000, -704.44290000, 3.68960000, 2, -1, 2.00000000 );
                                        CLOSE_SEQUENCE_TASK( l_U205 );
                                        TASK_PERFORM_SEQUENCE( l_U173[l_U330][l_U332], l_U205 );
                                        CLEAR_SEQUENCE_TASK( l_U205 );
                                        SET_CHAR_KEEP_TASK( l_U173[l_U330][l_U332], 1 );
                                    }
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U173[l_U330][l_U332] );
                                    l_U130[l_U330][l_U332] = 0;
                                }
                                l_U332++;
                            }
                        }
                    }
                    else
                    {
                        l_U332 = 0;
                        iVar4 = 0;
                        while (l_U332 < 3)
                        {
                            if (l_U130[l_U330][l_U332])
                            {
                                if (NOT (IS_CHAR_INJURED( l_U173[l_U330][l_U332] )))
                                {
                                    CLEAR_CHAR_TASKS( l_U173[l_U330][l_U332] );
                                    OPEN_SEQUENCE_TASK( ref l_U205 );
                                    if (IS_CHAR_IN_ANY_CAR( l_U173[l_U330][l_U332] ))
                                    {
                                        TASK_LEAVE_ANY_CAR( 0 );
                                    }
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 330.90300000, -723.28050000, 3.69200000, 2, -1, 2.00000000 );
                                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 299.57320000, -704.44290000, 3.68960000, 2, -1, 2.00000000 );
                                    CLOSE_SEQUENCE_TASK( l_U205 );
                                    TASK_PERFORM_SEQUENCE( l_U173[l_U330][l_U332], l_U205 );
                                    CLEAR_SEQUENCE_TASK( l_U205 );
                                    SET_CHAR_KEEP_TASK( l_U173[l_U330][l_U332], 1 );
                                }
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U173[l_U330][l_U332] );
                                l_U130[l_U330][l_U332] = 0;
                            }
                            l_U332++;
                        }
                    }
                }
                else
                {
                    l_U332 = 0;
                    iVar4 = 0;
                    while (l_U332 < 3)
                    {
                        if (l_U130[l_U330][l_U332])
                        {
                            if (NOT (IS_CHAR_INJURED( l_U173[l_U330][l_U332] )))
                            {
                                CLEAR_CHAR_TASKS( l_U173[l_U330][l_U332] );
                                OPEN_SEQUENCE_TASK( ref l_U205 );
                                if (IS_CHAR_IN_ANY_CAR( l_U173[l_U330][l_U332] ))
                                {
                                    TASK_LEAVE_ANY_CAR( 0 );
                                }
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 330.90300000, -723.28050000, 3.69200000, 2, -1, 2.00000000 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 299.57320000, -704.44290000, 3.68960000, 2, -1, 2.00000000 );
                                CLOSE_SEQUENCE_TASK( l_U205 );
                                TASK_PERFORM_SEQUENCE( l_U173[l_U330][l_U332], l_U205 );
                                CLEAR_SEQUENCE_TASK( l_U205 );
                                SET_CHAR_KEEP_TASK( l_U173[l_U330][l_U332], 1 );
                            }
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U173[l_U330][l_U332] );
                            l_U130[l_U330][l_U332] = 0;
                        }
                        l_U332++;
                    }
                }
            }
        }
    }
    for ( J = 0; J < 3; J++ )
    {
        if (l_U151[J])
        {
            if (IS_CHAR_INJURED( l_U194[J] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U194[J] );
                l_U151[J] = 0;
            }
        }
        else
        {
            I = J + 1;
            if (I < 3)
            {
                if (l_U151[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U194[I] )))
                    {
                        l_U194[J] = l_U194[I];
                        CLEAR_CHAR_TASKS( l_U194[I] );
                        OPEN_SEQUENCE_TASK( ref l_U205 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U261[J]._fU0, l_U261[J]._fU4, l_U261[J]._fU8, 2, -1, -1 );
                        TASK_ACHIEVE_HEADING( 0, l_U271[J] );
                        CLOSE_SEQUENCE_TASK( l_U205 );
                        TASK_PERFORM_SEQUENCE( l_U194[J], l_U205 );
                        CLEAR_SEQUENCE_TASK( l_U205 );
                        l_U151[J] = 1;
                        l_U151[I] = 0;
                    }
                }
            }
            else
            {
                GET_GAME_TIMER( ref l_U419 );
                l_U420 = l_U419 - l_U421;
                if (l_U420 > 5000)
                {
                    if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
                    {
                        if (NOT (CAM_IS_SPHERE_VISIBLE( uVar15, l_U275._fU0, l_U275._fU4, l_U275._fU8, 2.00000000 )))
                        {
                            CREATE_RANDOM_CHAR( l_U275._fU0, l_U275._fU4, l_U275._fU8, ref l_U194[J] );
                            SET_CHAR_HEADING( l_U194[J], l_U278 );
                            SET_CHAR_RELATIONSHIP_GROUP( l_U194[J], 1 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U194[J], 0 );
                            OPEN_SEQUENCE_TASK( ref l_U205 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U261[J]._fU0, l_U261[J]._fU4, l_U261[J]._fU8, 2, -1, -1 );
                            TASK_ACHIEVE_HEADING( 0, l_U271[J] );
                            CLOSE_SEQUENCE_TASK( l_U205 );
                            TASK_PERFORM_SEQUENCE( l_U194[J], l_U205 );
                            CLEAR_SEQUENCE_TASK( l_U205 );
                            l_U151[J] = 1;
                            GET_GAME_TIMER( ref l_U421 );
                        }
                    }
                }
            }
        }
    }
    for ( J = 0; J < 5; J++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U198[J] )))
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U198[J], l_U239[J]._fU0, l_U239[J]._fU4, l_U239[J]._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U198[J], 29, ref l_U206 );
                if ((NOT (IS_PED_IN_COMBAT( l_U198[J] ))) AND (l_U206 == 7))
                {
                    CLEAR_CHAR_TASKS( l_U198[J] );
                    OPEN_SEQUENCE_TASK( ref l_U205 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U239[J]._fU0, l_U239[J]._fU4, l_U239[J]._fU8, 2, 10000, 1.00000000 );
                    TASK_ACHIEVE_HEADING( 0, l_U255[J] );
                    CLOSE_SEQUENCE_TASK( l_U205 );
                    TASK_PERFORM_SEQUENCE( l_U198[J], l_U205 );
                    CLEAR_SEQUENCE_TASK( l_U205 );
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
    {
        GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar17._fU0, ref uVar17._fU4, ref uVar17._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( uVar17._fU0, uVar17._fU4, uVar17._fU8, l_U217[0]._fU0, l_U217[0]._fU4, l_U217[0]._fU8, ref fVar20 );
    }
    if (fVar20 >= 250.00000000)
    {
        if (l_U155)
        {
            sub_10126();
            l_U155 = 0;
        }
    }
    else if (fVar20 <= 150.00000000)
    {
        if (NOT l_U155)
        {
            sub_10583();
            l_U155 = 1;
        }
    }
    return;
}

int sub_5695(unknown uParam0, unknown uParam1)
{
    float fVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    GET_GAME_VIEWPORT_ID( ref uVar11 );
    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
        {
            GET_CAR_COORDINATES( uParam0, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
            GET_CHAR_COORDINATES( CurrentPlayerChar(), ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
            fVar4 = VDIST( uVar8, uVar5 );
            if (fVar4 >= l_U352)
            {
                if (NOT (CAM_IS_SPHERE_VISIBLE( uVar11, uVar5._fU0, uVar5._fU4, uVar5._fU8, 2.00000000 )))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_10126()
{
    for ( l_U330 = 0; l_U330 < 5; l_U330++ )
    {
        if (NOT (l_U330 == l_U340))
        {
            if (NOT (IS_CHAR_DEAD( l_U167[l_U330] )))
            {
                ;
            }
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U167[l_U330] );
            for ( l_U331 = 0; l_U331 < 3; l_U331++ )
            {
                if (NOT (IS_CHAR_DEAD( l_U173[l_U330][l_U331] )))
                {
                    ;
                }
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U173[l_U330][l_U331] );
            }
            if (IS_VEH_DRIVEABLE( l_U208[l_U330] ))
            {
                ;
            }
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U208[l_U330] );
            REMOVE_CAR_RECORDING( l_U334[l_U330] );
        }
    }
    for ( l_U330 = 0; l_U330 < 5; l_U330++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U198[l_U330] )))
        {
            ;
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U198[l_U330] );
    }
    for ( l_U330 = 0; l_U330 < 3; l_U330++ )
    {
        if (NOT (IS_CHAR_DEAD( l_U194[l_U330] )))
        {
            ;
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U194[l_U330] );
    }
    return;
}

void sub_10583()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;

    for ( l_U330 = 0; l_U330 < 5; l_U330++ )
    {
        if (NOT (l_U330 == l_U340))
        {
            if (l_U156[l_U330])
            {
                CREATE_CAR( l_U164, l_U217[l_U330]._fU0, l_U217[l_U330]._fU4, l_U217[l_U330]._fU8, ref l_U208[l_U330], 1 );
                fVar2 = l_U233[l_U330];
                GENERATE_RANDOM_FLOAT_IN_RANGE( -10.00000000, 10.00000000, ref uVar3 );
                fVar2 += uVar3;
                SET_CAR_HEADING( l_U208[l_U330], fVar2 );
                CREATE_CHAR_INSIDE_CAR( l_U208[l_U330], 26, l_U165, ref l_U167[l_U330] );
                SET_CHAR_RELATIONSHIP_GROUP( l_U167[l_U330], 24 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U167[l_U330], 1 );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U167[l_U330] );
                for ( l_U331 = 0; l_U331 < 3; l_U331++ )
                {
                    l_U130[l_U330][l_U331] = 0;
                }
                SET_CAR_ENGINE_ON( l_U208[l_U330], 0, 1 );
                l_U118[l_U330] = 0;
                l_U124[l_U330] = 0;
                l_U105[l_U330] = 0;
            }
        }
    }
    for ( l_U330 = 0; l_U330 < 5; l_U330++ )
    {
        CREATE_CHAR( 26, l_U166, l_U239[l_U330]._fU0, l_U239[l_U330]._fU4, l_U239[l_U330]._fU8, ref l_U198[l_U330], 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U198[l_U330] );
        SET_CHAR_HEADING( l_U198[l_U330], l_U255[l_U330] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U198[l_U330], 24 );
    }
    GET_GAME_VIEWPORT_ID( ref uVar4 );
    for ( l_U330 = 0; l_U330 < 3; l_U330++ )
    {
        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
        {
            if (NOT (CAM_IS_SPHERE_VISIBLE( uVar4, l_U261[l_U330]._fU0, l_U261[l_U330]._fU4, l_U261[l_U330]._fU8, 2.00000000 )))
            {
                CREATE_RANDOM_CHAR( l_U261[l_U330]._fU0, l_U261[l_U330]._fU4, l_U261[l_U330]._fU8, ref l_U194[l_U330] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U194[l_U330] );
                SET_CHAR_HEADING( l_U194[l_U330], l_U271[l_U330] );
                SET_CHAR_RELATIONSHIP_GROUP( l_U194[l_U330], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U194[l_U330], 0 );
                l_U151[l_U330] = 1;
            }
        }
    }
    GET_GAME_TIMER( ref l_U421 );
    return;
}

void sub_11577()
{
    if ((NOT (HAVE_ANIMS_LOADED( l_U423 ))) || ((NOT (HAS_MODEL_LOADED( l_U166 ))) || ((NOT (HAS_MODEL_LOADED( l_U165 ))) || (NOT (HAS_MODEL_LOADED( l_U164 ))))))
    {
        REQUEST_MODEL( l_U164 );
        REQUEST_MODEL( l_U165 );
        REQUEST_MODEL( l_U166 );
        REQUEST_ANIMS( l_U423 );
    }
    else
    {
        l_U103 = 1;
    }
    return;
}

void sub_11718()
{
    float fVar2;
    unknown uVar3;
    unknown uVar4;

    for ( l_U330 = 0; l_U330 < 5; l_U330++ )
    {
        if (l_U156[l_U330])
        {
            CREATE_CAR( l_U164, l_U217[l_U330]._fU0, l_U217[l_U330]._fU4, l_U217[l_U330]._fU8, ref l_U208[l_U330], 1 );
            fVar2 = l_U233[l_U330];
            GENERATE_RANDOM_FLOAT_IN_RANGE( -10.00000000, 10.00000000, ref uVar3 );
            fVar2 += uVar3;
            SET_CAR_HEADING( l_U208[l_U330], fVar2 );
            CREATE_CHAR_INSIDE_CAR( l_U208[l_U330], 26, l_U165, ref l_U167[l_U330] );
            SET_CHAR_RELATIONSHIP_GROUP( l_U167[l_U330], 24 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U167[l_U330], 1 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U167[l_U330] );
            SET_CHAR_PROP_INDEX( l_U167[l_U330], 0, 0 );
            if (l_U330 == 0)
            {
                SET_AMBIENT_VOICE_NAME( l_U167[l_U330], "HELICOPTER_PILOT_1" );
            }
            if (l_U330 == 1)
            {
                SET_AMBIENT_VOICE_NAME( l_U167[l_U330], "HELICOPTER_PILOT_3" );
            }
            if (l_U330 == 2)
            {
                SET_AMBIENT_VOICE_NAME( l_U167[l_U330], "HELICOPTER_PILOT_3" );
            }
            if (l_U330 == 3)
            {
                SET_AMBIENT_VOICE_NAME( l_U167[l_U330], "HELICOPTER_PILOT_1" );
            }
            if (l_U330 == 4)
            {
                SET_AMBIENT_VOICE_NAME( l_U167[l_U330], "HELICOPTER_PILOT_2" );
            }
            for ( l_U331 = 0; l_U331 < 3; l_U331++ )
            {
                l_U130[l_U330][l_U331] = 0;
            }
            LOCK_CAR_DOORS( l_U208[l_U330], 1 );
            SET_CAR_ENGINE_ON( l_U208[l_U330], 0, 1 );
            l_U118[l_U330] = 0;
            l_U124[l_U330] = 0;
            l_U105[l_U330] = 0;
        }
    }
    for ( l_U330 = 0; l_U330 < 5; l_U330++ )
    {
        CREATE_CHAR( 26, l_U166, l_U239[l_U330]._fU0, l_U239[l_U330]._fU4, l_U239[l_U330]._fU8, ref l_U198[l_U330], 1 );
        SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U198[l_U330] );
        SET_CHAR_HEADING( l_U198[l_U330], l_U255[l_U330] );
        SET_CHAR_RELATIONSHIP_GROUP( l_U198[l_U330], 24 );
    }
    GET_GAME_VIEWPORT_ID( ref uVar4 );
    for ( l_U330 = 0; l_U330 < 3; l_U330++ )
    {
        if (CAN_CREATE_RANDOM_CHAR( 0, 0 ))
        {
            if (NOT (CAM_IS_SPHERE_VISIBLE( uVar4, l_U261[l_U330]._fU0, l_U261[l_U330]._fU4, l_U261[l_U330]._fU8, 2.00000000 )))
            {
                CREATE_RANDOM_CHAR( l_U261[l_U330]._fU0, l_U261[l_U330]._fU4, l_U261[l_U330]._fU8, ref l_U194[l_U330] );
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U194[l_U330] );
                SET_CHAR_HEADING( l_U194[l_U330], l_U271[l_U330] );
                SET_CHAR_RELATIONSHIP_GROUP( l_U194[l_U330], 1 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U194[l_U330], 0 );
                l_U151[l_U330] = 1;
            }
        }
    }
    GET_GAME_TIMER( ref l_U421 );
    l_U155 = 1;
    l_U103 = 2;
    return;
}

void sub_12907()
{
    boolean bVar2;

    bVar2 = false;
    for ( l_U330 = 0; l_U330 < 5; l_U330++ )
    {
        if ((NOT l_U124[l_U330]) AND (IS_VEH_DRIVEABLE( l_U208[l_U330] )))
        {
            if (NOT (IS_CHAR_INJURED( l_U167[l_U330] )))
            {
                if (IS_CHAR_SITTING_IN_CAR( l_U167[l_U330], l_U208[l_U330] ))
                {
                    if (NOT (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U208[l_U330] )))
                    {
                        if (IS_CAR_PASSENGER_SEAT_FREE( l_U208[l_U330], 0 ))
                        {
                            if (NOT l_U118[l_U330])
                            {
                                if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
                                {
                                    if ((NOT (IS_WANTED_LEVEL_GREATER( CurrentPlayerId(), 0 ))) AND (LOCATE_CHAR_ON_FOOT_CAR_3D( CurrentPlayerChar(), l_U208[l_U330], 3.50000000, 3.50000000, 2.00000000, 0 )))
                                    {
                                        if ((sub_13201()) AND (IS_SCORE_GREATER( CurrentPlayerId(), ProtectedGet(l_U102) - 1 )))
                                        {
                                            if (IS_CONTROL_PRESSED( 2, 3 ))
                                            {
                                                GET_GAME_TIMER( ref l_U419 );
                                                l_U420 = l_U419 - l_U422;
                                                if (l_U420 >= 500)
                                                {
                                                    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HETR_01" ))
                                                    {
                                                        CLEAR_HELP();
                                                    }
                                                    l_U340 = l_U330;
                                                    l_U333 = l_U334[l_U330];
                                                    l_U207 = l_U208[l_U330];
                                                    l_U204 = l_U167[l_U330];
                                                    for ( l_U332 = 0; l_U332 < 3; l_U332++ )
                                                    {
                                                        if (l_U130[l_U330][l_U332])
                                                        {
                                                            if (NOT (IS_CHAR_INJURED( l_U173[l_U330][l_U332] )))
                                                            {
                                                                CLEAR_CHAR_TASKS( l_U173[l_U330][l_U332] );
                                                                OPEN_SEQUENCE_TASK( ref l_U205 );
                                                                if (IS_CHAR_IN_ANY_CAR( l_U173[l_U330][l_U332] ))
                                                                {
                                                                    TASK_LEAVE_ANY_CAR( 0 );
                                                                }
                                                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 330.90300000, -723.28050000, 3.69200000, 2, -1, 2.00000000 );
                                                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 299.57320000, -704.44290000, 3.68960000, 2, -1, 2.00000000 );
                                                                CLOSE_SEQUENCE_TASK( l_U205 );
                                                                TASK_PERFORM_SEQUENCE( l_U173[l_U330][l_U332], l_U205 );
                                                                CLEAR_SEQUENCE_TASK( l_U205 );
                                                                SET_CHAR_KEEP_TASK( l_U173[l_U330][l_U332], 1 );
                                                            }
                                                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U173[l_U330][l_U332] );
                                                            l_U130[l_U330][l_U332] = 1;
                                                        }
                                                    }
                                                    l_U118[l_U330] = 1;
                                                    l_U332 = 0;
                                                    switch (l_U333)
                                                    {
                                                        case 610:
                                                        StrCopy( ref l_U370[0], "HT1_P1A2", 16 );
                                                        StrCopy( ref l_U370[1], "HT1_P1B2", 16 );
                                                        StrCopy( ref l_U370[2], "HT1_P1C2", 16 );
                                                        StrCopy( ref l_U370[3], "HT1_P1D2", 16 );
                                                        StrCopy( ref l_U370[4], "HT1_P1E2", 16 );
                                                        StrCopy( ref l_U370[5], "HT1_P1F2", 16 );
                                                        StrCopy( ref l_U370[6], "HT1_P1H2", 16 );
                                                        StrCopy( ref l_U370[7], "HT1_P1I2", 16 );
                                                        StrCopy( ref l_U370[8], "HT1_P1J2", 16 );
                                                        StrCopy( ref l_U370[9], "HT1_P1K2", 16 );
                                                        StrCopy( ref l_U370[10], "HT1_P1L2", 16 );
                                                        l_U354[0] = 0;
                                                        l_U354[1] = 30000;
                                                        l_U354[2] = 60000;
                                                        l_U354[3] = 98000;
                                                        l_U354[4] = 130000;
                                                        l_U354[5] = 148000;
                                                        l_U354[6] = 180000;
                                                        l_U354[7] = 245000;
                                                        l_U354[8] = 257000;
                                                        l_U354[9] = 296000;
                                                        l_U354[10] = 340000;
                                                        l_U367 = 11;
                                                        l_U368 = 2;
                                                        l_U369 = 8;
                                                        sub_14235( 1, l_U167[l_U330], "HELICOPTER_PILOT_1", 0 );
                                                        break;
                                                        case 611:
                                                        StrCopy( ref l_U370[0], "HT1_P3A2", 16 );
                                                        StrCopy( ref l_U370[1], "HT1_P3B2", 16 );
                                                        StrCopy( ref l_U370[2], "HT1_P3C2", 16 );
                                                        StrCopy( ref l_U370[3], "HT1_P3D2", 16 );
                                                        StrCopy( ref l_U370[4], "HT1_P3E2", 16 );
                                                        StrCopy( ref l_U370[5], "HT1_P3F2", 16 );
                                                        StrCopy( ref l_U370[6], "HT1_P3G2", 16 );
                                                        StrCopy( ref l_U370[7], "HT1_P3H2", 16 );
                                                        StrCopy( ref l_U370[8], "HT1_P3I2", 16 );
                                                        StrCopy( ref l_U370[9], "HT1_P3J2", 16 );
                                                        StrCopy( ref l_U370[10], "HT1_P3K2", 16 );
                                                        StrCopy( ref l_U370[11], "HT1_P3L2", 16 );
                                                        l_U354[0] = 0;
                                                        l_U354[1] = 59000;
                                                        l_U354[2] = 99000;
                                                        l_U354[3] = 111000;
                                                        l_U354[4] = 148000;
                                                        l_U354[5] = 156000;
                                                        l_U354[6] = 165000;
                                                        l_U354[7] = 215000;
                                                        l_U354[8] = 230000;
                                                        l_U354[9] = 252000;
                                                        l_U354[10] = 295000;
                                                        l_U354[11] = 338000;
                                                        l_U367 = 12;
                                                        l_U368 = 1;
                                                        l_U369 = 10;
                                                        sub_14235( 4, l_U167[l_U330], "HELICOPTER_PILOT_3", 0 );
                                                        break;
                                                        case 612:
                                                        StrCopy( ref l_U370[0], "HT1_P3A", 16 );
                                                        StrCopy( ref l_U370[1], "HT1_P3B", 16 );
                                                        StrCopy( ref l_U370[2], "HT1_P3C", 16 );
                                                        StrCopy( ref l_U370[3], "HT1_P3D", 16 );
                                                        StrCopy( ref l_U370[4], "HT1_P3E", 16 );
                                                        StrCopy( ref l_U370[5], "HT1_P3F", 16 );
                                                        StrCopy( ref l_U370[6], "HT1_P3G", 16 );
                                                        StrCopy( ref l_U370[7], "HT1_P3H", 16 );
                                                        StrCopy( ref l_U370[8], "HT1_P3I", 16 );
                                                        StrCopy( ref l_U370[9], "HT1_P3J", 16 );
                                                        StrCopy( ref l_U370[10], "HT1_P3K", 16 );
                                                        StrCopy( ref l_U370[11], "HT1_P3L", 16 );
                                                        l_U354[0] = 0;
                                                        l_U354[1] = 25000;
                                                        l_U354[2] = 34000;
                                                        l_U354[3] = 45000;
                                                        l_U354[4] = 60000;
                                                        l_U354[5] = 73000;
                                                        l_U354[6] = 85000;
                                                        l_U354[7] = 107000;
                                                        l_U354[8] = 126000;
                                                        l_U354[9] = 140000;
                                                        l_U354[10] = 156000;
                                                        l_U354[11] = 205000;
                                                        l_U367 = 12;
                                                        l_U368 = 1;
                                                        l_U369 = 10;
                                                        sub_14235( 3, l_U167[l_U330], "HELICOPTER_PILOT_3", 0 );
                                                        break;
                                                        case 613:
                                                        StrCopy( ref l_U370[0], "HT1_P1A", 16 );
                                                        StrCopy( ref l_U370[1], "HT1_P1B", 16 );
                                                        StrCopy( ref l_U370[2], "HT1_P1C", 16 );
                                                        StrCopy( ref l_U370[3], "HT1_P1D", 16 );
                                                        StrCopy( ref l_U370[4], "HT1_P1E", 16 );
                                                        StrCopy( ref l_U370[5], "HT1_P1F", 16 );
                                                        StrCopy( ref l_U370[6], "HT1_P1G", 16 );
                                                        StrCopy( ref l_U370[7], "HT1_P1H", 16 );
                                                        StrCopy( ref l_U370[8], "HT1_P1I", 16 );
                                                        StrCopy( ref l_U370[9], "HT1_P1K", 16 );
                                                        StrCopy( ref l_U370[10], "HT1_P1J", 16 );
                                                        StrCopy( ref l_U370[11], "HT1_P1L", 16 );
                                                        l_U354[0] = 0;
                                                        l_U354[1] = 23000;
                                                        l_U354[2] = 63000;
                                                        l_U354[3] = 99000;
                                                        l_U354[4] = 140000;
                                                        l_U354[5] = 186000;
                                                        l_U354[6] = 216000;
                                                        l_U354[7] = 240000;
                                                        l_U354[8] = 253000;
                                                        l_U354[9] = 301000;
                                                        l_U354[10] = 322000;
                                                        l_U354[11] = 365000;
                                                        l_U367 = 12;
                                                        l_U368 = 1;
                                                        l_U369 = 10;
                                                        sub_14235( 1, l_U167[l_U330], "HELICOPTER_PILOT_1", 0 );
                                                        break;
                                                        case 614:
                                                        StrCopy( ref l_U370[0], "HT1_P2A2", 16 );
                                                        StrCopy( ref l_U370[1], "HT1_P2B2", 16 );
                                                        StrCopy( ref l_U370[2], "HT1_P2C2", 16 );
                                                        StrCopy( ref l_U370[3], "HT1_P2D2", 16 );
                                                        StrCopy( ref l_U370[4], "HT1_P2F2", 16 );
                                                        StrCopy( ref l_U370[5], "HT1_P2G2", 16 );
                                                        StrCopy( ref l_U370[6], "HT1_P2H2", 16 );
                                                        StrCopy( ref l_U370[7], "HT1_P2J2", 16 );
                                                        StrCopy( ref l_U370[8], "HT1_P2I2", 16 );
                                                        StrCopy( ref l_U370[9], "HT1_P2L2", 16 );
                                                        l_U354[0] = 0;
                                                        l_U354[1] = 35000;
                                                        l_U354[2] = 52000;
                                                        l_U354[3] = 70000;
                                                        l_U354[4] = 126000;
                                                        l_U354[5] = 149000;
                                                        l_U354[6] = 202000;
                                                        l_U354[7] = 289000;
                                                        l_U354[8] = 335000;
                                                        l_U354[9] = 395000;
                                                        l_U367 = 10;
                                                        l_U368 = 1;
                                                        l_U369 = 8;
                                                        sub_14235( 2, l_U167[l_U330], "HELICOPTER_PILOT_2", 0 );
                                                        break;
                                                        default:
                                                        l_U367 = 0;
                                                        break;
                                                    }
                                                    l_U353 = 0;
                                                    sub_14235( 0, CurrentPlayerChar(), "NIKO", 0 );
                                                    l_U112 = 1;
                                                    l_U104 = 0;
                                                    l_U103 = 3;
                                                }
                                                else
                                                {
                                                    bVar2 = true;
                                                }
                                            }
                                            else
                                            {
                                                bVar2 = true;
                                                GET_GAME_TIMER( ref l_U422 );
                                            }
                                        }
                                        else
                                        {
                                            bVar2 = true;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                else if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
                {
                    TASK_SMART_FLEE_CHAR( l_U167[l_U330], CurrentPlayerChar(), 1000.00000000, -1 );
                    SET_CHAR_KEEP_TASK( l_U167[l_U330], 1 );
                }
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U167[l_U330] );
                for ( l_U332 = 0; l_U332 < 3; l_U332++ )
                {
                    if (l_U130[l_U330][l_U332])
                    {
                        if (NOT (IS_CHAR_INJURED( l_U173[l_U330][l_U332] )))
                        {
                            CLEAR_CHAR_TASKS( l_U173[l_U330][l_U332] );
                            OPEN_SEQUENCE_TASK( ref l_U205 );
                            if (IS_CHAR_IN_ANY_CAR( l_U173[l_U330][l_U332] ))
                            {
                                TASK_LEAVE_ANY_CAR( 0 );
                            }
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 330.90300000, -723.28050000, 3.69200000, 2, -1, 2.00000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 299.57320000, -704.44290000, 3.68960000, 2, -1, 2.00000000 );
                            CLOSE_SEQUENCE_TASK( l_U205 );
                            TASK_PERFORM_SEQUENCE( l_U173[l_U330][l_U332], l_U205 );
                            CLEAR_SEQUENCE_TASK( l_U205 );
                            SET_CHAR_KEEP_TASK( l_U173[l_U330][l_U332], 1 );
                        }
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U173[l_U330][l_U332] );
                        l_U130[l_U330][l_U332] = 1;
                    }
                }
                l_U124[l_U330] = 1;;
            }
        }
        if (NOT (IS_CHAR_DEAD( CurrentPlayerChar() )))
        {
            if (IS_VEH_DRIVEABLE( l_U208[l_U330] ))
            {
                if (IS_CHAR_SITTING_IN_CAR( CurrentPlayerChar(), l_U208[l_U330] ))
                {
                    l_U340 = l_U330;
                    l_U207 = l_U208[l_U330];
                    if (IS_VEH_DRIVEABLE( l_U208[l_U330] ))
                    {
                        FREEZE_CAR_POSITION( l_U208[l_U330], 0 );
                    }
                    l_U103 = 7;
                    bVar2 = false;
                }
            }
        }
    }
    if (bVar2)
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
        if (IS_SCORE_GREATER( CurrentPlayerId(), ProtectedGet(l_U102) - 1 ))
        {
            PRINT_HELP_FOREVER( "HETR_01" );
        }
        else
        {
            PRINT_HELP_FOREVER( "HETR_BROKE" );
        }
    }
    else if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HETR_BROKE" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HETR_01" )))
    {
        CLEAR_HELP();
    }
    return;
}

int sub_13201()
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

void sub_14235(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_14315( "\n PED NUMBER ", uParam0 );
    sub_14355( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_14315(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_14355(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_16977()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    int iVar5;

    iVar5 = 0;
    if (IS_VEH_DRIVEABLE( l_U207 ))
    {
        switch (l_U104)
        {
            case 0:
            CLEAR_PRINTS();
            SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
            l_U162 = 1;
            CLEAR_CHAR_TASKS_IMMEDIATELY( CurrentPlayerChar() );
            SET_NEXT_DESIRED_MOVE_STATE( 2 );
            OPEN_SEQUENCE_TASK( ref l_U205 );
            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U207, -1, 0 );
            CLOSE_SEQUENCE_TASK( l_U205 );
            TASK_PERFORM_SEQUENCE( CurrentPlayerChar(), l_U205 );
            CLEAR_SEQUENCE_TASK( l_U205 );
            GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U329 );
            if ((l_U329 > 6) || (l_U329 <= -1))
            {
                l_U329 = 2;
            }
            l_U104 = 1;
            break;
            case 1:
            if (NOT sub_17203())
            {
                GET_SCRIPT_TASK_STATUS( CurrentPlayerChar(), 29, ref l_U206 );
                if ((sub_18327()) AND (l_U206 == 7))
                {
                    SET_FOLLOW_VEHICLE_CAM_SUBMODE( 0 );
                    SET_FOLLOW_VEHICLE_CAM_OFFSET( 1, l_U319._fU0, l_U319._fU4, l_U319._fU8 );
                    l_U104 = 2;
                }
            }
            else if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                CLEAR_CHAR_TASKS( CurrentPlayerChar() );
                if (NOT (IS_CHAR_IN_ANY_CAR( CurrentPlayerChar() )))
                {
                    CLEAR_CHAR_TASKS( CurrentPlayerChar() );
                }
                if (IS_CHAR_GETTING_IN_TO_A_CAR( CurrentPlayerChar() ))
                {
                    CLEAR_CHAR_TASKS( CurrentPlayerChar() );
                    TASK_LEAVE_ANY_CAR( CurrentPlayerChar() );
                }
                SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
                l_U162 = 0;
                sub_18579();
            }
            l_U118[l_U340] = 0;
            l_U105[l_U340] = 0;
            for ( l_U332 = 0; l_U332 < 3; l_U332++ )
            {
                l_U130[l_U340][l_U332] = 0;
            }
            l_U103 = 2;
            l_U340 = 999999;;
            break;
            case 2:
            if (NOT (IS_CHAR_IN_CAR( CurrentPlayerChar(), l_U207 )))
            {
                CLEAR_CHAR_TASKS( CurrentPlayerChar() );
                WARP_CHAR_INTO_CAR_AS_PASSENGER( CurrentPlayerChar(), l_U207, 0 );
            }
            CLOSE_ALL_CAR_DOORS( l_U207 );
            SET_PLAYER_CAN_DO_DRIVE_BY( CurrentPlayerId(), 0 );
            SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            if (NOT l_U312)
            {
                SET_FOLLOW_VEHICLE_CAM_SUBMODE( 0 );
                SET_FOLLOW_VEHICLE_CAM_OFFSET( 1, l_U319._fU0, l_U319._fU4, l_U319._fU8 );
                BEGIN_CAM_COMMANDS( ref l_U313 );
                GET_GAME_CAM_CHILD( ref l_U311 );
                if (DOES_CAM_EXIST( l_U311 ))
                {
                    GET_CAM_POS( l_U311, ref l_U322._fU0, ref l_U322._fU4, ref l_U322._fU8 );
                    GET_CAM_ROT( l_U311, ref l_U325._fU0, ref l_U325._fU4, ref l_U325._fU8 );
                }
                CREATE_CAM( 14, ref l_U310 );
                SET_CAM_POS( l_U310, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
                SET_CAM_ROT( l_U310, l_U325._fU0, l_U325._fU4, l_U325._fU8 );
                if (IS_VEH_DRIVEABLE( l_U207 ))
                {
                    ATTACH_CAM_TO_VEHICLE( l_U310, l_U207 );
                }
                SET_CAM_ATTACH_OFFSET( l_U310, l_U316._fU0, l_U316._fU4, l_U316._fU8 );
                SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U310, 1 );
                SET_CAM_ACTIVE( l_U310, 1 );
                SET_CAM_PROPAGATE( l_U310, 1 );
                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                if (IS_FOLLOW_VEHICLE_CAM_OFFSET_ACTIVE())
                {
                    SET_FOLLOW_VEHICLE_CAM_OFFSET( 0, 0.00000000, 0.00000000, 0.00000000 );
                }
                SET_FOLLOW_VEHICLE_CAM_SUBMODE( 4 );
                l_U314 = 0;
                l_U315 = 0;
                l_U312 = 1;
                l_U114 = 1;
            }
            if (IS_SCORE_GREATER( CurrentPlayerId(), ProtectedGet(l_U102) - 1 ))
            {
                ADD_SCORE( CurrentPlayerId(), -1 * ProtectedGet(l_U102) );
            }
            l_U112 = 1;
            l_U113 = 1;
            l_U312 = 0;
            l_U114 = 0;
            l_U115 = 0;
            l_U116 = 0;
            l_U117 = 0;
            l_U424[l_U340] = 0;
            l_U163 = 1;
            l_U328 = 4;
            l_U103 = 4;
            break;
        }
    }
    return;
}

int sub_17203()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    vector vVar7;
    int iVar10;
    int iVar11;
    unknown uVar12;
    unknown uVar13;
    vector vVar14;
    unknown uVar17;
    vector vVar18;
    unknown uVar21;
    float fVar22;

    if (IS_CONTROL_PRESSED( 2, 3 ))
    {
        return 0;
    }
    GET_GAME_CAM( ref uVar5 );
    GET_CAM_ROT( uVar5, ref uVar2._fU0, ref uVar2._fU4, ref uVar6 );
    vVar7 = {0.00000000, 1.00000000, 0.00000000};
    vVar7 = {sub_17287( vVar7, 0.00000000, 0.00000000, uVar6 )};
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar10, ref iVar11, ref uVar12, ref uVar13 );
    if ((iVar11 == 0) AND (iVar10 == 0))
    {
        GET_KEYBOARD_MOVE_INPUT( ref iVar10, ref iVar11 );
    }
    uVar2._fU0 = iVar10 / 128.00000000;
    uVar2._fU4 = iVar11 / -128.00000000;
    uVar2._fU8 = 0.00000000;
    if ((VMAG( uVar2 )) < 0.50000000)
    {
        return 0;
    }
    GET_HEADING_FROM_VECTOR_2D( uVar2._fU0, uVar2._fU4, ref uVar17 );
    vVar14 = {0.00000000, 1.00000000, 0.00000000};
    vVar14 = {sub_17287( vVar14, 0.00000000, 0.00000000, uVar6 )};
    vVar14 = {sub_17287( vVar14, 0.00000000, 0.00000000, uVar17 )};
    if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
    {
        GET_CHAR_HEADING( CurrentPlayerChar(), ref uVar21 );
        vVar18 = {0.00000000, 1.00000000, 0.00000000};
        vVar18 = {sub_17287( vVar18, 0.00000000, 0.00000000, uVar21 )};
    }
    GET_ANGLE_BETWEEN_2D_VECTORS( vVar18.x, vVar18.y, vVar14.x, vVar14.y, ref fVar22 );
    if (fVar22 > 60.00000000)
    {
        if (NOT (sub_17914( CurrentPlayerChar() )))
        {
            return 1;
        }
    }
    return 0;
}

void sub_17287(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
    unknown uVar9;
    unknown Result;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;

    Result = {uParam0};
    uVar8 = COS( uParam3._fU0 );
    uVar9 = SIN( uParam3._fU0 );
    uVar13._fU0 = uParam0._fU0;
    uVar13._fU4 = (uVar8 * Result._fU4) - (uVar9 * Result._fU8);
    uVar13._fU8 = (uVar9 * Result._fU4) + (uVar8 * Result._fU8);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU4 );
    uVar9 = SIN( uParam3._fU4 );
    uVar13._fU0 = (uVar8 * Result._fU0) + (uVar9 * Result._fU8);
    uVar13._fU4 = uParam0._fU4;
    uVar13._fU8 = (uVar8 * Result._fU8) - (uVar9 * Result._fU0);
    Result = {uVar13};
    uVar8 = COS( uParam3._fU8 );
    uVar9 = SIN( uParam3._fU8 );
    uVar13._fU0 = (uVar8 * Result._fU0) - (uVar9 * Result._fU4);
    uVar13._fU4 = (uVar9 * Result._fU0) + (uVar8 * Result._fU4);
    uVar13._fU8 = uParam0._fU8;
    Result = {uVar13};
    return Result;
}

int sub_17914(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_GETTING_IN_TO_A_CAR( uParam0 ))
        {
            if (HAVE_ANIMS_LOADED( "VEH@STD" ))
            {
                if (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_open_out_ds" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, "VEH@STD", "d_open_out_ds", ref fVar3 );
                    if (fVar3 > 0.10000000)
                    {
                        return 1;
                    }
                }
                if (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "d_open_out_ps" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( uParam0, "VEH@STD", "d_open_out_ps", ref fVar3 );
                    if (fVar3 > 0.10000000)
                    {
                        return 1;
                    }
                }
                if ((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_in_ps" )) || ((IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_in_jack_ps" )) || (IS_CHAR_PLAYING_ANIM( uParam0, "VEH@STD", "get_in_ds" ))))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_18327()
{
    return sub_18338( 1, 1 );
}

int sub_18338(boolean bParam0, unknown uParam1)
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

void sub_18579()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_19527()
{
    unknown uVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    unknown uVar6;

    sub_19536();
    if (l_U162)
    {
        sub_18327();
    }
    else
    {
        sub_18579();
    }
    if (NOT l_U312)
    {
        BEGIN_CAM_COMMANDS( ref l_U313 );
        GET_GAME_CAM_CHILD( ref l_U311 );
        if (DOES_CAM_EXIST( l_U311 ))
        {
            GET_CAM_POS( l_U311, ref l_U322._fU0, ref l_U322._fU4, ref l_U322._fU8 );
            GET_CAM_ROT( l_U311, ref l_U325._fU0, ref l_U325._fU4, ref l_U325._fU8 );
        }
        CREATE_CAM( 14, ref l_U310 );
        SET_CAM_POS( l_U310, l_U322._fU0, l_U322._fU4, l_U322._fU8 );
        SET_CAM_ROT( l_U310, l_U325._fU0, l_U325._fU4, l_U325._fU8 );
        if (IS_VEH_DRIVEABLE( l_U207 ))
        {
            ATTACH_CAM_TO_VEHICLE( l_U310, l_U207 );
        }
        SET_CAM_ATTACH_OFFSET( l_U310, l_U316._fU0, l_U316._fU4, l_U316._fU8 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U310, 1 );
        SET_CAM_ACTIVE( l_U310, 1 );
        SET_CAM_PROPAGATE( l_U310, 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        if (IS_FOLLOW_VEHICLE_CAM_OFFSET_ACTIVE())
        {
            SET_FOLLOW_VEHICLE_CAM_OFFSET( 0, 0.00000000, 0.00000000, 0.00000000 );
        }
        SET_FOLLOW_VEHICLE_CAM_SUBMODE( 4 );
        l_U314 = 0;
        l_U315 = 0;
        l_U312 = 1;
        l_U114 = 1;
    }
    if (IS_VEH_DRIVEABLE( l_U207 ))
    {
        if ((IS_CHAR_SITTING_IN_CAR( CurrentPlayerChar(), l_U207 )) AND (NOT (IS_CHAR_INJURED( l_U204 ))))
        {
            SET_PLAYER_CAN_DO_DRIVE_BY( CurrentPlayerId(), 0 );
            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U207 ))
            {
                if (NOT sub_20134())
                {
                    if (sub_20174())
                    {
                        if (NOT l_U112)
                        {
                            DO_SCREEN_FADE_OUT( 1000 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            if (sub_20329( l_U430 ))
                            {
                                sub_20513( ref l_U430, 0 );
                            }
                            if (IS_VEH_DRIVEABLE( l_U207 ))
                            {
                                SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_CAR( l_U207 );
                                SET_CAR_COORDINATES( l_U207, l_U217[l_U340]._fU0, l_U217[l_U340]._fU4, l_U217[l_U340]._fU8 );
                                SET_CAR_HEADING( l_U207, l_U233[l_U340] );
                                LOAD_SCENE( l_U217[l_U340]._fU0, l_U217[l_U340]._fU4, l_U217[l_U340]._fU8 );
                            }
                        }
                    }
                    else
                    {
                        l_U112 = 0;
                    }
                }
                else
                {
                    l_U112 = 1;
                }
                GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U328 );
                if ((l_U328 == 4) || (l_U328 == 0))
                {
                    if (l_U312)
                    {
                        if (NOT l_U114)
                        {
                            if (DOES_CAM_EXIST( l_U310 ))
                            {
                                SET_CAM_ACTIVE( l_U310, 1 );
                                SET_CAM_PROPAGATE( l_U310, 1 );
                                ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                            }
                            l_U314 = 0;
                            l_U315 = 0;
                            l_U114 = 1;
                        }
                    }
                }
                else if (l_U312)
                {
                    if (l_U114)
                    {
                        if (DOES_CAM_EXIST( l_U310 ))
                        {
                            SET_CAM_ACTIVE( l_U310, 0 );
                            SET_CAM_PROPAGATE( l_U310, 0 );
                            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                        }
                        l_U114 = 0;
                    }
                }
                if (l_U312)
                {
                    if (NOT l_U115)
                    {
                        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                        PRINT_HELP( "HETR_02" );
                        l_U115 = 1;
                    }
                    else if (l_U114)
                    {
                        if (NOT l_U116)
                        {
                            if ((l_U117) || (NOT IS_HELP_MESSAGE_BEING_DISPLAYED()))
                            {
                                CLEAR_HELP();
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                PRINT_HELP( "HETR_03" );
                                l_U116 = 1;
                            }
                        }
                        else if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U117)
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                PRINT_HELP( "HETR_04" );
                                l_U117 = 1;
                            }
                        }
                    }
                    else
                    {
                        l_U116 = 0;
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            if (NOT l_U117)
                            {
                                ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( 0 );
                                PRINT_HELP( "HETR_04" );
                                l_U117 = 1;
                            }
                        }
                    }
                    if (l_U114)
                    {
                        if (l_U312)
                        {
                            if (IS_VEH_DRIVEABLE( l_U207 ))
                            {
                                GET_CAR_HEADING( l_U207, ref fVar4 );
                                GET_CAR_ROLL( l_U207, ref uVar6 );
                                GET_CAR_PITCH( l_U207, ref fVar5 );
                            }
                            fVar5 += TO_FLOAT( l_U315 );
                            fVar4 += TO_FLOAT( l_U314 );
                            if (DOES_CAM_EXIST( l_U310 ))
                            {
                                SET_CAM_ROT( l_U310, fVar5, uVar6, fVar4 );
                                sub_21426();
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U207 ))
                {
                    if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U207 ))
                    {
                        fVar3 = FIND_TIME_POSITION_IN_RECORDING( l_U207 );
                    }
                }
                if (l_U353 < l_U367)
                {
                    if (fVar3 > l_U354[l_U353])
                    {
                        if (NOT (sub_20329( l_U430 )))
                        {
                            if (NOT IS_MESSAGE_BEING_DISPLAYED())
                            {
                                sub_22461( ref l_U370[l_U353], ref l_U430, 6, 1 );
                                l_U353++;
                                l_U163 = 0;
                            }
                        }
                    }
                    else if (((l_U353 - 1) <= l_U369) AND (l_U353 > l_U368))
                    {
                        if (NOT l_U163)
                        {
                            if (NOT (sub_20329( l_U430 )))
                            {
                                if (NOT IS_MESSAGE_BEING_DISPLAYED())
                                {
                                    if (sub_22461( "HT1_RESP", ref l_U430, 6, 1 ))
                                    {
                                        l_U163 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
                if (LOCATE_CAR_3D( l_U207, l_U217[l_U340]._fU0, l_U217[l_U340]._fU4, l_U217[l_U340]._fU8, 5.00000000, 5.00000000, 5.00000000, 0 ))
                {
                    if (IS_VEH_DRIVEABLE( l_U207 ))
                    {
                        if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U207 ))
                        {
                            if ((FIND_TIME_POSITION_IN_RECORDING( l_U207 )) > 10000)
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U207 );
                            }
                        }
                    }
                }
            }
            else if (NOT (sub_23690( l_U340 )))
            {
                if (sub_20174())
                {
                    if (NOT sub_20134())
                    {
                        if (NOT l_U112)
                        {
                            DO_SCREEN_FADE_OUT( 1000 );
                            while (NOT IS_SCREEN_FADED_OUT())
                            {
                                WAIT( 0 );
                            }
                            if (sub_20329( l_U430 ))
                            {
                                sub_20513( ref l_U430, 0 );
                            }
                            if (IS_VEH_DRIVEABLE( l_U207 ))
                            {
                                SET_CAR_COORDINATES( l_U207, l_U217[l_U340]._fU0, l_U217[l_U340]._fU4, l_U217[l_U340]._fU8 );
                                SET_CAR_HEADING( l_U207, l_U233[l_U340] );
                                LOAD_SCENE( l_U217[l_U340]._fU0, l_U217[l_U340]._fU4, l_U217[l_U340]._fU8 );
                            }
                        }
                    }
                    else
                    {
                        l_U112 = 1;
                    }
                }
                else
                {
                    GET_FOLLOW_VEHICLE_CAM_SUBMODE( ref l_U328 );
                    if ((l_U328 == 4) || (l_U328 == 0))
                    {
                        if (l_U312)
                        {
                            if (NOT l_U114)
                            {
                                if (DOES_CAM_EXIST( l_U310 ))
                                {
                                    SET_CAM_ACTIVE( l_U310, 1 );
                                    SET_CAM_PROPAGATE( l_U310, 1 );
                                    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
                                    l_U314 = 0;
                                    l_U315 = 0;
                                    l_U114 = 1;
                                }
                            }
                        }
                    }
                    else if (l_U312)
                    {
                        if (l_U114)
                        {
                            if (DOES_CAM_EXIST( l_U310 ))
                            {
                                SET_CAM_ACTIVE( l_U310, 0 );
                                SET_CAM_PROPAGATE( l_U310, 0 );
                                ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                                l_U114 = 0;
                            }
                        }
                    }
                    SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U328 );;
                    if (l_U114)
                    {
                        if (l_U312)
                        {
                            if (IS_VEH_DRIVEABLE( l_U207 ))
                            {
                                GET_CAR_HEADING( l_U207, ref fVar4 );
                                GET_CAR_ROLL( l_U207, ref uVar6 );
                                GET_CAR_PITCH( l_U207, ref fVar5 );
                            }
                            fVar5 += TO_FLOAT( l_U315 );
                            fVar4 += TO_FLOAT( l_U314 );
                            if (DOES_CAM_EXIST( l_U310 ))
                            {
                                SET_CAM_ROT( l_U310, fVar5, uVar6, fVar4 );
                                sub_21426();
                            }
                        }
                    }
                }
            }
            else if (IS_VEH_DRIVEABLE( l_U207 ))
            {
                SET_FOLLOW_VEHICLE_CAM_SUBMODE( 2 );
                SET_CAM_BEHIND_PED( CurrentPlayerChar() );
                if (l_U114)
                {
                    if (l_U312)
                    {
                        if (DOES_CAM_EXIST( l_U310 ))
                        {
                            SET_CAM_ACTIVE( l_U310, 0 );
                            SET_CAM_PROPAGATE( l_U310, 0 );
                            DESTROY_CAM( l_U310 );
                        }
                        l_U312 = 0;
                    }
                    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
                }
                END_CAM_COMMANDS( ref l_U313 );
                CLEAR_HELP();
                SET_FOLLOW_VEHICLE_CAM_SUBMODE( 2 );
                SET_GAME_CAM_HEADING( 0.00000000 );
                SET_CAM_BEHIND_PED( CurrentPlayerChar() );
                if (IS_SCREEN_FADED_OUT())
                {
                    LOAD_SCENE( l_U217[l_U340]._fU0, l_U217[l_U340]._fU4, l_U217[l_U340]._fU8 );
                    DO_SCREEN_FADE_IN( 1000 );
                    while (NOT IS_SCREEN_FADED_IN())
                    {
                        WAIT( 0 );
                    }
                }
                l_U103 = 6;
                l_U112 = 1;
                l_U104 = 0;
            };;;
        }
        else
        {
            sub_25487();
        }
    }
    else
    {
        l_U103 = 6;
        l_U112 = 1;
        l_U104 = 0;
    }
    return;
}

void sub_19536()
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

int sub_20134()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_20174()
{
    if (((IS_CONTROL_PRESSED( 2, 98 )) AND (NOT IS_USING_CONTROLLER())) || (((IS_CONTROL_PRESSED( 2, 137 )) AND (NOT IS_USING_CONTROLLER())) || ((IS_CONTROL_PRESSED( 2, 77 )) || (IS_CONTROL_PRESSED( 0, 77 )))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_20329(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if ((g_U8394 == 2) || ((g_U8394 == 1) || (IS_SCRIPTED_CONVERSATION_ONGOING())))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_20441( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_20441( "\n speech is not playing" );
    }
    return 0;
}

void sub_20441(unknown uParam0)
{
    return;
}

void sub_20513(int iParam0, unknown uParam1)
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

void sub_21426()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    float fVar14;
    int iVar15;
    float fVar16;
    float fVar17;
    int iVar18;

    iVar9 = 45;
    iVar10 = 65491;
    iVar11 = 45;
    iVar12 = 65491;
    iVar13 = 2;
    fVar14 = 2.00000000;
    iVar15 = 2;
    fVar16 = 2.00000000;
    fVar17 = 1.00000000 + ((8.00000000 - 1.00000000) * GET_MOUSE_SENSITIVITY());
    iVar18 = ROUND( fVar17 );
    if (DOES_CAM_EXIST( l_U310 ))
    {
        GET_CAM_ROT( l_U310, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    }
    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref uVar5, ref uVar6, ref iVar7, ref iVar8 );
    if ((iVar8 == 0) AND (iVar7 == 0))
    {
        GET_MOUSE_INPUT( ref iVar7, ref iVar8 );
        iVar15 *= iVar18;
        iVar13 *= iVar18;
        fVar16 *= fVar17;
        fVar14 *= fVar17;
    }
    if (iVar8 > 50)
    {
        if (IS_LOOK_INVERTED())
        {
            if (l_U315 < iVar11)
            {
                l_U315 += iVar15;
                uVar2._fU0 += fVar16;
            }
        }
        else if (l_U315 > iVar12)
        {
            l_U315 -= iVar15;
            uVar2._fU0 -= fVar16;
        }
    }
    if (iVar8 < 65486)
    {
        if (IS_LOOK_INVERTED())
        {
            if (l_U315 > iVar12)
            {
                l_U315 -= iVar15;
                uVar2._fU0 -= fVar16;
            }
        }
        else if (l_U315 < iVar11)
        {
            l_U315 += iVar15;
            uVar2._fU0 += fVar16;
        }
    }
    if (iVar7 > 50)
    {
        if (l_U314 > iVar10)
        {
            l_U314 -= iVar13;
            uVar2._fU8 -= fVar14;
        }
    }
    if (iVar7 < 65486)
    {
        if (l_U314 < iVar9)
        {
            l_U314 += iVar13;
            uVar2._fU8 += fVar14;
        }
    }
    if (iVar8 > 110)
    {
        if (IS_LOOK_INVERTED())
        {
            if (l_U315 < iVar11)
            {
                l_U315 += iVar15;
                uVar2._fU0 += fVar16;
            }
        }
        else if (l_U315 > iVar12)
        {
            l_U315 -= iVar15;
            uVar2._fU0 -= fVar16;
        }
    }
    if (iVar8 < 65426)
    {
        if (IS_LOOK_INVERTED())
        {
            if (l_U315 > iVar12)
            {
                l_U315 -= iVar15;
                uVar2._fU0 -= fVar16;
            }
        }
        else if (l_U315 < iVar11)
        {
            l_U315 += iVar15;
            uVar2._fU0 += fVar16;
        }
    }
    if (iVar7 > 110)
    {
        if (l_U314 > iVar10)
        {
            l_U314 -= iVar13;
            uVar2._fU8 -= fVar14;
        }
    }
    if (iVar7 < 65426)
    {
        if (l_U314 < iVar9)
        {
            l_U314 += iVar13;
            uVar2._fU8 += fVar14;
        }
    }
    if (DOES_CAM_EXIST( l_U310 ))
    {
        SET_CAM_ROT( l_U310, uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    }
    return;
}

void sub_22461(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_22482( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_22482(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_22536( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_22536(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_22558( iParam1 )))
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
    sub_23234( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_22558(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_20441( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_20441( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_20441( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_23234(int iParam0, int iParam1)
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

int sub_23690(unknown uParam0)
{
    vector vVar3;
    vector vVar6;
    unknown uVar9;
    vector vVar10;
    unknown uVar13;
    float fVar14;
    unknown uVar15;
    unknown uVar16;

    if (IS_VEH_DRIVEABLE( l_U208[uParam0] ))
    {
        if (NOT l_U424[uParam0])
        {
            FREEZE_CAR_POSITION( l_U208[uParam0], 1 );
            l_U424[uParam0] = 1;
        }
        else if (LOCATE_CAR_3D( l_U208[uParam0], l_U217[uParam0]._fU0, l_U217[uParam0]._fU4, l_U217[uParam0]._fU8, 1.00000000, 1.00000000, 1.00000000, 0 ))
        {
            FREEZE_CAR_POSITION( l_U208[uParam0], 0 );
            SET_CAR_COORDINATES( l_U208[uParam0], l_U217[uParam0]._fU0, l_U217[uParam0]._fU4, l_U217[uParam0]._fU8 );
            return 1;
        }
        else if (NOT (LOCATE_CAR_3D( l_U208[uParam0], l_U217[uParam0]._fU0, l_U217[uParam0]._fU4, l_U217[uParam0]._fU8, 20.00000000, 20.00000000, 20.00000000, 0 )))
        {
            SET_CAR_COORDINATES( l_U208[uParam0], l_U217[uParam0]._fU0, l_U217[uParam0]._fU4, l_U217[uParam0]._fU8 );
        }
        else
        {
            GET_CAR_COORDINATES( l_U208[uParam0], ref vVar3.x, ref vVar3.y, ref vVar3.z );
            vVar6 = {vVar3 - l_U217[uParam0]};
            uVar9 = VMAG( vVar6 );
            vVar10 = {vVar6 / uVar9};
            GET_FRAME_TIME( ref uVar13 );
            vVar3 = {vVar3 - ((vVar10 * uVar13) * 1.00000000)};
            SET_CAR_COORDINATES_NO_OFFSET( l_U208[uParam0], vVar3.x, vVar3.y, vVar3.z );
            GET_CAR_HEADING( l_U208[uParam0], ref fVar14 );
            GET_CAR_ROLL( l_U208[uParam0], ref uVar15 );
            GET_CAR_PITCH( l_U208[uParam0], ref uVar16 );
            if (NOT (fVar14 == l_U233[uParam0]))
            {
                if (((l_U233[uParam0] - fVar14) > -1.00000000) AND ((l_U233[uParam0] - fVar14) < 1.00000000))
                {
                    fVar14 = l_U233[uParam0];
                }
                else if (fVar14 < l_U233[uParam0])
                {
                    if ((l_U233[uParam0] - fVar14) > 180)
                    {
                        fVar14 -= 1.00000000;
                        if (fVar14 < 0.00000000)
                        {
                            fVar14 += 360.00000000;
                        }
                    }
                    else
                    {
                        fVar14 += 1.00000000;
                        if (fVar14 > 360.00000000)
                        {
                            fVar14 -= 360.00000000;
                        }
                    }
                }
                else if ((fVar14 - l_U233[uParam0]) > 180)
                {
                    fVar14 += 1.00000000;
                    if (fVar14 > 360.00000000)
                    {
                        fVar14 -= 360.00000000;
                    }
                }
                else
                {
                    fVar14 -= 1.00000000;
                    if (fVar14 < 0.00000000)
                    {
                        fVar14 += 360.00000000;
                    }
                };;;
                SET_CAR_HEADING( l_U208[uParam0], fVar14 );
            }
        };;;
    }
    return 0;
}

void sub_25487()
{
    CLEAR_HELP();
    if (l_U114)
    {
        if (l_U312)
        {
            if (DOES_CAM_EXIST( l_U310 ))
            {
                SET_CAM_ACTIVE( l_U310, 0 );
                SET_CAM_PROPAGATE( l_U310, 0 );
                DESTROY_CAM( l_U310 );
            }
            l_U312 = 0;
        }
        ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    }
    END_CAM_COMMANDS( ref l_U313 );
    if ((l_U329 < 6) AND (l_U329 > -1))
    {
        SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U329 );
    }
    SET_GAME_CAM_HEADING( 0.00000000 );
    SET_CAM_BEHIND_PED( CurrentPlayerChar() );
    SET_PLAYER_CAN_DO_DRIVE_BY( CurrentPlayerId(), 1 );
    sub_18579();
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 1000 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    l_U118[l_U340] = 0;
    l_U105[l_U340] = 2;
    for ( l_U332 = 0; l_U332 < 3; l_U332++ )
    {
        l_U130[l_U340][l_U332] = 0;
    }
    l_U103 = 2;
    l_U340 = 999999;
    return;
}

void sub_25867()
{
    if (IS_VEH_DRIVEABLE( l_U207 ))
    {
        switch (l_U104)
        {
            case 0:
            SET_CAR_ENGINE_ON( l_U207, 0, 0 );
            CLEAR_PRINTS();
            SET_PLAYER_CONTROL( CurrentPlayerId(), 0 );
            CLEAR_CHAR_TASKS( CurrentPlayerChar() );
            LOCK_CAR_DOORS( l_U207, 1 );
            OPEN_SEQUENCE_TASK( ref l_U205 );
            TASK_PAUSE( 0, 2000 );
            TASK_LEAVE_ANY_CAR( 0 );
            CLOSE_SEQUENCE_TASK( l_U205 );
            TASK_PERFORM_SEQUENCE( CurrentPlayerChar(), l_U205 );
            CLEAR_SEQUENCE_TASK( l_U205 );
            l_U104 = 1;
            break;
            case 1:
            GET_SCRIPT_TASK_STATUS( CurrentPlayerChar(), 29, ref l_U206 );
            if (l_U206 == 7)
            {
                l_U104 = 2;
            }
            break;
            case 2:
            SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U329 );
            SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U329 );
            SET_GAME_CAM_HEADING( 0.00000000 );
            SET_CAM_BEHIND_PED( CurrentPlayerChar() );
            SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
            l_U162 = 0;
            SET_PLAYER_CAN_DO_DRIVE_BY( CurrentPlayerId(), 1 );
            sub_18579();
            CLOSE_ALL_CAR_DOORS( l_U207 );
            switch (l_U333)
            {
                case 610:
                g_U8697 = 1;
                break;
                case 611:
                g_U8698 = 1;
                break;
                case 612:
                g_U8699 = 1;
                break;
                case 613:
                g_U8700 = 1;
                break;
                case 614:
                g_U8701 = 1;
                break;
            }
            if ((g_U8701) AND ((g_U8700) AND ((g_U8699) AND ((g_U8698) AND (g_U8697)))))
            {
                AWARD_ACHIEVEMENT( 22 );
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 267, 1 );
            l_U118[l_U340] = 0;
            l_U105[l_U340] = 0;
            for ( l_U332 = 0; l_U332 < 3; l_U332++ )
            {
                l_U130[l_U340][l_U332] = 0;
            }
            l_U103 = 2;
            l_U340 = 999999;
            break;
        }
    }
    else
    {
        l_U118[l_U340] = 0;
        l_U105[l_U340] = 0;
        for ( l_U332 = 0; l_U332 < 3; l_U332++ )
        {
            l_U130[l_U340][l_U332] = 0;
        }
        l_U103 = 2;
        l_U340 = 999999;
        if (l_U162)
        {
            if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
            {
                SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
                SET_PLAYER_CAN_DO_DRIVE_BY( CurrentPlayerId(), 1 );
                l_U162 = 0;
            }
            sub_18579();
        }
    }
    return;
}

void sub_26649()
{
    if (IS_VEH_DRIVEABLE( l_U207 ))
    {
        if (IS_CHAR_IN_CAR( CurrentPlayerChar(), l_U207 ))
        {
            ;
        }
        else
        {
            l_U103 = 2;
            l_U340 = 999999;
        }
    }
    else
    {
        l_U103 = 2;
        l_U340 = 999999;
    }
    return;
}

void sub_26752()
{
    return;
}

void sub_26774()
{
    return;
}

void sub_26834()
{
    return;
}

void sub_26856()
{
    vector vVar2;
    unknown uVar5;

    if ((IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HETR_BROKE" )) || (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HETR_01" )))
    {
        CLEAR_HELP();
    }
    if (l_U162)
    {
        SET_FOLLOW_VEHICLE_CAM_SUBMODE( l_U329 );
        if (IS_PLAYER_PLAYING( CurrentPlayerId() ))
        {
            SET_PLAYER_CONTROL( CurrentPlayerId(), 1 );
            SET_PLAYER_CAN_DO_DRIVE_BY( CurrentPlayerId(), 1 );
        }
        sub_18579();
        l_U162 = 0;
    }
    for ( l_U330 = 0; l_U330 < 5; l_U330++ )
    {
        if (IS_VEH_DRIVEABLE( l_U208[l_U330] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U167[l_U330] )))
            {
                if (IS_CHAR_IN_CAR( l_U167[l_U330], l_U208[l_U330] ))
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref uVar5 );
                    switch (uVar5)
                    {
                        case 0:
                        vVar2 = {3000.00000000, -800.00000000, 250.00000000};
                        break;
                        case 1:
                        vVar2 = {-3000.00000000, -800.00000000, 250.00000000};
                        break;
                        case 2:
                        vVar2 = {-3000.00000000, 2000.00000000, 250.00000000};
                        break;
                        case 3:
                        vVar2 = {3000.00000000, 2000.00000000, 250.00000000};
                        break;
                        default: break;
                    }
                    TASK_HELI_MISSION( l_U167[l_U330], l_U208[l_U330], 0, 0, vVar2.x, vVar2.y, vVar2.z, 4, 15.00000000, 10, -1, (ROUND( vVar2.z )) + 1, 60 );
                    for ( l_U331 = 0; l_U331 < 3; l_U331++ )
                    {
                        if (NOT (IS_CHAR_INJURED( l_U173[l_U330][l_U331] )))
                        {
                            if (IS_CHAR_IN_CAR( l_U173[l_U330][l_U331], l_U208[l_U330] ))
                            {
                                TASK_STAND_STILL( l_U173[l_U330][l_U331], -2 );
                                SET_CHAR_KEEP_TASK( l_U173[l_U330][l_U331], 1 );
                            }
                        }
                    }
                    SET_CHAR_KEEP_TASK( l_U167[l_U330], 1 );
                }
            }
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U167[l_U330] );
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U208[l_U330] );
        REMOVE_CAR_RECORDING( l_U334[l_U330] );
        for ( l_U331 = 0; l_U331 < 3; l_U331++ )
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U173[l_U330][l_U331] );
        }
    }
    for ( l_U330 = 0; l_U330 < 5; l_U330++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U198[l_U330] );
    }
    for ( l_U330 = 0; l_U330 < 3; l_U330++ )
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U194[l_U330] );
    }
    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U204 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U207 );
    REMOVE_BLIP( l_U215 );
    REMOVE_BLIP( l_U216 );
    CLEAR_SEQUENCE_TASK( l_U205 );
    REMOVE_CAR_RECORDING( l_U333 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U164 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U165 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( l_U166 );
    REMOVE_ANIMS( l_U423 );
    TERMINATE_THIS_SCRIPT();
    return;
}

